/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad500e4; end: 10ad502f3;  */

void FUN_10ad500e4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 - 3U < 2) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f84e0(puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110f2ddd8);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  __Unwind_Resume();
  func_0x00010bf5a8c0(PTR__OBJC_CLASS___PHAssetCreationRequest_1126d7fe0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10ad502f4; end: 10ad5031f;  */

void FUN_10ad502f4(long param_1,undefined8 param_2)

{
  func_0x00010bf5a8c0(PTR__OBJC_CLASS___PHAssetCreationRequest_1126d7fe0,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10ad50320; end: 10ad50407;  */

void FUN_10ad50320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if ((int)param_2 == 0) {
    uVar1 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&PTR____CFConstantStringClassReference_110f2ddb8);
    _objc_release(uVar1);
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110f2dd98);
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad50408; end: 10ad50543; +[HDRImageExporter createPixelBufferFromHDRImage:format:] */

undefined8 * FUN_10ad50408(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *extraout_x8;
  long *plVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  code *pcStack_168;
  undefined1 uStack_138;
  long lStack_128;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  puStack_40 = PTR____NSDictionary0__struct_11034ab58;
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)*(int *)(param_3 + 0x10);
  _CVPixelBufferCreateWithPlanarBytes();
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined8 *)0x0;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar2 == (undefined8 *)0x0) {
    extraout_x8[4] = 0;
    extraout_x8[3] = 0;
    extraout_x8[8] = 0;
    extraout_x8[7] = 0;
    extraout_x8[6] = 0;
    extraout_x8[5] = 0;
    extraout_x8[10] = 0;
    extraout_x8[9] = 0;
    extraout_x8[0xc] = 0;
    extraout_x8[0xb] = 0;
    extraout_x8[0x14] = 0;
    extraout_x8[0x13] = 0;
    extraout_x8[0x12] = 0;
    extraout_x8[0x11] = 0;
    extraout_x8[0x10] = 0;
    extraout_x8[0xf] = 0;
    extraout_x8[0xe] = 0;
    extraout_x8[0xd] = 0;
    extraout_x8[2] = 0;
    extraout_x8[1] = 0;
    *(undefined4 *)((long)extraout_x8 + 0x24) = 0xffffffff;
    extraout_x8[7] = 0;
    extraout_x8[8] = 0;
    extraout_x8[5] = 0;
    extraout_x8[6] = 0;
    extraout_x8[9] = 0x109d138c8;
    extraout_x8[10] = &PTR_DAT_110b3e838;
    extraout_x8[0xb] = FUN_10a1b2664;
    *extraout_x8 = &PTR_FUN_110c70718;
    *(undefined8 *)((long)extraout_x8 + 0x94) = 0x300000004;
    *(undefined8 *)((long)extraout_x8 + 0x8c) = 0x30000000a;
    *(undefined8 *)((long)extraout_x8 + 0x9c) = 0xbf80000000000002;
    goto LAB_10ad50a4c;
  }
  puVar3 = puVar2;
  _CVPixelBufferGetPixelFormatType();
  uVar7 = 0x15;
  if (((int)puVar3 != 0x78343230) && ((int)puVar3 != 0x78663230)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a7a66,0x5d,&UNK_10f6a7aae);
    }
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    uVar7 = 0xffffffff;
  }
  FUN_10ad51d24(&uStack_1c0,puVar2,lVar6,uVar7,0xffffffff);
  extraout_x8[3] = uStack_1a8;
  extraout_x8[2] = uStack_1b0;
  extraout_x8[5] = uStack_198;
  extraout_x8[4] = uStack_1a0;
  extraout_x8[7] = uStack_188;
  extraout_x8[6] = uStack_190;
  *(undefined1 *)(extraout_x8 + 1) = 0;
  *extraout_x8 = &PTR_FUN_110bab9a0;
  extraout_x8[8] = 0;
  extraout_x8[9] = uStack_178;
  (*(code *)ppuStack_170[2])(extraout_x8 + 10,&ppuStack_170);
  *(undefined1 *)(extraout_x8 + 0x11) = uStack_138;
  uStack_178 = 0x109d138c8;
  (*(code *)*ppuStack_170)(&ppuStack_170);
  ppuStack_170 = &PTR_DAT_110b3e838;
  pcStack_168 = FUN_10a1b2664;
  *extraout_x8 = &PTR_FUN_110c70718;
  *(undefined8 *)((long)extraout_x8 + 0x94) = 0x300000004;
  *(undefined8 *)((long)extraout_x8 + 0x8c) = 0x30000000a;
  *(undefined8 *)((long)extraout_x8 + 0x9c) = 0xbf80000000000002;
  FUN_10a1b2b9c(&uStack_1c0);
  uStack_1b8 = 0x300000004;
  uStack_1c0 = 0x30000000a;
  uStack_1b0 = 0xbf80000000000002;
  puVar3 = (undefined8 *)0x2;
  func_0x000107c31924(2,0x12,0,0);
  if ((int)puVar3 != 0) {
    puVar3 = puVar2;
    _CVPixelBufferGetPixelFormatType();
    iVar1 = (int)puVar3;
    if ((iVar1 == 0x78663230) || (iVar1 == 0x78343230)) {
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,10);
    }
    else if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x18,&UNK_10f6a7948);
    }
    puVar3 = puVar2;
    _CVBufferCopyAttachment(puVar2,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8,0);
    if (puVar3 == (undefined8 *)0x0) {
LAB_10ad507ec:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x24,&UNK_10f6a797a);
      }
      uStack_1c0 = CONCAT44(3,(undefined4)uStack_1c0);
    }
    else {
      puVar4 = puVar3;
      _CFGetTypeID();
      puVar5 = puVar4;
      _CFStringGetTypeID();
      if (puVar4 != puVar5) goto LAB_10ad507ec;
      puVar4 = puVar3;
      FUN_10ad4f294();
      uStack_1c0 = CONCAT44((int)puVar4,(undefined4)uStack_1c0);
      _CFRelease(puVar3);
    }
    puVar3 = puVar2;
    _CVBufferCopyAttachment
              (puVar2,*(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310,0);
    if (puVar3 == (undefined8 *)0x0) {
LAB_10ad50878:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x30,&UNK_10f6a79c9);
      }
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,4);
    }
    else {
      puVar4 = puVar3;
      _CFGetTypeID();
      puVar5 = puVar4;
      _CFStringGetTypeID();
      if (puVar4 != puVar5) goto LAB_10ad50878;
      puVar4 = puVar3;
      FUN_10ad50ab8();
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,(int)puVar4);
      _CFRelease(puVar3);
    }
    puVar3 = puVar2;
    _CVBufferCopyAttachment(puVar2,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,0);
    if (puVar3 == (undefined8 *)0x0) {
LAB_10ad50904:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x3b,&UNK_10f6a7a1a);
      }
      uStack_1b8 = CONCAT44(3,(undefined4)uStack_1b8);
    }
    else {
      puVar4 = puVar3;
      _CFGetTypeID();
      puVar5 = puVar4;
      _CFStringGetTypeID();
      if (puVar4 != puVar5) goto LAB_10ad50904;
      puVar4 = puVar3;
      func_0x00010ad50b64();
      uStack_1b8 = CONCAT44((int)puVar4,(undefined4)uStack_1b8);
      _CFRelease(puVar3);
    }
    uVar8 = 1;
    if (iVar1 < 0x78343230) {
      if (iVar1 == 0x34323066) {
LAB_10ad50998:
        uVar8 = 0;
      }
      else if (iVar1 != 0x34323076) {
LAB_10ad509d8:
        uVar8 = 2;
      }
    }
    else if (iVar1 != 0x78343230) {
      if (iVar1 != 0x78663230) goto LAB_10ad509d8;
      goto LAB_10ad50998;
    }
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar8);
    _CVBufferCopyAttachment
              (puVar2,*(undefined8 *)PTR__kCVImageBufferSceneIlluminationKey_11034a308,0);
    puVar3 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
      _CFGetTypeID();
      puVar3 = puVar4;
      _CFNumberGetTypeID();
      if (puVar4 == puVar3) {
        _CFNumberGetValue(puVar2,0xc,(long)&uStack_1b0 + 4);
        _CFRelease();
        puVar3 = puVar2;
        goto LAB_10ad50a3c;
      }
    }
    uStack_1b0 = CONCAT44(0xbf800000,(undefined4)uStack_1b0);
  }
LAB_10ad50a3c:
  *(undefined8 *)((long)extraout_x8 + 0x94) = uStack_1b8;
  *(undefined8 *)((long)extraout_x8 + 0x8c) = uStack_1c0;
  *(undefined8 *)((long)extraout_x8 + 0x9c) = uStack_1b0;
  puVar2 = puVar3;
LAB_10ad50a4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *puVar2 = &PTR_FUN_110bab9a0;
  plVar9 = puVar2 + 10;
  puVar3 = (undefined8 *)*plVar9;
  if (*(char *)(puVar3 + 1) == '\x01') {
    (*(code *)puVar2[9])(puVar2[5]);
    puVar3 = (undefined8 *)*plVar9;
  }
  puVar2[5] = 0;
  (*(code *)*puVar3)(plVar9);
  return puVar2;
}



/* Entry: 10ad50544; end: 10ad50a9f;  */

undefined8 * FUN_10ad50544(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  undefined1 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined8 *)0x0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0x109d138c8;
    param_1[10] = &PTR_DAT_110b3e838;
    param_1[0xb] = FUN_10a1b2664;
    *param_1 = &PTR_FUN_110c70718;
    *(undefined8 *)((long)param_1 + 0x94) = 0x300000004;
    *(undefined8 *)((long)param_1 + 0x8c) = 0x30000000a;
    *(undefined8 *)((long)param_1 + 0x9c) = 0xbf80000000000002;
    goto LAB_10ad50a4c;
  }
  puVar2 = param_2;
  _CVPixelBufferGetPixelFormatType();
  uVar5 = 0x15;
  if (((int)puVar2 != 0x78343230) && ((int)puVar2 != 0x78663230)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a7a66,0x5d,&UNK_10f6a7aae,in_x6,in_x7,puVar2);
    }
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    uVar5 = 0xffffffff;
  }
  FUN_10ad51d24(&uStack_f0,param_2,param_3,uVar5,0xffffffff);
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110bab9a0;
  param_1[8] = 0;
  param_1[9] = uStack_a8;
  (*(code *)ppuStack_a0[2])(param_1 + 10,&ppuStack_a0);
  *(undefined1 *)(param_1 + 0x11) = uStack_68;
  uStack_a8 = 0x109d138c8;
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  ppuStack_a0 = &PTR_DAT_110b3e838;
  pcStack_98 = FUN_10a1b2664;
  *param_1 = &PTR_FUN_110c70718;
  *(undefined8 *)((long)param_1 + 0x94) = 0x300000004;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x30000000a;
  *(undefined8 *)((long)param_1 + 0x9c) = 0xbf80000000000002;
  FUN_10a1b2b9c(&uStack_f0);
  uStack_e8 = 0x300000004;
  uStack_f0 = 0x30000000a;
  uStack_e0 = 0xbf80000000000002;
  puVar2 = (undefined8 *)0x2;
  func_0x000107c31924(2,0x12,0,0);
  if ((int)puVar2 != 0) {
    puVar2 = param_2;
    _CVPixelBufferGetPixelFormatType();
    iVar1 = (int)puVar2;
    if ((iVar1 == 0x78663230) || (iVar1 == 0x78343230)) {
      uStack_f0 = CONCAT44(uStack_f0._4_4_,10);
    }
    else if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x18,&UNK_10f6a7948);
    }
    puVar2 = param_2;
    _CVBufferCopyAttachment(param_2,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8,0)
    ;
    if (puVar2 == (undefined8 *)0x0) {
LAB_10ad507ec:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x24,&UNK_10f6a797a);
      }
      uStack_f0 = CONCAT44(3,(undefined4)uStack_f0);
    }
    else {
      puVar3 = puVar2;
      _CFGetTypeID();
      puVar4 = puVar3;
      _CFStringGetTypeID();
      if (puVar3 != puVar4) goto LAB_10ad507ec;
      puVar3 = puVar2;
      FUN_10ad4f294();
      uStack_f0 = CONCAT44((int)puVar3,(undefined4)uStack_f0);
      _CFRelease(puVar2);
    }
    puVar2 = param_2;
    _CVBufferCopyAttachment
              (param_2,*(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310,0);
    if (puVar2 == (undefined8 *)0x0) {
LAB_10ad50878:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x30,&UNK_10f6a79c9);
      }
      uStack_e8 = CONCAT44(uStack_e8._4_4_,4);
    }
    else {
      puVar3 = puVar2;
      _CFGetTypeID();
      puVar4 = puVar3;
      _CFStringGetTypeID();
      if (puVar3 != puVar4) goto LAB_10ad50878;
      puVar3 = puVar2;
      FUN_10ad50ab8();
      uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)puVar3);
      _CFRelease(puVar2);
    }
    puVar2 = param_2;
    _CVBufferCopyAttachment(param_2,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,0);
    if (puVar2 == (undefined8 *)0x0) {
LAB_10ad50904:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a78b6,&UNK_10f6a78ff,0x3b,&UNK_10f6a7a1a);
      }
      uStack_e8 = CONCAT44(3,(undefined4)uStack_e8);
    }
    else {
      puVar3 = puVar2;
      _CFGetTypeID();
      puVar4 = puVar3;
      _CFStringGetTypeID();
      if (puVar3 != puVar4) goto LAB_10ad50904;
      puVar3 = puVar2;
      func_0x00010ad50b64();
      uStack_e8 = CONCAT44((int)puVar3,(undefined4)uStack_e8);
      _CFRelease(puVar2);
    }
    uVar6 = 1;
    if (iVar1 < 0x78343230) {
      if (iVar1 == 0x34323066) {
LAB_10ad50998:
        uVar6 = 0;
      }
      else if (iVar1 != 0x34323076) {
LAB_10ad509d8:
        uVar6 = 2;
      }
    }
    else if (iVar1 != 0x78343230) {
      if (iVar1 != 0x78663230) goto LAB_10ad509d8;
      goto LAB_10ad50998;
    }
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
    _CVBufferCopyAttachment
              (param_2,*(undefined8 *)PTR__kCVImageBufferSceneIlluminationKey_11034a308,0);
    puVar2 = param_2;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
      _CFGetTypeID();
      puVar2 = puVar3;
      _CFNumberGetTypeID();
      if (puVar3 == puVar2) {
        _CFNumberGetValue(param_2,0xc,(long)&uStack_e0 + 4);
        _CFRelease();
        puVar2 = param_2;
        goto LAB_10ad50a3c;
      }
    }
    uStack_e0 = CONCAT44(0xbf800000,(undefined4)uStack_e0);
  }
LAB_10ad50a3c:
  *(undefined8 *)((long)param_1 + 0x94) = uStack_e8;
  *(undefined8 *)((long)param_1 + 0x8c) = uStack_f0;
  *(undefined8 *)((long)param_1 + 0x9c) = uStack_e0;
  param_2 = puVar2;
LAB_10ad50a4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume();
    *param_2 = &PTR_FUN_110bab9a0;
    plVar7 = param_2 + 10;
    puVar2 = (undefined8 *)*plVar7;
    if (*(char *)(puVar2 + 1) == '\x01') {
      (*(code *)param_2[9])(param_2[5]);
      puVar2 = (undefined8 *)*plVar7;
    }
    param_2[5] = 0;
    (*(code *)*puVar2)(plVar7);
    return param_2;
  }
  return param_2;
}



/* Entry: 10ad50aa0; end: 10ad50aa3;  */

undefined8 * FUN_10ad50aa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bab9a0;
  plVar2 = param_1 + 10;
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (*(code *)param_1[9])(param_1[5]);
    puVar1 = (undefined8 *)*plVar2;
  }
  param_1[5] = 0;
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 10ad50aa4; end: 10ad50ab7;  */

void FUN_10ad50aa4(void)

