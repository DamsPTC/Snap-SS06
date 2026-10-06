/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10911b07c; end: 10911b143; +[SCImageGradientColorsUtils gradientColorsFromImage:shouldFlip:] */

void FUN_10911b07c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x00010bf87fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dd650;
    _objc_alloc(PTR_PTR_1126dd650);
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10911c5b0(puVar3,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10911b144; end: 10911b20b; +[SCImageGradientColorsUtils gradientColorsFromPixelBuffer:shouldFlip:] */

void FUN_10911b144(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x00010bf87fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dd650;
    _objc_alloc(PTR_PTR_1126dd650);
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10911c5b0(puVar3,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10911b20c; end: 10911b2db; +[SCImageGradientColorsUtils resizeImage:newSize:] */

void FUN_10911b20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(param_1,param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10911b2dc;
  puStack_60 = &UNK_110866440;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _objc_retain(param_5);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10911b2dc; end: 10911b2f3;  */

void FUN_10911b2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10911b2f4; end: 10911b363; +[SCImageGradientColorsUtils dominantColorsInImage:clusterCount:] */

void FUN_10911b2f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c13a200(0x4049000000000000,0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010be05aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10911b364; end: 10911b423; +[SCImageGradientColorsUtils dominantColorsInPixelBuffer:clusterCount:] */

void FUN_10911b364(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar1 = param_3;
    _CVPixelBufferGetPixelFormatType();
    lVar2 = param_1;
    if ((int)lVar1 == 0x42475241) {
      func_0x00010c13a340(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((int)lVar1 != 0x34323066) goto LAB_10911b40c;
      func_0x00010c13a360(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    if (lVar2 != 0) {
      _objc_opt_class(param_1);
      func_0x00010be05aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      goto LAB_10911b410;
    }
  }
LAB_10911b40c:
  param_1 = 0;
LAB_10911b410:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10911b424; end: 10911b6a7; +[SCImageGradientColorsUtils resizedImageFromYUVPixelBuffer:] */

void FUN_10911b424(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 **ppuVar6;
  undefined1 ***pppuVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 ***pppuVar14;
  undefined1 ***pppuVar15;
  undefined1 ***pppuVar16;
  undefined *puStack_5fa0;
  undefined8 uStack_5f98;
  code *pcStack_5f90;
  undefined *puStack_5f88;
  undefined *puStack_5f80;
  long lStack_5f78;
  undefined8 **ppuStack_5f70;
  undefined8 **ppuStack_5f68;
  undefined1 **ppuStack_5ef8;
  undefined8 uStack_5ef0;
  undefined8 uStack_5ee8;
  undefined8 uStack_5ee0;
  undefined8 **ppuStack_5ed8;
  undefined8 **ppuStack_5ed0;
  undefined8 **ppuStack_5ec8;
  undefined8 **ppuStack_5ec0;
  undefined8 *apuStack_5eb8 [1250];
  long lStack_37a8;
  undefined4 uStack_3754;
  undefined8 uStack_3750;
  undefined8 uStack_3748;
  undefined8 uStack_3740;
  undefined8 uStack_3738;
  undefined1 **ppuStack_3728;
  undefined8 uStack_3720;
  undefined8 uStack_3718;
  undefined8 uStack_3710;
  undefined1 *puStack_3708;
  undefined8 uStack_3700;
  undefined8 uStack_36f8;
  undefined8 uStack_36f0;
  undefined1 *puStack_36e8;
  undefined8 uStack_36e0;
  undefined8 uStack_36d8;
  undefined8 uStack_36d0;
  ulong uStack_36c8;
  ulong uStack_36c0;
  ulong uStack_36b8;
  ulong uStack_36b0;
  ulong uStack_36a8;
  ulong uStack_36a0;
  ulong uStack_3698;
  ulong uStack_3690;
  undefined8 *apuStack_3686 [1250];
  undefined1 auStack_f76 [1250];
  undefined1 auStack_a94 [2500];
  undefined8 *apuStack_d0 [17];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CVPixelBufferLockBaseAddress(param_3,1);
  uVar1 = param_3;
  _CVPixelBufferGetBaseAddressOfPlane(param_3,0);
  uVar2 = param_3;
  uStack_36a8 = uVar1;
  _CVPixelBufferGetHeight();
  uVar1 = param_3;
  uStack_36a0 = uVar2;
  _CVPixelBufferGetWidth();
  uVar3 = param_3;
  uStack_3698 = uVar1;
  _CVPixelBufferGetBytesPerRowOfPlane(param_3,0);
  uVar4 = param_3;
  uStack_3690 = uVar3;
  _CVPixelBufferGetBaseAddressOfPlane(param_3,1);
  uStack_36c0 = uVar2 >> 1;
  uStack_36b8 = uVar1 >> 1;
  uVar1 = param_3;
  uStack_36c8 = uVar4;
  _CVPixelBufferGetBytesPerRowOfPlane(param_3,1);
  puStack_36e8 = auStack_a94;
  uStack_36d8 = 0x32;
  uStack_36e0 = 0x32;
  uStack_36d0 = 0x32;
  puStack_3708 = auStack_f76;
  uStack_36f8 = 0x19;
  uStack_3700 = 0x19;
  uStack_36f0 = 0x32;
  puVar5 = &uStack_36a8;
  pppuVar14 = (undefined1 ***)0x0;
  uStack_36b0 = uVar1;
  _vImageScale_Planar8(puVar5,&puStack_36e8,0,0);
  if (puVar5 == (ulong *)0x0) {
    puVar5 = &uStack_36c8;
    pppuVar14 = (undefined1 ***)0x0;
    _vImageScale_CbCr8(puVar5,&puStack_3708,0,0);
    _CVPixelBufferUnlockBaseAddress(param_3,1);
    pppuVar16 = (undefined1 ***)0x0;
    if (puVar5 == (ulong *)0x0) {
      ppuStack_3728 = (undefined1 **)apuStack_3686;
      uStack_3718 = 0x32;
      uStack_3720 = 0x32;
      uStack_3710 = 200;
      uStack_3748 = 0xff000000ff;
      uStack_3750 = 0x8000000000;
      uStack_3738 = 0xff;
      uStack_3740 = 0x1000000ff;
      lVar9 = *(long *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850;
      pppuVar14 = (undefined1 ***)apuStack_d0;
      _vImageConvert_YpCbCrToARGB_GenerateConversion(lVar9,&uStack_3750,pppuVar14,4,0,0);
      if (lVar9 == 0) {
        uStack_3754 = 0x30201;
        ppuVar6 = &puStack_36e8;
        pppuVar14 = &ppuStack_3728;
        _vImageConvert_420Yp8_CbCr8ToARGB8888
                  (ppuVar6,&puStack_3708,pppuVar14,apuStack_d0,&uStack_3754,0xff,0x10);
        if (ppuVar6 == (undefined1 **)0x0) {
          _CGColorSpaceCreateDeviceRGB();
          pppuVar16 = (undefined1 ***)apuStack_3686;
          pppuVar14 = (undefined1 ***)0x32;
          _CGBitmapContextCreate(pppuVar16,0x32,0x32,8,200,ppuVar6,0x4001);
          pppuVar7 = pppuVar16;
          _CGBitmapContextCreateImage();
          _CGContextRelease(pppuVar16);
          _CGColorSpaceRelease(ppuVar6);
          if (pppuVar7 != (undefined1 ***)0x0) {
            pppuVar16 = (undefined1 ***)PTR__OBJC_CLASS___UIImage_1126aea68;
            pppuVar14 = pppuVar7;
            func_0x00010bfe9240();
            _objc_retainAutoreleasedReturnValue();
            _CGImageRelease(pppuVar7);
            goto LAB_10911b574;
          }
        }
      }
      goto LAB_10911b540;
    }
  }
  else {
    _CVPixelBufferUnlockBaseAddress(param_3,1);
LAB_10911b540:
    pppuVar16 = (undefined1 ***)0x0;
  }
LAB_10911b574:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_37a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CVPixelBufferLockBaseAddress(pppuVar14,1);
  pppuVar16 = pppuVar14;
  _CVPixelBufferGetBaseAddress();
  pppuVar7 = pppuVar14;
  ppuStack_5ed8 = pppuVar16;
  _CVPixelBufferGetHeight();
  pppuVar16 = pppuVar14;
  ppuStack_5ed0 = pppuVar7;
  _CVPixelBufferGetWidth();
  pppuVar7 = pppuVar14;
  ppuStack_5ec8 = pppuVar16;
  _CVPixelBufferGetBytesPerRow();
  ppuStack_5ef8 = (undefined1 **)apuStack_5eb8;
  uStack_5ee8 = 0x32;
  uStack_5ef0 = 0x32;
  uStack_5ee0 = 200;
  pppuVar8 = &ppuStack_5ed8;
  pppuVar15 = (undefined1 ***)0x0;
  ppuStack_5ec0 = pppuVar7;
  _vImageScale_ARGB8888(pppuVar8,&ppuStack_5ef8,0,0);
  _CVPixelBufferUnlockBaseAddress(pppuVar14,1);
  if (pppuVar8 == (undefined8 ***)0x0) {
    _CGColorSpaceCreateDeviceRGB();
    pppuVar16 = (undefined1 ***)apuStack_5eb8;
    pppuVar15 = (undefined1 ***)0x32;
    _CGBitmapContextCreate(pppuVar16,0x32,0x32,8,200,pppuVar14,0x2002);
    pppuVar7 = pppuVar16;
    _CGBitmapContextCreateImage();
    _CGContextRelease(pppuVar16);
    _CGColorSpaceRelease(pppuVar14);
    if (pppuVar7 == (undefined1 ***)0x0) goto LAB_10911b76c;
    pppuVar16 = (undefined1 ***)PTR__OBJC_CLASS___UIImage_1126aea68;
    pppuVar15 = pppuVar7;
    func_0x00010bfe9240();
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(pppuVar7);
  }
  else {
LAB_10911b76c:
    pppuVar7 = pppuVar14;
    pppuVar16 = (undefined1 ***)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_37a8) {
    ___stack_chk_fail();
    _objc_retainAutorelease(pppuVar15);
    func_0x00010bdc1020();
    if (pppuVar15 != (undefined1 ***)0x0) {
      pppuVar14 = pppuVar15;
      _CGImageGetWidth();
      _CGImageGetHeight();
      pppuVar16 = pppuVar15;
      _CGColorSpaceCreateDeviceRGB();
      if (pppuVar16 != (undefined1 ***)0x0) {
        lVar9 = 0;
        _CGBitmapContextCreate(0,pppuVar14,pppuVar15,8,(long)pppuVar14 << 2,pppuVar16,1);
        if (lVar9 != 0) {
          _CGContextDrawImage(0,0,(double)pppuVar14,(double)pppuVar15);
          lVar10 = lVar9;
          _CGBitmapContextGetData();
          if (lVar10 != 0) {
            puVar11 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf64b80();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            _objc_retainAutorelease();
            func_0x00010c0d3c60();
            uVar13 = 0;
            _dispatch_get_global_queue(0,0);
            _objc_retainAutoreleasedReturnValue();
            puStack_5fa0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_5f98 = 0xc0000000;
            pcStack_5f90 = FUN_10911b9e0;
            puStack_5f88 = &UNK_110add170;
            puStack_5f80 = puVar12;
            lStack_5f78 = lVar10;
            ppuStack_5f70 = pppuVar14;
            ppuStack_5f68 = pppuVar15;
            _dispatch_apply((long)pppuVar15 * (long)pppuVar14,uVar13,&puStack_5fa0);
            _objc_release(uVar13);
            _CGContextRelease(lVar9);
            _CGColorSpaceRelease(pppuVar16);
            func_0x00010be46680(pppuVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            pppuVar16 = pppuVar7;
            goto _objc_autoreleaseReturnValue;
          }
          _CGContextRelease(lVar9);
        }
        _CGColorSpaceRelease(pppuVar16);
      }
    }
    pppuVar16 = (undefined1 ***)0x0;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar16);
  return;
}



/* Entry: 10911b6a8; end: 10911b81f; +[SCImageGradientColorsUtils resizedImageFromBGRAPixelBuffer:] */

void FUN_10911b6a8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_2840;
  undefined8 uStack_2838;
  code *pcStack_2830;
  undefined *puStack_2828;
  undefined *puStack_2820;
  long lStack_2818;
  undefined *puStack_2810;
  undefined *puStack_2808;
  undefined1 *puStack_2798;
  undefined8 uStack_2790;
  undefined8 uStack_2788;
  undefined8 uStack_2780;
  undefined *puStack_2778;
  undefined *puStack_2770;
  undefined *puStack_2768;
  undefined *puStack_2760;
  undefined1 auStack_2758 [10000];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CVPixelBufferLockBaseAddress(param_3,1);
  puVar9 = param_3;
  _CVPixelBufferGetBaseAddress();
  puVar10 = param_3;
  puStack_2778 = puVar9;
  _CVPixelBufferGetHeight();
  puVar9 = param_3;
  puStack_2770 = puVar10;
  _CVPixelBufferGetWidth();
  puVar10 = param_3;
  puStack_2768 = puVar9;
  _CVPixelBufferGetBytesPerRow();
  puStack_2798 = auStack_2758;
  uStack_2788 = 0x32;
  uStack_2790 = 0x32;
  uStack_2780 = 200;
  ppuVar1 = &puStack_2778;
  puVar9 = (undefined *)0x0;
  puStack_2760 = puVar10;
  _vImageScale_ARGB8888(ppuVar1,&puStack_2798,0,0);
  _CVPixelBufferUnlockBaseAddress(param_3,1);
  if (ppuVar1 == (undefined **)0x0) {
    _CGColorSpaceCreateDeviceRGB();
    puVar10 = auStack_2758;
    puVar9 = (undefined *)0x32;
    _CGBitmapContextCreate(puVar10,0x32,0x32,8,200,param_3,0x2002);
    puVar2 = puVar10;
    _CGBitmapContextCreateImage();
    _CGContextRelease(puVar10);
    _CGColorSpaceRelease(param_3);
    if (puVar2 == (undefined *)0x0) goto LAB_10911b76c;
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar9 = puVar2;
    func_0x00010bfe9240();
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(puVar2);
  }
  else {
LAB_10911b76c:
    puVar2 = param_3;
    puVar10 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retainAutorelease(puVar9);
    func_0x00010bdc1020();
    if (puVar9 != (undefined *)0x0) {
      puVar10 = puVar9;
      _CGImageGetWidth();
      _CGImageGetHeight();
      puVar3 = puVar9;
      _CGColorSpaceCreateDeviceRGB();
      if (puVar3 != (undefined *)0x0) {
        lVar4 = 0;
        _CGBitmapContextCreate(0,puVar10,puVar9,8,(long)puVar10 << 2,puVar3,1);
        if (lVar4 != 0) {
          _CGContextDrawImage(0,0,(double)puVar10,(double)puVar9);
          lVar5 = lVar4;
          _CGBitmapContextGetData();
          if (lVar5 != 0) {
            puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf64b80();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            _objc_retainAutorelease();
            func_0x00010c0d3c60();
            uVar8 = 0;
            _dispatch_get_global_queue(0,0);
            _objc_retainAutoreleasedReturnValue();
            puStack_2840 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_2838 = 0xc0000000;
            pcStack_2830 = FUN_10911b9e0;
            puStack_2828 = &UNK_110add170;
            puStack_2820 = puVar7;
            lStack_2818 = lVar5;
            puStack_2810 = puVar10;
            puStack_2808 = puVar9;
            _dispatch_apply((long)puVar9 * (long)puVar10,uVar8,&puStack_2840);
            _objc_release(uVar8);
            _CGContextRelease(lVar4);
            _CGColorSpaceRelease(puVar3);
            func_0x00010be46680(puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar10 = puVar2;
            goto _objc_autoreleaseReturnValue;
          }
          _CGContextRelease(lVar4);
        }
        _CGColorSpaceRelease(puVar3);
      }
    }
    puVar10 = (undefined *)0x0;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10911b820; end: 10911b9df; +[SCImageGradientColorsUtils _dominantColorsInImage:clusterCount:] */

void FUN_10911b820(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  if (param_3 != 0) {
    uVar1 = param_3;
    _CGImageGetWidth();
    _CGImageGetHeight();
    uVar2 = param_3;
    _CGColorSpaceCreateDeviceRGB();
    if (uVar2 != 0) {
      lVar3 = 0;
      _CGBitmapContextCreate(0,uVar1,param_3,8,uVar1 << 2,uVar2,1);
      if (lVar3 != 0) {
        _CGContextDrawImage(0,0,(double)uVar1,(double)param_3);
        lVar4 = lVar3;
        _CGBitmapContextGetData();
        if (lVar4 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
          func_0x00010bf64b80();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          uVar7 = 0;
          _dispatch_get_global_queue(0,0);
          _objc_retainAutoreleasedReturnValue();
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc0000000;
          pcStack_90 = FUN_10911b9e0;
          puStack_88 = &UNK_110add170;
          puStack_80 = puVar6;
          lStack_78 = lVar4;
          uStack_70 = uVar1;
          uStack_68 = param_3;
          _dispatch_apply(param_3 * uVar1,uVar7,&puStack_a0);
          _objc_release(uVar7);
          _CGContextRelease(lVar3);
          _CGColorSpaceRelease(uVar2);
          func_0x00010be46680(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          goto LAB_10911b9bc;
        }
        _CGContextRelease(lVar3);
      }
      _CGColorSpaceRelease(uVar2);
    }
  }
  param_1 = 0;
LAB_10911b9bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10911b9e0; end: 10911ba5b;  */

void FUN_10911b9e0(long param_1,ulong param_2)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  dVar5 = (double)NEON_ucvtf((ulong)*(byte *)(lVar4 + param_2 * 4));
  pfVar1 = (float *)(lVar3 + param_2 * 0x10);
  *pfVar1 = (float)(dVar5 / 255.0);
  uVar2 = param_2 << 2 | 1;
  dVar5 = (double)NEON_ucvtf((ulong)*(byte *)(lVar4 + uVar2));
  *(float *)(lVar3 + uVar2 * 4) = (float)(dVar5 / 255.0);
  uVar2 = param_2 << 2 | 2;
  dVar5 = (double)NEON_ucvtf((ulong)*(byte *)(lVar4 + uVar2));
  *(float *)(lVar3 + uVar2 * 4) = (float)(dVar5 / 255.0);
  uVar2 = 0;
  if (*(ulong *)(param_1 + 0x30) != 0) {
    uVar2 = param_2 / *(ulong *)(param_1 + 0x30);
  }
  pfVar1[3] = (float)uVar2 / (float)*(ulong *)(param_1 + 0x38);
  return;
}



/* Entry: 10911ba5c; end: 10911bd9b; +[SCImageGradientColorsUtils _kMeansClusteringOnColors:totalPixels:clusterCount:] */

void FUN_10911ba5c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  float *pfVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  byte abStack_80 [16];
  
  plVar4 = (long *)(param_5 << 3);
  _malloc();
  lVar5 = param_4 << 2;
  _malloc();
  lVar6 = param_5 << 2;
  _malloc();
  plVar3 = plVar4;
  for (lVar9 = param_5; lVar9 != 0; lVar9 = lVar9 + -1) {
    puVar7 = (undefined8 *)0x10;
    _malloc();
    *plVar3 = (long)puVar7;
    uVar19 = param_4;
    _arc4random_uniform();
    puVar2 = (undefined8 *)(param_3 + (uVar19 & 0xffffffff) * 0x10);
    uVar8 = *puVar2;
    puVar7[1] = puVar2[1];
    *puVar7 = uVar8;
    plVar3 = plVar3 + 1;
  }
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  pbVar16 = abStack_80;
  abStack_80[0] = 1;
  uVar8 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  do {
    *pbVar16 = 0;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10911bd9c;
    puStack_c8 = &UNK_1108997e8;
    puStack_c0 = &uStack_98;
    lStack_b8 = param_5;
    lStack_b0 = param_3;
    plStack_a8 = plVar4;
    lStack_a0 = lVar5;
    _dispatch_apply(param_4,uVar8,&puStack_e0);
    _objc_release(uVar8);
    lVar9 = param_5;
    _calloc(param_5,8);
    lVar10 = param_5;
    _calloc(param_5,4);
    if (param_4 != 0) {
      uVar19 = 0;
      lVar17 = param_3;
      do {
        lVar18 = (long)*(int *)(lVar5 + uVar19 * 4);
        lVar11 = *(long *)(lVar9 + lVar18 * 8);
        if (lVar11 == 0) {
          lVar11 = 4;
          _calloc(4,4);
          *(long *)(lVar9 + lVar18 * 8) = lVar11;
        }
        lVar14 = 0;
        do {
          *(float *)(lVar11 + lVar14) = *(float *)(lVar17 + lVar14) + *(float *)(lVar11 + lVar14);
          lVar14 = lVar14 + 4;
        } while (lVar14 != 0x10);
        *(int *)(lVar10 + lVar18 * 4) = *(int *)(lVar10 + lVar18 * 4) + 1;
        uVar19 = uVar19 + 1;
        lVar17 = lVar17 + 0x10;
      } while (uVar19 != param_4);
    }
    if (param_5 != 0) {
      lVar17 = 0;
      do {
        uVar1 = *(uint *)(lVar10 + lVar17 * 4);
        lVar11 = *(long *)(lVar9 + lVar17 * 8);
        if (0 < (int)uVar1) {
          lVar18 = 0;
          lVar14 = plVar4[lVar17];
          do {
            *(float *)(lVar14 + lVar18) = *(float *)(lVar11 + lVar18) / (float)uVar1;
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0x10);
          *(undefined4 *)(lVar6 + lVar17 * 4) = *(undefined4 *)(lVar14 + 0xc);
        }
        _free();
        lVar17 = lVar17 + 1;
      } while (lVar17 != param_5);
    }
    _free(lVar9);
    _free(lVar10);
    pbVar16 = (byte *)(puStack_90 + 3);
  } while ((*pbVar16 & 1) != 0);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  plVar3 = plVar4;
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  for (; PTR__OBJC_CLASS___UIColor_1126aea70 = puVar13, param_5 != 0; param_5 = param_5 + -1) {
    pfVar15 = (float *)*plVar3;
    func_0x00010bf41620((double)*pfVar15,(double)pfVar15[1],(double)pfVar15[2],0x3ff0000000000000,
                        puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _free(*plVar3);
    _objc_release(puVar13);
    plVar3 = plVar3 + 1;
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  }
  _free(plVar4);
  _free(lVar5);
  _objc_retain(puVar12);
  func_0x00010c246ba0(puVar12);
  _free(lVar6);
  _objc_release(puVar12);
  __Block_object_dispose(&uStack_98,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10911bd9c; end: 10911be3f;  */

void FUN_10911bd9c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    iVar2 = -1;
  }
  else {
    lVar3 = 0;
    fVar4 = 3.4028235e+38;
    iVar1 = -1;
    do {
      lVar5 = 0;
      fVar6 = 0.0;
      do {
        fVar7 = *(float *)(*(long *)(param_1 + 0x30) + param_2 * 0x10 + lVar5) -
                *(float *)(*(long *)(*(long *)(param_1 + 0x38) + lVar3 * 8) + lVar5);
        fVar6 = fVar7 * fVar7 + fVar6;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      iVar2 = (int)lVar3;
      fVar7 = SQRT(fVar6);
      if (fVar4 <= SQRT(fVar6)) {
        iVar2 = iVar1;
        fVar7 = fVar4;
      }
      fVar4 = fVar7;
      lVar3 = lVar3 + 1;
      iVar1 = iVar2;
    } while (lVar3 != *(long *)(param_1 + 0x28));
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (*(int *)(lVar3 + param_2 * 4) != iVar2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *(int *)(lVar3 + param_2 * 4) = iVar2;
  }
  return;
}



/* Entry: 10911be40; end: 10911beb7;  */

ulong FUN_10911be40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfecde0();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfecde0();
  _objc_release(param_3);
  fVar4 = *(float *)(*(long *)(param_1 + 0x28) + lVar3 * 4);
  fVar5 = *(float *)(*(long *)(param_1 + 0x28) + lVar1 * 4);
  uVar2 = (ulong)(fVar5 < fVar4);
  if (fVar4 < fVar5) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 10911beb8; end: 10911bf77;  */

long FUN_10911beb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetWidth();
  lVar2 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetHeight();
  lVar3 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetDataProvider();
  _CGDataProviderCopyData();
  if (lVar3 == 0) {
    param_1 = 0;
  }
  else {
    lVar4 = lVar3;
    _CFDataGetBytePtr();
    lVar5 = param_1;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetBytesPerRow();
    lStack_60 = lVar4;
    lStack_58 = lVar2;
    lStack_50 = lVar1;
    lStack_48 = lVar5;
    func_0x00010bdea2c0(param_1,param_2,&lStack_60,lVar1,lVar2);
    _CFRelease(lVar3);
  }
  return param_1;
}



/* Entry: 10911bf78; end: 10911c0ab;  */

long FUN_10911bf78(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetWidth();
  lVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetHeight();
  lVar2 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetDataProvider();
  _CGDataProviderCopyData();
  lVar6 = 0;
  if (lVar2 != 0) {
    lVar6 = lVar2;
    _CFDataGetBytePtr();
    lVar3 = param_3;
    lStack_70 = lVar6;
    lStack_68 = lVar1;
    lStack_60 = lVar4;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetBytesPerRow();
    lVar6 = (long)param_1 * 4;
    lVar4 = lVar6 * (long)param_2;
    lStack_58 = lVar3;
    _calloc(lVar4,1);
    if (lVar4 == 0) {
      _CFRelease(lVar2);
      lVar6 = 0;
    }
    else {
      plVar5 = &lStack_70;
      lStack_90 = lVar4;
      lStack_88 = (long)param_2;
      lStack_80 = (long)param_1;
      lStack_78 = lVar6;
      _vImageScale_ARGB8888(plVar5,&lStack_90,0,0x20);
      _CFRelease(lVar2);
      lVar6 = 0;
      if (plVar5 == (long *)0x0) {
        func_0x00010bdea2c0(param_3);
        lVar6 = param_3;
      }
      _free(lVar4);
    }
  }
  return lVar6;
}



/* Entry: 10911c0ac; end: 10911c2ff;  */

undefined * FUN_10911c0ac(double param_1,double param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  ulong uStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  byte bStack_244;
  byte bStack_243;
  byte bStack_242;
  byte bStack_241;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [136];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 <= 0.0) {
    uVar13 = param_3;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetWidth();
  }
  else {
    uVar13 = (ulong)param_1;
  }
  if (param_2 <= 0.0) {
    uVar15 = param_3;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetHeight();
  }
  else {
    uVar15 = (ulong)param_2;
  }
  uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
  uStack_a0 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
  puStack_88 = PTR____kCFBooleanTrue_11034ab68;
  puStack_80 = PTR____kCFBooleanTrue_11034ab68;
  puStack_78 = PTR____kCFBooleanTrue_11034ab68;
  uStack_98 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
  uStack_90 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puStack_b0 = (undefined *)0x0;
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar11 = 0x42475241;
  uVar9 = uVar15;
  puVar3 = puVar10;
  _CVPixelBufferCreate(uVar4,uVar13);
  puVar16 = (undefined *)0x0;
  if (((int)uVar4 == 0) && (puStack_b0 != (undefined *)0x0)) {
    _CVPixelBufferLockBaseAddress(puStack_b0,0);
    puVar16 = puStack_b0;
    _CVPixelBufferGetBaseAddress();
    puVar3 = puStack_b0;
    _CVPixelBufferGetBytesPerRow();
    puVar5 = puVar3;
    _CGColorSpaceCreateDeviceRGB();
    uVar11 = 8;
    uVar9 = uVar15;
    _CGBitmapContextCreate(puVar16,uVar13);
    if (puVar16 == (undefined *)0x0) {
      _CGColorSpaceRelease(puVar5);
      _CVPixelBufferUnlockBaseAddress(puStack_b0,0);
      _CVPixelBufferRelease(puStack_b0);
      puVar16 = (undefined *)0x0;
    }
    else {
      _objc_retainAutorelease(param_3);
      func_0x00010bdc1020();
      _CGContextDrawImage(0,0,(double)uVar13,(double)uVar15,puVar16,param_3);
      _CGContextRelease(puVar16);
      _CGColorSpaceRelease(puVar5);
      _CVPixelBufferUnlockBaseAddress(puStack_b0,0);
      puVar16 = puStack_b0;
    }
  }
  _objc_release();
  uVar1 = (uint)puVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar16;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10911c300;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d8 = (undefined *)0x0;
  puStack_138 = PTR____kCFBooleanTrue_11034ab68;
  uStack_148 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
  uStack_140 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_130 = puVar10;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetBitmapInfo();
  iVar2 = (int)*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar4 = uVar11;
  puVar10 = puVar3;
  _CVPixelBufferCreate();
  puVar5 = (undefined *)0x0;
  if (iVar2 == 0 && puStack_1d8 != (undefined *)0x0) {
    _CVPixelBufferLockBaseAddress(puStack_1d8,0);
    puVar10 = puStack_1d8;
    _CVPixelBufferGetBaseAddressOfPlane(puStack_1d8,0);
    puVar5 = puStack_1d8;
    _CVPixelBufferGetBytesPerRowOfPlane(puStack_1d8,0);
    puVar6 = puStack_1d8;
    _CVPixelBufferGetBaseAddressOfPlane(puStack_1d8,1);
    puVar7 = puStack_1d8;
    _CVPixelBufferGetBytesPerRowOfPlane(puStack_1d8,1);
    uStack_238 = 0xff000000ff;
    uStack_240 = 0x8000000000;
    uStack_228 = 0xff;
    uStack_230 = 0x1000000ff;
    if ((uVar1 & 0x1f) < 6) {
      uVar13 = (ulong)((uVar1 & 0x1f) << 3);
      bStack_244 = (byte)(0x300030003 >> (uVar13 & 0x3f));
      bStack_243 = (byte)(0x30203020302 >> (uVar13 & 0x3f));
      bStack_241 = (byte)(0x10001000100 >> (uVar13 & 0x3f));
      bStack_242 = (byte)(0x20102010201 >> (uVar13 & 0x3f));
    }
    else {
      bStack_241 = 0;
      bStack_243 = 2;
      bStack_244 = 3;
      bStack_242 = 1;
    }
    if ((uVar1 & 0x7000) != 0x2000) {
      bStack_244 = bStack_244 ^ 3;
      bStack_243 = bStack_243 ^ 3;
      bStack_242 = bStack_242 ^ 3;
      bStack_241 = bStack_241 ^ 3;
    }
    puStack_218 = puVar6;
    puStack_210 = puVar3;
    uStack_208 = uVar11;
    puStack_200 = puVar7;
    puStack_1f8 = puVar10;
    puStack_1f0 = puVar3;
    uStack_1e8 = uVar11;
    puStack_1e0 = puVar5;
    _vImageConvert_ARGBToYpCbCr_GenerateConversion
              (*(undefined8 *)PTR__kvImage_ARGBToYpCbCrMatrix_ITU_R_601_4_110347848,&uStack_240,
               auStack_1d0,0,4,0);
    _vImageConvert_ARGB8888To420Yp8_CbCr8
              (uVar9,&puStack_1f8,&puStack_218,auStack_1d0,&bStack_244,0x10);
    puVar10 = *(undefined **)PTR__kCVImageBufferYCbCrMatrix_ITU_R_601_4_11034a360;
    _CVBufferSetAttachment
              (puStack_1d8,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,puVar10,1);
    uVar4 = 0;
    _CVPixelBufferUnlockBaseAddress(puStack_1d8);
    puVar5 = puStack_1d8;
  }
  puVar6 = puVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_290;
  pcStack_258 = FUN_10911c5b0;
  puStack_280 = puVar3;
  uStack_278 = uVar11;
  puStack_270 = puVar16;
  uStack_268 = uVar9;
  ppuStack_260 = &puStack_c0;
  _objc_retain(uVar4);
  _objc_retain(puVar10);
  puVar14 = (undefined1 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    puStack_288 = PTR_PTR_112700728;
    puStack_290 = puVar6;
    _objc_msgSendSuper2(&puStack_290,PTR_s_init_1125d9248);
    puVar14 = (undefined1 *)ppuVar8;
    if (ppuVar8 != (undefined **)0x0) {
      uVar11 = uVar4;
      func_0x00010bf51e00();
      uVar12 = *(undefined8 *)((long)ppuVar8 + 8);
      *(undefined8 *)((long)ppuVar8 + 8) = uVar11;
      _objc_release(uVar12);
      puVar3 = puVar10;
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)((long)ppuVar8 + 0x10);
      *(undefined **)((long)ppuVar8 + 0x10) = puVar3;
      _objc_release(uVar11);
    }
  }
  _objc_release(puVar10);
  _objc_release(uVar4);
  return puVar14;
}



/* Entry: 10911c300; end: 10911c5af;  */

undefined1 *
FUN_10911c300(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  byte bStack_194;
  byte bStack_193;
  byte bStack_192;
  byte bStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [136];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = (undefined1 *)0x0;
  puStack_88 = PTR____kCFBooleanTrue_11034ab68;
  uStack_98 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
  uStack_90 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetBitmapInfo();
  iVar1 = (int)*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar10 = param_4;
  uVar11 = param_5;
  _CVPixelBufferCreate();
  puVar4 = (undefined1 *)0x0;
  if (iVar1 == 0 && puStack_128 != (undefined1 *)0x0) {
    _CVPixelBufferLockBaseAddress(puStack_128,0);
    puVar4 = puStack_128;
    _CVPixelBufferGetBaseAddressOfPlane(puStack_128,0);
    puVar5 = puStack_128;
    _CVPixelBufferGetBytesPerRowOfPlane(puStack_128,0);
    puVar6 = puStack_128;
    _CVPixelBufferGetBaseAddressOfPlane(puStack_128,1);
    puVar7 = puStack_128;
    _CVPixelBufferGetBytesPerRowOfPlane(puStack_128,1);
    uStack_188 = 0xff000000ff;
    uStack_190 = 0x8000000000;
    uStack_178 = 0xff;
    uStack_180 = 0x1000000ff;
    if ((param_1 & 0x1f) < 6) {
      uVar13 = (ulong)((param_1 & 0x1f) << 3);
      bStack_194 = (byte)(0x300030003 >> (uVar13 & 0x3f));
      bStack_193 = (byte)(0x30203020302 >> (uVar13 & 0x3f));
      bStack_191 = (byte)(0x10001000100 >> (uVar13 & 0x3f));
      bStack_192 = (byte)(0x20102010201 >> (uVar13 & 0x3f));
    }
    else {
      bStack_191 = 0;
      bStack_193 = 2;
      bStack_194 = 3;
      bStack_192 = 1;
    }
    if ((param_1 & 0x7000) != 0x2000) {
      bStack_194 = bStack_194 ^ 3;
      bStack_193 = bStack_193 ^ 3;
      bStack_192 = bStack_192 ^ 3;
      bStack_191 = bStack_191 ^ 3;
    }
    puStack_168 = puVar6;
    uStack_160 = param_5;
    uStack_158 = param_4;
    puStack_150 = puVar7;
    puStack_148 = puVar4;
    uStack_140 = param_5;
    uStack_138 = param_4;
    puStack_130 = puVar5;
    _vImageConvert_ARGBToYpCbCr_GenerateConversion
              (*(undefined8 *)PTR__kvImage_ARGBToYpCbCrMatrix_ITU_R_601_4_110347848,&uStack_190,
               auStack_120,0,4,0);
    _vImageConvert_ARGB8888To420Yp8_CbCr8
              (param_3,&puStack_148,&puStack_168,auStack_120,&bStack_194,0x10);
    uVar11 = *(undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_601_4_11034a360;
    _CVBufferSetAttachment
              (puStack_128,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,uVar11,1);
    uVar10 = 0;
    _CVPixelBufferUnlockBaseAddress(puStack_128);
    puVar4 = puStack_128;
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_1e0;
  pcStack_1a8 = FUN_10911c5b0;
  uStack_1d0 = param_5;
  uStack_1c8 = param_4;
  puStack_1c0 = puVar3;
  uStack_1b8 = param_3;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  puVar4 = (undefined1 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puStack_1d8 = PTR_PTR_112700728;
    puStack_1e0 = puVar2;
    _objc_msgSendSuper2(&puStack_1e0,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)ppuVar8;
    if (ppuVar8 != (undefined **)0x0) {
      uVar9 = uVar10;
      func_0x00010bf51e00();
      uVar12 = *(undefined8 *)((long)ppuVar8 + 8);
      *(undefined8 *)((long)ppuVar8 + 8) = uVar9;
      _objc_release(uVar12);
      uVar9 = uVar11;
      func_0x00010bf51e00();
      uVar12 = *(undefined8 *)((long)ppuVar8 + 0x10);
      *(undefined8 *)((long)ppuVar8 + 0x10) = uVar9;
      _objc_release(uVar12);
    }
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  return puVar4;
}



/* Entry: 10911c5b0; end: 10911c65f;  */

undefined1 * FUN_10911c5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112700728;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10911c660; end: 10911c683; -[SCImageGradientColors copyWithZone:] */

undefined8 FUN_10911c660(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10911c684; end: 10911c6b3; -[SCImageGradientColors .cxx_destruct] */

void FUN_10911c684(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10911c6b4; end: 10911c74f;  */

void FUN_10911c6b4(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = &UNK_10dfb7251;
  if (param_1 == 0) {
    puVar1 = &UNK_10dfb667c;
  }
  uVar2 = 0xa1d;
  if (param_1 == 0) {
    uVar2 = 0xbd5;
  }
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0082a0(puVar3,param_2,puVar4,*(undefined8 *)PTR__kUTTypeMPEG4_11034b1e8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10911c750; end: 10911c883;  */

void FUN_10911c750(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      lVar7 = 0;
LAB_10911c838:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
        ___stack_chk_fail();
        if (lVar6 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(long *)(lVar6 + 8);
        }
        _objc_retain(lVar4);
        puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        func_0x00010bfaea40(lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(lVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      lVar7 = *(long *)(lVar8 * 8);
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(lVar7 + 8);
      }
      if (lVar5 == param_2) {
        _objc_retain(lVar7);
        goto LAB_10911c838;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10911c884; end: 10911c93f;  */

void FUN_10911c884(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfaea40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10911c940; end: 10911c95f;  */

bool FUN_10911c940(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
  }
  return lVar1 == *(long *)(param_1 + 0x20);
}



/* Entry: 10911c960; end: 10911cb4b;  */

void FUN_10911c960(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10911c884();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf4b900();
        _objc_release(puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(puVar2);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10911cb4c;
  puStack_160 = puVar4;
  puStack_158 = puVar2;
  puStack_150 = puVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_retain();
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_178 = 0;
    _objc_release(0);
    _objc_retain(0);
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x28);
    _objc_retain(lVar6);
    if (lVar6 == 0) {
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      lVar6 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_178,lVar6);
    }
    _objc_release(lVar6);
    lVar6 = *(long *)(lVar3 + 0x20);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      func_0x00010bdc1140(&uStack_190,lVar6);
      goto LAB_10911cbf4;
    }
  }
  lVar6 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
LAB_10911cbf4:
  _objc_release(lVar6);
  uStack_1a8 = uStack_170;
  uStack_1b0 = uStack_178;
  uStack_1a0 = uStack_168;
  uStack_1c8 = uStack_188;
  uStack_1d0 = uStack_190;
  uStack_1c0 = uStack_180;
  _CMTimeAdd(extraout_x8,&uStack_1b0,&uStack_1d0);
  _objc_release(lVar3);
  return;
}



/* Entry: 10911cb4c; end: 10911cc47;  */

void FUN_10911cb4c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    _objc_retain();
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    _objc_release(0);
    _objc_retain(0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar1);
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      lVar1 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_48,lVar1);
    }
    _objc_release(lVar1);
    lVar1 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      func_0x00010bdc1140(&uStack_60,lVar1);
      goto LAB_10911cbf4;
    }
  }
  lVar1 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
LAB_10911cbf4:
  _objc_release(lVar1);
  uStack_78 = uStack_40;
  uStack_80 = uStack_48;
  uStack_70 = uStack_38;
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  _CMTimeAdd(param_1,&uStack_80,&uStack_a0);
  _objc_release(param_2);
  return;
}



/* Entry: 10911cc48; end: 10911cc8b;  */

void FUN_10911cc48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
  }
  _objc_retain(uVar1);
  FUN_10911cb4c(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10911cc8c; end: 10911cde3;  */

void FUN_10911cc8c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x23;
  undefined *unaff_x24;
  long lVar12;
  undefined8 uVar13;
  long unaff_x25;
  undefined **unaff_x26;
  undefined8 uVar14;
  long unaff_x27;
  undefined8 uVar15;
  long unaff_x28;
  long lVar16;
  undefined8 uVar17;
  long lStack_4a0;
  undefined1 *puStack_498;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined *puStack_430;
  undefined *puStack_3a8;
  long lStack_3a0;
  long lStack_390;
  long lStack_388;
  undefined **ppuStack_380;
  long lStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined *puStack_350;
  long lStack_348;
  undefined1 **ppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f0 [48];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10911c884(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar17 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar17;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar10 = param_2;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar11 = *plStack_100;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(param_2);
        }
        FUN_10911cc48(&uStack_128,*(undefined8 *)(lStack_108 + unaff_x23 * 8));
        uStack_138 = uStack_120;
        uStack_140 = uStack_128;
        uStack_130 = uStack_118;
        uStack_158 = param_1[1];
        uStack_160 = *param_1;
        uStack_150 = param_1[2];
        puVar7 = &uStack_140;
        _CMTimeCompare(puVar7,&uStack_160);
        if (0 < (int)puVar7) {
          param_1[1] = uStack_120;
          *param_1 = uStack_128;
          param_1[2] = uStack_118;
        }
        unaff_x23 = unaff_x23 + 1;
      } while (lVar10 != unaff_x23);
      lVar10 = param_2;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10911cde4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined8 *)0x1;
  lVar10 = param_2;
  FUN_10911c750();
  _objc_retainAutoreleasedReturnValue();
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar10 + 0x20);
  }
  _objc_retain(lVar11);
  lVar9 = lVar11;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x25 = *plStack_280;
    unaff_x26 = &PTR_PTR_1126af000;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_280 != unaff_x25) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x28 = *(long *)(lStack_288 + unaff_x27 * 8);
        if (unaff_x28 == 0) {
          _objc_retain(0);
          uStack_2a0 = 0;
          uStack_298 = 0;
          uStack_2a8 = 0;
          _objc_release(0);
          _objc_retain(0);
LAB_10911cf28:
          lVar12 = 0;
          uStack_2c0 = 0;
          uStack_2b8 = 0;
          uStack_2b0 = 0;
        }
        else {
          lVar12 = *(long *)(unaff_x28 + 0x18);
          _objc_retain(lVar12);
          if (lVar12 == 0) {
            uStack_2a8 = 0;
            uStack_2a0 = 0;
            uStack_298 = 0;
          }
          else {
            func_0x00010bdc1140(&uStack_2a8,lVar12);
          }
          _objc_release(lVar12);
          lVar12 = *(long *)(unaff_x28 + 0x20);
          _objc_retain(lVar12);
          if (lVar12 == 0) goto LAB_10911cf28;
          func_0x00010bdc1140(&uStack_2c0,lVar12);
        }
        _objc_release(lVar12);
        unaff_x24 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uStack_308 = uStack_2a0;
        uStack_310 = uStack_2a8;
        uStack_300 = uStack_298;
        uStack_328 = uStack_2b8;
        uStack_330 = uStack_2c0;
        uStack_320 = uStack_2b0;
        puVar7 = &uStack_330;
        _CMTimeRangeMake(auStack_2f0,&uStack_310);
        func_0x00010c297240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(unaff_x24);
        unaff_x27 = unaff_x27 + 1;
      } while (lVar9 != unaff_x27);
      lVar9 = lVar11;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar9 != 0);
  }
  _objc_release(lVar11);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(lVar10);
  _objc_release(puVar1);
  lVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
    ___stack_chk_fail();
    uStack_338 = 0x10911d038;
    lStack_3a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_390 = unaff_x28;
    lStack_388 = unaff_x27;
    ppuStack_380 = unaff_x26;
    lStack_378 = unaff_x25;
    puStack_370 = unaff_x24;
    lStack_368 = unaff_x23;
    puStack_360 = puVar2;
    lStack_358 = lVar10;
    puStack_350 = puVar1;
    lStack_348 = param_2;
    ppuStack_340 = &puStack_170;
    _objc_retain(puVar7);
    FUN_10911c750(lVar11,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined8 *)0x0) {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lStack_488 = 0;
      plStack_480 = (long *)0x0;
      lStack_4a0 = lVar11;
      puStack_498 = (undefined1 *)puVar7;
      if (lVar11 == 0) goto LAB_10911d47c;
      lVar10 = *(long *)(lVar11 + 0x20);
      goto LAB_10911d218;
    }
    ppuVar3 = (undefined **)PTR_PTR_1126bf698;
    func_0x00010bf0b9a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR_PTR_1126af000;
    uStack_448 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_450 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_440 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf6a0;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    FUN_10911cc48(&uStack_450,lVar11);
    func_0x00010c297200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b7425e0(0x3ff0000000000000,puVar4,ppuVar3,0,puVar2,puVar1,puVar2,0,0,0);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126bf6a8;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_3a8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b742360(puVar1,0,3,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    while( true ) {
      _objc_release(puVar2);
      _objc_release(ppuVar3);
      puVar2 = PTR_PTR_1126bf6b0;
      _objc_alloc(PTR_PTR_1126bf6b0);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_438 = lVar11;
      puStack_430 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b742210(puVar2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(lVar11);
      _objc_release(puVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a0) break;
      ___stack_chk_fail();
LAB_10911d47c:
      lVar10 = 0;
LAB_10911d218:
      _objc_retain(lVar10);
      lVar11 = lVar10;
      func_0x00010bf52a60();
      if (lVar11 != 0) {
        lVar9 = *plStack_480;
        do {
          lVar12 = 0;
          do {
            if (*plStack_480 != lVar9) {
              _objc_enumerationMutation(lVar10);
            }
            lVar16 = *(long *)(lStack_488 + lVar12 * 8);
            puVar1 = PTR_PTR_1126bf6a0;
            _objc_alloc(PTR_PTR_1126bf6a0);
            if (lVar16 == 0) {
              _objc_retain(0);
              _objc_retain(0);
              _objc_retain(0);
              uVar15 = 0;
              uVar13 = 0;
              uVar14 = 0;
              uVar17 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar16 + 8);
              _objc_retain(uVar13);
              uVar14 = *(undefined8 *)(lVar16 + 0x18);
              _objc_retain(uVar14);
              uVar15 = *(undefined8 *)(lVar16 + 0x20);
              _objc_retain(uVar15);
              uVar17 = *(undefined8 *)(lVar16 + 0x28);
            }
            _objc_retain(uVar17);
            func_0x00010b7425e0(0x3ff0000000000000,puVar1,uVar13,0,uVar14,uVar15,uVar17,0,0,0);
            _objc_release(uVar17);
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar13);
            func_0x00010befa120(ppuVar8);
            _objc_release(puVar1);
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
          lVar11 = lVar10;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lVar10);
      puVar1 = PTR_PTR_1126bf6a8;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b742360(puVar1,0,2,puVar2,ppuVar8);
      lVar11 = lStack_4a0;
      ppuVar3 = ppuVar8;
      puVar7 = (undefined8 *)puStack_498;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10911cde4; end: 10911d6fb;  */

void FUN_10911cde4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  long lVar12;
  undefined8 uVar13;
  long unaff_x25;
  undefined **unaff_x26;
  undefined8 uVar14;
  long unaff_x27;
  undefined8 uVar15;
  long unaff_x28;
  long lVar16;
  undefined8 uVar17;
  long lStack_340;
  undefined1 *puStack_338;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_248;
  long lStack_240;
  long lStack_230;
  long lStack_228;
  undefined **ppuStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined8 *)0x1;
  lVar10 = param_1;
  FUN_10911c750();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar10 + 0x20);
  }
  _objc_retain(lVar11);
  lVar9 = lVar11;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_PTR_1126af000;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x28 = *(long *)(lStack_128 + unaff_x27 * 8);
        if (unaff_x28 == 0) {
          _objc_retain(0);
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_148 = 0;
          _objc_release(0);
          _objc_retain(0);
LAB_10911cf28:
          lVar12 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
        }
        else {
          lVar12 = *(long *)(unaff_x28 + 0x18);
          _objc_retain(lVar12);
          if (lVar12 == 0) {
            uStack_148 = 0;
            uStack_140 = 0;
            uStack_138 = 0;
          }
          else {
            func_0x00010bdc1140(&uStack_148,lVar12);
          }
          _objc_release(lVar12);
          lVar12 = *(long *)(unaff_x28 + 0x20);
          _objc_retain(lVar12);
          if (lVar12 == 0) goto LAB_10911cf28;
          func_0x00010bdc1140(&uStack_160,lVar12);
        }
        _objc_release(lVar12);
        unaff_x24 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uStack_1a8 = uStack_140;
        uStack_1b0 = uStack_148;
        uStack_1a0 = uStack_138;
        uStack_1c8 = uStack_158;
        uStack_1d0 = uStack_160;
        uStack_1c0 = uStack_150;
        puVar7 = &uStack_1d0;
        _CMTimeRangeMake(auStack_190,&uStack_1b0);
        func_0x00010c297240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(unaff_x24);
        unaff_x27 = unaff_x27 + 1;
      } while (lVar9 != unaff_x27);
      lVar9 = lVar11;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar9 != 0);
  }
  _objc_release(lVar11);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(lVar10);
  _objc_release(puVar1);
  lVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_1d8 = 0x10911d038;
    lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_230 = unaff_x28;
    lStack_228 = unaff_x27;
    ppuStack_220 = unaff_x26;
    lStack_218 = unaff_x25;
    puStack_210 = unaff_x24;
    uStack_208 = unaff_x23;
    puStack_200 = puVar2;
    lStack_1f8 = lVar10;
    puStack_1f0 = puVar1;
    lStack_1e8 = param_1;
    puStack_1e0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    FUN_10911c750(lVar11,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined8 *)0x0) {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lStack_328 = 0;
      plStack_320 = (long *)0x0;
      lStack_340 = lVar11;
      puStack_338 = (undefined1 *)puVar7;
      if (lVar11 == 0) goto LAB_10911d47c;
      lVar10 = *(long *)(lVar11 + 0x20);
      goto LAB_10911d218;
    }
    ppuVar3 = (undefined **)PTR_PTR_1126bf698;
    func_0x00010bf0b9a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR_PTR_1126af000;
    uStack_2e8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_2f0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_2e0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf6a0;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    FUN_10911cc48(&uStack_2f0,lVar11);
    func_0x00010c297200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b7425e0(0x3ff0000000000000,puVar4,ppuVar3,0,puVar2,puVar1,puVar2,0,0,0);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126bf6a8;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_248 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b742360(puVar1,0,3,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    while( true ) {
      _objc_release(puVar2);
      _objc_release(ppuVar3);
      puVar2 = PTR_PTR_1126bf6b0;
      _objc_alloc(PTR_PTR_1126bf6b0);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_2d8 = lVar11;
      puStack_2d0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b742210(puVar2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(lVar11);
      _objc_release(puVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) break;
      ___stack_chk_fail();
LAB_10911d47c:
      lVar10 = 0;
LAB_10911d218:
      _objc_retain(lVar10);
      lVar11 = lVar10;
      func_0x00010bf52a60();
      if (lVar11 != 0) {
        lVar9 = *plStack_320;
        do {
          lVar12 = 0;
          do {
            if (*plStack_320 != lVar9) {
              _objc_enumerationMutation(lVar10);
            }
            lVar16 = *(long *)(lStack_328 + lVar12 * 8);
            puVar1 = PTR_PTR_1126bf6a0;
            _objc_alloc(PTR_PTR_1126bf6a0);
            if (lVar16 == 0) {
              _objc_retain(0);
              _objc_retain(0);
              _objc_retain(0);
              uVar15 = 0;
              uVar13 = 0;
              uVar14 = 0;
              uVar17 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar16 + 8);
              _objc_retain(uVar13);
              uVar14 = *(undefined8 *)(lVar16 + 0x18);
              _objc_retain(uVar14);
              uVar15 = *(undefined8 *)(lVar16 + 0x20);
              _objc_retain(uVar15);
              uVar17 = *(undefined8 *)(lVar16 + 0x28);
            }
            _objc_retain(uVar17);
            func_0x00010b7425e0(0x3ff0000000000000,puVar1,uVar13,0,uVar14,uVar15,uVar17,0,0,0);
            _objc_release(uVar17);
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar13);
            func_0x00010befa120(ppuVar8);
            _objc_release(puVar1);
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
          lVar11 = lVar10;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lVar10);
      puVar1 = PTR_PTR_1126bf6a8;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b742360(puVar1,0,2,puVar2,ppuVar8);
      lVar11 = lStack_340;
      ppuVar3 = ppuVar8;
      puVar7 = (undefined8 *)puStack_338;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10911d6fc; end: 10911d75b;  */

void FUN_10911d6fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_30 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_20 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  FUN_10911d75c(param_1,0,&uStack_30,param_2,&uStack_50,3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10911d75c; end: 10911d9c7;  */

void FUN_10911d75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3810000000;
  pcStack_a0 = "";
  uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_98 = uVar6;
  uStack_90 = uVar7;
  uStack_88 = uVar5;
  _objc_opt_new();
  do {
    uStack_c8 = puStack_b0[5];
    uStack_d0 = puStack_b0[4];
    uStack_c0 = puStack_b0[6];
    uStack_e8 = param_5[1];
    uStack_f0 = *param_5;
    uStack_e0 = param_5[2];
    puVar2 = &uStack_d0;
    _CMTimeCompare(puVar2,&uStack_f0);
    if (-1 < (int)puVar2) break;
    _objc_retain(param_2);
    _objc_retain(puVar1);
    func_0x00010bf97e80(param_1);
    if (param_4 == 0) {
      _objc_release(puVar1);
      _objc_release(param_2);
      break;
    }
    uStack_c8 = puStack_b0[5];
    uStack_d0 = puStack_b0[4];
    uStack_c0 = puStack_b0[6];
    puVar2 = &uStack_d0;
    uStack_f0 = uVar6;
    uStack_e8 = uVar7;
    uStack_e0 = uVar5;
    _CMTimeCompare(puVar2,&uStack_f0);
    _objc_release(puVar1);
    _objc_release(param_2);
  } while ((int)puVar2 != 0);
  puVar3 = PTR_PTR_1126bf6a8;
  _objc_alloc(PTR_PTR_1126bf6a8);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b742360(puVar3,0,param_6,puVar4,puVar1);
  _objc_release(puVar4);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10911d9c8; end: 10911db9b;  */

void FUN_10911d9c8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
  }
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeCompare(&uStack_80,&uStack_a0);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar4);
  _objc_release(lVar4);
  if (lVar4 == 0) goto LAB_10911daa4;
  if (param_1 == 0) goto LAB_10911db94;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  while( true ) {
    _objc_retain(uVar5);
    func_0x00010c1d0640(puVar1);
    _objc_release(uVar5);
LAB_10911daa4:
    if (param_1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    _objc_retain(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    uStack_70 = param_4[2];
    uStack_98 = param_3[1];
    uStack_a0 = *param_3;
    uStack_90 = param_3[2];
    puVar3 = puVar2;
    FUN_10911d75c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
    ___stack_chk_fail();
LAB_10911db94:
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10911db9c; end: 10911de43;  */

void FUN_10911db9c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126bf6a8;
  _objc_alloc(PTR_PTR_1126bf6a8);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b742360(puVar3,1,1,puVar4,param_1);
  _objc_release(puVar4);
  func_0x00010befa120(puVar2);
  if (param_2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_1);
    lVar5 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        iVar10 = (int)*(undefined8 *)(lVar11 * 8);
        FUN_10911f88c();
        if (iVar10 != 0) {
          func_0x00010befa120(puVar4);
        }
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar6 = puVar4;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126bf6a8;
      _objc_alloc(PTR_PTR_1126bf6a8);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b742360(puVar6,0,2,puVar7,puVar4);
      _objc_release(puVar7);
      func_0x00010befa120(puVar2);
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
  }
  else {
    func_0x00010befa120(puVar2);
  }
  lVar5 = param_3;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010befa160(puVar2);
  }
  puVar4 = PTR_PTR_1126bf6b0;
  _objc_alloc(PTR_PTR_1126bf6b0);
  puVar6 = puVar2;
  func_0x00010b742210();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(param_1);
    _objc_opt_new();
    if (param_1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 8);
    }
    _objc_retain(uVar9);
    _objc_release(param_1);
    _objc_retain(puVar2);
    _objc_retain(puVar6);
    func_0x00010bf97e80(uVar9);
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126bf6b0;
    _objc_alloc(PTR_PTR_1126bf6b0);
    func_0x00010b742210();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10911de44; end: 10911df47;  */

void FUN_10911de44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_1);
  _objc_opt_new();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  _objc_retain(puVar1);
  _objc_retain(param_2);
  func_0x00010bf97e80(uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126bf6b0;
  _objc_alloc(PTR_PTR_1126bf6b0);
  func_0x00010b742210();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10911df48; end: 10911e58f;  */

undefined * FUN_10911df48(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_1b8;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  puVar6 = param_2;
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
LAB_10911dfc0:
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    if (*(long *)(param_2 + 0x10) == 2) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar7 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar7);
      lVar14 = lVar7;
      func_0x00010bf52a60();
      if (lVar14 != 0) {
        lVar12 = *plStack_120;
        do {
          lVar13 = 0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(lVar7);
            }
            iVar11 = (int)*(undefined8 *)(lStack_128 + lVar13 * 8);
            FUN_10911f88c();
            if (iVar11 != 0) {
              func_0x00010befa120(puVar1);
            }
            lVar13 = lVar13 + 1;
          } while (lVar14 != lVar13);
          lVar14 = lVar7;
          func_0x00010bf52a60();
        } while (lVar14 != 0);
      }
      _objc_release(lVar7);
      puVar2 = puVar1;
      func_0x00010bf529e0();
      if (puVar2 != (undefined *)0x0) {
        puVar2 = PTR_PTR_1126bf6a8;
        _objc_alloc();
        uStack_140 = 2;
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = (undefined *)0x0;
        func_0x00010b742360(puVar2,0,2,puVar16,puVar1);
        _objc_release(puVar16);
        goto LAB_10911e148;
      }
    }
    else {
      if (*(long *)(param_2 + 0x10) != 1) goto LAB_10911dfc0;
      puVar6 = *(undefined **)(param_2 + 0x18);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        uStack_140 = 1;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar6);
        puVar1 = puVar6;
      }
      _objc_release(puVar6);
      puVar2 = PTR_PTR_1126bf6a8;
      _objc_alloc();
      puVar6 = *(undefined **)(param_2 + 8);
      func_0x00010b742360();
