/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109081768; end: 10908176f; -[SCImageProcessInteropTextureImpl contentIsUnchanged] */

undefined1 FUN_109081768(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 109081770; end: 10908177b; -[SCImageProcessInteropTextureImpl .cxx_destruct] */

void FUN_109081770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10908177c; end: 1090817d3; -[SCImageProcessPipelineGraphProcessor initWithContext:] */

long FUN_10908177c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1090817d4; end: 109081e1b; -[SCImageProcessPipelineGraphProcessor processRenderPasses:inputs:outputPixelBuffer:outputRenderer:pixelBufferPoolRef:outputColorSpace:customBackgroundColor:presentationTime:textureCacheHolder:GPUAvailable:error:] */

undefined *
FUN_1090817d4(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
             undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined4 param_13,
             undefined4 param_14,undefined8 *param_15)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puVar2 = PTR_PTR_1126dd2c8;
  _objc_alloc();
  func_0x00010c03e120();
  if (puVar2 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar3 = param_3;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c10f760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = param_3;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x0) {
      puStack_100 = (undefined *)0x0;
      puVar14 = (undefined *)0x1;
    }
    else {
      puVar15 = (undefined *)0x0;
      puStack_100 = (undefined *)0x0;
      do {
        _objc_autoreleasePoolPush();
        puVar7 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar7;
        func_0x00010c0657c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_1;
        func_0x00010be1fbc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        puVar14 = param_3;
        func_0x00010bf529e0();
        puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
        puVar13 = param_1;
        if (puVar15 == puVar14 + -1) {
          if (param_6 != 0) {
            puVar13 = (undefined *)0x0;
            bVar1 = true;
            goto LAB_1090819e8;
          }
          if (param_5 != 0) {
            func_0x00010beaaa40(param_1);
            puVar14 = PTR_PTR_1126dd2d0;
            _objc_alloc();
            func_0x00010c0361c0();
            puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1090819d8;
          }
          _objc_opt_class(param_1);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99260();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = (undefined *)0x0;
          puVar9 = puStack_100;
          puStack_100 = puVar11;
        }
        else {
          _objc_opt_class(param_1);
          func_0x00010be6e920();
          puVar14 = puVar7;
          func_0x00010c0eebc0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be1fc40(param_1);
          _objc_retainAutoreleasedReturnValue();
LAB_1090819d8:
          _objc_release(puVar14);
          bVar1 = false;
LAB_1090819e8:
          puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          if ((puVar15 == (undefined *)0x0) ||
             (puVar11 = param_2, puVar14 = PTR_DAT_1126a5bc0, puVar3 != (undefined *)0x0)) {
            if (param_9 == (undefined *)0x0) {
              puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              _objc_retain(param_9);
              puVar14 = param_9;
            }
            _objc_release(puVar9);
            puVar11 = param_2;
            puVar9 = puVar14;
            puVar14 = PTR_DAT_1126a5bc0;
          }
          param_2 = puVar14;
          puVar14 = puVar7;
          PTR_DAT_1126a5bc0 = param_2;
          if (bVar1) {
            _objc_retain(puVar7);
            puVar10 = puVar7;
            func_0x000107c318f8(puVar7,param_2);
            puVar11 = puVar7;
            if ((int)puVar10 == 0) {
              puVar11 = (undefined *)0x0;
            }
            _objc_retain(puVar11);
            _objc_release(puVar7);
            puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
            if (puVar11 == (undefined *)0x0) {
              puVar14 = param_1;
              _objc_opt_class(param_1);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99260();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puStack_100);
              _objc_release(puVar14);
              puVar14 = (undefined *)0x0;
            }
            else {
              func_0x00010c130380();
              _objc_retain(puStack_100);
              _objc_release(puStack_100);
              puVar10 = puStack_100;
            }
            _objc_release(puVar11);
            puStack_100 = puVar10;
          }
          else {
            func_0x00010c142be0();
            _objc_retain(puStack_100);
            _objc_release(puStack_100);
            param_2 = puVar11;
          }
        }
        _objc_release(puVar9);
        _objc_release(puVar13);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_autoreleasePoolPop(puVar6);
        if (((ulong)puVar14 & 1) == 0) break;
        puVar15 = puVar15 + 1;
        puVar6 = param_3;
        func_0x00010bf529e0();
      } while (puVar15 < puVar6);
      if ((param_15 != (undefined8 *)0x0) && (puStack_100 != (undefined *)0x0)) {
        _objc_retainAutorelease(puStack_100);
        *param_15 = puStack_100;
      }
    }
    if ((param_6 != 0) && ((int)puVar14 != 0)) {
      func_0x00010c10e7c0(param_6);
      func_0x00010bf3a5e0(param_6);
    }
    func_0x00010bfb2f80(puVar2);
    _objc_release(puStack_100);
    _objc_release(uVar5);
  }
  _objc_release(puVar2);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d34a8;
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    puVar14 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    _objc_release(param_2);
    return (undefined *)(ulong)((uint)puVar14 & 1);
  }
  return puVar14;
}



/* Entry: 109081e1c; end: 109081e6b;  */

uint FUN_109081e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d34a8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 109081e6c; end: 1090820cb; -[SCImageProcessPipelineGraphProcessor _getInputTexturesWithTextureIds:pipelineInputs:resourceManager:] */

