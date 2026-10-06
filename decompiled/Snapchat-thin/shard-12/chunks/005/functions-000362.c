/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109217414; end: 10921751f; -[YYImage encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109217414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112783bec;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    puStack_48 = PTR_PTR_1127010a0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_encodeWithCoder__1125c2658,param_3);
  }
  else {
    func_0x00010c14e120(param_1);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf63640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 109217520; end: 109217527; +[YYImage supportsSecureCoding] */

undefined8 FUN_109217520(void)

{
  return 1;
}



/* Entry: 109217528; end: 109217537; -[YYImage animatedImageFrameCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109217528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb6b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112783bec),PTR_s_frameCount_1125cb470);
  return;
}



/* Entry: 109217538; end: 109217547; -[YYImage animatedImageLoopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109217538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112783bec),PTR_s_loopCount_11260afe8);
  return;
}



/* Entry: 109217548; end: 109217557; -[YYImage animatedImageBytesPerFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109217548(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783bf0);
}



/* Entry: 109217558; end: 109217653; -[YYImage animatedImageFrameAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109217558(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112783bec;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bfb6b20();
  if (param_3 < uVar1) {
    lVar6 = (long)_DAT_112783be4;
    _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar6),0xffffffffffffffff);
    puVar2 = *(undefined **)(param_1 + _DAT_112783c00);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + lVar6));
    if (puVar2 == (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + lVar5);
      func_0x00010bfb6920(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined *)0x0;
      if (puVar2 != puVar3) {
        puVar4 = puVar2;
      }
      _objc_retain(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109217654; end: 1092176d3; -[YYImage animatedImageDurationAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109217654(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112783bf8;
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
    param_1 = 0x3fb99999a0000000;
  }
  return param_1;
}



/* Entry: 1092176d4; end: 1092176e3; -[YYImage animatedImageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1092176d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783be8);
}



/* Entry: 1092176e4; end: 1092176f3; -[YYImage animatedImageMemorySize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1092176e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783bf4);
}



/* Entry: 1092176f4; end: 109217703; -[YYImage preloadAllAnimatedImageFrames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1092176f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783bfc);
}



/* Entry: 109217704; end: 109217763; -[YYImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109217704(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783bf8,0);
  _objc_storeStrong(param_1 + _DAT_112783be4,0);
  _objc_storeStrong(param_1 + _DAT_112783c00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783bec,0);
  return;
}



/* Entry: 109217764; end: 1092177e7;  */

void FUN_109217764(double param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar2);
  uVar1 = ppuRam0000000113732a08;
  ppuRam0000000113732a08 = &PTR__OBJC_CLASS___NSConstantArray_111183968;
  if (param_1 <= 2.0) {
    ppuRam0000000113732a08 = &PTR__OBJC_CLASS___NSConstantArray_111183950;
  }
  if (param_1 <= 1.0) {
    ppuRam0000000113732a08 = &PTR__OBJC_CLASS___NSConstantArray_111183938;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092177e8; end: 109217877;  */

void FUN_1092177e8(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11f2a0();
  if (2 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c11f2a0(param_3);
    func_0x00010c11f2a0(param_3);
    func_0x00010c260c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109217878; end: 109217893;  */

void FUN_109217878(undefined8 param_1)

{
  _CGColorSpaceCreateDeviceRGB();
  uRam0000000113732a18 = param_1;
  return;
}



/* Entry: 109217894; end: 10921797f;  */

long FUN_109217894(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  uVar1 = param_1;
  _CGImageGetWidth();
  uVar2 = param_1;
  _CGImageGetHeight();
  if ((uVar1 != 0) && (uVar2 != 0)) {
    _CGImageGetAlphaInfo();
    uVar5 = 0x2002;
    if (3 < ((uint)param_1 & 0x1f) - 1) {
      uVar5 = 0x2006;
    }
    if (lRam0000000113732a20 != -1) {
      func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
    }
    lVar3 = 0;
    _CGBitmapContextCreate(0,uVar1,uVar2,8,0,uRam0000000113732a18,uVar5);
    if (lVar3 != 0) {
      _CGContextDrawImage(0,0,(double)uVar1,(double)uVar2);
      lVar4 = lVar3;
      _CGBitmapContextCreateImage(lVar3);
      _CFRelease(lVar3);
      return lVar4;
    }
  }
  return 0;
}



/* Entry: 109217980; end: 109217d43;  */

undefined8 FUN_109217980(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar4 = param_1;
  _CGImageGetWidth();
  puVar5 = param_1;
  _CGImageGetHeight();
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = (param_3 & 0x1f) - 1;
  if (5 < uVar3) {
    return 0;
  }
  uVar1 = param_3 & 0x7000;
  if (uVar1 == 0x4000) {
LAB_1092179f8:
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
    if (uVar1 != 0x2000) {
      if ((param_3 & 0x7000) != 0) {
        return 0;
      }
      goto LAB_1092179f8;
    }
  }
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0x2000000008;
  if (lRam0000000113732a20 != -1) {
    func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
  }
  uStack_c8 = uRam0000000113732a18;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,param_3);
  *param_2 = 0;
  if (PTR__vImageConvert_AnyToAny_1103479b0 != (undefined *)0x0) {
    puVar6 = param_1;
    _CGImageGetWidth();
    puVar7 = param_1;
    _CGImageGetHeight();
    if ((puVar6 != (undefined8 *)0x0) && (puVar7 != (undefined8 *)0x0)) {
      *param_2 = 0;
      puStack_78 = (undefined8 *)0x0;
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      puVar8 = param_1;
      _CGImageGetBitsPerComponent();
      uStack_88 = (undefined8 *)CONCAT44(uStack_88._4_4_,(int)puVar8);
      puVar8 = param_1;
      _CGImageGetBitsPerPixel();
      uStack_88 = (undefined8 *)CONCAT44((int)puVar8,(undefined4)uStack_88);
      puVar8 = param_1;
      _CGImageGetColorSpace();
      puVar12 = param_1;
      puStack_80 = puVar8;
      _CGImageGetBitmapInfo();
      puVar8 = param_1;
      _CGImageGetAlphaInfo();
      puStack_78 = (undefined8 *)CONCAT44(puStack_78._4_4_,(uint)puVar8 | (uint)puVar12);
      puVar8 = &uStack_88;
      _vImageConverter_CreateWithCGImageFormat(puVar8,&uStack_d0,0,0,0);
      if (puVar8 != (undefined8 *)0x0) {
        puVar12 = param_1;
        _CGImageGetDataProvider();
        if ((puVar12 != (undefined8 *)0x0) &&
           (_CGDataProviderCopyData(), puVar12 != (undefined8 *)0x0)) {
          puVar9 = puVar12;
          _CFDataGetLength();
          puVar10 = puVar12;
          _CFDataGetBytePtr();
          if ((puVar9 != (undefined8 *)0x0) && (puVar10 != (undefined8 *)0x0)) {
            puStack_a8 = puVar10;
            puStack_a0 = puVar7;
            puStack_98 = puVar6;
            _CGImageGetBytesPerRow();
            plVar11 = param_2;
            puStack_90 = param_1;
            _vImageBuffer_Init(param_2,puVar7,puVar6,0x20,0);
            if ((plVar11 == (long *)0x0) &&
               (puVar6 = puVar8, _vImageConvert_AnyToAny(puVar8,&puStack_a8,param_2,0,0),
               puVar6 == (undefined8 *)0x0)) {
              _CFRelease(puVar8);
              goto LAB_109217ce8;
            }
          }
          _CFRelease(puVar8);
          puVar8 = puVar12;
        }
        _CFRelease(puVar8);
      }
      if (*param_2 != 0) {
        _free();
      }
      *param_2 = 0;
    }
  }
  uVar2 = 3U >> (ulong)(uVar3 & 0x1f) | 0x30U >> (ulong)(uVar3 & 0x1f);
  uVar13 = 1;
  if ((uVar3 & 1) != 0) {
    uVar13 = 2;
  }
  uVar1 = uVar13 | uVar1;
  if ((uVar2 & 1) != 0) {
    uVar1 = param_3 & 0x701f;
  }
  if (lRam0000000113732a20 != -1) {
    func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
  }
  puVar12 = (undefined8 *)0x0;
  _CGBitmapContextCreate(0,puVar4,puVar5,8,0,uRam0000000113732a18,uVar1);
  if (puVar12 != (undefined8 *)0x0) {
    _CGContextDrawImage(0,0,(double)puVar4,(double)puVar5);
    puVar6 = puVar12;
    _CGBitmapContextGetBytesPerRow();
    lVar15 = (long)puVar6 * (long)puVar5;
    puVar7 = puVar12;
    _CGBitmapContextGetData();
    if ((lVar15 != 0) && (puVar7 != (undefined8 *)0x0)) {
      _malloc();
      *param_2 = lVar15;
      param_2[1] = (long)puVar5;
      param_2[2] = (long)puVar4;
      param_2[3] = (long)puVar6;
      if (lVar15 != 0) {
        if ((uVar2 & 1) != 0) {
          _memcpy();
LAB_109217ce8:
          _CFRelease(puVar12);
          return 1;
        }
        puVar8 = &uStack_88;
        uStack_88 = puVar7;
        puStack_80 = puVar5;
        puStack_78 = puVar4;
        puStack_70 = puVar6;
        if ((uVar14 & uVar3) == 1) {
          _vImageUnpremultiplyData_ARGB8888(puVar8,param_2,0);
        }
        else {
          _vImageUnpremultiplyData_RGBA8888(puVar8,param_2,0);
        }
        if (puVar8 == (undefined8 *)0x0) goto LAB_109217ce8;
      }
    }
    _CFRelease(puVar12);
  }
  if (*param_2 != 0) {
    _free();
  }
  *param_2 = 0;
  return 0;
}



/* Entry: 109217d44; end: 109217d4f;  */

void FUN_109217d44(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 109217d50; end: 109218313;  */

ulong FUN_109217d50(ulong param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [8];
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)(param_1);
    return param_1;
  }
  uVar6 = param_1;
  _CGImageGetWidth();
  uVar5 = param_1;
  _CGImageGetHeight();
  bVar1 = false;
  uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  lStack_120 = *(long *)PTR__CGAffineTransformIdentity_110347008;
  uStack_108 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_110 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_100 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  if (param_2 < 4) {
    if (param_2 == 1) {
      _CGAffineTransformMakeRotation(&lStack_120,0x400921fb54442d18);
      uStack_148 = uStack_118;
      lStack_150 = lStack_120;
      uStack_138 = uStack_108;
      uStack_140 = uStack_110;
      uStack_128 = uStack_f8;
      uStack_130 = uStack_100;
      _CGAffineTransformTranslate(&lStack_e0,-(double)uVar6,-(double)uVar5,&lStack_150);
      goto LAB_109217f64;
    }
    if (param_2 == 2) {
      _CGAffineTransformMakeRotation(&lStack_120,0x3ff921fb54442d18);
      dVar13 = -0.0;
      goto LAB_109218008;
    }
    if (param_2 != 3) goto LAB_109218028;
    _CGAffineTransformMakeRotation(&lStack_120,0xbff921fb54442d18);
    dVar13 = -(double)uVar6;
    dVar15 = 0.0;
LAB_109218010:
    lStack_150 = lStack_120;
    uStack_148 = uStack_118;
    uStack_140 = uStack_110;
    uStack_138 = uStack_108;
    uStack_130 = uStack_100;
    uStack_128 = uStack_f8;
    _CGAffineTransformTranslate(&lStack_e0,dVar13,dVar15,&lStack_150);
LAB_109218014:
    uStack_118 = uStack_d8;
    lStack_120 = lStack_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    bVar1 = true;
  }
  else if (param_2 < 6) {
    lStack_e0 = lStack_120;
    uStack_d8 = uStack_118;
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    uStack_c0 = uStack_100;
    uStack_b8 = uStack_f8;
    if (param_2 == 4) {
      _CGAffineTransformTranslate(&lStack_120,(double)uVar6,0,&lStack_e0);
      uVar12 = 0xbff0000000000000;
      uVar14 = 0x3ff0000000000000;
    }
    else {
      if (param_2 != 5) goto LAB_109218028;
      _CGAffineTransformTranslate(&lStack_120,0,(double)uVar5,&lStack_e0);
      uVar12 = 0x3ff0000000000000;
      uVar14 = 0xbff0000000000000;
    }
    lStack_150 = lStack_120;
    uStack_148 = uStack_118;
    uStack_140 = uStack_110;
    uStack_138 = uStack_108;
    uStack_130 = uStack_100;
    uStack_128 = uStack_f8;
    _CGAffineTransformScale(&lStack_e0,uVar12,uVar14,&lStack_150);
LAB_109217f64:
    bVar1 = false;
    uStack_118 = uStack_d8;
    lStack_120 = lStack_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
  }
  else {
    if (param_2 == 6) {
      _CGAffineTransformMakeRotation(&lStack_120,0xbff921fb54442d18);
      uStack_148 = uStack_118;
      lStack_150 = lStack_120;
      uStack_138 = uStack_108;
      uStack_140 = uStack_110;
      uStack_128 = uStack_f8;
      uStack_130 = uStack_100;
      _CGAffineTransformScale(&lStack_e0,0x3ff0000000000000,0xbff0000000000000,&lStack_150);
      uStack_108 = uStack_c8;
      uStack_110 = uStack_d0;
      uStack_f8 = uStack_b8;
      uStack_100 = uStack_c0;
      uStack_118 = uStack_d8;
      lStack_120 = lStack_e0;
      dVar13 = -(double)uVar6;
LAB_109218008:
      dVar15 = -(double)uVar5;
      goto LAB_109218010;
    }
    if (param_2 == 7) {
      _CGAffineTransformMakeRotation(&lStack_120,0x3ff921fb54442d18);
      uStack_148 = uStack_118;
      lStack_150 = lStack_120;
      uStack_138 = uStack_108;
      uStack_140 = uStack_110;
      uStack_128 = uStack_f8;
      uStack_130 = uStack_100;
      _CGAffineTransformScale(&lStack_e0,0x3ff0000000000000,0xbff0000000000000,&lStack_150);
      goto LAB_109218014;
    }
  }
LAB_109218028:
  uStack_d8 = uStack_118;
  lStack_e0 = lStack_120;
  uStack_c8 = uStack_108;
  uStack_d0 = uStack_110;
  uStack_b8 = uStack_f8;
  uStack_c0 = uStack_100;
  iVar2 = (int)&lStack_e0;
  _CGAffineTransformIsIdentity();
  if (iVar2 != 0) {
    _CFRetain(param_1);
    return param_1;
  }
  uVar8 = param_1;
  _CGImageGetWidth();
  uVar3 = param_1;
  _CGImageGetHeight();
  dVar15 = (double)uVar6;
  dVar13 = (double)uVar5;
  if (!bVar1) {
    dVar15 = (double)uVar5;
    dVar13 = (double)uVar6;
  }
  if (uVar8 == 0) {
    return 0;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uVar6 = (ulong)dVar13;
  lVar7 = (long)dVar15;
  if (uVar6 == 0 || lVar7 == 0) {
    return 0;
  }
  uStack_148 = 0;
  lStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  alStack_b0[5] = 0;
  alStack_b0[6] = 0;
  alStack_b0[7] = 0;
  alStack_b0[1] = 0;
  alStack_b0[0] = 0;
  alStack_b0[3] = 0;
  alStack_b0[2] = 0;
  FUN_109217980(param_1,&lStack_150,4);
  if ((int)param_1 == 0) {
    return 0;
  }
  uVar5 = uVar6 * 4 + 0x1f & 0xffffffffffffffe0;
  lVar9 = uVar5 * lVar7;
  lVar11 = lVar9;
  _malloc();
  alStack_b0[4] = lVar11;
  if (lVar11 == 0) {
LAB_109218124:
    lVar11 = 0;
LAB_109218128:
    lVar10 = 0;
LAB_10921812c:
    uVar8 = 0;
  }
  else {
    uStack_d8 = uStack_118;
    lStack_e0 = lStack_120;
    uStack_c8 = uStack_108;
    uStack_d0 = uStack_110;
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    uStack_e4 = 0;
    plVar4 = &lStack_150;
    alStack_b0[5] = lVar7;
    alStack_b0[6] = uVar6;
    alStack_b0[7] = uVar5;
    _vImageAffineWarpCG_ARGB8888(plVar4,alStack_b0 + 4,0,&lStack_e0,&uStack_e4,4);
    if (plVar4 != (long *)0x0) goto LAB_109218124;
    _free(lStack_150);
    lStack_150 = 0;
    lVar11 = alStack_b0[4];
    _CGDataProviderCreateWithData(alStack_b0[4],alStack_b0[4],lVar9,FUN_109217d44);
    if (lVar11 == 0) goto LAB_109218128;
    alStack_b0[4] = 0;
    if (lRam0000000113732a20 != -1) {
      func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
    }
    uVar8 = uVar6;
    _CGImageCreate(uVar6,lVar7,8,0x20,uVar5,uRam0000000113732a18,4,lVar11,0,0,0);
    if (uVar8 != 0) {
      _CFRelease(lVar11);
      if ((((uint)param_3 & 0x1f) == 4) && (((uint)param_3 & 0x7000) != 0x2000)) {
        return uVar8;
      }
      uVar3 = uVar8;
      FUN_109217980(uVar8,alStack_b0,param_3);
      if ((int)uVar3 == 0) {
        lVar11 = 0;
        goto LAB_1092182d4;
      }
      _CFRelease(uVar8);
      lVar10 = alStack_b0[0];
      _CGDataProviderCreateWithData(alStack_b0[0],alStack_b0[0],lVar9,FUN_109217d44);
      if (lVar10 != 0) {
        alStack_b0[0] = 0;
        if (lRam0000000113732a20 != -1) {
          func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
        }
        _CGImageCreate(uVar6,lVar7,8,0x20,uVar5,uRam0000000113732a18,param_3,lVar10,0,0,0);
        if (uVar6 != 0) goto LAB_109218178;
      }
      lVar11 = 0;
      goto LAB_10921812c;
    }
LAB_1092182d4:
    lVar10 = 0;
  }
  if (lStack_150 != 0) {
    _free();
  }
  if (alStack_b0[4] != 0) {
    _free();
  }
  if (alStack_b0[0] != 0) {
    _free();
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (uVar8 != 0) {
    _CFRelease(uVar8);
  }
  uVar6 = 0;
  if (lVar10 == 0) {
    return 0;
  }
LAB_109218178:
  _CFRelease(lVar10);
  return uVar6;
}



/* Entry: 109218314; end: 1092183d7;  */

undefined8 FUN_109218314(long param_1)

{
  undefined8 *puVar1;
  
  if (param_1 < 5) {
    if (param_1 < 3) {
      puVar1 = (undefined8 *)PTR__kUTTypeJPEG_11034b1d8;
      if ((param_1 != 1) && (puVar1 = (undefined8 *)PTR__kUTTypeJPEG2000_11034b1e0, param_1 != 2)) {
        return 0;
      }
    }
    else {
      puVar1 = (undefined8 *)PTR__kUTTypeTIFF_11034b208;
      if ((param_1 != 3) && (puVar1 = (undefined8 *)PTR__kUTTypeBMP_11034b1b8, param_1 != 4)) {
        return 0;
      }
    }
  }
  else if (param_1 < 7) {
    puVar1 = (undefined8 *)PTR__kUTTypeICO_11034b1c8;
    if ((param_1 != 5) && (puVar1 = (undefined8 *)PTR__kUTTypeAppleICNS_11034b1b0, param_1 != 6)) {
      return 0;
    }
  }
  else {
    puVar1 = (undefined8 *)PTR__kUTTypeGIF_11034b1c0;
    if ((param_1 != 7) && (puVar1 = (undefined8 *)PTR__kUTTypePNG_11034b1f0, param_1 != 8)) {
      return 0;
    }
  }
  return *puVar1;
}



/* Entry: 1092183d8; end: 10921853b;  */

undefined * FUN_1092183d8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)PTR__kUTTypePNG_11034b1f0;
  puVar3 = param_1;
  if (lVar6 == 0) {
LAB_1092184dc:
    puVar5 = (undefined *)0x0;
    goto LAB_109218504;
  }
  puVar5 = param_1;
  _CFAllocatorGetDefault();
  _CFDataCreateMutable();
  puVar3 = puVar5;
  if (puVar5 == (undefined *)0x0) goto LAB_109218504;
  param_3 = (undefined *)0x1;
  puVar1 = puVar5;
  _CGImageDestinationCreateWithData(puVar5,lVar6,1,0);
  if (puVar1 == (undefined *)0x0) {
    _CFRelease(puVar5);
    puVar3 = puVar5;
    goto LAB_1092184dc;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  param_3 = puVar3;
  _CGImageDestinationAddImage(puVar1,param_1,puVar3);
  puVar2 = puVar1;
  _CGImageDestinationFinalize();
  if (((ulong)puVar2 & 1) == 0) {
    _CFRelease(puVar5);
LAB_1092184f0:
    _CFRelease(puVar1);
    puVar5 = (undefined *)0x0;
  }
  else {
    _CFRelease(puVar1);
    puVar2 = puVar5;
    _CFDataGetLength();
    puVar1 = puVar5;
    if (puVar2 == (undefined *)0x0) goto LAB_1092184f0;
  }
  _objc_release(puVar3);
LAB_109218504:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_opt_new(puVar3);
    func_0x00010c1a9f00();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  return puVar5;
}



/* Entry: 10921853c; end: 109218583; +[YYImageFrame frameWithImage:] */

void FUN_10921853c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_new(param_1);
  func_0x00010c1a9f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109218584; end: 10921862b; -[YYImageFrame copyWithZone:] */

long FUN_109218584(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_opt_class();
  _objc_opt_new();
  func_0x00010c1abfe0();
  func_0x00010c2256c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1a7d00(lVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1d0ca0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1d0cc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c192d40(*(undefined8 *)(param_1 + 0x30),lVar1);
  func_0x00010c190980(lVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c171960(lVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1a9f00(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  return lVar1;
}



/* Entry: 10921862c; end: 109218633; -[YYImageFrame index] */

undefined8 FUN_10921862c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109218634; end: 10921863b; -[YYImageFrame setIndex:] */

void FUN_109218634(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10921863c; end: 109218643; -[YYImageFrame width] */

undefined8 FUN_10921863c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109218644; end: 10921864b; -[YYImageFrame setWidth:] */

void FUN_109218644(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10921864c; end: 109218653; -[YYImageFrame height] */

undefined8 FUN_10921864c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109218654; end: 10921865b; -[YYImageFrame setHeight:] */

void FUN_109218654(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10921865c; end: 109218663; -[YYImageFrame offsetX] */

undefined8 FUN_10921865c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109218664; end: 10921866b; -[YYImageFrame setOffsetX:] */

void FUN_109218664(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10921866c; end: 109218673; -[YYImageFrame offsetY] */

undefined8 FUN_10921866c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109218674; end: 10921867b; -[YYImageFrame setOffsetY:] */

void FUN_109218674(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10921867c; end: 109218683; -[YYImageFrame duration] */

undefined8 FUN_10921867c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109218684; end: 10921868b; -[YYImageFrame setDuration:] */

void FUN_109218684(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10921868c; end: 109218693; -[YYImageFrame dispose] */

undefined8 FUN_10921868c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109218694; end: 10921869b; -[YYImageFrame setDispose:] */

void FUN_109218694(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10921869c; end: 1092186a3; -[YYImageFrame blend] */

undefined8 FUN_10921869c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1092186a4; end: 1092186ab; -[YYImageFrame setBlend:] */

void FUN_1092186a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1092186ac; end: 1092186b3; -[YYImageFrame image] */

undefined8 FUN_1092186ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1092186b4; end: 1092186e3; -[YYImageFrame setImage:] */

void FUN_1092186b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092186e4; end: 1092186ef; -[YYImageFrame .cxx_destruct] */

void FUN_1092186e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 1092186f0; end: 109218757; -[_YYImageDecoderFrame copyWithZone:] */

undefined1 * FUN_1092186f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127010a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_copyWithZone__1125b2238);
  func_0x00010c1a5840();
  func_0x00010c1b1640(puVar1);
  func_0x00010c1719a0(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 109218758; end: 10921875f; -[_YYImageDecoderFrame hasAlpha] */

undefined1 FUN_109218758(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 109218760; end: 109218767; -[_YYImageDecoderFrame setHasAlpha:] */

void FUN_109218760(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 109218768; end: 10921876f; -[_YYImageDecoderFrame isFullSize] */

undefined1 FUN_109218768(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 109218770; end: 109218777; -[_YYImageDecoderFrame setIsFullSize:] */

void FUN_109218770(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 109218778; end: 10921877f; -[_YYImageDecoderFrame blendFromIndex] */

undefined8 FUN_109218778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109218780; end: 109218787; -[_YYImageDecoderFrame setBlendFromIndex:] */

void FUN_109218780(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 109218788; end: 10921884b; -[YYImageDecoder dealloc] */

void FUN_109218788(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000109218800();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x0001082210c4();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    _CFRelease();
  }
  _pthread_mutex_destroy(param_1 + 8);
  puStack_28 = PTR_PTR_1127010b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10921884c; end: 1092188db; +[YYImageDecoder decoderWithData:scale:] */

void FUN_10921884c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3d50;
  puVar2 = (undefined *)0x0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc();
    func_0x00010c0416c0(param_1);
    func_0x00010c284e80();
    _objc_release(param_4);
    puVar2 = puVar1;
    func_0x00010bfb6b20();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1092188dc; end: 10921892b; -[YYImageDecoder init] */

undefined8 FUN_1092188dc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c0416c0(param_1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10921892c; end: 1092189f7; -[YYImageDecoder initWithScale:] */

undefined8 * FUN_10921892c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1127010b0;
  puVar1 = &uStack_58;
  uStack_58 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (param_1 <= 0.0) {
    param_1 = 1.0;
  }
  puVar1[0x16] = param_1;
  uVar2 = 1;
  _dispatch_semaphore_create();
  uVar4 = puVar1[0xe];
  puVar1[0xe] = uVar2;
  _objc_release(uVar4);
  _pthread_mutexattr_init(auStack_48);
  _pthread_mutexattr_settype(auStack_48,2);
  _pthread_mutex_init(puVar1 + 1,auStack_48);
  puVar3 = auStack_48;
  _pthread_mutexattr_destroy(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _pthread_mutex_lock(puVar3 + 1);
  puVar1 = puVar3;
  func_0x00010bed69c0(puVar3);
  _objc_release(param_4);
  _pthread_mutex_unlock(puVar3 + 1);
  return puVar1;
}



/* Entry: 1092189f8; end: 109218a5b; -[YYImageDecoder updateData:final:] */

long FUN_1092189f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _pthread_mutex_lock(param_1 + 8);
  lVar1 = param_1;
  func_0x00010bed69c0(param_1,param_2,param_3,param_4);
  _objc_release(param_3);
  _pthread_mutex_unlock(param_1 + 8);
  return lVar1;
}



/* Entry: 109218a5c; end: 109218ab7; -[YYImageDecoder frameAtIndex:decodeForDisplay:] */

void FUN_109218a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _pthread_mutex_lock(param_1 + 8);
  lVar1 = param_1;
  func_0x00010be18fc0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _pthread_mutex_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109218ab8; end: 109218b33; -[YYImageDecoder frameDurationAtIndex:] */

undefined8 FUN_109218ab8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_2 + 0x70),0xffffffffffffffff);
  uVar1 = *(ulong *)(param_2 + 0x78);
  func_0x00010bf529e0();
  uVar2 = 0;
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    _objc_release(uVar2);
    uVar2 = param_1;
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x70));
  return uVar2;
}



/* Entry: 109218b34; end: 109218b7f; -[YYImageDecoder framePropertiesAtIndex:] */

void FUN_109218b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _pthread_mutex_lock(param_1 + 8);
  lVar1 = param_1;
  func_0x00010be19100(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _pthread_mutex_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109218b80; end: 109218bc3; -[YYImageDecoder imageProperties] */

void FUN_109218b80(long param_1)

{
  long lVar1;
  
  _pthread_mutex_lock(param_1 + 8);
  lVar1 = param_1;
  func_0x00010be37680(param_1);
  _objc_retainAutoreleasedReturnValue();
  _pthread_mutex_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109218bc4; end: 109218e77; -[YYImageDecoder _updateData:final:] */

undefined8 FUN_109218bc4(long param_1,undefined8 param_2,uint *param_3,undefined1 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    puVar2 = param_3;
    func_0x00010c08fa60();
    puVar3 = *(uint **)(param_1 + 0xa0);
    func_0x00010c08fa60();
    if (puVar3 <= puVar2) {
      *(undefined1 *)(param_1 + 0x98) = param_4;
      _objc_retain(param_3);
      uVar6 = *(undefined8 *)(param_1 + 0xa0);
      *(uint **)(param_1 + 0xa0) = param_3;
      _objc_release(uVar6);
      if ((param_3 == (uint *)0x0) || (puVar2 = param_3, _CFDataGetLength(), puVar2 < (uint *)0x10))
      {
        lVar7 = 0;
      }
      else {
        puVar2 = param_3;
        _CFDataGetBytePtr();
        uVar1 = *puVar2;
        if ((int)uVar1 < 0x38464947) {
          if ((int)uVar1 < 0x2a4949) {
            if ((uVar1 == 0x10000) || (uVar1 == 0x20000)) {
              lVar7 = 5;
            }
            else {
LAB_109218da8:
              uVar1 = uVar1 & 0xffff;
              lVar7 = 4;
              if (uVar1 < 0x4950) {
                if ((uVar1 != 0x4142) && (uVar1 != 0x4349)) {
                  uVar5 = 0x4943;
LAB_109218df8:
                  if (uVar1 != uVar5) goto LAB_109218e24;
                }
              }
              else if (uVar1 < 0x4fff) {
                if (uVar1 != 0x4950) {
                  uVar5 = 0x4d42;
                  goto LAB_109218df8;
                }
              }
              else if (uVar1 != 0x5043) {
                if (uVar1 != 0x4fff) goto LAB_109218e24;
                lVar7 = 2;
              }
            }
          }
          else {
            lVar7 = 3;
            if ((uVar1 != 0x2a4949) && (uVar1 != 0x2a004d4d)) goto LAB_109218da8;
          }
        }
        else if ((int)uVar1 < 0x474e5089) {
          if (uVar1 == 0x38464947) {
            lVar7 = 7;
          }
          else {
            if (uVar1 != 0x46464952) goto LAB_109218da8;
            if (puVar2[2] != 0x50424557) goto LAB_109218e24;
            lVar7 = 9;
          }
        }
        else if (uVar1 == 0x474e5089) {
          if (puVar2[1] == 0xa1a0a0d) {
            lVar7 = 8;
          }
          else {
LAB_109218e24:
            if ((short)*puVar2 == -0x2701 && *(char *)((long)puVar2 + 2) == -1) {
              lVar7 = 1;
            }
            else {
              lVar7 = 0;
              if (puVar2[1] == 0x2020506a && (char)puVar2[2] == '\r') {
                lVar7 = 2;
              }
            }
          }
        }
        else {
          if (uVar1 != 0x736e6369) goto LAB_109218da8;
          lVar7 = 6;
        }
      }
      if (*(char *)(param_1 + 0x48) == '\x01') {
        if (*(long *)(param_1 + 0xa8) != lVar7) goto LAB_109218c0c;
      }
      else {
        uVar4 = *(ulong *)(param_1 + 0xa0);
        func_0x00010c08fa60();
        uVar6 = 1;
        if (uVar4 < 0x11) goto LAB_109218c10;
        *(long *)(param_1 + 0xa8) = lVar7;
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
      func_0x00010bee0640(param_1);
      uVar6 = 1;
      goto LAB_109218c10;
    }
  }
LAB_109218c0c:
  uVar6 = 0;
LAB_109218c10:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 109218e78; end: 109219287; -[YYImageDecoder _frameAtIndex:decodeForDisplay:] */

void FUN_109218e78(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = *(ulong *)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (uVar3 <= param_3) {
    uVar3 = 0;
    goto LAB_1092191ec;
  }
  uVar3 = *(ulong *)(param_1 + 0x78);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  iVar2 = 0;
  if (*(long *)(param_1 + 0xa8) != 5) {
    iVar2 = param_4;
  }
  uVar3 = uVar4;
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    lVar10 = param_1;
    func_0x00010be63520();
    if (lVar10 == 0) goto LAB_109219084;
    if ((param_4 != 0) && (lVar5 = lVar10, FUN_109217894(), lVar5 != 0)) {
      _CFRelease(lVar10);
      lVar10 = lVar5;
    }
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9260(*(undefined8 *)(param_1 + 0xb0));
    _objc_retainAutoreleasedReturnValue();
    _CFRelease(lVar10);
    if (puVar6 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      func_0x00010c2278e0(puVar6);
      func_0x00010c1a9f00(uVar4);
      _objc_retain(uVar4);
    }
LAB_1092191e0:
    _objc_release(puVar6);
  }
  else {
    lVar10 = param_1;
    func_0x00010bdeb5a0();
    if ((int)lVar10 != 0) {
      lVar10 = *(long *)(param_1 + 0x88);
      uVar11 = uVar4;
      func_0x00010bfec9e0();
      if (lVar10 + 1U != uVar11) {
        *(undefined8 *)(param_1 + 0x88) = 0x7fffffffffffffff;
        uVar12 = NEON_ucvtf(*(undefined8 *)(param_1 + 200));
        uVar13 = NEON_ucvtf(*(undefined8 *)(param_1 + 0xd0));
        _CGContextClearRect(0,0,uVar12,uVar13,*(undefined8 *)(param_1 + 0x90));
        uVar11 = uVar4;
        func_0x00010bf1cb80();
        uVar7 = uVar4;
        func_0x00010bfec9e0();
        if (uVar11 == uVar7) {
          lVar10 = param_1;
          func_0x00010be63520();
          if (lVar10 != 0) {
            uVar12 = *(undefined8 *)(param_1 + 0x90);
            uVar11 = uVar4;
            func_0x00010c0e1dc0(uVar4);
            uVar7 = uVar4;
            func_0x00010c0e1e00(uVar4);
            uVar8 = uVar4;
            func_0x00010c2a5040(uVar4);
            uVar9 = uVar4;
            func_0x00010bfe0640(uVar4);
            _CGContextDrawImage((double)uVar11,(double)uVar7,(double)uVar8,(double)uVar9,uVar12,
                                lVar10);
            _CFRelease(lVar10);
          }
          lVar10 = *(long *)(param_1 + 0x90);
          _CGBitmapContextCreateImage();
          uVar11 = uVar4;
          func_0x00010bf86d40();
          if (uVar11 == 1) {
            uVar12 = *(undefined8 *)(param_1 + 0x90);
            uVar11 = uVar4;
            func_0x00010c0e1dc0(uVar4);
            uVar7 = uVar4;
            func_0x00010c0e1e00(uVar4);
            uVar8 = uVar4;
            func_0x00010c2a5040(uVar4);
            uVar9 = uVar4;
            func_0x00010bfe0640(uVar4);
            _CGContextClearRect((double)uVar11,(double)uVar7,(double)uVar8,(double)uVar9,uVar12);
          }
          goto LAB_109218f2c;
        }
        uVar11 = uVar4;
        func_0x00010bf1cb80();
        uVar7 = uVar4;
        func_0x00010bfec9e0();
        if ((uint)uVar11 <= (uint)uVar7) {
          lVar10 = 0;
          do {
            uVar7 = uVar4;
            func_0x00010bfec9e0();
            if (uVar7 == (uVar11 & 0xffffffff)) {
              if (lVar10 == 0) {
                lVar10 = param_1;
                func_0x00010be62d20();
              }
            }
            else {
              uVar12 = *(undefined8 *)(param_1 + 0x78);
              func_0x00010c0dfd40(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdd4c00(param_1);
              _objc_release(uVar12);
            }
            uVar1 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar1;
            uVar7 = uVar4;
            func_0x00010bfec9e0();
          } while (uVar1 <= (uint)uVar7);
          goto LAB_109218f2c;
        }
        uVar3 = 0;
        *(ulong *)(param_1 + 0x88) = param_3;
        goto LAB_1092191e4;
      }
      lVar10 = param_1;
      func_0x00010be62d20();
LAB_109218f2c:
      *(ulong *)(param_1 + 0x88) = param_3;
      if (lVar10 != 0) {
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9260(*(undefined8 *)(param_1 + 0xb0));
        _objc_retainAutoreleasedReturnValue();
        _CFRelease(lVar10);
        if (puVar6 == (undefined *)0x0) {
          uVar3 = 0;
        }
        else {
          func_0x00010c2278e0(puVar6);
          func_0x00010c1a9f00(uVar4);
          if (iVar2 != 0) {
            func_0x00010c2256c0(uVar4);
            func_0x00010c1a7d00(uVar4);
            func_0x00010c1d0ca0(uVar4);
            func_0x00010c1d0cc0(uVar4);
            func_0x00010c190980(uVar4);
            func_0x00010c171960(uVar4);
          }
          _objc_retain(uVar4);
        }
        goto LAB_1092191e0;
      }
    }
LAB_109219084:
    uVar3 = 0;
  }
LAB_1092191e4:
  _objc_release(uVar4);
LAB_1092191ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109219288; end: 1092192db; -[YYImageDecoder _framePropertiesAtIndex:] */

void FUN_109219288(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    lVar2 = *(long *)(param_1 + 0x50);
    lVar3 = lVar2;
    if (lVar2 != 0) {
      _CGImageSourceCopyPropertiesAtIndex(lVar2,param_3,0);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
    }
  }
  else {
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1092192dc; end: 109219303; -[YYImageDecoder _imageProperties] */

void FUN_1092192dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    _CGImageSourceCopyProperties(lVar1,0);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 109219304; end: 109219323; -[YYImageDecoder _updateSource] */

void FUN_109219304(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bee0670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSourceAPNG_112595b40);
    return;
  }
  if (*(long *)(param_1 + 0xa8) == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bee06f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSourceWebP_112595b60);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee0690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSourceImageIO_112595b48);
  return;
}



/* Entry: 109219324; end: 10921969b; -[YYImageDecoder _updateSourceWebP] */

void FUN_109219324(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  byte bVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x0001082210c4();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x70),0xffffffffffffffff);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar6);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x70));
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf25f00();
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  uStack_88 = uVar6;
  func_0x00010c08fa60();
  puVar8 = &uStack_88;
  uStack_80 = uVar7;
  func_0x000108220df4(puVar8,0,0,0x107);
  if (puVar8 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((long)puVar8 + 0x44);
    if (((uVar1 == 0) || (uVar2 = *(uint *)((long)puVar8 + 0x34), uVar2 == 0)) ||
       (uVar3 = *(uint *)(puVar8 + 7), uVar3 == 0)) {
      func_0x0001082210c4(puVar8);
    }
    else {
      uVar4 = *(uint *)((long)puVar8 + 0x3c);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_a0 = 0;
      iVar5 = 1;
      puStack_98 = puVar8;
      func_0x000108221148(1,&uStack_e0);
      if (iVar5 == 0) {
        bVar13 = 0;
      }
      else {
        bVar13 = 0;
        do {
          puVar10 = PTR_PTR_1126ddee8;
          _objc_opt_new();
          func_0x00010befa120(puVar9);
          if (uStack_c8._4_4_ == 1) {
            func_0x00010c190980(puVar10);
          }
          if (uStack_a8._4_4_ == 0) {
            func_0x00010c171960(puVar10);
          }
          func_0x00010c1abfe0(puVar10);
          func_0x00010c192d40((double)(int)uStack_c8 / 1000.0,puVar10);
          func_0x00010c2256c0(puVar10);
          func_0x00010c1a7d00(puVar10);
          func_0x00010c1a5840(puVar10);
          func_0x00010c171960(puVar10);
          func_0x00010c1d0ca0(puVar10);
          func_0x00010c1d0cc0(puVar10);
          func_0x00010c1b1640(puVar10);
          puVar11 = puVar10;
          func_0x00010bf1cb60();
          if (((puVar11 == (undefined *)0x0) ||
              (puVar11 = puVar10, func_0x00010bfd3f80(), ((ulong)puVar11 & 1) == 0)) &&
             (puVar11 = puVar10, func_0x00010c074020(), (int)puVar11 != 0)) {
            func_0x00010c1719a0(puVar10);
          }
          else {
            puVar11 = puVar10;
            func_0x00010bf86d40();
            if ((puVar11 == (undefined *)0x0) ||
               (puVar11 = puVar10, func_0x00010c074020(), (int)puVar11 == 0)) {
              func_0x00010c1719a0(puVar10);
            }
            else {
              func_0x00010c1719a0(puVar10);
            }
          }
          puVar11 = puVar10;
          func_0x00010bfec9e0();
          puVar12 = puVar10;
          func_0x00010bf1cb80();
          bVar13 = puVar11 != puVar12 | bVar13;
          _objc_release(puVar10);
          iVar5 = (int)uStack_e0 + 1;
          func_0x000108221148(iVar5,&uStack_e0);
        } while (iVar5 != 0);
      }
      puVar10 = puVar9;
      func_0x00010bf529e0();
      if (puVar10 == (undefined *)(ulong)uVar1) {
        *(ulong *)(param_1 + 200) = (ulong)uVar2;
        *(ulong *)(param_1 + 0xd0) = (ulong)uVar3;
        puVar10 = puVar9;
        func_0x00010bf529e0();
        *(undefined **)(param_1 + 0xb8) = puVar10;
        *(ulong *)(param_1 + 0xc0) = (ulong)uVar4;
        *(byte *)(param_1 + 0x80) = bVar13;
        *(undefined8 **)(param_1 + 0x60) = puVar8;
        _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x70),0xffffffffffffffff);
        _objc_retain(puVar9);
        uVar6 = *(undefined8 *)(param_1 + 0x78);
        *(undefined **)(param_1 + 0x78) = puVar9;
        _objc_release(uVar6);
        _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x70));
      }
      else {
        func_0x0001082210c4(puVar8);
      }
      _objc_release(puVar9);
    }
  }
  return;
}



/* Entry: 10921969c; end: 109219a1b; -[YYImageDecoder _updateSourceAPNG] */

/* WARNING: Possible PIC construction at 0x0001092196c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092196cc) */
/* WARNING: Removing unreachable block (ram,0x0001092196e0) */
/* WARNING: Removing unreachable block (ram,0x0001092196ec) */
/* WARNING: Removing unreachable block (ram,0x000109219758) */
/* WARNING: Removing unreachable block (ram,0x000109219710) */
/* WARNING: Removing unreachable block (ram,0x00010921971c) */
/* WARNING: Removing unreachable block (ram,0x000109219724) */
/* WARNING: Removing unreachable block (ram,0x00010921977c) */
/* WARNING: Removing unreachable block (ram,0x000109219784) */
/* WARNING: Removing unreachable block (ram,0x00010921978c) */
/* WARNING: Removing unreachable block (ram,0x0001092199a0) */
/* WARNING: Removing unreachable block (ram,0x0001092197ac) */
/* WARNING: Removing unreachable block (ram,0x0001092197c4) */
/* WARNING: Removing unreachable block (ram,0x000109219808) */
/* WARNING: Removing unreachable block (ram,0x00010921980c) */
/* WARNING: Removing unreachable block (ram,0x000109219888) */
/* WARNING: Removing unreachable block (ram,0x000109219874) */
/* WARNING: Removing unreachable block (ram,0x00010921988c) */
/* WARNING: Removing unreachable block (ram,0x00010921989c) */
/* WARNING: Removing unreachable block (ram,0x000109219894) */
/* WARNING: Removing unreachable block (ram,0x0001092198a8) */
/* WARNING: Removing unreachable block (ram,0x0001092198c4) */
/* WARNING: Removing unreachable block (ram,0x0001092198cc) */
/* WARNING: Removing unreachable block (ram,0x0001092198f8) */
/* WARNING: Removing unreachable block (ram,0x000109219924) */
/* WARNING: Removing unreachable block (ram,0x000109219934) */
/* WARNING: Removing unreachable block (ram,0x000109219954) */
/* WARNING: Removing unreachable block (ram,0x000109219940) */
/* WARNING: Removing unreachable block (ram,0x000109219904) */
/* WARNING: Removing unreachable block (ram,0x00010921991c) */
/* WARNING: Removing unreachable block (ram,0x000109219960) */
/* WARNING: Removing unreachable block (ram,0x0001092199a4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x00010921999c) */
/* WARNING: Removing unreachable block (ram,0x000109219730) */

void FUN_10921969c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      _free();
    }
    if (*(long *)(lVar1 + 0x20) != 0) {
      _free();
    }
    if (*(long *)(lVar1 + 0x30) != 0) {
      _free();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar1);
    return;
  }
  return;
}



/* Entry: 109219a1c; end: 109219e2b;  */

undefined8 * FUN_109219a1c(int *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  ulong uVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong uStack_80;
  undefined4 uStack_68;
  char cStack_61;
  
  if (((0x1f < param_2) && (*param_1 == 0x474e5089)) && (param_1[1] == 0xa1a0a0d)) {
    puVar10 = (uint *)0x100;
    _malloc();
    if (puVar10 != (uint *)0x0) {
      bVar7 = false;
      iVar18 = 0;
      piVar17 = (int *)0x0;
      uStack_80 = 0xffffffff;
      uVar22 = 8;
      uVar19 = 0x10;
      iVar21 = -1;
      do {
        puVar11 = puVar10;
        if ((uint)uVar19 <= (uint)piVar17) {
          uVar19 = (ulong)((uint)uVar19 + 0x10);
          _realloc(puVar10,uVar19 << 4);
          if (puVar11 == (uint *)0x0) goto LAB_109219de4;
        }
        puVar1 = puVar11 + (long)piVar17 * 4;
        puVar2 = (uint *)((long)param_1 + (ulong)uVar22);
        *puVar1 = uVar22;
        uVar3 = *puVar2;
        uVar6 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        puVar1[2] = uVar6;
        puVar10 = puVar11;
        if ((ulong)param_2 < (ulong)uVar6 + (ulong)uVar22 + 0xc) goto LAB_109219de4;
        uVar4 = puVar2[1];
        puVar1[1] = uVar4;
        puVar2 = puVar2 + 2;
        uVar5 = *(uint *)((long)puVar2 + (ulong)uVar6);
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        puVar1[3] = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar5 = uVar22 + uVar6 + 0xc;
        uVar22 = uVar5;
        if ((int)uVar4 < 0x4c546366) {
          uVar22 = param_2;
          if ((uVar4 != 0x444e4549) && (uVar22 = uVar5, uVar4 == 0x4c546361)) {
            if (uVar3 != 0x8000000) goto LAB_109219bcc;
            uStack_80 = NEON_rev32(*(undefined8 *)puVar2,1);
          }
        }
        else {
          if (uVar4 == 0x4c546366) {
            bVar7 = (bool)(uVar3 != 0x1a000000 | bVar7);
            if (uVar3 == 0x1a000000) {
              iVar18 = iVar18 + 1;
            }
          }
          else if (uVar4 != 0x54416466) goto LAB_109219bd0;
          if (uVar6 < 5) {
LAB_109219bcc:
            bVar7 = true;
            uVar22 = uVar5;
          }
          else {
            uVar3 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
            bVar9 = iVar21 + 1U != (uVar3 >> 0x10 | uVar3 << 0x10);
            bVar7 = (bool)(bVar9 | bVar7);
            if (!bVar9) {
              iVar21 = iVar21 + 1;
            }
          }
        }
LAB_109219bd0:
        uVar3 = (uint)piVar17 + 1;
        piVar17 = (int *)(ulong)uVar3;
      } while (uVar22 + 0xc <= param_2);
      if (((uVar3 < 3) || (puVar11[1] != 0x52444849)) || (puVar11[2] != 0xd)) {
LAB_109219de4:
        _free(puVar10);
      }
      else {
        puVar12 = (undefined8 *)0x1;
        _calloc(1,0x48);
        if (puVar12 == (undefined8 *)0x0) {
          _free(puVar11);
          return (undefined8 *)0x0;
        }
        puVar12[2] = puVar11;
        *(uint *)(puVar12 + 3) = uVar3;
        uVar22 = *puVar11;
        uVar23 = NEON_rev32(*(undefined8 *)((long)param_1 + (ulong)uVar22 + 8),1);
        *puVar12 = uVar23;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((long)param_1 + (ulong)uVar22 + 0x10);
        *(undefined1 *)((long)puVar12 + 0xc) = *(undefined1 *)((long)param_1 + (ulong)uVar22 + 0x14)
        ;
        if (bVar7) {
          return puVar12;
        }
        uVar19 = uStack_80 & 0xffffffff;
        if ((int)uStack_80 < 1) {
          return puVar12;
        }
        if ((int)uStack_80 != iVar18) {
          return puVar12;
        }
        cStack_61 = '\0';
        uStack_68 = 0;
        FUN_10921d14c(puVar11,piVar17,&uStack_68,&cStack_61);
        cVar8 = cStack_61;
        if ((int)puVar10 == 0) {
          return puVar12;
        }
        puVar12[5] = uStack_80;
        *(char *)((long)puVar12 + 0x44) = cStack_61;
        *(undefined4 *)(puVar12 + 8) = uStack_68;
        _calloc(uVar19,0x28);
        puVar12[4] = uVar19;
        if (uVar19 != 0) {
          piVar13 = piVar17;
          _calloc(piVar17,4);
          puVar12[6] = piVar13;
          if (piVar13 != (int *)0x0) {
            piVar20 = (int *)0x0;
            puVar11 = puVar11 + 2;
            lVar15 = 0xffffffff;
            do {
              uVar22 = puVar11[-1];
              iVar18 = (int)piVar20;
              if ((int)uVar22 < 0x54414449) {
                if (uVar22 != 0x4c546361) {
                  if (uVar22 == 0x4c546366) {
                    lVar15 = (long)(int)lVar15 + 1;
                    piVar14 = (int *)(uVar19 + lVar15 * 0x28);
                    *piVar14 = iVar18 + 1;
                    FUN_10921d2fc(piVar14 + 3,(long)param_1 + (ulong)puVar11[-2] + 8);
                  }
                  else {
LAB_109219dac:
                    *piVar13 = iVar18;
                    puVar12[7] = CONCAT44(*puVar11 + 0xc + (int)((ulong)puVar12[7] >> 0x20),
                                          (int)puVar12[7] + 1);
                    piVar17 = (int *)(ulong)*(uint *)(puVar12 + 3);
                    piVar13 = piVar13 + 1;
                  }
                }
              }
              else {
                if (uVar22 != 0x54416466) {
                  if (uVar22 != 0x54414449) goto LAB_109219dac;
                  if (*(int *)(puVar12 + 8) != 0) {
                    iVar18 = *(int *)(puVar12 + 8);
                  }
                  *(int *)(puVar12 + 8) = iVar18;
                  if (cVar8 == '\0') goto LAB_109219dd0;
                }
                lVar16 = uVar19 + (long)(int)lVar15 * 0x28;
                uVar23 = *(undefined8 *)(lVar16 + 4);
                *(ulong *)(lVar16 + 4) =
                     CONCAT44(*puVar11 + 0xc + (int)((ulong)uVar23 >> 0x20),(int)uVar23 + 1);
              }
LAB_109219dd0:
              piVar20 = (int *)((long)piVar20 + 1);
              puVar11 = puVar11 + 4;
              if (piVar17 <= piVar20) {
                return puVar12;
              }
            } while( true );
          }
        }
        func_0x000109218800(puVar12);
      }
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 109219e2c; end: 10921a1a7; -[YYImageDecoder _updateSourceImageIO] */

/* WARNING: Removing unreachable block (ram,0x00010921a0ac) */

void FUN_109219e2c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x70),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(char *)(param_1 + 0x98) != '\x01') {
      lVar2 = 0;
      _CGImageSourceCreateIncremental();
      *(long *)(param_1 + 0x50) = lVar2;
      if (lVar2 == 0) {
        return;
      }
      goto LAB_109219e90;
    }
    lVar2 = *(long *)(param_1 + 0xa0);
    _CGImageSourceCreateWithData(lVar2,0);
    *(long *)(param_1 + 0x50) = lVar2;
  }
  else {
LAB_109219e90:
    _CGImageSourceUpdateData();
    lVar2 = *(long *)(param_1 + 0x50);
  }
  if (lVar2 == 0) {
    return;
  }
  _CGImageSourceGetCount();
  *(long *)(param_1 + 0xb8) = lVar2;
  if (lVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    if (*(long *)(param_1 + 0xa8) == 7) {
      lVar2 = *(long *)(param_1 + 0x50);
      _CGImageSourceCopyProperties(lVar2,0);
      if (lVar2 != 0) {
        lVar6 = lVar2;
        _CFDictionaryGetValue();
        if ((lVar6 != 0) && (_CFDictionaryGetValue(), lVar6 != 0)) {
          _CFNumberGetValue();
        }
        _CFRelease(lVar2);
      }
      goto LAB_109219ef0;
    }
    if (*(long *)(param_1 + 0xa8) != 8) goto LAB_109219ef0;
  }
  *(undefined8 *)(param_1 + 0xb8) = 1;
LAB_109219ef0:
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar8 = 0;
    uVar9 = *(undefined8 *)PTR__kCGImagePropertyPixelHeight_110349d50;
    uVar10 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_110349d08;
    uVar1 = *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_110349d00;
    uVar7 = *(undefined8 *)PTR__kCGImagePropertyOrientation_110349d48;
    do {
      puVar4 = PTR_PTR_1126ddee8;
      _objc_opt_new(PTR_PTR_1126ddee8);
      func_0x00010c1abfe0();
      func_0x00010c1719a0(puVar4);
      func_0x00010c1a5840(puVar4);
      func_0x00010c1b1640(puVar4);
      func_0x00010befa120(puVar3);
      lVar2 = *(long *)(param_1 + 0x50);
      _CGImageSourceCopyPropertiesAtIndex(lVar2,uVar8,0);
      if (lVar2 != 0) {
        lVar6 = lVar2;
        _CFDictionaryGetValue();
        if (lVar6 != 0) {
          _CFNumberGetValue();
        }
        lVar6 = lVar2;
        _CFDictionaryGetValue(lVar2,uVar9);
        if (lVar6 != 0) {
          _CFNumberGetValue();
        }
        if (((*(long *)(param_1 + 0xa8) == 7) &&
            (lVar6 = lVar2, _CFDictionaryGetValue(lVar2,uVar10), lVar6 != 0)) &&
           ((lVar5 = lVar6, _CFDictionaryGetValue(), lVar5 != 0 ||
            (_CFDictionaryGetValue(lVar6,uVar1), lVar6 != 0)))) {
          _CFNumberGetValue();
        }
        func_0x00010c2256c0(puVar4);
        func_0x00010c1a7d00(puVar4);
        func_0x00010c192d40(0,puVar4);
        if ((uVar8 == 0) && (*(long *)(param_1 + 200) + *(long *)(param_1 + 0xd0) == 0)) {
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0xd0) = 0;
          lVar6 = lVar2;
          _CFDictionaryGetValue(lVar2,uVar7);
          if (lVar6 != 0) {
            _CFNumberGetValue();
            *(undefined8 *)(param_1 + 0x68) = 0;
          }
        }
        _CFRelease(lVar2);
      }
      _objc_release(puVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(param_1 + 0xb8));
  }
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x70),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar3);
  return;
}