LAB_10911e148:
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  uStack_148 = 0x10911e1a8;
  puVar8 = &uStack_300;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar6);
  _objc_retain(puVar6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  _objc_retain(puVar6);
  puVar2 = puVar6;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar14 = *plStack_2f0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_2f0 != lVar14) {
          _objc_enumerationMutation(puVar6);
        }
        puVar4 = PTR_PTR_1126b60f8;
        puVar3 = puVar6;
        func_0x00010c0e00e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f2b40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar16 = puVar16 + 1;
      } while (puVar2 != puVar16);
      puVar2 = puVar6;
      func_0x00010bf52a60();
      puVar8 = (undefined8 *)0x0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  func_0x00010c246ba0(puVar1);
  _objc_release(puVar6);
  puVar16 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  _objc_opt_new();
  uStack_398 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
  puVar2 = puVar16;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  puStack_330 = (undefined8 *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puStack_390 = puVar2;
  _objc_retain(puVar1);
  puVar4 = puVar1;
  func_0x00010bf52a60();
  puVar2 = PTR__kCMTimeZero_110348670;
  if (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined8 *)*puStack_330;
    puStack_3a0 = puVar16;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if ((undefined8 *)*puStack_330 != puVar8) {
          _objc_enumerationMutation(puVar1);
        }
        puVar15 = *(undefined **)(lStack_338 + (long)puVar16 * 8);
        puVar3 = puVar15;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_240,puVar3);
        }
        _objc_release(puVar3);
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar15;
        func_0x00010c067fc0();
        _objc_release(puVar15);
        puVar15 = param_2;
        func_0x00010bf529e0();
        if (puVar15 <= puVar3) {
LAB_10911e518:
          _objc_release(puVar1);
          puVar16 = (undefined *)0x0;
          puVar2 = puStack_3a0;
          goto LAB_10911e528;
        }
        puVar3 = param_2;
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar3;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar15;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        uStack_358 = *(undefined8 *)(puVar2 + 8);
        uStack_360 = *(undefined8 *)puVar2;
        uStack_350 = *(undefined8 *)(puVar2 + 0x10);
        uStack_378 = uStack_220;
        uStack_380 = uStack_228;
        uStack_370 = uStack_218;
        _CMTimeRangeMake(&uStack_300,&uStack_360,&uStack_380);
        lStack_388 = 0;
        uStack_358 = uStack_238;
        uStack_360 = uStack_240;
        uStack_350 = uStack_230;
        func_0x00010c067160(puStack_390);
        lVar14 = lStack_388;
        _objc_release(puVar5);
        _objc_release(puVar3);
        if (lVar14 != 0) goto LAB_10911e518;
        puVar16 = puVar16 + 1;
      } while (puVar4 != puVar16);
      puVar4 = puVar1;
      func_0x00010bf52a60();
      puVar16 = puStack_3a0;
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_retain(puVar16);
  puVar2 = puVar16;