undefined *
FUN_109081e6c(undefined8 param_1,undefined *param_2,long param_3,long param_4,undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_1d8 [48];
  undefined1 auStack_1a8 [48];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_140;
    do {
      lVar6 = 0;
      do {
        if (*plStack_140 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uStack_158 = *(undefined8 *)(lStack_148 + lVar6 * 8);
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_1090820cc;
        puStack_160 = &UNK_110ad7098;
        lVar3 = param_4;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          puVar4 = param_5;
          func_0x00010c26cf20(param_5);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar4 = PTR_PTR_1126dd2d0;
          _objc_alloc(PTR_PTR_1126dd2d0);
          func_0x00010c0fc940(lVar3);
          func_0x00010bf412e0(lVar3);
          func_0x00010c0ed100(lVar3);
          func_0x00010c27a460(auStack_1a8,lVar3);
          func_0x00010bf53b80(auStack_1d8,lVar3);
          func_0x00010bf4c860();
          func_0x00010c0361c0(puVar4);
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        _objc_release(lVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf21cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return puVar1;
}



/* Entry: 1090820cc; end: 109082113;  */

undefined8 FUN_1090820cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf21cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 109082114; end: 1090821b7; -[SCImageProcessPipelineGraphProcessor _getIntermediateOutputTexturesWithTextureIds:resourceManager:contentIsUnchanged:] */

void FUN_109082114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1090821b8;
  puStack_48 = &UNK_110ad70c8;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1090821b8; end: 1090821cb;  */

void FUN_1090821b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf596d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createTextureForId_contentIsUnch_1125b3f58,
             param_2,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1090821cc; end: 1090822f7; +[SCImageProcessPipelineGraphProcessor _outputBufferContentIsUnchangedForInputs:renderPass:] */

undefined1 *
FUN_1090821cc(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  func_0x00010c079700();
  if ((int)param_4 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(param_3);
    puVar4 = auStack_c8;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar5 = *plStack_100;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          iVar1 = (int)*(undefined8 *)(lStack_108 + (long)puVar6 * 8);
          func_0x00010bf4c860();
          if (iVar1 == 0) {
            puVar6 = (undefined1 *)0x0;
            goto LAB_1090822b0;
          }
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar4 = auStack_c8;
        puVar2 = param_3;
        puVar3 = &uStack_110;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    puVar6 = (undefined1 *)0x1;
LAB_1090822b0:
    _objc_release(param_3);
    puVar2 = (undefined1 *)puVar3;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (((ulong)puVar4 & 0xfffffffffffffffe) == 2) {
    _CVBufferSetAttachment
              (puVar2,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8,
               *(undefined8 *)PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_11034a2d0,1);
    _CVBufferSetAttachment
              (puVar2,*(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310,
               *(undefined8 *)PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328,1);
    puVar3 = (undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_601_4_11034a360;
    if (puVar4 != (undefined1 *)0x2) {
      puVar3 = (undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CVBufferSetAttachment_11034a188)
              (puVar2,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,*puVar3,1);
    return puVar2;
  }
  return param_3;
}



/* Entry: 1090822f8; end: 10908239f; -[SCImageProcessPipelineGraphProcessor _setupAttachmentsForPixelBuffer:inTargetColorSpace:] */

void FUN_1090822f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 & 0xfffffffffffffffe) == 2) {
    _CVBufferSetAttachment
              (param_3,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8,
               *(undefined8 *)PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_11034a2d0,1);
    _CVBufferSetAttachment
              (param_3,*(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310,
               *(undefined8 *)PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328,1);
    puVar1 = (undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_601_4_11034a360;
    if (param_4 != 2) {
      puVar1 = (undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CVBufferSetAttachment_11034a188)
              (param_3,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,*puVar1,1);
    return;
  }
  return;
}



/* Entry: 1090823a0; end: 1090823ab; -[SCImageProcessPipelineGraphProcessor .cxx_destruct] */

void FUN_1090823a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090823ac; end: 109082497; -[SCImageProcessPipelinePingPongProcessor initWithContext:glWrapper:outputRenderer:pingPongTextureContainer:activeTextureUnit:] */

undefined1 *
FUN_1090823ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127002f8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = 0xffffffffffffffff;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109082498; end: 109082727; -[SCImageProcessPipelinePingPongProcessor processCommands:runContext:initialOutputTextureIndex:outputTextureUnit:inputPixelSize:outputPixelSize:orientation:viewportTransform:customBackgroundColor:drawLastCommandIntoOutputBuffer:error:] */

undefined8
FUN_109082498(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
             undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 *param_12,undefined *param_13,
             char param_14,undefined4 param_15,undefined8 param_16)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_13);
  if ((param_5 < 2) && (uVar8 = param_3, func_0x00010bf529e0(), uVar8 != 0)) {
    uVar8 = param_3;
    func_0x00010bf529e0();
    if (uVar8 != 0) {
      uVar8 = 0;
      uStack_c8 = param_11;
      uVar3 = 0xffffffffffffffff;
      uVar7 = param_5;
      uStack_b0 = param_8;
      uStack_a8 = param_7;
      do {
        puVar2 = PTR__CGAffineTransformIdentity_110347008;
        if (uVar8 != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x20 + uVar3 * 4);
          uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
          uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
          uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
          param_12[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
          *param_12 = uVar6;
          param_12[3] = uVar10;
          param_12[2] = uVar9;
          uVar6 = *(undefined8 *)(puVar2 + 0x20);
          param_12[5] = *(undefined8 *)(puVar2 + 0x28);
          param_12[4] = uVar6;
          func_0x00010bf1a2a0(*(undefined8 *)(param_1 + 0x10),param_2,uVar1,
                              *(undefined4 *)(param_1 + 0x28));
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_4,param_2,puVar2,
                              &PTR____CFConstantStringClassReference_110f1e758);
          _objc_release(puVar2);
          uStack_c8 = 0;
          uStack_b0 = param_10;
          uStack_a8 = param_9;
        }
        uVar3 = param_3;
        func_0x00010bf529e0();
        if ((param_14 == '\0') || (uVar8 != uVar3 - 1)) {
          func_0x00010c1d71e0(*(undefined8 *)(param_1 + 0x10),param_2,
                              *(undefined4 *)(param_1 + 0x20 + uVar7 * 4));
          if (param_13 != (undefined *)0x0) goto LAB_10908260c;
LAB_109082620:
          puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c1d6ee0(*(undefined8 *)(param_1 + 0x18),param_2,param_6);
          if (param_13 == (undefined *)0x0) goto LAB_109082620;
LAB_10908260c:
          if (uVar8 != 0) goto LAB_109082620;
          _objc_retain(param_13);
          puVar2 = param_13;
        }
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uStack_98 = param_12[1];
        uStack_a0 = *param_12;
        uStack_88 = param_12[3];
        uStack_90 = param_12[2];
        uStack_78 = param_12[5];
        uStack_80 = param_12[4];
        lVar4 = param_1;
        func_0x00010be97d60(param_1,param_2,uVar3,param_4,uStack_a8,uStack_b0,param_9,param_10,
                            uStack_c8,&uStack_a0,puVar2,param_16);
        _objc_release(uVar3);
        _objc_release(puVar2);
        if ((int)lVar4 == 0) {
          uVar6 = 0;
          goto LAB_1090826e0;
        }
        param_5 = uVar7 ^ 1;
        uVar8 = uVar8 + 1;
        uVar5 = param_3;
        func_0x00010bf529e0();
        uVar3 = uVar7;
        uVar7 = param_5;
      } while (uVar8 < uVar5);
    }
    *(ulong *)(param_1 + 0x30) = param_5;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
LAB_1090826e0:
  _objc_release(param_13);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 109082728; end: 109082873; -[SCImageProcessPipelinePingPongProcessor _runCommand:runContext:inputPixelSize:outputPixelSize:orientation:viewportTransform:negativeSpaceColor:error:] */

bool FUN_109082728(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 *param_10,undefined8 param_11,undefined8 param_12)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_11);
  uVar2 = param_3;
  func_0x00010c076b80();
  if (((uVar2 & 1) == 0) &&
     (uVar2 = param_3, func_0x00010c09c860(param_3,param_2,*(undefined8 *)(param_1 + 8),param_12),
     (int)uVar2 == 0)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_4;
    func_0x00010bf51e00(param_4);
    uStack_88 = param_10[1];
    uStack_90 = *param_10;
    uStack_78 = param_10[3];
    uStack_80 = param_10[2];
    uStack_68 = param_10[5];
    uStack_70 = param_10[4];
    uVar2 = param_3;
    func_0x00010c142ba0(0,0x3f800000,param_3,param_2,uVar3,param_5,param_6,param_5 << 2,param_7,
                        param_8,param_9,&uStack_90,param_11,param_12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    bVar1 = uVar2 != 0;
    if (uVar2 != 0) {
      func_0x00010bef7f60(param_4,param_2,uVar2);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109082874; end: 10908287b; -[SCImageProcessPipelinePingPongProcessor nextOutputTextureIndex] */

undefined8 FUN_109082874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10908287c; end: 1090828b7; -[SCImageProcessPipelinePingPongProcessor .cxx_destruct] */

void FUN_10908287c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090828b8; end: 109082a43; -[SCImageProcessRenderPassResourceManager initWithRenderPasses:context:pixelBufferPoolRef:textureCacheHolder:outputRenderer:GPUAvailable:] */

undefined1 *
FUN_1090828b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112700300;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _CVPixelBufferPoolRetain();
    *(long *)((long)puVar1 + 0x18) = param_5;
    if (param_5 == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1090829fc;
    }
    puVar3 = PTR_PTR_1126bf4b8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bde7980();
    *(char *)((long)puVar1 + 0x49) = (char)puVar4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x4a) = param_8;
    func_0x00010beacbc0(puVar1);
  }
  _objc_retain(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_1090829fc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 109082a44; end: 109082a8b; -[SCImageProcessRenderPassResourceManager dealloc] */

void FUN_109082a44(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferPoolRelease(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_112700300;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109082a8c; end: 109082aff; -[SCImageProcessRenderPassResourceManager createTextureForId:contentIsUnchanged:] */

void FUN_109082a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd2d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03fa20();
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109082b00; end: 109082b07; -[SCImageProcessRenderPassResourceManager textureToReadForId:] */

void FUN_109082b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 109082b08; end: 109082b0f; -[SCImageProcessRenderPassResourceManager pixelBufferPool] */

undefined8 FUN_109082b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109082b10; end: 109082b17; -[SCImageProcessRenderPassResourceManager glTextureCache] */

undefined8 FUN_109082b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109082b18; end: 109082b3f; -[SCImageProcessRenderPassResourceManager textureCacheHolder] */

void FUN_109082b18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109082b40; end: 109082b67; -[SCImageProcessRenderPassResourceManager ippContext] */

void FUN_109082b40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109082b68; end: 109082b6f; -[SCImageProcessRenderPassResourceManager glFrameBuffer] */

undefined4 FUN_109082b68(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 109082b70; end: 109082b97; -[SCImageProcessRenderPassResourceManager outputRenderer] */

void FUN_109082b70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109082b98; end: 109082c6b; -[SCImageProcessRenderPassResourceManager _setupGLFrameBufferIfNecessary] */

void FUN_109082b98(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010beb5a20();
  if ((int)lVar2 != 0) {
    func_0x00010bfbf540(*(undefined8 *)(param_1 + 0x10));
    func_0x00010bf1a240(*(undefined8 *)(param_1 + 0x10));
    lVar2 = *(long *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfccd60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cea0();
    plVar3 = (long *)(param_1 + 0x40);
    *plVar3 = lVar2;
    _objc_release(uVar1);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010bfccd60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _CVOpenGLESTextureCacheCreate(uVar4,0,uVar1,0,plVar3);
      _objc_release(uVar1);
    }
    *(bool *)(param_1 + 0x48) = lVar2 == 0;
  }
  return;
}



/* Entry: 109082c6c; end: 109082c8b; -[SCImageProcessRenderPassResourceManager _shouldSetupGLResources] */

byte FUN_109082c6c(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x49) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x4a);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109082c8c; end: 109082c9b; -[SCImageProcessRenderPassResourceManager _containsGLRenderPass:] */

void FUN_109082c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_any__11259ebf0,&PTR___NSConcreteGlobalBlock_110ad70f8);
  return;
}



/* Entry: 109082c9c; end: 109082cbb;  */

bool FUN_109082c9c(undefined8 param_1,long param_2)

{
  func_0x00010c26cf40(param_2);
  return param_2 == 0;
}



/* Entry: 109082cbc; end: 109082d37; -[SCImageProcessRenderPassResourceManager flushAndCleanUp] */

void FUN_109082cbc(long param_1)

{
  long lVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1;
  func_0x00010beb5a20();
  if ((int)lVar1 != 0) {
    func_0x00010bfb2f20(*(undefined8 *)(param_1 + 0x10));
    _glBindFramebuffer(0x8d40,0);
    func_0x00010bf6be20(*(undefined8 *)(param_1 + 0x10));
    if (*(long *)(param_1 + 0x40) != 0) {
      _CVOpenGLESTextureCacheFlush(*(long *)(param_1 + 0x40),0);
      if (*(char *)(param_1 + 0x48) == '\x01') {
        _CFRelease(*(undefined8 *)(param_1 + 0x40));
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



/* Entry: 109082d38; end: 109082d97; -[SCImageProcessRenderPassResourceManager .cxx_destruct] */

void FUN_109082d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109082d98; end: 1090830fb; -[SCImageProcessRenderPipeline initWithInput:outputRenderer:glWrapper:colorConversionCommandProvider:outputImageBaker:bakedImageHandler:backgroundColor:backgroundAnimationCommand:orientation:presentationTime:presentationTimeOffset:viewportTransform:GPUCommands:CPUCommands:cpuBufferTransform:context:taskId:completionHandler:] */

undefined8 *
FUN_109082d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
             undefined8 param_13,undefined8 *param_14,undefined8 param_15,undefined8 param_16,
             undefined8 *param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_112700308;
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
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    puVar1[5] = param_11;
    uVar3 = param_12[1];
    uVar2 = *param_12;
    puVar1[0x14] = param_12[2];
    puVar1[0x13] = uVar3;
    puVar1[0x12] = uVar2;
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    uVar3 = param_14[1];
    uVar2 = *param_14;
    uVar4 = param_14[2];
    uVar6 = param_14[5];
    uVar5 = param_14[4];
    puVar1[9] = param_14[3];
    puVar1[8] = uVar4;
    puVar1[0xb] = uVar6;
    puVar1[10] = uVar5;
    puVar1[7] = uVar3;
    puVar1[6] = uVar2;
    _objc_retain(param_15);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_16;
    _objc_release(uVar2);
    uVar3 = param_17[1];
    uVar2 = *param_17;
    uVar4 = param_17[2];
    uVar6 = param_17[5];
    uVar5 = param_17[4];
    puVar1[0xf] = param_17[3];
    puVar1[0xe] = uVar4;
    puVar1[0x11] = uVar6;
    puVar1[0x10] = uVar5;
    puVar1[0xd] = uVar3;
    puVar1[0xc] = uVar2;
    _objc_retain(param_19);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_18;
    _objc_release(uVar2);
    uVar2 = param_20;
    _objc_retainBlock();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
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



/* Entry: 1090830fc; end: 10908311b; -[SCImageProcessRenderPipeline GPURequired] */

bool FUN_1090830fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010bf529e0(lVar1);
  return lVar1 == 0;
}



/* Entry: 10908311c; end: 1090831bf; -[SCImageProcessRenderPipeline runProgramsWithContext:GPUAvailable:error:] */

undefined8
FUN_10908311c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  _objc_autoreleasePoolPush();
  uStack_48 = 0;
  func_0x00010be3c0e0(param_1,param_2,param_3,param_4,&uStack_48);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  _objc_autoreleasePoolPop(uVar2);
  if (param_5 != (undefined8 *)0x0) {
    _objc_retainAutorelease(uVar1);
    *param_5 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1090831c0; end: 109083293; -[SCImageProcessRenderPipeline _innerRunProgramsWithContext:GPUAvailable:error:] */

undefined8
FUN_1090831c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 *param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109083294;
  puStack_60 = &UNK_1108c9578;
  puStack_50 = &uStack_48;
  uStack_58 = param_1;
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  if (param_4 == 0) {
    func_0x00010be97d40(param_1,param_2,param_3,ppuVar1,&uStack_48);
  }
  else {
    func_0x00010be97ea0();
  }
  _objc_release(param_3);
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = uStack_48;
    _objc_retainAutorelease();
    *param_5 = uVar2;
  }
  _objc_release(ppuVar1);
  return param_1;
}



/* Entry: 109083294; end: 1090832d7;  */

void FUN_109083294(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lVar3 + 0xc0);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,**(undefined8 **)(param_1 + 0x28));
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0xc0);
  }
  *(undefined8 *)(lVar3 + 0xc0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1090832d8; end: 109083d97; -[SCImageProcessRenderPipeline _runGPUCommandsWithContext:executeCompletionBlock:error:] */

long FUN_1090832d8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_180;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_109083d98;
  puStack_f8 = &UNK_110849530;
  _objc_retain(param_4);
  ppuVar3 = &puStack_110;
  uStack_f0 = param_4;
  _objc_retainBlock();
  puStack_138 = puVar5;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x109083da8;
  puStack_120 = &UNK_110849530;
  _objc_retain(param_4);
  ppuVar4 = &puStack_138;
  uStack_118 = param_4;
  _objc_retainBlock();
  uVar16 = param_3;
  FUN_10907a204(param_3,param_1,param_5);
  if ((uVar16 & 1) == 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
    lVar10 = 0;
    goto LAB_109083d24;
  }
  func_0x00010c229080(*(undefined8 *)(param_1 + 0x10));
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f1e678;
  func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f1e698;
  puStack_a8 = puVar5;
  func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f1e6b8;
  puStack_a0 = puVar17;
  func_0x00010bf25f80(*(undefined8 *)(param_1 + 8));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f1e738;
  puStack_98 = puVar6;
  func_0x00010bfb7260(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f1e6f8;
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_90 = puVar18;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0d3c80();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar18);
  _objc_release(puVar6);
  _objc_release(puVar17);
  _objc_release(puVar5);
  if (*(long *)(param_1 + 0xa8) != 0) {
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f1e718;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_d8 = *(long *)(param_1 + 0xa8);
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar9);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0xb0);
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    bVar1 = false;
  }
  else {
    lVar10 = *(long *)(param_1 + 0xd8);
    func_0x00010bf412e0(*(undefined8 *)(param_1 + 8));
    func_0x00010bf40e00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 == 0) {
LAB_109083614:
      bVar1 = false;
    }
    else {
      uVar11 = *(ulong *)(param_1 + 0xb0);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar11;
      func_0x00010c07a160();
      _objc_release(uVar11);
      if ((uVar16 & 1) != 0) goto LAB_109083614;
      func_0x00010befa120(puVar5);
      bVar1 = true;
    }
    _objc_release(lVar10);
  }
  lVar10 = *(long *)(param_1 + 0xb0);
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    uVar16 = 0;
    do {
      uVar12 = *(ulong *)(param_1 + 0xb0);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b26c8);
      uVar11 = uVar12;
      func_0x00010c077980();
      _objc_release(uVar12);
      if ((uVar11 & 1) == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c0dfd40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar13);
      }
      uVar16 = uVar16 + 1;
      uVar11 = *(ulong *)(param_1 + 0xb0);
      func_0x00010bf529e0();
    } while (uVar16 < uVar11);
  }
  puVar17 = puVar5;
  func_0x00010bf529e0();
  if (puVar17 == (undefined *)0x0) {
    puVar17 = PTR_PTR_1126b26c8;
    func_0x00010c22b820(PTR_PTR_1126b26c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar17);
  }
  puVar17 = puVar5;
  func_0x00010bf529e0();
  puVar6 = puVar5;
  if ((long)(puVar17 + -1) < 0) {
LAB_109083780:
    _objc_retain(puVar5);
    puVar17 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar18 = (undefined *)0x7fffffffffffffff;
    do {
      puVar17 = puVar17 + -1;
      if (puVar18 == (undefined *)0x7fffffffffffffff) {
        puVar18 = puVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar18;
        func_0x00010c065800();
        _objc_release(puVar18);
        puVar18 = puVar17;
        if (puVar7 != (undefined *)0x2) {
          puVar18 = (undefined *)0x7fffffffffffffff;
        }
      }
    } while (0 < (long)puVar17);
    if (puVar18 == (undefined *)0x7fffffffffffffff) goto LAB_109083780;
    puVar17 = puVar5;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar5);
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_180 = *(undefined **)(param_1 + 0x18);
  if (puStack_180 == (undefined *)0x0) {
    puStack_180 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain();
  }
  puVar18 = puVar17;
  func_0x00010bf529e0();
  ppuVar15 = ppuVar4;
  if (puVar18 == (undefined *)0x0) {
LAB_1090839ec:
    func_0x00010bf529e0();
    func_0x00010c0fcd00(*(undefined8 *)(param_1 + 0x10));
    func_0x00010beb0740(param_1);
    puVar18 = PTR_PTR_1126dd2d8;
    _objc_alloc();
    func_0x00010c004220();
    func_0x00010c0fcd00();
    func_0x00010c222b00(*(undefined8 *)(param_1 + 0xd0));
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_109083b48:
      puVar7 = puVar6;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        puVar7 = puVar17;
        func_0x00010bf529e0();
        if (puVar7 == (undefined *)0x0) {
          iVar2 = (int)*(undefined8 *)(param_1 + 8);
          func_0x00010c228ce0();
          if (iVar2 == 0) goto LAB_109083ce0;
          if (bVar1) {
            func_0x00010c1d0640(puVar9);
          }
        }
        else {
          func_0x00010bf1a2a0(*(undefined8 *)(param_1 + 0xd0));
        }
        func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
        puVar7 = puVar18;
        func_0x00010c114740();
        if ((int)puVar7 == 0) goto LAB_109083ce0;
      }
      if (*(long *)(param_1 + 0xe8) != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010bf15700(uVar13);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(*(long *)(param_1 + 0xe8) + 0x10))(*(long *)(param_1 + 0xe8),uVar13,*param_5);
        uVar14 = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xe8) = 0;
        _objc_release(uVar14);
        _objc_release(uVar13);
      }
      func_0x00010c10e7c0(*(undefined8 *)(param_1 + 0x10));
      func_0x00010bf3a5e0(*(undefined8 *)(param_1 + 8));
      func_0x00010bf3a5e0(*(undefined8 *)(param_1 + 0x10));
      lVar10 = 1;
      ppuVar15 = ppuVar3;
    }
    else {
      func_0x00010bf1a2a0(*(undefined8 *)(param_1 + 0xd0));
      func_0x00010c1d71e0(*(undefined8 *)(param_1 + 0xd0));
      func_0x00010be6fbe0(param_1);
      uStack_e8 = *(undefined8 *)(param_1 + 0x20);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar18;
      func_0x00010c114740();
      _objc_release(puVar7);
      if ((int)puVar8 != 0) goto LAB_109083b48;
LAB_109083ce0:
      lVar10 = 0;
    }
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
    func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
    func_0x00010c222b00(uVar13);
    func_0x00010bf529e0(puVar17);
    func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
    func_0x00010beb0740(param_1);
    puVar18 = PTR_PTR_1126dd2d8;
    _objc_alloc();
    func_0x00010c004220();
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c228ce0();
    if (iVar2 == 0) {
      lVar10 = 0;
    }
    else {
      if (bVar1) {
        func_0x00010c1d0640(puVar9);
      }
      func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
      func_0x00010c0fcd00();
      puVar7 = puVar18;
      func_0x00010c114740();
      func_0x00010c0d9c00();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(puVar8);
      if ((int)puVar7 != 0) {
        _objc_release(puVar18);
        goto LAB_1090839ec;
      }
      lVar10 = 0;
    }
  }
  (*(code *)ppuVar15[2])();
  _objc_release(puVar18);
  _objc_release(puStack_180);
  _objc_release(puVar6);
  _objc_release(puVar17);
  _objc_release(puVar5);
  _objc_release(puVar9);