{
  FUN_10a1b2b9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad50ab8; end: 10ad50bf3;  */

undefined4 FUN_10ad50ab8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 4;
  }
  lVar1 = param_1;
  _CFStringCompare(param_1,*(undefined8 *)
                            PTR__kCVImageBufferTransferFunction_ITU_R_2100_HLG_11034a320,0);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = param_1;
    _CFStringCompare(param_1,*(undefined8 *)
                              PTR__kCVImageBufferTransferFunction_SMPTE_ST_2084_PQ_11034a338,0);
    if (lVar1 == 0) {
      uVar2 = 2;
    }
    else {
      lVar1 = param_1;
      _CFStringCompare(param_1,*(undefined8 *)
                                PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328,0);
      uVar2 = 0;
      if (lVar1 != 0) {
        _CFStringCompare(param_1,*(undefined8 *)PTR__kCVImageBufferTransferFunction_Linear_11034a330
                         ,0);
        uVar2 = 3;
        if (param_1 != 0) {
          uVar2 = 4;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 10ad50bf4; end: 10ad50dc7;  */

void FUN_10ad50bf4(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_3d0 [51];
  undefined1 uStack_238;
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined4 auStack_1f0 [2];
  long lStack_1e8;
  long lStack_1e0;
  undefined8 auStack_c0 [3];
  undefined8 auStack_a8 [10];
  ulong uStack_58;
  
  if ((param_3 & 0xfffffffd) == 0) {
    uStack_58 = param_4 >> 0x20 | param_4 << 0x20;
  }
  else {
    uStack_58 = param_4;
    if (((int)param_3 == 3) && (param_3 >> 0x20 == 2)) {
      lVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar3;
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
  }
  FUN_10a30f97c();
  FUN_10a30fb38(param_1);
  plVar2 = (long *)*param_1;
  (**(code **)(*plVar2 + 0x30))();
  plVar5 = (long *)plVar2[3];
  plVar2 = plVar5;
  func_0x00010a08f1bc();
  FUN_10a0e3e64(auStack_1f0,plVar5);
  auStack_1f0[0] = 2;
  if ((*(byte *)(*plVar2 + 0x440) & 1) != 0) {
    lVar3 = *plVar2 + 0x128;
    func_0x00010a155a18(lVar3);
    if (lStack_1e0 != lStack_1e8) {
      FUN_10a19ea9c(lStack_1e8,lVar3);
      lVar3 = *param_2;
      lVar4 = *param_1;
      FUN_10ad4ad70(auStack_230,&UNK_10e510080,param_3);
      func_0x00010ad4ade8(auStack_210,auStack_230,param_3 >> 0x20);
      FUN_10a156fa0(aplStack_3d0,auStack_1f0);
      uStack_238 = 1;
      FUN_10a0e36c0(lVar3,lVar4,auStack_210,aplStack_3d0);
      FUN_10a09d158(aplStack_3d0);
      aplStack_3d0[0] = auStack_a8;
      FUN_10a09d1bc(aplStack_3d0);
      aplStack_3d0[0] = auStack_c0;
      FUN_10a09d284(aplStack_3d0);
      aplStack_3d0[0] = &lStack_1e8;
      func_0x00010a09d2f4(aplStack_3d0);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad50d88);
  (*pcVar1)();
}



/* Entry: 10ad50dc8; end: 10ad50f53;  */

/* WARNING: Removing unreachable block (ram,0x00010ad511c8) */
/* WARNING: Removing unreachable block (ram,0x00010ad511cc) */
/* WARNING: Removing unreachable block (ram,0x00010ad511d4) */
/* WARNING: Removing unreachable block (ram,0x00010ad511dc) */
/* WARNING: Removing unreachable block (ram,0x00010ad511e0) */

undefined1 ** FUN_10ad50dc8(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined1 **ppuVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 in_w3;
  undefined8 uVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_468 [288];
  byte bStack_348;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [80];
  undefined1 *puStack_2d8;
  long *plStack_2d0;
  undefined1 uStack_140;
  long lStack_138;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined1 *apuStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ad52c3c(apuStack_b8);
  uStack_c0 = uStack_a8;
  FUN_10a30f97c();
  uVar9 = 1;
  bVar10 = 0x35;
  plVar11 = (long *)0x1;
  FUN_10a30fb38(&plStack_d0);
  (**(code **)(*plStack_d0 + 0x40))(plStack_d0,apuStack_b8);
  plStack_d8 = plStack_c8;
  plStack_e0 = plStack_d0;
  if (plStack_c8 != (long *)0x0) {
    plVar5 = plStack_c8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar8 = uStack_c0;
  FUN_10ad50bf4(param_1,&plStack_e0);
  plVar5 = plStack_d8;
  uVar7 = (undefined4)uVar8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar5 = plStack_c8 + 1;
    do {
      lVar12 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  ppuVar4 = apuStack_b8;
  FUN_10a1b2b9c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a09db0c(&plStack_e0);
  func_0x00010a09db0c(&plStack_d0);
  FUN_10a1b2b9c(apuStack_b8);
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a30f97c();
  uStack_470 = in_w3;
  uStack_46c = uVar7;
  FUN_10a30fb38(&puStack_2d8);
  func_0x00010a099dfc(plVar11,&puStack_2d8);
  if (plStack_2d0 != (long *)0x0) {
    plVar5 = plStack_2d0 + 1;
    do {
      lVar12 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d0);
    }
  }
  plVar5 = (long *)*plVar11;
  (**(code **)(*plVar5 + 0x30))();
  FUN_10a0e3e64(&uStack_470,plVar5[3]);
  uStack_470 = 2;
  bStack_348 = bVar10 ^ 1;
  puVar13 = *ppuVar4;
  lVar12 = *plVar11;
  FUN_10a156fa0(&puStack_2d8,&uStack_470);
  uStack_140 = 1;
  func_0x00010a0e3828(puVar13,lVar12,uVar9,&puStack_2d8);
  FUN_10a09d158(&puStack_2d8);
  plVar5 = (long *)0x90;
  __Znwm();
  FUN_10a1b2a84();
  plVar11 = (long *)*plVar11;
  (**(code **)(*plVar11 + 0x10))
            (plVar11,plVar5[5],plVar5[3],0,*(undefined4 *)((long)plVar11 + 0x1c));
  FUN_10a12add4(&puStack_2d8,plVar5 + 2);
  ppuVar4 = &puStack_2d8;
  FUN_10ad51860(ppuVar4,2);
  (**(code **)(*plVar5 + 8))(plVar5);
  puStack_2d8 = auStack_328;
  FUN_10a09d1bc(&puStack_2d8);
  puStack_2d8 = auStack_340;
  FUN_10a09d284(&puStack_2d8);
  puStack_2d8 = auStack_468;
  ppuVar6 = &puStack_2d8;
  func_0x00010a09d2f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    (**(code **)(*plVar5 + 8))(plVar5);
    FUN_10a154428(&uStack_470);
    __Unwind_Resume(ppuVar6);
    FUN_10ad50f54();
    return ppuVar6;
  }
  return ppuVar4;
}



/* Entry: 10ad50f54; end: 10ad5119f;  */

/* WARNING: Removing unreachable block (ram,0x00010ad511c8) */
/* WARNING: Removing unreachable block (ram,0x00010ad511cc) */
/* WARNING: Removing unreachable block (ram,0x00010ad511d4) */
/* WARNING: Removing unreachable block (ram,0x00010ad511dc) */
/* WARNING: Removing unreachable block (ram,0x00010ad511e0) */

undefined1 **
FUN_10ad50f54(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             byte param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 auStack_388 [288];
  byte bStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [80];
  undefined1 *puStack_1f8;
  long *plStack_1f0;
  undefined1 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a30f97c();
  uStack_390 = param_2;
  uStack_38c = param_3;
  FUN_10a30fb38(&puStack_1f8);
  func_0x00010a099dfc(param_6,&puStack_1f8);
  if (plStack_1f0 != (long *)0x0) {
    plVar3 = plStack_1f0 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1f0);
    }
  }
  plVar3 = (long *)*param_6;
  (**(code **)(*plVar3 + 0x30))();
  FUN_10a0e3e64(&uStack_390,plVar3[3]);
  uStack_390 = 2;
  bStack_268 = param_5 ^ 1;
  uVar7 = *param_1;
  lVar6 = *param_6;
  FUN_10a156fa0(&puStack_1f8,&uStack_390);
  uStack_60 = 1;
  func_0x00010a0e3828(uVar7,lVar6,param_4,&puStack_1f8);
  FUN_10a09d158(&puStack_1f8);
  plVar3 = (long *)0x90;
  __Znwm();
  FUN_10a1b2a84();
  param_6 = (long *)*param_6;
  (**(code **)(*param_6 + 0x10))
            (param_6,plVar3[5],plVar3[3],0,*(undefined4 *)((long)param_6 + 0x1c));
  FUN_10a12add4(&puStack_1f8,plVar3 + 2);
  ppuVar4 = &puStack_1f8;
  FUN_10ad51860(ppuVar4,2);
  (**(code **)(*plVar3 + 8))(plVar3);
  puStack_1f8 = auStack_248;
  FUN_10a09d1bc(&puStack_1f8);
  puStack_1f8 = auStack_260;
  FUN_10a09d284(&puStack_1f8);
  puStack_1f8 = auStack_388;
  ppuVar5 = &puStack_1f8;
  func_0x00010a09d2f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (**(code **)(*plVar3 + 8))(plVar3);
    FUN_10a154428(&uStack_390);
    __Unwind_Resume(ppuVar5);
    FUN_10ad50f54();
    return ppuVar5;
  }
  return ppuVar4;
}



/* Entry: 10ad511a0; end: 10ad5121f;  */

/* WARNING: Removing unreachable block (ram,0x00010ad511c8) */
/* WARNING: Removing unreachable block (ram,0x00010ad511cc) */
/* WARNING: Removing unreachable block (ram,0x00010ad511d4) */
/* WARNING: Removing unreachable block (ram,0x00010ad511dc) */
/* WARNING: Removing unreachable block (ram,0x00010ad511e0) */

undefined8 FUN_10ad511a0(undefined8 param_1)

{
  FUN_10ad50f54();
  return param_1;
}



/* Entry: 10ad51220; end: 10ad51243;  */

undefined4 FUN_10ad51220(int param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined4 *)(&UNK_10e5100a0 + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10ad51244; end: 10ad513f3;  */

void FUN_10ad51244(undefined4 *param_1,double param_2,double param_3,undefined4 param_4,
                  undefined4 param_5,ulong param_6)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_10ad51220();
  uVar1 = (uint)param_6 & 3;
  fVar3 = 0.70710677;
  if (uVar1 == 1 || (param_6 & 3) == 0) {
    if ((param_6 & 3) == 0) {
      fVar3 = 1.0;
      fVar5 = 0.0;
      fVar7 = 0.0;
      fVar6 = 0.0;
    }
    else {
      fVar5 = -0.0;
      fVar7 = -0.0;
      fVar6 = -0.70710677;
    }
  }
  else if (uVar1 == 3) {
    fVar5 = 0.0;
    fVar7 = 0.0;
    fVar6 = fVar3;
  }
  else {
    fVar6 = 1.0;
    fVar5 = 0.0;
    fVar3 = -4.371139e-08;
    fVar7 = 0.0;
  }
  uVar9 = param_4;
  uVar2 = 0xbf800000;
  if ((param_6 & 1) != 0) {
    uVar9 = 0xbf800000;
    uVar2 = param_4;
  }
  fVar12 = fVar5 * fVar7 + fVar6 * fVar3;
  fVar4 = fVar5 * fVar7 - fVar6 * fVar3;
  fVar11 = fVar5 * fVar6 - fVar7 * fVar3;
  fVar8 = fVar5 * fVar6 + fVar7 * fVar3;
  fVar10 = fVar7 * fVar6 + fVar5 * fVar3;
  fVar3 = fVar7 * fVar6 - fVar5 * fVar3;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *param_1 = param_5;
  *(ulong *)(param_1 + 1) = CONCAT44((int)param_3,(int)param_2);
  param_1[3] = uVar2;
  param_1[4] = uVar9;
  *(undefined8 *)(param_1 + 7) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 5) = 0xbf800000bf800000;
  param_1[9] = (fVar7 * fVar7 + fVar6 * fVar6) * -2.0 + 1.0;
  param_1[10] = fVar12 + fVar12;
  param_1[0xb] = fVar11 + fVar11;
  param_1[0xc] = 0;
  param_1[0xd] = fVar4 + fVar4;
  param_1[0xe] = (fVar5 * fVar5 + fVar6 * fVar6) * -2.0 + 1.0;
  param_1[0xf] = fVar10 + fVar10;
  param_1[0x10] = 0;
  param_1[0x11] = fVar8 + fVar8;
  param_1[0x12] = fVar3 + fVar3;
  param_1[0x13] = (fVar5 * fVar5 + fVar7 * fVar7) * -2.0 + 1.0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_10a0ec8a8(param_1);
  param_1[0x19] = (uint)param_6 & 0xc;
  return;
}



/* Entry: 10ad513f4; end: 10ad51553; -[ForegroundTaskSchedulerNotificationDummy initWithTaskScheduler:] */

undefined1 * FUN_10ad513f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c2128e0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10ad51554; end: 10ad51567; -[ForegroundTaskSchedulerNotificationDummy didEnterBackground:] */

void FUN_10ad51554(long param_1)

{
  long lVar1;
  long lStack_30;
  char cStack_28;
  
  func_0x00010c26a900();
  lVar1 = param_1 + 0x70;
  cStack_28 = '\x01';
  lStack_30 = lVar1;
  __ZNSt3__15mutex4lockEv(lVar1);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 8,&lStack_30);
    } while (*(int *)(param_1 + 0x68) != 0);
    lVar1 = lStack_30;
    if (cStack_28 != '\x01') {
      return;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar1);
  return;
}



/* Entry: 10ad51568; end: 10ad515af; -[ForegroundTaskSchedulerNotificationDummy didBecomeActive:] */

void FUN_10ad51568(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c26a900();
  __ZNSt3__15mutex4lockEv(lVar1 + 0x70);
  *(undefined1 *)(lVar1 + 0xb8) = 1;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x70);
  func_0x00010c26a900();
  __ZNSt3__15mutex4lockEv(param_1 + 0x70);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x70);
  return;
}



/* Entry: 10ad515b0; end: 10ad515e3; -[ForegroundTaskSchedulerNotificationDummy willResignActive:] */

void FUN_10ad515b0(long param_1)

{
  func_0x00010c26a900();
  __ZNSt3__15mutex4lockEv(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x70);
  return;
}



/* Entry: 10ad515e4; end: 10ad515eb; -[ForegroundTaskSchedulerNotificationDummy taskScheduler] */

undefined8 FUN_10ad515e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad515ec; end: 10ad515f3; -[ForegroundTaskSchedulerNotificationDummy setTaskScheduler:] */

void FUN_10ad515ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10ad515f4; end: 10ad5168f;  */

undefined8 FUN_10ad515f4(undefined8 param_1)

{
  int iVar1;
  
  if ((bRam0000000113836700 & 1) == 0) {
    iVar1 = 0x13836700;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10ad516a4(0x113836640,param_1);
      ___cxa_atexit(FUN_10ad51690,0x113836640,0x100000000);
      ___cxa_guard_release(0x113836700);
    }
  }
  return 0x113836640;
}



/* Entry: 10ad51690; end: 10ad516a3;  */

undefined8 * FUN_10ad51690(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c70788;
  uVar1 = param_1[0x16];
  param_1[0x16] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0x16]);
  *param_1 = &PTR_FUN_110ba36d0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  __ZNSt3__118condition_variableD1Ev(param_1 + 7);
  __ZNSt3__118condition_variableD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10ad516a4; end: 10ad517ab;  */

undefined8 * FUN_10ad516a4(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 *puStack_28;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3cb0b1bb;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_DAT_110c70788;
  param_1[1] = 0x3cb0b1bb;
  *(undefined1 *)(param_1 + 0x17) = 0;
  puVar1 = PTR_PTR_1126de060;
  _objc_alloc();
  func_0x00010c050ec0();
  uVar2 = param_1[0x16];
  param_1[0x16] = puVar1;
  _objc_release(uVar2);
  if (param_2 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc0000000;
    pcStack_38 = FUN_10ad517ac;
    puStack_30 = &UNK_110848088;
    puStack_28 = param_1;
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_48);
  }
  else {
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return param_1;
}



/* Entry: 10ad517ac; end: 10ad5180b;  */

void FUN_10ad517ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  *(bool *)(lVar3 + 0xb8) = puVar2 == (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ad5180c; end: 10ad5184b;  */

undefined8 * FUN_10ad5180c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c70788;
  uVar1 = param_1[0x16];
  param_1[0x16] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0x16]);
  *param_1 = &PTR_FUN_110ba36d0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  __ZNSt3__118condition_variableD1Ev(param_1 + 7);
  __ZNSt3__118condition_variableD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10ad5184c; end: 10ad5185f;  */