LAB_10911e528:
  _objc_release(puStack_390);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return puVar16;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_10911e590;
  puStack_3e0 = puVar16;
  puStack_3d8 = puVar2;
  puStack_3d0 = puVar8;
  puStack_3c8 = puVar1;
  puStack_3c0 = puVar6;
  puStack_3b8 = param_2;
  ppuStack_3b0 = &puStack_150;
  _objc_retain();
  puVar6 = puVar4;
  FUN_10911c884(puVar4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x1) {
    if (puVar4 == (undefined *)0x0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(puVar4 + 8);
    }
    _objc_retain(lVar14);
    lVar7 = lVar14;
    func_0x00010bf529e0();
    _objc_release(lVar14);
    if (lVar7 == 1) {
      puVar1 = puVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(puVar1 + 0x20);
      }
      _objc_retain(lVar14);
      lVar7 = lVar14;
      func_0x00010bf529e0();
      _objc_release(lVar14);
      if (lVar7 == 1) {
        puStack_3f8 = &uStack_400;
        uStack_400 = 0;
        uStack_3f0 = 0x2020000000;
        uStack_3e8 = 0;
        if (puVar1 == (undefined *)0x0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(puVar1 + 0x20);
        }
        _objc_retain(lVar14);
        lVar7 = lVar14;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        if (lVar7 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar7 + 8);
        }
        _objc_retain(uVar10);
        _objc_retain(lVar7);
        func_0x00010c0bc940(uVar10);
        _objc_release(uVar10);
        uVar9 = (uint)*(byte *)(puStack_3f8 + 3);
        _objc_release(lVar7);
        _objc_release(lVar7);
        __Block_object_dispose(&uStack_400,8);
      }
      else {
        uVar9 = 0;
      }
      _objc_release(puVar1);
      goto LAB_10911e730;
    }
  }
  uVar9 = 0;