LAB_109083d24:
  _objc_release(ppuVar4);
  _objc_release(uStack_118);
  _objc_release(ppuVar3);
  _objc_release(uStack_f0);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return lVar10;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000109083da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x10))(lVar10,2);
  return lVar10;
}



/* Entry: 109083d98; end: 109083db7;  */

void FUN_109083d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109083da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2);
  return;
}



/* Entry: 109083db8; end: 1090842cb; -[SCImageProcessRenderPipeline _runCPUCommandsWithContext:executeCompletionBlock:error:] */

long FUN_109083db8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
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
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1090842cc;
  puStack_b0 = &UNK_110849530;
  _objc_retain(param_4);
  ppuVar1 = &puStack_c8;
  uStack_a8 = param_4;
  _objc_retainBlock();
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1090842dc;
  puStack_d8 = &UNK_110849530;
  _objc_retain(param_4);
  ppuVar2 = &puStack_f0;
  uStack_d0 = param_4;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0xb8);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
    lVar3 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(param_1 + 0xd8);
    func_0x00010bf412e0(*(undefined8 *)(param_1 + 8));
    func_0x00010bf40de0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 != 0) {
      func_0x00010befa120(puVar4);
    }
    lVar3 = *(long *)(param_1 + 0xb8);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar16 = 0;
      do {
        uVar5 = *(ulong *)(param_1 + 0xb8);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126da0a0);
        uVar7 = uVar5;
        func_0x00010c077980();
        _objc_release(uVar5);
        if ((uVar7 & 1) == 0) {
          uVar6 = *(undefined8 *)(param_1 + 0xb8);
          func_0x00010c0dfd40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar6);
        }
        uVar16 = uVar16 + 1;
        uVar7 = *(ulong *)(param_1 + 0xb8);
        func_0x00010bf529e0();
      } while (uVar16 < uVar7);
    }
    puVar8 = puVar4;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      (*(code *)ppuVar2[2])(ppuVar2);
      lVar3 = 0;
    }
    else {
      ppuStack_90 = &PTR____CFConstantStringClassReference_110f1e6f8;
      uStack_118 = *(undefined8 *)(param_1 + 0x98);
      uStack_120 = *(undefined8 *)(param_1 + 0x90);
      uStack_110 = *(undefined8 *)(param_1 + 0xa0);
      puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_88 = puVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c0d3c80();
      _objc_release(puVar17);
      _objc_release(puVar8);
      if (*(long *)(param_1 + 0xa8) != 0) {
        ppuStack_a0 = &PTR____CFConstantStringClassReference_110f1e718;
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        lStack_98 = *(long *)(param_1 + 0xa8);
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar9);
        _objc_release(puVar8);
      }
      puVar8 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c0fc960();
      func_0x00010c0fc960(*(undefined8 *)(param_1 + 0x10));
      if (lVar3 != 0) {
        uStack_118 = *(undefined8 *)(param_1 + 0x68);
        uStack_120 = *(undefined8 *)(param_1 + 0x60);
        uStack_108 = *(undefined8 *)(param_1 + 0x78);
        uStack_110 = *(undefined8 *)(param_1 + 0x70);
        uStack_f8 = *(undefined8 *)(param_1 + 0x88);
        uStack_100 = *(undefined8 *)(param_1 + 0x80);
        uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_150 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        uStack_138 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        uStack_140 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_128 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        uStack_130 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        puVar10 = &uStack_120;
        _CGAffineTransformEqualToTransform(puVar10,&uStack_150);
        if (((ulong)puVar10 & 1) == 0) {
          _objc_autoreleasePoolPush();
          func_0x00010beced00(param_1);
          _objc_autoreleasePoolPop(puVar10);
        }
      }
      puVar17 = puVar9;
      func_0x00010bf51e00(puVar9);
      puVar11 = puVar8;
      func_0x00010c142b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      if (puVar11 == (undefined *)0x0) {
        (*(code *)ppuVar2[2])(ppuVar2);
        lVar3 = 0;
      }
      else {
        func_0x00010bef7f60(puVar9);
        puVar17 = puVar4;
        func_0x00010bf529e0();
        if ((undefined *)0x1 < puVar17) {
          puVar17 = (undefined *)0x1;
          do {
            puVar12 = puVar4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar9;
            func_0x00010bf51e00(puVar9);
            puVar14 = puVar12;
            func_0x00010c142b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar13);
            if (puVar14 == (undefined *)0x0) {
              (*(code *)ppuVar2[2])(ppuVar2);
              _objc_release(puVar12);
              lVar3 = 0;
              goto LAB_10908422c;
            }
            func_0x00010bef7f60(puVar9);
            _objc_release(puVar14);
            _objc_release(puVar12);
            puVar17 = puVar17 + 1;
            puVar12 = puVar4;
            func_0x00010bf529e0();
          } while (puVar17 < puVar12);
        }
        (*(code *)ppuVar1[2])(ppuVar1);
        lVar3 = 1;
      }