void FUN_10ad5184c(void)

{
  FUN_10ad5180c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad51860; end: 10ad51d23;  */

undefined *** FUN_10ad51860(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  long *plVar4;
  undefined8 ****ppppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 extraout_x8;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  long lVar18;
  undefined8 ****ppppuVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *apuStack_348 [7];
  undefined8 ***apppuStack_310 [4];
  code *pcStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined1 uStack_2d8;
  long lStack_2b0;
  long lStack_228;
  undefined4 uStack_220;
  long lStack_218;
  undefined4 uStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 ***pppuStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined4 uStack_1f0;
  long lStack_198;
  long lStack_190;
  undefined4 uStack_188;
  long lStack_180;
  undefined1 auStack_178 [72];
  long alStack_130 [2];
  long lStack_120;
  undefined8 ***pppuStack_d0;
  ulong uStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [72];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_200 = (undefined8 ****)0x0;
  iVar7 = 0;
  if (param_2 != 2) {
    iVar7 = param_2;
  }
  lVar20 = *param_1;
  if (lVar20 != 0) {
    _memcpy(&ppppuStack_1f8,param_1 + 1,lVar20 << 5);
  }
  lStack_190 = param_1[0xe];
  lStack_198 = param_1[0xd];
  uStack_188 = (undefined4)param_1[0xf];
  lVar18 = param_1[0x10];
  lStack_180 = lVar18;
  if (lVar18 != 0) {
    _memcpy(auStack_178,param_1 + 0x11,lVar18 * 0x18);
  }
  if (lVar20 != 0) {
    _memcpy(alStack_130,&ppppuStack_1f8,lVar20 << 5);
  }
  uStack_c8 = param_1[0xe];
  pppuStack_d0 = (undefined8 ***)param_1[0xd];
  uStack_c0 = (undefined4)param_1[0xf];
  lStack_b8 = lVar18;
  if (lVar18 != 0) {
    _memcpy(auStack_b0,auStack_178,lVar18 * 0x18);
  }
  if (lVar20 == 0) {
    lVar18 = 0;
LAB_10ad51a00:
    lVar18 = lVar18 * (ulong)*(uint *)(param_1 + 0xf);
    if (iVar7 == 1) {
      ppppuVar16 = *(undefined8 *****)PTR__kCFAllocatorDefault_11034ab78;
      lVar11 = 0;
      if (lVar20 != 0) {
        lVar11 = alStack_130[0];
      }
      _CFDataCreateWithBytesNoCopy
                (ppppuVar16,lVar11,lVar18,*(undefined8 *)PTR__kCFAllocatorNull_11034ab80);
      if ((undefined8 ****)pppuStack_200 != (undefined8 ****)0x0) {
        ppppuStack_1f8 = ppppuVar16;
        _CFRelease(pppuStack_200);
        ppppuVar16 = ppppuStack_1f8;
      }
    }
    else {
      if (iVar7 == 0) {
        ppppuVar16 = *(undefined8 *****)PTR__kCFAllocatorDefault_11034ab78;
        goto LAB_10ad51a24;
      }
      ppppuVar16 = *(undefined8 *****)PTR__kCFAllocatorDefault_11034ab78;
      lVar18 = 0;
      if (lVar20 != 0) {
        lVar18 = alStack_130[0];
      }
      _CFDataCreate(ppppuVar16,lVar18);
      if ((undefined8 ****)pppuStack_200 != (undefined8 ****)0x0) {
        ppppuStack_1f8 = ppppuVar16;
        _CFRelease(pppuStack_200);
        ppppuVar16 = ppppuStack_1f8;
      }
    }
LAB_10ad51ab0:
    ppppuStack_1f8 = (undefined8 ****)0x0;
    pppppuVar2 = &ppppuStack_1f8;
    pppuStack_200 = ppppuVar16;
    FUN_10aa12154();
  }
  else {
    lVar11 = param_1[3];
    lVar18 = -lVar11;
    if (-1 < lVar11) {
      lVar18 = lVar11;
    }
    if (-1 < lStack_120) goto LAB_10ad51a00;
    ppppuStack_1f8 = (undefined8 ****)pppuStack_d0;
    uStack_1f0 = (undefined4)uStack_c8;
    pppppuVar2 = &ppppuStack_1f8;
    func_0x0001096f1ebc();
    lVar18 = (uStack_c8 >> 0x20) * ((ulong)pppppuVar2 & 0xffffffff);
    if ((int)pppppuVar2 == 0) {
      lVar18 = -lStack_120;
    }
    ppppuVar16 = *(undefined8 *****)PTR__kCFAllocatorDefault_11034ab78;
    ppppuVar17 = ppppuVar16;
    _CFDataCreateMutable(ppppuVar16,0);
    if ((int)param_1[0xf] != 0) {
      uVar21 = 0;
      lVar11 = alStack_130[0];
      do {
        _CFDataAppendBytes(ppppuVar17,lVar11,lVar18);
        uVar21 = uVar21 + 1;
        lVar11 = lVar11 + lStack_120;
      } while (uVar21 < *(uint *)(param_1 + 0xf));
    }
    if ((undefined8 ****)pppuStack_200 != (undefined8 ****)0x0) {
      ppppuStack_1f8 = ppppuVar17;
      _CFRelease();
      ppppuVar17 = ppppuStack_1f8;
    }
    ppppuStack_1f8 = (undefined8 ****)0x0;
    pppppuVar2 = &ppppuStack_1f8;
    pppuStack_200 = ppppuVar17;
    FUN_10aa12154();
    if ((undefined8 ****)pppuStack_200 == (undefined8 ****)0x0) {
      lVar18 = lVar18 * (ulong)*(uint *)(param_1 + 0xf);
LAB_10ad51a24:
      lVar11 = 0;
      if (lVar20 != 0) {
        lVar11 = alStack_130[0];
      }
      _CFDataCreate(ppppuVar16,lVar11,lVar18);
      if ((undefined8 ****)pppuStack_200 != (undefined8 ****)0x0) {
        ppppuStack_1f8 = ppppuVar16;
        _CFRelease(pppuStack_200);
        ppppuVar16 = ppppuStack_1f8;
      }
      goto LAB_10ad51ab0;
    }
  }
  _CGColorSpaceCreateDeviceRGB();
  ppppuStack_1f8 = (undefined8 ****)param_1[0xd];
  uStack_1f0 = (undefined4)param_1[0xe];
  pppppuVar3 = &ppppuStack_1f8;
  ppppuStack_208 = pppppuVar2;
  func_0x0001096f1fac(pppppuVar3,&UNK_10e5100dc);
  if (((ulong)pppppuVar3 & 1) == 0) {
    lStack_218 = param_1[0xd];
    uStack_210 = (undefined4)param_1[0xe];
    plVar4 = &lStack_218;
    func_0x0001096f1fac(plVar4,&UNK_10e5100e8);
    if (((ulong)plVar4 & 1) != 0) goto LAB_10ad51b30;
    lStack_228 = param_1[0xd];
    uStack_220 = (undefined4)param_1[0xe];
    plVar4 = &lStack_228;
    func_0x0001096f1fac(plVar4,&UNK_10e5100f4);
    if (((ulong)plVar4 & 1) != 0) goto LAB_10ad51b30;
    iVar7 = 0x18;
  }
  else {
LAB_10ad51b30:
    iVar7 = 0x20;
  }
  ppppuStack_1f8 = (undefined8 ****)param_1[0xd];
  uStack_1f0 = (undefined4)param_1[0xe];
  func_0x0001096f1fac(&ppppuStack_1f8,&UNK_10e5100f4);
  ppppuStack_1f8 = (undefined8 ****)param_1[0xd];
  uStack_1f0 = (undefined4)param_1[0xe];
  func_0x0001096f1fac(&ppppuStack_1f8,&UNK_10e5100e8);
  ppppuStack_1f8 = (undefined8 ****)param_1[0xd];
  uStack_1f0 = (undefined4)param_1[0xe];
  func_0x0001096f1fac(&ppppuStack_1f8,&UNK_10e5100dc);
  ppppuStack_1f8 = (undefined8 ****)param_1[0xd];
  uStack_1f0 = (undefined4)param_1[0xe];
  pppppuVar2 = &ppppuStack_1f8;
  func_0x0001096f1fac(pppppuVar2,&UNK_10e510100);
  if ((int)pppppuVar2 != 0) {
    _CGColorSpaceCreateDeviceGray();
    if ((undefined8 *****)ppppuStack_208 != (undefined8 *****)0x0) {
      ppppuStack_1f8 = pppppuVar2;
      _CFRelease(ppppuStack_208);
      pppppuVar2 = (undefined8 *****)ppppuStack_1f8;
    }
    ppppuStack_1f8 = (undefined8 ****)0x0;
    ppppuStack_208 = pppppuVar2;
    FUN_10aa10fc0(&ppppuStack_1f8);
    iVar7 = 8;
  }
  ppppuVar16 = (undefined8 ****)pppuStack_200;
  _CGDataProviderCreateWithCFData();
  pppuVar6 = (undefined ***)(ulong)*(uint *)((long)param_1 + 0x74);
  uVar21 = (ulong)*(uint *)(param_1 + 0xf);
  iVar12 = 8;
  ppppuStack_1f8 = ppppuVar16;
  _CGImageCreate(pppuVar6);
  FUN_10ad531b0(&ppppuStack_1f8);
  FUN_10aa10fc0(&ppppuStack_208);
  ppppuVar16 = &pppuStack_200;
  FUN_10aa12154();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  FUN_10aa12154(&ppppuStack_1f8);
  FUN_10aa12154(&pppuStack_200);
  __Unwind_Resume();
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_2f0 = FUN_10ad531e0;
  ppuStack_2e8 = &PTR_FUN_110c707d8;
  uStack_2d8 = (undefined1)uVar21;
  pppuStack_2e0 = ppppuVar16;
  _CFRetain();
  _CVPixelBufferLockBaseAddress(ppppuVar16,uVar21 & 0xffffffff);
  ppppuVar17 = ppppuVar16;
  _CVPixelBufferGetPixelFormatType();
  iVar10 = -1;
  iVar1 = (int)ppppuVar17;
  ppppuVar17 = ppppuVar16;
  ppppuVar19 = ppppuVar16;
  if (iVar1 < 0x42475241) {
    if (iVar1 < 0x34323066) {
      if (iVar1 == 0x20) {
        _CVPixelBufferGetBaseAddress();
        _CVPixelBufferGetWidth();
        _CVPixelBufferGetHeight();
        _CVPixelBufferGetBytesPerRow();
        iVar10 = 0;
        ppppuVar5 = ppppuVar16;
      }
      else {
        ppppuVar17 = (undefined8 ****)0x0;
        ppppuVar19 = (undefined8 ****)0x0;
        ppppuVar5 = (undefined8 ****)0x0;
        if (iVar1 == 0x32433038) {
          ppppuVar17 = ppppuVar16;
          _CVPixelBufferGetBaseAddressOfPlane(ppppuVar16,0);
          ppppuVar19 = ppppuVar16;
          _CVPixelBufferGetWidth();
          _CVPixelBufferGetHeight();
          _CVPixelBufferGetBytesPerRowOfPlane(ppppuVar16,0);
          iVar10 = 9;
          ppppuVar5 = ppppuVar16;
        }
      }
      goto LAB_10ad520b8;
    }
    if (iVar1 != 0x34323066) {
      iVar9 = 0x34323076;
LAB_10ad51efc:
      ppppuVar17 = (undefined8 ****)0x0;
      ppppuVar19 = (undefined8 ****)0x0;
      ppppuVar5 = (undefined8 ****)0x0;
      if (iVar1 != iVar9) goto LAB_10ad520b8;
    }
  }
  else {
    if (iVar1 < 0x78343230) {
      if (iVar1 == 0x42475241) {
        _CVPixelBufferGetBaseAddress();
        _CVPixelBufferGetWidth();
        ppppuVar5 = ppppuVar16;
        _CVPixelBufferGetHeight();
        _CVPixelBufferGetBytesPerRow();
        FUN_10ad52208(ppppuVar17,ppppuVar19,ppppuVar5,ppppuVar16);
        iVar10 = 5;
        ppppuVar5 = ppppuVar16;
      }
      else {
        ppppuVar17 = (undefined8 ****)0x0;
        ppppuVar19 = (undefined8 ****)0x0;
        ppppuVar5 = (undefined8 ****)0x0;
        if (iVar1 == 0x4c303038) {
          ppppuVar17 = ppppuVar16;
          _CVPixelBufferGetBaseAddressOfPlane(ppppuVar16,0);
          ppppuVar19 = ppppuVar16;
          _CVPixelBufferGetWidth();
          _CVPixelBufferGetHeight();
          _CVPixelBufferGetBytesPerRowOfPlane(ppppuVar16,0);
          iVar10 = 6;
          ppppuVar5 = ppppuVar16;
        }
      }
      goto LAB_10ad520b8;
    }
    if (iVar1 != 0x78343230) {
      iVar9 = 0x78663230;
      goto LAB_10ad51efc;
    }
  }
  ppppuVar17 = ppppuVar16;
  _CVPixelBufferGetBaseAddressOfPlane(ppppuVar16,0);
  ppppuVar19 = ppppuVar16;
  apppuStack_310[2] = ppppuVar17;
  _CVPixelBufferGetBaseAddressOfPlane(ppppuVar16,1);
  ppppuVar5 = ppppuVar16;
  apppuStack_310[3] = ppppuVar19;
  _CVPixelBufferGetBytesPerRowOfPlane(ppppuVar16,0);
  ppppuVar19 = ppppuVar16;
  apppuStack_310[0] = ppppuVar5;
  _CVPixelBufferGetBytesPerRowOfPlane(ppppuVar16,1);
  apppuStack_310[1] = ppppuVar19;
  _CVPixelBufferGetHeightOfPlane(ppppuVar16,0);
  _CVPixelBufferGetHeightOfPlane(ppppuVar16,1);
  if (iVar7 == -1) {
    _CVPixelBufferGetWidth();
    _CVPixelBufferGetHeight();
    iVar10 = 0x15;
    if (iVar1 != 0x78663230 && iVar1 != 0x78343230) {
      iVar10 = 8;
    }
    ppppuVar5 = apppuStack_310;
    ppppuVar19 = ppppuVar16;
  }
  else {
    lVar20 = (long)iVar7;
    ppppuVar17 = (undefined8 ****)apppuStack_310[(long)iVar7 + 2];
    ppppuVar19 = ppppuVar16;
    _CVPixelBufferGetWidthOfPlane(ppppuVar16,lVar20);
    _CVPixelBufferGetHeightOfPlane(ppppuVar16,lVar20);
    iVar10 = 7;
    if (iVar7 != 0) {
      iVar10 = 9;
    }
    ppppuVar5 = apppuStack_310 + lVar20;
  }
  ppppuVar5 = (undefined8 ****)*ppppuVar5;
LAB_10ad520b8:
  iVar7 = (int)ppppuVar17;
  if (((iVar12 != -1) && (iVar10 != iVar12)) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f6a7b26,&UNK_10f6a7b64,0x145,&UNK_10f6a7bb9);
  }
  (*(code *)ppuStack_2e8[3])(apuStack_348,&ppuStack_2e8);
  uVar8 = (uint)ppppuVar19;
  FUN_10a1b2668(extraout_x8);
  (*(code *)*apuStack_348[0])(apuStack_348);
  pppuVar6 = &ppuStack_2e8;
  (*(code *)*ppuStack_2e8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_2e8)(&ppuStack_2e8);
  __Unwind_Resume();
  if (0 < (int)uVar8) {
    uVar21 = (ulong)iVar7;
    if ((ulong)ppppuVar5 >> 2 != uVar21) {
      uVar13 = 0;
      iVar12 = (int)((ulong)ppppuVar5 >> 2);
      lVar18 = (long)pppuVar6 + uVar21 * 4;
      lVar20 = (long)pppuVar6 + (long)(iVar7 * 4 + -4);
      do {
        lVar11 = lVar18;
        uVar14 = uVar21;
        if (iVar7 < iVar12) {
          do {
            lVar15 = 0;
            do {
              pppuVar6 = (undefined ***)(ulong)*(byte *)(lVar20 + lVar15);
              *(byte *)(lVar11 + lVar15) = *(byte *)(lVar20 + lVar15);
              lVar15 = lVar15 + 1;
            } while (lVar15 != 4);
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + 4;
          } while (uVar14 != (long)iVar12);
        }
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + (long)ppppuVar5;
        lVar20 = lVar20 + (long)ppppuVar5;
      } while (uVar13 != uVar8);
    }
  }
  return pppuVar6;
}