LAB_10911e730:
  _objc_release(puVar6);
  _objc_release(puVar4);
  return (undefined *)(ulong)(uVar9 & 1);
}



/* Entry: 10911e590; end: 10911e793;  */

byte FUN_10911e590(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_10911c884(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    if (param_1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
    }
    _objc_retain(lVar3);
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar4 == 1) {
      lVar3 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar3 + 0x20);
      }
      _objc_retain(lVar4);
      lVar2 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar2 == 1) {
        puStack_58 = &uStack_60;
        uStack_60 = 0;
        uStack_50 = 0x2020000000;
        uStack_48 = 0;
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(long *)(lVar3 + 0x20);
        }
        _objc_retain(lVar4);
        lVar2 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar2 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar2 + 8);
        }
        _objc_retain(uVar6);
        _objc_retain(lVar2);
        func_0x00010c0bc940(uVar6);
        _objc_release(uVar6);
        bVar5 = *(byte *)(puStack_58 + 3);
        _objc_release(lVar2);
        _objc_release(lVar2);
        __Block_object_dispose(&uStack_60,8);
      }
      else {
        bVar5 = 0;
      }
      _objc_release(lVar3);
      goto LAB_10911e730;
    }
  }
  bVar5 = 0;
LAB_10911e730:
  _objc_release(lVar1);
  _objc_release(param_1);
  return bVar5 & 1;
}



/* Entry: 10911e794; end: 10911e79b;  */

void FUN_10911e794(void)

{
  return;
}



/* Entry: 10911e79c; end: 10911e847;  */

void FUN_10911e79c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_retain(0);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    _objc_retain(lVar2);
    if (lVar2 != 0) {
      func_0x00010bdc1140(&uStack_48,lVar2);
      goto LAB_10911e7f0;
    }
  }
  lVar2 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
LAB_10911e7f0:
  uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar1 = &uStack_48;
  _CMTimeCompare(puVar1,&uStack_60);
  _objc_release(lVar2);
  if ((int)puVar1 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 10911e848; end: 10911ea33;  */

long FUN_10911e848(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 1;
  FUN_10911c884();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar9 = 0;
  if (lVar3 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        if (*(long *)(lVar9 * 8) == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(*(long *)(lVar9 * 8) + 0x20);
        }
        _objc_retain(lVar7);
        lVar4 = lVar7;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar4 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar7);
            }
            if (*(long *)(lVar10 * 8) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(long *)(*(long *)(lVar10 * 8) + 0x48);
            }
            _objc_retain(lVar8);
            _objc_release(lVar8);
            if (lVar8 != 0) {
              _objc_release(lVar7);
              lVar9 = 1;
              goto LAB_10911e9e4;
            }
            lVar10 = lVar10 + 1;
          } while (lVar4 != lVar10);
          lVar4 = lVar7;
          func_0x00010bf52a60();
        }
        _objc_release(lVar7);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar3);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar9 = 0;
  }
LAB_10911e9e4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return lVar9;
  }
  ___stack_chk_fail();
  if (param_1 == 0 && lVar5 == 0) {
    return 1;
  }
  _objc_retain(lVar5);
  FUN_10911eac8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  FUN_10911eac8(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c071ae0(param_1);
  _objc_release(lVar9);
  _objc_release(param_1);
  return lVar5;
}



/* Entry: 10911ea34; end: 10911eac7;  */

long FUN_10911ea34(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    return 1;
  }
  _objc_retain(param_2);
  FUN_10911eac8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  FUN_10911eac8(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010c071ae0(param_1);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10911eac8; end: 10911eebb;  */

undefined * FUN_10911eac8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x22;
  long unaff_x23;
  long lVar13;
  int iVar14;
  undefined8 unaff_x24;
  int iVar15;
  long unaff_x25;
  undefined8 unaff_x26;
  long lVar16;
  undefined *unaff_x27;
  long lVar17;
  undefined8 unaff_x28;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined *puStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puStack_220 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_1 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 8);
  }
  _objc_retain(uVar8);
  func_0x00010bf529e0(uVar8);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  if (param_1 == (undefined *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
  }
  puStack_238 = param_1;
  _objc_retain(lVar5);
  lStack_230 = lVar5;
  func_0x00010bf52a60();
  lStack_218 = lVar5;
  if (lVar5 != 0) {
    lStack_228 = *plStack_1a0;
    do {
      lVar5 = 0;
      do {
        if (*plStack_1a0 != lStack_228) {
          _objc_enumerationMutation(lStack_230);
        }
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        lVar10 = *(long *)(lStack_1a8 + lVar5 * 8);
        if (lVar10 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(lVar10 + 0x20);
        }
        lStack_208 = lVar5;
        _objc_retain(uVar8);
        func_0x00010bf529e0(uVar8);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_1f8 = puVar1;
        _objc_release(uVar8);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        if (lVar10 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(lVar10 + 0x20);
        }
        lStack_210 = lVar10;
        _objc_retain(lVar5);
        lVar10 = lVar5;
        func_0x00010bf52a60();
        if (lVar10 != 0) {
          unaff_x22 = *plStack_1e0;
          unaff_x25 = lVar10;
          lStack_200 = lVar5;
          do {
            lVar10 = 0;
            do {
              if (*plStack_1e0 != unaff_x22) {
                _objc_enumerationMutation(lStack_200);
              }
              unaff_x23 = *(long *)(lStack_1e8 + lVar10 * 8);
              unaff_x27 = PTR_PTR_1126dd658;
              _objc_alloc();
              if (unaff_x23 == 0) {
                _objc_retain(0);
                _objc_retain(0);
                _objc_retain(0);
                _objc_retain(0);
                uVar11 = 0;
                unaff_x28 = 0;
                unaff_x26 = 0;
                uVar7 = 0;
                uVar6 = 0;
                uVar8 = 0;
              }
              else {
                unaff_x26 = *(undefined8 *)(unaff_x23 + 8);
                _objc_retain(unaff_x26);
                uVar7 = *(undefined8 *)(unaff_x23 + 0x10);
                unaff_x28 = *(undefined8 *)(unaff_x23 + 0x18);
                _objc_retain(unaff_x28);
                uVar6 = *(undefined8 *)(unaff_x23 + 0x20);
                _objc_retain(uVar6);
                uVar11 = *(undefined8 *)(unaff_x23 + 0x28);
                _objc_retain(uVar11);
                uVar8 = *(undefined8 *)(unaff_x23 + 0x30);
              }
              puVar1 = unaff_x27;
              FUN_10912313c(uVar8,unaff_x27,unaff_x26,uVar7,unaff_x28,uVar6,uVar11);
              func_0x00010befa120(puStack_1f8);
              _objc_release(puVar1);
              _objc_release(uVar11);
              _objc_release(uVar6);
              _objc_release(unaff_x28);
              _objc_release(unaff_x26);
              lVar5 = lStack_200;
              lVar10 = lVar10 + 1;
            } while (unaff_x25 != lVar10);
            unaff_x25 = lStack_200;
            func_0x00010bf52a60();
          } while (unaff_x25 != 0);
        }
        _objc_release(lVar5);
        puVar1 = PTR_PTR_1126dd660;
        _objc_alloc(PTR_PTR_1126dd660);
        if (lStack_210 == 0) {
          uVar8 = 0;
          unaff_x24 = 0;
          uVar7 = 0;
        }
        else {
          unaff_x24 = *(undefined8 *)(lStack_210 + 8);
          uVar8 = *(undefined8 *)(lStack_210 + 0x10);
          uVar7 = *(undefined8 *)(lStack_210 + 0x18);
        }
        _objc_retain(uVar7);
        param_1 = puStack_1f8;
        FUN_109122ee0(puVar1,unaff_x24,uVar8,uVar7,puStack_1f8);
        func_0x00010befa120(puStack_220);
        _objc_release(puVar1);
        _objc_release(uVar7);
        _objc_release(param_1);
        lVar5 = lStack_208 + 1;
      } while (lVar5 != lStack_218);
      lVar5 = lStack_230;
      func_0x00010bf52a60();
      lStack_218 = lVar5;
    } while (lVar5 != 0);
  }
  _objc_release(lStack_230);
  puVar2 = PTR_PTR_1126dd668;
  _objc_alloc();
  puVar1 = puStack_220;
  FUN_109122d9c();
  _objc_release(puVar1);
  puVar3 = puStack_238;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puStack_260 = puVar1;
  pcStack_248 = FUN_10911eebc;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2a0 = unaff_x28;
  puStack_298 = unaff_x27;
  uStack_290 = unaff_x26;
  lStack_288 = unaff_x25;
  uStack_280 = unaff_x24;
  lStack_278 = unaff_x23;
  lStack_270 = unaff_x22;
  puStack_268 = param_1;
  puStack_258 = puVar2;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (puVar3 == (undefined *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(puVar3 + 8);
  }
  _objc_retain(lVar5);
  _objc_release(lVar5);
  if (lVar5 == 0) {
    uVar12 = 0;
    goto LAB_10911f11c;
  }
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  if (puVar3 == (undefined *)0x0) goto LAB_10911f16c;
  lVar5 = *(long *)(puVar3 + 8);
  do {
    _objc_retain(lVar5);
    lVar10 = lVar5;
    func_0x00010bf52a60();
    lVar9 = 0;
    uVar12 = 0;
    if (lVar10 == 0) {
LAB_10911f104:
      _objc_release(lVar5);
    }
    else {
      iVar15 = 0;
      iVar14 = 0;
      lVar16 = *plStack_360;
      do {
        lVar17 = 0;
        do {
          if (*plStack_360 != lVar16) {
            _objc_enumerationMutation(lVar5);
          }
          lVar13 = *(long *)(lStack_368 + lVar17 * 8);
          if (lVar13 == 0) {
            uVar12 = 0;
          }
          else {
            lVar4 = *(long *)(lVar13 + 8);
            if (lVar4 == 1) {
              _objc_retain(lVar13);
              _objc_release(lVar9);
              iVar14 = iVar14 + 1;
              lVar4 = *(long *)(lVar13 + 8);
              lVar9 = lVar13;
            }
            uVar12 = (uint)(lVar4 == 2);
          }
          iVar15 = uVar12 + iVar15;
          lVar17 = lVar17 + 1;
        } while (lVar10 != lVar17);
        lVar10 = lVar5;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
      _objc_release(lVar5);
      uVar12 = 0;
      if ((iVar15 == 0) && (iVar14 == 1)) {
        if (lVar9 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(lVar9 + 0x20);
        }
        _objc_retain(lVar5);
        lVar10 = lVar5;
        func_0x00010bf529e0();
        uVar12 = (uint)(lVar10 == 1);
        _objc_release(lVar5);
        if (lVar10 == 1) {
          if (lVar9 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(lVar9 + 0x20);
          }
          _objc_retain(lVar10);
          lVar16 = lVar10;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          if (lVar16 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(long *)(lVar16 + 8);
          }
          _objc_retain(lVar5);
          _objc_release(lVar16);
          _objc_release(lVar10);
          puStack_388 = &uStack_390;
          uStack_390 = 0;
          uStack_380 = 0x2020000000;
          uStack_378 = 0;
          func_0x00010c0bc940(lVar5);
          uVar12 = (uint)*(byte *)(puStack_388 + 3);
          __Block_object_dispose(&uStack_390,8);
          goto LAB_10911f104;
        }
      }
    }
    _objc_release(lVar9);
LAB_10911f11c:
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return (undefined *)(ulong)(uVar12 & 1);
    }
    ___stack_chk_fail();
LAB_10911f16c:
    lVar5 = 0;
  } while( true );
}



/* Entry: 10911eebc; end: 10911f1ab;  */

byte FUN_10911eebc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
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
  _objc_retain();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
  _objc_release(lVar3);
  if (lVar3 == 0) {
    bVar5 = 0;
    goto LAB_10911f11c;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  if (param_1 == 0) goto LAB_10911f16c;
  lVar3 = *(long *)(param_1 + 8);
  do {
    _objc_retain(lVar3);
    lVar6 = lVar3;
    func_0x00010bf52a60();
    lVar4 = 0;
    bVar5 = 0;
    if (lVar6 == 0) {
LAB_10911f104:
      _objc_release(lVar3);
    }
    else {
      iVar9 = 0;
      iVar8 = 0;
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          lVar7 = *(long *)(lStack_128 + lVar11 * 8);
          if (lVar7 == 0) {
            uVar1 = 0;
          }
          else {
            lVar2 = *(long *)(lVar7 + 8);
            if (lVar2 == 1) {
              _objc_retain(lVar7);
              _objc_release(lVar4);
              iVar8 = iVar8 + 1;
              lVar2 = *(long *)(lVar7 + 8);
              lVar4 = lVar7;
            }
            uVar1 = (uint)(lVar2 == 2);
          }
          iVar9 = uVar1 + iVar9;
          lVar11 = lVar11 + 1;
        } while (lVar6 != lVar11);
        lVar6 = lVar3;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
      _objc_release(lVar3);
      bVar5 = 0;
      if ((iVar9 == 0) && (iVar8 == 1)) {
        if (lVar4 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(lVar4 + 0x20);
        }
        _objc_retain(lVar3);
        lVar6 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        bVar5 = 0;
        if (lVar6 == 1) {
          if (lVar4 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(lVar4 + 0x20);
          }
          _objc_retain(lVar6);
          lVar10 = lVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = *(long *)(lVar10 + 8);
          }
          _objc_retain(lVar3);
          _objc_release(lVar10);
          _objc_release(lVar6);
          puStack_148 = &uStack_150;
          uStack_150 = 0;
          uStack_140 = 0x2020000000;
          uStack_138 = 0;
          func_0x00010c0bc940(lVar3);
          bVar5 = *(byte *)(puStack_148 + 3);
          __Block_object_dispose(&uStack_150,8);
          goto LAB_10911f104;
        }
      }
    }
    _objc_release(lVar4);
LAB_10911f11c:
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return bVar5 & 1;
    }
    ___stack_chk_fail();