/* Entry: 10921a1a8; end: 10921aaa3; -[YYImageDecoder _newUnblendedImageAtIndex:extendToCanvas:decoded:] */

uint * FUN_10921a1a8(long param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint **ppuVar10;
  int iVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  bool bVar22;
  ulong uVar23;
  uint *unaff_x28;
  undefined8 uVar24;
  undefined8 uVar25;
  uint *puStack_280;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  double dStack_250;
  double dStack_248;
  uint *puStack_240;
  uint *puStack_238;
  uint *puStack_230;
  uint *puStack_228;
  uint *puStack_220;
  uint *puStack_218;
  uint *puStack_210;
  uint *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  uint *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_5;
  if ((param_3 != (uint *)0x0) && ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
LAB_10921a2d0:
    puVar12 = (uint *)0x0;
    puVar4 = param_4;
    param_5 = param_3;
    puVar5 = unaff_x28;
    goto LAB_10921a88c;
  }
  puVar4 = *(uint **)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (puVar4 <= param_3) goto LAB_10921a2d0;
  puVar5 = *(uint **)(param_1 + 0x78);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = *(uint **)(param_1 + 0x50);
  iVar16 = (int)param_4;
  if (puVar18 != (uint *)0x0) {
    uStack_a8 = *(undefined8 *)PTR__kCGImageSourceShouldCache_110349d70;
    puStack_a0 = PTR____kCFBooleanTrue_11034ab68;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _CGImageSourceCreateImageAtIndex(puVar18,param_3,puVar6);
    _objc_release(puVar6);
    param_3 = puVar18;
    if ((iVar16 != 0) && (puVar18 != (uint *)0x0)) {
      param_4 = puVar18;
      _CGImageGetWidth();
      puVar7 = puVar18;
      _CGImageGetHeight();
      puVar4 = *(uint **)(param_1 + 200);
      puVar12 = *(uint **)(param_1 + 0xd0);
      if ((param_4 == puVar4) && (puVar7 == puVar12)) {
        puVar4 = puVar18;
        FUN_109217894();
      }
      else {
        if (lRam0000000113732a20 != -1) {
          func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
        }
        puVar9 = (uint *)0x0;
        _CGBitmapContextCreate(0,puVar4,puVar12,8,0,uRam0000000113732a18,0x2002);
        if (puVar9 == (uint *)0x0) goto LAB_10921a884;
        _CGContextDrawImage(0,(double)(ulong)(*(long *)(param_1 + 0xd0) - (long)puVar7),
                            (double)param_4,(double)puVar7);
        puVar4 = puVar9;
        _CGBitmapContextCreateImage();
        _CFRelease(puVar9);
      }
      if ((puVar4 != (uint *)0x0) && (_CFRelease(puVar18), puVar18 = puVar4, param_5 != (uint *)0x0)
         ) {
        *(undefined1 *)param_5 = 1;
      }
    }
    goto LAB_10921a884;
  }
  uVar20 = (uint)param_3;
  if (*(long *)(param_1 + 0x58) == 0) {
    if (*(long *)(param_1 + 0x60) != 0) {
      lStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1c0 = 0;
      iVar11 = uVar20 + 1;
      lStack_1b8 = *(long *)(param_1 + 0x60);
      func_0x000108221148(iVar11,&uStack_200);
      uVar24 = uStack_1d0;
      lVar14 = lStack_1d8;
      if (iVar11 != 0) {
        puVar18 = (uint *)0x0;
        if ((int)uStack_1f0 < 1) goto LAB_10921a884;
        puVar15 = (uint *)(ulong)uStack_1f0._4_4_;
        param_3 = param_5;
        if ((int)uStack_1f0._4_4_ < 1) goto LAB_10921a884;
        uVar21 = uStack_1f0 & 0xffffffff;
        if (iVar16 != 0) {
          puVar15 = (uint *)(ulong)*(uint *)(param_1 + 0xd0);
          uVar21 = *(ulong *)(param_1 + 200);
        }
        if (((ulong)(long)(int)uVar21 <= *(ulong *)(param_1 + 200)) &&
           ((ulong)(long)(int)puVar15 <= *(ulong *)(param_1 + 0xd0))) {
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          lStack_168 = 0;
          uStack_170 = 0;
          puStack_178 = (uint *)0x0;
          uStack_180 = 0;
          uStack_188 = 0;
          if (lStack_1d8 != 0) {
            uStack_190 = 0;
            uStack_1a8 = 0;
            uStack_1a7 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_197 = 0;
            uStack_1a0 = 0;
            uStack_19c = 0;
            lVar13 = lStack_1d8;
            func_0x00010822d4a4(lStack_1d8,uStack_1d0,&uStack_1b0,(ulong)&uStack_1b0 | 4,
                                (ulong)&uStack_1b0 | 8,(ulong)&uStack_1b0 | 0xc,&uStack_1a0,0);
            if ((int)lVar13 == 0) {
              puStack_280 = (uint *)(long)(int)uVar21;
              puVar15 = (uint *)(long)(int)puVar15;
              puVar12 = (uint *)((long)puStack_280 * 4 + 0x1fU & 0xffffffffffffffe0);
              lVar13 = (long)puVar12 * (long)puVar15;
              puVar18 = (uint *)0x1;
              _calloc(1,lVar13);
              if (puVar18 != (uint *)0x0) {
                uStack_188 = CONCAT44(uStack_188._4_4_,8);
                uStack_180 = CONCAT44(1,(undefined4)uStack_180);
                uStack_170 = CONCAT44(uStack_170._4_4_,(int)puVar12);
                puStack_178 = puVar18;
                lStack_168 = lVar13;
                func_0x00010822dbe4(lVar14,uVar24,&uStack_1b0);
                if (((int)lVar14 == 0) || ((int)lVar14 == 7)) {
                  if (iVar16 != 0) {
                    iVar16 = (int)uStack_1f8;
                    iVar11 = uStack_1f8._4_4_;
                    if ((int)uStack_1f8 != 0 || uStack_1f8._4_4_ != 0) {
                      puVar4 = (uint *)0x1;
                      _calloc(1,lVar13);
                      if (puVar4 != (uint *)0x0) {
                        uStack_270 = 0x3ff0000000000000;
                        uStack_268 = 0;
                        uStack_260 = 0;
                        uStack_258 = 0x3ff0000000000000;
                        dStack_250 = (double)iVar16;
                        dStack_248 = (double)-iVar11;
                        uStack_274 = 0;
                        ppuVar10 = &puStack_220;
                        puStack_240 = puVar4;
                        puStack_238 = puVar15;
                        puStack_230 = puStack_280;
                        puStack_228 = puVar12;
                        puStack_220 = puVar18;
                        puStack_218 = puVar15;
                        puStack_210 = puStack_280;
                        puStack_208 = puVar12;
                        _vImageAffineWarpCG_ARGB8888
                                  (ppuVar10,&puStack_240,0,&uStack_270,&uStack_274,4);
                        if (ppuVar10 == (uint **)0x0) {
                          _memcpy(puVar18,puVar4,lVar13);
                        }
                        _free(puVar4);
                        param_4 = puVar4;
                      }
                    }
                  }
                  puVar4 = puVar18;
                  _CGDataProviderCreateWithData(puVar18,puVar18,lVar13,FUN_109217d44);
                  if (puVar4 != (uint *)0x0) {
                    if (lRam0000000113732a20 != -1) goto LAB_10921aa8c;
                    goto LAB_10921a9fc;
                  }
                }
                _free(puVar18);
              }
            }
          }
          puVar18 = (uint *)0x0;
          unaff_x28 = puVar5;
          goto LAB_10921a884;
        }
      }
    }
  }
  else {
    puStack_280 = *(uint **)(param_1 + 0xa0);
    func_0x00010bf25f00();
    lVar14 = *(long *)(param_1 + 0x58);
    if (uVar20 < *(uint *)(lVar14 + 0x28)) {
      unaff_x28 = (uint *)(*(long *)(lVar14 + 0x20) + ((ulong)param_3 & 0xffffffff) * 0x28);
      uVar3 = *(int *)(lVar14 + 0x3c) + unaff_x28[2] + 8;
      if ((uVar20 != 0) || ((*(byte *)(lVar14 + 0x44) & 1) == 0)) {
        uVar3 = uVar3 + unaff_x28[1] * -4;
      }
      puVar12 = (uint *)(ulong)uVar3;
      puVar4 = puVar12;
      _malloc();
      param_4 = puVar12;
      if (puVar4 != (uint *)0x0) {
        *(undefined8 *)puVar4 = *(undefined8 *)puStack_280;
        if (*(int *)(lVar14 + 0x38) != 0) {
          puVar15 = (uint *)0x0;
          bVar22 = false;
          uVar21 = 8;
          do {
            uVar20 = *(uint *)(*(long *)(lVar14 + 0x30) + (long)puVar15 * 4);
            lVar13 = *(long *)(lVar14 + 0x10);
            if ((*(uint *)(lVar14 + 0x40) <= uVar20) && (!bVar22)) {
              uVar23 = (ulong)unaff_x28[1];
              if (unaff_x28[1] == 0) {
                bVar22 = true;
              }
              else {
                lVar17 = 0;
                uVar19 = 0;
                do {
                  puVar7 = (uint *)(*(long *)(lVar14 + 0x10) + (ulong)*unaff_x28 * 0x10 + lVar17);
                  puVar18 = (uint *)((long)puVar4 + uVar21);
                  if (puVar7[1] == 0x54416466) {
                    uVar3 = (puVar7[2] - 4 & 0xff00ff00) >> 8 | (puVar7[2] - 4 & 0xff00ff) << 8;
                    *puVar18 = uVar3 >> 0x10 | uVar3 << 0x10;
                    puVar18[1] = 0x54414449;
                    _memcpy(puVar18 + 2,(undefined1 *)((long)puStack_280 + (ulong)*puVar7 + 0xc),
                            puVar7[2] - 4);
                    uVar3 = 0;
                    _crc32(0,puVar18 + 1,puVar7[2]);
                    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                    *(uint *)((long)puVar18 + (ulong)puVar7[2] + 4) = uVar3 >> 0x10 | uVar3 << 0x10;
                    iVar11 = puVar7[2] + 8;
                    uVar23 = (ulong)unaff_x28[1];
                  }
                  else {
                    _memcpy(puVar18,(undefined1 *)((long)puStack_280 + (ulong)*puVar7),
                            puVar7[2] + 0xc);
                    iVar11 = puVar7[2] + 0xc;
                  }
                  uVar21 = (ulong)(uint)(iVar11 + (int)uVar21);
                  uVar19 = uVar19 + 1;
                  lVar17 = lVar17 + 0x10;
                } while (uVar19 < uVar23);
                bVar22 = true;
              }
            }
            param_4 = (uint *)(lVar13 + (ulong)uVar20 * 0x10);
            puVar1 = (undefined8 *)((long)puVar4 + uVar21);
            if (param_4[1] == 0x52444849) {
              uStack_1b0 = *(undefined8 *)((long)puStack_280 + (ulong)*param_4);
              uVar25 = *(undefined8 *)((long)((long)puStack_280 + (ulong)*param_4) + 0x11);
              uStack_198 = (undefined1)((ulong)uVar25 >> 0x38);
              uVar24 = NEON_rev32(*(undefined8 *)(unaff_x28 + 4),1);
              uStack_1a0 = *(undefined4 *)(lVar14 + 8);
              uStack_1a8 = (undefined1)uVar24;
              uStack_1a7 = (undefined7)((ulong)uVar24 >> 8);
              uStack_19c._1_3_ = (uint3)((ulong)uVar25 >> 0x20);
              uStack_19c = CONCAT31(uStack_19c._1_3_,*(undefined1 *)(lVar14 + 0xc));
              uVar3 = 0;
              _crc32(0,(long)&uStack_1b0 + 4,0x11);
              uVar2 = uStack_19c;
              uVar20 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
              uStack_19c._1_3_ = (uint3)(ushort)(uVar20 >> 0x10) | (uint3)(uVar20 << 0x10);
              uStack_19c._0_1_ = (undefined1)uVar2;
              uStack_198 = (undefined1)(uVar3 & 0xff00ff);
              puVar1[1] = CONCAT71(uStack_1a7,uStack_1a8);
              *puVar1 = uStack_1b0;
              *(ulong *)((long)puVar1 + 0x11) =
                   CONCAT17(uStack_198,CONCAT43(uStack_19c,uStack_1a0._1_3_));
              *(ulong *)((long)puVar1 + 9) = CONCAT17((undefined1)uStack_1a0,uStack_1a7);
              uVar20 = (int)uVar21 + 0x19;
            }
            else {
              _memcpy(puVar1,(undefined1 *)((long)puStack_280 + (ulong)*param_4),param_4[2] + 0xc);
              uVar20 = (int)uVar21 + param_4[2] + 0xc;
            }
            uVar21 = (ulong)uVar20;
            puVar15 = (uint *)((long)puVar15 + 1);
          } while (puVar15 < (uint *)(ulong)*(uint *)(lVar14 + 0x38));
        }
        puVar18 = puVar4;
        _CGDataProviderCreateWithData(puVar4,puVar4,puVar12,FUN_109217d44);
        if (puVar18 == (uint *)0x0) {
          _free(puVar4);
          param_3 = puVar4;
          goto LAB_10921a884;
        }
        param_3 = puVar18;
        _CGImageSourceCreateWithDataProvider(puVar18,0);
        _CFRelease(puVar18);
        if (param_3 != (uint *)0x0) {
          puVar4 = param_3;
          _CGImageSourceGetCount();
          if (puVar4 != (uint *)0x0) {
            uStack_b8 = *(undefined8 *)PTR__kCGImageSourceShouldCache_110349d70;
            puStack_b0 = PTR____kCFBooleanTrue_11034ab68;
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = param_3;
            _CGImageSourceCreateImageAtIndex(param_3,0,puVar6);
            _objc_release(puVar6);
            _CFRelease(param_3);
            if ((iVar16 != 0) && (puVar18 != (uint *)0x0)) {
              param_4 = *(uint **)(param_1 + 200);
              uVar24 = *(undefined8 *)(param_1 + 0xd0);
              if (lRam0000000113732a20 != -1) {
                func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
              }
              puVar4 = (uint *)0x0;
              _CGBitmapContextCreate(0,param_4,uVar24,8,0,uRam0000000113732a18,0x2002);
              if (puVar4 != (uint *)0x0) {
                puVar12 = puVar5;
                func_0x00010c0e1dc0(puVar5);
                puVar7 = puVar5;
                func_0x00010c0e1e00(puVar5);
                puVar9 = puVar5;
                func_0x00010c2a5040(puVar5);
                puVar8 = puVar5;
                func_0x00010bfe0640(puVar5);
                _CGContextDrawImage((double)puVar12,(double)puVar7,(double)puVar9,(double)puVar8,
                                    puVar4,puVar18);
                _CFRelease(puVar18);
                puVar18 = puVar4;
                _CGBitmapContextCreateImage(puVar4);
                _CFRelease(puVar4);
                param_4 = puVar4;
                if (param_5 != (uint *)0x0) {
                  *(undefined1 *)param_5 = 1;
                }
              }
            }
            goto LAB_10921a884;
          }
          _CFRelease(param_3);
        }
      }
    }
  }
  puVar18 = (uint *)0x0;
LAB_10921a884:
  while( true ) {
    _objc_release(puVar5);
    puVar4 = param_4;
    puVar12 = puVar18;
    param_5 = param_3;
    puVar5 = unaff_x28;
LAB_10921a88c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) break;
    ___stack_chk_fail();
LAB_10921aa8c:
    func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
LAB_10921a9fc:
    puVar18 = puStack_280;
    _CGImageCreate(puStack_280,puVar15,8,0x20,puVar12,uRam0000000113732a18,0x2002,puVar4,0,0,0);
    _CFRelease(puVar4);
    param_4 = puVar4;
    param_3 = param_5;
    unaff_x28 = puVar5;
    if (param_5 != (uint *)0x0) {
      *(undefined1 *)param_5 = 1;
    }
  }
  return puVar12;
}



