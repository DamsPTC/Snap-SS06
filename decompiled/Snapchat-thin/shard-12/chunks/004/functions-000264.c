/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10907e804; end: 10907e80b; -[SCImageProcessProgramImpl error] */

undefined8 FUN_10907e804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10907e80c; end: 10907e813; -[SCImageProcessProgramImpl program] */

undefined4 FUN_10907e80c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10907e814; end: 10907e84f; -[SCImageProcessProgramImpl .cxx_destruct] */

void FUN_10907e814(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10907e850; end: 10907e92f; -[SCImageProcessRGBImageDataInput initWithGlWrapper:imageData:pixelSize:cachedTextureId:] */

undefined1 *
FUN_10907e850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127002b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907e930; end: 10907e93b; -[SCImageProcessRGBImageDataInput pixelSize] */

undefined1  [16] FUN_10907e930(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10907e93c; end: 10907e947; -[SCImageProcessRGBImageDataInput bytesPerRow] */

long FUN_10907e93c(long param_1)

{
  return *(long *)(param_1 + 0x18) << 2;
}



/* Entry: 10907e948; end: 10907e94f; -[SCImageProcessRGBImageDataInput colorSpace] */

undefined8 FUN_10907e948(void)

{
  return 1;
}



/* Entry: 10907e950; end: 10907e957; -[SCImageProcessRGBImageDataInput pixelBufferForCPUProcessing] */

undefined8 FUN_10907e950(void)

{
  return 0;
}



/* Entry: 10907e958; end: 10907ec17; -[SCImageProcessRGBImageDataInput setupInputTextureWithContext:runContext:error:] */

long FUN_10907e958(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    func_0x00010bf25f00(uVar6);
    func_0x00010c0d51c0(param_3);
    goto LAB_10907eb68;
  }
  lStack_70 = 0;
  uStack_68 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
  puStack_60 = PTR____kCFBooleanTrue_11034ab68;
  _objc_retain(param_4);
  func_0x00010bf72080();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf25f00(uVar3);
  iVar1 = 0;
  _CVPixelBufferCreateWithBytes(0,lVar5,uVar6,0x42475241,uVar3,lVar5 << 2,0,0,puVar2,&lStack_70);
  if ((iVar1 == 0) && (lStack_70 != 0)) {
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    lVar4 = param_3;
    func_0x00010c26ce80(param_3);
    _CVOpenGLESTextureCacheCreateTextureFromImage
              (uVar3,lVar4,lStack_70,0,0xde1,0x1908,lVar5,uVar6,0x1401000080e1,0,
               (undefined8 *)(param_1 + 0x40));
    if ((int)uVar3 != 0) goto LAB_10907eb24;
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _CVOpenGLESTextureGetName();
    _glActiveTexture(0x84c0);
    _glBindTexture(0xde1,uVar6);
    _glTexParameteri(0xde1,0x2801,0x2601);
    _glTexParameteri(0xde1,0x2800,0x2601);
    _glTexParameteri(0xde1,0x2802,0x812f);
    _glTexParameteri(0xde1,0x2803,0x812f);
    if ((int)uVar6 == 0x7fffffff) goto LAB_10907eb24;
  }
  else {
LAB_10907eb24:
    func_0x00010bf25f00(*(undefined8 *)(param_1 + 0x10));
    lVar5 = param_3;
    func_0x00010bf596e0();
    *(int *)(param_1 + 0x3c) = (int)lVar5;
  }
  _CVPixelBufferRelease(lStack_70);
LAB_10907eb68:
  func_0x00010bf1a2a0(*(undefined8 *)(param_1 + 8));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar2);
  func_0x00010c1d0640(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return 1;
  }
  ___stack_chk_fail();
  if (*(int *)(param_3 + 0x3c) != 0) {
    func_0x00010bf6ccc0(*(undefined8 *)(param_3 + 8));
  }
  lVar5 = *(long *)(param_3 + 0x40);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return lVar5;
  }
  return 0;
}



/* Entry: 10907ec18; end: 10907ec5f; -[SCImageProcessRGBImageDataInput cleanupTextures] */

void FUN_10907ec18(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x00010bf6ccc0(*(undefined8 *)(param_1 + 8),param_2,(int *)(param_1 + 0x3c),1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 10907ec60; end: 10907ec9b; -[SCImageProcessRGBImageDataInput .cxx_destruct] */

void FUN_10907ec60(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907ec9c; end: 10907ed4f; -[SCImageProcessRGBPixelBufferDataInput initWithGlWrapper:pixelBuffer:] */

undefined1 *
FUN_10907ec9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127002c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _CVPixelBufferRetain();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    _CVPixelBufferGetWidth();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_4;
    _CVPixelBufferGetHeight();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _CVPixelBufferGetBytesPerRowOfPlane(param_4,0);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907ed50; end: 10907ed97; -[SCImageProcessRGBPixelBufferDataInput dealloc] */

void FUN_10907ed50(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1127002c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10907ed98; end: 10907eda3; -[SCImageProcessRGBPixelBufferDataInput pixelSize] */

undefined1  [16] FUN_10907ed98(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10907eda4; end: 10907edab; -[SCImageProcessRGBPixelBufferDataInput bytesPerRow] */

undefined8 FUN_10907eda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10907edac; end: 10907edb3; -[SCImageProcessRGBPixelBufferDataInput pixelBufferForCPUProcessing] */

undefined8 FUN_10907edac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10907edb4; end: 10907ee63; -[SCImageProcessRGBPixelBufferDataInput setupInputTextureWithContext:runContext:error:] */

undefined8 FUN_10907edb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf59720(param_3,param_2,uVar2,0x84c0,param_1 + 0x30);
  *(int *)(param_1 + 0x38) = (int)param_3;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_2,puVar1,&PTR____CFConstantStringClassReference_110f1e758);
  _objc_release(puVar1);
  func_0x00010c1d0640(param_4,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f1e6d8);
  _objc_release(param_4);
  return 1;
}



/* Entry: 10907ee64; end: 10907ee6b; -[SCImageProcessRGBPixelBufferDataInput colorSpace] */

undefined8 FUN_10907ee64(void)

{
  return 1;
}



/* Entry: 10907ee6c; end: 10907ee97; -[SCImageProcessRGBPixelBufferDataInput cleanupTextures] */

void FUN_10907ee6c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)(*(long *)(param_1 + 0x30));
    return;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_deleteTextures_size__1125b8cd8,
               (int *)(param_1 + 0x38),1);
    return;
  }
  return;
}