LAB_10911f16c:
    lVar3 = 0;
  } while( true );
}



/* Entry: 10911f1ac; end: 10911f1d7;  */

void FUN_10911f1ac(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10911f1d8; end: 10911f6bb;  */

void FUN_10911f1d8(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  lVar9 = param_2;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_80,param_2);
    }
    lVar9 = *(long *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (lVar9 != 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_a0,lVar9);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      uStack_70 = uStack_90;
      _objc_release(lVar9);
      _objc_release(puVar2);
    }
    uStack_98 = uStack_78;
    uStack_a0 = uStack_80;
    uStack_90 = uStack_70;
    uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar10 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar3 = &uStack_a0;
    uStack_c0 = uVar10;
    uStack_b8 = uVar11;
    uStack_b0 = uVar8;
    _CMTimeCompare(puVar3,&uStack_c0);
    if ((int)puVar3 == 0) {
      uStack_c8 = 0;
      func_0x00010c266c80(PTR_PTR_1126b0010);
      if (param_2 == 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_a0,param_2);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      uStack_70 = uStack_90;
      uStack_c0 = uVar10;
      uStack_b8 = uVar11;
      uStack_b0 = uVar8;
      _CMTimeCompare(&uStack_a0,&uStack_c0);
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uStack_b8 = *(undefined8 *)(lVar9 + 0x28);
    uStack_c0 = *(undefined8 *)(lVar9 + 0x20);
    uStack_b0 = *(undefined8 *)(lVar9 + 0x30);
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_d0 = uStack_70;
    _CMTimeAdd(&uStack_a0,&uStack_c0,&uStack_e0);
    uStack_b8 = uStack_98;
    uStack_c0 = uStack_a0;
    uStack_b0 = uStack_90;
    uStack_d8 = *(undefined8 *)(param_1 + 0x40);
    uStack_e0 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = *(undefined8 *)(param_1 + 0x48);
    puVar3 = &uStack_c0;
    _CMTimeCompare(puVar3,&uStack_e0);
    puVar2 = PTR_PTR_1126bf6a0;
    _objc_alloc(PTR_PTR_1126bf6a0);
    puVar4 = PTR_PTR_1126bf698;
    func_0x00010bf0b9a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar3 < 1) {
      uStack_b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_c0 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x60);
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = uStack_78;
      uStack_c0 = uStack_80;
      uStack_b0 = uStack_70;
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uStack_b8 = *(undefined8 *)(lVar9 + 0x28);
      uStack_c0 = *(undefined8 *)(lVar9 + 0x20);
      uStack_b0 = *(undefined8 *)(lVar9 + 0x30);
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b7425e0(0x3ff0000000000000,puVar2,puVar4,0,puVar5,puVar6,puVar7,0,0,0);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(undefined8 *)(lVar9 + 0x28) = uStack_98;
      *(undefined8 *)(lVar9 + 0x20) = uStack_a0;
      *(undefined8 *)(lVar9 + 0x30) = uStack_90;
    }
    else {
      uStack_b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_c0 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x60);
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uStack_d8 = *(undefined8 *)(param_1 + 0x40);
      uStack_e0 = *(undefined8 *)(param_1 + 0x38);
      uStack_d0 = *(undefined8 *)(param_1 + 0x48);
      uStack_f8 = *(undefined8 *)(lVar9 + 0x28);
      uStack_100 = *(undefined8 *)(lVar9 + 0x20);
      uStack_f0 = *(undefined8 *)(lVar9 + 0x30);
      _CMTimeSubtract(&uStack_c0,&uStack_e0,&uStack_100);
      func_0x00010c297200(puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uStack_b8 = *(undefined8 *)(lVar9 + 0x28);
      uStack_c0 = *(undefined8 *)(lVar9 + 0x20);
      uStack_b0 = *(undefined8 *)(lVar9 + 0x30);
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b7425e0(0x3ff0000000000000,puVar2,puVar4,0,puVar6,puVar5,puVar7,0,0,0);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar4);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(undefined8 *)(lVar9 + 0x28) = uStack_98;
      *(undefined8 *)(lVar9 + 0x20) = uStack_a0;
      *(undefined8 *)(lVar9 + 0x30) = uStack_90;
      *param_4 = 1;
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10911f6bc; end: 10911f7b7;  */

long FUN_10911f6bc(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  _objc_retain(param_3);
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_70,param_2);
  }
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_30 = uStack_60;
  _objc_release(param_2);
  lVar2 = param_3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_70,lVar2);
  }
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_80 = uStack_60;
  _objc_release(lVar2);
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_60 = uStack_30;
  puVar3 = &uStack_70;
  _CMTimeCompare(puVar3,&uStack_90);
  iVar1 = (int)puVar3 >> 0x1f;
  if (0 < (int)puVar3) {
    iVar1 = 1;
  }
  return (long)iVar1;
}



/* Entry: 10911f7b8; end: 10911f88b;  */

void FUN_10911f7b8(undefined8 param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  if (param_2 == 0) {
    _objc_retain(0);
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_58 = 0;
    _objc_release(0);
    dVar3 = 0.0;
    dVar4 = 0.0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar1);
    if (lVar1 == 0) {
      lStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      _objc_release(0);
      dVar3 = 0.0;
    }
    else {
      func_0x00010bdc1140(&lStack_58,lVar1);
      _objc_release(lVar1);
      dVar3 = (double)lStack_58;
    }
    dVar4 = *(double *)(param_2 + 0x30);
  }
  _objc_release(param_2);
  dVar2 = -dVar4;
  if (0.0 <= dVar4) {
    dVar2 = dVar4;
  }
  _CMTimeMake(param_1,(long)(dVar2 * dVar3),uStack_50 & 0xffffffff);
  return;
}



/* Entry: 10911f88c; end: 10911fc0b;  */

undefined8 FUN_10911f88c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if ((param_1 != 0) && (1 < *(ulong *)(param_1 + 0x10))) {
    uVar7 = 0;
    goto LAB_10911fb80;
  }
  unaff_x21 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_10911fc0c;
  uStack_110 = 0x10911fc1c;
  uStack_108 = 0;
  puStack_128 = unaff_x21;
  if (param_1 == 0) goto LAB_10911fbc8;
  uVar7 = *(undefined8 *)(param_1 + 8);
  do {
    _objc_retain(uVar7);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_10911fc24;
    puStack_140 = &UNK_11084e620;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x10911fc94;
    puStack_168 = &UNK_11084e6b0;
    puStack_160 = unaff_x21;
    puStack_138 = unaff_x21;
    func_0x00010c0bc940(uVar7);
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126b0010;
    if (puStack_128[5] == 0) {
      uVar7 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uStack_188 = 0;
      func_0x00010c266c80(puVar1);
      uVar2 = uStack_188;
      _objc_retain(uStack_188);
      _objc_release(puVar4);
      _objc_release(puVar3);
      unaff_x21 = (undefined8 *)puStack_128[5];
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = unaff_x21;
      func_0x00010bf529e0();
      if (puVar5 == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        lStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        plStack_1c0 = (long *)0x0;
        _objc_retain(unaff_x21);
        puVar5 = unaff_x21;
        func_0x00010bf52a60();
        puVar1 = PTR__kCMTimeZero_110348670;
        uVar7 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          lVar8 = *plStack_1c0;
          do {
            puVar9 = (undefined8 *)0x0;
            do {
              if (*plStack_1c0 != lVar8) {
                _objc_enumerationMutation(unaff_x21);
              }
              if (*(long *)(lStack_1c8 + (long)puVar9 * 8) == 0) {
LAB_10911fb48:
                uVar7 = 1;
                goto LAB_10911fb4c;
              }
              func_0x00010c26f620(&uStack_200);
              uStack_100 = uStack_1e8;
              uStack_f8 = uStack_1e0;
              if ((uStack_1dc & 0x1d) != 1) goto LAB_10911fb48;
              uStack_200 = uStack_1e8;
              uStack_1f8 = uStack_1e0;
              uStack_1f4 = uStack_1dc;
              uStack_1f0 = uStack_1d8;
              uStack_218 = *(undefined8 *)(puVar1 + 8);
              uStack_220 = *(undefined8 *)puVar1;
              uStack_210 = *(undefined8 *)(puVar1 + 0x10);
              puVar6 = &uStack_200;
              _CMTimeCompare(puVar6,&uStack_220);
              if (0 < (int)puVar6) goto LAB_10911fb48;
              puVar9 = (undefined8 *)((long)puVar9 + 1);
            } while (puVar5 != puVar9);
            puVar5 = unaff_x21;
            func_0x00010bf52a60();
          } while (puVar5 != (undefined8 *)0x0);
          uVar7 = 0;
        }
LAB_10911fb4c:
        _objc_release(unaff_x21);
      }
      _objc_release(unaff_x21);
      _objc_release(uVar2);
    }
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
LAB_10911fb80:
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return uVar7;
    }
    ___stack_chk_fail();
LAB_10911fbc8:
    uVar7 = 0;
  } while( true );
}



/* Entry: 10911fc0c; end: 10911fc23;  */

void FUN_10911fc0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10911fc24; end: 10911fccb;  */

void FUN_10911fc24(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c074fe0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10911fccc; end: 10911fccf;  */

void FUN_10911fccc(void)

{
  return;
}



/* Entry: 10911fcd0; end: 10911fda3;  */

void FUN_10911fcd0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    _objc_retain();
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    _objc_retain(0);
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar1);
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_48,lVar1);
    }
    lVar2 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar2);
    if (lVar2 != 0) {
      func_0x00010bdc1140(&uStack_60,lVar2);
      goto LAB_10911fd68;
    }
  }
  lVar2 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
LAB_10911fd68:
  _CMTimeAdd(param_1,&uStack_48,&uStack_60);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10911fda4; end: 10911feab;  */

undefined8 FUN_10911fda4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0x3ff0000000000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  _objc_retain(uVar1);
  _objc_retain(param_1);
  func_0x00010c0be800(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[3];
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10911feac; end: 10911feb3;  */

void FUN_10911feac(void)

{
  return;
}



/* Entry: 10911feb4; end: 10911ff6b;  */

void FUN_10911feb4(double param_1,long param_2,long param_3)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    _objc_retain(0);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 0x20);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      func_0x00010bdc1140(&uStack_58,lVar1);
      goto LAB_10911ff10;
    }
  }
  lVar1 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
LAB_10911ff10:
  _CMTimeGetSeconds(&uStack_58);
  _objc_release(lVar1);
  if (*(long *)(param_2 + 0x20) == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(*(long *)(param_2 + 0x20) + 0x30);
  }
  *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) =
       (param_1 * dVar2) / (double)(param_3 << 1);
  return;
}



/* Entry: 10911ff6c; end: 10911ff8b;  */

void FUN_10911ff6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf698,PTR_s_assetUrlWithAssetUrl__1125a07f0,param_2);
  return;
}



/* Entry: 10911ff8c; end: 109120337;  */

void FUN_10911ff8c(ulong param_1,long param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar10 = param_1;
    func_0x00010bf529e0();
    if (uVar10 != 0) {
      uVar10 = 0;
      do {
        func_0x00010befa120(param_3);
        uVar10 = uVar10 + 1;
        uVar3 = param_1;
        func_0x00010bf529e0();
      } while (uVar10 < uVar3);
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar13 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uVar10 = param_1;
  uStack_e0 = uVar13;
  func_0x00010bf529e0();
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      fVar12 = (float)uVar13;
      uVar3 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar11 == 0) {
        fVar12 = 0.0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_110,lVar11);
      }
      puVar5 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      uVar2 = uStack_d0;
      uVar1 = uStack_d8;
      uVar13 = uStack_e0;
      dVar15 = (double)fVar12;
      _objc_retain(uVar3);
      dVar14 = -dVar15;
      if (0.0 <= fVar12) {
        dVar14 = dVar15;
      }
      if ((fVar12 == 0.0) || (dVar14 == 1.0)) {
        uStack_98 = uStack_f0;
        uStack_a0 = uStack_f8;
        uStack_90 = uStack_e8;
      }
      else {
        uStack_b8 = uStack_f0;
        uStack_c0 = uStack_f8;
        uStack_b0 = uStack_e8;
        _CMTimeMultiplyByFloat64(&uStack_a0,1.0 / dVar14,&uStack_c0);
      }
      puVar6 = PTR_PTR_1126bf6a0;
      _objc_alloc();
      uStack_b8 = uStack_108;
      uStack_c0 = uStack_110;
      uStack_b0 = uStack_100;
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = uStack_98;
      uStack_c0 = uStack_a0;
      uStack_b0 = uStack_90;
      puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = uVar1;
      uStack_c0 = uVar13;
      uStack_b0 = uVar2;
      puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b7425e0(dVar15,puVar6,uVar3,1,puVar7,puVar8,puVar9,0,0,0);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar3);
      _objc_release(puVar5);
      _objc_release(lVar11);
      _objc_release(uVar3);
      func_0x00010befa120(puVar4);
      if (puVar6 == (undefined *)0x0) {
        _objc_retain(0);
LAB_10912027c:
        lVar11 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
      }
      else {
        lVar11 = *(long *)(puVar6 + 0x20);
        _objc_retain(lVar11);
        if (lVar11 == 0) goto LAB_10912027c;
        func_0x00010bdc1140(&uStack_110,lVar11);
      }
      _objc_release(lVar11);
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      uStack_90 = uStack_d0;
      uStack_b8 = uStack_108;
      uStack_c0 = uStack_110;
      uStack_b0 = uStack_100;
      uVar13 = uStack_110;
      _CMTimeAdd(&uStack_e0,&uStack_a0,&uStack_c0);
      _objc_release(puVar6);
      uVar10 = uVar10 + 1;
      uVar3 = param_1;
      func_0x00010bf529e0();
    } while (uVar10 < uVar3);
  }
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109120338; end: 109120aa7;  */