LAB_10908422c:
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar9);
    }
    _objc_release(lVar15);
    _objc_release(puVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_d0);
  _objc_release(ppuVar1);
  _objc_release(uStack_a8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar3 = *(long *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001090842d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,2);
    return lVar3;
  }
  return lVar3;
}



/* Entry: 1090842cc; end: 1090842eb;  */

void FUN_1090842cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090842d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2);
  return;
}



/* Entry: 1090842ec; end: 10908439b; -[SCImageProcessRenderPipeline _setupTextureContainerWithContext:intermediatePasses:pingTextureName:pongTextureName:pixelSize:] */

void FUN_1090842ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (0 < param_4) {
    lVar1 = param_1;
    func_0x00010be3d3e0(param_1,param_2,param_3,param_5,param_7,param_8);
    *(int *)(param_1 + 200) = (int)lVar1;
    if (param_4 != 1) {
      lVar1 = param_1;
      func_0x00010be3d3e0(param_1,param_2,param_3,param_6,param_7,param_8);
      *(int *)(param_1 + 0xcc) = (int)lVar1;
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10908439c; end: 1090843b3; -[SCImageProcessRenderPipeline _intermediateTextureWithContext:textureName:pixelSize:] */

void FUN_10908439c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d51b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_namedIntermediateTexture_pixelWi_112612e80,param_4,param_5,param_6,0x84c4
            );
  return;
}