/* Entry: 10907ee98; end: 10907eea3; -[SCImageProcessRGBPixelBufferDataInput .cxx_destruct] */

void FUN_10907ee98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907eea4; end: 10907ef5b; -[SCImageProcessYUVPixelBufferDataInput initWithGlWrapper:pixelBuffer:] */

undefined1 *
FUN_10907eea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127002c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _CVPixelBufferRetain();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    _CVPixelBufferGetWidth();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_4;
    _CVPixelBufferGetHeight();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _CVPixelBufferGetBytesPerRowOfPlane(param_4,0);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907ef5c; end: 10907ef67; -[SCImageProcessYUVPixelBufferDataInput pixelSize] */

undefined1  [16] FUN_10907ef5c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10907ef68; end: 10907ef6f; -[SCImageProcessYUVPixelBufferDataInput bytesPerRow] */

undefined8 FUN_10907ef68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10907ef70; end: 10907ef77; -[SCImageProcessYUVPixelBufferDataInput pixelBufferForCPUProcessing] */

undefined8 FUN_10907ef70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10907ef78; end: 10907f013; -[SCImageProcessYUVPixelBufferDataInput setupInputTextureWithContext:runContext:error:] */

undefined8 FUN_10907ef78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c1d0640(param_4,param_2,uVar1,&PTR____CFConstantStringClassReference_110f1e6d8);
  uVar1 = param_3;
  func_0x00010bf59760(param_3,param_2,*(undefined8 *)(param_1 + 0x10),0x84c0,0x84c1,param_1 + 0x30,
                      param_1 + 0x38,param_1 + 0x40,param_1 + 0x44);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10907f014; end: 10907f01b; -[SCImageProcessYUVPixelBufferDataInput colorSpace] */

undefined8 FUN_10907f014(void)

{
  return 2;
}



/* Entry: 10907f01c; end: 10907f087; -[SCImageProcessYUVPixelBufferDataInput cleanupTextures] */

/* WARNING: Possible PIC construction at 0x00010907f058: Changing call to branch */

void FUN_10907f01c(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    _CFRelease();
  }
  piVar2 = (int *)(param_1 + 0x40);
  if (*piVar2 == 0) {
    piVar2 = (int *)(param_1 + 0x44);
    if (*piVar2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_deleteTextures_size__1125b8cd8,piVar2,1);
  return;
}



/* Entry: 10907f088; end: 10907f0cf; -[SCImageProcessYUVPixelBufferDataInput dealloc] */