/* Entry: 10ad51d24; end: 10ad52207;  */

void FUN_10ad51d24(undefined8 param_1,ulong param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *apuStack_108 [7];
  ulong auStack_d0 [4];
  code *pcStack_b0;
  undefined **ppuStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_b0 = FUN_10ad531e0;
  ppuStack_a8 = &PTR_FUN_110c707d8;
  uStack_98 = (undefined1)param_3;
  uStack_a0 = param_2;
  _CFRetain();
  _CVPixelBufferLockBaseAddress(param_2,param_3);
  uVar13 = param_2;
  _CVPixelBufferGetPixelFormatType();
  iVar6 = -1;
  iVar1 = (int)uVar13;
  uVar13 = param_2;
  uVar14 = param_2;
  if (iVar1 < 0x42475241) {
    if (iVar1 < 0x34323066) {
      if (iVar1 == 0x20) {
        _CVPixelBufferGetBaseAddress();
        _CVPixelBufferGetWidth();
        _CVPixelBufferGetHeight();
        _CVPixelBufferGetBytesPerRow();
        iVar6 = 0;
        uVar2 = param_2;
      }
      else {
        uVar13 = 0;
        uVar14 = 0;
        uVar2 = 0;
        if (iVar1 == 0x32433038) {
          uVar13 = param_2;
          _CVPixelBufferGetBaseAddressOfPlane(param_2,0);
          uVar14 = param_2;
          _CVPixelBufferGetWidth();
          _CVPixelBufferGetHeight();
          _CVPixelBufferGetBytesPerRowOfPlane(param_2,0);
          iVar6 = 9;
          uVar2 = param_2;
        }
      }
      goto LAB_10ad520b8;
    }
    if (iVar1 != 0x34323066) {
      iVar5 = 0x34323076;
LAB_10ad51efc:
      uVar13 = 0;
      uVar14 = 0;
      uVar2 = 0;
      if (iVar1 != iVar5) goto LAB_10ad520b8;
    }
  }
  else {
    if (iVar1 < 0x78343230) {
      if (iVar1 == 0x42475241) {
        _CVPixelBufferGetBaseAddress();
        _CVPixelBufferGetWidth();
        uVar2 = param_2;
        _CVPixelBufferGetHeight();
        _CVPixelBufferGetBytesPerRow();
        FUN_10ad52208(uVar13,uVar14,uVar2,param_2);
        iVar6 = 5;
        uVar2 = param_2;
      }
      else {
        uVar13 = 0;
        uVar14 = 0;
        uVar2 = 0;
        if (iVar1 == 0x4c303038) {
          uVar13 = param_2;
          _CVPixelBufferGetBaseAddressOfPlane(param_2,0);
          uVar14 = param_2;
          _CVPixelBufferGetWidth();
          _CVPixelBufferGetHeight();
          _CVPixelBufferGetBytesPerRowOfPlane(param_2,0);
          iVar6 = 6;
          uVar2 = param_2;
        }
      }
      goto LAB_10ad520b8;
    }
    if (iVar1 != 0x78343230) {
      iVar5 = 0x78663230;
      goto LAB_10ad51efc;
    }
  }
  uVar13 = param_2;
  _CVPixelBufferGetBaseAddressOfPlane(param_2,0);
  uVar14 = param_2;
  auStack_d0[2] = uVar13;
  _CVPixelBufferGetBaseAddressOfPlane(param_2,1);
  uVar2 = param_2;
  auStack_d0[3] = uVar14;
  _CVPixelBufferGetBytesPerRowOfPlane(param_2,0);
  uVar14 = param_2;
  auStack_d0[0] = uVar2;
  _CVPixelBufferGetBytesPerRowOfPlane(param_2,1);
  auStack_d0[1] = uVar14;
  _CVPixelBufferGetHeightOfPlane(param_2,0);
  _CVPixelBufferGetHeightOfPlane(param_2,1);
  if (param_5 == -1) {
    _CVPixelBufferGetWidth();
    _CVPixelBufferGetHeight();
    iVar6 = 0x15;
    if (iVar1 != 0x78663230 && iVar1 != 0x78343230) {
      iVar6 = 8;
    }
    puVar7 = auStack_d0;
    uVar14 = param_2;
  }
  else {
    lVar12 = (long)param_5;
    uVar13 = auStack_d0[(long)param_5 + 2];
    uVar14 = param_2;
    _CVPixelBufferGetWidthOfPlane(param_2,lVar12);
    _CVPixelBufferGetHeightOfPlane(param_2,lVar12);
    iVar6 = 7;
    if (param_5 != 0) {
      iVar6 = 9;
    }
    puVar7 = auStack_d0 + lVar12;
  }
  uVar2 = *puVar7;
LAB_10ad520b8:
  iVar1 = (int)uVar13;
  if (((param_4 != -1) && (iVar6 != param_4)) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f6a7b26,&UNK_10f6a7b64,0x145,&UNK_10f6a7bb9);
  }
  (*(code *)ppuStack_a8[3])(apuStack_108,&ppuStack_a8);
  uVar4 = (uint)uVar14;
  FUN_10a1b2668(param_1);
  (*(code *)*apuStack_108[0])(apuStack_108);
  pppuVar3 = &ppuStack_a8;
  (*(code *)*ppuStack_a8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  __Unwind_Resume();
  if (0 < (int)uVar4) {
    uVar13 = (ulong)iVar1;
    if (uVar2 >> 2 != uVar13) {
      uVar14 = 0;
      iVar6 = (int)(uVar2 >> 2);
      lVar8 = (long)pppuVar3 + uVar13 * 4;
      lVar12 = (long)pppuVar3 + (long)(iVar1 * 4 + -4);
      do {
        lVar9 = lVar8;
        uVar10 = uVar13;
        if (iVar1 < iVar6) {
          do {
            lVar11 = 0;
            do {
              *(undefined1 *)(lVar9 + lVar11) = *(undefined1 *)(lVar12 + lVar11);
              lVar11 = lVar11 + 1;
            } while (lVar11 != 4);
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 4;
          } while (uVar10 != (long)iVar6);
        }
        uVar14 = uVar14 + 1;
        lVar8 = lVar8 + uVar2;
        lVar12 = lVar12 + uVar2;
      } while (uVar14 != uVar4);
    }
  }
  return;
}



/* Entry: 10ad52208; end: 10ad5228b;  */

void FUN_10ad52208(long param_1,int param_2,uint param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_2;
    if (param_4 >> 2 != uVar1) {
      uVar3 = 0;
      iVar2 = (int)(param_4 >> 2);
      lVar4 = param_1 + uVar1 * 4;
      param_1 = param_1 + (param_2 * 4 + -4);
      do {
        lVar5 = lVar4;
        uVar6 = uVar1;
        if (param_2 < iVar2) {
          do {
            lVar7 = 0;
            do {
              *(undefined1 *)(lVar5 + lVar7) = *(undefined1 *)(param_1 + lVar7);
              lVar7 = lVar7 + 1;
            } while (lVar7 != 4);
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 4;
          } while (uVar6 != (long)iVar2);
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + param_4;
        param_1 = param_1 + param_4;
      } while (uVar3 != param_3);
    }
  }
  return;
}



/* Entry: 10ad5228c; end: 10ad52c3b;  */