void FUN_109120338(undefined *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *unaff_x25;
  long lVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 auStack_218 [2];
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    unaff_x25 = auStack_218;
    func_0x00010bdc1120(&uStack_138,param_2);
    uStack_148 = uStack_130;
    uStack_150 = uStack_138;
    uStack_140 = uStack_128;
    uStack_2d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_2e0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_2e8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar1 = &uStack_150;
    uStack_170 = uStack_2e0;
    uStack_168 = uStack_2d8;
    uStack_160 = uStack_2e8;
    _CMTimeCompare(puVar1,&uStack_170);
    if ((int)puVar1 == 0) {
      func_0x00010bdc1120(&uStack_1a0,param_2);
      FUN_10911fcd0(&uStack_150,param_1);
      uStack_168 = uStack_180;
      uStack_170 = uStack_188;
      uStack_160 = uStack_178;
      puVar1 = &uStack_170;
      _CMTimeCompare(puVar1,&uStack_150);
      if (-1 < (int)puVar1) goto LAB_109120a40;
    }
    puVar2 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) goto LAB_109120aa0;
    dVar17 = *(double *)(puVar2 + 0x30);
    do {
      _objc_release();
      func_0x00010bdc1120(&uStack_138,param_2);
      uStack_148 = unaff_x25[0x1d];
      uStack_150 = unaff_x25[0x1c];
      uStack_140 = uStack_128;
      _CMTimeMultiplyByFloat64(&uStack_1a0,1.0 / dVar17,&uStack_150);
      func_0x00010bdc1120(&uStack_138,param_2);
      uStack_168 = unaff_x25[0x20];
      uStack_170 = unaff_x25[0x1f];
      uStack_160 = uStack_110;
      _CMTimeMultiplyByFloat64(&uStack_150,1.0 / dVar17,&uStack_170);
      uStack_168 = uStack_198;
      uStack_170 = uStack_1a0;
      uStack_160 = uStack_190;
      uStack_1b8 = uStack_148;
      uStack_1c0 = uStack_150;
      uStack_1b0 = uStack_140;
      _CMTimeAdd(&uStack_138,&uStack_170,&uStack_1c0);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_168 = uStack_2d8;
      uStack_170 = uStack_2e0;
      uStack_160 = uStack_2e8;
      uStack_1b0 = uStack_2e8;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = uStack_2d8;
      uStack_1c0 = uStack_2e0;
      _objc_retain(param_1);
      puVar2 = param_1;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        lVar15 = *plStack_1f0;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_1f0 != lVar15) {
              _objc_enumerationMutation(param_1);
            }
            lVar12 = *(long *)(lStack_1f8 + (long)puVar8 * 8);
            if (lVar12 == 0) {
              _objc_retain(0);
              uStack_228 = 0;
              uStack_220 = 0;
              uStack_230 = 0;
              _objc_retain(0);
              lVar13 = 0;
LAB_109120580:
              lVar9 = 0;
              uStack_250 = 0;
              uStack_248 = 0;
              uStack_240 = 0;
            }
            else {
              lVar13 = *(long *)(lVar12 + 0x28);
              _objc_retain(lVar13);
              if (lVar13 == 0) {
                uStack_230 = 0;
                uStack_228 = 0;
                uStack_220 = 0;
              }
              else {
                func_0x00010bdc1140(&uStack_230,lVar13);
              }
              lVar9 = *(long *)(lVar12 + 0x20);
              _objc_retain(lVar9);
              if (lVar9 == 0) goto LAB_109120580;
              func_0x00010bdc1140(&uStack_250,lVar9);
            }
            _CMTimeAdd(auStack_218,&uStack_230,&uStack_250);
            _objc_release(lVar9);
            _objc_release(lVar13);
            uStack_228 = uStack_198;
            uStack_230 = uStack_1a0;
            uStack_220 = uStack_190;
            uStack_248 = unaff_x25[1];
            uStack_250 = *unaff_x25;
            uStack_240 = uStack_208;
            puVar1 = &uStack_230;
            _CMTimeCompare(puVar1,&uStack_250);
            if ((int)puVar1 < 0) {
              if (lVar12 == 0) {
                _objc_retain(0);
LAB_10912061c:
                lVar13 = 0;
                uStack_230 = 0;
                uStack_228 = 0;
                uStack_220 = 0;
              }
              else {
                lVar13 = *(long *)(lVar12 + 0x28);
                _objc_retain(lVar13);
                if (lVar13 == 0) goto LAB_10912061c;
                func_0x00010bdc1140(&uStack_230,lVar13);
              }
              uStack_248 = unaff_x25[0x1d];
              uStack_250 = unaff_x25[0x1c];
              uStack_240 = uStack_128;
              puVar1 = &uStack_250;
              _CMTimeCompare(puVar1,&uStack_230);
              _objc_release(lVar13);
              if (0 < (int)puVar1) {
                if (lVar12 == 0) {
                  _objc_retain(0);
                  uStack_248 = 0;
                  uStack_240 = 0;
                  uStack_250 = 0;
                  _objc_release(0);
                  _objc_retain(0);
LAB_1091206cc:
                  lVar13 = 0;
                  uStack_230 = 0;
                  uStack_228 = 0;
                  uStack_220 = 0;
                }
                else {
                  lVar13 = *(long *)(lVar12 + 0x20);
                  _objc_retain(lVar13);
                  if (lVar13 == 0) {
                    uStack_250 = 0;
                    uStack_248 = 0;
                    uStack_240 = 0;
                  }
                  else {
                    func_0x00010bdc1140(&uStack_250,lVar13);
                  }
                  _objc_release(lVar13);
                  lVar13 = *(long *)(lVar12 + 0x28);
                  _objc_retain(lVar13);
                  if (lVar13 == 0) goto LAB_1091206cc;
                  func_0x00010bdc1140(&uStack_230,lVar13);
                }
                uStack_268 = uStack_198;
                uStack_270 = uStack_1a0;
                uStack_260 = uStack_190;
                puVar1 = &uStack_270;
                _CMTimeCompare(puVar1,&uStack_230);
                _objc_release(lVar13);
                if ((int)puVar1 < 0) {
                  uStack_228 = uStack_2d8;
                  uStack_230 = uStack_2e0;
                  uStack_220 = uStack_2e8;
                }
                else {
                  uStack_268 = uStack_198;
                  uStack_270 = uStack_1a0;
                  uStack_260 = uStack_190;
                  uStack_288 = uStack_168;
                  uStack_290 = uStack_170;
                  uStack_280 = uStack_160;
                  _CMTimeSubtract(&uStack_230,&uStack_270,&uStack_290);
                  uStack_288 = uStack_248;
                  uStack_290 = uStack_250;
                  uStack_280 = uStack_240;
                  uStack_2a8 = uStack_228;
                  uStack_2b0 = uStack_230;
                  uStack_2a0 = uStack_220;
                  _CMTimeSubtract(&uStack_270,&uStack_290,&uStack_2b0);
                  uStack_248 = uStack_268;
                  uStack_250 = uStack_270;
                  uStack_240 = uStack_260;
                }
                uStack_268 = unaff_x25[0x1d];
                uStack_270 = unaff_x25[0x1c];
                uStack_260 = uStack_128;
                uStack_288 = unaff_x25[1];
                uStack_290 = *unaff_x25;
                uStack_280 = uStack_208;
                puVar1 = &uStack_270;
                _CMTimeCompare(puVar1,&uStack_290);
                if ((int)puVar1 < 0) {
                  uStack_268 = unaff_x25[1];
                  uStack_270 = *unaff_x25;
                  uStack_260 = uStack_208;
                  uStack_2a8 = unaff_x25[0x1d];
                  uStack_2b0 = unaff_x25[0x1c];
                  uStack_2a0 = uStack_128;
                  _CMTimeSubtract(&uStack_290,&uStack_270,&uStack_2b0);
                  uStack_2a8 = uStack_248;
                  uStack_2b0 = uStack_250;
                  uStack_2a0 = uStack_240;
                  _CMTimeSubtract(&uStack_270,&uStack_2b0,&uStack_290);
                  uStack_248 = uStack_268;
                  uStack_250 = uStack_270;
                  uStack_240 = uStack_260;
                }
                puVar4 = PTR_PTR_1126bf6a0;
                _objc_alloc(PTR_PTR_1126bf6a0);
                if (lVar12 == 0) {
                  _objc_retain(0);
                  uVar14 = 0;
                  uVar16 = 0;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar12 + 8);
                  _objc_retain(uVar14);
                  uVar16 = *(undefined8 *)(lVar12 + 0x10);
                }
                uStack_268 = uStack_228;
                uStack_270 = uStack_230;
                uStack_260 = uStack_220;
                puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
                _objc_retainAutoreleasedReturnValue();
                uStack_268 = uStack_248;
                uStack_270 = uStack_250;
                uStack_260 = uStack_240;
                puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
                _objc_retainAutoreleasedReturnValue();
                uStack_268 = uStack_1b8;
                uStack_270 = uStack_1c0;
                uStack_260 = uStack_1b0;
                puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
                _objc_retainAutoreleasedReturnValue();
                if (lVar12 == 0) {
                  _objc_retain(0);
                  uVar10 = 0;
                  uVar11 = 0;
                  uVar18 = 0;
                }
                else {
                  uVar18 = *(undefined8 *)(lVar12 + 0x30);
                  uVar10 = *(undefined8 *)(lVar12 + 0x38);
                  _objc_retain(uVar10);
                  uVar11 = *(undefined8 *)(lVar12 + 0x40);
                }
                _objc_retain(uVar11);
                func_0x00010b7425e0(uVar18,puVar4,uVar14,uVar16,puVar5,puVar6,puVar7,uVar10,uVar11,0
                                   );
                _objc_release(uVar11);
                _objc_release(uVar10);
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar5);
                _objc_release(uVar14);
                uStack_268 = uStack_1b8;
                uStack_270 = uStack_1c0;
                uStack_260 = uStack_1b0;
                uStack_288 = uStack_248;
                uStack_290 = uStack_250;
                uStack_280 = uStack_240;
                _CMTimeAdd(&uStack_1c0,&uStack_270,&uStack_290);
                func_0x00010befa120(puVar3);
                _objc_release(puVar4);
                unaff_x25 = auStack_218;
              }
            }
            else {
              uStack_168 = unaff_x25[1];
              uStack_170 = *unaff_x25;
              uStack_160 = uStack_208;
            }
            puVar8 = puVar8 + 1;
          } while (puVar2 != puVar8);
          puVar2 = param_1;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(param_1);
      puVar2 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar3);
LAB_109120a4c:
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
        return;
      }
      ___stack_chk_fail();
LAB_109120aa0:
      dVar17 = 0.0;
    } while( true );
  }
LAB_109120a40:
  _objc_retain(param_1);
  puVar2 = param_1;
  goto LAB_109120a4c;
}



/* Entry: 109120aa8; end: 109120ba7;  */

void FUN_109120aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10911fc0c;
  uStack_30 = 0x10911fc1c;
  uStack_28 = 0;
  func_0x00010c0bc940(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109120ba8; end: 109120c37;  */

void FUN_109120ba8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c074fe0();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109120c38; end: 109120c3b;  */

void FUN_109120c38(void)

{
  return;
}



/* Entry: 109120c3c; end: 109120c73;  */

void FUN_109120c3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109120c74; end: 109120d83;  */

void FUN_109120c74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10911fc0c;
    uStack_40 = 0x10911fc1c;
    uStack_38 = 0;
    func_0x00010c0bc940(uVar1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109120d84; end: 109120dbb;  */

void FUN_109120d84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109120dbc; end: 109120dc3;  */

void FUN_109120dbc(void)

{
  return;
}



/* Entry: 109120dc4; end: 10912152b;  */

void FUN_109120dc4(undefined *param_1,code *param_2,undefined *param_3,undefined *param_4,
                  long param_5,int param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined *unaff_x20;
  long lVar7;
  ulong unaff_x21;
  undefined **unaff_x22;
  long lVar8;
  undefined *unaff_x23;
  long lVar9;
  undefined8 unaff_x24;
  undefined8 uVar10;
  undefined *unaff_x25;
  long lVar11;
  undefined *unaff_x26;
  long lVar12;
  undefined *unaff_x27;
  long unaff_x28;
  undefined **ppuVar13;
  undefined **ppuVar14;
  double dVar15;
  code *pcVar16;
  undefined8 unaff_d8;
  undefined *unaff_d9;
  double dVar17;
  double dVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 auStack_4e8 [24];
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_470;
  undefined8 uStack_468;
  code *pcStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  ulong uStack_358;
  undefined *puStack_350;
  long lStack_348;
  undefined1 *puStack_340;
  code *pcStack_338;
  long lStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  undefined **ppuStack_2f8;
  code *pcStack_2f0;
  int iStack_2e4;
  undefined *puStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  char *pcStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  code *pcStack_270;
  char *pcStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  code *pcStack_240;
  char *pcStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined *puStack_218;
  undefined **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  code *pcStack_1b0;
  char *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  code *pcStack_180;
  char *pcStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  code *pcStack_150;
  char *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_2e4 = param_6;
  puStack_2e0 = param_1;
  pcStack_2d8 = param_2;
  puStack_2c8 = param_3;
  puStack_2c0 = param_4;
  _objc_retain();
  if (param_5 == 0) {
    _objc_retain(0);
LAB_1091214a0:
    lVar7 = 0;
    puStack_2b8 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    lVar7 = *(long *)(param_5 + 0x48);
    _objc_retain(lVar7);
    unaff_x20 = (undefined *)0x0;
    if (lVar7 == 0) goto LAB_1091214a0;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR_PTR_1126bcef8;
    uVar10 = *(undefined8 *)(lVar7 + 0x10);
    puStack_2b8 = puVar1;
    _objc_retain(uVar10);
    unaff_x20 = unaff_x23;
    lStack_328 = lVar7;
    func_0x00010bf67260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    param_1 = (undefined *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(unaff_x20);
    param_7 = &uStack_200;
    puVar2 = unaff_x20;
    puStack_2d0 = unaff_x20;
    func_0x00010bf52a60();
    puVar1 = PTR__CGAffineTransformIdentity_110347008;
    if (puVar2 != (undefined *)0x0) {
      unaff_x28 = *plStack_1f0;
      uVar6 = 0;
      if ((double)puStack_2c0 == *(double *)(PTR__CGSizeZero_110347620 + 8)) {
        uVar6 = (uint)((double)puStack_2c8 == *(double *)PTR__CGSizeZero_110347620);
      }
      unaff_x21 = (ulong)uVar6;
      unaff_x22 = &puStack_160;
      dStack_300 = (double)puStack_2e0 / (double)pcStack_2d8;
      dStack_308 = (double)puStack_2e0 * 0.5;
      dStack_310 = (double)pcStack_2d8 * 0.5;
      dStack_318 = (double)puStack_2e0 * -0.5;
      dStack_320 = (double)pcStack_2d8 * -0.5;
      pcStack_2f0 = (code *)0x3010000000;
      ppuStack_2f8 = (undefined **)0xc2000000;
      unaff_d8 = 0x3f847ae147ae147b;
      do {
        unaff_x20 = (undefined *)0x0;
        do {
          if (*plStack_1f0 != unaff_x28) {
            _objc_enumerationMutation(puStack_2d0);
          }
          lVar7 = *(long *)(lStack_1f8 + (long)unaff_x20 * 8);
          if (lVar7 == 0) {
            puStack_218 = (undefined *)0x0;
            ppuStack_210 = (undefined **)0x0;
            pcStack_208 = (code *)0x0;
          }
          else {
            func_0x00010c26f000(&puStack_218,lVar7);
          }
          unaff_d9 = puStack_2c0;
          puVar19 = puStack_2c8;
          if (uVar6 != 0) {
            _objc_retain(param_5);
            puStack_160 = (undefined *)0x0;
            pcStack_150 = pcStack_2f0;
            pcStack_148 = "";
            uStack_138 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
            ppuStack_140 = *(undefined ***)PTR__CGSizeZero_110347620;
            uVar10 = *(undefined8 *)(param_5 + 8);
            ppuStack_158 = unaff_x22;
            _objc_retain(uVar10);
            puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
            ppuStack_188 = ppuStack_2f8;
            pcStack_180 = FUN_1091217d0;
            pcStack_178 = "";
            puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
            ppuStack_1b8 = ppuStack_2f8;
            pcStack_1b0 = (code *)0x10912180c;
            pcStack_1a8 = "";
            puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
            ppuStack_248 = ppuStack_2f8;
            pcStack_240 = (code *)0x109121844;
            pcStack_238 = "";
            ppuStack_230 = unaff_x22;
            ppuStack_1a0 = unaff_x22;
            ppuStack_170 = unaff_x22;
            func_0x00010c0bc940(uVar10);
            _objc_release(uVar10);
            puVar19 = ppuStack_158[4];
            unaff_d9 = ppuStack_158[5];
            __Block_object_dispose(&puStack_160,8);
            _objc_release(param_5);
          }
          lVar5 = lVar7;
          func_0x00010c27a460(lVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_288 = *(undefined ***)(puVar1 + 8);
          puStack_290 = *(undefined **)puVar1;
          pcStack_298 = *(char **)(puVar1 + 0x18);
          pcVar16 = *(code **)(puVar1 + 0x10);
          uStack_2a8 = *(undefined8 *)(puVar1 + 0x28);
          ppuVar13 = *(undefined ***)(puVar1 + 0x20);
          ppuStack_2b0 = ppuVar13;
          pcStack_2a0 = pcVar16;
          puStack_250 = puStack_290;
          ppuStack_248 = ppuStack_288;
          pcStack_240 = pcVar16;
          pcStack_238 = pcStack_298;
          ppuStack_230 = ppuVar13;
          uStack_228 = uStack_2a8;
          func_0x00010c14e120();
          ppuVar14 = ppuVar13;
          func_0x00010c27ada0(lVar5);
          func_0x00010c27ada0(lVar5);
          if (0.0 < (double)ppuVar13) {
            puVar20 = (undefined *)0x0;
            if (0.01 <= ABS((double)pcVar16 + -0.5)) {
              puVar20 = (undefined *)((double)pcVar16 + -0.5);
            }
            dVar17 = (double)puVar19 / (double)unaff_d9;
            _CGAffineTransformMakeTranslation(&puStack_250,0x3fe0000000000000,0x3fe0000000000000);
            ppuStack_188 = ppuStack_248;
            puStack_190 = puStack_250;
            pcStack_178 = pcStack_238;
            pcStack_180 = pcStack_240;
            uStack_168 = uStack_228;
            ppuStack_170 = ppuStack_230;
            _CGAffineTransformScale(&puStack_160,0x3ff0000000000000,dVar17,&puStack_190);
            ppuStack_248 = ppuStack_158;
            puStack_250 = puStack_160;
            pcStack_238 = pcStack_148;
            pcStack_240 = pcStack_150;
            uStack_228 = uStack_138;
            ppuStack_230 = ppuStack_140;
            func_0x00010c141a80(lVar5);
            ppuStack_188 = ppuStack_248;
            puStack_190 = puStack_250;
            pcStack_178 = pcStack_238;
            pcStack_180 = pcStack_240;
            uStack_168 = uStack_228;
            ppuStack_170 = ppuStack_230;
            unaff_d9 = puVar20;
            if (iStack_2e4 == 0) {
              unaff_d9 = (undefined *)-(double)puVar20;
            }
            _CGAffineTransformRotate(&puStack_160,&puStack_190);
            pcStack_238 = pcStack_148;
            pcStack_240 = pcStack_150;
            uStack_228 = uStack_138;
            ppuStack_230 = ppuStack_140;
            ppuStack_248 = ppuStack_158;
            puStack_250 = puStack_160;
            ppuStack_188 = ppuStack_158;
            puStack_190 = puStack_160;
            pcStack_178 = pcStack_148;
            pcStack_180 = pcStack_150;
            uStack_168 = uStack_138;
            ppuStack_170 = ppuStack_140;
            _CGAffineTransformScale(&puStack_160,0x3ff0000000000000,1.0 / dVar17,&puStack_190);
            pcStack_238 = pcStack_148;
            pcStack_240 = pcStack_150;
            uStack_228 = uStack_138;
            ppuStack_230 = ppuStack_140;
            ppuStack_248 = ppuStack_158;
            puStack_250 = puStack_160;
            ppuStack_188 = ppuStack_158;
            puStack_190 = puStack_160;
            pcStack_178 = pcStack_148;
            pcStack_180 = pcStack_150;
            uStack_168 = uStack_138;
            ppuStack_170 = ppuStack_140;
            _CGAffineTransformScale
                      (&puStack_160,1.0 / (double)ppuVar13,1.0 / (double)ppuVar13,&puStack_190);
            pcStack_238 = pcStack_148;
            pcStack_240 = pcStack_150;
            uStack_228 = uStack_138;
            ppuStack_230 = ppuStack_140;
            ppuStack_248 = ppuStack_158;
            puStack_250 = puStack_160;
            dVar15 = -0.0;
            if (0.01 <= ABS((double)ppuVar14 + -0.5)) {
              dVar15 = -((double)ppuVar14 + -0.5);
            }
            ppuStack_188 = ppuStack_158;
            puStack_190 = puStack_160;
            pcStack_178 = pcStack_148;
            pcStack_180 = pcStack_150;
            uStack_168 = uStack_138;
            ppuStack_170 = ppuStack_140;
            _CGAffineTransformTranslate
                      (&puStack_160,dVar15,(dVar17 * (double)unaff_d9) / dStack_300,&puStack_190);
            pcStack_238 = pcStack_148;
            pcStack_240 = pcStack_150;
            uStack_228 = uStack_138;
            ppuStack_230 = ppuStack_140;
            ppuStack_248 = ppuStack_158;
            puStack_250 = puStack_160;
            ppuStack_188 = ppuStack_158;
            puStack_190 = puStack_160;
            pcStack_178 = pcStack_148;
            pcStack_180 = pcStack_150;
            uStack_168 = uStack_138;
            ppuStack_170 = ppuStack_140;
            _CGAffineTransformTranslate
                      (&puStack_160,0xbfe0000000000000,0xbfe0000000000000,&puStack_190);
            ppuStack_248 = ppuStack_158;
            puStack_250 = puStack_160;
            pcStack_238 = pcStack_148;
            pcStack_240 = pcStack_150;
            uStack_228 = uStack_138;
            ppuStack_230 = ppuStack_140;
          }
          _objc_release(lVar5);
          func_0x00010c27a460(lVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_278 = ppuStack_288;
          puStack_280 = puStack_290;
          pcStack_268 = pcStack_298;
          pcStack_270 = pcStack_2a0;
          uStack_258 = uStack_2a8;
          ppuStack_260 = ppuStack_2b0;
          ppuVar14 = ppuStack_2b0;
          puVar19 = puStack_290;
          func_0x00010c14e120();
          ppuVar13 = ppuVar14;
          func_0x00010c27ada0(lVar7);
          func_0x00010c27ada0(lVar7);
          if (0.0 < (double)ppuVar14) {
            unaff_d9 = (undefined *)0x0;
            if (0.01 <= ABS((double)puVar19 + -0.5)) {
              unaff_d9 = (undefined *)((double)puVar19 + -0.5);
            }
            dVar15 = (double)ppuVar13 + -0.5;
            dVar17 = 0.0;
            if (0.01 <= ABS(dVar15)) {
              dVar17 = dVar15;
            }
            func_0x00010c141a80(lVar7);
            dVar17 = (double)puStack_2e0 * dVar17;
            dVar18 = (double)pcStack_2d8 * (double)unaff_d9;
            _CGAffineTransformMakeTranslation(&puStack_280,dStack_308,dStack_310);
            ppuStack_188 = ppuStack_278;
            puStack_190 = puStack_280;
            pcStack_178 = pcStack_268;
            pcStack_180 = pcStack_270;
            uStack_168 = uStack_258;
            ppuStack_170 = ppuStack_260;
            _CGAffineTransformRotate(&puStack_160,-dVar15,&puStack_190);
            pcStack_268 = pcStack_148;
            pcStack_270 = pcStack_150;
            uStack_258 = uStack_138;
            ppuStack_260 = ppuStack_140;
            ppuStack_278 = ppuStack_158;
            puStack_280 = puStack_160;
            ppuStack_188 = ppuStack_158;
            puStack_190 = puStack_160;
            pcStack_178 = pcStack_148;
            pcStack_180 = pcStack_150;
            uStack_168 = uStack_138;
            ppuStack_170 = ppuStack_140;
            _CGAffineTransformScale(&puStack_160,ppuVar14,ppuVar14,&puStack_190);
            pcStack_268 = pcStack_148;
            pcStack_270 = pcStack_150;
            uStack_258 = uStack_138;
            ppuStack_260 = ppuStack_140;
            ppuStack_278 = ppuStack_158;
            puStack_280 = puStack_160;
            ppuStack_188 = ppuStack_158;
            puStack_190 = puStack_160;
            pcStack_178 = pcStack_148;
            pcStack_180 = pcStack_150;
            uStack_168 = uStack_138;
            ppuStack_170 = ppuStack_140;
            _CGAffineTransformTranslate(&puStack_160,dStack_318,dStack_320,&puStack_190);
            ppuStack_278 = ppuStack_158;
            puStack_280 = puStack_160;
            pcStack_268 = pcStack_148;
            pcStack_270 = pcStack_150;
            uStack_258 = uStack_138;
            ppuStack_260 = ppuStack_140;
            _CGAffineTransformMakeTranslation(&puStack_190,dVar17,dVar18);
            ppuStack_1b8 = ppuStack_278;
            puStack_1c0 = puStack_280;
            pcStack_1a8 = pcStack_268;
            pcStack_1b0 = pcStack_270;
            uStack_198 = uStack_258;
            ppuStack_1a0 = ppuStack_260;
            _CGAffineTransformConcat(&puStack_160,&puStack_1c0,&puStack_190);
            ppuStack_278 = ppuStack_158;
            puStack_280 = puStack_160;
            pcStack_268 = pcStack_148;
            pcStack_270 = pcStack_150;
            uStack_258 = uStack_138;
            ppuStack_260 = ppuStack_140;
          }
          _objc_release(lVar7);
          unaff_x25 = PTR_PTR_1126dd670;
          _objc_alloc();
          ppuStack_158 = ppuStack_248;
          puStack_160 = puStack_250;
          pcStack_148 = pcStack_238;
          pcStack_150 = pcStack_240;
          uStack_138 = uStack_228;
          ppuStack_140 = ppuStack_230;
          ppuStack_188 = ppuStack_278;
          puStack_190 = puStack_280;
          pcStack_178 = pcStack_268;
          pcStack_180 = pcStack_270;
          uStack_168 = uStack_258;
          ppuStack_170 = ppuStack_260;
          param_2 = pcStack_270;
          func_0x0001091234a0();
          unaff_x26 = PTR_PTR_1126b60f8;
          ppuStack_158 = ppuStack_210;
          puStack_160 = puStack_218;
          pcStack_150 = pcStack_208;
          unaff_x27 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          param_1 = puStack_218;
          func_0x00010c297200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f2b40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          func_0x00010befa120(puStack_2b8);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          unaff_x20 = unaff_x20 + 1;
        } while (puVar2 != unaff_x20);
        param_7 = &uStack_200;
        puVar2 = puStack_2d0;
        func_0x00010bf52a60();
        unaff_x23 = puVar1;
      } while (puVar2 != (undefined *)0x0);
    }
    unaff_x24 = 0;
    _objc_release(puStack_2d0);
    _objc_release(puStack_2d0);
    lVar7 = lStack_328;
  }
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_2b8);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&puStack_160);
  lVar7 = param_5;
  __Unwind_Resume();
  pcStack_338 = FUN_10912152c;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3a0 = unaff_d9;
  uStack_398 = unaff_d8;
  lStack_390 = unaff_x28;
  puStack_388 = unaff_x27;
  puStack_380 = unaff_x26;
  puStack_378 = unaff_x25;
  uStack_370 = unaff_x24;
  puStack_368 = unaff_x23;
  ppuStack_360 = unaff_x22;
  uStack_358 = unaff_x21;
  puStack_350 = unaff_x20;
  lStack_348 = param_5;
  puStack_340 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar5);
  if (lVar5 == 0) {
    _objc_retain(0);
  }
  else {
    lVar8 = *(long *)(lVar5 + 0x28);
    _objc_retain(lVar8);
    if (lVar8 != 0) {
      func_0x00010bdc1140(&uStack_440,lVar8);
      goto LAB_1091215b8;
    }
  }
  lVar8 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
LAB_1091215b8:
  _objc_release(lVar8);
  lVar8 = lVar5;
  FUN_109120dc4(param_1,param_2,*(undefined8 *)PTR__CGSizeZero_110347620,
                *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),lVar5,param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uStack_468 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_470 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_458 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    param_2 = *(code **)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_448 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_450 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_488 = uStack_438;
    uStack_490 = uStack_440;
    uStack_480 = uStack_430;
    uVar10 = uStack_440;
    pcStack_460 = param_2;
    func_0x00010c219980(lVar7);
  }
  else {
    uVar10 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    lStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    plStack_4c0 = (long *)0x0;
    _objc_retain(lVar8);
    lVar3 = lVar8;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_4c0;
      do {
        lVar12 = 0;
        do {
          if (*plStack_4c0 != lVar11) {
            _objc_enumerationMutation(lVar8);
          }
          lVar9 = *(long *)(lStack_4c8 + lVar12 * 8);
          lVar4 = lVar9;
          func_0x00010bfb0d80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
            uStack_490 = 0;
            uStack_488 = 0;
            uStack_480 = 0;
          }
          else {
            func_0x00010bdc1140(&uStack_490,lVar4);
          }
          _objc_release(lVar4);
          func_0x00010c154b60();
          _objc_retainAutoreleasedReturnValue();
          if (lVar9 == 0) {
            uStack_470 = 0;
            uStack_468 = 0;
            uStack_458 = 0;
            pcStack_460 = (code *)0x0;
            uStack_448 = 0;
            uStack_450 = 0;
          }
          else {
            uStack_468 = *(undefined8 *)(lVar9 + 0x10);
            uStack_470 = *(undefined8 *)(lVar9 + 8);
            uStack_458 = *(undefined8 *)(lVar9 + 0x20);
            param_2 = *(code **)(lVar9 + 0x18);
            uStack_448 = *(undefined8 *)(lVar9 + 0x30);
            uStack_450 = *(undefined8 *)(lVar9 + 0x28);
            pcStack_460 = param_2;
          }
          uStack_4f8 = uStack_438;
          uStack_500 = uStack_440;
          uStack_4f0 = uStack_430;
          uStack_518 = uStack_488;
          uStack_520 = uStack_490;
          uStack_510 = uStack_480;
          uVar10 = uStack_490;
          _CMTimeAdd(auStack_4e8,&uStack_500,&uStack_520);
          func_0x00010c219980(lVar7);
          _objc_release(lVar9);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar8;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar8);
  }
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c29b260(PTR_PTR_1126b0010);
  lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 8);
  *(undefined8 *)(lVar7 + 0x20) = uVar10;
  *(code **)(lVar7 + 0x28) = param_2;
  return;
}