/* Entry: 10921aaa4; end: 10921ab3b; -[YYImageDecoder _createBlendContextIfNeeded] */

bool FUN_10921aaa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return true;
  }
  *(undefined8 *)(param_1 + 0x88) = 0x7fffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  if (lRam0000000113732a20 != -1) {
    func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
  }
  lVar3 = 0;
  _CGBitmapContextCreate(0,uVar1,uVar2,8,0,uRam0000000113732a18,0x2002);
  *(long *)(param_1 + 0x90) = lVar3;
  return lVar3 != 0;
}



/* Entry: 10921ab3c; end: 10921acbb; -[YYImageDecoder _blendImageWithFrame:] */

void FUN_10921ab3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf86d40();
  if (uVar1 != 2) {
    uVar1 = param_3;
    func_0x00010bf86d40();
    if (uVar1 == 1) {
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      uVar1 = param_3;
      func_0x00010c0e1dc0(param_3);
      uVar2 = param_3;
      func_0x00010c0e1e00(param_3);
      uVar3 = param_3;
      func_0x00010c2a5040(param_3);
      uVar4 = param_3;
      func_0x00010bfe0640(param_3);
      _CGContextClearRect((double)uVar1,(double)uVar2,(double)uVar3,(double)uVar4,uVar6);
    }
    else {
      uVar1 = param_3;
      func_0x00010bf1cb60();
      if (uVar1 != 1) {
        uVar6 = *(undefined8 *)(param_1 + 0x90);
        uVar1 = param_3;
        func_0x00010c0e1dc0(param_3);
        uVar2 = param_3;
        func_0x00010c0e1e00(param_3);
        uVar3 = param_3;
        func_0x00010c2a5040(param_3);
        uVar4 = param_3;
        func_0x00010bfe0640(param_3);
        _CGContextClearRect((double)uVar1,(double)uVar2,(double)uVar3,(double)uVar4,uVar6);
      }
      func_0x00010bfec9e0(param_3);
      lVar5 = param_1;
      func_0x00010be63520();
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x90);
        uVar1 = param_3;
        func_0x00010c0e1dc0(param_3);
        uVar2 = param_3;
        func_0x00010c0e1e00(param_3);
        uVar3 = param_3;
        func_0x00010c2a5040(param_3);
        uVar4 = param_3;
        func_0x00010bfe0640(param_3);
        _CGContextDrawImage((double)uVar1,(double)uVar2,(double)uVar3,(double)uVar4,uVar6,lVar5);
        _CFRelease(lVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10921acbc; end: 10921b063; -[YYImageDecoder _newBlendedImageWithFrame:] */

undefined8 FUN_10921acbc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf86d40();
  if (uVar1 != 2) {
    uVar1 = param_3;
    func_0x00010bf86d40();
    uVar3 = param_3;
    func_0x00010bf1cb60();
    func_0x00010bfec9e0(param_3);
    lVar4 = param_1;
    func_0x00010be63520();
    if (uVar1 != 1) {
      if (uVar3 == 1) {
        if (lVar4 != 0) {
LAB_10921afdc:
          uVar5 = *(undefined8 *)(param_1 + 0x90);
          uVar1 = param_3;
          func_0x00010c0e1dc0(param_3);
          uVar3 = param_3;
          func_0x00010c0e1e00(param_3);
          uVar6 = param_3;
          func_0x00010c2a5040(param_3);
          uVar7 = param_3;
          func_0x00010bfe0640(param_3);
          _CGContextDrawImage((double)uVar1,(double)uVar3,(double)uVar6,(double)uVar7,uVar5,lVar4);
          _CFRelease(lVar4);
        }
      }
      else if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x90);
        uVar1 = param_3;
        func_0x00010c0e1dc0(param_3);
        uVar3 = param_3;
        func_0x00010c0e1e00(param_3);
        uVar6 = param_3;
        func_0x00010c2a5040(param_3);
        uVar7 = param_3;
        func_0x00010bfe0640(param_3);
        _CGContextClearRect((double)uVar1,(double)uVar3,(double)uVar6,(double)uVar7,uVar5);
        goto LAB_10921afdc;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      _CGBitmapContextCreateImage(uVar5);
      goto LAB_10921b03c;
    }
    if (uVar3 == 1) {
      if (lVar4 != 0) {
LAB_10921aee4:
        uVar5 = *(undefined8 *)(param_1 + 0x90);
        uVar1 = param_3;
        func_0x00010c0e1dc0(param_3);
        uVar3 = param_3;
        func_0x00010c0e1e00(param_3);
        uVar6 = param_3;
        func_0x00010c2a5040(param_3);
        uVar7 = param_3;
        func_0x00010bfe0640(param_3);
        _CGContextDrawImage((double)uVar1,(double)uVar3,(double)uVar6,(double)uVar7,uVar5,lVar4);
        _CFRelease(lVar4);
      }
    }
    else if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      uVar1 = param_3;
      func_0x00010c0e1dc0(param_3);
      uVar3 = param_3;
      func_0x00010c0e1e00(param_3);
      uVar6 = param_3;
      func_0x00010c2a5040(param_3);
      uVar7 = param_3;
      func_0x00010bfe0640(param_3);
      _CGContextClearRect((double)uVar1,(double)uVar3,(double)uVar6,(double)uVar7,uVar5);
      goto LAB_10921aee4;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    _CGBitmapContextCreateImage(uVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    uVar1 = param_3;
    func_0x00010c0e1dc0(param_3);
    uVar3 = param_3;
    func_0x00010c0e1e00(param_3);
    uVar6 = param_3;
    func_0x00010c2a5040(param_3);
    uVar7 = param_3;
    func_0x00010bfe0640(param_3);
    _CGContextClearRect((double)uVar1,(double)uVar3,(double)uVar6,(double)uVar7,uVar8);
    goto LAB_10921b03c;
  }
  uVar1 = param_3;
  func_0x00010bf1cb60();
  lVar2 = *(long *)(param_1 + 0x90);
  _CGBitmapContextCreateImage();
  func_0x00010bfec9e0(param_3);
  lVar4 = param_1;
  func_0x00010be63520();
  if (uVar1 == 1) {
    if (lVar4 != 0) {
LAB_10921addc:
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      uVar1 = param_3;
      func_0x00010c0e1dc0(param_3);
      uVar3 = param_3;
      func_0x00010c0e1e00(param_3);
      uVar6 = param_3;
      func_0x00010c2a5040(param_3);
      uVar7 = param_3;
      func_0x00010bfe0640(param_3);
      _CGContextDrawImage((double)uVar1,(double)uVar3,(double)uVar6,(double)uVar7,uVar5,lVar4);
      _CFRelease(lVar4);
    }
  }
  else if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    uVar1 = param_3;
    func_0x00010c0e1dc0(param_3);
    uVar3 = param_3;
    func_0x00010c0e1e00(param_3);
    uVar6 = param_3;
    func_0x00010c2a5040(param_3);
    uVar7 = param_3;
    func_0x00010bfe0640(param_3);
    _CGContextClearRect((double)uVar1,(double)uVar3,(double)uVar6,(double)uVar7,uVar5);
    goto LAB_10921addc;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  _CGBitmapContextCreateImage(uVar5);
  uVar8 = NEON_ucvtf(*(undefined8 *)(param_1 + 200));
  uVar9 = NEON_ucvtf(*(undefined8 *)(param_1 + 0xd0));
  _CGContextClearRect(0,0,uVar8,uVar9,*(undefined8 *)(param_1 + 0x90));
  if (lVar2 != 0) {
    uVar8 = NEON_ucvtf(*(undefined8 *)(param_1 + 200));
    uVar9 = NEON_ucvtf(*(undefined8 *)(param_1 + 0xd0));
    _CGContextDrawImage(0,0,uVar8,uVar9,*(undefined8 *)(param_1 + 0x90),lVar2);
    _CFRelease(lVar2);
  }
LAB_10921b03c:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10921b064; end: 10921b06b; -[YYImageDecoder data] */

undefined8 FUN_10921b064(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10921b06c; end: 10921b073; -[YYImageDecoder type] */

undefined8 FUN_10921b06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10921b074; end: 10921b07b; -[YYImageDecoder scale] */

undefined8 FUN_10921b074(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10921b07c; end: 10921b083; -[YYImageDecoder frameCount] */

undefined8 FUN_10921b07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10921b084; end: 10921b08b; -[YYImageDecoder loopCount] */

undefined8 FUN_10921b084(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10921b08c; end: 10921b093; -[YYImageDecoder width] */

undefined8 FUN_10921b08c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10921b094; end: 10921b09b; -[YYImageDecoder height] */

undefined8 FUN_10921b094(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10921b09c; end: 10921b0a3; -[YYImageDecoder isFinalized] */

undefined1 FUN_10921b09c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 10921b0a4; end: 10921b0df; -[YYImageDecoder .cxx_destruct] */

void FUN_10921b0a4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x70,0);
  return;
}



/* Entry: 10921b0e0; end: 10921b117; -[YYImageEncoder init] */

undefined ** FUN_10921b0e0(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2cf58;
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  if ((long)ppuVar1 - 10U < 0xfffffffffffffff7) {
    _NSLog(&PTR____CFConstantStringClassReference_110f2cf98);
    _objc_release(puVar3);
    ppuVar4 = (undefined **)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1127010b8;
    ppuVar4 = &puStack_50;
    puStack_50 = puVar3;
    _objc_msgSendSuper2(ppuVar4,PTR_s_init_1125d9248);
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4[4] = (undefined *)ppuVar1;
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar2 = ppuVar4[1];
      ppuVar4[1] = puVar3;
      _objc_release(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar2 = ppuVar4[2];
      ppuVar4[2] = puVar3;
      _objc_release(puVar2);
      if ((long)ppuVar1 - 3U < 6) {
        ppuVar4[6] = (undefined *)0x3ff0000000000000;
        *(undefined1 *)(ppuVar4 + 3) = 1;
      }
      else {
        if ((long)ppuVar1 - 1U < 2) {
          puVar3 = (undefined *)0x3feccccccccccccd;
        }
        else {
          puVar3 = (undefined *)0x3fe999999999999a;
        }
        ppuVar4[6] = puVar3;
      }
    }
  }
  return ppuVar4;
}



/* Entry: 10921b118; end: 10921b22f; -[YYImageEncoder initWithType:] */

undefined8 * FUN_10921b118(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (param_3 - 10U < 0xfffffffffffffff7) {
    _NSLog(&PTR____CFConstantStringClassReference_110f2cf98);
    _objc_release(param_1);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1127010b8;
    puVar3 = &uStack_40;
    uStack_40 = param_1;
    _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[4] = param_3;
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar2 = puVar3[1];
      puVar3[1] = puVar1;
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar2 = puVar3[2];
      puVar3[2] = puVar1;
      _objc_release(uVar2);
      if (param_3 - 3U < 6) {
        puVar3[6] = 0x3ff0000000000000;
        *(undefined1 *)(puVar3 + 3) = 1;
      }
      else {
        if (param_3 - 1U < 2) {
          uVar2 = 0x3feccccccccccccd;
        }
        else {
          uVar2 = 0x3fe999999999999a;
        }
        puVar3[6] = uVar2;
      }
    }
  }
  return puVar3;
}



/* Entry: 10921b230; end: 10921b24f; -[YYImageEncoder setQuality:] */

void FUN_10921b230(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = 1.0;
  if (param_1 <= 1.0) {
    dVar2 = param_1;
  }
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = dVar2;
  }
  *(double *)(param_2 + 0x30) = dVar1;
  return;
}



/* Entry: 10921b250; end: 10921b2eb; -[YYImageEncoder addImage:duration:] */

void FUN_10921b250(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  if (lVar1 != 0) {
    dVar4 = 0.0;
    if (0.0 <= param_1) {
      dVar4 = param_1;
    }
    func_0x00010befa120(*(undefined8 *)(param_2 + 8),param_3,param_4);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10921b2ec; end: 10921b383; -[YYImageEncoder addImageWithData:duration:] */

void FUN_10921b2ec(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    dVar4 = 0.0;
    if (0.0 <= param_1) {
      dVar4 = param_1;
    }
    func_0x00010befa120(*(undefined8 *)(param_2 + 8),param_3,param_4);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10921b384; end: 10921b443; -[YYImageEncoder addImageWithFile:duration:] */

void FUN_10921b384(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      dVar5 = 0.0;
      if (0.0 <= param_1) {
        dVar5 = param_1;
      }
      func_0x00010befa120(*(undefined8 *)(param_2 + 8),param_3,puVar2);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4,param_3,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10921b444; end: 10921b497; -[YYImageEncoder _imageIOAvaliable] */

bool FUN_10921b444(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) - 1U < 7) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf529e0(lVar2);
    bVar1 = lVar2 != 0;
  }
  else if (*(long *)(param_1 + 0x20) == 8) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf529e0(lVar2);
    bVar1 = lVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10921b498; end: 10921b58b; -[YYImageEncoder _newImageDestination:imageCount:] */

undefined * FUN_10921b498(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc();
      func_0x00010bfee820();
      if (puVar1 == (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        FUN_109218314(uVar2);
        puVar3 = puVar1;
        _CGImageDestinationCreateWithURL(puVar1,uVar2,param_4,0);
      }
      _objc_release(puVar1);
      goto LAB_10921b570;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    puVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if (((ulong)puVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_109218314(uVar2);
      puVar3 = param_3;
      _CGImageDestinationCreateWithData(param_3,uVar2,param_4,0);
      goto LAB_10921b570;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_10921b570:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10921b58c; end: 10921b9c7; -[YYImageEncoder _encodeImageWithDestination:imageCount:] */

undefined *
FUN_10921b58c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar4 = PTR__kCGImagePropertyGIFDictionary_110349d08;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_1;
  puVar13 = param_4;
  if (*(long *)(param_1 + 0x20) == 7) {
    uStack_78 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_110349d08;
    uStack_88 = *(undefined8 *)PTR__kCGImagePropertyGIFLoopCount_110349d10;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = &uStack_78;
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _CGImageDestinationSetProperties(param_3,puVar12);
    _objc_release();
  }
  iVar8 = (int)puVar13;
  if (param_4 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    uVar11 = *(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_110349c80;
    uVar9 = *(undefined8 *)puVar4;
    uVar10 = *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_110349d00;
    do {
      _objc_autoreleasePoolPush();
      puVar4 = *(undefined **)(param_1 + 8);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if ((param_4 == (undefined8 *)0x1) || (*(long *)(param_1 + 0x20) != 7)) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_b8 = uVar11;
        func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
        _objc_retainAutoreleasedReturnValue();
        iVar8 = (int)&uStack_b8;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_b0 = puVar5;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = *(undefined **)(param_1 + 0x10);
        uStack_a8 = uVar10;
        uStack_98 = uVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_a0 = puVar5;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        iVar8 = (int)&uStack_98;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_90 = puVar6;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      puVar6 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
        puVar6 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar5);
        puVar5 = puVar4;
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
          _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
          puVar7 = puVar4;
          _objc_opt_isKindOfClass(puVar4,puVar6);
          if (((ulong)puVar7 & 1) == 0) goto LAB_10921b968;
          _CGImageSourceCreateWithData(puVar4,0);
        }
        else {
          _CGImageSourceCreateWithURL(puVar4,0);
        }
        if (puVar5 != (undefined *)0x0) {
          puVar6 = puVar3;
          _CGImageDestinationAddImageFromSource(param_3,puVar5,0);
          iVar8 = (int)puVar6;
          _CFRelease(puVar5);
        }
      }
      else {
        _objc_retain(puVar4);
        puVar5 = puVar4;
        func_0x00010bfe8380();
        puVar6 = puVar4;
        if (puVar5 != (undefined *)0x0) {
          puVar5 = puVar4;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          if (puVar5 != (undefined *)0x0) {
            puVar5 = puVar4;
            _objc_retainAutorelease(puVar4);
            uVar1 = (uint)puVar5;
            func_0x00010bdc1020();
            _CGImageGetBitmapInfo();
            puVar5 = puVar4;
            _objc_retainAutorelease(puVar4);
            uVar2 = (uint)puVar5;
            func_0x00010bdc1020();
            _CGImageGetAlphaInfo();
            puVar5 = puVar4;
            _objc_retainAutorelease();
            func_0x00010bdc1020();
            puVar7 = puVar4;
            func_0x00010bfe8380(puVar4);
            FUN_109217d50(puVar5,puVar7,uVar2 | uVar1);
            if (puVar5 != (undefined *)0x0) {
              puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x00010bfe9240();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              _CFRelease(puVar5);
            }
          }
        }
        puVar5 = puVar6;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        if (puVar5 != (undefined *)0x0) {
          puVar5 = puVar4;
          _objc_retainAutorelease(puVar4);
          func_0x00010bdc1020();
          _CGImageDestinationAddImage(param_3,puVar5,puVar3);
        }
        _objc_release(puVar6);
      }
LAB_10921b968:
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_autoreleasePoolPop();
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while (param_4 != puVar13);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar5 = *(undefined **)(puVar12 + 8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar12 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar4);
  if (((ulong)puVar12 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    puVar12 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (((ulong)puVar12 & 1) != 0) {
      puVar12 = puVar5;
      func_0x00010beec820(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      goto joined_r0x00010921ba74;
    }
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar12 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar4);
    if (((ulong)puVar12 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe93c0();
      _objc_retainAutoreleasedReturnValue();
      goto joined_r0x00010921ba74;
    }
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar5);
    puVar4 = puVar5;
joined_r0x00010921ba74:
    if (puVar4 != (undefined *)0x0) {
      puVar12 = puVar4;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar4;
        func_0x00010bfe8380();
        if (puVar3 == (undefined *)0x0) {
          if (iVar8 == 0) {
            _CFRetain(puVar12);
          }
          else {
            FUN_109217894();
          }
        }
        else {
          puVar3 = puVar4;
          func_0x00010bfe8380(puVar4);
          FUN_109217d50(puVar12,puVar3,0x2002);
        }
        goto LAB_10921bb14;
      }
    }
  }
  puVar12 = (undefined *)0x0;
LAB_10921bb14:
  _objc_release(puVar5);
  _objc_release(puVar4);
  return puVar12;
}



/* Entry: 10921b9c8; end: 10921bb37; -[YYImageEncoder _newCGImageFromIndex:decoded:] */

undefined * FUN_10921b9c8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = puVar1;
      func_0x00010beec820(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto joined_r0x00010921ba74;
    }
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar4);
    if (((ulong)puVar3 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe93c0();
      _objc_retainAutoreleasedReturnValue();
      goto joined_r0x00010921ba74;
    }
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar1);
    puVar4 = puVar1;
joined_r0x00010921ba74:
    if (puVar4 != (undefined *)0x0) {
      puVar3 = puVar4;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      if (puVar3 != (undefined *)0x0) {
        puVar2 = puVar4;
        func_0x00010bfe8380();
        if (puVar2 == (undefined *)0x0) {
          if (param_4 == 0) {
            _CFRetain(puVar3);
          }
          else {
            FUN_109217894();
          }
        }
        else {
          puVar2 = puVar4;
          func_0x00010bfe8380(puVar4);
          FUN_109217d50(puVar3,puVar2,0x2002);
        }
        goto LAB_10921bb14;
      }
    }
  }
  puVar3 = (undefined *)0x0;
LAB_10921bb14:
  _objc_release(puVar1);
  _objc_release(puVar4);
  return puVar3;
}



/* Entry: 10921bb38; end: 10921bbf7; -[YYImageEncoder _encodeWithImageIO] */

void FUN_10921bb38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_opt_new();
  if (*(long *)(param_1 + 0x20) == 7) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf529e0(uVar2);
  }
  else {
    uVar2 = 1;
  }
  lVar3 = param_1;
  func_0x00010be63060(param_1,param_2,puVar1,uVar2);
  if (lVar3 != 0) {
    func_0x00010be09340(param_1,param_2,lVar3,uVar2);
    lVar4 = lVar3;
    _CGImageDestinationFinalize();
    _CFRelease(lVar3);
    if (((int)lVar4 != 0) && (puVar5 = puVar1, func_0x00010c08fa60(), puVar5 != (undefined *)0x0)) {
      _objc_retain(puVar1);
      puVar5 = puVar1;
      goto LAB_10921bbdc;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_10921bbdc:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10921bbf8; end: 10921bc97; -[YYImageEncoder _encodeWithImageIO:] */

long FUN_10921bbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 7) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf529e0(uVar1);
  }
  else {
    uVar1 = 1;
  }
  lVar2 = param_1;
  func_0x00010be63060(param_1,param_2,param_3,uVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010be09340(param_1,param_2,lVar2,uVar1);
    lVar3 = lVar2;
    _CGImageDestinationFinalize(lVar2);
    _CFRelease(lVar2);
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10921bc98; end: 10921c48b; -[YYImageEncoder _encodeAPNG] */

void FUN_10921bc98(undefined8 param_1,double param_2,undefined **param_3,undefined **param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  undefined **ppuVar13;
  long *plVar14;
  long *plVar15;
  undefined2 uVar16;
  long lVar17;
  long lVar18;
  long extraout_x12;
  long lVar19;
  long lVar20;
  long lVar21;
  long extraout_x14;
  long lVar22;
  undefined **ppuVar23;
  uint uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined1 *puVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  ulong uVar31;
  undefined **ppuVar32;
  undefined **unaff_x26;
  undefined **unaff_x28;
  float fVar33;
  double dVar34;
  undefined *puVar35;
  undefined1 auVar36 [16];
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  undefined8 unaff_d11;
  undefined *puVar37;
  undefined *puVar38;
  long alStack_218 [19];
  undefined1 auStack_180 [8];
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  ulong uStack_158;
  undefined **ppuStack_150;
  int iStack_148;
  int iStack_144;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  ushort uStack_ec;
  ushort uStack_ea;
  undefined2 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  ushort uStack_bc;
  ushort uStack_ba;
  undefined2 uStack_b8;
  uint uStack_b6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar32 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = param_3[1];
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    ppuVar25 = (undefined **)0x0;
    ppuVar26 = (undefined **)0x0;
  }
  else {
    ppuVar28 = (undefined **)0x0;
    ppuVar29 = (undefined **)0x0;
    ppuVar10 = (undefined **)0x0;
    do {
      ppuVar8 = param_3;
      func_0x00010be62d60();
      ppuVar30 = (undefined **)0x0;
      ppuVar25 = ppuVar29;
      ppuVar26 = ppuVar10;
      ppuVar9 = param_3;
      if (ppuVar8 == (undefined **)0x0) goto LAB_10921c41c;
      unaff_x26 = ppuVar8;
      _CGImageGetWidth();
      unaff_d8 = (double)unaff_x26;
      ppuVar9 = ppuVar8;
      _CGImageGetHeight();
      unaff_d9 = (double)ppuVar9;
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      param_2 = unaff_d9;
      func_0x00010c2971c0(unaff_d8,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar32);
      _objc_release(puVar7);
      unaff_x28 = ppuVar8;
      FUN_1092183d8();
      _CFRelease(ppuVar8);
      ppuVar23 = param_3;
      if (unaff_x28 == (undefined **)0x0) goto LAB_10921c418;
      func_0x00010befa120(ppuVar13);
      _CFRelease(unaff_x28);
      ppuVar30 = (undefined **)0x0;
      if ((unaff_x26 == (undefined **)0x0) || (ppuVar9 == (undefined **)0x0)) goto LAB_10921c41c;
      ppuVar26 = (undefined **)(long)unaff_d8;
      if (unaff_d8 <= (double)ppuVar10) {
        ppuVar26 = ppuVar10;
      }
      ppuVar25 = (undefined **)(long)unaff_d9;
      if (unaff_d9 <= (double)ppuVar29) {
        ppuVar25 = ppuVar29;
      }
      ppuVar28 = (undefined **)((long)ppuVar28 + 1);
      ppuVar30 = (undefined **)param_3[1];
      func_0x00010bf529e0();
      ppuVar29 = ppuVar25;
      ppuVar10 = ppuVar26;
    } while (ppuVar28 < ppuVar30);
  }
  ppuVar28 = ppuVar32;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  unaff_d9 = (double)func_0x00010bdc10a0();
  _objc_release(ppuVar28);
  unaff_d10 = (double)ppuVar25;
  bVar4 = true;
  if (((double)ppuVar26 <= unaff_d9) && (bVar4 = false, !NAN(param_2) && !NAN(unaff_d10))) {
    bVar4 = param_2 < unaff_d10;
  }
  if (bVar4) {
    ppuVar29 = param_3;
    func_0x00010be62d60();
    ppuVar9 = param_3;
    unaff_d8 = param_2;
    if (ppuVar29 != (undefined **)0x0) {
      if (lRam0000000113732a20 != -1) {
        func_0x000107c27d9c(0x113732a20,&PTR___NSConcreteGlobalBlock_110ae19c8);
      }
      ppuVar10 = (undefined **)0x0;
      param_4 = ppuVar26;
      _CGBitmapContextCreate(0,ppuVar26,ppuVar25,8,0,uRam0000000113732a18,0x2002);
      ppuVar28 = ppuVar29;
      if (ppuVar10 == (undefined **)0x0) {
        _CFRelease(ppuVar29);
      }
      else {
        param_4 = ppuVar29;
        _CGContextDrawImage(0,unaff_d10 - param_2,unaff_d9,param_2);
        _CFRelease(ppuVar29);
        ppuVar26 = ppuVar10;
        _CGBitmapContextCreateImage();
        _CFRelease(ppuVar10);
        ppuVar25 = ppuVar10;
        if (ppuVar26 != (undefined **)0x0) {
          ppuVar25 = ppuVar26;
          FUN_1092183d8();
          _CFRelease(ppuVar26);
          if (ppuVar25 != (undefined **)0x0) {
            func_0x00010c1d04c0(ppuVar13);
            _CFRelease(ppuVar25);
            goto LAB_10921beec;
          }
        }
      }
    }
LAB_10921c418:
    ppuVar30 = (undefined **)0x0;
  }
  else {
LAB_10921beec:
    ppuVar23 = ppuVar13;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar23;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    param_4 = ppuVar23;
    func_0x00010c08fa60();
    ppuVar29 = ppuVar26;
    FUN_109219a1c();
    ppuStack_138 = ppuVar23;
    if (ppuVar29 == (undefined **)0x0) {
      ppuVar30 = (undefined **)0x0;
    }
    else {
      ppuVar26 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
      ppuStack_150 = ppuVar32;
      ppuStack_118 = ppuVar13;
      _objc_opt_new();
      uStack_98 = 0xa1a0a0d474e5089;
      func_0x00010bf06a40();
      if (*(int *)(ppuVar29 + 3) != 0) {
        uVar31 = 0;
        ppuVar25 = (undefined **)0x0;
        unaff_x26 = (undefined **)0x0;
        bVar4 = false;
        iStack_144 = (int)unaff_d9;
        iStack_148 = (int)param_2;
        puStack_128 = (undefined8 *)((ulong)&iStack_100 | 0xc);
        param_2 = 5.119171481251724e+59;
        unaff_d9 = 5.119152055673481e+59;
        ppuStack_140 = ppuVar29;
        ppuStack_130 = param_3;
        do {
          ppuVar13 = ppuStack_118;
          puStack_120 = ppuVar29[2] + uVar31 * 0x10;
          if (bVar4) {
            if ((int)unaff_x26 != 0) goto LAB_10921c380;
LAB_10921c104:
            if (*(int *)(puStack_120 + 4) == 0x54414449) {
              unaff_x26 = (undefined **)0x0;
              bVar4 = true;
            }
            else {
              ppuVar32 = ppuVar13;
              func_0x00010bf529e0();
              if (ppuVar32 < (undefined **)0x2) goto LAB_10921c380;
              ppuVar32 = (undefined **)0x1;
              uStack_158 = uVar31;
              do {
                unaff_x26 = ppuVar13;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                param_3 = unaff_x26;
                _objc_retainAutorelease();
                func_0x00010bf25f00();
                param_4 = unaff_x26;
                func_0x00010c08fa60();
                ppuVar28 = param_3;
                FUN_109219a1c();
                if (ppuVar28 == (undefined **)0x0) {
                  func_0x000109218800(ppuStack_140);
                  _objc_release(unaff_x26);
                  ppuVar30 = (undefined **)0x0;
                  goto LAB_10921c3f8;
                }
                *puStack_128 = 0;
                puStack_128[1] = 0;
                iStack_fc = (int)*ppuVar28;
                iStack_f8 = (int)((ulong)*ppuVar28 >> 0x20);
                unaff_x28 = (undefined **)ppuStack_130[2];
                iStack_100 = (int)ppuVar25;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf885a0();
                FUN_10921c48c(&uStack_ec,&uStack_ea);
                _objc_release(unaff_x28);
                uStack_e8 = 1;
                uStack_b6 = 0;
                uStack_d8 = 0x4c5463661a000000;
                auVar2._4_4_ = iStack_fc;
                auVar2._0_4_ = iStack_100;
                auVar2._8_4_ = iStack_f8;
                auVar2._12_4_ = uStack_f4;
                auVar36 = NEON_rev32(auVar2,1);
                uStack_c8 = auVar36._8_8_;
                uStack_d0 = auVar36._0_8_;
                uVar5 = (uStack_f0 & 0xff00ff00) >> 8 | (uStack_f0 & 0xff00ff) << 8;
                uStack_c0 = uVar5 >> 0x10 | uVar5 << 0x10;
                uStack_bc = uStack_ec >> 8 | uStack_ec << 8;
                uStack_ba = uStack_ea >> 8 | uStack_ea << 8;
                uStack_b8 = 1;
                param_4 = (undefined **)((ulong)&uStack_d8 | 4);
                uVar5 = 0;
                _crc32(0,param_4,0x1e);
                uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                uStack_b6 = uVar5 >> 0x10 | uVar5 << 0x10;
                func_0x00010bf06a40(ppuVar26);
                ppuVar25 = (undefined **)(ulong)((int)ppuVar25 + 1);
                ppuVar13 = (undefined **)(ulong)*(uint *)(ppuVar28 + 3);
                if (*(uint *)(ppuVar28 + 3) != 0) {
                  lVar20 = 0;
                  ppuVar29 = (undefined **)0x0;
                  do {
                    ppuVar23 = (undefined **)(ppuVar28[2] + lVar20);
                    if (*(int *)((long)ppuVar23 + 4) == 0x54414449) {
                      uVar5 = (*(int *)(ppuVar23 + 1) + 4U & 0xff00ff00) >> 8 |
                              (*(int *)(ppuVar23 + 1) + 4U & 0xff00ff) << 8;
                      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5 >> 0x10 | uVar5 << 0x10);
                      func_0x00010bf06a40(ppuVar26);
                      uStack_104 = 0x54416466;
                      func_0x00010bf06a40(ppuVar26);
                      uVar24 = (uint)ppuVar25;
                      uVar5 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
                      uStack_108 = uVar5 >> 0x10 | uVar5 << 0x10;
                      func_0x00010bf06a40(ppuVar26);
                      _objc_retainAutorelease(unaff_x26);
                      func_0x00010bf25f00();
                      func_0x00010bf06a40(ppuVar26);
                      unaff_x28 = ppuVar26;
                      _objc_retainAutorelease();
                      func_0x00010bf25f00();
                      ppuVar13 = ppuVar26;
                      func_0x00010c08fa60();
                      param_4 = (undefined **)
                                ((((long)unaff_x28 + (long)ppuVar13) -
                                 (ulong)*(uint *)(ppuVar23 + 1)) + -8);
                      uVar5 = 0;
                      _crc32(0,param_4,*(uint *)(ppuVar23 + 1) + 8);
                      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                      uStack_10c = uVar5 >> 0x10 | uVar5 << 0x10;
                      func_0x00010bf06a40(ppuVar26);
                      ppuVar25 = (undefined **)(ulong)(uVar24 + 1);
                      ppuVar13 = (undefined **)(ulong)*(uint *)(ppuVar28 + 3);
                    }
                    ppuVar29 = (undefined **)((long)ppuVar29 + 1);
                    lVar20 = lVar20 + 0x10;
                  } while (ppuVar29 < ppuVar13);
                }
                func_0x000109218800(ppuVar28);
                _objc_release(unaff_x26);
                ppuVar13 = ppuStack_118;
                ppuVar32 = (undefined **)((long)ppuVar32 + 1);
                ppuVar28 = ppuStack_118;
                func_0x00010bf529e0();
              } while (ppuVar32 < ppuVar28);
              bVar4 = true;
              unaff_x26 = (undefined **)0x1;
              ppuVar23 = ppuStack_138;
              ppuVar29 = ppuStack_140;
              uVar31 = uStack_158;
              param_3 = ppuStack_130;
            }
          }
          else {
            if (*(int *)(puStack_120 + 4) != 0x54414449) {
              bVar4 = false;
              goto LAB_10921c388;
            }
            uStack_a0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0x4c54636108000000;
            ppuVar23 = ppuStack_118;
            func_0x00010bf529e0();
            uVar5 = ((uint)ppuVar23 & 0xff00ff00) >> 8 | ((uint)ppuVar23 & 0xff00ff) << 8;
            uVar24 = (*(uint *)(param_3 + 5) & 0xff00ff00) >> 8 |
                     (*(uint *)(param_3 + 5) & 0xff00ff) << 8;
            uStack_a8 = CONCAT44(uVar24 >> 0x10 | uVar24 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10);
            uVar5 = 0;
            _crc32(0,(ulong)&uStack_b0 | 4,0xc);
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            uStack_a0 = uVar5 >> 0x10 | uVar5 << 0x10;
            func_0x00010bf06a40(ppuVar26);
            *puStack_128 = 0;
            puStack_128[1] = 0;
            iStack_fc = iStack_144;
            iStack_f8 = iStack_148;
            puVar7 = param_3[2];
            iStack_100 = (int)ppuVar25;
            func_0x00010c0dfd40(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            FUN_10921c48c(&uStack_ec,&uStack_ea);
            ppuVar23 = ppuStack_138;
            ppuVar29 = ppuStack_140;
            _objc_release(puVar7);
            uStack_e8 = 1;
            uStack_b6 = 0;
            uStack_d8 = 0x4c5463661a000000;
            auVar36._4_4_ = iStack_fc;
            auVar36._0_4_ = iStack_100;
            auVar36._8_4_ = iStack_f8;
            auVar36._12_4_ = uStack_f4;
            auVar36 = NEON_rev32(auVar36,1);
            uStack_c8 = auVar36._8_8_;
            uStack_d0 = auVar36._0_8_;
            uVar5 = (uStack_f0 & 0xff00ff00) >> 8 | (uStack_f0 & 0xff00ff) << 8;
            uStack_c0 = uVar5 >> 0x10 | uVar5 << 0x10;
            uStack_bc = uStack_ec >> 8 | uStack_ec << 8;
            uStack_ba = uStack_ea >> 8 | uStack_ea << 8;
            uStack_b8 = 1;
            param_4 = (undefined **)((ulong)&uStack_d8 | 4);
            uVar5 = 0;
            _crc32(0,param_4,0x1e);
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            uStack_b6 = uVar5 >> 0x10 | uVar5 << 0x10;
            func_0x00010bf06a40(ppuVar26);
            ppuVar25 = (undefined **)(ulong)((int)ppuVar25 + 1);
            if ((int)unaff_x26 == 0) goto LAB_10921c104;
LAB_10921c380:
            bVar4 = true;
            unaff_x26 = (undefined **)0x1;
          }
LAB_10921c388:
          _objc_retainAutorelease(ppuVar23);
          func_0x00010bf25f00();
          func_0x00010bf06a40(ppuVar26);
          uVar31 = uVar31 + 1;
        } while (uVar31 < *(uint *)(ppuVar29 + 3));
      }
      func_0x000109218800(ppuVar29);
      _objc_retain(ppuVar26);
      ppuVar13 = ppuStack_118;
      ppuVar30 = ppuVar26;
LAB_10921c3f8:
      _objc_release(ppuVar26);
      ppuVar32 = ppuStack_150;
      ppuVar28 = ppuVar29;
    }
    _objc_release(ppuStack_138);
    ppuVar9 = param_3;
    unaff_d8 = param_2;
  }
LAB_10921c41c:
  _objc_release(ppuVar32);
  ppuVar29 = ppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) goto _objc_autoreleaseReturnValue;
  dVar34 = (double)___stack_chk_fail();
  pcStack_168 = FUN_10921c48c;
  puVar3 = auStack_180;
  puVar27 = auStack_180;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = &stack0xfffffffffffffff0;
  if (255.0 <= dVar34) {
    *(undefined2 *)ppuVar29 = 0xff;
    uVar12 = 1;
LAB_10921c5d8:
    *(undefined2 *)param_4 = uVar12;
  }
  else {
    if (dVar34 <= 0.00392156862745098) {
      *(undefined2 *)ppuVar29 = 1;
      uVar12 = 0xff;
      goto LAB_10921c5d8;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar3 = puVar27;
    dVar34 = (double)(*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 *)(extraout_x14 + -0x48) = 1;
    *(undefined8 *)(extraout_x14 + -0x50) = 0;
    lVar20 = (long)(double)(long)(double)(long)dVar34;
    *(long *)(extraout_x14 + -0x40) = lVar20;
    if (lVar20 < 0x100) {
      lVar19 = 7;
      plVar14 = alStack_218 + 2;
      plVar15 = (long *)(extraout_x12 + 0x18);
      lVar21 = lVar20;
      lVar22 = 1;
      while (lVar18 = lVar22, lVar17 = lVar21,
            0.00196078431372549 <= ABS(dVar34 - (double)lVar20) && lVar19 != 0) {
        dVar34 = 1.0 / (dVar34 - (double)lVar20);
        lVar20 = (long)(double)(long)(double)(long)dVar34;
        lVar21 = plVar15[-2] + lVar20 * lVar17;
        *plVar15 = lVar21;
        lVar22 = plVar14[-2] + lVar20 * lVar18;
        *plVar14 = lVar22;
        if ((0xff < lVar21) ||
           (lVar19 = lVar19 + -1, plVar14 = plVar14 + 1, plVar15 = plVar15 + 1, 0xff < lVar22))
        break;
      }
    }
    else {
      lVar17 = 0;
      lVar18 = 0;
    }
    uVar16 = (undefined2)lVar17;
    uVar12 = (undefined2)lVar18;
    if (lVar17 == 0 || lVar18 == 0) {
      uVar16 = 1;
      uVar12 = 100;
    }
    *(undefined2 *)ppuVar29 = uVar16;
    *(undefined2 *)param_4 = uVar12;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
  *(double *)(puVar3 + -0x78) = unaff_d10;
  *(double *)(puVar3 + -0x70) = unaff_d9;
  *(double *)(puVar3 + -0x68) = unaff_d8;
  *(undefined ***)(puVar3 + -0x60) = unaff_x28;
  *(undefined ***)(puVar3 + -0x58) = ppuVar9;
  *(undefined ***)(puVar3 + -0x50) = unaff_x26;
  *(undefined ***)(puVar3 + -0x48) = ppuVar30;
  *(undefined ***)(puVar3 + -0x40) = ppuVar28;
  *(undefined ***)(puVar3 + -0x38) = ppuVar26;
  *(undefined ***)(puVar3 + -0x30) = ppuVar25;
  *(undefined ***)(puVar3 + -0x28) = ppuVar13;
  *(undefined ***)(puVar3 + -0x20) = ppuVar32;
  *(undefined ***)(puVar3 + -0x18) = ppuVar23;
  *(undefined1 ***)(puVar3 + -0x10) = &puStack_170;
  *(code **)(puVar3 + -8) = FUN_10921c63c;
  ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = ppuVar29[1];
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      ppuVar13 = ppuVar29;
      func_0x00010be62d60();
      if (ppuVar13 == (undefined **)0x0) goto LAB_10921ca98;
      bVar1 = *(byte *)(ppuVar29 + 3);
      puVar37 = ppuVar29[6];
      ppuVar32 = ppuVar13;
      _CGImageGetWidth();
      ppuVar26 = ppuVar13;
      _CGImageGetHeight();
      if ((ppuVar32 + -0x800 < (undefined **)0xffffffffffffc001) ||
         (ppuVar26 + -0x800 < (undefined **)0xffffffffffffc001)) {
LAB_10921c8f0:
        _CFRelease(ppuVar13);
        goto LAB_10921ca98;
      }
      *(undefined8 *)(puVar3 + -0xa8) = 0;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      *(undefined8 *)(puVar3 + -0x98) = 0;
      *(undefined8 *)(puVar3 + -0xa0) = 0;
      ppuVar32 = ppuVar13;
      FUN_109217980(ppuVar13,puVar3 + -0xb0,3);
      if (((ulong)ppuVar32 & 1) == 0) goto LAB_10921c8f0;
      *(undefined4 *)(puVar3 + -0xc0) = 0;
      *(undefined8 *)(puVar3 + -0xd8) = 0;
      *(undefined8 *)(puVar3 + -0xe0) = 0;
      *(undefined8 *)(puVar3 + -200) = 0;
      *(undefined8 *)(puVar3 + -0xd0) = 0;
      *(undefined8 *)(puVar3 + -0xf8) = 0;
      *(undefined8 *)(puVar3 + -0x100) = 0;
      *(undefined8 *)(puVar3 + -0xe8) = 0;
      *(undefined8 *)(puVar3 + -0xf0) = 0;
      *(undefined8 *)(puVar3 + -0x118) = 0;
      *(undefined8 *)(puVar3 + -0x120) = 0;
      *(undefined8 *)(puVar3 + -0x108) = 0;
      *(undefined8 *)(puVar3 + -0x110) = 0;
      *(undefined8 *)(puVar3 + -0x138) = 0;
      *(undefined8 *)(puVar3 + -0x140) = 0;
      *(undefined8 *)(puVar3 + -0x128) = 0;
      *(undefined8 *)(puVar3 + -0x130) = 0;
      *(undefined8 *)(puVar3 + -0x158) = 0;
      *(undefined8 *)(puVar3 + -0x160) = 0;
      *(undefined8 *)(puVar3 + -0x148) = 0;
      *(undefined8 *)(puVar3 + -0x150) = 0;
      *(undefined8 *)(puVar3 + -0x178) = 0;
      *(undefined8 *)(puVar3 + -0x180) = 0;
      *(undefined8 *)(puVar3 + -0x168) = 0;
      *(undefined8 *)(puVar3 + -0x170) = 0;
      *(undefined8 *)(puVar3 + -0x198) = 0;
      *(undefined8 *)(puVar3 + -0x1a0) = 0;
      *(undefined8 *)(puVar3 + -0x188) = 0;
      *(undefined8 *)(puVar3 + -400) = 0;
      *(undefined8 *)(puVar3 + -0x1b8) = 0;
      *(undefined8 *)(puVar3 + -0x1c0) = 0;
      *(undefined8 *)(puVar3 + -0x1a8) = 0;
      *(undefined8 *)(puVar3 + -0x1b0) = 0;
      *(undefined8 *)(puVar3 + -0x1d8) = 0;
      *(undefined8 *)(puVar3 + -0x1e0) = 0;
      *(undefined8 *)(puVar3 + -0x1c8) = 0;
      *(undefined8 *)(puVar3 + -0x1d0) = 0;
      *(undefined8 *)(puVar3 + -0x1f8) = 0;
      *(undefined8 *)(puVar3 + -0x200) = 0;
      *(undefined8 *)(puVar3 + -0x1e8) = 0;
      *(undefined8 *)(puVar3 + -0x1f0) = 0;
      *(undefined8 *)(puVar3 + -0x218) = 0;
      *(undefined8 *)(puVar3 + -0x220) = 0;
      *(undefined8 *)(puVar3 + -0x208) = 0;
      *(undefined8 *)(puVar3 + -0x210) = 0;
      *(undefined8 *)(puVar3 + -0x238) = 0;
      *(undefined8 *)(puVar3 + -0x240) = 0;
      *(undefined8 *)(puVar3 + -0x228) = 0;
      *(undefined8 *)(puVar3 + -0x230) = 0;
      puVar35 = (undefined *)0x3ff0000000000000;
      if ((double)puVar37 <= 1.0) {
        puVar35 = puVar37;
      }
      puVar38 = (undefined *)0x0;
      if (0.0 <= (double)puVar37) {
        puVar38 = puVar35;
      }
      *(undefined8 *)(puVar3 + -0x248) = 0;
      *(undefined8 *)(puVar3 + -0x250) = 0;
      puVar27 = puVar3 + -0x130;
      func_0x0001082400c0(puVar27,0,0x20e);
      if ((int)puVar27 == 0) {
LAB_10921c864:
        bVar4 = false;
LAB_10921c868:
        if (*(long *)(puVar3 + -0xb0) != 0) {
          _free();
        }
        if (!bVar4) goto LAB_10921c8f0;
LAB_10921c880:
        _free(*(undefined8 *)(puVar3 + -0x150));
        puVar27 = (undefined1 *)0x0;
        uVar11 = *(undefined8 *)(puVar3 + -0x148);
      }
      else {
        *(float *)(puVar3 + -300) = (float)(double)(long)((double)puVar38 * 100.0);
        *(uint *)(puVar3 + -0x130) = (uint)bVar1;
        *(undefined8 *)(puVar3 + -0x128) = 4;
        iVar6 = (int)(puVar3 + -0x130);
        func_0x0001082401cc();
        if (iVar6 == 0) goto LAB_10921c864;
        *(undefined8 *)(puVar3 + -0x148) = 0;
        *(undefined8 *)(puVar3 + -0x150) = 0;
        *(undefined8 *)(puVar3 + -0x138) = 0;
        *(undefined8 *)(puVar3 + -0x140) = 0;
        *(undefined8 *)(puVar3 + -0x168) = 0;
        *(undefined8 *)(puVar3 + -0x170) = 0;
        *(undefined8 *)(puVar3 + -0x158) = 0;
        *(undefined8 *)(puVar3 + -0x160) = 0;
        *(undefined8 *)(puVar3 + -0x188) = 0;
        *(undefined8 *)(puVar3 + -400) = 0;
        *(undefined8 *)(puVar3 + -0x178) = 0;
        *(undefined8 *)(puVar3 + -0x180) = 0;
        *(undefined8 *)(puVar3 + -0x1a8) = 0;
        *(undefined8 *)(puVar3 + -0x1b0) = 0;
        *(undefined8 *)(puVar3 + -0x198) = 0;
        *(undefined8 *)(puVar3 + -0x1a0) = 0;
        *(undefined8 *)(puVar3 + -0x1c8) = 0;
        *(undefined8 *)(puVar3 + -0x1d0) = 0;
        *(undefined8 *)(puVar3 + -0x1b8) = 0;
        *(undefined8 *)(puVar3 + -0x1c0) = 0;
        *(undefined8 *)(puVar3 + -0x1e8) = 0;
        *(undefined8 *)(puVar3 + -0x1f0) = 0;
        *(undefined8 *)(puVar3 + -0x1d8) = 0;
        *(undefined8 *)(puVar3 + -0x1e0) = 0;
        *(undefined8 *)(puVar3 + -0x208) = 0;
        *(undefined8 *)(puVar3 + -0x210) = 0;
        *(undefined8 *)(puVar3 + -0x1f8) = 0;
        *(undefined8 *)(puVar3 + -0x200) = 0;
        *(undefined8 *)(puVar3 + -0x228) = 0;
        *(undefined8 *)(puVar3 + -0x230) = 0;
        *(undefined8 *)(puVar3 + -0x218) = 0;
        *(undefined8 *)(puVar3 + -0x220) = 0;
        *(undefined **)(puVar3 + -0x1d0) = &UNK_108245dd0;
        *(int *)(puVar3 + -0x228) = (int)*(undefined8 *)(puVar3 + -0xa0);
        *(int *)(puVar3 + -0x224) = (int)*(undefined8 *)(puVar3 + -0xa8);
        *(uint *)(puVar3 + -0x230) = (uint)bVar1;
        if (*(long *)(puVar3 + -0xb0) == 0) goto LAB_10921c880;
        bVar4 = true;
        puVar27 = puVar3 + -0x230;
        func_0x0001082466a0(puVar27,*(long *)(puVar3 + -0xb0),*(undefined4 *)(puVar3 + -0x98),4,0,1)
        ;
        if ((int)puVar27 == 0) goto LAB_10921c868;
        *(undefined8 *)(puVar3 + -0x250) = 0;
        *(undefined8 *)(puVar3 + -0x248) = 0;
        *(undefined8 *)(puVar3 + -0x240) = 0;
        *(undefined **)(puVar3 + -0x1d0) = &UNK_1082460ac;
        *(undefined1 **)(puVar3 + -0x1c8) = puVar3 + -0x250;
        puVar27 = puVar3 + -0x130;
        func_0x000108251920(puVar27,puVar3 + -0x230);
        if ((int)puVar27 == 0) goto LAB_10921c868;
        _CFAllocatorGetDefault();
        _CFDataCreate();
        _free(*(undefined8 *)(puVar3 + -0x250));
        _free(*(undefined8 *)(puVar3 + -0x150));
        _free(*(undefined8 *)(puVar3 + -0x148));
        *(undefined8 *)(puVar3 + -0x1e8) = 0;
        *(undefined4 *)(puVar3 + -0x1e0) = 0;
        *(undefined8 *)(puVar3 + -0x218) = 0;
        *(undefined8 *)(puVar3 + -0x220) = 0;
        *(undefined8 *)(puVar3 + -0x208) = 0;
        *(undefined8 *)(puVar3 + -0x210) = 0;
        *(undefined8 *)(puVar3 + -0x1fc) = 0;
        *(undefined8 *)(puVar3 + -0x204) = 0;
        *(undefined8 *)(puVar3 + -0x150) = 0;
        *(undefined8 *)(puVar3 + -0x148) = 0;
        uVar11 = *(undefined8 *)(puVar3 + -0xb0);
      }
      _free(uVar11);
      _CFRelease(ppuVar13);
      if (puVar27 == (undefined1 *)0x0) goto LAB_10921ca98;
      func_0x00010befa120(ppuVar23);
      _CFRelease(puVar27);
      puVar7 = puVar7 + 1;
      puVar37 = ppuVar29[1];
      func_0x00010bf529e0();
    } while (puVar7 < puVar37);
  }
  ppuVar13 = ppuVar23;
  func_0x00010bf529e0();
  if (ppuVar13 == (undefined **)0x1) {
    ppuVar30 = ppuVar23;
    func_0x00010bfb1920(ppuVar23);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar20 = 1;
    _calloc(1,0x40);
    if (lVar20 != 0) {
      puVar7 = ppuVar29[1];
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
        do {
          ppuVar13 = ppuVar23;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar37 = ppuVar29[2];
          func_0x00010c0dfd40(puVar37);
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar3 + -0x218) = 0;
          *(undefined8 *)(puVar3 + -0x220) = 0;
          *(undefined8 *)(puVar3 + -0x208) = 0;
          *(undefined8 *)(puVar3 + -0x210) = 0;
          *(undefined8 *)(puVar3 + -0x228) = 0;
          *(undefined8 *)(puVar3 + -0x230) = 0;
          ppuVar32 = ppuVar13;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          *(undefined ***)(puVar3 + -0x230) = ppuVar32;
          ppuVar32 = ppuVar13;
          func_0x00010c08fa60();
          *(undefined ***)(puVar3 + -0x228) = ppuVar32;
          fVar33 = (float)func_0x00010bfb2c80(puVar37);
          *(int *)(puVar3 + -0x218) = (int)(fVar33 * 1000.0);
          *(undefined8 *)(puVar3 + -0x214) = 0x100000003;
          *(undefined4 *)(puVar3 + -0x20c) = 1;
          lVar17 = lVar20;
          func_0x0001082581fc(lVar20,puVar3 + -0x230,0);
          if ((int)lVar17 != 1) {
            func_0x000108257ae0(lVar20);
            _objc_release(puVar37);
            _objc_release(ppuVar13);
            goto LAB_10921ca98;
          }
          _objc_release(puVar37);
          _objc_release(ppuVar13);
          puVar7 = puVar7 + 1;
          puVar37 = ppuVar29[1];
          func_0x00010bf529e0();
        } while (puVar7 < puVar37);
      }
      puVar7 = ppuVar29[5];
      *(undefined4 *)(puVar3 + -0x130) = 0;
      *(int *)(puVar3 + -300) = (int)puVar7;
      lVar17 = lVar20;
      func_0x000108258550(lVar20,puVar3 + -0x130);
      if ((int)lVar17 == 1) {
        lVar17 = lVar20;
        func_0x000108258674(lVar20,puVar3 + -0x230);
        func_0x000108257ae0(lVar20);
        if ((int)lVar17 == 1) {
          ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a00();
          _objc_retainAutoreleasedReturnValue();
          _free(*(undefined8 *)(puVar3 + -0x230));
          *(undefined8 *)(puVar3 + -0x230) = 0;
          *(undefined8 *)(puVar3 + -0x228) = 0;
          ppuVar32 = ppuVar13;
          func_0x00010c08fa60();
          ppuVar30 = (undefined **)0x0;
          if (ppuVar32 != (undefined **)0x0) {
            ppuVar30 = ppuVar13;
          }
          _objc_retain(ppuVar30);
          _objc_release(ppuVar13);
          goto LAB_10921ca9c;
        }
      }
      else {
        func_0x000108257ae0(lVar20);
      }
    }
LAB_10921ca98:
    ppuVar30 = (undefined **)0x0;
  }
LAB_10921ca9c:
  _objc_release(ppuVar23);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar30);
  return;
}