/* Entry: 1090843b4; end: 109084437; -[SCImageProcessRenderPipeline _paintBackgroundColorWithContext:] */

void FUN_1090843b4(long param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)(param_1 + 0x18);
  if (pdVar2 == (double *)0x0) {
    pdVar2 = (double *)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(pdVar2);
  }
  pdVar1 = pdVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorGetComponents();
  func_0x00010bf3ae60((float)*pdVar1,(float)pdVar1[1],(float)pdVar1[2],(float)pdVar1[3],
                      *(undefined8 *)(param_1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pdVar2);
  return;
}



/* Entry: 109084438; end: 1090847c7; -[SCImageProcessRenderPipeline _transformInputPixelBuffer:] */

undefined *
FUN_109084438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CGColorSpaceCreateDeviceRGB();
  puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
  uStack_98 = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_11034ad20;
  puStack_90 = PTR____kCFBooleanTrue_11034ab68;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _CVPixelBufferLockBaseAddress(param_7,0);
  uStack_b0 = 0;
  uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar13 = param_7;
  _CVPixelBufferGetWidth(param_7);
  uVar4 = param_7;
  _CVPixelBufferGetHeight(param_7);
  uVar5 = param_7;
  _CVPixelBufferGetPixelFormatType(param_7);
  uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  puStack_a0 = PTR____NSDictionary0__struct_11034ab58;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _CVPixelBufferCreate(uVar12,uVar13,uVar4,uVar5,puVar2,&uStack_b0);
  _CVPixelBufferLockBaseAddress(uStack_b0,0);
  uVar13 = param_7;
  _CVPixelBufferGetPlaneCount();
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      uVar5 = param_7;
      _CVPixelBufferGetBaseAddressOfPlane(param_7,uVar13);
      uVar4 = uStack_b0;
      _CVPixelBufferGetBaseAddressOfPlane(uStack_b0,uVar13);
      uVar6 = param_7;
      _CVPixelBufferGetHeightOfPlane(param_7,uVar13);
      uVar7 = param_7;
      _CVPixelBufferGetBytesPerRowOfPlane(param_7,uVar13);
      uVar8 = uStack_b0;
      _CVPixelBufferGetBytesPerRowOfPlane(uStack_b0,uVar13);
      if (uVar7 == uVar8) {
        _memcpy(uVar4,uVar5,uVar7 * uVar6);
      }
      else {
        uVar1 = uVar7;
        if (uVar8 <= uVar7) {
          uVar1 = uVar8;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          _memcpy(uVar4,uVar5,uVar1);
          uVar4 = uVar4 + uVar8;
          uVar5 = uVar5 + uVar7;
        }
      }
      uVar13 = uVar13 + 1;
      uVar4 = param_7;
      _CVPixelBufferGetPlaneCount();
    } while (uVar13 < uVar4);
  }
  puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9320(PTR__OBJC_CLASS___CIImage_1126b3128);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20();
  puVar9 = puVar2;
  func_0x00010bfe6dc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
  puVar10 = PTR__OBJC_CLASS___CIColor_1126c9738;
  func_0x00010bf1c920(PTR__OBJC_CLASS___CIColor_1126c9738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9340(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bfe6e20(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar10);
  puVar2 = puVar11;
  func_0x00010bfe6e40(param_1,param_2,param_3,param_4,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  func_0x00010bf9de20(puVar2);
  func_0x00010c12f600(puVar3);
  _CGColorSpaceRelease(param_5);
  _CVPixelBufferUnlockBaseAddress(uStack_b0,0);
  _CVPixelBufferUnlockBaseAddress(param_7,0);
  _CVPixelBufferRelease(uStack_b0);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + 0xf0);
}



/* Entry: 1090847c8; end: 1090847cf; -[SCImageProcessRenderPipeline taskId] */

undefined8 FUN_1090847c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1090847d0; end: 1090847d7; -[SCImageProcessRenderPipeline context] */

undefined8 FUN_1090847d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1090847d8; end: 109084897; -[SCImageProcessRenderPipeline .cxx_destruct] */

void FUN_1090847d8(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109084898; end: 1090848ef; -[SCImageProcessTextureCacheHolder textureCacheForGLContext:] */

long FUN_109084898(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 8);
  lVar1 = *plVar3;
  if ((param_3 != 0) && (lVar1 == 0)) {
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVOpenGLESTextureCacheCreate(uVar2,0,param_3,0,plVar3);
    if ((int)uVar2 == 0) {
      lVar1 = *plVar3;
    }
    else {
      lVar1 = 0;
      *plVar3 = 0;
    }
  }
  return lVar1;
}



/* Entry: 1090848f0; end: 10908494b; -[SCImageProcessTextureCacheHolder dealloc] */

void FUN_1090848f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    _CVOpenGLESTextureCacheFlush(*(long *)(param_1 + 8),0);
    _CFRelease(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puStack_28 = PTR_PTR_112700310;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10908494c; end: 109084a07; -[SCCVPixelBufferOutputImageBaker initWithPixelBufferOutputRender:glWrapper:croppingAspectRatio:orientation:] */

undefined1 *
FUN_10908494c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112700318;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109084a08; end: 109084bb3; -[SCCVPixelBufferOutputImageBaker bakeImage] */

void FUN_109084a08(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0fcd00();
  func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
  dVar10 = *(double *)(param_1 + 0x18);
  iVar8 = param_2;
  if (dVar10 == INFINITY) {
LAB_109084a8c:
    iVar6 = 0;
  }
  else {
    dVar11 = (double)iVar2 / (double)param_2;
    dVar12 = ABS(dVar10 - dVar11);
    dVar13 = ABS(dVar10 + dVar11) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar13))) {
      bVar1 = dVar12 < dVar13;
    }
    if (bVar1) goto LAB_109084a8c;
    if (dVar10 <= dVar11) {
      iVar6 = 0;
      iVar9 = (int)(dVar10 * (double)param_2);
      iVar7 = (int)((double)(iVar2 - iVar9) / 2.0);
      goto LAB_109084a9c;
    }
    iVar8 = (int)((double)iVar2 / dVar10);
    iVar6 = (int)((double)(param_2 - iVar8) / 2.0);
  }
  iVar7 = 0;
  iVar9 = iVar2;