void FUN_10907f088(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1127002c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10907f0d0; end: 10907f0db; -[SCImageProcessYUVPixelBufferDataInput .cxx_destruct] */

void FUN_10907f0d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907f0dc; end: 10907f193; -[SCImageProcessPipelineBackedBufferRenderer initWithGLWrapper:pixelSize:screenRenderer:] */

undefined1 *
FUN_10907f0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127002d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907f194; end: 10907f19f; -[SCImageProcessPipelineBackedBufferRenderer pixelSize] */

undefined1  [16] FUN_10907f194(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10907f1a0; end: 10907f1a7; -[SCImageProcessPipelineBackedBufferRenderer pixelBufferForCPUProcessing] */

undefined8 FUN_10907f1a0(void)

{
  return 0;
}



/* Entry: 10907f1a8; end: 10907f263; -[SCImageProcessPipelineBackedBufferRenderer setupOutputBuffersWithContext:textureUnit:error:] */

undefined8 FUN_10907f1a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _CVOpenGLESTextureGetName(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1d71e0(uVar1);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c229080();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0fcd00();
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = param_2;
    }
    func_0x00010bfbf540(*(undefined8 *)(param_1 + 8));
    func_0x00010bf1a240(*(undefined8 *)(param_1 + 8));
    func_0x00010beae980(param_1);
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10907f264; end: 10907f2bf; -[SCImageProcessPipelineBackedBufferRenderer cleanupTextures] */

void FUN_10907f264(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(long *)(param_1 + 0x28) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      _CVPixelBufferRelease();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    func_0x00010bf6be20(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x38,1);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10907f2c0; end: 10907f2c3; -[SCImageProcessPipelineBackedBufferRenderer deleteOutputBuffers] */

void FUN_10907f2c0(void)

{
  return;
}



/* Entry: 10907f2c4; end: 10907f2ef; -[SCImageProcessPipelineBackedBufferRenderer setOutputBuffersWithTextureUnit:] */

void FUN_10907f2c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _CVOpenGLESTextureGetName(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setOutputTexture__1126536a0,uVar1);
  return;
}



/* Entry: 10907f2f0; end: 10907f3bb; -[SCImageProcessPipelineBackedBufferRenderer presentToScreenIfApplicableWithContext:] */

void FUN_10907f2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    _objc_retain(param_3);
    _glBindFramebuffer(0x8ca8,uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfb7260(uVar3);
    _glBindFramebuffer(0x8ca9,uVar3);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0fcd00(uVar4);
    func_0x00010c0fcd00(*(undefined8 *)(param_1 + 0x30));
    _glBlitFramebuffer(0,0,uVar1,uVar2,0,0,uVar4,uVar3,0x260000004000);
    func_0x00010c10e7c0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10907f3bc; end: 10907f4ab; -[SCImageProcessPipelineBackedBufferRenderer _setupOutputTextureWithContext:] */

ulong FUN_10907f3bc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  iVar3 = 0;
  _CVPixelBufferCreate(0,uVar1,uVar2,0x42475241,puVar4,param_1 + 0x40);
  if (iVar3 == 0) {
    func_0x00010bf58420(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  return (ulong)*(uint *)(param_3 + 0x38);
}



/* Entry: 10907f4ac; end: 10907f4b3; -[SCImageProcessPipelineBackedBufferRenderer framebuffer] */

undefined4 FUN_10907f4ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* Entry: 10907f4b4; end: 10907f4bb; -[SCImageProcessPipelineBackedBufferRenderer outputPixelBuffer] */

undefined8 FUN_10907f4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10907f4bc; end: 10907f4eb; -[SCImageProcessPipelineBackedBufferRenderer .cxx_destruct] */

void FUN_10907f4bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907f4ec; end: 10907f58f; -[SCImageProcessPipelinePlaybackRenderer initWithImageProcessGlWrapper:glLayer:] */

undefined1 *
FUN_10907f4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127002d8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907f590; end: 10907f59b; -[SCImageProcessPipelinePlaybackRenderer pixelSize] */

undefined1  [16] FUN_10907f590(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (long)*(int *)(param_1 + 0x24);
  auVar1._0_8_ = (long)*(int *)(param_1 + 0x20);
  return auVar1;
}



/* Entry: 10907f59c; end: 10907f5a3; -[SCImageProcessPipelinePlaybackRenderer pixelBufferForCPUProcessing] */

undefined8 FUN_10907f59c(void)

{
  return 0;
}



/* Entry: 10907f5a4; end: 10907f66b; -[SCImageProcessPipelinePlaybackRenderer setupOutputBuffersWithContext:textureUnit:error:] */

undefined8 FUN_10907f5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf1a240(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x28));
  }
  else {
    func_0x00010bfbf540(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x28,1);
    func_0x00010bf1a240(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x28));
    func_0x00010bfbff00(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x1c,1);
    func_0x00010bf1a360(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x1c));
    func_0x00010c130440(param_3,param_2,0x8d41,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c1d7120(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x1c));
    func_0x00010c13eec0(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x20);
    func_0x00010c13eea0(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x24);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10907f66c; end: 10907f66f; -[SCImageProcessPipelinePlaybackRenderer cleanupTextures] */

void FUN_10907f66c(void)

{
  return;
}



/* Entry: 10907f670; end: 10907f6bb; -[SCImageProcessPipelinePlaybackRenderer deleteOutputBuffers] */

void FUN_10907f670(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf6be20(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x28,1);
    func_0x00010bf6c680(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x1c,1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10907f6bc; end: 10907f6cb; -[SCImageProcessPipelinePlaybackRenderer setOutputBuffersWithTextureUnit:] */

void FUN_10907f6bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d7130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setOutputRenderBuffer__112653670,
             *(undefined4 *)(param_1 + 0x1c));
  return;
}



/* Entry: 10907f6cc; end: 10907f717; -[SCImageProcessPipelinePlaybackRenderer presentToScreenIfApplicableWithContext:] */

void FUN_10907f6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  _objc_retain(param_3);
  func_0x00010c1d7120(uVar2,param_2,uVar1);
  func_0x00010c10df00(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10907f718; end: 10907f71f; -[SCImageProcessPipelinePlaybackRenderer framebuffer] */

undefined4 FUN_10907f718(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10907f720; end: 10907f74f; -[SCImageProcessPipelinePlaybackRenderer .cxx_destruct] */

void FUN_10907f720(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907f750; end: 10907f7d3; -[SCImageProcessPipelineYUV709PixelBufferRenderer _setAttachmentsWithPixelBuffer:] */

void FUN_10907f750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CVBufferSetAttachment
            (param_3,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8,
             *(undefined8 *)PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_11034a2d0,1);
  _CVBufferSetAttachment
            (param_3,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,
             *(undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVBufferSetAttachment_11034a188)
            (param_3,*(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310,
             *(undefined8 *)PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328,1);
  return;
}



/* Entry: 10907f7d4; end: 10907f877; -[SCImageProcessPipelineYUVPixelBufferRenderer initWithGlWrapper:pixelBuffer:] */

undefined1 *
FUN_10907f7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127002e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _CVPixelBufferRetain();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    _CVPixelBufferGetWidth();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _CVPixelBufferGetHeight();
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10907f878; end: 10907f8bf; -[SCImageProcessPipelineYUVPixelBufferRenderer dealloc] */

void FUN_10907f878(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1127002e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10907f8c0; end: 10907f8cb; -[SCImageProcessPipelineYUVPixelBufferRenderer pixelSize] */

undefined1  [16] FUN_10907f8c0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 10907f8cc; end: 10907f8d3; -[SCImageProcessPipelineYUVPixelBufferRenderer pixelBufferForCPUProcessing] */

undefined8 FUN_10907f8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10907f8d4; end: 10907f9af; -[SCImageProcessPipelineYUVPixelBufferRenderer setupOutputBuffersWithContext:textureUnit:error:] */

undefined8 FUN_10907f8d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf1a2a0(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x28),param_4
                       );
    uVar2 = 1;
  }
  else {
    func_0x00010bea2000(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    uVar2 = 1;
    func_0x00010bfbf540(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x40,1);
    func_0x00010bf1a240(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x40));
    uVar1 = param_3;
    func_0x00010bf58420(param_3,param_2,*(undefined8 *)(param_1 + 0x10),param_4,param_1 + 0x20);
    *(int *)(param_1 + 0x28) = (int)uVar1;
    if ((int)uVar1 == 0x7fffffff) {
      uVar2 = 0;
    }
    else {
      func_0x00010bf1a2a0(*(undefined8 *)(param_1 + 8),param_2,uVar1,param_4);
      func_0x00010c1d71e0(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x28));
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10907f9b0; end: 10907f9e3; -[SCImageProcessPipelineYUVPixelBufferRenderer setOutputBuffersWithTextureUnit:] */

void FUN_10907f9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf1a2a0(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x28),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setOutputTexture__1126536a0,
             *(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 10907f9e4; end: 10907fa2f; -[SCImageProcessPipelineYUVPixelBufferRenderer cleanupTextures] */

void FUN_10907f9e4(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf6be20(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x40,1);
    if (*(long *)(param_1 + 0x20) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10907fa30; end: 10907fa33; -[SCImageProcessPipelineYUVPixelBufferRenderer deleteOutputBuffers] */

void FUN_10907fa30(void)

{
  return;
}



/* Entry: 10907fa34; end: 10907fa3b; -[SCImageProcessPipelineYUVPixelBufferRenderer presentToScreenIfApplicableWithContext:] */

void FUN_10907fa34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_flush_1125ca570);
  return;
}



/* Entry: 10907fa3c; end: 10907fabf; -[SCImageProcessPipelineYUVPixelBufferRenderer _setAttachmentsWithPixelBuffer:] */

void FUN_10907fa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CVBufferSetAttachment
            (param_3,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8,
             *(undefined8 *)PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_11034a2d0,1);
  _CVBufferSetAttachment
            (param_3,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,
             *(undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_601_4_11034a360,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVBufferSetAttachment_11034a188)
            (param_3,*(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310,
             *(undefined8 *)PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328,1);
  return;
}



/* Entry: 10907fac0; end: 10907fac7; -[SCImageProcessPipelineYUVPixelBufferRenderer framebuffer] */

undefined4 FUN_10907fac0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



/* Entry: 10907fac8; end: 10907fad3; -[SCImageProcessPipelineYUVPixelBufferRenderer .cxx_destruct] */

void FUN_10907fac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10907fad4; end: 10907fb1f; -[SCImageProcessDefaultColorConversionCommandProvider colorConversionGPUCommandWithColorSpace:] */

void FUN_10907fad4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 2) {
    ppuVar1 = &PTR_PTR_1126bf440;
  }
  else {
    if (param_3 != 3) goto _objc_autoreleaseReturnValue;
    ppuVar1 = &PTR_PTR_1126dd280;
  }
  func_0x00010c22b820(*ppuVar1);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10907fb20; end: 10907fb6b; -[SCImageProcessDefaultColorConversionCommandProvider colorConversionCPUCommandWithColorSpace:] */

void FUN_10907fb20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 2) {
    ppuVar1 = &PTR_PTR_1126c40b8;
  }
  else {
    if (param_3 != 3) goto _objc_autoreleaseReturnValue;
    ppuVar1 = &PTR_PTR_1126dd288;
  }
  func_0x00010c22b820(*ppuVar1);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10907fb6c; end: 1090803ef;  */

void FUN_10907fb6c(double param_1,double param_2,long param_3,long param_4,undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  long lStack_328;
  long lStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  ulong uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_1d8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x2020000000;
  uStack_1b8 = 0;
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_1090803f0;
  puStack_1e0 = &UNK_110ad6fb8;
  puStack_1c8 = puStack_1d8;
  func_0x00010bf97e80(param_3);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  _objc_retain(param_4);
  puVar18 = auStack_110;
  lStack_328 = param_4;
  func_0x00010bf52a60();
  if (lStack_328 != 0) {
    lVar19 = *plStack_230;
    do {
      lStack_310 = 0;
      do {
        if (*plStack_230 != lVar19) {
          _objc_enumerationMutation(param_4);
        }
        uVar21 = *(ulong *)(lStack_238 + lStack_310 * 8);
        puVar11 = puVar9;
        func_0x00010bf51e00();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar12 = uVar21;
        func_0x00010bf21cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_268 = 0xc2000000;
        pcStack_260 = FUN_109080430;
        puStack_258 = &UNK_110ad6fe8;
        uStack_250 = uVar21;
        _objc_retain(puVar13);
        puVar14 = puVar11;
        puStack_248 = puVar13;
        func_0x00010bfaea20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf412e0(uVar21);
        puStack_300 = param_5;
        func_0x00010bf40e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf412e0(uVar21);
        puVar15 = param_5;
        func_0x00010bf40de0();
        _objc_retainAutoreleasedReturnValue();
        puStack_308 = puVar15;
        if (puStack_300 == (undefined *)0x0) {
          if (*(char *)(puStack_1c8 + 3) == '\x01') {
            uVar12 = uVar21;
            func_0x00010c0fc940();
            uVar20 = uVar12;
            _CVPixelBufferGetWidth();
            _CVPixelBufferGetHeight();
            bVar4 = false;
            if ((param_1 == (double)uVar20) &&
               (bVar4 = false, !NAN(param_2) && !NAN((double)uVar12))) {
              bVar4 = param_2 == (double)uVar12;
            }
            if (!bVar4) {
              puStack_300 = PTR_PTR_1126b26c8;
              func_0x00010c22b820();
              _objc_retainAutoreleasedReturnValue();
              puStack_308 = PTR_PTR_1126da0a0;
              func_0x00010c22b820();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              if (puStack_300 != (undefined *)0x0) goto LAB_10907fe9c;
            }
          }
          if (uVar21 == 0) {
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
          }
          else {
            func_0x00010c27a460(&uStack_2a0,uVar21);
          }
          iVar5 = (int)&uStack_2a0;
          _CGAffineTransformIsIdentity();
          if ((iVar5 == 0) || (uVar12 = uVar21, func_0x00010c0ed100(), uVar12 != 0)) {
            puStack_300 = PTR_PTR_1126b26c8;
            func_0x00010c22b820();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR_PTR_1126da0a0;
            func_0x00010c22b820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puStack_308);
            puStack_308 = puVar15;
          }
          else {
            puStack_300 = (undefined *)0x0;
          }
        }
LAB_10907fe9c:
        puVar15 = puVar14;
        func_0x00010bf529e0();
        if (puVar15 == (undefined *)0x0) {
          if (puStack_300 == (undefined *)0x0) {
            puStack_300 = PTR_PTR_1126b26c8;
            func_0x00010c22b820();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR_PTR_1126da0a0;
            func_0x00010c22b820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puStack_308);
            puStack_308 = puVar15;
          }
          puVar15 = PTR_PTR_1126bf4b0;
          _objc_alloc();
          func_0x00010bf21cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_118 = uVar21;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_120 = puVar13;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c016a80();
          _objc_release(puVar22);
          _objc_release(puVar17);
          _objc_release(uVar21);
          func_0x00010befa120(puVar10);
LAB_109080280:
          _objc_release(puVar15);
          _objc_release(puStack_300);
        }
        else if (puStack_300 != (undefined *)0x0) {
          puVar15 = PTR_PTR_1126bf4b0;
          _objc_alloc();
          uVar12 = uVar21;
          func_0x00010bf21cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_128 = uVar12;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_130 = puVar13;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c016a80();
          _objc_release(puVar22);
          _objc_release(puVar17);
          _objc_release(uVar12);
          _objc_retain(puVar14);
          puVar17 = puVar14;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          if (puVar17 == (undefined *)0x0) {
            _objc_release(puVar14);
          }
          else {
            bVar4 = false;
            do {
              puVar3 = PTR_s_appliesInputTransform_11259f9c8;
              puVar2 = PTR_s_appliesInputOrientation_11259f9c0;
              puVar22 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(puVar14);
                }
                uVar20 = *(ulong *)((long)puVar22 * 8);
                uVar12 = uVar20;
                _objc_opt_respondsToSelector(uVar20,puVar3);
                if ((uVar12 & 1) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar12 = uVar20;
                  func_0x00010bf08080();
                  uVar6 = (uint)uVar12;
                }
                uVar12 = uVar20;
                _objc_opt_respondsToSelector(uVar20,puVar2);
                if ((uVar12 & 1) == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar12 = uVar20;
                  func_0x00010bf08060();
                  uVar7 = (uint)uVar12;
                }
                uVar12 = uVar20;
                func_0x00010c07a160();
                if ((int)uVar12 == 0) {
LAB_109080060:
                  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  uVar12 = uVar20;
                  func_0x00010c0657c0(uVar20);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf0a0c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar12);
                  uVar12 = uVar21;
                  func_0x00010bf21cc0(uVar21);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12d360(puVar16);
                  _objc_release(uVar12);
                  func_0x00010befa120(puVar16);
                  func_0x00010c12d360(puVar9);
                  uVar12 = uVar20;
                  func_0x00010c0eebc0(uVar20);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf56a60(uVar20);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar9);
                  _objc_release(uVar20);
                  _objc_release(uVar12);
                  _objc_release(puVar16);
                  bVar4 = true;
                }
                else {
                  if (uVar21 == 0) {
                    uStack_288 = 0;
                    uStack_290 = 0;
                    uStack_278 = 0;
                    uStack_280 = 0;
                    uStack_298 = 0;
                    uStack_2a0 = 0;
                  }
                  else {
                    func_0x00010c27a460(&uStack_2a0,uVar21);
                  }
                  uVar8 = 0;
                  _CGAffineTransformIsIdentity();
                  if ((((uVar8 | uVar6) & 1) == 0) ||
                     (uVar12 = uVar21, func_0x00010c0ed100(), uVar12 != 0 && (uVar7 & 1) == 0))
                  goto LAB_109080060;
                }
                puVar22 = puVar22 + 1;
              } while (puVar17 != puVar22);
              puVar17 = puVar14;
              func_0x00010bf52a60();
            } while (puVar17 != (undefined *)0x0);
            _objc_release(puVar14);
            if (bVar4) {
              func_0x00010befa120(puVar10);
            }
          }
          goto LAB_109080280;
        }
        _objc_release(puStack_308);
        _objc_release(puVar14);
        _objc_release(puStack_248);
        _objc_release(puVar13);
        _objc_release(puVar11);
        lStack_310 = lStack_310 + 1;
      } while (lStack_310 != lStack_328);
      puVar18 = auStack_110;
      lStack_328 = param_4;
      func_0x00010bf52a60();
    } while (lStack_328 != 0);
  }
  _objc_release(param_4);
  func_0x00010befa160(puVar9);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(puVar10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  uVar12 = 0;
  __Block_object_dispose(&uStack_1d0);
  __Unwind_Resume();
  func_0x00010c1377e0();
  if ((uVar12 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
    *puVar18 = 1;
  }
  return;
}



/* Entry: 1090803f0; end: 10908042f;  */

void FUN_1090803f0(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010c1377e0();
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 109080430; end: 1090804eb;  */

ulong FUN_109080430(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0657c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010c0657c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b900();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1090804ec; end: 109080917;  */

void FUN_1090804ec(undefined *param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  bool bVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = param_2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  func_0x00010bff4000();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  func_0x00010bff4000();
  puVar15 = puVar5;
  func_0x00010bf529e0();
  puVar13 = param_2;
  func_0x00010bf529e0();
  if (puVar15 == puVar13) {
    do {
      puVar15 = puVar3;
      func_0x00010bf529e0();
      puVar13 = param_1;
      func_0x00010bf529e0();
      if (puVar13 <= puVar15) break;
      _objc_retain(param_1);
      puVar15 = param_1;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (puVar15 == (undefined *)0x0) {
        _objc_release(param_1);
        break;
      }
      bVar12 = false;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_1);
          }
          uVar16 = *(ulong *)((long)puVar13 * 8);
          puVar7 = puVar3;
          func_0x00010bf4b900();
          if (((ulong)puVar7 & 1) == 0) {
            uVar8 = uVar16;
            func_0x00010c0657c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar5);
            uVar9 = uVar8;
            func_0x00010bf04920();
            _objc_release(uVar8);
            if ((uVar9 & 1) == 0) {
              uVar8 = uVar16;
              func_0x00010c0eebc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(puVar5);
              uVar9 = uVar8;
              func_0x00010bf04920();
              _objc_release(uVar8);
              if ((int)uVar9 != 0) {
                _objc_release(puVar5);
                _objc_release(puVar5);
                _objc_release(param_1);
                puVar15 = (undefined *)0x0;
                goto LAB_109080894;
              }
              uVar9 = uVar16;
              func_0x00010c0657c0();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar9;
              func_0x00010bf52a60();
              lVar2 = lRam0000000000000000;
              while (uVar8 != 0) {
                uVar14 = 0;
                do {
                  if (lRam0000000000000000 != lVar2) {
                    _objc_enumerationMutation(uVar9);
                  }
                  func_0x00010c12d360(puVar6);
                  uVar14 = uVar14 + 1;
                } while (uVar8 != uVar14);
                uVar8 = uVar9;
                func_0x00010bf52a60();
              }
              _objc_release(uVar9);
              func_0x00010c0eebc0(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar5);
              _objc_release(uVar16);
              func_0x00010befa120(puVar3);
              _objc_release(puVar5);
              bVar12 = true;
            }
            _objc_release(puVar5);
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar15);
        puVar15 = param_1;
        func_0x00010bf52a60();
      } while (puVar15 != (undefined *)0x0);
      _objc_release(param_1);
    } while (bVar12);
    puVar15 = puVar3;
    func_0x00010bf529e0();
    puVar13 = param_1;
    func_0x00010bf529e0();
    if (puVar13 <= puVar15) {
      puVar15 = puVar6;
      func_0x00010bf529e0();
      if (puVar15 == (undefined *)0x0) {
        _objc_retain(puVar3);
        puVar15 = puVar3;
        goto LAB_109080894;
      }
      func_0x00010bf6e340(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
  }
  puVar15 = (undefined *)0x0;
LAB_109080894:
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf21cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar10,PTR_s_bufferId_1125a60d8);
  return;
}