void FUN_10ad5228c(undefined8 *param_1,undefined ***param_2,uint param_3,undefined ***param_4,
                  int param_5,int param_6)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined8 *extraout_x8;
  undefined **ppuVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 *puStack_5b8;
  undefined4 uStack_5b0;
  undefined8 uStack_5ac;
  undefined8 uStack_5a4;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined4 uStack_588;
  undefined8 uStack_584;
  undefined8 uStack_57c;
  undefined8 uStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_550;
  undefined **ppuStack_548;
  code *pcStack_540;
  undefined8 uStack_510;
  undefined **ppuStack_508;
  code *pcStack_500;
  undefined8 uStack_4d0;
  undefined ***pppuStack_4c8;
  undefined4 uStack_4c0;
  undefined8 uStack_4bc;
  undefined8 uStack_4b4;
  long lStack_440;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  undefined ***pppuStack_398;
  uint uStack_390;
  uint uStack_38c;
  undefined ***pppuStack_388;
  undefined4 uStack_380;
  undefined ***pppuStack_378;
  uint uStack_370;
  uint uStack_36c;
  undefined ***pppuStack_368;
  undefined4 uStack_360;
  ulong uStack_358;
  undefined4 uStack_350;
  undefined **ppuStack_348;
  undefined **appuStack_340 [7];
  code *pcStack_308;
  undefined **ppuStack_300;
  undefined ***pppuStack_2f8;
  ulong uStack_2f0;
  undefined ***pppuStack_2e8;
  undefined **ppuStack_2c8;
  undefined **appuStack_2c0 [7];
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined ***pppuStack_278;
  ulong uStack_270;
  undefined ***pppuStack_268;
  ulong uStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint uStack_238;
  undefined8 uStack_230;
  uint uStack_228;
  uint uStack_224;
  undefined ***pppuStack_220;
  uint uStack_218;
  undefined1 auStack_1e0 [112];
  undefined8 *apuStack_170 [8];
  undefined8 *apuStack_130 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined ***)0x0) {
LAB_10ad52afc:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar16 = (ulong)param_3;
    _CFRetain();
    pppuVar2 = param_2;
    uVar22 = uVar16;
    _CVPixelBufferLockBaseAddress();
    uVar19 = (uint)uVar22;
    if ((int)pppuVar2 != 0) {
LAB_10ad52af4:
      param_3 = uVar19;
      _CFRelease();
      goto LAB_10ad52afc;
    }
    pppuVar2 = param_2;
    _CVPixelBufferGetPixelFormatType();
    pppuVar3 = param_2;
    _CVPixelBufferGetPixelFormatType();
    iVar1 = (int)pppuVar3;
    if (iVar1 < 0x4c303038) {
      if (iVar1 < 0x32433038) {
        if (iVar1 == 0x18) {
          uStack_3a8 = 0;
          uStack_3b0 = 0x100;
        }
        else if (iVar1 == 0x20) {
          uStack_3a8 = 0;
          uStack_3b0 = 0x500;
        }
        else {
          if (iVar1 != 0x32344247) goto LAB_10ad5255c;
          uStack_3a8 = 0;
          uStack_3b0 = 0x200;
        }
      }
      else if (iVar1 < 0x34323076) {
        if (iVar1 != 0x32433038) {
          if (iVar1 != 0x34323066) goto LAB_10ad5255c;
          uVar22 = 0x100000000000000;
LAB_10ad524e4:
          uVar23 = 1;
          uStack_3a8 = 0x23;
          uStack_3b0 = 0xd00;
          uStack_3a0 = 0x20000;
          goto LAB_10ad52584;
        }
        uStack_3a8 = 0;
        uStack_3b0 = 0x900;
      }
      else {
        if (iVar1 == 0x34323076) {
          uVar22 = 0x200000000000000;
          goto LAB_10ad524e4;
        }
        if (iVar1 != 0x42475241) goto LAB_10ad5255c;
        uStack_3a8 = 0;
        uStack_3b0 = 0x400;
      }
LAB_10ad52580:
      uStack_3a0 = 0;
      uVar23 = 0;
      uVar22 = 0;
    }
    else {
      if (0x52476840 < iVar1) {
        if (iVar1 < 0x66646973) {
          if (iVar1 == 0x52476841) {
            uStack_3a8 = 6;
LAB_10ad52534:
            uStack_3b0 = 0x300;
            goto LAB_10ad52580;
          }
          if (iVar1 != 0x66646570) goto LAB_10ad5255c;
LAB_10ad524ac:
          uStack_3a8 = 7;
        }
        else {
          if (iVar1 == 0x66646973) goto LAB_10ad524ac;
          if (iVar1 != 0x68646570) goto LAB_10ad5255c;
          uStack_3a8 = 6;
        }
        uStack_3b0 = 0xb00;
        goto LAB_10ad52580;
      }
      if (iVar1 < 0x4c303068) {
        if (iVar1 == 0x4c303038) {
          uStack_3a8 = 0;
        }
        else {
          if (iVar1 != 0x4c303066) goto LAB_10ad5255c;
          uStack_3a8 = 7;
        }
LAB_10ad52554:
        uStack_3b0 = 0x700;
        goto LAB_10ad52580;
      }
      if (iVar1 == 0x4c303068) {
        uStack_3a8 = 6;
        goto LAB_10ad52554;
      }
      if (iVar1 == 0x52476641) {
        uStack_3a8 = 7;
        goto LAB_10ad52534;
      }
LAB_10ad5255c:
      uVar22 = 0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      uStack_3b0 = 0;
      uVar23 = 0;
    }
LAB_10ad52584:
    pppuVar3 = param_2;
    _CVBufferGetAttachment(param_2,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8,0);
    pppuVar4 = param_2;
    _CVBufferGetAttachment
              (param_2,*(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310,0);
    param_4 = (undefined ***)0x0;
    pppuVar5 = param_2;
    _CVBufferGetAttachment(param_2,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350);
    if (((pppuVar3 == (undefined ***)0x0) ||
        (*(long *)PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_11034a2d0 == 0)) ||
       (pppuVar6 = pppuVar3, _CFEqual(), (int)pppuVar6 == 0)) {
      if (((pppuVar3 == (undefined ***)0x0) ||
          (*(long *)PTR__kCVImageBufferColorPrimaries_ITU_R_2020_11034a2c8 == 0)) ||
         (pppuVar6 = pppuVar3, _CFEqual(), (int)pppuVar6 == 0)) {
        uVar18 = 0;
        if ((pppuVar3 != (undefined ***)0x0) &&
           (*(long *)PTR__kCVImageBufferColorPrimaries_P3_D65_11034a2d8 != 0)) {
          _CFEqual();
          uVar18 = 0;
          if (((ulong)pppuVar3 & 0xff) != 0) {
            uVar18 = 0x300000000;
          }
        }
      }
      else {
        uVar18 = 0x200000000;
      }
    }
    else {
      uVar18 = 0x100000000;
    }
    if (((pppuVar4 == (undefined ***)0x0) ||
        (*(long *)PTR__kCVImageBufferTransferFunction_Linear_11034a330 == 0)) ||
       (pppuVar3 = pppuVar4, _CFEqual(), (int)pppuVar3 == 0)) {
      if (((pppuVar4 == (undefined ***)0x0) ||
          (*(long *)PTR__kCVImageBufferTransferFunction_sRGB_11034a348 == 0)) ||
         (pppuVar3 = pppuVar4, _CFEqual(), (int)pppuVar3 == 0)) {
        if ((((pppuVar4 == (undefined ***)0x0) ||
             (*(long *)PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328 == 0)) ||
            (pppuVar3 = pppuVar4, _CFEqual(), (int)pppuVar3 == 0)) &&
           (((pppuVar4 == (undefined ***)0x0 ||
             (*(long *)PTR__kCVImageBufferTransferFunction_ITU_R_2020_11034a318 == 0)) ||
            (pppuVar3 = pppuVar4, _CFEqual(), (int)pppuVar3 == 0)))) {
          if (((pppuVar4 == (undefined ***)0x0) ||
              (*(long *)PTR__kCVImageBufferTransferFunction_ITU_R_2100_HLG_11034a320 == 0)) ||
             (pppuVar3 = pppuVar4, _CFEqual(), (int)pppuVar3 == 0)) {
            uVar21 = 0;
            if ((pppuVar4 != (undefined ***)0x0) &&
               (*(long *)PTR__kCVImageBufferTransferFunction_SMPTE_ST_2084_PQ_11034a338 != 0)) {
              _CFEqual();
              uVar21 = 0;
              if (((ulong)pppuVar4 & 0xff) != 0) {
                uVar21 = 0x50000000000;
              }
            }
          }
          else {
            uVar21 = 0x40000000000;
          }
        }
        else {
          uVar21 = 0x30000000000;
        }
      }
      else {
        uVar21 = 0x20000000000;
      }
    }
    else {
      uVar21 = 0x10000000000;
    }
    if (((pppuVar5 == (undefined ***)0x0) ||
        (*(long *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_601_4_11034a360 == 0)) ||
       (pppuVar3 = pppuVar5, _CFEqual(), (int)pppuVar3 == 0)) {
      if (((pppuVar5 == (undefined ***)0x0) ||
          (*(long *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368 == 0)) ||
         (pppuVar3 = pppuVar5, _CFEqual(), (int)pppuVar3 == 0)) {
        uStack_358 = 0;
        if ((pppuVar5 != (undefined ***)0x0) &&
           (*(long *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_2020_11034a358 != 0)) {
          _CFEqual();
          uStack_358 = 0;
          if (((ulong)pppuVar5 & 0xff) != 0) {
            uStack_358 = 0x3000000000000;
          }
        }
      }
      else {
        uStack_358 = 0x2000000000000;
      }
    }
    else {
      uStack_358 = 0x1000000000000;
    }
    uStack_358 = uStack_3a0 | uVar22 | uStack_3b0 | uStack_3a8 | uVar18 | uVar21 | uStack_358;
    pppuVar3 = param_2;
    uStack_350 = uVar23;
    _CVPixelBufferGetWidth();
    pppuVar4 = param_2;
    _CVPixelBufferGetHeight();
    uVar19 = (uint)pppuVar3;
    uVar20 = (uint)pppuVar4;
    if (((uint)pppuVar2 & 0xffffffef) != 0x34323066) {
      pppuVar5 = param_2;
      _CVPixelBufferIsPlanar();
      if ((int)pppuVar5 == 0) {
        pppuVar5 = param_2;
        _CVPixelBufferGetBaseAddress();
        if (pppuVar5 != (undefined ***)0x0) {
          pppuVar6 = param_2;
          _CVPixelBufferGetBytesPerRow();
          if (((param_3 & 1) == 0) && ((uint)pppuVar2 == 0x42475241)) {
            pppuVar2 = pppuVar6;
            FUN_10ad52208(pppuVar5,pppuVar3,pppuVar4);
            param_5 = (int)pppuVar2;
          }
          uStack_248 = uStack_358;
          uStack_240 = uStack_350;
          uStack_218 = (uint)&uStack_358;
          func_0x0001096f1ebc();
          if (uStack_218 < 2) {
            uStack_218 = 1;
          }
          uStack_230 = 1;
          ppuStack_348 = (undefined **)&UNK_1096f3754;
          appuStack_340[0] = &PTR_DAT_110b0b008;
          pcStack_308 = FUN_10ad53134;
          ppuStack_300 = &PTR_FUN_110c707b8;
          param_4 = &ppuStack_348;
          pppuStack_2f8 = param_2;
          uStack_2f0 = uVar16;
          pppuStack_2e8 = pppuVar5;
          uStack_23c = uVar19;
          uStack_238 = uVar20;
          uStack_228 = uVar19;
          uStack_224 = uVar20;
          pppuStack_220 = pppuVar6;
          func_0x0001096f3044(auStack_1e0,pppuVar5,&uStack_248);
          puVar7 = (undefined8 *)0x188;
          __Znwm();
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar8 = puVar7 + 3;
          *puVar7 = &PTR_DAT_110bab930;
          param_3 = (uint)auStack_1e0;
          func_0x0001096f2390();
          *param_1 = puVar8;
          param_1[1] = puVar7;
          func_0x0001096f2328(auStack_1e0);
          (*(code *)*apuStack_130[0])(apuStack_130);
          (*(code *)*apuStack_170[0])(apuStack_170);
          (*(code *)*ppuStack_300)(&ppuStack_300);
          pcVar14 = (code *)*appuStack_340[0];
          param_2 = appuStack_340;
          goto LAB_10ad52ae0;
        }
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        param_4 = (undefined ***)&UNK_10f6a7b26;
        param_5 = 0xf6a7bf5;
        param_6 = 0x185;
        func_0x00010ae06f08(0,1);
      }
LAB_10ad52ae8:
      _CVPixelBufferUnlockBaseAddress(param_2);
      uVar19 = (uint)uVar16;
      goto LAB_10ad52af4;
    }
    pppuVar2 = param_2;
    _CVPixelBufferGetBaseAddressOfPlane(param_2,0);
    pppuVar3 = param_2;
    _CVPixelBufferGetBaseAddressOfPlane(param_2,1);
    if ((pppuVar2 == (undefined ***)0x0) || (pppuVar3 == (undefined ***)0x0)) goto LAB_10ad52ae8;
    pppuVar4 = param_2;
    _CVPixelBufferGetBytesPerRowOfPlane(param_2,0);
    pppuVar5 = param_2;
    _CVPixelBufferGetBytesPerRowOfPlane(param_2,1);
    uStack_380 = 1;
    uStack_370 = uVar19 >> 1;
    uStack_36c = uVar20 >> 1;
    uStack_360 = 2;
    uStack_248 = uStack_358;
    uStack_240 = uStack_350;
    uStack_230 = 0;
    ppuStack_2c8 = (undefined **)&UNK_1096f3754;
    appuStack_2c0[0] = &PTR_DAT_110b0b008;
    pcStack_288 = FUN_10ad53134;
    ppuStack_280 = &PTR_FUN_110c707b8;
    param_4 = &ppuStack_2c8;
    pppuStack_398 = pppuVar2;
    uStack_390 = uVar19;
    uStack_38c = uVar20;
    pppuStack_388 = pppuVar4;
    pppuStack_378 = pppuVar3;
    pppuStack_368 = pppuVar5;
    pppuStack_278 = param_2;
    uStack_270 = uVar16;
    pppuStack_268 = pppuVar2;
    uStack_23c = uVar19;
    uStack_238 = uVar20;
    func_0x0001096f2e98(auStack_1e0,&pppuStack_398,&uStack_248);
    puVar7 = (undefined8 *)0x188;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar8 = puVar7 + 3;
    *puVar7 = &PTR_DAT_110bab930;
    param_3 = (uint)auStack_1e0;
    func_0x0001096f2390();
    *param_1 = puVar8;
    param_1[1] = puVar7;
    func_0x0001096f2328(auStack_1e0);
    (*(code *)*apuStack_130[0])(apuStack_130);
    (*(code *)*apuStack_170[0])(apuStack_170);
    (*(code *)*ppuStack_280)(&ppuStack_280);
    pcVar14 = (code *)*appuStack_2c0[0];
    param_2 = appuStack_2c0;
LAB_10ad52ae0:
    (*pcVar14)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (param_3 == 0) {
    __Unwind_Resume(param_2);
  }
  func_0x000104bd46a0();
  lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    pppuVar2 = param_2;
    _CGImageGetWidth();
    param_3 = (uint)pppuVar2;
  }
  if ((int)param_4 == 0) {
    param_4 = param_2;
    _CGImageGetHeight();
  }
  pppuVar2 = param_2;
  _CGImageGetBytesPerRow(param_2);
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  *(undefined1 *)(extraout_x8 + 1) = 0;
  *extraout_x8 = &PTR_FUN_110bab9a0;
  *(undefined1 *)(extraout_x8 + 0x11) = 0;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[4] = 0xffffffff00000000;
  extraout_x8[5] = 0;
  extraout_x8[8] = 0;
  extraout_x8[9] = 0x109d138c8;
  extraout_x8[10] = &PTR_DAT_110b3e838;
  extraout_x8[0xb] = FUN_10a1b2664;
  iVar1 = (int)param_4;
  if (param_5 != 0) {
    lVar9 = (long)pppuVar2 * (long)iVar1;
    FUN_10a1b29f0(lVar9);
    lVar10 = lVar9;
    _CGColorSpaceCreateDeviceGray();
    lVar11 = lVar9;
    _CGBitmapContextCreate(lVar9,(long)(int)param_3,(long)iVar1,8,pppuVar2,lVar10,0);
    _CGContextDrawImage(0,0,(double)(int)param_3,(double)iVar1);
    _CGContextRelease(lVar11);
    puVar7 = &uStack_510;
    uStack_510 = 0x109d138c8;
    ppuStack_508 = &PTR_DAT_110b3e838;
    pcStack_500 = FUN_10a1b1e10;
    FUN_10a1b2668(&uStack_4d0,lVar9,(ulong)param_3 | (long)param_4 << 0x20,pppuVar2,7,&uStack_510,0,
                  0);
    puVar8 = &uStack_4d0;
    FUN_10a1b2920(extraout_x8);
    FUN_10a1b2b9c(&uStack_4d0);
    ppuVar15 = ppuStack_508;
    goto LAB_10ad53088;
  }
  if (param_6 == 0) {
    lVar9 = (long)iVar1 * (long)(int)(param_3 << 2);
    FUN_10a1b29f0();
    lVar10 = lVar9;
    _CGColorSpaceCreateDeviceRGB();
    lVar17 = (long)(int)(param_3 << 2);
    lVar11 = lVar9;
    uStack_4d0 = lVar10;
    _CGBitmapContextCreate(lVar9,(long)(int)param_3,(long)iVar1,8,lVar17,lVar10,1);
    uStack_598 = lVar11;
    _CGContextSetInterpolationQuality();
    _CGContextClearRect(0,0,(double)(int)param_3,(double)iVar1,lVar11);
    _CGContextDrawImage(0,0,(double)(int)param_3,(double)iVar1,uStack_598,param_2);
    FUN_10aa10ff0(&uStack_598);
    FUN_10aa10fc0(&uStack_4d0);
  }
  else {
    pppuVar2 = param_2;
    _CGImageGetBitsPerComponent();
    uStack_4d0 = CONCAT44(uStack_4d0._4_4_,(int)pppuVar2);
    pppuVar2 = param_2;
    _CGImageGetBitsPerPixel();
    uStack_4d0 = CONCAT44((int)pppuVar2,(undefined4)uStack_4d0);
    pppuVar2 = param_2;
    _CGImageGetColorSpace();
    pppuVar3 = param_2;
    pppuStack_4c8 = pppuVar2;
    _CGImageGetBitmapInfo();
    uStack_4c0 = SUB84(pppuVar3,0);
    uStack_4b4 = 0;
    uStack_4bc = 0;
    puVar7 = &uStack_570;
    _vImageBuffer_InitWithCGImage(puVar7,&uStack_4d0,0,param_2,0);
    _CGColorSpaceCreateDeviceRGB();
    pppuVar2 = param_2;
    _CGImageGetBitsPerComponent();
    uStack_598 = CONCAT44(uStack_598._4_4_,(int)pppuVar2);
    pppuVar2 = param_2;
    _CGImageGetBitsPerPixel();
    uStack_598 = CONCAT44((int)pppuVar2,(undefined4)uStack_598);
    uStack_590 = 0;
    _CGImageGetBitmapInfo();
    lVar17 = (long)(int)(param_3 << 2);
    uStack_588 = SUB84(param_2,0);
    uStack_57c = 0;
    uStack_584 = 0;
    uStack_5c0 = 0x2000000008;
    uStack_5b0 = 0x4001;
    lVar9 = (long)(int)(param_3 << 2) * (long)iVar1;
    uStack_5a4 = 0;
    uStack_5ac = 0;
    puStack_5b8 = puVar7;
    FUN_10a1b29f0();
    puVar8 = &uStack_598;
    lStack_5e0 = lVar9;
    lStack_5d8 = (long)iVar1;
    lStack_5d0 = (long)(int)param_3;
    lStack_5c8 = lVar17;
    _vImageConverter_CreateWithCGImageFormat(puVar8,&uStack_5c0,0,0x100,0);
    if ((lStack_560 == (int)param_3) && (lStack_568 == iVar1)) {
      _vImageConvert_AnyToAny();
      if ((puVar8 != (undefined8 *)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
        puVar13 = &UNK_10f6a7cfd;
        uVar12 = 0x5d;
LAB_10ad53004:
        func_0x00010ae06f08(0,1,&UNK_10f6a7b26,&UNK_10f6a7c90,uVar12,puVar13);
      }
    }
    else {
      _vImageConvert_AnyToAny();
      if ((puVar8 != (undefined8 *)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
        func_0x00010ae06f08(0,1,&UNK_10f6a7b26,&UNK_10f6a7c90,0x65,&UNK_10f6a7d31);
      }
      puVar8 = &uStack_570;
      _vImageScale_ARGB8888(puVar8,&lStack_5e0,0,0x20);
      if ((puVar8 != (undefined8 *)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
        puVar13 = &UNK_10f6a7d6e;
        uVar12 = 0x6c;
        goto LAB_10ad53004;
      }
    }
    _CFRelease(puVar7);
    _free(uStack_570);
  }
  puVar7 = &uStack_550;
  uStack_550 = 0x109d138c8;
  ppuStack_548 = &PTR_DAT_110b3e838;
  pcStack_540 = FUN_10a1b1e10;
  FUN_10a1b2668(&uStack_4d0,lVar9,(ulong)param_3 | (long)param_4 << 0x20,lVar17,1,&uStack_550,0,0);
  puVar8 = &uStack_4d0;
  FUN_10a1b2920(extraout_x8);
  FUN_10a1b2b9c(&uStack_4d0);
  ppuVar15 = ppuStack_548;
LAB_10ad53088:
  puVar7 = puVar7 + 1;
  (*(code *)*ppuVar15)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_440) {
    return;
  }
  ___stack_chk_fail();
  FUN_10aa10ff0(&uStack_598);
  FUN_10aa10fc0(&uStack_4d0);
  FUN_10a1b2b9c(extraout_x8);
  __Unwind_Resume();
  if ((undefined8 *)puVar8[4] != puVar7) {
    return;
  }
  _CVPixelBufferUnlockBaseAddress(puVar8[2],puVar8[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(puVar8[2]);
  return;
}



/* Entry: 10ad52c3c; end: 10ad53133;  */

void FUN_10ad52c3c(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,int param_5,
                  int param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  code *pcStack_180;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  code *pcStack_140;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_3 == 0) {
    param_3 = param_2;
    _CGImageGetWidth();
  }
  if ((int)param_4 == 0) {
    param_4 = param_2;
    _CGImageGetHeight();
  }
  uVar1 = param_2;
  _CGImageGetBytesPerRow(param_2);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110bab9a0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0xffffffff00000000;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0x109d138c8;
  param_1[10] = &PTR_DAT_110b3e838;
  param_1[0xb] = FUN_10a1b2664;
  iVar11 = (int)param_4;
  iVar12 = (int)param_3;
  if (param_5 != 0) {
    lVar2 = uVar1 * (long)iVar11;
    FUN_10a1b29f0(lVar2);
    lVar6 = lVar2;
    _CGColorSpaceCreateDeviceGray();
    lVar7 = lVar2;
    _CGBitmapContextCreate(lVar2,(long)iVar12,(long)iVar11,8,uVar1,lVar6,0);
    _CGContextDrawImage(0,0,(double)iVar12,(double)iVar11);
    _CGContextRelease(lVar7);
    puVar4 = &uStack_150;
    uStack_150 = 0x109d138c8;
    ppuStack_148 = &PTR_DAT_110b3e838;
    pcStack_140 = FUN_10a1b1e10;
    FUN_10a1b2668(&uStack_110,lVar2,param_3 & 0xffffffff | param_4 << 0x20,uVar1,7,&uStack_150,0,0);
    puVar5 = &uStack_110;
    FUN_10a1b2920(param_1);
    FUN_10a1b2b9c(&uStack_110);
    ppuVar10 = ppuStack_148;
    goto LAB_10ad53088;
  }
  if (param_6 == 0) {
    lVar2 = (long)iVar11 * (long)(iVar12 << 2);
    FUN_10a1b29f0();
    lVar6 = lVar2;
    _CGColorSpaceCreateDeviceRGB();
    lVar13 = (long)(iVar12 << 2);
    lVar7 = lVar2;
    uStack_110 = lVar6;
    _CGBitmapContextCreate(lVar2,(long)iVar12,(long)iVar11,8,lVar13,lVar6,1);
    uStack_1d8 = lVar7;
    _CGContextSetInterpolationQuality();
    _CGContextClearRect(0,0,(double)iVar12,(double)iVar11,lVar7);
    _CGContextDrawImage(0,0,(double)iVar12,(double)iVar11,uStack_1d8,param_2);
    FUN_10aa10ff0(&uStack_1d8);
    FUN_10aa10fc0(&uStack_110);
  }
  else {
    uVar1 = param_2;
    _CGImageGetBitsPerComponent();
    uStack_110 = CONCAT44(uStack_110._4_4_,(int)uVar1);
    uVar1 = param_2;
    _CGImageGetBitsPerPixel();
    uStack_110 = CONCAT44((int)uVar1,(undefined4)uStack_110);
    uVar1 = param_2;
    _CGImageGetColorSpace();
    uVar3 = param_2;
    uStack_108 = uVar1;
    _CGImageGetBitmapInfo();
    uStack_100 = (undefined4)uVar3;
    uStack_f4 = 0;
    uStack_fc = 0;
    puVar4 = &uStack_1b0;
    _vImageBuffer_InitWithCGImage(puVar4,&uStack_110,0,param_2,0);
    _CGColorSpaceCreateDeviceRGB();
    uVar1 = param_2;
    _CGImageGetBitsPerComponent();
    uStack_1d8 = CONCAT44(uStack_1d8._4_4_,(int)uVar1);
    uVar1 = param_2;
    _CGImageGetBitsPerPixel();
    uStack_1d8 = CONCAT44((int)uVar1,(undefined4)uStack_1d8);
    uStack_1d0 = 0;
    _CGImageGetBitmapInfo();
    lVar13 = (long)(iVar12 << 2);
    uStack_1c8 = (undefined4)param_2;
    uStack_1bc = 0;
    uStack_1c4 = 0;
    uStack_200 = 0x2000000008;
    uStack_1f0 = 0x4001;
    lVar2 = (long)(iVar12 << 2) * (long)iVar11;
    uStack_1e4 = 0;
    uStack_1ec = 0;
    puStack_1f8 = puVar4;
    FUN_10a1b29f0();
    puVar5 = &uStack_1d8;
    lStack_220 = lVar2;
    lStack_218 = (long)iVar11;
    lStack_210 = (long)iVar12;
    lStack_208 = lVar13;
    _vImageConverter_CreateWithCGImageFormat(puVar5,&uStack_200,0,0x100,0);
    if ((lStack_1a0 == iVar12) && (lStack_1a8 == iVar11)) {
      _vImageConvert_AnyToAny();
      if ((puVar5 != (undefined8 *)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
        puVar9 = &UNK_10f6a7cfd;
        uVar8 = 0x5d;
LAB_10ad53004:
        func_0x00010ae06f08(0,1,&UNK_10f6a7b26,&UNK_10f6a7c90,uVar8,puVar9);
      }
    }
    else {
      _vImageConvert_AnyToAny();
      if ((puVar5 != (undefined8 *)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
        func_0x00010ae06f08(0,1,&UNK_10f6a7b26,&UNK_10f6a7c90,0x65,&UNK_10f6a7d31);
      }
      puVar5 = &uStack_1b0;
      _vImageScale_ARGB8888(puVar5,&lStack_220,0,0x20);
      if ((puVar5 != (undefined8 *)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
        puVar9 = &UNK_10f6a7d6e;
        uVar8 = 0x6c;
        goto LAB_10ad53004;
      }
    }
    _CFRelease(puVar4);
    _free(uStack_1b0);
  }
  puVar4 = &uStack_190;
  uStack_190 = 0x109d138c8;
  ppuStack_188 = &PTR_DAT_110b3e838;
  pcStack_180 = FUN_10a1b1e10;
  FUN_10a1b2668(&uStack_110,lVar2,param_3 & 0xffffffff | param_4 << 0x20,lVar13,1,&uStack_190,0,0);
  puVar5 = &uStack_110;
  FUN_10a1b2920(param_1);
  FUN_10a1b2b9c(&uStack_110);
  ppuVar10 = ppuStack_188;
LAB_10ad53088:
  puVar4 = puVar4 + 1;
  (*(code *)*ppuVar10)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  FUN_10aa10ff0(&uStack_1d8);
  FUN_10aa10fc0(&uStack_110);
  FUN_10a1b2b9c(param_1);
  __Unwind_Resume();
  if ((undefined8 *)puVar5[4] != puVar4) {
    return;
  }
  _CVPixelBufferUnlockBaseAddress(puVar5[2],puVar5[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(puVar5[2]);
  return;
}



/* Entry: 10ad53134; end: 10ad5316b;  */

void FUN_10ad53134(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != param_1) {
    return;
  }
  _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 10ad5316c; end: 10ad531af;  */

void FUN_10ad5316c(void)

{
  return;
}



/* Entry: 10ad531b0; end: 10ad531df;  */

long * FUN_10ad531b0(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10ad531e0; end: 10ad5320b;  */

void FUN_10ad531e0(undefined8 param_1,long param_2)

{
  _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_2 + 0x10),*(undefined1 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 10ad5320c; end: 10ad5323f;  */

void FUN_10ad5320c(void)

{
  return;
}



/* Entry: 10ad53240; end: 10ad534bb; -[LSLocalizationDelegateImpl getDeviceLanguages] */

void FUN_10ad53240(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_1b0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar11 = *plStack_1a0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        lVar10 = *(long *)(lStack_1a8 + (long)puVar8 * 8);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111183998;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        while (ppuVar4 != (undefined **)0x0) {
          ppuVar9 = (undefined **)0x0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183998);
            }
            lVar5 = lVar10;
            func_0x00010bfda7c0();
            if ((int)lVar5 != 0) {
              func_0x00010befa120(puVar1);
            }
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar4 != ppuVar9);
          ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111183998;
          func_0x00010bf52a60();
        }
        lVar6 = lVar10;
        func_0x00010c11f420();
        if (lVar6 == 0x7fffffffffffffff) {
          func_0x00010befa120(puVar1);
        }
        else {
          func_0x00010c260c20(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar10);
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar3);
      puVar7 = &uStack_1b0;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  puVar3 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    __Unwind_Resume(puVar3);
    _objc_retain(puVar7);
    if (lRam00000001137ecde0 != -1) {
      func_0x000107c27d9c(0x1137ecde0,&PTR___NSConcreteGlobalBlock_110c707f8);
    }
    puVar2 = puRam00000001137ecdd8;
    func_0x00010c25d400(puRam00000001137ecdd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ad534bc; end: 10ad53543; -[LSLocalizationDelegateImpl getFormattedDate:] */

void FUN_10ad534bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam00000001137ecde0 != -1) {
    func_0x000107c27d9c(0x1137ecde0,&PTR___NSConcreteGlobalBlock_110c707f8);
  }
  uVar1 = uRam00000001137ecdd8;
  func_0x00010c25d400(uRam00000001137ecdd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ad53544; end: 10ad5358f;  */

void FUN_10ad53544(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  uVar1 = puRam00000001137ecdd8;
  puRam00000001137ecdd8 = puVar2;
  _objc_release(uVar1);
  func_0x00010c189c20(puRam00000001137ecdd8);
                    /* WARNING: Could not recover jumptable at 0x00010c215270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001137ecdd8,PTR_s_setTimeStyle__112662ec0,0);
  return;
}



/* Entry: 10ad53590; end: 10ad53617; -[LSLocalizationDelegateImpl getFormattedDateShort:] */

void FUN_10ad53590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam00000001137ecdf0 != -1) {
    func_0x000107c27d9c(0x1137ecdf0,&PTR___NSConcreteGlobalBlock_110c70818);
  }
  uVar1 = uRam00000001137ecde8;
  func_0x00010c25d400(uRam00000001137ecde8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ad53618; end: 10ad53663;  */

void FUN_10ad53618(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  uVar1 = puRam00000001137ecde8;
  puRam00000001137ecde8 = puVar2;
  _objc_release(uVar1);
  func_0x00010c189c20(puRam00000001137ecde8);
                    /* WARNING: Could not recover jumptable at 0x00010c215270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001137ecde8,PTR_s_setTimeStyle__112662ec0,0);
  return;
}



/* Entry: 10ad53664; end: 10ad536eb; -[LSLocalizationDelegateImpl getFormattedTime:] */

void FUN_10ad53664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam00000001137ece00 != -1) {
    func_0x000107c27d9c(0x1137ece00,&PTR___NSConcreteGlobalBlock_110c70838);
  }
  uVar1 = uRam00000001137ecdf8;
  func_0x00010c25d400(uRam00000001137ecdf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ad536ec; end: 10ad53737;  */

void FUN_10ad536ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  uVar1 = puRam00000001137ecdf8;
  puRam00000001137ecdf8 = puVar2;
  _objc_release(uVar1);
  func_0x00010c189c20(puRam00000001137ecdf8);
                    /* WARNING: Could not recover jumptable at 0x00010c215270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001137ecdf8,PTR_s_setTimeStyle__112662ec0,1);
  return;
}



/* Entry: 10ad53738; end: 10ad537bf; -[LSLocalizationDelegateImpl getFormattedDateAndTime:] */

void FUN_10ad53738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam00000001137ece10 != -1) {
    func_0x000107c27d9c(0x1137ece10,&PTR___NSConcreteGlobalBlock_110c70858);
  }
  uVar1 = uRam00000001137ece08;
  func_0x00010c25d400(uRam00000001137ece08);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ad537c0; end: 10ad5380b;  */

void FUN_10ad537c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  uVar1 = puRam00000001137ece08;
  puRam00000001137ece08 = puVar2;
  _objc_release(uVar1);
  func_0x00010c189c20(puRam00000001137ece08);
                    /* WARNING: Could not recover jumptable at 0x00010c215270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001137ece08,PTR_s_setTimeStyle__112662ec0,1);
  return;
}



/* Entry: 10ad5380c; end: 10ad53893; -[LSLocalizationDelegateImpl getMonth:] */

void FUN_10ad5380c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam00000001137ece20 != -1) {
    func_0x000107c27d9c(0x1137ece20,&PTR___NSConcreteGlobalBlock_110c70878);
  }
  uVar1 = uRam00000001137ece18;
  func_0x00010c25d400(uRam00000001137ece18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ad53894; end: 10ad538d7;  */

void FUN_10ad53894(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  uVar1 = puRam00000001137ece18;
  puRam00000001137ece18 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c189b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puRam00000001137ece18,PTR_s_setDateFormat__1126400f8,
             &PTR____CFConstantStringClassReference_110e86718);
  return;
}



/* Entry: 10ad538d8; end: 10ad5395f; -[LSLocalizationDelegateImpl getDayOfWeek:] */

void FUN_10ad538d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam00000001137ece30 != -1) {
    func_0x000107c27d9c(0x1137ece30,&PTR___NSConcreteGlobalBlock_110c70898);
  }
  uVar1 = uRam00000001137ece28;
  func_0x00010c25d400(uRam00000001137ece28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ad53960; end: 10ad539a3;  */

void FUN_10ad53960(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  uVar1 = puRam00000001137ece28;
  puRam00000001137ece28 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c189b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puRam00000001137ece28,PTR_s_setDateFormat__1126400f8,
             &PTR____CFConstantStringClassReference_110ec56b8);
  return;
}



/* Entry: 10ad539a4; end: 10ad539f3; -[LSLocalizationDelegateImpl getFormattedSeconds:] */

void FUN_10ad539a4(undefined8 param_1)

{
  if (lRam00000001137ece40 != -1) {
    func_0x000107c27d9c(0x1137ece40,&PTR___NSConcreteGlobalBlock_110c708b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c25d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uRam00000001137ece38,PTR_s_stringFromTimeInterval__112674f90);
  return;
}



/* Entry: 10ad539f4; end: 10ad53a1f;  */

void FUN_10ad539f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298;
  _objc_alloc_init();
  uVar1 = puRam00000001137ece38;
  puRam00000001137ece38 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad53a20; end: 10ad53ac7; -[LSLocalizationDelegateImpl getFormattedNumber:] */

void FUN_10ad53a20(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001137ece50 != -1) {
    func_0x000107c27d9c(0x1137ece50,&PTR___NSConcreteGlobalBlock_110c708d8);
  }
  uVar2 = uRam00000001137ece48;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d4c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ad53ac8; end: 10ad53b07;  */

void FUN_10ad53ac8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init();
  uVar1 = puRam00000001137ece48;
  puRam00000001137ece48 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001137ece48,PTR_s_setNumberStyle__112651ae0,1);
  return;
}



/* Entry: 10ad53b08; end: 10ad53c1f; -[LSLocalizationDelegateImpl getFormattedTemperatureFromCelsius:] */

void FUN_10ad53b08(float param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (lRam00000001137ece60 != -1) {
    func_0x000107c27d9c(0x1137ece60,&PTR___NSConcreteGlobalBlock_110c708f8);
  }
  puVar2 = PTR__OBJC_CLASS___NSMeasurement_1126bab70;
  _objc_alloc(PTR__OBJC_CLASS___NSMeasurement_1126bab70);
  puVar3 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf34540(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e380((double)param_1,puVar2);
  _objc_release(puVar3);
  uVar1 = uRam00000001137ece58;
  _objc_retain(uRam00000001137ece58);
  _objc_sync_enter(uVar1);
  uVar4 = uRam00000001137ece58;
  func_0x00010c25d4a0(uRam00000001137ece58);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10ad53c20; end: 10ad53c4b;  */

void FUN_10ad53c20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
  _objc_alloc_init();
  uVar1 = puRam00000001137ece58;
  puRam00000001137ece58 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad53c4c; end: 10ad53d63; -[LSLocalizationDelegateImpl getFormattedDistanceFromMeters:] */

void FUN_10ad53c4c(float param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (lRam00000001137ece70 != -1) {
    func_0x000107c27d9c(0x1137ece70,&PTR___NSConcreteGlobalBlock_110c70918);
  }
  puVar2 = PTR__OBJC_CLASS___NSMeasurement_1126bab70;
  _objc_alloc(PTR__OBJC_CLASS___NSMeasurement_1126bab70);
  puVar3 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
  func_0x00010c0cc920(PTR__OBJC_CLASS___NSUnitLength_1126de068);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e380((double)param_1,puVar2);
  _objc_release(puVar3);
  uVar1 = uRam00000001137ece68;
  _objc_retain(uRam00000001137ece68);
  _objc_sync_enter(uVar1);
  uVar4 = uRam00000001137ece68;
  func_0x00010c25d4a0(uRam00000001137ece68);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10ad53d64; end: 10ad53ddb;  */

void FUN_10ad53d64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
  _objc_alloc_init();
  uVar1 = puRam00000001137ece68;
  puRam00000001137ece68 = puVar2;
  _objc_release(uVar1);
  puVar2 = puRam00000001137ece68;
  func_0x00010c0de9c0(puRam00000001137ece68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3b00();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001137ece68,PTR_s_setUnitOptions__112664860,2);
  return;
}



/* Entry: 10ad53ddc; end: 10ad53e37;  */

undefined8 * FUN_10ad53ddc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c70948;
  param_1[1] = 0;
  puVar1 = PTR_PTR_1126de070;
  _objc_alloc_init();
  uVar2 = param_1[1];
  param_1[1] = puVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10ad53e38; end: 10ad53eaf;  */

undefined8 * FUN_10ad53e38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c70948;
  param_1[1] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10ad53eb0; end: 10ad5409b;  */

void FUN_10ad53eb0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  undefined8 *apuStack_128 [2];
  char cStack_111;
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
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bfc4c20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = *(undefined8 *)(lStack_108 + lVar7 * 8);
          _objc_retainAutorelease(uVar3);
          func_0x00010bdc3520();
          func_0x000107c2b054(apuStack_128,uVar3);
          FUN_10a059fa0(param_1,apuStack_128);
          if (cStack_111 < '\0') {
            __ZdlPv(apuStack_128[0]);
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
  }
  func_0x000107c2b054(apuStack_128,&DAT_10f2c6384);
  ppuVar4 = apuStack_128;
  FUN_10a059fa0(param_1,ppuVar4);
  if (cStack_111 < '\0') {
    __ZdlPv(apuStack_128[0]);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  apuStack_128[0] = param_1;
  FUN_10a0426d8(apuStack_128);
  __Unwind_Resume();
  FUN_10ad54134(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 8);
  func_0x00010bfc5ba0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(extraout_x8,uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 10ad5409c; end: 10ad54133;  */

void FUN_10ad5409c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10ad54134(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad54134; end: 10ad54357;  */

void FUN_10ad54134(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  puVar3 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  plVar4 = param_1;
  func_0x00010988c6c4(param_1);
  func_0x00010c2278a0(puVar3,param_2,(long)(int)plVar4);
  plVar4 = param_1;
  func_0x00010988c578(param_1);
  func_0x00010c1c8fc0(puVar3,param_2,(ulong)plVar4 & 0xffffffff);
  plVar4 = param_1;
  func_0x00010988c41c(param_1);
  func_0x00010c189d40(puVar3,param_2,(ulong)plVar4 & 0xffffffff);
  lVar7 = *param_1;
  iVar9 = ((int)(lVar7 / 86400000) + (int)(lVar7 >> 0x3f)) -
          (SUB164(SEXT816(lVar7) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar10 = (long)iVar9 * 86400000;
  uVar8 = lVar7 + (long)(int)(iVar9 - (uint)(lVar10 - lVar7 != 0 && lVar7 <= lVar10)) * -86400000;
  uVar1 = -uVar8;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  func_0x00010c1a9320(puVar3,param_2,(SUB168(auVar2 * ZEXT816(0x4a90be587de6e565),8) << 0xc) >> 0x20
                     );
  lVar7 = *param_1;
  iVar9 = ((int)(lVar7 / 86400000) + (int)(lVar7 >> 0x3f)) -
          (SUB164(SEXT816(lVar7) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar10 = (long)iVar9 * 86400000;
  uVar8 = lVar7 + (long)(int)(iVar9 - (uint)(lVar10 - lVar7 != 0 && lVar7 <= lVar10)) * -86400000;
  uVar1 = -uVar8;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  func_0x00010c1c8500(puVar3,param_2,(uVar1 % 3600000) / 60000);
  lVar7 = *param_1;
  iVar9 = ((int)(lVar7 / 86400000) + (int)(lVar7 >> 0x3f)) -
          (SUB164(SEXT816(lVar7) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar10 = (long)iVar9 * 86400000;
  uVar8 = lVar7 + (long)(int)(iVar9 - (uint)(lVar10 - lVar7 != 0 && lVar7 <= lVar10)) * -86400000;
  uVar1 = -uVar8;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  func_0x00010c1f8e00(puVar3,param_2,
                      ((uint)((int)(uVar1 % 3600000) + (int)((uVar1 % 3600000) / 60000) * -60000) >>
                       3 & 0x1fff) / 0x7d);
  puVar5 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10ad54358; end: 10ad543ef;  */

void FUN_10ad54358(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10ad54134(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5be0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad543f0; end: 10ad54487;  */

void FUN_10ad543f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10ad54134(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad54488; end: 10ad5451f;  */

void FUN_10ad54488(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10ad54134(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad54520; end: 10ad545b7;  */

void FUN_10ad54520(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10ad54134(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc7aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad545b8; end: 10ad5464f;  */

void FUN_10ad545b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10ad54134(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc48e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad54650; end: 10ad546af;  */

void FUN_10ad54650(undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5ca0((double)param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad546b0; end: 10ad5470b;  */

void FUN_10ad546b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad5470c; end: 10ad54767;  */

void FUN_10ad5470c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad54768; end: 10ad547c3;  */

void FUN_10ad54768(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc5c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad547c4; end: 10ad547cb;  */

void FUN_10ad547c4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar6 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  if (puVar6 != puVar3) {
    do {
      puVar1 = (undefined8 *)*puVar6;
      puVar4 = (undefined *)puVar6[1];
      if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
        puVar1 = puVar6;
        puVar4 = (undefined *)(ulong)*(byte *)((long)puVar6 + 0x17);
      }
      lVar8 = 0x300;
      ppuVar7 = &PTR_PTR_110ba29a8;
      do {
        if (ppuVar7[-1] == puVar4) {
          puVar5 = ppuVar7[-2];
          _memcmp(puVar5,puVar1,puVar4);
          if ((int)puVar5 == 0) {
            if (lVar8 != 0) {
              FUN_10a0eeaf8(&uStack_b0,param_1,*ppuVar7,ppuVar7[1]);
              lStack_b8 = (long)*(char *)((long)puVar6 + 0x17);
              puStack_c0 = puVar6;
              if (lStack_b8 < 0) {
                lStack_b8 = puVar6[1];
                puStack_c0 = (undefined8 *)*puVar6;
              }
              func_0x0001086af96c(&uStack_80,&puStack_c0,&puStack_c0);
            }
            break;
          }
        }
        ppuVar7 = ppuVar7 + 4;
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != 0);
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar3);
  }
  lVar8 = 0;
  do {
    puVar6 = &uStack_80;
    func_0x0001086eb2c8(puVar6,(undefined8 *)((long)&PTR_DAT_110ba2c98 + lVar8));
    if (puVar6 == (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)((long)&PTR_DAT_110ba2c98 + lVar8);
      puVar4 = *(undefined **)(&UNK_110ba2ca0 + lVar8);
      lVar9 = 0x300;
      ppuVar7 = &PTR_PTR_110ba29a8;
      do {
        if (ppuVar7[-1] == puVar4) {
          puVar5 = ppuVar7[-2];
          _memcmp(puVar5,uVar2,puVar4);
          if ((int)puVar5 == 0) {
            if (lVar9 != 0) {
              FUN_10a0eeaf8(&uStack_b0,param_1,*ppuVar7,ppuVar7[1]);
            }
            break;
          }
        }
        ppuVar7 = ppuVar7 + 4;
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != 0);
    }
    lVar8 = lVar8 + 0x10;
    if (lVar8 == 0x160) {
      func_0x00010a109474(&uStack_b0);
      func_0x0001086af8b0(&uStack_80);
      return;
    }
  } while( true );
}



/* Entry: 10ad547cc; end: 10ad54a97;  */

long * FUN_10ad547cc(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0x100000000;
  param_1[8] = 0x500000004;
  param_1[7] = 0x300000002;
  param_1[9] = -0x100000000;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *param_1 = (long)&PTR_FUN_110c70a10;
  param_1[0xb] = (long)&PTR_DAT_110c70ab8;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_10ad54a98();
  uStack_58 = (undefined4)param_2;
  uStack_54 = (undefined4)param_3;
  uStack_44 = 0;
  uStack_50 = 0;
  uVar5 = param_4 - 3;
  if (uVar5 < 0xd) {
    uStack_48 = *(undefined4 *)(&UNK_10e5102bc + (ulong)uVar5 * 4);
  }
  else {
    uStack_48 = 0x27;
  }
  uStack_4c = 0x35;
  func_0x00010928b6a0(&plStack_70,&uStack_58);
  FUN_10ad54ae0(param_1 + 0xd,&plStack_70);
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 8))();
  }
  lVar6 = param_1[0xd];
  if (lVar6 != 0) {
    ___dynamic_cast(lVar6,&PTR_DAT_110ae7280,&PTR_DAT_110ae7420,0xffffffffffffffff);
  }
  param_1[0xf] = lVar6;
  if (uVar5 < 0xd) {
    uVar7 = *(undefined4 *)(&UNK_10e5102f0 + (ulong)uVar5 * 4);
  }
  else {
    uVar7 = 5;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = uVar7;
  if (param_5 != (long *)0x0) {
    (**(code **)(*param_5 + 0x80))(&plStack_70,param_5,param_1 + 0xd);
    plStack_78 = plStack_68;
    plStack_80 = plStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a169c14(param_1 + 1,&plStack_80);
    plVar1 = plStack_78;
    lVar6 = param_1[1];
    lVar9 = *(long *)(lVar6 + 0x3c);
    lVar8 = *(long *)(lVar6 + 0x34);
    lVar11 = *(long *)(lVar6 + 0x4c);
    lVar10 = *(long *)(lVar6 + 0x44);
    uVar7 = *(undefined4 *)(lVar6 + 0x54);
    lVar12 = *(long *)(lVar6 + 0x24);
    param_1[4] = *(long *)(lVar6 + 0x2c);
    param_1[3] = lVar12;
    *(undefined4 *)(param_1 + 9) = uVar7;
    param_1[8] = lVar11;
    param_1[7] = lVar10;
    param_1[6] = lVar9;
    param_1[5] = lVar8;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  FUN_10a315a04(param_2,param_3,1,0xde1,*(undefined1 *)((long)param_1 + 0x54));
  if ((param_5 == (long *)0x0) || (*(int *)((long)param_5 + 0x734) != 2)) {
    FUN_10ad54b74(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1,0,param_5);
  }
  return param_1;
}



/* Entry: 10ad54a98; end: 10ad54adf;  */

long * FUN_10ad54a98(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  piVar4 = (int *)0x113834968;
  FUN_10a090518();
  if (*piVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(plVar5);
    return plVar5;
  }
  plVar5 = (long *)&UNK_10f6a7e41;
  FUN_10a00946c();
  func_0x000104bd46a0();
  lVar8 = *param_2;
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    *puVar6 = &PTR_FUN_110c70b48;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = lVar8;
  }
  *param_2 = 0;
  plVar7 = (long *)plVar5[1];
  *plVar5 = lVar8;
  plVar5[1] = (long)puVar6;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return plVar5;
}



/* Entry: 10ad54ae0; end: 10ad54b73;  */

long * FUN_10ad54ae0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110c70b48;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ad54b74; end: 10ad54e13;  */

void FUN_10ad54b74(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  ppuVar7 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*ppuVar7 != (undefined *)0x0) {
    FUN_10a08e1c8(*ppuVar7 + 0x18);
  }
  uVar8 = 1;
  FUN_10a303694(1);
  plVar9 = *(long **)(param_1 + 0x68);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    ___dynamic_cast(plVar9,&PTR_DAT_110ae7280,&PTR_DAT_110ae7290,0xffffffffffffffff);
  }
  lVar13 = 0;
  if ((char)*(long *)((long)*ppuVar7 + 0x160) == '\0') {
    lVar13 = 8;
  }
  lVar13 = **(long **)(*(long *)*ppuVar7 + lVar13);
  plVar10 = plVar9;
  (**(code **)*plVar9)(plVar9,lVar13 + 0x930);
  (**(code **)(*plVar9 + 8))(plVar9,lVar13 + 0x930);
  lVar13 = *(long *)(param_1 + 0x68);
  FUN_10a303840(uVar8,plVar9,plVar10,0);
  _glTexParameteri(plVar9,0x2801,0x2601);
  _glTexParameteri(plVar9,0x2800,0x2601);
  _glTexParameteri(plVar9,0x2802,0x812f);
  _glTexParameteri(plVar9,0x2803,0x812f);
  FUN_10a303840(uVar8,plVar9,0,0);
  uVar1 = 4;
  if (*(uint *)(lVar13 + 0x24) != 0x27) {
    uVar1 = *(uint *)(lVar13 + 0x24);
  }
  uVar11 = (ulong)uVar1;
  FUN_10ad4c0a4(uVar11);
  uVar12 = uVar11 >> 0x20;
  uVar2 = *(undefined4 *)(lVar13 + 8);
  uVar3 = *(undefined4 *)(lVar13 + 0xc);
  uVar4 = *(undefined4 *)(lVar13 + 0x1c);
  FUN_10ad4b390(uVar12);
  func_0x00010ad4c21c(uVar11,uVar12);
  FUN_10a316e3c(&uStack_60,uVar2,uVar3,1,uVar11,plVar10,plVar9,0,uVar4,1);
  plStack_68 = plStack_58;
  uStack_70 = uStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x00010a169c14(param_1 + 8,&uStack_70);
  plVar9 = plStack_68;
  lVar13 = *(long *)(param_1 + 8);
  uVar15 = *(undefined8 *)(lVar13 + 0x3c);
  uVar14 = *(undefined8 *)(lVar13 + 0x34);
  uVar17 = *(undefined8 *)(lVar13 + 0x4c);
  uVar16 = *(undefined8 *)(lVar13 + 0x44);
  uVar2 = *(undefined4 *)(lVar13 + 0x54);
  uVar18 = *(undefined8 *)(lVar13 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar13 + 0x2c);
  *(undefined8 *)(param_1 + 0x18) = uVar18;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar17;
  *(undefined8 *)(param_1 + 0x38) = uVar16;
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  *(undefined8 *)(param_1 + 0x28) = uVar14;
  if (plStack_68 != (long *)0x0) {
    plVar10 = plStack_68 + 1;
    do {
      lVar13 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      lVar13 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  FUN_10ad552c8(uVar8);
  return;
}



/* Entry: 10ad54e14; end: 10ad550bb;  */

undefined8 * FUN_10ad54e14(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plStack_50;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0x100000000;
  param_1[8] = 0x500000004;
  param_1[7] = 0x300000002;
  param_1[9] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *param_1 = &PTR_FUN_110c70a10;
  param_1[0xb] = &PTR_DAT_110c70ab8;
  param_1[0xc] = param_3;
  plVar5 = param_1 + 0xd;
  *plVar5 = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plStack_50 = (long *)&UNK_10f6a7e16;
  uStack_48 = 0x2a;
  if (param_2 == 0) {
    FUN_10a0edfc4(&plStack_50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad55064);
    (*pcVar1)();
  }
  FUN_10ad54a98(param_1);
  func_0x00010928b700(&plStack_50,param_2,param_3);
  FUN_10ad54ae0(plVar5,&plStack_50);
  if (plStack_50 != (long *)0x0) {
    (**(code **)(*plStack_50 + 8))();
  }
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    ___dynamic_cast(lVar3,&PTR_DAT_110ae7280,&PTR_DAT_110ae7420,0xffffffffffffffff);
  }
  param_1[0xf] = lVar3;
  _CVPixelBufferGetPixelFormatType();
  iVar2 = (int)param_2;
  if (iVar2 < 0x52476841) {
    if (iVar2 < 0x34323066) {
      if (iVar2 == 0x20) {
        uVar4 = 0;
        goto LAB_10ad55018;
      }
      if (iVar2 == 0x32433038) {
        uVar4 = 9;
        goto LAB_10ad55018;
      }
    }
    else {
      if ((iVar2 == 0x34323066) || (iVar2 == 0x34323076)) {
        uVar4 = 6;
        if (param_3 != 0) {
          uVar4 = 9;
        }
        goto LAB_10ad55018;
      }
      if (iVar2 == 0x4c303038) {
        uVar4 = 7;
        goto LAB_10ad55018;
      }
    }
  }
  else {
    uVar4 = 6;
    if (iVar2 < 0x66646973) {
      if (iVar2 == 0x52476841) {
        uVar4 = 0xb;
        goto LAB_10ad55018;
      }
      if (iVar2 == 0x66646570) goto LAB_10ad55018;
    }
    else {
      if (iVar2 == 0x66646973) goto LAB_10ad55018;
      if ((iVar2 == 0x68646570) || (iVar2 == 0x68646973)) {
        uVar4 = 0xf;
        goto LAB_10ad55018;
      }
    }
  }
  uVar4 = 5;
LAB_10ad55018:
  *(undefined4 *)((long)param_1 + 0x4c) = uVar4;
  FUN_10a315a04(*(undefined4 *)(param_1[0xd] + 8),*(undefined4 *)(param_1[0xd] + 0xc),1,0xde1,
                *(undefined1 *)((long)param_1 + 0x54));
  FUN_10ad54b74(param_1);
  return param_1;
}



/* Entry: 10ad550bc; end: 10ad550f3;  */

void FUN_10ad550bc(long param_1)

{
  (**(code **)**(undefined8 **)(param_1 + 0x78))();
  _CVPixelBufferGetBytesPerRowOfPlane();
  return;
}



/* Entry: 10ad550f4; end: 10ad552c7;  */

long FUN_10ad550f4(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_x7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar8 = *ppuVar5;
  if (((puVar8 != (undefined *)0x0) && (puVar8[0xc0] == '\x01')) && (*(long *)(puVar8 + 0x80) != 0))
  {
    FUN_10a08dbac(puVar8 + 0x18);
  }
  lVar6 = 0;
  FUN_10a303694();
  if (lVar6 != 0) {
    FUN_10ad552c8();
  }
  plVar9 = (long *)*ppuVar5;
  if (plVar9 != (long *)0x0) {
    lVar6 = 0;
    if ((char)plVar9[0x2c] == '\0') {
      lVar6 = 8;
    }
    plVar10 = *(long **)(*plVar9 + lVar6);
    plVar9 = (long *)*plVar10;
    if ((plVar9 != (long *)0x0) && (*(int *)((long)plVar9 + 0x734) != 1)) {
      func_0x00010a08f140();
      lVar6 = *plVar9;
      if (lVar6 != 0) {
        plVar9 = *(long **)(lVar6 + 0x10);
        uVar1 = *(undefined8 *)(lVar6 + 0x18);
        __ZNSt3__115recursive_mutex4lockEv(uVar1);
        FUN_10a012fec(&plStack_48,*plVar10,plVar9);
        plVar10 = plStack_48;
        (**(code **)(*plStack_48 + 0x48))();
        (**(code **)(*plVar10 + 0x48))();
        (**(code **)(*plVar10 + 0x40))(plVar10);
        plStack_38 = plStack_48;
        (**(code **)(*plVar9 + 0x30))(plVar9,0,0,0,0,&plStack_38,1,in_x7,0,0,2);
        if (plStack_40 != (long *)0x0) {
          plVar9 = plStack_40 + 1;
          do {
            lVar6 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(uVar1);
      }
    }
  }
  plVar9 = *(long **)(param_1 + 0x68);
  uVar7 = 1;
  (**(code **)(*plVar9 + 0x10))(plVar9,1,0);
  if (*(ulong *)(param_1 + 0x60) < uVar7) {
    return plVar9[*(ulong *)(param_1 + 0x60) * 2 + 1];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad552a4);
  (*pcVar4)();
}



/* Entry: 10ad552c8; end: 10ad55363;  */

void FUN_10ad552c8(long param_1)

{
  int iVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_21;
  
  if ((*(byte *)(param_1 + 0x278) >> 2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glFlush_11034b590)();
    return;
  }
  puStack_48 = &UNK_10f6a7f18;
  uStack_40 = 7;
  uStack_38 = 0;
  uStack_30 = 0;
  iVar1 = 1;
  FUN_10a31bca4(1,&uStack_21,0,0);
  _glFlush();
  __ZSt19uncaught_exceptionsv();
  FUN_10a31bf24(iVar1 == 0,&puStack_48,uStack_38,uStack_30);
  return;
}



/* Entry: 10ad55364; end: 10ad5536b;  */

long FUN_10ad55364(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_x7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar8 = *ppuVar5;
  if (((puVar8 != (undefined *)0x0) && (puVar8[0xc0] == '\x01')) && (*(long *)(puVar8 + 0x80) != 0))
  {
    FUN_10a08dbac(puVar8 + 0x18);
  }
  lVar6 = 0;
  FUN_10a303694();
  if (lVar6 != 0) {
    FUN_10ad552c8();
  }
  plVar9 = (long *)*ppuVar5;
  if (plVar9 != (long *)0x0) {
    lVar6 = 0;
    if ((char)plVar9[0x2c] == '\0') {
      lVar6 = 8;
    }
    plVar10 = *(long **)(*plVar9 + lVar6);
    plVar9 = (long *)*plVar10;
    if ((plVar9 != (long *)0x0) && (*(int *)((long)plVar9 + 0x734) != 1)) {
      func_0x00010a08f140();
      lVar6 = *plVar9;
      if (lVar6 != 0) {
        plVar9 = *(long **)(lVar6 + 0x10);
        uVar1 = *(undefined8 *)(lVar6 + 0x18);
        __ZNSt3__115recursive_mutex4lockEv(uVar1);
        FUN_10a012fec(&plStack_48,*plVar10,plVar9);
        plVar10 = plStack_48;
        (**(code **)(*plStack_48 + 0x48))();
        (**(code **)(*plVar10 + 0x48))();
        (**(code **)(*plVar10 + 0x40))(plVar10);
        plStack_38 = plStack_48;
        (**(code **)(*plVar9 + 0x30))(plVar9,0,0,0,0,&plStack_38,1,in_x7,0,0,2);
        if (plStack_40 != (long *)0x0) {
          plVar9 = plStack_40 + 1;
          do {
            lVar6 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(uVar1);
      }
    }
  }
  plVar9 = *(long **)(param_1 + 0x10);
  uVar7 = 1;
  (**(code **)(*plVar9 + 0x10))(plVar9,1,0);
  if (*(ulong *)(param_1 + 8) < uVar7) {
    return plVar9[*(ulong *)(param_1 + 8) * 2 + 1];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad552a4);
  (*pcVar4)();
}



/* Entry: 10ad5536c; end: 10ad553f3;  */

void FUN_10ad5536c(long param_1)

{
  long *plVar1;
  long *plStack_18;
  
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(&plStack_18);
  plVar1 = plStack_18;
  plStack_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 10ad553f4; end: 10ad55487;  */

void FUN_10ad553f4(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x60))();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_10a1b7ee0(param_2,(long)plVar1 + (ulong)(uint)((int)plVar2 * param_4),param_3,
                (ulong)plVar3 & 0xffffffff,(long)param_5);
                    /* WARNING: Could not recover jumptable at 0x00010ad55484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



/* Entry: 10ad55488; end: 10ad55537;  */

long * FUN_10ad55488(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (((*(int *)(param_2 + 0x10) == (int)param_1[3]) &&
      (*(int *)(param_2 + 0x14) == *(int *)((long)param_1 + 0x1c))) &&
     (*(int *)(param_2 + 0x24) == *(int *)((long)param_1 + 0x4c))) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x60))(param_1);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_10a1b7ee0(plVar1,uVar4,(ulong)plVar2 & 0xffffffff,*(undefined8 *)(param_2 + 0x18),
                  (long)*(int *)(param_2 + 0x14));
                    /* WARNING: Could not recover jumptable at 0x00010ad55528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))(param_1);
    return param_1;
  }
  puVar3 = &UNK_10f6a7ee5;
  FUN_10a00946c();
  return (long *)(ulong)(*(int *)(puVar3 + 0x4c) != 3);
}



/* Entry: 10ad55538; end: 10ad55577;  */

bool FUN_10ad55538(long param_1)

{
  return *(int *)(param_1 + 0x4c) != 3;
}



/* Entry: 10ad55578; end: 10ad55783;  */

void FUN_10ad55578(undefined1 *param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined1 *unaff_x19;
  long *plVar10;
  undefined **unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar11;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  while( true ) {
    ppuVar8 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = ppuVar8;
    if ((int)param_2 != 0) {
      lVar5 = 0;
      FUN_10a303694();
      if (lVar5 == 0) {
        _glFlush();
      }
      else {
        FUN_10ad552c8();
      }
    }
    unaff_x21 = *(undefined8 **)(param_1 + 0x68);
    if (unaff_x21 == (undefined8 *)0x0) {
      unaff_x21 = (undefined8 *)0x0;
    }
    else {
      param_2 = &PTR_DAT_110ae7280;
      param_3 = &PTR_DAT_110ae7448;
      ___dynamic_cast();
    }
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    puVar9 = (undefined8 *)*ppuVar6;
    *(undefined **)((long)register0x00000008 + -0x50) = &UNK_10f63b699;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0x28;
    if (puVar9 != (undefined8 *)0x0) break;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x50);
    FUN_10a0edfc4();
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x58));
    unaff_x30 = FUN_10ad55784;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x58;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x20 = ppuVar8;
  }
  uVar7 = *puVar9;
  func_0x00010ad5af60();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar7;
  (**(code **)*unaff_x21)(unaff_x21,(undefined1 *)((long)register0x00000008 + -0x58));
  uVar11 = *unaff_x21;
  _objc_retain(uVar11);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar11;
  _objc_release(uVar7);
  uVar7 = *unaff_x21;
  func_0x00010c0fca60();
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  if (ppuVar8 != (undefined **)0x0) {
    lVar5 = *(long *)(param_1 + 0x68);
    FUN_109fcac90(ppuVar8,lVar5 + 8);
    *(undefined ***)((long)register0x00000008 + -0x38) = ppuVar8;
    FUN_109fda62c((undefined1 *)((long)register0x00000008 + -0x50),ppuVar8,
                  (undefined1 *)((long)register0x00000008 + -0x38),unaff_x21,lVar5 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    if (*(long *)((long)register0x00000008 + -0x48) != 0) {
      plVar10 = (long *)(*(long *)((long)register0x00000008 + -0x48) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a169c14(param_1 + 8,(undefined1 *)((long)register0x00000008 + -0x70));
    lVar5 = *(long *)(param_1 + 8);
    uVar11 = *(undefined8 *)(lVar5 + 0x3c);
    uVar7 = *(undefined8 *)(lVar5 + 0x34);
    uVar13 = *(undefined8 *)(lVar5 + 0x4c);
    uVar12 = *(undefined8 *)(lVar5 + 0x44);
    uVar2 = *(undefined4 *)(lVar5 + 0x54);
    uVar14 = *(undefined8 *)(lVar5 + 0x24);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar5 + 0x2c);
    *(undefined8 *)(param_1 + 0x18) = uVar14;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar13;
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    plVar10 = *(long **)((long)register0x00000008 + -0x68);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = *(long **)((long)register0x00000008 + -0x48);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  _objc_release(*(undefined8 *)((long)register0x00000008 + -0x58));
  return;
}



/* Entry: 10ad55784; end: 10ad5578b;  */

void FUN_10ad55784(undefined1 *param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *unaff_x19;
  undefined **unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  while( true ) {
    ppuVar8 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = ppuVar8;
    if ((int)param_2 != 0) {
      lVar5 = 0;
      FUN_10a303694();
      if (lVar5 == 0) {
        _glFlush();
      }
      else {
        FUN_10ad552c8();
      }
    }
    unaff_x21 = *(undefined8 **)(param_1 + 0x10);
    if (unaff_x21 == (undefined8 *)0x0) {
      unaff_x21 = (undefined8 *)0x0;
    }
    else {
      param_2 = &PTR_DAT_110ae7280;
      param_3 = &PTR_DAT_110ae7448;
      ___dynamic_cast();
    }
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    puVar9 = (undefined8 *)*ppuVar6;
    *(undefined **)((long)register0x00000008 + -0x50) = &UNK_10f63b699;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0x28;
    if (puVar9 != (undefined8 *)0x0) break;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x50);
    FUN_10a0edfc4();
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x58));
    unaff_x30 = FUN_10ad55784;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x20 = ppuVar8;
  }
  uVar7 = *puVar9;
  func_0x00010ad5af60();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar7;
  (**(code **)*unaff_x21)(unaff_x21,(undefined1 *)((long)register0x00000008 + -0x58));
  uVar11 = *unaff_x21;
  _objc_retain(uVar11);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  _objc_release(uVar7);
  uVar7 = *unaff_x21;
  func_0x00010c0fca60();
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  if (ppuVar8 != (undefined **)0x0) {
    lVar5 = *(long *)(param_1 + 0x10);
    FUN_109fcac90(ppuVar8,lVar5 + 8);
    *(undefined ***)((long)register0x00000008 + -0x38) = ppuVar8;
    FUN_109fda62c((undefined1 *)((long)register0x00000008 + -0x50),ppuVar8,
                  (undefined1 *)((long)register0x00000008 + -0x38),unaff_x21,lVar5 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    if (*(long *)((long)register0x00000008 + -0x48) != 0) {
      plVar10 = (long *)(*(long *)((long)register0x00000008 + -0x48) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a169c14(param_1 + -0x50,(undefined1 *)((long)register0x00000008 + -0x70));
    lVar5 = *(long *)(param_1 + -0x50);
    uVar11 = *(undefined8 *)(lVar5 + 0x3c);
    uVar7 = *(undefined8 *)(lVar5 + 0x34);
    uVar13 = *(undefined8 *)(lVar5 + 0x4c);
    uVar12 = *(undefined8 *)(lVar5 + 0x44);
    uVar2 = *(undefined4 *)(lVar5 + 0x54);
    uVar14 = *(undefined8 *)(lVar5 + 0x24);
    *(undefined8 *)(param_1 + -0x38) = *(undefined8 *)(lVar5 + 0x2c);
    *(undefined8 *)(param_1 + -0x40) = uVar14;
    *(undefined4 *)(param_1 + -0x10) = uVar2;
    *(undefined8 *)(param_1 + -0x18) = uVar13;
    *(undefined8 *)(param_1 + -0x20) = uVar12;
    *(undefined8 *)(param_1 + -0x28) = uVar11;
    *(undefined8 *)(param_1 + -0x30) = uVar7;
    plVar10 = *(long **)((long)register0x00000008 + -0x68);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = *(long **)((long)register0x00000008 + -0x48);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  _objc_release(*(undefined8 *)((long)register0x00000008 + -0x58));
  return;
}



/* Entry: 10ad5578c; end: 10ad55853;  */

long * FUN_10ad5578c(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x90))(param_1,param_2,0);
  return param_1 + 0x11;
}



/* Entry: 10ad55854; end: 10ad55937;  */

undefined8 * FUN_10ad55854(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_110c70a10;
  param_1[0xb] = &PTR_DAT_110c70ab8;
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar5 = *ppuVar4;
  if (((puVar5 != (undefined *)0x0) && (puVar5[0xc0] == '\x01')) && (*(long *)(puVar5 + 0x80) != 0))
  {
    FUN_10a08dbac(puVar5 + 0x18);
  }
  FUN_10a315c68(param_1 + 1);
  param_1[0xd] = 0;
  plVar7 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  _objc_release(param_1[0x11]);
  FUN_10ad55b70(param_1 + 0xd);
  *param_1 = &PTR_DAT_110bc4550;
  FUN_10a09d22c(param_1 + 1);
  return param_1;
}



/* Entry: 10ad55938; end: 10ad55943;  */

undefined8 * FUN_10ad55938(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_110c70a10;
  param_1[0xb] = &PTR_DAT_110c70ab8;
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar5 = *ppuVar4;
  if (((puVar5 != (undefined *)0x0) && (puVar5[0xc0] == '\x01')) && (*(long *)(puVar5 + 0x80) != 0))
  {
    FUN_10a08dbac(puVar5 + 0x18);
  }
  FUN_10a315c68(param_1 + 1);
  param_1[0xd] = 0;
  plVar7 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  _objc_release(param_1[0x11]);
  FUN_10ad55b70(param_1 + 0xd);
  *param_1 = &PTR_DAT_110bc4550;
  FUN_10a09d22c(param_1 + 1);
  return param_1;
}



/* Entry: 10ad55944; end: 10ad5596f;  */

void FUN_10ad55944(void)

{
  FUN_10ad55854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad55970; end: 10ad559ff;  */

void FUN_10ad55970(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  piVar1 = (int *)0x113834968;
  uStack_38 = param_5;
  uStack_30 = param_4;
  uStack_2c = param_3;
  uStack_28 = param_2;
  FUN_10a090518();
  if (*piVar1 == 1) {
    FUN_10ad55c34(&uStack_50,&uStack_21,&uStack_28,&uStack_2c,&uStack_30,&uStack_38);
  }
  else {
    FUN_10ad55d44(&uStack_50,&uStack_21,&uStack_28,&uStack_2c,&uStack_30,&uStack_38);
  }
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  return;
}



/* Entry: 10ad55a00; end: 10ad55ab3;  */

undefined8 FUN_10ad55a00(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)0x113834968;
  FUN_10a090518();
  if (*piVar1 == 1) {
    uVar2 = 0x90;
    __Znwm(0x90);
    FUN_10ad547cc();
  }
  else {
    uVar2 = 0xb8;
    __Znwm(0xb8);
    FUN_10ad55fb4();
  }
  return uVar2;
}



/* Entry: 10ad55ab4; end: 10ad55b2b;  */

void FUN_10ad55ab4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  piVar1 = (int *)0x113834968;
  uStack_38 = param_3;
  uStack_30 = param_2;
  FUN_10a090518();
  if (*piVar1 == 1) {
    FUN_10ad55e54(&uStack_50,&uStack_21,&uStack_30,&uStack_38);
  }
  else {
    FUN_10ad55f04(&uStack_50,&uStack_21,&uStack_30,&uStack_38);
  }
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  return;
}



/* Entry: 10ad55b2c; end: 10ad55b6f;  */

long * FUN_10ad55b2c(long *param_1)

{
  if ((param_1 != (long *)0x0) &&
     (___dynamic_cast(param_1,&PTR_DAT_110bc45d8,&PTR_DAT_110c70c38,0xfffffffffffffffe),
     param_1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad55b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 10ad55b70; end: 10ad55bc7;  */

long FUN_10ad55b70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ad55bc8; end: 10ad55bcb;  */

void FUN_10ad55bc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad55bcc; end: 10ad55bdf;  */

void FUN_10ad55bcc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad55be0; end: 10ad55bf7;  */

void FUN_10ad55be0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad55bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10ad55bf8; end: 10ad55c2f;  */

undefined8 FUN_10ad55bf8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c70b88);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}