LAB_109084a9c:
  func_0x00010bfb2f20(*(undefined8 *)(param_1 + 0x10));
  iVar3 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0eefe0();
  _VTCreateCGImageFromCVPixelBuffer();
  puVar5 = (undefined *)0x0;
  if (iVar3 == 0) {
    if ((((iVar7 == 0) && (iVar6 == 0)) && (iVar9 == iVar2)) && (iVar8 == param_2)) {
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x00010bffa280(0x3ff0000000000000);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      _CGImageCreateWithImageInRect((double)iVar7,(double)iVar6,(double)iVar9,(double)iVar8,0);
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x00010bffa280(0x3ff0000000000000);
      _CGImageRelease(0);
    }
    _CGImageRelease(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109084bb4; end: 109084be3; -[SCCVPixelBufferOutputImageBaker .cxx_destruct] */

void FUN_109084bb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109084be4; end: 109084c9f; -[SCGlFramebufferOutputImageBaker initWithPlaybackRenderer:glWrapper:croppingAspectRatio:orientation:] */

undefined1 *
FUN_109084be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112700320;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109084ca0; end: 109084e2b; -[SCGlFramebufferOutputImageBaker bakeImage] */

void FUN_109084ca0(long param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar2 = param_1;
  _CGColorSpaceCreateDeviceRGB();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c0fcd00();
  func_0x00010c0fcd00(*(undefined8 *)(param_1 + 8));
  dVar7 = *(double *)(param_1 + 0x18);
  if (dVar7 != INFINITY) {
    dVar8 = (double)(int)uVar3 / (double)param_2;
    dVar9 = ABS(dVar7 - dVar8);
    dVar10 = ABS(dVar7 + dVar8) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar10))) {
      bVar1 = dVar9 < dVar10;
    }
    if (!bVar1) {
      if (dVar7 <= dVar8) {
        uVar3 = (ulong)(uint)(int)(dVar7 * (double)param_2);
      }
      else {
        param_2 = (int)((double)(int)uVar3 / dVar7);
      }
    }
  }
  lVar4 = 0;
  _CGBitmapContextCreate
            (0,(long)(int)uVar3,(long)param_2,8,
             -(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar3 & 0xffffffff) << 2,lVar2,1);
  lVar5 = lVar4;
  _CGBitmapContextGetData();
  if (lVar5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010c1217c0(*(undefined8 *)(param_1 + 0x10));
    lVar5 = lVar4;
    _CGBitmapContextCreateImage(lVar4);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9260(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(lVar5);
  }
  _CGColorSpaceRelease(lVar2);
  _CGContextRelease(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 109084e2c; end: 109084e5b; -[SCGlFramebufferOutputImageBaker .cxx_destruct] */

void FUN_109084e2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109084e5c; end: 109084e63; -[SCImageProcessContextCleanupRequest context] */

undefined8 FUN_109084e5c(void)

{
  return 0;
}



/* Entry: 109084e64; end: 109084e6b; -[SCImageProcessContextCleanupRequest taskId] */

undefined8 FUN_109084e64(void)

{
  return 0;
}



/* Entry: 109084e6c; end: 109084e73; -[SCImageProcessContextCleanupRequest GPURequired] */

undefined8 FUN_109084e6c(void)

{
  return 1;
}



/* Entry: 109084e74; end: 109084e8f; -[SCImageProcessContextCleanupRequest runProgramsWithContext:GPUAvailable:error:] */

undefined8 FUN_109084e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c069f80(param_3);
  return 1;
}



/* Entry: 109084e90; end: 109084e93; -[SCImageProcessContextCleanupRequest cancel] */

void FUN_109084e90(void)

{
  return;
}



/* Entry: 109084e94; end: 109084f07; -[SCImageProcessDeletePlaybackRendererRequest initWithRenderer:] */

undefined1 * FUN_109084e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700328;
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



/* Entry: 109084f08; end: 109084f0f; -[SCImageProcessDeletePlaybackRendererRequest context] */

undefined8 FUN_109084f08(void)

{
  return 0;
}



/* Entry: 109084f10; end: 109084f17; -[SCImageProcessDeletePlaybackRendererRequest taskId] */

undefined8 FUN_109084f10(void)

{
  return 0;
}



/* Entry: 109084f18; end: 109084f1f; -[SCImageProcessDeletePlaybackRendererRequest GPURequired] */

undefined8 FUN_109084f18(void)

{
  return 1;
}



/* Entry: 109084f20; end: 109084f3b; -[SCImageProcessDeletePlaybackRendererRequest runProgramsWithContext:GPUAvailable:error:] */

undefined8 FUN_109084f20(long param_1)

{
  func_0x00010bf6c520(*(undefined8 *)(param_1 + 8));
  return 1;
}



/* Entry: 109084f3c; end: 109084f3f; -[SCImageProcessDeletePlaybackRendererRequest cancel] */

void FUN_109084f3c(void)

{
  return;
}



/* Entry: 109084f40; end: 109084f4b; -[SCImageProcessDeletePlaybackRendererRequest .cxx_destruct] */

void FUN_109084f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109084f4c; end: 109084f57; -[SCImageProcessGLWrapperImpl generateFramebuffers:size:] */

void FUN_109084f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glGenFramebuffers_11034b5c8)(param_4,param_3);
  return;
}