/* Entry: 109080918; end: 10908091f;  */

void FUN_109080918(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_bufferId_1125a60d8);
  return;
}



/* Entry: 109080920; end: 10908093f;  */

uint FUN_109080920(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 109080940; end: 10908094b;  */

void FUN_109080940(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 10908094c; end: 109080ad7; -[SCImageProcessGraphRenderPipeline initWithOutputPixelBuffer:inputs:pixelBufferPoolRef:textureCacheHolder:outputColorSpace:colorConversionCommandProvider:backgroundColor:backgroundAnimationCommand:presentationTime:renderPasses:context:taskId:enableCPUFallback:completionHandler:] */

undefined8
FUN_10908094c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_3;
  _CVPixelBufferGetWidth(param_3);
  uVar2 = param_3;
  _CVPixelBufferGetHeight(param_3);
  uStack_88 = param_11[1];
  uStack_90 = *param_11;
  uStack_80 = param_11[2];
  func_0x00010be3ace0((double)uVar1,(double)uVar2,param_1,param_2,param_4,param_3,0,param_5,param_6,
                      param_7,param_8,param_9,param_10,&uStack_90,param_12,param_13,param_14,
                      param_15);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 109080ad8; end: 109080b53; -[SCImageProcessGraphRenderPipeline initWithOutputRenderer:outputSize:inputs:pixelBufferPoolRef:textureCacheHolder:outputColorSpace:colorConversionCommandProvider:backgroundColor:backgroundAnimationCommand:presentationTime:renderPasses:context:taskId:enableCPUFallback:completionHandler:] */

void FUN_109080ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_11[1];
  uStack_30 = *param_11;
  uStack_20 = param_11[2];
  func_0x00010be3ace0(param_1,param_2,param_4,0,param_3,param_5,param_6,param_7,param_8,param_9,
                      param_10,&uStack_30,param_12,param_13,param_14,param_15);
  return;
}



/* Entry: 109080b54; end: 109080dd3; -[SCImageProcessGraphRenderPipeline _initWithInputs:outputPixelBuffer:outputSize:outputRenderer:pixelBufferPoolRef:textureCacheHolder:outputColorSpace:colorConversionCommandProvider:backgroundColor:backgroundAnimationCommand:presentationTime:renderPasses:context:taskId:enableCPUFallback:completionHandler:] */

undefined8 *
FUN_109080b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 *param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  puStack_80 = PTR_PTR_1127002e8;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    if (param_6 != 0) {
      _CVPixelBufferRetain();
    }
    puVar1[2] = param_6;
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    _objc_retain(param_7);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_7;
    _objc_release(uVar2);
    _CVPixelBufferPoolRetain();
    puVar1[0xe] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    puVar1[5] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[7];
    puVar1[7] = param_13;
    _objc_release(uVar2);
    uVar3 = param_14[1];
    uVar2 = *param_14;
    puVar1[10] = param_14[2];
    puVar1[9] = uVar3;
    puVar1[8] = uVar2;
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x11) = param_18;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 109080dd4; end: 109080ee7; -[SCImageProcessGraphRenderPipeline GPURequired] */