/* Entry: 10921c48c; end: 10921c63b;  */

void FUN_10921c48c(double param_1,undefined2 *param_2,undefined2 *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined2 uVar14;
  long *plVar15;
  long *plVar16;
  undefined2 uVar17;
  long lVar18;
  long extraout_x12;
  long lVar19;
  long lVar20;
  long lVar21;
  long extraout_x14;
  long lVar22;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined *puVar23;
  undefined8 unaff_x21;
  ulong uVar24;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined1 *puVar25;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar26;
  double dVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  double dVar28;
  double dVar29;
  long alStack_b8 [19];
  undefined1 auStack_20 [8];
  long lStack_18;
  
  puVar3 = auStack_20;
  puVar25 = auStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (255.0 <= param_1) {
    *param_2 = 0xff;
    uVar14 = 1;
LAB_10921c5d8:
    *param_3 = uVar14;
  }
  else {
    if (param_1 <= 0.00392156862745098) {
      *param_2 = 1;
      uVar14 = 0xff;
      goto LAB_10921c5d8;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar3 = puVar25;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 *)(extraout_x14 + -0x48) = 1;
    *(undefined8 *)(extraout_x14 + -0x50) = 0;
    lVar20 = (long)(double)(long)(double)(long)param_1;
    *(long *)(extraout_x14 + -0x40) = lVar20;
    if (lVar20 < 0x100) {
      lVar19 = 7;
      plVar15 = alStack_b8 + 2;
      plVar16 = (long *)(extraout_x12 + 0x18);
      lVar21 = lVar20;
      lVar22 = 1;
      while (lVar18 = lVar22, lVar11 = lVar21,
            0.00196078431372549 <= ABS(param_1 - (double)lVar20) && lVar19 != 0) {
        param_1 = 1.0 / (param_1 - (double)lVar20);
        lVar20 = (long)(double)(long)(double)(long)param_1;
        lVar21 = plVar16[-2] + lVar20 * lVar11;
        *plVar16 = lVar21;
        lVar22 = plVar15[-2] + lVar20 * lVar18;
        *plVar15 = lVar22;
        if ((0xff < lVar21) ||
           (lVar19 = lVar19 + -1, plVar15 = plVar15 + 1, plVar16 = plVar16 + 1, 0xff < lVar22))
        break;
      }
    }
    else {
      lVar11 = 0;
      lVar18 = 0;
    }
    uVar17 = (undefined2)lVar11;
    uVar14 = (undefined2)lVar18;
    if (lVar11 == 0 || lVar18 == 0) {
      uVar17 = 1;
      uVar14 = 100;
    }
    *param_2 = uVar17;
    *param_3 = uVar14;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar3 + -8) = FUN_10921c63c;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar20 = *(long *)(param_2 + 4);
  func_0x00010bf529e0();
  if (lVar20 != 0) {
    uVar24 = 0;
    do {
      puVar6 = param_2;
      func_0x00010be62d60();
      if (puVar6 == (undefined2 *)0x0) goto LAB_10921ca98;
      bVar1 = *(byte *)(param_2 + 0xc);
      dVar28 = *(double *)(param_2 + 0x18);
      puVar7 = puVar6;
      _CGImageGetWidth();
      puVar8 = puVar6;
      _CGImageGetHeight();
      if ((puVar7 + -0x2000 < (undefined2 *)0xffffffffffffc001) ||
         (puVar8 + -0x2000 < (undefined2 *)0xffffffffffffc001)) {
LAB_10921c8f0:
        _CFRelease(puVar6);
        goto LAB_10921ca98;
      }
      *(undefined8 *)(puVar3 + -0xa8) = 0;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      *(undefined8 *)(puVar3 + -0x98) = 0;
      *(undefined8 *)(puVar3 + -0xa0) = 0;
      puVar7 = puVar6;
      FUN_109217980(puVar6,puVar3 + -0xb0,3);
      if (((ulong)puVar7 & 1) == 0) goto LAB_10921c8f0;
      *(undefined4 *)(puVar3 + -0xc0) = 0;
      *(undefined8 *)(puVar3 + -0xd8) = 0;
      *(undefined8 *)(puVar3 + -0xe0) = 0;
      *(undefined8 *)(puVar3 + -200) = 0;
      *(undefined8 *)(puVar3 + -0xd0) = 0;
      *(undefined8 *)(puVar3 + -0xf8) = 0;
      *(undefined8 *)(puVar3 + -0x100) = 0;
      *(undefined8 *)(puVar3 + -0xe8) = 0;
      *(undefined8 *)(puVar3 + -0xf0) = 0;
      *(undefined8 *)(puVar3 + -0x118) = 0;
      *(undefined8 *)(puVar3 + -0x120) = 0;
      *(undefined8 *)(puVar3 + -0x108) = 0;
      *(undefined8 *)(puVar3 + -0x110) = 0;
      *(undefined8 *)(puVar3 + -0x138) = 0;
      *(undefined8 *)(puVar3 + -0x140) = 0;
      *(undefined8 *)(puVar3 + -0x128) = 0;
      *(undefined8 *)(puVar3 + -0x130) = 0;
      *(undefined8 *)(puVar3 + -0x158) = 0;
      *(undefined8 *)(puVar3 + -0x160) = 0;
      *(undefined8 *)(puVar3 + -0x148) = 0;
      *(undefined8 *)(puVar3 + -0x150) = 0;
      *(undefined8 *)(puVar3 + -0x178) = 0;
      *(undefined8 *)(puVar3 + -0x180) = 0;
      *(undefined8 *)(puVar3 + -0x168) = 0;
      *(undefined8 *)(puVar3 + -0x170) = 0;
      *(undefined8 *)(puVar3 + -0x198) = 0;
      *(undefined8 *)(puVar3 + -0x1a0) = 0;
      *(undefined8 *)(puVar3 + -0x188) = 0;
      *(undefined8 *)(puVar3 + -400) = 0;
      *(undefined8 *)(puVar3 + -0x1b8) = 0;
      *(undefined8 *)(puVar3 + -0x1c0) = 0;
      *(undefined8 *)(puVar3 + -0x1a8) = 0;
      *(undefined8 *)(puVar3 + -0x1b0) = 0;
      *(undefined8 *)(puVar3 + -0x1d8) = 0;
      *(undefined8 *)(puVar3 + -0x1e0) = 0;
      *(undefined8 *)(puVar3 + -0x1c8) = 0;
      *(undefined8 *)(puVar3 + -0x1d0) = 0;
      *(undefined8 *)(puVar3 + -0x1f8) = 0;
      *(undefined8 *)(puVar3 + -0x200) = 0;
      *(undefined8 *)(puVar3 + -0x1e8) = 0;
      *(undefined8 *)(puVar3 + -0x1f0) = 0;
      *(undefined8 *)(puVar3 + -0x218) = 0;
      *(undefined8 *)(puVar3 + -0x220) = 0;
      *(undefined8 *)(puVar3 + -0x208) = 0;
      *(undefined8 *)(puVar3 + -0x210) = 0;
      *(undefined8 *)(puVar3 + -0x238) = 0;
      *(undefined8 *)(puVar3 + -0x240) = 0;
      *(undefined8 *)(puVar3 + -0x228) = 0;
      *(undefined8 *)(puVar3 + -0x230) = 0;
      dVar27 = 1.0;
      if (dVar28 <= 1.0) {
        dVar27 = dVar28;
      }
      dVar29 = 0.0;
      if (0.0 <= dVar28) {
        dVar29 = dVar27;
      }
      *(undefined8 *)(puVar3 + -0x248) = 0;
      *(undefined8 *)(puVar3 + -0x250) = 0;
      puVar25 = puVar3 + -0x130;
      func_0x0001082400c0((float)dVar29,puVar25,0,0x20e);
      if ((int)puVar25 == 0) {
LAB_10921c864:
        bVar2 = false;
LAB_10921c868:
        if (*(long *)(puVar3 + -0xb0) != 0) {
          _free();
        }
        if (!bVar2) goto LAB_10921c8f0;
LAB_10921c880:
        _free(*(undefined8 *)(puVar3 + -0x150));
        puVar25 = (undefined1 *)0x0;
        uVar9 = *(undefined8 *)(puVar3 + -0x148);
      }
      else {
        *(float *)(puVar3 + -300) = (float)(double)(long)(dVar29 * 100.0);
        *(uint *)(puVar3 + -0x130) = (uint)bVar1;
        *(undefined8 *)(puVar3 + -0x128) = 4;
        iVar4 = (int)(puVar3 + -0x130);
        func_0x0001082401cc();
        if (iVar4 == 0) goto LAB_10921c864;
        *(undefined8 *)(puVar3 + -0x148) = 0;
        *(undefined8 *)(puVar3 + -0x150) = 0;
        *(undefined8 *)(puVar3 + -0x138) = 0;
        *(undefined8 *)(puVar3 + -0x140) = 0;
        *(undefined8 *)(puVar3 + -0x168) = 0;
        *(undefined8 *)(puVar3 + -0x170) = 0;
        *(undefined8 *)(puVar3 + -0x158) = 0;
        *(undefined8 *)(puVar3 + -0x160) = 0;
        *(undefined8 *)(puVar3 + -0x188) = 0;
        *(undefined8 *)(puVar3 + -400) = 0;
        *(undefined8 *)(puVar3 + -0x178) = 0;
        *(undefined8 *)(puVar3 + -0x180) = 0;
        *(undefined8 *)(puVar3 + -0x1a8) = 0;
        *(undefined8 *)(puVar3 + -0x1b0) = 0;
        *(undefined8 *)(puVar3 + -0x198) = 0;
        *(undefined8 *)(puVar3 + -0x1a0) = 0;
        *(undefined8 *)(puVar3 + -0x1c8) = 0;
        *(undefined8 *)(puVar3 + -0x1d0) = 0;
        *(undefined8 *)(puVar3 + -0x1b8) = 0;
        *(undefined8 *)(puVar3 + -0x1c0) = 0;
        *(undefined8 *)(puVar3 + -0x1e8) = 0;
        *(undefined8 *)(puVar3 + -0x1f0) = 0;
        *(undefined8 *)(puVar3 + -0x1d8) = 0;
        *(undefined8 *)(puVar3 + -0x1e0) = 0;
        *(undefined8 *)(puVar3 + -0x208) = 0;
        *(undefined8 *)(puVar3 + -0x210) = 0;
        *(undefined8 *)(puVar3 + -0x1f8) = 0;
        *(undefined8 *)(puVar3 + -0x200) = 0;
        *(undefined8 *)(puVar3 + -0x228) = 0;
        *(undefined8 *)(puVar3 + -0x230) = 0;
        *(undefined8 *)(puVar3 + -0x218) = 0;
        *(undefined8 *)(puVar3 + -0x220) = 0;
        *(undefined **)(puVar3 + -0x1d0) = &UNK_108245dd0;
        *(int *)(puVar3 + -0x228) = (int)*(undefined8 *)(puVar3 + -0xa0);
        *(int *)(puVar3 + -0x224) = (int)*(undefined8 *)(puVar3 + -0xa8);
        *(uint *)(puVar3 + -0x230) = (uint)bVar1;
        if (*(long *)(puVar3 + -0xb0) == 0) goto LAB_10921c880;
        bVar2 = true;
        puVar25 = puVar3 + -0x230;
        func_0x0001082466a0(puVar25,*(long *)(puVar3 + -0xb0),*(undefined4 *)(puVar3 + -0x98),4,0,1)
        ;
        if ((int)puVar25 == 0) goto LAB_10921c868;
        *(undefined8 *)(puVar3 + -0x250) = 0;
        *(undefined8 *)(puVar3 + -0x248) = 0;
        *(undefined8 *)(puVar3 + -0x240) = 0;
        *(undefined **)(puVar3 + -0x1d0) = &UNK_1082460ac;
        *(undefined1 **)(puVar3 + -0x1c8) = puVar3 + -0x250;
        puVar25 = puVar3 + -0x130;
        func_0x000108251920(puVar25,puVar3 + -0x230);
        if ((int)puVar25 == 0) goto LAB_10921c868;
        _CFAllocatorGetDefault();
        _CFDataCreate();
        _free(*(undefined8 *)(puVar3 + -0x250));
        _free(*(undefined8 *)(puVar3 + -0x150));
        _free(*(undefined8 *)(puVar3 + -0x148));
        *(undefined8 *)(puVar3 + -0x1e8) = 0;
        *(undefined4 *)(puVar3 + -0x1e0) = 0;
        *(undefined8 *)(puVar3 + -0x218) = 0;
        *(undefined8 *)(puVar3 + -0x220) = 0;
        *(undefined8 *)(puVar3 + -0x208) = 0;
        *(undefined8 *)(puVar3 + -0x210) = 0;
        *(undefined8 *)(puVar3 + -0x1fc) = 0;
        *(undefined8 *)(puVar3 + -0x204) = 0;
        *(undefined8 *)(puVar3 + -0x150) = 0;
        *(undefined8 *)(puVar3 + -0x148) = 0;
        uVar9 = *(undefined8 *)(puVar3 + -0xb0);
      }
      _free(uVar9);
      _CFRelease(puVar6);
      if (puVar25 == (undefined1 *)0x0) goto LAB_10921ca98;
      func_0x00010befa120(puVar5);
      _CFRelease(puVar25);
      uVar24 = uVar24 + 1;
      uVar10 = *(ulong *)(param_2 + 4);
      func_0x00010bf529e0();
    } while (uVar24 < uVar10);
  }
  puVar23 = puVar5;
  func_0x00010bf529e0();
  if (puVar23 == (undefined *)0x1) {
    puVar23 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar20 = 1;
    _calloc(1,0x40);
    if (lVar20 != 0) {
      lVar11 = *(long *)(param_2 + 4);
      func_0x00010bf529e0();
      if (lVar11 != 0) {
        uVar24 = 0;
        do {
          puVar23 = puVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_2 + 8);
          func_0x00010c0dfd40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          fVar26 = 0.0;
          *(undefined8 *)(puVar3 + -0x218) = 0;
          *(undefined8 *)(puVar3 + -0x220) = 0;
          *(undefined8 *)(puVar3 + -0x208) = 0;
          *(undefined8 *)(puVar3 + -0x210) = 0;
          *(undefined8 *)(puVar3 + -0x228) = 0;
          *(undefined8 *)(puVar3 + -0x230) = 0;
          puVar12 = puVar23;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          *(undefined **)(puVar3 + -0x230) = puVar12;
          puVar12 = puVar23;
          func_0x00010c08fa60();
          *(undefined **)(puVar3 + -0x228) = puVar12;
          func_0x00010bfb2c80(uVar9);
          *(int *)(puVar3 + -0x218) = (int)(fVar26 * 1000.0);
          *(undefined8 *)(puVar3 + -0x214) = 0x100000003;
          *(undefined4 *)(puVar3 + -0x20c) = 1;
          lVar11 = lVar20;
          func_0x0001082581fc(lVar20,puVar3 + -0x230,0);
          if ((int)lVar11 != 1) {
            func_0x000108257ae0(lVar20);
            _objc_release(uVar9);
            _objc_release(puVar23);
            goto LAB_10921ca98;
          }
          _objc_release(uVar9);
          _objc_release(puVar23);
          uVar24 = uVar24 + 1;
          uVar10 = *(ulong *)(param_2 + 4);
          func_0x00010bf529e0();
        } while (uVar24 < uVar10);
      }
      uVar9 = *(undefined8 *)(param_2 + 0x14);
      *(undefined4 *)(puVar3 + -0x130) = 0;
      *(int *)(puVar3 + -300) = (int)uVar9;
      lVar11 = lVar20;
      func_0x000108258550(lVar20,puVar3 + -0x130);
      if ((int)lVar11 == 1) {
        lVar11 = lVar20;
        func_0x000108258674(lVar20,puVar3 + -0x230);
        func_0x000108257ae0(lVar20);
        if ((int)lVar11 == 1) {
          puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a00();
          _objc_retainAutoreleasedReturnValue();
          _free(*(undefined8 *)(puVar3 + -0x230));
          *(undefined8 *)(puVar3 + -0x230) = 0;
          *(undefined8 *)(puVar3 + -0x228) = 0;
          puVar13 = puVar12;
          func_0x00010c08fa60();
          puVar23 = (undefined *)0x0;
          if (puVar13 != (undefined *)0x0) {
            puVar23 = puVar12;
          }
          _objc_retain(puVar23);
          _objc_release(puVar12);
          goto LAB_10921ca9c;
        }
      }
      else {
        func_0x000108257ae0(lVar20);
      }
    }
LAB_10921ca98:
    puVar23 = (undefined *)0x0;
  }