/* Entry: 109084f58; end: 109084f63; -[SCImageProcessGLWrapperImpl generateRenderbuffers:size:] */

void FUN_109084f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glGenRenderbuffers_11034b5e0)(param_4,param_3);
  return;
}



/* Entry: 109084f64; end: 109084f6f; -[SCImageProcessGLWrapperImpl deleteFramebuffers:size:] */

void FUN_109084f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDeleteFramebuffers_11034b4a0)(param_4,param_3);
  return;
}



/* Entry: 109084f70; end: 109084f7b; -[SCImageProcessGLWrapperImpl deleteRenderbuffers:size:] */

void FUN_109084f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDeleteRenderbuffers_11034b4c0)(param_4,param_3);
  return;
}



/* Entry: 109084f7c; end: 109084f87; -[SCImageProcessGLWrapperImpl deleteTextures:size:] */

void FUN_109084f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDeleteTextures_11034b4e8)(param_4,param_3);
  return;
}



/* Entry: 109084f88; end: 109084f93; -[SCImageProcessGLWrapperImpl bindFramebuffer:] */

void FUN_109084f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindFramebuffer_11034b378)(0x8d40,param_3);
  return;
}



/* Entry: 109084f94; end: 109084f9f; -[SCImageProcessGLWrapperImpl bindRenderbuffer:] */

void FUN_109084f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindRenderbuffer_11034b380)(0x8d41,param_3);
  return;
}



/* Entry: 109084fa0; end: 109084fcf; -[SCImageProcessGLWrapperImpl setOutputRenderBuffer:] */

void FUN_109084fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf1a360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFramebufferRenderbuffer_11034b5a0)(0x8d40,0x8ce0,0x8d41,param_3);
  return;
}



/* Entry: 109084fd0; end: 109084fd7; -[SCImageProcessGLWrapperImpl setActiveTextureUnit:] */

void FUN_109084fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glActiveTexture_11034b340)(param_3);
  return;
}



/* Entry: 109084fd8; end: 109085003; -[SCImageProcessGLWrapperImpl bindInputTexture:textureUnit:] */

void FUN_109084fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c162bc0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindTexture_11034b390)(0xde1,param_3);
  return;
}



/* Entry: 109085004; end: 10908501b; -[SCImageProcessGLWrapperImpl setOutputTexture:] */

void FUN_109085004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFramebufferTexture2D_11034b5a8)(0x8d40,0x8ce0,0xde1,param_3,0);
  return;
}



/* Entry: 10908501c; end: 109085027; -[SCImageProcessGLWrapperImpl setViewPortWithWidth:height:] */

void FUN_10908501c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbed20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glViewport_11034b910)(0,0);
  return;
}



/* Entry: 109085028; end: 109085043; -[SCImageProcessGLWrapperImpl readRGBAPixelsWithX:y:width:height:data:] */

void FUN_109085028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glReadPixels_11034b760)(param_3,param_4,param_5,param_6,0x1908,0x1401);
  return;
}



/* Entry: 109085044; end: 109085047; -[SCImageProcessGLWrapperImpl flush] */

void FUN_109085044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFlush_11034b590)();
  return;
}



/* Entry: 109085048; end: 10908505f; -[SCImageProcessGLWrapperImpl clearColorWithR:g:b:a:] */

void FUN_109085048(void)

{
  _glClearColor();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glClear_11034b3e8)(0x4000);
  return;
}



/* Entry: 109085060; end: 10908506b; -[SCImageProcessGLWrapperImpl retrieveRenderBufferPixelWidth:] */

void FUN_109085060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glGetRenderbufferParameteriv_11034b690)(0x8d41,0x8d42);
  return;
}



/* Entry: 10908506c; end: 109085077; -[SCImageProcessGLWrapperImpl retrieveRenderBufferPixelHeight:] */

void FUN_10908506c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glGetRenderbufferParameteriv_11034b690)(0x8d41,0x8d43);
  return;
}