/* Entry: 10912152c; end: 1091217cf;  */

void FUN_10912152c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  if (param_4 == 0) {
    _objc_retain(0);
  }
  else {
    lVar3 = *(long *)(param_4 + 0x28);
    _objc_retain(lVar3);
    if (lVar3 != 0) {
      func_0x00010bdc1140(&uStack_110,lVar3);
      goto LAB_1091215b8;
    }
  }
  lVar3 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
LAB_1091215b8:
  _objc_release(lVar3);
  lVar3 = param_4;
  FUN_109120dc4(param_1,param_2,*(undefined8 *)PTR__CGSizeZero_110347620,
                *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uStack_138 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_140 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_128 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    param_2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_120 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_158 = uStack_108;
    uStack_160 = uStack_110;
    uStack_150 = uStack_100;
    uVar7 = uStack_110;
    uStack_130 = param_2;
    func_0x00010c219980(param_3);
  }
  else {
    uVar7 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar5 = *plStack_190;
      do {
        lVar6 = 0;
        do {
          if (*plStack_190 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          lVar4 = *(long *)(lStack_198 + lVar6 * 8);
          lVar2 = lVar4;
          func_0x00010bfb0d80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            uStack_160 = 0;
            uStack_158 = 0;
            uStack_150 = 0;
          }
          else {
            func_0x00010bdc1140(&uStack_160,lVar2);
          }
          _objc_release(lVar2);
          func_0x00010c154b60();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
            uStack_140 = 0;
            uStack_138 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
          }
          else {
            uStack_138 = *(undefined8 *)(lVar4 + 0x10);
            uStack_140 = *(undefined8 *)(lVar4 + 8);
            uStack_128 = *(undefined8 *)(lVar4 + 0x20);
            param_2 = *(undefined8 *)(lVar4 + 0x18);
            uStack_118 = *(undefined8 *)(lVar4 + 0x30);
            uStack_120 = *(undefined8 *)(lVar4 + 0x28);
            uStack_130 = param_2;
          }
          uStack_1c8 = uStack_108;
          uStack_1d0 = uStack_110;
          uStack_1c0 = uStack_100;
          uStack_1e8 = uStack_158;
          uStack_1f0 = uStack_160;
          uStack_1e0 = uStack_150;
          uVar7 = uStack_160;
          _CMTimeAdd(auStack_1b8,&uStack_1d0,&uStack_1f0);
          func_0x00010c219980(param_3);
          _objc_release(lVar4);
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c29b260(PTR_PTR_1126b0010);
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  return;
}



/* Entry: 1091217d0; end: 109121873;  */

void FUN_1091217d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c29b260(PTR_PTR_1126b0010,param_4,param_4,1);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 109121874; end: 109122007;  */

void FUN_109121874(undefined *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined *puStack_3b8;
  long lStack_378;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
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
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf529e0();
  if ((param_2 == 0) && (lVar12 == 0)) {
    _objc_retain(param_1);
    puVar2 = param_1;
    goto LAB_109121f60;
  }
  puStack_3b8 = param_1;
  if (param_1 == (undefined *)0x0) goto LAB_109121fbc;
  lVar12 = *(long *)(param_1 + 8);
  _objc_retain(lVar12);
  if (lVar12 == 0) goto LAB_109121fc8;
  lVar9 = *(long *)(lVar12 + 8);
  while( true ) {
    _objc_retain();
    lVar1 = lVar12;
    FUN_10911c750(lVar12,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10911cc48(&uStack_230);
    _objc_release(lVar1);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar11 = *plStack_260;
      do {
        if (*plStack_260 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        lVar1 = lVar1 + -1;
      } while ((lVar1 != 0) || (lVar1 = lVar9, func_0x00010bf52a60(), lVar1 != 0));
    }
    _objc_release(lVar9);
    lVar1 = lVar9;
    func_0x00010c0d3c80();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar12;
    FUN_10911c884(lVar12,0);
    _objc_retainAutoreleasedReturnValue();
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    _objc_retain(lVar11);
    lVar16 = lVar11;
    func_0x00010bf52a60();
    if (lVar16 != 0) {
      lVar13 = *plStack_2a0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_2a0 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar3);
          lVar15 = lVar15 + 1;
        } while (lVar16 != lVar15);
        lVar16 = lVar11;
        func_0x00010bf52a60();
      } while (lVar16 != 0);
    }
    _objc_release(lVar11);
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    _objc_retain(param_3);
    lStack_378 = param_3;
    func_0x00010bf52a60();
    if (lStack_378 != 0) {
      lVar13 = *plStack_2e0;
      lVar16 = 4;
      do {
        lVar15 = 0;
        do {
          if (*plStack_2e0 != lVar13) {
            _objc_enumerationMutation(param_3);
          }
          puVar3 = PTR_PTR_1126bf698;
          lVar14 = *(long *)(lStack_2e8 + lVar15 * 8);
          if (lVar14 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined8 *)(lVar14 + 0x10);
          }
          _objc_retain(uVar10);
          func_0x00010bf0b9a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          puStack_308 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
          uStack_310 = *(undefined8 *)PTR__kCMTimeZero_110348670;
          uStack_300 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126bf6a0;
          _objc_alloc();
          puStack_308 = puStack_228;
          uStack_310 = uStack_230;
          uStack_300 = uStack_220;
          puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010b7425e0(0x3ff0000000000000,puVar5,puVar3,0,puVar4,puVar6,puVar4,0,0,0);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126bf6a8;
          _objc_alloc();
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_210 = puVar5;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010b742360(puVar6,0,lVar16,puVar7,puVar8);
          _objc_release(puVar8);
          _objc_release(puVar7);
          if (lVar14 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(undefined4 *)(lVar14 + 8);
          }
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(uVar17,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar8);
          _objc_release(puVar7);
          func_0x00010befa120(lVar1);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          lVar15 = lVar15 + 1;
          lVar16 = lVar16 + 1;
        } while (lStack_378 != lVar15);
        lStack_378 = param_3;
        func_0x00010bf52a60();
      } while (lStack_378 != 0);
    }
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126bf6b0;
    _objc_alloc(PTR_PTR_1126bf6b0);
    func_0x00010b742210();
    puStack_308 = &uStack_310;
    uStack_310 = 0;
    uStack_300 = 0x2020000000;
    uStack_2f8 = 0;
    func_0x00010bf97ce0(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010bf97ce0(puVar2);
    puVar5 = PTR_PTR_1126dd678;
    _objc_alloc();
    func_0x00010b743894();
    param_1 = PTR_PTR_1126bf6c0;
    _objc_alloc(PTR_PTR_1126bf6c0);
    if (puStack_3b8 == (undefined *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(puStack_3b8 + 0x10);
    }
    _objc_retain(uVar10);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_218 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b743b10(param_1,puVar3,uVar10,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_310,8);
    _objc_release(puVar3);
    _objc_release(lVar11);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(lVar9);
    _objc_release(lVar12);
    puVar2 = puStack_3b8;
LAB_109121f60:
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) break;
    ___stack_chk_fail();
LAB_109121fbc:
    _objc_retain(0);
    lVar12 = 0;
LAB_109121fc8:
    lVar9 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109122008; end: 10912203f;  */

void FUN_109122008(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010bfb2c80(param_4);
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  *(float *)(lVar1 + 0x18) = param_1 + *(float *)(lVar1 + 0x18);
  return;
}



/* Entry: 109122040; end: 1091220ff;  */

void FUN_109122040(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  float fVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  fVar3 = *(float *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  if (fVar3 <= 1.0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c1d0640(uVar2);
  }
  else {
    _objc_retain(param_2);
    func_0x00010bfb2c80(param_3);
    func_0x00010c0df740(fVar3 / *(float *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(param_2);
    param_2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109122100; end: 109122597;  */

void FUN_109122100(undefined *param_1,long param_2)

{
  float fVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  float fVar19;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar10 = 0;
  FUN_10911c960(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010bf529e0();
  if ((puVar12 == (undefined *)0x0) ||
     ((puVar12 = param_1, func_0x00010bf529e0(), puVar12 == (undefined *)0x1 &&
      (lVar2 = param_2, func_0x00010bf529e0(), lVar2 == 0)))) {
    puVar12 = (undefined *)0x0;
    goto LAB_109122544;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  _objc_retain(param_1);
  puVar12 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (puVar12 == (undefined *)0x0) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = 0.0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        if (puVar5 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar4);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        fVar19 = fVar19 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar14 = puVar14 + 1;
      } while (puVar12 != puVar14);
      puVar12 = param_1;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0x80;
  uVar18 = 0x3f;
  if (fVar19 <= 1.0) {
    _objc_retain(puVar3);
    puVar12 = puVar14;
    puVar14 = puVar3;
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar12 = param_1, puVar4 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        fVar1 = (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) / fVar19;
        uVar15 = SUB41(fVar1,0);
        uVar16 = (undefined1)((uint)fVar1 >> 8);
        uVar17 = (undefined1)((uint)fVar1 >> 0x10);
        uVar18 = (undefined1)((uint)fVar1 >> 0x18);
        func_0x00010c0df740(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar14);
        _objc_release(puVar8);
        _objc_release(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = param_1;
      func_0x00010bf52a60();
    }
  }
  _objc_release(puVar12);
  puVar12 = param_1;
  func_0x00010bf529e0();
  if (puVar12 == (undefined *)0x1) {
    puVar12 = puVar14;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar4);
    _objc_release(puVar12);
    if ((float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) != 1.0) goto LAB_109122510;
    puVar12 = (undefined *)0x0;
  }
  else {
LAB_109122510:
    puVar12 = PTR_PTR_1126dd678;
    _objc_alloc();
    uVar10 = 0;
    func_0x00010b743894();
  }
  _objc_release(puVar14);
  _objc_release(puVar3);
LAB_109122544:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar10);
    _objc_retain(param_2);
    if (param_2 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(param_2 + 8);
    }
    _objc_retain(uVar13);
    uVar9 = uVar13;
    func_0x00010911d484(uVar13,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar13);
    puVar12 = PTR_PTR_1126bf6c0;
    _objc_alloc(PTR_PTR_1126bf6c0);
    if (param_2 == 0) {
      _objc_retain(0);
      uVar10 = 0;
      uVar13 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(uVar10);
      uVar13 = *(undefined8 *)(param_2 + 0x18);
    }
    _objc_retain(uVar13);
    _objc_release(param_2);
    func_0x00010b743b10(puVar12,uVar9,uVar10,uVar13);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 109122598; end: 109122693;  */

void FUN_109122598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010911d484(uVar3,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126bf6c0;
  _objc_alloc(PTR_PTR_1126bf6c0);
  if (param_1 == 0) {
    _objc_retain(0);
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_retain(uVar4);
  _objc_release(param_1);
  func_0x00010b743b10(puVar2,uVar1,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109122694; end: 10912278f;  */

void FUN_109122694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_109122790;
  puStack_50 = &UNK_110add460;
  _objc_retain();
  puStack_48 = puVar1;
  func_0x00010c0b8600(param_1,param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_90 = puVar2;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x109122824;
  puStack_78 = &UNK_110add460;
  puStack_70 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0b8600(param_1,param_2,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109122790; end: 109122907;  */

undefined8 FUN_109122790(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x000107c318f8(param_2,PTR_DAT_1126a5af8);
  lVar1 = param_2;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010c0eebc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 109122908; end: 109122927;  */

undefined8 FUN_109122908(long param_1,undefined8 param_2)

{
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  return 0;
}



/* Entry: 109122928; end: 109122d9b;  */

bool FUN_109122928(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      lVar5 = *(long *)(lVar6 + 8);
      goto LAB_109122984;
    }
  }
  lVar5 = 0;
LAB_109122984:
  _objc_retain(lVar5);
  _objc_release(lVar6);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  bVar1 = false;
  if (lVar2 == 0) goto LAB_109122b04;
  iVar7 = 0;
  iVar8 = 0;
  iVar9 = 0;
  do {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar5);
      }
      if (*(long *)(lVar10 * 8) == 0) {
LAB_109122a04:
        iVar8 = iVar8 + 1;
      }
      else {
        lVar4 = *(long *)(*(long *)(lVar10 * 8) + 8);
        if (lVar4 == 2) {
          iVar7 = iVar7 + 1;
        }
        else if (lVar4 == 1) {
          iVar9 = iVar9 + 1;
        }
        else if (lVar4 == 0) goto LAB_109122a04;
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    if (lVar2 == 0) {
      _objc_release(lVar5);
      bVar1 = false;
      if (iVar9 != 1) goto LAB_109122b0c;
      if (1 < iVar8) goto LAB_109122b0c;
      if (iVar7 != 0) goto LAB_109122b0c;
      if (param_1 == 0) goto LAB_109122b68;
      lVar6 = *(long *)(param_1 + 8);
      while( true ) {
        _objc_retain(lVar6);
        lVar5 = lVar6;
        FUN_10911c750(lVar6,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar5 + 0x20);
        }
        _objc_retain(lVar6);
        lVar2 = lVar6;
        func_0x00010bf529e0();
        _objc_release(lVar6);
        if (lVar2 == 1) {
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(lVar5 + 0x20);
          }
          _objc_retain(lVar6);
          lVar2 = lVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          if (lVar2 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = *(long *)(lVar2 + 0x10) == 2;
          }
          _objc_release(lVar2);
        }
        else {
          bVar1 = false;
        }
LAB_109122b04:
        _objc_release(lVar5);
LAB_109122b0c:
        _objc_release(param_1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) break;
        ___stack_chk_fail();
LAB_109122b68:
        lVar6 = 0;
      }
      return bVar1;
    }
  } while( true );
}



/* Entry: 109122d9c; end: 109122e17;  */

undefined1 * FUN_109122d9c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_28 = PTR_PTR_112700730;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 109122e18; end: 109122e3b; -[SCNGSMEMediaCompositionCore copyWithZone:] */

undefined8 FUN_109122e18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109122e3c; end: 109122e43; -[SCNGSMEMediaCompositionCore hash] */

void FUN_109122e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 109122e44; end: 109122ed3; -[SCNGSMEMediaCompositionCore isEqual:] */

long FUN_109122e44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109122eb8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_109122eb8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_109122eb8;
    }
  }
  lVar3 = 1;
LAB_109122eb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109122ed4; end: 109122edf; -[SCNGSMEMediaCompositionCore .cxx_destruct] */

void FUN_109122ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109122ee0; end: 109122fa3;  */

undefined1 *
FUN_109122ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_112700738;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar4;
}



/* Entry: 109122fa4; end: 109122fc7; -[SCNGSMEMediaCompositionTrackCore copyWithZone:] */

undefined8 FUN_109122fa4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109122fc8; end: 109123043; -[SCNGSMEMediaCompositionTrackCore hash] */

undefined8 * FUN_109122fc8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1091230e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1091230f0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1091230f0;
        }
        goto LAB_1091230e4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1091230f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 109123044; end: 10912310b; -[SCNGSMEMediaCompositionTrackCore isEqual:] */

long FUN_109123044(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091230e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091230f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1091230f0;
        }
        goto LAB_1091230e4;
      }
    }
    lVar3 = 0;
  }