undefined *
FUN_109080dd4(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    param_1 = *(long *)(param_1 + 0x58);
    _objc_retain(param_1);
    param_5 = (undefined8 *)0x10;
    lVar1 = param_1;
    func_0x00010bf52a60();
    puVar6 = (undefined *)0x0;
    if (lVar1 != 0) {
      lVar7 = *plStack_100;
      do {
        lVar8 = 0;
        do {
          if (*plStack_100 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          uVar2 = *(ulong *)(lStack_108 + lVar8 * 8);
          func_0x00010c1377e0();
          if ((uVar2 & 1) != 0) {
            puVar6 = (undefined *)0x1;
            goto LAB_109080ea8;
          }
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        param_5 = (undefined8 *)0x10;
        lVar1 = param_1;
        puVar4 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      puVar6 = (undefined *)0x0;
    }
LAB_109080ea8:
    _objc_release();
    param_3 = (undefined1 *)puVar4;
  }
  else {
    puVar6 = (undefined *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  FUN_10907fb6c(uVar11,uVar12,uVar5,uVar9,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  FUN_1090804ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7180(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_3);
  puVar6 = PTR_PTR_1126dd2c0;
  _objc_alloc();
  func_0x00010c004140();
  _objc_release(param_3);
  puVar3 = puVar6;
  func_0x00010c115220();
  _objc_retain(0);
  if ((param_5 != (undefined8 *)0x0) && (((ulong)puVar3 & 1) == 0)) {
    _objc_retainAutorelease(0);
    *param_5 = 0;
  }
  func_0x00010be0ba00(param_1);
  _objc_release(0);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  return puVar3;
}



/* Entry: 109080ee8; end: 10908104f; -[SCImageProcessGraphRenderPipeline runProgramsWithContext:GPUAvailable:error:] */

undefined *
FUN_109080ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  FUN_10907fb6c(uVar6,uVar7,uVar3,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_1090804ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7180(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_3);
  puVar1 = PTR_PTR_1126dd2c0;
  _objc_alloc();
  func_0x00010c004140();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c115220();
  _objc_retain(0);
  if ((param_5 != (undefined8 *)0x0) && (((ulong)puVar2 & 1) == 0)) {
    _objc_retainAutorelease(0);
    *param_5 = 0;
  }
  func_0x00010be0ba00(param_1);
  _objc_release(0);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 109081050; end: 1090810a3; -[SCImageProcessGraphRenderPipeline dealloc] */

void FUN_109081050(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x10));
  _CVPixelBufferPoolRelease(*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  puStack_28 = PTR_PTR_1127002e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090810a4; end: 1090810f3; -[SCImageProcessGraphRenderPipeline _executeCompletionHandlerWithStatus:error:] */

void FUN_1090810a4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    uVar2 = 2;
    if (param_3 == 0) {
      uVar2 = 3;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2,param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1090810f4; end: 1090810fb; -[SCImageProcessGraphRenderPipeline taskId] */

undefined8 FUN_1090810f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1090810fc; end: 109081103; -[SCImageProcessGraphRenderPipeline context] */

undefined8 FUN_1090810fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 109081104; end: 109081193; -[SCImageProcessGraphRenderPipeline .cxx_destruct] */

void FUN_109081104(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109081194; end: 1090811d3; -[SCImageProcessInteropTextureImpl init] */

void FUN_109081194(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1127002f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x30) = 0x7fffffff;
  }
  return;
}



/* Entry: 1090811d4; end: 10908127f; -[SCImageProcessInteropTextureImpl initWithResourceManager:colorSpace:contentIsUnchanged:] */

long FUN_1090811d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x40) = param_5;
    *(undefined8 *)(param_1 + 0x48) = param_4;
    *(undefined8 *)(param_1 + 0x50) = 0;
    puVar1 = PTR__CGAffineTransformIdentity_110347008;
    uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    uVar7 = *(undefined8 *)(puVar1 + 0x28);
    uVar6 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xb0) = uVar7;
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    uVar2 = param_3;
    func_0x00010c0fc9c0(param_3);
    func_0x00010bdf1540(param_1,param_2,uVar2);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 109081280; end: 109081343; -[SCImageProcessInteropTextureImpl initWithPixelBuffer:resourceManager:colorSpace:orientation:transform:cpuTransform:contentIsUnchanged:] */

long FUN_109081280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_4;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x48) = param_5;
    *(undefined8 *)(param_1 + 0x50) = param_6;
    _CVPixelBufferRetain();
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar4 = param_7[3];
    uVar3 = param_7[2];
    uVar2 = param_7[5];
    uVar1 = param_7[4];
    uVar5 = *param_7;
    *(undefined8 *)(param_1 + 0x60) = param_7[1];
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    uVar4 = param_8[1];
    uVar3 = *param_8;
    uVar2 = param_8[3];
    uVar1 = param_8[2];
    uVar5 = param_8[4];
    *(undefined8 *)(param_1 + 0xb0) = param_8[5];
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    *(undefined1 *)(param_1 + 0x40) = param_9;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 109081344; end: 109081367; -[SCImageProcessInteropTextureImpl _createPixelBufferInPixelBufferPool:] */

void FUN_109081344(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbbf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CVPixelBufferPoolCreatePixelBuffer_11034a278)
              (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,param_3,param_1 + 0x38);
    return;
  }
  return;
}



/* Entry: 109081368; end: 10908136f; -[SCImageProcessInteropTextureImpl metalTexture] */

undefined8 FUN_109081368(void)

{
  return 0;
}



/* Entry: 109081370; end: 1090813a7; -[SCImageProcessInteropTextureImpl pixelSize] */

undefined1  [16] FUN_109081370(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _CVPixelBufferGetWidth(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _CVPixelBufferGetHeight(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1090813a8; end: 1090813af; -[SCImageProcessInteropTextureImpl glFrameBuffer] */

void FUN_1090813a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfccdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_glFrameBuffer_1125d0d18)
  ;
  return;
}



/* Entry: 1090813b0; end: 1090814e7; -[SCImageProcessInteropTextureImpl bindToOpenGLInput] */

ulong FUN_1090813b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x48) - 2U < 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c06b060(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcce60();
    uVar4 = uVar1;
    func_0x00010bf59780(uVar1);
    _objc_release(uVar1);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  }
  else if (*(long *)(param_1 + 0x48) == 1) {
    if (*(int *)(param_1 + 0x30) == 0x7fffffff) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c06b060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcce60(*(undefined8 *)(param_1 + 8));
      uVar3 = uVar2;
      func_0x00010bf59740();
      *(int *)(param_1 + 0x28) = (int)uVar3;
      _objc_release(uVar2);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x28);
      uVar4 = (ulong)(*(int *)(param_1 + 0x28) != 0x7fffffff);
    }
    else {
      _glActiveTexture(0x84c0);
      _glBindTexture(0xde1,*(undefined4 *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1090814e8; end: 109081577; -[SCImageProcessInteropTextureImpl bindToOpenGLOutput] */

bool FUN_1090814e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x48) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c06b060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfcce60(uVar2);
    uVar3 = uVar1;
    func_0x00010bf58440(uVar1,param_2,uVar4,0x84c4,param_1 + 0x20,uVar2);
    *(int *)(param_1 + 0x30) = (int)uVar3;
    _objc_release(uVar1);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x30);
    return *(int *)(param_1 + 0x30) != 0x7fffffff;
  }
  return false;
}