/* Entry: 109085078; end: 109085083; -[SCImageProcessGLWrapperImpl establishRenderBufferStorageWithWidth:height:] */

void FUN_109085078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbeaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glRenderbufferStorage_11034b768)(0x8d41,0x8058);
  return;
}



/* Entry: 109085084; end: 1090852f3; -[SCImageProcessPipelineRequestFactory colorFilterRequestWithGlWrapper:imageData:pixelSize:backgroundAnimationCommand:commands:bakedImageHandler:outputImageBaker:renderer:orientation:viewportTransform:backgroundColor:context:taskId:completionHandler:colorFilterSessionId:presentationTime:] */

void FUN_109085084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = PTR_PTR_1126dd2e0;
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000028);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c017d00();
  _objc_release(in_stack_00000048);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126dd2e8;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126dd2f0;
  _objc_alloc();
  func_0x00010c01e020();
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090852f4; end: 1090855bf; -[SCImageProcessPipelineRequestFactory pixelRequestWithImageData:inputPixelSize:outputPixelSize:presentationTime:backgroundAnimationCommand:commands:orientation:viewportTransform:context:bakedImageHandler:completionHandler:] */

void FUN_1090852f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  puVar1 = PTR_PTR_1126bf4b8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126dd2e0;
  _objc_alloc();
  func_0x00010c017d00();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126dd230;
  _objc_alloc();
  func_0x00010c016aa0();
  puVar4 = PTR_PTR_1126dd238;
  _objc_alloc(PTR_PTR_1126dd238);
  puVar6 = PTR_DAT_1126a5bc8;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x000107c318f8(puVar3,puVar6);
  puVar6 = puVar3;
  if ((int)puVar5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar3);
  func_0x00010c036200(0x7ff0000000000000,puVar4);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126dd2e8;
  _objc_alloc_init();
  puVar5 = PTR_PTR_1126dd2f0;
  _objc_alloc();
  if (in_stack_00000000 == 0) {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  func_0x00010c01e020();
  if (in_stack_00000000 == 0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1090855c0; end: 1090856f3; -[SCImageProcessPipelineRequestFactory requestWithGraphInputs:outputPixelBuffer:pixelBufferPoolRef:textureCacheHolder:presentationTime:outputColorSpace:renderPasses:context:taskId:enableCPUFallback:completionHandler:] */

void FUN_1090855c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd2e8;
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126dd2f8;
  _objc_alloc(PTR_PTR_1126dd2f8);
  func_0x00010c0327a0();
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1090856f4; end: 10908584f; -[SCImageProcessPipelineRequestFactory requestWithGraphInputs:outputRenderer:outputSize:pixelBufferPoolRef:textureCacheHolder:presentationTime:outputColorSpace:renderPasses:context:taskId:enableCPUFallback:completionHandler:] */

void FUN_1090856f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd2e8;
  _objc_retain(param_16);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126dd2f8;
  _objc_alloc(PTR_PTR_1126dd2f8);
  func_0x00010c0327c0(param_1,param_2);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109085850; end: 109085a87; -[SCImageProcessPipelineRequestFactory videoExportRequestWithInputPixelBuffer:outputPixelBuffer:orientation:viewportTransform:cpuBufferTransform:presentationTime:presentationTimeOffset:colorSpace:GPUCommands:CPUCommands:backgroundCommand:context:taskId:completionHandler:] */

void FUN_109085850(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack_138;
  
  puVar1 = PTR_PTR_1126bf4b8;
  _objc_retain();
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000000);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126dd2e8;
  _objc_alloc_init();
  uVar5 = in_stack_00000008 - 1;
  if (uVar5 < 3) {
    puVar6 = (undefined8 *)(&PTR_PTR_110ad7130)[uVar5];
    uStack_138 = *(undefined8 *)(&PTR_PTR_110ad7118)[uVar5];
    _objc_alloc();
    func_0x00010c017d20();
    uVar3 = *puVar6;
    _objc_alloc(uVar3);
    func_0x00010c017d20();
  }
  else {
    uStack_138 = 0;
    uVar3 = 0;
  }
  puVar4 = PTR_PTR_1126dd2f0;
  _objc_alloc();
  func_0x00010c01e020();
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000000);
  _objc_release(uVar3);
  _objc_release(uStack_138);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109085a88; end: 109085ca3; -[SCImageProcessPipelineRequestFactory videoPlaybackRequestWithPixelBuffer:renderer:backgroundAnimationCommand:orientation:presentationTime:viewportTransform:outputCommands:midOutputCommands:backgroundColor:context:completionHandler:] */

void FUN_109085a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  puVar1 = PTR_PTR_1126bf4b8;
  _objc_retain();
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126dd310;
  _objc_alloc(PTR_PTR_1126dd310);
  func_0x00010c017d20();
  puVar3 = PTR_PTR_1126dd2e8;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bff4000();
  _objc_release(param_10);
  func_0x00010befa160(puVar4,param_2,param_9);
  _objc_release(param_9);
  puVar5 = PTR_PTR_1126dd2f0;
  _objc_alloc(PTR_PTR_1126dd2f0);
  puVar6 = puVar4;
  func_0x00010bf51e00();
  uStack_78 = param_7[1];
  uStack_80 = *param_7;
  uStack_70 = param_7[2];
  uStack_a8 = param_8[1];
  uStack_b0 = *param_8;
  uStack_98 = param_8[3];
  uStack_a0 = param_8[2];
  uStack_88 = param_8[5];
  uStack_90 = param_8[4];
  uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_e0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c01e020(puVar5,param_2,puVar2,param_4,puVar1,puVar3,0,0,param_11,param_5,param_6,
                      &uStack_80,0,&uStack_b0,puVar6,0,&uStack_e0,param_12,0,param_13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109085ca4; end: 109085d5f; -[SCImageProcessRequestGraphInput initWithPixelBuffer:bufferId:orientation:] */

undefined1 *
FUN_109085ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700330;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    _CVPixelBufferRetain();
    *(undefined8 *)((long)puVar2 + 0x10) = uVar3;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_4;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x28) = param_5;
    FUN_10907e01c();
    *(undefined8 *)((long)puVar2 + 0x20) = param_3;
    puVar1 = PTR__CGAffineTransformIdentity_110347008;
    uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x40) =
         *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *(undefined8 *)((long)puVar2 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar2 + 0x50) = uVar5;
    *(undefined8 *)((long)puVar2 + 0x48) = uVar4;
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x60) = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x58) = uVar3;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 109085d60; end: 109085dab; -[SCImageProcessRequestGraphInput dealloc] */

void FUN_109085d60(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  puStack_28 = PTR_PTR_112700330;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109085dac; end: 109085db3; -[SCImageProcessRequestGraphInput pixelBuffer] */

undefined8 FUN_109085dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109085db4; end: 109085dbb; -[SCImageProcessRequestGraphInput bufferId] */

undefined8 FUN_109085db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109085dbc; end: 109085dc3; -[SCImageProcessRequestGraphInput contentIsUnchanged] */

undefined1 FUN_109085dbc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109085dc4; end: 109085dcb; -[SCImageProcessRequestGraphInput setContentIsUnchanged:] */

void FUN_109085dc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 109085dcc; end: 109085dd3; -[SCImageProcessRequestGraphInput colorSpace] */

undefined8 FUN_109085dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