LAB_1091230f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10912310c; end: 10912313b; -[SCNGSMEMediaCompositionTrackCore .cxx_destruct] */

void FUN_10912310c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10912313c; end: 109123263;  */

undefined1 *
FUN_10912313c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_112700740;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x30) = param_1;
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 109123264; end: 109123287; -[SCNGSMEMediaCompositionTrackSegmentCore copyWithZone:] */

undefined8 FUN_109123264(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109123288; end: 10912333b; -[SCNGSMEMediaCompositionTrackSegmentCore hash] */

undefined8 * FUN_109123288(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_38 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_109123430:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10912343c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[2] == param_3[2])) {
      dVar10 = ABS((double)puVar4[6] - (double)param_3[6]);
      dVar9 = ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
      {
        puVar8 = (undefined8 *)puVar4[5];
        if (puVar8 != (undefined8 *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_10912343c;
        }
        goto LAB_109123430;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10912343c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10912333c; end: 109123457; -[SCNGSMEMediaCompositionTrackSegmentCore isEqual:] */

long FUN_10912333c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109123430:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10912343c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10912343c;
        }
        goto LAB_109123430;
      }
    }
    lVar4 = 0;
  }
LAB_10912343c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 109123458; end: 109123513; -[SCNGSMEMediaCompositionTrackSegmentCore .cxx_destruct] */

void FUN_109123458(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109123514; end: 109123537; -[SCNGSMEMediaCompositionTransforms copyWithZone:] */

undefined8 FUN_109123514(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109123538; end: 10912370b; -[SCNGSMEMediaCompositionTransforms hash] */

ulong * FUN_109123538(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_78 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_70 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_68 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_60 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_58 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_50 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_48 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_40 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_38 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar4 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar2 = &uStack_78;
  func_0x000107c3191c(puVar2,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar5 = (ulong *)0x1;
  }
  else {
    puVar5 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar5 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if (((ulong)puVar3 & 1) != 0) {
        uStack_d8 = puVar2[2];
        uStack_e0 = puVar2[1];
        uStack_c8 = puVar2[4];
        uStack_d0 = puVar2[3];
        uStack_b8 = puVar2[6];
        uStack_c0 = puVar2[5];
        uStack_108 = param_3[2];
        uStack_110 = param_3[1];
        uStack_f8 = param_3[4];
        uStack_100 = param_3[3];
        uStack_e8 = param_3[6];
        uStack_f0 = param_3[5];
        puVar5 = &uStack_e0;
        _CGAffineTransformEqualToTransform(puVar5,&uStack_110);
        if ((int)puVar5 != 0) {
          uStack_d8 = puVar2[8];
          uStack_e0 = puVar2[7];
          uStack_c8 = puVar2[10];
          uStack_d0 = puVar2[9];
          uStack_b8 = puVar2[0xc];
          uStack_c0 = puVar2[0xb];
          uStack_108 = param_3[8];
          uStack_110 = param_3[7];
          uStack_f8 = param_3[10];
          uStack_100 = param_3[9];
          uStack_e8 = param_3[0xc];
          uStack_f0 = param_3[0xb];
          puVar5 = &uStack_e0;
          _CGAffineTransformEqualToTransform(puVar5,&uStack_110);
          goto LAB_1091237dc;
        }
      }
      puVar5 = (ulong *)0x0;
    }
  }
LAB_1091237dc:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10912370c; end: 1091237fb; -[SCNGSMEMediaCompositionTransforms isEqual:] */

undefined8 * FUN_10912370c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
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
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    puVar3 = (undefined8 *)0x1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) != 0) {
        uStack_58 = *(undefined8 *)(param_1 + 0x10);
        uStack_60 = *(undefined8 *)(param_1 + 8);
        uStack_48 = *(undefined8 *)(param_1 + 0x20);
        uStack_50 = *(undefined8 *)(param_1 + 0x18);
        uStack_38 = *(undefined8 *)(param_1 + 0x30);
        uStack_40 = *(undefined8 *)(param_1 + 0x28);
        uStack_88 = *(undefined8 *)(param_3 + 0x10);
        uStack_90 = *(undefined8 *)(param_3 + 8);
        uStack_78 = *(undefined8 *)(param_3 + 0x20);
        uStack_80 = *(undefined8 *)(param_3 + 0x18);
        uStack_68 = *(undefined8 *)(param_3 + 0x30);
        uStack_70 = *(undefined8 *)(param_3 + 0x28);
        puVar3 = &uStack_60;
        _CGAffineTransformEqualToTransform(puVar3,&uStack_90);
        if ((int)puVar3 != 0) {
          uStack_58 = *(undefined8 *)(param_1 + 0x40);
          uStack_60 = *(undefined8 *)(param_1 + 0x38);
          uStack_48 = *(undefined8 *)(param_1 + 0x50);
          uStack_50 = *(undefined8 *)(param_1 + 0x48);
          uStack_38 = *(undefined8 *)(param_1 + 0x60);
          uStack_40 = *(undefined8 *)(param_1 + 0x58);
          uStack_88 = *(undefined8 *)(param_3 + 0x40);
          uStack_90 = *(undefined8 *)(param_3 + 0x38);
          uStack_78 = *(undefined8 *)(param_3 + 0x50);
          uStack_80 = *(undefined8 *)(param_3 + 0x48);
          uStack_68 = *(undefined8 *)(param_3 + 0x60);
          uStack_70 = *(undefined8 *)(param_3 + 0x58);
          puVar3 = &uStack_60;
          _CGAffineTransformEqualToTransform(puVar3,&uStack_90);
          goto LAB_1091237dc;
        }
      }
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_1091237dc:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1091237fc; end: 109123853;  */

void FUN_1091237fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    param_1[5] = *(undefined8 *)(param_2 + 0x30);
    param_1[4] = uVar1;
    return;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 109123854; end: 109123997; +[SCSnapDocGridUtil encodeFloat:originalUnit:encodeUnit:] */

undefined *
FUN_109123854(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92f20(param_2);
  puVar3 = param_3;
  func_0x00010c296de0();
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_4);
  __Unwind_Resume(puVar5);
  puVar1 = PTR_PTR_1126b7828;
  _objc_opt_new(PTR_PTR_1126b7828);
  func_0x00010befc800();
  _objc_retain(puVar1);
  puVar5 = PTR_PTR_1126bcef8;
  _objc_retain(puVar1);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar1);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bf66e20(param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar5;
  func_0x00010bfb1920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 109123998; end: 109123a9f; +[SCSnapDocGridUtil decodeFloat:originalUnit:encodeUnit:] */

double FUN_109123998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b7828;
  uVar6 = param_1;
  _objc_opt_new(PTR_PTR_1126b7828);
  fVar5 = (float)uVar6;
  func_0x00010befc800();
  _objc_retain(puVar1);
  puVar4 = PTR_PTR_1126bcef8;
  _objc_retain(puVar1);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar1);
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010bf66e20(param_1,puVar4,param_3,puVar1,0,param_5);
    fVar5 = (float)param_1;
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar4;
  func_0x00010bfb1920(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return (double)fVar5;
}



/* Entry: 109123aa0; end: 109123c8b; +[SCSnapDocGridUtil encodeFloatArrays:originalUnit:encodeUnit:] */

undefined1  [16]
FUN_109123aa0(float param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  int iVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  float fVar18;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_100 [128];
  long lStack_80;
  ulong uVar19;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar16 = PTR_PTR_1126beb00;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b7828;
  _objc_opt_new();
  uVar19 = 0;
  _objc_retain(param_4);
  puVar9 = auStack_100;
  uVar10 = 0x10;
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  fVar18 = (float)uVar19;
  if (lVar3 != 0) {
    do {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar14 = *(ulong *)(lVar17 * 8);
        uVar10 = uVar14;
        func_0x00010bf529e0();
        if (uVar10 != 0) {
          iVar12 = 0;
          uVar10 = 0;
          do {
            fVar18 = (float)uVar19;
            uVar4 = uVar14;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            fVar18 = (float)(int)((fVar18 / param_1) * (float)param_5) - (float)iVar12;
            uVar19 = (ulong)(uint)fVar18;
            _objc_release(uVar4);
            iVar12 = iVar12 + (int)fVar18;
            func_0x00010befc800(puVar2);
            uVar10 = uVar10 + 1;
            uVar4 = uVar14;
            func_0x00010bf529e0();
          } while (uVar10 < uVar4);
        }
        func_0x00010bf529e0(uVar14);
        func_0x00010befc800(puVar16);
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar3);
      puVar9 = auStack_100;
      uVar10 = 0x10;
      lVar3 = param_4;
      func_0x00010bf52a60();
      fVar18 = (float)uVar19;
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  puVar8 = puVar16;
  func_0x00010bf529e0();
  puVar8 = puVar8 + -1;
  func_0x00010c12efe0(puVar16);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    auVar21._8_8_ = puVar16;
    auVar21._0_8_ = puVar2;
    return auVar21;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar16 = (undefined *)0x0;
  puVar13 = (undefined1 *)0x0;
  while( true ) {
    puVar5 = puVar9;
    func_0x00010bf529e0();
    if (puVar5 + 1 <= puVar13) break;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar5 = puVar9;
    func_0x00010bf529e0();
    if (puVar13 < puVar5) {
      puVar5 = puVar9;
      func_0x00010c296de0();
      puVar11 = (undefined *)((ulong)puVar5 & 0xffffffff);
    }
    else {
      puVar11 = puVar8;
      func_0x00010bf529e0();
      puVar11 = puVar11 + ~(ulong)puVar16;
    }
    if (puVar11 != (undefined *)0xffffffffffffffff) {
      fVar20 = 0.0;
      puVar15 = puVar11 + 1;
      do {
        puVar7 = puVar8;
        func_0x00010c296de0(puVar8);
        fVar20 = fVar20 + fVar18 * ((float)(int)puVar7 / (float)uVar10);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df740(fVar20,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar7);
        puVar15 = puVar15 + -1;
      } while (puVar15 != (undefined *)0x0);
    }
    func_0x00010befa120(puVar2);
    puVar16 = puVar11 + 1 + (long)puVar16;
    _objc_release(puVar6);
    puVar13 = puVar13 + 1;
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  auVar22._8_8_ = param_3;
  auVar22._0_8_ = puVar2;
  return auVar22;
}



/* Entry: 109123c8c; end: 109123e47; +[SCSnapDocGridUtil decodeFloatArraysFromEncodedArray:originalUnit:encodeUnit:] */

void FUN_109123c8c(float param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar9 = 0;
  uVar7 = 0;
  while( true ) {
    uVar6 = param_5;
    func_0x00010bf529e0();
    if (uVar6 + 1 <= uVar7) break;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar6 = param_5;
    func_0x00010bf529e0();
    if (uVar7 < uVar6) {
      uVar6 = param_5;
      func_0x00010c296de0(param_5,param_3,uVar7);
      uVar6 = uVar6 & 0xffffffff;
    }
    else {
      lVar3 = param_4;
      func_0x00010bf529e0();
      uVar6 = lVar3 + ~uVar9;
    }
    if (uVar6 != 0xffffffffffffffff) {
      fVar10 = 0.0;
      uVar8 = uVar9;
      lVar3 = uVar6 + 1;
      do {
        lVar4 = param_4;
        func_0x00010c296de0(param_4,param_3,uVar8);
        fVar10 = fVar10 + param_1 * ((float)(int)lVar4 / (float)param_6);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df740(fVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_3,puVar5);
        _objc_release(puVar5);
        uVar8 = uVar8 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    func_0x00010befa120(puVar1,param_3,puVar2);
    uVar9 = uVar6 + 1 + uVar9;
    _objc_release(puVar2);
    uVar7 = uVar7 + 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109123e48; end: 10912402f; +[SCSnapDocGridUtil encodeUintArrays:originalUnit:encodeUnit:] */

undefined1  [16] FUN_109123e48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126beb00;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126beb00;
  _objc_opt_new();
  _objc_retain(param_3);
  puVar9 = auStack_f0;
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      uVar14 = uVar13;
      func_0x00010bf529e0();
      if (uVar14 != 0) {
        uVar14 = 0;
        do {
          uVar5 = uVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(uVar5);
          func_0x00010befc800(puVar3);
          uVar14 = uVar14 + 1;
          uVar5 = uVar13;
          func_0x00010bf529e0();
        } while (uVar14 < uVar5);
      }
      func_0x00010bf529e0(uVar13);
      func_0x00010befc800(puVar2);
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar4);
    puVar9 = auStack_f0;
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar8 = puVar2;
  func_0x00010bf529e0();
  puVar8 = puVar8 + -1;
  func_0x00010c12efe0(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar15._8_8_ = puVar2;
    auVar15._0_8_ = puVar3;
    return auVar15;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar12 = (undefined1 *)0x0;
  do {
    puVar6 = puVar9;
    func_0x00010bf529e0();
    if (puVar6 + 1 <= puVar12) {
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar8);
      _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
      auVar16._8_8_ = param_2;
      auVar16._0_8_ = puVar2;
      return auVar16;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar6 = puVar9;
    func_0x00010bf529e0();
    if (puVar12 < puVar6) {
      puVar6 = puVar9;
      func_0x00010c296de0();
      puVar11 = (undefined *)((ulong)puVar6 & 0xffffffff);
LAB_1091240f0:
      puVar11 = puVar11 + 1;
      do {
        func_0x00010c296de0(puVar8);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar7);
        puVar11 = puVar11 + -1;
      } while (puVar11 != (undefined *)0x0);
    }
    else {
      puVar11 = puVar8;
      func_0x00010bf529e0();
      puVar11 = puVar11 + ~(ulong)puVar12;
      if (puVar11 != (undefined *)0xffffffffffffffff) goto LAB_1091240f0;
    }
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    puVar12 = puVar12 + 1;
  } while( true );
}


