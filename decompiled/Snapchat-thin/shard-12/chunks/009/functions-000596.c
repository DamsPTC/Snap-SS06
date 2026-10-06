/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b83dec; end: 109b83def; -[CvPhotoCamera createCaptureOutput] */

void FUN_109b83dec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createStillImageOutput_1125b3e38);
  return;
}



/* Entry: 109b83df0; end: 109b83df3; -[CvPhotoCamera createCustomVideoPreview] */

void FUN_109b83df0(void)

{
  return;
}



/* Entry: 109b83df4; end: 109b83e03; -[CvPhotoCamera stillImageOutput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b83df4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278405c);
}



/* Entry: 109b83e04; end: 109b83e0f; -[CvPhotoCamera setStillImageOutput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b83e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b83e10; end: 109b83e1f; -[CvPhotoCamera delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b83e10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784060);
}



/* Entry: 109b83e20; end: 109b83e2f; -[CvPhotoCamera setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b83e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112784060) = param_3;
  return;
}



/* Entry: 109b83e30; end: 109b83e9b; -[CvVideoCamera initWithParentView:] */

undefined1 * FUN_109b83e30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701268;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithParentView__112540278);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21d5a0(puVar1);
    func_0x00010c1e8e20(puVar1);
    func_0x00010c1ee780(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109b83e9c; end: 109b83f6f; -[CvVideoCamera start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b83e9c(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + _DAT_11278408c) = 10;
  puStack_38 = PTR_PTR_112701268;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_start_112671080);
  lVar2 = param_1;
  func_0x00010c123be0();
  if ((int)lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    iVar1 = (int)puVar3;
    func_0x00010c29a060(param_1);
    func_0x00010bfacbe0();
    if (iVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      func_0x00010c29a060(param_1);
      func_0x00010c12cc40(puVar3);
    }
    func_0x00010c29a060();
    _NSLog(&PTR____CFConstantStringClassReference_110f2d758);
  }
  return;
}



/* Entry: 109b83f70; end: 109b8404f; -[CvVideoCamera stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b83f70(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701268;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_stop_112673008);
  func_0x00010c2214e0(param_1);
  if (*(long *)(param_1 + _DAT_112784064) != 0) {
    _dispatch_release();
  }
  lVar1 = param_1;
  func_0x00010c123be0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c1234c0();
    func_0x00010c252d60();
    if (lVar1 == 1) {
      func_0x00010c1234c0(param_1);
      func_0x00010bfaff20();
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2d778;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2d798;
    }
    _NSLog(ppuVar2);
    func_0x00010c1e8d20(param_1);
    func_0x00010c1e8d40(param_1);
    func_0x00010c1e8dc0(param_1);
  }
  func_0x00010bf61a80(param_1);
  func_0x00010c12c940();
  func_0x00010c1886c0(param_1);
  return;
}



/* Entry: 109b84050; end: 109b8422f; -[CvVideoCamera adjustLayoutToInterfaceOrientation:] */

void FUN_109b84050(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _NSLog(&PTR____CFConstantStringClassReference_110f2d7b8);
  lVar3 = param_5;
  func_0x00010c0f3c80();
  if (lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010bf61a80(param_5);
    func_0x00010bf61a80(param_5);
    func_0x00010bf20c00();
    uVar4 = param_7 - 1;
    dVar7 = param_3;
    dVar8 = param_4;
    if (uVar4 < 4) {
      uVar6 = *(uint *)(&UNK_10e0361f8 + uVar4 * 4);
      _NSLog((&PTR_PTR_110b29798)[uVar4]);
    }
    else {
      uVar6 = 0;
    }
    lVar5 = *(long *)(param_5 + 0x38);
    uVar1 = uVar6;
    if (lVar5 == 3) {
      uVar1 = uVar6 + 0xb4;
    }
    uVar2 = uVar6 + 0x10e;
    if (lVar5 != 2) {
      uVar2 = uVar1;
    }
    uVar6 = uVar6 + 0x5a;
    if (lVar5 != 1) {
      uVar6 = uVar2;
    }
    if (0x167 < uVar6) {
      uVar6 = uVar6 - 0x168;
    }
    if ((uVar6 == 0x10e) || (dVar9 = param_4, uVar6 == 0x5a)) {
      _NSLog(&PTR____CFConstantStringClassReference_110f2d858);
      param_1 = 0;
      param_2 = 0;
      dVar9 = param_3;
      param_3 = param_4;
    }
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    dVar10 = dVar7 * 0.5;
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    func_0x00010c1dee80(dVar10,dVar8 * 0.5,lVar3);
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    func_0x00010bf61a80(param_5);
    func_0x00010c1739e0(0,0,dVar7,dVar8);
    _CGAffineTransformMakeRotation(&uStack_90,((double)uVar6 * 3.141592653589793) / 180.0);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x00010c166440(lVar3,param_6,&uStack_c0);
    func_0x00010c1739e0(param_1,param_2,param_3,dVar9,lVar3);
  }
  return;
}



/* Entry: 109b84230; end: 109b843f7; -[CvVideoCamera layoutPreviewLayer] */

void FUN_109b84230(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _NSLog(&PTR____CFConstantStringClassReference_110f2d7b8);
  lVar2 = param_5;
  func_0x00010c0f3c80();
  if (lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010bf61a80(param_5);
    func_0x00010bf61a80(param_5);
    func_0x00010bf20c00();
    lVar4 = *(long *)(param_5 + 0x20);
    dVar6 = param_3;
    dVar7 = param_4;
    if (lVar4 < 3) {
      uVar5 = 0x5a;
      if (lVar4 != 2) {
        uVar5 = 0;
      }
      uVar3 = 0x10e;
      if (lVar4 != 1) {
        uVar3 = uVar5;
      }
    }
    else if (lVar4 == 3) {
      _NSLog(&PTR____CFConstantStringClassReference_110e8f298);
      uVar3 = 0xb4;
    }
    else {
      if (lVar4 == 4) {
        _NSLog(&PTR____CFConstantStringClassReference_110e8f278);
      }
      uVar3 = 0;
    }
    lVar4 = *(long *)(param_5 + 0x38);
    uVar5 = uVar3;
    if (lVar4 == 3) {
      uVar5 = uVar3 + 0xb4;
    }
    uVar1 = uVar3 + 0x10e;
    if (lVar4 != 2) {
      uVar1 = uVar5;
    }
    uVar3 = uVar3 + 0x5a;
    if (lVar4 != 1) {
      uVar3 = uVar1;
    }
    if (0x167 < uVar3) {
      uVar3 = uVar3 - 0x168;
    }
    if ((uVar3 == 0x10e) || (dVar8 = param_4, uVar3 == 0x5a)) {
      _NSLog(&PTR____CFConstantStringClassReference_110f2d858);
      param_1 = 0;
      param_2 = 0;
      dVar8 = param_3;
      param_3 = param_4;
    }
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    func_0x00010c1dee80(dVar6 * 0.5,dVar7 * 0.5,lVar2);
    _CGAffineTransformMakeRotation(&uStack_90,((double)uVar3 * 3.141592653589793) / 180.0);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x00010c166440(lVar2,param_6,&uStack_c0);
    func_0x00010c1739e0(param_1,param_2,param_3,dVar8,lVar2);
  }
  return;
}



/* Entry: 109b843f8; end: 109b84733; -[CvVideoCamera createVideoDataOutput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b843f8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  _objc_opt_new(PTR__OBJC_CLASS___AVCaptureVideoDataOutput_1126b70b0);
  func_0x00010c2214e0(param_5);
  func_0x00010bfce140();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010bf72040(puVar5);
  func_0x00010c299c40(param_5);
  func_0x00010c221f60();
  func_0x00010c299c40(param_5);
  func_0x00010c167a80();
  lVar2 = param_5;
  func_0x00010bf31140();
  iVar1 = (int)lVar2;
  func_0x00010c299c40(param_5);
  func_0x00010bf2c480();
  if (iVar1 != 0) {
    lVar2 = param_5;
    func_0x00010bf31140(param_5);
    func_0x00010c299c40(param_5);
    func_0x00010befa4c0(lVar2);
  }
  func_0x00010c299c40(param_5);
  func_0x00010bf48de0();
  func_0x00010c195460();
  lVar2 = param_5;
  func_0x00010bf31140(param_5);
  func_0x00010c066460();
  func_0x00010c0dfd20();
  func_0x00010bf6fd20();
  lStack_48 = 0;
  func_0x00010c09fb80();
  func_0x00010bef0880(lVar2);
  func_0x00010c29b5c0();
  func_0x00010c0dfd20();
  func_0x00010c0c22c0();
  lVar3 = param_5;
  func_0x00010bf69580();
  if (((float)param_1 <= (float)((int)lVar3 + -1)) || (lStack_48 != 0)) {
    func_0x00010bf69580();
    ppuVar4 = &PTR____CFConstantStringClassReference_110f2d898;
  }
  else {
    lVar3 = param_5;
    func_0x00010bf69580(param_5);
    _CMTimeMake(auStack_60,1,lVar3);
    func_0x00010c162cc0(lVar2);
    lVar3 = param_5;
    func_0x00010bf69580(param_5);
    _CMTimeMake(auStack_60,1,lVar3);
    func_0x00010c162ca0(lVar2);
    func_0x00010bf69580();
    ppuVar4 = &PTR____CFConstantStringClassReference_110f2d878;
  }
  _NSLog(ppuVar4);
  if (lStack_48 != 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110f2d8b8);
  }
  func_0x00010c280c60(lVar2);
  lVar2 = param_5;
  func_0x00010c299c40();
  iVar1 = (int)lVar2;
  func_0x00010bf48de0();
  func_0x00010c0832a0();
  if (iVar1 != 0) {
    func_0x00010bf68b20(param_5);
    func_0x00010c299c40(param_5);
    func_0x00010bf48de0();
    func_0x00010c221b00();
  }
  lVar2 = param_5;
  func_0x00010c299c40();
  iVar1 = (int)lVar2;
  func_0x00010bf48de0();
  func_0x00010c0832c0();
  if (iVar1 != 0) {
    func_0x00010bf68b60(param_5);
    func_0x00010c299c40(param_5);
    func_0x00010bf48de0();
    func_0x00010c221b40();
  }
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
  func_0x00010c1886c0(param_5);
  func_0x00010c0f3c80(param_5);
  func_0x00010bfb68e0();
  func_0x00010c0f3c80(param_5);
  func_0x00010bfb68e0();
  func_0x00010bf61a80(param_5);
  func_0x00010c1739e0(0,0,param_3,param_4);
  func_0x00010c08cfa0(param_5);
  puVar5 = &UNK_10f5a1bc8;
  _dispatch_queue_create(&UNK_10f5a1bc8,0);
  *(undefined **)(param_5 + _DAT_112784064) = puVar5;
  func_0x00010c299c40(param_5);
  func_0x00010c1f5300();
  _NSLog(&PTR____CFConstantStringClassReference_110f2d8d8);
  return;
}



/* Entry: 109b84734; end: 109b8496b; -[CvVideoCamera createVideoFileOutput] */

void FUN_109b84734(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_58;
  
  func_0x00010bfe91a0();
  func_0x00010bfe7e00();
  _NSLog(&PTR____CFConstantStringClassReference_110f2d8f8);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010bfe91a0(param_1);
  func_0x00010c0df760(puVar3,param_2,uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010bfe7e00(param_1);
  func_0x00010c0df760(puVar5,param_2,uVar2);
  func_0x00010bf720a0(puVar4,param_2,puVar3);
  puVar3 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
  func_0x00010bf0ba80(PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090,puVar4);
  func_0x00010c1e8d40(param_1,param_2,puVar3);
  uVar2 = param_1;
  func_0x00010bfce140();
  uVar1 = 0x34323066;
  if ((int)uVar2 == 0) {
    uVar1 = 0x42475241;
  }
  puVar5 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110);
  uVar2 = param_1;
  func_0x00010c1234e0(param_1);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  func_0x00010bf720a0(puVar3,param_2,puVar4);
  func_0x00010bff46a0(puVar5,param_2,uVar2,puVar3);
  func_0x00010c1e8dc0(param_1,param_2,puVar5);
  lStack_58 = 0;
  func_0x00010c29a080();
  _NSLog(&PTR____CFConstantStringClassReference_110f2d918);
  puVar3 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
  uVar2 = param_1;
  func_0x00010c29a080(param_1);
  func_0x00010bf0bac0(puVar3,param_2,uVar2,*(undefined8 *)PTR__AVFileTypeMPEG4_110348008,&lStack_58)
  ;
  func_0x00010c1e8d20(param_1,param_2,puVar3);
  if (lStack_58 != 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110f2d938);
  }
  uVar2 = param_1;
  func_0x00010c1234c0(param_1);
  uVar6 = param_1;
  func_0x00010c1234e0(param_1);
  func_0x00010bef93a0(uVar2,param_2,uVar6);
  func_0x00010c1234e0(param_1);
  func_0x00010c198a40();
  _NSLog(&PTR____CFConstantStringClassReference_110f2d958);
  return;
}



/* Entry: 109b8496c; end: 109b849a7; -[CvVideoCamera createCaptureOutput] */

void FUN_109b8496c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf59f20();
  uVar1 = param_1;
  func_0x00010c123be0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf59f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createVideoFileOutput_1125b4180);
    return;
  }
  return;
}



/* Entry: 109b849a8; end: 109b849df; -[CvVideoCamera createCustomVideoPreview] */

void FUN_109b849a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f3c80();
  func_0x00010c08c0e0();
  func_0x00010bf61a80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addSublayer__11259c870,param_1);
  return;
}



/* Entry: 109b849e0; end: 109b84bbf; -[CvVideoCamera pixelBufferFromCGImage:] */

long FUN_109b849e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_68;
  
  uVar1 = param_3;
  _CGImageGetWidth(param_3);
  uVar2 = param_3;
  _CGImageGetHeight(param_3);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df6e0();
  func_0x00010bf720a0();
  lStack_68 = 0;
  uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  lVar6 = (long)(double)uVar1;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _CFRetain();
  }
  _CVPixelBufferCreate(uVar7,lVar6,(long)(double)uVar2,0x20,puVar5,&lStack_68);
  if ((int)uVar7 != 0 || lStack_68 == 0) {
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    func_0x00010bfd11c0();
  }
  _CVPixelBufferLockBaseAddress(lStack_68,0);
  lVar3 = lStack_68;
  _CVPixelBufferGetBaseAddress(lStack_68);
  lVar4 = lVar3;
  _CGColorSpaceCreateDeviceRGB();
  _CGBitmapContextCreate(lVar3,lVar6,(long)(double)uVar2,8,(long)((double)uVar1 * 4.0),lVar4,2);
  uVar1 = param_3;
  _CGImageGetWidth(param_3);
  uVar2 = param_3;
  _CGImageGetHeight(param_3);
  _CGContextDrawImage(0,0,(double)uVar1,(double)uVar2,lVar3,param_3);
  _CGColorSpaceRelease(lVar4);
  _CGContextRelease(lVar3);
  _CVPixelBufferUnlockBaseAddress(lStack_68,0);
  return lStack_68;
}



/* Entry: 109b84bc0; end: 109b850c7; -[CvVideoCamera captureOutput:didOutputSampleBuffer:fromConnection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b84bc0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long alStack_78 [3];
  
  uVar6 = param_1;
  func_0x00010bf6b020();
  if (uVar6 == 0) {
    return;
  }
  lVar14 = param_4;
  _CMSampleBufferGetImageBuffer();
  _CVPixelBufferLockBaseAddress();
  lVar7 = lVar14;
  _CVPixelBufferGetPixelFormatType();
  lVar12 = lVar14;
  lVar8 = lVar14;
  lVar9 = lVar14;
  lVar10 = lVar14;
  if ((int)lVar7 == 0x34323066) {
    _CVPixelBufferGetBaseAddressOfPlane(lVar14,0);
    _CVPixelBufferGetWidthOfPlane(lVar14,0);
    _CVPixelBufferGetHeightOfPlane(lVar14,0);
    _CVPixelBufferGetBytesPerRowOfPlane(lVar14,0);
    uVar17 = 0;
  }
  else {
    _CVPixelBufferGetBaseAddress();
    _CVPixelBufferGetWidth();
    _CVPixelBufferGetHeight();
    _CVPixelBufferGetBytesPerRow();
    uVar17 = 0x18;
  }
  FUN_10936ff7c(&uStack_c8,lVar9,lVar8,uVar17,lVar12,lVar10);
  uVar6 = param_1;
  func_0x00010bf6b020();
  _objc_opt_respondsToSelector();
  if ((uVar6 & 1) != 0) {
    uVar6 = param_1;
    func_0x00010bf6b020(param_1);
    func_0x00010c114b80();
  }
  bVar4 = false;
  if ((((lVar9 == iStack_c0) && (lVar8 == iStack_bc)) &&
      (bVar4 = false, uVar17 == (uStack_c8 & 0xfff))) && (lVar12 == lStack_b8)) {
    bVar4 = lVar10 == alStack_78[0];
  }
  uVar17 = uStack_c8 >> 3 & 0x1ff;
  if (uVar17 == 2) {
    _CGColorSpaceCreateDeviceRGB();
    uVar13 = 0x4000;
    uVar15 = 0x2000;
LAB_109b84db8:
    if (!bVar4) goto LAB_109b84d44;
LAB_109b84dc0:
    _CGBitmapContextCreate(lVar12,lVar8,lVar9,8,lVar10,uVar6,uVar15);
    lVar7 = lVar12;
    _CGBitmapContextCreateImage();
    _CGContextRelease(lVar12);
  }
  else {
    if (uVar17 != 0) {
      _CGColorSpaceCreateDeviceRGB();
      uVar13 = 0x4002;
      uVar15 = 0x2002;
      goto LAB_109b84db8;
    }
    _CGColorSpaceCreateDeviceGray();
    uVar15 = 0;
    uVar13 = uVar15;
    if (bVar4) goto LAB_109b84dc0;
LAB_109b84d44:
    uVar16 = (ulong)uStack_c4;
    if ((0 < (int)uStack_c4) && (2 < uStack_c4)) {
      do {
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _CGDataProviderCreateWithCFData();
    lVar7 = (long)iStack_bc;
    if ((int)uStack_c4 < 1) {
      lVar12 = 0;
    }
    else {
      lVar12 = plStack_80[(ulong)uStack_c4 - 1] << 3;
    }
    _CGImageCreate(lVar7,(long)iStack_c0,8,lVar12,alStack_78[0],uVar6,uVar13,puVar11,0,0,0);
    _CGDataProviderRelease(puVar11);
  }
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_109b850c8;
  puStack_e0 = &UNK_110b29768;
  uStack_d8 = param_1;
  lStack_d0 = lVar7;
  func_0x000107c27da4(PTR___dispatch_main_q_11034be20,&puStack_f8);
  lVar12 = (long)_DAT_11278408c;
  *(int *)(param_1 + lVar12) = *(int *)(param_1 + lVar12) + -1;
  uVar16 = param_1;
  func_0x00010c123be0();
  if (((int)uVar16 != 0) && (*(int *)(param_1 + lVar12) < 0)) {
    _CMSampleBufferGetPresentationTimeStamp(&uStack_110,param_4);
    puVar2 = (undefined8 *)(param_1 + (long)_DAT_112784090);
    puVar2[1] = uStack_108;
    *puVar2 = uStack_110;
    puVar2[2] = uStack_100;
    uVar16 = param_1;
    func_0x00010c1234c0();
    func_0x00010c252d60();
    if (uVar16 != 1) {
      func_0x00010c1234c0(param_1);
      func_0x00010c251d20();
      func_0x00010c1234c0(param_1);
      uStack_108 = puVar2[1];
      uStack_110 = *puVar2;
      uStack_100 = puVar2[2];
      func_0x00010c2508a0();
      uVar16 = param_1;
      func_0x00010c1234c0();
      func_0x00010c252d60();
      if (uVar16 != 1) {
        func_0x00010c1234c0();
        func_0x00010bf987e0();
        _NSLog(&PTR____CFConstantStringClassReference_110f2d9d8);
        goto LAB_109b84ef0;
      }
      _NSLog(&PTR____CFConstantStringClassReference_110f2d9f8);
    }
    uVar16 = param_1;
    func_0x00010c1234e0();
    iVar5 = (int)uVar16;
    func_0x00010c07bca0();
    if (iVar5 != 0) {
      uVar16 = param_1;
      func_0x00010c0fc980();
      func_0x00010c123900();
      uStack_108 = puVar2[1];
      uStack_110 = *puVar2;
      uStack_100 = puVar2[2];
      func_0x00010bf06f60();
      if ((param_1 & 1) == 0) {
        _NSLog(&PTR____CFConstantStringClassReference_110f2da18);
      }
      if (uVar16 != 0) {
        _CVPixelBufferRelease(uVar16);
      }
    }
  }
  _CGImageRelease(lVar7);
  _CGColorSpaceRelease(uVar6);
  _CVPixelBufferUnlockBaseAddress(lVar14,0);
LAB_109b84ef0:
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (0 < (int)uStack_c4) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_c4);
  }
  if (plStack_80 != alStack_78 && plStack_80 != (long *)0x0) {
    _free(plStack_80[-1]);
  }
  return;
}



/* Entry: 109b850c8; end: 109b850eb;  */

void FUN_109b850c8(long param_1)

{
  func_0x00010bf61a80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c182c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109b850ec; end: 109b85173; -[CvVideoCamera updateOrientation] */

void FUN_109b850ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x00010c1419c0();
  if ((int)uVar1 != 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110f2da38);
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    func_0x00010c0f3c80(param_5);
    func_0x00010bfb68e0();
    func_0x00010bf61a80(param_5);
    func_0x00010c1739e0(0,0,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c08cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_layoutPreviewLayer_112600df8);
    return;
  }
  return;
}



/* Entry: 109b85174; end: 109b851c7; -[CvVideoCamera saveVideo] */

void FUN_109b85174(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c123be0();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c29a060();
    iVar1 = (int)uVar2;
    _UIVideoAtPathIsCompatibleWithSavedPhotosAlbum();
    if (iVar1 != 0) {
      func_0x00010c29a060(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__UISaveVideoAtPathToSavedPhotosAlbum_110345d70)();
      return;
    }
  }
  return;
}



/* Entry: 109b851c8; end: 109b85257; -[CvVideoCamera videoFileURL] */

undefined * FUN_109b851c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  _NSTemporaryDirectory();
  func_0x00010c013ce0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae518);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  iVar1 = (int)puVar2;
  func_0x00010bfacbe0();
  if (iVar1 != 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110f2da78);
  }
  return puVar3;
}



/* Entry: 109b85258; end: 109b852a7; -[CvVideoCamera videoFileString] */

void FUN_109b85258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  _NSTemporaryDirectory();
  func_0x00010c013ce0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 109b852a8; end: 109b852b7; -[CvVideoCamera delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b852a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784068);
}



/* Entry: 109b852b8; end: 109b852c7; -[CvVideoCamera setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b852b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112784068) = param_3;
  return;
}



/* Entry: 109b852c8; end: 109b852d7; -[CvVideoCamera grayscaleMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109b852c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278406c);
}



/* Entry: 109b852d8; end: 109b852e7; -[CvVideoCamera setGrayscaleMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b852d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278406c) = param_3;
  return;
}



/* Entry: 109b852e8; end: 109b852f7; -[CvVideoCamera customPreviewLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b852e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784070);
}



/* Entry: 109b852f8; end: 109b85303; -[CvVideoCamera setCustomPreviewLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b852f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b85304; end: 109b85313; -[CvVideoCamera videoDataOutput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b85304(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784074);
}



/* Entry: 109b85314; end: 109b8531f; -[CvVideoCamera setVideoDataOutput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b85314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b85320; end: 109b8532f; -[CvVideoCamera recordVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109b85320(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112784078);
}



/* Entry: 109b85330; end: 109b8533f; -[CvVideoCamera setRecordVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b85330(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112784078) = param_3;
  return;
}



/* Entry: 109b85340; end: 109b8534f; -[CvVideoCamera rotateVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109b85340(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278407c);
}



/* Entry: 109b85350; end: 109b8535f; -[CvVideoCamera setRotateVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b85350(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278407c) = param_3;
  return;
}



/* Entry: 109b85360; end: 109b8536f; -[CvVideoCamera recordAssetWriterInput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b85360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784080);
}



/* Entry: 109b85370; end: 109b8537b; -[CvVideoCamera setRecordAssetWriterInput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b85370(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b8537c; end: 109b8538b; -[CvVideoCamera recordPixelBufferAdaptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b8537c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784084);
}



/* Entry: 109b8538c; end: 109b85397; -[CvVideoCamera setRecordPixelBufferAdaptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b8538c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b85398; end: 109b853a7; -[CvVideoCamera recordAssetWriter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109b85398(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784088);
}



/* Entry: 109b853a8; end: 109b853b3; -[CvVideoCamera setRecordAssetWriter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109b853a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b853b4; end: 109b85a27;  */

void FUN_109b853b4(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1d99);
  fVar5 = 0.0;
  fVar4 = 0.0;
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar4 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar4 = (float)(int)puVar1[4];
    }
    else {
      fVar4 = 1e+30;
    }
  }
  *(float *)(param_1 + 8) = fVar4;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1da7);
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar5 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar5 = (float)(int)puVar1[4];
    }
    else {
      fVar5 = 1e+30;
    }
  }
  *(float *)(param_1 + 0xc) = fVar5;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1db4);
  if (puVar1 == (uint *)0x0) {
    fVar4 = 0.0;
  }
  else if ((*puVar1 & 7) == 2) {
    fVar4 = (float)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    fVar4 = (float)(int)puVar1[4];
  }
  else {
    fVar4 = 1e+30;
  }
  *(float *)(param_1 + 0x10) = fVar4;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1dc1);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else if ((*puVar1 & 7) == 2) {
    uVar3 = (uint)(long)(double)(long)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    uVar3 = puVar1[4];
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(long *)(param_1 + 0x18) = (long)(int)uVar3;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1dd2);
  if (puVar1 == (uint *)0x0) {
    fVar4 = 0.0;
  }
  else if ((*puVar1 & 7) == 2) {
    fVar4 = (float)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    fVar4 = (float)(int)puVar1[4];
  }
  else {
    fVar4 = 1e+30;
  }
  *(float *)(param_1 + 0x20) = fVar4;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1de6);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else if ((*puVar1 & 7) == 2) {
    uVar3 = (uint)(long)(double)(long)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    uVar3 = puVar1[4];
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(bool *)(param_1 + 0x24) = uVar3 != 0;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1df4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else if ((*puVar1 & 7) == 2) {
    uVar2 = (undefined1)(long)(double)(long)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    uVar2 = (undefined1)puVar1[4];
  }
  else {
    uVar2 = 0xff;
  }
  *(undefined1 *)(param_1 + 0x25) = uVar2;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1dfe);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else if ((*puVar1 & 7) == 2) {
    uVar3 = (uint)(long)(double)(long)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    uVar3 = puVar1[4];
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(bool *)(param_1 + 0x26) = uVar3 != 0;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e0b);
  fVar5 = 0.0;
  fVar4 = 0.0;
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar4 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar4 = (float)(int)puVar1[4];
    }
    else {
      fVar4 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x28) = fVar4;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e13);
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar5 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar5 = (float)(int)puVar1[4];
    }
    else {
      fVar5 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x2c) = fVar5;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e1b);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else if ((*puVar1 & 7) == 2) {
    uVar3 = (uint)(long)(double)(long)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    uVar3 = puVar1[4];
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(bool *)(param_1 + 0x30) = uVar3 != 0;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e2f);
  fVar5 = 0.0;
  fVar4 = 0.0;
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar4 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar4 = (float)(int)puVar1[4];
    }
    else {
      fVar4 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x34) = fVar4;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e3e);
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar5 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar5 = (float)(int)puVar1[4];
    }
    else {
      fVar5 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x38) = fVar5;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e4d);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else if ((*puVar1 & 7) == 2) {
    uVar3 = (uint)(long)(double)(long)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    uVar3 = puVar1[4];
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(bool *)(param_1 + 0x3c) = uVar3 != 0;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e5d);
  fVar5 = 0.0;
  fVar4 = 0.0;
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar4 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar4 = (float)(int)puVar1[4];
    }
    else {
      fVar4 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x40) = fVar4;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e6d);
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar5 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar5 = (float)(int)puVar1[4];
    }
    else {
      fVar5 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x44) = fVar5;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e7d);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else if ((*puVar1 & 7) == 2) {
    uVar3 = (uint)(long)(double)(long)*(double *)(puVar1 + 4);
  }
  else if ((*puVar1 & 7) == 1) {
    uVar3 = puVar1[4];
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(bool *)(param_1 + 0x48) = uVar3 != 0;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e8f);
  fVar5 = 0.0;
  fVar4 = 0.0;
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar4 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar4 = (float)(int)puVar1[4];
    }
    else {
      fVar4 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x4c) = fVar4;
  puVar1 = (uint *)*param_2;
  FUN_109aa9324(puVar1,param_2[1],&UNK_10f5a1e9c);
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 & 7) == 2) {
      fVar5 = (float)*(double *)(puVar1 + 4);
    }
    else if ((*puVar1 & 7) == 1) {
      fVar5 = (float)(int)puVar1[4];
    }
    else {
      fVar5 = 1e+30;
    }
  }
  *(float *)(param_1 + 0x50) = fVar5;
  return;
}



/* Entry: 109b85a28; end: 109b8765b;  */

void FUN_109b85a28(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xd;
  *(undefined1 *)((long)puVar9 + 0x11) = 0;
  *(undefined8 *)((long)puVar9 + 9) = 0x70657453646c6f68;
  *(undefined8 *)(puVar9 + 1) = 0x6c6f687365726874;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 8),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xc;
  *(undefined1 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 1) = 0x73657268546e696d;
  puVar9[3] = 0x646c6f68;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0xc),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xc;
  *(undefined1 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 1) = 0x736572685478616d;
  puVar9[3] = 0x646c6f68;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x10),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0x10;
  *(undefined1 *)(puVar9 + 5) = 0;
  *(undefined8 *)(puVar9 + 3) = 0x7974696c69626174;
  *(undefined8 *)(puVar9 + 1) = 0x61657065526e696d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar10[2],puVar2,uVar4);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0x13;
  *(undefined1 *)((long)puVar9 + 0x17) = 0;
  *(undefined4 *)((long)puVar9 + 0x13) = 0x73626f6c;
  *(undefined8 *)(puVar9 + 3) = 0x6c426e6565777465;
  *(undefined8 *)(puVar9 + 1) = 0x42747369446e696d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x20),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xd;
  *(undefined1 *)((long)puVar9 + 0x11) = 0;
  *(undefined8 *)((long)puVar9 + 9) = 0x726f6c6f43794272;
  *(undefined8 *)(puVar9 + 1) = 0x79427265746c6966;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  uVar5 = *(undefined1 *)(param_1 + 0x24);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar10[2],puVar2,uVar5);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x10;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 9;
  *(undefined8 *)(puVar9 + 1) = 0x6f6c6f43626f6c62;
  *(undefined2 *)(puVar9 + 3) = 0x72;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  uVar5 = *(undefined1 *)(param_1 + 0x25);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar10[2],puVar2,uVar5);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xc;
  *(undefined1 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 1) = 0x79427265746c6966;
  puVar9[3] = 0x61657241;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  uVar5 = *(undefined1 *)(param_1 + 0x26);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar10[2],puVar2,uVar5);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0xc;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 7;
  *(undefined1 *)((long)puVar9 + 0xb) = 0;
  *(undefined4 *)((long)puVar9 + 7) = 0x61657241;
  puVar9[1] = 0x416e696d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x28),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0xc;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 7;
  *(undefined1 *)((long)puVar9 + 0xb) = 0;
  *(undefined4 *)((long)puVar9 + 7) = 0x61657241;
  puVar9[1] = 0x4178616d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x2c),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0x13;
  *(undefined1 *)((long)puVar9 + 0x17) = 0;
  *(undefined4 *)((long)puVar9 + 0x13) = 0x79746972;
  *(undefined8 *)(puVar9 + 3) = 0x72616c7563726943;
  *(undefined8 *)(puVar9 + 1) = 0x79427265746c6966;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  uVar5 = *(undefined1 *)(param_1 + 0x30);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar10[2],puVar2,uVar5);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xe;
  *(undefined1 *)((long)puVar9 + 0x12) = 0;
  *(undefined8 *)((long)puVar9 + 10) = 0x79746972616c7563;
  *(undefined8 *)(puVar9 + 1) = 0x75637269436e696d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x34),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xe;
  *(undefined1 *)((long)puVar9 + 0x12) = 0;
  *(undefined8 *)((long)puVar9 + 10) = 0x79746972616c7563;
  *(undefined8 *)(puVar9 + 1) = 0x756372694378616d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x38),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xf;
  *(undefined1 *)((long)puVar9 + 0x13) = 0;
  *(undefined8 *)((long)puVar9 + 0xb) = 0x61697472656e4979;
  *(undefined8 *)(puVar9 + 1) = 0x79427265746c6966;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  uVar5 = *(undefined1 *)(param_1 + 0x3c);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar10[2],puVar2,uVar5);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xf;
  *(undefined1 *)((long)puVar9 + 0x13) = 0;
  *(undefined8 *)((long)puVar9 + 0xb) = 0x6f69746152616974;
  *(undefined8 *)(puVar9 + 1) = 0x7472656e496e696d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x40),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xf;
  *(undefined1 *)((long)puVar9 + 0x13) = 0;
  *(undefined8 *)((long)puVar9 + 0xb) = 0x6f69746152616974;
  *(undefined8 *)(puVar9 + 1) = 0x7472656e4978616d;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x44),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0x11;
  *(undefined2 *)(puVar9 + 5) = 0x79;
  *(undefined8 *)(puVar9 + 3) = 0x74697865766e6f43;
  *(undefined8 *)(puVar9 + 1) = 0x79427265746c6966;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  uVar5 = *(undefined1 *)(param_1 + 0x48);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar10[2],puVar2,uVar5);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xc;
  *(undefined1 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 1) = 0x65766e6f436e696d;
  puVar9[3] = 0x79746978;
  plVar10 = param_2;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x18))();
  if ((int)plVar11 != 0) {
    if ((int)plVar10[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
      goto LAB_109b87134;
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar10[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar10[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar10[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x4c),plVar10[2],puVar2);
    if ((*(byte *)(plVar10 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar10 + 8) = 6;
    }
  }
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_40 = puVar9 + 1;
  uStack_38 = 0xc;
  *(undefined1 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 1) = 0x65766e6f4378616d;
  puVar9[3] = 0x79746978;
  FUN_109ab2b2c(param_2,&puStack_40);
  puVar9 = puStack_40;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar12 = puVar9 + -1;
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x18))();
  if ((int)plVar10 != 0) {
    if ((int)param_2[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_40 = puVar9 + 1;
      uStack_38 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f594c91,&UNK_10f594c9c,0x428);
LAB_109b87134:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109b87138);
      (*pcVar8)();
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)param_2[3] != (undefined *)0x0) {
      puVar1 = (undefined *)param_2[3];
    }
    puVar2 = (undefined *)0x0;
    if (param_2[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac47c((double)*(float *)(param_1 + 0x50),param_2[2],puVar2);
    if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(param_2 + 8) = 6;
    }
  }
  return;
}



/* Entry: 109b8765c; end: 109b882bf;  */

void FUN_109b8765c(long param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long *plStack_390;
  undefined4 auStack_368 [2];
  undefined8 **ppuStack_360;
  undefined8 uStack_358;
  undefined4 auStack_350 [2];
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined4 *puStack_2b8;
  double dStack_2b0;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar7 = *(ulong **)(param_2 + 2);
    uStack_f8 = puVar7[1];
    uStack_100 = *puVar7;
    uStack_e8 = puVar7[3];
    uStack_f0 = puVar7[2];
    uStack_d8 = puVar7[5];
    uStack_e0 = puVar7[4];
    uStack_c8 = puVar7[7];
    uStack_d0 = puVar7[6];
    uStack_c0 = (ulong)&uStack_100 | 8;
    puStack_b8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (puVar7[7] != 0) {
      piVar1 = (int *)(puVar7[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar7 + 4) < 3) {
      uStack_b0 = *(undefined8 *)puVar7[9];
      uStack_a8 = ((undefined8 *)puVar7[9])[1];
    }
    else {
      uStack_100 = uStack_100 & 0xffffffff;
      func_0x000109a84868(&uStack_100);
    }
  }
  else {
    FUN_109a8a180(&uStack_100,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar7 = *(ulong **)(param_3 + 2);
    uStack_158 = puVar7[1];
    uStack_160 = *puVar7;
    uStack_148 = puVar7[3];
    uStack_150 = puVar7[2];
    uStack_138 = puVar7[5];
    uStack_140 = puVar7[4];
    uStack_128 = puVar7[7];
    uStack_130 = puVar7[6];
    uStack_120 = (ulong)&uStack_160 | 8;
    plStack_118 = &lStack_110;
    lStack_108 = 0;
    lStack_110 = 0;
    if (puVar7[7] != 0) {
      piVar1 = (int *)(puVar7[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar7 + 4) < 3) {
      lStack_110 = *(long *)puVar7[9];
      lStack_108 = ((long *)puVar7[9])[1];
    }
    else {
      uStack_160 = uStack_160 & 0xffffffff;
      func_0x000109a84868(&uStack_160);
    }
  }
  else {
    FUN_109a8a180(&uStack_160,param_3,0xffffffff);
  }
  param_4[1] = *param_4;
  lStack_170 = 0;
  lStack_178 = 0;
  uStack_168 = 0;
  uStack_1d8 = 0x42ff0000;
  lStack_198 = (long)&uStack_1d4 + 4;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1ac = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  lStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  plStack_2c0._0_4_ = 0x2010000;
  dStack_2b0 = 0.0;
  puVar6 = &uStack_160;
  puStack_2b8 = &uStack_1d8;
  puStack_190 = &uStack_188;
  FUN_109a479a0(puVar6,&plStack_2c0);
  plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,0x3010000);
  dStack_2b0 = 0.0;
  uStack_338 = (long *)CONCAT44(uStack_338._4_4_,0x8204000c);
  uStack_330 = &lStack_178;
  puStack_328 = (undefined8 *)0x0;
  puStack_2b8 = &uStack_1d8;
  FUN_109a91d90();
  dStack_200 = 0.0;
  FUN_109adf8b0(&plStack_2c0,&uStack_338,puVar6,1,1,&dStack_200);
  if (lStack_170 != lStack_178) {
    uVar13 = 0;
    plStack_390 = (long *)0x8;
    do {
      dStack_200 = 0.0;
      dStack_1f8 = 0.0;
      dStack_1e8 = 1.0;
      plVar9 = (long *)(lStack_178 + uVar13 * 0x18);
      uStack_338 = (long *)0x242ff400c;
      uStack_330 = (long *)CONCAT44(1,(int)((ulong)(plVar9[1] - *plVar9) >> 3));
      puStack_320 = (undefined8 *)0x0;
      puStack_318 = (undefined8 *)0x0;
      uStack_308 = 0;
      lStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      lVar8 = *plVar9;
      if (lVar8 != plVar9[1]) {
        uStack_2e0 = 8;
        uStack_2e8 = 8;
        puStack_318 = (undefined8 *)(lVar8 + ((plVar9[1] - *plVar9) * 0x20000000 >> 0x20) * 8);
        puStack_320 = (undefined8 *)lVar8;
        puStack_310 = puStack_318;
      }
      uStack_2c8 = 0;
      puStack_2d8 = (undefined8 *)CONCAT44(puStack_2d8._4_4_,0x1010000);
      puStack_328 = puStack_320;
      puStack_2f8 = &uStack_330;
      puStack_2f0 = &uStack_2e8;
      puStack_2d0 = &uStack_338;
      FUN_109b2f34c(&plStack_2c0,&puStack_2d8,0);
      if (lStack_300 != 0) {
        piVar1 = (int *)(lStack_300 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_338);
        }
      }
      lStack_300 = 0;
      plVar9 = (long *)0x0;
      puStack_320 = (undefined8 *)0x0;
      puStack_328 = (undefined8 *)0x0;
      puStack_310 = (undefined8 *)0x0;
      puStack_318 = (undefined8 *)0x0;
      if (0 < uStack_338._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)((long)puStack_2f8 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_338._4_4_);
      }
      if (puStack_2f0 != &uStack_2e8 && puStack_2f0 != (undefined8 *)0x0) {
        _free(puStack_2f0[-1]);
      }
      plVar5 = plStack_2c0;
      if ((*(char *)(param_1 + 0x26) != '\x01') ||
         (((double)*(float *)(param_1 + 0x28) <= (double)plStack_2c0 &&
          (plVar9 = plStack_2c0, (double)plStack_2c0 < (double)*(float *)(param_1 + 0x2c))))) {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          plVar10 = (long *)(lStack_178 + uVar13 * 0x18);
          uStack_338 = (long *)0x242ff400c;
          uStack_330 = (long *)CONCAT44(1,(int)((ulong)(plVar10[1] - *plVar10) >> 3));
          puStack_320 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          uStack_308 = 0;
          lStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2e0 = 0;
          lVar8 = *plVar10;
          if (lVar8 != plVar10[1]) {
            uStack_2e0 = 8;
            uStack_2e8 = 8;
            puStack_318 = (undefined8 *)(lVar8 + ((plVar10[1] - *plVar10) * 0x20000000 >> 0x20) * 8)
            ;
            plVar9 = plStack_390;
            puStack_320 = (undefined8 *)lVar8;
            puStack_310 = puStack_318;
          }
          uStack_2c8 = 0;
          puStack_2d8 = (undefined8 *)CONCAT44(puStack_2d8._4_4_,0x1010000);
          puStack_328 = puStack_320;
          puStack_2f8 = &uStack_330;
          puStack_2f0 = &uStack_2e8;
          puStack_2d0 = &uStack_338;
          FUN_109b4131c(&puStack_2d8,1);
          if (lStack_300 != 0) {
            piVar1 = (int *)(lStack_300 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_338);
            }
          }
          lStack_300 = 0;
          puStack_320 = (undefined8 *)0x0;
          puStack_328 = (undefined8 *)0x0;
          puStack_310 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          if (0 < uStack_338._4_4_) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)puStack_2f8 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < uStack_338._4_4_);
          }
          if (puStack_2f0 != &uStack_2e8 && puStack_2f0 != (undefined8 *)0x0) {
            _free(puStack_2f0[-1]);
          }
          dVar14 = ((double)plVar5 * 12.566370614359172) / ((double)plVar9 * (double)plVar9);
          if ((dVar14 < (double)*(float *)(param_1 + 0x34)) ||
             ((double)*(float *)(param_1 + 0x38) <= dVar14)) goto LAB_109b88024;
        }
        if (*(char *)(param_1 + 0x3c) == '\x01') {
          dVar15 = dStack_268 + dStack_268;
          dVar16 = dStack_270 - dStack_260;
          dVar17 = SQRT(dVar15 * dVar15 + dVar16 * dVar16);
          dVar14 = 1.0;
          if (0.01 < dVar17) {
            dVar14 = ((-(dVar16 * 0.5 * (dVar16 / dVar17)) + (dStack_270 + dStack_260) * 0.5) -
                     (dVar15 / dVar17) * dStack_268) /
                     (dVar16 * 0.5 * (dVar16 / dVar17) + (dStack_270 + dStack_260) * 0.5 +
                     (dVar15 / dVar17) * dStack_268);
          }
          if ((dVar14 < (double)*(float *)(param_1 + 0x40)) ||
             ((double)*(float *)(param_1 + 0x44) <= dVar14)) goto LAB_109b88024;
          dStack_1e8 = dVar14 * dVar14;
        }
        if (*(char *)(param_1 + 0x48) == '\x01') {
          puStack_2d8 = (undefined8 *)0x0;
          puStack_2d0 = (undefined8 *)0x0;
          uStack_2c8 = 0;
          plVar9 = (long *)(lStack_178 + uVar13 * 0x18);
          uStack_338 = (long *)0x242ff400c;
          uStack_330 = (long *)CONCAT44(1,(int)((ulong)(plVar9[1] - *plVar9) >> 3));
          puStack_320 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          uStack_308 = 0;
          lStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2e0 = 0;
          lVar8 = *plVar9;
          if (lVar8 != plVar9[1]) {
            uStack_2e0 = 8;
            uStack_2e8 = 8;
            puStack_318 = (undefined8 *)(lVar8 + ((plVar9[1] - *plVar9) * 0x20000000 >> 0x20) * 8);
            puStack_320 = (undefined8 *)lVar8;
            puStack_310 = puStack_318;
          }
          uStack_340 = 0;
          auStack_350[0] = 0x1010000;
          auStack_368[0] = 0x8203000c;
          ppuStack_360 = &puStack_2d8;
          uStack_358 = 0;
          puStack_348 = &uStack_338;
          puStack_328 = puStack_320;
          puStack_2f8 = &uStack_330;
          puStack_2f0 = &uStack_2e8;
          FUN_109ae2358(auStack_350,auStack_368,0,1);
          if (lStack_300 != 0) {
            piVar1 = (int *)(lStack_300 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_338);
            }
          }
          lStack_300 = 0;
          dVar14 = 0.0;
          puStack_320 = (undefined8 *)0x0;
          puStack_328 = (undefined8 *)0x0;
          puStack_310 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          if (0 < uStack_338._4_4_) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)puStack_2f8 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < uStack_338._4_4_);
          }
          if (puStack_2f0 != &uStack_2e8 && puStack_2f0 != (undefined8 *)0x0) {
            _free(puStack_2f0[-1]);
          }
          plVar9 = (long *)(lStack_178 + uVar13 * 0x18);
          uStack_338 = (long *)0x242ff400c;
          uStack_330 = (long *)CONCAT44(1,(int)((ulong)(plVar9[1] - *plVar9) >> 3));
          puStack_320 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          uStack_308 = 0;
          lStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2e0 = 0;
          lVar8 = *plVar9;
          if (lVar8 != plVar9[1]) {
            dVar14 = 3.95252516672997e-323;
            uStack_2e0 = 8;
            uStack_2e8 = 8;
            puStack_318 = (undefined8 *)(lVar8 + ((plVar9[1] - *plVar9) * 0x20000000 >> 0x20) * 8);
            puStack_320 = (undefined8 *)lVar8;
            puStack_310 = puStack_318;
          }
          uStack_340 = 0;
          auStack_350[0] = 0x1010000;
          puStack_348 = &uStack_338;
          puStack_328 = puStack_320;
          puStack_2f8 = &uStack_330;
          puStack_2f0 = &uStack_2e8;
          FUN_109b415b4(auStack_350,0);
          if (lStack_300 != 0) {
            piVar1 = (int *)(lStack_300 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_338);
            }
          }
          lStack_300 = 0;
          dVar15 = 0.0;
          puStack_320 = (undefined8 *)0x0;
          puStack_328 = (undefined8 *)0x0;
          puStack_310 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          if (0 < uStack_338._4_4_) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)puStack_2f8 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < uStack_338._4_4_);
          }
          if (puStack_2f0 != &uStack_2e8 && puStack_2f0 != (undefined8 *)0x0) {
            _free(puStack_2f0[-1]);
          }
          uStack_338 = (long *)0x242ff400c;
          puStack_320 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          uStack_308 = 0;
          lStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2e0 = 0;
          uVar11 = (long)puStack_2d0 - (long)puStack_2d8;
          uStack_330 = (long *)CONCAT44(1,(int)(uVar11 >> 3));
          if (uVar11 != 0) {
            dVar15 = 3.95252516672997e-323;
            uStack_2e0 = 8;
            uStack_2e8 = 8;
            puStack_320 = puStack_2d8;
            puStack_318 = puStack_2d8 + ((long)(uVar11 * 0x20000000) >> 0x20);
            puStack_310 = puStack_318;
          }
          uStack_340 = 0;
          auStack_350[0] = 0x1010000;
          puStack_348 = &uStack_338;
          puStack_328 = puStack_320;
          puStack_2f8 = &uStack_330;
          puStack_2f0 = &uStack_2e8;
          FUN_109b415b4(auStack_350,0);
          if (lStack_300 != 0) {
            piVar1 = (int *)(lStack_300 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_338);
            }
          }
          lStack_300 = 0;
          puStack_320 = (undefined8 *)0x0;
          puStack_328 = (undefined8 *)0x0;
          puStack_310 = (undefined8 *)0x0;
          puStack_318 = (undefined8 *)0x0;
          if (0 < uStack_338._4_4_) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)puStack_2f8 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < uStack_338._4_4_);
          }
          if (puStack_2f0 != &uStack_2e8 && puStack_2f0 != (undefined8 *)0x0) {
            _free(puStack_2f0[-1]);
          }
          if ((dVar14 / dVar15 < (double)*(float *)(param_1 + 0x4c)) ||
             ((double)*(float *)(param_1 + 0x50) <= dVar14 / dVar15)) {
            if (puStack_2d8 != (undefined8 *)0x0) {
              puStack_2d0 = puStack_2d8;
              __ZdlPv();
            }
            goto LAB_109b88024;
          }
          if (puStack_2d8 != (undefined8 *)0x0) {
            puStack_2d0 = puStack_2d8;
            __ZdlPv();
          }
        }
        if ((double)plStack_2c0 != 0.0) {
          dVar14 = (double)puStack_2b8 / (double)plStack_2c0;
          dVar15 = dStack_2b0 / (double)plStack_2c0;
          dStack_200 = dVar14;
          dStack_1f8 = dVar15;
          if ((*(char *)(param_1 + 0x24) != '\x01') ||
             (*(char *)(uStack_150 + *plStack_118 * (long)(int)(long)(double)(long)dVar15 +
                       (long)(int)(long)(double)(long)dVar14) == *(char *)(param_1 + 0x25))) {
            uStack_338 = (long *)0x0;
            uStack_330 = (long *)0x0;
            puStack_328 = (undefined8 *)0x0;
            plVar9 = (long *)(lStack_178 + uVar13 * 0x18);
            lVar8 = *plVar9;
            if (plVar9[1] != lVar8) {
              lVar12 = 0;
              uVar11 = 0;
              do {
                dVar16 = dVar14 - (double)*(int *)(lVar8 + lVar12);
                dVar17 = dVar15 - (double)((int *)(lVar8 + lVar12))[1];
                puStack_2d8 = (undefined8 *)SQRT(dVar17 * dVar17 + dVar16 * dVar16);
                FUN_10944b2d4(&uStack_338,&puStack_2d8);
                uVar11 = uVar11 + 1;
                plVar9 = (long *)(lStack_178 + uVar13 * 0x18);
                lVar8 = *plVar9;
                lVar12 = lVar12 + 8;
              } while (uVar11 < (ulong)(plVar9[1] - lVar8 >> 3));
            }
            __ZNSt3__16__sortIRNS_6__lessIddEEPdEEvT0_S5_T_(uStack_338,uStack_330,&puStack_2d8);
            uVar11 = (long)uStack_330 - (long)uStack_338 >> 3;
            dStack_1f0 = ((double)uStack_338[uVar11 - 1 >> 1] + (double)uStack_338[uVar11 >> 1]) *
                         0.5;
            uStack_330 = uStack_338;
            __ZdlPv();
            FUN_109b882c0(param_4,&dStack_200);
          }
        }
      }
LAB_109b88024:
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)((lStack_170 - lStack_178 >> 3) * -0x5555555555555555));
  }
  if (lStack_1a0 != 0) {
    piVar1 = (int *)(lStack_1a0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1d8);
    }
  }
  lStack_1a0 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  if (0 < (int)uStack_1d4) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_198 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_1d4);
  }
  if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
    _free(puStack_190[-1]);
  }
  plStack_2c0 = &lStack_178;
  FUN_1092cc3c0(&plStack_2c0);
  if (uStack_128 != 0) {
    piVar1 = (int *)(uStack_128 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_160);
    }
  }
  uStack_128 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (0 < uStack_160._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_120 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_160._4_4_);
  }
  if (plStack_118 != &lStack_110 && plStack_118 != (long *)0x0) {
    _free(plStack_118[-1]);
  }
  if (uStack_c8 != 0) {
    piVar1 = (int *)(uStack_c8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  uStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_c0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_100._4_4_);
  }
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
  return;
}



/* Entry: 109b882c0; end: 109b883bf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109b886b4 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109b882c0(long *param_1,uint *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  double dVar12;
  double *******pppppppdVar13;
  double *******pppppppdVar14;
  code *pcVar15;
  undefined8 *puVar16;
  double ******ppppppdVar17;
  undefined4 *puVar18;
  uint *puVar19;
  double *******pppppppdVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  double ******ppppppdVar24;
  ulong uVar25;
  long lVar26;
  double ******ppppppdVar27;
  double ******ppppppdVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  double *******pppppppdVar32;
  double *******pppppppdVar33;
  ulong uVar34;
  undefined1 in_b0;
  undefined1 uVar35;
  undefined1 in_register_00005001;
  undefined1 uVar36;
  undefined1 in_register_00005002;
  undefined1 uVar37;
  undefined1 in_register_00005003;
  undefined1 uVar38;
  undefined1 in_register_00005004;
  undefined1 uVar39;
  undefined1 in_register_00005005;
  undefined1 uVar40;
  undefined1 in_register_00005006;
  undefined1 uVar41;
  undefined1 in_register_00005007;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  double *****pppppdVar51;
  double dVar52;
  double *******pppppppdStack_1f8;
  double *******pppppppdStack_1f0;
  double *******pppppppdStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  double *******pppppppdStack_1c8;
  double *******pppppppdStack_1c0;
  double *******pppppppdStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double *******pppppppdStack_e8;
  double *******pppppppdStack_e0;
  double *******pppppppdStack_d8;
  double *******pppppppdStack_d0;
  double *******pppppppdStack_c8;
  
  puVar30 = (undefined8 *)param_1[1];
  if (puVar30 < (undefined8 *)param_1[2]) {
    uVar11 = *(undefined8 *)param_2;
    puVar30[1] = *(undefined8 *)(param_2 + 2);
    *puVar30 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    puVar30[3] = *(undefined8 *)(param_2 + 6);
    puVar30[2] = uVar11;
    puVar30 = puVar30 + 4;
  }
  else {
    lVar31 = (long)puVar30 - *param_1;
    uVar34 = (lVar31 >> 5) + 1;
    if (uVar34 >> 0x3b != 0) {
      FUN_109b88f60();
      param_3[1] = *param_3;
      uStack_150._0_2_ = 0;
      uStack_150._2_2_ = 0x42ff;
      puVar30 = (undefined8 *)((ulong)&uStack_150 | 8);
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_150._4_4_ = 0;
      uStack_148 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_124 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      puVar19 = param_2;
      puStack_110 = puVar30;
      puStack_108 = &uStack_100;
      FUN_109a8b904(param_2,0xffffffff);
      if (((uint)puVar19 & 0xff8) == 0x10) {
        uStack_1b0 = (undefined4 *)CONCAT44(uStack_1b0._4_4_,0x2010000);
        uStack_1a8 = (ushort *)&uStack_150;
        uStack_1a0 = 0;
        uStack_19c = 0;
        FUN_109ac9fc8(param_2,&uStack_1b0,6,0);
      }
      else {
        if ((*param_2 & 0x1f0000) == 0x10000) {
          puVar16 = *(undefined8 **)(param_2 + 2);
          puStack_170 = (undefined8 *)((ulong)&uStack_1b0 | 8);
          uStack_1b0 = (undefined4 *)*puVar16;
          uStack_1a8._0_4_ = (float)puVar16[1];
          uStack_1a8._4_4_ = (undefined4)((ulong)puVar16[1] >> 0x20);
          uStack_198 = (undefined4)puVar16[3];
          uStack_194 = (undefined4)((ulong)puVar16[3] >> 0x20);
          uStack_1a0 = (undefined4)puVar16[2];
          uStack_19c = (undefined4)((ulong)puVar16[2] >> 0x20);
          uStack_188 = puVar16[5];
          uStack_190 = puVar16[4];
          lStack_178 = puVar16[7];
          uStack_180 = puVar16[6];
          puStack_168 = &uStack_160;
          uStack_160 = 0;
          uStack_158 = 0;
          if (puVar16[7] != 0) {
            piVar1 = (int *)(puVar16[7] + 0x14);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = *piVar1 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if (*(int *)((long)puVar16 + 4) < 3) {
            uStack_160 = *(undefined8 *)puVar16[9];
            uStack_158 = ((undefined8 *)puVar16[9])[1];
          }
          else {
            uStack_1b0 = (undefined4 *)((ulong)uStack_1b0 & 0xffffffff);
            func_0x000109a84868(&uStack_1b0);
          }
        }
        else {
          FUN_109a8a180(&uStack_1b0,param_2,0xffffffff);
        }
        if (lStack_118 != 0) {
          piVar1 = (int *)(lStack_118 + 0x14);
          do {
            iVar5 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_150);
          }
        }
        if (0 < uStack_150._4_4_) {
          lVar31 = 0;
          do {
            *(undefined4 *)((long)puStack_110 + lVar31 * 4) = 0;
            lVar31 = lVar31 + 1;
          } while (lVar31 < uStack_150._4_4_);
        }
        uStack_148 = (float)uStack_1a8;
        uStack_144 = uStack_1a8._4_4_;
        uStack_150._0_2_ = (ushort)uStack_1b0;
        uStack_150._2_2_ = (undefined2)((ulong)uStack_1b0 >> 0x10);
        uStack_138 = uStack_198;
        uStack_134 = uStack_194;
        uStack_140 = uStack_1a0;
        uStack_13c = uStack_19c;
        uStack_128 = (undefined4)uStack_188;
        uStack_124 = (undefined4)((ulong)uStack_188 >> 0x20);
        uStack_130 = (undefined4)uStack_190;
        uStack_12c = (undefined4)((ulong)uStack_190 >> 0x20);
        lStack_118 = lStack_178;
        uStack_120 = (undefined4)uStack_180;
        uStack_11c = (undefined4)((ulong)uStack_180 >> 0x20);
        uStack_150._4_4_ = uStack_1b0._4_4_;
        puVar16 = puStack_110;
        puVar2 = puStack_108;
        if ((puStack_108 != &uStack_100) &&
           (puVar16 = puVar30, puVar2 = &uStack_100, puStack_108 != (undefined8 *)0x0)) {
          _free(puStack_108[-1]);
        }
        puStack_108 = puVar2;
        puStack_110 = puVar16;
        if (uStack_1b0._4_4_ < 3) {
          puVar30 = (undefined8 *)((ulong)&uStack_1b0 | 4);
          *puStack_108 = *puStack_168;
          puStack_108[1] = puStack_168[1];
          uStack_1b0 = (undefined4 *)CONCAT44(uStack_1b0._4_4_,0x42ff0000);
          puVar30[1] = 0;
          *puVar30 = 0;
          puVar30[3] = 0;
          puVar30[2] = 0;
          puVar30[5] = 0;
          puVar30[4] = 0;
          *(undefined8 *)((long)puVar30 + 0x34) = 0;
          *(undefined8 *)((long)puVar30 + 0x2c) = 0;
          uStack_1a8 = (ushort *)CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
          if (puStack_168 != &uStack_160) {
            _free(puStack_168[-1]);
          }
        }
        else {
          puStack_110 = puStack_170;
          puStack_108 = puStack_168;
        }
      }
      if (((ushort)uStack_150 & 0xfff) != 0) {
        puVar18 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        uStack_1b0 = puVar18 + 1;
        uStack_1a8._0_4_ = 5.74532e-44;
        uStack_1a8._4_4_ = 0;
        *(undefined1 *)((long)puVar18 + 0x2d) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x6e6f20726f746365;
        *(undefined8 *)(puVar18 + 1) = 0x74656420626f6c42;
        *(undefined8 *)(puVar18 + 7) = 0x69622d3820737472;
        *(undefined8 *)(puVar18 + 5) = 0x6f7070757320796c;
        *(undefined8 *)((long)puVar18 + 0x25) = 0x21736567616d6920;
        *(undefined8 *)((long)puVar18 + 0x1d) = 0x7469622d38207374;
        FUN_109ac3188(0xffffff2e,&uStack_1b0,&UNK_10f5a1ed3,&UNK_10f5a1eda,0x13b);
LAB_109b88cd4:
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x109b88cd8);
        (*pcVar15)();
      }
      pppppppdStack_1c8 = (double *******)0x0;
      pppppppdStack_1c0 = (double *******)0x0;
      pppppppdStack_1b8 = (double *******)0x0;
      fVar10 = *(float *)((long)param_1 + 0xc);
      if (fVar10 < *(float *)(param_1 + 2)) {
        puVar30 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        do {
          uStack_1b0 = (undefined4 *)CONCAT44(uStack_1b0._4_4_,0x42ff0000);
          puVar30[1] = 0;
          *puVar30 = 0;
          puVar30[3] = 0;
          puVar30[2] = 0;
          puVar30[5] = 0;
          puVar30[4] = 0;
          *(undefined8 *)((long)puVar30 + 0x34) = 0;
          *(undefined8 *)((long)puVar30 + 0x2c) = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          pppppppdStack_d8 = (double *******)0x0;
          pppppppdStack_e8._0_4_ = 0x1010000;
          lStack_1e0 = CONCAT44(lStack_1e0._4_4_,0x2010000);
          uStack_1d0 = 0;
          puStack_1d8 = &uStack_1b0;
          puStack_170 = &uStack_1a8;
          puStack_168 = &uStack_160;
          pppppppdStack_e0 = (double *******)&uStack_150;
          FUN_109b59078(CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                        0x406fe00000000000,&pppppppdStack_e8,&lStack_1e0,0);
          lStack_1e0 = 0;
          puStack_1d8 = (undefined8 *)0x0;
          uStack_1d0 = 0;
          pppppppdStack_d8 = (double *******)0x0;
          pppppppdStack_e8 = (double *******)CONCAT44(pppppppdStack_e8._4_4_,0x1010000);
          pppppppdStack_1e8 = (double *******)0x0;
          pppppppdStack_1f8 = (double *******)CONCAT44(pppppppdStack_1f8._4_4_,0x1010000);
          pppppppdVar33 = (double *******)&pppppppdStack_e8;
          pppppppdStack_1f0 = (double *******)&uStack_1b0;
          pppppppdStack_e0 = (double *******)&uStack_150;
          (**(code **)(*param_1 + 0x80))(param_1,pppppppdVar33,&pppppppdStack_1f8,&lStack_1e0);
          pppppppdStack_1f8 = (double *******)0x0;
          pppppppdStack_1f0 = (double *******)0x0;
          pppppppdStack_1e8 = (double *******)0x0;
          if (puStack_1d8 != (undefined8 *)lStack_1e0) {
            uVar34 = 0;
LAB_109b88710:
            pppppppdVar20 = (double *******)(lStack_1e0 + uVar34 * 0x20);
            if ((long)pppppppdStack_1c0 - (long)pppppppdStack_1c8 != 0) {
              lVar31 = 0;
              lVar23 = ((long)pppppppdStack_1c0 - (long)pppppppdStack_1c8 >> 3) *
                       -0x5555555555555555;
              do {
                lVar21 = *(long *)((long)pppppppdStack_1c8 + lVar31);
                pdVar3 = (double *)
                         (lVar21 + (((long *)((long)pppppppdStack_1c8 + lVar31))[1] - lVar21 >> 6) *
                                   0x20);
                dVar52 = SQRT((pdVar3[1] - (double)pppppppdVar20[1]) *
                              (pdVar3[1] - (double)pppppppdVar20[1]) +
                              (*pdVar3 - (double)*pppppppdVar20) *
                              (*pdVar3 - (double)*pppppppdVar20));
                if (((dVar52 < (double)*(float *)(param_1 + 4)) || (dVar52 < pdVar3[2])) ||
                   (dVar52 < (double)pppppppdVar20[2])) {
                  FUN_109b882c0();
                  lVar23 = *(long *)((long)pppppppdStack_1c8 + lVar31);
                  lVar26 = ((long *)((long)pppppppdStack_1c8 + lVar31))[1] - lVar23 >> 5;
                  lVar21 = lVar26 + -1;
                  if (lVar21 == 0) goto LAB_109b88840;
                  lVar26 = lVar26 << 5;
                  goto LAB_109b887f8;
                }
                lVar31 = lVar31 + 0x18;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            ppppppdVar17 = (double ******)0x20;
            __Znwm();
            ppppppdVar24 = ppppppdVar17 + 4;
            ppppppdVar28 = *pppppppdVar20;
            ppppppdVar17[1] = (double *****)pppppppdVar20[1];
            *ppppppdVar17 = (double *****)ppppppdVar28;
            ppppppdVar28 = pppppppdVar20[2];
            ppppppdVar17[3] = (double *****)pppppppdVar20[3];
            ppppppdVar17[2] = (double *****)ppppppdVar28;
            if (pppppppdStack_1e8 <= pppppppdStack_1f0) {
              lVar31 = (long)pppppppdStack_1f0 - (long)pppppppdStack_1f8;
              ppppppdVar28 = (double ******)((lVar31 >> 3) * -0x5555555555555555 + 1);
              if (ppppppdVar28 < (double ******)0xaaaaaaaaaaaaaab) {
                lVar23 = (long)pppppppdStack_1e8 - (long)pppppppdStack_1f8 >> 3;
                ppppppdVar27 = (double ******)(lVar23 * 0x5555555555555556);
                if (ppppppdVar27 < ppppppdVar28 || (long)ppppppdVar27 - (long)ppppppdVar28 == 0) {
                  ppppppdVar27 = ppppppdVar28;
                }
                if (0x555555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
                  ppppppdVar27 = (double ******)0xaaaaaaaaaaaaaaa;
                }
                pppppppdStack_c8 = (double *******)&pppppppdStack_1f8;
                FUN_109b88fbc();
                puVar16 = (undefined8 *)((long)ppppppdVar27 + lVar31);
                *puVar16 = ppppppdVar17;
                puVar16[1] = ppppppdVar24;
                puVar16[2] = ppppppdVar24;
                pppppppdVar32 =
                     (double *******)
                     ((long)puVar16 - ((long)pppppppdStack_1f0 - (long)pppppppdStack_1f8));
                pppppppdVar20 = pppppppdStack_1f8;
                _memcpy(pppppppdVar32);
                pppppppdStack_d8 = pppppppdStack_1f8;
                pppppppdStack_d0 = pppppppdStack_1e8;
                pppppppdStack_e8 = pppppppdStack_1f8;
                pppppppdStack_e0 = pppppppdStack_1f8;
                pppppppdStack_1f8 = pppppppdVar32;
                pppppppdStack_1f0 = (double *******)(puVar16 + 3);
                pppppppdStack_1e8 = (double *******)(ppppppdVar27 + (long)pppppppdVar33 * 3);
                func_0x000109b89000(&pppppppdStack_e8);
                pppppppdStack_1f0 = (double *******)(puVar16 + 3);
                goto LAB_109b888fc;
              }
              FUN_109b88fa8();
              goto LAB_109b88cd4;
            }
            *pppppppdStack_1f0 = ppppppdVar17;
            pppppppdStack_1f0[1] = ppppppdVar24;
            pppppppdStack_1f0[2] = ppppppdVar24;
            pppppppdVar20 = pppppppdVar33;
            pppppppdStack_1f0 = pppppppdStack_1f0 + 3;
            goto LAB_109b888fc;
          }
LAB_109b88a20:
          FUN_109b89104(&pppppppdStack_1f8);
          if (lStack_1e0 != 0) {
            puStack_1d8 = (undefined8 *)lStack_1e0;
            __ZdlPv();
          }
          if (lStack_178 != 0) {
            piVar1 = (int *)(lStack_178 + 0x14);
            do {
              iVar5 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar5 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_1b0);
            }
          }
          lStack_178 = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          if (0 < uStack_1b0._4_4_) {
            lVar31 = 0;
            do {
              *(undefined4 *)((long)puStack_170 + lVar31 * 4) = 0;
              lVar31 = lVar31 + 1;
            } while (lVar31 < uStack_1b0._4_4_);
          }
          if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
            _free(puStack_168[-1]);
          }
          fVar10 = fVar10 + *(float *)(param_1 + 1);
        } while (fVar10 < *(float *)(param_1 + 2));
        if (pppppppdStack_1c0 != pppppppdStack_1c8) {
          uVar34 = 0;
          pppppppdVar33 = pppppppdStack_1c8;
          pppppppdVar20 = pppppppdStack_1c0;
          do {
            ppppppdVar24 = pppppppdVar33[uVar34 * 3];
            ppppppdVar28 = (pppppppdVar33 + uVar34 * 3)[1];
            uVar25 = (long)ppppppdVar28 - (long)ppppppdVar24 >> 5;
            if ((ulong)param_1[3] <= uVar25) {
              uVar35 = 0;
              uVar36 = 0;
              uVar37 = 0;
              uVar38 = 0;
              uVar39 = 0;
              uVar40 = 0;
              uVar41 = 0;
              uVar42 = 0;
              uVar43 = 0;
              uVar44 = 0;
              uVar45 = 0;
              uVar46 = 0;
              uVar47 = 0;
              uVar48 = 0;
              uVar49 = 0;
              uVar50 = 0;
              dVar52 = 0.0;
              ppppppdVar17 = ppppppdVar24;
              uVar22 = uVar25;
              if (ppppppdVar28 != ppppppdVar24) {
                do {
                  pppppdVar51 = ppppppdVar17[3];
                  dVar12 = (double)CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,
                                                  CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,
                                                  uVar35))))))) +
                           (double)*ppppppdVar17 * (double)pppppdVar51;
                  uVar35 = SUB81(dVar12,0);
                  uVar36 = (undefined1)((ulong)dVar12 >> 8);
                  uVar37 = (undefined1)((ulong)dVar12 >> 0x10);
                  uVar38 = (undefined1)((ulong)dVar12 >> 0x18);
                  uVar39 = (undefined1)((ulong)dVar12 >> 0x20);
                  uVar40 = (undefined1)((ulong)dVar12 >> 0x28);
                  uVar41 = (undefined1)((ulong)dVar12 >> 0x30);
                  uVar42 = (undefined1)((ulong)dVar12 >> 0x38);
                  dVar12 = (double)CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(uVar47,
                                                  CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,
                                                  uVar43))))))) +
                           (double)pppppdVar51 * (double)ppppppdVar17[1];
                  uVar43 = SUB81(dVar12,0);
                  uVar44 = (undefined1)((ulong)dVar12 >> 8);
                  uVar45 = (undefined1)((ulong)dVar12 >> 0x10);
                  uVar46 = (undefined1)((ulong)dVar12 >> 0x18);
                  uVar47 = (undefined1)((ulong)dVar12 >> 0x20);
                  uVar48 = (undefined1)((ulong)dVar12 >> 0x28);
                  uVar49 = (undefined1)((ulong)dVar12 >> 0x30);
                  uVar50 = (undefined1)((ulong)dVar12 >> 0x38);
                  dVar52 = dVar52 + (double)pppppdVar51;
                  uVar22 = uVar22 - 1;
                  ppppppdVar17 = ppppppdVar17 + 4;
                } while (uVar22 != 0);
              }
              dVar12 = (double)CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,
                                                  CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,
                                                  uVar35))))))) * (1.0 / dVar52);
              dVar52 = (double)CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(uVar47,
                                                  CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,
                                                  uVar43))))))) * (1.0 / dVar52);
              auVar9[8] = SUB81(dVar52,0);
              auVar9._0_8_ = dVar12;
              auVar9[9] = (char)((ulong)dVar52 >> 8);
              auVar9[10] = (char)((ulong)dVar52 >> 0x10);
              auVar9[0xb] = (char)((ulong)dVar52 >> 0x18);
              auVar9[0xc] = (char)((ulong)dVar52 >> 0x20);
              auVar9[0xd] = (char)((ulong)dVar52 >> 0x28);
              auVar9[0xe] = (char)((ulong)dVar52 >> 0x30);
              auVar9[0xf] = (char)((ulong)dVar52 >> 0x38);
              fVar10 = (float)auVar9._8_8_;
              uStack_1b0 = (undefined4 *)
                           CONCAT17((char)((uint)fVar10 >> 0x18),
                                    CONCAT16((char)((uint)fVar10 >> 0x10),
                                             CONCAT15((char)((uint)fVar10 >> 8),
                                                      CONCAT14(SUB41(fVar10,0),(float)dVar12))));
              uStack_1a8._0_4_ =
                   (float)(double)ppppppdVar24[(uVar25 >> 1) * 4 + 2] +
                   (float)(double)ppppppdVar24[(uVar25 >> 1) * 4 + 2];
              uStack_1a8._4_4_ = 0xbf800000;
              uStack_1a0 = 0;
              uStack_19c = 0;
              uStack_198 = 0xffffffff;
              FUN_10940bf20(param_3,&uStack_1b0);
              pppppppdVar33 = pppppppdStack_1c8;
              pppppppdVar20 = pppppppdStack_1c0;
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 < (ulong)(((long)pppppppdVar20 - (long)pppppppdVar33 >> 3) *
                                   -0x5555555555555555));
        }
      }
      FUN_109b89104(&pppppppdStack_1c8);
      if (lStack_118 != 0) {
        piVar1 = (int *)(lStack_118 + 0x14);
        do {
          iVar5 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
        }
      }
      lStack_118 = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      if (0 < uStack_150._4_4_) {
        lVar31 = 0;
        do {
          *(undefined4 *)((long)puStack_110 + lVar31 * 4) = 0;
          lVar31 = lVar31 + 1;
        } while (lVar31 < uStack_150._4_4_);
      }
      if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
        _free(puStack_108[-1]);
      }
      return;
    }
    uVar22 = param_1[2] - *param_1;
    uVar25 = (long)uVar22 >> 4;
    if (uVar25 <= uVar34) {
      uVar25 = uVar34;
    }
    if (0x7fffffffffffffdf < uVar22) {
      uVar25 = 0x7ffffffffffffff;
    }
    if (uVar25 == 0) {
      puVar19 = (uint *)0x0;
    }
    else {
      puVar19 = param_2;
      FUN_109b88f74();
    }
    puVar2 = (undefined8 *)(uVar25 + lVar31);
    uVar11 = *(undefined8 *)param_2;
    puVar2[1] = *(undefined8 *)(param_2 + 2);
    *puVar2 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    puVar2[3] = *(undefined8 *)(param_2 + 6);
    puVar2[2] = uVar11;
    puVar30 = puVar2 + 4;
    puVar16 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    lVar31 = (long)puVar16 - (long)puVar6;
    puVar2 = (undefined8 *)((long)puVar2 + lVar31);
    puVar29 = puVar2;
    if (lVar31 != 0) {
      do {
        uVar11 = *puVar16;
        puVar29[1] = puVar16[1];
        *puVar29 = uVar11;
        uVar11 = puVar16[2];
        puVar29[3] = puVar16[3];
        puVar29[2] = uVar11;
        puVar16 = puVar16 + 4;
        puVar29 = puVar29 + 4;
      } while (puVar16 != puVar6);
      puVar16 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar30;
    param_1[2] = uVar25 + (long)puVar19 * 0x20;
    if (puVar16 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar30;
  return;
  while( true ) {
    *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar4 + -0x38);
    *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)(lVar4 + -0x40);
    *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar4 + -0x28);
    *(double *)(lVar4 + -0x10) = *(double *)(lVar4 + -0x30);
    lVar26 = lVar26 + -0x20;
    lVar21 = lVar21 + -1;
    if (lVar21 == 0) break;
LAB_109b887f8:
    lVar23 = *(long *)((long)pppppppdStack_1c8 + lVar31);
    lVar4 = lVar23 + lVar26;
    if (*(double *)(lVar4 + -0x30) <= *(double *)(lVar4 + -0x10)) goto LAB_109b88840;
  }
  lVar23 = *(long *)((long)pppppppdStack_1c8 + lVar31);
LAB_109b88840:
  puVar16 = (undefined8 *)(lStack_1e0 + uVar34 * 0x20);
  puVar2 = (undefined8 *)(lVar23 + lVar21 * 0x20);
  uVar11 = *puVar16;
  puVar2[1] = puVar16[1];
  *puVar2 = uVar11;
  uVar11 = puVar16[2];
  puVar2[3] = puVar16[3];
  puVar2[2] = uVar11;
LAB_109b888fc:
  pppppppdVar14 = pppppppdStack_1f0;
  uVar34 = uVar34 + 1;
  pppppppdVar33 = pppppppdVar20;
  pppppppdVar13 = pppppppdStack_1f8;
  pppppppdVar32 = pppppppdStack_1c0;
  if ((ulong)((long)puStack_1d8 - lStack_1e0 >> 5) <= uVar34) goto joined_r0x000109b88918;
  goto LAB_109b88710;
joined_r0x000109b88918:
  pppppppdStack_1c0 = pppppppdVar32;
  if (pppppppdVar13 == pppppppdVar14) goto LAB_109b88a20;
  if (pppppppdVar32 < pppppppdStack_1b8) {
    *pppppppdVar32 = (double ******)0x0;
    pppppppdVar32[1] = (double ******)0x0;
    pppppppdVar32[2] = (double ******)0x0;
    pppppppdVar20 = (double *******)*pppppppdVar13;
    FUN_109b89060(pppppppdVar32,pppppppdVar20,pppppppdVar13[1],
                  (long)pppppppdVar13[1] - (long)pppppppdVar20 >> 5);
    pppppppdVar32 = pppppppdVar32 + 3;
  }
  else {
    lVar31 = (long)pppppppdVar32 - (long)pppppppdStack_1c8;
    ppppppdVar24 = (double ******)((lVar31 >> 3) * -0x5555555555555555 + 1);
    if ((double ******)0xaaaaaaaaaaaaaaa < ppppppdVar24) {
      FUN_109b88fa8();
      goto LAB_109b88cd4;
    }
    lVar23 = (long)pppppppdStack_1b8 - (long)pppppppdStack_1c8 >> 3;
    ppppppdVar28 = (double ******)(lVar23 * 0x5555555555555556);
    if (ppppppdVar28 < ppppppdVar24 || (long)ppppppdVar28 - (long)ppppppdVar24 == 0) {
      ppppppdVar28 = ppppppdVar24;
    }
    if (0x555555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
      ppppppdVar28 = (double ******)0xaaaaaaaaaaaaaaa;
    }
    pppppppdStack_c8 = (double *******)&pppppppdStack_1c8;
    if (ppppppdVar28 == (double ******)0x0) {
      pppppppdVar20 = (double *******)0x0;
    }
    else {
      FUN_109b88fbc();
    }
    puVar16 = (undefined8 *)((long)ppppppdVar28 + lVar31);
    lVar31 = (long)pppppppdVar20 * 3;
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    pppppppdStack_e8 = (double *******)ppppppdVar28;
    pppppppdStack_e0 = (double *******)puVar16;
    pppppppdStack_d8 = (double *******)puVar16;
    pppppppdStack_d0 = (double *******)(ppppppdVar28 + lVar31);
    FUN_109b89060(puVar16,*pppppppdVar13,pppppppdVar13[1],
                  (long)pppppppdVar13[1] - (long)*pppppppdVar13 >> 5);
    pppppppdVar32 = (double *******)(puVar16 + 3);
    pppppppdVar33 =
         (double *******)((long)puVar16 - ((long)pppppppdStack_1c0 - (long)pppppppdStack_1c8));
    pppppppdVar20 = pppppppdStack_1c8;
    _memcpy(pppppppdVar33);
    pppppppdStack_d8 = pppppppdStack_1c8;
    pppppppdStack_d0 = pppppppdStack_1b8;
    pppppppdStack_e8 = pppppppdStack_1c8;
    pppppppdStack_e0 = pppppppdStack_1c8;
    pppppppdStack_1c8 = pppppppdVar33;
    pppppppdStack_1c0 = pppppppdVar32;
    pppppppdStack_1b8 = (double *******)(ppppppdVar28 + lVar31);
    func_0x000109b89000(&pppppppdStack_e8);
  }
  pppppppdVar13 = pppppppdVar13 + 3;
  goto joined_r0x000109b88918;
}



/* Entry: 109b883c0; end: 109b88eab;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109b886b4 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109b883c0(long *param_1,uint *param_2,undefined8 *param_3)

{
  int *piVar1;
  double *pdVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  double *******pppppppdVar12;
  double *******pppppppdVar13;
  code *pcVar14;
  uint *puVar15;
  double ******ppppppdVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  double *******pppppppdVar19;
  long lVar20;
  long lVar21;
  double ******ppppppdVar22;
  ulong uVar23;
  long lVar24;
  double ******ppppppdVar25;
  double ******ppppppdVar26;
  ulong uVar27;
  undefined8 *puVar28;
  double *******pppppppdVar29;
  long lVar30;
  double *******pppppppdVar31;
  ulong uVar32;
  undefined1 in_b0;
  undefined1 uVar33;
  undefined1 in_register_00005001;
  undefined1 uVar34;
  undefined1 in_register_00005002;
  undefined1 uVar35;
  undefined1 in_register_00005003;
  undefined1 uVar36;
  undefined1 in_register_00005004;
  undefined1 uVar37;
  undefined1 in_register_00005005;
  undefined1 uVar38;
  undefined1 in_register_00005006;
  undefined1 uVar39;
  undefined1 in_register_00005007;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  double *****pppppdVar49;
  double dVar50;
  double *******pppppppdStack_1c8;
  double *******pppppppdStack_1c0;
  double *******pppppppdStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  double *******pppppppdStack_198;
  double *******pppppppdStack_190;
  double *******pppppppdStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double *******pppppppdStack_b8;
  double *******pppppppdStack_b0;
  double *******pppppppdStack_a8;
  double *******pppppppdStack_a0;
  double *******pppppppdStack_98;
  
  param_3[1] = *param_3;
  uStack_120._0_2_ = 0;
  uStack_120._2_2_ = 0x42ff;
  puVar28 = (undefined8 *)((ulong)&uStack_120 | 8);
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_120._4_4_ = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_f4 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar15 = param_2;
  puStack_e0 = puVar28;
  puStack_d8 = &uStack_d0;
  FUN_109a8b904(param_2,0xffffffff);
  if (((uint)puVar15 & 0xff8) == 0x10) {
    uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,0x2010000);
    uStack_178 = (ushort *)&uStack_120;
    uStack_170 = 0;
    uStack_16c = 0;
    FUN_109ac9fc8(param_2,&uStack_180,6,0);
  }
  else {
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar18 = *(undefined8 **)(param_2 + 2);
      puStack_140 = (undefined8 *)((ulong)&uStack_180 | 8);
      uStack_180 = (undefined4 *)*puVar18;
      uStack_178._0_4_ = (float)puVar18[1];
      uStack_178._4_4_ = (undefined4)((ulong)puVar18[1] >> 0x20);
      uStack_168 = (undefined4)puVar18[3];
      uStack_164 = (undefined4)((ulong)puVar18[3] >> 0x20);
      uStack_170 = (undefined4)puVar18[2];
      uStack_16c = (undefined4)((ulong)puVar18[2] >> 0x20);
      uStack_158 = puVar18[5];
      uStack_160 = puVar18[4];
      lStack_148 = puVar18[7];
      uStack_150 = puVar18[6];
      puStack_138 = &uStack_130;
      uStack_130 = 0;
      uStack_128 = 0;
      if (puVar18[7] != 0) {
        piVar1 = (int *)(puVar18[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar18 + 4) < 3) {
        uStack_130 = *(undefined8 *)puVar18[9];
        uStack_128 = ((undefined8 *)puVar18[9])[1];
      }
      else {
        uStack_180 = (undefined4 *)((ulong)uStack_180 & 0xffffffff);
        func_0x000109a84868(&uStack_180);
      }
    }
    else {
      FUN_109a8a180(&uStack_180,param_2,0xffffffff);
    }
    if (lStack_e8 != 0) {
      piVar1 = (int *)(lStack_e8 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_120);
      }
    }
    if (0 < uStack_120._4_4_) {
      lVar30 = 0;
      do {
        *(undefined4 *)((long)puStack_e0 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < uStack_120._4_4_);
    }
    uStack_118 = (float)uStack_178;
    uStack_114 = uStack_178._4_4_;
    uStack_120._0_2_ = (ushort)uStack_180;
    uStack_120._2_2_ = (undefined2)((ulong)uStack_180 >> 0x10);
    uStack_108 = uStack_168;
    uStack_104 = uStack_164;
    uStack_110 = uStack_170;
    uStack_10c = uStack_16c;
    uStack_f8 = (undefined4)uStack_158;
    uStack_f4 = (undefined4)((ulong)uStack_158 >> 0x20);
    uStack_100 = (undefined4)uStack_160;
    uStack_fc = (undefined4)((ulong)uStack_160 >> 0x20);
    lStack_e8 = lStack_148;
    uStack_f0 = (undefined4)uStack_150;
    uStack_ec = (undefined4)((ulong)uStack_150 >> 0x20);
    uStack_120._4_4_ = uStack_180._4_4_;
    puVar18 = puStack_e0;
    puVar4 = puStack_d8;
    if ((puStack_d8 != &uStack_d0) &&
       (puVar18 = puVar28, puVar4 = &uStack_d0, puStack_d8 != (undefined8 *)0x0)) {
      _free(puStack_d8[-1]);
    }
    puStack_d8 = puVar4;
    puStack_e0 = puVar18;
    if (uStack_180._4_4_ < 3) {
      puVar28 = (undefined8 *)((ulong)&uStack_180 | 4);
      *puStack_d8 = *puStack_138;
      puStack_d8[1] = puStack_138[1];
      uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,0x42ff0000);
      puVar28[1] = 0;
      *puVar28 = 0;
      puVar28[3] = 0;
      puVar28[2] = 0;
      puVar28[5] = 0;
      puVar28[4] = 0;
      *(undefined8 *)((long)puVar28 + 0x34) = 0;
      *(undefined8 *)((long)puVar28 + 0x2c) = 0;
      uStack_178 = (ushort *)CONCAT44(uStack_178._4_4_,(float)uStack_178);
      if (puStack_138 != &uStack_130) {
        _free(puStack_138[-1]);
      }
    }
    else {
      puStack_e0 = puStack_140;
      puStack_d8 = puStack_138;
    }
  }
  if (((ushort)uStack_120 & 0xfff) != 0) {
    puVar17 = (undefined4 *)0x30;
    func_0x000107c2ae8c();
    *puVar17 = 1;
    uStack_180 = puVar17 + 1;
    uStack_178._0_4_ = 5.74532e-44;
    uStack_178._4_4_ = 0;
    *(undefined1 *)((long)puVar17 + 0x2d) = 0;
    *(undefined8 *)(puVar17 + 3) = 0x6e6f20726f746365;
    *(undefined8 *)(puVar17 + 1) = 0x74656420626f6c42;
    *(undefined8 *)(puVar17 + 7) = 0x69622d3820737472;
    *(undefined8 *)(puVar17 + 5) = 0x6f7070757320796c;
    *(undefined8 *)((long)puVar17 + 0x25) = 0x21736567616d6920;
    *(undefined8 *)((long)puVar17 + 0x1d) = 0x7469622d38207374;
    FUN_109ac3188(0xffffff2e,&uStack_180,&UNK_10f5a1ed3,&UNK_10f5a1eda,0x13b);
LAB_109b88cd4:
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x109b88cd8);
    (*pcVar14)();
  }
  pppppppdStack_198 = (double *******)0x0;
  pppppppdStack_190 = (double *******)0x0;
  pppppppdStack_188 = (double *******)0x0;
  fVar9 = *(float *)((long)param_1 + 0xc);
  if (fVar9 < *(float *)(param_1 + 2)) {
    puVar28 = (undefined8 *)((ulong)&uStack_180 | 4);
    do {
      uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,0x42ff0000);
      puVar28[1] = 0;
      *puVar28 = 0;
      puVar28[3] = 0;
      puVar28[2] = 0;
      puVar28[5] = 0;
      puVar28[4] = 0;
      *(undefined8 *)((long)puVar28 + 0x34) = 0;
      *(undefined8 *)((long)puVar28 + 0x2c) = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      pppppppdStack_a8 = (double *******)0x0;
      pppppppdStack_b8._0_4_ = 0x1010000;
      lStack_1b0 = CONCAT44(lStack_1b0._4_4_,0x2010000);
      uStack_1a0 = 0;
      puStack_1a8 = &uStack_180;
      puStack_140 = &uStack_178;
      puStack_138 = &uStack_130;
      pppppppdStack_b0 = (double *******)&uStack_120;
      FUN_109b59078(CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                    0x406fe00000000000,&pppppppdStack_b8,&lStack_1b0,0);
      lStack_1b0 = 0;
      puStack_1a8 = (undefined8 *)0x0;
      uStack_1a0 = 0;
      pppppppdStack_a8 = (double *******)0x0;
      pppppppdStack_b8 = (double *******)CONCAT44(pppppppdStack_b8._4_4_,0x1010000);
      pppppppdStack_1b8 = (double *******)0x0;
      pppppppdStack_1c8 = (double *******)CONCAT44(pppppppdStack_1c8._4_4_,0x1010000);
      pppppppdVar31 = (double *******)&pppppppdStack_b8;
      pppppppdStack_1c0 = (double *******)&uStack_180;
      pppppppdStack_b0 = (double *******)&uStack_120;
      (**(code **)(*param_1 + 0x80))(param_1,pppppppdVar31,&pppppppdStack_1c8,&lStack_1b0);
      pppppppdStack_1c8 = (double *******)0x0;
      pppppppdStack_1c0 = (double *******)0x0;
      pppppppdStack_1b8 = (double *******)0x0;
      if (puStack_1a8 != (undefined8 *)lStack_1b0) {
        uVar32 = 0;
LAB_109b88710:
        pppppppdVar19 = (double *******)(lStack_1b0 + uVar32 * 0x20);
        if ((long)pppppppdStack_190 - (long)pppppppdStack_198 != 0) {
          lVar30 = 0;
          lVar21 = ((long)pppppppdStack_190 - (long)pppppppdStack_198 >> 3) * -0x5555555555555555;
          do {
            lVar20 = *(long *)((long)pppppppdStack_198 + lVar30);
            pdVar2 = (double *)
                     (lVar20 + (((long *)((long)pppppppdStack_198 + lVar30))[1] - lVar20 >> 6) *
                               0x20);
            dVar50 = SQRT((pdVar2[1] - (double)pppppppdVar19[1]) *
                          (pdVar2[1] - (double)pppppppdVar19[1]) +
                          (*pdVar2 - (double)*pppppppdVar19) * (*pdVar2 - (double)*pppppppdVar19));
            if (((dVar50 < (double)*(float *)(param_1 + 4)) || (dVar50 < pdVar2[2])) ||
               (dVar50 < (double)pppppppdVar19[2])) {
              FUN_109b882c0();
              lVar21 = *(long *)((long)pppppppdStack_198 + lVar30);
              lVar24 = ((long *)((long)pppppppdStack_198 + lVar30))[1] - lVar21 >> 5;
              lVar20 = lVar24 + -1;
              if (lVar20 == 0) goto LAB_109b88840;
              lVar24 = lVar24 << 5;
              goto LAB_109b887f8;
            }
            lVar30 = lVar30 + 0x18;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        ppppppdVar16 = (double ******)0x20;
        __Znwm();
        ppppppdVar22 = ppppppdVar16 + 4;
        ppppppdVar26 = *pppppppdVar19;
        ppppppdVar16[1] = (double *****)pppppppdVar19[1];
        *ppppppdVar16 = (double *****)ppppppdVar26;
        ppppppdVar26 = pppppppdVar19[2];
        ppppppdVar16[3] = (double *****)pppppppdVar19[3];
        ppppppdVar16[2] = (double *****)ppppppdVar26;
        if (pppppppdStack_1b8 <= pppppppdStack_1c0) {
          lVar30 = (long)pppppppdStack_1c0 - (long)pppppppdStack_1c8;
          ppppppdVar26 = (double ******)((lVar30 >> 3) * -0x5555555555555555 + 1);
          if (ppppppdVar26 < (double ******)0xaaaaaaaaaaaaaab) {
            lVar21 = (long)pppppppdStack_1b8 - (long)pppppppdStack_1c8 >> 3;
            ppppppdVar25 = (double ******)(lVar21 * 0x5555555555555556);
            if (ppppppdVar25 < ppppppdVar26 || (long)ppppppdVar25 - (long)ppppppdVar26 == 0) {
              ppppppdVar25 = ppppppdVar26;
            }
            if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
              ppppppdVar25 = (double ******)0xaaaaaaaaaaaaaaa;
            }
            pppppppdStack_98 = (double *******)&pppppppdStack_1c8;
            FUN_109b88fbc();
            puVar18 = (undefined8 *)((long)ppppppdVar25 + lVar30);
            *puVar18 = ppppppdVar16;
            puVar18[1] = ppppppdVar22;
            puVar18[2] = ppppppdVar22;
            pppppppdVar29 =
                 (double *******)
                 ((long)puVar18 - ((long)pppppppdStack_1c0 - (long)pppppppdStack_1c8));
            pppppppdVar19 = pppppppdStack_1c8;
            _memcpy(pppppppdVar29);
            pppppppdStack_a8 = pppppppdStack_1c8;
            pppppppdStack_a0 = pppppppdStack_1b8;
            pppppppdStack_b8 = pppppppdStack_1c8;
            pppppppdStack_b0 = pppppppdStack_1c8;
            pppppppdStack_1c8 = pppppppdVar29;
            pppppppdStack_1c0 = (double *******)(puVar18 + 3);
            pppppppdStack_1b8 = (double *******)(ppppppdVar25 + (long)pppppppdVar31 * 3);
            func_0x000109b89000(&pppppppdStack_b8);
            pppppppdStack_1c0 = (double *******)(puVar18 + 3);
            goto LAB_109b888fc;
          }
          FUN_109b88fa8();
          goto LAB_109b88cd4;
        }
        *pppppppdStack_1c0 = ppppppdVar16;
        pppppppdStack_1c0[1] = ppppppdVar22;
        pppppppdStack_1c0[2] = ppppppdVar22;
        pppppppdVar19 = pppppppdVar31;
        pppppppdStack_1c0 = pppppppdStack_1c0 + 3;
        goto LAB_109b888fc;
      }
LAB_109b88a20:
      FUN_109b89104(&pppppppdStack_1c8);
      if (lStack_1b0 != 0) {
        puStack_1a8 = (undefined8 *)lStack_1b0;
        __ZdlPv();
      }
      if (lStack_148 != 0) {
        piVar1 = (int *)(lStack_148 + 0x14);
        do {
          iVar5 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_180);
        }
      }
      lStack_148 = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      if (0 < uStack_180._4_4_) {
        lVar30 = 0;
        do {
          *(undefined4 *)((long)puStack_140 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < uStack_180._4_4_);
      }
      if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
        _free(puStack_138[-1]);
      }
      fVar9 = fVar9 + *(float *)(param_1 + 1);
    } while (fVar9 < *(float *)(param_1 + 2));
    if (pppppppdStack_190 != pppppppdStack_198) {
      uVar32 = 0;
      pppppppdVar31 = pppppppdStack_198;
      pppppppdVar19 = pppppppdStack_190;
      do {
        ppppppdVar22 = pppppppdVar31[uVar32 * 3];
        ppppppdVar26 = (pppppppdVar31 + uVar32 * 3)[1];
        uVar23 = (long)ppppppdVar26 - (long)ppppppdVar22 >> 5;
        if ((ulong)param_1[3] <= uVar23) {
          uVar33 = 0;
          uVar34 = 0;
          uVar35 = 0;
          uVar36 = 0;
          uVar37 = 0;
          uVar38 = 0;
          uVar39 = 0;
          uVar40 = 0;
          uVar41 = 0;
          uVar42 = 0;
          uVar43 = 0;
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar47 = 0;
          uVar48 = 0;
          dVar50 = 0.0;
          ppppppdVar16 = ppppppdVar22;
          uVar27 = uVar23;
          if (ppppppdVar26 != ppppppdVar22) {
            do {
              pppppdVar49 = ppppppdVar16[3];
              dVar11 = (double)CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,
                                                  CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,
                                                  uVar33))))))) +
                       (double)*ppppppdVar16 * (double)pppppdVar49;
              uVar33 = SUB81(dVar11,0);
              uVar34 = (undefined1)((ulong)dVar11 >> 8);
              uVar35 = (undefined1)((ulong)dVar11 >> 0x10);
              uVar36 = (undefined1)((ulong)dVar11 >> 0x18);
              uVar37 = (undefined1)((ulong)dVar11 >> 0x20);
              uVar38 = (undefined1)((ulong)dVar11 >> 0x28);
              uVar39 = (undefined1)((ulong)dVar11 >> 0x30);
              uVar40 = (undefined1)((ulong)dVar11 >> 0x38);
              dVar11 = (double)CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,
                                                  CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,
                                                  uVar41))))))) +
                       (double)pppppdVar49 * (double)ppppppdVar16[1];
              uVar41 = SUB81(dVar11,0);
              uVar42 = (undefined1)((ulong)dVar11 >> 8);
              uVar43 = (undefined1)((ulong)dVar11 >> 0x10);
              uVar44 = (undefined1)((ulong)dVar11 >> 0x18);
              uVar45 = (undefined1)((ulong)dVar11 >> 0x20);
              uVar46 = (undefined1)((ulong)dVar11 >> 0x28);
              uVar47 = (undefined1)((ulong)dVar11 >> 0x30);
              uVar48 = (undefined1)((ulong)dVar11 >> 0x38);
              dVar50 = dVar50 + (double)pppppdVar49;
              uVar27 = uVar27 - 1;
              ppppppdVar16 = ppppppdVar16 + 4;
            } while (uVar27 != 0);
          }
          dVar11 = (double)CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,CONCAT13(
                                                  uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))))
                                                  )) * (1.0 / dVar50);
          dVar50 = (double)CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,CONCAT13(
                                                  uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))))
                                                  )) * (1.0 / dVar50);
          auVar8[8] = SUB81(dVar50,0);
          auVar8._0_8_ = dVar11;
          auVar8[9] = (char)((ulong)dVar50 >> 8);
          auVar8[10] = (char)((ulong)dVar50 >> 0x10);
          auVar8[0xb] = (char)((ulong)dVar50 >> 0x18);
          auVar8[0xc] = (char)((ulong)dVar50 >> 0x20);
          auVar8[0xd] = (char)((ulong)dVar50 >> 0x28);
          auVar8[0xe] = (char)((ulong)dVar50 >> 0x30);
          auVar8[0xf] = (char)((ulong)dVar50 >> 0x38);
          fVar9 = (float)auVar8._8_8_;
          uStack_180 = (undefined4 *)
                       CONCAT17((char)((uint)fVar9 >> 0x18),
                                CONCAT16((char)((uint)fVar9 >> 0x10),
                                         CONCAT15((char)((uint)fVar9 >> 8),
                                                  CONCAT14(SUB41(fVar9,0),(float)dVar11))));
          uStack_178._0_4_ =
               (float)(double)ppppppdVar22[(uVar23 >> 1) * 4 + 2] +
               (float)(double)ppppppdVar22[(uVar23 >> 1) * 4 + 2];
          uStack_178._4_4_ = 0xbf800000;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168 = 0xffffffff;
          FUN_10940bf20(param_3,&uStack_180);
          pppppppdVar31 = pppppppdStack_198;
          pppppppdVar19 = pppppppdStack_190;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < (ulong)(((long)pppppppdVar19 - (long)pppppppdVar31 >> 3) *
                               -0x5555555555555555));
    }
  }
  FUN_109b89104(&pppppppdStack_198);
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 0x14);
    do {
      iVar5 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(&uStack_120);
    }
  }
  lStack_e8 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  if (0 < uStack_120._4_4_) {
    lVar30 = 0;
    do {
      *(undefined4 *)((long)puStack_e0 + lVar30 * 4) = 0;
      lVar30 = lVar30 + 1;
    } while (lVar30 < uStack_120._4_4_);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
  return;
  while( true ) {
    *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar3 + -0x38);
    *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar3 + -0x40);
    *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar3 + -0x28);
    *(double *)(lVar3 + -0x10) = *(double *)(lVar3 + -0x30);
    lVar24 = lVar24 + -0x20;
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) break;
LAB_109b887f8:
    lVar21 = *(long *)((long)pppppppdStack_198 + lVar30);
    lVar3 = lVar21 + lVar24;
    if (*(double *)(lVar3 + -0x30) <= *(double *)(lVar3 + -0x10)) goto LAB_109b88840;
  }
  lVar21 = *(long *)((long)pppppppdStack_198 + lVar30);
LAB_109b88840:
  puVar18 = (undefined8 *)(lStack_1b0 + uVar32 * 0x20);
  puVar4 = (undefined8 *)(lVar21 + lVar20 * 0x20);
  uVar10 = *puVar18;
  puVar4[1] = puVar18[1];
  *puVar4 = uVar10;
  uVar10 = puVar18[2];
  puVar4[3] = puVar18[3];
  puVar4[2] = uVar10;
LAB_109b888fc:
  pppppppdVar13 = pppppppdStack_1c0;
  uVar32 = uVar32 + 1;
  pppppppdVar31 = pppppppdVar19;
  pppppppdVar12 = pppppppdStack_1c8;
  pppppppdVar29 = pppppppdStack_190;
  if ((ulong)((long)puStack_1a8 - lStack_1b0 >> 5) <= uVar32) goto joined_r0x000109b88918;
  goto LAB_109b88710;
joined_r0x000109b88918:
  pppppppdStack_190 = pppppppdVar29;
  if (pppppppdVar12 == pppppppdVar13) goto LAB_109b88a20;
  if (pppppppdVar29 < pppppppdStack_188) {
    *pppppppdVar29 = (double ******)0x0;
    pppppppdVar29[1] = (double ******)0x0;
    pppppppdVar29[2] = (double ******)0x0;
    pppppppdVar19 = (double *******)*pppppppdVar12;
    FUN_109b89060(pppppppdVar29,pppppppdVar19,pppppppdVar12[1],
                  (long)pppppppdVar12[1] - (long)pppppppdVar19 >> 5);
    pppppppdVar29 = pppppppdVar29 + 3;
  }
  else {
    lVar30 = (long)pppppppdVar29 - (long)pppppppdStack_198;
    ppppppdVar22 = (double ******)((lVar30 >> 3) * -0x5555555555555555 + 1);
    if ((double ******)0xaaaaaaaaaaaaaaa < ppppppdVar22) {
      FUN_109b88fa8();
      goto LAB_109b88cd4;
    }
    lVar21 = (long)pppppppdStack_188 - (long)pppppppdStack_198 >> 3;
    ppppppdVar26 = (double ******)(lVar21 * 0x5555555555555556);
    if (ppppppdVar26 < ppppppdVar22 || (long)ppppppdVar26 - (long)ppppppdVar22 == 0) {
      ppppppdVar26 = ppppppdVar22;
    }
    if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
      ppppppdVar26 = (double ******)0xaaaaaaaaaaaaaaa;
    }
    pppppppdStack_98 = (double *******)&pppppppdStack_198;
    if (ppppppdVar26 == (double ******)0x0) {
      pppppppdVar19 = (double *******)0x0;
    }
    else {
      FUN_109b88fbc();
    }
    puVar18 = (undefined8 *)((long)ppppppdVar26 + lVar30);
    lVar30 = (long)pppppppdVar19 * 3;
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = 0;
    pppppppdStack_b8 = (double *******)ppppppdVar26;
    pppppppdStack_b0 = (double *******)puVar18;
    pppppppdStack_a8 = (double *******)puVar18;
    pppppppdStack_a0 = (double *******)(ppppppdVar26 + lVar30);
    FUN_109b89060(puVar18,*pppppppdVar12,pppppppdVar12[1],
                  (long)pppppppdVar12[1] - (long)*pppppppdVar12 >> 5);
    pppppppdVar29 = (double *******)(puVar18 + 3);
    pppppppdVar31 =
         (double *******)((long)puVar18 - ((long)pppppppdStack_190 - (long)pppppppdStack_198));
    pppppppdVar19 = pppppppdStack_198;
    _memcpy(pppppppdVar31);
    pppppppdStack_a8 = pppppppdStack_198;
    pppppppdStack_a0 = pppppppdStack_188;
    pppppppdStack_b8 = pppppppdStack_198;
    pppppppdStack_b0 = pppppppdStack_198;
    pppppppdStack_198 = pppppppdVar31;
    pppppppdStack_190 = pppppppdVar29;
    pppppppdStack_188 = (double *******)(ppppppdVar26 + lVar30);
    func_0x000109b89000(&pppppppdStack_b8);
  }
  pppppppdVar12 = pppppppdVar12 + 3;
  goto joined_r0x000109b88918;
}



/* Entry: 109b88eac; end: 109b88f57;  */

void FUN_109b88eac(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  *puVar3 = &PTR_FUN_110b29808;
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar6 = param_2[2];
  puVar3[4] = param_2[3];
  puVar3[3] = uVar6;
  uVar6 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  puVar3[6] = param_2[5];
  puVar3[5] = uVar6;
  puVar3[8] = uVar10;
  puVar3[7] = uVar9;
  uVar6 = param_2[8];
  puVar3[10] = param_2[9];
  puVar3[9] = uVar6;
  puVar3[2] = uVar8;
  puVar3[1] = uVar7;
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  *puVar4 = &PTR_FUN_110b298d0;
  puVar4[2] = puVar3;
  piVar5 = (int *)(puVar4 + 1);
  *piVar5 = 1;
  *param_1 = puVar4;
  param_1[1] = puVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar2) {
      *piVar5 = *piVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_40 = puVar4;
  puStack_38 = puVar3;
  FUN_109b891bc(&puStack_40);
  return;
}



/* Entry: 109b88f58; end: 109b88f5f;  */

void FUN_109b88f58(void)

{
  return;
}



/* Entry: 109b88f60; end: 109b88f73;  */

undefined1  [16] FUN_109b88f60(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3b == 0) {
    lVar3 = (long)puVar2 << 5;
    __Znwm(lVar3);
    auVar7._8_8_ = puVar2;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  func_0x000104c4f740();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((long *)0xaaaaaaaaaaaaaaa < plVar4) {
    func_0x000104c4f740();
    plVar1 = (long *)plVar4[1];
    plVar6 = (long *)plVar4[2];
    while (plVar5 = plVar6, plVar5 != plVar1) {
      plVar6 = plVar5 + -3;
      lVar3 = *plVar6;
      plVar4[2] = (long)plVar6;
      if (lVar3 != 0) {
        plVar5[-2] = lVar3;
        __ZdlPv();
        plVar6 = (long *)plVar4[2];
      }
    }
    if (*plVar4 != 0) {
      __ZdlPv();
    }
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = plVar4;
    return auVar9;
  }
  lVar3 = (long)plVar4 * 0x18;
  __Znwm(lVar3);
  auVar8._8_8_ = plVar4;
  auVar8._0_8_ = lVar3;
  return auVar8;
}



/* Entry: 109b88f74; end: 109b88fa7;  */

undefined1  [16] FUN_109b88f74(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 >> 0x3b == 0) {
    lVar2 = param_1 << 5;
    __Znwm(lVar2);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((long *)0xaaaaaaaaaaaaaaa < plVar3) {
    func_0x000104c4f740();
    plVar1 = (long *)plVar3[1];
    plVar5 = (long *)plVar3[2];
    while (plVar4 = plVar5, plVar4 != plVar1) {
      plVar5 = plVar4 + -3;
      lVar2 = *plVar5;
      plVar3[2] = (long)plVar5;
      if (lVar2 != 0) {
        plVar4[-2] = lVar2;
        __ZdlPv();
        plVar5 = (long *)plVar3[2];
      }
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = plVar3;
    return auVar8;
  }
  lVar2 = (long)plVar3 * 0x18;
  __Znwm(lVar2);
  auVar7._8_8_ = plVar3;
  auVar7._0_8_ = lVar2;
  return auVar7;
}



/* Entry: 109b88fa8; end: 109b88fbb;  */

undefined1  [16] FUN_109b88fa8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((long *)0xaaaaaaaaaaaaaaa < plVar2) {
    func_0x000104c4f740();
    plVar1 = (long *)plVar2[1];
    plVar5 = (long *)plVar2[2];
    while (plVar4 = plVar5, plVar4 != plVar1) {
      plVar5 = plVar4 + -3;
      lVar3 = *plVar5;
      plVar2[2] = (long)plVar5;
      if (lVar3 != 0) {
        plVar4[-2] = lVar3;
        __ZdlPv();
        plVar5 = (long *)plVar2[2];
      }
    }
    if (*plVar2 != 0) {
      __ZdlPv();
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar2;
    return auVar7;
  }
  lVar3 = (long)plVar2 * 0x18;
  __Znwm(lVar3);
  auVar6._8_8_ = plVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 109b88fbc; end: 109b8905f;  */

undefined1  [16] FUN_109b88fbc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000104c4f740();
    plVar1 = (long *)param_1[1];
    plVar4 = (long *)param_1[2];
    while (plVar3 = plVar4, plVar3 != plVar1) {
      plVar4 = plVar3 + -3;
      lVar2 = *plVar4;
      param_1[2] = (long)plVar4;
      if (lVar2 != 0) {
        plVar3[-2] = lVar2;
        __ZdlPv();
        plVar4 = (long *)param_1[2];
      }
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  lVar2 = (long)param_1 * 0x18;
  __Znwm(lVar2);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 109b89060; end: 109b89103;  */

void FUN_109b89060(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3b != 0) {
      FUN_109b88f60();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109b890e8);
      (*pcVar1)();
    }
    puVar2 = param_2;
    FUN_109b88f74();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar2 * 4);
    puVar2 = param_4;
    for (; param_2 != param_3; param_2 = param_2 + 4) {
      uVar3 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar3;
      uVar3 = param_2[2];
      param_4[3] = param_2[3];
      param_4[2] = uVar3;
      param_4 = param_4 + 4;
      puVar2 = puVar2 + 4;
    }
    param_1[1] = (ulong)puVar2;
  }
  return;
}



/* Entry: 109b89104; end: 109b89177;  */

void FUN_109b89104(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 109b89178; end: 109b8917f;  */

void FUN_109b89178(void)

{
  return;
}



/* Entry: 109b89180; end: 109b891bb;  */

void FUN_109b89180(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b891b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b891bc; end: 109b8920f;  */

long * FUN_109b891bc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b89210; end: 109b8954b;  */

void FUN_109b89210(long *param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 auStack_c8 [2];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 auStack_b0 [2];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  FUN_109a8c15c(param_2,&lStack_80);
  lVar8 = lStack_78;
  lVar9 = lStack_80;
  uVar12 = param_4;
  FUN_109a8e1c4();
  lVar10 = lVar8 - lVar9;
  if (((uVar12 & 1) == 0) && (FUN_109a8c15c(param_4,&lStack_98), lStack_90 - lStack_98 != lVar10)) {
    puVar6 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    uStack_130 = (long *)(puVar6 + 1);
    uStack_128 = 0x17;
    *(undefined1 *)((long)puVar6 + 0x1b) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x203d3d202928657a;
    *(undefined8 *)(puVar6 + 1) = 0x69732e736b73616d;
    *(undefined8 *)((long)puVar6 + 0x13) = 0x736567616d696e20;
    FUN_109ac3188(0xffffff29,&uStack_130,&UNK_10f5a1ed3,&UNK_10f5a1f7c,0x54);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109b894d8);
    (*pcVar5)();
  }
  lVar10 = (lVar10 >> 5) * -0x5555555555555555;
  FUN_10940cc68(param_3,lVar10);
  if (lVar8 != lVar9) {
    lVar9 = 0;
    puVar11 = (undefined8 *)((ulong)&uStack_130 | 4);
    uVar12 = (ulong)&uStack_130 | 8;
    do {
      lStack_a8 = lStack_80 + lVar9 * 0x60;
      uStack_a0 = 0;
      auStack_b0[0] = 0x1010000;
      lVar8 = *param_3;
      uStack_f0 = uVar12;
      puStack_e8 = &uStack_e0;
      if (lStack_98 == lStack_90) {
        uStack_130 = (long *)CONCAT44(uStack_130._4_4_,0x42ff0000);
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        *(undefined8 *)((long)puVar11 + 0x34) = 0;
        *(undefined8 *)((long)puVar11 + 0x2c) = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
      }
      else {
        puVar7 = (ulong *)(lStack_98 + lVar9 * 0x60);
        uStack_128 = puVar7[1];
        uStack_130 = (long *)*puVar7;
        uStack_118 = puVar7[3];
        uStack_120 = puVar7[2];
        uStack_108 = puVar7[5];
        uStack_110 = puVar7[4];
        uStack_f8 = puVar7[7];
        uStack_100 = puVar7[6];
        uStack_e0 = 0;
        uStack_d8 = 0;
        if (puVar7[7] != 0) {
          piVar1 = (int *)(puVar7[7] + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(int *)((long)puVar7 + 4) < 3) {
          uStack_e0 = *(undefined8 *)puVar7[9];
          uStack_d8 = ((undefined8 *)puVar7[9])[1];
        }
        else {
          uStack_130 = (long *)((ulong)uStack_130 & 0xffffffff);
          func_0x000109a84868(&uStack_130);
        }
      }
      uStack_b8 = 0;
      auStack_c8[0] = 0x1010000;
      puStack_c0 = &uStack_130;
      (**(code **)(*param_1 + 0x40))(param_1,auStack_b0,lVar8 + lVar9 * 0x18,auStack_c8);
      if (uStack_f8 != 0) {
        piVar1 = (int *)(uStack_f8 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_130);
        }
      }
      uStack_f8 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      if (0 < uStack_130._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_f0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_130._4_4_);
      }
      if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
        _free(puStack_e8[-1]);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar10);
  }
  uStack_130 = &lStack_98;
  FUN_1093702c4(&uStack_130);
  uStack_130 = &lStack_80;
  FUN_1093702c4(&uStack_130);
  return;
}



/* Entry: 109b8954c; end: 109b895bf;  */

void FUN_109b8954c(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar12 = param_2;
  FUN_109a8e1c4();
  if ((int)uVar12 == 0) {
    FUN_109a91d90();
                    /* WARNING: Could not recover jumptable at 0x000109b895bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,param_2,uVar12,param_3,param_4,1);
    return;
  }
  uVar3 = *param_4;
  if ((uVar3 >> 0x1e & 1) == 0) {
    uVar6 = uVar3 >> 0x10 & 0x1f;
    if (uVar6 < 7) {
      if (uVar6 < 3) {
        if (uVar6 == 0) {
          return;
        }
        if (uVar6 == 1) {
          lVar15 = *(long *)(param_4 + 2);
          if (*(long *)(lVar15 + 0x38) != 0) {
            piVar1 = (int *)(*(long *)(lVar15 + 0x38) + 0x14);
            do {
              iVar2 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(lVar15);
            }
          }
          *(undefined8 *)(lVar15 + 0x38) = 0;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          *(undefined8 *)(lVar15 + 0x10) = 0;
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined8 *)(lVar15 + 0x20) = 0;
          if (*(int *)(lVar15 + 4) < 1) {
            return;
          }
          lVar9 = 0;
          lVar13 = *(long *)(lVar15 + 0x40);
          do {
            *(undefined4 *)(lVar13 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar15 + 4));
          return;
        }
      }
      else {
        if (uVar6 == 3) {
          puStack_40 = (undefined8 *)0x0;
          FUN_109a8ee3c(param_4,&puStack_40,uVar3 & 0xfff,0xffffffff,0,0);
          return;
        }
        if (uVar6 == 4) {
          plVar10 = *(long **)(param_4 + 2);
          plVar14 = (long *)*plVar10;
          plVar16 = (long *)plVar10[1];
          while (plVar7 = plVar16, plVar7 != plVar14) {
            plVar16 = plVar7 + -3;
            if (*plVar16 != 0) {
              plVar7[-2] = *plVar16;
              __ZdlPv();
            }
          }
          plVar10[1] = (long)plVar14;
          return;
        }
        if (uVar6 == 5) {
          plVar14 = *(long **)(param_4 + 2);
          lVar15 = *plVar14;
          lVar9 = plVar14[1];
          while (lVar9 != lVar15) {
            lVar9 = lVar9 + -0x60;
            FUN_109370334(lVar9);
          }
          plVar14[1] = lVar15;
          return;
        }
      }
    }
    else {
      if (uVar6 < 10) {
        return;
      }
      if (uVar6 == 10) {
        lVar15 = *(long *)(param_4 + 2);
        if (*(long *)(lVar15 + 0x20) != 0) {
          piVar1 = (int *)(*(long *)(lVar15 + 0x20) + 0x10);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(**(long **)(*(long *)(lVar15 + 0x20) + 8) + 0x20))();
            *(undefined8 *)(lVar15 + 0x20) = 0;
          }
        }
        if (0 < *(int *)(lVar15 + 4)) {
          lVar9 = 0;
          lVar13 = *(long *)(lVar15 + 0x30);
          do {
            *(undefined4 *)(lVar13 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar15 + 4));
        }
        *(undefined8 *)(lVar15 + 0x20) = 0;
        return;
      }
      if (uVar6 == 0xb) {
        plVar14 = *(long **)(param_4 + 2);
        lVar15 = *plVar14;
        lVar9 = plVar14[1];
        while (lVar9 != lVar15) {
          lVar9 = lVar9 + -0x50;
          FUN_109ac5638();
        }
        plVar14[1] = lVar15;
        return;
      }
      if (uVar6 == 0xd) {
        (*(undefined8 **)(param_4 + 2))[1] = **(undefined8 **)(param_4 + 2);
        return;
      }
    }
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_40 = (undefined8 *)(puVar11 + 1);
    uStack_38 = 0x1e;
    *(undefined1 *)((long)puVar11 + 0x22) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x726f707075736e75;
    *(undefined8 *)(puVar11 + 1) = 0x2f6e776f6e6b6e55;
    *(undefined8 *)((long)puVar11 + 0x1a) = 0x6570797420796172;
    *(undefined8 *)((long)puVar11 + 0x12) = 0x726120646574726f;
    FUN_109ac3188(0xffffff2b,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa4b);
  }
  else {
    puVar11 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_40 = (undefined8 *)(puVar11 + 1);
    *puStack_40 = 0x6953646578696621;
    uStack_38 = 0xc;
    *(undefined1 *)(puVar11 + 4) = 0;
    puVar11[3] = 0x2928657a;
    FUN_109ac3188(0xffffff29,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa0a);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
  (*pcVar8)();
}



/* Entry: 109b895c0; end: 109b8982b;  */

void FUN_109b895c0(long *param_1,undefined8 param_2,long *param_3,uint *param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 auStack_98 [2];
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if ((*param_4 & 0x1f0000) == 0) {
    return;
  }
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_109a8c15c(param_2,&lStack_68);
  lVar6 = lStack_60;
  lVar7 = lStack_68;
  lVar3 = lStack_60 - lStack_68 >> 5;
  lVar4 = lVar3 * -0x5555555555555555;
  if ((param_3[1] - *param_3 >> 3) * -0x5555555555555555 + lVar3 * 0x5555555555555555 == 0) {
    if ((*param_4 & 0x1f0000) == 0x50000) {
      plVar5 = *(long **)(param_4 + 2);
      func_0x000109516d68(plVar5,lVar4);
      if (lVar6 != lVar7) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          lStack_78 = lStack_68 + lVar7;
          uStack_70 = 0;
          plStack_80 = (long *)CONCAT44(plStack_80._4_4_,0x1010000);
          lStack_90 = *plVar5 + lVar7;
          auStack_98[0] = 0x2010000;
          uStack_88 = 0;
          (**(code **)(*param_1 + 0x50))(param_1,&plStack_80,*param_3 + lVar6,auStack_98);
          lVar7 = lVar7 + 0x60;
          lVar6 = lVar6 + 0x18;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      plStack_80 = &lStack_68;
      FUN_1093702c4(&plStack_80);
      return;
    }
    puVar2 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    plStack_80 = (long *)(puVar2 + 1);
    lStack_78 = 0x32;
    *(undefined8 *)(puVar2 + 3) = 0x6e696b2e73726f74;
    *(undefined8 *)(puVar2 + 1) = 0x706972637365645f;
    *(undefined2 *)(puVar2 + 0xd) = 0x5441;
    *(undefined1 *)((long)puVar2 + 0x36) = 0;
    *(undefined8 *)(puVar2 + 7) = 0x7272417475706e49;
    *(undefined8 *)(puVar2 + 5) = 0x5f203d3d20292864;
    *(undefined8 *)(puVar2 + 0xb) = 0x4d5f524f54434556;
    *(undefined8 *)(puVar2 + 9) = 0x5f4454533a3a7961;
    FUN_109ac3188(0xffffff29,&plStack_80,&DAT_10f556389,&UNK_10f5a1f7c,0x7e);
  }
  else {
    puVar2 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    plStack_80 = (long *)(puVar2 + 1);
    lStack_78 = 0x1b;
    *(undefined1 *)((long)puVar2 + 0x1f) = 0;
    *(undefined8 *)(puVar2 + 3) = 0x2928657a69732e73;
    *(undefined8 *)(puVar2 + 1) = 0x746e696f7079656b;
    *(undefined8 *)((long)puVar2 + 0x17) = 0x736567616d696e20;
    *(undefined8 *)((long)puVar2 + 0xf) = 0x3d3d202928657a69;
    FUN_109ac3188(0xffffff29,&plStack_80,&DAT_10f556389,&UNK_10f5a1f7c,0x7d);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109b897bc);
  (*pcVar1)();
}



/* Entry: 109b8982c; end: 109b898ab;  */

void FUN_109b8982c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffff2b,&puStack_30,&UNK_10f5a2052,&UNK_10f5a1f7c,0x90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109b89880);
  (*pcVar1)();
}



/* Entry: 109b898ac; end: 109b898bb;  */

undefined8 FUN_109b898ac(void)

{
  return 0;
}



/* Entry: 109b898bc; end: 109b898e7;  */

undefined4 FUN_109b898bc(long *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x70))();
  uVar1 = 6;
  if ((int)param_1 != 0) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 109b898e8; end: 109b898ef;  */

undefined8 FUN_109b898e8(void)

{
  return 1;
}



/* Entry: 109b898f0; end: 109b8ab2f;  */

void FUN_109b898f0(undefined8 param_1,double param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  code *pcVar13;
  bool bVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  double *pdVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined4 **ppuVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined4 uStack_6d0;
  double *pdStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a8;
  double *pdStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined4 uStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined4 uStack_658;
  undefined4 **ppuStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined1 *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined4 uStack_608;
  undefined8 *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined4 uStack_5e0;
  double *pdStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  double *pdStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  double *pdStack_588;
  undefined8 uStack_580;
  double adStack_578 [15];
  double adStack_500 [11];
  double dStack_4a8;
  undefined4 *puStack_4a0;
  double dStack_498;
  double dStack_490;
  double dStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  double dStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  double dStack_450;
  undefined8 uStack_448;
  double dStack_440;
  double dStack_438;
  double dStack_430;
  undefined8 uStack_428;
  double dStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  double dStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  double dStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  double dStack_388;
  double dStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  double dStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  double dStack_340;
  undefined1 auStack_330 [24];
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  double *pdStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined4 **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  double dStack_2a0;
  undefined8 uStack_298;
  double dStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double dStack_270;
  double dStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  double adStack_1f0 [9];
  double adStack_1a8 [36];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_580 = 0x900000003;
  uStack_5a0 = 0x4842424006;
  pdStack_588 = adStack_1a8 + 9;
  uStack_598 = 0;
  uStack_590 = 0;
  uVar2 = *param_3;
  if ((((uVar2 >> 0x10 != 0x4242) || (uVar3 = param_3[9], (int)uVar3 < 1)) ||
      (uVar4 = param_3[8], (int)uVar4 < 1)) ||
     (pdVar19 = *(double **)(param_3 + 6), pdVar19 == (double *)0x0)) {
    puVar15 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_4a0 = puVar15 + 1;
    dStack_498 = 1.77863632502849e-322;
    *(undefined1 *)(puVar15 + 10) = 0;
    puVar15[9] = 0x78697274;
    *(undefined8 *)(puVar15 + 3) = 0x6920746e656d7567;
    *(undefined8 *)(puVar15 + 1) = 0x7261207475706e49;
    *(undefined8 *)(puVar15 + 7) = 0x616d2064696c6176;
    *(undefined8 *)(puVar15 + 5) = 0x206120746f6e2073;
    FUN_109ac3188(0xfffffffb,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x104);
    goto LAB_109b8a9d4;
  }
  uVar5 = *param_4;
  if (((uVar5 >> 0x10 != 0x4242) || (uVar6 = param_4[9], (int)uVar6 < 1)) ||
     ((uVar7 = param_4[8], (int)uVar7 < 1 || (*(long *)(param_4 + 6) == 0)))) {
    puVar15 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_4a0 = puVar15 + 1;
    dStack_498 = 2.32210853545386e-322;
    *(undefined1 *)((long)puVar15 + 0x33) = 0;
    *(undefined8 *)(puVar15 + 3) = 0x74757074756f2074;
    *(undefined8 *)(puVar15 + 1) = 0x7372696620656854;
    *(undefined8 *)(puVar15 + 7) = 0x746f6e2073692074;
    *(undefined8 *)(puVar15 + 5) = 0x6e656d7567726120;
    *(undefined8 *)((long)puVar15 + 0x2b) = 0x78697274616d2064;
    *(undefined8 *)((long)puVar15 + 0x23) = 0x696c617620612074;
    FUN_109ac3188(0xfffffffb,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x108);
    goto LAB_109b8a9d4;
  }
  uVar1 = uVar2 & 7;
  if (uVar1 - 7 < 0xfffffffe) {
    puVar15 = (undefined4 *)0x30;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_4a0 = puVar15 + 1;
    dStack_498 = 2.12448227711736e-322;
    *(undefined1 *)((long)puVar15 + 0x2f) = 0;
    *(undefined8 *)(puVar15 + 3) = 0x73756d2073656369;
    *(undefined8 *)(puVar15 + 1) = 0x7274616d20656854;
    *(undefined8 *)(puVar15 + 7) = 0x343620726f206632;
    *(undefined8 *)(puVar15 + 5) = 0x3320657661682074;
    *(undefined8 *)((long)puVar15 + 0x27) = 0x6570797420617461;
    *(undefined8 *)((long)puVar15 + 0x1f) = 0x642066343620726f;
    FUN_109ac3188(0xffffff2e,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x10e);
    goto LAB_109b8a9d4;
  }
  if (((uVar5 ^ uVar2) & 7) != 0) {
    puVar15 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_4a0 = puVar15 + 1;
    dStack_498 = 2.22329540628561e-322;
    *(undefined1 *)((long)puVar15 + 0x31) = 0;
    *(undefined8 *)(puVar15 + 3) = 0x736563697274616d;
    *(undefined8 *)(puVar15 + 1) = 0x20656874206c6c41;
    *(undefined8 *)(puVar15 + 7) = 0x7320656874206576;
    *(undefined8 *)(puVar15 + 5) = 0x6168207473756d20;
    *(undefined8 *)((long)puVar15 + 0x29) = 0x6570797420617461;
    *(undefined8 *)((long)puVar15 + 0x21) = 0x6420656d61732065;
    FUN_109ac3188(0xffffff33,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x111);
    goto LAB_109b8a9d4;
  }
  if (param_5 == (uint *)0x0) goto LAB_109b89a98;
  uVar8 = *param_5;
  if (((uVar8 >> 0x10 != 0x4242) || (uVar9 = param_5[9], (int)uVar9 < 1)) ||
     ((uVar10 = param_5[8], (int)uVar10 < 1 || (*(long *)(param_5 + 6) == 0)))) {
    puVar15 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_4a0 = puVar15 + 1;
    dStack_498 = 1.48219693752374e-322;
    *(undefined1 *)((long)puVar15 + 0x22) = 0;
    *(undefined8 *)(puVar15 + 3) = 0x20746f6e20736920;
    *(undefined8 *)(puVar15 + 1) = 0x6e6169626f63614a;
    *(undefined8 *)((long)puVar15 + 0x1a) = 0x78697274616d2064;
    *(undefined8 *)((long)puVar15 + 0x12) = 0x696c617620612074;
    FUN_109ac3188(0xfffffffb,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x116);
    goto LAB_109b8a9d4;
  }
  if ((uVar8 & 0xff8) != 0 || ((uVar8 ^ uVar2) & 7) != 0) {
    puVar15 = (undefined4 *)0x30;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_4a0 = puVar15 + 1;
    dStack_498 = 2.07507571253324e-322;
    *(undefined1 *)((long)puVar15 + 0x2e) = 0;
    *(undefined8 *)(puVar15 + 3) = 0x6168207473756d20;
    *(undefined8 *)(puVar15 + 1) = 0x6e6169626f63614a;
    *(undefined8 *)(puVar15 + 7) = 0x4366343620726f20;
    *(undefined8 *)(puVar15 + 5) = 0x3143663233206576;
    *(undefined8 *)((long)puVar15 + 0x26) = 0x6570797461746164;
    *(undefined8 *)((long)puVar15 + 0x1e) = 0x2031436634362072;
    FUN_109ac3188(0xffffff33,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x119);
    goto LAB_109b8a9d4;
  }
  if (uVar10 == 3) {
    if (uVar9 == 9) goto LAB_109b89a98;
  }
  else if ((uVar10 == 9) && (uVar9 == 3)) {
LAB_109b89a98:
    iVar11 = 1 << (ulong)(0xfa50U >> (ulong)(uVar1 << 1) & 3);
    if (uVar3 == 1) {
      if (uVar4 == 1) {
LAB_109b89ad4:
        uVar20 = 1;
      }
      else {
        uVar8 = 0;
        if (iVar11 != 0) {
          uVar8 = (int)param_3[1] / iVar11;
        }
        uVar20 = (ulong)uVar8;
      }
      if (uVar4 + uVar3 + uVar3 * (uVar2 >> 3 & 0x1ff) == 4) {
        if ((((uVar5 & 0xff8) != 0) || (uVar6 != 3)) || (uVar7 != 3)) {
          puVar15 = (undefined4 *)0x44;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          puStack_4a0 = puVar15 + 1;
          dStack_498 = 3.11261356879985e-322;
          *(undefined8 *)(puVar15 + 3) = 0x756d207869727461;
          *(undefined8 *)(puVar15 + 1) = 0x6d2074757074754f;
          *(undefined1 *)((long)puVar15 + 0x43) = 0;
          *(undefined8 *)(puVar15 + 7) = 0x6c676e6973202c33;
          *(undefined8 *)(puVar15 + 5) = 0x7833206562207473;
          *(undefined8 *)(puVar15 + 0xb) = 0x6974616f6c66206c;
          *(undefined8 *)(puVar15 + 9) = 0x656e6e6168632d65;
          *(undefined8 *)((long)puVar15 + 0x3b) = 0x78697274616d2074;
          *(undefined8 *)((long)puVar15 + 0x33) = 0x6e696f7020676e69;
          FUN_109ac3188(0xffffff37,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x129);
          goto LAB_109b8a9d4;
        }
        if (uVar1 == 5) {
          fVar24 = *(float *)((long)pdVar19 + (long)(int)uVar20 * 4);
          param_2 = (double)(ulong)(uint)fVar24;
          dVar32 = (double)*(float *)pdVar19;
          dVar34 = (double)fVar24;
          dVar33 = (double)*(float *)((long)pdVar19 +
                                     (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3));
        }
        else {
          dVar32 = *pdVar19;
          dVar34 = pdVar19[(int)uVar20];
          dVar33 = *(double *)
                    ((long)pdVar19 + (-(uVar20 >> 0x1f) & 0xfffffff000000000 | uVar20 << 4));
        }
        dVar28 = SQRT(dVar34 * dVar34 + dVar32 * dVar32 + dVar33 * dVar33);
        if (2.220446049250313e-16 <= dVar28) {
          adStack_578[3] = 0.0;
          adStack_578[6] = 0.0;
          adStack_578[5] = 0.0;
          adStack_578[2] = 0.0;
          adStack_578[1] = 0.0;
          adStack_578[0] = 1.0;
          adStack_578[4] = 1.0;
          adStack_578[7] = 0.0;
          adStack_578[8] = 1.0;
          dVar22 = dVar28;
          ___sincos_stret();
          lVar18 = 0;
          dVar28 = 1.0 / dVar28;
          dVar29 = dVar32 * dVar28;
          dVar30 = dVar34 * dVar28;
          adStack_500[0] = dVar29 * dVar29;
          adStack_500[1] = dVar29 * dVar30;
          dVar31 = dVar33 * dVar28;
          adStack_500[2] = dVar29 * dVar31;
          adStack_500[3] = dVar29 * dVar30;
          adStack_500[4] = dVar30 * dVar30;
          adStack_500[5] = dVar30 * dVar31;
          adStack_500[6] = dVar29 * dVar31;
          adStack_500[7] = dVar30 * dVar31;
          adStack_500[8] = dVar31 * dVar31;
          adStack_1a8[0] = 0.0;
          adStack_1a8[1] = -(dVar33 * dVar28);
          adStack_1a8[2] = dVar30;
          dVar33 = 1.0 - param_2;
          adStack_1a8[3] = dVar31;
          adStack_1a8[4] = 0.0;
          adStack_1a8[5] = -(dVar32 * dVar28);
          adStack_1a8[6] = -(dVar34 * dVar28);
          adStack_1a8[7] = dVar29;
          adStack_1a8[8] = 0.0;
          uStack_2f8 = 0x300000003;
          uStack_318 = 0x1842424006;
          pdStack_300 = adStack_1f0;
          uStack_310 = 0;
          uStack_308 = 0;
          do {
            *(double *)((long)adStack_1f0 + lVar18) =
                 dVar33 * *(double *)((long)adStack_500 + lVar18) +
                 *(double *)((long)adStack_578 + lVar18) * param_2 +
                 *(double *)((long)adStack_1a8 + lVar18) * dVar22;
            lVar18 = lVar18 + 8;
          } while (lVar18 != 0x48);
          FUN_109a42cd4(0x3ff0000000000000,0,&uStack_318,param_4);
          if (param_5 != (uint *)0x0) {
            lVar18 = 0;
            puStack_4a0 = (undefined4 *)(dVar29 + dVar29);
            dStack_498 = dVar30;
            dStack_490 = dVar31;
            dStack_488 = dVar30;
            uStack_478 = 0;
            uStack_480 = 0;
            dStack_470 = dVar31;
            uStack_458 = 0;
            uStack_468 = 0;
            uStack_460 = 0;
            dStack_450 = dVar29;
            uStack_448 = 0;
            dStack_440 = dVar29;
            dStack_438 = dVar30 + dVar30;
            dStack_430 = dVar31;
            uStack_428 = 0;
            dStack_420 = dVar31;
            uStack_408 = 0;
            uStack_418 = 0;
            uStack_410 = 0;
            dStack_400 = dVar29;
            uStack_3f0 = 0;
            uStack_3f8 = 0;
            dStack_3e8 = dVar30;
            dStack_3e0 = dVar29;
            dStack_3d8 = dVar30;
            dStack_3d0 = dVar31 + dVar31;
            uStack_2b0 = 0;
            dStack_2a0 = 0.0;
            uStack_200 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_240 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_260 = 0;
            dStack_268 = 0.0;
            dStack_270 = 0.0;
            uStack_280 = 0;
            uStack_288 = 0;
            dStack_290 = 0.0;
            uStack_2a8 = 0xbff0000000000000;
            uStack_298 = 0x3ff0000000000000;
            uStack_278 = 0x3ff0000000000000;
            uStack_258 = 0xbff0000000000000;
            uStack_238 = 0xbff0000000000000;
            pdVar19 = adStack_1a8;
            uStack_228 = 0x3ff0000000000000;
            puVar16 = &uStack_2d0;
            ppuVar25 = &puStack_4a0;
            ppuStack_2b8 = (undefined4 **)0x0;
            uStack_2c0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0.0;
            do {
              pdVar19 = pdVar19 + 9;
              lVar21 = 0;
              dVar32 = dVar30;
              if (lVar18 != 1) {
                dVar32 = dVar31;
              }
              dVar34 = dVar29;
              if (lVar18 != 0) {
                dVar34 = dVar32;
              }
              do {
                *(double *)((long)pdVar19 + lVar21) =
                     (dVar22 + dVar28 * dVar33 * -2.0) * dVar34 *
                     *(double *)((long)adStack_500 + lVar21) +
                     *(double *)((long)adStack_578 + lVar21) * dVar34 * -dVar22 +
                     *(double *)((long)ppuVar25 + lVar21) * dVar28 * dVar33 +
                     *(double *)((long)adStack_1a8 + lVar21) * (param_2 - dVar28 * dVar22) * dVar34
                     + *(double *)((long)puVar16 + lVar21) * dVar22 * dVar28;
                lVar21 = lVar21 + 8;
              } while (lVar21 != 0x48);
              lVar18 = lVar18 + 1;
              puVar16 = puVar16 + 9;
              ppuVar25 = ppuVar25 + 9;
            } while (lVar18 != 3);
          }
          goto joined_r0x000109b8a620;
        }
        FUN_109a9a630(0x3ff0000000000000,0,0,0,param_4);
        if (param_5 != (uint *)0x0) {
          adStack_1a8[0x23] = 0.0;
          adStack_1a8[0x22] = 0.0;
          adStack_1a8[0x21] = 0.0;
          adStack_1a8[0x1d] = 0.0;
          adStack_1a8[0x20] = 0.0;
          adStack_1a8[0x1f] = 0.0;
          adStack_1a8[0x1b] = 0.0;
          adStack_1a8[0x1a] = 0.0;
          adStack_1a8[0x19] = 0.0;
          adStack_1a8[0x17] = 0.0;
          adStack_1a8[0x16] = 0.0;
          adStack_1a8[0x15] = 0.0;
          adStack_1a8[0x13] = 0.0;
          adStack_1a8[0x12] = 0.0;
          adStack_1a8[0x11] = 0.0;
          adStack_1a8[0xd] = 0.0;
          adStack_1a8[0xf] = 0.0;
          adStack_1a8[0xc] = 0.0;
          adStack_1a8[0xb] = 0.0;
          adStack_1a8[10] = 0.0;
          adStack_1a8[9] = 0.0;
          adStack_1a8[0x1c] = -1.0;
          adStack_1a8[0x18] = -1.0;
          adStack_1a8[0x1e] = 1.0;
          adStack_1a8[0x14] = 1.0;
          adStack_1a8[0xe] = -1.0;
          adStack_1a8[0x10] = 1.0;
          goto LAB_109b8a514;
        }
LAB_109b8a5c0:
        uVar17 = 1;
        goto LAB_109b8a5c4;
      }
    }
    else {
      if (uVar4 == 1) goto LAB_109b89ad4;
      if ((uVar3 != 3) || (uVar4 != 3)) {
joined_r0x000109b8a620:
        if (param_5 != (uint *)0x0) {
LAB_109b8a514:
          if (uVar1 == 5) {
            if (param_5[8] == (uint)uStack_580) {
              FUN_109a42cd4(0x3ff0000000000000,0,&uStack_5a0,param_5);
            }
            else {
              uStack_2b0 = uStack_580;
              uStack_2d0 = (double)CONCAT44(uStack_580._4_4_ << 2,0x42424005);
              ppuStack_2b8 = &puStack_4a0;
              uStack_2c8 = 0;
              uStack_2c0 = uStack_2c0 & 0xffffffff00000000;
              FUN_109a42cd4(0x3ff0000000000000,0,&uStack_5a0,&uStack_2d0);
              FUN_109a9a73c(&uStack_2d0,param_5);
            }
          }
          else if (param_5[8] == (uint)uStack_580) {
            FUN_109a4ad30(&uStack_5a0,param_5,0);
          }
          else {
            FUN_109a9a73c(&uStack_5a0,param_5);
          }
        }
        goto LAB_109b8a5c0;
      }
      uStack_5a8 = 0x300000003;
      uStack_5d0 = 0x300000003;
      uStack_5c8 = 0x1842424006;
      pdStack_5b0 = adStack_1a8;
      uStack_5c0 = 0;
      uStack_5b8 = 0;
      uStack_5f8 = 0x300000003;
      uStack_5f0 = 0x1842424006;
      pdStack_5d8 = adStack_1f0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      puStack_600 = &uStack_318;
      uStack_610 = 0;
      uStack_608 = 0;
      uStack_620 = 0x100000003;
      uStack_618 = 0x1842424006;
      uStack_640 = 0x842424006;
      puStack_628 = auStack_330;
      uStack_638 = 0;
      uStack_630 = 0;
      if (uVar7 == 1) {
        if (uVar6 + uVar6 * (uVar5 >> 3 & 0x1ff) != 3) {
LAB_109b8a978:
          puVar15 = (undefined4 *)0x28;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          puStack_4a0 = puVar15 + 1;
          dStack_498 = 1.58101006669199e-322;
          *(undefined1 *)(puVar15 + 9) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x756d207869727461;
          *(undefined8 *)(puVar15 + 1) = 0x6d2074757074754f;
          *(undefined8 *)(puVar15 + 7) = 0x31783320726f2033;
          *(undefined8 *)(puVar15 + 5) = 0x7831206562207473;
          FUN_109ac3188(0xffffff37,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x17b);
          goto LAB_109b8a9d4;
        }
        uVar20 = 1;
      }
      else {
        if ((((uVar5 & 0xff8) != 0) || (uVar6 != 1)) || (uVar7 != 3)) goto LAB_109b8a978;
        uVar2 = 0;
        if (iVar11 != 0) {
          uVar2 = (int)param_4[1] / iVar11;
        }
        uVar20 = (ulong)uVar2;
      }
      FUN_109a42cd4(0x3ff0000000000000,0,param_3,&uStack_5c8);
      puVar16 = &uStack_5c8;
      FUN_109a62da4(0xc059000000000000,0x4059000000000000,puVar16,3);
      if ((int)puVar16 != 0) {
        FUN_109a5dcc4(&uStack_5c8,&uStack_640,&uStack_5f0,&uStack_618,7);
        FUN_109a73754(0x3ff0000000000000,0,&uStack_5f0,&uStack_618,0,&uStack_5c8,1);
        dVar29 = adStack_1a8[8];
        dVar22 = adStack_1a8[5];
        dVar28 = adStack_1a8[4];
        dVar34 = adStack_1a8[2];
        dVar33 = adStack_1a8[1];
        dVar32 = adStack_1a8[0];
        ppuVar25 = (undefined4 **)(adStack_1a8[7] - adStack_1a8[5]);
        dVar30 = adStack_1a8[2] - adStack_1a8[6];
        dVar26 = adStack_1a8[3] - adStack_1a8[1];
        dVar35 = SQRT((dVar30 * dVar30 + (double)ppuVar25 * (double)ppuVar25 + dVar26 * dVar26) *
                      0.25);
        dVar23 = (adStack_1a8[0] + adStack_1a8[4] + adStack_1a8[8] + -1.0) * 0.5;
        dVar31 = -1.0;
        if (-1.0 <= dVar23) {
          dVar31 = dVar23;
        }
        dVar27 = 1.0;
        if (dVar23 <= 1.0) {
          dVar27 = dVar31;
        }
        dVar31 = dVar27;
        _acos();
        if (1e-05 <= dVar35) {
          dVar32 = 1.0 / (dVar35 + dVar35);
          if (param_5 != (uint *)0x0) {
            dStack_470 = 0.0;
            uStack_478 = 0x3ff0000000000000;
            dStack_400 = 0.0;
            uStack_408 = 0x3ff0000000000000;
            dStack_498 = 0.0;
            puStack_4a0 = (undefined4 *)0x0;
            dStack_488 = 0.0;
            dStack_490 = 0.0;
            uStack_480 = 0;
            uStack_468 = 0xbff0000000000000;
            uStack_460 = 0;
            uStack_458 = 0;
            dStack_450 = 0.0;
            uStack_448 = 0xbff0000000000000;
            dStack_440 = 0.0;
            dStack_438 = 0.0;
            dStack_430 = 0.0;
            uStack_428 = 0x3ff0000000000000;
            dStack_420 = 0.0;
            uStack_418 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0xbff0000000000000;
            dStack_3d0 = 0.0;
            dStack_3e8 = 0.0;
            uStack_3f0 = 0;
            dStack_3d8 = 0.0;
            dStack_3e0 = 0.0;
            dStack_3c8 = (-1.0 / dVar35) * (-(dVar32 * dVar27) / dVar35) * 0.5;
            uStack_3b8 = 0;
            uStack_3c0 = 0;
            uStack_3b0 = 0;
            uStack_398 = 0;
            uStack_3a0 = 0;
            uStack_390 = 0;
            dStack_380 = (-1.0 / dVar35) * 0.5;
            uStack_368 = 0;
            uStack_378 = 0;
            uStack_370 = 0;
            uStack_348 = 0;
            uStack_358 = 0;
            uStack_350 = 0;
            uStack_2c0 = 0;
            uStack_2c8 = 0;
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            uStack_278 = 0;
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_240 = 0;
            uStack_238 = 0x3ff0000000000000;
            adStack_500[3] = (double)ppuVar25 * dVar32;
            adStack_500[2] = 0.0;
            adStack_500[1] = 0.0;
            adStack_500[4] = 0.0;
            adStack_500[6] = 0.0;
            adStack_500[7] = dVar30 * dVar32;
            adStack_500[9] = 0.0;
            adStack_500[8] = 0.0;
            dStack_4a8 = dVar26 * dVar32;
            uStack_648 = 0x900000005;
            ppuStack_650 = &puStack_4a0;
            uStack_660 = 0;
            uStack_658 = 0;
            uStack_670 = 0x500000004;
            uStack_668 = 0x4842424006;
            puStack_678 = &uStack_2d0;
            uStack_688 = 0;
            uStack_680 = 0;
            uStack_698 = 0x400000003;
            uStack_690 = 0x2842424006;
            pdStack_6a0 = adStack_500;
            uStack_6b0 = 0;
            uStack_6a8 = 0;
            uStack_6c0 = 0x500000003;
            uStack_6b8 = 0x2042424006;
            uStack_6e0 = 0x2842424006;
            pdStack_6c8 = adStack_578;
            uStack_6d8 = 0;
            uStack_6d0 = 0;
            adStack_500[0] = dVar31;
            adStack_500[5] = dVar31;
            adStack_500[10] = dVar31;
            dStack_3a8 = dStack_3c8;
            dStack_388 = dStack_3c8;
            dStack_360 = dStack_380;
            dStack_340 = dStack_380;
            uStack_2d0 = dVar32;
            ppuStack_2b8 = ppuVar25;
            dStack_2a0 = dVar32;
            dStack_290 = dVar30;
            dStack_270 = dVar32;
            dStack_268 = dVar26;
            FUN_109a73754(0x3ff0000000000000,0x3ff0000000000000,&uStack_6b8,&uStack_690,0,
                          &uStack_6e0,0);
            FUN_109a73754(0x3ff0000000000000,0x3ff0000000000000,&uStack_6e0,&uStack_668,0,
                          &uStack_5a0,0);
            dVar12 = adStack_1a8[0x20];
            dVar27 = adStack_1a8[0x1d];
            dVar35 = adStack_1a8[0x1c];
            dVar23 = adStack_1a8[0x17];
            dVar29 = adStack_1a8[0x14];
            dVar22 = adStack_1a8[0x13];
            dVar28 = adStack_1a8[0xe];
            dVar34 = adStack_1a8[0xb];
            dVar33 = adStack_1a8[10];
            adStack_1a8[10] = adStack_1a8[0xc];
            adStack_1a8[0xb] = adStack_1a8[0xf];
            adStack_1a8[0xc] = dVar33;
            adStack_1a8[0xe] = adStack_1a8[0x10];
            adStack_1a8[0xf] = dVar34;
            adStack_1a8[0x10] = dVar28;
            adStack_1a8[0x13] = adStack_1a8[0x15];
            adStack_1a8[0x14] = adStack_1a8[0x18];
            adStack_1a8[0x15] = dVar22;
            adStack_1a8[0x17] = adStack_1a8[0x19];
            adStack_1a8[0x18] = dVar29;
            adStack_1a8[0x19] = dVar23;
            adStack_1a8[0x1c] = adStack_1a8[0x1e];
            adStack_1a8[0x1d] = adStack_1a8[0x21];
            adStack_1a8[0x1e] = dVar35;
            adStack_1a8[0x20] = adStack_1a8[0x22];
            adStack_1a8[0x21] = dVar27;
            adStack_1a8[0x22] = dVar12;
          }
          dVar32 = dVar32 * dVar31;
          dVar23 = (double)ppuVar25 * dVar32;
          dVar30 = dVar30 * dVar32;
          dVar26 = dVar26 * dVar32;
        }
        else if (dVar27 <= 0.0) {
          dVar32 = (dVar32 + 1.0) * 0.5;
          dVar23 = 0.0;
          if (0.0 <= dVar32) {
            dVar23 = dVar32;
          }
          dVar23 = SQRT(dVar23);
          dVar28 = (dVar28 + 1.0) * 0.5;
          dVar32 = 0.0;
          if (0.0 <= dVar28) {
            dVar32 = dVar28;
          }
          dVar32 = SQRT(dVar32);
          dVar30 = -dVar32;
          if (0.0 <= dVar33) {
            dVar30 = dVar32;
          }
          dVar28 = (dVar29 + 1.0) * 0.5;
          dVar33 = 0.0;
          if (0.0 <= dVar28) {
            dVar33 = dVar28;
          }
          dVar33 = SQRT(dVar33);
          dVar26 = -dVar33;
          if (0.0 <= dVar34) {
            dVar26 = dVar33;
          }
          dVar28 = ABS(dVar23);
          dVar34 = dVar26;
          if (0.0 < dVar22 == dVar30 * dVar26 <= 0.0) {
            dVar34 = -dVar26;
          }
          bVar14 = false;
          if ((dVar28 < ABS(dVar32)) && (bVar14 = false, !NAN(dVar28) && !NAN(ABS(dVar33)))) {
            bVar14 = dVar28 < ABS(dVar33);
          }
          if (bVar14) {
            dVar26 = dVar34;
          }
          dVar31 = dVar31 / SQRT(dVar30 * dVar30 + dVar23 * dVar23 + dVar26 * dVar26);
          dVar23 = dVar23 * dVar31;
          dVar30 = dVar30 * dVar31;
          dVar26 = dVar26 * dVar31;
          if (param_5 != (uint *)0x0) {
            adStack_1a8[0x23] = 0.0;
            adStack_1a8[0x22] = 0.0;
            adStack_1a8[0x21] = 0.0;
            adStack_1a8[0x20] = 0.0;
            adStack_1a8[0x1f] = 0.0;
            adStack_1a8[0x1e] = 0.0;
            adStack_1a8[0x1d] = 0.0;
            adStack_1a8[0x1c] = 0.0;
            adStack_1a8[0x1b] = 0.0;
            adStack_1a8[0x1a] = 0.0;
            adStack_1a8[0x19] = 0.0;
            adStack_1a8[0x18] = 0.0;
            adStack_1a8[0x17] = 0.0;
            adStack_1a8[0x16] = 0.0;
            adStack_1a8[0x15] = 0.0;
            adStack_1a8[0x14] = 0.0;
            adStack_1a8[0x13] = 0.0;
            adStack_1a8[0x12] = 0.0;
            adStack_1a8[0x11] = 0.0;
            adStack_1a8[0x10] = 0.0;
            adStack_1a8[0xf] = 0.0;
            adStack_1a8[0xe] = 0.0;
            adStack_1a8[0xd] = 0.0;
            adStack_1a8[0xc] = 0.0;
            adStack_1a8[0xb] = 0.0;
            adStack_1a8[10] = 0.0;
            adStack_1a8[9] = 0.0;
          }
        }
        else {
          dVar23 = 0.0;
          if (param_5 == (uint *)0x0) {
            dVar30 = 0.0;
            dVar26 = 0.0;
          }
          else {
            adStack_1a8[0x23] = 0.0;
            adStack_1a8[0x22] = 0.0;
            adStack_1a8[0x21] = 0.0;
            adStack_1a8[0x1d] = 0.0;
            adStack_1a8[0x20] = 0.0;
            adStack_1a8[0x1f] = 0.0;
            adStack_1a8[0x1b] = 0.0;
            adStack_1a8[0x1a] = 0.0;
            adStack_1a8[0x19] = 0.0;
            adStack_1a8[0x17] = 0.0;
            adStack_1a8[0x16] = 0.0;
            adStack_1a8[0x15] = 0.0;
            adStack_1a8[0x13] = 0.0;
            adStack_1a8[0x12] = 0.0;
            adStack_1a8[0x11] = 0.0;
            adStack_1a8[0xd] = 0.0;
            adStack_1a8[0xf] = 0.0;
            adStack_1a8[0xc] = 0.0;
            adStack_1a8[0xb] = 0.0;
            adStack_1a8[10] = 0.0;
            adStack_1a8[9] = 0.0;
            adStack_1a8[0x1c] = -0.5;
            adStack_1a8[0x18] = -0.5;
            adStack_1a8[0x1e] = 0.5;
            adStack_1a8[0x14] = 0.5;
            dVar30 = 0.0;
            dVar26 = 0.0;
            adStack_1a8[0xe] = -0.5;
            adStack_1a8[0x10] = 0.5;
          }
        }
        if (uVar1 == 5) {
          **(float **)(param_4 + 6) = (float)dVar23;
          *(float *)(*(long *)(param_4 + 6) + (long)(int)uVar20 * 4) = (float)dVar30;
          *(float *)(*(long *)(param_4 + 6) + (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3)
                    ) = (float)dVar26;
        }
        else {
          **(double **)(param_4 + 6) = dVar23;
          *(double *)(*(long *)(param_4 + 6) + (long)(int)uVar20 * 8) = dVar30;
          *(double *)
           (*(long *)(param_4 + 6) + (-(uVar20 >> 0x1f) & 0xfffffff000000000 | uVar20 << 4)) =
               dVar26;
        }
        goto joined_r0x000109b8a620;
      }
      FUN_109a4b71c(param_4);
      if (param_5 != (uint *)0x0) {
        FUN_109a4b71c(param_5);
      }
      uVar17 = 0;
LAB_109b8a5c4:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return;
      }
      ___stack_chk_fail(uVar17);
    }
    puVar15 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_4a0 = puVar15 + 1;
    dStack_498 = 1.77863632502849e-322;
    *(undefined1 *)(puVar15 + 10) = 0;
    puVar15[9] = 0x33783320;
    *(undefined8 *)(puVar15 + 3) = 0x73756d2078697274;
    *(undefined8 *)(puVar15 + 1) = 0x616d207475706e49;
    *(undefined8 *)(puVar15 + 7) = 0x726f20317833202c;
    *(undefined8 *)(puVar15 + 5) = 0x3378312065622074;
    FUN_109ac3188(0xffffff37,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x126);
    goto LAB_109b8a9d4;
  }
  puVar15 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar15 = 1;
  puStack_4a0 = puVar15 + 1;
  dStack_498 = 1.33397724377137e-322;
  *(undefined1 *)((long)puVar15 + 0x1f) = 0;
  *(undefined8 *)(puVar15 + 3) = 0x6562207473756d20;
  *(undefined8 *)(puVar15 + 1) = 0x6e6169626f63614a;
  *(undefined8 *)((long)puVar15 + 0x17) = 0x33783920726f2039;
  *(undefined8 *)((long)puVar15 + 0xf) = 0x7833206562207473;
  FUN_109ac3188(0xffffff37,&puStack_4a0,&UNK_10f5a210e,&UNK_10f5a2063,0x11d);
LAB_109b8a9d4:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109b8a9d8);
  (*pcVar13)();
}



/* Entry: 109b8ab30; end: 109b8c957;  */

void FUN_109b8ab30(double param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                  uint *param_11,uint *param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  code *pcVar9;
  ulong uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  double *pdVar20;
  long lVar21;
  bool bVar22;
  long lVar23;
  long lVar24;
  double *pdVar25;
  undefined8 *puVar26;
  bool bVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint *puVar31;
  long lVar32;
  long lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  ulong uStack_640;
  ulong uStack_628;
  undefined4 *puStack_570;
  double dStack_568;
  double dStack_560;
  double dStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined4 uStack_540;
  double *pdStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  double *pdStack_510;
  undefined8 uStack_508;
  uint uStack_500;
  int iStack_4fc;
  undefined8 uStack_4f8;
  undefined4 uStack_4f0;
  double *pdStack_4e8;
  uint uStack_4e0;
  uint uStack_4dc;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  double *pdStack_4c0;
  undefined8 uStack_4b8;
  uint uStack_4b0;
  int iStack_4ac;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  double *pdStack_498;
  uint uStack_490;
  uint uStack_48c;
  ulong auStack_488 [2];
  undefined4 uStack_478;
  undefined1 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  double adStack_3c8 [10];
  uint *puStack_378;
  undefined8 uStack_370;
  uint *puStack_368;
  undefined8 uStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  uint *puStack_348;
  undefined8 uStack_340;
  uint *puStack_338;
  undefined8 uStack_330;
  uint *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  double adStack_310 [21];
  double adStack_268 [2];
  double dStack_258;
  double dStack_248;
  double dStack_240;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 auStack_e8 [24];
  double adStack_d0 [3];
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_318 = 0;
  uStack_320 = 0;
  puStack_328 = (uint *)0x0;
  uStack_330 = 0;
  puStack_338 = (uint *)0x0;
  uStack_340 = 0;
  puStack_348 = (uint *)0x0;
  uStack_350 = 0;
  puStack_358 = (uint *)0x0;
  uStack_360 = 0;
  puStack_368 = (uint *)0x0;
  uStack_370 = 0;
  puStack_378 = (uint *)0x0;
  adStack_3c8[9] = 0.0;
  adStack_310[0x11] = 0.0;
  adStack_310[0x10] = 0.0;
  adStack_310[0x13] = 0.0;
  adStack_310[0x12] = 0.0;
  adStack_310[0xd] = 0.0;
  adStack_310[0xc] = 0.0;
  adStack_310[0xf] = 0.0;
  adStack_310[0xe] = 0.0;
  adStack_310[9] = 0.0;
  adStack_310[8] = 0.0;
  adStack_310[0xb] = 0.0;
  adStack_310[10] = 0.0;
  adStack_310[7] = 0.0;
  adStack_310[6] = 0.0;
  adStack_3c8[3] = 0.0;
  adStack_3c8[6] = 0.0;
  adStack_3c8[5] = 0.0;
  adStack_3c8[2] = 0.0;
  adStack_3c8[1] = 0.0;
  adStack_3c8[0] = 1.0;
  adStack_3c8[4] = 1.0;
  adStack_3c8[7] = 0.0;
  adStack_3c8[8] = 1.0;
  uStack_3e0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0xbff0000000000000;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_420 = 0;
  uStack_430 = 0x3ff0000000000000;
  uStack_428 = 0;
  uStack_4b8 = 0x300000003;
  uStack_4d8 = 0x1842424006;
  pdStack_4c0 = adStack_268;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_508 = 0x300000003;
  pdStack_510 = &dStack_130;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_530 = 0x900000003;
  uStack_528 = 0x1842424006;
  uStack_550 = 0x4842424006;
  pdStack_538 = &dStack_208;
  uStack_548 = 0;
  uStack_540 = 0;
  if (((param_2 != (uint *)0x0) && (uVar15 = *param_2, uVar15 >> 0x10 == 0x4242)) &&
     (uVar1 = param_2[9], 0 < (int)uVar1)) {
    uVar2 = param_2[8];
    uVar10 = (ulong)uVar2;
    if (((((0 < (int)uVar2) && (*(long *)(param_2 + 6) != 0)) &&
         ((*(short *)((long)param_3 + 2) == 0x4242 &&
          ((0 < (int)param_3[9] && (0 < (int)param_3[8])))))) &&
        ((*(long *)(param_3 + 6) != 0 &&
         (((((*(short *)((long)param_4 + 2) == 0x4242 && (0 < (int)param_4[9])) &&
            (0 < (int)param_4[8])) &&
           ((*(long *)(param_4 + 6) != 0 && (*(short *)((long)param_5 + 2) == 0x4242)))) &&
          (0 < (int)param_5[9])))))) &&
       ((((0 < (int)param_5[8] && (param_7 != (uint *)0x0)) &&
         ((*(long *)(param_5 + 6) != 0 &&
          (((*(short *)((long)param_7 + 2) == 0x4242 && (0 < (int)param_7[9])) &&
           (0 < (int)param_7[8])))))) && (*(long *)(param_7 + 6) != 0)))) {
      iVar3 = uVar1 + uVar1 * (uVar15 >> 3 & 0x1ff);
      uVar4 = iVar3 * uVar2;
      uVar16 = (ulong)uVar4 / 3;
      if (uVar4 != (uVar4 / 3) * 3) {
        puVar12 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_570 = puVar12 + 1;
        dStack_568 = 2.02566914794911e-322;
        *(undefined1 *)((long)puVar12 + 0x2d) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x726f6f632073756f;
        *(undefined8 *)(puVar12 + 1) = 0x656e65676f6d6f48;
        *(undefined8 *)(puVar12 + 7) = 0x20746f6e20657261;
        *(undefined8 *)(puVar12 + 5) = 0x20736574616e6964;
        *(undefined8 *)((long)puVar12 + 0x25) = 0x646574726f707075;
        *(undefined8 *)((long)puVar12 + 0x1d) = 0x7320746f6e206572;
        FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x235);
        goto LAB_109b8c744;
      }
      if (((uVar15 >> 0xe & 1) != 0) && ((uVar15 & 7) - 5 < 2)) {
        uVar15 = uVar15 & 0xff8;
        uVar14 = (uint)uVar16;
        if ((((uVar15 == 0x10) && (uVar2 == 1)) || ((uVar2 == uVar14 && (iVar3 == 3)))) ||
           ((uVar15 == 0 && ((uVar2 == 3 && (uVar1 == uVar14)))))) {
          FUN_109a38f44(uVar10,uVar1,uVar15 | 6);
          FUN_109a3907c();
          FUN_1096696f8(&uStack_320,uVar10);
          FUN_109a42cd4(0x3ff0000000000000,0,param_2,lStack_318);
          uVar15 = *param_7;
          if (((uVar15 >> 0xe & 1) == 0) || (1 < (uVar15 & 7) - 5)) {
LAB_109b8c4cc:
            puVar12 = (undefined4 *)0x30;
            func_0x000107c2ae8c();
            *puVar12 = 1;
            puStack_570 = puVar12 + 1;
            dStack_568 = 2.02566914794911e-322;
            *(undefined1 *)((long)puVar12 + 0x2d) = 0;
            *(undefined8 *)(puVar12 + 3) = 0x726f6f632073756f;
            *(undefined8 *)(puVar12 + 1) = 0x656e65676f6d6f48;
            *(undefined8 *)(puVar12 + 7) = 0x20746f6e20657261;
            *(undefined8 *)(puVar12 + 5) = 0x20736574616e6964;
            *(undefined8 *)((long)puVar12 + 0x25) = 0x646574726f707075;
            *(undefined8 *)((long)puVar12 + 0x1d) = 0x7320746f6e206572;
            FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x255);
            goto LAB_109b8c744;
          }
          uVar2 = param_7[8];
          uVar10 = (ulong)uVar2;
          uVar1 = uVar15 & 0xff8;
          if ((uVar1 == 8) && (uVar2 == 1)) {
            uVar28 = (ulong)param_7[9];
          }
          else {
            if (uVar2 == uVar14) {
              uVar5 = param_7[9];
              uVar28 = (ulong)uVar5;
              if (uVar5 + uVar5 * (uVar15 >> 3 & 0x1ff) == 2) goto LAB_109b8aec8;
            }
            if (((uVar1 != 0) || (uVar2 != 2)) || (uVar28 = uVar16, param_7[9] != uVar14))
            goto LAB_109b8c4cc;
          }
LAB_109b8aec8:
          FUN_109a38f44(uVar10,uVar28,uVar1 | 6);
          FUN_109a3907c();
          FUN_1096696f8(&uStack_330,uVar10);
          FUN_109a42cd4(0x3ff0000000000000,0,param_7,puStack_328);
          uVar15 = *param_3;
          if (1 < (uVar15 & 7) - 5) goto LAB_109b8c600;
          lVar32 = *(long *)(lStack_318 + 0x18);
          lVar33 = *(long *)(puStack_328 + 6);
          uVar1 = param_3[8];
          uVar2 = param_3[9];
          if (((uVar1 == 1) || (uVar2 == 1)) &&
             ((uVar1 + uVar1 * (uVar15 >> 3 & 0x1ff)) * uVar2 == 3)) {
            if ((uVar1 != 3) || (uVar2 != 3)) {
              uVar15 = uVar15 & 0xff8;
              goto LAB_109b8aff4;
            }
LAB_109b8af84:
            auStack_488[0] = 0x842424006;
            auStack_488[1] = 0;
            uStack_478 = 0;
            puStack_470 = auStack_e8;
            uStack_468 = 0x100000003;
            FUN_109b898f0(param_3,auStack_488,0);
            FUN_109b898f0(auStack_488,&uStack_528,&uStack_550);
            FUN_109a4ad30(param_3,&uStack_528,0);
          }
          else {
            if (uVar1 == 3) {
              if ((uVar15 & 0xff8) != 0) {
LAB_109b8c600:
                puVar12 = (undefined4 *)0x68;
                func_0x000107c2ae8c();
                *puVar12 = 1;
                puStack_570 = puVar12 + 1;
                dStack_568 = 4.79243676466009e-322;
                *(undefined8 *)(puVar12 + 0xb) = 0x74616f6c66203178;
                *(undefined8 *)(puVar12 + 9) = 0x3320726f20337831;
                *(undefined8 *)(puVar12 + 0xf) = 0x697461746f722074;
                *(undefined8 *)(puVar12 + 0xd) = 0x6e696f702d676e69;
                *(undefined8 *)(puVar12 + 0x13) = 0x783320726f202c72;
                *(undefined8 *)(puVar12 + 0x11) = 0x6f74636576206e6f;
                *(undefined8 *)(puVar12 + 0x17) = 0x697274616d206e6f;
                *(undefined8 *)(puVar12 + 0x15) = 0x697461746f722033;
                *(undefined8 *)(puVar12 + 3) = 0x6562207473756d20;
                *(undefined8 *)(puVar12 + 1) = 0x6e6f697461746f52;
                *(undefined2 *)(puVar12 + 0x19) = 0x78;
                *(undefined8 *)(puVar12 + 7) = 0x207962206465746e;
                *(undefined8 *)(puVar12 + 5) = 0x6573657270657220;
                FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x260);
                goto LAB_109b8c744;
              }
              if (uVar2 == 3) goto LAB_109b8af84;
            }
            else if (((uVar15 & 0xff8) != 0) || (uVar2 != 3)) goto LAB_109b8c600;
            uVar15 = 0;
LAB_109b8aff4:
            auStack_488[0] = CONCAT44(uVar2 * (uVar15 + 8),uVar15) | 0x42424006;
            auStack_488[1] = 0;
            uStack_478 = 0;
            puStack_470 = auStack_e8;
            uStack_468 = *(undefined8 *)(param_3 + 8);
            FUN_109a42cd4(0x3ff0000000000000,0,param_3,auStack_488);
            FUN_109b898f0(auStack_488,&uStack_528,&uStack_550);
          }
          uVar15 = *param_4;
          if ((uVar15 & 7) - 5 < 2) {
            uVar1 = param_4[8];
            uVar2 = param_4[9];
            if (((uVar1 == 1) || (uVar2 == 1)) &&
               ((uVar1 + uVar1 * (uVar15 >> 3 & 0x1ff)) * uVar2 == 3)) {
              uStack_4b0 = uVar15 & 0xff8 | 0x42424006;
              iStack_4ac = uVar2 * ((uVar15 & 0xff8) + 8);
              uStack_4a8 = 0;
              uStack_4a0 = 0;
              pdStack_498 = &dStack_220;
              uStack_490 = uVar1;
              uStack_48c = uVar2;
              FUN_109a42cd4(0x3ff0000000000000,0,param_4,&uStack_4b0);
              if (((1 < (*param_5 & 0xfff) - 5) || (param_5[8] != 3)) || (param_5[9] != 3)) {
                puVar12 = (undefined4 *)0x3c;
                func_0x000107c2ae8c();
                *puVar12 = 1;
                puStack_570 = puVar12 + 1;
                dStack_568 = 2.71736105212686e-322;
                *(undefined8 *)(puVar12 + 3) = 0x6d61726170206369;
                *(undefined8 *)(puVar12 + 1) = 0x736e697274736e49;
                *(undefined1 *)((long)puVar12 + 0x3b) = 0;
                *(undefined8 *)(puVar12 + 7) = 0x7833206562207473;
                *(undefined8 *)(puVar12 + 5) = 0x756d207372657465;
                *(undefined8 *)(puVar12 + 0xb) = 0x746e696f702d676e;
                *(undefined8 *)(puVar12 + 9) = 0x6974616f6c662033;
                *(undefined8 *)((long)puVar12 + 0x33) = 0x78697274616d2074;
                FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x27b);
                goto LAB_109b8c744;
              }
              FUN_109a42cd4(0x3ff0000000000000,0,param_5,&uStack_4d8);
              dVar34 = param_1 * dStack_248;
              if (param_1 <= 1.1920928955078125e-07) {
                dVar34 = adStack_268[0];
              }
              if (param_6 != (uint *)0x0) {
                uVar15 = *param_6;
                if ((((uVar15 >> 0x10 != 0x4242) || (uVar1 = param_6[9], (int)uVar1 < 1)) ||
                    ((uVar2 = param_6[8], (int)uVar2 < 1 ||
                     ((*(long *)(param_6 + 6) == 0 || (1 < (uVar15 & 7) - 5)))))) ||
                   (((uVar1 != 1 && (uVar2 != 1)) ||
                    ((uVar5 = (uVar1 + uVar1 * (uVar15 >> 3 & 0x1ff)) * uVar2, 0xe < uVar5 ||
                     ((1 << (ulong)(uVar5 & 0x1f) & 0x5130U) == 0)))))) {
                  puVar12 = (undefined4 *)0x74;
                  func_0x000107c2ae8c();
                  *puVar12 = 1;
                  puStack_570 = puVar12 + 1;
                  dStack_568 = 5.33590897508546e-322;
                  *(undefined8 *)(puVar12 + 0xf) = 0x7831202c31783820;
                  *(undefined8 *)(puVar12 + 0xd) = 0x2c387831202c3178;
                  *(undefined8 *)(puVar12 + 0x13) = 0x6f2034317831202c;
                  *(undefined8 *)(puVar12 + 0x11) = 0x31783231202c3231;
                  *(undefined8 *)(puVar12 + 0x17) = 0x2d676e6974616f6c;
                  *(undefined8 *)(puVar12 + 0x15) = 0x6620317834312072;
                  *(undefined8 *)(puVar12 + 0x1a) = 0x726f746365762074;
                  *(undefined8 *)(puVar12 + 0x18) = 0x6e696f702d676e69;
                  *(undefined8 *)(puVar12 + 3) = 0x6666656f63206e6f;
                  *(undefined8 *)(puVar12 + 1) = 0x6974726f74736944;
                  *(undefined8 *)(puVar12 + 7) = 0x206562207473756d;
                  *(undefined8 *)(puVar12 + 5) = 0x2073746e65696369;
                  *(undefined1 *)(puVar12 + 0x1c) = 0;
                  *(undefined8 *)(puVar12 + 0xb) = 0x35202c357831202c;
                  *(undefined8 *)(puVar12 + 9) = 0x317834202c347831;
                  FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x28f);
                  goto LAB_109b8c744;
                }
                uStack_500 = uVar15 & 0xff8 | 0x42424006;
                iStack_4fc = uVar1 * ((uVar15 & 0xff8) + 8);
                uStack_4f8 = 0;
                uStack_4f0 = 0;
                pdStack_4e8 = adStack_310 + 6;
                uStack_4e0 = uVar2;
                uStack_4dc = uVar1;
                FUN_109a42cd4(0x3ff0000000000000,0,param_6,&uStack_500);
                if ((adStack_310[0x12] != 0.0) || (adStack_310[0x13] != 0.0)) {
                  FUN_109b5c64c(adStack_3c8,&uStack_410,&uStack_460,0);
                }
              }
              uVar14 = uVar14 << 1;
              puVar31 = (uint *)(ulong)uVar14;
              if (param_8 != (uint *)0x0) {
                if ((*param_8 >> 0x10 == 0x4242) && (0 < (int)param_8[9])) {
                  uVar15 = param_8[8];
                  puVar11 = (uint *)(ulong)uVar15;
                  if ((0 < (int)uVar15) &&
                     ((((*(long *)(param_8 + 6) != 0 && (param_8[9] == 3)) &&
                       (uVar1 = *param_8 & 0xfff, uVar1 - 5 < 2)) && (uVar15 == uVar14)))) {
                    if (uVar1 == 6) {
                      puVar11 = param_8;
                      FUN_109a39788(param_8);
                    }
                    else {
                      FUN_109a38f44(puVar11,3,6);
                      FUN_109a3907c();
                    }
                    FUN_1096696f8(&uStack_340,puVar11);
                    lVar23 = *(long *)(puStack_338 + 6);
                    uStack_628 = (ulong)(uint)((int)puStack_338[1] >> 3);
                    goto LAB_109b8b2e8;
                  }
                }
                puVar12 = (undefined4 *)0x30;
                func_0x000107c2ae8c();
                *puVar12 = 1;
                puStack_570 = puVar12 + 1;
                dStack_568 = 2.07507571253324e-322;
                *(undefined1 *)((long)puVar12 + 0x2e) = 0;
                *(undefined8 *)(puVar12 + 3) = 0x206562207473756d;
                *(undefined8 *)(puVar12 + 1) = 0x20746f72642f7064;
                *(undefined8 *)(puVar12 + 7) = 0x6f702d676e697461;
                *(undefined8 *)(puVar12 + 5) = 0x6f6c662033784e32;
                *(undefined8 *)((long)puVar12 + 0x26) = 0x78697274616d2074;
                *(undefined8 *)((long)puVar12 + 0x1e) = 0x6e696f702d676e69;
                FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x2a1);
                goto LAB_109b8c744;
              }
              uStack_628 = 0;
              lVar23 = 0;
LAB_109b8b2e8:
              if (param_9 == (uint *)0x0) {
                uStack_640 = 0;
                lVar24 = 0;
              }
              else {
                if (((((*param_9 >> 0x10 != 0x4242) || ((int)param_9[9] < 1)) ||
                     (((int)param_9[8] < 1 || ((*(long *)(param_9 + 6) == 0 || (param_9[9] != 3)))))
                     ) || (uVar15 = *param_9 & 0xfff, 1 < uVar15 - 5)) || (param_9[8] != uVar14)) {
                  puVar12 = (undefined4 *)0x30;
                  func_0x000107c2ae8c();
                  *puVar12 = 1;
                  puStack_570 = puVar12 + 1;
                  dStack_568 = 1.97626258336499e-322;
                  *(undefined1 *)(puVar12 + 0xb) = 0;
                  *(undefined8 *)(puVar12 + 3) = 0x4e32206562207473;
                  *(undefined8 *)(puVar12 + 1) = 0x756d2054642f7064;
                  *(undefined8 *)(puVar12 + 7) = 0x6e696f702d676e69;
                  *(undefined8 *)(puVar12 + 5) = 0x74616f6c66203378;
                  *(undefined8 *)(puVar12 + 9) = 0x78697274616d2074;
                  FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x2b3);
                  goto LAB_109b8c744;
                }
                if (uVar15 == 6) {
                  puVar11 = param_9;
                  FUN_109a39788(param_9);
                }
                else {
                  puVar11 = puVar31;
                  FUN_109a38f44(puVar31,3,6);
                  FUN_109a3907c();
                }
                FUN_1096696f8(&uStack_350,puVar11);
                lVar24 = *(long *)(puStack_348 + 6);
                uStack_640 = (ulong)(uint)((int)puStack_348[1] >> 3);
              }
              if (param_10 == (uint *)0x0) {
                uVar10 = 0;
                pdVar25 = (double *)0x0;
              }
              else {
                if (((((*param_10 >> 0x10 != 0x4242) || ((int)param_10[9] < 1)) ||
                     ((int)param_10[8] < 1)) ||
                    ((*(long *)(param_10 + 6) == 0 || (param_10[9] != 2)))) ||
                   ((uVar15 = *param_10 & 0xfff, 1 < uVar15 - 5 || (param_10[8] != uVar14)))) {
                  puVar12 = (undefined4 *)0x30;
                  func_0x000107c2ae8c();
                  *puVar12 = 1;
                  puStack_570 = puVar12 + 1;
                  dStack_568 = 1.97626258336499e-322;
                  *(undefined1 *)(puVar12 + 0xb) = 0;
                  *(undefined8 *)(puVar12 + 3) = 0x4e32206562207473;
                  *(undefined8 *)(puVar12 + 1) = 0x756d2066642f7064;
                  *(undefined8 *)(puVar12 + 7) = 0x6e696f702d676e69;
                  *(undefined8 *)(puVar12 + 5) = 0x74616f6c66203278;
                  *(undefined8 *)(puVar12 + 9) = 0x78697274616d2074;
                  FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x2c4);
                  goto LAB_109b8c744;
                }
                if (uVar15 == 6) {
                  puVar11 = param_10;
                  FUN_109a39788(param_10);
                }
                else {
                  puVar11 = puVar31;
                  FUN_109a38f44(puVar31,2,6);
                  FUN_109a3907c();
                }
                FUN_1096696f8(&uStack_370,puVar11);
                pdVar25 = *(double **)(puStack_368 + 6);
                uVar10 = (ulong)(uint)((int)puStack_368[1] >> 3);
              }
              if (param_11 == (uint *)0x0) {
                uVar28 = 0;
                puVar26 = (undefined8 *)0x0;
              }
              else {
                if ((((*param_11 >> 0x10 != 0x4242) || ((int)param_11[9] < 1)) ||
                    (((int)param_11[8] < 1 ||
                     (((*(long *)(param_11 + 6) == 0 || (param_11[9] != 2)) ||
                      (uVar15 = *param_11 & 0xfff, 1 < uVar15 - 5)))))) || (param_11[8] != uVar14))
                {
                  puVar12 = (undefined4 *)0x30;
                  func_0x000107c2ae8c();
                  *puVar12 = 1;
                  puStack_570 = puVar12 + 1;
                  dStack_568 = 1.97626258336499e-322;
                  *(undefined1 *)(puVar12 + 0xb) = 0;
                  *(undefined8 *)(puVar12 + 3) = 0x4e32206562207473;
                  *(undefined8 *)(puVar12 + 1) = 0x756d2063642f7064;
                  *(undefined8 *)(puVar12 + 7) = 0x6e696f702d676e69;
                  *(undefined8 *)(puVar12 + 5) = 0x74616f6c66203278;
                  *(undefined8 *)(puVar12 + 9) = 0x78697274616d2074;
                  FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x2d5);
                  goto LAB_109b8c744;
                }
                if (uVar15 == 6) {
                  puVar11 = param_11;
                  FUN_109a39788(param_11);
                }
                else {
                  puVar11 = puVar31;
                  FUN_109a38f44(puVar31,2,6);
                  FUN_109a3907c();
                }
                FUN_1096696f8(&uStack_360,puVar11);
                puVar26 = *(undefined8 **)(puStack_358 + 6);
                uVar28 = (ulong)(uint)((int)puStack_358[1] >> 3);
              }
              if (param_12 == (uint *)0x0) {
                uVar18 = 0;
                pdVar13 = (double *)0x0;
LAB_109b8b5f8:
                if (2 < uVar4) {
                  uVar17 = 0;
                  do {
                    lVar19 = 0;
                    pdVar20 = (double *)(lVar32 + uVar17 * 0x18);
                    dVar54 = *pdVar20;
                    dVar56 = pdVar20[1];
                    dVar55 = pdVar20[2];
                    dVar35 = dStack_210 +
                             dVar56 * dStack_f8 + dVar54 * dStack_100 + dVar55 * dStack_f0;
                    dVar45 = 1.0 / dVar35;
                    if (dVar35 == 0.0) {
                      dVar45 = 1.0;
                    }
                    dVar36 = (dStack_220 +
                             dVar56 * dStack_128 + dVar54 * dStack_130 + dVar55 * dStack_120) *
                             dVar45;
                    dVar44 = (dStack_218 +
                             dVar56 * dStack_110 + dVar54 * dStack_118 + dVar55 * dStack_108) *
                             dVar45;
                    dVar46 = dVar44 * dVar44 + dVar36 * dVar36;
                    dVar47 = dVar46 * dVar46;
                    dVar39 = dVar46 * dVar47;
                    dVar48 = dVar36 + dVar36;
                    dVar40 = dVar44 * dVar48;
                    dVar41 = dVar46 + dVar36 * dVar48;
                    dVar49 = dVar44 + dVar44;
                    dVar42 = dVar46 + dVar44 * dVar49;
                    dVar50 = dVar46 * adStack_310[6] + 1.0 + dVar47 * adStack_310[7] +
                             dVar39 * adStack_310[10];
                    dVar51 = 1.0 / (dVar46 * adStack_310[0xb] + 1.0 + dVar47 * adStack_310[0xc] +
                                   dVar39 * adStack_310[0xd]);
                    dVar52 = dVar36 * dVar50;
                    dVar35 = dVar40 * adStack_310[8] + dVar51 * dVar52 + dVar41 * adStack_310[9] +
                             dVar46 * adStack_310[0xe] + dVar47 * adStack_310[0xf];
                    dVar53 = dVar44 * dVar50;
                    dStack_568 = 0.0;
                    puStack_570 = (undefined4 *)0x0;
                    dStack_558 = 0.0;
                    dStack_560 = 0.0;
                    dVar57 = dVar42 * adStack_310[8] + dVar51 * dVar53 + dVar40 * adStack_310[9] +
                             dVar46 * adStack_310[0x10] + dVar47 * adStack_310[0x11];
                    adStack_310[3] = dVar35;
                    adStack_310[4] = dVar57;
                    adStack_310[5] = 1.0;
                    pdVar20 = adStack_3c8;
                    do {
                      lVar21 = 0;
                      dVar58 = 0.0;
                      do {
                        dVar58 = dVar58 + *(double *)((long)adStack_310 + lVar21 + 0x18) *
                                          *(double *)((long)pdVar20 + lVar21);
                        lVar21 = lVar21 + 8;
                      } while (lVar21 != 0x18);
                      adStack_d0[lVar19] = dVar58;
                      dVar7 = adStack_d0[2];
                      dVar6 = adStack_d0[1];
                      dVar58 = adStack_d0[0];
                      lVar19 = lVar19 + 1;
                      pdVar20 = pdVar20 + 3;
                    } while (lVar19 != 3);
                    dVar59 = 1.0 / adStack_d0[2];
                    if (adStack_d0[2] == 0.0) {
                      dVar59 = 1.0;
                    }
                    dVar37 = adStack_d0[0] * dVar59;
                    pdVar20 = (double *)(lVar33 + uVar17 * 0x10);
                    pdVar20[1] = dStack_240 + dStack_248 * adStack_d0[1] * dVar59;
                    *pdVar20 = dStack_258 + dVar34 * dVar37;
                    if (((param_8 != (uint *)0x0 || param_9 != (uint *)0x0) ||
                        param_10 != (uint *)0x0) ||
                        (param_11 != (uint *)0x0 || param_12 != (uint *)0x0)) {
                      if (puVar26 != (undefined8 *)0x0) {
                        puVar26[1] = 0;
                        *puVar26 = 0x3ff0000000000000;
                        puVar26[(int)uVar28] = 0;
                        (puVar26 + (int)uVar28)[1] = 0x3ff0000000000000;
                        puVar26 = puVar26 + (-(uVar28 >> 0x1f) & 0xfffffffe00000000 | uVar28 << 1);
                      }
                      if (pdVar25 != (double *)0x0) {
                        dVar38 = param_1 * dVar37;
                        dVar43 = 0.0;
                        if (param_1 <= 1.1920928955078125e-07) {
                          dVar38 = 0.0;
                          dVar43 = dVar37;
                        }
                        *pdVar25 = dVar43;
                        pdVar25[1] = dVar38;
                        pdVar25[(int)uVar10] = 0.0;
                        (pdVar25 + (int)uVar10)[1] = adStack_d0[1] * dVar59;
                        pdVar25 = pdVar25 + (-(uVar10 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1);
                      }
                      lVar19 = 0;
                      bVar8 = true;
                      dVar37 = adStack_d0[0];
                      do {
                        bVar27 = bVar8;
                        uVar29 = 0;
                        bVar8 = true;
                        do {
                          bVar22 = bVar8;
                          (&puStack_570)[uVar29 | lVar19 << 1] =
                               (undefined4 *)
                               (-(adStack_3c8[uVar29 + 6] * dVar37) +
                               dVar7 * adStack_3c8[uVar29 + lVar19 * 3]);
                          uVar29 = 1;
                          bVar8 = false;
                        } while (bVar22);
                        lVar19 = 1;
                        bVar8 = false;
                        dVar37 = dVar6;
                      } while (bVar27);
                      dVar59 = dVar59 * dVar59;
                      puStack_570 = (undefined4 *)((double)puStack_570 * dVar59);
                      dStack_568 = dStack_568 * dVar59;
                      dStack_560 = dStack_560 * dVar59;
                      dStack_558 = dStack_558 * dVar59;
                      if (pdVar13 != (double *)0x0) {
                        dVar43 = dVar36 * dVar51;
                        dVar37 = dVar44 * dVar51;
                        *pdVar13 = dVar34 * (dVar46 * dVar43 * (double)puStack_570 + 0.0 +
                                            dVar46 * dVar37 * dStack_568);
                        pdVar20 = pdVar13 + (int)uVar18;
                        *pdVar20 = dStack_248 *
                                   (dVar46 * dVar43 * dStack_560 + 0.0 +
                                   dVar46 * dVar37 * dStack_558);
                        pdVar13[1] = dVar34 * (dVar47 * dVar43 * (double)puStack_570 + 0.0 +
                                              dVar47 * dVar37 * dStack_568);
                        pdVar20[1] = dStack_248 *
                                     (dVar47 * dVar43 * dStack_560 + 0.0 +
                                     dVar47 * dVar37 * dStack_558);
                        if (2 < (int)puStack_378[9]) {
                          pdVar13[2] = dVar34 * (dVar40 * (double)puStack_570 + 0.0 +
                                                dVar42 * dStack_568);
                          pdVar20[2] = dStack_248 *
                                       (dVar40 * dStack_560 + 0.0 + dVar42 * dStack_558);
                          pdVar13[3] = dVar34 * (dVar41 * (double)puStack_570 + 0.0 +
                                                dVar40 * dStack_568);
                          pdVar20[3] = dStack_248 *
                                       (dVar41 * dStack_560 + 0.0 + dVar40 * dStack_558);
                          if (4 < (int)puStack_378[9]) {
                            pdVar13[4] = dVar34 * (dVar39 * dVar43 * (double)puStack_570 + 0.0 +
                                                  dVar39 * dVar37 * dStack_568);
                            pdVar20[4] = dStack_248 *
                                         (dVar39 * dVar43 * dStack_560 + 0.0 +
                                         dVar39 * dVar37 * dStack_558);
                            if (5 < (int)puStack_378[9]) {
                              dVar40 = dVar51 * -(dVar51 * dVar52);
                              dVar41 = dVar51 * -(dVar51 * dVar53);
                              pdVar13[5] = dVar34 * (dVar46 * dVar40 * (double)puStack_570 + 0.0 +
                                                    dVar46 * dVar41 * dStack_568);
                              pdVar20[5] = dStack_248 *
                                           (dVar46 * dVar40 * dStack_560 + 0.0 +
                                           dVar46 * dVar41 * dStack_558);
                              pdVar13[6] = dVar34 * (dVar47 * dVar40 * (double)puStack_570 + 0.0 +
                                                    dVar47 * dVar41 * dStack_568);
                              pdVar20[6] = dStack_248 *
                                           (dVar47 * dVar40 * dStack_560 + 0.0 +
                                           dVar47 * dVar41 * dStack_558);
                              pdVar13[7] = dVar34 * (dVar39 * dVar40 * (double)puStack_570 + 0.0 +
                                                    dVar39 * dVar41 * dStack_568);
                              pdVar20[7] = dStack_248 *
                                           (dVar39 * dVar40 * dStack_560 + 0.0 +
                                           dVar39 * dVar41 * dStack_558);
                              if (8 < (int)puStack_378[9]) {
                                pdVar13[8] = dVar34 * (dVar46 * (double)puStack_570 + 0.0 +
                                                      dStack_568 * 0.0);
                                pdVar20[8] = dStack_248 *
                                             (dVar46 * dStack_560 + 0.0 + dStack_558 * 0.0);
                                pdVar13[9] = dVar34 * (dVar47 * (double)puStack_570 + 0.0 +
                                                      dStack_568 * 0.0);
                                pdVar20[9] = dStack_248 *
                                             (dVar47 * dStack_560 + 0.0 + dStack_558 * 0.0);
                                pdVar13[10] = dVar34 * ((double)puStack_570 * 0.0 + 0.0 +
                                                       dVar46 * dStack_568);
                                pdVar20[10] = dStack_248 *
                                              (dStack_560 * 0.0 + 0.0 + dVar46 * dStack_558);
                                pdVar13[0xb] = dVar34 * ((double)puStack_570 * 0.0 + 0.0 +
                                                        dVar47 * dStack_568);
                                pdVar20[0xb] = dStack_248 *
                                               (dStack_560 * 0.0 + 0.0 + dVar47 * dStack_558);
                                if (0xc < (int)puStack_378[9]) {
                                  lVar19 = 0;
                                  adStack_310[3] = dVar35;
                                  adStack_310[4] = dVar57;
                                  puVar30 = &uStack_410;
                                  adStack_310[5] = 1.0;
                                  do {
                                    lVar21 = 0;
                                    dVar39 = 0.0;
                                    do {
                                      dVar39 = dVar39 + *(double *)
                                                         ((long)adStack_310 + lVar21 + 0x18) *
                                                        *(double *)((long)puVar30 + lVar21);
                                      lVar21 = lVar21 + 8;
                                    } while (lVar21 != 0x18);
                                    adStack_d0[lVar19] = dVar39;
                                    lVar19 = lVar19 + 1;
                                    puVar30 = puVar30 + 3;
                                  } while (lVar19 != 3);
                                  lVar19 = 0;
                                  pdVar13[0xc] = dVar34 * dVar59 *
                                                 (-(adStack_d0[2] * dVar58) + dVar7 * adStack_d0[0])
                                  ;
                                  pdVar20[0xc] = dStack_248 * dVar59 *
                                                 (-(adStack_d0[2] * dVar6) + dVar7 * adStack_d0[1]);
                                  adStack_310[5] = 1.0;
                                  puVar30 = &uStack_460;
                                  do {
                                    lVar21 = 0;
                                    dVar35 = 0.0;
                                    do {
                                      dVar35 = dVar35 + *(double *)
                                                         ((long)adStack_310 + lVar21 + 0x18) *
                                                        *(double *)((long)puVar30 + lVar21);
                                      lVar21 = lVar21 + 8;
                                    } while (lVar21 != 0x18);
                                    adStack_d0[lVar19] = dVar35;
                                    lVar19 = lVar19 + 1;
                                    puVar30 = puVar30 + 3;
                                  } while (lVar19 != 3);
                                  pdVar13[0xd] = dVar34 * dVar59 *
                                                 (-(adStack_d0[2] * dVar58) + dVar7 * adStack_d0[0])
                                  ;
                                  pdVar20[0xd] = dStack_248 * dVar59 *
                                                 (-(adStack_d0[2] * dVar6) + dVar7 * adStack_d0[1]);
                                }
                              }
                            }
                          }
                        }
                        pdVar13 = pdVar13 + (-(uVar18 >> 0x1f) & 0xfffffffe00000000 | uVar18 << 1);
                      }
                      if (lVar24 != 0) {
                        lVar19 = 0;
                        adStack_d0[0] = dVar45;
                        adStack_d0[1] = 0.0;
                        adStack_d0[2] = -(dVar36 * dVar45);
                        adStack_310[3] = 0.0;
                        adStack_310[4] = dVar45;
                        adStack_310[5] = -(dVar44 * dVar45);
                        do {
                          dVar35 = *(double *)((long)adStack_d0 + lVar19);
                          dVar39 = *(double *)((long)adStack_310 + lVar19 + 0x18);
                          dVar40 = dVar49 * dVar39 + dVar35 * dVar48;
                          dVar41 = dVar40 * dVar46 * (adStack_310[7] + adStack_310[7]) +
                                   dVar40 * adStack_310[6] + dVar40 * dVar47 * adStack_310[10] * 3.0
                          ;
                          dVar42 = -(dVar51 * dVar51) *
                                   (dVar40 * dVar46 * (adStack_310[0xc] + adStack_310[0xc]) +
                                    dVar40 * adStack_310[0xb] +
                                   dVar40 * dVar47 * adStack_310[0xd] * 3.0);
                          dVar57 = dVar44 * dVar35 + dVar39 * dVar36;
                          dVar57 = dVar57 + dVar57;
                          dVar35 = dVar51 * dVar36 * dVar41 + dVar51 * dVar50 * dVar35 +
                                   dVar42 * dVar52 + dVar57 * adStack_310[8] +
                                   (dVar40 + dVar35 * dVar48) * adStack_310[9] +
                                   dVar40 * adStack_310[0xe] +
                                   dVar40 * (dVar46 + dVar46) * adStack_310[0xf];
                          dVar39 = dVar51 * dVar44 * dVar41 + dVar51 * dVar50 * dVar39 +
                                   dVar42 * dVar53 + (dVar40 + dVar39 * dVar49) * adStack_310[8] +
                                   dVar57 * adStack_310[9] + dVar40 * adStack_310[0x10] +
                                   dVar40 * (dVar46 + dVar46) * adStack_310[0x11];
                          *(double *)(lVar24 + lVar19) =
                               dVar34 * (dVar35 * (double)puStack_570 + 0.0 + dVar39 * dStack_568);
                          *(double *)
                           (lVar24 + (-(uStack_640 >> 0x1f) & 0xfffffff800000000 | uStack_640 << 3)
                           + lVar19) = dStack_248 *
                                       (dVar35 * dStack_560 + 0.0 + dVar39 * dStack_558);
                          lVar19 = lVar19 + 8;
                        } while (lVar19 != 0x18);
                        lVar24 = lVar24 + (long)((int)uStack_640 << 1) * 8;
                      }
                      if (lVar23 != 0) {
                        lVar19 = 0;
                        adStack_d0[0] =
                             dVar56 * dStack_200 + dStack_208 * dVar54 + dStack_1f8 * dVar55;
                        adStack_d0[1] =
                             dVar56 * dStack_1b8 + dStack_1c0 * dVar54 + dStack_1b0 * dVar55;
                        adStack_d0[2] =
                             dVar56 * dStack_170 + dStack_178 * dVar54 + dStack_168 * dVar55;
                        adStack_310[3] =
                             dVar56 * dStack_1e8 + dStack_1f0 * dVar54 + dStack_1e0 * dVar55;
                        adStack_310[4] =
                             dVar56 * dStack_1a0 + dStack_1a8 * dVar54 + dStack_198 * dVar55;
                        adStack_310[5] =
                             dVar56 * dStack_158 + dStack_160 * dVar54 + dStack_150 * dVar55;
                        adStack_310[0] =
                             dVar56 * dStack_1d0 + dStack_1d8 * dVar54 + dStack_1c8 * dVar55;
                        adStack_310[1] =
                             dVar56 * dStack_188 + dStack_190 * dVar54 + dStack_180 * dVar55;
                        adStack_310[2] =
                             dVar56 * dStack_140 + dStack_148 * dVar54 + dStack_138 * dVar55;
                        do {
                          dVar35 = dVar45 * (*(double *)((long)adStack_d0 + lVar19) +
                                            *(double *)((long)adStack_310 + lVar19) * -dVar36);
                          dVar54 = dVar45 * (*(double *)((long)adStack_310 + lVar19 + 0x18) +
                                            *(double *)((long)adStack_310 + lVar19) * -dVar44);
                          dVar55 = dVar49 * dVar54 + dVar35 * dVar48;
                          dVar56 = dVar55 * (adStack_310[6] +
                                             dVar46 * (adStack_310[7] + adStack_310[7]) +
                                            dVar47 * adStack_310[10] * 3.0);
                          dVar39 = dVar55 * -(dVar51 * dVar51) *
                                            (adStack_310[0xb] +
                                             dVar46 * (adStack_310[0xc] + adStack_310[0xc]) +
                                            dVar47 * adStack_310[0xd] * 3.0);
                          dVar40 = dVar44 * dVar35 + dVar54 * dVar36;
                          dVar40 = dVar40 + dVar40;
                          dVar35 = dVar51 * dVar36 * dVar56 + dVar51 * dVar50 * dVar35 +
                                   dVar39 * dVar52 + dVar40 * adStack_310[8] +
                                   (dVar55 + dVar35 * dVar48) * adStack_310[9] +
                                   dVar55 * (adStack_310[0xe] + adStack_310[0xf] * (dVar46 + dVar46)
                                            );
                          dVar54 = dVar51 * dVar44 * dVar56 + dVar51 * dVar50 * dVar54 +
                                   dVar39 * dVar53 + (dVar55 + dVar54 * dVar49) * adStack_310[8] +
                                   dVar40 * adStack_310[9] +
                                   dVar55 * (adStack_310[0x10] +
                                            adStack_310[0x11] * (dVar46 + dVar46));
                          *(double *)(lVar23 + lVar19) =
                               dVar34 * (dVar35 * (double)puStack_570 + 0.0 + dVar54 * dStack_568);
                          *(double *)
                           (lVar23 + (-(uStack_628 >> 0x1f) & 0xfffffff800000000 | uStack_628 << 3)
                           + lVar19) = dStack_248 *
                                       (dVar35 * dStack_560 + 0.0 + dVar54 * dStack_558);
                          lVar19 = lVar19 + 8;
                        } while (lVar19 != 0x18);
                        lVar23 = lVar23 + (long)((int)uStack_628 << 1) * 8;
                      }
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 != uVar16);
                }
                if (puStack_328 != param_7) {
                  FUN_109a42cd4(0x3ff0000000000000,0,puStack_328,param_7);
                }
                if (puStack_338 != param_8) {
                  FUN_109a42cd4(0x3ff0000000000000,0,puStack_338,param_8);
                }
                if (puStack_348 != param_9) {
                  FUN_109a42cd4(0x3ff0000000000000,0,puStack_348,param_9);
                }
                if (puStack_368 != param_10) {
                  FUN_109a42cd4(0x3ff0000000000000,0,puStack_368,param_10);
                }
                if (puStack_358 != param_11) {
                  FUN_109a42cd4(0x3ff0000000000000,0,puStack_358,param_11);
                }
                if (puStack_378 != param_12) {
                  FUN_109a42cd4(0x3ff0000000000000,0,puStack_378,param_12);
                }
                FUN_10966b23c(adStack_3c8 + 9);
                FUN_10966b23c(&uStack_370);
                FUN_10966b23c(&uStack_360);
                FUN_10966b23c(&uStack_350);
                FUN_10966b23c(&uStack_340);
                FUN_10966b23c(&uStack_330);
                FUN_10966b23c(&uStack_320);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
                  return;
                }
                ___stack_chk_fail();
              }
              else {
                if (((*param_12 >> 0x10 != 0x4242) || (uVar15 = param_12[9], (int)uVar15 < 1)) ||
                   (((((int)param_12[8] < 1 ||
                      ((*(long *)(param_12 + 6) == 0 || (uVar1 = *param_12 & 0xfff, 1 < uVar1 - 5)))
                      ) || (param_12[8] != uVar14)) ||
                    ((0xe < uVar15 || ((1 << (ulong)(uVar15 & 0x1f) & 0x5134U) == 0)))))) {
                  puVar12 = (undefined4 *)0x50;
                  func_0x000107c2ae8c();
                  *puVar12 = 1;
                  puStack_570 = puVar12 + 1;
                  dStack_568 = 3.65608577922522e-322;
                  *(undefined8 *)(puVar12 + 7) = 0x38784e32202c3231;
                  *(undefined8 *)(puVar12 + 5) = 0x784e32202c343178;
                  *(undefined8 *)(puVar12 + 0xb) = 0x20726f2034784e32;
                  *(undefined8 *)(puVar12 + 9) = 0x202c35784e32202c;
                  *(undefined8 *)(puVar12 + 0xf) = 0x6f702d676e697461;
                  *(undefined8 *)(puVar12 + 0xd) = 0x6f6c662032784e32;
                  *(undefined8 *)((long)puVar12 + 0x46) = 0x78697274616d2074;
                  *(undefined8 *)((long)puVar12 + 0x3e) = 0x6e696f702d676e69;
                  *(undefined1 *)((long)puVar12 + 0x4e) = 0;
                  *(undefined8 *)(puVar12 + 3) = 0x4e32206562207473;
                  *(undefined8 *)(puVar12 + 1) = 0x756d2066642f7064;
                  FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x2e6);
                  goto LAB_109b8c744;
                }
                if (param_6 != (uint *)0x0) {
                  if (uVar1 == 6) {
                    puVar31 = param_12;
                    FUN_109a39788(param_12);
                  }
                  else {
                    FUN_109a38f44(puVar31,uVar15,6);
                    FUN_109a3907c();
                  }
                  FUN_1096696f8(adStack_3c8 + 9,puVar31);
                  pdVar13 = *(double **)(puStack_378 + 6);
                  uVar18 = (ulong)(uint)((int)puStack_378[1] >> 3);
                  goto LAB_109b8b5f8;
                }
              }
              puVar12 = (undefined4 *)0x2c;
              func_0x000107c2ae8c();
              *puVar12 = 1;
              puStack_570 = puVar12 + 1;
              dStack_568 = 1.77863632502849e-322;
              *(undefined1 *)(puVar12 + 10) = 0;
              puVar12[9] = 0x746f6e20;
              *(undefined8 *)(puVar12 + 3) = 0x554e207369207366;
              *(undefined8 *)(puVar12 + 1) = 0x66656f4374736964;
              *(undefined8 *)(puVar12 + 7) = 0x7369206b64706420;
              *(undefined8 *)(puVar12 + 5) = 0x656c696877204c4c;
              FUN_109ac3188(0xffffffe5,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x2e9);
              goto LAB_109b8c744;
            }
          }
          puVar12 = (undefined4 *)0x40;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          puStack_570 = puVar12 + 1;
          dStack_568 = 2.91498731046335e-322;
          *(undefined8 *)(puVar12 + 3) = 0x74636576206e6f69;
          *(undefined8 *)(puVar12 + 1) = 0x74616c736e617254;
          *(undefined1 *)((long)puVar12 + 0x3f) = 0;
          *(undefined8 *)(puVar12 + 7) = 0x6f20337831206562;
          *(undefined8 *)(puVar12 + 5) = 0x207473756d20726f;
          *(undefined8 *)(puVar12 + 0xb) = 0x702d676e6974616f;
          *(undefined8 *)(puVar12 + 9) = 0x6c66203178332072;
          *(undefined8 *)((long)puVar12 + 0x37) = 0x726f746365762074;
          *(undefined8 *)((long)puVar12 + 0x2f) = 0x6e696f702d676e69;
          FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x274);
          goto LAB_109b8c744;
        }
      }
      puVar12 = (undefined4 *)0x30;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      puStack_570 = puVar12 + 1;
      dStack_568 = 2.02566914794911e-322;
      *(undefined1 *)((long)puVar12 + 0x2d) = 0;
      *(undefined8 *)(puVar12 + 3) = 0x726f6f632073756f;
      *(undefined8 *)(puVar12 + 1) = 0x656e65676f6d6f48;
      *(undefined8 *)(puVar12 + 7) = 0x20746f6e20657261;
      *(undefined8 *)(puVar12 + 5) = 0x20736574616e6964;
      *(undefined8 *)((long)puVar12 + 0x25) = 0x646574726f707075;
      *(undefined8 *)((long)puVar12 + 0x1d) = 0x7320746f6e206572;
      FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x246);
      goto LAB_109b8c744;
    }
  }
  puVar12 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *puVar12 = 1;
  puStack_570 = puVar12 + 1;
  dStack_568 = 2.32210853545386e-322;
  *(undefined1 *)((long)puVar12 + 0x33) = 0;
  *(undefined8 *)(puVar12 + 3) = 0x2064657269757165;
  *(undefined8 *)(puVar12 + 1) = 0x7220666f20656e4f;
  *(undefined8 *)(puVar12 + 7) = 0x746f6e2073692073;
  *(undefined8 *)(puVar12 + 5) = 0x746e656d75677261;
  *(undefined8 *)((long)puVar12 + 0x2b) = 0x78697274616d2064;
  *(undefined8 *)((long)puVar12 + 0x23) = 0x696c617620612074;
  FUN_109ac3188(0xfffffffb,&puStack_570,&UNK_10f5a22c1,&UNK_10f5a2063,0x22f);
LAB_109b8c744:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109b8c748);
  (*pcVar9)();
}



/* Entry: 109b8c958; end: 109b8d8fb;  */

void FUN_109b8c958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,uint *param_9,
                  uint *param_10,int param_11)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 **ppuVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  ulong *puVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  undefined8 *puVar21;
  long lVar22;
  double *pdVar23;
  double *pdVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  ulong uStack_1150;
  ulong uStack_1148;
  ulong uStack_1140;
  ulong uStack_1138;
  ulong uStack_1130;
  ulong uStack_1128;
  ulong uStack_1120;
  undefined8 *puStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  uint uStack_10f8;
  undefined4 uStack_10f4;
  undefined8 uStack_10f0;
  undefined4 uStack_10e8;
  ulong uStack_10e0;
  undefined4 uStack_10d8;
  undefined4 uStack_10d4;
  uint uStack_10d0;
  undefined4 uStack_10cc;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  ulong uStack_10b8;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  uint uStack_10a8;
  undefined4 uStack_10a4;
  undefined8 uStack_10a0;
  undefined4 uStack_1098;
  ulong uStack_1090;
  undefined4 uStack_1088;
  undefined4 uStack_1084;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  ulong uStack_1070;
  ulong uStack_1068;
  ulong uStack_1060;
  ulong uStack_1058;
  ulong uStack_1050;
  ulong uStack_1048;
  ulong uStack_1040;
  undefined8 *puStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  ulong uStack_1010;
  ulong uStack_1008;
  ulong uStack_1000;
  ulong uStack_ff8;
  ulong uStack_ff0;
  ulong uStack_fe8;
  ulong uStack_fe0;
  undefined8 *puStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  ulong uStack_fc0;
  undefined8 uStack_fb8;
  uint *puStack_fb0;
  uint *puStack_fa8;
  undefined1 *puStack_fa0;
  code *pcStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined1 auStack_f70 [40];
  undefined1 auStack_f48 [40];
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  ulong uStack_f10;
  undefined4 **ppuStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  ulong uStack_ee0;
  undefined4 **ppuStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined4 uStack_eb8;
  undefined4 uStack_eb4;
  undefined4 **ppuStack_eb0;
  undefined8 uStack_ea8;
  undefined1 auStack_ea0 [40];
  undefined1 auStack_e78 [40];
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined4 uStack_e40;
  undefined1 *puStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined4 uStack_e18;
  undefined1 *puStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined4 uStack_df0;
  double *pdStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined4 uStack_dc8;
  undefined1 *puStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined4 uStack_da0;
  undefined1 *puStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined4 uStack_d78;
  undefined8 *puStack_d70;
  undefined8 uStack_d68;
  ulong auStack_d60 [2];
  undefined4 uStack_d50;
  double *pdStack_d48;
  undefined8 uStack_d40;
  ulong auStack_d38 [2];
  undefined4 uStack_d28;
  undefined1 *puStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined4 uStack_d00;
  undefined1 *puStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined4 uStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined4 uStack_cb0;
  undefined1 *puStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  long lStack_c70;
  undefined8 uStack_c68;
  long lStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  long lStack_c40;
  uint auStack_c38 [2];
  long lStack_c30;
  double adStack_c28 [2];
  undefined4 uStack_c18;
  undefined1 *puStack_c10;
  undefined8 uStack_c08;
  undefined4 *puStack_c00;
  undefined8 uStack_bf8;
  undefined4 uStack_bf0;
  double *pdStack_be8;
  undefined8 uStack_be0;
  undefined1 auStack_7e0 [96];
  undefined4 *puStack_780;
  undefined8 uStack_778;
  undefined4 uStack_770;
  undefined4 **ppuStack_768;
  undefined8 uStack_760;
  undefined4 *puStack_720;
  double dStack_718;
  undefined4 uStack_710;
  undefined1 *puStack_708;
  double dStack_700;
  undefined8 uStack_6f8;
  double dStack_6f0;
  double dStack_6e8;
  undefined1 auStack_2a0 [24];
  double adStack_288 [3];
  undefined1 auStack_270 [8];
  double dStack_268;
  double dStack_260;
  double adStack_258 [2];
  double dStack_248;
  double dStack_230;
  undefined1 auStack_210 [72];
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [72];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [72];
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c30 = 0;
  auStack_c38[0] = 0;
  auStack_c38[1] = 0;
  puStack_cd0 = &uStack_138;
  lStack_c40 = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c58 = 0;
  lStack_c60 = 0;
  uStack_c68 = 0;
  lStack_c70 = 0;
  uStack_c78 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0x3ff0000000000000;
  uStack_118 = 0x3ff0000000000000;
  uStack_100 = 0;
  uStack_f8 = 0x3ff0000000000000;
  uStack_ca0 = 0x300000003;
  uStack_cc0 = 0x1842424006;
  puStack_ca8 = auStack_f0;
  uStack_cb8 = 0;
  uStack_cb0 = 0;
  uStack_cc8 = 0x300000003;
  uStack_ce8 = 0x1842424006;
  uStack_ce0 = 0;
  uStack_cd8 = 0;
  uStack_cf0 = 0x300000003;
  uStack_d10 = 0x1842424006;
  puStack_cf8 = auStack_180;
  uStack_d08 = 0;
  uStack_d00 = 0;
  uStack_d18 = 0x100000003;
  auStack_d38[0] = 0x842424006;
  puStack_e38 = auStack_2a0;
  auStack_d38[1] = 0;
  uStack_d28 = 0;
  uStack_d40 = 0x100000003;
  auStack_d60[0] = 0x842424006;
  auStack_d60[1] = 0;
  uStack_d50 = 0;
  uStack_d68 = 0x300000001;
  uStack_d88 = 0x1842424006;
  puStack_d70 = &uStack_c98;
  uStack_d80 = 0;
  uStack_d78 = 0;
  uStack_d90 = 0x300000003;
  uStack_db8 = 0x300000003;
  uStack_db0 = 0x1842424006;
  puStack_d98 = auStack_1c8;
  uStack_da8 = 0;
  uStack_da0 = 0;
  uStack_de0 = 0x300000003;
  uStack_dd8 = 0x1842424006;
  puStack_dc0 = auStack_210;
  uStack_dd0 = 0;
  uStack_dc8 = 0;
  uStack_e08 = 0x100000003;
  uStack_e00 = 0x1842424006;
  pdStack_de8 = adStack_258;
  uStack_df8 = 0;
  uStack_df0 = 0;
  puStack_e10 = auStack_270;
  uStack_e20 = 0;
  uStack_e18 = 0;
  uStack_e30 = 0x100000006;
  uStack_e28 = 0x842424006;
  uStack_e50 = 0x842424006;
  uStack_e48 = 0;
  uStack_e40 = 0;
  pdStack_d48 = adStack_288;
  puStack_d20 = puStack_e38;
  if ((((((((param_5 == 0) || (*(short *)(param_5 + 2) != 0x4242)) ||
          (uVar26 = *(uint *)(param_5 + 0x24), (int)uVar26 < 1)) ||
         (((uVar3 = *(uint *)(param_5 + 0x20), (int)uVar3 < 1 || (param_6 == 0)) ||
          ((*(long *)(param_5 + 0x18) == 0 ||
           ((*(short *)(param_6 + 2) != 0x4242 || (*(int *)(param_6 + 0x24) < 1)))))))) ||
        (*(int *)(param_6 + 0x20) < 1)) ||
       ((((((param_7 == 0 || (*(long *)(param_6 + 0x18) == 0)) ||
           (*(short *)(param_7 + 2) != 0x4242)) ||
          ((*(int *)(param_7 + 0x24) < 1 || (*(int *)(param_7 + 0x20) < 1)))) ||
         (param_9 == (uint *)0x0)) ||
        ((*(long *)(param_7 + 0x18) == 0 || (*(short *)((long)param_9 + 2) != 0x4242)))))) ||
      ((((int)param_9[9] < 1 ||
        ((((int)param_9[8] < 1 || (param_10 == (uint *)0x0)) || (*(long *)(param_9 + 6) == 0)))) ||
       (((*(short *)((long)param_10 + 2) != 0x4242 || ((int)param_10[9] < 1)) ||
        ((int)param_10[8] < 1)))))) || (*(long *)(param_10 + 6) == 0)) {
    puVar15 = (undefined4 *)0x6c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_720 = puVar15 + 1;
    dStack_718 = 5.08887615216484e-322;
    *(undefined8 *)(puVar15 + 0xf) = 0x412854414d5f5349;
    *(undefined8 *)(puVar15 + 0xd) = 0x5f56432026262029;
    *(undefined8 *)(puVar15 + 0x13) = 0x722854414d5f5349;
    *(undefined8 *)(puVar15 + 0x11) = 0x5f56432026262029;
    *(undefined8 *)(puVar15 + 0x17) = 0x414d5f53495f5643;
    *(undefined8 *)(puVar15 + 0x15) = 0x2026262029636576;
    *(undefined8 *)(puVar15 + 3) = 0x7463656a626f2854;
    *(undefined8 *)(puVar15 + 1) = 0x414d5f53495f5643;
    *(undefined8 *)(puVar15 + 7) = 0x53495f5643202626;
    *(undefined8 *)(puVar15 + 5) = 0x202973746e696f50;
    *(undefined1 *)((long)puVar15 + 0x6b) = 0;
    *(undefined8 *)((long)puVar15 + 99) = 0x2963657674285441;
    *(undefined8 *)(puVar15 + 0xb) = 0x73746e696f506567;
    *(undefined8 *)(puVar15 + 9) = 0x616d692854414d5f;
    FUN_109ac3188(0xffffff29,&puStack_720,&UNK_10f5a2550,&UNK_10f5a2063,0x3ed);
  }
  else {
    if (uVar26 <= uVar3) {
      uVar26 = uVar3;
    }
    uVar27 = (ulong)uVar26;
    uVar10 = 1;
    FUN_109a38f44(1,uVar27,0x16);
    FUN_109a3907c();
    FUN_1096696f8(auStack_c38,uVar10);
    uVar10 = 1;
    FUN_109a38f44(1,uVar27,0xe);
    FUN_109a3907c();
    FUN_1096696f8(&uStack_c58,uVar10);
    FUN_109b90d2c(param_5,lStack_c30);
    FUN_109b90d2c(param_6,uStack_c50);
    uVar10 = 0x3ff0000000000000;
    uVar30 = 0;
    FUN_109a42cd4(param_7,&uStack_cc0);
    if ((*param_9 & 7) - 5 < 2) {
      uVar3 = param_9[8];
      if (((uVar3 == 1) || (param_9[9] == 1)) &&
         ((uVar3 + uVar3 * (*param_9 >> 3 & 0x1ff)) * param_9[9] == 3)) {
        if ((*param_10 & 7) - 5 < 2) {
          uVar3 = param_10[8];
          if (((uVar3 == 1) || (param_10[9] == 1)) &&
             ((uVar3 + uVar3 * (*param_10 >> 3 & 0x1ff)) * param_10[9] == 3)) {
            uVar11 = 1;
            FUN_109a38f44(1,uVar27,0xe);
            FUN_109a3907c();
            FUN_1096696f8(&uStack_c68,uVar11);
            uVar11 = 1;
            FUN_109a38f44(1,uVar27,0xe);
            FUN_109a3907c();
            FUN_1096696f8(&uStack_c48,uVar11);
            FUN_109b5ccb0(uStack_c50,lStack_c60,&uStack_cc0,param_8,0,&uStack_ce8);
            uVar25 = (ulong)(uVar26 << 1);
            if (param_11 == 0) {
              FUN_109abb8b8(lStack_c30,0);
              uStack_c98 = uVar10;
              uStack_c90 = uVar30;
              uStack_c88 = param_3;
              uStack_c80 = param_4;
              FUN_109a3ca64(lStack_c30,lStack_c30,1,uVar27);
              FUN_109a73d04(0x3ff0000000000000,lStack_c30,&uStack_db0,1,&uStack_d88);
              FUN_109a5dcc4(&uStack_db0,&uStack_e28,0,&uStack_e00,5);
              if ((uVar26 < 4) || (dStack_260 / dStack_268 < 0.001)) {
                uStack_be0 = 0x100000003;
                puStack_c00 = (undefined4 *)0x842424006;
                pdStack_be8 = adStack_c28;
                uStack_bf8 = 0;
                uStack_bf0 = 0;
                uStack_760 = 0x300000003;
                puStack_780 = (undefined4 *)0x1842424006;
                ppuStack_768 = &puStack_720;
                uStack_778 = 0;
                uStack_770 = 0;
                dVar31 = dStack_230 * dStack_230 + dStack_248 * dStack_248;
                if (dVar31 < 1e-10) {
                  dVar31 = 1.0;
                  FUN_109a9a630(0x3ff0000000000000,0,0,0,&uStack_e00);
                }
                FUN_109a5d39c(&uStack_e00);
                if (dVar31 < 0.0) {
                  FUN_109a42cd4(0xbff0000000000000,0,&uStack_e00,&uStack_e00);
                }
                FUN_109a73754(0xbff0000000000000,0,&uStack_e00,&uStack_d88,0,&puStack_c00,2);
                lVar29 = 0;
                lVar22 = 0;
                do {
                  pdVar23 = (double *)(*(long *)(lStack_c30 + 0x18) + lVar29);
                  pdVar24 = (double *)(*(long *)(lStack_c40 + 0x18) + lVar22);
                  *pdVar24 = pdStack_de8[1] * pdVar23[1] + *pdVar23 * *pdStack_de8 +
                             pdVar23[2] * pdStack_de8[2] + *pdStack_be8;
                  pdVar24[1] = pdStack_de8[4] * pdVar23[1] + *pdVar23 * pdStack_de8[3] +
                               pdVar23[2] * pdStack_de8[5] + pdStack_be8[1];
                  lVar22 = lVar22 + 0x10;
                  lVar29 = lVar29 + 0x18;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
                FUN_109b906f8(0x4008000000000000,0x3fefd70a3d70a3d7,lStack_c40,lStack_c60,
                              &puStack_780,0,0,2000);
                ppuVar13 = &puStack_780;
                FUN_109a62da4(0,0,ppuVar13,2);
                if ((int)ppuVar13 == 0) {
                  FUN_109a9a630(0x3ff0000000000000,0,0,0,&uStack_d10);
                  FUN_109a4b71c(auStack_d60);
                }
                else {
                  FUN_109a3bf58(&puStack_780,&uStack_ec8,0,1);
                  dVar32 = dStack_700;
                  dVar31 = dStack_718;
                  uStack_f10 = CONCAT44(uStack_eb4,uStack_eb8);
                  uStack_ee8 = uStack_ec0;
                  uStack_ef0 = uStack_ec8;
                  ppuStack_ed8 = ppuStack_eb0 + 1;
                  uStack_ed0 = uStack_ea8;
                  uStack_f18 = uStack_ec0;
                  uStack_f20 = uStack_ec8;
                  ppuStack_f08 = ppuStack_eb0 + 2;
                  uStack_f00 = uStack_ea8;
                  dVar34 = SQRT((double)puStack_708 * (double)puStack_708 +
                                (double)puStack_720 * (double)puStack_720 + dStack_6f0 * dStack_6f0)
                  ;
                  dVar33 = 2.220446049250313e-16;
                  if (2.220446049250313e-16 <= dVar34) {
                    dVar33 = dVar34;
                  }
                  uStack_ee0 = uStack_f10;
                  FUN_109a42cd4(1.0 / dVar33,0,&uStack_ec8,&uStack_ec8);
                  dVar32 = SQRT(dVar32 * dVar32 + dVar31 * dVar31 + dStack_6e8 * dStack_6e8);
                  dVar31 = 2.220446049250313e-16;
                  if (2.220446049250313e-16 <= dVar32) {
                    dVar31 = dVar32;
                  }
                  FUN_109a42cd4(1.0 / dVar31,0,&uStack_ef0,&uStack_ef0);
                  dVar31 = 2.220446049250313e-16;
                  if (2.220446049250313e-16 <= dVar34 + dVar32) {
                    dVar31 = dVar34 + dVar32;
                  }
                  FUN_109a42cd4(2.0 / dVar31,0,&uStack_f20,auStack_d60);
                  FUN_109a9a9b8(&uStack_ec8,&uStack_ef0,&uStack_f20);
                  FUN_109b898f0(&puStack_780,auStack_d38,0);
                  FUN_109b898f0(auStack_d38,&puStack_780,0);
                  FUN_109a73754(0x3ff0000000000000,0x3ff0000000000000,&puStack_780,&puStack_c00,
                                auStack_d60,auStack_d60,0);
                  FUN_109a73754(0x3ff0000000000000,0x3ff0000000000000,&puStack_780,&uStack_e00,0,
                                &uStack_d10,0);
                }
                FUN_109b898f0(&uStack_d10,auStack_d38,0);
              }
              else {
                uStack_ea8 = 0xc0000000c;
                ppuStack_eb0 = &puStack_720;
                uStack_ec0 = 0;
                uStack_eb8 = 0;
                uStack_ed0 = 0x10000000c;
                uStack_ec8 = 0x6042424006;
                uStack_ef0 = 0x842424006;
                ppuStack_ed8 = &puStack_780;
                uStack_ee8 = 0;
                uStack_ee0 = uStack_ee0 & 0xffffffff00000000;
                uStack_f00 = 0xc0000000c;
                uStack_f20 = 0x6042424006;
                ppuStack_f08 = &puStack_c00;
                uStack_f18 = 0;
                uStack_f10 = uStack_f10 & 0xffffffff00000000;
                lVar22 = *(long *)(lStack_c30 + 0x18);
                lVar29 = *(long *)(lStack_c60 + 0x18);
                uVar12 = uVar25;
                FUN_109a38f44(uVar25,0xc,6);
                FUN_109a3907c();
                FUN_1096696f8(&uStack_c78,uVar12);
                puVar21 = (undefined8 *)(*(long *)(lStack_c70 + 0x18) + 0x60);
                pdVar23 = (double *)(lVar22 + 8);
                pdVar24 = (double *)(lVar29 + 8);
                do {
                  dVar31 = pdVar24[-1];
                  dVar32 = *pdVar24;
                  dVar33 = pdVar23[-1];
                  puVar21[4] = dVar33;
                  puVar21[-0xc] = dVar33;
                  dVar33 = *pdVar23;
                  puVar21[5] = dVar33;
                  puVar21[-0xb] = dVar33;
                  dVar33 = pdVar23[1];
                  puVar21[6] = dVar33;
                  puVar21[-10] = dVar33;
                  puVar21[7] = 0x3ff0000000000000;
                  puVar21[-9] = 0x3ff0000000000000;
                  puVar21[-7] = 0;
                  puVar21[-8] = 0;
                  puVar21[-5] = 0;
                  puVar21[-6] = 0;
                  puVar21[1] = 0;
                  *puVar21 = 0;
                  puVar21[3] = 0;
                  puVar21[2] = 0;
                  puVar21[-4] = -(dVar31 * pdVar23[-1]);
                  puVar21[-3] = -(dVar31 * *pdVar23);
                  puVar21[-2] = -(dVar31 * pdVar23[1]);
                  puVar21[-1] = -dVar31;
                  puVar21[8] = -(dVar32 * pdVar23[-1]);
                  puVar21[9] = -(dVar32 * *pdVar23);
                  puVar21[10] = -(dVar32 * pdVar23[1]);
                  puVar21[0xb] = -dVar32;
                  puVar21 = puVar21 + 0x18;
                  pdVar23 = pdVar23 + 3;
                  pdVar24 = pdVar24 + 2;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
                FUN_109a73d04(0x3ff0000000000000,lStack_c70,&uStack_ec8,1,0);
                FUN_109a5dcc4(&uStack_ec8,&uStack_ef0,0,&uStack_f20,5);
                puStack_c10 = auStack_7e0;
                adStack_c28[0] = 6.84530874681698e-313;
                adStack_c28[1] = 0.0;
                uStack_c18 = 0;
                dVar31 = 8.48798316534329e-314;
                uStack_c08 = 0x400000003;
                FUN_109a3bf58(adStack_c28,auStack_f48,0,3);
                FUN_109a3bf58(adStack_c28,auStack_f70,3,4);
                FUN_109a5d39c(auStack_f48);
                if (dVar31 < 0.0) {
                  dVar31 = -1.0;
                  FUN_109a42cd4(0xbff0000000000000,0,adStack_c28,adStack_c28);
                }
                FUN_109abbbac(auStack_f48,0,4,0);
                FUN_109a5dcc4(auStack_f48,&uStack_e28,&uStack_dd8,&uStack_e00,7);
                dVar32 = 1.0;
                FUN_109a73754(0x3ff0000000000000,0,&uStack_dd8,&uStack_e00,0,&uStack_d10,1);
                FUN_109abbbac(&uStack_d10,0,4,0);
                FUN_109a42cd4(dVar32 / dVar31,0,auStack_f70,auStack_d60);
                FUN_109b898f0(&uStack_d10,auStack_d38,0);
              }
            }
            else {
              puStack_720 = (undefined4 *)
                            (CONCAT44(((*param_9 & 0xff8) + 8) * param_9[9],*param_9) &
                             0xffffffff00000ff8 | 0x42424006);
              puStack_708 = auStack_2a0;
              dStack_700 = *(double *)(param_9 + 8);
              dStack_718 = 0.0;
              uStack_710 = 0;
              uStack_be0 = *(undefined8 *)(param_10 + 8);
              puStack_c00 = (undefined4 *)
                            (CONCAT44(((*param_10 & 0xff8) + 8) * param_10[9],*param_10) &
                             0xffffffff00000ff8 | 0x42424006);
              uStack_bf8 = 0;
              uStack_bf0 = 0;
              pdStack_be8 = adStack_288;
              FUN_109a42cd4(0x3ff0000000000000,0,param_9,&puStack_720);
              FUN_109a42cd4(0x3ff0000000000000,0,param_10,&puStack_c00);
            }
            FUN_109a3ca64(lStack_c30,lStack_c30,3,1);
            FUN_109a3ca64(lStack_c60,lStack_c60,2,1);
            FUN_109b8f130(&puStack_720,6,uVar25,0x1400000003,0x3e80000000000000,1);
            FUN_109a4ad30(&uStack_e50,uStack_6f8,0);
            while( true ) {
              puStack_c00 = (undefined4 *)0x0;
              puStack_780 = (undefined4 *)0x0;
              uStack_ec8 = 0;
              ppuVar13 = &puStack_720;
              FUN_109b8f668(ppuVar13,&uStack_ec8,&puStack_c00,&puStack_780);
              FUN_109a4ad30(uStack_ec8,&uStack_e50,0);
              uVar26 = 0;
              if (puStack_780 != (undefined4 *)0x0) {
                uVar26 = (uint)ppuVar13;
              }
              if ((uVar26 & 1) == 0) break;
              FUN_109a3ca64(puStack_780,puStack_780,2,1);
              if (puStack_c00 == (undefined4 *)0x0) {
                puVar19 = (undefined1 *)0x0;
                puVar28 = (undefined1 *)0x0;
              }
              else {
                FUN_109a3bf58(puStack_c00,auStack_e78,0,3);
                puVar28 = auStack_ea0;
                FUN_109a3bf58(puStack_c00,auStack_ea0,3,6);
                puVar19 = auStack_e78;
              }
              uStack_f90 = 0;
              uStack_f88 = 0;
              uStack_f80 = 0;
              FUN_109b8ab30(0,lStack_c30,auStack_d38,auStack_d60,&uStack_cc0,param_8,puStack_780,
                            puVar19,puVar28);
              FUN_109a2d6c8(puStack_780,uStack_c50,puStack_780,0);
              FUN_109a3ca64(puStack_780,puStack_780,1,uVar25);
            }
            puVar18 = (uint *)0x0;
            FUN_109a4ad30(uStack_6f8,&uStack_e50);
            puStack_d20 = auStack_2a0;
            auStack_d38[1] = 0;
            uStack_d28 = 0;
            uStack_d18 = *(undefined8 *)(param_9 + 8);
            auStack_d38[0] =
                 CONCAT44(((*param_9 & 0xff8) + 8) * param_9[9],*param_9) & 0xffffffff00000ff8 |
                 0x42424006;
            auStack_d60[1] = 0;
            uStack_d50 = 0;
            uStack_d40 = *(undefined8 *)(param_10 + 8);
            auStack_d60[0] =
                 CONCAT44(((*param_10 & 0xff8) + 8) * param_10[9],*param_10) & 0xffffffff00000ff8 |
                 0x42424006;
            pdStack_d48 = adStack_288;
            FUN_109a42cd4(0x3ff0000000000000,0,auStack_d38,param_9);
            FUN_109a42cd4(0x3ff0000000000000,0,auStack_d60);
            FUN_109b8f5f8(&puStack_720);
            FUN_10966b23c(&uStack_c78);
            FUN_10966b23c(&uStack_c68);
            FUN_10966b23c(&uStack_c58);
            FUN_10966b23c(&uStack_c48);
            puVar14 = auStack_c38;
            FUN_10966b23c();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
              ___stack_chk_fail();
              FUN_10966b23c(&uStack_c78);
              FUN_10966b23c(&uStack_c68);
              FUN_10966b23c(&uStack_c58);
              FUN_10966b23c(&uStack_c48);
              FUN_10966b23c(auStack_c38);
              puVar16 = puVar14;
              __Unwind_Resume();
              pcStack_f98 = FUN_109b8d8fc;
              uStack_fc0 = uVar25;
              uStack_fb8 = param_8;
              puStack_fb0 = param_9;
              puStack_fa8 = puVar14;
              puStack_fa0 = &stack0xfffffffffffffff0;
              if ((*puVar16 & 0x1f0000) == 0x10000) {
                puVar17 = *(ulong **)(puVar16 + 2);
                uStack_fe0 = (ulong)&uStack_1020 | 8;
                uStack_1018 = puVar17[1];
                uStack_1020 = *puVar17;
                uStack_1008 = puVar17[3];
                uStack_1010 = puVar17[2];
                uStack_ff8 = puVar17[5];
                uStack_1000 = puVar17[4];
                uStack_fe8 = puVar17[7];
                uStack_ff0 = puVar17[6];
                puStack_fd8 = &uStack_fd0;
                uStack_fd0 = 0;
                uStack_fc8 = 0;
                if (puVar17[7] != 0) {
                  piVar1 = (int *)(puVar17[7] + 0x14);
                  do {
                    cVar4 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                if (*(int *)((long)puVar17 + 4) < 3) {
                  uStack_fd0 = *(undefined8 *)puVar17[9];
                  uStack_fc8 = ((undefined8 *)puVar17[9])[1];
                }
                else {
                  uStack_1020 = uStack_1020 & 0xffffffff;
                  func_0x000109a84868(&uStack_1020);
                }
              }
              else {
                FUN_109a8a180(&uStack_1020);
              }
              bVar8 = uStack_1018._4_4_ != 1;
              bVar9 = (int)uStack_1018 != 1;
              uVar20 = 3;
              if (bVar8 && bVar9) {
                uVar20 = 1;
              }
              FUN_109a8f64c(param_10,3,uVar20,(uint)uStack_1020 & 7,0xffffffff,0,0);
              if ((*param_10 & 0x1f0000) == 0x10000) {
                puVar17 = *(ulong **)(param_10 + 2);
                uStack_1040 = (ulong)&uStack_1080 | 8;
                uStack_1078 = puVar17[1];
                uStack_1080 = *puVar17;
                uStack_1068 = puVar17[3];
                uStack_1070 = puVar17[2];
                uStack_1058 = puVar17[5];
                uStack_1060 = puVar17[4];
                uStack_1048 = puVar17[7];
                uStack_1050 = puVar17[6];
                puStack_1038 = &uStack_1030;
                uStack_1030 = 0;
                uStack_1028 = 0;
                if (puVar17[7] != 0) {
                  piVar1 = (int *)(puVar17[7] + 0x14);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                if (*(int *)((long)puVar17 + 4) < 3) {
                  uStack_1030 = *(undefined8 *)puVar17[9];
                  uStack_1028 = ((undefined8 *)puVar17[9])[1];
                }
                else {
                  uStack_1080 = uStack_1080 & 0xffffffff;
                  func_0x000109a84868(&uStack_1080);
                }
              }
              else {
                FUN_109a8a180(&uStack_1080,param_10,0xffffffff);
              }
              uStack_1084 = uStack_1018._4_4_;
              if (uStack_1020._4_4_ == 1) {
                uStack_1084 = 1;
              }
              uStack_10a0 = 0;
              uStack_1098 = 0;
              uStack_1090 = uStack_1010;
              uStack_1088 = (int)uStack_1018;
              uStack_10a8 = (uint)uStack_1020 & 0x4fff | 0x42420000;
              uStack_10a4 = (undefined4)*puStack_fd8;
              uStack_10b8 = uStack_1070;
              uStack_10ac = uStack_1078._4_4_;
              if (uStack_1080._4_4_ == 1) {
                uStack_10ac = 1;
              }
              uStack_10c8 = 0;
              uStack_10c0 = 0;
              uStack_10b0 = (undefined4)uStack_1078;
              uStack_10d0 = (uint)uStack_1080 & 0x4fff | 0x42420000;
              uStack_10cc = (undefined4)*puStack_1038;
              if ((*puVar18 & 0x1f0000) == 0) {
                puVar14 = (uint *)0x0;
              }
              else {
                uVar20 = 3;
                uVar6 = 9;
                if (bVar8 && bVar9) {
                  uVar20 = 9;
                  uVar6 = 3;
                }
                uStack_1160 = CONCAT44(uVar20,uVar6);
                FUN_109a8ee3c(puVar18,&uStack_1160,(uint)uStack_1020 & 7,0xffffffff,0,0);
                if ((*puVar18 & 0x1f0000) == 0x10000) {
                  puVar17 = *(ulong **)(puVar18 + 2);
                  uStack_1120 = (ulong)&uStack_1160 | 8;
                  uStack_1158 = puVar17[1];
                  uStack_1160 = *puVar17;
                  uStack_1148 = puVar17[3];
                  uStack_1150 = puVar17[2];
                  uStack_1138 = puVar17[5];
                  uStack_1140 = puVar17[4];
                  uStack_1128 = puVar17[7];
                  uStack_1130 = puVar17[6];
                  puStack_1118 = &uStack_1110;
                  uStack_1110 = 0;
                  uStack_1108 = 0;
                  if (puVar17[7] != 0) {
                    piVar1 = (int *)(puVar17[7] + 0x14);
                    do {
                      cVar4 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = *piVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  if (*(int *)((long)puVar17 + 4) < 3) {
                    uStack_1110 = *(undefined8 *)puVar17[9];
                    uStack_1108 = ((undefined8 *)puVar17[9])[1];
                  }
                  else {
                    uStack_1160 = uStack_1160 & 0xffffffff;
                    func_0x000109a84868(&uStack_1160);
                  }
                }
                else {
                  FUN_109a8a180(&uStack_1160,puVar18,0xffffffff);
                }
                uStack_10d4 = uStack_1158._4_4_;
                if (uStack_1160._4_4_ == 1) {
                  uStack_10d4 = 1;
                }
                uStack_10f8 = (uint)uStack_1160 & 0x4fff | 0x42420000;
                uStack_10f4 = (undefined4)*puStack_1118;
                uStack_10f0 = 0;
                uStack_10e8 = 0;
                uStack_10e0 = uStack_1150;
                uStack_10d8 = (undefined4)uStack_1158;
                if (uStack_1128 != 0) {
                  piVar1 = (int *)(uStack_1128 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar4 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                      *piVar1 = iVar2 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_1160);
                  }
                }
                uStack_1128 = 0;
                uStack_1148 = 0;
                uStack_1150 = 0;
                uStack_1138 = 0;
                uStack_1140 = 0;
                if (0 < uStack_1160._4_4_) {
                  lVar22 = 0;
                  do {
                    *(undefined4 *)(uStack_1120 + lVar22 * 4) = 0;
                    lVar22 = lVar22 + 1;
                  } while (lVar22 < uStack_1160._4_4_);
                }
                if (puStack_1118 != &uStack_1110 && puStack_1118 != (undefined8 *)0x0) {
                  _free(puStack_1118[-1]);
                }
                puVar14 = (uint *)0x0;
                if ((*puVar18 & 0x1f0000) != 0) {
                  puVar14 = &uStack_10f8;
                }
              }
              puVar18 = &uStack_10a8;
              FUN_109b898f0(puVar18,&uStack_10d0,puVar14);
              if ((int)puVar18 == 0) {
                uStack_1158 = 0;
                uStack_1160 = 0;
                uStack_1148 = 0;
                uStack_1150 = 0;
                FUN_109a48880(&uStack_1080,&uStack_1160);
              }
              if (uStack_1048 != 0) {
                piVar1 = (int *)(uStack_1048 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1080);
                }
              }
              uStack_1048 = 0;
              uStack_1068 = 0;
              uStack_1070 = 0;
              uStack_1058 = 0;
              uStack_1060 = 0;
              if (0 < uStack_1080._4_4_) {
                lVar22 = 0;
                do {
                  *(undefined4 *)(uStack_1040 + lVar22 * 4) = 0;
                  lVar22 = lVar22 + 1;
                } while (lVar22 < uStack_1080._4_4_);
              }
              if (puStack_1038 != &uStack_1030 && puStack_1038 != (undefined8 *)0x0) {
                _free(puStack_1038[-1]);
              }
              if (uStack_fe8 != 0) {
                piVar1 = (int *)(uStack_fe8 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1020);
                }
              }
              uStack_fe8 = 0;
              uStack_1008 = 0;
              uStack_1010 = 0;
              uStack_ff8 = 0;
              uStack_1000 = 0;
              if (0 < uStack_1020._4_4_) {
                lVar22 = 0;
                do {
                  *(undefined4 *)(uStack_fe0 + lVar22 * 4) = 0;
                  lVar22 = lVar22 + 1;
                } while (lVar22 < uStack_1020._4_4_);
              }
              if (puStack_fd8 != &uStack_fd0 && puStack_fd8 != (undefined8 *)0x0) {
                _free(puStack_fd8[-1]);
              }
              return;
            }
            return;
          }
        }
        puVar15 = (undefined4 *)0xac;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        puStack_720 = puVar15 + 1;
        dStack_718 = 8.20148972096469e-322;
        *(undefined8 *)(puVar15 + 0x1f) = 0x73776f723e2d6365;
        *(undefined8 *)(puVar15 + 0x1d) = 0x7674202626202931;
        *(undefined8 *)(puVar15 + 0x23) = 0x4d5f56432a736c6f;
        *(undefined8 *)(puVar15 + 0x21) = 0x633e2d636576742a;
        *(undefined8 *)(puVar15 + 0x27) = 0x657079743e2d6365;
        *(undefined8 *)(puVar15 + 0x25) = 0x7674284e435f5441;
        *(undefined8 *)(puVar15 + 0xf) = 0x2029657079743e2d;
        *(undefined8 *)(puVar15 + 0xd) = 0x6365767428485450;
        *(undefined8 *)(puVar15 + 0x13) = 0x7428202626202946;
        *(undefined8 *)(puVar15 + 0x11) = 0x32335f5643203d3d;
        *(undefined8 *)(puVar15 + 0x17) = 0x7c2031203d3d2073;
        *(undefined8 *)(puVar15 + 0x15) = 0x776f723e2d636576;
        *(undefined8 *)(puVar15 + 0x1b) = 0x203d3d20736c6f63;
        *(undefined8 *)(puVar15 + 0x19) = 0x3e2d63657674207c;
        *(undefined8 *)(puVar15 + 3) = 0x7674284854504544;
        *(undefined8 *)(puVar15 + 1) = 0x5f54414d5f564328;
        *(undefined8 *)(puVar15 + 7) = 0x5f5643203d3d2029;
        *(undefined8 *)(puVar15 + 5) = 0x657079743e2d6365;
        *(undefined1 *)((long)puVar15 + 0xaa) = 0;
        *(undefined8 *)((long)puVar15 + 0xa2) = 0x33203d3d20296570;
        *(undefined8 *)(puVar15 + 0xb) = 0x45445f54414d5f56;
        *(undefined8 *)(puVar15 + 9) = 0x43207c7c20463436;
        FUN_109ac3188(0xffffff29,&puStack_720,&UNK_10f5a2550,&UNK_10f5a2063,0x3fb);
        goto LAB_109b8d820;
      }
    }
    puVar15 = (undefined4 *)0xac;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_720 = puVar15 + 1;
    dStack_718 = 8.20148972096469e-322;
    *(undefined8 *)(puVar15 + 0x1f) = 0x73776f723e2d6365;
    *(undefined8 *)(puVar15 + 0x1d) = 0x7672202626202931;
    *(undefined8 *)(puVar15 + 0x23) = 0x4d5f56432a736c6f;
    *(undefined8 *)(puVar15 + 0x21) = 0x633e2d636576722a;
    *(undefined8 *)(puVar15 + 0x27) = 0x657079743e2d6365;
    *(undefined8 *)(puVar15 + 0x25) = 0x7672284e435f5441;
    *(undefined8 *)(puVar15 + 0xf) = 0x2029657079743e2d;
    *(undefined8 *)(puVar15 + 0xd) = 0x6365767228485450;
    *(undefined8 *)(puVar15 + 0x13) = 0x7228202626202946;
    *(undefined8 *)(puVar15 + 0x11) = 0x32335f5643203d3d;
    *(undefined8 *)(puVar15 + 0x17) = 0x7c2031203d3d2073;
    *(undefined8 *)(puVar15 + 0x15) = 0x776f723e2d636576;
    *(undefined8 *)(puVar15 + 0x1b) = 0x203d3d20736c6f63;
    *(undefined8 *)(puVar15 + 0x19) = 0x3e2d63657672207c;
    *(undefined8 *)(puVar15 + 3) = 0x7672284854504544;
    *(undefined8 *)(puVar15 + 1) = 0x5f54414d5f564328;
    *(undefined8 *)(puVar15 + 7) = 0x5f5643203d3d2029;
    *(undefined8 *)(puVar15 + 5) = 0x657079743e2d6365;
    *(undefined1 *)((long)puVar15 + 0xaa) = 0;
    *(undefined8 *)((long)puVar15 + 0xa2) = 0x33203d3d20296570;
    *(undefined8 *)(puVar15 + 0xb) = 0x45445f54414d5f56;
    *(undefined8 *)(puVar15 + 9) = 0x43207c7c20463436;
    FUN_109ac3188(0xffffff29,&puStack_720,&UNK_10f5a2550,&UNK_10f5a2063,0x3f8);
  }
LAB_109b8d820:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109b8d824);
  (*pcVar7)();
}



/* Entry: 109b8d8fc; end: 109b8de27;  */

void FUN_109b8d8fc(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  ulong *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  ulong uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  ulong uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  ulong uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_1 + 2);
    uStack_50 = (ulong)&uStack_90 | 8;
    uStack_88 = puVar9[1];
    uStack_90 = *puVar9;
    uStack_78 = puVar9[3];
    uStack_80 = puVar9[2];
    uStack_68 = puVar9[5];
    uStack_70 = puVar9[4];
    uStack_58 = puVar9[7];
    uStack_60 = puVar9[6];
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_40 = *(undefined8 *)puVar9[9];
      uStack_38 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_90 = uStack_90 & 0xffffffff;
      func_0x000109a84868(&uStack_90);
    }
  }
  else {
    FUN_109a8a180(&uStack_90,param_1,0xffffffff);
  }
  bVar6 = uStack_88._4_4_ != 1;
  bVar7 = (int)uStack_88 != 1;
  uVar11 = 3;
  if (bVar6 && bVar7) {
    uVar11 = 1;
  }
  FUN_109a8f64c(param_2,3,uVar11,(uint)uStack_90 & 7,0xffffffff,0,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_2 + 2);
    uStack_b0 = (ulong)&uStack_f0 | 8;
    uStack_e8 = puVar9[1];
    uStack_f0 = *puVar9;
    uStack_d8 = puVar9[3];
    uStack_e0 = puVar9[2];
    uStack_c8 = puVar9[5];
    uStack_d0 = puVar9[4];
    uStack_b8 = puVar9[7];
    uStack_c0 = puVar9[6];
    puStack_a8 = &uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_a0 = *(undefined8 *)puVar9[9];
      uStack_98 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_f0 = uStack_f0 & 0xffffffff;
      func_0x000109a84868(&uStack_f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_f0,param_2,0xffffffff);
  }
  uStack_f4 = uStack_88._4_4_;
  if (uStack_90._4_4_ == 1) {
    uStack_f4 = 1;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = uStack_80;
  uStack_f8 = (int)uStack_88;
  uStack_118 = (uint)uStack_90 & 0x4fff | 0x42420000;
  uStack_114 = (undefined4)*puStack_48;
  uStack_128 = uStack_e0;
  uStack_11c = uStack_e8._4_4_;
  if (uStack_f0._4_4_ == 1) {
    uStack_11c = 1;
  }
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_120 = (undefined4)uStack_e8;
  uStack_140 = (uint)uStack_f0 & 0x4fff | 0x42420000;
  uStack_13c = (undefined4)*puStack_a8;
  if ((*param_3 & 0x1f0000) == 0) {
    puVar10 = (uint *)0x0;
  }
  else {
    uVar11 = 3;
    uVar5 = 9;
    if (bVar6 && bVar7) {
      uVar11 = 9;
      uVar5 = 3;
    }
    uStack_1d0 = CONCAT44(uVar11,uVar5);
    FUN_109a8ee3c(param_3,&uStack_1d0,(uint)uStack_90 & 7,0xffffffff,0,0);
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar9 = *(ulong **)(param_3 + 2);
      uStack_190 = (ulong)&uStack_1d0 | 8;
      uStack_1c8 = puVar9[1];
      uStack_1d0 = *puVar9;
      uStack_1b8 = puVar9[3];
      uStack_1c0 = puVar9[2];
      uStack_1a8 = puVar9[5];
      uStack_1b0 = puVar9[4];
      uStack_198 = puVar9[7];
      uStack_1a0 = puVar9[6];
      puStack_188 = &uStack_180;
      uStack_180 = 0;
      uStack_178 = 0;
      if (puVar9[7] != 0) {
        piVar1 = (int *)(puVar9[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar9 + 4) < 3) {
        uStack_180 = *(undefined8 *)puVar9[9];
        uStack_178 = ((undefined8 *)puVar9[9])[1];
      }
      else {
        uStack_1d0 = uStack_1d0 & 0xffffffff;
        func_0x000109a84868(&uStack_1d0);
      }
    }
    else {
      FUN_109a8a180(&uStack_1d0,param_3,0xffffffff);
    }
    uStack_144 = uStack_1c8._4_4_;
    if (uStack_1d0._4_4_ == 1) {
      uStack_144 = 1;
    }
    uStack_168 = (uint)uStack_1d0 & 0x4fff | 0x42420000;
    uStack_164 = (undefined4)*puStack_188;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = uStack_1c0;
    uStack_148 = (undefined4)uStack_1c8;
    if (uStack_198 != 0) {
      piVar1 = (int *)(uStack_198 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_1d0);
      }
    }
    uStack_198 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    if (0 < uStack_1d0._4_4_) {
      lVar12 = 0;
      do {
        *(undefined4 *)(uStack_190 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < uStack_1d0._4_4_);
    }
    if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
      _free(puStack_188[-1]);
    }
    puVar10 = (uint *)0x0;
    if ((*param_3 & 0x1f0000) != 0) {
      puVar10 = &uStack_168;
    }
  }
  puVar8 = &uStack_118;
  FUN_109b898f0(puVar8,&uStack_140,puVar10);
  if ((int)puVar8 == 0) {
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    FUN_109a48880(&uStack_f0,&uStack_1d0);
  }
  if (uStack_b8 != 0) {
    piVar1 = (int *)(uStack_b8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  uStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_b0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_f0._4_4_);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
  }
  if (uStack_58 != 0) {
    piVar1 = (int *)(uStack_58 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  uStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (0 < uStack_90._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_50 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_90._4_4_);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109b8de28; end: 109b8f12f;  */

uint * FUN_109b8de28(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                    uint *param_6,uint *param_7,uint *param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int *piVar20;
  uint uStack_570;
  int iStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_538;
  long lStack_530;
  undefined8 *puStack_528;
  undefined8 auStack_520 [2];
  undefined8 uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  uint uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 *puStack_490;
  int iStack_488;
  int iStack_484;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  long *plStack_460;
  long *plStack_458;
  ulong uStack_450;
  ulong uStack_448;
  int *piStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  long *plStack_400;
  long *plStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  uint uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  ulong uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  uint uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined4 uStack_380;
  ulong uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  uint uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined4 uStack_358;
  ulong uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  uint uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined4 uStack_268;
  ulong uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  ulong uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_2 + 2);
    uStack_c0 = (ulong)&uStack_100 | 8;
    uStack_f8 = puVar10[1];
    uStack_100 = *puVar10;
    uStack_e8 = puVar10[3];
    uStack_f0 = puVar10[2];
    uStack_d8 = puVar10[5];
    uStack_e0 = puVar10[4];
    uStack_c8 = puVar10[7];
    uStack_d0 = puVar10[6];
    puStack_b8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (puVar10[7] != 0) {
      piVar20 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_b0 = *(undefined8 *)puVar10[9];
      uStack_a8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_100 = uStack_100 & 0xffffffff;
      func_0x000109a84868(&uStack_100);
    }
  }
  else {
    FUN_109a8a180(&uStack_100,param_2,0xffffffff);
  }
  puVar6 = &uStack_100;
  FUN_109a89cd4(puVar6,3,0xffffffff,1);
  if ((int)puVar6 < 0) {
LAB_109b8efb4:
    puVar8 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_250 = puVar8 + 1;
    uStack_248 = 0x34;
    *(undefined8 *)(puVar8 + 3) = 0x2026262030203d3e;
    *(undefined8 *)(puVar8 + 1) = 0x2073746e696f706e;
    puVar8[0xd] = 0x29463436;
    *(undefined1 *)(puVar8 + 0xe) = 0;
    *(undefined8 *)(puVar8 + 7) = 0x4632335f5643203d;
    *(undefined8 *)(puVar8 + 5) = 0x3d20687470656428;
    *(undefined8 *)(puVar8 + 0xb) = 0x5f5643203d3d2068;
    *(undefined8 *)(puVar8 + 9) = 0x74706564207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_250,&UNK_10f5a26f0,&UNK_10f5a2063,0xcaf);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109b8f028);
    (*pcVar5)();
  }
  if (1 < ((uint)uStack_100 & 7) - 5) goto LAB_109b8efb4;
  FUN_109a8f64c(param_7,puVar6,1,(uint)uStack_100 & 7 | 8,0xffffffff,1,0);
  if ((*param_7 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_7 + 2);
    uStack_210 = (ulong)&uStack_250 | 8;
    uStack_248 = puVar10[1];
    uStack_250 = (undefined4 *)*puVar10;
    uStack_238 = puVar10[3];
    uStack_240 = puVar10[2];
    uStack_228 = puVar10[5];
    uStack_230 = puVar10[4];
    uStack_218 = puVar10[7];
    uStack_220 = puVar10[6];
    puStack_208 = &uStack_200;
    uStack_1f8 = 0;
    uStack_200 = 0;
    if (puVar10[7] != 0) {
      piVar20 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_200 = *(undefined8 *)puVar10[9];
      uStack_1f8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_250 = (undefined4 *)((ulong)uStack_250 & 0xffffffff);
      func_0x000109a84868(&uStack_250);
    }
  }
  else {
    FUN_109a8a180(&uStack_250,param_7,0xffffffff);
  }
  uStack_1d8 = uStack_240;
  uStack_1cc = uStack_248._4_4_;
  if (uStack_250._4_4_ == 1) {
    uStack_1cc = 1;
  }
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = (undefined4)uStack_248;
  uStack_1f0 = (uint)uStack_250 & 0x4fff | 0x42420000;
  uStack_1ec = (undefined4)*puStack_208;
  if (uStack_218 != 0) {
    piVar20 = (int *)(uStack_218 + 0x14);
    do {
      iVar9 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  uStack_218 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  if (0 < uStack_250._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_250._4_4_);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  uStack_260 = uStack_f0;
  uStack_254 = uStack_f8._4_4_;
  if (uStack_100._4_4_ == 1) {
    uStack_254 = 1;
  }
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_258 = (undefined4)uStack_f8;
  uStack_278 = (uint)uStack_100 & 0x4fff | 0x42420000;
  uStack_274 = (undefined4)*puStack_b8;
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_5 + 2);
    uStack_210 = (ulong)&uStack_250 | 8;
    uStack_248 = puVar10[1];
    uStack_250 = (undefined4 *)*puVar10;
    uStack_238 = puVar10[3];
    uStack_240 = puVar10[2];
    uStack_228 = puVar10[5];
    uStack_230 = puVar10[4];
    uStack_218 = puVar10[7];
    uStack_220 = puVar10[6];
    puStack_208 = &uStack_200;
    uStack_1f8 = 0;
    uStack_200 = 0;
    if (puVar10[7] != 0) {
      piVar20 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_200 = *(undefined8 *)puVar10[9];
      uStack_1f8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_250 = (undefined4 *)((ulong)uStack_250 & 0xffffffff);
      func_0x000109a84868(&uStack_250);
    }
  }
  else {
    FUN_109a8a180(&uStack_250,param_5,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_3 + 2);
    uStack_2a0 = (ulong)&uStack_2e0 | 8;
    uStack_2d8 = puVar10[1];
    uStack_2e0 = *puVar10;
    uStack_2c8 = puVar10[3];
    uStack_2d0 = puVar10[2];
    uStack_2b8 = puVar10[5];
    uStack_2c0 = puVar10[4];
    uStack_2a8 = puVar10[7];
    uStack_2b0 = puVar10[6];
    puStack_298 = &uStack_290;
    uStack_288 = 0;
    uStack_290 = 0;
    if (puVar10[7] != 0) {
      piVar20 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_290 = *(undefined8 *)puVar10[9];
      uStack_288 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_2e0 = uStack_2e0 & 0xffffffff;
      func_0x000109a84868(&uStack_2e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2e0,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_4 + 2);
    uStack_300 = (ulong)&uStack_340 | 8;
    uStack_338 = puVar10[1];
    uStack_340 = *puVar10;
    uStack_328 = puVar10[3];
    uStack_330 = puVar10[2];
    uStack_318 = puVar10[5];
    uStack_320 = puVar10[4];
    uStack_308 = puVar10[7];
    uStack_310 = puVar10[6];
    puStack_2f8 = &uStack_2f0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    if (puVar10[7] != 0) {
      piVar20 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_2f0 = *(undefined8 *)puVar10[9];
      uStack_2e8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_340 = uStack_340 & 0xffffffff;
      func_0x000109a84868(&uStack_340);
    }
  }
  else {
    FUN_109a8a180(&uStack_340,param_4,0xffffffff);
  }
  uStack_344 = uStack_248._4_4_;
  if (uStack_250._4_4_ == 1) {
    uStack_344 = 1;
  }
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = uStack_240;
  uStack_348 = (undefined4)uStack_248;
  uStack_368 = (uint)uStack_250 & 0x4fff | 0x42420000;
  uStack_364 = (undefined4)*puStack_208;
  uStack_378 = uStack_2d0;
  uStack_36c = uStack_2d8._4_4_;
  if (uStack_2e0._4_4_ == 1) {
    uStack_36c = 1;
  }
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_370 = (undefined4)uStack_2d8;
  uStack_390 = (uint)uStack_2e0 & 0x4fff | 0x42420000;
  uStack_38c = (undefined4)*puStack_298;
  uStack_3a0 = uStack_330;
  uStack_394 = uStack_338._4_4_;
  if (uStack_340._4_4_ == 1) {
    uStack_394 = 1;
  }
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_398 = (undefined4)uStack_338;
  uStack_3b8 = (uint)uStack_340 & 0x4fff | 0x42420000;
  uStack_3b4 = (undefined4)*puStack_2f8;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_3e0 = (ulong)&uStack_420 | 8;
  puStack_410 = &uStack_90;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_418 = 0x100000005;
  uStack_420 = 0x242ff4006;
  uStack_3c8 = 8;
  uStack_3d0 = 8;
  plStack_400 = &lStack_68;
  puStack_408 = puStack_410;
  plStack_3f8 = plStack_400;
  puStack_3d8 = &uStack_3d0;
  if ((*param_6 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_6 + 2);
    piStack_440 = (int *)((ulong)&uStack_480 | 8);
    uStack_478 = puVar10[1];
    uStack_480 = *puVar10;
    puStack_468 = (undefined8 *)puVar10[3];
    puStack_470 = (undefined8 *)puVar10[2];
    plStack_458 = (long *)puVar10[5];
    plStack_460 = (long *)puVar10[4];
    uStack_448 = puVar10[7];
    uStack_450 = puVar10[6];
    puStack_438 = &uStack_430;
    uStack_430 = 0;
    uStack_428 = 0;
    if (puVar10[7] != 0) {
      piVar20 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_430 = *(undefined8 *)puVar10[9];
      uStack_428 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_480 = uStack_480 & 0xffffffff;
      func_0x000109a84868(&uStack_480);
    }
  }
  else {
    FUN_109a8a180(&uStack_480,param_6,0xffffffff);
  }
  if (puStack_470 != (undefined8 *)0x0) {
    uVar16 = (ulong)uStack_480._4_4_;
    if ((int)uStack_480._4_4_ < 3) {
      lVar15 = (long)uStack_478._4_4_ * (long)(int)uStack_478;
    }
    else {
      lVar15 = 1;
      piVar20 = piStack_440;
      do {
        lVar15 = lVar15 * *piVar20;
        uVar16 = uVar16 - 1;
        piVar20 = piVar20 + 1;
      } while (uVar16 != 0);
    }
    uVar14 = uStack_480._4_4_;
    if (lVar15 != 0) goto LAB_109b8e5fc;
  }
  if (uStack_3e8 != 0) {
    piVar20 = (int *)(uStack_3e8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = *piVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uStack_448 != 0) {
    piVar20 = (int *)(uStack_448 + 0x14);
    do {
      iVar9 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_480);
    }
  }
  puVar4 = puStack_3d8;
  uStack_448 = 0;
  puStack_468 = (undefined8 *)0x0;
  puStack_470 = (undefined8 *)0x0;
  plStack_458 = (long *)0x0;
  plStack_460 = (long *)0x0;
  if ((int)uStack_480._4_4_ < 1) {
LAB_109b8e5a4:
    uVar14 = uStack_420._4_4_;
    if (2 < (int)uStack_420._4_4_) goto LAB_109b8e5d8;
    uStack_480 = uStack_420;
    uStack_478 = uStack_418;
    *puStack_438 = *puStack_3d8;
    puStack_438[1] = puVar4[1];
  }
  else {
    lVar15 = 0;
    do {
      piStack_440[lVar15] = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_480._4_4_);
    if ((int)uStack_480._4_4_ < 3) goto LAB_109b8e5a4;
LAB_109b8e5d8:
    uStack_480 = CONCAT44(uStack_480._4_4_,(uint)uStack_420);
    func_0x000109a84868(&uStack_480,&uStack_420);
    uVar14 = uStack_480._4_4_;
  }
  puStack_468 = puStack_408;
  puStack_470 = puStack_410;
  plStack_458 = plStack_3f8;
  plStack_460 = plStack_400;
  uStack_448 = uStack_3e8;
  uStack_450 = uStack_3f0;
LAB_109b8e5fc:
  iStack_484 = uStack_478._4_4_;
  if (uVar14 == 1) {
    iStack_484 = 1;
  }
  uStack_4a0 = 0;
  uStack_498 = 0;
  iStack_488 = (int)uStack_478;
  uStack_4a8 = (uint)uStack_480 & 0x4fff | 0x42420000;
  uStack_4a4 = (undefined4)*puStack_438;
  puStack_490 = puStack_470;
  if ((*param_8 & 0x1f0000) == 0) {
    puVar12 = (uint *)0x0;
    puVar13 = (uint *)0x0;
    puVar17 = (uint *)0x0;
    puVar18 = (uint *)0x0;
    puVar19 = (uint *)0x0;
  }
  else {
    iVar9 = (int)uStack_478 + uStack_478._4_4_ + 9;
    FUN_109a8f64c(param_8,(int)puVar6 << 1,iVar9,6,0xffffffff,0,0);
    if ((*param_8 & 0x1f0000) == 0x10000) {
      puVar10 = *(ulong **)(param_8 + 2);
      uStack_4d0 = (ulong)&uStack_510 | 8;
      uStack_508 = puVar10[1];
      uStack_510 = *puVar10;
      uStack_4f8 = puVar10[3];
      uStack_500 = puVar10[2];
      uStack_4e8 = puVar10[5];
      uStack_4f0 = puVar10[4];
      uStack_4d8 = puVar10[7];
      uStack_4e0 = puVar10[6];
      puStack_4c8 = &uStack_4c0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      if (puVar10[7] != 0) {
        piVar20 = (int *)(puVar10[7] + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar3) {
            *piVar20 = *piVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)((long)puVar10 + 4) < 3) {
        uStack_4c0 = *(undefined8 *)puVar10[9];
        uStack_4b8 = ((undefined8 *)puVar10[9])[1];
      }
      else {
        uStack_510 = uStack_510 & 0xffffffff;
        func_0x000109a84868(&uStack_510);
      }
    }
    else {
      FUN_109a8a180(&uStack_510,param_8,0xffffffff);
    }
    uStack_98 = 0x7fffffff80000000;
    uStack_a0 = 0x300000000;
    FUN_109a84930(&uStack_570,&uStack_510,&uStack_98,&uStack_a0);
    uStack_104 = uStack_564;
    if (iStack_56c == 1) {
      uStack_104 = 1;
    }
    uStack_128 = uStack_570 & 0x4fff | 0x42420000;
    uStack_124 = (undefined4)*puStack_528;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = uStack_560;
    uStack_108 = uStack_568;
    if (lStack_538 != 0) {
      piVar20 = (int *)(lStack_538 + 0x14);
      do {
        iVar1 = *piVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_570);
      }
    }
    lStack_538 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    if (0 < iStack_56c) {
      lVar15 = 0;
      do {
        *(undefined4 *)(lStack_530 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_56c);
    }
    if (puStack_528 != auStack_520 && puStack_528 != (undefined8 *)0x0) {
      _free(puStack_528[-1]);
    }
    uStack_98 = 0x7fffffff80000000;
    uStack_a0 = 0x600000003;
    FUN_109a84930(&uStack_570,&uStack_510,&uStack_98,&uStack_a0);
    uStack_12c = uStack_564;
    if (iStack_56c == 1) {
      uStack_12c = 1;
    }
    uStack_150 = uStack_570 & 0x4fff | 0x42420000;
    uStack_14c = (undefined4)*puStack_528;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = uStack_560;
    uStack_130 = uStack_568;
    if (lStack_538 != 0) {
      piVar20 = (int *)(lStack_538 + 0x14);
      do {
        iVar1 = *piVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_570);
      }
    }
    lStack_538 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    if (0 < iStack_56c) {
      lVar15 = 0;
      do {
        *(undefined4 *)(lStack_530 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_56c);
    }
    if (puStack_528 != auStack_520 && puStack_528 != (undefined8 *)0x0) {
      _free(puStack_528[-1]);
    }
    uStack_98 = 0x7fffffff80000000;
    uStack_a0 = 0x800000006;
    FUN_109a84930(&uStack_570,&uStack_510,&uStack_98,&uStack_a0);
    uStack_154 = uStack_564;
    if (iStack_56c == 1) {
      uStack_154 = 1;
    }
    uStack_178 = uStack_570 & 0x4fff | 0x42420000;
    uStack_174 = (undefined4)*puStack_528;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = uStack_560;
    uStack_158 = uStack_568;
    if (lStack_538 != 0) {
      piVar20 = (int *)(lStack_538 + 0x14);
      do {
        iVar1 = *piVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_570);
      }
    }
    lStack_538 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    if (0 < iStack_56c) {
      lVar15 = 0;
      do {
        *(undefined4 *)(lStack_530 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_56c);
    }
    if (puStack_528 != auStack_520 && puStack_528 != (undefined8 *)0x0) {
      _free(puStack_528[-1]);
    }
    uStack_98 = 0x7fffffff80000000;
    uStack_a0 = 0xa00000008;
    FUN_109a84930(&uStack_570,&uStack_510,&uStack_98,&uStack_a0);
    uStack_17c = uStack_564;
    if (iStack_56c == 1) {
      uStack_17c = 1;
    }
    uStack_1a0 = uStack_570 & 0x4fff | 0x42420000;
    uStack_19c = (undefined4)*puStack_528;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = uStack_560;
    uStack_180 = uStack_568;
    if (lStack_538 != 0) {
      piVar20 = (int *)(lStack_538 + 0x14);
      do {
        iVar1 = *piVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_570);
      }
    }
    lStack_538 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    if (0 < iStack_56c) {
      lVar15 = 0;
      do {
        *(undefined4 *)(lStack_530 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_56c);
    }
    if (puStack_528 != auStack_520 && puStack_528 != (undefined8 *)0x0) {
      _free(puStack_528[-1]);
    }
    uStack_98 = 0x7fffffff80000000;
    uStack_a0 = CONCAT44(iVar9,10);
    FUN_109a84930(&uStack_570,&uStack_510,&uStack_98,&uStack_a0);
    if (iStack_56c == 1) {
      uStack_564 = 1;
    }
    uStack_1c8 = uStack_570 & 0x4fff | 0x42420000;
    uStack_1c4 = (undefined4)*puStack_528;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = uStack_560;
    uStack_1a8 = uStack_568;
    uStack_1a4 = uStack_564;
    if (lStack_538 != 0) {
      piVar20 = (int *)(lStack_538 + 0x14);
      do {
        iVar9 = *piVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        func_0x000109a848d4(&uStack_570);
      }
    }
    lStack_538 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    if (0 < iStack_56c) {
      lVar15 = 0;
      do {
        *(undefined4 *)(lStack_530 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_56c);
    }
    if (puStack_528 != auStack_520 && puStack_528 != (undefined8 *)0x0) {
      _free(puStack_528[-1]);
    }
    if (uStack_4d8 != 0) {
      piVar20 = (int *)(uStack_4d8 + 0x14);
      do {
        iVar9 = *piVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        func_0x000109a848d4(&uStack_510);
      }
    }
    uStack_4d8 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    if (0 < uStack_510._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_4d0 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_510._4_4_);
    }
    if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
      _free(puStack_4c8[-1]);
    }
    puVar19 = &uStack_1c8;
    puVar18 = &uStack_1a0;
    puVar17 = &uStack_178;
    puVar13 = &uStack_150;
    puVar12 = &uStack_128;
  }
  puVar7 = &uStack_278;
  puVar11 = &uStack_390;
  FUN_109b8ab30(param_1,puVar7,puVar11,&uStack_3b8,&uStack_368,&uStack_4a8,&uStack_1f0,puVar12,
                puVar13,puVar17,puVar18,puVar19);
  iVar9 = (int)puVar11;
  if (uStack_448 != 0) {
    piVar20 = (int *)(uStack_448 + 0x14);
    do {
      iVar1 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      puVar7 = (uint *)&uStack_480;
      func_0x000109a848d4();
    }
  }
  uStack_448 = 0;
  puStack_468 = (undefined8 *)0x0;
  puStack_470 = (undefined8 *)0x0;
  plStack_458 = (long *)0x0;
  plStack_460 = (long *)0x0;
  if (0 < (int)uStack_480._4_4_) {
    lVar15 = 0;
    do {
      piStack_440[lVar15] = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_480._4_4_);
  }
  if (puStack_438 != &uStack_430 && puStack_438 != (undefined8 *)0x0) {
    puVar7 = (uint *)puStack_438[-1];
    _free();
  }
  if (uStack_3e8 != 0) {
    piVar20 = (int *)(uStack_3e8 + 0x14);
    do {
      iVar1 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      puVar7 = (uint *)&uStack_420;
      func_0x000109a848d4();
    }
  }
  uStack_3e8 = 0;
  puStack_408 = (undefined8 *)0x0;
  puStack_410 = (undefined8 *)0x0;
  plStack_3f8 = (long *)0x0;
  plStack_400 = (long *)0x0;
  if (0 < (int)uStack_420._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(uStack_3e0 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_420._4_4_);
  }
  if (puStack_3d8 != &uStack_3d0 && puStack_3d8 != (undefined8 *)0x0) {
    puVar7 = (uint *)puStack_3d8[-1];
    _free();
  }
  if (uStack_308 != 0) {
    piVar20 = (int *)(uStack_308 + 0x14);
    do {
      iVar1 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      puVar7 = (uint *)&uStack_340;
      func_0x000109a848d4();
    }
  }
  uStack_308 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  if (0 < uStack_340._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(uStack_300 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_340._4_4_);
  }
  if (puStack_2f8 != &uStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
    puVar7 = (uint *)puStack_2f8[-1];
    _free();
  }
  if (uStack_2a8 != 0) {
    piVar20 = (int *)(uStack_2a8 + 0x14);
    do {
      iVar1 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      puVar7 = (uint *)&uStack_2e0;
      func_0x000109a848d4();
    }
  }
  uStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  if (0 < uStack_2e0._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(uStack_2a0 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_2e0._4_4_);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    puVar7 = (uint *)puStack_298[-1];
    _free();
  }
  if (uStack_218 != 0) {
    piVar20 = (int *)(uStack_218 + 0x14);
    do {
      iVar1 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      puVar7 = (uint *)&uStack_250;
      func_0x000109a848d4();
    }
  }
  uStack_218 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  if (0 < uStack_250._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_250._4_4_);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    puVar7 = (uint *)puStack_208[-1];
    _free();
  }
  if (uStack_c8 != 0) {
    piVar20 = (int *)(uStack_c8 + 0x14);
    do {
      iVar1 = *piVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar3) {
        *piVar20 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      puVar7 = (uint *)&uStack_100;
      func_0x000109a848d4();
    }
  }
  uStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(uStack_c0 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_100._4_4_);
  }
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    puVar7 = (uint *)puStack_b8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_480);
    func_0x00010567aa40(&uStack_420);
    func_0x00010567aa40(&uStack_340);
    func_0x00010567aa40(&uStack_2e0);
    func_0x00010567aa40(&uStack_250);
    func_0x00010567aa40(&uStack_100);
  }
  __Unwind_Resume();
  puVar7[0x22] = 0;
  puVar7[0x23] = 0;
  puVar7[0x20] = 0;
  puVar7[0x21] = 0;
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  puVar7[0x24] = 0;
  puVar7[0x25] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[0] = 0;
  puVar7[1] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2f] = 0;
  puVar7[0x30] = 0;
  puVar7[0x31] = 0;
  FUN_109b8f1cc();
  return puVar7;
}



/* Entry: 109b8f130; end: 109b8f1cb;  */

undefined8 * FUN_109b8f130(undefined8 *param_1)

{
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_109b8f1cc();
  return param_1;
}



/* Entry: 109b8f1cc; end: 109b8f3db;  */

void FUN_109b8f1cc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,double param_5,
                  undefined1 param_6)

{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (*(int *)(*(long *)(param_1 + 0x28) + 0x20) == (int)param_2)) {
    iVar2 = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x48) + 0x20);
    }
    if (iVar2 == (int)param_3) goto LAB_109b8f22c;
  }
  FUN_109b8f3dc(param_1);
LAB_109b8f22c:
  uVar1 = param_2;
  FUN_109a38f44(param_2,1,0);
  FUN_109a3907c();
  FUN_1096696f8(param_1,uVar1);
  FUN_109a4b510(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                *(undefined8 *)(param_1 + 8),0);
  uVar1 = param_2;
  FUN_109a38f44(param_2,1,6);
  FUN_109a3907c();
  FUN_1096696f8(param_1 + 0x10,uVar1);
  uVar1 = param_2;
  FUN_109a38f44(param_2,1,6);
  FUN_109a3907c();
  FUN_1096696f8(param_1 + 0x20,uVar1);
  uVar1 = param_2;
  FUN_109a38f44(param_2,param_2,6);
  FUN_109a3907c();
  FUN_1096696f8(param_1 + 0x50,uVar1);
  uVar1 = param_2;
  FUN_109a38f44(param_2,1,6);
  FUN_109a3907c();
  FUN_1096696f8(param_1 + 0x70,uVar1);
  if (0 < (int)param_3) {
    uVar1 = param_3;
    FUN_109a38f44(param_3,param_2,6);
    FUN_109a3907c();
    FUN_1096696f8(param_1 + 0x30,uVar1);
    FUN_109a38f44(param_3,1,6);
    FUN_109a3907c();
    FUN_1096696f8(param_1 + 0x40,param_3);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xfffffffd;
  *(ulong *)(param_1 + 0xb8) = param_4;
  if ((param_4 & 1) == 0) {
    iVar2 = 0x1e;
  }
  else {
    iVar2 = (int)(param_4 >> 0x20);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    if (999 < iVar2) {
      iVar2 = 1000;
    }
  }
  *(int *)(param_1 + 0xbc) = iVar2;
  dVar3 = 0.0;
  if (0.0 <= param_5) {
    dVar3 = param_5;
  }
  dVar4 = 2.220446049250313e-16;
  if ((param_4 & 2) != 0) {
    dVar4 = dVar3;
  }
  *(double *)(param_1 + 0xc0) = dVar4;
  *(undefined8 *)(param_1 + 200) = 1;
  *(undefined1 *)(param_1 + 0xd0) = param_6;
  *(undefined4 *)(param_1 + 0xd4) = 1;
  return;
}



/* Entry: 109b8f3dc; end: 109b8f5f7;  */

void FUN_109b8f3dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  plVar5 = (long *)param_1[4];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  plVar5 = (long *)param_1[8];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  plVar5 = (long *)param_1[0xc];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar5 = (long *)param_1[0xe];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar5 = (long *)param_1[0x10];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



/* Entry: 109b8f5f8; end: 109b8f667;  */

long * FUN_109b8f5f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  FUN_109b8f3dc();
  FUN_10966b23c(param_1 + 0x12);
  FUN_10966b23c(param_1 + 0x10);
  FUN_10966b23c(param_1 + 0xe);
  FUN_10966b23c(param_1 + 0xc);
  FUN_10966b23c(param_1 + 10);
  FUN_10966b23c(param_1 + 8);
  FUN_10966b23c(param_1 + 6);
  FUN_10966b23c(param_1 + 4);
  FUN_10966b23c(param_1 + 2);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b8f668; end: 109b8f84b;  */

bool FUN_109b8f668(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_5 = 0;
  *param_4 = 0;
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 == 0) {
    *param_3 = *(undefined8 *)(param_2 + 0x28);
    goto LAB_109b8f7bc;
  }
  if (iVar1 == 2) {
    FUN_109a73d04(0x3ff0000000000000,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x58)
                  ,1,0);
    uVar3 = 0x3ff0000000000000;
    FUN_109a73754(0x3ff0000000000000,0,*(undefined8 *)(param_2 + 0x38),
                  *(undefined8 *)(param_2 + 0x48),0,*(undefined8 *)(param_2 + 0x78),1);
    FUN_109a4ad30(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),0);
    FUN_109b8f84c(param_2);
    if (*(int *)(param_2 + 0xcc) == 0) {
      FUN_109abbbac(*(undefined8 *)(param_2 + 0x48),0,4,0);
      *(undefined8 *)(param_2 + 0xa0) = uVar3;
    }
LAB_109b8f79c:
    *param_3 = *(undefined8 *)(param_2 + 0x28);
    FUN_109a4b71c(*(undefined8 *)(param_2 + 0x48));
    *param_5 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = 3;
  }
  else {
    if (iVar1 == 1) {
      *param_3 = *(undefined8 *)(param_2 + 0x28);
      FUN_109a4b71c(*(undefined8 *)(param_2 + 0x38));
      uVar3 = *(undefined8 *)(param_2 + 0x48);
    }
    else {
      FUN_109abbbac(*(undefined8 *)(param_2 + 0x48),0,4,0);
      *(double *)(param_2 + 0xa8) = param_1;
      iVar2 = *(int *)(param_2 + 0xb0);
      iVar5 = iVar2;
      if (*(double *)(param_2 + 0xa0) < param_1) {
        iVar5 = iVar2 + 1;
        *(int *)(param_2 + 0xb0) = iVar5;
        if (iVar2 < 0x10) {
          FUN_109b8f84c(param_2);
          goto LAB_109b8f79c;
        }
      }
      if (iVar5 < -0xe) {
        iVar5 = -0xf;
      }
      *(int *)(param_2 + 0xb0) = iVar5 + -1;
      iVar5 = *(int *)(param_2 + 0xcc) + 1;
      *(int *)(param_2 + 0xcc) = iVar5;
      if ((*(int *)(param_2 + 0xbc) <= iVar5) ||
         (FUN_109abbbac(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),0xc,0),
         param_1 < *(double *)(param_2 + 0xc0))) {
        *param_3 = *(undefined8 *)(param_2 + 0x28);
        *(undefined4 *)(param_2 + 200) = 0;
        goto LAB_109b8f7bc;
      }
      *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0xa8);
      *param_3 = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
    }
    FUN_109a4b71c(uVar3);
    *param_4 = *(undefined8 *)(param_2 + 0x38);
    *param_5 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = 2;
  }
  *(undefined4 *)(param_2 + 200) = uVar4;
LAB_109b8f7bc:
  return iVar1 != 0;
}



/* Entry: 109b8f84c; end: 109b90177;  */

void FUN_109b8f84c(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  double *pdVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c1;
  long lStack_2c0;
  uint *puStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  int iStack_2a4;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_270;
  long lStack_268;
  undefined1 *puStack_260;
  undefined1 auStack_258 [16];
  uint uStack_248;
  undefined8 uStack_244;
  int iStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long lStack_210;
  int *piStack_208;
  long *plStack_200;
  long alStack_1f8 [2];
  undefined1 auStack_1e8 [4];
  int iStack_1e4;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [4];
  int iStack_124;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [4];
  int iStack_c4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  dVar15 = (double)*(int *)(param_1 + 0xb0) * 2.302585092994046;
  _exp(dVar15);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + 0x20);
  FUN_109a85f44(auStack_c8,*(undefined8 *)(param_1 + 0x58),0,1,0,0);
  FUN_109a85f44(auStack_128,*(undefined8 *)(param_1 + 8),0,1,0,0);
  uStack_178 = 0;
  uStack_188._0_4_ = 0x1010000;
  puVar6 = &uStack_188;
  puStack_180 = auStack_128;
  FUN_109ab7930();
  lVar7 = *(long *)(param_1 + 0x68);
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x20) != (int)puVar6)) {
    puVar8 = puVar6;
    FUN_109a38f44(puVar6,puVar6,6);
    FUN_109a3907c();
    FUN_1096696f8(param_1 + 0x60,puVar8);
    puVar8 = puVar6;
    FUN_109a38f44(puVar6,1,6);
    FUN_109a3907c();
    FUN_1096696f8(param_1 + 0x80,puVar8);
    FUN_109a38f44(puVar6,1,6);
    FUN_109a3907c();
    FUN_1096696f8(param_1 + 0x90,puVar6);
    lVar7 = *(long *)(param_1 + 0x68);
  }
  FUN_109a85f44(&uStack_188,lVar7,0,1,0,0);
  FUN_109a85f44(auStack_1e8,*(undefined8 *)(param_1 + 0x88),0,1,0,0);
  FUN_109a85f44(&uStack_2a8,*(undefined8 *)(param_1 + 0x98),0,1,0,0);
  lStack_210 = 0;
  uStack_214 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  piStack_208 = (int *)((long)&uStack_244 + 4);
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  iStack_23c = 0;
  uStack_238 = 0;
  uStack_244 = 0;
  alStack_1f8[0] = 0;
  alStack_1f8[1] = 0;
  uStack_248 = 0x42ff0006;
  plStack_200 = alStack_1f8;
  FUN_109b5e0c8(&uStack_248,&uStack_2a8);
  if (lStack_270 != 0) {
    piVar1 = (int *)(lStack_270 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a8);
    }
  }
  lStack_270 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  if (0 < iStack_2a4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_268 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_2a4);
  }
  if (puStack_260 != auStack_258 && puStack_260 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_260 + -8));
  }
  FUN_109a85f44(&uStack_2a8,*(undefined8 *)(param_1 + 0x78),0,1,0,0);
  uStack_2c1 = 1;
  FUN_109260268(&lStack_2c0,1,&uStack_2c1);
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_68 = CONCAT44(lStack_68._4_4_,0x82030000);
  uStack_58 = 0;
  puStack_60 = (undefined4 *)&lStack_2e0;
  FUN_109a479a0(auStack_128,&lStack_68);
  FUN_109b90178(&uStack_2a8,auStack_1e8,&lStack_2c0,&lStack_2e0);
  if (lStack_2e0 != 0) {
    lStack_2d8 = lStack_2e0;
    __ZdlPv();
  }
  if (lStack_2c0 != 0) {
    puStack_2b8 = (uint *)lStack_2c0;
    __ZdlPv();
  }
  if (lStack_270 != 0) {
    piVar1 = (int *)(lStack_270 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a8);
    }
  }
  lStack_270 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  if (0 < iStack_2a4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_268 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_2a4);
  }
  if (puStack_260 != auStack_258 && puStack_260 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_260 + -8));
  }
  lStack_68 = 0;
  puStack_60 = (undefined4 *)0x0;
  uStack_58 = 0;
  uStack_2a8 = 0x82030000;
  plStack_2a0 = &lStack_68;
  uStack_298 = 0;
  FUN_109a479a0(auStack_128,&uStack_2a8);
  lStack_2c0 = 0;
  puStack_2b8 = (uint *)0x0;
  uStack_2b0 = 0;
  uStack_2a8 = 0x82030000;
  plStack_2a0 = &lStack_2c0;
  uStack_298 = 0;
  FUN_109a479a0(auStack_128,&uStack_2a8);
  FUN_109b90178(auStack_c8,&uStack_188,&lStack_68,&lStack_2c0);
  if (lStack_2c0 != 0) {
    puStack_2b8 = (uint *)lStack_2c0;
    __ZdlPv();
  }
  if (lStack_68 != 0) {
    puStack_60 = (undefined4 *)lStack_68;
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    uStack_2a8 = 0x3010000;
    plStack_2a0 = &uStack_188;
    uStack_298 = 0;
    FUN_109a92d2c(&uStack_2a8,*(undefined1 *)(param_1 + 0xd0));
  }
  FUN_109a856e8(&uStack_2a8,&uStack_188,0);
  lStack_68 = CONCAT44(lStack_68._4_4_,0xc2010000);
  uStack_58 = 0;
  puStack_60 = &uStack_2a8;
  FUN_109a41858(dVar15 + 1.0,0,&uStack_2a8,&lStack_68,0xffffffff);
  if (lStack_270 != 0) {
    piVar1 = (int *)(lStack_270 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a8);
    }
  }
  lStack_270 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  if (0 < iStack_2a4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_268 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_2a4);
  }
  if (puStack_260 != auStack_258 && puStack_260 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_260 + -8));
  }
  uStack_298 = 0;
  uStack_2a8 = 0x1010000;
  plStack_2a0 = &uStack_188;
  uStack_58 = 0;
  lStack_68 = CONCAT44(lStack_68._4_4_,0x1010000);
  puStack_60 = (undefined4 *)auStack_1e8;
  lStack_2c0 = CONCAT44(lStack_2c0._4_4_,0x82010006);
  puStack_2b8 = &uStack_248;
  uStack_2b0 = 0;
  FUN_109a5a63c(&uStack_2a8,&lStack_68,&lStack_2c0,*(undefined4 *)(param_1 + 0xd4));
  if (0 < (int)uVar2) {
    uVar10 = 0;
    iVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x18);
    lVar13 = *(long *)(param_1 + 8);
    lVar7 = CONCAT44(uStack_234,uStack_238);
    lVar14 = *(long *)(param_1 + 0x28);
    do {
      if (*(char *)(*(long *)(lVar13 + 0x18) + uVar10) == '\0') {
        dVar15 = 0.0;
      }
      else {
        if (((uStack_248 >> 0xe & 1) == 0) && (*piStack_208 != 1)) {
          if (piStack_208[1] == 1) {
            pdVar9 = (double *)(lVar7 + *plStack_200 * (long)iVar11);
          }
          else {
            iVar3 = 0;
            if (iStack_23c != 0) {
              iVar3 = iVar11 / iStack_23c;
            }
            pdVar9 = (double *)
                     (lVar7 + *plStack_200 * (long)iVar3 + (long)(iVar11 - iVar3 * iStack_23c) * 8);
          }
        }
        else {
          pdVar9 = (double *)(lVar7 + (long)iVar11 * 8);
        }
        iVar11 = iVar11 + 1;
        dVar15 = *pdVar9;
      }
      *(double *)(*(long *)(lVar14 + 0x18) + uVar10 * 8) =
           *(double *)(*(long *)(lVar12 + 0x18) + uVar10 * 8) - dVar15;
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  if (lStack_210 != 0) {
    piVar1 = (int *)(lStack_210 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_248);
    }
  }
  lStack_210 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  if (0 < (int)uStack_244) {
    lVar7 = 0;
    do {
      piStack_208[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_244);
  }
  if (plStack_200 != alStack_1f8 && plStack_200 != (long *)0x0) {
    _free(plStack_200[-1]);
  }
  if (lStack_1b0 != 0) {
    piVar1 = (int *)(lStack_1b0 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(auStack_1e8);
    }
  }
  lStack_1b0 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  if (0 < iStack_1e4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_1a8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_1e4);
  }
  if (puStack_1a0 != auStack_198 && puStack_1a0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1a0 + -8));
  }
  if (lStack_150 != 0) {
    piVar1 = (int *)(lStack_150 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_188);
    }
  }
  lStack_150 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  if (0 < uStack_188._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_148 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_188._4_4_);
  }
  if (puStack_140 != auStack_138 && puStack_140 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_140 + -8));
  }
  if (lStack_f0 != 0) {
    piVar1 = (int *)(lStack_f0 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(auStack_128);
    }
  }
  lStack_f0 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  if (0 < iStack_124) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_e8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_124);
  }
  if (puStack_e0 != auStack_d8 && puStack_e0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_e0 + -8));
  }
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(auStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (0 < iStack_c4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_c4);
  }
  if (puStack_80 != auStack_78 && puStack_80 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_80 + -8));
  }
  return;
}



/* Entry: 109b90178; end: 109b906f7;  */

uint * FUN_109b90178(undefined8 param_1,double param_2,long param_3,uint *param_4,long *param_5,
                    long *param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_4c0;
  ushort *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_498;
  int iStack_494;
  uint *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_460;
  long lStack_458;
  undefined1 *puStack_450;
  undefined1 auStack_448 [16];
  undefined4 auStack_438 [2];
  undefined4 *puStack_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [4];
  uint uStack_41c;
  int iStack_418;
  int iStack_414;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3e8;
  int *piStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined4 uStack_3c0;
  int iStack_3bc;
  uint *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_388;
  long lStack_380;
  undefined1 *puStack_378;
  undefined1 auStack_370 [16];
  uint uStack_360;
  int iStack_35c;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_328;
  long lStack_320;
  undefined1 *puStack_318;
  undefined1 auStack_310 [16];
  uint uStack_300;
  int iStack_2fc;
  uint uStack_2f8;
  int iStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2c8;
  long lStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [16];
  ushort auStack_2a0 [2];
  int iStack_29c;
  uint uStack_298;
  int iStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_268;
  long lStack_260;
  undefined1 *puStack_258;
  undefined1 auStack_250 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  uint uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined4 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint auStack_d8 [4];
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = SUB84(param_5,0);
  uStack_134 = (undefined4)((ulong)param_5 >> 0x20);
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_140 = 0x81030000;
  uVar8 = (uint)&uStack_140;
  FUN_109ab7930();
  auStack_d8[2] = *(undefined4 *)(param_3 + 8);
  uStack_140 = 0x42ff0000;
  puStack_100 = &uStack_138;
  uStack_134 = 0;
  uStack_130 = 0;
  iStack_13c = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  puVar14 = auStack_d8 + 2;
  puVar6 = (undefined8 *)0x2;
  puVar7 = (undefined8 *)0x6;
  puStack_f8 = &uStack_f0;
  auStack_d8[3] = uVar8;
  FUN_109a83fd0(&uStack_140,2,puVar14,6);
  lVar9 = *param_5;
  lVar10 = param_5[1];
  if (0 < (int)lVar10 - (int)lVar9) {
    lVar12 = 0;
    iVar15 = 0;
    do {
      if (*(char *)(lVar9 + lVar12) != '\0') {
        uStack_1b8 = 0x7fffffff80000000;
        uStack_158._0_4_ = (int)lVar12;
        uStack_158._4_4_ = (int)uStack_158 + 1;
        FUN_109a84930(auStack_d8 + 2,param_3,&uStack_1b8,&uStack_158);
        auStack_d8[0] = 0x80000000;
        auStack_d8[1] = 0x7fffffff;
        uStack_e0 = CONCAT44(iVar15 + 1,iVar15);
        puVar14 = auStack_d8;
        puVar7 = &uStack_e0;
        FUN_109a84930(&uStack_1b8,&uStack_140,puVar14,puVar7);
        uStack_158 = CONCAT44(uStack_158._4_4_,0xc2010000);
        uStack_148 = 0;
        puVar6 = &uStack_158;
        puStack_150 = &uStack_1b8;
        FUN_109a479a0(auStack_d8 + 2);
        if (lStack_180 != 0) {
          piVar13 = (int *)(lStack_180 + 0x14);
          do {
            iVar1 = *piVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(&uStack_1b8);
          }
        }
        lStack_180 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        if (0 < uStack_1b8._4_4_) {
          lVar9 = 0;
          do {
            *(undefined4 *)(lStack_178 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < uStack_1b8._4_4_);
        }
        if (puStack_170 != auStack_168 && puStack_170 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_170 + -8));
        }
        if (lStack_98 != 0) {
          piVar13 = (int *)(lStack_98 + 0x14);
          do {
            iVar1 = *piVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(auStack_d8 + 2);
          }
        }
        lStack_98 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (0 < (int)auStack_d8[3]) {
          lVar9 = 0;
          do {
            *(undefined4 *)(lStack_90 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)auStack_d8[3]);
        }
        if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_88 + -8));
        }
        lVar9 = *param_5;
        lVar10 = param_5[1];
        iVar15 = iVar15 + 1;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)lVar10 - (int)lVar9);
  }
  auStack_d8[2] = 0x81030000;
  uStack_c0 = 0;
  puVar5 = auStack_d8 + 2;
  plStack_c8 = param_6;
  FUN_109ab7930();
  uVar4 = (uint)puVar5;
  if ((((2 < (int)param_4[1]) || (param_4[2] != uVar4)) || (param_4[3] != uVar8)) ||
     (((*param_4 & 0xfff) != 6 || (*(long *)(param_4 + 4) == 0)))) {
    puVar14 = auStack_d8 + 2;
    puVar6 = (undefined8 *)0x2;
    puVar7 = (undefined8 *)0x6;
    puVar5 = param_4;
    auStack_d8[2] = uVar4;
    auStack_d8[3] = uVar8;
    FUN_109a83fd0(param_4,2,puVar14,6);
  }
  uVar8 = (uint)param_8;
  lVar9 = *param_6;
  lVar10 = param_6[1];
  if (0 < (int)lVar10 - (int)lVar9) {
    lVar12 = 0;
    iVar15 = 0;
    do {
      if (*(char *)(lVar9 + lVar12) != '\0') {
        uStack_1b8 = CONCAT44((int)lVar12 + 1,(int)lVar12);
        uStack_158 = 0x7fffffff80000000;
        FUN_109a84930(auStack_d8 + 2,&uStack_140,&uStack_1b8,&uStack_158);
        auStack_d8[1] = iVar15 + 1;
        auStack_d8[0] = iVar15;
        uStack_e0 = 0x7fffffff80000000;
        puVar14 = auStack_d8;
        puVar7 = &uStack_e0;
        FUN_109a84930(&uStack_1b8,param_4,puVar14,puVar7);
        uStack_158 = CONCAT44(uStack_158._4_4_,0xc2010000);
        uStack_148 = 0;
        puVar5 = auStack_d8 + 2;
        puVar6 = &uStack_158;
        puStack_150 = &uStack_1b8;
        FUN_109a479a0();
        if (lStack_180 != 0) {
          piVar13 = (int *)(lStack_180 + 0x14);
          do {
            iVar1 = *piVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            puVar5 = (uint *)&uStack_1b8;
            func_0x000109a848d4();
          }
        }
        lStack_180 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        if (0 < uStack_1b8._4_4_) {
          lVar9 = 0;
          do {
            *(undefined4 *)(lStack_178 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < uStack_1b8._4_4_);
        }
        if (puStack_170 != auStack_168 && puStack_170 != (undefined1 *)0x0) {
          puVar5 = *(uint **)(puStack_170 + -8);
          _free();
        }
        if (lStack_98 != 0) {
          piVar13 = (int *)(lStack_98 + 0x14);
          do {
            iVar1 = *piVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            puVar5 = auStack_d8 + 2;
            func_0x000109a848d4();
          }
        }
        lStack_98 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (0 < (int)auStack_d8[3]) {
          lVar9 = 0;
          do {
            *(undefined4 *)(lStack_90 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)auStack_d8[3]);
        }
        if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
          puVar5 = *(uint **)(puStack_88 + -8);
          _free();
        }
        lVar9 = *param_6;
        lVar10 = param_6[1];
        iVar15 = iVar15 + 1;
      }
      uVar8 = (uint)param_8;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)lVar10 - (int)lVar9);
  }
  if (lStack_108 != 0) {
    piVar13 = (int *)(lStack_108 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      puVar5 = &uStack_140;
      func_0x000109a848d4();
    }
  }
  lStack_108 = 0;
  uVar16 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < iStack_13c) {
    lVar9 = 0;
    do {
      puStack_100[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_13c);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    puVar5 = (uint *)puStack_f8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  if ((int)puVar6 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_140);
  }
  __Unwind_Resume(puVar5);
  FUN_109a85f44(auStack_2a0);
  FUN_109a85f44(&uStack_300,puVar6,0,1,0,0);
  if (((auStack_2a0[0] & 0xff8) == 0) && ((uStack_298 & 0xfffffffe) == 2 && 3 < iStack_294)) {
    uStack_360 = 0x1010000;
    puStack_3b8 = (uint *)auStack_2a0;
    uStack_350 = 0;
    uStack_3c0 = 0x2010000;
    uStack_3b0 = 0;
    puStack_358 = puStack_3b8;
    FUN_109a895d0(&uStack_360,&uStack_3c0);
  }
  if ((((ushort)uStack_300 & 0xff8) == 0) && ((uStack_2f8 & 0xfffffffe) == 2 && 3 < iStack_2f4)) {
    uStack_360 = 0x1010000;
    puStack_3b8 = &uStack_300;
    uStack_350 = 0;
    uStack_3c0 = 0x2010000;
    uStack_3b0 = 0;
    puStack_358 = puStack_3b8;
    FUN_109a895d0(&uStack_360,&uStack_3c0);
  }
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  if (1999 < (int)uVar8) {
    uVar8 = 2000;
  }
  dVar17 = 0.0;
  if (0.0 <= param_2) {
    dVar17 = param_2;
  }
  dVar18 = 1.0;
  if (dVar17 <= 1.0) {
    dVar18 = dVar17;
  }
  FUN_109a85f44(&uStack_360,puVar14,0,1,0,0);
  FUN_109a85f44(&uStack_3c0,param_7,0,1,0,0);
  uStack_488 = 0;
  uStack_498 = 0x1010000;
  puStack_490 = (uint *)auStack_2a0;
  uStack_4b0 = 0;
  uStack_4c0 = CONCAT44(uStack_4c0._4_4_,0x1010000);
  puStack_4b8 = (ushort *)&uStack_300;
  auStack_438[0] = 0x2000000;
  if (param_7 != 0) {
    auStack_438[0] = 0xc2010000;
  }
  puStack_430 = (undefined4 *)0x0;
  if (param_7 != 0) {
    puStack_430 = &uStack_3c0;
  }
  uStack_428 = 0;
  FUN_109b93554(auStack_420,uVar16,dVar18,&uStack_498,&uStack_4c0,puVar7,auStack_438,uVar8);
  if (lStack_410 != 0) {
    uVar11 = (ulong)uStack_41c;
    if ((int)uStack_41c < 3) {
      lVar9 = (long)iStack_414 * (long)iStack_418;
    }
    else {
      lVar9 = 1;
      piVar13 = piStack_3e0;
      do {
        lVar9 = lVar9 * *piVar13;
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar11 != 0);
    }
    if (lVar9 != 0) {
      uStack_498 = 0xc2010000;
      puStack_490 = &uStack_360;
      uStack_488 = 0;
      FUN_109a41858(0x3ff0000000000000,0,auStack_420,&uStack_498,uStack_360 & 0xfff);
      puVar14 = (uint *)0x1;
      goto LAB_109b90a14;
    }
  }
  FUN_109a85f44(&uStack_498,puVar14,0,1,0,0);
  puStack_4b8 = (ushort *)0x0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  auStack_438[0] = 0xc1020006;
  uStack_428 = 0x400000001;
  puStack_430 = (undefined4 *)&uStack_4c0;
  FUN_109a91d90();
  FUN_109a48a40(&uStack_498,auStack_438,puVar14);
  if (lStack_460 != 0) {
    piVar13 = (int *)(lStack_460 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_498);
    }
  }
  lStack_460 = 0;
  uStack_480 = 0;
  uStack_488 = 0;
  uStack_470 = 0;
  uStack_478 = 0;
  if (0 < iStack_494) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_458 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_494);
  }
  if (puStack_450 != auStack_448 && puStack_450 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_450 + -8));
  }
  puVar14 = (uint *)0x0;
LAB_109b90a14:
  if (lStack_3e8 != 0) {
    piVar13 = (int *)(lStack_3e8 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(auStack_420);
    }
  }
  lStack_3e8 = 0;
  uStack_408 = 0;
  lStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  if (0 < (int)uStack_41c) {
    lVar9 = 0;
    do {
      piStack_3e0[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_41c);
  }
  if (puStack_3d8 != auStack_3d0 && puStack_3d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_3d8 + -8));
  }
  if (lStack_388 != 0) {
    piVar13 = (int *)(lStack_388 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_3c0);
    }
  }
  lStack_388 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  if (0 < iStack_3bc) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_380 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_3bc);
  }
  if (puStack_378 != auStack_370 && puStack_378 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_378 + -8));
  }
  if (lStack_328 != 0) {
    piVar13 = (int *)(lStack_328 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_360);
    }
  }
  lStack_328 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  if (0 < iStack_35c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_320 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_35c);
  }
  if (puStack_318 != auStack_310 && puStack_318 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_318 + -8));
  }
  if (lStack_2c8 != 0) {
    piVar13 = (int *)(lStack_2c8 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_300);
    }
  }
  lStack_2c8 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  if (0 < iStack_2fc) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_2c0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_2fc);
  }
  if (puStack_2b8 != auStack_2b0 && puStack_2b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_2b8 + -8));
  }
  if (lStack_268 != 0) {
    piVar13 = (int *)(lStack_268 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(auStack_2a0);
    }
  }
  lStack_268 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  if (0 < iStack_29c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_260 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_29c);
  }
  if (puStack_258 != auStack_250 && puStack_258 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_258 + -8));
  }
  return puVar14;
}



/* Entry: 109b906f8; end: 109b90d2b;  */

undefined8
FUN_109b906f8(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,uint param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_2e0;
  ushort *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2b8;
  int iStack_2b4;
  uint *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_280;
  long lStack_278;
  undefined1 *puStack_270;
  undefined1 auStack_268 [16];
  undefined4 auStack_258 [2];
  undefined4 *puStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [4];
  uint uStack_23c;
  int iStack_238;
  int iStack_234;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  int *piStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined4 uStack_1e0;
  int iStack_1dc;
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [16];
  uint uStack_180;
  int iStack_17c;
  uint *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [16];
  uint uStack_120;
  int iStack_11c;
  uint uStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [16];
  ushort auStack_c0 [2];
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  FUN_109a85f44(auStack_c0,param_3,0,1,0,0);
  FUN_109a85f44(&uStack_120,param_4,0,1,0,0);
  if (((auStack_c0[0] & 0xff8) == 0) && ((uStack_b8 & 0xfffffffe) == 2 && 3 < iStack_b4)) {
    uStack_180 = 0x1010000;
    puStack_1d8 = (uint *)auStack_c0;
    uStack_170 = 0;
    uStack_1e0 = 0x2010000;
    uStack_1d0 = 0;
    puStack_178 = puStack_1d8;
    FUN_109a895d0(&uStack_180,&uStack_1e0);
  }
  if ((((ushort)uStack_120 & 0xff8) == 0) && ((uStack_118 & 0xfffffffe) == 2 && 3 < iStack_114)) {
    uStack_180 = 0x1010000;
    puStack_1d8 = &uStack_120;
    uStack_170 = 0;
    uStack_1e0 = 0x2010000;
    uStack_1d0 = 0;
    puStack_178 = puStack_1d8;
    FUN_109a895d0(&uStack_180,&uStack_1e0);
  }
  param_8 = param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU);
  if (1999 < (int)param_8) {
    param_8 = 2000;
  }
  dVar8 = 0.0;
  if (0.0 <= param_2) {
    dVar8 = param_2;
  }
  dVar9 = 1.0;
  if (dVar8 <= 1.0) {
    dVar9 = dVar8;
  }
  FUN_109a85f44(&uStack_180,param_5,0,1,0,0);
  FUN_109a85f44(&uStack_1e0,param_7,0,1,0,0);
  uStack_2a8 = 0;
  uStack_2b8 = 0x1010000;
  puStack_2b0 = (uint *)auStack_c0;
  uStack_2d0 = 0;
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x1010000);
  puStack_2d8 = (ushort *)&uStack_120;
  auStack_258[0] = 0x2000000;
  if (param_7 != 0) {
    auStack_258[0] = 0xc2010000;
  }
  puStack_250 = (undefined4 *)0x0;
  if (param_7 != 0) {
    puStack_250 = &uStack_1e0;
  }
  uStack_248 = 0;
  FUN_109b93554(auStack_240,param_1,dVar9,&uStack_2b8,&uStack_2e0,param_6,auStack_258,param_8);
  if (lStack_230 != 0) {
    uVar4 = (ulong)uStack_23c;
    if ((int)uStack_23c < 3) {
      lVar5 = (long)iStack_234 * (long)iStack_238;
    }
    else {
      lVar5 = 1;
      piVar6 = piStack_200;
      do {
        lVar5 = lVar5 * *piVar6;
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 1;
      } while (uVar4 != 0);
    }
    if (lVar5 != 0) {
      uStack_2b8 = 0xc2010000;
      puStack_2b0 = &uStack_180;
      uStack_2a8 = 0;
      FUN_109a41858(0x3ff0000000000000,0,auStack_240,&uStack_2b8,uStack_180 & 0xfff);
      uVar7 = 1;
      goto LAB_109b90a14;
    }
  }
  FUN_109a85f44(&uStack_2b8,param_5,0,1,0,0);
  puStack_2d8 = (ushort *)0x0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  auStack_258[0] = 0xc1020006;
  uStack_248 = 0x400000001;
  puStack_250 = (undefined4 *)&uStack_2e0;
  FUN_109a91d90();
  FUN_109a48a40(&uStack_2b8,auStack_258,param_5);
  if (lStack_280 != 0) {
    piVar6 = (int *)(lStack_280 + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b8);
    }
  }
  lStack_280 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  if (0 < iStack_2b4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_278 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_2b4);
  }
  if (puStack_270 != auStack_268 && puStack_270 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_270 + -8));
  }
  uVar7 = 0;
LAB_109b90a14:
  if (lStack_208 != 0) {
    piVar6 = (int *)(lStack_208 + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_240);
    }
  }
  lStack_208 = 0;
  uStack_228 = 0;
  lStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < (int)uStack_23c) {
    lVar5 = 0;
    do {
      piStack_200[lVar5] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_23c);
  }
  if (puStack_1f8 != auStack_1f0 && puStack_1f8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1f8 + -8));
  }
  if (lStack_1a8 != 0) {
    piVar6 = (int *)(lStack_1a8 + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_1e0);
    }
  }
  lStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (0 < iStack_1dc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1a0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_1dc);
  }
  if (puStack_198 != auStack_190 && puStack_198 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_198 + -8));
  }
  if (lStack_148 != 0) {
    piVar6 = (int *)(lStack_148 + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_180);
    }
  }
  lStack_148 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (0 < iStack_17c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_140 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_17c);
  }
  if (puStack_138 != auStack_130 && puStack_138 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_138 + -8));
  }
  if (lStack_e8 != 0) {
    piVar6 = (int *)(lStack_e8 + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_120);
    }
  }
  lStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < iStack_11c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_e0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_11c);
  }
  if (puStack_d8 != auStack_d0 && puStack_d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_d8 + -8));
  }
  if (lStack_88 != 0) {
    piVar6 = (int *)(lStack_88 + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < iStack_bc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_bc);
  }
  if (puStack_78 != auStack_70 && puStack_78 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_78 + -8));
  }
  return uVar7;
}



/* Entry: 109b90d2c; end: 109b91453;  */

void FUN_109b90d2c(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uStack_1f0;
  uint *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  int *piStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined4 auStack_188 [2];
  uint *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  int *piStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  
  FUN_109a85f44(&uStack_b0,param_1,0,1,0,0);
  FUN_109a85f44(&uStack_110,param_2,0,1,0,0);
  piStack_130 = (int *)((ulong)&uStack_170 | 8);
  uStack_168 = uStack_108;
  uStack_170 = uStack_110;
  uStack_158 = uStack_f8;
  lStack_160 = lStack_100;
  uStack_148 = uStack_e8;
  uStack_150 = uStack_f0;
  lStack_138 = lStack_d8;
  uStack_140 = uStack_e0;
  uStack_120 = 0;
  uStack_118 = 0;
  if (lStack_d8 != 0) {
    piVar1 = (int *)(lStack_d8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_128 = &uStack_120;
  if (uStack_110._4_4_ < 3) {
    uStack_120 = *puStack_c8;
    uStack_118 = puStack_c8[1];
  }
  else {
    uStack_170 = uStack_110 & 0xffffffff;
    func_0x000109a84868(&uStack_170,&uStack_110);
  }
  uVar5 = uStack_b0 >> 3 & 0x1ff;
  if (uVar5 == 0) {
    iVar12 = iStack_a4;
    if (iStack_a8 <= iStack_a4) {
      iVar12 = iStack_a8;
    }
    if (iStack_a8 < iStack_a4) {
      uStack_1f0 = (undefined4 *)CONCAT44(uStack_1f0._4_4_,0x1010000);
      puStack_1e8 = &uStack_b0;
      lStack_1e0 = 0;
      auStack_188[0] = 0x2010000;
      uStack_178 = 0;
      puStack_180 = puStack_1e8;
      FUN_109a895d0(&uStack_1f0,auStack_188);
    }
  }
  else {
    iVar12 = uVar5 + 1;
  }
  if ((int)uStack_108 <= uStack_108._4_4_) {
    uStack_108._4_4_ = (int)uStack_108;
  }
  uVar5 = (uint)uStack_110 >> 3 & 0x1ff;
  iVar2 = uStack_108._4_4_;
  if (uVar5 != 0) {
    iVar2 = uVar5 + 1;
  }
  if (iVar12 == iVar2) {
    uStack_1f0._0_4_ = 0x2010000;
    puStack_1e8 = (uint *)&uStack_110;
    lStack_1e0 = 0;
    FUN_109a479a0(&uStack_b0,&uStack_1f0);
  }
  else if (iVar12 < iVar2) {
    uStack_1f0._0_4_ = 0x1010000;
    puStack_1e8 = &uStack_b0;
    lStack_1e0 = 0;
    auStack_188[0] = 0x2010000;
    puStack_180 = (uint *)&uStack_110;
    uStack_178 = 0;
    FUN_109b96b08(&uStack_1f0,auStack_188);
  }
  else {
    uStack_1f0._0_4_ = 0x1010000;
    puStack_1e8 = &uStack_b0;
    lStack_1e0 = 0;
    auStack_188[0] = 0x2010000;
    puStack_180 = (uint *)&uStack_110;
    uStack_178 = 0;
    FUN_109b953b8(&uStack_1f0,auStack_188);
  }
  iVar7 = uStack_168._4_4_;
  uVar5 = (uint)uStack_170 >> 3 & 0x1ff;
  iVar12 = uStack_168._4_4_;
  if (uVar5 != 0 || uStack_168._4_4_ <= iVar2) {
    iVar12 = (int)uStack_168;
  }
  FUN_109a890bc(&uStack_1f0,&uStack_110,uVar5 + 1,iVar12);
  if (lStack_d8 != 0) {
    piVar1 = (int *)(lStack_d8 + 0x14);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  if (0 < uStack_110._4_4_) {
    lVar10 = 0;
    do {
      piStack_d0[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < uStack_110._4_4_);
  }
  uStack_108 = puStack_1e8;
  uStack_110._0_4_ = (uint)uStack_1f0;
  uStack_110._4_4_ = uStack_1f0._4_4_;
  uStack_f8 = uStack_1d8;
  lStack_100 = lStack_1e0;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  lStack_d8 = lStack_1b8;
  uStack_e0 = uStack_1c0;
  puVar11 = puStack_c8;
  if ((puStack_c8 != auStack_c0) &&
     (piStack_d0 = (int *)((ulong)&uStack_110 | 8), puVar11 = auStack_c0,
     puStack_c8 != (undefined8 *)0x0)) {
    _free(puStack_c8[-1]);
  }
  puStack_c8 = puVar11;
  puVar11 = puStack_1a8;
  piVar1 = piStack_1b0;
  uVar6 = uStack_168;
  if (uStack_1f0._4_4_ < 3) {
    puVar11 = (undefined8 *)((ulong)&uStack_1f0 | 4);
    *puStack_c8 = *puStack_1a8;
    puStack_c8[1] = puStack_1a8[1];
    uStack_1f0._0_4_ = 0x42ff0000;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    *(undefined8 *)((long)puVar11 + 0x34) = 0;
    *(undefined8 *)((long)puVar11 + 0x2c) = 0;
    puVar11 = puStack_c8;
    piVar1 = piStack_d0;
    if (puStack_1a8 != auStack_1a0) {
      _free(puStack_1a8[-1]);
      puVar11 = puStack_c8;
      piVar1 = piStack_d0;
      uVar6 = uStack_168;
    }
  }
  piStack_d0 = piVar1;
  puStack_c8 = puVar11;
  uStack_168 = uVar6;
  if (uVar5 != 0 || iVar7 <= iVar2) {
    if ((piStack_d0[1] == piStack_130[1]) && (*piStack_d0 == *piStack_130)) {
      if (lStack_100 != lStack_160) {
        uStack_1f0._0_4_ = 0xc2010000;
        puStack_1e8 = (uint *)&uStack_170;
        lStack_1e0 = 0;
        FUN_109a41858(0x3ff0000000000000,0,&uStack_110,&uStack_1f0,(uint)uStack_170 & 0xfff);
      }
LAB_109b91140:
      if (lStack_138 != 0) {
        piVar1 = (int *)(lStack_138 + 0x14);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(&uStack_170);
        }
      }
      lStack_138 = 0;
      uStack_158 = 0;
      lStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      if (0 < uStack_170._4_4_) {
        lVar10 = 0;
        do {
          piStack_130[lVar10] = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_170._4_4_);
      }
      if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
        _free(puStack_128[-1]);
      }
      if (lStack_d8 != 0) {
        piVar1 = (int *)(lStack_d8 + 0x14);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      lStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if (0 < uStack_110._4_4_) {
        lVar10 = 0;
        do {
          piStack_d0[lVar10] = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_110._4_4_);
      }
      if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      if (lStack_78 != 0) {
        piVar1 = (int *)(lStack_78 + 0x14);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(&uStack_b0);
        }
      }
      lStack_78 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (0 < iStack_ac) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_70 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_ac);
      }
      if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_68 + -8));
      }
      return;
    }
    puVar9 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    uStack_1f0 = puVar9 + 1;
    puStack_1e8 = (uint *)0x19;
    *(undefined1 *)((long)puVar9 + 0x1d) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x7364203d3d202928;
    *(undefined8 *)(puVar9 + 1) = 0x657a69732e747364;
    *(undefined8 *)((long)puVar9 + 0x15) = 0x2928657a69732e30;
    *(undefined8 *)((long)puVar9 + 0xd) = 0x747364203d3d2029;
    FUN_109ac3188(0xffffff29,&uStack_1f0,&UNK_10f5a2824,&UNK_10f5a276b,0x1d5);
  }
  else {
    uStack_168._4_4_ = (int)((ulong)uVar6 >> 0x20);
    if ((int)uStack_108 == uStack_168._4_4_) {
      uStack_108._4_4_ = (int)((ulong)uStack_108 >> 0x20);
      uStack_168._0_4_ = (int)uVar6;
      if (uStack_108._4_4_ == (int)uStack_168) {
        if ((((uint)uStack_110 ^ (uint)uStack_170) & 0xfff) == 0) {
          uStack_1f0._0_4_ = 0x1010000;
          puStack_1e8 = (uint *)&uStack_110;
          lStack_1e0 = 0;
          auStack_188[0] = 0xc2010000;
          puStack_180 = (uint *)&uStack_170;
          uStack_178 = 0;
          FUN_109a895d0(&uStack_1f0,auStack_188);
        }
        else {
          uStack_1f0._0_4_ = 0x1010000;
          puStack_1e8 = (uint *)&uStack_110;
          lStack_1e0 = 0;
          auStack_188[0] = 0x2010000;
          uStack_178 = 0;
          puStack_180 = puStack_1e8;
          FUN_109a895d0(&uStack_1f0,auStack_188);
          uStack_1f0._0_4_ = 0xc2010000;
          puStack_1e8 = (uint *)&uStack_170;
          lStack_1e0 = 0;
          FUN_109a41858(0x3ff0000000000000,0,&uStack_110,&uStack_1f0,(uint)uStack_170 & 0xfff);
        }
        goto LAB_109b91140;
      }
    }
    puVar9 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    uStack_1f0 = puVar9 + 1;
    puStack_1e8 = (uint *)0x2e;
    *(undefined1 *)((long)puVar9 + 0x32) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x30747364203d3d20;
    *(undefined8 *)(puVar9 + 1) = 0x73776f722e747364;
    *(undefined8 *)(puVar9 + 7) = 0x6c6f632e74736420;
    *(undefined8 *)(puVar9 + 5) = 0x262620736c6f632e;
    *(undefined8 *)((long)puVar9 + 0x2a) = 0x73776f722e307473;
    *(undefined8 *)((long)puVar9 + 0x22) = 0x64203d3d20736c6f;
    FUN_109ac3188(0xffffff29,&uStack_1f0,&UNK_10f5a2824,&UNK_10f5a276b,0x1ca);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109b9138c);
  (*pcVar8)();
}



/* Entry: 109b91454; end: 109b91e53;  */

double * FUN_109b91454(double *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  double *pdVar13;
  float *pfVar14;
  double *pdVar15;
  ulong uVar16;
  double *pdVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  double *pdVar27;
  uint uVar28;
  double *pdVar29;
  undefined8 *puVar30;
  float *pfVar31;
  long lVar32;
  ulong uVar33;
  float *pfVar34;
  double dVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  
  pdVar27 = param_1 + 4;
  param_1[5] = 0.0;
  *pdVar27 = 0.0;
  param_1[0xb] = 0.0;
  param_1[10] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0xe] = 0.0;
  param_1[7] = 0.0;
  param_1[6] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  pdVar17 = *(double **)(param_2 + 4);
  plVar18 = *(long **)(param_2 + 0x12);
  if ((*param_2 & 7) == 5) {
    lVar19 = *plVar18;
    fVar38 = *(float *)((long)pdVar17 + lVar19 + 4);
    fVar37 = *(float *)((long)pdVar17 + lVar19 + 8);
    *param_1 = (double)*(float *)(pdVar17 + 1);
    param_1[1] = (double)fVar37;
    param_1[2] = (double)*(float *)pdVar17;
    dVar35 = (double)fVar38;
  }
  else {
    *param_1 = pdVar17[2];
    lVar19 = *plVar18;
    param_1[1] = *(double *)((long)pdVar17 + lVar19 + 0x10);
    param_1[2] = *pdVar17;
    dVar35 = *(double *)((long)pdVar17 + lVar19 + 8);
  }
  param_1[3] = dVar35;
  puVar11 = param_3;
  FUN_109a89cd4(param_3,3,5,1);
  puVar12 = param_3;
  FUN_109a89cd4(param_3,3,6,1);
  iVar25 = (int)puVar11;
  if ((int)puVar11 <= (int)puVar12) {
    iVar25 = (int)puVar12;
  }
  *(int *)(param_1 + 0x10) = iVar25;
  func_0x000108a851e4(pdVar27,(long)(iVar25 * 3));
  func_0x000108a851e4(param_1 + 7,(long)*(int *)(param_1 + 0x10) << 1);
  uVar5 = *param_3;
  uVar21 = uVar5 & 7;
  uVar6 = *param_4;
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar16 = (ulong)uVar7;
  if (uVar21 == (uVar6 & 7)) {
    if (uVar21 == 5) {
      if (0 < (int)uVar7) {
        lVar20 = 0;
        lVar22 = 0;
        lVar23 = 0;
        uVar24 = 0;
        lVar19 = 0;
        uVar21 = param_3[3];
        lVar26 = *(long *)(param_3 + 4);
        piVar2 = *(int **)(param_3 + 0x10);
        plVar18 = *(long **)(param_3 + 0x12);
        uVar8 = param_4[3];
        pfVar14 = *(float **)(param_4 + 4);
        piVar3 = *(int **)(param_4 + 0x10);
        plVar4 = *(long **)(param_4 + 0x12);
        pdVar17 = (double *)((long)param_1[7] + 8);
        pfVar34 = pfVar14;
        do {
          iVar25 = (int)lVar19;
          uVar33 = uVar24;
          if ((uVar5 >> 0xe & 1) == 0) {
            if (*piVar2 == 1) {
              dVar35 = *pdVar27;
              *(double *)((long)dVar35 + uVar24 * 8) = (double)*(float *)(lVar26 + lVar23);
              *(double *)((long)dVar35 + (uVar24 & 0xffffffff) * 8 + 8) =
                   (double)*(float *)(lVar26 + uVar24 * 4 + 4);
              uVar33 = (ulong)(uint)(iVar25 * 3);
              goto LAB_109b91628;
            }
            if (piVar2[1] == 1) {
              lVar32 = *plVar18 * lVar19;
              pfVar31 = (float *)(lVar26 + lVar32);
              dVar35 = *pdVar27;
              *(double *)((long)dVar35 + uVar24 * 8) = (double)*pfVar31;
              *(double *)((long)dVar35 + (lVar22 >> 0x1d) + 8) =
                   (double)*(float *)(lVar26 + 4 + lVar32);
            }
            else {
              iVar10 = 0;
              if (uVar21 != 0) {
                iVar10 = iVar25 / (int)uVar21;
              }
              lVar32 = *plVar18 * (long)iVar10;
              pfVar31 = (float *)(lVar26 + lVar23 + lVar32 + (long)(int)(iVar10 * uVar21) * -0xc);
              fVar37 = pfVar31[1];
              dVar35 = *pdVar27;
              *(double *)((long)dVar35 + uVar24 * 8) = (double)*pfVar31;
              pfVar31 = (float *)(lVar26 + lVar32 + (long)(int)(iVar25 - iVar10 * uVar21) * 0xc);
              uVar33 = (ulong)(uint)(iVar25 * 3);
              *(double *)((long)dVar35 + (lVar22 >> 0x1d) + 8) = (double)fVar37;
            }
          }
          else {
            dVar35 = *pdVar27;
            uVar36 = *(undefined8 *)(lVar26 + lVar23);
            ((double *)((long)dVar35 + lVar20))[1] = (double)(float)((ulong)uVar36 >> 0x20);
            *(double *)((long)dVar35 + lVar20) = (double)(float)uVar36;
LAB_109b91628:
            pfVar31 = (float *)(lVar26 + lVar23);
          }
          *(double *)((long)dVar35 + (long)(int)uVar33 * 8 + 0x10) = (double)pfVar31[2];
          pfVar31 = pfVar34;
          if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
            if (piVar3[1] == 1) {
              pfVar31 = (float *)((long)pfVar14 + *plVar4 * lVar19);
            }
            else {
              iVar10 = 0;
              if (uVar8 != 0) {
                iVar10 = iVar25 / (int)uVar8;
              }
              pfVar31 = (float *)((long)pfVar14 +
                                 (long)(int)(iVar25 - iVar10 * uVar8) * 8 + *plVar4 * (long)iVar10);
            }
          }
          pdVar17[-1] = *param_1 + param_1[2] * (double)*pfVar31;
          pfVar31 = pfVar34;
          if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
            if (piVar3[1] == 1) {
              pfVar31 = (float *)((long)pfVar14 + *plVar4 * lVar19);
            }
            else {
              iVar10 = 0;
              if (uVar8 != 0) {
                iVar10 = iVar25 / (int)uVar8;
              }
              pfVar31 = (float *)((long)pfVar14 +
                                 (long)(int)(iVar25 - iVar10 * uVar8) * 8 + *plVar4 * (long)iVar10);
            }
          }
          *pdVar17 = param_1[1] + param_1[3] * (double)pfVar31[1];
          lVar19 = lVar19 + 1;
          uVar24 = uVar24 + 3;
          lVar23 = lVar23 + 0xc;
          lVar22 = lVar22 + 0x300000000;
          pfVar34 = pfVar34 + 2;
          lVar20 = lVar20 + 0x18;
          pdVar17 = pdVar17 + 2;
        } while (uVar16 * 3 != uVar24);
      }
    }
    else if (0 < (int)uVar7) {
      lVar23 = 0;
      uVar21 = 0;
      lVar19 = 0;
      lVar20 = *(long *)(param_3 + 4);
      uVar8 = param_3[3];
      piVar2 = *(int **)(param_3 + 0x10);
      plVar18 = *(long **)(param_3 + 0x12);
      uVar9 = param_4[3];
      pdVar13 = *(double **)(param_4 + 4);
      piVar3 = *(int **)(param_4 + 0x10);
      plVar4 = *(long **)(param_4 + 0x12);
      pdVar15 = (double *)((long)param_1[7] + 8);
      pdVar17 = pdVar13;
      do {
        iVar25 = (int)lVar19;
        if ((uVar5 >> 0xe & 1) == 0) {
          if (*piVar2 == 1) {
            dVar35 = *pdVar27;
            *(undefined8 *)((long)dVar35 + lVar23) = *(undefined8 *)(lVar20 + lVar23);
            *(undefined8 *)((long)dVar35 + (ulong)(uVar21 + 1) * 8) =
                 ((undefined8 *)(lVar20 + lVar23))[1];
            goto LAB_109b91a6c;
          }
          uVar28 = iVar25 * 3;
          if (piVar2[1] == 1) {
            lVar22 = *plVar18 * lVar19;
            puVar30 = (undefined8 *)(lVar20 + lVar22);
            dVar35 = *pdVar27;
            *(undefined8 *)((long)dVar35 + lVar23) = *puVar30;
            uVar36 = *(undefined8 *)(lVar20 + 8 + lVar22);
          }
          else {
            iVar10 = 0;
            if (uVar8 != 0) {
              iVar10 = iVar25 / (int)uVar8;
            }
            lVar22 = *plVar18 * (long)iVar10;
            puVar30 = (undefined8 *)(lVar20 + lVar22 + (long)(int)(iVar25 - iVar10 * uVar8) * 0x18);
            puVar1 = (undefined8 *)(lVar20 + lVar23 + lVar22 + (long)(int)(iVar10 * uVar8) * -0x18);
            dVar35 = *pdVar27;
            *(undefined8 *)((long)dVar35 + lVar23) = *puVar1;
            uVar36 = puVar1[1];
          }
          *(undefined8 *)((long)dVar35 + (ulong)uVar21 * 8 + 8) = uVar36;
        }
        else {
          dVar35 = *pdVar27;
          *(undefined8 *)((long)dVar35 + lVar23) = *(undefined8 *)(lVar20 + lVar23);
          ((undefined8 *)((long)dVar35 + lVar23))[1] = ((undefined8 *)(lVar20 + lVar23))[1];
LAB_109b91a6c:
          puVar30 = (undefined8 *)(lVar20 + lVar23);
          uVar28 = uVar21;
        }
        *(undefined8 *)((long)dVar35 + (long)(int)uVar28 * 8 + 0x10) = puVar30[2];
        pdVar29 = pdVar17;
        if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
          if (piVar3[1] == 1) {
            pdVar29 = (double *)((long)pdVar13 + *plVar4 * lVar19);
          }
          else {
            iVar10 = 0;
            if (uVar9 != 0) {
              iVar10 = iVar25 / (int)uVar9;
            }
            pdVar29 = (double *)
                      ((long)pdVar13 +
                      (long)(int)(iVar25 - iVar10 * uVar9) * 0x10 + *plVar4 * (long)iVar10);
          }
        }
        pdVar15[-1] = *param_1 + param_1[2] * *pdVar29;
        pdVar29 = pdVar17;
        if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
          if (piVar3[1] == 1) {
            pdVar29 = (double *)((long)pdVar13 + *plVar4 * lVar19);
          }
          else {
            iVar10 = 0;
            if (uVar9 != 0) {
              iVar10 = iVar25 / (int)uVar9;
            }
            pdVar29 = (double *)
                      ((long)pdVar13 +
                      (long)(int)(iVar25 - iVar10 * uVar9) * 0x10 + *plVar4 * (long)iVar10);
          }
        }
        *pdVar15 = param_1[1] + param_1[3] * pdVar29[1];
        lVar19 = lVar19 + 1;
        uVar21 = uVar21 + 3;
        lVar23 = lVar23 + 0x18;
        pdVar17 = pdVar17 + 2;
        pdVar15 = pdVar15 + 2;
      } while (uVar16 * 0x18 - lVar23 != 0);
    }
  }
  else if (uVar21 == 5) {
    if (0 < (int)uVar7) {
      lVar20 = 0;
      lVar22 = 0;
      lVar23 = 0;
      uVar24 = 0;
      lVar19 = 0;
      uVar21 = param_3[3];
      lVar26 = *(long *)(param_3 + 4);
      piVar2 = *(int **)(param_3 + 0x10);
      plVar18 = *(long **)(param_3 + 0x12);
      uVar8 = param_4[3];
      pdVar13 = *(double **)(param_4 + 4);
      piVar3 = *(int **)(param_4 + 0x10);
      plVar4 = *(long **)(param_4 + 0x12);
      pdVar15 = (double *)((long)param_1[7] + 8);
      pdVar17 = pdVar13;
      do {
        iVar25 = (int)lVar19;
        uVar33 = uVar24;
        if ((uVar5 >> 0xe & 1) == 0) {
          if (*piVar2 == 1) {
            dVar35 = *pdVar27;
            *(double *)((long)dVar35 + uVar24 * 8) = (double)*(float *)(lVar26 + lVar23);
            *(double *)((long)dVar35 + (uVar24 & 0xffffffff) * 8 + 8) =
                 (double)*(float *)(lVar26 + uVar24 * 4 + 4);
            uVar33 = (ulong)(uint)(iVar25 * 3);
            goto LAB_109b91858;
          }
          if (piVar2[1] == 1) {
            lVar32 = *plVar18 * lVar19;
            pfVar34 = (float *)(lVar26 + lVar32);
            dVar35 = *pdVar27;
            *(double *)((long)dVar35 + uVar24 * 8) = (double)*pfVar34;
            *(double *)((long)dVar35 + (lVar22 >> 0x1d) + 8) =
                 (double)*(float *)(lVar26 + 4 + lVar32);
          }
          else {
            iVar10 = 0;
            if (uVar21 != 0) {
              iVar10 = iVar25 / (int)uVar21;
            }
            lVar32 = *plVar18 * (long)iVar10;
            pfVar34 = (float *)(lVar26 + lVar23 + lVar32 + (long)(int)(iVar10 * uVar21) * -0xc);
            fVar37 = pfVar34[1];
            dVar35 = *pdVar27;
            *(double *)((long)dVar35 + uVar24 * 8) = (double)*pfVar34;
            pfVar34 = (float *)(lVar26 + lVar32 + (long)(int)(iVar25 - iVar10 * uVar21) * 0xc);
            uVar33 = (ulong)(uint)(iVar25 * 3);
            *(double *)((long)dVar35 + (lVar22 >> 0x1d) + 8) = (double)fVar37;
          }
        }
        else {
          dVar35 = *pdVar27;
          uVar36 = *(undefined8 *)(lVar26 + lVar23);
          ((double *)((long)dVar35 + lVar20))[1] = (double)(float)((ulong)uVar36 >> 0x20);
          *(double *)((long)dVar35 + lVar20) = (double)(float)uVar36;
LAB_109b91858:
          pfVar34 = (float *)(lVar26 + lVar23);
        }
        *(double *)((long)dVar35 + (long)(int)uVar33 * 8 + 0x10) = (double)pfVar34[2];
        pdVar29 = pdVar17;
        if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
          if (piVar3[1] == 1) {
            pdVar29 = (double *)((long)pdVar13 + *plVar4 * lVar19);
          }
          else {
            iVar10 = 0;
            if (uVar8 != 0) {
              iVar10 = iVar25 / (int)uVar8;
            }
            pdVar29 = (double *)
                      ((long)pdVar13 +
                      (long)(int)(iVar25 - iVar10 * uVar8) * 0x10 + *plVar4 * (long)iVar10);
          }
        }
        pdVar15[-1] = *param_1 + param_1[2] * *pdVar29;
        pdVar29 = pdVar17;
        if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
          if (piVar3[1] == 1) {
            pdVar29 = (double *)((long)pdVar13 + *plVar4 * lVar19);
          }
          else {
            iVar10 = 0;
            if (uVar8 != 0) {
              iVar10 = iVar25 / (int)uVar8;
            }
            pdVar29 = (double *)
                      ((long)pdVar13 +
                      (long)(int)(iVar25 - iVar10 * uVar8) * 0x10 + *plVar4 * (long)iVar10);
          }
        }
        *pdVar15 = param_1[1] + param_1[3] * pdVar29[1];
        lVar19 = lVar19 + 1;
        uVar24 = uVar24 + 3;
        lVar23 = lVar23 + 0xc;
        lVar22 = lVar22 + 0x300000000;
        pdVar17 = pdVar17 + 2;
        lVar20 = lVar20 + 0x18;
        pdVar15 = pdVar15 + 2;
      } while (uVar16 * 3 != uVar24);
    }
  }
  else if (0 < (int)uVar7) {
    lVar23 = 0;
    uVar21 = 0;
    lVar19 = 0;
    lVar20 = *(long *)(param_3 + 4);
    uVar8 = param_3[3];
    piVar2 = *(int **)(param_3 + 0x10);
    plVar18 = *(long **)(param_3 + 0x12);
    uVar9 = param_4[3];
    pfVar14 = *(float **)(param_4 + 4);
    piVar3 = *(int **)(param_4 + 0x10);
    plVar4 = *(long **)(param_4 + 0x12);
    pdVar17 = (double *)((long)param_1[7] + 8);
    pfVar34 = pfVar14;
    do {
      iVar25 = (int)lVar19;
      if ((uVar5 >> 0xe & 1) == 0) {
        if (*piVar2 == 1) {
          dVar35 = *pdVar27;
          *(undefined8 *)((long)dVar35 + lVar23) = *(undefined8 *)(lVar20 + lVar23);
          *(undefined8 *)((long)dVar35 + (ulong)(uVar21 + 1) * 8) =
               ((undefined8 *)(lVar20 + lVar23))[1];
          goto LAB_109b91c60;
        }
        uVar28 = iVar25 * 3;
        if (piVar2[1] == 1) {
          lVar22 = *plVar18 * lVar19;
          puVar30 = (undefined8 *)(lVar20 + lVar22);
          dVar35 = *pdVar27;
          *(undefined8 *)((long)dVar35 + lVar23) = *puVar30;
          uVar36 = *(undefined8 *)(lVar20 + 8 + lVar22);
        }
        else {
          iVar10 = 0;
          if (uVar8 != 0) {
            iVar10 = iVar25 / (int)uVar8;
          }
          lVar22 = *plVar18 * (long)iVar10;
          puVar30 = (undefined8 *)(lVar20 + lVar22 + (long)(int)(iVar25 - iVar10 * uVar8) * 0x18);
          puVar1 = (undefined8 *)(lVar20 + lVar23 + lVar22 + (long)(int)(iVar10 * uVar8) * -0x18);
          dVar35 = *pdVar27;
          *(undefined8 *)((long)dVar35 + lVar23) = *puVar1;
          uVar36 = puVar1[1];
        }
        *(undefined8 *)((long)dVar35 + (ulong)uVar21 * 8 + 8) = uVar36;
      }
      else {
        dVar35 = *pdVar27;
        *(undefined8 *)((long)dVar35 + lVar23) = *(undefined8 *)(lVar20 + lVar23);
        ((undefined8 *)((long)dVar35 + lVar23))[1] = ((undefined8 *)(lVar20 + lVar23))[1];
LAB_109b91c60:
        puVar30 = (undefined8 *)(lVar20 + lVar23);
        uVar28 = uVar21;
      }
      *(undefined8 *)((long)dVar35 + (long)(int)uVar28 * 8 + 0x10) = puVar30[2];
      pfVar31 = pfVar34;
      if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
        if (piVar3[1] == 1) {
          pfVar31 = (float *)((long)pfVar14 + *plVar4 * lVar19);
        }
        else {
          iVar10 = 0;
          if (uVar9 != 0) {
            iVar10 = iVar25 / (int)uVar9;
          }
          pfVar31 = (float *)((long)pfVar14 +
                             (long)(int)(iVar25 - iVar10 * uVar9) * 8 + *plVar4 * (long)iVar10);
        }
      }
      pdVar17[-1] = *param_1 + param_1[2] * (double)*pfVar31;
      pfVar31 = pfVar34;
      if (((uVar6 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
        if (piVar3[1] == 1) {
          pfVar31 = (float *)((long)pfVar14 + *plVar4 * lVar19);
        }
        else {
          iVar10 = 0;
          if (uVar9 != 0) {
            iVar10 = iVar25 / (int)uVar9;
          }
          pfVar31 = (float *)((long)pfVar14 +
                             (long)(int)(iVar25 - iVar10 * uVar9) * 8 + *plVar4 * (long)iVar10);
        }
      }
      *pdVar17 = param_1[1] + param_1[3] * (double)pfVar31[1];
      lVar19 = lVar19 + 1;
      uVar21 = uVar21 + 3;
      lVar23 = lVar23 + 0x18;
      pfVar34 = pfVar34 + 2;
      pdVar17 = pdVar17 + 2;
    } while (uVar16 * 0x18 - lVar23 != 0);
  }
  func_0x000108a851e4(param_1 + 10,(long)(int)uVar7 << 2);
  func_0x000108a851e4(param_1 + 0xd,(long)*(int *)(param_1 + 0x10) * 3);
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0.0;
  param_1[0x2b] = 0.0;
  return param_1;
}



/* Entry: 109b91e54; end: 109b91ecb;  */

long FUN_109b91e54(long param_1)

{
  if (*(long *)(param_1 + 0x150) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b91ecc; end: 109b92b97;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_109b91ecc(double *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  double *pdVar7;
  code *pcVar8;
  bool bVar9;
  double *pdVar10;
  double *pdVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  double *pdVar18;
  uint *puVar19;
  ulong *puVar20;
  double *pdVar21;
  double *pdVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined4 *extraout_x8;
  long *plVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  bool bVar29;
  double dVar30;
  undefined1 *puVar31;
  ulong uVar32;
  double **ppdVar33;
  undefined8 *puVar34;
  long lVar35;
  double dVar36;
  double *pdVar37;
  double *pdVar38;
  int iVar39;
  double dVar40;
  undefined8 *puVar41;
  long lVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  int iVar46;
  double *pdVar47;
  double *pdVar48;
  double *pdVar49;
  int iVar50;
  uint uVar51;
  int *piVar52;
  int *piVar53;
  uint uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  double dVar57;
  double *pdVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  undefined8 *puStack_1b18;
  undefined8 *puStack_1b10;
  undefined8 uStack_1b08;
  undefined8 *puStack_1b00;
  undefined8 *puStack_1af8;
  undefined8 uStack_1af0;
  uint auStack_1ae8 [2];
  ulong *puStack_1ae0;
  undefined8 uStack_1ad8;
  undefined8 uStack_1ad0;
  uint *puStack_1ac8;
  ulong uStack_1ac0;
  ulong uStack_1ab8;
  ulong uStack_1ab0;
  ulong uStack_1aa8;
  ulong uStack_1aa0;
  ulong uStack_1a98;
  ulong uStack_1a90;
  undefined8 *puStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  long *plStack_1970;
  long *plStack_1968;
  undefined1 auStack_1960 [8];
  undefined1 auStack_1958 [4];
  undefined4 uStack_1954;
  undefined4 uStack_1950;
  undefined4 uStack_194c;
  undefined4 uStack_1948;
  undefined4 uStack_1944;
  undefined4 uStack_1940;
  undefined4 uStack_193c;
  undefined4 uStack_1938;
  undefined4 uStack_1934;
  undefined4 uStack_1930;
  undefined4 uStack_192c;
  long lStack_1928;
  undefined1 *puStack_1920;
  undefined8 *puStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined4 uStack_18f8;
  undefined4 uStack_18f4;
  undefined4 uStack_18f0;
  undefined4 uStack_18ec;
  undefined4 uStack_18e8;
  undefined4 uStack_18e4;
  undefined4 uStack_18e0;
  undefined4 uStack_18dc;
  undefined4 uStack_18d8;
  undefined4 uStack_18d4;
  undefined4 uStack_18d0;
  undefined4 uStack_18cc;
  long lStack_18c8;
  undefined4 *puStack_18c0;
  undefined8 *puStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined4 uStack_1890;
  undefined4 uStack_188c;
  undefined4 uStack_1888;
  undefined4 uStack_1884;
  undefined4 uStack_1880;
  undefined4 uStack_187c;
  undefined4 uStack_1878;
  undefined4 uStack_1874;
  undefined4 uStack_1870;
  undefined4 uStack_186c;
  long lStack_1868;
  undefined8 *puStack_1860;
  undefined8 *puStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  uint uStack_1840;
  int iStack_183c;
  undefined4 uStack_1838;
  undefined4 uStack_1834;
  undefined4 uStack_1830;
  undefined4 uStack_182c;
  undefined4 uStack_1828;
  undefined4 uStack_1824;
  undefined4 uStack_1820;
  undefined4 uStack_181c;
  undefined4 uStack_1818;
  undefined4 uStack_1814;
  undefined4 uStack_1810;
  undefined4 uStack_180c;
  ulong uStack_1808;
  ulong uStack_1800;
  undefined8 *puStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  ulong uStack_17d8;
  ulong uStack_17d0;
  ulong uStack_17c8;
  ulong uStack_17c0;
  ulong uStack_17b8;
  ulong uStack_17b0;
  ulong uStack_17a8;
  ulong uStack_17a0;
  undefined8 *puStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  ulong uStack_1778;
  ulong uStack_1770;
  ulong uStack_1768;
  ulong uStack_1760;
  ulong uStack_1758;
  ulong uStack_1750;
  ulong uStack_1748;
  ulong uStack_1740;
  undefined8 *puStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  long lStack_1720;
  long *plStack_1718;
  uint uStack_1710;
  int iStack_170c;
  undefined8 uStack_1708;
  undefined4 uStack_1700;
  undefined4 uStack_16fc;
  undefined4 uStack_16f8;
  undefined4 uStack_16f4;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined4 uStack_16e0;
  undefined4 uStack_16dc;
  long lStack_16d8;
  undefined8 *puStack_16d0;
  undefined8 *puStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  uint uStack_16b0;
  int iStack_16ac;
  undefined8 uStack_16a8;
  undefined4 uStack_16a0;
  undefined4 uStack_169c;
  undefined4 uStack_1698;
  undefined4 uStack_1694;
  undefined4 uStack_1690;
  undefined4 uStack_168c;
  undefined4 uStack_1688;
  undefined4 uStack_1684;
  undefined4 uStack_1680;
  undefined4 uStack_167c;
  long lStack_1678;
  ulong uStack_1670;
  undefined8 *puStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  uint *puStack_1648;
  ulong uStack_1640;
  ulong uStack_1638;
  ulong uStack_1630;
  ulong uStack_1628;
  ulong uStack_1620;
  ulong uStack_1618;
  ulong uStack_1610;
  undefined8 *puStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  long *plStack_15e8;
  uint uStack_15e0;
  int iStack_15dc;
  undefined8 uStack_15d8;
  undefined4 uStack_15d0;
  undefined4 uStack_15cc;
  undefined4 uStack_15c8;
  undefined4 uStack_15c4;
  undefined4 uStack_15c0;
  undefined4 uStack_15bc;
  undefined4 uStack_15b8;
  undefined4 uStack_15b4;
  undefined4 uStack_15b0;
  undefined4 uStack_15ac;
  long lStack_15a8;
  ulong uStack_15a0;
  undefined8 *puStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  long lStack_1578;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  double dStack_1550;
  undefined8 uStack_1548;
  double *pdStack_1540;
  double *pdStack_1538;
  double *pdStack_1530;
  double *pdStack_1528;
  undefined1 *puStack_1520;
  double *pdStack_1518;
  double *pdStack_1510;
  double *pdStack_1508;
  double *pdStack_1500;
  double *pdStack_14f8;
  undefined1 ***pppuStack_14f0;
  code *pcStack_14e8;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined4 uStack_14c8;
  double *pdStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined4 uStack_14a0;
  double *pdStack_1498;
  undefined8 uStack_1490;
  uint auStack_1488 [6];
  undefined1 *puStack_1470;
  undefined8 uStack_1468;
  uint auStack_1460 [6];
  undefined1 *puStack_1448;
  undefined8 uStack_1440;
  double adStack_1438 [9];
  double adStack_13f0 [9];
  undefined1 auStack_13a8 [24];
  undefined1 auStack_1390 [16];
  double adStack_1380 [7];
  double adStack_1348 [6];
  long lStack_1318;
  double *pdStack_1310;
  double *pdStack_1308;
  double *pdStack_1300;
  double *pdStack_12f8;
  ulong uStack_12f0;
  double *pdStack_12e8;
  double *pdStack_12e0;
  double *pdStack_12d8;
  undefined1 **ppuStack_12d0;
  code *pcStack_12c8;
  double *pdStack_12b8;
  double adStack_12b0 [10];
  double adStack_1260 [2];
  double adStack_1250 [9];
  double adStack_1208 [13];
  long lStack_11a0;
  double dStack_1190;
  double dStack_1188;
  undefined1 *puStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined4 uStack_1110;
  double *pdStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined4 uStack_10e8;
  double *pdStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  ulong *puStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined4 uStack_1098;
  undefined1 *puStack_1090;
  undefined8 uStack_1088;
  ulong auStack_1080 [3];
  undefined4 uStack_1068;
  double *pdStack_1060;
  undefined8 uStack_1058;
  double adStack_1050 [3];
  undefined1 auStack_1038 [24];
  undefined1 auStack_1020 [24];
  double adStack_1008 [2];
  double adStack_ff8 [5];
  double dStack_fd0;
  double dStack_fc8;
  double dStack_fc0;
  double dStack_fb8;
  double dStack_fb0;
  double dStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  double dStack_f90;
  double dStack_f88;
  double dStack_f80;
  undefined8 uStack_f78;
  double dStack_f70;
  double dStack_f68;
  double dStack_f60;
  double dStack_f58;
  double dStack_f50;
  double dStack_f48;
  undefined8 auStack_f40 [2];
  double *apdStack_f30 [3];
  double adStack_f18 [55];
  double adStack_d60 [96];
  double adStack_a60 [12];
  undefined1 auStack_a00 [96];
  double adStack_9a0 [12];
  undefined1 auStack_940 [96];
  ulong auStack_8e0 [12];
  undefined1 auStack_880 [1152];
  double adStack_400 [2];
  double dStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3b8 [72];
  double adStack_370 [9];
  double adStack_328 [9];
  double adStack_2e0 [18];
  double adStack_250 [18];
  double dStack_1c0;
  double dStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double *pdStack_1a8;
  undefined8 uStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double *pdStack_168;
  double *pdStack_160;
  uint uStack_15c;
  double *apdStack_158 [4];
  long lStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar58 = param_1 + 0x11;
  *pdVar58 = 0.0;
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  uVar51 = *(uint *)(param_1 + 0x10);
  auStack_8e0[0] = (ulong)uVar51;
  if (0 < (int)uVar51) {
    uVar25 = 0;
    dVar30 = param_1[4];
    do {
      lVar35 = 0;
      do {
        *(double *)((long)pdVar58 + lVar35) =
             *(double *)((long)dVar30 + lVar35) + *(double *)((long)pdVar58 + lVar35);
        lVar35 = lVar35 + 8;
      } while (lVar35 != 0x18);
      uVar25 = uVar25 + 1;
      dVar30 = (double)((long)dVar30 + 0x18);
    } while (uVar25 != auStack_8e0[0]);
  }
  lVar35 = 0x88;
  do {
    *(double *)((long)param_1 + lVar35) = *(double *)((long)param_1 + lVar35) / (double)(int)uVar51;
    lVar35 = lVar35 + 8;
  } while (lVar35 != 0xa0);
  FUN_109a38f44(auStack_8e0[0],3,6);
  FUN_109a3907c();
  uStack_3e0 = 0x300000003;
  adStack_400[0] = 5.14771211404477e-313;
  puStack_3e8 = auStack_880;
  adStack_400[1] = 0.0;
  dStack_3f0._0_4_ = 0;
  apdStack_f30[2] = (double *)0x100000003;
  auStack_f40[0] = 0x842424006;
  apdStack_f30[1] = adStack_ff8 + 1;
  auStack_f40[1] = 0;
  apdStack_f30[0]._0_4_ = 0;
  apdStack_158[1] = (double *)0x300000003;
  uStack_170 = (undefined1 *)0x1842424006;
  apdStack_158[0] = adStack_d60;
  pdStack_168 = (double *)0x0;
  pdStack_160 = (double *)((ulong)uStack_15c << 0x20);
  uVar51 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar51) {
    lVar35 = 0;
    uVar25 = 0;
    dVar30 = param_1[4];
    do {
      lVar44 = 0x11;
      lVar45 = lVar35;
      do {
        *(double *)(*(long *)(auStack_8e0[0] + 0x18) + lVar45) =
             *(double *)((long)dVar30 + lVar45) - param_1[lVar44];
        lVar44 = lVar44 + 1;
        lVar45 = lVar45 + 8;
      } while (lVar44 != 0x14);
      uVar25 = uVar25 + 1;
      lVar35 = lVar35 + 0x18;
    } while (uVar25 != uVar51);
  }
  FUN_109a73d04(0x3ff0000000000000,auStack_8e0[0],adStack_400,1,0);
  FUN_109a5dcc4(adStack_400,auStack_f40,&uStack_170,0,3);
  FUN_109a395e8(auStack_8e0);
  lVar44 = 0;
  iVar39 = *(int *)(param_1 + 0x10);
  lVar35 = 1;
  do {
    dVar30 = adStack_ff8[lVar35];
    lVar45 = 0x11;
    lVar42 = lVar44;
    do {
      *(double *)((long)param_1 + lVar42 + 0xa0) =
           param_1[lVar45] + *(double *)((long)adStack_d60 + lVar42) * SQRT(dVar30 / (double)iVar39)
      ;
      lVar45 = lVar45 + 1;
      lVar42 = lVar42 + 8;
    } while (lVar45 != 0x14);
    lVar35 = lVar35 + 1;
    lVar44 = lVar44 + 0x18;
  } while (lVar35 != 4);
  lVar35 = 0;
  uStack_3e0 = 0x300000003;
  adStack_400[0] = 5.14771211404477e-313;
  puVar31 = auStack_880;
  adStack_400[1] = 0.0;
  dStack_3f0._0_4_ = 0;
  apdStack_f30[2] = (double *)0x300000003;
  auStack_f40[0] = 0x1842424006;
  apdStack_f30[1] = adStack_d60;
  auStack_f40[1] = 0;
  lVar44 = 0xa0;
  apdStack_f30[0]._0_4_ = 0;
  puStack_3e8 = puVar31;
  do {
    lVar45 = 0;
    dVar30 = pdVar58[lVar35];
    lVar42 = lVar44;
    do {
      *(double *)(puVar31 + lVar45) = *(double *)((long)param_1 + lVar42) - dVar30;
      lVar45 = lVar45 + 8;
      lVar42 = lVar42 + 0x18;
    } while (lVar45 != 0x18);
    lVar35 = lVar35 + 1;
    puVar31 = puVar31 + 0x18;
    lVar44 = lVar44 + 8;
  } while (lVar35 != 3);
  FUN_109a5d684(adStack_400,auStack_f40,1);
  uVar51 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar51) {
    uVar25 = 0;
    dVar36 = param_1[4];
    dVar40 = param_1[10];
    dVar30 = dVar40;
    do {
      pdVar48 = (double *)((long)dVar36 + uVar25 * 0x18);
      lVar35 = 8;
      pdVar58 = (double *)((long)dVar40 + uVar25 * 0x20);
      pdVar49 = adStack_d60 + 2;
      do {
        *(double *)((long)dVar30 + lVar35) =
             pdVar49[-1] * (pdVar48[1] - param_1[0x12]) + (*pdVar48 - param_1[0x11]) * pdVar49[-2] +
             (pdVar48[2] - param_1[0x13]) * *pdVar49;
        lVar35 = lVar35 + 8;
        pdVar49 = pdVar49 + 3;
      } while (lVar35 != 0x20);
      *pdVar58 = ((1.0 - pdVar58[1]) - pdVar58[2]) - pdVar58[3];
      uVar25 = uVar25 + 1;
      dVar30 = (double)((long)dVar30 + 0x20);
    } while (uVar25 != uVar51);
  }
  uVar25 = (ulong)(uVar51 << 1);
  FUN_109a38f44(uVar25,0xc,6);
  FUN_109a3907c();
  uVar51 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar51) {
    uVar32 = 0;
    dVar30 = param_1[10];
    dVar36 = param_1[7];
    do {
      lVar35 = 0;
      pdVar58 = (double *)((long)dVar36 + uVar32 * 0x10);
      dVar40 = *pdVar58;
      dVar57 = pdVar58[1];
      pdVar58 = (double *)
                (*(long *)(uVar25 + 0x18) + ((long)((ulong)(uint)((int)uVar32 * 3) << 0x23) >> 0x1d)
                + 0x70);
      do {
        pdVar58[-0xe] = *(double *)((long)dVar30 + lVar35) * param_1[2];
        pdVar58[-0xd] = 0.0;
        pdVar58[-0xc] = *(double *)((long)dVar30 + lVar35) * (*param_1 - dVar40);
        pdVar58[-2] = 0.0;
        pdVar58[-1] = *(double *)((long)dVar30 + lVar35) * param_1[3];
        *pdVar58 = *(double *)((long)dVar30 + lVar35) * (param_1[1] - dVar57);
        lVar35 = lVar35 + 8;
        pdVar58 = pdVar58 + 3;
      } while (lVar35 != 0x20);
      uVar32 = uVar32 + 1;
      dVar30 = (double)((long)dVar30 + 0x20);
    } while (uVar32 != uVar51);
  }
  uStack_1088 = 0xc0000000c;
  puStack_1090 = auStack_880;
  uStack_10a0 = 0;
  uStack_1098 = 0;
  uStack_10b0 = 0x10000000c;
  uStack_10a8 = 0x6042424006;
  uStack_10d8 = 0xc0000000c;
  uStack_10d0 = 0x842424006;
  puStack_10b8 = auStack_8e0;
  uStack_10c8 = 0;
  uStack_10c0 = 0;
  uStack_10f8 = 0x6042424006;
  pdStack_10e0 = adStack_d60;
  uStack_10f0 = 0;
  uStack_10e8 = 0;
  auStack_1080[0] = uVar25;
  FUN_109a73d04(0x3ff0000000000000,uVar25,&uStack_10a8,1,0);
  FUN_109a5dcc4(&uStack_10a8,&uStack_10d0,&uStack_10f8,0,3);
  FUN_109a395e8(auStack_1080);
  lVar35 = 0;
  uStack_1100 = 0x100000006;
  uStack_1120 = 0x842424006;
  pdStack_1108 = &dStack_f70;
  uStack_1118 = 0;
  uStack_1110 = 0;
  uStack_170 = auStack_940;
  pdStack_168 = adStack_9a0;
  pdStack_160 = (double *)auStack_a00;
  apdStack_158[0] = adStack_a60;
  pdVar58 = &dStack_3f0;
  do {
    iVar39 = 0;
    lVar45 = (&uStack_170)[lVar35];
    lVar44 = 6;
    pdVar49 = pdVar58;
    iVar43 = 1;
    do {
      pdVar48 = (double *)(lVar45 + (ulong)(uint)(iVar39 * 3) * 8);
      pdVar10 = (double *)(lVar45 + (long)(iVar43 * 3) * 8);
      dVar30 = *pdVar48;
      dVar36 = *pdVar10;
      pdVar49[-1] = pdVar48[1] - pdVar10[1];
      pdVar49[-2] = dVar30 - dVar36;
      iVar46 = iVar39 + 2;
      *pdVar49 = pdVar48[2] - pdVar10[2];
      if (iVar43 < 3) {
        iVar46 = iVar43 + 1;
      }
      else {
        iVar39 = iVar39 + 1;
      }
      lVar44 = lVar44 + -1;
      pdVar49 = pdVar49 + 3;
      iVar43 = iVar46;
    } while (lVar44 != 0);
    lVar35 = lVar35 + 1;
    pdVar58 = pdVar58 + 0x12;
  } while (lVar35 != 4);
  lVar35 = 0;
  pdVar58 = adStack_f18;
  do {
    dVar30 = *(double *)((long)adStack_400 + lVar35);
    dVar40 = *(double *)((long)adStack_400 + lVar35 + 8);
    dVar61 = *(double *)((long)&dStack_3f0 + lVar35);
    dVar63 = *(double *)((long)adStack_370 + lVar35);
    dVar64 = *(double *)((long)adStack_370 + lVar35 + 8);
    dVar66 = *(double *)((long)adStack_370 + lVar35 + 0x10);
    dVar67 = *(double *)((long)adStack_2e0 + lVar35);
    dVar68 = *(double *)((long)adStack_2e0 + lVar35 + 8);
    dVar70 = *(double *)((long)adStack_2e0 + lVar35 + 0x10);
    dVar65 = dVar40 * dVar64 + dVar63 * dVar30 + dVar66 * dVar61;
    dVar71 = *(double *)((long)adStack_250 + lVar35);
    dVar72 = *(double *)((long)adStack_250 + lVar35 + 8);
    dVar57 = *(double *)((long)adStack_250 + lVar35 + 0x10);
    dVar69 = dVar40 * dVar68 + dVar67 * dVar30 + dVar70 * dVar61;
    dVar36 = dVar40 * dVar72 + dVar71 * dVar30 + dVar57 * dVar61;
    dVar62 = dVar64 * dVar68 + dVar67 * dVar63 + dVar70 * dVar66;
    pdVar58[-5] = dVar40 * dVar40 + dVar30 * dVar30 + dVar61 * dVar61;
    pdVar58[-4] = dVar65 + dVar65;
    pdVar58[-3] = dVar64 * dVar64 + dVar63 * dVar63 + dVar66 * dVar66;
    pdVar58[-2] = dVar69 + dVar69;
    dVar40 = dVar64 * dVar72 + dVar71 * dVar63 + dVar57 * dVar66;
    pdVar58[-1] = dVar62 + dVar62;
    *pdVar58 = dVar68 * dVar68 + dVar67 * dVar67 + dVar70 * dVar70;
    dVar30 = dVar68 * dVar72 + dVar71 * dVar67 + dVar57 * dVar70;
    pdVar58[1] = dVar36 + dVar36;
    pdVar58[2] = dVar40 + dVar40;
    pdVar58[3] = dVar30 + dVar30;
    pdVar58[4] = dVar72 * dVar72 + dVar71 * dVar71 + dVar57 * dVar57;
    lVar35 = lVar35 + 0x18;
    pdVar58 = pdVar58 + 10;
  } while (lVar35 != 0x90);
  lVar35 = 0;
  dVar30 = param_1[0x11];
  dVar36 = param_1[0x12];
  dVar57 = param_1[0x13];
  dVar40 = param_1[0x14];
  dVar62 = param_1[0x15];
  dVar63 = param_1[0x16];
  dVar64 = param_1[0x17];
  dVar65 = param_1[0x18];
  dVar67 = param_1[0x19];
  dVar68 = param_1[0x1a];
  dStack_f70 = (dVar36 - dVar62) * (dVar36 - dVar62) + (dVar30 - dVar40) * (dVar30 - dVar40) +
               (dVar57 - dVar63) * (dVar57 - dVar63);
  dStack_f68 = (dVar36 - dVar65) * (dVar36 - dVar65) + (dVar30 - dVar64) * (dVar30 - dVar64) +
               (dVar57 - dVar67) * (dVar57 - dVar67);
  dVar61 = param_1[0x1b];
  dVar66 = param_1[0x1c];
  dStack_f60 = (dVar36 - dVar61) * (dVar36 - dVar61) + (dVar30 - dVar68) * (dVar30 - dVar68) +
               (dVar57 - dVar66) * (dVar57 - dVar66);
  dStack_f58 = (dVar62 - dVar65) * (dVar62 - dVar65) + (dVar40 - dVar64) * (dVar40 - dVar64) +
               (dVar63 - dVar67) * (dVar63 - dVar67);
  dStack_f50 = (dVar62 - dVar61) * (dVar62 - dVar61) + (dVar40 - dVar68) * (dVar40 - dVar68) +
               (dVar63 - dVar66) * (dVar63 - dVar66);
  dStack_f48 = (dVar65 - dVar61) * (dVar65 - dVar61) + (dVar64 - dVar68) * (dVar64 - dVar68) +
               (dVar67 - dVar66) * (dVar67 - dVar66);
  uStack_178 = 0x400000006;
  dStack_198 = 6.84530874681698e-313;
  puStack_180 = &uStack_170;
  dStack_190 = 0.0;
  dStack_188 = (double)((ulong)dStack_188 & 0xffffffff00000000);
  uStack_1058 = 0x100000004;
  auStack_1080[1] = 0x842424006;
  pdStack_1060 = &dStack_1c0;
  auStack_1080[2] = 0;
  uStack_1068 = 0;
  ppdVar33 = apdStack_f30 + 1;
  do {
    pdVar58 = ppdVar33[-3];
    *(double **)((long)&pdStack_168 + lVar35) = ppdVar33[-2];
    *(double **)((long)&uStack_170 + lVar35) = pdVar58;
    pdVar58 = ppdVar33[3];
    *(double **)((long)&stack0xfffffffffffffea0 + lVar35) = *ppdVar33;
    *(double **)((long)apdStack_158 + lVar35) = pdVar58;
    lVar35 = lVar35 + 0x20;
    ppdVar33 = ppdVar33 + 10;
  } while (lVar35 != 0xc0);
  FUN_109a5d938(&dStack_198,&uStack_1120,auStack_1080 + 1,1);
  if (0.0 <= dStack_1c0) {
    dVar30 = SQRT(dStack_1c0);
    dStack_fc8 = dStack_1b8 / dVar30;
    dStack_fc0 = (double)CONCAT44(uStack_1ac,uStack_1b0) / dVar30;
  }
  else {
    dVar30 = SQRT(-dStack_1c0);
    dStack_fc8 = -dStack_1b8 / dVar30;
    dStack_fc0 = -(double)CONCAT44(uStack_1ac,uStack_1b0) / dVar30;
    pdStack_1a8 = (double *)-(double)pdStack_1a8;
  }
  dStack_fb8 = (double)pdStack_1a8 / dVar30;
  dStack_fd0 = dVar30;
  FUN_109b92b98(param_1,auStack_f40,&uStack_1120,&dStack_fd0);
  FUN_109b92fcc(param_1,adStack_d60,&dStack_fd0,auStack_3b8,auStack_1038);
  lVar35 = 0;
  uStack_178 = 0x300000006;
  dStack_198 = 5.14771211404477e-313;
  puStack_180 = &uStack_170;
  dStack_190 = 0.0;
  dStack_188 = (double)((ulong)dStack_188 & 0xffffffff00000000);
  uStack_1058 = 0x100000003;
  auStack_1080[1] = 0x842424006;
  pdStack_1060 = &dStack_1c0;
  auStack_1080[2] = 0;
  uStack_1068 = 0;
  ppdVar33 = apdStack_f30;
  do {
    pdVar58 = ppdVar33[-2];
    *(double **)((long)&pdStack_168 + lVar35) = ppdVar33[-1];
    *(double **)((long)&uStack_170 + lVar35) = pdVar58;
    *(double **)((long)&stack0xfffffffffffffea0 + lVar35) = *ppdVar33;
    lVar35 = lVar35 + 0x18;
    ppdVar33 = ppdVar33 + 10;
  } while (lVar35 != 0x90);
  FUN_109a5d938(&dStack_198,&uStack_1120,auStack_1080 + 1,1);
  if (0.0 <= dStack_1c0) {
    dStack_fa8 = (double)CONCAT44(uStack_1ac,uStack_1b0);
    bVar9 = 0.0 < dStack_fa8;
  }
  else {
    dStack_1c0 = -dStack_1c0;
    bVar9 = (double)CONCAT44(uStack_1ac,uStack_1b0) < 0.0;
    dStack_fa8 = -(double)CONCAT44(uStack_1ac,uStack_1b0);
  }
  dVar36 = SQRT(dStack_1c0);
  dStack_fa8 = SQRT(dStack_fa8);
  if (!bVar9) {
    dStack_fa8 = 0.0;
  }
  if (dStack_1b8 < 0.0) {
    dVar36 = -dVar36;
  }
  uStack_fa0 = 0;
  uStack_f98 = 0;
  dStack_fb0 = dVar36;
  FUN_109b92b98(param_1,auStack_f40,&uStack_1120,&dStack_fb0);
  FUN_109b92fcc(param_1,adStack_d60,&dStack_fb0,adStack_370,auStack_1020);
  lVar35 = 0;
  uStack_1058 = 0x500000006;
  auStack_1080[1] = 0x2842424006;
  pdStack_1060 = (double *)&uStack_170;
  auStack_1080[2] = 0;
  uStack_1068 = 0;
  uStack_1a0 = 0x100000005;
  dStack_1c0 = 1.75251884850033e-313;
  pdStack_1a8 = &dStack_198;
  dStack_1b8 = 0.0;
  uStack_1b0 = 0;
  ppdVar33 = apdStack_158 + 1;
  do {
    pdVar58 = *(double **)((long)auStack_f40 + lVar35);
    pdVar48 = *(double **)((long)apdStack_f30 + lVar35 + 8);
    pdVar49 = *(double **)((long)apdStack_f30 + lVar35);
    ppdVar33[-3] = *(double **)((long)apdStack_f30 + lVar35 + -8);
    ppdVar33[-4] = pdVar58;
    ppdVar33[-1] = pdVar48;
    ppdVar33[-2] = pdVar49;
    *ppdVar33 = *(double **)((long)adStack_f18 + lVar35 + -8);
    lVar35 = lVar35 + 0x50;
    ppdVar33 = ppdVar33 + 5;
  } while (lVar35 != 0x1e0);
  FUN_109a5d938(auStack_1080 + 1,&uStack_1120,&dStack_1c0,1);
  if (0.0 <= dStack_198) {
    bVar9 = 0.0 < dStack_188;
    dStack_f88 = dStack_188;
    dStack_f90 = dStack_198;
  }
  else {
    bVar9 = dStack_188 < 0.0;
    dStack_f88 = -dStack_188;
    dStack_f90 = -dStack_198;
  }
  dStack_f90 = SQRT(dStack_f90);
  dStack_f88 = SQRT(dStack_f88);
  if (!bVar9) {
    dStack_f88 = 0.0;
  }
  if (dStack_190 < 0.0) {
    dStack_f90 = -dStack_f90;
  }
  dVar57 = (double)puStack_180 / dStack_f90;
  uStack_f78 = 0;
  dStack_f80 = dVar57;
  FUN_109b92b98(param_1,auStack_f40,&uStack_1120,&dStack_f90);
  pdVar58 = &dStack_f90;
  pdVar49 = adStack_328;
  pdVar48 = adStack_1008;
  FUN_109b92fcc(param_1,adStack_d60);
  lVar35 = 2;
  dVar40 = dVar36;
  if (dVar30 <= dVar36) {
    lVar35 = 1;
    dVar40 = dVar30;
  }
  lVar44 = 3;
  if (dVar40 <= dVar57) {
    lVar44 = lVar35;
  }
  pdStack_160 = adStack_1050 + lVar44 * 3;
  uStack_130 = (ulong)&uStack_170 | 8;
  lStack_138 = 0;
  apdStack_158[3] = (double *)0x0;
  pdStack_168 = (double *)0x100000003;
  uStack_170 = (undefined1 *)0x242ff4006;
  uStack_118 = 8;
  uStack_120 = 8;
  apdStack_158[1] = (double *)(auStack_1038 + lVar44 * 0x18);
  dStack_198 = (double)CONCAT44(dStack_198._4_4_,0x2010000);
  dStack_188 = 0.0;
  dStack_190 = (double)param_3;
  apdStack_158[0] = pdStack_160;
  apdStack_158[2] = apdStack_158[1];
  puStack_128 = &uStack_120;
  FUN_109a479a0(&uStack_170,&dStack_198);
  if (lStack_138 != 0) {
    piVar52 = (int *)(lStack_138 + 0x14);
    do {
      iVar39 = *piVar52;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
      if (bVar9) {
        *piVar52 = iVar39 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar39 + -1 == 0) {
      func_0x000109a848d4(&uStack_170);
    }
  }
  lStack_138 = 0;
  apdStack_158[0] = (double *)0x0;
  pdStack_160 = (double *)0x0;
  apdStack_158[2] = (double *)0x0;
  apdStack_158[1] = (double *)0x0;
  if (0 < uStack_170._4_4_) {
    lVar35 = 0;
    do {
      *(undefined4 *)(uStack_130 + lVar35 * 4) = 0;
      lVar35 = lVar35 + 1;
    } while (lVar35 < uStack_170._4_4_);
  }
  if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
    _free(puStack_128[-1]);
  }
  pdStack_160 = adStack_400 + lVar44 * 9;
  uStack_130 = (ulong)&uStack_170 | 8;
  lStack_138 = 0;
  apdStack_158[3] = (double *)0x0;
  pdStack_168 = (double *)0x300000003;
  uStack_170 = (undefined1 *)0x242ff4006;
  uStack_118 = 8;
  uStack_120 = 0x18;
  apdStack_158[1] = (double *)(auStack_3b8 + lVar44 * 0x48);
  dStack_198 = (double)CONCAT44(dStack_198._4_4_,0x2010000);
  dStack_188 = 0.0;
  pdVar10 = (double *)&uStack_170;
  pdVar18 = &dStack_198;
  dStack_190 = (double)param_2;
  apdStack_158[0] = pdStack_160;
  apdStack_158[2] = apdStack_158[1];
  puStack_128 = &uStack_120;
  FUN_109a479a0();
  if (lStack_138 != 0) {
    piVar52 = (int *)(lStack_138 + 0x14);
    do {
      iVar39 = *piVar52;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
      if (bVar9) {
        *piVar52 = iVar39 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar39 + -1 == 0) {
      pdVar10 = (double *)&uStack_170;
      func_0x000109a848d4();
    }
  }
  lStack_138 = 0;
  dVar40 = 0.0;
  apdStack_158[0] = (double *)0x0;
  pdStack_160 = (double *)0x0;
  apdStack_158[2] = (double *)0x0;
  apdStack_158[1] = (double *)0x0;
  if (0 < uStack_170._4_4_) {
    lVar35 = 0;
    do {
      *(undefined4 *)(uStack_130 + lVar35 * 4) = 0;
      lVar35 = lVar35 + 1;
    } while (lVar35 < uStack_170._4_4_);
  }
  if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
    pdVar10 = (double *)puStack_128[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return dVar40;
  }
  ___stack_chk_fail();
  if ((int)pdVar18 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_170);
  }
  __Unwind_Resume();
  dStack_1190 = dVar36;
  dStack_1188 = dVar30;
  puStack_1130 = &stack0xfffffffffffffff0;
  pcStack_1128 = FUN_109b92b98;
  uVar25 = 0;
  lStack_11a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = pdVar18 + 5;
  uVar55 = adStack_1260 + 2;
  pdVar7 = adStack_1260 + 1;
  pdStack_12b8 = adStack_1208;
  pdVar2 = adStack_12b0 + 4;
  pdVar11 = pdVar10;
  pdVar21 = pdVar58;
  pdVar22 = pdVar49;
  do {
    lVar35 = 0;
    dVar30 = pdVar58[3];
    dVar40 = *pdVar49;
    dVar57 = pdVar49[1];
    dVar61 = pdVar49[2];
    dVar62 = pdVar49[3];
    pdVar37 = (double *)uVar55;
    pdVar38 = pdVar1;
    do {
      dVar63 = pdVar38[-5];
      dVar64 = pdVar38[-4];
      dVar66 = pdVar38[-3];
      dVar65 = pdVar38[-2];
      dVar68 = pdVar38[-1];
      dVar71 = *pdVar38;
      dVar69 = pdVar38[1];
      dVar70 = pdVar38[2];
      dVar72 = dVar57 * dVar68;
      dVar73 = dVar57 * dVar70;
      dVar74 = pdVar38[3];
      dVar75 = pdVar38[4];
      dVar67 = *(double *)((long)dVar30 + lVar35);
      *pdVar37 = dVar72 + dVar40 * dVar65 + dVar61 * (dVar71 + dVar71) + dVar62 * dVar74;
      pdVar37[1] = dVar73 + dVar40 * dVar69 + dVar61 * dVar74 + dVar62 * (dVar75 + dVar75);
      pdVar37[-2] = dVar64 * dVar57 + dVar40 * (dVar63 + dVar63) + dVar61 * dVar65 + dVar62 * dVar69
      ;
      pdVar37[-1] = dVar57 * (dVar66 + dVar66) + dVar40 * dVar64 + dVar61 * dVar68 + dVar62 * dVar70
      ;
      *(double *)((long)pdVar2 + lVar35) =
           dVar67 - (dVar40 * dVar64 * dVar57 + dVar40 * dVar40 * dVar63 + dVar57 * dVar57 * dVar66
                     + dVar61 * dVar40 * dVar65 + dVar61 * dVar72 + dVar61 * dVar61 * dVar71 +
                     dVar62 * dVar40 * dVar69 + dVar62 * dVar73 + dVar62 * dVar61 * dVar74 +
                    dVar62 * dVar62 * dVar75);
      lVar35 = lVar35 + 8;
      pdVar38 = pdVar38 + 10;
      pdVar37 = pdVar37 + 4;
    } while (lVar35 != 0x30);
    iVar39 = *(int *)(pdVar10 + 0x29);
    if ((iVar39 != 0) && (iVar39 < 6)) {
      if (pdVar10[0x2a] != 0.0) {
        __ZdaPv();
      }
      pdVar11 = (double *)pdVar10[0x2b];
      if (pdVar11 != (double *)0x0) {
        __ZdaPv();
      }
      iVar39 = *(int *)(pdVar10 + 0x29);
    }
    if (iVar39 < 6) {
      *(undefined4 *)(pdVar10 + 0x29) = 6;
      dVar30 = 2.37151510003798e-322;
      __Znam();
      pdVar10[0x2a] = dVar30;
      pdVar11 = (double *)0x30;
      __Znam();
      pdVar10[0x2b] = (double)pdVar11;
    }
    pdVar38 = adStack_1260;
    iVar43 = 0xc0;
    iVar46 = 0xa0;
    iVar39 = 1;
    uVar32 = 0;
    pdVar37 = pdVar7;
    do {
      lVar35 = 0;
      uVar3 = uVar32 + 1;
      dVar30 = ABS(*pdVar38);
      do {
        dVar40 = ABS(*(double *)((long)pdVar38 + lVar35));
        if (ABS(*(double *)((long)pdVar38 + lVar35)) <= dVar30) {
          dVar40 = dVar30;
        }
        lVar35 = lVar35 + 0x20;
        dVar30 = dVar40;
      } while (iVar46 != (int)lVar35);
      if (dVar40 == 0.0) {
        lVar35 = (uVar32 & 0xffffffff) * 8;
        dVar30 = pdVar10[0x2a];
        *(undefined8 *)((long)pdVar10[0x2b] + lVar35) = 0;
        *(undefined8 *)((long)dVar30 + lVar35) = 0;
        goto LAB_109b92f6c;
      }
      lVar35 = 0;
      dVar30 = 0.0;
      do {
        dVar57 = (1.0 / dVar40) * *(double *)((long)pdVar38 + lVar35);
        *(double *)((long)pdVar38 + lVar35) = dVar57;
        dVar30 = dVar30 + dVar57 * dVar57;
        lVar35 = lVar35 + 0x20;
      } while (iVar43 != (int)lVar35);
      dVar57 = -SQRT(dVar30);
      if (0.0 <= *pdVar38) {
        dVar57 = SQRT(dVar30);
      }
      dVar62 = *pdVar38 + dVar57;
      *pdVar38 = dVar62;
      dVar30 = pdVar10[0x2a];
      dVar61 = pdVar10[0x2b];
      *(double *)((long)dVar30 + uVar32 * 8) = dVar57 * dVar62;
      *(double *)((long)dVar61 + uVar32 * 8) = -(dVar40 * dVar57);
      if (uVar32 < 3) {
        dVar40 = *(double *)((long)dVar30 + uVar32 * 8);
        pdVar47 = pdVar37;
        iVar50 = iVar39;
        do {
          lVar35 = 0;
          dVar57 = 0.0;
          do {
            dVar57 = dVar57 + *(double *)((long)pdVar47 + lVar35) *
                              *(double *)((long)pdVar38 + lVar35);
            lVar35 = lVar35 + 0x20;
          } while (iVar43 != (int)lVar35);
          pdVar11 = (double *)0x0;
          do {
            *(double *)((long)pdVar47 + (long)pdVar11) =
                 *(double *)((long)pdVar47 + (long)pdVar11) +
                 *(double *)((long)pdVar38 + (long)pdVar11) * (-dVar57 / dVar40);
            pdVar11 = pdVar11 + 4;
          } while (iVar43 != (int)pdVar11);
          iVar50 = iVar50 + 1;
          pdVar47 = pdVar47 + 1;
        } while (iVar50 != 4);
      }
      pdVar38 = pdVar38 + 5;
      iVar39 = iVar39 + 1;
      iVar46 = iVar46 + -0x20;
      iVar43 = iVar43 + -0x20;
      pdVar37 = pdVar37 + 5;
      uVar32 = uVar3;
    } while (uVar3 != 4);
    lVar35 = 0;
    pdVar38 = adStack_1260;
    pdVar37 = adStack_12b0 + 4;
    lVar44 = 0xc0;
    do {
      lVar45 = 0;
      dVar40 = 0.0;
      pdVar47 = pdVar37;
      do {
        dVar40 = dVar40 + *pdVar47 * *(double *)((long)pdVar38 + lVar45);
        lVar45 = lVar45 + 0x20;
        pdVar47 = pdVar47 + 1;
      } while (lVar44 != lVar45);
      lVar45 = 0;
      dVar57 = *(double *)((long)dVar30 + lVar35 * 8);
      pdVar47 = pdVar37;
      do {
        *pdVar47 = *pdVar47 + *(double *)((long)pdVar38 + lVar45) * (-dVar40 / dVar57);
        lVar45 = lVar45 + 0x20;
        pdVar47 = pdVar47 + 1;
      } while (lVar44 != lVar45);
      pdVar38 = pdVar38 + 5;
      lVar35 = lVar35 + 1;
      lVar44 = lVar44 + -0x20;
      pdVar37 = pdVar37 + 1;
    } while (lVar35 != 4);
    lVar44 = 0;
    adStack_12b0[3] = adStack_12b0[7] / *(double *)((long)dVar61 + 0x18);
    pdVar38 = pdStack_12b8;
    lVar35 = 2;
    do {
      dVar30 = 0.0;
      pdVar37 = pdVar38;
      lVar45 = lVar44;
      do {
        dVar30 = dVar30 + *(double *)((long)(adStack_12b0 + 3) + lVar45) * *pdVar37;
        lVar45 = lVar45 + 8;
        pdVar37 = pdVar37 + 1;
      } while (lVar45 != 8);
      adStack_12b0[lVar35] = (pdVar2[lVar35] - dVar30) / *(double *)((long)dVar61 + lVar35 * 8);
      lVar44 = lVar44 + -8;
      pdVar38 = pdVar38 + -5;
      bVar9 = lVar35 != 0;
      lVar35 = lVar35 + -1;
    } while (bVar9);
LAB_109b92f6c:
    dVar30 = *pdVar49;
    pdVar49[1] = adStack_12b0[1] + pdVar49[1];
    *pdVar49 = adStack_12b0[0] + dVar30;
    pdVar49[3] = adStack_12b0[3] + pdVar49[3];
    pdVar49[2] = adStack_12b0[2] + pdVar49[2];
    uVar51 = (int)uVar25 + 1;
    uVar25 = (ulong)uVar51;
  } while (uVar51 != 5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_11a0) {
    return adStack_12b0[0] + dVar30;
  }
  ___stack_chk_fail();
  pdStack_1310 = pdVar2;
  pdStack_1308 = pdVar7;
  pdStack_1300 = adStack_12b0 + 3;
  pdStack_12f8 = adStack_12b0;
  uStack_12f0 = uVar25;
  pdStack_12e8 = pdVar10;
  pdStack_12e0 = pdVar58;
  pdStack_12d8 = pdVar49;
  ppuStack_12d0 = &puStack_1130;
  pcStack_12c8 = FUN_109b92fcc;
  pppuStack_14f0 = &ppuStack_12d0;
  lVar35 = 0;
  lStack_1318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar58 = pdVar11 + 0x1d;
  pdVar11[0x1e] = 0.0;
  *pdVar58 = 0.0;
  pdVar11[0x26] = 0.0;
  pdVar11[0x25] = 0.0;
  pdVar11[0x28] = 0.0;
  pdVar11[0x27] = 0.0;
  pdVar11[0x22] = 0.0;
  pdVar11[0x21] = 0.0;
  pdVar11[0x24] = 0.0;
  pdVar11[0x23] = 0.0;
  pdVar11[0x20] = 0.0;
  pdVar11[0x1f] = 0.0;
  pdVar18 = pdVar18 + 0x84;
  do {
    lVar44 = 0;
    pdVar10 = pdVar18;
    pdVar49 = pdVar58;
    do {
      lVar45 = 0;
      do {
        *(double *)((long)pdVar49 + lVar45) =
             *(double *)((long)pdVar49 + lVar45) +
             *(double *)((long)pdVar10 + lVar45) * pdVar21[lVar35];
        lVar45 = lVar45 + 8;
      } while (lVar45 != 0x18);
      lVar44 = lVar44 + 1;
      pdVar49 = pdVar49 + 3;
      pdVar10 = pdVar10 + 3;
    } while (lVar44 != 4);
    lVar35 = lVar35 + 1;
    pdVar18 = pdVar18 + -0xc;
  } while (lVar35 != 4);
  uVar51 = *(uint *)(pdVar11 + 0x10);
  uVar25 = (ulong)uVar51;
  if ((int)uVar51 < 1) {
    dVar30 = pdVar11[0xd];
    if (*(double *)((long)dVar30 + 0x10) < 0.0) goto LAB_109b9310c;
LAB_109b931d0:
    adStack_1348[4] = 0.0;
    adStack_1348[5] = 0.0;
    adStack_1348[2] = 0.0;
    adStack_1348[3] = 0.0;
    adStack_1348[0] = 0.0;
    adStack_1348[1] = 0.0;
  }
  else {
    uVar32 = 0;
    dVar57 = pdVar11[10];
    dVar30 = pdVar11[0xd];
    dVar40 = dVar30;
    do {
      lVar35 = 0;
      pdVar10 = (double *)((long)dVar57 + uVar32 * 0x20);
      pdVar49 = pdVar58;
      do {
        *(double *)((long)dVar40 + lVar35 * 8) =
             pdVar10[1] * pdVar49[3] + *pdVar49 * *pdVar10 + pdVar49[6] * pdVar10[2] +
             pdVar49[9] * pdVar10[3];
        lVar35 = lVar35 + 1;
        pdVar49 = pdVar49 + 1;
      } while (lVar35 != 3);
      uVar32 = uVar32 + 1;
      dVar40 = (double)((long)dVar40 + 0x18);
    } while (uVar32 != uVar25);
    if (*(double *)((long)dVar30 + 0x10) < 0.0) {
LAB_109b9310c:
      lVar35 = 0;
      do {
        lVar44 = 0;
        do {
          *(double *)((long)pdVar58 + lVar44) = -*(double *)((long)pdVar58 + lVar44);
          lVar44 = lVar44 + 8;
        } while (lVar44 != 0x18);
        lVar35 = lVar35 + 1;
        pdVar58 = pdVar58 + 3;
      } while (lVar35 != 4);
      if ((int)uVar51 < 1) goto LAB_109b931d0;
      pdVar58 = (double *)((long)dVar30 + 0x10);
      uVar32 = uVar25;
      do {
        pdVar58[-1] = -pdVar58[-1];
        pdVar58[-2] = -pdVar58[-2];
        *pdVar58 = -*pdVar58;
        uVar32 = uVar32 - 1;
        pdVar58 = pdVar58 + 3;
      } while (uVar32 != 0);
    }
    adStack_1348[4] = 0.0;
    adStack_1348[5] = 0.0;
    adStack_1348[2] = 0.0;
    adStack_1348[3] = 0.0;
    adStack_1348[0] = 0.0;
    adStack_1348[1] = 0.0;
    uVar32 = 0;
    dVar40 = pdVar11[4];
    do {
      lVar35 = 0;
      do {
        *(double *)((long)adStack_1348 + lVar35 + 0x18) =
             *(double *)((long)dVar30 + lVar35) + *(double *)((long)adStack_1348 + lVar35 + 0x18);
        *(double *)((long)adStack_1348 + lVar35) =
             *(double *)((long)dVar40 + lVar35) + *(double *)((long)adStack_1348 + lVar35);
        lVar35 = lVar35 + 8;
      } while (lVar35 != 0x18);
      uVar32 = uVar32 + 1;
      dVar40 = (double)((long)dVar40 + 0x18);
      dVar30 = (double)((long)dVar30 + 0x18);
    } while (uVar32 != uVar25);
  }
  lVar35 = 0;
  do {
    *(double *)((long)adStack_1348 + lVar35 + 0x18) =
         *(double *)((long)adStack_1348 + lVar35 + 0x18) / (double)(int)uVar51;
    *(double *)((long)adStack_1348 + lVar35) =
         *(double *)((long)adStack_1348 + lVar35) / (double)(int)uVar51;
    lVar35 = lVar35 + 8;
  } while (lVar35 != 0x18);
  uStack_1440 = 0x300000003;
  auStack_1460[2] = 0;
  auStack_1460[3] = 0;
  auStack_1460[4] = 0;
  uStack_1468 = 0x100000003;
  auStack_1460[0] = 0x42424006;
  auStack_1460[1] = 0x18;
  uStack_1490 = 0x300000003;
  auStack_1488[0] = 0x42424006;
  auStack_1488[1] = 8;
  puStack_1470 = auStack_13a8;
  auStack_1488[2] = 0;
  auStack_1488[3] = 0;
  auStack_1488[4] = 0;
  uStack_14b8 = 0x300000003;
  uStack_14b0 = 0x1842424006;
  uStack_14a8 = 0;
  uStack_14a0 = 0;
  uStack_14d8 = 0x1842424006;
  uStack_14d0 = 0;
  uStack_14c8 = 0;
  pdStack_14c0 = adStack_1438;
  pdStack_1498 = adStack_13f0;
  puStack_1448 = auStack_1390;
  FUN_109a4b71c(auStack_1460);
  dVar57 = adStack_1348[2];
  dVar40 = adStack_1348[1];
  dVar30 = adStack_1348[0];
  uVar51 = *(uint *)(pdVar11 + 0x10);
  if (0 < (int)uVar51) {
    uVar25 = 0;
    dVar61 = pdVar11[0xd];
    dVar62 = pdVar11[4];
    do {
      lVar35 = 0;
      pdVar49 = (double *)((long)dVar62 + uVar25 * 0x18);
      pdVar58 = adStack_1380;
      do {
        dVar63 = *(double *)((long)adStack_1348 + lVar35 + 0x18);
        pdVar58[-2] = pdVar58[-2] +
                      (*pdVar49 - dVar30) * (*(double *)((long)dVar61 + lVar35) - dVar63);
        pdVar58[-1] = pdVar58[-1] +
                      (pdVar49[1] - dVar40) * (*(double *)((long)dVar61 + lVar35) - dVar63);
        *pdVar58 = *pdVar58 + (pdVar49[2] - dVar57) * (*(double *)((long)dVar61 + lVar35) - dVar63);
        lVar35 = lVar35 + 8;
        pdVar58 = pdVar58 + 3;
      } while (lVar35 != 0x18);
      uVar25 = uVar25 + 1;
      dVar61 = (double)((long)dVar61 + 0x18);
    } while (uVar25 != uVar51);
  }
  puVar12 = auStack_1460;
  puVar19 = auStack_1488;
  iVar39 = (int)&uStack_14b0;
  puVar23 = &uStack_14d8;
  uVar24 = 1;
  FUN_109a5dcc4();
  lVar35 = 0;
  pdVar58 = pdVar22;
  do {
    lVar44 = 0;
    dVar30 = adStack_13f0[lVar35 * 3];
    dVar40 = adStack_13f0[lVar35 * 3 + 1];
    dVar57 = adStack_13f0[lVar35 * 3 + 2];
    pdVar49 = pdVar58;
    do {
      *pdVar49 = dVar40 * *(double *)((long)adStack_1438 + lVar44 + 8) +
                 *(double *)((long)adStack_1438 + lVar44) * dVar30 +
                 *(double *)((long)adStack_1438 + lVar44 + 0x10) * dVar57;
      lVar44 = lVar44 + 0x18;
      pdVar49 = pdVar49 + 1;
    } while (lVar44 != 0x48);
    lVar35 = lVar35 + 1;
    pdVar58 = pdVar58 + 3;
  } while (lVar35 != 3);
  dVar30 = *pdVar22;
  dVar40 = pdVar22[1];
  dVar61 = pdVar22[8];
  dVar57 = pdVar22[2];
  dVar63 = pdVar22[7];
  dVar62 = pdVar22[6];
  if (dVar40 * pdVar22[5] * dVar62 + dVar61 * dVar30 * pdVar22[4] + dVar57 * pdVar22[3] * dVar63 +
      dVar62 * -(dVar57 * pdVar22[4]) + dVar61 * -(dVar40 * pdVar22[3]) +
      -(dVar30 * pdVar22[5]) * dVar63 < 0.0) {
    pdVar22[7] = -dVar63;
    pdVar22[6] = -dVar62;
    pdVar22[8] = -dVar61;
  }
  dVar30 = adStack_1348[3] -
           (dVar40 * adStack_1348[1] + adStack_1348[0] * dVar30 + adStack_1348[2] * dVar57);
  *pdVar48 = dVar30;
  dVar40 = adStack_1348[4] -
           (adStack_1348[1] * pdVar22[4] + adStack_1348[0] * pdVar22[3] +
           adStack_1348[2] * pdVar22[5]);
  pdVar48[1] = dVar40;
  dVar57 = adStack_1348[5] -
           (adStack_1348[1] * pdVar22[7] + adStack_1348[0] * pdVar22[6] +
           adStack_1348[2] * pdVar22[8]);
  pdVar48[2] = dVar57;
  uVar51 = *(uint *)(pdVar11 + 0x10);
  uVar25 = (ulong)uVar51;
  if ((int)uVar51 < 1) {
    dVar61 = 0.0;
  }
  else {
    pdVar58 = (double *)((long)pdVar11[7] + 8);
    dVar61 = 0.0;
    pdVar49 = (double *)((long)pdVar11[4] + 0x10);
    do {
      dVar62 = pdVar49[-2];
      dVar64 = pdVar49[-1];
      dVar66 = *pdVar49;
      dVar63 = 1.0 / (dVar57 + pdVar22[7] * dVar64 + dVar62 * pdVar22[6] + dVar66 * pdVar22[8]);
      dVar65 = pdVar58[-1] -
               (*pdVar11 +
               dVar63 * pdVar11[2] *
                        (dVar30 + pdVar22[1] * dVar64 + dVar62 * *pdVar22 + dVar66 * pdVar22[2]));
      dVar62 = *pdVar58 -
               (pdVar11[1] +
               dVar63 * pdVar11[3] *
                        (dVar40 + pdVar22[4] * dVar64 + dVar62 * pdVar22[3] + dVar66 * pdVar22[5]));
      dVar61 = dVar61 + SQRT(dVar62 * dVar62 + dVar65 * dVar65);
      pdVar58 = pdVar58 + 2;
      uVar25 = uVar25 - 1;
      pdVar49 = pdVar49 + 3;
    } while (uVar25 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1318) {
    return dVar61 / (double)(int)uVar51;
  }
  ___stack_chk_fail();
  uStack_1560 = 0x100000003;
  uStack_1558 = 0x842424006;
  uStack_1548 = 0x3ff0000000000000;
  pcStack_14e8 = FUN_109b93554;
  lStack_1578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_1550 = dVar36;
  pdStack_1540 = pdVar2;
  pdStack_1538 = pdVar7;
  pdStack_1530 = (double *)uVar55;
  pdStack_1528 = pdVar1;
  puStack_1520 = auStack_1390;
  pdStack_1518 = adStack_1438;
  pdStack_1510 = adStack_13f0;
  pdStack_1508 = pdVar48;
  pdStack_1500 = pdVar22;
  pdStack_14f8 = pdVar11;
  if ((*puVar12 & 0x1f0000) == 0x10000) {
    puVar20 = *(ulong **)(puVar12 + 2);
    uStack_1740 = (ulong)&uStack_1780 | 8;
    uStack_1778 = puVar20[1];
    uStack_1780 = *puVar20;
    uStack_1768 = puVar20[3];
    uStack_1770 = puVar20[2];
    uStack_1758 = puVar20[5];
    uStack_1760 = puVar20[4];
    uStack_1748 = puVar20[7];
    uStack_1750 = puVar20[6];
    puStack_1738 = &uStack_1730;
    uStack_1728 = 0;
    uStack_1730 = 0;
    if (puVar20[7] != 0) {
      piVar52 = (int *)(puVar20[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = *piVar52 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar20 + 4) < 3) {
      uStack_1730 = *(undefined8 *)puVar20[9];
      uStack_1728 = ((undefined8 *)puVar20[9])[1];
    }
    else {
      uStack_1780 = uStack_1780 & 0xffffffff;
      func_0x000109a84868(&uStack_1780);
    }
  }
  else {
    FUN_109a8a180(&uStack_1780);
  }
  if ((*puVar19 & 0x1f0000) == 0x10000) {
    puVar20 = *(ulong **)(puVar19 + 2);
    uStack_17a0 = (ulong)&uStack_17e0 | 8;
    uStack_17d8 = puVar20[1];
    uStack_17e0 = *puVar20;
    uStack_17c8 = puVar20[3];
    uStack_17d0 = puVar20[2];
    uStack_17b8 = puVar20[5];
    uStack_17c0 = puVar20[4];
    uStack_17a8 = puVar20[7];
    uStack_17b0 = puVar20[6];
    puStack_1798 = &uStack_1790;
    uStack_1788 = 0;
    uStack_1790 = 0;
    if (puVar20[7] != 0) {
      piVar52 = (int *)(puVar20[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = *piVar52 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar20 + 4) < 3) {
      uStack_1790 = *(undefined8 *)puVar20[9];
      uStack_1788 = ((undefined8 *)puVar20[9])[1];
    }
    else {
      uStack_17e0 = uStack_17e0 & 0xffffffff;
      func_0x000109a84868(&uStack_17e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_17e0,puVar19,0xffffffff);
  }
  uStack_1840 = 0x42ff0000;
  uStack_1834 = 0;
  uStack_1830 = 0;
  iStack_183c = 0;
  uStack_1838 = 0;
  uStack_1824 = 0;
  uStack_1820 = 0;
  uStack_182c = 0;
  uStack_1828 = 0;
  uStack_1814 = 0;
  uStack_181c = 0;
  uStack_1818 = 0;
  uStack_1800 = (ulong)&uStack_1840 | 8;
  uStack_1808 = 0;
  uStack_1810 = 0;
  uStack_180c = 0;
  uStack_17e8 = 0;
  uStack_17f0 = 0;
  uStack_18a0._0_4_ = 0x42ff0000;
  puStack_1860 = &uStack_1898;
  uStack_1898._4_4_ = 0;
  uStack_1890 = 0;
  uStack_18a0._4_4_ = 0;
  uStack_1898._0_4_ = 0;
  uStack_1884 = 0;
  uStack_1880 = 0;
  uStack_188c = 0;
  uStack_1888 = 0;
  uStack_1874 = 0;
  uStack_187c = 0;
  uStack_1878 = 0;
  lStack_1868 = 0;
  uStack_1870 = 0;
  uStack_186c = 0;
  uStack_1848 = 0;
  uStack_1850 = 0;
  uStack_1900._0_4_ = 0x42ff0000;
  puVar41 = (undefined8 *)((ulong)&uStack_1900 | 4);
  uStack_18f4 = 0;
  uStack_18f0 = 0;
  uStack_1900._4_4_ = 0;
  uStack_18f8 = 0;
  uStack_18e4 = 0;
  uStack_18e0 = 0;
  uStack_18ec = 0;
  uStack_18e8 = 0;
  uStack_18d4 = 0;
  uStack_18dc = 0;
  uStack_18d8 = 0;
  lStack_18c8 = 0;
  uStack_18d0 = 0;
  uStack_18cc = 0;
  uStack_18a8 = 0;
  uStack_18b0 = 0;
  auStack_1960._0_4_ = 0x42ff0000;
  puStack_1920 = auStack_1958;
  uStack_1954 = 0;
  uStack_1950 = 0;
  stack0xffffffffffffe6a4 = 0;
  uStack_1944 = 0;
  uStack_1940 = 0;
  uStack_194c = 0;
  uStack_1948 = 0;
  uStack_1934 = 0;
  uStack_193c = 0;
  uStack_1938 = 0;
  lStack_1928 = 0;
  uStack_1930 = 0;
  uStack_192c = 0;
  bVar29 = true;
  uStack_1908 = 0;
  uStack_1910 = 0;
  bVar9 = false;
  puStack_1918 = &uStack_1910;
  puStack_18c0 = &uStack_18f8;
  puStack_18b8 = &uStack_18b0;
  puStack_1858 = &uStack_1850;
  puStack_17f8 = &uStack_17f0;
  do {
    puVar12 = &uStack_1840;
    puVar19 = (uint *)&uStack_1780;
    if (!bVar29) {
      puVar12 = (uint *)&uStack_18a0;
      puVar19 = (uint *)&uStack_17e0;
    }
    puVar13 = puVar19;
    FUN_109a89cd4(puVar19,2,0xffffffff,0);
    if ((int)puVar13 < 0) {
      puVar13 = puVar19;
      FUN_109a89cd4(puVar19,3,0xffffffff,0);
      if ((int)puVar13 < 0) {
        puVar17 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar17 = 1;
        uStack_1ad0 = (long *)(puVar17 + 1);
        puStack_1ac8 = (uint *)0x2e;
        *(undefined1 *)((long)puVar17 + 0x32) = 0;
        *(undefined8 *)(puVar17 + 3) = 0x7379617272612074;
        *(undefined8 *)(puVar17 + 1) = 0x75706e6920656854;
        *(undefined8 *)(puVar17 + 7) = 0x726f204432206562;
        *(undefined8 *)(puVar17 + 5) = 0x20646c756f687320;
        *(undefined8 *)((long)puVar17 + 0x2a) = 0x7374657320746e69;
        *(undefined8 *)((long)puVar17 + 0x22) = 0x6f7020443320726f;
        FUN_109ac3188(0xfffffffb,&uStack_1ad0,&UNK_10f5a2888,&UNK_10f5a2897,0x16a);
        goto LAB_109b95110;
      }
      if ((int)puVar13 == 0) {
        *extraout_x8 = 0x42ff0000;
        *(undefined8 *)(extraout_x8 + 3) = 0;
        *(undefined8 *)(extraout_x8 + 1) = 0;
        *(undefined8 *)(extraout_x8 + 7) = 0;
        *(undefined8 *)(extraout_x8 + 5) = 0;
        *(undefined8 *)(extraout_x8 + 0xb) = 0;
        *(undefined8 *)(extraout_x8 + 9) = 0;
        *(undefined8 *)(extraout_x8 + 0xe) = 0;
        *(undefined8 *)(extraout_x8 + 0xc) = 0;
        *(undefined8 *)(extraout_x8 + 0x14) = 0;
        *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
        *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
        *(undefined8 *)(extraout_x8 + 0x16) = 0;
        goto LAB_109b94c74;
      }
      uStack_1ac0 = 0;
      uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x1010000);
      uStack_1650 = CONCAT44(uStack_1650._4_4_,0x2010000);
      uStack_1640 = 0;
      puStack_1ac8 = puVar19;
      puStack_1648 = puVar19;
      FUN_109b953b8(&uStack_1ad0,&uStack_1650);
    }
    FUN_109a890bc(&uStack_1ad0,puVar19,2,puVar13);
    uStack_1650 = CONCAT44(uStack_1650._4_4_,0x2010000);
    uStack_1640 = 0;
    puStack_1648 = puVar12;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_1ad0,&uStack_1650,5);
    if (uStack_1a98 != 0) {
      piVar52 = (int *)(uStack_1a98 + 0x14);
      do {
        iVar43 = *piVar52;
        cVar5 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar29) {
          *piVar52 = iVar43 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar43 + -1 == 0) {
        func_0x000109a848d4(&uStack_1ad0);
      }
    }
    uStack_1a98 = 0;
    uStack_1ab8 = 0;
    uStack_1ac0 = 0;
    uStack_1aa8 = 0;
    uStack_1ab0 = 0;
    if (0 < uStack_1ad0._4_4_) {
      lVar35 = 0;
      do {
        *(undefined4 *)(uStack_1a90 + lVar35 * 4) = 0;
        lVar35 = lVar35 + 1;
      } while (lVar35 < uStack_1ad0._4_4_);
    }
    if (puStack_1a88 != &uStack_1a80 && puStack_1a88 != (undefined8 *)0x0) {
      _free(puStack_1a88[-1]);
    }
    bVar29 = false;
    bVar6 = !bVar9;
    bVar9 = true;
  } while (bVar6);
  puVar12 = &uStack_1840;
  FUN_109a89cd4(puVar12,2,0xffffffff,1);
  puVar16 = &uStack_18a0;
  FUN_109a89cd4(puVar16,2,0xffffffff,1);
  if ((int)puVar12 == (int)puVar16) {
    if (dVar30 <= 0.0) {
      dVar30 = 3.0;
    }
    plVar14 = (long *)0x8;
    __Znwm();
    *plVar14 = (long)&PTR_FUN_110b29938;
    plVar15 = (long *)0x20;
    __Znwm();
    plVar26 = plVar15 + 1;
    *(int *)plVar26 = 1;
    *plVar15 = (long)&PTR_DAT_110b29988;
    plVar15[2] = (long)plVar14;
    do {
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar9) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar43 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar9) {
        *(int *)plVar26 = iVar43;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plStack_1970 = plVar15;
    plStack_1968 = plVar14;
    if (iVar43 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    uVar51 = (uint)puVar13;
    if ((iVar39 == 0) || (uVar51 == 4)) {
      FUN_109a82ac8(&uStack_1ad0,puVar13,1,0);
      (**(code **)(*uStack_1ad0 + 0x18))(uStack_1ad0,&uStack_1ad0,auStack_1960,0xffffffff);
      FUN_10918eb6c(&uStack_1ad0);
      uStack_1ac0 = 0;
      uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x1010000);
      puStack_1ac8 = &uStack_1840;
      uStack_1640 = 0;
      uStack_1650 = CONCAT44(uStack_1650._4_4_,0x1010000);
      puStack_1648 = (uint *)&uStack_18a0;
      uStack_16b0 = 0x2010000;
      uStack_16a8 = (undefined4 *)&uStack_1900;
      uStack_16a0 = 0;
      uStack_169c = 0;
      plVar14 = plStack_1968;
      (**(code **)(*plStack_1968 + 0x10))(plStack_1968,&uStack_1ad0,&uStack_1650,&uStack_16b0);
      uVar54 = (uint)(0 < (int)plVar14);
LAB_109b93ca4:
      if (((iVar39 == 0x10) || (uVar51 < 5)) || (uVar54 == 0)) {
LAB_109b93e04:
        if (uVar54 == 0) goto LAB_109b93e08;
      }
      else {
        uVar25 = 0;
        iVar43 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_194c,uStack_1950) + uVar25) != '\0') {
            if ((long)iVar43 < (long)uVar25) {
              *(undefined8 *)(CONCAT44(uStack_182c,uStack_1830) + (long)iVar43 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_182c,uStack_1830) + uVar25 * 8);
            }
            iVar43 = iVar43 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (((ulong)puVar13 & 0xffffffff) != uVar25);
        uVar25 = 0;
        uVar51 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_194c,uStack_1950) + uVar25) != '\0') {
            if ((long)(int)uVar51 < (long)uVar25) {
              *(undefined8 *)(CONCAT44(uStack_188c,uStack_1890) + (long)(int)uVar51 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_188c,uStack_1890) + uVar25 * 8);
            }
            uVar51 = uVar51 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (((ulong)puVar13 & 0xffffffff) != uVar25);
        if ((int)uVar51 < 1) goto LAB_109b93e04;
        uStack_1ad0 = (long *)((ulong)uVar51 << 0x20);
        uStack_16b0 = 0x80000000;
        iStack_16ac = 0x7fffffff;
        FUN_109a84930(&uStack_1650,&uStack_1840,&uStack_1ad0,&uStack_16b0);
        uStack_1ad0 = (long *)((ulong)uVar51 << 0x20);
        uStack_1710 = 0x80000000;
        iStack_170c = 0x7fffffff;
        FUN_109a84930(&uStack_16b0,&uStack_18a0,&uStack_1ad0,&uStack_1710);
        if (uStack_1618 != 0) {
          piVar52 = (int *)(uStack_1618 + 0x14);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = *piVar52 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (uStack_1808 != 0) {
          piVar52 = (int *)(uStack_1808 + 0x14);
          do {
            iVar43 = *piVar52;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = iVar43 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar43 + -1 == 0) {
            func_0x000109a848d4(&uStack_1840);
          }
        }
        puVar16 = puStack_1608;
        uStack_1808 = 0;
        uStack_1828 = 0;
        uStack_1824 = 0;
        uStack_1830 = 0;
        uStack_182c = 0;
        uStack_1818 = 0;
        uStack_1814 = 0;
        uStack_1820 = 0;
        uStack_181c = 0;
        if (iStack_183c < 1) {
LAB_109b93e7c:
          uStack_1840 = (uint)uStack_1650;
          if (2 < uStack_1650._4_4_) goto LAB_109b93eb0;
          iStack_183c = uStack_1650._4_4_;
          uStack_1838 = SUB84(puStack_1648,0);
          uStack_1834 = (undefined4)((ulong)puStack_1648 >> 0x20);
          *puStack_17f8 = *puStack_1608;
          puStack_17f8[1] = puVar16[1];
        }
        else {
          lVar35 = 0;
          do {
            *(undefined4 *)(uStack_1800 + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < iStack_183c);
          if (iStack_183c < 3) goto LAB_109b93e7c;
LAB_109b93eb0:
          uStack_1840 = (uint)uStack_1650;
          func_0x000109a84868(&uStack_1840,&uStack_1650);
        }
        uStack_1828 = (undefined4)uStack_1638;
        uStack_1824 = (undefined4)(uStack_1638 >> 0x20);
        uStack_1830 = (undefined4)uStack_1640;
        uStack_182c = (undefined4)(uStack_1640 >> 0x20);
        uStack_1818 = (undefined4)uStack_1628;
        uStack_1814 = (undefined4)(uStack_1628 >> 0x20);
        uStack_1820 = (undefined4)uStack_1630;
        uStack_181c = (undefined4)(uStack_1630 >> 0x20);
        uStack_1808 = uStack_1618;
        uStack_1810 = (undefined4)uStack_1620;
        uStack_180c = (undefined4)(uStack_1620 >> 0x20);
        if (lStack_1678 != 0) {
          piVar52 = (int *)(lStack_1678 + 0x14);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = *piVar52 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar17 = uStack_16a8;
        if (lStack_1868 != 0) {
          piVar52 = (int *)(lStack_1868 + 0x14);
          do {
            iVar43 = *piVar52;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = iVar43 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar43 + -1 == 0) {
            func_0x000109a848d4(&uStack_18a0);
            puVar17 = uStack_16a8;
          }
        }
        puVar16 = puStack_1668;
        lStack_1868 = 0;
        uStack_1888 = 0;
        uStack_1884 = 0;
        uStack_1890 = 0;
        uStack_188c = 0;
        uStack_1878 = 0;
        uStack_1874 = 0;
        uStack_1880 = 0;
        uStack_187c = 0;
        uStack_16a8 = puVar17;
        if (uStack_18a0._4_4_ < 1) {
LAB_109b93f60:
          uStack_18a0._0_4_ = uStack_16b0;
          if (2 < iStack_16ac) goto LAB_109b93f94;
          uStack_18a0._4_4_ = iStack_16ac;
          *puStack_1858 = *puStack_1668;
          puStack_1858[1] = puVar16[1];
        }
        else {
          lVar35 = 0;
          do {
            *(undefined4 *)((long)puStack_1860 + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < uStack_18a0._4_4_);
          if (uStack_18a0._4_4_ < 3) goto LAB_109b93f60;
LAB_109b93f94:
          uStack_18a0._0_4_ = uStack_16b0;
          func_0x000109a84868(&uStack_18a0,&uStack_16b0);
          puVar17 = (undefined4 *)CONCAT44(uStack_1898._4_4_,(undefined4)uStack_1898);
        }
        uStack_1888 = uStack_1698;
        uStack_1884 = uStack_1694;
        uStack_1890 = uStack_16a0;
        uStack_188c = uStack_169c;
        uStack_1878 = uStack_1688;
        uStack_1874 = uStack_1684;
        uStack_1880 = uStack_1690;
        uStack_187c = uStack_168c;
        lStack_1868 = lStack_1678;
        uStack_1870 = uStack_1680;
        uStack_186c = uStack_167c;
        uStack_1898 = puVar17;
        if ((iVar39 == 8) || (iVar39 == 4)) {
          uStack_1ac0 = 0;
          uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x1010000);
          puStack_1ac8 = &uStack_1840;
          uStack_1700 = 0;
          uStack_16fc = 0;
          uStack_1710 = 0x1010000;
          uStack_1708 = &uStack_18a0;
          uStack_15e0 = 0x2010000;
          uStack_15d8 = &uStack_1900;
          uStack_15d0 = 0;
          uStack_15cc = 0;
          (**(code **)(*plStack_1968 + 0x10))(plStack_1968,&uStack_1ad0,&uStack_1710,&uStack_15e0);
        }
        puStack_16d0 = (undefined8 *)((ulong)&uStack_1710 | 8);
        uStack_1708._0_4_ = 8;
        uStack_1708._4_4_ = 1;
        uStack_1710 = 0x42ff0006;
        iStack_170c = 2;
        uStack_1700 = uStack_18f0;
        uStack_16fc = uStack_18ec;
        uStack_16f8 = uStack_18f0;
        uStack_16f4 = uStack_18ec;
        uStack_16e8._0_4_ = 0;
        uStack_16e8._4_4_ = 0;
        uStack_16f0._0_4_ = 0;
        uStack_16f0._4_4_ = 0;
        lStack_16d8 = 0;
        uStack_16e0 = 0;
        uStack_16dc = 0;
        uStack_16b8 = 0;
        uStack_16c0 = 0;
        puStack_16c8 = &uStack_16c0;
        if (CONCAT44(uStack_18ec,uStack_18f0) == 0) {
          puVar17 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar17 = 1;
          uStack_1ad0 = (long *)(puVar17 + 1);
          puStack_1ac8 = (uint *)0x1c;
          *(undefined1 *)(puVar17 + 8) = 0;
          *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_1ad0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109b95110;
        }
        uStack_1710 = 0x42ff4006;
        uStack_16b8 = 8;
        uStack_16c0 = 8;
        uStack_16e8 = CONCAT44(uStack_18ec,uStack_18f0) + 0x40;
        puVar16 = (undefined8 *)0xc8;
        uStack_16f0 = uStack_16e8;
        __Znwm();
        uStack_15e0 = 0x1010000;
        uStack_15d8 = &uStack_18a0;
        uStack_15d0 = 0;
        uStack_15cc = 0;
        *(undefined4 *)(puVar16 + 1) = 0x42ff0000;
        *puVar16 = &PTR_FUN_110b299c8;
        piVar52 = (int *)((long)puVar16 + 0xc);
        *(undefined8 *)((long)puVar16 + 0x14) = 0;
        piVar52[0] = 0;
        piVar52[1] = 0;
        *(undefined8 *)((long)puVar16 + 0x24) = 0;
        *(undefined8 *)((long)puVar16 + 0x1c) = 0;
        *(undefined8 *)((long)puVar16 + 0x34) = 0;
        *(undefined8 *)((long)puVar16 + 0x2c) = 0;
        puVar16[8] = 0;
        puVar16[7] = 0;
        puVar27 = puVar16 + 0xb;
        *puVar27 = 0;
        puVar16[9] = puVar16 + 2;
        puVar16[10] = puVar27;
        puVar16[0xc] = 0;
        *(undefined4 *)(puVar16 + 0xd) = 0x42ff0000;
        piVar53 = (int *)((long)puVar16 + 0x6c);
        *(undefined8 *)((long)puVar16 + 0x74) = 0;
        piVar53[0] = 0;
        piVar53[1] = 0;
        *(undefined8 *)((long)puVar16 + 0x84) = 0;
        *(undefined8 *)((long)puVar16 + 0x7c) = 0;
        *(undefined8 *)((long)puVar16 + 0x94) = 0;
        *(undefined8 *)((long)puVar16 + 0x8c) = 0;
        puVar16[0x14] = 0;
        puVar16[0x13] = 0;
        puVar28 = puVar16 + 0x17;
        *puVar28 = 0;
        puVar16[0x15] = puVar16 + 0xe;
        puVar16[0x16] = puVar28;
        puVar16[0x18] = 0;
        uStack_1a90 = (ulong)&uStack_1ad0 | 8;
        puStack_1ac8 = (uint *)CONCAT44(uStack_1834,uStack_1838);
        uStack_1ad0 = (long *)CONCAT44(iStack_183c,uStack_1840);
        uStack_1ab8 = CONCAT44(uStack_1824,uStack_1828);
        uStack_1ac0 = CONCAT44(uStack_182c,uStack_1830);
        uStack_1aa8 = CONCAT44(uStack_1814,uStack_1818);
        uStack_1ab0 = CONCAT44(uStack_181c,uStack_1820);
        uStack_1aa0 = CONCAT44(uStack_180c,uStack_1810);
        uStack_1a98 = uStack_1808;
        uStack_1a80 = 0;
        uStack_1a78 = 0;
        if (uStack_1808 != 0) {
          piVar4 = (int *)(uStack_1808 + 0x14);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar9) {
              *piVar4 = *piVar4 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puStack_1a88 = &uStack_1a80;
        if (iStack_183c < 3) {
          uStack_1a80 = *puStack_17f8;
          uStack_1a78 = puStack_17f8[1];
        }
        else {
          uStack_1ad0 = (long *)(ulong)uStack_1840;
          func_0x000109a84868(&uStack_1ad0,&uStack_1840);
        }
        if (puVar16[8] != 0) {
          piVar4 = (int *)(puVar16[8] + 0x14);
          do {
            iVar39 = *piVar4;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar9) {
              *piVar4 = iVar39 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar39 + -1 == 0) {
            func_0x000109a848d4(puVar16 + 1);
          }
        }
        puVar16[8] = 0;
        puVar16[4] = 0;
        puVar16[3] = 0;
        puVar16[6] = 0;
        puVar16[5] = 0;
        if (0 < *(int *)((long)puVar16 + 0xc)) {
          lVar35 = 0;
          lVar44 = puVar16[9];
          do {
            *(undefined4 *)(lVar44 + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < *piVar52);
        }
        puVar16[2] = puStack_1ac8;
        puVar16[1] = uStack_1ad0;
        puVar16[4] = uStack_1ab8;
        puVar16[3] = uStack_1ac0;
        puVar16[6] = uStack_1aa8;
        puVar16[5] = uStack_1ab0;
        puVar16[8] = uStack_1a98;
        puVar16[7] = uStack_1aa0;
        puVar34 = (undefined8 *)puVar16[10];
        iVar39 = uStack_1ad0._4_4_;
        if (puVar34 != puVar27) {
          if (puVar34 != (undefined8 *)0x0) {
            _free(puVar34[-1]);
          }
          puVar16[9] = puVar16 + 2;
          puVar16[10] = puVar27;
          puVar34 = puVar27;
          iVar39 = uStack_1ad0._4_4_;
        }
        if (iVar39 < 3) {
          puVar27 = (undefined8 *)((ulong)&uStack_1ad0 | 4);
          *puVar34 = *puStack_1a88;
          puVar34[1] = puStack_1a88[1];
          uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x42ff0000);
          puVar27[1] = 0;
          *puVar27 = 0;
          puVar27[3] = 0;
          puVar27[2] = 0;
          puVar27[5] = 0;
          puVar27[4] = 0;
          *(undefined8 *)((long)puVar27 + 0x34) = 0;
          *(undefined8 *)((long)puVar27 + 0x2c) = 0;
          if (puStack_1a88 != &uStack_1a80) {
            _free(puStack_1a88[-1]);
          }
        }
        else {
          puVar16[9] = uStack_1a90;
          puVar16[10] = puStack_1a88;
        }
        if ((uStack_15e0 & 0x1f0000) == 0x10000) {
          uStack_1a90 = (ulong)&uStack_1ad0 | 8;
          puStack_1ac8 = (uint *)uStack_15d8[1];
          uStack_1ad0 = (long *)*uStack_15d8;
          uStack_1ab8 = uStack_15d8[3];
          uStack_1ac0 = uStack_15d8[2];
          uStack_1aa8 = uStack_15d8[5];
          uStack_1ab0 = uStack_15d8[4];
          uStack_1a98 = uStack_15d8[7];
          uStack_1aa0 = uStack_15d8[6];
          puStack_1a88 = &uStack_1a80;
          uStack_1a80 = 0;
          uStack_1a78 = 0;
          if (uStack_15d8[7] != 0) {
            piVar52 = (int *)(uStack_15d8[7] + 0x14);
            do {
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
              if (bVar9) {
                *piVar52 = *piVar52 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (*(int *)((long)uStack_15d8 + 4) < 3) {
            uStack_1a80 = *(undefined8 *)uStack_15d8[9];
            uStack_1a78 = ((undefined8 *)uStack_15d8[9])[1];
          }
          else {
            uStack_1ad0 = (long *)((ulong)uStack_1ad0 & 0xffffffff);
            func_0x000109a84868(&uStack_1ad0);
          }
        }
        else {
          FUN_109a8a180(&uStack_1ad0,&uStack_15e0,0xffffffff);
        }
        if (puVar16[0x14] != 0) {
          piVar52 = (int *)(puVar16[0x14] + 0x14);
          do {
            iVar39 = *piVar52;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = iVar39 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar39 + -1 == 0) {
            func_0x000109a848d4(puVar16 + 0xd);
          }
        }
        puVar16[0x14] = 0;
        puVar16[0x10] = 0;
        puVar16[0xf] = 0;
        puVar16[0x12] = 0;
        puVar16[0x11] = 0;
        if (0 < *(int *)((long)puVar16 + 0x6c)) {
          lVar35 = 0;
          lVar44 = puVar16[0x15];
          do {
            *(undefined4 *)(lVar44 + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < *piVar53);
        }
        puVar16[0xe] = puStack_1ac8;
        puVar16[0xd] = uStack_1ad0;
        puVar16[0x10] = uStack_1ab8;
        puVar16[0xf] = uStack_1ac0;
        puVar16[0x12] = uStack_1aa8;
        puVar16[0x11] = uStack_1ab0;
        puVar16[0x14] = uStack_1a98;
        puVar16[0x13] = uStack_1aa0;
        puVar27 = (undefined8 *)puVar16[0x16];
        iVar39 = uStack_1ad0._4_4_;
        if (puVar27 != puVar28) {
          if (puVar27 != (undefined8 *)0x0) {
            _free(puVar27[-1]);
          }
          puVar16[0x15] = puVar16 + 0xe;
          puVar16[0x16] = puVar28;
          puVar27 = puVar28;
          iVar39 = uStack_1ad0._4_4_;
        }
        if (iVar39 < 3) {
          puVar28 = (undefined8 *)((ulong)&uStack_1ad0 | 4);
          *puVar27 = *puStack_1a88;
          puVar27[1] = puStack_1a88[1];
          uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x42ff0000);
          puVar28[1] = 0;
          *puVar28 = 0;
          puVar28[3] = 0;
          puVar28[2] = 0;
          puVar28[5] = 0;
          puVar28[4] = 0;
          *(undefined8 *)((long)puVar28 + 0x34) = 0;
          *(undefined8 *)((long)puVar28 + 0x2c) = 0;
          if (puStack_1a88 != &uStack_1a80) {
            _free(puStack_1a88[-1]);
          }
        }
        else {
          puVar16[0x15] = uStack_1a90;
          puVar16[0x16] = puStack_1a88;
        }
        puVar28 = (undefined8 *)0x20;
        __Znwm();
        piVar52 = (int *)(puVar28 + 1);
        *piVar52 = 1;
        *puVar28 = &PTR_FUN_110b29a18;
        puVar28[2] = puVar16;
        do {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = *piVar52 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puStack_1b18 = puVar28;
        puStack_1b10 = puVar16;
        puStack_1b00 = puVar28;
        puStack_1af8 = puVar16;
        func_0x000109b9b81c(auStack_1ae8,&puStack_1b00,10);
        uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x3010000);
        puStack_1ac8 = &uStack_1710;
        uStack_1ac0 = 0;
        (**(code **)(*puStack_1ae0 + 0x48))(puStack_1ae0,&uStack_1ad0);
        FUN_109b99504(auStack_1ae8);
        FUN_109b994b0(&puStack_1b00);
        FUN_109b9945c(&puStack_1b18);
        if (lStack_16d8 != 0) {
          piVar52 = (int *)(lStack_16d8 + 0x14);
          do {
            iVar39 = *piVar52;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = iVar39 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar39 + -1 == 0) {
            func_0x000109a848d4(&uStack_1710);
          }
        }
        lStack_16d8 = 0;
        uStack_16f8 = 0;
        uStack_16f4 = 0;
        uStack_1700 = 0;
        uStack_16fc = 0;
        uStack_16e8._0_4_ = 0;
        uStack_16e8._4_4_ = 0;
        uStack_16f0._0_4_ = 0;
        uStack_16f0._4_4_ = 0;
        if (0 < iStack_170c) {
          lVar35 = 0;
          do {
            *(undefined4 *)((long)puStack_16d0 + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < iStack_170c);
        }
        if (puStack_16c8 != &uStack_16c0 && puStack_16c8 != (undefined8 *)0x0) {
          _free(puStack_16c8[-1]);
        }
        if (lStack_1678 != 0) {
          piVar52 = (int *)(lStack_1678 + 0x14);
          do {
            iVar39 = *piVar52;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = iVar39 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar39 + -1 == 0) {
            func_0x000109a848d4(&uStack_16b0);
          }
        }
        lStack_1678 = 0;
        uStack_1698 = 0;
        uStack_1694 = 0;
        uStack_16a0 = 0;
        uStack_169c = 0;
        uStack_1688 = 0;
        uStack_1684 = 0;
        uStack_1690 = 0;
        uStack_168c = 0;
        if (0 < iStack_16ac) {
          lVar35 = 0;
          do {
            *(undefined4 *)(uStack_1670 + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < iStack_16ac);
        }
        if (puStack_1668 != &uStack_1660 && puStack_1668 != (undefined8 *)0x0) {
          _free(puStack_1668[-1]);
        }
        if (uStack_1618 != 0) {
          piVar52 = (int *)(uStack_1618 + 0x14);
          do {
            iVar39 = *piVar52;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = iVar39 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar39 + -1 == 0) {
            func_0x000109a848d4(&uStack_1650);
          }
        }
        uStack_1618 = 0;
        uStack_1638 = 0;
        uStack_1640 = 0;
        uStack_1628 = 0;
        uStack_1630 = 0;
        if (0 < uStack_1650._4_4_) {
          lVar35 = 0;
          do {
            *(undefined4 *)(uStack_1610 + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < uStack_1650._4_4_);
        }
        if (puStack_1608 != &uStack_1600 && puStack_1608 != (undefined8 *)0x0) {
          _free(puStack_1608[-1]);
        }
      }
LAB_109b94bbc:
      if ((*(byte *)((long)puVar23 + 2) & 0x1f) != 0) {
        FUN_109a479a0(auStack_1960);
      }
      uVar56 = CONCAT44(uStack_18e4,uStack_18e8);
      uVar55 = CONCAT44(uStack_18ec,uStack_18f0);
      uVar60 = CONCAT44(uStack_18d4,uStack_18d8);
      uVar59 = CONCAT44(uStack_18dc,uStack_18e0);
      puVar20 = uStack_15d8;
      puVar17 = uStack_1898;
    }
    else {
      if (iVar39 == 4) {
        func_0x000109b9ec90(&uStack_15e0,dVar40,&plStack_1970,4,uVar24);
        plVar14 = (long *)CONCAT44(uStack_15d8._4_4_,(undefined4)uStack_15d8);
        uStack_1ac0 = 0;
        uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x1010000);
        puStack_1ac8 = &uStack_1840;
        uStack_1640 = 0;
        uStack_1650 = CONCAT44(uStack_1650._4_4_,0x1010000);
        puStack_1648 = (uint *)&uStack_18a0;
        uStack_16b0 = 0x2010000;
        uStack_16a8 = (undefined4 *)&uStack_1900;
        uStack_16a0 = 0;
        uStack_169c = 0;
        uStack_1710 = 0x2010000;
        uStack_1708 = (undefined8 *)auStack_1960;
        uStack_1700 = 0;
        uStack_16fc = 0;
        (**(code **)(*plVar14 + 0x48))(plVar14,&uStack_1ad0,&uStack_1650,&uStack_16b0,&uStack_1710);
        uVar54 = (uint)plVar14;
LAB_109b93c98:
        FUN_109b98b7c(&uStack_15e0);
        goto LAB_109b93ca4;
      }
      if (iVar39 != 0x10) {
        if (iVar39 != 8) {
          puVar17 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar17 = 1;
          uStack_1ad0 = (long *)(puVar17 + 1);
          puStack_1ac8 = (uint *)0x19;
          *(undefined1 *)((long)puVar17 + 0x1d) = 0;
          *(undefined8 *)(puVar17 + 3) = 0x6974616d69747365;
          *(undefined8 *)(puVar17 + 1) = 0x206e776f6e6b6e55;
          *(undefined8 *)((long)puVar17 + 0x15) = 0x646f6874656d206e;
          *(undefined8 *)((long)puVar17 + 0xd) = 0x6f6974616d697473;
          FUN_109ac3188(0xfffffffb,&uStack_1ad0,&UNK_10f5a2888,&UNK_10f5a2897,0x185);
          goto LAB_109b95110;
        }
        FUN_109b9ebd8(&uStack_15e0,dVar30,dVar40,&plStack_1970,4,uVar24);
        plVar14 = (long *)CONCAT44(uStack_15d8._4_4_,(undefined4)uStack_15d8);
        uStack_1ac0 = 0;
        uStack_1ad0 = (long *)CONCAT44(uStack_1ad0._4_4_,0x1010000);
        puStack_1ac8 = &uStack_1840;
        uStack_1640 = 0;
        uStack_1650 = CONCAT44(uStack_1650._4_4_,0x1010000);
        puStack_1648 = (uint *)&uStack_18a0;
        uStack_16b0 = 0x2010000;
        uStack_16a8 = (undefined4 *)&uStack_1900;
        uStack_16a0 = 0;
        uStack_169c = 0;
        uStack_1710 = 0x2010000;
        uStack_1708 = (undefined8 *)auStack_1960;
        uStack_1700 = 0;
        uStack_16fc = 0;
        (**(code **)(*plVar14 + 0x48))(plVar14,&uStack_1ad0,&uStack_1650,&uStack_16b0,&uStack_1710);
        uVar54 = (uint)plVar14;
        goto LAB_109b93c98;
      }
      auStack_1ae8[0] = 0x1010000;
      puStack_1ae0 = &uStack_18a0;
      uStack_1ad8 = 0;
      puStack_1b00 = (undefined8 *)CONCAT44(puStack_1b00._4_4_,0x2010000);
      puStack_1af8 = &uStack_1900;
      uStack_1af0 = 0;
      puStack_1b18 = (undefined8 *)CONCAT44(puStack_1b18._4_4_,0x2010000);
      puStack_1b10 = (undefined8 *)auStack_1960;
      uStack_1b08 = 0;
      uStack_1a90 = (ulong)&uStack_1ad0 | 8;
      puStack_1ac8 = (uint *)CONCAT44(uStack_1834,uStack_1838);
      uStack_1ad0 = (long *)CONCAT44(iStack_183c,uStack_1840);
      uStack_1ab8 = CONCAT44(uStack_1824,uStack_1828);
      uStack_1ac0 = CONCAT44(uStack_182c,uStack_1830);
      uStack_1aa8 = CONCAT44(uStack_1814,uStack_1818);
      uStack_1ab0 = CONCAT44(uStack_181c,uStack_1820);
      uStack_1aa0 = CONCAT44(uStack_180c,uStack_1810);
      uStack_1a98 = uStack_1808;
      uStack_1a80 = 0;
      uStack_1a78 = 0;
      if (uStack_1808 != 0) {
        piVar52 = (int *)(uStack_1808 + 0x14);
        do {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = *piVar52 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puStack_1a88 = &uStack_1a80;
      if (iStack_183c < 3) {
        uStack_1a80 = *puStack_17f8;
        uStack_1a78 = puStack_17f8[1];
      }
      else {
        uStack_1ad0 = (long *)(ulong)uStack_1840;
        func_0x000109a84868(&uStack_1ad0,&uStack_1840);
      }
      if ((auStack_1ae8[0] & 0x1f0000) == 0x10000) {
        uStack_1610 = (ulong)&uStack_1650 | 8;
        puStack_1648 = (uint *)puStack_1ae0[1];
        uStack_1650 = *puStack_1ae0;
        uStack_1638 = puStack_1ae0[3];
        uStack_1640 = puStack_1ae0[2];
        uStack_1628 = puStack_1ae0[5];
        uStack_1630 = puStack_1ae0[4];
        uStack_1618 = puStack_1ae0[7];
        uStack_1620 = puStack_1ae0[6];
        puStack_1608 = &uStack_1600;
        uStack_15f8 = 0;
        uStack_1600 = 0;
        if (puStack_1ae0[7] != 0) {
          piVar52 = (int *)(puStack_1ae0[7] + 0x14);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
            if (bVar9) {
              *piVar52 = *piVar52 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (*(int *)((long)puStack_1ae0 + 4) < 3) {
          uStack_1600 = *(undefined8 *)puStack_1ae0[9];
          uStack_15f8 = ((undefined8 *)puStack_1ae0[9])[1];
        }
        else {
          uStack_1650 = uStack_1650 & 0xffffffff;
          func_0x000109a84868(&uStack_1650);
        }
      }
      else {
        FUN_109a8a180(&uStack_1650,auStack_1ae8,0xffffffff);
      }
      uStack_16b0 = 0x42ff0000;
      uStack_16a8._4_4_ = 0;
      uStack_16a0 = 0;
      iStack_16ac = 0;
      uStack_16a8._0_4_ = 0;
      uVar25 = (ulong)&uStack_16b0 | 8;
      uStack_1694 = 0;
      uStack_1690 = 0;
      uStack_169c = 0;
      uStack_1698 = 0;
      uStack_1684 = 0;
      uStack_168c = 0;
      uStack_1688 = 0;
      lStack_1678 = 0;
      uStack_1680 = 0;
      uStack_167c = 0;
      uStack_1658 = 0;
      uStack_1660 = 0;
      uStack_1710 = 0x42ff0000;
      puStack_16d0 = &uStack_1708;
      uStack_1708._4_4_ = 0;
      uStack_1700 = 0;
      iStack_170c = 0;
      uStack_1708._0_4_ = 0;
      uStack_16f4 = 0;
      uStack_16f0._0_4_ = 0;
      uStack_16fc = 0;
      uStack_16f8 = 0;
      uStack_16e8._4_4_ = 0;
      uStack_16f0._4_4_ = 0;
      uStack_16e8._0_4_ = 0;
      lStack_16d8 = 0;
      uStack_16e0 = 0;
      uStack_16dc = 0;
      uStack_16b8 = 0;
      uStack_16c0 = 0;
      uStack_15e0 = 3;
      iStack_15dc = 3;
      puStack_16c8 = &uStack_16c0;
      uStack_1670 = uVar25;
      puStack_1668 = &uStack_1660;
      FUN_109a83fd0(&uStack_1710,2,&uStack_15e0,5);
      uStack_15e0 = 0x42ff0000;
      uStack_15a0 = (ulong)&uStack_15e0 | 8;
      uStack_15d8._4_4_ = 0;
      uStack_15d0 = 0;
      iStack_15dc = 0;
      uStack_15d8._0_4_ = 0;
      uStack_15c4 = 0;
      uStack_15c0 = 0;
      uStack_15cc = 0;
      uStack_15c8 = 0;
      uStack_15b4 = 0;
      uStack_15bc = 0;
      uStack_15b8 = 0;
      lStack_15a8 = 0;
      uStack_15b0 = 0;
      uStack_15ac = 0;
      uStack_1590 = 0;
      uStack_1588 = 0;
      uStack_15f0 = CONCAT44(1,uVar51);
      puStack_1598 = &uStack_1590;
      FUN_109a83fd0(&uStack_15e0,2,&uStack_15f0,0);
      if (lStack_1678 != 0) {
        piVar52 = (int *)(lStack_1678 + 0x14);
        do {
          iVar39 = *piVar52;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = iVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_16b0);
        }
      }
      if (0 < iStack_16ac) {
        lVar35 = 0;
        do {
          *(undefined4 *)(uStack_1670 + lVar35 * 4) = 0;
          lVar35 = lVar35 + 1;
        } while (lVar35 < iStack_16ac);
      }
      uStack_16a8._0_4_ = (undefined4)uStack_15d8;
      uStack_16a8._4_4_ = uStack_15d8._4_4_;
      uStack_16b0 = uStack_15e0;
      iStack_16ac = iStack_15dc;
      uStack_1698 = uStack_15c8;
      uStack_1694 = uStack_15c4;
      uStack_16a0 = uStack_15d0;
      uStack_169c = uStack_15cc;
      uStack_1688 = uStack_15b8;
      uStack_1684 = uStack_15b4;
      uStack_1690 = uStack_15c0;
      uStack_168c = uStack_15bc;
      lStack_1678 = lStack_15a8;
      uStack_1680 = uStack_15b0;
      uStack_167c = uStack_15ac;
      uVar32 = uStack_1670;
      puVar16 = puStack_1668;
      if ((puStack_1668 != &uStack_1660) &&
         (uVar32 = uVar25, puVar16 = &uStack_1660, puStack_1668 != (undefined8 *)0x0)) {
        _free(puStack_1668[-1]);
      }
      puStack_1668 = puVar16;
      uStack_1670 = uVar32;
      puVar16 = puStack_1598;
      if (iStack_15dc < 3) {
        puVar28 = (undefined8 *)((ulong)&uStack_15e0 | 4);
        *puStack_1668 = *puStack_1598;
        puStack_1668[1] = puVar16[1];
        uStack_15e0 = 0x42ff0000;
        puVar28[1] = 0;
        *puVar28 = 0;
        puVar28[3] = 0;
        puVar28[2] = 0;
        puVar28[5] = 0;
        puVar28[4] = 0;
        *(undefined8 *)((long)puVar28 + 0x34) = 0;
        *(undefined8 *)((long)puVar28 + 0x2c) = 0;
        if (puVar16 != &uStack_1590) {
          _free(puVar16[-1]);
        }
      }
      else {
        puStack_1668 = puStack_1598;
        uStack_1670 = uStack_15a0;
      }
      FUN_109ba2270(&uStack_15e0);
      uStack_15f0 = CONCAT44(iStack_15dc,uStack_15e0);
      plStack_15e8 = (long *)CONCAT44(uStack_15d8._4_4_,(undefined4)uStack_15d8);
      if (uStack_15f0 != 0) {
        piVar52 = (int *)(uStack_15f0 + 8);
        do {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = *piVar52 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      (**(code **)(*plStack_15e8 + 0x20))(0x3fd6666666666666,plStack_15e8,puVar13);
      FUN_109b97440(&uStack_15f0);
      lStack_1720 = CONCAT44(iStack_15dc,uStack_15e0);
      plVar14 = (long *)CONCAT44(uStack_15d8._4_4_,(undefined4)uStack_15d8);
      if (lStack_1720 != 0) {
        piVar52 = (int *)(lStack_1720 + 8);
        do {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = *piVar52 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_1718 = plVar14;
      (**(code **)(*plVar14 + 0x38))
                ((float)dVar30,dVar40,0x3fd6666666666666,plVar14,uStack_1ac0,uStack_1640,
                 CONCAT44(uStack_169c,uStack_16a0),puVar13,uVar24,uVar24,4,5);
      FUN_109b97440(&lStack_1720);
      FUN_109a41858(0x3ff0000000000000,0,&uStack_1710,&puStack_1b00,6);
      if (uVar51 != 0) {
        uVar25 = 0;
        do {
          *(bool *)(CONCAT44(uStack_169c,uStack_16a0) + uVar25) =
               *(char *)(CONCAT44(uStack_169c,uStack_16a0) + uVar25) != '\0';
          uVar25 = uVar25 + 1;
        } while (((ulong)puVar13 & 0xffffffff) != uVar25);
      }
      FUN_109a479a0(&uStack_16b0,&puStack_1b18);
      FUN_109b97440(&uStack_15e0);
      if (lStack_16d8 != 0) {
        piVar52 = (int *)(lStack_16d8 + 0x14);
        do {
          iVar39 = *piVar52;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = iVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_1710);
        }
      }
      lStack_16d8 = 0;
      uStack_16f8 = 0;
      uStack_16f4 = 0;
      uStack_1700 = 0;
      uStack_16fc = 0;
      uStack_16e8._0_4_ = 0;
      uStack_16e8._4_4_ = 0;
      uStack_16f0._0_4_ = 0;
      uStack_16f0._4_4_ = 0;
      if (0 < iStack_170c) {
        lVar35 = 0;
        do {
          *(undefined4 *)((long)puStack_16d0 + lVar35 * 4) = 0;
          lVar35 = lVar35 + 1;
        } while (lVar35 < iStack_170c);
      }
      if (puStack_16c8 != &uStack_16c0 && puStack_16c8 != (undefined8 *)0x0) {
        _free(puStack_16c8[-1]);
      }
      if (lStack_1678 != 0) {
        piVar52 = (int *)(lStack_1678 + 0x14);
        do {
          iVar39 = *piVar52;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = iVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_16b0);
        }
      }
      lStack_1678 = 0;
      uStack_1698 = 0;
      uStack_1694 = 0;
      uStack_16a0 = 0;
      uStack_169c = 0;
      uStack_1688 = 0;
      uStack_1684 = 0;
      uStack_1690 = 0;
      uStack_168c = 0;
      if (0 < iStack_16ac) {
        lVar35 = 0;
        do {
          *(undefined4 *)(uStack_1670 + lVar35 * 4) = 0;
          lVar35 = lVar35 + 1;
        } while (lVar35 < iStack_16ac);
      }
      if (puStack_1668 != &uStack_1660 && puStack_1668 != (undefined8 *)0x0) {
        _free(puStack_1668[-1]);
      }
      if (uStack_1618 != 0) {
        piVar52 = (int *)(uStack_1618 + 0x14);
        do {
          iVar39 = *piVar52;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = iVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_1650);
        }
      }
      uStack_1618 = 0;
      uStack_1638 = 0;
      uStack_1640 = 0;
      uStack_1628 = 0;
      uStack_1630 = 0;
      if (0 < uStack_1650._4_4_) {
        lVar35 = 0;
        do {
          *(undefined4 *)(uStack_1610 + lVar35 * 4) = 0;
          lVar35 = lVar35 + 1;
        } while (lVar35 < uStack_1650._4_4_);
      }
      if (puStack_1608 != &uStack_1600 && puStack_1608 != (undefined8 *)0x0) {
        _free(puStack_1608[-1]);
      }
      if (uStack_1a98 != 0) {
        piVar52 = (int *)(uStack_1a98 + 0x14);
        do {
          iVar39 = *piVar52;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = iVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_1ad0);
        }
      }
      uStack_1a98 = 0;
      uStack_1ab8 = 0;
      uStack_1ac0 = 0;
      uStack_1aa8 = 0;
      uStack_1ab0 = 0;
      if (0 < uStack_1ad0._4_4_) {
        lVar35 = 0;
        do {
          *(undefined4 *)(uStack_1a90 + lVar35 * 4) = 0;
          lVar35 = lVar35 + 1;
        } while (lVar35 < uStack_1ad0._4_4_);
      }
      if (puStack_1a88 != &uStack_1a80 && puStack_1a88 != (undefined8 *)0x0) {
        _free(puStack_1a88[-1]);
      }
      if ((int)plVar14 != 0) goto LAB_109b94bbc;
LAB_109b93e08:
      if (lStack_18c8 != 0) {
        piVar52 = (int *)(lStack_18c8 + 0x14);
        do {
          iVar39 = *piVar52;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
          if (bVar9) {
            *piVar52 = iVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_1900);
        }
      }
      puVar17 = (undefined4 *)CONCAT44(uStack_1898._4_4_,(undefined4)uStack_1898);
      puVar20 = (ulong *)CONCAT44(uStack_15d8._4_4_,(undefined4)uStack_15d8);
      lStack_18c8 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uStack_18e8 = 0;
      uStack_18e4 = 0;
      uStack_18f0 = 0;
      uStack_18ec = 0;
      uStack_18d8 = 0;
      uStack_18d4 = 0;
      uStack_18e0 = 0;
      uStack_18dc = 0;
      if (0 < uStack_1900._4_4_) {
        lVar35 = 0;
        do {
          puStack_18c0[lVar35] = 0;
          lVar35 = lVar35 + 1;
        } while (lVar35 < uStack_1900._4_4_);
      }
      uVar59 = 0;
      uVar60 = 0;
    }
    *extraout_x8 = (undefined4)uStack_1900;
    extraout_x8[1] = uStack_1900._4_4_;
    *(ulong *)(extraout_x8 + 2) = CONCAT44(uStack_18f4,uStack_18f8);
    *(undefined8 *)(extraout_x8 + 6) = uVar56;
    *(undefined8 *)(extraout_x8 + 4) = uVar55;
    *(undefined8 *)(extraout_x8 + 10) = uVar60;
    *(undefined8 *)(extraout_x8 + 8) = uVar59;
    *(ulong *)(extraout_x8 + 0xc) = CONCAT44(uStack_18cc,uStack_18d0);
    *(long *)(extraout_x8 + 0xe) = lStack_18c8;
    *(undefined8 *)(extraout_x8 + 0x14) = 0;
    *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
    *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
    *(undefined8 *)(extraout_x8 + 0x16) = 0;
    if (uStack_1900._4_4_ < 3) {
      *(undefined8 *)(extraout_x8 + 0x14) = *puStack_18b8;
      *(undefined8 *)(extraout_x8 + 0x16) = puStack_18b8[1];
    }
    else {
      *(undefined4 **)(extraout_x8 + 0x10) = puStack_18c0;
      *(undefined8 **)(extraout_x8 + 0x12) = puStack_18b8;
      puStack_18c0 = &uStack_18f8;
      puStack_18b8 = &uStack_18b0;
    }
    uStack_1900._0_4_ = 0x42ff0000;
    puVar41[1] = 0;
    *puVar41 = 0;
    puVar41[3] = 0;
    puVar41[2] = 0;
    puVar41[5] = 0;
    puVar41[4] = 0;
    *(undefined8 *)((long)puVar41 + 0x34) = 0;
    *(undefined8 *)((long)puVar41 + 0x2c) = 0;
    uStack_15d8 = puVar20;
    uStack_1898 = puVar17;
    FUN_109b98b28(&plStack_1970);
LAB_109b94c74:
    if (lStack_1928 != 0) {
      piVar52 = (int *)(lStack_1928 + 0x14);
      do {
        iVar39 = *piVar52;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = iVar39 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(auStack_1960);
      }
    }
    lStack_1928 = 0;
    uStack_1948 = 0;
    uStack_1944 = 0;
    uStack_1950 = 0;
    uStack_194c = 0;
    uStack_1938 = 0;
    uStack_1934 = 0;
    uStack_1940 = 0;
    uStack_193c = 0;
    if (0 < (int)auStack_1960._4_4_) {
      lVar35 = 0;
      do {
        *(undefined4 *)(puStack_1920 + lVar35 * 4) = 0;
        lVar35 = lVar35 + 1;
      } while (lVar35 < (int)auStack_1960._4_4_);
    }
    if (puStack_1918 != &uStack_1910 && puStack_1918 != (undefined8 *)0x0) {
      _free(puStack_1918[-1]);
    }
    if (lStack_18c8 != 0) {
      piVar52 = (int *)(lStack_18c8 + 0x14);
      do {
        iVar39 = *piVar52;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = iVar39 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_1900);
      }
    }
    lStack_18c8 = 0;
    uStack_18e8 = 0;
    uStack_18e4 = 0;
    uStack_18f0 = 0;
    uStack_18ec = 0;
    uStack_18d8 = 0;
    uStack_18d4 = 0;
    uStack_18e0 = 0;
    uStack_18dc = 0;
    if (0 < uStack_1900._4_4_) {
      lVar35 = 0;
      do {
        puStack_18c0[lVar35] = 0;
        lVar35 = lVar35 + 1;
      } while (lVar35 < uStack_1900._4_4_);
    }
    if (puStack_18b8 != &uStack_18b0 && puStack_18b8 != (undefined8 *)0x0) {
      _free(puStack_18b8[-1]);
    }
    if (lStack_1868 != 0) {
      piVar52 = (int *)(lStack_1868 + 0x14);
      do {
        iVar39 = *piVar52;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = iVar39 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_18a0);
      }
    }
    lStack_1868 = 0;
    uStack_1888 = 0;
    uStack_1884 = 0;
    uStack_1890 = 0;
    uStack_188c = 0;
    uStack_1878 = 0;
    uStack_1874 = 0;
    uStack_1880 = 0;
    uStack_187c = 0;
    if (0 < uStack_18a0._4_4_) {
      lVar35 = 0;
      do {
        *(undefined4 *)((long)puStack_1860 + lVar35 * 4) = 0;
        lVar35 = lVar35 + 1;
      } while (lVar35 < uStack_18a0._4_4_);
    }
    if (puStack_1858 != &uStack_1850 && puStack_1858 != (undefined8 *)0x0) {
      _free(puStack_1858[-1]);
    }
    if (uStack_1808 != 0) {
      piVar52 = (int *)(uStack_1808 + 0x14);
      do {
        iVar39 = *piVar52;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = iVar39 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_1840);
      }
    }
    uStack_1808 = 0;
    uStack_1828 = 0;
    uStack_1824 = 0;
    uStack_1830 = 0;
    uStack_182c = 0;
    uStack_1818 = 0;
    uStack_1814 = 0;
    uStack_1820 = 0;
    uStack_181c = 0;
    if (0 < iStack_183c) {
      lVar35 = 0;
      do {
        *(undefined4 *)(uStack_1800 + lVar35 * 4) = 0;
        lVar35 = lVar35 + 1;
      } while (lVar35 < iStack_183c);
    }
    if (puStack_17f8 != &uStack_17f0 && puStack_17f8 != (undefined8 *)0x0) {
      _free(puStack_17f8[-1]);
    }
    if (uStack_17a8 != 0) {
      piVar52 = (int *)(uStack_17a8 + 0x14);
      do {
        iVar39 = *piVar52;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = iVar39 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_17e0);
      }
    }
    uStack_17a8 = 0;
    uStack_17c8 = 0;
    uStack_17d0 = 0;
    uStack_17b8 = 0;
    uStack_17c0 = 0;
    if (0 < uStack_17e0._4_4_) {
      lVar35 = 0;
      do {
        *(undefined4 *)(uStack_17a0 + lVar35 * 4) = 0;
        lVar35 = lVar35 + 1;
      } while (lVar35 < uStack_17e0._4_4_);
    }
    if (puStack_1798 != &uStack_1790 && puStack_1798 != (undefined8 *)0x0) {
      _free(puStack_1798[-1]);
    }
    if (uStack_1748 != 0) {
      piVar52 = (int *)(uStack_1748 + 0x14);
      do {
        iVar39 = *piVar52;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar52,0x10);
        if (bVar9) {
          *piVar52 = iVar39 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_1780);
      }
    }
    uStack_1748 = 0;
    dVar30 = 0.0;
    uStack_1768 = 0;
    uStack_1770 = 0;
    uStack_1758 = 0;
    uStack_1760 = 0;
    if (0 < uStack_1780._4_4_) {
      lVar35 = 0;
      do {
        *(undefined4 *)(uStack_1740 + lVar35 * 4) = 0;
        lVar35 = lVar35 + 1;
      } while (lVar35 < uStack_1780._4_4_);
    }
    if (puStack_1738 != &uStack_1730 && puStack_1738 != (undefined8 *)0x0) {
      _free(puStack_1738[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1578) {
      return dVar30;
    }
    ___stack_chk_fail();
  }
  puVar17 = (undefined4 *)0x30;
  func_0x000107c2ae8c();
  *puVar17 = 1;
  uStack_1ad0 = (long *)(puVar17 + 1);
  puStack_1ac8 = (uint *)0x28;
  *(undefined1 *)(puVar17 + 0xb) = 0;
  *(undefined8 *)(puVar17 + 3) = 0x28726f746365566b;
  *(undefined8 *)(puVar17 + 1) = 0x636568632e637273;
  *(undefined8 *)(puVar17 + 7) = 0x566b636568632e74;
  *(undefined8 *)(puVar17 + 5) = 0x7364203d3d202932;
  *(undefined8 *)(puVar17 + 9) = 0x293228726f746365;
  FUN_109ac3188(0xffffff29,&uStack_1ad0,&UNK_10f5a2888,&UNK_10f5a2897,0x172);
LAB_109b95110:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109b95114);
  (*pcVar8)();
}



/* Entry: 109b92b98; end: 109b92fcb;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_109b92b98(double *param_1,long param_2,long param_3,double *param_4,double *param_5)

{
  ulong uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  double *pdVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  ulong *puVar14;
  double *pdVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  bool bVar18;
  int iVar19;
  long lVar20;
  undefined4 *extraout_x8;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  bool bVar24;
  long lVar25;
  double *pdVar26;
  undefined8 *puVar27;
  double *pdVar28;
  double *pdVar29;
  int iVar30;
  ulong uVar31;
  undefined8 *puVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  double *pdVar37;
  double *pdVar38;
  int iVar39;
  uint uVar40;
  int *piVar41;
  int *piVar42;
  uint uVar43;
  ulong uVar44;
  double dVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  double dVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined8 *puStack_9f8;
  undefined8 *puStack_9f0;
  undefined8 uStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 uStack_9d0;
  uint auStack_9c8 [2];
  ulong *puStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  uint *puStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  undefined8 *puStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long *plStack_850;
  long *plStack_848;
  undefined1 auStack_840 [8];
  undefined1 auStack_838 [4];
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  long lStack_808;
  undefined1 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  long lStack_7a8;
  undefined4 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  uint uStack_720;
  int iStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  ulong uStack_6e8;
  ulong uStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  long lStack_600;
  long *plStack_5f8;
  uint uStack_5f0;
  int iStack_5ec;
  undefined8 uStack_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  uint uStack_590;
  int iStack_58c;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  ulong uStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  uint *puStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long *plStack_4c8;
  uint uStack_4c0;
  int iStack_4bc;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  long lStack_488;
  ulong uStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_458;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  double *pdStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  double *pdStack_378;
  undefined8 uStack_370;
  uint auStack_368 [6];
  undefined1 *puStack_350;
  undefined8 uStack_348;
  uint auStack_340 [6];
  undefined1 *puStack_328;
  undefined8 uStack_320;
  double adStack_318 [9];
  double adStack_2d0 [9];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [16];
  double adStack_260 [7];
  double adStack_228 [6];
  long lStack_1f8;
  double *pdStack_1f0;
  double *pdStack_1e8;
  double *pdStack_1e0;
  double *pdStack_1d8;
  ulong uStack_1d0;
  double *pdStack_1c8;
  long lStack_1c0;
  double *pdStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  double *pdStack_198;
  double adStack_190 [10];
  double adStack_140 [2];
  double adStack_130 [9];
  double adStack_e8 [13];
  long lStack_80;
  
  uVar44 = 0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar26 = (double *)(param_2 + 0x28);
  pdStack_198 = adStack_e8;
  pdVar38 = adStack_190 + 4;
  pdVar6 = param_1;
  lVar36 = param_3;
  pdVar15 = param_4;
  do {
    lVar20 = 0;
    lVar25 = *(long *)(param_3 + 0x18);
    dVar45 = *param_4;
    dVar48 = param_4[1];
    dVar51 = param_4[2];
    dVar52 = param_4[3];
    pdVar28 = adStack_140 + 2;
    pdVar29 = pdVar26;
    do {
      dVar53 = pdVar29[-5];
      dVar54 = pdVar29[-4];
      dVar56 = pdVar29[-3];
      dVar55 = pdVar29[-2];
      dVar58 = pdVar29[-1];
      dVar61 = *pdVar29;
      dVar59 = pdVar29[1];
      dVar60 = pdVar29[2];
      dVar62 = dVar48 * dVar58;
      dVar63 = dVar48 * dVar60;
      dVar64 = pdVar29[3];
      dVar65 = pdVar29[4];
      dVar57 = *(double *)(lVar25 + lVar20);
      *pdVar28 = dVar62 + dVar45 * dVar55 + dVar51 * (dVar61 + dVar61) + dVar52 * dVar64;
      pdVar28[1] = dVar63 + dVar45 * dVar59 + dVar51 * dVar64 + dVar52 * (dVar65 + dVar65);
      pdVar28[-2] = dVar54 * dVar48 + dVar45 * (dVar53 + dVar53) + dVar51 * dVar55 + dVar52 * dVar59
      ;
      pdVar28[-1] = dVar48 * (dVar56 + dVar56) + dVar45 * dVar54 + dVar51 * dVar58 + dVar52 * dVar60
      ;
      *(double *)((long)pdVar38 + lVar20) =
           dVar57 - (dVar45 * dVar54 * dVar48 + dVar45 * dVar45 * dVar53 + dVar48 * dVar48 * dVar56
                     + dVar51 * dVar45 * dVar55 + dVar51 * dVar62 + dVar51 * dVar51 * dVar61 +
                     dVar52 * dVar45 * dVar59 + dVar52 * dVar63 + dVar52 * dVar51 * dVar64 +
                    dVar52 * dVar52 * dVar65);
      lVar20 = lVar20 + 8;
      pdVar29 = pdVar29 + 10;
      pdVar28 = pdVar28 + 4;
    } while (lVar20 != 0x30);
    iVar19 = *(int *)(param_1 + 0x29);
    if ((iVar19 != 0) && (iVar19 < 6)) {
      if (param_1[0x2a] != 0.0) {
        __ZdaPv();
      }
      pdVar6 = (double *)param_1[0x2b];
      if (pdVar6 != (double *)0x0) {
        __ZdaPv();
      }
      iVar19 = *(int *)(param_1 + 0x29);
    }
    if (iVar19 < 6) {
      *(undefined4 *)(param_1 + 0x29) = 6;
      dVar45 = 2.37151510003798e-322;
      __Znam();
      param_1[0x2a] = dVar45;
      pdVar6 = (double *)0x30;
      __Znam();
      param_1[0x2b] = (double)pdVar6;
    }
    pdVar29 = adStack_140;
    iVar30 = 0xc0;
    iVar33 = 0xa0;
    iVar19 = 1;
    uVar31 = 0;
    pdVar28 = adStack_140 + 1;
    do {
      lVar20 = 0;
      uVar1 = uVar31 + 1;
      dVar45 = ABS(*pdVar29);
      do {
        dVar48 = ABS(*(double *)((long)pdVar29 + lVar20));
        if (ABS(*(double *)((long)pdVar29 + lVar20)) <= dVar45) {
          dVar48 = dVar45;
        }
        lVar20 = lVar20 + 0x20;
        dVar45 = dVar48;
      } while (iVar33 != (int)lVar20);
      if (dVar48 == 0.0) {
        lVar20 = (uVar31 & 0xffffffff) * 8;
        dVar45 = param_1[0x2a];
        *(undefined8 *)((long)param_1[0x2b] + lVar20) = 0;
        *(undefined8 *)((long)dVar45 + lVar20) = 0;
        goto LAB_109b92f6c;
      }
      lVar20 = 0;
      dVar45 = 0.0;
      do {
        dVar51 = (1.0 / dVar48) * *(double *)((long)pdVar29 + lVar20);
        *(double *)((long)pdVar29 + lVar20) = dVar51;
        dVar45 = dVar45 + dVar51 * dVar51;
        lVar20 = lVar20 + 0x20;
      } while (iVar30 != (int)lVar20);
      dVar51 = -SQRT(dVar45);
      if (0.0 <= *pdVar29) {
        dVar51 = SQRT(dVar45);
      }
      dVar53 = *pdVar29 + dVar51;
      *pdVar29 = dVar53;
      dVar45 = param_1[0x2a];
      dVar52 = param_1[0x2b];
      *(double *)((long)dVar45 + uVar31 * 8) = dVar51 * dVar53;
      *(double *)((long)dVar52 + uVar31 * 8) = -(dVar48 * dVar51);
      if (uVar31 < 3) {
        dVar48 = *(double *)((long)dVar45 + uVar31 * 8);
        pdVar37 = pdVar28;
        iVar39 = iVar19;
        do {
          lVar20 = 0;
          dVar51 = 0.0;
          do {
            dVar51 = dVar51 + *(double *)((long)pdVar37 + lVar20) *
                              *(double *)((long)pdVar29 + lVar20);
            lVar20 = lVar20 + 0x20;
          } while (iVar30 != (int)lVar20);
          pdVar6 = (double *)0x0;
          do {
            *(double *)((long)pdVar37 + (long)pdVar6) =
                 *(double *)((long)pdVar37 + (long)pdVar6) +
                 *(double *)((long)pdVar29 + (long)pdVar6) * (-dVar51 / dVar48);
            pdVar6 = pdVar6 + 4;
          } while (iVar30 != (int)pdVar6);
          iVar39 = iVar39 + 1;
          pdVar37 = pdVar37 + 1;
        } while (iVar39 != 4);
      }
      pdVar29 = pdVar29 + 5;
      iVar19 = iVar19 + 1;
      iVar33 = iVar33 + -0x20;
      iVar30 = iVar30 + -0x20;
      pdVar28 = pdVar28 + 5;
      uVar31 = uVar1;
    } while (uVar1 != 4);
    lVar20 = 0;
    pdVar29 = adStack_140;
    pdVar28 = adStack_190 + 4;
    lVar25 = 0xc0;
    do {
      lVar34 = 0;
      dVar48 = 0.0;
      pdVar37 = pdVar28;
      do {
        dVar48 = dVar48 + *pdVar37 * *(double *)((long)pdVar29 + lVar34);
        lVar34 = lVar34 + 0x20;
        pdVar37 = pdVar37 + 1;
      } while (lVar25 != lVar34);
      lVar34 = 0;
      dVar51 = *(double *)((long)dVar45 + lVar20 * 8);
      pdVar37 = pdVar28;
      do {
        *pdVar37 = *pdVar37 + *(double *)((long)pdVar29 + lVar34) * (-dVar48 / dVar51);
        lVar34 = lVar34 + 0x20;
        pdVar37 = pdVar37 + 1;
      } while (lVar25 != lVar34);
      pdVar29 = pdVar29 + 5;
      lVar20 = lVar20 + 1;
      lVar25 = lVar25 + -0x20;
      pdVar28 = pdVar28 + 1;
    } while (lVar20 != 4);
    lVar25 = 0;
    adStack_190[3] = adStack_190[7] / *(double *)((long)dVar52 + 0x18);
    pdVar29 = pdStack_198;
    lVar20 = 2;
    do {
      dVar45 = 0.0;
      pdVar28 = pdVar29;
      lVar34 = lVar25;
      do {
        dVar45 = dVar45 + *(double *)((long)(adStack_190 + 3) + lVar34) * *pdVar28;
        lVar34 = lVar34 + 8;
        pdVar28 = pdVar28 + 1;
      } while (lVar34 != 8);
      adStack_190[lVar20] = (pdVar38[lVar20] - dVar45) / *(double *)((long)dVar52 + lVar20 * 8);
      lVar25 = lVar25 + -8;
      pdVar29 = pdVar29 + -5;
      bVar18 = lVar20 != 0;
      lVar20 = lVar20 + -1;
    } while (bVar18);
LAB_109b92f6c:
    dVar45 = *param_4;
    param_4[1] = adStack_190[1] + param_4[1];
    *param_4 = adStack_190[0] + dVar45;
    param_4[3] = adStack_190[3] + param_4[3];
    param_4[2] = adStack_190[2] + param_4[2];
    uVar40 = (int)uVar44 + 1;
    uVar44 = (ulong)uVar40;
  } while (uVar40 != 5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return adStack_190[0] + dVar45;
  }
  ___stack_chk_fail();
  pdStack_1f0 = pdVar38;
  pdStack_1e8 = adStack_140 + 1;
  pdStack_1e0 = adStack_190 + 3;
  pdStack_1d8 = adStack_190;
  uStack_1d0 = uVar44;
  pdStack_1c8 = param_1;
  lStack_1c0 = param_3;
  pdStack_1b8 = param_4;
  puStack_1b0 = &stack0xfffffffffffffff0;
  pcStack_1a8 = FUN_109b92fcc;
  lVar20 = 0;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar26 = pdVar6 + 0x1d;
  pdVar6[0x1e] = 0.0;
  *pdVar26 = 0.0;
  pdVar6[0x26] = 0.0;
  pdVar6[0x25] = 0.0;
  pdVar6[0x28] = 0.0;
  pdVar6[0x27] = 0.0;
  pdVar6[0x22] = 0.0;
  pdVar6[0x21] = 0.0;
  pdVar6[0x24] = 0.0;
  pdVar6[0x23] = 0.0;
  pdVar6[0x20] = 0.0;
  pdVar6[0x1f] = 0.0;
  param_2 = param_2 + 0x420;
  do {
    lVar25 = 0;
    lVar34 = param_2;
    pdVar38 = pdVar26;
    do {
      lVar35 = 0;
      do {
        *(double *)((long)pdVar38 + lVar35) =
             *(double *)((long)pdVar38 + lVar35) +
             *(double *)(lVar34 + lVar35) * *(double *)(lVar36 + lVar20 * 8);
        lVar35 = lVar35 + 8;
      } while (lVar35 != 0x18);
      lVar25 = lVar25 + 1;
      pdVar38 = pdVar38 + 3;
      lVar34 = lVar34 + 0x18;
    } while (lVar25 != 4);
    lVar20 = lVar20 + 1;
    param_2 = param_2 + -0x60;
  } while (lVar20 != 4);
  uVar40 = *(uint *)(pdVar6 + 0x10);
  uVar44 = (ulong)uVar40;
  if ((int)uVar40 < 1) {
    dVar45 = pdVar6[0xd];
    if (*(double *)((long)dVar45 + 0x10) < 0.0) goto LAB_109b9310c;
LAB_109b931d0:
    adStack_228[4] = 0.0;
    adStack_228[5] = 0.0;
    adStack_228[2] = 0.0;
    adStack_228[3] = 0.0;
    adStack_228[0] = 0.0;
    adStack_228[1] = 0.0;
  }
  else {
    uVar31 = 0;
    dVar51 = pdVar6[10];
    dVar45 = pdVar6[0xd];
    dVar48 = dVar45;
    do {
      lVar36 = 0;
      pdVar29 = (double *)((long)dVar51 + uVar31 * 0x20);
      pdVar38 = pdVar26;
      do {
        *(double *)((long)dVar48 + lVar36 * 8) =
             pdVar29[1] * pdVar38[3] + *pdVar38 * *pdVar29 + pdVar38[6] * pdVar29[2] +
             pdVar38[9] * pdVar29[3];
        lVar36 = lVar36 + 1;
        pdVar38 = pdVar38 + 1;
      } while (lVar36 != 3);
      uVar31 = uVar31 + 1;
      dVar48 = (double)((long)dVar48 + 0x18);
    } while (uVar31 != uVar44);
    if (*(double *)((long)dVar45 + 0x10) < 0.0) {
LAB_109b9310c:
      lVar36 = 0;
      do {
        lVar20 = 0;
        do {
          *(double *)((long)pdVar26 + lVar20) = -*(double *)((long)pdVar26 + lVar20);
          lVar20 = lVar20 + 8;
        } while (lVar20 != 0x18);
        lVar36 = lVar36 + 1;
        pdVar26 = pdVar26 + 3;
      } while (lVar36 != 4);
      if ((int)uVar40 < 1) goto LAB_109b931d0;
      pdVar26 = (double *)((long)dVar45 + 0x10);
      uVar31 = uVar44;
      do {
        pdVar26[-1] = -pdVar26[-1];
        pdVar26[-2] = -pdVar26[-2];
        *pdVar26 = -*pdVar26;
        uVar31 = uVar31 - 1;
        pdVar26 = pdVar26 + 3;
      } while (uVar31 != 0);
    }
    adStack_228[4] = 0.0;
    adStack_228[5] = 0.0;
    adStack_228[2] = 0.0;
    adStack_228[3] = 0.0;
    adStack_228[0] = 0.0;
    adStack_228[1] = 0.0;
    uVar31 = 0;
    dVar48 = pdVar6[4];
    do {
      lVar36 = 0;
      do {
        *(double *)((long)adStack_228 + lVar36 + 0x18) =
             *(double *)((long)dVar45 + lVar36) + *(double *)((long)adStack_228 + lVar36 + 0x18);
        *(double *)((long)adStack_228 + lVar36) =
             *(double *)((long)dVar48 + lVar36) + *(double *)((long)adStack_228 + lVar36);
        lVar36 = lVar36 + 8;
      } while (lVar36 != 0x18);
      uVar31 = uVar31 + 1;
      dVar48 = (double)((long)dVar48 + 0x18);
      dVar45 = (double)((long)dVar45 + 0x18);
    } while (uVar31 != uVar44);
  }
  lVar36 = 0;
  do {
    *(double *)((long)adStack_228 + lVar36 + 0x18) =
         *(double *)((long)adStack_228 + lVar36 + 0x18) / (double)(int)uVar40;
    *(double *)((long)adStack_228 + lVar36) =
         *(double *)((long)adStack_228 + lVar36) / (double)(int)uVar40;
    lVar36 = lVar36 + 8;
  } while (lVar36 != 0x18);
  uStack_320 = 0x300000003;
  puStack_328 = auStack_270;
  auStack_340[2] = 0;
  auStack_340[3] = 0;
  auStack_340[4] = 0;
  uStack_348 = 0x100000003;
  auStack_340[0] = 0x42424006;
  auStack_340[1] = 0x18;
  uStack_370 = 0x300000003;
  auStack_368[0] = 0x42424006;
  auStack_368[1] = 8;
  puStack_350 = auStack_288;
  auStack_368[2] = 0;
  auStack_368[3] = 0;
  auStack_368[4] = 0;
  uStack_398 = 0x300000003;
  uStack_390 = 0x1842424006;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_3b8 = 0x1842424006;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  pdStack_3a0 = adStack_318;
  pdStack_378 = adStack_2d0;
  FUN_109a4b71c(auStack_340);
  dVar51 = adStack_228[2];
  dVar48 = adStack_228[1];
  dVar45 = adStack_228[0];
  uVar40 = *(uint *)(pdVar6 + 0x10);
  if (0 < (int)uVar40) {
    uVar44 = 0;
    dVar52 = pdVar6[0xd];
    dVar53 = pdVar6[4];
    do {
      lVar36 = 0;
      pdVar38 = (double *)((long)dVar53 + uVar44 * 0x18);
      pdVar26 = adStack_260;
      do {
        dVar54 = *(double *)((long)adStack_228 + lVar36 + 0x18);
        pdVar26[-2] = pdVar26[-2] +
                      (*pdVar38 - dVar45) * (*(double *)((long)dVar52 + lVar36) - dVar54);
        pdVar26[-1] = pdVar26[-1] +
                      (pdVar38[1] - dVar48) * (*(double *)((long)dVar52 + lVar36) - dVar54);
        *pdVar26 = *pdVar26 + (pdVar38[2] - dVar51) * (*(double *)((long)dVar52 + lVar36) - dVar54);
        lVar36 = lVar36 + 8;
        pdVar26 = pdVar26 + 3;
      } while (lVar36 != 0x18);
      uVar44 = uVar44 + 1;
      dVar52 = (double)((long)dVar52 + 0x18);
    } while (uVar44 != uVar40);
  }
  puVar7 = auStack_340;
  puVar13 = auStack_368;
  iVar19 = (int)&uStack_390;
  puVar16 = &uStack_3b8;
  uVar17 = 1;
  FUN_109a5dcc4();
  lVar36 = 0;
  pdVar26 = pdVar15;
  do {
    lVar20 = 0;
    dVar45 = adStack_2d0[lVar36 * 3];
    dVar48 = adStack_2d0[lVar36 * 3 + 1];
    dVar51 = adStack_2d0[lVar36 * 3 + 2];
    pdVar38 = pdVar26;
    do {
      *pdVar38 = dVar48 * *(double *)((long)adStack_318 + lVar20 + 8) +
                 *(double *)((long)adStack_318 + lVar20) * dVar45 +
                 *(double *)((long)adStack_318 + lVar20 + 0x10) * dVar51;
      lVar20 = lVar20 + 0x18;
      pdVar38 = pdVar38 + 1;
    } while (lVar20 != 0x48);
    lVar36 = lVar36 + 1;
    pdVar26 = pdVar26 + 3;
  } while (lVar36 != 3);
  dVar45 = *pdVar15;
  dVar48 = pdVar15[1];
  dVar52 = pdVar15[8];
  dVar51 = pdVar15[2];
  dVar54 = pdVar15[7];
  dVar53 = pdVar15[6];
  if (dVar48 * pdVar15[5] * dVar53 + dVar52 * dVar45 * pdVar15[4] + dVar51 * pdVar15[3] * dVar54 +
      dVar53 * -(dVar51 * pdVar15[4]) + dVar52 * -(dVar48 * pdVar15[3]) +
      -(dVar45 * pdVar15[5]) * dVar54 < 0.0) {
    pdVar15[7] = -dVar54;
    pdVar15[6] = -dVar53;
    pdVar15[8] = -dVar52;
  }
  dVar45 = adStack_228[3] -
           (dVar48 * adStack_228[1] + adStack_228[0] * dVar45 + adStack_228[2] * dVar51);
  *param_5 = dVar45;
  dVar48 = adStack_228[4] -
           (adStack_228[1] * pdVar15[4] + adStack_228[0] * pdVar15[3] + adStack_228[2] * pdVar15[5])
  ;
  param_5[1] = dVar48;
  dVar51 = adStack_228[5] -
           (adStack_228[1] * pdVar15[7] + adStack_228[0] * pdVar15[6] + adStack_228[2] * pdVar15[8])
  ;
  param_5[2] = dVar51;
  uVar40 = *(uint *)(pdVar6 + 0x10);
  uVar44 = (ulong)uVar40;
  if ((int)uVar40 < 1) {
    dVar52 = 0.0;
  }
  else {
    pdVar26 = (double *)((long)pdVar6[7] + 8);
    dVar52 = 0.0;
    pdVar38 = (double *)((long)pdVar6[4] + 0x10);
    do {
      dVar53 = pdVar38[-2];
      dVar55 = pdVar38[-1];
      dVar57 = *pdVar38;
      dVar54 = 1.0 / (dVar51 + pdVar15[7] * dVar55 + dVar53 * pdVar15[6] + dVar57 * pdVar15[8]);
      dVar56 = pdVar26[-1] -
               (*pdVar6 +
               dVar54 * pdVar6[2] *
                        (dVar45 + pdVar15[1] * dVar55 + dVar53 * *pdVar15 + dVar57 * pdVar15[2]));
      dVar53 = *pdVar26 -
               (pdVar6[1] +
               dVar54 * pdVar6[3] *
                        (dVar48 + pdVar15[4] * dVar55 + dVar53 * pdVar15[3] + dVar57 * pdVar15[5]));
      dVar52 = dVar52 + SQRT(dVar53 * dVar53 + dVar56 * dVar56);
      pdVar26 = pdVar26 + 2;
      uVar44 = uVar44 - 1;
      pdVar38 = pdVar38 + 3;
    } while (uVar44 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return dVar52 / (double)(int)uVar40;
  }
  ___stack_chk_fail();
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*puVar7 & 0x1f0000) == 0x10000) {
    puVar14 = *(ulong **)(puVar7 + 2);
    uStack_620 = (ulong)&uStack_660 | 8;
    uStack_658 = puVar14[1];
    uStack_660 = *puVar14;
    uStack_648 = puVar14[3];
    uStack_650 = puVar14[2];
    uStack_638 = puVar14[5];
    uStack_640 = puVar14[4];
    uStack_628 = puVar14[7];
    uStack_630 = puVar14[6];
    puStack_618 = &uStack_610;
    uStack_608 = 0;
    uStack_610 = 0;
    if (puVar14[7] != 0) {
      piVar41 = (int *)(puVar14[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = *piVar41 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar14 + 4) < 3) {
      uStack_610 = *(undefined8 *)puVar14[9];
      uStack_608 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_660 = uStack_660 & 0xffffffff;
      func_0x000109a84868(&uStack_660);
    }
  }
  else {
    FUN_109a8a180(&uStack_660);
  }
  if ((*puVar13 & 0x1f0000) == 0x10000) {
    puVar14 = *(ulong **)(puVar13 + 2);
    uStack_680 = (ulong)&uStack_6c0 | 8;
    uStack_6b8 = puVar14[1];
    uStack_6c0 = *puVar14;
    uStack_6a8 = puVar14[3];
    uStack_6b0 = puVar14[2];
    uStack_698 = puVar14[5];
    uStack_6a0 = puVar14[4];
    uStack_688 = puVar14[7];
    uStack_690 = puVar14[6];
    puStack_678 = &uStack_670;
    uStack_668 = 0;
    uStack_670 = 0;
    if (puVar14[7] != 0) {
      piVar41 = (int *)(puVar14[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = *piVar41 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar14 + 4) < 3) {
      uStack_670 = *(undefined8 *)puVar14[9];
      uStack_668 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_6c0 = uStack_6c0 & 0xffffffff;
      func_0x000109a84868(&uStack_6c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_6c0,puVar13,0xffffffff);
  }
  uStack_720 = 0x42ff0000;
  uStack_714 = 0;
  uStack_710 = 0;
  iStack_71c = 0;
  uStack_718 = 0;
  uStack_704 = 0;
  uStack_700 = 0;
  uStack_70c = 0;
  uStack_708 = 0;
  uStack_6f4 = 0;
  uStack_6fc = 0;
  uStack_6f8 = 0;
  uStack_6e0 = (ulong)&uStack_720 | 8;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  uStack_6ec = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_780._0_4_ = 0x42ff0000;
  puStack_740 = &uStack_778;
  uStack_778._4_4_ = 0;
  uStack_770 = 0;
  uStack_780._4_4_ = 0;
  uStack_778._0_4_ = 0;
  uStack_764 = 0;
  uStack_760 = 0;
  uStack_76c = 0;
  uStack_768 = 0;
  uStack_754 = 0;
  uStack_75c = 0;
  uStack_758 = 0;
  lStack_748 = 0;
  uStack_750 = 0;
  uStack_74c = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_7e0._0_4_ = 0x42ff0000;
  puVar32 = (undefined8 *)((ulong)&uStack_7e0 | 4);
  uStack_7d4 = 0;
  uStack_7d0 = 0;
  uStack_7e0._4_4_ = 0;
  uStack_7d8 = 0;
  uStack_7c4 = 0;
  uStack_7c0 = 0;
  uStack_7cc = 0;
  uStack_7c8 = 0;
  uStack_7b4 = 0;
  uStack_7bc = 0;
  uStack_7b8 = 0;
  lStack_7a8 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  uStack_788 = 0;
  uStack_790 = 0;
  auStack_840._0_4_ = 0x42ff0000;
  puStack_800 = auStack_838;
  uStack_834 = 0;
  uStack_830 = 0;
  stack0xfffffffffffff7c4 = 0;
  uStack_824 = 0;
  uStack_820 = 0;
  uStack_82c = 0;
  uStack_828 = 0;
  uStack_814 = 0;
  uStack_81c = 0;
  uStack_818 = 0;
  lStack_808 = 0;
  uStack_810 = 0;
  uStack_80c = 0;
  bVar24 = true;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  bVar18 = false;
  puStack_7f8 = &uStack_7f0;
  puStack_7a0 = &uStack_7d8;
  puStack_798 = &uStack_790;
  puStack_738 = &uStack_730;
  puStack_6d8 = &uStack_6d0;
  do {
    puVar7 = &uStack_720;
    puVar13 = (uint *)&uStack_660;
    if (!bVar24) {
      puVar7 = (uint *)&uStack_780;
      puVar13 = (uint *)&uStack_6c0;
    }
    puVar8 = puVar13;
    FUN_109a89cd4(puVar13,2,0xffffffff,0);
    if ((int)puVar8 < 0) {
      puVar8 = puVar13;
      FUN_109a89cd4(puVar13,3,0xffffffff,0);
      if ((int)puVar8 < 0) {
        puVar12 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        uStack_9b0 = (long *)(puVar12 + 1);
        puStack_9a8 = (uint *)0x2e;
        *(undefined1 *)((long)puVar12 + 0x32) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x7379617272612074;
        *(undefined8 *)(puVar12 + 1) = 0x75706e6920656854;
        *(undefined8 *)(puVar12 + 7) = 0x726f204432206562;
        *(undefined8 *)(puVar12 + 5) = 0x20646c756f687320;
        *(undefined8 *)((long)puVar12 + 0x2a) = 0x7374657320746e69;
        *(undefined8 *)((long)puVar12 + 0x22) = 0x6f7020443320726f;
        FUN_109ac3188(0xfffffffb,&uStack_9b0,&UNK_10f5a2888,&UNK_10f5a2897,0x16a);
        goto LAB_109b95110;
      }
      if ((int)puVar8 == 0) {
        *extraout_x8 = 0x42ff0000;
        *(undefined8 *)(extraout_x8 + 3) = 0;
        *(undefined8 *)(extraout_x8 + 1) = 0;
        *(undefined8 *)(extraout_x8 + 7) = 0;
        *(undefined8 *)(extraout_x8 + 5) = 0;
        *(undefined8 *)(extraout_x8 + 0xb) = 0;
        *(undefined8 *)(extraout_x8 + 9) = 0;
        *(undefined8 *)(extraout_x8 + 0xe) = 0;
        *(undefined8 *)(extraout_x8 + 0xc) = 0;
        *(undefined8 *)(extraout_x8 + 0x14) = 0;
        *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
        *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
        *(undefined8 *)(extraout_x8 + 0x16) = 0;
        goto LAB_109b94c74;
      }
      uStack_9a0 = 0;
      uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x1010000);
      uStack_530 = CONCAT44(uStack_530._4_4_,0x2010000);
      uStack_520 = 0;
      puStack_9a8 = puVar13;
      puStack_528 = puVar13;
      FUN_109b953b8(&uStack_9b0,&uStack_530);
    }
    FUN_109a890bc(&uStack_9b0,puVar13,2,puVar8);
    uStack_530 = CONCAT44(uStack_530._4_4_,0x2010000);
    uStack_520 = 0;
    puStack_528 = puVar7;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_9b0,&uStack_530,5);
    if (uStack_978 != 0) {
      piVar41 = (int *)(uStack_978 + 0x14);
      do {
        iVar30 = *piVar41;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar24) {
          *piVar41 = iVar30 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_9b0);
      }
    }
    uStack_978 = 0;
    uStack_998 = 0;
    uStack_9a0 = 0;
    uStack_988 = 0;
    uStack_990 = 0;
    if (0 < uStack_9b0._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_970 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_9b0._4_4_);
    }
    if (puStack_968 != &uStack_960 && puStack_968 != (undefined8 *)0x0) {
      _free(puStack_968[-1]);
    }
    bVar24 = false;
    bVar4 = !bVar18;
    bVar18 = true;
  } while (bVar4);
  puVar7 = &uStack_720;
  FUN_109a89cd4(puVar7,2,0xffffffff,1);
  puVar11 = &uStack_780;
  FUN_109a89cd4(puVar11,2,0xffffffff,1);
  if ((int)puVar7 == (int)puVar11) {
    if (dVar45 <= 0.0) {
      dVar45 = 3.0;
    }
    plVar9 = (long *)0x8;
    __Znwm();
    *plVar9 = (long)&PTR_FUN_110b29938;
    plVar10 = (long *)0x20;
    __Znwm();
    plVar21 = plVar10 + 1;
    *(int *)plVar21 = 1;
    *plVar10 = (long)&PTR_DAT_110b29988;
    plVar10[2] = (long)plVar9;
    do {
      cVar3 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar18) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar30 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar18) {
        *(int *)plVar21 = iVar30;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_850 = plVar10;
    plStack_848 = plVar9;
    if (iVar30 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    uVar40 = (uint)puVar8;
    if ((iVar19 == 0) || (uVar40 == 4)) {
      FUN_109a82ac8(&uStack_9b0,puVar8,1,0);
      (**(code **)(*uStack_9b0 + 0x18))(uStack_9b0,&uStack_9b0,auStack_840,0xffffffff);
      FUN_10918eb6c(&uStack_9b0);
      uStack_9a0 = 0;
      uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x1010000);
      puStack_9a8 = &uStack_720;
      uStack_520 = 0;
      uStack_530 = CONCAT44(uStack_530._4_4_,0x1010000);
      puStack_528 = (uint *)&uStack_780;
      uStack_590 = 0x2010000;
      uStack_588 = (undefined4 *)&uStack_7e0;
      uStack_580 = 0;
      uStack_57c = 0;
      plVar9 = plStack_848;
      (**(code **)(*plStack_848 + 0x10))(plStack_848,&uStack_9b0,&uStack_530,&uStack_590);
      uVar43 = (uint)(0 < (int)plVar9);
LAB_109b93ca4:
      if (((iVar19 == 0x10) || (uVar40 < 5)) || (uVar43 == 0)) {
LAB_109b93e04:
        if (uVar43 == 0) goto LAB_109b93e08;
      }
      else {
        uVar44 = 0;
        iVar30 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_82c,uStack_830) + uVar44) != '\0') {
            if ((long)iVar30 < (long)uVar44) {
              *(undefined8 *)(CONCAT44(uStack_70c,uStack_710) + (long)iVar30 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_70c,uStack_710) + uVar44 * 8);
            }
            iVar30 = iVar30 + 1;
          }
          uVar44 = uVar44 + 1;
        } while (((ulong)puVar8 & 0xffffffff) != uVar44);
        uVar44 = 0;
        uVar40 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_82c,uStack_830) + uVar44) != '\0') {
            if ((long)(int)uVar40 < (long)uVar44) {
              *(undefined8 *)(CONCAT44(uStack_76c,uStack_770) + (long)(int)uVar40 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_76c,uStack_770) + uVar44 * 8);
            }
            uVar40 = uVar40 + 1;
          }
          uVar44 = uVar44 + 1;
        } while (((ulong)puVar8 & 0xffffffff) != uVar44);
        if ((int)uVar40 < 1) goto LAB_109b93e04;
        uStack_9b0 = (long *)((ulong)uVar40 << 0x20);
        uStack_590 = 0x80000000;
        iStack_58c = 0x7fffffff;
        FUN_109a84930(&uStack_530,&uStack_720,&uStack_9b0,&uStack_590);
        uStack_9b0 = (long *)((ulong)uVar40 << 0x20);
        uStack_5f0 = 0x80000000;
        iStack_5ec = 0x7fffffff;
        FUN_109a84930(&uStack_590,&uStack_780,&uStack_9b0,&uStack_5f0);
        if (uStack_4f8 != 0) {
          piVar41 = (int *)(uStack_4f8 + 0x14);
          do {
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = *piVar41 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (uStack_6e8 != 0) {
          piVar41 = (int *)(uStack_6e8 + 0x14);
          do {
            iVar30 = *piVar41;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = iVar30 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_720);
          }
        }
        puVar11 = puStack_4e8;
        uStack_6e8 = 0;
        uStack_708 = 0;
        uStack_704 = 0;
        uStack_710 = 0;
        uStack_70c = 0;
        uStack_6f8 = 0;
        uStack_6f4 = 0;
        uStack_700 = 0;
        uStack_6fc = 0;
        if (iStack_71c < 1) {
LAB_109b93e7c:
          uStack_720 = (uint)uStack_530;
          if (2 < uStack_530._4_4_) goto LAB_109b93eb0;
          iStack_71c = uStack_530._4_4_;
          uStack_718 = SUB84(puStack_528,0);
          uStack_714 = (undefined4)((ulong)puStack_528 >> 0x20);
          *puStack_6d8 = *puStack_4e8;
          puStack_6d8[1] = puVar11[1];
        }
        else {
          lVar36 = 0;
          do {
            *(undefined4 *)(uStack_6e0 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < iStack_71c);
          if (iStack_71c < 3) goto LAB_109b93e7c;
LAB_109b93eb0:
          uStack_720 = (uint)uStack_530;
          func_0x000109a84868(&uStack_720,&uStack_530);
        }
        uStack_708 = (undefined4)uStack_518;
        uStack_704 = (undefined4)(uStack_518 >> 0x20);
        uStack_710 = (undefined4)uStack_520;
        uStack_70c = (undefined4)(uStack_520 >> 0x20);
        uStack_6f8 = (undefined4)uStack_508;
        uStack_6f4 = (undefined4)(uStack_508 >> 0x20);
        uStack_700 = (undefined4)uStack_510;
        uStack_6fc = (undefined4)(uStack_510 >> 0x20);
        uStack_6e8 = uStack_4f8;
        uStack_6f0 = (undefined4)uStack_500;
        uStack_6ec = (undefined4)(uStack_500 >> 0x20);
        if (lStack_558 != 0) {
          piVar41 = (int *)(lStack_558 + 0x14);
          do {
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = *piVar41 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar12 = uStack_588;
        if (lStack_748 != 0) {
          piVar41 = (int *)(lStack_748 + 0x14);
          do {
            iVar30 = *piVar41;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = iVar30 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_780);
            puVar12 = uStack_588;
          }
        }
        puVar11 = puStack_548;
        lStack_748 = 0;
        uStack_768 = 0;
        uStack_764 = 0;
        uStack_770 = 0;
        uStack_76c = 0;
        uStack_758 = 0;
        uStack_754 = 0;
        uStack_760 = 0;
        uStack_75c = 0;
        uStack_588 = puVar12;
        if (uStack_780._4_4_ < 1) {
LAB_109b93f60:
          uStack_780._0_4_ = uStack_590;
          if (2 < iStack_58c) goto LAB_109b93f94;
          uStack_780._4_4_ = iStack_58c;
          *puStack_738 = *puStack_548;
          puStack_738[1] = puVar11[1];
        }
        else {
          lVar36 = 0;
          do {
            *(undefined4 *)((long)puStack_740 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < uStack_780._4_4_);
          if (uStack_780._4_4_ < 3) goto LAB_109b93f60;
LAB_109b93f94:
          uStack_780._0_4_ = uStack_590;
          func_0x000109a84868(&uStack_780,&uStack_590);
          puVar12 = (undefined4 *)CONCAT44(uStack_778._4_4_,(undefined4)uStack_778);
        }
        uStack_768 = uStack_578;
        uStack_764 = uStack_574;
        uStack_770 = uStack_580;
        uStack_76c = uStack_57c;
        uStack_758 = uStack_568;
        uStack_754 = uStack_564;
        uStack_760 = uStack_570;
        uStack_75c = uStack_56c;
        lStack_748 = lStack_558;
        uStack_750 = uStack_560;
        uStack_74c = uStack_55c;
        uStack_778 = puVar12;
        if ((iVar19 == 8) || (iVar19 == 4)) {
          uStack_9a0 = 0;
          uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x1010000);
          puStack_9a8 = &uStack_720;
          uStack_5e0 = 0;
          uStack_5dc = 0;
          uStack_5f0 = 0x1010000;
          uStack_5e8 = &uStack_780;
          uStack_4c0 = 0x2010000;
          uStack_4b8 = &uStack_7e0;
          uStack_4b0 = 0;
          uStack_4ac = 0;
          (**(code **)(*plStack_848 + 0x10))(plStack_848,&uStack_9b0,&uStack_5f0,&uStack_4c0);
        }
        puStack_5b0 = (undefined8 *)((ulong)&uStack_5f0 | 8);
        uStack_5e8._0_4_ = 8;
        uStack_5e8._4_4_ = 1;
        uStack_5f0 = 0x42ff0006;
        iStack_5ec = 2;
        uStack_5e0 = uStack_7d0;
        uStack_5dc = uStack_7cc;
        uStack_5d8 = uStack_7d0;
        uStack_5d4 = uStack_7cc;
        uStack_5c8._0_4_ = 0;
        uStack_5c8._4_4_ = 0;
        uStack_5d0._0_4_ = 0;
        uStack_5d0._4_4_ = 0;
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5bc = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        puStack_5a8 = &uStack_5a0;
        if (CONCAT44(uStack_7cc,uStack_7d0) == 0) {
          puVar12 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          uStack_9b0 = (long *)(puVar12 + 1);
          puStack_9a8 = (uint *)0x1c;
          *(undefined1 *)(puVar12 + 8) = 0;
          *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_9b0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109b95110;
        }
        uStack_5f0 = 0x42ff4006;
        uStack_598 = 8;
        uStack_5a0 = 8;
        uStack_5c8 = CONCAT44(uStack_7cc,uStack_7d0) + 0x40;
        puVar11 = (undefined8 *)0xc8;
        uStack_5d0 = uStack_5c8;
        __Znwm();
        uStack_4c0 = 0x1010000;
        uStack_4b8 = &uStack_780;
        uStack_4b0 = 0;
        uStack_4ac = 0;
        *(undefined4 *)(puVar11 + 1) = 0x42ff0000;
        *puVar11 = &PTR_FUN_110b299c8;
        piVar41 = (int *)((long)puVar11 + 0xc);
        *(undefined8 *)((long)puVar11 + 0x14) = 0;
        piVar41[0] = 0;
        piVar41[1] = 0;
        *(undefined8 *)((long)puVar11 + 0x24) = 0;
        *(undefined8 *)((long)puVar11 + 0x1c) = 0;
        *(undefined8 *)((long)puVar11 + 0x34) = 0;
        *(undefined8 *)((long)puVar11 + 0x2c) = 0;
        puVar11[8] = 0;
        puVar11[7] = 0;
        puVar22 = puVar11 + 0xb;
        *puVar22 = 0;
        puVar11[9] = puVar11 + 2;
        puVar11[10] = puVar22;
        puVar11[0xc] = 0;
        *(undefined4 *)(puVar11 + 0xd) = 0x42ff0000;
        piVar42 = (int *)((long)puVar11 + 0x6c);
        *(undefined8 *)((long)puVar11 + 0x74) = 0;
        piVar42[0] = 0;
        piVar42[1] = 0;
        *(undefined8 *)((long)puVar11 + 0x84) = 0;
        *(undefined8 *)((long)puVar11 + 0x7c) = 0;
        *(undefined8 *)((long)puVar11 + 0x94) = 0;
        *(undefined8 *)((long)puVar11 + 0x8c) = 0;
        puVar11[0x14] = 0;
        puVar11[0x13] = 0;
        puVar23 = puVar11 + 0x17;
        *puVar23 = 0;
        puVar11[0x15] = puVar11 + 0xe;
        puVar11[0x16] = puVar23;
        puVar11[0x18] = 0;
        uStack_970 = (ulong)&uStack_9b0 | 8;
        puStack_9a8 = (uint *)CONCAT44(uStack_714,uStack_718);
        uStack_9b0 = (long *)CONCAT44(iStack_71c,uStack_720);
        uStack_998 = CONCAT44(uStack_704,uStack_708);
        uStack_9a0 = CONCAT44(uStack_70c,uStack_710);
        uStack_988 = CONCAT44(uStack_6f4,uStack_6f8);
        uStack_990 = CONCAT44(uStack_6fc,uStack_700);
        uStack_980 = CONCAT44(uStack_6ec,uStack_6f0);
        uStack_978 = uStack_6e8;
        uStack_960 = 0;
        uStack_958 = 0;
        if (uStack_6e8 != 0) {
          piVar2 = (int *)(uStack_6e8 + 0x14);
          do {
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar18) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puStack_968 = &uStack_960;
        if (iStack_71c < 3) {
          uStack_960 = *puStack_6d8;
          uStack_958 = puStack_6d8[1];
        }
        else {
          uStack_9b0 = (long *)(ulong)uStack_720;
          func_0x000109a84868(&uStack_9b0,&uStack_720);
        }
        if (puVar11[8] != 0) {
          piVar2 = (int *)(puVar11[8] + 0x14);
          do {
            iVar19 = *piVar2;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar18) {
              *piVar2 = iVar19 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar19 + -1 == 0) {
            func_0x000109a848d4(puVar11 + 1);
          }
        }
        puVar11[8] = 0;
        puVar11[4] = 0;
        puVar11[3] = 0;
        puVar11[6] = 0;
        puVar11[5] = 0;
        if (0 < *(int *)((long)puVar11 + 0xc)) {
          lVar36 = 0;
          lVar20 = puVar11[9];
          do {
            *(undefined4 *)(lVar20 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < *piVar41);
        }
        puVar11[2] = puStack_9a8;
        puVar11[1] = uStack_9b0;
        puVar11[4] = uStack_998;
        puVar11[3] = uStack_9a0;
        puVar11[6] = uStack_988;
        puVar11[5] = uStack_990;
        puVar11[8] = uStack_978;
        puVar11[7] = uStack_980;
        puVar27 = (undefined8 *)puVar11[10];
        iVar19 = uStack_9b0._4_4_;
        if (puVar27 != puVar22) {
          if (puVar27 != (undefined8 *)0x0) {
            _free(puVar27[-1]);
          }
          puVar11[9] = puVar11 + 2;
          puVar11[10] = puVar22;
          puVar27 = puVar22;
          iVar19 = uStack_9b0._4_4_;
        }
        if (iVar19 < 3) {
          puVar22 = (undefined8 *)((ulong)&uStack_9b0 | 4);
          *puVar27 = *puStack_968;
          puVar27[1] = puStack_968[1];
          uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x42ff0000);
          puVar22[1] = 0;
          *puVar22 = 0;
          puVar22[3] = 0;
          puVar22[2] = 0;
          puVar22[5] = 0;
          puVar22[4] = 0;
          *(undefined8 *)((long)puVar22 + 0x34) = 0;
          *(undefined8 *)((long)puVar22 + 0x2c) = 0;
          if (puStack_968 != &uStack_960) {
            _free(puStack_968[-1]);
          }
        }
        else {
          puVar11[9] = uStack_970;
          puVar11[10] = puStack_968;
        }
        if ((uStack_4c0 & 0x1f0000) == 0x10000) {
          uStack_970 = (ulong)&uStack_9b0 | 8;
          puStack_9a8 = (uint *)uStack_4b8[1];
          uStack_9b0 = (long *)*uStack_4b8;
          uStack_998 = uStack_4b8[3];
          uStack_9a0 = uStack_4b8[2];
          uStack_988 = uStack_4b8[5];
          uStack_990 = uStack_4b8[4];
          uStack_978 = uStack_4b8[7];
          uStack_980 = uStack_4b8[6];
          puStack_968 = &uStack_960;
          uStack_960 = 0;
          uStack_958 = 0;
          if (uStack_4b8[7] != 0) {
            piVar41 = (int *)(uStack_4b8[7] + 0x14);
            do {
              cVar3 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
              if (bVar18) {
                *piVar41 = *piVar41 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(int *)((long)uStack_4b8 + 4) < 3) {
            uStack_960 = *(undefined8 *)uStack_4b8[9];
            uStack_958 = ((undefined8 *)uStack_4b8[9])[1];
          }
          else {
            uStack_9b0 = (long *)((ulong)uStack_9b0 & 0xffffffff);
            func_0x000109a84868(&uStack_9b0);
          }
        }
        else {
          FUN_109a8a180(&uStack_9b0,&uStack_4c0,0xffffffff);
        }
        if (puVar11[0x14] != 0) {
          piVar41 = (int *)(puVar11[0x14] + 0x14);
          do {
            iVar19 = *piVar41;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = iVar19 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar19 + -1 == 0) {
            func_0x000109a848d4(puVar11 + 0xd);
          }
        }
        puVar11[0x14] = 0;
        puVar11[0x10] = 0;
        puVar11[0xf] = 0;
        puVar11[0x12] = 0;
        puVar11[0x11] = 0;
        if (0 < *(int *)((long)puVar11 + 0x6c)) {
          lVar36 = 0;
          lVar20 = puVar11[0x15];
          do {
            *(undefined4 *)(lVar20 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < *piVar42);
        }
        puVar11[0xe] = puStack_9a8;
        puVar11[0xd] = uStack_9b0;
        puVar11[0x10] = uStack_998;
        puVar11[0xf] = uStack_9a0;
        puVar11[0x12] = uStack_988;
        puVar11[0x11] = uStack_990;
        puVar11[0x14] = uStack_978;
        puVar11[0x13] = uStack_980;
        puVar22 = (undefined8 *)puVar11[0x16];
        iVar19 = uStack_9b0._4_4_;
        if (puVar22 != puVar23) {
          if (puVar22 != (undefined8 *)0x0) {
            _free(puVar22[-1]);
          }
          puVar11[0x15] = puVar11 + 0xe;
          puVar11[0x16] = puVar23;
          puVar22 = puVar23;
          iVar19 = uStack_9b0._4_4_;
        }
        if (iVar19 < 3) {
          puVar23 = (undefined8 *)((ulong)&uStack_9b0 | 4);
          *puVar22 = *puStack_968;
          puVar22[1] = puStack_968[1];
          uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x42ff0000);
          puVar23[1] = 0;
          *puVar23 = 0;
          puVar23[3] = 0;
          puVar23[2] = 0;
          puVar23[5] = 0;
          puVar23[4] = 0;
          *(undefined8 *)((long)puVar23 + 0x34) = 0;
          *(undefined8 *)((long)puVar23 + 0x2c) = 0;
          if (puStack_968 != &uStack_960) {
            _free(puStack_968[-1]);
          }
        }
        else {
          puVar11[0x15] = uStack_970;
          puVar11[0x16] = puStack_968;
        }
        puVar23 = (undefined8 *)0x20;
        __Znwm();
        piVar41 = (int *)(puVar23 + 1);
        *piVar41 = 1;
        *puVar23 = &PTR_FUN_110b29a18;
        puVar23[2] = puVar11;
        do {
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = *piVar41 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puStack_9f8 = puVar23;
        puStack_9f0 = puVar11;
        puStack_9e0 = puVar23;
        puStack_9d8 = puVar11;
        func_0x000109b9b81c(auStack_9c8,&puStack_9e0,10);
        uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x3010000);
        puStack_9a8 = &uStack_5f0;
        uStack_9a0 = 0;
        (**(code **)(*puStack_9c0 + 0x48))(puStack_9c0,&uStack_9b0);
        FUN_109b99504(auStack_9c8);
        FUN_109b994b0(&puStack_9e0);
        FUN_109b9945c(&puStack_9f8);
        if (lStack_5b8 != 0) {
          piVar41 = (int *)(lStack_5b8 + 0x14);
          do {
            iVar19 = *piVar41;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = iVar19 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar19 + -1 == 0) {
            func_0x000109a848d4(&uStack_5f0);
          }
        }
        lStack_5b8 = 0;
        uStack_5d8 = 0;
        uStack_5d4 = 0;
        uStack_5e0 = 0;
        uStack_5dc = 0;
        uStack_5c8._0_4_ = 0;
        uStack_5c8._4_4_ = 0;
        uStack_5d0._0_4_ = 0;
        uStack_5d0._4_4_ = 0;
        if (0 < iStack_5ec) {
          lVar36 = 0;
          do {
            *(undefined4 *)((long)puStack_5b0 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < iStack_5ec);
        }
        if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
          _free(puStack_5a8[-1]);
        }
        if (lStack_558 != 0) {
          piVar41 = (int *)(lStack_558 + 0x14);
          do {
            iVar19 = *piVar41;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = iVar19 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar19 + -1 == 0) {
            func_0x000109a848d4(&uStack_590);
          }
        }
        lStack_558 = 0;
        uStack_578 = 0;
        uStack_574 = 0;
        uStack_580 = 0;
        uStack_57c = 0;
        uStack_568 = 0;
        uStack_564 = 0;
        uStack_570 = 0;
        uStack_56c = 0;
        if (0 < iStack_58c) {
          lVar36 = 0;
          do {
            *(undefined4 *)(uStack_550 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < iStack_58c);
        }
        if (puStack_548 != &uStack_540 && puStack_548 != (undefined8 *)0x0) {
          _free(puStack_548[-1]);
        }
        if (uStack_4f8 != 0) {
          piVar41 = (int *)(uStack_4f8 + 0x14);
          do {
            iVar19 = *piVar41;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = iVar19 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar19 + -1 == 0) {
            func_0x000109a848d4(&uStack_530);
          }
        }
        uStack_4f8 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        if (0 < uStack_530._4_4_) {
          lVar36 = 0;
          do {
            *(undefined4 *)(uStack_4f0 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < uStack_530._4_4_);
        }
        if (puStack_4e8 != &uStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
          _free(puStack_4e8[-1]);
        }
      }
LAB_109b94bbc:
      if ((*(byte *)((long)puVar16 + 2) & 0x1f) != 0) {
        FUN_109a479a0(auStack_840);
      }
      uVar47 = CONCAT44(uStack_7c4,uStack_7c8);
      uVar46 = CONCAT44(uStack_7cc,uStack_7d0);
      uVar50 = CONCAT44(uStack_7b4,uStack_7b8);
      uVar49 = CONCAT44(uStack_7bc,uStack_7c0);
      puVar14 = uStack_4b8;
      puVar12 = uStack_778;
    }
    else {
      if (iVar19 == 4) {
        func_0x000109b9ec90(&uStack_4c0,dVar48,&plStack_850,4,uVar17);
        plVar9 = (long *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        uStack_9a0 = 0;
        uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x1010000);
        puStack_9a8 = &uStack_720;
        uStack_520 = 0;
        uStack_530 = CONCAT44(uStack_530._4_4_,0x1010000);
        puStack_528 = (uint *)&uStack_780;
        uStack_590 = 0x2010000;
        uStack_588 = (undefined4 *)&uStack_7e0;
        uStack_580 = 0;
        uStack_57c = 0;
        uStack_5f0 = 0x2010000;
        uStack_5e8 = (undefined8 *)auStack_840;
        uStack_5e0 = 0;
        uStack_5dc = 0;
        (**(code **)(*plVar9 + 0x48))(plVar9,&uStack_9b0,&uStack_530,&uStack_590,&uStack_5f0);
        uVar43 = (uint)plVar9;
LAB_109b93c98:
        FUN_109b98b7c(&uStack_4c0);
        goto LAB_109b93ca4;
      }
      if (iVar19 != 0x10) {
        if (iVar19 != 8) {
          puVar12 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          uStack_9b0 = (long *)(puVar12 + 1);
          puStack_9a8 = (uint *)0x19;
          *(undefined1 *)((long)puVar12 + 0x1d) = 0;
          *(undefined8 *)(puVar12 + 3) = 0x6974616d69747365;
          *(undefined8 *)(puVar12 + 1) = 0x206e776f6e6b6e55;
          *(undefined8 *)((long)puVar12 + 0x15) = 0x646f6874656d206e;
          *(undefined8 *)((long)puVar12 + 0xd) = 0x6f6974616d697473;
          FUN_109ac3188(0xfffffffb,&uStack_9b0,&UNK_10f5a2888,&UNK_10f5a2897,0x185);
          goto LAB_109b95110;
        }
        FUN_109b9ebd8(&uStack_4c0,dVar45,dVar48,&plStack_850,4,uVar17);
        plVar9 = (long *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        uStack_9a0 = 0;
        uStack_9b0 = (long *)CONCAT44(uStack_9b0._4_4_,0x1010000);
        puStack_9a8 = &uStack_720;
        uStack_520 = 0;
        uStack_530 = CONCAT44(uStack_530._4_4_,0x1010000);
        puStack_528 = (uint *)&uStack_780;
        uStack_590 = 0x2010000;
        uStack_588 = (undefined4 *)&uStack_7e0;
        uStack_580 = 0;
        uStack_57c = 0;
        uStack_5f0 = 0x2010000;
        uStack_5e8 = (undefined8 *)auStack_840;
        uStack_5e0 = 0;
        uStack_5dc = 0;
        (**(code **)(*plVar9 + 0x48))(plVar9,&uStack_9b0,&uStack_530,&uStack_590,&uStack_5f0);
        uVar43 = (uint)plVar9;
        goto LAB_109b93c98;
      }
      auStack_9c8[0] = 0x1010000;
      puStack_9c0 = &uStack_780;
      uStack_9b8 = 0;
      puStack_9e0 = (undefined8 *)CONCAT44(puStack_9e0._4_4_,0x2010000);
      puStack_9d8 = &uStack_7e0;
      uStack_9d0 = 0;
      puStack_9f8 = (undefined8 *)CONCAT44(puStack_9f8._4_4_,0x2010000);
      puStack_9f0 = (undefined8 *)auStack_840;
      uStack_9e8 = 0;
      uStack_970 = (ulong)&uStack_9b0 | 8;
      puStack_9a8 = (uint *)CONCAT44(uStack_714,uStack_718);
      uStack_9b0 = (long *)CONCAT44(iStack_71c,uStack_720);
      uStack_998 = CONCAT44(uStack_704,uStack_708);
      uStack_9a0 = CONCAT44(uStack_70c,uStack_710);
      uStack_988 = CONCAT44(uStack_6f4,uStack_6f8);
      uStack_990 = CONCAT44(uStack_6fc,uStack_700);
      uStack_980 = CONCAT44(uStack_6ec,uStack_6f0);
      uStack_978 = uStack_6e8;
      uStack_960 = 0;
      uStack_958 = 0;
      if (uStack_6e8 != 0) {
        piVar41 = (int *)(uStack_6e8 + 0x14);
        do {
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = *piVar41 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puStack_968 = &uStack_960;
      if (iStack_71c < 3) {
        uStack_960 = *puStack_6d8;
        uStack_958 = puStack_6d8[1];
      }
      else {
        uStack_9b0 = (long *)(ulong)uStack_720;
        func_0x000109a84868(&uStack_9b0,&uStack_720);
      }
      if ((auStack_9c8[0] & 0x1f0000) == 0x10000) {
        uStack_4f0 = (ulong)&uStack_530 | 8;
        puStack_528 = (uint *)puStack_9c0[1];
        uStack_530 = *puStack_9c0;
        uStack_518 = puStack_9c0[3];
        uStack_520 = puStack_9c0[2];
        uStack_508 = puStack_9c0[5];
        uStack_510 = puStack_9c0[4];
        uStack_4f8 = puStack_9c0[7];
        uStack_500 = puStack_9c0[6];
        puStack_4e8 = &uStack_4e0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        if (puStack_9c0[7] != 0) {
          piVar41 = (int *)(puStack_9c0[7] + 0x14);
          do {
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
            if (bVar18) {
              *piVar41 = *piVar41 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(int *)((long)puStack_9c0 + 4) < 3) {
          uStack_4e0 = *(undefined8 *)puStack_9c0[9];
          uStack_4d8 = ((undefined8 *)puStack_9c0[9])[1];
        }
        else {
          uStack_530 = uStack_530 & 0xffffffff;
          func_0x000109a84868(&uStack_530);
        }
      }
      else {
        FUN_109a8a180(&uStack_530,auStack_9c8,0xffffffff);
      }
      uStack_590 = 0x42ff0000;
      uStack_588._4_4_ = 0;
      uStack_580 = 0;
      iStack_58c = 0;
      uStack_588._0_4_ = 0;
      uVar44 = (ulong)&uStack_590 | 8;
      uStack_574 = 0;
      uStack_570 = 0;
      uStack_57c = 0;
      uStack_578 = 0;
      uStack_564 = 0;
      uStack_56c = 0;
      uStack_568 = 0;
      lStack_558 = 0;
      uStack_560 = 0;
      uStack_55c = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_5f0 = 0x42ff0000;
      puStack_5b0 = &uStack_5e8;
      uStack_5e8._4_4_ = 0;
      uStack_5e0 = 0;
      iStack_5ec = 0;
      uStack_5e8._0_4_ = 0;
      uStack_5d4 = 0;
      uStack_5d0._0_4_ = 0;
      uStack_5dc = 0;
      uStack_5d8 = 0;
      uStack_5c8._4_4_ = 0;
      uStack_5d0._4_4_ = 0;
      uStack_5c8._0_4_ = 0;
      lStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5bc = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_4c0 = 3;
      iStack_4bc = 3;
      puStack_5a8 = &uStack_5a0;
      uStack_550 = uVar44;
      puStack_548 = &uStack_540;
      FUN_109a83fd0(&uStack_5f0,2,&uStack_4c0,5);
      uStack_4c0 = 0x42ff0000;
      uStack_480 = (ulong)&uStack_4c0 | 8;
      uStack_4b8._4_4_ = 0;
      uStack_4b0 = 0;
      iStack_4bc = 0;
      uStack_4b8._0_4_ = 0;
      uStack_4a4 = 0;
      uStack_4a0 = 0;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      uStack_494 = 0;
      uStack_49c = 0;
      uStack_498 = 0;
      lStack_488 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      uStack_4d0 = CONCAT44(1,uVar40);
      puStack_478 = &uStack_470;
      FUN_109a83fd0(&uStack_4c0,2,&uStack_4d0,0);
      if (lStack_558 != 0) {
        piVar41 = (int *)(lStack_558 + 0x14);
        do {
          iVar19 = *piVar41;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_590);
        }
      }
      if (0 < iStack_58c) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_550 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < iStack_58c);
      }
      uStack_588._0_4_ = (undefined4)uStack_4b8;
      uStack_588._4_4_ = uStack_4b8._4_4_;
      uStack_590 = uStack_4c0;
      iStack_58c = iStack_4bc;
      uStack_578 = uStack_4a8;
      uStack_574 = uStack_4a4;
      uStack_580 = uStack_4b0;
      uStack_57c = uStack_4ac;
      uStack_568 = uStack_498;
      uStack_564 = uStack_494;
      uStack_570 = uStack_4a0;
      uStack_56c = uStack_49c;
      lStack_558 = lStack_488;
      uStack_560 = uStack_490;
      uStack_55c = uStack_48c;
      uVar31 = uStack_550;
      puVar11 = puStack_548;
      if ((puStack_548 != &uStack_540) &&
         (uVar31 = uVar44, puVar11 = &uStack_540, puStack_548 != (undefined8 *)0x0)) {
        _free(puStack_548[-1]);
      }
      puStack_548 = puVar11;
      uStack_550 = uVar31;
      puVar11 = puStack_478;
      if (iStack_4bc < 3) {
        puVar23 = (undefined8 *)((ulong)&uStack_4c0 | 4);
        *puStack_548 = *puStack_478;
        puStack_548[1] = puVar11[1];
        uStack_4c0 = 0x42ff0000;
        puVar23[1] = 0;
        *puVar23 = 0;
        puVar23[3] = 0;
        puVar23[2] = 0;
        puVar23[5] = 0;
        puVar23[4] = 0;
        *(undefined8 *)((long)puVar23 + 0x34) = 0;
        *(undefined8 *)((long)puVar23 + 0x2c) = 0;
        if (puVar11 != &uStack_470) {
          _free(puVar11[-1]);
        }
      }
      else {
        puStack_548 = puStack_478;
        uStack_550 = uStack_480;
      }
      FUN_109ba2270(&uStack_4c0);
      uStack_4d0 = CONCAT44(iStack_4bc,uStack_4c0);
      plStack_4c8 = (long *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
      if (uStack_4d0 != 0) {
        piVar41 = (int *)(uStack_4d0 + 8);
        do {
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = *piVar41 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (**(code **)(*plStack_4c8 + 0x20))(0x3fd6666666666666,plStack_4c8,puVar8);
      FUN_109b97440(&uStack_4d0);
      lStack_600 = CONCAT44(iStack_4bc,uStack_4c0);
      plVar9 = (long *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
      if (lStack_600 != 0) {
        piVar41 = (int *)(lStack_600 + 8);
        do {
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = *piVar41 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_5f8 = plVar9;
      (**(code **)(*plVar9 + 0x38))
                ((float)dVar45,dVar48,0x3fd6666666666666,plVar9,uStack_9a0,uStack_520,
                 CONCAT44(uStack_57c,uStack_580),puVar8,uVar17,uVar17,4,5);
      FUN_109b97440(&lStack_600);
      FUN_109a41858(0x3ff0000000000000,0,&uStack_5f0,&puStack_9e0,6);
      if (uVar40 != 0) {
        uVar44 = 0;
        do {
          *(bool *)(CONCAT44(uStack_57c,uStack_580) + uVar44) =
               *(char *)(CONCAT44(uStack_57c,uStack_580) + uVar44) != '\0';
          uVar44 = uVar44 + 1;
        } while (((ulong)puVar8 & 0xffffffff) != uVar44);
      }
      FUN_109a479a0(&uStack_590,&puStack_9f8);
      FUN_109b97440(&uStack_4c0);
      if (lStack_5b8 != 0) {
        piVar41 = (int *)(lStack_5b8 + 0x14);
        do {
          iVar19 = *piVar41;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_5f0);
        }
      }
      lStack_5b8 = 0;
      uStack_5d8 = 0;
      uStack_5d4 = 0;
      uStack_5e0 = 0;
      uStack_5dc = 0;
      uStack_5c8._0_4_ = 0;
      uStack_5c8._4_4_ = 0;
      uStack_5d0._0_4_ = 0;
      uStack_5d0._4_4_ = 0;
      if (0 < iStack_5ec) {
        lVar36 = 0;
        do {
          *(undefined4 *)((long)puStack_5b0 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < iStack_5ec);
      }
      if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
        _free(puStack_5a8[-1]);
      }
      if (lStack_558 != 0) {
        piVar41 = (int *)(lStack_558 + 0x14);
        do {
          iVar19 = *piVar41;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_590);
        }
      }
      lStack_558 = 0;
      uStack_578 = 0;
      uStack_574 = 0;
      uStack_580 = 0;
      uStack_57c = 0;
      uStack_568 = 0;
      uStack_564 = 0;
      uStack_570 = 0;
      uStack_56c = 0;
      if (0 < iStack_58c) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_550 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < iStack_58c);
      }
      if (puStack_548 != &uStack_540 && puStack_548 != (undefined8 *)0x0) {
        _free(puStack_548[-1]);
      }
      if (uStack_4f8 != 0) {
        piVar41 = (int *)(uStack_4f8 + 0x14);
        do {
          iVar19 = *piVar41;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_530);
        }
      }
      uStack_4f8 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      if (0 < uStack_530._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_4f0 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_530._4_4_);
      }
      if (puStack_4e8 != &uStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
        _free(puStack_4e8[-1]);
      }
      if (uStack_978 != 0) {
        piVar41 = (int *)(uStack_978 + 0x14);
        do {
          iVar19 = *piVar41;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_9b0);
        }
      }
      uStack_978 = 0;
      uStack_998 = 0;
      uStack_9a0 = 0;
      uStack_988 = 0;
      uStack_990 = 0;
      if (0 < uStack_9b0._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_970 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_9b0._4_4_);
      }
      if (puStack_968 != &uStack_960 && puStack_968 != (undefined8 *)0x0) {
        _free(puStack_968[-1]);
      }
      if ((int)plVar9 != 0) goto LAB_109b94bbc;
LAB_109b93e08:
      if (lStack_7a8 != 0) {
        piVar41 = (int *)(lStack_7a8 + 0x14);
        do {
          iVar19 = *piVar41;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar18) {
            *piVar41 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_7e0);
        }
      }
      puVar12 = (undefined4 *)CONCAT44(uStack_778._4_4_,(undefined4)uStack_778);
      puVar14 = (ulong *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
      lStack_7a8 = 0;
      uVar46 = 0;
      uVar47 = 0;
      uStack_7c8 = 0;
      uStack_7c4 = 0;
      uStack_7d0 = 0;
      uStack_7cc = 0;
      uStack_7b8 = 0;
      uStack_7b4 = 0;
      uStack_7c0 = 0;
      uStack_7bc = 0;
      if (0 < uStack_7e0._4_4_) {
        lVar36 = 0;
        do {
          puStack_7a0[lVar36] = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_7e0._4_4_);
      }
      uVar49 = 0;
      uVar50 = 0;
    }
    *extraout_x8 = (undefined4)uStack_7e0;
    extraout_x8[1] = uStack_7e0._4_4_;
    *(ulong *)(extraout_x8 + 2) = CONCAT44(uStack_7d4,uStack_7d8);
    *(undefined8 *)(extraout_x8 + 6) = uVar47;
    *(undefined8 *)(extraout_x8 + 4) = uVar46;
    *(undefined8 *)(extraout_x8 + 10) = uVar50;
    *(undefined8 *)(extraout_x8 + 8) = uVar49;
    *(ulong *)(extraout_x8 + 0xc) = CONCAT44(uStack_7ac,uStack_7b0);
    *(long *)(extraout_x8 + 0xe) = lStack_7a8;
    *(undefined8 *)(extraout_x8 + 0x14) = 0;
    *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
    *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
    *(undefined8 *)(extraout_x8 + 0x16) = 0;
    if (uStack_7e0._4_4_ < 3) {
      *(undefined8 *)(extraout_x8 + 0x14) = *puStack_798;
      *(undefined8 *)(extraout_x8 + 0x16) = puStack_798[1];
    }
    else {
      *(undefined4 **)(extraout_x8 + 0x10) = puStack_7a0;
      *(undefined8 **)(extraout_x8 + 0x12) = puStack_798;
      puStack_7a0 = &uStack_7d8;
      puStack_798 = &uStack_790;
    }
    uStack_7e0._0_4_ = 0x42ff0000;
    puVar32[1] = 0;
    *puVar32 = 0;
    puVar32[3] = 0;
    puVar32[2] = 0;
    puVar32[5] = 0;
    puVar32[4] = 0;
    *(undefined8 *)((long)puVar32 + 0x34) = 0;
    *(undefined8 *)((long)puVar32 + 0x2c) = 0;
    uStack_4b8 = puVar14;
    uStack_778 = puVar12;
    FUN_109b98b28(&plStack_850);
LAB_109b94c74:
    if (lStack_808 != 0) {
      piVar41 = (int *)(lStack_808 + 0x14);
      do {
        iVar19 = *piVar41;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(auStack_840);
      }
    }
    lStack_808 = 0;
    uStack_828 = 0;
    uStack_824 = 0;
    uStack_830 = 0;
    uStack_82c = 0;
    uStack_818 = 0;
    uStack_814 = 0;
    uStack_820 = 0;
    uStack_81c = 0;
    if (0 < (int)auStack_840._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(puStack_800 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < (int)auStack_840._4_4_);
    }
    if (puStack_7f8 != &uStack_7f0 && puStack_7f8 != (undefined8 *)0x0) {
      _free(puStack_7f8[-1]);
    }
    if (lStack_7a8 != 0) {
      piVar41 = (int *)(lStack_7a8 + 0x14);
      do {
        iVar19 = *piVar41;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_7e0);
      }
    }
    lStack_7a8 = 0;
    uStack_7c8 = 0;
    uStack_7c4 = 0;
    uStack_7d0 = 0;
    uStack_7cc = 0;
    uStack_7b8 = 0;
    uStack_7b4 = 0;
    uStack_7c0 = 0;
    uStack_7bc = 0;
    if (0 < uStack_7e0._4_4_) {
      lVar36 = 0;
      do {
        puStack_7a0[lVar36] = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_7e0._4_4_);
    }
    if (puStack_798 != &uStack_790 && puStack_798 != (undefined8 *)0x0) {
      _free(puStack_798[-1]);
    }
    if (lStack_748 != 0) {
      piVar41 = (int *)(lStack_748 + 0x14);
      do {
        iVar19 = *piVar41;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_780);
      }
    }
    lStack_748 = 0;
    uStack_768 = 0;
    uStack_764 = 0;
    uStack_770 = 0;
    uStack_76c = 0;
    uStack_758 = 0;
    uStack_754 = 0;
    uStack_760 = 0;
    uStack_75c = 0;
    if (0 < uStack_780._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)((long)puStack_740 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_780._4_4_);
    }
    if (puStack_738 != &uStack_730 && puStack_738 != (undefined8 *)0x0) {
      _free(puStack_738[-1]);
    }
    if (uStack_6e8 != 0) {
      piVar41 = (int *)(uStack_6e8 + 0x14);
      do {
        iVar19 = *piVar41;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_720);
      }
    }
    uStack_6e8 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_710 = 0;
    uStack_70c = 0;
    uStack_6f8 = 0;
    uStack_6f4 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    if (0 < iStack_71c) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_6e0 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < iStack_71c);
    }
    if (puStack_6d8 != &uStack_6d0 && puStack_6d8 != (undefined8 *)0x0) {
      _free(puStack_6d8[-1]);
    }
    if (uStack_688 != 0) {
      piVar41 = (int *)(uStack_688 + 0x14);
      do {
        iVar19 = *piVar41;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_6c0);
      }
    }
    uStack_688 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    if (0 < uStack_6c0._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_680 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_6c0._4_4_);
    }
    if (puStack_678 != &uStack_670 && puStack_678 != (undefined8 *)0x0) {
      _free(puStack_678[-1]);
    }
    if (uStack_628 != 0) {
      piVar41 = (int *)(uStack_628 + 0x14);
      do {
        iVar19 = *piVar41;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar18) {
          *piVar41 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_660);
      }
    }
    uStack_628 = 0;
    dVar45 = 0.0;
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    if (0 < uStack_660._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_620 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_660._4_4_);
    }
    if (puStack_618 != &uStack_610 && puStack_618 != (undefined8 *)0x0) {
      _free(puStack_618[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
      return dVar45;
    }
    ___stack_chk_fail();
  }
  puVar12 = (undefined4 *)0x30;
  func_0x000107c2ae8c();
  *puVar12 = 1;
  uStack_9b0 = (long *)(puVar12 + 1);
  puStack_9a8 = (uint *)0x28;
  *(undefined1 *)(puVar12 + 0xb) = 0;
  *(undefined8 *)(puVar12 + 3) = 0x28726f746365566b;
  *(undefined8 *)(puVar12 + 1) = 0x636568632e637273;
  *(undefined8 *)(puVar12 + 7) = 0x566b636568632e74;
  *(undefined8 *)(puVar12 + 5) = 0x7364203d3d202932;
  *(undefined8 *)(puVar12 + 9) = 0x293228726f746365;
  FUN_109ac3188(0xffffff29,&uStack_9b0,&UNK_10f5a2888,&UNK_10f5a2897,0x172);
LAB_109b95110:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b95114);
  (*pcVar5)();
}



/* Entry: 109b92fcc; end: 109b93553;  */

double FUN_109b92fcc(double *param_1,long param_2,long param_3,double *param_4,double *param_5)

{
  int *piVar1;
  double *pdVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  bool bVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  undefined4 *extraout_x8;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  double dVar24;
  double *pdVar25;
  undefined8 *puVar26;
  double dVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  double dVar31;
  double dVar32;
  undefined8 *puVar33;
  long lVar34;
  double dVar35;
  long lVar36;
  double *pdVar37;
  uint uVar38;
  int *piVar39;
  int *piVar40;
  uint uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined8 *puStack_858;
  undefined8 *puStack_850;
  undefined8 uStack_848;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 uStack_830;
  uint auStack_828 [2];
  ulong *puStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  uint *puStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long *plStack_6b0;
  long *plStack_6a8;
  undefined1 auStack_6a0 [8];
  undefined1 auStack_698 [4];
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  long lStack_668;
  undefined1 *puStack_660;
  undefined8 *puStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined4 uStack_640;
  int iStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  long lStack_608;
  undefined4 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  uint uStack_580;
  int iStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  ulong uStack_548;
  ulong uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long *plStack_458;
  uint uStack_450;
  int iStack_44c;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  long lStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  uint uStack_3f0;
  int iStack_3ec;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  long lStack_3b8;
  ulong uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  uint *puStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  uint uStack_320;
  int iStack_31c;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  long lStack_2e8;
  ulong uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2b8;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  double *pdStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  double *pdStack_1d8;
  undefined8 uStack_1d0;
  uint auStack_1c8 [6];
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  uint auStack_1a0 [6];
  undefined1 *puStack_188;
  undefined8 uStack_180;
  double adStack_178 [9];
  double adStack_130 [9];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [16];
  double adStack_c0 [7];
  double adStack_88 [6];
  long lStack_58;
  
  lVar18 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar25 = param_1 + 0x1d;
  param_1[0x1e] = 0.0;
  *pdVar25 = 0.0;
  param_1[0x26] = 0.0;
  param_1[0x25] = 0.0;
  param_1[0x28] = 0.0;
  param_1[0x27] = 0.0;
  param_1[0x22] = 0.0;
  param_1[0x21] = 0.0;
  param_1[0x24] = 0.0;
  param_1[0x23] = 0.0;
  param_1[0x20] = 0.0;
  param_1[0x1f] = 0.0;
  param_2 = param_2 + 0x420;
  do {
    lVar29 = 0;
    lVar34 = param_2;
    pdVar37 = pdVar25;
    do {
      lVar36 = 0;
      do {
        *(double *)((long)pdVar37 + lVar36) =
             *(double *)((long)pdVar37 + lVar36) +
             *(double *)(lVar34 + lVar36) * *(double *)(param_3 + lVar18 * 8);
        lVar36 = lVar36 + 8;
      } while (lVar36 != 0x18);
      lVar29 = lVar29 + 1;
      pdVar37 = pdVar37 + 3;
      lVar34 = lVar34 + 0x18;
    } while (lVar29 != 4);
    lVar18 = lVar18 + 1;
    param_2 = param_2 + -0x60;
  } while (lVar18 != 4);
  uVar38 = *(uint *)(param_1 + 0x10);
  uVar19 = (ulong)uVar38;
  if ((int)uVar38 < 1) {
    dVar24 = param_1[0xd];
    if (*(double *)((long)dVar24 + 0x10) < 0.0) goto LAB_109b9310c;
LAB_109b931d0:
    adStack_88[4] = 0.0;
    adStack_88[5] = 0.0;
    adStack_88[2] = 0.0;
    adStack_88[3] = 0.0;
    adStack_88[0] = 0.0;
    adStack_88[1] = 0.0;
  }
  else {
    uVar30 = 0;
    dVar35 = param_1[10];
    dVar24 = param_1[0xd];
    dVar31 = dVar24;
    do {
      lVar18 = 0;
      pdVar2 = (double *)((long)dVar35 + uVar30 * 0x20);
      pdVar37 = pdVar25;
      do {
        *(double *)((long)dVar31 + lVar18 * 8) =
             pdVar2[1] * pdVar37[3] + *pdVar37 * *pdVar2 + pdVar37[6] * pdVar2[2] +
             pdVar37[9] * pdVar2[3];
        lVar18 = lVar18 + 1;
        pdVar37 = pdVar37 + 1;
      } while (lVar18 != 3);
      uVar30 = uVar30 + 1;
      dVar31 = (double)((long)dVar31 + 0x18);
    } while (uVar30 != uVar19);
    if (*(double *)((long)dVar24 + 0x10) < 0.0) {
LAB_109b9310c:
      lVar18 = 0;
      do {
        lVar29 = 0;
        do {
          *(double *)((long)pdVar25 + lVar29) = -*(double *)((long)pdVar25 + lVar29);
          lVar29 = lVar29 + 8;
        } while (lVar29 != 0x18);
        lVar18 = lVar18 + 1;
        pdVar25 = pdVar25 + 3;
      } while (lVar18 != 4);
      if ((int)uVar38 < 1) goto LAB_109b931d0;
      pdVar25 = (double *)((long)dVar24 + 0x10);
      uVar30 = uVar19;
      do {
        pdVar25[-1] = -pdVar25[-1];
        pdVar25[-2] = -pdVar25[-2];
        *pdVar25 = -*pdVar25;
        uVar30 = uVar30 - 1;
        pdVar25 = pdVar25 + 3;
      } while (uVar30 != 0);
    }
    adStack_88[4] = 0.0;
    adStack_88[5] = 0.0;
    adStack_88[2] = 0.0;
    adStack_88[3] = 0.0;
    adStack_88[0] = 0.0;
    adStack_88[1] = 0.0;
    uVar30 = 0;
    dVar31 = param_1[4];
    do {
      lVar18 = 0;
      do {
        *(double *)((long)adStack_88 + lVar18 + 0x18) =
             *(double *)((long)dVar24 + lVar18) + *(double *)((long)adStack_88 + lVar18 + 0x18);
        *(double *)((long)adStack_88 + lVar18) =
             *(double *)((long)dVar31 + lVar18) + *(double *)((long)adStack_88 + lVar18);
        lVar18 = lVar18 + 8;
      } while (lVar18 != 0x18);
      uVar30 = uVar30 + 1;
      dVar31 = (double)((long)dVar31 + 0x18);
      dVar24 = (double)((long)dVar24 + 0x18);
    } while (uVar30 != uVar19);
  }
  lVar18 = 0;
  do {
    *(double *)((long)adStack_88 + lVar18 + 0x18) =
         *(double *)((long)adStack_88 + lVar18 + 0x18) / (double)(int)uVar38;
    *(double *)((long)adStack_88 + lVar18) =
         *(double *)((long)adStack_88 + lVar18) / (double)(int)uVar38;
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x18);
  uStack_180 = 0x300000003;
  puStack_188 = auStack_d0;
  auStack_1a0[2] = 0;
  auStack_1a0[3] = 0;
  auStack_1a0[4] = 0;
  uStack_1a8 = 0x100000003;
  auStack_1a0[0] = 0x42424006;
  auStack_1a0[1] = 0x18;
  uStack_1d0 = 0x300000003;
  auStack_1c8[0] = 0x42424006;
  auStack_1c8[1] = 8;
  puStack_1b0 = auStack_e8;
  auStack_1c8[2] = 0;
  auStack_1c8[3] = 0;
  auStack_1c8[4] = 0;
  uStack_1f8 = 0x300000003;
  uStack_1f0 = 0x1842424006;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_218 = 0x1842424006;
  uStack_210 = 0;
  uStack_208 = 0;
  pdStack_200 = adStack_178;
  pdStack_1d8 = adStack_130;
  FUN_109a4b71c(auStack_1a0);
  dVar35 = adStack_88[2];
  dVar31 = adStack_88[1];
  dVar24 = adStack_88[0];
  uVar38 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar38) {
    uVar19 = 0;
    dVar27 = param_1[0xd];
    dVar32 = param_1[4];
    do {
      lVar18 = 0;
      pdVar37 = (double *)((long)dVar32 + uVar19 * 0x18);
      pdVar25 = adStack_c0;
      do {
        dVar46 = *(double *)((long)adStack_88 + lVar18 + 0x18);
        pdVar25[-2] = pdVar25[-2] +
                      (*pdVar37 - dVar24) * (*(double *)((long)dVar27 + lVar18) - dVar46);
        pdVar25[-1] = pdVar25[-1] +
                      (pdVar37[1] - dVar31) * (*(double *)((long)dVar27 + lVar18) - dVar46);
        *pdVar25 = *pdVar25 + (pdVar37[2] - dVar35) * (*(double *)((long)dVar27 + lVar18) - dVar46);
        lVar18 = lVar18 + 8;
        pdVar25 = pdVar25 + 3;
      } while (lVar18 != 0x18);
      uVar19 = uVar19 + 1;
      dVar27 = (double)((long)dVar27 + 0x18);
    } while (uVar19 != uVar38);
  }
  puVar6 = auStack_1a0;
  puVar12 = auStack_1c8;
  iVar17 = (int)&uStack_1f0;
  puVar14 = &uStack_218;
  uVar15 = 1;
  FUN_109a5dcc4();
  lVar18 = 0;
  pdVar25 = param_4;
  do {
    lVar29 = 0;
    dVar24 = adStack_130[lVar18 * 3];
    dVar31 = adStack_130[lVar18 * 3 + 1];
    dVar35 = adStack_130[lVar18 * 3 + 2];
    pdVar37 = pdVar25;
    do {
      *pdVar37 = dVar31 * *(double *)((long)adStack_178 + lVar29 + 8) +
                 *(double *)((long)adStack_178 + lVar29) * dVar24 +
                 *(double *)((long)adStack_178 + lVar29 + 0x10) * dVar35;
      lVar29 = lVar29 + 0x18;
      pdVar37 = pdVar37 + 1;
    } while (lVar29 != 0x48);
    lVar18 = lVar18 + 1;
    pdVar25 = pdVar25 + 3;
  } while (lVar18 != 3);
  dVar24 = *param_4;
  dVar31 = param_4[1];
  dVar27 = param_4[8];
  dVar35 = param_4[2];
  dVar46 = param_4[7];
  dVar32 = param_4[6];
  if (dVar31 * param_4[5] * dVar32 + dVar27 * dVar24 * param_4[4] + dVar35 * param_4[3] * dVar46 +
      dVar32 * -(dVar35 * param_4[4]) + dVar27 * -(dVar31 * param_4[3]) +
      -(dVar24 * param_4[5]) * dVar46 < 0.0) {
    param_4[7] = -dVar46;
    param_4[6] = -dVar32;
    param_4[8] = -dVar27;
  }
  dVar24 = adStack_88[3] -
           (dVar31 * adStack_88[1] + adStack_88[0] * dVar24 + adStack_88[2] * dVar35);
  *param_5 = dVar24;
  dVar31 = adStack_88[4] -
           (adStack_88[1] * param_4[4] + adStack_88[0] * param_4[3] + adStack_88[2] * param_4[5]);
  param_5[1] = dVar31;
  dVar35 = adStack_88[5] -
           (adStack_88[1] * param_4[7] + adStack_88[0] * param_4[6] + adStack_88[2] * param_4[8]);
  param_5[2] = dVar35;
  uVar38 = *(uint *)(param_1 + 0x10);
  uVar19 = (ulong)uVar38;
  if ((int)uVar38 < 1) {
    dVar27 = 0.0;
  }
  else {
    pdVar25 = (double *)((long)param_1[7] + 8);
    dVar27 = 0.0;
    pdVar37 = (double *)((long)param_1[4] + 0x10);
    do {
      dVar32 = pdVar37[-2];
      dVar47 = pdVar37[-1];
      dVar49 = *pdVar37;
      dVar46 = 1.0 / (dVar35 + param_4[7] * dVar47 + dVar32 * param_4[6] + dVar49 * param_4[8]);
      dVar48 = pdVar25[-1] -
               (*param_1 +
               dVar46 * param_1[2] *
                        (dVar24 + param_4[1] * dVar47 + dVar32 * *param_4 + dVar49 * param_4[2]));
      dVar32 = *pdVar25 -
               (param_1[1] +
               dVar46 * param_1[3] *
                        (dVar31 + param_4[4] * dVar47 + dVar32 * param_4[3] + dVar49 * param_4[5]));
      dVar27 = dVar27 + SQRT(dVar32 * dVar32 + dVar48 * dVar48);
      pdVar25 = pdVar25 + 2;
      uVar19 = uVar19 - 1;
      pdVar37 = pdVar37 + 3;
    } while (uVar19 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar27 / (double)(int)uVar38;
  }
  ___stack_chk_fail();
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*puVar6 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(puVar6 + 2);
    uStack_480 = (ulong)&uStack_4c0 | 8;
    uStack_4b8 = puVar13[1];
    uStack_4c0 = *puVar13;
    uStack_4a8 = puVar13[3];
    uStack_4b0 = puVar13[2];
    uStack_498 = puVar13[5];
    uStack_4a0 = puVar13[4];
    uStack_488 = puVar13[7];
    uStack_490 = puVar13[6];
    puStack_478 = &uStack_470;
    uStack_468 = 0;
    uStack_470 = 0;
    if (puVar13[7] != 0) {
      piVar39 = (int *)(puVar13[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = *piVar39 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_470 = *(undefined8 *)puVar13[9];
      uStack_468 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_4c0 = uStack_4c0 & 0xffffffff;
      func_0x000109a84868(&uStack_4c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4c0);
  }
  if ((*puVar12 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(puVar12 + 2);
    uStack_4e0 = (ulong)&uStack_520 | 8;
    uStack_518 = puVar13[1];
    uStack_520 = *puVar13;
    uStack_508 = puVar13[3];
    uStack_510 = puVar13[2];
    uStack_4f8 = puVar13[5];
    uStack_500 = puVar13[4];
    uStack_4e8 = puVar13[7];
    uStack_4f0 = puVar13[6];
    puStack_4d8 = &uStack_4d0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    if (puVar13[7] != 0) {
      piVar39 = (int *)(puVar13[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = *piVar39 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_4d0 = *(undefined8 *)puVar13[9];
      uStack_4c8 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_520 = uStack_520 & 0xffffffff;
      func_0x000109a84868(&uStack_520);
    }
  }
  else {
    FUN_109a8a180(&uStack_520,puVar12,0xffffffff);
  }
  uStack_580 = 0x42ff0000;
  uStack_574 = 0;
  uStack_570 = 0;
  iStack_57c = 0;
  uStack_578 = 0;
  uStack_564 = 0;
  uStack_560 = 0;
  uStack_56c = 0;
  uStack_568 = 0;
  uStack_554 = 0;
  uStack_55c = 0;
  uStack_558 = 0;
  uStack_540 = (ulong)&uStack_580 | 8;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_5e0._0_4_ = 0x42ff0000;
  puStack_5a0 = &uStack_5d8;
  uStack_5d8._4_4_ = 0;
  uStack_5d0 = 0;
  uStack_5e0._4_4_ = 0;
  uStack_5d8._0_4_ = 0;
  uStack_5c4 = 0;
  uStack_5c0 = 0;
  uStack_5cc = 0;
  uStack_5c8 = 0;
  uStack_5b4 = 0;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  lStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_5ac = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_640 = 0x42ff0000;
  puVar33 = (undefined8 *)((ulong)&uStack_640 | 4);
  uStack_634 = 0;
  uStack_630 = 0;
  iStack_63c = 0;
  uStack_638 = 0;
  uStack_624 = 0;
  uStack_620 = 0;
  uStack_62c = 0;
  uStack_628 = 0;
  uStack_614 = 0;
  uStack_61c = 0;
  uStack_618 = 0;
  lStack_608 = 0;
  uStack_610 = 0;
  uStack_60c = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  auStack_6a0._0_4_ = 0x42ff0000;
  puStack_660 = auStack_698;
  uStack_694 = 0;
  uStack_690 = 0;
  stack0xfffffffffffff964 = 0;
  uStack_684 = 0;
  uStack_680 = 0;
  uStack_68c = 0;
  uStack_688 = 0;
  uStack_674 = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_66c = 0;
  bVar23 = true;
  uStack_648 = 0;
  uStack_650 = 0;
  bVar16 = false;
  puStack_658 = &uStack_650;
  puStack_600 = &uStack_638;
  puStack_5f8 = &uStack_5f0;
  puStack_598 = &uStack_590;
  puStack_538 = &uStack_530;
  do {
    puVar6 = &uStack_580;
    puVar12 = (uint *)&uStack_4c0;
    if (!bVar23) {
      puVar6 = (uint *)&uStack_5e0;
      puVar12 = (uint *)&uStack_520;
    }
    puVar7 = puVar12;
    FUN_109a89cd4(puVar12,2,0xffffffff,0);
    if ((int)puVar7 < 0) {
      puVar7 = puVar12;
      FUN_109a89cd4(puVar12,3,0xffffffff,0);
      if ((int)puVar7 < 0) {
        puVar11 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_810 = (long *)(puVar11 + 1);
        puStack_808 = (uint *)0x2e;
        *(undefined1 *)((long)puVar11 + 0x32) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x7379617272612074;
        *(undefined8 *)(puVar11 + 1) = 0x75706e6920656854;
        *(undefined8 *)(puVar11 + 7) = 0x726f204432206562;
        *(undefined8 *)(puVar11 + 5) = 0x20646c756f687320;
        *(undefined8 *)((long)puVar11 + 0x2a) = 0x7374657320746e69;
        *(undefined8 *)((long)puVar11 + 0x22) = 0x6f7020443320726f;
        FUN_109ac3188(0xfffffffb,&uStack_810,&UNK_10f5a2888,&UNK_10f5a2897,0x16a);
        goto LAB_109b95110;
      }
      if ((int)puVar7 == 0) {
        *extraout_x8 = 0x42ff0000;
        *(undefined8 *)(extraout_x8 + 3) = 0;
        *(undefined8 *)(extraout_x8 + 1) = 0;
        *(undefined8 *)(extraout_x8 + 7) = 0;
        *(undefined8 *)(extraout_x8 + 5) = 0;
        *(undefined8 *)(extraout_x8 + 0xb) = 0;
        *(undefined8 *)(extraout_x8 + 9) = 0;
        *(undefined8 *)(extraout_x8 + 0xe) = 0;
        *(undefined8 *)(extraout_x8 + 0xc) = 0;
        *(undefined8 *)(extraout_x8 + 0x14) = 0;
        *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
        *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
        *(undefined8 *)(extraout_x8 + 0x16) = 0;
        goto LAB_109b94c74;
      }
      uStack_800 = 0;
      uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x1010000);
      uStack_390 = CONCAT44(uStack_390._4_4_,0x2010000);
      uStack_380 = 0;
      puStack_808 = puVar12;
      puStack_388 = puVar12;
      FUN_109b953b8(&uStack_810,&uStack_390);
    }
    FUN_109a890bc(&uStack_810,puVar12,2,puVar7);
    uStack_390 = CONCAT44(uStack_390._4_4_,0x2010000);
    uStack_380 = 0;
    puStack_388 = puVar6;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_810,&uStack_390,5);
    if (uStack_7d8 != 0) {
      piVar39 = (int *)(uStack_7d8 + 0x14);
      do {
        iVar28 = *piVar39;
        cVar3 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar23) {
          *piVar39 = iVar28 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar28 + -1 == 0) {
        func_0x000109a848d4(&uStack_810);
      }
    }
    uStack_7d8 = 0;
    uStack_7f8 = 0;
    uStack_800 = 0;
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    if (0 < uStack_810._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(uStack_7d0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_810._4_4_);
    }
    if (puStack_7c8 != &uStack_7c0 && puStack_7c8 != (undefined8 *)0x0) {
      _free(puStack_7c8[-1]);
    }
    bVar23 = false;
    bVar4 = !bVar16;
    bVar16 = true;
  } while (bVar4);
  puVar6 = &uStack_580;
  FUN_109a89cd4(puVar6,2,0xffffffff,1);
  puVar10 = &uStack_5e0;
  FUN_109a89cd4(puVar10,2,0xffffffff,1);
  if ((int)puVar6 == (int)puVar10) {
    if (dVar24 <= 0.0) {
      dVar24 = 3.0;
    }
    plVar8 = (long *)0x8;
    __Znwm();
    *plVar8 = (long)&PTR_FUN_110b29938;
    plVar9 = (long *)0x20;
    __Znwm();
    plVar20 = plVar9 + 1;
    *(int *)plVar20 = 1;
    *plVar9 = (long)&PTR_DAT_110b29988;
    plVar9[2] = (long)plVar8;
    do {
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar16) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar28 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar16) {
        *(int *)plVar20 = iVar28;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_6b0 = plVar9;
    plStack_6a8 = plVar8;
    if (iVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar38 = (uint)puVar7;
    if ((iVar17 == 0) || (uVar38 == 4)) {
      FUN_109a82ac8(&uStack_810,puVar7,1,0);
      (**(code **)(*uStack_810 + 0x18))(uStack_810,&uStack_810,auStack_6a0,0xffffffff);
      FUN_10918eb6c(&uStack_810);
      uStack_800 = 0;
      uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x1010000);
      puStack_808 = &uStack_580;
      uStack_380 = 0;
      uStack_390 = CONCAT44(uStack_390._4_4_,0x1010000);
      puStack_388 = (uint *)&uStack_5e0;
      uStack_3f0 = 0x2010000;
      uStack_3e8 = &uStack_640;
      uStack_3e0 = 0;
      uStack_3dc = 0;
      plVar8 = plStack_6a8;
      (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8,&uStack_810,&uStack_390,&uStack_3f0);
      uVar41 = (uint)(0 < (int)plVar8);
LAB_109b93ca4:
      if (((iVar17 == 0x10) || (uVar38 < 5)) || (uVar41 == 0)) {
LAB_109b93e04:
        if (uVar41 == 0) goto LAB_109b93e08;
      }
      else {
        uVar19 = 0;
        iVar28 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_68c,uStack_690) + uVar19) != '\0') {
            if ((long)iVar28 < (long)uVar19) {
              *(undefined8 *)(CONCAT44(uStack_56c,uStack_570) + (long)iVar28 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_56c,uStack_570) + uVar19 * 8);
            }
            iVar28 = iVar28 + 1;
          }
          uVar19 = uVar19 + 1;
        } while (((ulong)puVar7 & 0xffffffff) != uVar19);
        uVar19 = 0;
        uVar38 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_68c,uStack_690) + uVar19) != '\0') {
            if ((long)(int)uVar38 < (long)uVar19) {
              *(undefined8 *)(CONCAT44(uStack_5cc,uStack_5d0) + (long)(int)uVar38 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_5cc,uStack_5d0) + uVar19 * 8);
            }
            uVar38 = uVar38 + 1;
          }
          uVar19 = uVar19 + 1;
        } while (((ulong)puVar7 & 0xffffffff) != uVar19);
        if ((int)uVar38 < 1) goto LAB_109b93e04;
        uStack_810 = (long *)((ulong)uVar38 << 0x20);
        uStack_3f0 = 0x80000000;
        iStack_3ec = 0x7fffffff;
        FUN_109a84930(&uStack_390,&uStack_580,&uStack_810,&uStack_3f0);
        uStack_810 = (long *)((ulong)uVar38 << 0x20);
        uStack_450 = 0x80000000;
        iStack_44c = 0x7fffffff;
        FUN_109a84930(&uStack_3f0,&uStack_5e0,&uStack_810,&uStack_450);
        if (uStack_358 != 0) {
          piVar39 = (int *)(uStack_358 + 0x14);
          do {
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = *piVar39 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (uStack_548 != 0) {
          piVar39 = (int *)(uStack_548 + 0x14);
          do {
            iVar28 = *piVar39;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = iVar28 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_580);
          }
        }
        puVar10 = puStack_348;
        uStack_548 = 0;
        uStack_568 = 0;
        uStack_564 = 0;
        uStack_570 = 0;
        uStack_56c = 0;
        uStack_558 = 0;
        uStack_554 = 0;
        uStack_560 = 0;
        uStack_55c = 0;
        if (iStack_57c < 1) {
LAB_109b93e7c:
          uStack_580 = (uint)uStack_390;
          if (2 < uStack_390._4_4_) goto LAB_109b93eb0;
          iStack_57c = uStack_390._4_4_;
          uStack_578 = SUB84(puStack_388,0);
          uStack_574 = (undefined4)((ulong)puStack_388 >> 0x20);
          *puStack_538 = *puStack_348;
          puStack_538[1] = puVar10[1];
        }
        else {
          lVar18 = 0;
          do {
            *(undefined4 *)(uStack_540 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < iStack_57c);
          if (iStack_57c < 3) goto LAB_109b93e7c;
LAB_109b93eb0:
          uStack_580 = (uint)uStack_390;
          func_0x000109a84868(&uStack_580,&uStack_390);
        }
        uStack_568 = (undefined4)uStack_378;
        uStack_564 = (undefined4)(uStack_378 >> 0x20);
        uStack_570 = (undefined4)uStack_380;
        uStack_56c = (undefined4)(uStack_380 >> 0x20);
        uStack_558 = (undefined4)uStack_368;
        uStack_554 = (undefined4)(uStack_368 >> 0x20);
        uStack_560 = (undefined4)uStack_370;
        uStack_55c = (undefined4)(uStack_370 >> 0x20);
        uStack_548 = uStack_358;
        uStack_550 = (undefined4)uStack_360;
        uStack_54c = (undefined4)(uStack_360 >> 0x20);
        if (lStack_3b8 != 0) {
          piVar39 = (int *)(lStack_3b8 + 0x14);
          do {
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = *piVar39 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar11 = uStack_3e8;
        if (lStack_5a8 != 0) {
          piVar39 = (int *)(lStack_5a8 + 0x14);
          do {
            iVar28 = *piVar39;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = iVar28 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_5e0);
            puVar11 = uStack_3e8;
          }
        }
        puVar10 = puStack_3a8;
        lStack_5a8 = 0;
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        uStack_5d0 = 0;
        uStack_5cc = 0;
        uStack_5b8 = 0;
        uStack_5b4 = 0;
        uStack_5c0 = 0;
        uStack_5bc = 0;
        uStack_3e8 = puVar11;
        if (uStack_5e0._4_4_ < 1) {
LAB_109b93f60:
          uStack_5e0._0_4_ = uStack_3f0;
          if (2 < iStack_3ec) goto LAB_109b93f94;
          uStack_5e0._4_4_ = iStack_3ec;
          *puStack_598 = *puStack_3a8;
          puStack_598[1] = puVar10[1];
        }
        else {
          lVar18 = 0;
          do {
            *(undefined4 *)((long)puStack_5a0 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_5e0._4_4_);
          if (uStack_5e0._4_4_ < 3) goto LAB_109b93f60;
LAB_109b93f94:
          uStack_5e0._0_4_ = uStack_3f0;
          func_0x000109a84868(&uStack_5e0,&uStack_3f0);
          puVar11 = (undefined4 *)CONCAT44(uStack_5d8._4_4_,(undefined4)uStack_5d8);
        }
        uStack_5c8 = uStack_3d8;
        uStack_5c4 = uStack_3d4;
        uStack_5d0 = uStack_3e0;
        uStack_5cc = uStack_3dc;
        uStack_5b8 = uStack_3c8;
        uStack_5b4 = uStack_3c4;
        uStack_5c0 = uStack_3d0;
        uStack_5bc = uStack_3cc;
        lStack_5a8 = lStack_3b8;
        uStack_5b0 = uStack_3c0;
        uStack_5ac = uStack_3bc;
        uStack_5d8 = puVar11;
        if ((iVar17 == 8) || (iVar17 == 4)) {
          uStack_800 = 0;
          uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x1010000);
          puStack_808 = &uStack_580;
          uStack_440 = 0;
          uStack_43c = 0;
          uStack_450 = 0x1010000;
          uStack_448 = &uStack_5e0;
          uStack_320 = 0x2010000;
          uStack_318 = (ulong *)&uStack_640;
          uStack_310 = 0;
          uStack_30c = 0;
          (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8,&uStack_810,&uStack_450,&uStack_320);
        }
        puStack_410 = (undefined8 *)((ulong)&uStack_450 | 8);
        uStack_448._0_4_ = 8;
        uStack_448._4_4_ = 1;
        uStack_450 = 0x42ff0006;
        iStack_44c = 2;
        uStack_440 = uStack_630;
        uStack_43c = uStack_62c;
        uStack_438 = uStack_630;
        uStack_434 = uStack_62c;
        uStack_428._0_4_ = 0;
        uStack_428._4_4_ = 0;
        uStack_430._0_4_ = 0;
        uStack_430._4_4_ = 0;
        lStack_418 = 0;
        uStack_420 = 0;
        uStack_41c = 0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        puStack_408 = &uStack_400;
        if (CONCAT44(uStack_62c,uStack_630) == 0) {
          puVar11 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          uStack_810 = (long *)(puVar11 + 1);
          puStack_808 = (uint *)0x1c;
          *(undefined1 *)(puVar11 + 8) = 0;
          *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_810,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109b95110;
        }
        uStack_450 = 0x42ff4006;
        uStack_3f8 = 8;
        uStack_400 = 8;
        uStack_428 = CONCAT44(uStack_62c,uStack_630) + 0x40;
        puVar10 = (undefined8 *)0xc8;
        uStack_430 = uStack_428;
        __Znwm();
        uStack_320 = 0x1010000;
        uStack_318 = &uStack_5e0;
        uStack_310 = 0;
        uStack_30c = 0;
        *(undefined4 *)(puVar10 + 1) = 0x42ff0000;
        *puVar10 = &PTR_FUN_110b299c8;
        piVar39 = (int *)((long)puVar10 + 0xc);
        *(undefined8 *)((long)puVar10 + 0x14) = 0;
        piVar39[0] = 0;
        piVar39[1] = 0;
        *(undefined8 *)((long)puVar10 + 0x24) = 0;
        *(undefined8 *)((long)puVar10 + 0x1c) = 0;
        *(undefined8 *)((long)puVar10 + 0x34) = 0;
        *(undefined8 *)((long)puVar10 + 0x2c) = 0;
        puVar10[8] = 0;
        puVar10[7] = 0;
        puVar21 = puVar10 + 0xb;
        *puVar21 = 0;
        puVar10[9] = puVar10 + 2;
        puVar10[10] = puVar21;
        puVar10[0xc] = 0;
        *(undefined4 *)(puVar10 + 0xd) = 0x42ff0000;
        piVar40 = (int *)((long)puVar10 + 0x6c);
        *(undefined8 *)((long)puVar10 + 0x74) = 0;
        piVar40[0] = 0;
        piVar40[1] = 0;
        *(undefined8 *)((long)puVar10 + 0x84) = 0;
        *(undefined8 *)((long)puVar10 + 0x7c) = 0;
        *(undefined8 *)((long)puVar10 + 0x94) = 0;
        *(undefined8 *)((long)puVar10 + 0x8c) = 0;
        puVar10[0x14] = 0;
        puVar10[0x13] = 0;
        puVar22 = puVar10 + 0x17;
        *puVar22 = 0;
        puVar10[0x15] = puVar10 + 0xe;
        puVar10[0x16] = puVar22;
        puVar10[0x18] = 0;
        uStack_7d0 = (ulong)&uStack_810 | 8;
        puStack_808 = (uint *)CONCAT44(uStack_574,uStack_578);
        uStack_810 = (long *)CONCAT44(iStack_57c,uStack_580);
        uStack_7f8 = CONCAT44(uStack_564,uStack_568);
        uStack_800 = CONCAT44(uStack_56c,uStack_570);
        uStack_7e8 = CONCAT44(uStack_554,uStack_558);
        uStack_7f0 = CONCAT44(uStack_55c,uStack_560);
        uStack_7e0 = CONCAT44(uStack_54c,uStack_550);
        uStack_7d8 = uStack_548;
        uStack_7c0 = 0;
        uStack_7b8 = 0;
        if (uStack_548 != 0) {
          piVar1 = (int *)(uStack_548 + 0x14);
          do {
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar16) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puStack_7c8 = &uStack_7c0;
        if (iStack_57c < 3) {
          uStack_7c0 = *puStack_538;
          uStack_7b8 = puStack_538[1];
        }
        else {
          uStack_810 = (long *)(ulong)uStack_580;
          func_0x000109a84868(&uStack_810,&uStack_580);
        }
        if (puVar10[8] != 0) {
          piVar1 = (int *)(puVar10[8] + 0x14);
          do {
            iVar17 = *piVar1;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar16) {
              *piVar1 = iVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(puVar10 + 1);
          }
        }
        puVar10[8] = 0;
        puVar10[4] = 0;
        puVar10[3] = 0;
        puVar10[6] = 0;
        puVar10[5] = 0;
        if (0 < *(int *)((long)puVar10 + 0xc)) {
          lVar18 = 0;
          lVar29 = puVar10[9];
          do {
            *(undefined4 *)(lVar29 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < *piVar39);
        }
        puVar10[2] = puStack_808;
        puVar10[1] = uStack_810;
        puVar10[4] = uStack_7f8;
        puVar10[3] = uStack_800;
        puVar10[6] = uStack_7e8;
        puVar10[5] = uStack_7f0;
        puVar10[8] = uStack_7d8;
        puVar10[7] = uStack_7e0;
        puVar26 = (undefined8 *)puVar10[10];
        iVar17 = uStack_810._4_4_;
        if (puVar26 != puVar21) {
          if (puVar26 != (undefined8 *)0x0) {
            _free(puVar26[-1]);
          }
          puVar10[9] = puVar10 + 2;
          puVar10[10] = puVar21;
          puVar26 = puVar21;
          iVar17 = uStack_810._4_4_;
        }
        if (iVar17 < 3) {
          puVar21 = (undefined8 *)((ulong)&uStack_810 | 4);
          *puVar26 = *puStack_7c8;
          puVar26[1] = puStack_7c8[1];
          uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x42ff0000);
          puVar21[1] = 0;
          *puVar21 = 0;
          puVar21[3] = 0;
          puVar21[2] = 0;
          puVar21[5] = 0;
          puVar21[4] = 0;
          *(undefined8 *)((long)puVar21 + 0x34) = 0;
          *(undefined8 *)((long)puVar21 + 0x2c) = 0;
          if (puStack_7c8 != &uStack_7c0) {
            _free(puStack_7c8[-1]);
          }
        }
        else {
          puVar10[9] = uStack_7d0;
          puVar10[10] = puStack_7c8;
        }
        if ((uStack_320 & 0x1f0000) == 0x10000) {
          uStack_7d0 = (ulong)&uStack_810 | 8;
          puStack_808 = (uint *)uStack_318[1];
          uStack_810 = (long *)*uStack_318;
          uStack_7f8 = uStack_318[3];
          uStack_800 = uStack_318[2];
          uStack_7e8 = uStack_318[5];
          uStack_7f0 = uStack_318[4];
          uStack_7d8 = uStack_318[7];
          uStack_7e0 = uStack_318[6];
          puStack_7c8 = &uStack_7c0;
          uStack_7c0 = 0;
          uStack_7b8 = 0;
          if (uStack_318[7] != 0) {
            piVar39 = (int *)(uStack_318[7] + 0x14);
            do {
              cVar3 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
              if (bVar16) {
                *piVar39 = *piVar39 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(int *)((long)uStack_318 + 4) < 3) {
            uStack_7c0 = *(undefined8 *)uStack_318[9];
            uStack_7b8 = ((undefined8 *)uStack_318[9])[1];
          }
          else {
            uStack_810 = (long *)((ulong)uStack_810 & 0xffffffff);
            func_0x000109a84868(&uStack_810);
          }
        }
        else {
          FUN_109a8a180(&uStack_810,&uStack_320,0xffffffff);
        }
        if (puVar10[0x14] != 0) {
          piVar39 = (int *)(puVar10[0x14] + 0x14);
          do {
            iVar17 = *piVar39;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = iVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(puVar10 + 0xd);
          }
        }
        puVar10[0x14] = 0;
        puVar10[0x10] = 0;
        puVar10[0xf] = 0;
        puVar10[0x12] = 0;
        puVar10[0x11] = 0;
        if (0 < *(int *)((long)puVar10 + 0x6c)) {
          lVar18 = 0;
          lVar29 = puVar10[0x15];
          do {
            *(undefined4 *)(lVar29 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < *piVar40);
        }
        puVar10[0xe] = puStack_808;
        puVar10[0xd] = uStack_810;
        puVar10[0x10] = uStack_7f8;
        puVar10[0xf] = uStack_800;
        puVar10[0x12] = uStack_7e8;
        puVar10[0x11] = uStack_7f0;
        puVar10[0x14] = uStack_7d8;
        puVar10[0x13] = uStack_7e0;
        puVar21 = (undefined8 *)puVar10[0x16];
        iVar17 = uStack_810._4_4_;
        if (puVar21 != puVar22) {
          if (puVar21 != (undefined8 *)0x0) {
            _free(puVar21[-1]);
          }
          puVar10[0x15] = puVar10 + 0xe;
          puVar10[0x16] = puVar22;
          puVar21 = puVar22;
          iVar17 = uStack_810._4_4_;
        }
        if (iVar17 < 3) {
          puVar22 = (undefined8 *)((ulong)&uStack_810 | 4);
          *puVar21 = *puStack_7c8;
          puVar21[1] = puStack_7c8[1];
          uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x42ff0000);
          puVar22[1] = 0;
          *puVar22 = 0;
          puVar22[3] = 0;
          puVar22[2] = 0;
          puVar22[5] = 0;
          puVar22[4] = 0;
          *(undefined8 *)((long)puVar22 + 0x34) = 0;
          *(undefined8 *)((long)puVar22 + 0x2c) = 0;
          if (puStack_7c8 != &uStack_7c0) {
            _free(puStack_7c8[-1]);
          }
        }
        else {
          puVar10[0x15] = uStack_7d0;
          puVar10[0x16] = puStack_7c8;
        }
        puVar22 = (undefined8 *)0x20;
        __Znwm();
        piVar39 = (int *)(puVar22 + 1);
        *piVar39 = 1;
        *puVar22 = &PTR_FUN_110b29a18;
        puVar22[2] = puVar10;
        do {
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = *piVar39 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puStack_858 = puVar22;
        puStack_850 = puVar10;
        puStack_840 = puVar22;
        puStack_838 = puVar10;
        func_0x000109b9b81c(auStack_828,&puStack_840,10);
        uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x3010000);
        puStack_808 = &uStack_450;
        uStack_800 = 0;
        (**(code **)(*puStack_820 + 0x48))(puStack_820,&uStack_810);
        FUN_109b99504(auStack_828);
        FUN_109b994b0(&puStack_840);
        FUN_109b9945c(&puStack_858);
        if (lStack_418 != 0) {
          piVar39 = (int *)(lStack_418 + 0x14);
          do {
            iVar17 = *piVar39;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = iVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_450);
          }
        }
        lStack_418 = 0;
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_440 = 0;
        uStack_43c = 0;
        uStack_428._0_4_ = 0;
        uStack_428._4_4_ = 0;
        uStack_430._0_4_ = 0;
        uStack_430._4_4_ = 0;
        if (0 < iStack_44c) {
          lVar18 = 0;
          do {
            *(undefined4 *)((long)puStack_410 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < iStack_44c);
        }
        if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
          _free(puStack_408[-1]);
        }
        if (lStack_3b8 != 0) {
          piVar39 = (int *)(lStack_3b8 + 0x14);
          do {
            iVar17 = *piVar39;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = iVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_3f0);
          }
        }
        lStack_3b8 = 0;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        uStack_3d0 = 0;
        uStack_3cc = 0;
        if (0 < iStack_3ec) {
          lVar18 = 0;
          do {
            *(undefined4 *)(uStack_3b0 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < iStack_3ec);
        }
        if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
          _free(puStack_3a8[-1]);
        }
        if (uStack_358 != 0) {
          piVar39 = (int *)(uStack_358 + 0x14);
          do {
            iVar17 = *piVar39;
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = iVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_390);
          }
        }
        uStack_358 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        if (0 < uStack_390._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)(uStack_350 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_390._4_4_);
        }
        if (puStack_348 != &uStack_340 && puStack_348 != (undefined8 *)0x0) {
          _free(puStack_348[-1]);
        }
      }
LAB_109b94bbc:
      if ((*(byte *)((long)puVar14 + 2) & 0x1f) != 0) {
        FUN_109a479a0(auStack_6a0);
      }
      uVar43 = CONCAT44(uStack_624,uStack_628);
      uVar42 = CONCAT44(uStack_62c,uStack_630);
      uVar45 = CONCAT44(uStack_614,uStack_618);
      uVar44 = CONCAT44(uStack_61c,uStack_620);
      puVar13 = uStack_318;
      puVar11 = uStack_5d8;
    }
    else {
      if (iVar17 == 4) {
        func_0x000109b9ec90(&uStack_320,dVar31,&plStack_6b0,4,uVar15);
        plVar8 = (long *)CONCAT44(uStack_318._4_4_,(undefined4)uStack_318);
        uStack_800 = 0;
        uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x1010000);
        puStack_808 = &uStack_580;
        uStack_380 = 0;
        uStack_390 = CONCAT44(uStack_390._4_4_,0x1010000);
        puStack_388 = (uint *)&uStack_5e0;
        uStack_3f0 = 0x2010000;
        uStack_3e8 = &uStack_640;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        uStack_450 = 0x2010000;
        uStack_448 = (undefined8 *)auStack_6a0;
        uStack_440 = 0;
        uStack_43c = 0;
        (**(code **)(*plVar8 + 0x48))(plVar8,&uStack_810,&uStack_390,&uStack_3f0,&uStack_450);
        uVar41 = (uint)plVar8;
LAB_109b93c98:
        FUN_109b98b7c(&uStack_320);
        goto LAB_109b93ca4;
      }
      if (iVar17 != 0x10) {
        if (iVar17 != 8) {
          puVar11 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          uStack_810 = (long *)(puVar11 + 1);
          puStack_808 = (uint *)0x19;
          *(undefined1 *)((long)puVar11 + 0x1d) = 0;
          *(undefined8 *)(puVar11 + 3) = 0x6974616d69747365;
          *(undefined8 *)(puVar11 + 1) = 0x206e776f6e6b6e55;
          *(undefined8 *)((long)puVar11 + 0x15) = 0x646f6874656d206e;
          *(undefined8 *)((long)puVar11 + 0xd) = 0x6f6974616d697473;
          FUN_109ac3188(0xfffffffb,&uStack_810,&UNK_10f5a2888,&UNK_10f5a2897,0x185);
          goto LAB_109b95110;
        }
        FUN_109b9ebd8(&uStack_320,dVar24,dVar31,&plStack_6b0,4,uVar15);
        plVar8 = (long *)CONCAT44(uStack_318._4_4_,(undefined4)uStack_318);
        uStack_800 = 0;
        uStack_810 = (long *)CONCAT44(uStack_810._4_4_,0x1010000);
        puStack_808 = &uStack_580;
        uStack_380 = 0;
        uStack_390 = CONCAT44(uStack_390._4_4_,0x1010000);
        puStack_388 = (uint *)&uStack_5e0;
        uStack_3f0 = 0x2010000;
        uStack_3e8 = &uStack_640;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        uStack_450 = 0x2010000;
        uStack_448 = (undefined8 *)auStack_6a0;
        uStack_440 = 0;
        uStack_43c = 0;
        (**(code **)(*plVar8 + 0x48))(plVar8,&uStack_810,&uStack_390,&uStack_3f0,&uStack_450);
        uVar41 = (uint)plVar8;
        goto LAB_109b93c98;
      }
      auStack_828[0] = 0x1010000;
      puStack_820 = &uStack_5e0;
      uStack_818 = 0;
      puStack_840 = (undefined8 *)CONCAT44(puStack_840._4_4_,0x2010000);
      puStack_838 = (undefined8 *)&uStack_640;
      uStack_830 = 0;
      puStack_858 = (undefined8 *)CONCAT44(puStack_858._4_4_,0x2010000);
      puStack_850 = (undefined8 *)auStack_6a0;
      uStack_848 = 0;
      uStack_7d0 = (ulong)&uStack_810 | 8;
      puStack_808 = (uint *)CONCAT44(uStack_574,uStack_578);
      uStack_810 = (long *)CONCAT44(iStack_57c,uStack_580);
      uStack_7f8 = CONCAT44(uStack_564,uStack_568);
      uStack_800 = CONCAT44(uStack_56c,uStack_570);
      uStack_7e8 = CONCAT44(uStack_554,uStack_558);
      uStack_7f0 = CONCAT44(uStack_55c,uStack_560);
      uStack_7e0 = CONCAT44(uStack_54c,uStack_550);
      uStack_7d8 = uStack_548;
      uStack_7c0 = 0;
      uStack_7b8 = 0;
      if (uStack_548 != 0) {
        piVar39 = (int *)(uStack_548 + 0x14);
        do {
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = *piVar39 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puStack_7c8 = &uStack_7c0;
      if (iStack_57c < 3) {
        uStack_7c0 = *puStack_538;
        uStack_7b8 = puStack_538[1];
      }
      else {
        uStack_810 = (long *)(ulong)uStack_580;
        func_0x000109a84868(&uStack_810,&uStack_580);
      }
      if ((auStack_828[0] & 0x1f0000) == 0x10000) {
        uStack_350 = (ulong)&uStack_390 | 8;
        puStack_388 = (uint *)puStack_820[1];
        uStack_390 = *puStack_820;
        uStack_378 = puStack_820[3];
        uStack_380 = puStack_820[2];
        uStack_368 = puStack_820[5];
        uStack_370 = puStack_820[4];
        uStack_358 = puStack_820[7];
        uStack_360 = puStack_820[6];
        puStack_348 = &uStack_340;
        uStack_338 = 0;
        uStack_340 = 0;
        if (puStack_820[7] != 0) {
          piVar39 = (int *)(puStack_820[7] + 0x14);
          do {
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
            if (bVar16) {
              *piVar39 = *piVar39 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(int *)((long)puStack_820 + 4) < 3) {
          uStack_340 = *(undefined8 *)puStack_820[9];
          uStack_338 = ((undefined8 *)puStack_820[9])[1];
        }
        else {
          uStack_390 = uStack_390 & 0xffffffff;
          func_0x000109a84868(&uStack_390);
        }
      }
      else {
        FUN_109a8a180(&uStack_390,auStack_828,0xffffffff);
      }
      uStack_3f0 = 0x42ff0000;
      uStack_3e8._4_4_ = 0;
      uStack_3e0 = 0;
      iStack_3ec = 0;
      uStack_3e8._0_4_ = 0;
      uVar19 = (ulong)&uStack_3f0 | 8;
      uStack_3d4 = 0;
      uStack_3d0 = 0;
      uStack_3dc = 0;
      uStack_3d8 = 0;
      uStack_3c4 = 0;
      uStack_3cc = 0;
      uStack_3c8 = 0;
      lStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_450 = 0x42ff0000;
      puStack_410 = &uStack_448;
      uStack_448._4_4_ = 0;
      uStack_440 = 0;
      iStack_44c = 0;
      uStack_448._0_4_ = 0;
      uStack_434 = 0;
      uStack_430._0_4_ = 0;
      uStack_43c = 0;
      uStack_438 = 0;
      uStack_428._4_4_ = 0;
      uStack_430._4_4_ = 0;
      uStack_428._0_4_ = 0;
      lStack_418 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_320 = 3;
      iStack_31c = 3;
      puStack_408 = &uStack_400;
      uStack_3b0 = uVar19;
      puStack_3a8 = &uStack_3a0;
      FUN_109a83fd0(&uStack_450,2,&uStack_320,5);
      uStack_320 = 0x42ff0000;
      uStack_2e0 = (ulong)&uStack_320 | 8;
      uStack_318._4_4_ = 0;
      uStack_310 = 0;
      iStack_31c = 0;
      uStack_318._0_4_ = 0;
      uStack_304 = 0;
      uStack_300 = 0;
      uStack_30c = 0;
      uStack_308 = 0;
      uStack_2f4 = 0;
      uStack_2fc = 0;
      uStack_2f8 = 0;
      lStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_330 = CONCAT44(1,uVar38);
      puStack_2d8 = &uStack_2d0;
      FUN_109a83fd0(&uStack_320,2,&uStack_330,0);
      if (lStack_3b8 != 0) {
        piVar39 = (int *)(lStack_3b8 + 0x14);
        do {
          iVar17 = *piVar39;
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_3f0);
        }
      }
      if (0 < iStack_3ec) {
        lVar18 = 0;
        do {
          *(undefined4 *)(uStack_3b0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < iStack_3ec);
      }
      uStack_3e8._0_4_ = (undefined4)uStack_318;
      uStack_3e8._4_4_ = uStack_318._4_4_;
      uStack_3f0 = uStack_320;
      iStack_3ec = iStack_31c;
      uStack_3d8 = uStack_308;
      uStack_3d4 = uStack_304;
      uStack_3e0 = uStack_310;
      uStack_3dc = uStack_30c;
      uStack_3c8 = uStack_2f8;
      uStack_3c4 = uStack_2f4;
      uStack_3d0 = uStack_300;
      uStack_3cc = uStack_2fc;
      lStack_3b8 = lStack_2e8;
      uStack_3c0 = uStack_2f0;
      uStack_3bc = uStack_2ec;
      uVar30 = uStack_3b0;
      puVar10 = puStack_3a8;
      if ((puStack_3a8 != &uStack_3a0) &&
         (uVar30 = uVar19, puVar10 = &uStack_3a0, puStack_3a8 != (undefined8 *)0x0)) {
        _free(puStack_3a8[-1]);
      }
      puStack_3a8 = puVar10;
      uStack_3b0 = uVar30;
      puVar10 = puStack_2d8;
      if (iStack_31c < 3) {
        puVar22 = (undefined8 *)((ulong)&uStack_320 | 4);
        *puStack_3a8 = *puStack_2d8;
        puStack_3a8[1] = puVar10[1];
        uStack_320 = 0x42ff0000;
        puVar22[1] = 0;
        *puVar22 = 0;
        puVar22[3] = 0;
        puVar22[2] = 0;
        puVar22[5] = 0;
        puVar22[4] = 0;
        *(undefined8 *)((long)puVar22 + 0x34) = 0;
        *(undefined8 *)((long)puVar22 + 0x2c) = 0;
        if (puVar10 != &uStack_2d0) {
          _free(puVar10[-1]);
        }
      }
      else {
        puStack_3a8 = puStack_2d8;
        uStack_3b0 = uStack_2e0;
      }
      FUN_109ba2270(&uStack_320);
      uStack_330 = CONCAT44(iStack_31c,uStack_320);
      plStack_328 = (long *)CONCAT44(uStack_318._4_4_,(undefined4)uStack_318);
      if (uStack_330 != 0) {
        piVar39 = (int *)(uStack_330 + 8);
        do {
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = *piVar39 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (**(code **)(*plStack_328 + 0x20))(0x3fd6666666666666,plStack_328,puVar7);
      FUN_109b97440(&uStack_330);
      lStack_460 = CONCAT44(iStack_31c,uStack_320);
      plVar8 = (long *)CONCAT44(uStack_318._4_4_,(undefined4)uStack_318);
      if (lStack_460 != 0) {
        piVar39 = (int *)(lStack_460 + 8);
        do {
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = *piVar39 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_458 = plVar8;
      (**(code **)(*plVar8 + 0x38))
                ((float)dVar24,dVar31,0x3fd6666666666666,plVar8,uStack_800,uStack_380,
                 CONCAT44(uStack_3dc,uStack_3e0),puVar7,uVar15,uVar15,4,5);
      FUN_109b97440(&lStack_460);
      FUN_109a41858(0x3ff0000000000000,0,&uStack_450,&puStack_840,6);
      if (uVar38 != 0) {
        uVar19 = 0;
        do {
          *(bool *)(CONCAT44(uStack_3dc,uStack_3e0) + uVar19) =
               *(char *)(CONCAT44(uStack_3dc,uStack_3e0) + uVar19) != '\0';
          uVar19 = uVar19 + 1;
        } while (((ulong)puVar7 & 0xffffffff) != uVar19);
      }
      FUN_109a479a0(&uStack_3f0,&puStack_858);
      FUN_109b97440(&uStack_320);
      if (lStack_418 != 0) {
        piVar39 = (int *)(lStack_418 + 0x14);
        do {
          iVar17 = *piVar39;
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_450);
        }
      }
      lStack_418 = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_440 = 0;
      uStack_43c = 0;
      uStack_428._0_4_ = 0;
      uStack_428._4_4_ = 0;
      uStack_430._0_4_ = 0;
      uStack_430._4_4_ = 0;
      if (0 < iStack_44c) {
        lVar18 = 0;
        do {
          *(undefined4 *)((long)puStack_410 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < iStack_44c);
      }
      if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
        _free(puStack_408[-1]);
      }
      if (lStack_3b8 != 0) {
        piVar39 = (int *)(lStack_3b8 + 0x14);
        do {
          iVar17 = *piVar39;
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_3f0);
        }
      }
      lStack_3b8 = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3d0 = 0;
      uStack_3cc = 0;
      if (0 < iStack_3ec) {
        lVar18 = 0;
        do {
          *(undefined4 *)(uStack_3b0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < iStack_3ec);
      }
      if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
        _free(puStack_3a8[-1]);
      }
      if (uStack_358 != 0) {
        piVar39 = (int *)(uStack_358 + 0x14);
        do {
          iVar17 = *piVar39;
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_390);
        }
      }
      uStack_358 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      if (0 < uStack_390._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)(uStack_350 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_390._4_4_);
      }
      if (puStack_348 != &uStack_340 && puStack_348 != (undefined8 *)0x0) {
        _free(puStack_348[-1]);
      }
      if (uStack_7d8 != 0) {
        piVar39 = (int *)(uStack_7d8 + 0x14);
        do {
          iVar17 = *piVar39;
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_810);
        }
      }
      uStack_7d8 = 0;
      uStack_7f8 = 0;
      uStack_800 = 0;
      uStack_7e8 = 0;
      uStack_7f0 = 0;
      if (0 < uStack_810._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)(uStack_7d0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_810._4_4_);
      }
      if (puStack_7c8 != &uStack_7c0 && puStack_7c8 != (undefined8 *)0x0) {
        _free(puStack_7c8[-1]);
      }
      if ((int)plVar8 != 0) goto LAB_109b94bbc;
LAB_109b93e08:
      if (lStack_608 != 0) {
        piVar39 = (int *)(lStack_608 + 0x14);
        do {
          iVar17 = *piVar39;
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
          if (bVar16) {
            *piVar39 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_640);
        }
      }
      puVar11 = (undefined4 *)CONCAT44(uStack_5d8._4_4_,(undefined4)uStack_5d8);
      puVar13 = (ulong *)CONCAT44(uStack_318._4_4_,(undefined4)uStack_318);
      lStack_608 = 0;
      uVar42 = 0;
      uVar43 = 0;
      uStack_628 = 0;
      uStack_624 = 0;
      uStack_630 = 0;
      uStack_62c = 0;
      uStack_618 = 0;
      uStack_614 = 0;
      uStack_620 = 0;
      uStack_61c = 0;
      if (0 < iStack_63c) {
        lVar18 = 0;
        do {
          puStack_600[lVar18] = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < iStack_63c);
      }
      uVar44 = 0;
      uVar45 = 0;
    }
    *extraout_x8 = uStack_640;
    extraout_x8[1] = iStack_63c;
    *(ulong *)(extraout_x8 + 2) = CONCAT44(uStack_634,uStack_638);
    *(undefined8 *)(extraout_x8 + 6) = uVar43;
    *(undefined8 *)(extraout_x8 + 4) = uVar42;
    *(undefined8 *)(extraout_x8 + 10) = uVar45;
    *(undefined8 *)(extraout_x8 + 8) = uVar44;
    *(ulong *)(extraout_x8 + 0xc) = CONCAT44(uStack_60c,uStack_610);
    *(long *)(extraout_x8 + 0xe) = lStack_608;
    *(undefined8 *)(extraout_x8 + 0x14) = 0;
    *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
    *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
    *(undefined8 *)(extraout_x8 + 0x16) = 0;
    if (iStack_63c < 3) {
      *(undefined8 *)(extraout_x8 + 0x14) = *puStack_5f8;
      *(undefined8 *)(extraout_x8 + 0x16) = puStack_5f8[1];
    }
    else {
      *(undefined4 **)(extraout_x8 + 0x10) = puStack_600;
      *(undefined8 **)(extraout_x8 + 0x12) = puStack_5f8;
      puStack_600 = &uStack_638;
      puStack_5f8 = &uStack_5f0;
    }
    uStack_640 = 0x42ff0000;
    puVar33[1] = 0;
    *puVar33 = 0;
    puVar33[3] = 0;
    puVar33[2] = 0;
    puVar33[5] = 0;
    puVar33[4] = 0;
    *(undefined8 *)((long)puVar33 + 0x34) = 0;
    *(undefined8 *)((long)puVar33 + 0x2c) = 0;
    uStack_318 = puVar13;
    uStack_5d8 = puVar11;
    FUN_109b98b28(&plStack_6b0);
LAB_109b94c74:
    if (lStack_668 != 0) {
      piVar39 = (int *)(lStack_668 + 0x14);
      do {
        iVar17 = *piVar39;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(auStack_6a0);
      }
    }
    lStack_668 = 0;
    uStack_688 = 0;
    uStack_684 = 0;
    uStack_690 = 0;
    uStack_68c = 0;
    uStack_678 = 0;
    uStack_674 = 0;
    uStack_680 = 0;
    uStack_67c = 0;
    if (0 < (int)auStack_6a0._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(puStack_660 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)auStack_6a0._4_4_);
    }
    if (puStack_658 != &uStack_650 && puStack_658 != (undefined8 *)0x0) {
      _free(puStack_658[-1]);
    }
    if (lStack_608 != 0) {
      piVar39 = (int *)(lStack_608 + 0x14);
      do {
        iVar17 = *piVar39;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_640);
      }
    }
    lStack_608 = 0;
    uStack_628 = 0;
    uStack_624 = 0;
    uStack_630 = 0;
    uStack_62c = 0;
    uStack_618 = 0;
    uStack_614 = 0;
    uStack_620 = 0;
    uStack_61c = 0;
    if (0 < iStack_63c) {
      lVar18 = 0;
      do {
        puStack_600[lVar18] = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < iStack_63c);
    }
    if (puStack_5f8 != &uStack_5f0 && puStack_5f8 != (undefined8 *)0x0) {
      _free(puStack_5f8[-1]);
    }
    if (lStack_5a8 != 0) {
      piVar39 = (int *)(lStack_5a8 + 0x14);
      do {
        iVar17 = *piVar39;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_5e0);
      }
    }
    lStack_5a8 = 0;
    uStack_5c8 = 0;
    uStack_5c4 = 0;
    uStack_5d0 = 0;
    uStack_5cc = 0;
    uStack_5b8 = 0;
    uStack_5b4 = 0;
    uStack_5c0 = 0;
    uStack_5bc = 0;
    if (0 < uStack_5e0._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)((long)puStack_5a0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_5e0._4_4_);
    }
    if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
      _free(puStack_598[-1]);
    }
    if (uStack_548 != 0) {
      piVar39 = (int *)(uStack_548 + 0x14);
      do {
        iVar17 = *piVar39;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_580);
      }
    }
    uStack_548 = 0;
    uStack_568 = 0;
    uStack_564 = 0;
    uStack_570 = 0;
    uStack_56c = 0;
    uStack_558 = 0;
    uStack_554 = 0;
    uStack_560 = 0;
    uStack_55c = 0;
    if (0 < iStack_57c) {
      lVar18 = 0;
      do {
        *(undefined4 *)(uStack_540 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < iStack_57c);
    }
    if (puStack_538 != &uStack_530 && puStack_538 != (undefined8 *)0x0) {
      _free(puStack_538[-1]);
    }
    if (uStack_4e8 != 0) {
      piVar39 = (int *)(uStack_4e8 + 0x14);
      do {
        iVar17 = *piVar39;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_520);
      }
    }
    uStack_4e8 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    if (0 < uStack_520._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(uStack_4e0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_520._4_4_);
    }
    if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
      _free(puStack_4d8[-1]);
    }
    if (uStack_488 != 0) {
      piVar39 = (int *)(uStack_488 + 0x14);
      do {
        iVar17 = *piVar39;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar16) {
          *piVar39 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_4c0);
      }
    }
    uStack_488 = 0;
    dVar24 = 0.0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    if (0 < uStack_4c0._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(uStack_480 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_4c0._4_4_);
    }
    if (puStack_478 != &uStack_470 && puStack_478 != (undefined8 *)0x0) {
      _free(puStack_478[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
      return dVar24;
    }
    ___stack_chk_fail();
  }
  puVar11 = (undefined4 *)0x30;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  uStack_810 = (long *)(puVar11 + 1);
  puStack_808 = (uint *)0x28;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  *(undefined8 *)(puVar11 + 3) = 0x28726f746365566b;
  *(undefined8 *)(puVar11 + 1) = 0x636568632e637273;
  *(undefined8 *)(puVar11 + 7) = 0x566b636568632e74;
  *(undefined8 *)(puVar11 + 5) = 0x7364203d3d202932;
  *(undefined8 *)(puVar11 + 9) = 0x293228726f746365;
  FUN_109ac3188(0xffffff29,&uStack_810,&UNK_10f5a2888,&UNK_10f5a2897,0x172);
LAB_109b95110:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b95114);
  (*pcVar5)();
}



/* Entry: 109b93554; end: 109b953b7;  */

void FUN_109b93554(undefined4 *param_1,double param_2,undefined8 param_3,uint *param_4,uint *param_5
                  ,int param_6,long param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  ulong uVar5;
  code *pcVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int iVar23;
  undefined8 *puVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  uint auStack_608 [2];
  ulong *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  uint *puStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long *plStack_490;
  long *plStack_488;
  undefined1 auStack_480 [8];
  undefined1 auStack_478 [4];
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  long lStack_448;
  undefined1 *puStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  int iStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  long lStack_3e8;
  undefined4 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  uint uStack_360;
  int iStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  ulong uStack_328;
  ulong uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long *plStack_238;
  uint uStack_230;
  int iStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint uStack_1d0;
  int iStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long lStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  uint *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  uint uStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_4 + 2);
    uStack_260 = (ulong)&uStack_2a0 | 8;
    uStack_298 = puVar13[1];
    uStack_2a0 = *puVar13;
    uStack_288 = puVar13[3];
    uStack_290 = puVar13[2];
    uStack_278 = puVar13[5];
    uStack_280 = puVar13[4];
    uStack_268 = puVar13[7];
    uStack_270 = puVar13[6];
    puStack_258 = &uStack_250;
    uStack_248 = 0;
    uStack_250 = 0;
    if (puVar13[7] != 0) {
      piVar26 = (int *)(puVar13[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = *piVar26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_250 = *(undefined8 *)puVar13[9];
      uStack_248 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_2a0 = uStack_2a0 & 0xffffffff;
      func_0x000109a84868(&uStack_2a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2a0,param_4,0xffffffff);
  }
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_5 + 2);
    uStack_2c0 = (ulong)&uStack_300 | 8;
    uStack_2f8 = puVar13[1];
    uStack_300 = *puVar13;
    uStack_2e8 = puVar13[3];
    uStack_2f0 = puVar13[2];
    uStack_2d8 = puVar13[5];
    uStack_2e0 = puVar13[4];
    uStack_2c8 = puVar13[7];
    uStack_2d0 = puVar13[6];
    puStack_2b8 = &uStack_2b0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    if (puVar13[7] != 0) {
      piVar26 = (int *)(puVar13[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = *piVar26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_2b0 = *(undefined8 *)puVar13[9];
      uStack_2a8 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_300 = uStack_300 & 0xffffffff;
      func_0x000109a84868(&uStack_300);
    }
  }
  else {
    FUN_109a8a180(&uStack_300,param_5,0xffffffff);
  }
  uStack_360 = 0x42ff0000;
  uStack_354 = 0;
  uStack_350 = 0;
  iStack_35c = 0;
  uStack_358 = 0;
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_34c = 0;
  uStack_348 = 0;
  uStack_334 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_320 = (ulong)&uStack_360 | 8;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_3c0._0_4_ = 0x42ff0000;
  puStack_380 = &uStack_3b8;
  uStack_3b8._4_4_ = 0;
  uStack_3b0 = 0;
  uStack_3c0._4_4_ = 0;
  uStack_3b8._0_4_ = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  uStack_394 = 0;
  uStack_39c = 0;
  uStack_398 = 0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_420 = 0x42ff0000;
  puVar24 = (undefined8 *)((ulong)&uStack_420 | 4);
  uStack_414 = 0;
  uStack_410 = 0;
  iStack_41c = 0;
  uStack_418 = 0;
  uStack_404 = 0;
  uStack_400 = 0;
  uStack_40c = 0;
  uStack_408 = 0;
  uStack_3f4 = 0;
  uStack_3fc = 0;
  uStack_3f8 = 0;
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  auStack_480._0_4_ = 0x42ff0000;
  puStack_440 = auStack_478;
  uStack_474 = 0;
  uStack_470 = 0;
  stack0xfffffffffffffb84 = 0;
  uStack_464 = 0;
  uStack_460 = 0;
  uStack_46c = 0;
  uStack_468 = 0;
  uStack_454 = 0;
  uStack_45c = 0;
  uStack_458 = 0;
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  bVar19 = true;
  uStack_428 = 0;
  uStack_430 = 0;
  bVar14 = false;
  puStack_438 = &uStack_430;
  puStack_3e0 = &uStack_418;
  puStack_3d8 = &uStack_3d0;
  puStack_378 = &uStack_370;
  puStack_318 = &uStack_310;
  do {
    puVar8 = &uStack_360;
    puVar4 = (uint *)&uStack_2a0;
    if (!bVar19) {
      puVar8 = (uint *)&uStack_3c0;
      puVar4 = (uint *)&uStack_300;
    }
    puVar7 = puVar4;
    FUN_109a89cd4(puVar4,2,0xffffffff,0);
    if ((int)puVar7 < 0) {
      puVar7 = puVar4;
      FUN_109a89cd4(puVar4,3,0xffffffff,0);
      if ((int)puVar7 < 0) {
        puVar12 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        uStack_5f0 = (long *)(puVar12 + 1);
        puStack_5e8 = (uint *)0x2e;
        *(undefined1 *)((long)puVar12 + 0x32) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x7379617272612074;
        *(undefined8 *)(puVar12 + 1) = 0x75706e6920656854;
        *(undefined8 *)(puVar12 + 7) = 0x726f204432206562;
        *(undefined8 *)(puVar12 + 5) = 0x20646c756f687320;
        *(undefined8 *)((long)puVar12 + 0x2a) = 0x7374657320746e69;
        *(undefined8 *)((long)puVar12 + 0x22) = 0x6f7020443320726f;
        FUN_109ac3188(0xfffffffb,&uStack_5f0,&UNK_10f5a2888,&UNK_10f5a2897,0x16a);
        goto LAB_109b95110;
      }
      if ((int)puVar7 == 0) {
        *param_1 = 0x42ff0000;
        *(undefined8 *)(param_1 + 3) = 0;
        *(undefined8 *)(param_1 + 1) = 0;
        *(undefined8 *)(param_1 + 7) = 0;
        *(undefined8 *)(param_1 + 5) = 0;
        *(undefined8 *)(param_1 + 0xb) = 0;
        *(undefined8 *)(param_1 + 9) = 0;
        *(undefined8 *)(param_1 + 0xe) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
        *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
        *(undefined8 *)(param_1 + 0x16) = 0;
        goto LAB_109b94c74;
      }
      uStack_5e0 = 0;
      uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x1010000);
      uStack_170 = CONCAT44(uStack_170._4_4_,0x2010000);
      uStack_160 = 0;
      puStack_5e8 = puVar4;
      puStack_168 = puVar4;
      FUN_109b953b8(&uStack_5f0,&uStack_170);
    }
    FUN_109a890bc(&uStack_5f0,puVar4,2,puVar7);
    uStack_170 = CONCAT44(uStack_170._4_4_,0x2010000);
    uStack_160 = 0;
    puStack_168 = puVar8;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_5f0,&uStack_170,5);
    if (uStack_5b8 != 0) {
      piVar26 = (int *)(uStack_5b8 + 0x14);
      do {
        iVar23 = *piVar26;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar19) {
          *piVar26 = iVar23 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_5f0);
      }
    }
    uStack_5b8 = 0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    if (0 < uStack_5f0._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_5b0 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_5f0._4_4_);
    }
    if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
      _free(puStack_5a8[-1]);
    }
    bVar19 = false;
    bVar3 = !bVar14;
    bVar14 = true;
  } while (bVar3);
  puVar8 = &uStack_360;
  FUN_109a89cd4(puVar8,2,0xffffffff,1);
  puVar11 = &uStack_3c0;
  FUN_109a89cd4(puVar11,2,0xffffffff,1);
  if ((int)puVar8 == (int)puVar11) {
    if (param_2 <= 0.0) {
      param_2 = 3.0;
    }
    plVar9 = (long *)0x8;
    __Znwm();
    *plVar9 = (long)&PTR_FUN_110b29938;
    plVar10 = (long *)0x20;
    __Znwm();
    plVar16 = plVar10 + 1;
    *(int *)plVar16 = 1;
    *plVar10 = (long)&PTR_DAT_110b29988;
    plVar10[2] = (long)plVar9;
    do {
      cVar2 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar14) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar23 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar14) {
        *(int *)plVar16 = iVar23;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_490 = plVar10;
    plStack_488 = plVar9;
    if (iVar23 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    uVar25 = (uint)puVar7;
    if ((param_6 == 0) || (uVar25 == 4)) {
      FUN_109a82ac8(&uStack_5f0,puVar7,1,0);
      (**(code **)(*uStack_5f0 + 0x18))(uStack_5f0,&uStack_5f0,auStack_480,0xffffffff);
      FUN_10918eb6c(&uStack_5f0);
      uStack_5e0 = 0;
      uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x1010000);
      puStack_5e8 = &uStack_360;
      uStack_160 = 0;
      uStack_170 = CONCAT44(uStack_170._4_4_,0x1010000);
      puStack_168 = (uint *)&uStack_3c0;
      uStack_1d0 = 0x2010000;
      uStack_1c8 = &uStack_420;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      plVar9 = plStack_488;
      (**(code **)(*plStack_488 + 0x10))(plStack_488,&uStack_5f0,&uStack_170,&uStack_1d0);
      uVar28 = (uint)(0 < (int)plVar9);
LAB_109b93ca4:
      if (((param_6 == 0x10) || (uVar25 < 5)) || (uVar28 == 0)) {
LAB_109b93e04:
        if (uVar28 == 0) goto LAB_109b93e08;
      }
      else {
        uVar22 = 0;
        iVar23 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_46c,uStack_470) + uVar22) != '\0') {
            if ((long)iVar23 < (long)uVar22) {
              *(undefined8 *)(CONCAT44(uStack_34c,uStack_350) + (long)iVar23 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_34c,uStack_350) + uVar22 * 8);
            }
            iVar23 = iVar23 + 1;
          }
          uVar22 = uVar22 + 1;
        } while (((ulong)puVar7 & 0xffffffff) != uVar22);
        uVar22 = 0;
        uVar25 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_46c,uStack_470) + uVar22) != '\0') {
            if ((long)(int)uVar25 < (long)uVar22) {
              *(undefined8 *)(CONCAT44(uStack_3ac,uStack_3b0) + (long)(int)uVar25 * 8) =
                   *(undefined8 *)(CONCAT44(uStack_3ac,uStack_3b0) + uVar22 * 8);
            }
            uVar25 = uVar25 + 1;
          }
          uVar22 = uVar22 + 1;
        } while (((ulong)puVar7 & 0xffffffff) != uVar22);
        if ((int)uVar25 < 1) goto LAB_109b93e04;
        uStack_5f0 = (long *)((ulong)uVar25 << 0x20);
        uStack_1d0 = 0x80000000;
        iStack_1cc = 0x7fffffff;
        FUN_109a84930(&uStack_170,&uStack_360,&uStack_5f0,&uStack_1d0);
        uStack_5f0 = (long *)((ulong)uVar25 << 0x20);
        uStack_230 = 0x80000000;
        iStack_22c = 0x7fffffff;
        FUN_109a84930(&uStack_1d0,&uStack_3c0,&uStack_5f0,&uStack_230);
        if (uStack_138 != 0) {
          piVar26 = (int *)(uStack_138 + 0x14);
          do {
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = *piVar26 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (uStack_328 != 0) {
          piVar26 = (int *)(uStack_328 + 0x14);
          do {
            iVar23 = *piVar26;
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = iVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_360);
          }
        }
        puVar11 = puStack_128;
        uStack_328 = 0;
        uStack_348 = 0;
        uStack_344 = 0;
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_338 = 0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_33c = 0;
        if (iStack_35c < 1) {
LAB_109b93e7c:
          uStack_360 = (uint)uStack_170;
          if (2 < uStack_170._4_4_) goto LAB_109b93eb0;
          iStack_35c = uStack_170._4_4_;
          uStack_358 = SUB84(puStack_168,0);
          uStack_354 = (undefined4)((ulong)puStack_168 >> 0x20);
          *puStack_318 = *puStack_128;
          puStack_318[1] = puVar11[1];
        }
        else {
          lVar15 = 0;
          do {
            *(undefined4 *)(uStack_320 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < iStack_35c);
          if (iStack_35c < 3) goto LAB_109b93e7c;
LAB_109b93eb0:
          uStack_360 = (uint)uStack_170;
          func_0x000109a84868(&uStack_360,&uStack_170);
        }
        uStack_348 = (undefined4)uStack_158;
        uStack_344 = (undefined4)(uStack_158 >> 0x20);
        uStack_350 = (undefined4)uStack_160;
        uStack_34c = (undefined4)(uStack_160 >> 0x20);
        uStack_338 = (undefined4)uStack_148;
        uStack_334 = (undefined4)(uStack_148 >> 0x20);
        uStack_340 = (undefined4)uStack_150;
        uStack_33c = (undefined4)(uStack_150 >> 0x20);
        uStack_328 = uStack_138;
        uStack_330 = (undefined4)uStack_140;
        uStack_32c = (undefined4)(uStack_140 >> 0x20);
        if (lStack_198 != 0) {
          piVar26 = (int *)(lStack_198 + 0x14);
          do {
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = *piVar26 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar12 = uStack_1c8;
        if (lStack_388 != 0) {
          piVar26 = (int *)(lStack_388 + 0x14);
          do {
            iVar23 = *piVar26;
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = iVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_3c0);
            puVar12 = uStack_1c8;
          }
        }
        puVar11 = puStack_188;
        lStack_388 = 0;
        uStack_3a8 = 0;
        uStack_3a4 = 0;
        uStack_3b0 = 0;
        uStack_3ac = 0;
        uStack_398 = 0;
        uStack_394 = 0;
        uStack_3a0 = 0;
        uStack_39c = 0;
        uStack_1c8 = puVar12;
        if (uStack_3c0._4_4_ < 1) {
LAB_109b93f60:
          uStack_3c0._0_4_ = uStack_1d0;
          if (2 < iStack_1cc) goto LAB_109b93f94;
          uStack_3c0._4_4_ = iStack_1cc;
          *puStack_378 = *puStack_188;
          puStack_378[1] = puVar11[1];
        }
        else {
          lVar15 = 0;
          do {
            *(undefined4 *)((long)puStack_380 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_3c0._4_4_);
          if (uStack_3c0._4_4_ < 3) goto LAB_109b93f60;
LAB_109b93f94:
          uStack_3c0._0_4_ = uStack_1d0;
          func_0x000109a84868(&uStack_3c0,&uStack_1d0);
          puVar12 = (undefined4 *)CONCAT44(uStack_3b8._4_4_,(undefined4)uStack_3b8);
        }
        uStack_3a8 = uStack_1b8;
        uStack_3a4 = uStack_1b4;
        uStack_3b0 = uStack_1c0;
        uStack_3ac = uStack_1bc;
        uStack_398 = uStack_1a8;
        uStack_394 = uStack_1a4;
        uStack_3a0 = uStack_1b0;
        uStack_39c = uStack_1ac;
        lStack_388 = lStack_198;
        uStack_390 = uStack_1a0;
        uStack_38c = uStack_19c;
        uStack_3b8 = puVar12;
        if ((param_6 == 8) || (param_6 == 4)) {
          uStack_5e0 = 0;
          uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x1010000);
          puStack_5e8 = &uStack_360;
          uStack_220 = 0;
          uStack_21c = 0;
          uStack_230 = 0x1010000;
          uStack_228 = &uStack_3c0;
          uStack_100 = 0x2010000;
          uStack_f8 = (ulong *)&uStack_420;
          uStack_f0 = 0;
          uStack_ec = 0;
          (**(code **)(*plStack_488 + 0x10))(plStack_488,&uStack_5f0,&uStack_230,&uStack_100);
        }
        puStack_1f0 = (undefined8 *)((ulong)&uStack_230 | 8);
        uStack_228._0_4_ = 8;
        uStack_228._4_4_ = 1;
        uStack_230 = 0x42ff0006;
        iStack_22c = 2;
        uStack_220 = uStack_410;
        uStack_21c = uStack_40c;
        uStack_218 = uStack_410;
        uStack_214 = uStack_40c;
        uStack_208._0_4_ = 0;
        uStack_208._4_4_ = 0;
        uStack_210._0_4_ = 0;
        uStack_210._4_4_ = 0;
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1fc = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        puStack_1e8 = &uStack_1e0;
        if (CONCAT44(uStack_40c,uStack_410) == 0) {
          puVar12 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          uStack_5f0 = (long *)(puVar12 + 1);
          puStack_5e8 = (uint *)0x1c;
          *(undefined1 *)(puVar12 + 8) = 0;
          *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_5f0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109b95110;
        }
        uStack_230 = 0x42ff4006;
        uStack_1d8 = 8;
        uStack_1e0 = 8;
        uStack_208 = CONCAT44(uStack_40c,uStack_410) + 0x40;
        puVar11 = (undefined8 *)0xc8;
        uStack_210 = uStack_208;
        __Znwm();
        uStack_100 = 0x1010000;
        uStack_f8 = &uStack_3c0;
        uStack_f0 = 0;
        uStack_ec = 0;
        *(undefined4 *)(puVar11 + 1) = 0x42ff0000;
        *puVar11 = &PTR_FUN_110b299c8;
        piVar26 = (int *)((long)puVar11 + 0xc);
        *(undefined8 *)((long)puVar11 + 0x14) = 0;
        piVar26[0] = 0;
        piVar26[1] = 0;
        *(undefined8 *)((long)puVar11 + 0x24) = 0;
        *(undefined8 *)((long)puVar11 + 0x1c) = 0;
        *(undefined8 *)((long)puVar11 + 0x34) = 0;
        *(undefined8 *)((long)puVar11 + 0x2c) = 0;
        puVar11[8] = 0;
        puVar11[7] = 0;
        puVar17 = puVar11 + 0xb;
        *puVar17 = 0;
        puVar11[9] = puVar11 + 2;
        puVar11[10] = puVar17;
        puVar11[0xc] = 0;
        *(undefined4 *)(puVar11 + 0xd) = 0x42ff0000;
        piVar27 = (int *)((long)puVar11 + 0x6c);
        *(undefined8 *)((long)puVar11 + 0x74) = 0;
        piVar27[0] = 0;
        piVar27[1] = 0;
        *(undefined8 *)((long)puVar11 + 0x84) = 0;
        *(undefined8 *)((long)puVar11 + 0x7c) = 0;
        *(undefined8 *)((long)puVar11 + 0x94) = 0;
        *(undefined8 *)((long)puVar11 + 0x8c) = 0;
        puVar11[0x14] = 0;
        puVar11[0x13] = 0;
        puVar18 = puVar11 + 0x17;
        *puVar18 = 0;
        puVar11[0x15] = puVar11 + 0xe;
        puVar11[0x16] = puVar18;
        puVar11[0x18] = 0;
        uStack_5b0 = (ulong)&uStack_5f0 | 8;
        puStack_5e8 = (uint *)CONCAT44(uStack_354,uStack_358);
        uStack_5f0 = (long *)CONCAT44(iStack_35c,uStack_360);
        uStack_5d8 = CONCAT44(uStack_344,uStack_348);
        uStack_5e0 = CONCAT44(uStack_34c,uStack_350);
        uStack_5c8 = CONCAT44(uStack_334,uStack_338);
        uStack_5d0 = CONCAT44(uStack_33c,uStack_340);
        uStack_5c0 = CONCAT44(uStack_32c,uStack_330);
        uStack_5b8 = uStack_328;
        uStack_5a0 = 0;
        uStack_598 = 0;
        if (uStack_328 != 0) {
          piVar1 = (int *)(uStack_328 + 0x14);
          do {
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar14) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puStack_5a8 = &uStack_5a0;
        if (iStack_35c < 3) {
          uStack_5a0 = *puStack_318;
          uStack_598 = puStack_318[1];
        }
        else {
          uStack_5f0 = (long *)(ulong)uStack_360;
          func_0x000109a84868(&uStack_5f0,&uStack_360);
        }
        if (puVar11[8] != 0) {
          piVar1 = (int *)(puVar11[8] + 0x14);
          do {
            iVar23 = *piVar1;
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar14) {
              *piVar1 = iVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(puVar11 + 1);
          }
        }
        puVar11[8] = 0;
        puVar11[4] = 0;
        puVar11[3] = 0;
        puVar11[6] = 0;
        puVar11[5] = 0;
        if (0 < *(int *)((long)puVar11 + 0xc)) {
          lVar15 = 0;
          lVar20 = puVar11[9];
          do {
            *(undefined4 *)(lVar20 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < *piVar26);
        }
        puVar11[2] = puStack_5e8;
        puVar11[1] = uStack_5f0;
        puVar11[4] = uStack_5d8;
        puVar11[3] = uStack_5e0;
        puVar11[6] = uStack_5c8;
        puVar11[5] = uStack_5d0;
        puVar11[8] = uStack_5b8;
        puVar11[7] = uStack_5c0;
        puVar21 = (undefined8 *)puVar11[10];
        iVar23 = uStack_5f0._4_4_;
        if (puVar21 != puVar17) {
          if (puVar21 != (undefined8 *)0x0) {
            _free(puVar21[-1]);
          }
          puVar11[9] = puVar11 + 2;
          puVar11[10] = puVar17;
          puVar21 = puVar17;
          iVar23 = uStack_5f0._4_4_;
        }
        if (iVar23 < 3) {
          puVar17 = (undefined8 *)((ulong)&uStack_5f0 | 4);
          *puVar21 = *puStack_5a8;
          puVar21[1] = puStack_5a8[1];
          uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x42ff0000);
          puVar17[1] = 0;
          *puVar17 = 0;
          puVar17[3] = 0;
          puVar17[2] = 0;
          puVar17[5] = 0;
          puVar17[4] = 0;
          *(undefined8 *)((long)puVar17 + 0x34) = 0;
          *(undefined8 *)((long)puVar17 + 0x2c) = 0;
          if (puStack_5a8 != &uStack_5a0) {
            _free(puStack_5a8[-1]);
          }
        }
        else {
          puVar11[9] = uStack_5b0;
          puVar11[10] = puStack_5a8;
        }
        if ((uStack_100 & 0x1f0000) == 0x10000) {
          uStack_5b0 = (ulong)&uStack_5f0 | 8;
          puStack_5e8 = (uint *)uStack_f8[1];
          uStack_5f0 = (long *)*uStack_f8;
          uStack_5d8 = uStack_f8[3];
          uStack_5e0 = uStack_f8[2];
          uStack_5c8 = uStack_f8[5];
          uStack_5d0 = uStack_f8[4];
          uStack_5b8 = uStack_f8[7];
          uStack_5c0 = uStack_f8[6];
          puStack_5a8 = &uStack_5a0;
          uStack_5a0 = 0;
          uStack_598 = 0;
          if (uStack_f8[7] != 0) {
            piVar26 = (int *)(uStack_f8[7] + 0x14);
            do {
              cVar2 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
              if (bVar14) {
                *piVar26 = *piVar26 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)uStack_f8 + 4) < 3) {
            uStack_5a0 = *(undefined8 *)uStack_f8[9];
            uStack_598 = ((undefined8 *)uStack_f8[9])[1];
          }
          else {
            uStack_5f0 = (long *)((ulong)uStack_5f0 & 0xffffffff);
            func_0x000109a84868(&uStack_5f0);
          }
        }
        else {
          FUN_109a8a180(&uStack_5f0,&uStack_100,0xffffffff);
        }
        if (puVar11[0x14] != 0) {
          piVar26 = (int *)(puVar11[0x14] + 0x14);
          do {
            iVar23 = *piVar26;
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = iVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(puVar11 + 0xd);
          }
        }
        puVar11[0x14] = 0;
        puVar11[0x10] = 0;
        puVar11[0xf] = 0;
        puVar11[0x12] = 0;
        puVar11[0x11] = 0;
        if (0 < *(int *)((long)puVar11 + 0x6c)) {
          lVar15 = 0;
          lVar20 = puVar11[0x15];
          do {
            *(undefined4 *)(lVar20 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < *piVar27);
        }
        puVar11[0xe] = puStack_5e8;
        puVar11[0xd] = uStack_5f0;
        puVar11[0x10] = uStack_5d8;
        puVar11[0xf] = uStack_5e0;
        puVar11[0x12] = uStack_5c8;
        puVar11[0x11] = uStack_5d0;
        puVar11[0x14] = uStack_5b8;
        puVar11[0x13] = uStack_5c0;
        puVar17 = (undefined8 *)puVar11[0x16];
        iVar23 = uStack_5f0._4_4_;
        if (puVar17 != puVar18) {
          if (puVar17 != (undefined8 *)0x0) {
            _free(puVar17[-1]);
          }
          puVar11[0x15] = puVar11 + 0xe;
          puVar11[0x16] = puVar18;
          puVar17 = puVar18;
          iVar23 = uStack_5f0._4_4_;
        }
        if (iVar23 < 3) {
          puVar18 = (undefined8 *)((ulong)&uStack_5f0 | 4);
          *puVar17 = *puStack_5a8;
          puVar17[1] = puStack_5a8[1];
          uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x42ff0000);
          puVar18[1] = 0;
          *puVar18 = 0;
          puVar18[3] = 0;
          puVar18[2] = 0;
          puVar18[5] = 0;
          puVar18[4] = 0;
          *(undefined8 *)((long)puVar18 + 0x34) = 0;
          *(undefined8 *)((long)puVar18 + 0x2c) = 0;
          if (puStack_5a8 != &uStack_5a0) {
            _free(puStack_5a8[-1]);
          }
        }
        else {
          puVar11[0x15] = uStack_5b0;
          puVar11[0x16] = puStack_5a8;
        }
        puVar18 = (undefined8 *)0x20;
        __Znwm();
        piVar26 = (int *)(puVar18 + 1);
        *piVar26 = 1;
        *puVar18 = &PTR_FUN_110b29a18;
        puVar18[2] = puVar11;
        do {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = *piVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puStack_638 = puVar18;
        puStack_630 = puVar11;
        puStack_620 = puVar18;
        puStack_618 = puVar11;
        func_0x000109b9b81c(auStack_608,&puStack_620,10);
        uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x3010000);
        puStack_5e8 = &uStack_230;
        uStack_5e0 = 0;
        (**(code **)(*puStack_600 + 0x48))(puStack_600,&uStack_5f0);
        FUN_109b99504(auStack_608);
        FUN_109b994b0(&puStack_620);
        FUN_109b9945c(&puStack_638);
        if (lStack_1f8 != 0) {
          piVar26 = (int *)(lStack_1f8 + 0x14);
          do {
            iVar23 = *piVar26;
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = iVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_230);
          }
        }
        lStack_1f8 = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        uStack_220 = 0;
        uStack_21c = 0;
        uStack_208._0_4_ = 0;
        uStack_208._4_4_ = 0;
        uStack_210._0_4_ = 0;
        uStack_210._4_4_ = 0;
        if (0 < iStack_22c) {
          lVar15 = 0;
          do {
            *(undefined4 *)((long)puStack_1f0 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < iStack_22c);
        }
        if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
          _free(puStack_1e8[-1]);
        }
        if (lStack_198 != 0) {
          piVar26 = (int *)(lStack_198 + 0x14);
          do {
            iVar23 = *piVar26;
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = iVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_1d0);
          }
        }
        lStack_198 = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        if (0 < iStack_1cc) {
          lVar15 = 0;
          do {
            *(undefined4 *)(uStack_190 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < iStack_1cc);
        }
        if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
          _free(puStack_188[-1]);
        }
        if (uStack_138 != 0) {
          piVar26 = (int *)(uStack_138 + 0x14);
          do {
            iVar23 = *piVar26;
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = iVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_170);
          }
        }
        uStack_138 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        if (0 < uStack_170._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)(uStack_130 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_170._4_4_);
        }
        if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
          _free(puStack_128[-1]);
        }
      }
LAB_109b94bbc:
      if ((*(byte *)(param_7 + 2) & 0x1f) != 0) {
        FUN_109a479a0(auStack_480);
      }
      uVar30 = CONCAT44(uStack_404,uStack_408);
      uVar29 = CONCAT44(uStack_40c,uStack_410);
      uVar32 = CONCAT44(uStack_3f4,uStack_3f8);
      uVar31 = CONCAT44(uStack_3fc,uStack_400);
      puVar13 = uStack_f8;
      puVar12 = uStack_3b8;
    }
    else {
      if (param_6 == 4) {
        func_0x000109b9ec90(&uStack_100,param_3,&plStack_490,4,param_8);
        plVar9 = (long *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
        uStack_5e0 = 0;
        uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x1010000);
        puStack_5e8 = &uStack_360;
        uStack_160 = 0;
        uStack_170 = CONCAT44(uStack_170._4_4_,0x1010000);
        puStack_168 = (uint *)&uStack_3c0;
        uStack_1d0 = 0x2010000;
        uStack_1c8 = &uStack_420;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_230 = 0x2010000;
        uStack_228 = (undefined8 *)auStack_480;
        uStack_220 = 0;
        uStack_21c = 0;
        (**(code **)(*plVar9 + 0x48))(plVar9,&uStack_5f0,&uStack_170,&uStack_1d0,&uStack_230);
        uVar28 = (uint)plVar9;
LAB_109b93c98:
        FUN_109b98b7c(&uStack_100);
        goto LAB_109b93ca4;
      }
      if (param_6 != 0x10) {
        if (param_6 != 8) {
          puVar12 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          uStack_5f0 = (long *)(puVar12 + 1);
          puStack_5e8 = (uint *)0x19;
          *(undefined1 *)((long)puVar12 + 0x1d) = 0;
          *(undefined8 *)(puVar12 + 3) = 0x6974616d69747365;
          *(undefined8 *)(puVar12 + 1) = 0x206e776f6e6b6e55;
          *(undefined8 *)((long)puVar12 + 0x15) = 0x646f6874656d206e;
          *(undefined8 *)((long)puVar12 + 0xd) = 0x6f6974616d697473;
          FUN_109ac3188(0xfffffffb,&uStack_5f0,&UNK_10f5a2888,&UNK_10f5a2897,0x185);
          goto LAB_109b95110;
        }
        FUN_109b9ebd8(&uStack_100,param_2,param_3,&plStack_490,4,param_8);
        plVar9 = (long *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
        uStack_5e0 = 0;
        uStack_5f0 = (long *)CONCAT44(uStack_5f0._4_4_,0x1010000);
        puStack_5e8 = &uStack_360;
        uStack_160 = 0;
        uStack_170 = CONCAT44(uStack_170._4_4_,0x1010000);
        puStack_168 = (uint *)&uStack_3c0;
        uStack_1d0 = 0x2010000;
        uStack_1c8 = &uStack_420;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_230 = 0x2010000;
        uStack_228 = (undefined8 *)auStack_480;
        uStack_220 = 0;
        uStack_21c = 0;
        (**(code **)(*plVar9 + 0x48))(plVar9,&uStack_5f0,&uStack_170,&uStack_1d0,&uStack_230);
        uVar28 = (uint)plVar9;
        goto LAB_109b93c98;
      }
      auStack_608[0] = 0x1010000;
      puStack_600 = &uStack_3c0;
      uStack_5f8 = 0;
      puStack_620 = (undefined8 *)CONCAT44(puStack_620._4_4_,0x2010000);
      puStack_618 = (undefined8 *)&uStack_420;
      uStack_610 = 0;
      puStack_638 = (undefined8 *)CONCAT44(puStack_638._4_4_,0x2010000);
      puStack_630 = (undefined8 *)auStack_480;
      uStack_628 = 0;
      uStack_5b0 = (ulong)&uStack_5f0 | 8;
      puStack_5e8 = (uint *)CONCAT44(uStack_354,uStack_358);
      uStack_5f0 = (long *)CONCAT44(iStack_35c,uStack_360);
      uStack_5d8 = CONCAT44(uStack_344,uStack_348);
      uStack_5e0 = CONCAT44(uStack_34c,uStack_350);
      uStack_5c8 = CONCAT44(uStack_334,uStack_338);
      uStack_5d0 = CONCAT44(uStack_33c,uStack_340);
      uStack_5c0 = CONCAT44(uStack_32c,uStack_330);
      uStack_5b8 = uStack_328;
      uStack_5a0 = 0;
      uStack_598 = 0;
      if (uStack_328 != 0) {
        piVar26 = (int *)(uStack_328 + 0x14);
        do {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = *piVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puStack_5a8 = &uStack_5a0;
      if (iStack_35c < 3) {
        uStack_5a0 = *puStack_318;
        uStack_598 = puStack_318[1];
      }
      else {
        uStack_5f0 = (long *)(ulong)uStack_360;
        func_0x000109a84868(&uStack_5f0,&uStack_360);
      }
      if ((auStack_608[0] & 0x1f0000) == 0x10000) {
        uStack_130 = (ulong)&uStack_170 | 8;
        puStack_168 = (uint *)puStack_600[1];
        uStack_170 = *puStack_600;
        uStack_158 = puStack_600[3];
        uStack_160 = puStack_600[2];
        uStack_148 = puStack_600[5];
        uStack_150 = puStack_600[4];
        uStack_138 = puStack_600[7];
        uStack_140 = puStack_600[6];
        puStack_128 = &uStack_120;
        uStack_118 = 0;
        uStack_120 = 0;
        if (puStack_600[7] != 0) {
          piVar26 = (int *)(puStack_600[7] + 0x14);
          do {
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar14) {
              *piVar26 = *piVar26 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(int *)((long)puStack_600 + 4) < 3) {
          uStack_120 = *(undefined8 *)puStack_600[9];
          uStack_118 = ((undefined8 *)puStack_600[9])[1];
        }
        else {
          uStack_170 = uStack_170 & 0xffffffff;
          func_0x000109a84868(&uStack_170);
        }
      }
      else {
        FUN_109a8a180(&uStack_170,auStack_608,0xffffffff);
      }
      uStack_1d0 = 0x42ff0000;
      uStack_1c8._4_4_ = 0;
      uStack_1c0 = 0;
      iStack_1cc = 0;
      uStack_1c8._0_4_ = 0;
      uVar22 = (ulong)&uStack_1d0 | 8;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1a4 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      lStack_198 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_230 = 0x42ff0000;
      puStack_1f0 = &uStack_228;
      uStack_228._4_4_ = 0;
      uStack_220 = 0;
      iStack_22c = 0;
      uStack_228._0_4_ = 0;
      uStack_214 = 0;
      uStack_210._0_4_ = 0;
      uStack_21c = 0;
      uStack_218 = 0;
      uStack_208._4_4_ = 0;
      uStack_210._4_4_ = 0;
      uStack_208._0_4_ = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_100 = 3;
      iStack_fc = 3;
      puStack_1e8 = &uStack_1e0;
      uStack_190 = uVar22;
      puStack_188 = &uStack_180;
      FUN_109a83fd0(&uStack_230,2,&uStack_100,5);
      uStack_100 = 0x42ff0000;
      uStack_c0 = (ulong)&uStack_100 | 8;
      uStack_f8._4_4_ = 0;
      uStack_f0 = 0;
      iStack_fc = 0;
      uStack_f8._0_4_ = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_d4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_110 = CONCAT44(1,uVar25);
      puStack_b8 = &uStack_b0;
      FUN_109a83fd0(&uStack_100,2,&uStack_110,0);
      if (lStack_198 != 0) {
        piVar26 = (int *)(lStack_198 + 0x14);
        do {
          iVar23 = *piVar26;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = iVar23 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_1d0);
        }
      }
      if (0 < iStack_1cc) {
        lVar15 = 0;
        do {
          *(undefined4 *)(uStack_190 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_1cc);
      }
      uStack_1c8._0_4_ = (undefined4)uStack_f8;
      uStack_1c8._4_4_ = uStack_f8._4_4_;
      uStack_1d0 = uStack_100;
      iStack_1cc = iStack_fc;
      uStack_1b8 = uStack_e8;
      uStack_1b4 = uStack_e4;
      uStack_1c0 = uStack_f0;
      uStack_1bc = uStack_ec;
      uStack_1a8 = uStack_d8;
      uStack_1a4 = uStack_d4;
      uStack_1b0 = uStack_e0;
      uStack_1ac = uStack_dc;
      lStack_198 = lStack_c8;
      uStack_1a0 = uStack_d0;
      uStack_19c = uStack_cc;
      uVar5 = uStack_190;
      puVar11 = puStack_188;
      if ((puStack_188 != &uStack_180) &&
         (uVar5 = uVar22, puVar11 = &uStack_180, puStack_188 != (undefined8 *)0x0)) {
        _free(puStack_188[-1]);
      }
      puStack_188 = puVar11;
      uStack_190 = uVar5;
      puVar11 = puStack_b8;
      if (iStack_fc < 3) {
        puVar18 = (undefined8 *)((ulong)&uStack_100 | 4);
        *puStack_188 = *puStack_b8;
        puStack_188[1] = puVar11[1];
        uStack_100 = 0x42ff0000;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        *(undefined8 *)((long)puVar18 + 0x34) = 0;
        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
        if (puVar11 != &uStack_b0) {
          _free(puVar11[-1]);
        }
      }
      else {
        puStack_188 = puStack_b8;
        uStack_190 = uStack_c0;
      }
      FUN_109ba2270(&uStack_100);
      uStack_110 = CONCAT44(iStack_fc,uStack_100);
      plStack_108 = (long *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
      if (uStack_110 != 0) {
        piVar26 = (int *)(uStack_110 + 8);
        do {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = *piVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plStack_108 + 0x20))(0x3fd6666666666666,plStack_108,puVar7);
      FUN_109b97440(&uStack_110);
      lStack_240 = CONCAT44(iStack_fc,uStack_100);
      plVar9 = (long *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
      if (lStack_240 != 0) {
        piVar26 = (int *)(lStack_240 + 8);
        do {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = *piVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_238 = plVar9;
      (**(code **)(*plVar9 + 0x38))
                ((float)param_2,param_3,0x3fd6666666666666,plVar9,uStack_5e0,uStack_160,
                 CONCAT44(uStack_1bc,uStack_1c0),puVar7,param_8,param_8,4,5);
      FUN_109b97440(&lStack_240);
      FUN_109a41858(0x3ff0000000000000,0,&uStack_230,&puStack_620,6);
      if (uVar25 != 0) {
        uVar22 = 0;
        do {
          *(bool *)(CONCAT44(uStack_1bc,uStack_1c0) + uVar22) =
               *(char *)(CONCAT44(uStack_1bc,uStack_1c0) + uVar22) != '\0';
          uVar22 = uVar22 + 1;
        } while (((ulong)puVar7 & 0xffffffff) != uVar22);
      }
      FUN_109a479a0(&uStack_1d0,&puStack_638);
      FUN_109b97440(&uStack_100);
      if (lStack_1f8 != 0) {
        piVar26 = (int *)(lStack_1f8 + 0x14);
        do {
          iVar23 = *piVar26;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = iVar23 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_230);
        }
      }
      lStack_1f8 = 0;
      uStack_218 = 0;
      uStack_214 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_208._0_4_ = 0;
      uStack_208._4_4_ = 0;
      uStack_210._0_4_ = 0;
      uStack_210._4_4_ = 0;
      if (0 < iStack_22c) {
        lVar15 = 0;
        do {
          *(undefined4 *)((long)puStack_1f0 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_22c);
      }
      if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
        _free(puStack_1e8[-1]);
      }
      if (lStack_198 != 0) {
        piVar26 = (int *)(lStack_198 + 0x14);
        do {
          iVar23 = *piVar26;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = iVar23 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_1d0);
        }
      }
      lStack_198 = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      if (0 < iStack_1cc) {
        lVar15 = 0;
        do {
          *(undefined4 *)(uStack_190 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_1cc);
      }
      if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
        _free(puStack_188[-1]);
      }
      if (uStack_138 != 0) {
        piVar26 = (int *)(uStack_138 + 0x14);
        do {
          iVar23 = *piVar26;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = iVar23 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_170);
        }
      }
      uStack_138 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      if (0 < uStack_170._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)(uStack_130 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_170._4_4_);
      }
      if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
        _free(puStack_128[-1]);
      }
      if (uStack_5b8 != 0) {
        piVar26 = (int *)(uStack_5b8 + 0x14);
        do {
          iVar23 = *piVar26;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = iVar23 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_5f0);
        }
      }
      uStack_5b8 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      if (0 < uStack_5f0._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)(uStack_5b0 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_5f0._4_4_);
      }
      if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
        _free(puStack_5a8[-1]);
      }
      if ((int)plVar9 != 0) goto LAB_109b94bbc;
LAB_109b93e08:
      if (lStack_3e8 != 0) {
        piVar26 = (int *)(lStack_3e8 + 0x14);
        do {
          iVar23 = *piVar26;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar14) {
            *piVar26 = iVar23 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_420);
        }
      }
      puVar12 = (undefined4 *)CONCAT44(uStack_3b8._4_4_,(undefined4)uStack_3b8);
      puVar13 = (ulong *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
      lStack_3e8 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      uStack_400 = 0;
      uStack_3fc = 0;
      if (0 < iStack_41c) {
        lVar15 = 0;
        do {
          puStack_3e0[lVar15] = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_41c);
      }
      uVar31 = 0;
      uVar32 = 0;
    }
    *param_1 = uStack_420;
    param_1[1] = iStack_41c;
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_414,uStack_418);
    *(undefined8 *)(param_1 + 6) = uVar30;
    *(undefined8 *)(param_1 + 4) = uVar29;
    *(undefined8 *)(param_1 + 10) = uVar32;
    *(undefined8 *)(param_1 + 8) = uVar31;
    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_3ec,uStack_3f0);
    *(long *)(param_1 + 0xe) = lStack_3e8;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    if (iStack_41c < 3) {
      *(undefined8 *)(param_1 + 0x14) = *puStack_3d8;
      *(undefined8 *)(param_1 + 0x16) = puStack_3d8[1];
    }
    else {
      *(undefined4 **)(param_1 + 0x10) = puStack_3e0;
      *(undefined8 **)(param_1 + 0x12) = puStack_3d8;
      puStack_3e0 = &uStack_418;
      puStack_3d8 = &uStack_3d0;
    }
    uStack_420 = 0x42ff0000;
    puVar24[1] = 0;
    *puVar24 = 0;
    puVar24[3] = 0;
    puVar24[2] = 0;
    puVar24[5] = 0;
    puVar24[4] = 0;
    *(undefined8 *)((long)puVar24 + 0x34) = 0;
    *(undefined8 *)((long)puVar24 + 0x2c) = 0;
    uStack_f8 = puVar13;
    uStack_3b8 = puVar12;
    FUN_109b98b28(&plStack_490);
LAB_109b94c74:
    if (lStack_448 != 0) {
      piVar26 = (int *)(lStack_448 + 0x14);
      do {
        iVar23 = *piVar26;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = iVar23 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(auStack_480);
      }
    }
    lStack_448 = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_458 = 0;
    uStack_454 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    if (0 < (int)auStack_480._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(puStack_440 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)auStack_480._4_4_);
    }
    if (puStack_438 != &uStack_430 && puStack_438 != (undefined8 *)0x0) {
      _free(puStack_438[-1]);
    }
    if (lStack_3e8 != 0) {
      piVar26 = (int *)(lStack_3e8 + 0x14);
      do {
        iVar23 = *piVar26;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = iVar23 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_420);
      }
    }
    lStack_3e8 = 0;
    uStack_408 = 0;
    uStack_404 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_400 = 0;
    uStack_3fc = 0;
    if (0 < iStack_41c) {
      lVar15 = 0;
      do {
        puStack_3e0[lVar15] = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_41c);
    }
    if (puStack_3d8 != &uStack_3d0 && puStack_3d8 != (undefined8 *)0x0) {
      _free(puStack_3d8[-1]);
    }
    if (lStack_388 != 0) {
      piVar26 = (int *)(lStack_388 + 0x14);
      do {
        iVar23 = *piVar26;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = iVar23 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_3c0);
      }
    }
    lStack_388 = 0;
    uStack_3a8 = 0;
    uStack_3a4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    uStack_398 = 0;
    uStack_394 = 0;
    uStack_3a0 = 0;
    uStack_39c = 0;
    if (0 < uStack_3c0._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)((long)puStack_380 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_3c0._4_4_);
    }
    if (puStack_378 != &uStack_370 && puStack_378 != (undefined8 *)0x0) {
      _free(puStack_378[-1]);
    }
    if (uStack_328 != 0) {
      piVar26 = (int *)(uStack_328 + 0x14);
      do {
        iVar23 = *piVar26;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = iVar23 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_360);
      }
    }
    uStack_328 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    if (0 < iStack_35c) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_320 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_35c);
    }
    if (puStack_318 != &uStack_310 && puStack_318 != (undefined8 *)0x0) {
      _free(puStack_318[-1]);
    }
    if (uStack_2c8 != 0) {
      piVar26 = (int *)(uStack_2c8 + 0x14);
      do {
        iVar23 = *piVar26;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = iVar23 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_300);
      }
    }
    uStack_2c8 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    if (0 < uStack_300._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_2c0 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_300._4_4_);
    }
    if (puStack_2b8 != &uStack_2b0 && puStack_2b8 != (undefined8 *)0x0) {
      _free(puStack_2b8[-1]);
    }
    if (uStack_268 != 0) {
      piVar26 = (int *)(uStack_268 + 0x14);
      do {
        iVar23 = *piVar26;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar14) {
          *piVar26 = iVar23 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_2a0);
      }
    }
    uStack_268 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    if (0 < uStack_2a0._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_260 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_2a0._4_4_);
    }
    if (puStack_258 != &uStack_250 && puStack_258 != (undefined8 *)0x0) {
      _free(puStack_258[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar12 = (undefined4 *)0x30;
  func_0x000107c2ae8c();
  *puVar12 = 1;
  uStack_5f0 = (long *)(puVar12 + 1);
  puStack_5e8 = (uint *)0x28;
  *(undefined1 *)(puVar12 + 0xb) = 0;
  *(undefined8 *)(puVar12 + 3) = 0x28726f746365566b;
  *(undefined8 *)(puVar12 + 1) = 0x636568632e637273;
  *(undefined8 *)(puVar12 + 7) = 0x566b636568632e74;
  *(undefined8 *)(puVar12 + 5) = 0x7364203d3d202932;
  *(undefined8 *)(puVar12 + 9) = 0x293228726f746365;
  FUN_109ac3188(0xffffff29,&uStack_5f0,&UNK_10f5a2888,&UNK_10f5a2897,0x172);
LAB_109b95110:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109b95114);
  (*pcVar6)();
}



/* Entry: 109b953b8; end: 109b95d73;  */

void FUN_109b953b8(uint *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  double *pdVar10;
  float *pfVar11;
  double *pdVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar5 = *(ulong **)(param_1 + 2);
    uStack_70 = (ulong)&uStack_b0 | 8;
    uStack_a8 = puVar5[1];
    uStack_b0 = *puVar5;
    uStack_98 = puVar5[3];
    uStack_a0 = puVar5[2];
    uStack_88 = puVar5[5];
    uStack_90 = puVar5[4];
    uStack_78 = puVar5[7];
    uStack_80 = puVar5[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puVar5[7] != 0) {
      piVar13 = (int *)(puVar5[7] + 0x14);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(int *)((long)puVar5 + 4) < 3) {
      uStack_60 = *(undefined8 *)puVar5[9];
      uStack_58 = ((undefined8 *)puVar5[9])[1];
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffffff;
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_b0,param_1,0xffffffff);
  }
  uVar16 = (uint)uStack_b0;
  if (((uint)uStack_b0 >> 0xe & 1) == 0) {
    uStack_110._0_4_ = 0x42ff0000;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_110._4_4_ = 0;
    uStack_108 = 0;
    uStack_d0 = (ulong)&uStack_110 | 8;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_170 = (undefined4 *)CONCAT44(uStack_170._4_4_,0x2010000);
    uStack_160 = 0;
    puStack_168 = &uStack_110;
    puStack_c8 = &uStack_c0;
    FUN_109a479a0(&uStack_b0,&uStack_170);
    if (uStack_78 != 0) {
      piVar13 = (int *)(uStack_78 + 0x14);
      do {
        iVar20 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar20 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_b0);
      }
    }
    if (0 < uStack_b0._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(uStack_70 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_b0._4_4_);
    }
    uStack_a8 = CONCAT44(uStack_104,uStack_108);
    uStack_b0 = CONCAT44(uStack_110._4_4_,(uint)uStack_110);
    uStack_98 = CONCAT44(uStack_f4,uStack_f8);
    uStack_a0 = CONCAT44(uStack_fc,uStack_100);
    uStack_88 = CONCAT44(uStack_e4,uStack_e8);
    uStack_90 = CONCAT44(uStack_ec,uStack_f0);
    uStack_80 = CONCAT44(uStack_dc,uStack_e0);
    uStack_78 = uStack_d8;
    uVar14 = uStack_70;
    puVar9 = puStack_68;
    if ((puStack_68 != &uStack_60) &&
       (uVar14 = (ulong)&uStack_b0 | 8, puVar9 = &uStack_60, puStack_68 != (undefined8 *)0x0)) {
      _free(puStack_68[-1]);
    }
    puStack_68 = puVar9;
    uStack_70 = uVar14;
    if (uStack_110._4_4_ < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_110 | 4);
      *puStack_68 = *puStack_c8;
      puStack_68[1] = puStack_c8[1];
      uStack_110._0_4_ = 0x42ff0000;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_c8 != &uStack_c0) {
        _free(puStack_c8[-1]);
      }
    }
    else {
      uStack_70 = uStack_d0;
      puStack_68 = puStack_c8;
    }
    uVar16 = (uint)uStack_b0;
  }
  puVar9 = &uStack_b0;
  FUN_109a89cd4(puVar9,3,0xffffffff,1);
  iVar20 = (int)puVar9;
  if (iVar20 < 0) {
    puVar9 = &uStack_b0;
    FUN_109a89cd4(puVar9,4,0xffffffff,1);
    if ((int)puVar9 < 0) {
      puVar4 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar4 = 1;
      uStack_110 = (undefined8 *)(puVar4 + 1);
      *uStack_110 = 0x2073746e696f706e;
      uStack_108 = 0xc;
      uStack_104 = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      puVar4[3] = 0x30203d3e;
      FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f5a29d8,&UNK_10f5a2897,0x35c);
      goto LAB_109b95cac;
    }
    uVar17 = 0x10;
  }
  else {
    uVar17 = 8;
  }
  uVar16 = uVar16 & 7;
  if (uVar16 - 4 < 3) {
    uVar7 = 5;
    if (5 < uVar16) {
      uVar7 = 6;
    }
    FUN_109a8f64c(param_2,puVar9,1,uVar17 | uVar7,0xffffffff,0,0);
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar6 = *(undefined8 **)(param_2 + 2);
      uStack_d0 = (ulong)&uStack_110 | 8;
      uStack_108 = (undefined4)puVar6[1];
      uStack_104 = (undefined4)((ulong)puVar6[1] >> 0x20);
      uStack_110._0_4_ = (uint)*puVar6;
      uStack_110._4_4_ = (int)((ulong)*puVar6 >> 0x20);
      uStack_f8 = (undefined4)puVar6[3];
      uStack_f4 = (undefined4)((ulong)puVar6[3] >> 0x20);
      uStack_100 = (undefined4)puVar6[2];
      uStack_fc = (undefined4)((ulong)puVar6[2] >> 0x20);
      uStack_d8 = puVar6[7];
      uStack_e8 = (undefined4)puVar6[5];
      uStack_e4 = (undefined4)((ulong)puVar6[5] >> 0x20);
      uStack_f0 = (undefined4)puVar6[4];
      uStack_ec = (undefined4)((ulong)puVar6[4] >> 0x20);
      uStack_e0 = (undefined4)puVar6[6];
      uStack_dc = (undefined4)((ulong)puVar6[6] >> 0x20);
      puStack_c8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (puVar6[7] != 0) {
        piVar13 = (int *)(puVar6[7] + 0x14);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = *piVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (*(int *)((long)puVar6 + 4) < 3) {
        uStack_c0 = *(undefined8 *)puVar6[9];
        uStack_b8 = ((undefined8 *)puVar6[9])[1];
      }
      else {
        uStack_110._4_4_ = 0;
        func_0x000109a84868(&uStack_110);
      }
    }
    else {
      FUN_109a8a180(&uStack_110,param_2,0xffffffff);
    }
    if (((uint)uStack_110 >> 0xe & 1) == 0) {
      FUN_109a8e944(param_2);
      FUN_109a8f64c(param_2,puVar9,1,uVar17 | uVar7,0xffffffff,0,0);
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar6 = *(undefined8 **)(param_2 + 2);
        uStack_130 = (ulong)&uStack_170 | 8;
        puStack_168 = (undefined8 *)puVar6[1];
        uStack_170 = (undefined4 *)*puVar6;
        uStack_158 = puVar6[3];
        uStack_160 = puVar6[2];
        uStack_148 = puVar6[5];
        uStack_150 = puVar6[4];
        uStack_138 = puVar6[7];
        uStack_140 = puVar6[6];
        puStack_128 = &uStack_120;
        uStack_120 = 0;
        uStack_118 = 0;
        if (puVar6[7] != 0) {
          piVar13 = (int *)(puVar6[7] + 0x14);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
              *piVar13 = *piVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (*(int *)((long)puVar6 + 4) < 3) {
          uStack_120 = *(undefined8 *)puVar6[9];
          uStack_118 = ((undefined8 *)puVar6[9])[1];
        }
        else {
          uStack_170 = (undefined4 *)((ulong)uStack_170 & 0xffffffff);
          func_0x000109a84868(&uStack_170);
        }
      }
      else {
        FUN_109a8a180(&uStack_170,param_2,0xffffffff);
      }
      if (uStack_d8 != 0) {
        piVar13 = (int *)(uStack_d8 + 0x14);
        do {
          iVar15 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      if (0 < uStack_110._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_d0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_110._4_4_);
      }
      uStack_108 = SUB84(puStack_168,0);
      uStack_104 = (undefined4)((ulong)puStack_168 >> 0x20);
      uStack_110._0_4_ = (uint)uStack_170;
      uStack_f8 = (undefined4)uStack_158;
      uStack_f4 = (undefined4)((ulong)uStack_158 >> 0x20);
      uStack_100 = (undefined4)uStack_160;
      uStack_fc = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_e8 = (undefined4)uStack_148;
      uStack_e4 = (undefined4)((ulong)uStack_148 >> 0x20);
      uStack_f0 = (undefined4)uStack_150;
      uStack_ec = (undefined4)((ulong)uStack_150 >> 0x20);
      uStack_d8 = uStack_138;
      uStack_e0 = (undefined4)uStack_140;
      uStack_dc = (undefined4)((ulong)uStack_140 >> 0x20);
      uStack_110._4_4_ = uStack_170._4_4_;
      uVar14 = uStack_d0;
      puVar6 = puStack_c8;
      if ((puStack_c8 != &uStack_c0) &&
         (uVar14 = (ulong)&uStack_110 | 8, puVar6 = &uStack_c0, puStack_c8 != (undefined8 *)0x0)) {
        _free(puStack_c8[-1]);
      }
      puStack_c8 = puVar6;
      uStack_d0 = uVar14;
      if (uStack_170._4_4_ < 3) {
        puVar6 = (undefined8 *)((ulong)&uStack_170 | 4);
        *puStack_c8 = *puStack_128;
        puStack_c8[1] = puStack_128[1];
        uStack_170 = (undefined4 *)CONCAT44(uStack_170._4_4_,0x42ff0000);
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        *(undefined8 *)((long)puVar6 + 0x34) = 0;
        *(undefined8 *)((long)puVar6 + 0x2c) = 0;
        if (puStack_128 != &uStack_120) {
          _free(puStack_128[-1]);
        }
      }
      else {
        uStack_d0 = uStack_130;
        puStack_c8 = puStack_128;
      }
    }
    if (((uint)uStack_110 >> 0xe & 1) != 0) {
      pdVar10 = (double *)CONCAT44(uStack_fc,uStack_100);
      iVar15 = (int)puVar9;
      if (uVar16 == 6) {
        if (iVar20 < 0) {
          if (iVar15 != 0) {
            uVar14 = (ulong)puVar9 & 0xffffffff;
            pdVar12 = (double *)(uStack_a0 + 0x18);
            pdVar10 = pdVar10 + 2;
            do {
              dVar23 = pdVar12[-1];
              dVar21 = 1.0 / *pdVar12;
              if (*pdVar12 == 0.0) {
                dVar21 = 1.0;
              }
              dVar24 = pdVar12[-3];
              pdVar10[-1] = pdVar12[-2] * dVar21;
              pdVar10[-2] = dVar24 * dVar21;
              *pdVar10 = dVar21 * dVar23;
              pdVar12 = pdVar12 + 4;
              uVar14 = uVar14 - 1;
              pdVar10 = pdVar10 + 3;
            } while (uVar14 != 0);
          }
        }
        else if (iVar15 != 0) {
          uVar14 = (ulong)puVar9 & 0xffffffff;
          pdVar12 = (double *)(uStack_a0 + 0x10);
          do {
            dVar21 = 1.0 / *pdVar12;
            if (*pdVar12 == 0.0) {
              dVar21 = 1.0;
            }
            dVar23 = pdVar12[-2];
            pdVar10[1] = pdVar12[-1] * dVar21;
            *pdVar10 = dVar23 * dVar21;
            pdVar12 = pdVar12 + 3;
            uVar14 = uVar14 - 1;
            pdVar10 = pdVar10 + 2;
          } while (uVar14 != 0);
        }
      }
      else if (uVar16 == 5) {
        if (iVar20 < 0) {
          if (iVar15 != 0) {
            uVar14 = (ulong)puVar9 & 0xffffffff;
            pfVar11 = (float *)(uStack_a0 + 0xc);
            pdVar10 = pdVar10 + 1;
            do {
              fVar19 = pfVar11[-1];
              fVar18 = 1.0 / *pfVar11;
              if (*pfVar11 == 0.0) {
                fVar18 = 1.0;
              }
              pdVar10[-1] = (double)CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + -3) >> 0x20) *
                                             fVar18,(float)*(undefined8 *)(pfVar11 + -3) * fVar18);
              *(float *)pdVar10 = fVar18 * fVar19;
              pfVar11 = pfVar11 + 4;
              uVar14 = uVar14 - 1;
              pdVar10 = (double *)((long)pdVar10 + 0xc);
            } while (uVar14 != 0);
          }
        }
        else if (iVar15 != 0) {
          uVar14 = (ulong)puVar9 & 0xffffffff;
          pfVar11 = (float *)(uStack_a0 + 8);
          do {
            fVar18 = 1.0 / *pfVar11;
            if (*pfVar11 == 0.0) {
              fVar18 = 1.0;
            }
            *pdVar10 = (double)CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + -2) >> 0x20) *
                                        fVar18,(float)*(undefined8 *)(pfVar11 + -2) * fVar18);
            pfVar11 = pfVar11 + 3;
            uVar14 = uVar14 - 1;
            pdVar10 = pdVar10 + 1;
          } while (uVar14 != 0);
        }
      }
      else if (iVar20 < 0) {
        if (iVar15 != 0) {
          uVar14 = (ulong)puVar9 & 0xffffffff;
          piVar13 = (int *)(uStack_a0 + 0xc);
          pdVar10 = pdVar10 + 1;
          do {
            fVar18 = 1.0;
            if (*piVar13 != 0) {
              fVar18 = 1.0 / (float)*piVar13;
            }
            iVar20 = piVar13[-1];
            uVar22 = NEON_scvtf(*(undefined8 *)(piVar13 + -3),4);
            pdVar10[-1] = (double)CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar18,
                                           (float)uVar22 * fVar18);
            *(float *)pdVar10 = fVar18 * (float)iVar20;
            piVar13 = piVar13 + 4;
            uVar14 = uVar14 - 1;
            pdVar10 = (double *)((long)pdVar10 + 0xc);
          } while (uVar14 != 0);
        }
      }
      else if (iVar15 != 0) {
        uVar14 = (ulong)puVar9 & 0xffffffff;
        piVar13 = (int *)(uStack_a0 + 8);
        do {
          fVar18 = 1.0;
          if (*piVar13 != 0) {
            fVar18 = 1.0 / (float)*piVar13;
          }
          uVar22 = NEON_scvtf(*(undefined8 *)(piVar13 + -2),4);
          *pdVar10 = (double)CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar18,(float)uVar22 * fVar18
                                     );
          piVar13 = piVar13 + 3;
          uVar14 = uVar14 - 1;
          pdVar10 = pdVar10 + 1;
        } while (uVar14 != 0);
      }
      if (uStack_d8 != 0) {
        piVar13 = (int *)(uStack_d8 + 0x14);
        do {
          iVar20 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar20 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      uStack_d8 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      if (0 < uStack_110._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_d0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_110._4_4_);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      if (uStack_78 != 0) {
        piVar13 = (int *)(uStack_78 + 0x14);
        do {
          iVar20 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar20 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_b0);
        }
      }
      uStack_78 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (0 < uStack_b0._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_70 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_b0._4_4_);
      }
      if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
        _free(puStack_68[-1]);
      }
      return;
    }
    puVar4 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    uStack_170 = puVar4 + 1;
    puStack_168 = (undefined8 *)0x12;
    *(undefined1 *)((long)puVar4 + 0x16) = 0;
    *(undefined2 *)(puVar4 + 5) = 0x2928;
    *(undefined8 *)(puVar4 + 3) = 0x73756f756e69746e;
    *(undefined8 *)(puVar4 + 1) = 0x6f4373692e747364;
    FUN_109ac3188(0xffffff29,&uStack_170,&UNK_10f5a29d8,&UNK_10f5a2897,0x36a);
  }
  else {
    puVar4 = (undefined4 *)0x4c;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    uStack_110 = (undefined8 *)(puVar4 + 1);
    uStack_108 = 0x47;
    uStack_104 = 0;
    *(undefined8 *)(puVar4 + 7) = 0x5332335f5643203d;
    *(undefined8 *)(puVar4 + 5) = 0x3d20687470656428;
    *(undefined8 *)(puVar4 + 0xb) = 0x5f5643203d3d2068;
    *(undefined8 *)(puVar4 + 9) = 0x74706564207c7c20;
    *(undefined8 *)(puVar4 + 0xf) = 0x203d3d2068747065;
    *(undefined8 *)(puVar4 + 0xd) = 0x64207c7c20463233;
    *(undefined1 *)((long)puVar4 + 0x4b) = 0;
    *(undefined8 *)((long)puVar4 + 0x43) = 0x294634365f564320;
    *(undefined8 *)(puVar4 + 3) = 0x2026262030203d3e;
    *(undefined8 *)(puVar4 + 1) = 0x2073746e696f706e;
    FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f5a29d8,&UNK_10f5a2897,0x35f);
  }
LAB_109b95cac:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109b95cb0);
  (*pcVar3)();
}



/* Entry: 109b95d74; end: 109b96b07;  */

void FUN_109b95d74(undefined8 *param_1,undefined8 param_2,double param_3,uint *param_4,uint *param_5
                  ,uint param_6,uint *param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  bool bVar19;
  uint uVar20;
  int *piVar21;
  undefined8 *puVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auStack_320 [8];
  long *plStack_318;
  undefined4 *puStack_310;
  undefined8 *puStack_308;
  undefined4 *puStack_300;
  undefined8 *puStack_2f8;
  undefined4 auStack_2e8 [2];
  undefined4 **ppuStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  int *piStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  int iStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  long lStack_228;
  ulong uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [4];
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [4];
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar14 = *(ulong **)(param_4 + 2);
    uStack_a0 = (ulong)&uStack_e0 | 8;
    uStack_e0 = *puVar14;
    uStack_d8 = puVar14[1];
    uStack_c8 = puVar14[3];
    uStack_d0 = puVar14[2];
    uStack_c0 = puVar14[4];
    uStack_b8 = puVar14[5];
    uStack_a8 = puVar14[7];
    uStack_b0 = puVar14[6];
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    if (puVar14[7] != 0) {
      piVar21 = (int *)(puVar14[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar6) {
          *piVar21 = *piVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar14 + 4) < 3) {
      uStack_90 = *(undefined8 *)puVar14[9];
      uStack_88 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_e0 = uStack_e0 & 0xffffffff;
      func_0x000109a84868(&uStack_e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_e0,param_4,0xffffffff);
  }
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar14 = *(ulong **)(param_5 + 2);
    uStack_100 = (ulong)&uStack_140 | 8;
    uStack_140 = *puVar14;
    uStack_138 = puVar14[1];
    uStack_128 = puVar14[3];
    uStack_130 = puVar14[2];
    uStack_120 = puVar14[4];
    uStack_118 = puVar14[5];
    uStack_108 = puVar14[7];
    uStack_110 = puVar14[6];
    puStack_f8 = &uStack_f0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (puVar14[7] != 0) {
      piVar21 = (int *)(puVar14[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar6) {
          *piVar21 = *piVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar14 + 4) < 3) {
      uStack_f0 = *(undefined8 *)puVar14[9];
      uStack_e8 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_140 = uStack_140 & 0xffffffff;
      func_0x000109a84868(&uStack_140);
    }
  }
  else {
    FUN_109a8a180(&uStack_140,param_5,0xffffffff);
  }
  auStack_1a0._0_4_ = 0x42ff0000;
  uStack_194 = 0;
  uStack_190 = 0;
  stack0xfffffffffffffe64 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  puStack_160 = auStack_198;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  auStack_200._0_4_ = 0x42ff0000;
  puStack_1c0 = auStack_1f8;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  stack0xfffffffffffffe04 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_260 = 0x42ff0000;
  puVar22 = (undefined8 *)((ulong)&uStack_260 | 4);
  uVar23 = (ulong)&uStack_260 | 8;
  uStack_254 = 0;
  uStack_250 = 0;
  iStack_25c = 0;
  uStack_258 = 0;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_234 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  bVar19 = true;
  uStack_210 = 0;
  uStack_208 = 0;
  bVar6 = false;
  uStack_220 = uVar23;
  puStack_218 = &uStack_210;
  puStack_1b8 = &uStack_1b0;
  puStack_158 = &uStack_150;
  do {
    puVar15 = (undefined8 *)auStack_1a0;
    puVar4 = &uStack_e0;
    if (!bVar19) {
      puVar15 = (undefined8 *)auStack_200;
      puVar4 = &uStack_140;
    }
    puVar7 = puVar4;
    FUN_109a89cd4(puVar4,2,0xffffffff,0);
    if ((int)puVar7 < 0) {
      puVar7 = puVar4;
      FUN_109a89cd4(puVar4,3,0xffffffff,0);
      if ((int)puVar7 < 0) {
        puVar13 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        uStack_2c0 = puVar13 + 1;
        uStack_2b8 = (undefined8 *)0x2e;
        *(undefined1 *)((long)puVar13 + 0x32) = 0;
        *(undefined8 *)(puVar13 + 3) = 0x7379617272612074;
        *(undefined8 *)(puVar13 + 1) = 0x75706e6920656854;
        *(undefined8 *)(puVar13 + 7) = 0x726f204432206562;
        *(undefined8 *)(puVar13 + 5) = 0x20646c756f687320;
        *(undefined8 *)((long)puVar13 + 0x2a) = 0x7374657320746e69;
        *(undefined8 *)((long)puVar13 + 0x22) = 0x6f7020443320726f;
        FUN_109ac3188(0xfffffffb,&uStack_2c0,&UNK_10f5a295b,&UNK_10f5a2897,0x2d4);
        goto LAB_109b969d4;
      }
      if ((int)puVar7 == 0) {
        *(undefined4 *)param_1 = 0x42ff0000;
        *(undefined8 *)((long)param_1 + 0xc) = 0;
        *(undefined8 *)((long)param_1 + 4) = 0;
        *(undefined8 *)((long)param_1 + 0x1c) = 0;
        *(undefined8 *)((long)param_1 + 0x14) = 0;
        *(undefined8 *)((long)param_1 + 0x2c) = 0;
        *(undefined8 *)((long)param_1 + 0x24) = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[10] = 0;
        param_1[8] = param_1 + 1;
        param_1[9] = param_1 + 10;
        param_1[0xb] = 0;
        goto LAB_109b96620;
      }
      uStack_2b0 = 0;
      uStack_2c0 = (undefined4 *)CONCAT44(uStack_2c0._4_4_,0x1010000);
      puStack_310 = (undefined4 *)CONCAT44(puStack_310._4_4_,0x2010000);
      puStack_300 = (undefined4 *)0x0;
      puStack_308 = puVar4;
      uStack_2b8 = puVar4;
      FUN_109b953b8(&uStack_2c0,&puStack_310);
    }
    FUN_109a890bc(&uStack_2c0,puVar4,2,puVar7);
    puStack_310 = (undefined4 *)CONCAT44(puStack_310._4_4_,0x2010000);
    puStack_300 = (undefined4 *)0x0;
    puStack_308 = puVar15;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_2c0,&puStack_310,5);
    if (lStack_288 != 0) {
      piVar21 = (int *)(lStack_288 + 0x14);
      do {
        iVar24 = *piVar21;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar19) {
          *piVar21 = iVar24 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_2c0);
      }
    }
    lStack_288 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    if (0 < (int)uStack_2c0._4_4_) {
      lVar16 = 0;
      do {
        piStack_280[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uStack_2c0._4_4_);
    }
    if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
      _free(puStack_278[-1]);
    }
    bVar19 = false;
    bVar3 = !bVar6;
    bVar6 = true;
  } while (bVar3);
  puVar8 = auStack_1a0;
  FUN_109a89cd4(puVar8,2,0xffffffff,1);
  puVar9 = auStack_200;
  FUN_109a89cd4(puVar9,2,0xffffffff,1);
  if ((int)puVar8 != (int)puVar9) {
    puVar13 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    uStack_2c0 = puVar13 + 1;
    uStack_2b8 = (undefined8 *)0x26;
    *(undefined1 *)((long)puVar13 + 0x2a) = 0;
    *(undefined8 *)(puVar13 + 3) = 0x3228726f74636556;
    *(undefined8 *)(puVar13 + 1) = 0x6b636568632e316d;
    *(undefined8 *)(puVar13 + 7) = 0x6365566b63656863;
    *(undefined8 *)(puVar13 + 5) = 0x2e326d203d3d2029;
    *(undefined8 *)((long)puVar13 + 0x22) = 0x293228726f746365;
    FUN_109ac3188(0xffffff29,&uStack_2c0,&UNK_10f5a295b,&UNK_10f5a2897,0x2dc);
    goto LAB_109b969d4;
  }
  uVar25 = (uint)puVar7;
  if (uVar25 < 7) {
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    goto LAB_109b96620;
  }
  plVar10 = (long *)0x8;
  __Znwm();
  *plVar10 = (long)&PTR_FUN_110b29a58;
  plVar11 = (long *)0x20;
  __Znwm();
  plVar17 = plVar11 + 1;
  *(int *)plVar17 = 1;
  *plVar11 = (long)&PTR_FUN_110b29aa8;
  plVar11[2] = (long)plVar10;
  do {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *(int *)plVar17 = (int)*plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    iVar24 = (int)*plVar17 + -1;
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *(int *)plVar17 = iVar24;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_2d0 = plVar11;
  plStack_2c8 = plVar10;
  if (iVar24 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((param_6 == 2) || (uVar25 == 7)) {
    uStack_2b0 = 0;
    uStack_2c0 = (undefined4 *)CONCAT44(uStack_2c0._4_4_,0x1010000);
    uStack_2b8 = (undefined8 *)auStack_1a0;
    puStack_300 = (undefined4 *)0x0;
    puStack_310 = (undefined4 *)CONCAT44(puStack_310._4_4_,0x1010000);
    puStack_308 = (undefined8 *)auStack_200;
    auStack_2e8[0] = 0x2010000;
    ppuStack_2e0 = (undefined4 **)&uStack_260;
    uStack_2d8 = 0;
    plVar10 = plStack_2c8;
    (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8,&uStack_2c0,&puStack_310,auStack_2e8);
    iVar24 = (int)plVar10;
    if ((*param_7 & 0x1f0000) != 0) {
      puVar12 = param_7;
      FUN_109a8f64c(param_7,puVar7,1,0,0xffffffff,1,0);
      if ((*param_7 & 0x1f0000) == 0x10000) {
        puVar15 = *(undefined8 **)(param_7 + 2);
        piStack_280 = (int *)((ulong)&uStack_2c0 | 8);
        uStack_2c0 = (undefined4 *)*puVar15;
        uStack_2b8 = (undefined8 *)puVar15[1];
        uStack_2a8 = puVar15[3];
        uStack_2b0 = puVar15[2];
        uStack_2a0 = puVar15[4];
        uStack_298 = puVar15[5];
        lStack_288 = puVar15[7];
        uStack_290 = puVar15[6];
        puStack_278 = &uStack_270;
        uStack_270 = 0;
        uStack_268 = 0;
        if (puVar15[7] != 0) {
          piVar21 = (int *)(puVar15[7] + 0x14);
          do {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar6) {
              *piVar21 = *piVar21 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(int *)((long)puVar15 + 4) < 3) {
          uStack_270 = *(undefined8 *)puVar15[9];
          uStack_268 = ((undefined8 *)puVar15[9])[1];
          param_7 = puVar12;
        }
        else {
          uStack_2c0 = (undefined4 *)((ulong)uStack_2c0 & 0xffffffff);
          param_7 = (uint *)&uStack_2c0;
          func_0x000109a84868(param_7);
        }
      }
      else {
        FUN_109a8a180(&uStack_2c0,param_7,0xffffffff);
      }
      if (uStack_2b8._4_4_ == 1 || (int)uStack_2b8 == 1) {
        uVar18 = (ulong)uStack_2c0._4_4_;
        if ((int)uStack_2c0._4_4_ < 3) {
          uVar20 = (int)uStack_2b8 * uStack_2b8._4_4_;
        }
        else {
          uVar20 = 1;
          piVar21 = piStack_280;
          do {
            uVar20 = *piVar21 * uVar20;
            uVar18 = uVar18 - 1;
            piVar21 = piVar21 + 1;
          } while (uVar18 != 0);
        }
        if (uVar25 == uVar20) {
          auVar26 = NEON_fmov(0x3ff0000000000000,8);
          puStack_308 = auVar26._8_8_;
          puStack_310 = auVar26._0_8_;
          auStack_2e8[0] = 0xc1020006;
          ppuStack_2e0 = &puStack_310;
          uStack_2d8 = 0x400000001;
          puStack_300 = puStack_310;
          puStack_2f8 = puStack_308;
          FUN_109a91d90();
          FUN_109a48a40(&uStack_2c0,auStack_2e8,param_7);
          if (lStack_288 != 0) {
            piVar21 = (int *)(lStack_288 + 0x14);
            do {
              iVar1 = *piVar21;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar6) {
                *piVar21 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_2c0);
            }
          }
          lStack_288 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          if (0 < (int)uStack_2c0._4_4_) {
            lVar16 = 0;
            do {
              piStack_280[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < (int)uStack_2c0._4_4_);
          }
          if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
            _free(puStack_278[-1]);
          }
          goto LAB_109b9655c;
        }
      }
      puVar13 = (undefined4 *)0x48;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      puStack_310 = puVar13 + 1;
      puStack_308 = (undefined8 *)0x42;
      *(undefined8 *)(puVar13 + 3) = 0x2031203d3d20736c;
      *(undefined8 *)(puVar13 + 1) = 0x6f632e6b73616d28;
      *(undefined8 *)(puVar13 + 7) = 0x203d3d2073776f72;
      *(undefined8 *)(puVar13 + 5) = 0x2e6b73616d207c7c;
      *(undefined8 *)(puVar13 + 0xb) = 0x2e6b73616d29746e;
      *(undefined8 *)(puVar13 + 9) = 0x6928202626202931;
      *(undefined1 *)((long)puVar13 + 0x46) = 0;
      *(undefined2 *)(puVar13 + 0x11) = 0x7374;
      *(undefined8 *)(puVar13 + 0xf) = 0x6e696f706e203d3d;
      *(undefined8 *)(puVar13 + 0xd) = 0x2029286c61746f74;
      FUN_109ac3188(0xffffff29,&puStack_310,&UNK_10f5a295b,&UNK_10f5a2897,0x2eb);
LAB_109b969d4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109b969d8);
      (*pcVar5)();
    }
  }
  else {
    bVar6 = true;
    if ((param_3 <= 0.9999999999999998) && (bVar6 = false, !NAN(param_3))) {
      bVar6 = param_3 < 2.220446049250313e-16;
    }
    dVar27 = 0.99;
    if (!bVar6) {
      dVar27 = param_3;
    }
    if (((param_6 & 0xfffffffc) == 8) && (0xe < uVar25)) {
      FUN_109b9ebd8(auStack_320,&plStack_2d0,7,1000);
      uStack_2b0 = 0;
      uStack_2c0 = (undefined4 *)CONCAT44(uStack_2c0._4_4_,0x1010000);
      uStack_2b8 = (undefined8 *)auStack_1a0;
      puStack_300 = (undefined4 *)0x0;
      puStack_310 = (undefined4 *)CONCAT44(puStack_310._4_4_,0x1010000);
      puStack_308 = (undefined8 *)auStack_200;
      auStack_2e8[0] = 0x2010000;
      ppuStack_2e0 = (undefined4 **)&uStack_260;
      uStack_2d8 = 0;
      (**(code **)(*plStack_318 + 0x48))(plStack_318,&uStack_2c0,&puStack_310,auStack_2e8,param_7);
      iVar24 = (int)plStack_318;
    }
    else {
      func_0x000109b9ec90(auStack_320,dVar27,&plStack_2d0,7,1000);
      uStack_2b0 = 0;
      uStack_2c0 = (undefined4 *)CONCAT44(uStack_2c0._4_4_,0x1010000);
      uStack_2b8 = (undefined8 *)auStack_1a0;
      puStack_300 = (undefined4 *)0x0;
      puStack_310 = (undefined4 *)CONCAT44(puStack_310._4_4_,0x1010000);
      puStack_308 = (undefined8 *)auStack_200;
      auStack_2e8[0] = 0x2010000;
      ppuStack_2e0 = (undefined4 **)&uStack_260;
      uStack_2d8 = 0;
      (**(code **)(*plStack_318 + 0x48))(plStack_318,&uStack_2c0,&puStack_310,auStack_2e8,param_7);
      iVar24 = (int)plStack_318;
    }
    FUN_109b98b7c(auStack_320);
  }
LAB_109b9655c:
  if (iVar24 < 1) {
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
  }
  else {
    param_1[1] = CONCAT44(uStack_254,uStack_258);
    *param_1 = CONCAT44(iStack_25c,uStack_260);
    param_1[3] = CONCAT44(uStack_244,uStack_248);
    param_1[2] = CONCAT44(uStack_24c,uStack_250);
    param_1[10] = 0;
    param_1[5] = CONCAT44(uStack_234,uStack_238);
    param_1[4] = CONCAT44(uStack_23c,uStack_240);
    param_1[7] = lStack_228;
    param_1[6] = CONCAT44(uStack_22c,uStack_230);
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (iStack_25c < 3) {
      param_1[10] = *puStack_218;
      param_1[0xb] = puStack_218[1];
    }
    else {
      param_1[8] = uStack_220;
      param_1[9] = puStack_218;
      uStack_220 = uVar23;
      puStack_218 = &uStack_210;
    }
    uStack_260 = 0x42ff0000;
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
  }
  FUN_109b98b28(&plStack_2d0);
LAB_109b96620:
  if (lStack_228 != 0) {
    piVar21 = (int *)(lStack_228 + 0x14);
    do {
      iVar24 = *piVar21;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar6) {
        *piVar21 = iVar24 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar24 + -1 == 0) {
      func_0x000109a848d4(&uStack_260);
    }
  }
  lStack_228 = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  if (0 < iStack_25c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_220 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_25c);
  }
  if (puStack_218 != &uStack_210 && puStack_218 != (undefined8 *)0x0) {
    _free(puStack_218[-1]);
  }
  if (lStack_1c8 != 0) {
    piVar21 = (int *)(lStack_1c8 + 0x14);
    do {
      iVar24 = *piVar21;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar6) {
        *piVar21 = iVar24 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar24 + -1 == 0) {
      func_0x000109a848d4(auStack_200);
    }
  }
  lStack_1c8 = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  if (0 < (int)auStack_200._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(puStack_1c0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)auStack_200._4_4_);
  }
  if (puStack_1b8 != &uStack_1b0 && puStack_1b8 != (undefined8 *)0x0) {
    _free(puStack_1b8[-1]);
  }
  if (lStack_168 != 0) {
    piVar21 = (int *)(lStack_168 + 0x14);
    do {
      iVar24 = *piVar21;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar6) {
        *piVar21 = iVar24 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar24 + -1 == 0) {
      func_0x000109a848d4(auStack_1a0);
    }
  }
  lStack_168 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  if (0 < (int)auStack_1a0._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(puStack_160 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)auStack_1a0._4_4_);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    _free(puStack_158[-1]);
  }
  if (uStack_108 != 0) {
    piVar21 = (int *)(uStack_108 + 0x14);
    do {
      iVar24 = *piVar21;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar6) {
        *piVar21 = iVar24 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar24 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  uStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_100 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  if (uStack_a8 != 0) {
    piVar21 = (int *)(uStack_a8 + 0x14);
    do {
      iVar24 = *piVar21;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar6) {
        *piVar21 = iVar24 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar24 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109b96b08; end: 109b9743f;  */

void FUN_109b96b08(uint *param_1,uint *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar7 = *(ulong **)(param_1 + 2);
    uStack_70 = (ulong)&uStack_b0 | 8;
    uStack_a8 = puVar7[1];
    uStack_b0 = *puVar7;
    uStack_98 = puVar7[3];
    puStack_a0 = (undefined8 *)puVar7[2];
    uStack_88 = puVar7[5];
    uStack_90 = puVar7[4];
    uStack_78 = puVar7[7];
    uStack_80 = puVar7[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puVar7[7] != 0) {
      piVar1 = (int *)(puVar7[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar7 + 4) < 3) {
      uStack_60 = *(undefined8 *)puVar7[9];
      uStack_58 = ((undefined8 *)puVar7[9])[1];
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffffff;
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_b0,param_1,0xffffffff);
  }
  uVar14 = (uint)uStack_b0;
  if (((uint)uStack_b0 >> 0xe & 1) == 0) {
    uStack_110._0_4_ = 0x42ff0000;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_110._4_4_ = 0;
    uStack_108 = 0;
    uStack_d0 = (ulong)&uStack_110 | 8;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_170 = (undefined4 *)CONCAT44(uStack_170._4_4_,0x2010000);
    uStack_160 = 0;
    puStack_168 = &uStack_110;
    puStack_c8 = &uStack_c0;
    FUN_109a479a0(&uStack_b0,&uStack_170);
    if (uStack_78 != 0) {
      piVar1 = (int *)(uStack_78 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_b0);
      }
    }
    if (0 < uStack_b0._4_4_) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_70 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < uStack_b0._4_4_);
    }
    uStack_a8 = CONCAT44(uStack_104,uStack_108);
    uStack_b0 = CONCAT44(uStack_110._4_4_,(uint)uStack_110);
    uStack_98 = CONCAT44(uStack_f4,uStack_f8);
    puStack_a0 = (undefined8 *)CONCAT44(uStack_fc,uStack_100);
    uStack_88 = CONCAT44(uStack_e4,uStack_e8);
    uStack_90 = CONCAT44(uStack_ec,uStack_f0);
    uStack_80 = CONCAT44(uStack_dc,uStack_e0);
    uStack_78 = uStack_d8;
    uVar12 = uStack_70;
    puVar11 = puStack_68;
    if ((puStack_68 != &uStack_60) &&
       (uVar12 = (ulong)&uStack_b0 | 8, puVar11 = &uStack_60, puStack_68 != (undefined8 *)0x0)) {
      _free(puStack_68[-1]);
    }
    puStack_68 = puVar11;
    uStack_70 = uVar12;
    if (uStack_110._4_4_ < 3) {
      puVar11 = (undefined8 *)((ulong)&uStack_110 | 4);
      *puStack_68 = *puStack_c8;
      puStack_68[1] = puStack_c8[1];
      uStack_110._0_4_ = 0x42ff0000;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      *(undefined8 *)((long)puVar11 + 0x34) = 0;
      *(undefined8 *)((long)puVar11 + 0x2c) = 0;
      if (puStack_c8 != &uStack_c0) {
        _free(puStack_c8[-1]);
      }
    }
    else {
      uStack_70 = uStack_d0;
      puStack_68 = puStack_c8;
    }
    uVar14 = (uint)uStack_b0;
  }
  puVar11 = &uStack_b0;
  FUN_109a89cd4(puVar11,2,0xffffffff,1);
  iVar5 = (int)puVar11;
  if (iVar5 < 0) {
    puVar11 = &uStack_b0;
    FUN_109a89cd4(puVar11,3,0xffffffff,1);
    if ((int)puVar11 < 0) {
      puVar6 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      uStack_110 = (undefined8 *)(puVar6 + 1);
      *uStack_110 = 0x2073746e696f706e;
      uStack_108 = 0xc;
      uStack_104 = 0;
      *(undefined1 *)(puVar6 + 4) = 0;
      puVar6[3] = 0x30203d3e;
      FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f5a2a50,&UNK_10f5a2897,0x3bf);
      goto LAB_109b97378;
    }
    uVar15 = 0x18;
  }
  else {
    uVar15 = 0x10;
  }
  uVar14 = uVar14 & 7;
  if (uVar14 - 4 < 3) {
    uVar9 = 5;
    if (5 < uVar14) {
      uVar9 = 6;
    }
    FUN_109a8f64c(param_2,puVar11,1,uVar15 | uVar9,0xffffffff,0,0);
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar8 = *(undefined8 **)(param_2 + 2);
      uStack_d0 = (ulong)&uStack_110 | 8;
      uStack_108 = (undefined4)puVar8[1];
      uStack_104 = (undefined4)((ulong)puVar8[1] >> 0x20);
      uStack_110._0_4_ = (uint)*puVar8;
      uStack_110._4_4_ = (int)((ulong)*puVar8 >> 0x20);
      uStack_f8 = (undefined4)puVar8[3];
      uStack_f4 = (undefined4)((ulong)puVar8[3] >> 0x20);
      uStack_100 = (undefined4)puVar8[2];
      uStack_fc = (undefined4)((ulong)puVar8[2] >> 0x20);
      uStack_d8 = puVar8[7];
      uStack_e8 = (undefined4)puVar8[5];
      uStack_e4 = (undefined4)((ulong)puVar8[5] >> 0x20);
      uStack_f0 = (undefined4)puVar8[4];
      uStack_ec = (undefined4)((ulong)puVar8[4] >> 0x20);
      uStack_e0 = (undefined4)puVar8[6];
      uStack_dc = (undefined4)((ulong)puVar8[6] >> 0x20);
      puStack_c8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (puVar8[7] != 0) {
        piVar1 = (int *)(puVar8[7] + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)((long)puVar8 + 4) < 3) {
        uStack_c0 = *(undefined8 *)puVar8[9];
        uStack_b8 = ((undefined8 *)puVar8[9])[1];
      }
      else {
        uStack_110._4_4_ = 0;
        func_0x000109a84868(&uStack_110);
      }
    }
    else {
      FUN_109a8a180(&uStack_110,param_2,0xffffffff);
    }
    if (((uint)uStack_110 >> 0xe & 1) == 0) {
      FUN_109a8e944(param_2);
      FUN_109a8f64c(param_2,puVar11,1,uVar15 | uVar9,0xffffffff,0,0);
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar8 = *(undefined8 **)(param_2 + 2);
        uStack_130 = (ulong)&uStack_170 | 8;
        puStack_168 = (undefined8 *)puVar8[1];
        uStack_170 = (undefined4 *)*puVar8;
        uStack_158 = puVar8[3];
        uStack_160 = puVar8[2];
        uStack_148 = puVar8[5];
        uStack_150 = puVar8[4];
        uStack_138 = puVar8[7];
        uStack_140 = puVar8[6];
        puStack_128 = &uStack_120;
        uStack_120 = 0;
        uStack_118 = 0;
        if (puVar8[7] != 0) {
          piVar1 = (int *)(puVar8[7] + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(int *)((long)puVar8 + 4) < 3) {
          uStack_120 = *(undefined8 *)puVar8[9];
          uStack_118 = ((undefined8 *)puVar8[9])[1];
        }
        else {
          uStack_170 = (undefined4 *)((ulong)uStack_170 & 0xffffffff);
          func_0x000109a84868(&uStack_170);
        }
      }
      else {
        FUN_109a8a180(&uStack_170,param_2,0xffffffff);
      }
      if (uStack_d8 != 0) {
        piVar1 = (int *)(uStack_d8 + 0x14);
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      if (0 < uStack_110._4_4_) {
        lVar10 = 0;
        do {
          *(undefined4 *)(uStack_d0 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_110._4_4_);
      }
      uStack_108 = SUB84(puStack_168,0);
      uStack_104 = (undefined4)((ulong)puStack_168 >> 0x20);
      uStack_110._0_4_ = (uint)uStack_170;
      uStack_f8 = (undefined4)uStack_158;
      uStack_f4 = (undefined4)((ulong)uStack_158 >> 0x20);
      uStack_100 = (undefined4)uStack_160;
      uStack_fc = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_e8 = (undefined4)uStack_148;
      uStack_e4 = (undefined4)((ulong)uStack_148 >> 0x20);
      uStack_f0 = (undefined4)uStack_150;
      uStack_ec = (undefined4)((ulong)uStack_150 >> 0x20);
      uStack_d8 = uStack_138;
      uStack_e0 = (undefined4)uStack_140;
      uStack_dc = (undefined4)((ulong)uStack_140 >> 0x20);
      uStack_110._4_4_ = uStack_170._4_4_;
      uVar12 = uStack_d0;
      puVar8 = puStack_c8;
      if ((puStack_c8 != &uStack_c0) &&
         (uVar12 = (ulong)&uStack_110 | 8, puVar8 = &uStack_c0, puStack_c8 != (undefined8 *)0x0)) {
        _free(puStack_c8[-1]);
      }
      puStack_c8 = puVar8;
      uStack_d0 = uVar12;
      if (uStack_170._4_4_ < 3) {
        puVar8 = (undefined8 *)((ulong)&uStack_170 | 4);
        *puStack_c8 = *puStack_128;
        puStack_c8[1] = puStack_128[1];
        uStack_170 = (undefined4 *)CONCAT44(uStack_170._4_4_,0x42ff0000);
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        *(undefined8 *)((long)puVar8 + 0x34) = 0;
        *(undefined8 *)((long)puVar8 + 0x2c) = 0;
        if (puStack_128 != &uStack_120) {
          _free(puStack_128[-1]);
        }
      }
      else {
        uStack_d0 = uStack_130;
        puStack_c8 = puStack_128;
      }
    }
    if (((uint)uStack_110 >> 0xe & 1) != 0) {
      lVar10 = CONCAT44(uStack_fc,uStack_100);
      iVar13 = (int)puVar11;
      if (uVar14 == 6) {
        if (iVar5 < 0) {
          if (iVar13 != 0) {
            puVar8 = puStack_a0 + 2;
            uVar12 = (ulong)puVar11 & 0xffffffff;
            puVar11 = (undefined8 *)(lVar10 + 0x18);
            do {
              uVar17 = *puVar8;
              uVar18 = puVar8[-2];
              puVar11[-2] = puVar8[-1];
              puVar11[-3] = uVar18;
              puVar11[-1] = uVar17;
              *puVar11 = 0x3ff0000000000000;
              puVar8 = puVar8 + 3;
              uVar12 = uVar12 - 1;
              puVar11 = puVar11 + 4;
            } while (uVar12 != 0);
          }
        }
        else if (iVar13 != 0) {
          uVar12 = (ulong)puVar11 & 0xffffffff;
          puVar11 = puStack_a0;
          puVar8 = (undefined8 *)(lVar10 + 0x10);
          do {
            uVar17 = *puVar11;
            puVar8[-1] = puVar11[1];
            puVar8[-2] = uVar17;
            *puVar8 = 0x3ff0000000000000;
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 2;
            puVar8 = puVar8 + 3;
          } while (uVar12 != 0);
        }
      }
      else if (uVar14 == 5) {
        if (iVar5 < 0) {
          if (iVar13 != 0) {
            puVar8 = puStack_a0 + 1;
            uVar12 = (ulong)puVar11 & 0xffffffff;
            puVar6 = (undefined4 *)(lVar10 + 0xc);
            do {
              uVar16 = *(undefined4 *)puVar8;
              *(undefined8 *)(puVar6 + -3) = puVar8[-1];
              puVar6[-1] = uVar16;
              *puVar6 = 0x3f800000;
              puVar8 = (undefined8 *)((long)puVar8 + 0xc);
              uVar12 = uVar12 - 1;
              puVar6 = puVar6 + 4;
            } while (uVar12 != 0);
          }
        }
        else if (iVar13 != 0) {
          uVar12 = (ulong)puVar11 & 0xffffffff;
          puVar11 = puStack_a0;
          puVar6 = (undefined4 *)(lVar10 + 8);
          do {
            *(undefined8 *)(puVar6 + -2) = *puVar11;
            *puVar6 = 0x3f800000;
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 1;
            puVar6 = puVar6 + 3;
          } while (uVar12 != 0);
        }
      }
      else if (iVar5 < 0) {
        if (iVar13 != 0) {
          puVar6 = (undefined4 *)(lVar10 + 0xc);
          puVar8 = puStack_a0 + 1;
          uVar12 = (ulong)puVar11 & 0xffffffff;
          do {
            uVar16 = *(undefined4 *)puVar8;
            *(undefined8 *)(puVar6 + -3) = puVar8[-1];
            puVar6[-1] = uVar16;
            *puVar6 = 1;
            puVar6 = puVar6 + 4;
            puVar8 = (undefined8 *)((long)puVar8 + 0xc);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else if (iVar13 != 0) {
        uVar12 = (ulong)puVar11 & 0xffffffff;
        puVar11 = puStack_a0;
        puVar6 = (undefined4 *)(lVar10 + 8);
        do {
          *(undefined8 *)(puVar6 + -2) = *puVar11;
          *puVar6 = 1;
          uVar12 = uVar12 - 1;
          puVar11 = puVar11 + 1;
          puVar6 = puVar6 + 3;
        } while (uVar12 != 0);
      }
      if (uStack_d8 != 0) {
        piVar1 = (int *)(uStack_d8 + 0x14);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      uStack_d8 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      if (0 < uStack_110._4_4_) {
        lVar10 = 0;
        do {
          *(undefined4 *)(uStack_d0 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_110._4_4_);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      if (uStack_78 != 0) {
        piVar1 = (int *)(uStack_78 + 0x14);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_b0);
        }
      }
      uStack_78 = 0;
      uStack_98 = 0;
      puStack_a0 = (undefined8 *)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (0 < uStack_b0._4_4_) {
        lVar10 = 0;
        do {
          *(undefined4 *)(uStack_70 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_b0._4_4_);
      }
      if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
        _free(puStack_68[-1]);
      }
      return;
    }
    puVar6 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    uStack_170 = puVar6 + 1;
    puStack_168 = (undefined8 *)0x12;
    *(undefined1 *)((long)puVar6 + 0x16) = 0;
    *(undefined2 *)(puVar6 + 5) = 0x2928;
    *(undefined8 *)(puVar6 + 3) = 0x73756f756e69746e;
    *(undefined8 *)(puVar6 + 1) = 0x6f4373692e747364;
    FUN_109ac3188(0xffffff29,&uStack_170,&UNK_10f5a2a50,&UNK_10f5a2897,0x3cd);
  }
  else {
    puVar6 = (undefined4 *)0x4c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    uStack_110 = (undefined8 *)(puVar6 + 1);
    uStack_108 = 0x47;
    uStack_104 = 0;
    *(undefined8 *)(puVar6 + 7) = 0x5332335f5643203d;
    *(undefined8 *)(puVar6 + 5) = 0x3d20687470656428;
    *(undefined8 *)(puVar6 + 0xb) = 0x5f5643203d3d2068;
    *(undefined8 *)(puVar6 + 9) = 0x74706564207c7c20;
    *(undefined8 *)(puVar6 + 0xf) = 0x203d3d2068747065;
    *(undefined8 *)(puVar6 + 0xd) = 0x64207c7c20463233;
    *(undefined1 *)((long)puVar6 + 0x4b) = 0;
    *(undefined8 *)((long)puVar6 + 0x43) = 0x294634365f564320;
    *(undefined8 *)(puVar6 + 3) = 0x2026262030203d3e;
    *(undefined8 *)(puVar6 + 1) = 0x2073746e696f706e;
    FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f5a2a50,&UNK_10f5a2897,0x3c2);
  }
LAB_109b97378:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109b9737c);
  (*pcVar4)();
}



/* Entry: 109b97440; end: 109b97493;  */

long * FUN_109b97440(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b97494; end: 109b9749b;  */

void FUN_109b97494(void)

{
  return;
}



/* Entry: 109b9749c; end: 109b980c3;  */

undefined8 FUN_109b9749c(undefined8 param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  double *pdVar17;
  double *pdVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint uVar32;
  undefined4 auStack_b98 [2];
  undefined1 *puStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  double *pdStack_b70;
  double *pdStack_b68;
  double *pdStack_b60;
  double *pdStack_b58;
  undefined8 uStack_b50;
  long lStack_b48;
  ulong uStack_b40;
  undefined8 *puStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  double *pdStack_b10;
  double *pdStack_b08;
  undefined1 *puStack_b00;
  undefined1 *puStack_af8;
  undefined8 uStack_af0;
  long lStack_ae8;
  ulong uStack_ae0;
  undefined8 *puStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined1 *puStack_ab0;
  undefined1 *puStack_aa8;
  undefined1 *puStack_aa0;
  undefined1 *puStack_a98;
  undefined8 uStack_a90;
  long lStack_a88;
  ulong uStack_a80;
  undefined8 *puStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined1 *puStack_a50;
  undefined1 *puStack_a48;
  undefined1 *puStack_a40;
  undefined1 *puStack_a38;
  undefined8 uStack_a30;
  long lStack_a28;
  ulong uStack_a20;
  long *plStack_a18;
  long alStack_a10 [2];
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined1 *puStack_9f0;
  undefined1 *puStack_9e8;
  undefined1 *puStack_9e0;
  undefined1 *puStack_9d8;
  undefined8 uStack_9d0;
  long lStack_9c8;
  ulong uStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined1 *puStack_990;
  undefined1 *puStack_988;
  double *pdStack_980;
  double *pdStack_978;
  undefined8 uStack_970;
  long lStack_968;
  ulong uStack_960;
  undefined8 *puStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  double *pdStack_930;
  double *pdStack_928;
  long *plStack_920;
  long *plStack_918;
  undefined8 uStack_910;
  long lStack_908;
  ulong uStack_900;
  undefined8 *puStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  ulong uStack_8d8;
  undefined8 *puStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  undefined8 *puStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  ulong uStack_878;
  undefined8 *puStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  undefined8 *puStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long *aplStack_820 [6];
  double dStack_7f0;
  double dStack_7e8;
  double dStack_7e0;
  double dStack_6b8;
  long **pplStack_6b0;
  undefined8 uStack_6a8;
  long *plStack_6a0;
  double dStack_698;
  undefined8 uStack_690;
  double dStack_688;
  double dStack_680;
  double dStack_678;
  double adStack_670 [3];
  undefined8 uStack_658;
  double dStack_650;
  double dStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  double adStack_628 [3];
  undefined8 uStack_610;
  double dStack_608;
  double dStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 auStack_5e0 [504];
  undefined1 auStack_3e8 [72];
  undefined1 auStack_3a0 [72];
  undefined1 auStack_358 [72];
  double adStack_310 [81];
  long alStack_88 [3];
  
  alStack_88[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_2 + 2);
    uStack_840 = (ulong)&uStack_880 | 8;
    uStack_878 = puVar11[1];
    uStack_880 = *puVar11;
    uStack_868 = puVar11[3];
    puStack_870 = (undefined8 *)puVar11[2];
    uStack_858 = puVar11[5];
    uStack_860 = puVar11[4];
    uStack_848 = puVar11[7];
    uStack_850 = puVar11[6];
    puStack_838 = &uStack_830;
    uStack_828 = 0;
    uStack_830 = 0;
    if (puVar11[7] != 0) {
      piVar1 = (int *)(puVar11[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_830 = *(undefined8 *)puVar11[9];
      uStack_828 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_880 = uStack_880 & 0xffffffff;
      func_0x000109a84868(&uStack_880);
    }
  }
  else {
    FUN_109a8a180(&uStack_880,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_3 + 2);
    uStack_8a0 = (ulong)&uStack_8e0 | 8;
    uStack_8d8 = puVar11[1];
    uStack_8e0 = *puVar11;
    uStack_8c8 = puVar11[3];
    puStack_8d0 = (undefined8 *)puVar11[2];
    uStack_8b8 = puVar11[5];
    uStack_8c0 = puVar11[4];
    uStack_8a8 = puVar11[7];
    uStack_8b0 = puVar11[6];
    puStack_898 = &uStack_890;
    uStack_888 = 0;
    uStack_890 = 0;
    if (puVar11[7] != 0) {
      piVar1 = (int *)(puVar11[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_890 = *(undefined8 *)puVar11[9];
      uStack_888 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_8e0 = uStack_8e0 & 0xffffffff;
      func_0x000109a84868(&uStack_8e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_8e0,param_3,0xffffffff);
  }
  puVar9 = &uStack_880;
  iVar10 = 2;
  FUN_109a89cd4(puVar9,2,0xffffffff,1);
  puVar6 = puStack_870;
  puVar5 = puStack_8d0;
  uStack_900 = (ulong)&uStack_940 | 8;
  pdStack_930 = adStack_310;
  lStack_908 = 0;
  uStack_910 = 0;
  uStack_8e8 = 8;
  uStack_8f0 = 0x48;
  plStack_920 = alStack_88;
  uStack_960 = (ulong)&uStack_9a0 | 8;
  puStack_990 = auStack_358;
  lStack_968 = 0;
  uStack_970 = 0;
  uStack_948 = 8;
  uStack_950 = 8;
  uStack_938 = 0x900000009;
  uStack_940 = 0x242ff4006;
  pdStack_980 = adStack_310;
  uStack_9c0 = (ulong)&uStack_a00 | 8;
  puStack_9f0 = auStack_5e0;
  lStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9a8 = 8;
  uStack_9b0 = 0x48;
  uStack_998 = 0x100000009;
  uStack_9a0 = 0x242ff4006;
  puStack_a40 = auStack_358;
  puStack_aa0 = auStack_3a0;
  uStack_a20 = (ulong)&uStack_a60 | 8;
  uStack_a30 = 0;
  lStack_a28 = 0;
  alStack_a10[1] = 8;
  alStack_a10[0] = 0x18;
  uStack_9f8 = 0x900000009;
  uStack_a00 = 0x242ff4006;
  puStack_ab0 = auStack_3e8;
  uStack_a80 = (ulong)&uStack_ac0 | 8;
  uStack_a90 = 0;
  lStack_a88 = 0;
  uStack_ab8 = 0x300000003;
  uStack_ac0 = 0x242ff4006;
  uStack_a68 = 8;
  uStack_a70 = 0x18;
  uStack_a58 = 0x300000003;
  uStack_a60 = 0x242ff4006;
  iVar7 = (int)puVar9;
  if (iVar7 < 1) {
    dVar23 = (double)iVar7;
    dVar24 = 0.0 / dVar23;
    dVar25 = 0.0;
    dVar27 = 0.0;
    dVar29 = 0.0;
    dVar31 = 0.0;
    dVar26 = dVar24;
    dVar30 = dVar24;
    dVar28 = dVar24;
  }
  else {
    uVar12 = (ulong)puVar9 & 0xffffffff;
    dVar24 = 0.0;
    dVar26 = 0.0;
    dVar28 = 0.0;
    dVar30 = 0.0;
    puVar8 = puStack_8d0;
    puVar15 = puStack_870;
    uVar13 = uVar12;
    do {
      dVar28 = dVar28 + (double)(float)*puVar8;
      dVar30 = dVar30 + (double)(float)((ulong)*puVar8 >> 0x20);
      dVar24 = dVar24 + (double)(float)*puVar15;
      dVar26 = dVar26 + (double)(float)((ulong)*puVar15 >> 0x20);
      uVar13 = uVar13 - 1;
      puVar8 = puVar8 + 1;
      puVar15 = puVar15 + 1;
    } while (uVar13 != 0);
    dVar23 = (double)((ulong)puVar9 & 0xffffffff);
    dVar28 = dVar28 / dVar23;
    dVar30 = dVar30 / dVar23;
    dVar24 = dVar24 / dVar23;
    dVar26 = dVar26 / dVar23;
    dVar25 = 0.0;
    dVar27 = 0.0;
    dVar29 = 0.0;
    dVar31 = 0.0;
    puVar8 = puStack_8d0;
    puVar15 = puStack_870;
    do {
      dVar29 = dVar29 + ABS((double)(float)*puVar8 - dVar28);
      dVar31 = dVar31 + ABS((double)(float)((ulong)*puVar8 >> 0x20) - dVar30);
      dVar25 = dVar25 + ABS((double)(float)*puVar15 - dVar24);
      dVar27 = dVar27 + ABS((double)(float)((ulong)*puVar15 >> 0x20) - dVar26);
      uVar12 = uVar12 - 1;
      puVar8 = puVar8 + 1;
      puVar15 = puVar15 + 1;
    } while (uVar12 != 0);
  }
  auVar4._4_4_ = -(uint)(ABS(dVar31) < 2.220446049250313e-16);
  auVar4._0_4_ = -(uint)(ABS(dVar29) < 2.220446049250313e-16);
  auVar4._8_4_ = -(uint)(ABS(dVar25) < 2.220446049250313e-16);
  auVar4._12_4_ = -(uint)(ABS(dVar27) < 2.220446049250313e-16);
  uVar32 = NEON_umaxv(auVar4,4);
  puStack_a78 = &uStack_a70;
  puStack_a50 = puStack_aa0;
  puStack_a48 = puStack_aa0;
  puStack_a38 = puStack_a40;
  plStack_a18 = alStack_a10;
  puStack_9e8 = puStack_9f0;
  puStack_9e0 = puStack_a40;
  puStack_9d8 = puStack_a40;
  puStack_9b8 = &uStack_9b0;
  puStack_988 = puStack_990;
  pdStack_978 = pdStack_980;
  puStack_958 = &uStack_950;
  pdStack_928 = pdStack_930;
  plStack_918 = plStack_920;
  puStack_8f8 = &uStack_8f0;
  if ((uVar32 & 1) == 0) {
    adStack_628[0] = 1.0 / (dVar23 / dVar29);
    adStack_628[1] = 0.0;
    uStack_610 = 0;
    dStack_608 = 1.0 / (dVar23 / dVar31);
    uStack_5f0 = 0;
    uStack_5f8 = 0;
    uStack_5e8 = 0x3ff0000000000000;
    dVar25 = dVar23 / dVar25;
    dVar27 = dVar23 / dVar27;
    adStack_670[1] = 0.0;
    adStack_670[2] = -dVar24 * dVar25;
    uStack_658 = 0;
    pdStack_b70 = adStack_670;
    dStack_648 = -dVar26 * dVar27;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_630 = 0x3ff0000000000000;
    pdStack_b10 = adStack_628;
    uStack_af0 = 0;
    lStack_ae8 = 0;
    uStack_ae0 = (ulong)&uStack_b20 | 8;
    uStack_b28 = 8;
    uStack_b30 = 0x18;
    uStack_b18 = 0x300000003;
    uStack_b20 = 0x242ff4006;
    uStack_ac8 = 8;
    uStack_ad0 = 0x18;
    puStack_b00 = auStack_5e0;
    uStack_b50 = 0;
    lStack_b48 = 0;
    uStack_b40 = (ulong)&uStack_b80 | 8;
    uStack_b78 = 0x300000003;
    uStack_b80 = 0x242ff4006;
    pdStack_b60 = adStack_628;
    aplStack_820[1] = (long *)0x0;
    aplStack_820[0] = (long *)0x0;
    aplStack_820[3] = (long *)0x0;
    aplStack_820[2] = (long *)0x0;
    dStack_6b8 = (double)CONCAT44(dStack_6b8._4_4_,0xc1020006);
    pplStack_6b0 = aplStack_820;
    uStack_6a8 = 0x400000001;
    puVar8 = puVar9;
    pdStack_b68 = pdStack_b70;
    pdStack_b58 = pdStack_b60;
    puStack_b38 = &uStack_b30;
    pdStack_b08 = pdStack_b10;
    puStack_af8 = puStack_b00;
    puStack_ad8 = &uStack_ad0;
    puStack_aa8 = puStack_ab0;
    puStack_a98 = puStack_aa0;
    adStack_670[0] = dVar25;
    dStack_650 = dVar27;
    adStack_628[2] = dVar28;
    dStack_600 = dVar30;
    FUN_109a91d90();
    FUN_109a48a40(&uStack_940,&dStack_6b8,puVar8);
    if (0 < iVar7) {
      uVar13 = 0;
      do {
        lVar16 = 0;
        lVar14 = 0;
        aplStack_820[0] = (long *)(dVar25 * ((double)(float)puVar6[uVar13] - dVar24));
        aplStack_820[1] =
             (long *)(dVar27 * ((double)(float)((ulong)puVar6[uVar13] >> 0x20) - dVar26));
        aplStack_820[2] = (long *)0x3ff0000000000000;
        dStack_7e0 = -(((double)*(float *)(puVar5 + uVar13) - dVar28) * (dVar23 / dVar29));
        aplStack_820[4] = (long *)0x0;
        aplStack_820[5] = (long *)0x0;
        aplStack_820[3] = (long *)0x0;
        dStack_7e8 = (double)aplStack_820[1] * dStack_7e0;
        dStack_7f0 = (double)aplStack_820[0] * dStack_7e0;
        pplStack_6b0 = (long **)0x0;
        dStack_6b8 = 0.0;
        uStack_6a8 = 0;
        dStack_698 = (double)aplStack_820[1];
        plStack_6a0 = aplStack_820[0];
        uStack_690 = 0x3ff0000000000000;
        dStack_678 = -(((double)*(float *)((long)(puVar5 + uVar13) + 4) - dVar30) *
                      (dVar23 / dVar31));
        dStack_680 = (double)aplStack_820[1] * dStack_678;
        dStack_688 = (double)aplStack_820[0] * dStack_678;
        pdVar17 = adStack_310;
        do {
          plVar21 = aplStack_820[lVar14];
          dVar22 = (&dStack_6b8)[lVar14];
          pdVar18 = pdVar17;
          lVar19 = lVar16;
          do {
            *pdVar18 = *pdVar18 +
                       dVar22 * *(double *)((long)&dStack_6b8 + lVar19) +
                       *(double *)((long)aplStack_820 + lVar19) * (double)plVar21;
            lVar19 = lVar19 + 8;
            pdVar18 = pdVar18 + 1;
          } while (lVar19 != 0x48);
          lVar14 = lVar14 + 1;
          lVar16 = lVar16 + 8;
          pdVar17 = pdVar17 + 10;
        } while (lVar14 != 9);
        uVar13 = uVar13 + 1;
      } while (uVar13 != ((ulong)puVar9 & 0xffffffff));
    }
    aplStack_820[0]._0_4_ = 0x3010000;
    aplStack_820[2] = (long *)0x0;
    aplStack_820[1] = &uStack_940;
    FUN_109a92d2c(aplStack_820,0);
    aplStack_820[2] = (long *)0x0;
    aplStack_820[0] = (long *)CONCAT44(aplStack_820[0]._4_4_,0x1010000);
    dStack_6b8 = (double)CONCAT44(dStack_6b8._4_4_,0x2010000);
    pplStack_6b0 = (long **)&uStack_9a0;
    uStack_6a8 = 0;
    auStack_b98[0] = 0x2010000;
    puStack_b90 = (undefined1 *)&uStack_a00;
    uStack_b88 = 0;
    aplStack_820[1] = &uStack_940;
    FUN_109a59d88(aplStack_820,&dStack_6b8,auStack_b98);
    FUN_109a7d740(aplStack_820,&uStack_b20,&uStack_a60);
    (**(code **)(*aplStack_820[0] + 0x18))(aplStack_820[0],aplStack_820,&uStack_ac0,0xffffffff);
    FUN_10918eb6c(aplStack_820);
    FUN_109a7d740(aplStack_820,&uStack_ac0,&uStack_b80);
    (**(code **)(*aplStack_820[0] + 0x18))(aplStack_820[0],aplStack_820,&uStack_a60,0xffffffff);
    FUN_10918eb6c(aplStack_820);
    puVar9 = &uStack_a60;
    FUN_109a41858(1.0 / *(double *)(puStack_a50 + *plStack_a18 * 2 + 0x10),0,puVar9,param_4,
                  (uint)uStack_a60 & 0xfff);
    iVar10 = (int)param_4;
    if (lStack_b48 != 0) {
      piVar1 = (int *)(lStack_b48 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar9 = &uStack_b80;
        func_0x000109a848d4(puVar9);
      }
    }
    lStack_b48 = 0;
    pdStack_b68 = (double *)0x0;
    pdStack_b70 = (double *)0x0;
    pdStack_b58 = (double *)0x0;
    pdStack_b60 = (double *)0x0;
    if (0 < uStack_b80._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_b40 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_b80._4_4_);
    }
    if (puStack_b38 != &uStack_b30 && puStack_b38 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)puStack_b38[-1];
      _free(puVar9);
    }
    if (lStack_ae8 != 0) {
      piVar1 = (int *)(lStack_ae8 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar9 = &uStack_b20;
        func_0x000109a848d4(puVar9);
      }
    }
    lStack_ae8 = 0;
    pdStack_b08 = (double *)0x0;
    pdStack_b10 = (double *)0x0;
    puStack_af8 = (undefined1 *)0x0;
    puStack_b00 = (undefined1 *)0x0;
    if (0 < uStack_b20._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_ae0 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_b20._4_4_);
    }
    if (puStack_ad8 != &uStack_ad0 && puStack_ad8 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)puStack_ad8[-1];
      _free(puVar9);
    }
    if (lStack_a88 != 0) {
      piVar1 = (int *)(lStack_a88 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 1) {
        puVar9 = &uStack_ac0;
        func_0x000109a848d4(puVar9);
      }
    }
    uVar20 = 1;
  }
  else {
    uVar20 = 0;
  }
  lStack_a88 = 0;
  puStack_aa8 = (undefined1 *)0x0;
  puStack_ab0 = (undefined1 *)0x0;
  puStack_a98 = (undefined1 *)0x0;
  puStack_aa0 = (undefined1 *)0x0;
  if (0 < uStack_ac0._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_a80 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_ac0._4_4_);
  }
  if (puStack_a78 != &uStack_a70 && puStack_a78 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)puStack_a78[-1];
    _free(puVar9);
  }
  if (lStack_a28 != 0) {
    piVar1 = (int *)(lStack_a28 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9 = &uStack_a60;
      func_0x000109a848d4(puVar9);
    }
  }
  lStack_a28 = 0;
  puStack_a48 = (undefined1 *)0x0;
  puStack_a50 = (undefined1 *)0x0;
  puStack_a38 = (undefined1 *)0x0;
  puStack_a40 = (undefined1 *)0x0;
  if (0 < uStack_a60._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_a20 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_a60._4_4_);
  }
  if (plStack_a18 != alStack_a10 && plStack_a18 != (long *)0x0) {
    puVar9 = (undefined8 *)plStack_a18[-1];
    _free(puVar9);
  }
  if (lStack_9c8 != 0) {
    piVar1 = (int *)(lStack_9c8 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9 = &uStack_a00;
      func_0x000109a848d4(puVar9);
    }
  }
  lStack_9c8 = 0;
  puStack_9e8 = (undefined1 *)0x0;
  puStack_9f0 = (undefined1 *)0x0;
  puStack_9d8 = (undefined1 *)0x0;
  puStack_9e0 = (undefined1 *)0x0;
  if (0 < uStack_a00._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_9c0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_a00._4_4_);
  }
  if (puStack_9b8 != &uStack_9b0 && puStack_9b8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)puStack_9b8[-1];
    _free(puVar9);
  }
  if (lStack_968 != 0) {
    piVar1 = (int *)(lStack_968 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9 = &uStack_9a0;
      func_0x000109a848d4(puVar9);
    }
  }
  lStack_968 = 0;
  puStack_988 = (undefined1 *)0x0;
  puStack_990 = (undefined1 *)0x0;
  pdStack_978 = (double *)0x0;
  pdStack_980 = (double *)0x0;
  if (0 < uStack_9a0._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_960 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_9a0._4_4_);
  }
  if (puStack_958 != &uStack_950 && puStack_958 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)puStack_958[-1];
    _free(puVar9);
  }
  if (lStack_908 != 0) {
    piVar1 = (int *)(lStack_908 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9 = &uStack_940;
      func_0x000109a848d4(puVar9);
    }
  }
  lStack_908 = 0;
  pdStack_928 = (double *)0x0;
  pdStack_930 = (double *)0x0;
  plStack_918 = (long *)0x0;
  plStack_920 = (long *)0x0;
  if (0 < uStack_940._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_900 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_940._4_4_);
  }
  if (puStack_8f8 != &uStack_8f0 && puStack_8f8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)puStack_8f8[-1];
    _free(puVar9);
  }
  if (uStack_8a8 != 0) {
    piVar1 = (int *)(uStack_8a8 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9 = &uStack_8e0;
      func_0x000109a848d4(puVar9);
    }
  }
  uStack_8a8 = 0;
  uStack_8c8 = 0;
  puStack_8d0 = (undefined8 *)0x0;
  uStack_8b8 = 0;
  uStack_8c0 = 0;
  if (0 < uStack_8e0._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_8a0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_8e0._4_4_);
  }
  if (puStack_898 != &uStack_890 && puStack_898 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)puStack_898[-1];
    _free(puVar9);
  }
  if (uStack_848 != 0) {
    piVar1 = (int *)(uStack_848 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9 = &uStack_880;
      func_0x000109a848d4(puVar9);
    }
  }
  uStack_848 = 0;
  uStack_868 = 0;
  puStack_870 = (undefined8 *)0x0;
  uStack_858 = 0;
  uStack_860 = 0;
  if (0 < uStack_880._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_840 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_880._4_4_);
  }
  if (puStack_838 != &uStack_830 && puStack_838 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)puStack_838[-1];
    _free(puVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_88[0]) {
    return uVar20;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    func_0x000104bd46a0(puVar9);
    func_0x00010567aa40(&uStack_b80);
    func_0x00010567aa40(&uStack_b20);
    func_0x00010567aa40(&uStack_ac0);
    func_0x00010567aa40(&uStack_a60);
    func_0x00010567aa40(&uStack_a00);
    func_0x00010567aa40(&uStack_9a0);
    func_0x00010567aa40(&uStack_940);
    func_0x00010567aa40(&uStack_8e0);
    func_0x00010567aa40(&uStack_880);
  }
  do {
    __Unwind_Resume(puVar9);
  } while( true );
}



/* Entry: 109b980c4; end: 109b986bb;  */

void FUN_109b980c4(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_200;
  ulong uStack_1f8;
  float *pfStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  double *pdStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_2 + 2);
    uStack_a0 = (ulong)&uStack_e0 | 8;
    uStack_d8 = puVar8[1];
    uStack_e0 = *puVar8;
    uStack_c8 = puVar8[3];
    uStack_d0 = puVar8[2];
    uStack_b8 = puVar8[5];
    uStack_c0 = puVar8[4];
    uStack_a8 = puVar8[7];
    uStack_b0 = puVar8[6];
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_90 = *(undefined8 *)puVar8[9];
      uStack_88 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_e0 = uStack_e0 & 0xffffffff;
      func_0x000109a84868(&uStack_e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_e0,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_3 + 2);
    uStack_100 = (ulong)&uStack_140 | 8;
    uStack_138 = puVar8[1];
    uStack_140 = *puVar8;
    uStack_128 = puVar8[3];
    uStack_130 = puVar8[2];
    uStack_118 = puVar8[5];
    uStack_120 = puVar8[4];
    uStack_108 = puVar8[7];
    uStack_110 = puVar8[6];
    puStack_f8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_f0 = *(undefined8 *)puVar8[9];
      uStack_e8 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_140 = uStack_140 & 0xffffffff;
      func_0x000109a84868(&uStack_140);
    }
  }
  else {
    FUN_109a8a180(&uStack_140,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_4 + 2);
    uStack_160 = (ulong)&uStack_1a0 | 8;
    uStack_198 = puVar8[1];
    uStack_1a0 = *puVar8;
    uStack_188 = puVar8[3];
    pdStack_190 = (double *)puVar8[2];
    uStack_178 = puVar8[5];
    uStack_180 = puVar8[4];
    uStack_168 = puVar8[7];
    uStack_170 = puVar8[6];
    puStack_158 = &uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_150 = *(undefined8 *)puVar8[9];
      uStack_148 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_1a0 = uStack_1a0 & 0xffffffff;
      func_0x000109a84868(&uStack_1a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1a0,param_4,0xffffffff);
  }
  puVar7 = &uStack_e0;
  FUN_109a89cd4(puVar7,2,0xffffffff,1);
  uVar6 = uStack_d0;
  uVar5 = uStack_130;
  dVar15 = *pdStack_190;
  dVar16 = pdStack_190[1];
  dVar17 = pdStack_190[2];
  dVar18 = pdStack_190[3];
  dVar19 = pdStack_190[4];
  dVar20 = pdStack_190[5];
  dVar21 = pdStack_190[6];
  dVar14 = pdStack_190[7];
  FUN_109a8f64c(param_5,puVar7,1,5,0xffffffff,0,0);
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_5 + 2);
    uStack_1c0 = (ulong)&uStack_200 | 8;
    uStack_1f8 = puVar8[1];
    uStack_200 = *puVar8;
    uStack_1e8 = puVar8[3];
    pfStack_1f0 = (float *)puVar8[2];
    uStack_1d8 = puVar8[5];
    uStack_1e0 = puVar8[4];
    uStack_1c8 = puVar8[7];
    uStack_1d0 = puVar8[6];
    puStack_1b8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_1b0 = *(undefined8 *)puVar8[9];
      uStack_1a8 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_200 = uStack_200 & 0xffffffff;
      func_0x000109a84868(&uStack_200);
    }
  }
  else {
    FUN_109a8a180(&uStack_200,param_5,0xffffffff);
  }
  pfVar13 = pfStack_1f0;
  if (uStack_1c8 != 0) {
    piVar1 = (int *)(uStack_1c8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_200);
    }
  }
  uStack_1c8 = 0;
  uStack_1e8 = 0;
  pfStack_1f0 = (float *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  if (0 < uStack_200._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_1c0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_200._4_4_);
  }
  if (puStack_1b8 != &uStack_1b0 && puStack_1b8 != (undefined8 *)0x0) {
    _free(puStack_1b8[-1]);
  }
  if (0 < (int)puVar7) {
    uVar10 = (ulong)puVar7 & 0xffffffff;
    pfVar11 = (float *)(uVar5 + 4);
    pfVar12 = (float *)(uVar6 + 4);
    do {
      fVar22 = pfVar12[-1];
      fVar23 = *pfVar12;
      fVar24 = 1.0 / (fVar23 * (float)dVar14 + fVar22 * (float)dVar21 + 1.0);
      fVar25 = (fVar23 * (float)dVar16 + fVar22 * (float)dVar15 + (float)dVar17) * fVar24 -
               pfVar11[-1];
      fVar22 = (fVar23 * (float)dVar19 + fVar22 * (float)dVar18 + (float)dVar20) * fVar24 - *pfVar11
      ;
      *pfVar13 = fVar22 * fVar22 + fVar25 * fVar25;
      pfVar11 = pfVar11 + 2;
      pfVar12 = pfVar12 + 2;
      uVar10 = uVar10 - 1;
      pfVar13 = pfVar13 + 1;
    } while (uVar10 != 0);
  }
  if (uStack_168 != 0) {
    piVar1 = (int *)(uStack_168 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1a0);
    }
  }
  uStack_168 = 0;
  uStack_188 = 0;
  pdStack_190 = (double *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (0 < uStack_1a0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_160 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_1a0._4_4_);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    _free(puStack_158[-1]);
  }
  if (uStack_108 != 0) {
    piVar1 = (int *)(uStack_108 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  uStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_100 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  if (uStack_a8 != 0) {
    piVar1 = (int *)(uStack_a8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109b986bc; end: 109b98a27;  */

undefined8 FUN_109b986bc(undefined8 param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_2 + 2);
    uStack_50 = (ulong)&uStack_90 | 8;
    uStack_88 = puVar9[1];
    uStack_90 = *puVar9;
    uStack_78 = puVar9[3];
    uStack_80 = puVar9[2];
    uStack_68 = puVar9[5];
    uStack_70 = puVar9[4];
    uStack_58 = puVar9[7];
    uStack_60 = puVar9[6];
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    if (puVar9[7] != 0) {
      piVar11 = (int *)(puVar9[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_40 = *(undefined8 *)puVar9[9];
      uStack_38 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_90 = uStack_90 & 0xffffffff;
      func_0x000109a84868(&uStack_90);
    }
  }
  else {
    FUN_109a8a180(&uStack_90,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_3 + 2);
    uStack_b0 = (ulong)&uStack_f0 | 8;
    uStack_e8 = puVar9[1];
    uStack_f0 = *puVar9;
    uStack_d8 = puVar9[3];
    uStack_e0 = puVar9[2];
    uStack_c8 = puVar9[5];
    uStack_d0 = puVar9[4];
    uStack_b8 = puVar9[7];
    uStack_c0 = puVar9[6];
    puStack_a8 = &uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if (puVar9[7] != 0) {
      piVar11 = (int *)(puVar9[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_a0 = *(undefined8 *)puVar9[9];
      uStack_98 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_f0 = uStack_f0 & 0xffffffff;
      func_0x000109a84868(&uStack_f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_f0,param_3,0xffffffff);
  }
  uVar7 = uStack_80;
  uVar8 = uStack_80;
  FUN_109b98a28(uStack_80,param_4);
  uVar6 = uStack_e0;
  if (((uVar8 & 1) == 0) && (uVar8 = uStack_e0, FUN_109b98a28(uStack_e0,param_4), (uVar8 & 1) == 0))
  {
    if ((int)param_4 == 4) {
      uVar10 = 0;
      piVar11 = (int *)&UNK_10e03638c;
      lVar12 = 4;
      do {
        uVar19 = *(undefined8 *)(uVar7 + (long)piVar11[-2] * 8);
        uVar20 = *(undefined8 *)(uVar7 + (long)piVar11[-1] * 8);
        uVar21 = *(undefined8 *)(uVar7 + (long)*piVar11 * 8);
        uVar22 = *(undefined8 *)(uVar6 + (long)piVar11[-2] * 8);
        uVar23 = *(undefined8 *)(uVar6 + (long)piVar11[-1] * 8);
        fVar4 = (float)uVar20;
        fVar15 = (float)uVar23;
        fVar13 = (float)((ulong)uVar20 >> 0x20);
        fVar17 = (float)((ulong)uVar23 >> 0x20);
        uVar20 = *(undefined8 *)(uVar6 + (long)*piVar11 * 8);
        fVar5 = (float)uVar21;
        fVar16 = (float)uVar20;
        fVar14 = (float)((ulong)uVar21 >> 0x20);
        fVar18 = (float)((ulong)uVar20 >> 0x20);
        if ((fVar13 * -fVar5 + fVar14 * fVar4 +
            (fVar4 - fVar5) * -(float)((ulong)uVar19 >> 0x20) + (fVar13 - fVar14) * (float)uVar19) *
            (fVar17 * -fVar16 + fVar18 * fVar15 +
            (fVar15 - fVar16) * -(float)((ulong)uVar22 >> 0x20) + (fVar17 - fVar18) * (float)uVar22)
            < 0.0) {
          uVar10 = uVar10 + 1;
        }
        piVar11 = piVar11 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if ((uVar10 & 0x7ffffffb) != 0) goto LAB_109b988ec;
    }
    uVar19 = 1;
  }
  else {
LAB_109b988ec:
    uVar19 = 0;
  }
  if (uStack_b8 != 0) {
    piVar11 = (int *)(uStack_b8 + 0x14);
    do {
      iVar1 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  uStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_b0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_f0._4_4_);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
  }
  if (uStack_58 != 0) {
    piVar11 = (int *)(uStack_58 + 0x14);
    do {
      iVar1 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  uStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (0 < uStack_90._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_50 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_90._4_4_);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return uVar19;
}



/* Entry: 109b98a28; end: 109b98aeb;  */

bool FUN_109b98a28(long param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (1 < param_2) {
    uVar2 = 0;
    uVar3 = (ulong)(param_2 - 1);
    pfVar5 = (float *)(param_1 + uVar3 * 8);
    fVar6 = *pfVar5;
    fVar7 = pfVar5[1];
    bVar1 = true;
    do {
      if (uVar2 != 0) {
        pfVar5 = (float *)(param_1 + uVar2 * 8);
        fVar8 = *pfVar5 - fVar6;
        fVar9 = pfVar5[1] - fVar7;
        uVar4 = uVar2;
        pfVar5 = (float *)(param_1 + 4);
        do {
          fVar10 = pfVar5[-1] - fVar6;
          fVar11 = *pfVar5 - fVar7;
          if (ABS(-(fVar11 * fVar8) + fVar9 * fVar10) <=
              (ABS(fVar8) + ABS(fVar9) + ABS(fVar10) + ABS(fVar11)) * 1.1920929e-07) {
            return bVar1;
          }
          pfVar5 = pfVar5 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar2 = uVar2 + 1;
      bVar1 = uVar2 < uVar3;
    } while (uVar2 != uVar3);
  }
  return false;
}



/* Entry: 109b98aec; end: 109b98b27;  */

void FUN_109b98aec(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b98b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b98b28; end: 109b98b7b;  */

long * FUN_109b98b28(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b98b7c; end: 109b98bcf;  */

long * FUN_109b98b7c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b98bd0; end: 109b98bd3;  */

undefined8 * FUN_109b98bd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b299c8;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b98bd4; end: 109b98be7;  */

void FUN_109b98bd4(void)

{
  FUN_109b992ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b98be8; end: 109b992eb;  */

undefined8 FUN_109b98be8(long param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  double *pdVar12;
  double *pdVar13;
  float *pfVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  byte bStack_16f;
  undefined2 uStack_16e;
  int iStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  double *pdStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar11 = param_1 + 8;
  FUN_109a89cd4(uVar11,2,0xffffffff,1);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_2 + 2);
    uStack_70 = (ulong)&uStack_b0 | 8;
    uStack_a8 = puVar8[1];
    uStack_b0 = *puVar8;
    uStack_98 = puVar8[3];
    pdStack_a0 = (double *)puVar8[2];
    uStack_88 = puVar8[5];
    uStack_90 = puVar8[4];
    uStack_78 = puVar8[7];
    uStack_80 = puVar8[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_60 = *(undefined8 *)puVar8[9];
      uStack_58 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffffff;
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_b0,param_2,0xffffffff);
  }
  iVar2 = (int)uVar11 << 1;
  FUN_109a8f64c(param_3,iVar2,1,6,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_3 + 2);
    uStack_d0 = (ulong)&uStack_110 | 8;
    uStack_108 = puVar8[1];
    uStack_110 = *puVar8;
    uStack_f8 = puVar8[3];
    uStack_100 = puVar8[2];
    uStack_e8 = puVar8[5];
    uStack_f0 = puVar8[4];
    uStack_d8 = puVar8[7];
    uStack_e0 = puVar8[6];
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_c0 = *(undefined8 *)puVar8[9];
      uStack_b8 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_110 = uStack_110 & 0xffffffff;
      func_0x000109a84868(&uStack_110);
    }
  }
  else {
    FUN_109a8a180(&uStack_110,param_3,0xffffffff);
  }
  uStack_170 = 0;
  bStack_16f = 0;
  uStack_16e = 0x42ff;
  uVar15 = (ulong)&uStack_170 | 8;
  iStack_164 = 0;
  uStack_160 = 0;
  iStack_16c = 0;
  uStack_168 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar15;
  puStack_128 = &uStack_120;
  if ((*param_4 & 0x1f0000) != 0) {
    FUN_109a8f64c(param_4,iVar2,uStack_a8 & 0xffffffff,6,0xffffffff,0,0);
    if ((*param_4 & 0x1f0000) == 0x10000) {
      puVar8 = *(ulong **)(param_4 + 2);
      uStack_190 = (ulong)&uStack_1d0 | 8;
      uStack_1c8 = puVar8[1];
      uStack_1d0 = (undefined4 *)*puVar8;
      uStack_1b8 = puVar8[3];
      uStack_1c0 = puVar8[2];
      uStack_1a8 = puVar8[5];
      uStack_1b0 = puVar8[4];
      uStack_198 = puVar8[7];
      uStack_1a0 = puVar8[6];
      puStack_188 = &uStack_180;
      uStack_180 = 0;
      uStack_178 = 0;
      if (puVar8[7] != 0) {
        piVar1 = (int *)(puVar8[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar8 + 4) < 3) {
        uStack_180 = *(undefined8 *)puVar8[9];
        uStack_178 = ((undefined8 *)puVar8[9])[1];
      }
      else {
        uStack_1d0 = (undefined4 *)((ulong)uStack_1d0 & 0xffffffff);
        func_0x000109a84868(&uStack_1d0);
      }
    }
    else {
      FUN_109a8a180(&uStack_1d0,param_4,0xffffffff);
    }
    if (uStack_138 != 0) {
      piVar1 = (int *)(uStack_138 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_170);
      }
    }
    if (0 < iStack_16c) {
      lVar9 = 0;
      do {
        *(undefined4 *)(uStack_130 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_16c);
    }
    uStack_168 = (undefined4)uStack_1c8;
    iStack_164 = (int)(uStack_1c8 >> 0x20);
    uStack_170 = SUB81(uStack_1d0,0);
    bStack_16f = (byte)((ulong)uStack_1d0 >> 8);
    uStack_16e = (undefined2)((ulong)uStack_1d0 >> 0x10);
    uStack_158 = (undefined4)uStack_1b8;
    uStack_154 = (undefined4)(uStack_1b8 >> 0x20);
    uStack_160 = (undefined4)uStack_1c0;
    uStack_15c = (undefined4)(uStack_1c0 >> 0x20);
    uStack_148 = (undefined4)uStack_1a8;
    uStack_144 = (undefined4)(uStack_1a8 >> 0x20);
    uStack_150 = (undefined4)uStack_1b0;
    uStack_14c = (undefined4)(uStack_1b0 >> 0x20);
    uStack_138 = uStack_198;
    uStack_140 = (undefined4)uStack_1a0;
    uStack_13c = (undefined4)(uStack_1a0 >> 0x20);
    iStack_16c = uStack_1d0._4_4_;
    uVar5 = uStack_130;
    puVar10 = puStack_128;
    if ((puStack_128 != &uStack_120) &&
       (uVar5 = uVar15, puVar10 = &uStack_120, puStack_128 != (undefined8 *)0x0)) {
      _free(puStack_128[-1]);
    }
    puStack_128 = puVar10;
    uStack_130 = uVar5;
    if (uStack_1d0._4_4_ < 3) {
      puVar10 = (undefined8 *)((ulong)&uStack_1d0 | 4);
      *puStack_128 = *puStack_188;
      puStack_128[1] = puStack_188[1];
      uStack_1d0 = (undefined4 *)CONCAT44(uStack_1d0._4_4_,0x42ff0000);
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      if (puStack_188 != &uStack_180) {
        _free(puStack_188[-1]);
      }
    }
    else {
      uStack_130 = uStack_190;
      puStack_128 = puStack_188;
    }
    if (((bStack_16f >> 6 & 1) == 0) || (iStack_164 != 8)) {
      puVar7 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      uStack_1d0 = puVar7 + 1;
      uStack_1c8 = 0x1f;
      *(undefined1 *)((long)puVar7 + 0x23) = 0;
      *(undefined8 *)(puVar7 + 3) = 0x292873756f756e69;
      *(undefined8 *)(puVar7 + 1) = 0x746e6f4373692e4a;
      *(undefined8 *)((long)puVar7 + 0x1b) = 0x38203d3d20736c6f;
      *(undefined8 *)((long)puVar7 + 0x13) = 0x632e4a2026262029;
      FUN_109ac3188(0xffffff29,&uStack_1d0,&DAT_10f556389,&UNK_10f5a2897,0xde);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109b99270);
      (*pcVar6)();
    }
  }
  if (0 < (int)uVar11) {
    pdVar12 = (double *)CONCAT44(uStack_15c,uStack_160);
    uVar11 = uVar11 & 0xffffffff;
    pdVar13 = (double *)(uStack_100 + 8);
    pfVar14 = (float *)(*(long *)(param_1 + 0x78) + 4);
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    do {
      dVar16 = (double)(float)*puVar10;
      dVar17 = (double)(float)((ulong)*puVar10 >> 0x20);
      dVar18 = pdStack_a0[7] * dVar17 + dVar16 * pdStack_a0[6] + 1.0;
      dVar19 = 1.0 / dVar18;
      if (ABS(dVar18) <= 2.220446049250313e-16) {
        dVar19 = 0.0;
      }
      dVar20 = (pdStack_a0[2] + pdStack_a0[1] * dVar17 + dVar16 * *pdStack_a0) * dVar19;
      dVar18 = dVar19 * (pdStack_a0[5] + pdStack_a0[4] * dVar17 + dVar16 * pdStack_a0[3]);
      pdVar13[-1] = dVar20 - (double)pfVar14[-1];
      *pdVar13 = dVar18 - (double)*pfVar14;
      if (pdVar12 != (double *)0x0) {
        pdVar12[1] = dVar17 * dVar19;
        *pdVar12 = dVar16 * dVar19;
        pdVar12[2] = dVar19;
        pdVar12[4] = 0.0;
        pdVar12[5] = 0.0;
        pdVar12[3] = 0.0;
        pdVar12[7] = -dVar17 * dVar19 * dVar20;
        pdVar12[6] = -dVar16 * dVar19 * dVar20;
        pdVar12[9] = 0.0;
        pdVar12[10] = 0.0;
        pdVar12[8] = 0.0;
        pdVar12[0xc] = dVar17 * dVar19;
        pdVar12[0xb] = dVar16 * dVar19;
        pdVar12[0xd] = dVar19;
        pdVar12[0xf] = -dVar17 * dVar19 * dVar18;
        pdVar12[0xe] = -dVar16 * dVar19 * dVar18;
        pdVar12 = pdVar12 + 0x10;
      }
      pfVar14 = pfVar14 + 2;
      pdVar13 = pdVar13 + 2;
      uVar11 = uVar11 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar11 != 0);
  }
  if (uStack_138 != 0) {
    piVar1 = (int *)(uStack_138 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_170);
    }
  }
  uStack_138 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  if (0 < iStack_16c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_130 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_16c);
  }
  if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
    _free(puStack_128[-1]);
  }
  if (uStack_d8 != 0) {
    piVar1 = (int *)(uStack_d8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  uStack_d8 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (0 < uStack_110._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_d0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_110._4_4_);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  if (uStack_78 != 0) {
    piVar1 = (int *)(uStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  uStack_78 = 0;
  uStack_98 = 0;
  pdStack_a0 = (double *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return 1;
}



/* Entry: 109b992ec; end: 109b99417;  */

undefined8 * FUN_109b992ec(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b299c8;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b99418; end: 109b9941f;  */

void FUN_109b99418(void)

{
  return;
}