/* Entry: 109081578; end: 10908157f; -[SCImageProcessInteropTextureImpl readOnlyPixelBuffer] */

undefined8 FUN_109081578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109081580; end: 1090815bf; -[SCImageProcessInteropTextureImpl writablePixelBuffer] */

undefined8 FUN_109081580(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0x7fffffff) {
    _glDeleteTextures(1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0x7fffffff;
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1090815c0; end: 10908171f; -[SCImageProcessInteropTextureImpl dealloc] */

void FUN_1090815c0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c26cec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0x28) != 0x7fffffff) {
      _glDeleteTextures(1);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0x7fffffff) {
      _glDeleteTextures(1);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x28) != 0x7fffffff) {
        _glDeleteTextures(1);
      }
    }
    else {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x2c) != 0x7fffffff) {
        _glDeleteTextures(1);
      }
    }
    else {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x20) = 0;
      goto LAB_1090816f4;
    }
  }
  if (*(int *)(param_1 + 0x30) != 0x7fffffff) {
    _glDeleteTextures(1);
  }
LAB_1090816f4:
  puStack_28 = PTR_PTR_1127002f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109081720; end: 109081727; -[SCImageProcessInteropTextureImpl colorSpace] */

undefined8 FUN_109081720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109081728; end: 10908172f; -[SCImageProcessInteropTextureImpl orientation] */

undefined8 FUN_109081728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109081730; end: 109081737; -[SCImageProcessInteropTextureImpl glTexture] */

undefined4 FUN_109081730(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



/* Entry: 109081738; end: 10908174f; -[SCImageProcessInteropTextureImpl transform] */

void FUN_109081738(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[5] = *(undefined8 *)(param_2 + 0x80);
  param_1[4] = uVar1;
  return;
}



/* Entry: 109081750; end: 109081767; -[SCImageProcessInteropTextureImpl cpuTransform] */

void FUN_109081750(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  param_1[1] = *(undefined8 *)(param_2 + 0x90);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  param_1[5] = *(undefined8 *)(param_2 + 0xb0);
  param_1[4] = uVar1;
  return;
}