LAB_10921ca9c:
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 10921c63c; end: 10921cacf; -[YYImageEncoder _encodeWebP] */

void FUN_10921c63c(ulong param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  int iStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    uVar15 = 0;
    do {
      uVar9 = param_1;
      func_0x00010be62d60();
      if (uVar9 == 0) goto LAB_10921ca98;
      bVar1 = *(byte *)(param_1 + 0x18);
      dVar19 = *(double *)(param_1 + 0x30);
      uVar6 = uVar9;
      _CGImageGetWidth();
      uVar7 = uVar9;
      _CGImageGetHeight();
      if ((uVar6 - 0x4000 < 0xffffffffffffc001) || (uVar7 - 0x4000 < 0xffffffffffffc001)) {
LAB_10921c8f0:
        _CFRelease(uVar9);
        goto LAB_10921ca98;
      }
      uStack_a8 = 0;
      lStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uVar6 = uVar9;
      FUN_109217980(uVar9,&lStack_b0,3);
      if ((uVar6 & 1) == 0) goto LAB_10921c8f0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      puStack_1c8 = (undefined1 *)0x0;
      puStack_1d0 = (undefined *)0x0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      iStack_218 = 0;
      uStack_214 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      puStack_228 = (undefined *)0x0;
      puStack_230 = (undefined *)0x0;
      dVar18 = 1.0;
      if (dVar19 <= 1.0) {
        dVar18 = dVar19;
      }
      dVar20 = 0.0;
      if (0.0 <= dVar19) {
        dVar20 = dVar18;
      }
      uStack_248 = 0;
      uStack_250 = 0;
      puVar16 = &uStack_130;
      func_0x0001082400c0((float)dVar20,puVar16,0,0x20e);
      if ((int)puVar16 == 0) {
LAB_10921c864:
        bVar2 = false;
LAB_10921c868:
        if (lStack_b0 != 0) {
          _free();
        }
        if (!bVar2) goto LAB_10921c8f0;
LAB_10921c880:
        _free(uStack_150);
        puVar16 = (undefined8 *)0x0;
        lVar5 = lStack_148;
      }
      else {
        uStack_130 = CONCAT44((float)(double)(long)(dVar20 * 100.0),(uint)bVar1);
        uStack_128 = 4;
        iVar3 = (int)&uStack_130;
        func_0x0001082401cc();
        if (iVar3 == 0) goto LAB_10921c864;
        lStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        puStack_1c8 = (undefined1 *)0x0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_208 = 0;
        uStack_204 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_1f8 = 0;
        uStack_1f4 = 0;
        uStack_200 = 0;
        uStack_1fc = 0;
        iStack_218 = 0;
        uStack_214 = 0;
        uStack_220 = 0;
        puStack_1d0 = &UNK_108245dd0;
        puStack_228 = (undefined *)CONCAT44((int)uStack_a8,(int)uStack_a0);
        puStack_230 = (undefined *)(ulong)(uint)bVar1;
        if (lStack_b0 == 0) goto LAB_10921c880;
        bVar2 = true;
        ppuVar8 = &puStack_230;
        func_0x0001082466a0(ppuVar8,lStack_b0,uStack_98 & 0xffffffff,4,0,1);
        if ((int)ppuVar8 == 0) goto LAB_10921c868;
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_240 = 0;
        puStack_1d0 = &UNK_1082460ac;
        puVar16 = &uStack_130;
        puStack_1c8 = (undefined1 *)&uStack_250;
        func_0x000108251920(puVar16,&puStack_230);
        if ((int)puVar16 == 0) goto LAB_10921c868;
        _CFAllocatorGetDefault();
        _CFDataCreate();
        _free(uStack_250);
        _free(uStack_150);
        _free(lStack_148);
        uStack_1e8 = 0;
        uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
        iStack_218 = 0;
        uStack_214 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        uStack_204 = 0;
        uStack_200 = 0;
        uStack_150 = 0;
        lStack_148 = 0;
        lVar5 = lStack_b0;
      }
      _free(lVar5);
      _CFRelease(uVar9);
      if (puVar16 == (undefined8 *)0x0) goto LAB_10921ca98;
      func_0x00010befa120(puVar4);
      _CFRelease(puVar16);
      uVar15 = uVar15 + 1;
      uVar9 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    } while (uVar15 < uVar9);
  }
  puVar14 = puVar4;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x1) {
    puVar14 = puVar4;
    func_0x00010bfb1920(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = 1;
    _calloc(1,0x40);
    if (lVar5 != 0) {
      lVar10 = *(long *)(param_1 + 8);
      func_0x00010bf529e0();
      if (lVar10 != 0) {
        uVar15 = 0;
        do {
          puVar14 = puVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dfd40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          fVar17 = 0.0;
          iStack_218 = 0;
          uStack_214 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          uStack_204 = 0;
          uStack_210 = 0;
          uStack_20c = 0;
          puStack_228 = (undefined *)0x0;
          puStack_230 = (undefined *)0x0;
          puVar12 = puVar14;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar13 = puVar14;
          puStack_230 = puVar12;
          func_0x00010c08fa60();
          puStack_228 = puVar13;
          func_0x00010bfb2c80(uVar11);
          iStack_218 = (int)(fVar17 * 1000.0);
          uStack_214 = 3;
          uStack_210 = 1;
          uStack_20c = 1;
          lVar10 = lVar5;
          func_0x0001082581fc(lVar5,&puStack_230,0);
          if ((int)lVar10 != 1) {
            func_0x000108257ae0(lVar5);
            _objc_release(uVar11);
            _objc_release(puVar14);
            goto LAB_10921ca98;
          }
          _objc_release(uVar11);
          _objc_release(puVar14);
          uVar15 = uVar15 + 1;
          uVar9 = *(ulong *)(param_1 + 8);
          func_0x00010bf529e0();
        } while (uVar15 < uVar9);
      }
      uStack_130 = *(long *)(param_1 + 0x28) << 0x20;
      lVar10 = lVar5;
      func_0x000108258550(lVar5,&uStack_130);
      if ((int)lVar10 == 1) {
        lVar10 = lVar5;
        func_0x000108258674(lVar5,&puStack_230);
        func_0x000108257ae0(lVar5);
        if ((int)lVar10 == 1) {
          puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a00();
          _objc_retainAutoreleasedReturnValue();
          _free(puStack_230);
          puStack_230 = (undefined *)0x0;
          puStack_228 = (undefined *)0x0;
          puVar13 = puVar12;
          func_0x00010c08fa60();
          puVar14 = (undefined *)0x0;
          if (puVar13 != (undefined *)0x0) {
            puVar14 = puVar12;
          }
          _objc_retain(puVar14);
          _objc_release(puVar12);
          goto LAB_10921ca9c;
        }
      }
      else {
        func_0x000108257ae0(lVar5);
      }
    }
LAB_10921ca98:
    puVar14 = (undefined *)0x0;
  }
LAB_10921ca9c:
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10921cad0; end: 10921cb57; -[YYImageEncoder encode] */

void FUN_10921cad0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be37400();
    if ((int)lVar1 == 0) {
      if (*(long *)(param_1 + 0x20) == 9) {
        func_0x00010be09380(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (*(long *)(param_1 + 0x20) == 8) {
        func_0x00010be09320(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010be093a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921cb58; end: 10921cbef; +[YYImageEncoder encodeImage:type:quality:] */

void FUN_10921cb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9658;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c055880();
  func_0x00010c1e6280(param_1);
  func_0x00010bef9200(0,puVar1,param_3,param_4);
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bf92d00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10921cbf0; end: 10921cd27; +[YYImageEncoder encodeImageWithDecoder:type:quality:] */

void FUN_10921cbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  if ((param_4 == 0) || (uVar4 = param_4, func_0x00010bfb6b20(), uVar4 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b9658;
    _objc_alloc(PTR_PTR_1126b9658);
    func_0x00010c055880();
    func_0x00010c1e6280(param_1);
    uVar4 = param_4;
    func_0x00010bfb6b20();
    if (uVar4 != 0) {
      uVar4 = 0;
      do {
        uVar2 = param_4;
        func_0x00010bfb6920(param_4,param_3,uVar4,1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = uVar3;
        _UIImagePNGRepresentation(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb6b60(param_4,param_3,uVar4);
        func_0x00010bef9240(puVar1,param_3,uVar2);
        _objc_release(uVar2);
        _objc_release(uVar3);
        uVar4 = uVar4 + 1;
        uVar2 = param_4;
        func_0x00010bfb6b20();
      } while (uVar4 < uVar2);
    }
    puVar5 = puVar1;
    func_0x00010bf92d00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10921cd28; end: 10921cd2f; -[YYImageEncoder type] */

undefined8 FUN_10921cd28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10921cd30; end: 10921cd37; -[YYImageEncoder loopCount] */

undefined8 FUN_10921cd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10921cd38; end: 10921cd3f; -[YYImageEncoder setLoopCount:] */

void FUN_10921cd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}


