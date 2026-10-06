/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fb7750; end: 107fb788f; -[SCImageProcessNewportRectificationRGBCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_107fb7750(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  long lVar4;
  
  puStack_38 = PTR_PTR_1126fbf98;
  plVar2 = &lStack_40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_loadWithContext_error__112604c28);
  if ((int)plVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112772ae4) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112772ae8) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112772aec) = uVar1;
    _objc_release(lVar3);
    func_0x00010bf25f00(*(undefined8 *)(param_1 + _DAT_112772ad8));
    lVar3 = param_1;
    func_0x00010bdf4a80();
    *(int *)(param_1 + _DAT_112772af0) = (int)lVar3;
  }
  return plVar2;
}



/* Entry: 107fb7890; end: 107fb79b7; -[SCImageProcessNewportRectificationRGBCommand bindParamsWithPresentationTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107fb7890(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d36a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  _CMTimeGetSeconds(&uStack_60);
  func_0x00010c24d000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c24cfe0();
  _objc_retainAutoreleasedReturnValue();
  FUN_107fb7674(&uStack_60,puVar2);
  _objc_release(puVar2);
  _glActiveTexture(0x84c2);
  _glBindTexture(0xde1,*(undefined4 *)(param_1 + _DAT_112772af0));
  _glUniform1i(*(undefined4 *)(param_1 + _DAT_112772ae4),2);
  _glUniformMatrix3fv(*(undefined4 *)(param_1 + _DAT_112772ae8),1,0,param_1 + _DAT_112772ae0);
  _glUniformMatrix3fv(*(undefined4 *)(param_1 + _DAT_112772aec),1,0,&uStack_60);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_90;
  pcStack_68 = FUN_107fb79b8;
  puStack_88 = PTR_PTR_1126fbf98;
  puStack_90 = puVar2;
  puStack_80 = puVar1;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_90,PTR_s_unloadWithError__11267dcf0);
  if ((int)ppuVar3 != 0) {
    _glDeleteTextures(1,puVar2 + _DAT_112772af0);
  }
  return (undefined *)ppuVar3;
}



/* Entry: 107fb79b8; end: 107fb7a17; -[SCImageProcessNewportRectificationRGBCommand unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107fb79b8(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126fbf98;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar1 != 0) {
    _glDeleteTextures(1,param_1 + _DAT_112772af0);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 107fb7a18; end: 107fb7b0f; -[SCImageProcessNewportRectificationRGBCommand _createTextureWithData:pixelWidth:pixelHeight:textureUnit:internalFormat:pixelFormat:type:] */

undefined4
FUN_107fb7a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined4 uStack_54;
  
  _glGenTextures(1,&uStack_54);
  _glActiveTexture(param_6);
  _glBindTexture(0xde1,uStack_54);
  _glPixelStorei(0xd05,4);
  _glPixelStorei(0xcf5,4);
  _glTexParameteri(0xde1,0x2801,0x2601);
  _glTexParameteri(0xde1,0x2800,0x2601);
  _glTexParameteri(0xde1,0x2802,0x812f);
  _glTexParameteri(0xde1,0x2803,0x812f);
  _glTexImage2D(0xde1,0,param_7,param_4,param_5,0,param_8,param_9,param_3);
  return uStack_54;
}



/* Entry: 107fb7b10; end: 107fb7cdf; -[SCImageProcessNewportRectificationRGBCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb7b10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772adc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772ad8,0);
  return;
}



/* Entry: 107fb7ce0; end: 107fb7d9f; -[SCImageProcessStereoRGBCommand initWithRectificationFunction:stereoCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107fb7ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  func_0x000107fb7b50(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  func_0x00010c060ac0();
  puStack_38 = PTR_PTR_1126fbfa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithProgram__11253a1b0,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar2 + (long)_DAT_112772af4) = 1;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112772af8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107fb7da0; end: 107fb7e4b; -[SCImageProcessStereoRGBCommand initWithRectificationFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107fb7da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  func_0x000107fb7c18(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  func_0x00010c060ac0();
  puStack_38 = PTR_PTR_1126fbfa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithProgram__11253a1b0,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar2 + (long)_DAT_112772af4) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107fb7e4c; end: 107fb7e4f; -[SCImageProcessStereoRGBCommand bindParamsWithPresentationTime:] */

void FUN_107fb7e4c(void)

{
  return;
}



/* Entry: 107fb7e50; end: 107fb7e57; -[SCImageProcessStereoRGBCommand inputConstraint] */

undefined8 FUN_107fb7e50(void)

{
  return 2;
}



/* Entry: 107fb7e58; end: 107fb7ef7; -[SCImageProcessStereoRGBCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107fb7e58(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  long lVar4;
  
  plVar2 = &lStack_40;
  puStack_38 = PTR_PTR_1126fbfa0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadWithContext_error__112604c28);
  if (((int)plVar2 != 0) && (*(char *)(param_1 + _DAT_112772af4) == '\x01')) {
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112772afc) = uVar1;
    _objc_release(lVar3);
  }
  return (undefined1 *)plVar2;
}



/* Entry: 107fb7ef8; end: 107fb80d3; -[SCImageProcessStereoRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107fb7ef8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 *param_13,
             undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_14);
  lVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,0xb,lVar1,param_15);
  _objc_release(lVar1);
  if ((int)param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_a0,lVar1);
    }
    func_0x00010bf1a320(param_3);
    _objc_release(lVar1);
    if (*(char *)(param_3 + _DAT_112772af4) == '\x01') {
      _glUniform1i(*(undefined4 *)(param_3 + _DAT_112772afc),
                   *(undefined4 *)(param_3 + _DAT_112772af8));
    }
    uStack_98 = param_13[1];
    uStack_a0 = *param_13;
    uStack_88 = param_13[3];
    uStack_90 = param_13[2];
    uStack_78 = param_13[5];
    uStack_80 = param_13[4];
    func_0x00010bf89d00(param_1,param_2,param_3);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
  }
  _objc_release(param_14);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 107fb80d4; end: 107fb80df; -[SCImageProcessStereoRGBCommand commandName] */

undefined ** FUN_107fb80d4(void)

{
  return &PTR____CFConstantStringClassReference_110ecadd8;
}



/* Entry: 107fb80e0; end: 107fb81c3; -[SCImageProcessStereoRGBCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fb80e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
    goto LAB_107fb81a4;
  }
  puVar4 = PTR_PTR_1126d8a88;
  _objc_opt_class(PTR_PTR_1126d8a88);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_107fb8190:
    bVar3 = false;
  }
  else {
    puStack_38 = PTR_PTR_1126fbfa0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if ((iVar2 == 0) ||
       (*(long *)(param_3 + (long)_DAT_112772af8) != *(long *)(param_1 + (long)_DAT_112772af8)))
    goto LAB_107fb8190;
    bVar3 = *(char *)(param_3 + (long)_DAT_112772af4) == *(char *)(param_1 + (long)_DAT_112772af4);
  }
  _objc_release(uVar1);
LAB_107fb81a4:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107fb81c4; end: 107fb8207;  */

void FUN_107fb81c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d8a78;
  _objc_alloc();
  func_0x00010c060ac0();
  uVar1 = puRam00000001137289b8;
  puRam00000001137289b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb8208; end: 107fb823f; +[SCImageProcessVideoCircleCommand commandWithPadding:color:] */

void FUN_107fb8208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00010c032d60(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb8240; end: 107fb8307; -[SCImageProcessVideoCircleCommand initWithPadding:color:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107fb8240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  if (lRam00000001137289b0 != -1) {
    func_0x00010002a2fc(0x1137289b0,&PTR___NSConcreteGlobalBlock_110a16340);
  }
  uVar1 = uRam00000001137289b8;
  _objc_retain(uRam00000001137289b8);
  puStack_48 = PTR_PTR_1126fbfa8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithProgram__11253a1b0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_112772b00) = param_1;
    _CGColorRetain();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112772b04) = param_4;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 107fb8308; end: 107fb8357; -[SCImageProcessVideoCircleCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb8308(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGColorRelease(*(undefined8 *)(param_1 + _DAT_112772b04));
  puStack_28 = PTR_PTR_1126fbfa8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107fb8358; end: 107fb835f; -[SCImageProcessVideoCircleCommand inputConstraint] */

undefined8 FUN_107fb8358(void)

{
  return 1;
}



/* Entry: 107fb8360; end: 107fb8423; -[SCImageProcessVideoCircleCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107fb8360(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  long lVar4;
  
  plVar2 = &lStack_40;
  puStack_38 = PTR_PTR_1126fbfa8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadWithContext_error__112604c28);
  if ((int)plVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112772b08) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112772b0c) = uVar1;
    _objc_release(lVar3);
  }
  return (undefined1 *)plVar2;
}



/* Entry: 107fb8424; end: 107fb85b7; -[SCImageProcessVideoCircleCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb8424(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                  undefined8 param_13,undefined8 param_14)

{
  float fVar1;
  double *pdVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_13);
  _objc_retain(param_5);
  lVar4 = param_3;
  func_0x00010c117700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fd20();
  _objc_release(lVar4);
  _glUniform1f((float)(*(double *)(param_3 + _DAT_112772b00) * -2.0 + 1.0),
               *(undefined4 *)(param_3 + _DAT_112772b08));
  lVar4 = (long)_DAT_112772b04;
  pdVar2 = *(double **)(param_3 + lVar4);
  _CGColorGetComponents();
  lVar4 = *(long *)(param_3 + lVar4);
  _CGColorGetNumberOfComponents();
  fVar5 = (float)*pdVar2;
  fVar1 = (float)pdVar2[1];
  fVar6 = fVar5;
  fVar7 = fVar5;
  if (lVar4 != 2) {
    fVar1 = (float)pdVar2[3];
    fVar6 = (float)pdVar2[1];
    fVar7 = (float)pdVar2[2];
  }
  _glUniform4f(fVar5,fVar6,fVar7,fVar1,*(undefined4 *)(param_3 + _DAT_112772b0c));
  puStack_80 = PTR_PTR_1126fbfa8;
  uStack_b8 = param_12[1];
  uStack_c0 = *param_12;
  uStack_a8 = param_12[3];
  uStack_b0 = param_12[2];
  uStack_98 = param_12[5];
  uStack_a0 = param_12[4];
  plVar3 = &lStack_88;
  lStack_88 = param_3;
  _objc_msgSendSuper2(param_1,param_2,plVar3,PTR_s_runWithContext_pixelSize_bytesPe_11262e508,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11,&uStack_c0,param_13,
                      param_14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 107fb85b8; end: 107fb85c3; -[SCImageProcessVideoCircleCommand commandName] */

undefined ** FUN_107fb85b8(void)

{
  return &PTR____CFConstantStringClassReference_110ecae18;
}



/* Entry: 107fb85c4; end: 107fb86cf; -[SCImageProcessVideoCircleCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fb85c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
    goto LAB_107fb86b0;
  }
  puVar4 = PTR_PTR_1126d8a90;
  _objc_opt_class(PTR_PTR_1126d8a90);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_107fb869c:
    bVar3 = false;
  }
  else {
    puStack_38 = PTR_PTR_1126fbfa8;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if (iVar2 == 0) goto LAB_107fb869c;
    fVar6 = (float)*(double *)(param_3 + (long)_DAT_112772b00);
    fVar7 = (float)*(double *)(param_1 + (long)_DAT_112772b00);
    fVar8 = ABS(fVar6 - fVar7);
    fVar6 = ABS(fVar6 + fVar7) * 1.1920929e-07;
    bVar3 = true;
    if ((1.1754944e-38 <= fVar8) && (bVar3 = false, !NAN(fVar8) && !NAN(fVar6))) {
      bVar3 = fVar8 < fVar6;
    }
    if (!bVar3) goto LAB_107fb869c;
    bVar3 = *(long *)(param_3 + (long)_DAT_112772b04) == *(long *)(param_1 + (long)_DAT_112772b04);
  }
  _objc_release(uVar1);
LAB_107fb86b0:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107fb86d0; end: 107fb870b;  */

void FUN_107fb86d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___CIKernel_1126d8a98;
  func_0x00010c086500(PTR__OBJC_CLASS___CIKernel_1126d8a98,param_2,
                      &PTR____CFConstantStringClassReference_110ecae38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137289c8;
  puRam00000001137289c8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb870c; end: 107fb884b; +[SCImageProcessVideoCircleFilter initialize] */

void FUN_107fb870c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___CIFilter_1126c7620;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__kCIAttributeFilterDisplayName_11034ac98;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ecae78;
  uStack_50 = *(undefined8 *)PTR__kCIAttributeFilterCategories_11034ac90;
  uStack_80 = *(undefined8 *)PTR__kCICategoryColorAdjustment_11034ace0;
  uStack_78 = *(undefined8 *)PTR__kCICategoryVideo_11034ad00;
  uStack_70 = *(undefined8 *)PTR__kCICategoryStillImage_11034acf8;
  uStack_68 = *(undefined8 *)PTR__kCICategoryInterlaced_11034ace8;
  uStack_60 = *(undefined8 *)PTR__kCICategoryNonSquarePixels_11034acf0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_48,&uStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1264e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ecae58,param_1,puVar3
                     );
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb884c; end: 107fb885f; +[SCImageProcessVideoCircleFilter filterWithName:] */

void FUN_107fb884c(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb8860; end: 107fb8a9f; -[SCImageProcessVideoCircleFilter customAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb8860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ecae98;
  uVar8 = *(undefined8 *)PTR__kCIAttributeDefault_11034ac88;
  puVar1 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
  uStack_a8 = uVar8;
  func_0x00010c2979a0(0x4092000000000000,0x4092000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)PTR__kCIAttributeType_11034acc8;
  uStack_90 = *(undefined8 *)PTR__kCIAttributeTypePosition_11034acd0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_a0 = uVar7;
  puStack_98 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_98,&uStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ecaeb8;
  uStack_118 = *(undefined8 *)PTR__kCIAttributeMin_11034acb0;
  uStack_110 = *(undefined8 *)PTR__kCIAttributeMax_11034aca8;
  ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185240;
  ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185250;
  uStack_108 = *(undefined8 *)PTR__kCIAttributeSliderMin_11034acc0;
  uStack_100 = *(undefined8 *)PTR__kCIAttributeSliderMax_11034acb8;
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185240;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185250;
  uStack_f0 = *(undefined8 *)PTR__kCIAttributeIdentity_11034aca0;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185260;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185250;
  uStack_b0 = *(undefined8 *)PTR__kCIAttributeTypeScalar_11034acd8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_f8 = uVar8;
  uStack_e8 = uVar7;
  puStack_70 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_e0,&uStack_118,7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ecaed8;
  puVar4 = PTR__OBJC_CLASS___CIColor_1126c9738;
  uStack_128 = uVar8;
  puStack_68 = puVar3;
  func_0x00010bf41660(PTR__OBJC_CLASS___CIColor_1126c9738,param_2,
                      &PTR____CFConstantStringClassReference_110ecaef8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_120 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_120,&uStack_128,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
  func_0x00010c2979a0(0x4092000000000000,0x4092000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + _DAT_112772b10);
  *(undefined **)(puVar1 + _DAT_112772b10) = puVar2;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(puVar1 + _DAT_112772b14);
  *(undefined ***)(puVar1 + _DAT_112772b14) = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185260;
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___CIColor_1126c9738;
  func_0x00010bf41660(PTR__OBJC_CLASS___CIColor_1126c9738,param_2,
                      &PTR____CFConstantStringClassReference_110ecaef8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + _DAT_112772b18);
  *(undefined **)(puVar1 + _DAT_112772b18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107fb8aa0; end: 107fb8b3b; -[SCImageProcessVideoCircleFilter setDefaults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb8aa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
  func_0x00010c2979a0(0x4092000000000000,0x4092000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772b10);
  *(undefined **)(param_1 + _DAT_112772b10) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772b14);
  *(undefined ***)(param_1 + _DAT_112772b14) = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185260;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___CIColor_1126c9738;
  func_0x00010bf41660(PTR__OBJC_CLASS___CIColor_1126c9738,param_2,
                      &PTR____CFConstantStringClassReference_110ecaef8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772b18);
  *(undefined **)(param_1 + _DAT_112772b18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb8b3c; end: 107fb8c7b; -[SCImageProcessVideoCircleFilter outputImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb8b3c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112772b10;
  func_0x00010bdc3660(*(undefined8 *)(param_2 + lVar5));
  uVar6 = param_1;
  func_0x00010bdc3680(*(undefined8 *)(param_2 + lVar5));
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137289c0 != -1) {
    func_0x00010002a2fc(0x1137289c0,&PTR___NSConcreteGlobalBlock_110a16360);
  }
  uVar1 = uRam00000001137289c8;
  _objc_retain(uRam00000001137289c8);
  uVar3 = uVar1;
  func_0x00010bf08ba0(0,0,param_1,uVar6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107fb8c7c; end: 107fb8c7f;  */

void FUN_107fb8c7c(void)

{
  return;
}



/* Entry: 107fb8c80; end: 107fb8cdf; -[SCImageProcessVideoCircleFilter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb8c80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772b18,0);
  _objc_storeStrong(param_1 + _DAT_112772b14,0);
  _objc_storeStrong(param_1 + _DAT_112772b10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772b1c,0);
  return;
}



/* Entry: 107fb8ce0; end: 107fb8d17; +[SCImageProcessCPUVideoCircleCommand commandWithPadding:color:] */

void FUN_107fb8ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00010c032d60(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb8d18; end: 107fb8ea3; -[SCImageProcessCPUVideoCircleCommand initWithPadding:color:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107fb8d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126fbfb0;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar4 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772b20) = param_1;
    *(undefined **)((long)puVar1 + (long)_DAT_112772b24) = param_4;
    puVar2 = puVar1;
    _CGColorSpaceCreateDeviceRGB();
    puVar4 = PTR__OBJC_CLASS___CIContext_1126b3120;
    *(undefined8 **)((long)puVar1 + (long)_DAT_112772b28) = puVar2;
    uStack_78 = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_11034ad20;
    uStack_70 = *(undefined8 *)PTR__kCIContextOutputColorSpace_11034ad10;
    puStack_60 = PTR____kCFBooleanTrue_11034ab68;
    uStack_68 = *(undefined8 *)PTR__kCIContextWorkingColorSpace_11034ad28;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_58 = puVar2;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4f640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182d40(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_opt_class(PTR_PTR_1126d8aa8);
    param_4 = PTR__OBJC_CLASS___CIFilter_1126c7620;
    func_0x00010bfae980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bd60(puVar1);
    puVar4 = param_4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_c0;
  pcStack_98 = FUN_107fb8ea4;
  puStack_b0 = param_4;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _CGColorSpaceRelease(*(undefined8 *)(puVar4 + _DAT_112772b28));
  puStack_b8 = PTR_PTR_1126fbfb0;
  puStack_c0 = puVar4;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_dealloc_112525b20);
  return ppuVar5;
}



/* Entry: 107fb8ea4; end: 107fb8ef3; -[SCImageProcessCPUVideoCircleCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb8ea4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGColorSpaceRelease(*(undefined8 *)(param_1 + _DAT_112772b28));
  puStack_28 = PTR_PTR_1126fbfb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107fb8ef4; end: 107fb8efb; -[SCImageProcessCPUVideoCircleCommand inputConstraint] */

undefined8 FUN_107fb8ef4(void)

{
  return 1;
}



/* Entry: 107fb8efc; end: 107fb93cf; -[SCImageProcessCPUVideoCircleCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_107fb8efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090798f0(param_6,100,9,lVar10,param_7);
  _objc_release(lVar10);
  if ((int)param_6 != 0) {
    uVar1 = param_4;
    _CVPixelBufferGetPixelFormatType();
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)uVar1 == 0x42475241) {
      uVar2 = param_5;
      _CVPixelBufferGetWidth(param_5);
      _CVPixelBufferGetWidth(param_5);
      _CVPixelBufferLockBaseAddress(param_4,0);
      uVar1 = param_4;
      _CVPixelBufferGetWidth(param_4);
      uVar3 = param_4;
      _CVPixelBufferGetHeight(param_4);
      _CVPixelBufferGetBytesPerRow(param_4);
      _CVPixelBufferGetBaseAddress(param_4);
      uVar4 = param_4;
      _CVPixelBufferGetPixelFormatType(param_4);
      uStack_b0 = 0;
      _CVPixelBufferCreate
                (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,(long)(int)uVar1,(long)(int)uVar3
                 ,uVar4,0,&uStack_b0);
      _CVPixelBufferLockBaseAddress(uStack_b0,0);
      _CVPixelBufferGetBaseAddress(uStack_b0);
      _memcpy();
      _CVPixelBufferUnlockBaseAddress(uStack_b0,0);
      _CVPixelBufferUnlockBaseAddress(param_4,0);
      uVar1 = uStack_b0;
      puVar8 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x00010bfe9300(PTR__OBJC_CLASS___CIImage_1126b3128);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      func_0x00010bfad780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b3a0();
      _objc_release(lVar10);
      lVar10 = param_1;
      func_0x00010bfad780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220();
      _objc_release(lVar10);
      lVar10 = param_1;
      func_0x00010bfad780(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
      func_0x00010c2979a0((double)uVar2,(double)param_5,PTR__OBJC_CLASS___CIVector_1126d8aa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(lVar10);
      _objc_release(puVar7);
      _objc_release(lVar10);
      lVar10 = param_1;
      func_0x00010bfad780(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(*(double *)(param_1 + _DAT_112772b20) * -2.0 + 1.0,
                          PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(lVar10);
      _objc_release(puVar7);
      _objc_release(lVar10);
      lVar10 = (long)_DAT_112772b24;
      puVar5 = *(undefined8 **)(param_1 + lVar10);
      _CGColorGetComponents();
      lVar6 = *(long *)(param_1 + lVar10);
      _CGColorGetNumberOfComponents();
      lVar10 = param_1;
      func_0x00010bfad780(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *puVar5;
      uVar12 = puVar5[1];
      uVar3 = uVar11;
      uVar4 = uVar11;
      if (lVar6 != 2) {
        uVar3 = uVar12;
        uVar4 = puVar5[2];
        uVar12 = puVar5[3];
      }
      puVar7 = PTR__OBJC_CLASS___CIColor_1126c9738;
      func_0x00010bf41620(uVar11,uVar3,uVar4,uVar12,PTR__OBJC_CLASS___CIColor_1126c9738);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(lVar10);
      _objc_release(puVar7);
      _objc_release(lVar10);
      lVar10 = param_1;
      func_0x00010bfad780(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar10;
      func_0x00010c0eedc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      func_0x00010bf4e080(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9de20(lVar6);
      func_0x00010c12f600(param_1);
      _objc_release(param_1);
      _CVPixelBufferRelease(uVar1);
      _objc_release(lVar6);
      _objc_release(puVar8);
      ppuVar9 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
      goto LAB_107fb9394;
    }
    if (param_7 != (undefined8 *)0x0) {
      uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      uStack_a0 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110f78ef8;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110ecaf18;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f78f38;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = &PTR____CFConstantStringClassReference_110f78fb8;
      ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd390;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_78 = param_1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = puVar8;
      _objc_release(puVar7);
      _objc_release(param_1);
    }
  }
  ppuVar9 = (undefined **)0x0;
LAB_107fb9394:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail(ppuVar9);
    return &PTR____CFConstantStringClassReference_110ecaf38;
  }
  return ppuVar9;
}



/* Entry: 107fb93d0; end: 107fb93db; -[SCImageProcessCPUVideoCircleCommand commandName] */

undefined ** FUN_107fb93d0(void)

{
  return &PTR____CFConstantStringClassReference_110ecaf38;
}



/* Entry: 107fb93dc; end: 107fb94e7; -[SCImageProcessCPUVideoCircleCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fb93dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
    goto LAB_107fb94c8;
  }
  puVar4 = PTR_PTR_1126d8ab0;
  _objc_opt_class(PTR_PTR_1126d8ab0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_107fb94b4:
    bVar3 = false;
  }
  else {
    puStack_38 = PTR_PTR_1126fbfb0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if (iVar2 == 0) goto LAB_107fb94b4;
    fVar6 = (float)*(double *)(param_3 + (long)_DAT_112772b20);
    fVar7 = (float)*(double *)(param_1 + (long)_DAT_112772b20);
    fVar8 = ABS(fVar6 - fVar7);
    fVar6 = ABS(fVar6 + fVar7) * 1.1920929e-07;
    bVar3 = true;
    if ((1.1754944e-38 <= fVar8) && (bVar3 = false, !NAN(fVar8) && !NAN(fVar6))) {
      bVar3 = fVar8 < fVar6;
    }
    if (!bVar3) goto LAB_107fb94b4;
    bVar3 = *(long *)(param_3 + (long)_DAT_112772b24) == *(long *)(param_1 + (long)_DAT_112772b24);
  }
  _objc_release(uVar1);
LAB_107fb94c8:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107fb94e8; end: 107fb94f7; -[SCImageProcessCPUVideoCircleCommand context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb94e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772b2c);
}



/* Entry: 107fb94f8; end: 107fb9537; -[SCImageProcessCPUVideoCircleCommand setContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb94f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772b2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb9538; end: 107fb9547; -[SCImageProcessCPUVideoCircleCommand filter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb9538(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772b30);
}



/* Entry: 107fb9548; end: 107fb9587; -[SCImageProcessCPUVideoCircleCommand setFilter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb9548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772b30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb9588; end: 107fb95c7; -[SCImageProcessCPUVideoCircleCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb9588(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772b30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772b2c,0);
  return;
}



/* Entry: 107fb95c8; end: 107fb964f; +[SCSpectaclesImageProcessCommandFactoryImpl shared] */

void FUN_107fb95c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107fb9650;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137289d8 != -1) {
    func_0x00010002a2fc(0x1137289d8,&puStack_48);
  }
  uVar1 = uRam00000001137289d0;
  _objc_retain(uRam00000001137289d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fb9650; end: 107fb9677;  */

void FUN_107fb9650(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137289d0;
  uRam00000001137289d0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb9678; end: 107fb96f7; -[SCSpectaclesImageProcessCommandFactoryImpl cardboardHorizontalDisparityForRenderTargetWithPixelWidth:] */

double FUN_107fb9678(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  param_1 = param_1 * dVar2;
  func_0x00010c248520(uRam00000001138466e8);
  _objc_release(puVar1);
  return -28.295407279034997 / ((param_1 / (double)SUB84(dVar2,0)) * 25.4) + 0.5;
}



/* Entry: 107fb96f8; end: 107fb972b; -[SCSpectaclesImageProcessCommandFactoryImpl monoRectifiedToCardboardRGBCommandWithStereoCamera:] */

void FUN_107fb96f8(void)

{
  _objc_alloc(PTR_PTR_1126d8a80);
  func_0x00010c04c5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb972c; end: 107fb9863; -[SCSpectaclesImageProcessCommandFactoryImpl lagunaRGBCommandWithConfig:] */

void FUN_107fb972c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107fb9864;
  uStack_30 = 0x107fb9874;
  uStack_28 = 0;
  func_0x00010c0bf800(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fb9864; end: 107fb987b;  */

void FUN_107fb9864(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107fb987c; end: 107fb98c7;  */

void FUN_107fb987c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8ab8;
  _objc_alloc();
  func_0x00010c04c5e0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb98c8; end: 107fb9943;  */

void FUN_107fb98c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8ac0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bf28e60(param_2);
  _objc_release(param_2);
  func_0x00010c04c5e0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb9944; end: 107fb99fb;  */

void FUN_107fb9944(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = param_1;
  func_0x00010b6fc108();
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&PTR_PTR_110a163f0)[uVar1];
    _objc_alloc();
    func_0x00010c04c5e0();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107fb99fc; end: 107fb9b33; -[SCSpectaclesImageProcessCommandFactoryImpl rectifiedRGBCommandWithConfig:] */

void FUN_107fb99fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107fb9864;
  uStack_30 = 0x107fb9874;
  uStack_28 = 0;
  func_0x00010c0bf800(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fb9b34; end: 107fb9b7f;  */

void FUN_107fb9b34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8ac8;
  _objc_alloc();
  func_0x00010c04c5e0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb9b80; end: 107fb9c83;  */

void FUN_107fb9b80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d8ae0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_4);
  uVar3 = param_4;
  func_0x00010beffa20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28e60(param_4);
  _objc_release(param_4);
  func_0x00010c027ca0(param_1,param_2);
  _objc_release(param_5);
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb9c84; end: 107fb9d1b;  */

void FUN_107fb9c84(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8ad0;
  _objc_alloc();
  func_0x00010c04c5e0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb9d1c; end: 107fb9db3; -[SCSpectaclesImageProcessCommandFactoryImpl videoCircleCommandWithConfig:] */

void FUN_107fb9d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d8a90;
  _objc_retain(param_4);
  func_0x00010c0f0ba0(param_4);
  uVar1 = param_4;
  func_0x00010bf40c40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc0fe0();
  func_0x00010bf41de0(param_1,puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fb9db4; end: 107fb9e4b; -[SCSpectaclesImageProcessCommandFactoryImpl videoCircleCPUCommandWithConfig:] */

void FUN_107fb9db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d8ab0;
  _objc_retain(param_4);
  func_0x00010c0f0ba0(param_4);
  uVar1 = param_4;
  func_0x00010bf40c40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc0fe0();
  func_0x00010bf41de0(param_1,puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fb9e4c; end: 107fb9e57;  */

void FUN_107fb9e4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d1390,PTR_s_shared_1126687d0);
  return;
}



/* Entry: 107fb9e58; end: 107fb9e93; -[SCSpectaclesImageProcessServiceProvider end] */

void FUN_107fb9e58(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fbfb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb9e94; end: 107fb9ea3; -[SCSpectaclesImageProcessServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb9e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112772b34);
  return;
}



/* Entry: 107fb9ea4; end: 107fb9efb;  */

undefined1  [16] FUN_107fb9ea4(double param_1,double param_2,double param_3,long param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  if (param_1 != 0.0) {
    fVar1 = (float)param_2;
    _hypotf(fVar1,(float)param_3);
    param_2 = (double)fVar1 / param_1;
    param_3 = param_2;
    if (param_4 != 0) {
      param_3 = param_2 + param_2;
    }
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 107fb9efc; end: 107fba153;  */

void FUN_107fb9efc(undefined8 param_1,double param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_5;
  dVar11 = param_2;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uVar10 = 0xc2000000;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107fba154;
  puStack_a8 = &UNK_110a16448;
  uStack_98 = param_1;
  dStack_90 = param_2;
  uStack_88 = param_3;
  _objc_retain(param_6);
  ppuVar1 = &puStack_c0;
  uStack_a0 = param_6;
  _objc_retainBlock();
  if (param_5 == 0) {
    lVar6 = param_4;
    (*(code *)ppuVar1[2])(ppuVar1,param_4,0);
  }
  else {
    func_0x00010c23d0a0(param_4);
    func_0x00010c23d0a0(param_4);
    puVar2 = PTR_PTR_1126d1390;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c087c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bf508;
    _objc_alloc(PTR_PTR_1126bf508);
    puVar4 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c680(uVar10,dVar11 * 0.5,puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c2505e0(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_a0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf5c820(*(undefined8 *)(param_4 + 0x28),lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_4 + 0x20);
  lVar7 = lVar6;
  func_0x000108544668(*(double *)(param_4 + 0x30) / *(double *)(param_4 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14e280(*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(lVar9,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107fba154; end: 107fba30b;  */

void FUN_107fba154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf5c820(*(undefined8 *)(param_1 + 0x28),param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x000108544668(*(double *)(param_1 + 0x30) / *(double *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14e280(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fba30c; end: 107fba5cf;  */

void FUN_107fba30c(ulong param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_6;
  _objc_retain();
  if ((param_1 != 0) && (param_6 != 0)) {
    FUN_107fba730();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11c420(param_1);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf4b900();
    _objc_release(puVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      uVar4 = param_1;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      uVar7 = uVar5;
      _objc_opt_isKindOfClass();
      uVar4 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      if (uVar4 != 0) {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_107fba5d0;
        puStack_a0 = &UNK_11094c478;
        _objc_retain(uVar5);
        uStack_98 = uVar4;
        _objc_retain(param_6);
        lStack_78 = param_6;
        _objc_retain(param_2);
        puStack_90 = param_2;
        _objc_retain(param_5);
        uStack_88 = param_5;
        _objc_retain(param_4);
        ppuVar8 = &puStack_b8;
        uStack_80 = param_4;
        _objc_retainBlock(ppuVar8);
        uVar10 = param_3;
        func_0x00010c269d40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_70 = uVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb4fc0(uVar10);
        _objc_release(puVar2);
        _objc_release(uVar10);
        _objc_release(ppuVar8);
        _objc_release(uStack_80);
        _objc_release(uStack_88);
        _objc_release(puStack_90);
        _objc_release(lStack_78);
        _objc_release(uStack_98);
      }
      _objc_release(uVar4);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    lVar9 = *(long *)(param_1 + 0x40);
    (**(code **)(lVar9 + 0x10))();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdb40);
    lVar1 = lVar9;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar9);
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c10f940(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar2);
      _objc_release(uVar10);
      lVar1 = lVar3;
      func_0x00010bf23f20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bfe63a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar10);
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107fba5d0; end: 107fba727;  */

void FUN_107fba5d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    (**(code **)(lVar1 + 0x10))();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdb40);
    lVar2 = lVar1;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c10f940(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar4);
      _objc_release(uVar5);
      lVar2 = lVar3;
      func_0x00010bf23f20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bfe63a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fba728; end: 107fba72f;  */

void FUN_107fba728(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf62410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoryMembersScopeServices_1125b62a8);
  return;
}



/* Entry: 107fba730; end: 107fba773;  */

void FUN_107fba730(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = ppuRam00000001137289e0;
  if (ppuRam00000001137289e0 == (undefined **)0x0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111182cd8;
    ppuRam00000001137289e0 = &PTR__OBJC_CLASS___NSConstantArray_111182cd8;
    _objc_release(0);
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fba774; end: 107fba7c7; +[SCUnlockablesContextBasedSelector emojiFriendContextMap] */

void FUN_107fba774(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137289f0 != -1) {
    func_0x00010002a2fc(0x1137289f0,&PTR___NSConcreteGlobalBlock_110a16498);
  }
  uVar1 = uRam00000001137289e8;
  _objc_retain(uRam00000001137289e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fba7c8; end: 107fbaaa3;  */

undefined1 * FUN_107fba7c8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 **ppuVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  int in_w5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dc5118;
  puVar1 = (undefined1 *)0x26bb4f;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dc50f8;
  uVar2 = 0x10082;
  puStack_138 = puVar1;
  puStack_d0 = puVar1;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dc50b8;
  uVar3 = 0x844;
  uStack_140 = uVar2;
  uStack_c8 = uVar2;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dc5178;
  uVar4 = 0x4b5bba8;
  uStack_c0 = uVar3;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dc5158;
  uVar5 = 0xffffffffccc95128;
  uStack_b8 = uVar4;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dc50d8;
  uVar6 = 0x1dd29253;
  uStack_b0 = uVar5;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dc5138;
  uVar7 = 0x6a8984f;
  uStack_a8 = uVar6;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dc5198;
  uVar8 = 0x41ce193;
  uStack_a0 = uVar7;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ecaf58;
  uVar9 = 0x41ce193;
  uStack_98 = uVar8;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ecaf78;
  uVar10 = 0x41ce193;
  uStack_90 = uVar9;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ecafb8;
  uVar11 = 0x5d28a877;
  uStack_88 = uVar10;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ecaf98;
  uVar12 = 0x5d28a877;
  uStack_80 = uVar11;
  func_0x00010b79bc28();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &puStack_d0;
  uVar18 = SUB81(&ppuStack_130,0);
  uVar19 = 0xc;
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_78 = uVar12;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001137289e8;
  puRam00000001137289e8 = puVar13;
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_140);
  puVar1 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar14 = &puStack_1a0;
  pcStack_148 = FUN_107fbaaa4;
  uStack_190 = uVar8;
  uStack_188 = uVar7;
  uStack_180 = uVar6;
  uStack_178 = uVar5;
  uStack_170 = uVar4;
  uStack_168 = uVar3;
  uStack_160 = uVar12;
  uStack_158 = uVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puStack_198 = PTR_PTR_1126fbfc0;
  puStack_1a0 = puVar1;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
  if (ppuVar14 != (undefined1 **)0x0) {
    func_0x00010c19be80(ppuVar14);
    *(undefined1 *)((long)ppuVar14 + 0x19) = uVar18;
    *(undefined1 *)((long)ppuVar14 + 0x1a) = uVar19;
    _objc_retain(in_x6);
    uVar2 = *(undefined8 *)((long)ppuVar14 + 0x20);
    *(undefined8 *)((long)ppuVar14 + 0x20) = in_x6;
    _objc_release(uVar2);
    puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puVar1 = (undefined1 *)ppuVar14;
    func_0x00010becfb20(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar13);
    _objc_release(puVar1);
    puVar1 = (undefined1 *)ppuVar14;
    func_0x00010be19280(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar13);
    _objc_release(puVar1);
    puVar1 = (undefined1 *)ppuVar14;
    func_0x00010bdd9180(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar13);
    _objc_release(puVar1);
    puVar1 = (undefined1 *)ppuVar14;
    func_0x00010be5ecc0(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar13);
    _objc_release(puVar1);
    puVar1 = (undefined1 *)ppuVar14;
    func_0x00010beea300(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar13);
    _objc_release(puVar1);
    puVar1 = (undefined1 *)ppuVar14;
    func_0x00010be4b1a0(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar13);
    _objc_release(puVar1);
    _objc_retain(puVar13);
    uVar2 = *(undefined8 *)((long)ppuVar14 + 0x10);
    *(undefined **)((long)ppuVar14 + 0x10) = puVar13;
    _objc_release(uVar2);
    puVar15 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    if (in_w5 != 0) {
      func_0x00010befa120(puVar15);
    }
    puVar16 = puVar15;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)ppuVar14 + 0x28);
    *(undefined **)((long)ppuVar14 + 0x28) = puVar16;
    _objc_release(uVar2);
    _objc_retain(in_x7);
    uVar2 = *(undefined8 *)((long)ppuVar14 + 0x30);
    *(undefined8 *)((long)ppuVar14 + 0x30) = in_x7;
    _objc_release(uVar2);
    _objc_release(puVar15);
    _objc_release(puVar13);
  }
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(ppuVar17);
  return (undefined1 *)ppuVar14;
}



/* Entry: 107fbaaa4; end: 107fbad3f; -[SCUnlockablesContextBasedSelector initWithFilterContextData:ucoEnabled:colorLensesEnabled:shouldRelaxCameraFiltering:friendmojiDataProvider:allowlistedFilterIds:] */

undefined1 *
FUN_107fbaaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbfc0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c19be80(puVar1);
    *(undefined1 *)((long)puVar1 + 0x19) = param_4;
    *(undefined1 *)((long)puVar1 + 0x1a) = param_5;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010becfb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be19280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bdd9180(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be5ecc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010beea300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be4b1a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    if (param_6 != 0) {
      func_0x00010befa120(puVar5);
    }
    puVar6 = puVar5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fbad40; end: 107fbafd7; -[SCUnlockablesContextBasedSelector _triggerContext] */

void FUN_107fbad40(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  uVar5 = param_1;
  func_0x00010bfadbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_1;
    func_0x00010bfadbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    if (uVar2 == 0) {
      uVar5 = 0xfffffffffe10ceba;
      func_0x00010b79d94c(0xfffffffffe10ceba);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar5);
    }
    else {
      uVar2 = param_1;
      func_0x00010bfadbc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfb9b80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0b8620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = uVar5;
      func_0x00010bf529e0();
      *(bool *)(param_1 + 0x18) = uVar2 != 0;
      uVar2 = param_1;
      func_0x00010bfadbc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c077e60();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        func_0x00010bfadbc0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010bfb9b80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf529e0();
        _objc_release(uVar2);
        _objc_release(param_1);
        uVar6 = 0xffffffff9b5ba67c;
        if (uVar3 != 1) {
          uVar6 = 0x6b166938;
        }
      }
      else {
        uVar6 = 0xfffffffff89ddef5;
      }
      func_0x00010b79d94c(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar6);
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fbafd8; end: 107fbb46f; -[SCUnlockablesContextBasedSelector _friendContext] */

void FUN_107fbafd8(ulong param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  uVar6 = param_1;
  func_0x00010bfadbc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    uVar7 = param_1;
    func_0x00010bfadbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfb9b80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf529e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release();
    if (uVar9 != 0) {
      uVar6 = param_1;
      func_0x00010bfadbc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c077de0();
      if ((int)uVar8 == 0) {
        uVar8 = param_1;
        func_0x00010bfadbc0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar9;
        func_0x00010c077e60();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release();
        if ((uVar16 & 1) != 0) goto LAB_107fbb430;
        uVar7 = param_1;
        func_0x00010bfadbc0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfb9b80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar8;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar7);
        uVar10 = 0x6e512071;
        func_0x00010b79bc28(0x6e512071);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar10);
        puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010901cdb0(uVar6,puVar11);
        _objc_release(puVar11);
        if ((int)uVar7 != 0) {
          uVar10 = 0x6e63527d;
          func_0x00010b79bc28(0x6e63527d);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar10);
        }
        puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
        uVar7 = uVar6;
        func_0x00010901e044(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf65820();
        _objc_release(uVar7);
        if ((long)puVar11 < 4) {
          uVar10 = 0xffffffffcfe19e3d;
          func_0x00010b79bc28(0xffffffffcfe19e3d);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar10);
        }
        uVar7 = uVar6;
        func_0x00010bfb9b40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf529e0();
        _objc_release(uVar7);
        if (uVar8 != 0) {
          uVar8 = param_1;
          _objc_opt_class();
          func_0x00010bf8e5c0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
          uVar21 = 0;
          uVar22 = 0;
          uVar23 = 0;
          uVar24 = 0;
          uVar25 = 0;
          uVar9 = uVar6;
          func_0x00010bfb9b40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar9;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (uVar7 != 0) {
            uVar16 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(uVar9);
              }
              uVar17 = *(undefined8 *)(uVar16 * 8);
              uVar10 = uVar17;
              func_0x00010bf33560(uVar17);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar8;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar10);
              uVar13 = uVar12;
              func_0x00010c08fa60();
              if (uVar13 != 0) {
                func_0x00010befa120(puVar5);
              }
              uVar10 = uVar17;
              func_0x00010bf33560();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar10;
              func_0x00010c0720c0();
              if ((int)uVar14 == 0) {
LAB_107fbb3dc:
                _objc_release(uVar10);
              }
              else {
                func_0x00010bf9c880(uVar17);
                bVar3 = false;
                bVar4 = false;
                bVar1 = NAN((double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18))))))));
                if (!bVar1) {
                  bVar3 = (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18))))))) < 0.0;
                  bVar4 = (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18))))))) == 0.0;
                }
                if (bVar4 || bVar3 != bVar1) goto LAB_107fbb3dc;
                uVar14 = *(undefined8 *)(param_1 + 0x20);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf9c880(uVar17);
                uVar17 = uVar14;
                func_0x00010c07fe20();
                _objc_release(uVar14);
                _objc_release(uVar10);
                if ((int)uVar17 != 0) {
                  uVar10 = 0x5d28a877;
                  func_0x00010b79bc28(0x5d28a877);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar5);
                  goto LAB_107fbb3dc;
                }
              }
              _objc_release(uVar12);
              uVar16 = uVar16 + 1;
            } while (uVar7 != uVar16);
            uVar7 = uVar9;
            func_0x00010bf52a60();
          }
          _objc_release(uVar9);
          _objc_release(uVar8);
        }
      }
      else {
        _objc_release(uVar7);
      }
      _objc_release();
    }
  }
LAB_107fbb430:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    uVar7 = uVar6;
    func_0x00010bfadbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 != 0) {
      uVar7 = uVar6;
      func_0x00010bfadbc0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf291e0();
      _objc_release(uVar7);
      puVar11 = PTR_PTR_1126d8af0;
      if (uVar8 != 0) {
        func_0x00010bfadbc0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf291e0();
        func_0x00010bf29260(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar11);
        _objc_release(uVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fbb470; end: 107fbb53f; -[SCUnlockablesContextBasedSelector _cameraContext] */

void FUN_107fbb470(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar2 = param_1;
  func_0x00010bfadbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfadbc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf291e0();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126d8af0;
    if (lVar3 != 0) {
      func_0x00010bfadbc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf291e0();
      func_0x00010bf29260(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fbb540; end: 107fbb60f; -[SCUnlockablesContextBasedSelector _mediaTypeContext] */

void FUN_107fbb540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar2 = param_1;
  func_0x00010bfadbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfadbc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c6c60();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126d8af8;
    if (lVar3 != 0) {
      func_0x00010bfadbc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0c6c60();
      func_0x00010bf29dc0(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fbb610; end: 107fbb6cb; -[SCUnlockablesContextBasedSelector _visualContext] */

void FUN_107fbb610(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bfadbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a0380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar2 == 0) {
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  }
  else {
    func_0x00010bfadbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c2a0380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fbb6cc; end: 107fbb83f; -[SCUnlockablesContextBasedSelector _lensInPreviewContext] */

undefined ** FUN_107fbb6cc(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x22;
  long lVar16;
  undefined **unaff_x23;
  long lVar17;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined ***pppuVar18;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined1 auStack_5a0 [128];
  long lStack_520;
  undefined *puStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined1 ***pppuStack_4c0;
  code *pcStack_4b8;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
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
  undefined *puStack_3b8;
  long lStack_330;
  undefined *puStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [256];
  long lStack_c0;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)((long)param_1 + 0x19) == '\x01') {
    ppuVar14 = param_1;
    func_0x00010bfadbc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar14;
    func_0x00010c094760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar14);
    if (ppuVar2 == (undefined **)0x0) {
      puStack_48 = PTR_PTR_1133c92a8;
      puStack_40 = PTR_PTR_1133c92c8;
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
      _objc_retainAutoreleasedReturnValue();
      param_3 = ppuVar14;
      func_0x00010befa160(ppuVar1);
      unaff_x22 = (undefined **)0x0;
    }
    else {
      ppuVar14 = param_1;
      func_0x00010bfadbc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = ppuVar14;
      func_0x00010c094760();
      _objc_retainAutoreleasedReturnValue();
      param_3 = unaff_x22;
      func_0x00010befa160(ppuVar1);
      _objc_release(unaff_x22);
    }
    _objc_release(ppuVar14);
  }
  if (*(char *)((long)param_1 + 0x1a) == '\x01') {
    param_3 = &PTR____CFConstantStringClassReference_110f23c58;
    func_0x00010befa120(ppuVar1);
  }
  ppuVar14 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_58 = FUN_107fbb840;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_238 = 0;
  puStack_240 = (undefined *)0x0;
  uStack_228 = 0;
  puStack_230 = (undefined8 *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(param_3);
  ppuVar2 = &puStack_240;
  ppuStack_2a0 = param_3;
  func_0x00010bf52a60();
  if (param_3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_230;
    ppuStack_2b8 = unaff_x25;
    ppuStack_2b0 = ppuVar14;
    ppuStack_290 = ppuVar1;
    do {
      unaff_x27 = (undefined **)0x0;
      ppuStack_2a8 = param_3;
      do {
        if ((undefined **)*puStack_230 != unaff_x25) {
          _objc_enumerationMutation(ppuStack_2a0);
        }
        unaff_x23 = *(undefined ***)(lStack_238 + (long)unaff_x27 * 8);
        puVar13 = ppuVar1[6];
        unaff_x24 = unaff_x23;
        func_0x00010bfadea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(puVar13,param_2,unaff_x24);
        _objc_release(unaff_x24);
        if ((int)puVar13 == 0) {
          ppuVar2 = unaff_x23;
          func_0x00010c280fa0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuVar2;
          func_0x00010bf529e0();
          _objc_release(ppuVar2);
          if (unaff_x24 != (undefined **)0x0) {
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            lStack_278 = 0;
            uStack_280 = 0;
            uStack_268 = 0;
            puStack_270 = (undefined8 *)0x0;
            ppuVar14 = unaff_x23;
            ppuStack_298 = unaff_x27;
            func_0x00010c280fa0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar14;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            ppuStack_288 = ppuVar2;
            func_0x00010bf52a60(ppuVar2,param_2,&uStack_280,auStack_1c0,0x10);
            if (ppuVar2 != (undefined **)0x0) {
              unaff_x24 = (undefined **)*puStack_270;
              do {
                ppuVar14 = (undefined **)0x0;
                do {
                  if ((undefined **)*puStack_270 != unaff_x24) {
                    _objc_enumerationMutation(ppuStack_288);
                  }
                  unaff_x28 = *(undefined **)(lStack_278 + (long)ppuVar14 * 8);
                  puVar13 = ppuVar1[5];
                  func_0x00010bf4b900(puVar13,param_2,unaff_x28);
                  if (((ulong)puVar13 & 1) == 0) {
                    ppuVar3 = unaff_x23;
                    func_0x00010c280fa0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar15 = ppuVar3;
                    func_0x00010c0dff20();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar3);
                    ppuVar4 = (undefined **)ppuVar1[2];
                    func_0x00010c0dff20(ppuVar4,param_2,unaff_x28);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar3 = ppuVar15;
                    func_0x00010bf529e0();
                    if (ppuVar3 != (undefined **)0x0) {
                      ppuVar3 = unaff_x23;
                      if (ppuVar4 == (undefined **)0x0) {
                        ppuStack_1d0 = &PTR____CFConstantStringClassReference_110ecafd8;
                        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        puStack_1c8 = unaff_x28;
                        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                                            &puStack_1c8,&ppuStack_1d0,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bfadea0(unaff_x23);
                        _objc_retainAutoreleasedReturnValue();
                      }
                      else {
                        ppuVar5 = unaff_x23;
                        func_0x00010c280fa0(unaff_x23);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar6 = ppuVar5;
                        func_0x00010c0dff20();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x22 = ppuVar4;
                        func_0x00010c069880(ppuVar4,param_2,ppuVar6);
                        ppuVar1 = ppuStack_290;
                        _objc_release(ppuVar6);
                        _objc_release(ppuVar5);
                        if (((ulong)unaff_x22 & 1) != 0) goto LAB_107fbba98;
                        ppuStack_200 = &PTR____CFConstantStringClassReference_110ecaff8;
                        ppuVar14 = ppuVar4;
                        func_0x00010bf6e340();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_1f8 = &PTR____CFConstantStringClassReference_110ecb018;
                        ppuStack_1e8 = ppuVar14;
                        func_0x00010c280fa0();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar2 = ppuVar3;
                        func_0x00010c0dff20();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_1f0 = &PTR____CFConstantStringClassReference_110ecb038;
                        unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        ppuStack_1e0 = ppuVar2;
                        puStack_1d8 = unaff_x28;
                        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                                            &ppuStack_1e8,&ppuStack_200,3);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bfadea0(unaff_x23);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release();
                        _objc_release(unaff_x22);
                        ppuVar1 = ppuStack_290;
                        _objc_release(ppuVar2);
                      }
                      _objc_release(ppuVar3);
                      _objc_release(ppuVar14);
                      _objc_release(ppuVar4);
                      _objc_release(ppuVar15);
                      _objc_release(ppuStack_288);
                      ppuVar14 = ppuStack_2b0;
                      unaff_x25 = ppuStack_2b8;
                      param_3 = ppuStack_2a8;
                      unaff_x27 = ppuStack_298;
                      goto LAB_107fbbb58;
                    }
LAB_107fbba98:
                    _objc_release(ppuVar4);
                    _objc_release(ppuVar15);
                  }
                  ppuVar14 = (undefined **)((long)ppuVar14 + 1);
                } while (ppuVar2 != ppuVar14);
                ppuVar2 = ppuStack_288;
                func_0x00010bf52a60(ppuStack_288,param_2,&uStack_280,auStack_1c0,0x10);
              } while (ppuVar2 != (undefined **)0x0);
            }
            _objc_release(ppuStack_288);
            ppuVar14 = ppuStack_2b0;
            unaff_x25 = ppuStack_2b8;
            param_3 = ppuStack_2a8;
            unaff_x27 = ppuStack_298;
          }
          ppuVar2 = unaff_x23;
          func_0x00010c06d3a0();
          if ((int)ppuVar2 == 0) goto LAB_107fbbb4c;
          ppuVar2 = unaff_x23;
          func_0x00010c280f00();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = 0xffffffffec934f6f;
          func_0x00010b79d9b8(0xffffffffec934f6f);
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = ppuVar2;
          func_0x00010bf4b900(ppuVar2,param_2,uVar7);
          ppuVar1 = ppuStack_290;
          _objc_release(uVar7);
          _objc_release(ppuVar2);
          if (((int)unaff_x22 == 0) || (((ulong)ppuVar1[3] & 1) != 0)) goto LAB_107fbbb4c;
          func_0x00010bfadea0(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        else {
LAB_107fbbb4c:
          func_0x00010befa120(ppuVar14,param_2,unaff_x23);
        }
LAB_107fbbb58:
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (unaff_x27 != param_3);
      ppuVar2 = &puStack_240;
      param_3 = ppuStack_2a0;
      func_0x00010bf52a60();
      unaff_x26 = (undefined **)0x0;
    } while (param_3 != (undefined **)0x0);
  }
  ppuVar3 = ppuStack_2a0;
  _objc_release(ppuStack_2a0);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuStack_2d8 = ppuVar3;
  pcStack_2c8 = FUN_107fbbd24;
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_320 = unaff_x28;
  ppuStack_318 = unaff_x27;
  ppuStack_310 = unaff_x26;
  ppuStack_308 = unaff_x25;
  ppuStack_300 = unaff_x24;
  ppuStack_2f8 = unaff_x23;
  ppuStack_2f0 = unaff_x22;
  ppuStack_2e8 = ppuVar14;
  ppuStack_2e0 = ppuVar1;
  ppuStack_2d0 = &puStack_60;
  _objc_retain(ppuVar2);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_488 = 0;
  ppuStack_490 = (undefined **)0x0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  ppuStack_498 = ppuVar1;
  _objc_retain(ppuVar2);
  pppuVar12 = &ppuStack_490;
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuStack_4a8 = (undefined **)0x0;
    ppuVar15 = (undefined **)0x0;
    ppuVar4 = (undefined **)0x0;
    ppuVar1 = ppuVar2;
LAB_107fbc34c:
    _objc_release(ppuVar1);
  }
  else {
    ppuVar4 = (undefined **)0x0;
    ppuVar15 = (undefined **)0x0;
    ppuStack_4a8 = (undefined **)0x0;
    lVar16 = *plStack_480;
    ppuStack_4a0 = ppuVar2;
    do {
      ppuVar14 = (undefined **)0x0;
      ppuVar3 = unaff_x26;
      do {
        if (*plStack_480 != lVar16) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x25 = *(undefined ***)(lStack_488 + (long)ppuVar14 * 8);
        ppuVar5 = unaff_x25;
        func_0x00010c06b660();
        if ((int)ppuVar5 == 0) {
          ppuVar5 = unaff_x25;
          func_0x00010c073720();
          if ((int)ppuVar5 == 0) {
            func_0x00010befa120(ppuStack_498,param_2,unaff_x25);
            unaff_x26 = ppuVar3;
          }
          else {
            unaff_x26 = unaff_x25;
            func_0x00010c280f00();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x26 != (undefined **)0x0) {
              ppuVar2 = unaff_x25;
              func_0x00010c280f00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = (undefined *)0xffffffffec934f6f;
              func_0x00010b79d9b8();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar2;
              func_0x00010bf4b900(ppuVar2,param_2,unaff_x28);
              _objc_release(unaff_x28);
              _objc_release(ppuVar2);
              _objc_release(unaff_x26);
              ppuVar3 = unaff_x26;
              if ((int)ppuVar5 != 0) {
                if (ppuStack_4a8 != (undefined **)0x0) {
                  ppuVar3 = unaff_x25;
                  func_0x00010c113c80();
                  ppuVar5 = ppuStack_4a8;
                  func_0x00010c113c80();
                  ppuVar2 = ppuStack_4a8;
                  if ((long)ppuVar3 <= (long)ppuVar5) {
                    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ecb078;
                    ppuVar3 = ppuStack_4a8;
                    func_0x00010bfadea0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    ppuStack_3e8 = &PTR____CFConstantStringClassReference_110e0a798;
                    ppuStack_3e0 = ppuVar3;
                    func_0x00010c113c80(ppuVar2);
                    func_0x00010c0df780(unaff_x26,param_2,ppuVar2);
                    _objc_retainAutoreleasedReturnValue();
                    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                    ppuStack_3d8 = unaff_x26;
                    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                                        &ppuStack_3e0,&ppuStack_3f0,2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfadea0(unaff_x25);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(puVar13);
                    _objc_release(unaff_x26);
                    _objc_release(ppuVar3);
                    ppuVar2 = ppuStack_4a0;
                    goto LAB_107fbbfcc;
                  }
                }
                ppuVar2 = ppuStack_4a8;
                _objc_retain(unaff_x25);
                _objc_release(ppuVar2);
                ppuVar2 = ppuStack_4a0;
                ppuStack_4a8 = unaff_x25;
                goto LAB_107fbbfcc;
              }
            }
            unaff_x26 = ppuVar3;
            if (ppuVar15 != (undefined **)0x0) {
              ppuVar3 = unaff_x25;
              func_0x00010c113c80();
              ppuVar5 = ppuVar15;
              func_0x00010c113c80();
              ppuVar2 = ppuStack_4a0;
              if ((long)ppuVar3 <= (long)ppuVar5) goto LAB_107fbbfcc;
            }
            _objc_retain(unaff_x25);
            _objc_release(ppuVar15);
            ppuVar2 = ppuStack_4a0;
            ppuVar15 = unaff_x25;
          }
        }
        else {
          if (ppuVar4 != (undefined **)0x0) {
            ppuVar3 = unaff_x25;
            func_0x00010c113c80();
            ppuVar5 = ppuVar4;
            func_0x00010c113c80();
            if ((long)ppuVar3 <= (long)ppuVar5) {
              ppuStack_3d0 = &PTR____CFConstantStringClassReference_110ecb058;
              unaff_x26 = ppuVar4;
              func_0x00010bfadea0();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              ppuStack_3c8 = &PTR____CFConstantStringClassReference_110e0a798;
              ppuVar3 = ppuVar4;
              ppuStack_3c0 = unaff_x26;
              func_0x00010c113c80(ppuVar4);
              func_0x00010c0df780(puVar13,param_2,ppuVar3);
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_3b8 = puVar13;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_3c0,
                                  &ppuStack_3d0,2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfadea0(unaff_x25);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(unaff_x28);
              _objc_release(puVar13);
              _objc_release(unaff_x26);
              goto LAB_107fbbfcc;
            }
          }
          _objc_retain(unaff_x25);
          _objc_release(ppuVar4);
          ppuVar4 = unaff_x25;
          unaff_x26 = ppuVar3;
        }
LAB_107fbbfcc:
        ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        ppuVar3 = unaff_x26;
      } while (ppuVar1 != ppuVar14);
      pppuVar12 = &ppuStack_490;
      ppuVar1 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
    _objc_release(ppuVar2);
    unaff_x22 = &PTR____CFConstantStringClassReference_110dbeb18;
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar1 = (undefined **)0x0;
    if (ppuVar15 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_498,param_2,ppuVar15);
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_410 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar1 = ppuVar15;
      func_0x00010c113c80(ppuVar15);
      func_0x00010c0df780(ppuVar14,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_408 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar1 = ppuVar15;
      ppuStack_400 = ppuVar14;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar1;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3f8 = ppuVar3;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_3f8 = unaff_x25;
      }
      pppuVar12 = &ppuStack_400;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(ppuVar1);
      ppuVar2 = ppuStack_4a0;
      _objc_release(ppuVar14);
    }
    if (ppuVar4 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_498,param_2,ppuVar4);
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_430 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar1 = ppuVar4;
      func_0x00010c113c80(ppuVar4);
      func_0x00010c0df780(ppuVar14,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_428 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar1 = ppuVar4;
      ppuStack_420 = ppuVar14;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar1;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_418 = ppuVar3;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_418 = unaff_x25;
      }
      pppuVar12 = &ppuStack_420;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(ppuVar1);
      ppuVar2 = ppuStack_4a0;
      _objc_release(ppuVar14);
    }
    unaff_x27 = ppuStack_4a8;
    if (ppuStack_4a8 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_498,param_2,ppuStack_4a8);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_450 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar14 = unaff_x27;
      func_0x00010c113c80(unaff_x27);
      func_0x00010c0df780(ppuVar1,param_2,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_448 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar14 = unaff_x27;
      ppuStack_440 = ppuVar1;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar14;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_438 = ppuVar3;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_438 = unaff_x25;
      }
      pppuVar12 = &ppuStack_440;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(unaff_x27);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      ppuVar2 = ppuStack_4a0;
      _objc_release(ppuVar14);
      goto LAB_107fbc34c;
    }
    ppuStack_4a8 = (undefined **)0x0;
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar15);
  _objc_release(ppuStack_4a8);
  _objc_release(ppuVar2);
  ppuVar14 = ppuStack_498;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_330) {
    ___stack_chk_fail();
    pcStack_4b8 = FUN_107fbc3bc;
    lStack_520 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_510 = unaff_x28;
    ppuStack_508 = unaff_x27;
    ppuStack_500 = unaff_x26;
    ppuStack_4f8 = unaff_x25;
    ppuStack_4f0 = ppuVar1;
    ppuStack_4e8 = ppuVar4;
    ppuStack_4e0 = unaff_x22;
    ppuStack_4d8 = ppuVar15;
    ppuStack_4d0 = ppuVar2;
    ppuStack_4c8 = ppuVar3;
    pppuStack_4c0 = &ppuStack_2d0;
    _objc_retain(pppuVar12);
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    plStack_5d0 = (long *)0x0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    _objc_retain(pppuVar12);
    pppuVar8 = pppuVar12;
    func_0x00010bf52a60(pppuVar12,param_2,&uStack_5e0,auStack_5a0,0x10);
    if (pppuVar8 != (undefined ***)0x0) {
      lVar16 = *plStack_5d0;
      do {
        pppuVar18 = (undefined ***)0x0;
        do {
          if (*plStack_5d0 != lVar16) {
            _objc_enumerationMutation(pppuVar12);
          }
          lVar17 = *(long *)(lStack_5d8 + (long)pppuVar18 * 8);
          lVar9 = lVar17;
          func_0x00010c280fa0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf529e0();
          _objc_release(lVar10);
          _objc_release(lVar9);
          if (lVar11 != 0) {
            func_0x00010bfadea0(lVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar14,param_2,lVar17);
            _objc_release(lVar17);
          }
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar8 != pppuVar18);
        pppuVar8 = pppuVar12;
        func_0x00010bf52a60(pppuVar12,param_2,&uStack_5e0,auStack_5a0,0x10);
      } while (pppuVar8 != (undefined ***)0x0);
    }
    _objc_release(pppuVar12);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_520) {
      ___stack_chk_fail();
      return pppuVar12[7];
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return ppuVar14;
}



/* Entry: 107fbb840; end: 107fbbd23; -[SCUnlockablesContextBasedSelector filterGeofilters:] */

undefined ** FUN_107fbb840(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x22;
  long lVar15;
  undefined **unaff_x23;
  undefined **ppuVar16;
  long lVar17;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined ***pppuVar18;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [128];
  long lStack_4d0;
  undefined *puStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
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
  undefined *puStack_368;
  long lStack_2e0;
  undefined *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  long lStack_290;
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  long lStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_3);
  ppuVar14 = &puStack_1f0;
  ppuStack_250 = param_3;
  func_0x00010bf52a60();
  if (param_3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_1e0;
    ppuStack_268 = unaff_x25;
    ppuStack_260 = ppuVar1;
    lStack_240 = param_1;
    do {
      unaff_x27 = (undefined **)0x0;
      ppuStack_258 = param_3;
      do {
        if ((undefined **)*puStack_1e0 != unaff_x25) {
          _objc_enumerationMutation(ppuStack_250);
        }
        unaff_x23 = *(undefined ***)(lStack_1e8 + (long)unaff_x27 * 8);
        uVar12 = *(undefined8 *)(param_1 + 0x30);
        unaff_x24 = unaff_x23;
        func_0x00010bfadea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar12,param_2,unaff_x24);
        _objc_release(unaff_x24);
        if ((int)uVar12 == 0) {
          ppuVar14 = unaff_x23;
          func_0x00010c280fa0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuVar14;
          func_0x00010bf529e0();
          _objc_release(ppuVar14);
          if (unaff_x24 != (undefined **)0x0) {
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            lStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            puStack_220 = (undefined8 *)0x0;
            ppuVar14 = unaff_x23;
            ppuStack_248 = unaff_x27;
            func_0x00010c280fa0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = ppuVar14;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            ppuStack_238 = ppuVar1;
            func_0x00010bf52a60(ppuVar1,param_2,&uStack_230,auStack_170,0x10);
            if (ppuVar1 != (undefined **)0x0) {
              unaff_x24 = (undefined **)*puStack_220;
              do {
                ppuVar14 = (undefined **)0x0;
                do {
                  if ((undefined **)*puStack_220 != unaff_x24) {
                    _objc_enumerationMutation(ppuStack_238);
                  }
                  unaff_x28 = *(undefined **)(lStack_228 + (long)ppuVar14 * 8);
                  uVar2 = *(ulong *)(param_1 + 0x28);
                  func_0x00010bf4b900(uVar2,param_2,unaff_x28);
                  if ((uVar2 & 1) == 0) {
                    ppuVar13 = unaff_x23;
                    func_0x00010c280fa0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar3 = ppuVar13;
                    func_0x00010c0dff20();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar13);
                    ppuVar4 = *(undefined ***)(param_1 + 0x10);
                    func_0x00010c0dff20(ppuVar4,param_2,unaff_x28);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar3;
                    func_0x00010bf529e0();
                    if (ppuVar13 != (undefined **)0x0) {
                      ppuVar13 = unaff_x23;
                      if (ppuVar4 == (undefined **)0x0) {
                        ppuStack_180 = &PTR____CFConstantStringClassReference_110ecafd8;
                        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        puStack_178 = unaff_x28;
                        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                                            &puStack_178,&ppuStack_180,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bfadea0(unaff_x23);
                        _objc_retainAutoreleasedReturnValue();
                      }
                      else {
                        ppuVar16 = unaff_x23;
                        func_0x00010c280fa0(unaff_x23);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar5 = ppuVar16;
                        func_0x00010c0dff20();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x22 = ppuVar4;
                        func_0x00010c069880(ppuVar4,param_2,ppuVar5);
                        param_1 = lStack_240;
                        _objc_release(ppuVar5);
                        _objc_release(ppuVar16);
                        if (((ulong)unaff_x22 & 1) != 0) goto LAB_107fbba98;
                        ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ecaff8;
                        ppuVar14 = ppuVar4;
                        func_0x00010bf6e340();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ecb018;
                        ppuStack_198 = ppuVar14;
                        func_0x00010c280fa0();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar1 = ppuVar13;
                        func_0x00010c0dff20();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ecb038;
                        unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        ppuStack_190 = ppuVar1;
                        puStack_188 = unaff_x28;
                        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                                            &ppuStack_198,&ppuStack_1b0,3);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bfadea0(unaff_x23);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release();
                        _objc_release(unaff_x22);
                        param_1 = lStack_240;
                        _objc_release(ppuVar1);
                      }
                      _objc_release(ppuVar13);
                      _objc_release(ppuVar14);
                      _objc_release(ppuVar4);
                      _objc_release(ppuVar3);
                      _objc_release(ppuStack_238);
                      ppuVar1 = ppuStack_260;
                      unaff_x25 = ppuStack_268;
                      param_3 = ppuStack_258;
                      unaff_x27 = ppuStack_248;
                      goto LAB_107fbbb58;
                    }
LAB_107fbba98:
                    _objc_release(ppuVar4);
                    _objc_release(ppuVar3);
                  }
                  ppuVar14 = (undefined **)((long)ppuVar14 + 1);
                } while (ppuVar1 != ppuVar14);
                ppuVar1 = ppuStack_238;
                func_0x00010bf52a60(ppuStack_238,param_2,&uStack_230,auStack_170,0x10);
              } while (ppuVar1 != (undefined **)0x0);
            }
            _objc_release(ppuStack_238);
            ppuVar1 = ppuStack_260;
            unaff_x25 = ppuStack_268;
            param_3 = ppuStack_258;
            unaff_x27 = ppuStack_248;
          }
          ppuVar14 = unaff_x23;
          func_0x00010c06d3a0();
          if ((int)ppuVar14 == 0) goto LAB_107fbbb4c;
          ppuVar14 = unaff_x23;
          func_0x00010c280f00();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = 0xffffffffec934f6f;
          func_0x00010b79d9b8(0xffffffffec934f6f);
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = ppuVar14;
          func_0x00010bf4b900(ppuVar14,param_2,uVar12);
          param_1 = lStack_240;
          _objc_release(uVar12);
          _objc_release(ppuVar14);
          if (((int)unaff_x22 == 0) || ((*(byte *)(param_1 + 0x18) & 1) != 0)) goto LAB_107fbbb4c;
          func_0x00010bfadea0(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        else {
LAB_107fbbb4c:
          func_0x00010befa120(ppuVar1,param_2,unaff_x23);
        }
LAB_107fbbb58:
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (unaff_x27 != param_3);
      ppuVar14 = &puStack_1f0;
      param_3 = ppuStack_250;
      func_0x00010bf52a60();
      unaff_x26 = (undefined **)0x0;
    } while (param_3 != (undefined **)0x0);
  }
  ppuVar13 = ppuStack_250;
  _objc_release(ppuStack_250);
  _objc_release(ppuVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuStack_288 = ppuVar13;
  pcStack_278 = FUN_107fbbd24;
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2d0 = unaff_x28;
  ppuStack_2c8 = unaff_x27;
  ppuStack_2c0 = unaff_x26;
  ppuStack_2b8 = unaff_x25;
  ppuStack_2b0 = unaff_x24;
  ppuStack_2a8 = unaff_x23;
  ppuStack_2a0 = unaff_x22;
  ppuStack_298 = ppuVar1;
  lStack_290 = param_1;
  puStack_280 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_438 = 0;
  ppuStack_440 = (undefined **)0x0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  ppuStack_448 = ppuVar1;
  _objc_retain(ppuVar14);
  pppuVar11 = &ppuStack_440;
  ppuVar1 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuStack_458 = (undefined **)0x0;
    ppuVar4 = (undefined **)0x0;
    ppuVar16 = (undefined **)0x0;
    ppuVar3 = ppuVar14;
LAB_107fbc34c:
    _objc_release(ppuVar3);
  }
  else {
    ppuVar16 = (undefined **)0x0;
    ppuVar4 = (undefined **)0x0;
    ppuStack_458 = (undefined **)0x0;
    lVar15 = *plStack_430;
    ppuStack_450 = ppuVar14;
    do {
      ppuVar13 = (undefined **)0x0;
      ppuVar3 = unaff_x26;
      do {
        if (*plStack_430 != lVar15) {
          _objc_enumerationMutation(ppuVar14);
        }
        unaff_x25 = *(undefined ***)(lStack_438 + (long)ppuVar13 * 8);
        ppuVar5 = unaff_x25;
        func_0x00010c06b660();
        if ((int)ppuVar5 == 0) {
          ppuVar5 = unaff_x25;
          func_0x00010c073720();
          if ((int)ppuVar5 == 0) {
            func_0x00010befa120(ppuStack_448,param_2,unaff_x25);
            unaff_x26 = ppuVar3;
          }
          else {
            unaff_x26 = unaff_x25;
            func_0x00010c280f00();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x26 != (undefined **)0x0) {
              ppuVar14 = unaff_x25;
              func_0x00010c280f00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = (undefined *)0xffffffffec934f6f;
              func_0x00010b79d9b8();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar14;
              func_0x00010bf4b900(ppuVar14,param_2,unaff_x28);
              _objc_release(unaff_x28);
              _objc_release(ppuVar14);
              _objc_release(unaff_x26);
              ppuVar3 = unaff_x26;
              if ((int)ppuVar5 != 0) {
                if (ppuStack_458 != (undefined **)0x0) {
                  ppuVar3 = unaff_x25;
                  func_0x00010c113c80();
                  ppuVar5 = ppuStack_458;
                  func_0x00010c113c80();
                  ppuVar14 = ppuStack_458;
                  if ((long)ppuVar3 <= (long)ppuVar5) {
                    ppuStack_3a0 = &PTR____CFConstantStringClassReference_110ecb078;
                    ppuVar3 = ppuStack_458;
                    func_0x00010bfadea0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    ppuStack_398 = &PTR____CFConstantStringClassReference_110e0a798;
                    ppuStack_390 = ppuVar3;
                    func_0x00010c113c80(ppuVar14);
                    func_0x00010c0df780(unaff_x26,param_2,ppuVar14);
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                    ppuStack_388 = unaff_x26;
                    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                                        &ppuStack_390,&ppuStack_3a0,2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfadea0(unaff_x25);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(puVar6);
                    _objc_release(unaff_x26);
                    _objc_release(ppuVar3);
                    ppuVar14 = ppuStack_450;
                    goto LAB_107fbbfcc;
                  }
                }
                ppuVar14 = ppuStack_458;
                _objc_retain(unaff_x25);
                _objc_release(ppuVar14);
                ppuVar14 = ppuStack_450;
                ppuStack_458 = unaff_x25;
                goto LAB_107fbbfcc;
              }
            }
            unaff_x26 = ppuVar3;
            if (ppuVar4 != (undefined **)0x0) {
              ppuVar3 = unaff_x25;
              func_0x00010c113c80();
              ppuVar5 = ppuVar4;
              func_0x00010c113c80();
              ppuVar14 = ppuStack_450;
              if ((long)ppuVar3 <= (long)ppuVar5) goto LAB_107fbbfcc;
            }
            _objc_retain(unaff_x25);
            _objc_release(ppuVar4);
            ppuVar14 = ppuStack_450;
            ppuVar4 = unaff_x25;
          }
        }
        else {
          if (ppuVar16 != (undefined **)0x0) {
            ppuVar3 = unaff_x25;
            func_0x00010c113c80();
            ppuVar5 = ppuVar16;
            func_0x00010c113c80();
            if ((long)ppuVar3 <= (long)ppuVar5) {
              ppuStack_380 = &PTR____CFConstantStringClassReference_110ecb058;
              unaff_x26 = ppuVar16;
              func_0x00010bfadea0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              ppuStack_378 = &PTR____CFConstantStringClassReference_110e0a798;
              ppuVar3 = ppuVar16;
              ppuStack_370 = unaff_x26;
              func_0x00010c113c80(ppuVar16);
              func_0x00010c0df780(puVar6,param_2,ppuVar3);
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_368 = puVar6;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_370,
                                  &ppuStack_380,2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfadea0(unaff_x25);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(unaff_x28);
              _objc_release(puVar6);
              _objc_release(unaff_x26);
              goto LAB_107fbbfcc;
            }
          }
          _objc_retain(unaff_x25);
          _objc_release(ppuVar16);
          ppuVar16 = unaff_x25;
          unaff_x26 = ppuVar3;
        }
LAB_107fbbfcc:
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        ppuVar3 = unaff_x26;
      } while (ppuVar1 != ppuVar13);
      pppuVar11 = &ppuStack_440;
      ppuVar1 = ppuVar14;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
    _objc_release(ppuVar14);
    unaff_x22 = &PTR____CFConstantStringClassReference_110dbeb18;
    ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar3 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_448,param_2,ppuVar4);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3c0 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar14 = ppuVar4;
      func_0x00010c113c80(ppuVar4);
      func_0x00010c0df780(ppuVar1,param_2,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3b8 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar3 = ppuVar4;
      ppuStack_3b0 = ppuVar1;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar3;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3a8 = ppuVar13;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_3a8 = unaff_x25;
      }
      pppuVar11 = &ppuStack_3b0;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(ppuVar3);
      ppuVar14 = ppuStack_450;
      _objc_release(ppuVar1);
    }
    if (ppuVar16 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_448,param_2,ppuVar16);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3e0 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar14 = ppuVar16;
      func_0x00010c113c80(ppuVar16);
      func_0x00010c0df780(ppuVar1,param_2,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3d8 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar3 = ppuVar16;
      ppuStack_3d0 = ppuVar1;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar3;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3c8 = ppuVar13;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_3c8 = unaff_x25;
      }
      pppuVar11 = &ppuStack_3d0;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(ppuVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(ppuVar3);
      ppuVar14 = ppuStack_450;
      _objc_release(ppuVar1);
    }
    unaff_x27 = ppuStack_458;
    if (ppuStack_458 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_448,param_2,ppuStack_458);
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_400 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar14 = unaff_x27;
      func_0x00010c113c80(unaff_x27);
      func_0x00010c0df780(ppuVar3,param_2,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3f8 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar1 = unaff_x27;
      ppuStack_3f0 = ppuVar3;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar1;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3e8 = ppuVar13;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_3e8 = unaff_x25;
      }
      pppuVar11 = &ppuStack_3f0;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(unaff_x27);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      ppuVar14 = ppuStack_450;
      _objc_release(ppuVar1);
      goto LAB_107fbc34c;
    }
    ppuStack_458 = (undefined **)0x0;
  }
  _objc_release(ppuVar16);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_458);
  _objc_release(ppuVar14);
  ppuVar1 = ppuStack_448;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e0) {
    ___stack_chk_fail();
    pcStack_468 = FUN_107fbc3bc;
    lStack_4d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_4c0 = unaff_x28;
    ppuStack_4b8 = unaff_x27;
    ppuStack_4b0 = unaff_x26;
    ppuStack_4a8 = unaff_x25;
    ppuStack_4a0 = ppuVar3;
    ppuStack_498 = ppuVar16;
    ppuStack_490 = unaff_x22;
    ppuStack_488 = ppuVar4;
    ppuStack_480 = ppuVar14;
    ppuStack_478 = ppuVar13;
    ppuStack_470 = &puStack_280;
    _objc_retain(pppuVar11);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    plStack_580 = (long *)0x0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    _objc_retain(pppuVar11);
    pppuVar7 = pppuVar11;
    func_0x00010bf52a60(pppuVar11,param_2,&uStack_590,auStack_550,0x10);
    if (pppuVar7 != (undefined ***)0x0) {
      lVar15 = *plStack_580;
      do {
        pppuVar18 = (undefined ***)0x0;
        do {
          if (*plStack_580 != lVar15) {
            _objc_enumerationMutation(pppuVar11);
          }
          lVar17 = *(long *)(lStack_588 + (long)pppuVar18 * 8);
          lVar8 = lVar17;
          func_0x00010c280fa0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf529e0();
          _objc_release(lVar9);
          _objc_release(lVar8);
          if (lVar10 != 0) {
            func_0x00010bfadea0(lVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar1,param_2,lVar17);
            _objc_release(lVar17);
          }
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar7 != pppuVar18);
        pppuVar7 = pppuVar11;
        func_0x00010bf52a60(pppuVar11,param_2,&uStack_590,auStack_550,0x10);
      } while (pppuVar7 != (undefined ***)0x0);
    }
    _objc_release(pppuVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d0) {
      ___stack_chk_fail();
      return pppuVar11[7];
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 107fbbd24; end: 107fbc3bb; -[SCUnlockablesContextBasedSelector enforceFriendFiltersCount:] */

undefined ** FUN_107fbbd24(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined ***pppuVar10;
  undefined **unaff_x19;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **unaff_x22;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined ***pppuVar16;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [128];
  long lStack_260;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_1c8 = 0;
  ppuStack_1d0 = (undefined **)0x0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  ppuStack_1d8 = ppuVar1;
  _objc_retain(param_3);
  pppuVar10 = &ppuStack_1d0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuStack_1e8 = (undefined **)0x0;
    ppuVar12 = (undefined **)0x0;
    ppuVar14 = (undefined **)0x0;
    ppuVar1 = param_3;
  }
  else {
    ppuVar14 = (undefined **)0x0;
    ppuVar12 = (undefined **)0x0;
    ppuStack_1e8 = (undefined **)0x0;
    lVar13 = *plStack_1c0;
    ppuStack_1e0 = param_3;
    do {
      ppuVar11 = (undefined **)0x0;
      ppuVar3 = unaff_x26;
      do {
        if (*plStack_1c0 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x25 = *(undefined ***)(lStack_1c8 + (long)ppuVar11 * 8);
        ppuVar2 = unaff_x25;
        func_0x00010c06b660();
        if ((int)ppuVar2 == 0) {
          ppuVar2 = unaff_x25;
          func_0x00010c073720();
          if ((int)ppuVar2 == 0) {
            func_0x00010befa120(ppuStack_1d8,param_2,unaff_x25);
            unaff_x26 = ppuVar3;
          }
          else {
            unaff_x26 = unaff_x25;
            func_0x00010c280f00();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x26 != (undefined **)0x0) {
              ppuVar3 = unaff_x25;
              func_0x00010c280f00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = (undefined *)0xffffffffec934f6f;
              func_0x00010b79d9b8();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar3;
              func_0x00010bf4b900(ppuVar3,param_2,unaff_x28);
              _objc_release(unaff_x28);
              _objc_release(ppuVar3);
              _objc_release(unaff_x26);
              ppuVar3 = unaff_x26;
              if ((int)ppuVar2 != 0) {
                if (ppuStack_1e8 != (undefined **)0x0) {
                  ppuVar2 = unaff_x25;
                  func_0x00010c113c80();
                  ppuVar4 = ppuStack_1e8;
                  func_0x00010c113c80();
                  ppuVar3 = ppuStack_1e8;
                  if ((long)ppuVar2 <= (long)ppuVar4) {
                    ppuStack_130 = &PTR____CFConstantStringClassReference_110ecb078;
                    ppuVar2 = ppuStack_1e8;
                    func_0x00010bfadea0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    ppuStack_128 = &PTR____CFConstantStringClassReference_110e0a798;
                    ppuStack_120 = ppuVar2;
                    func_0x00010c113c80(ppuVar3);
                    func_0x00010c0df780(unaff_x26,param_2,ppuVar3);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                    ppuStack_118 = unaff_x26;
                    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                                        &ppuStack_120,&ppuStack_130,2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfadea0(unaff_x25);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(puVar5);
                    _objc_release(unaff_x26);
                    _objc_release(ppuVar2);
                    param_3 = ppuStack_1e0;
                    goto LAB_107fbbfcc;
                  }
                }
                ppuVar3 = ppuStack_1e8;
                _objc_retain(unaff_x25);
                _objc_release(ppuVar3);
                param_3 = ppuStack_1e0;
                ppuStack_1e8 = unaff_x25;
                goto LAB_107fbbfcc;
              }
            }
            unaff_x26 = ppuVar3;
            if (ppuVar12 != (undefined **)0x0) {
              ppuVar3 = unaff_x25;
              func_0x00010c113c80();
              ppuVar2 = ppuVar12;
              func_0x00010c113c80();
              param_3 = ppuStack_1e0;
              if ((long)ppuVar3 <= (long)ppuVar2) goto LAB_107fbbfcc;
            }
            _objc_retain(unaff_x25);
            _objc_release(ppuVar12);
            param_3 = ppuStack_1e0;
            ppuVar12 = unaff_x25;
          }
        }
        else {
          if (ppuVar14 != (undefined **)0x0) {
            ppuVar3 = unaff_x25;
            func_0x00010c113c80();
            ppuVar2 = ppuVar14;
            func_0x00010c113c80();
            if ((long)ppuVar3 <= (long)ppuVar2) {
              ppuStack_110 = &PTR____CFConstantStringClassReference_110ecb058;
              unaff_x26 = ppuVar14;
              func_0x00010bfadea0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              ppuStack_108 = &PTR____CFConstantStringClassReference_110e0a798;
              ppuVar3 = ppuVar14;
              ppuStack_100 = unaff_x26;
              func_0x00010c113c80(ppuVar14);
              func_0x00010c0df780(puVar5,param_2,ppuVar3);
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_f8 = puVar5;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_100,
                                  &ppuStack_110,2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfadea0(unaff_x25);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(unaff_x28);
              _objc_release(puVar5);
              _objc_release(unaff_x26);
              goto LAB_107fbbfcc;
            }
          }
          _objc_retain(unaff_x25);
          _objc_release(ppuVar14);
          ppuVar14 = unaff_x25;
          unaff_x26 = ppuVar3;
        }
LAB_107fbbfcc:
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        ppuVar3 = unaff_x26;
      } while (ppuVar1 != ppuVar11);
      pppuVar10 = &ppuStack_1d0;
      ppuVar1 = param_3;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
    _objc_release(param_3);
    unaff_x22 = &PTR____CFConstantStringClassReference_110dbeb18;
    unaff_x19 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar1 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_1d8,param_2,ppuVar12);
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_150 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar1 = ppuVar12;
      func_0x00010c113c80(ppuVar12);
      func_0x00010c0df780(ppuVar11,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_148 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar1 = ppuVar12;
      ppuStack_140 = ppuVar11;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar1;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_138 = unaff_x19;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_138 = unaff_x25;
      }
      pppuVar10 = &ppuStack_140;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(ppuVar1);
      param_3 = ppuStack_1e0;
      _objc_release(ppuVar11);
    }
    if (ppuVar14 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_1d8,param_2,ppuVar14);
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_170 = &PTR____CFConstantStringClassReference_110e0a798;
      ppuVar1 = ppuVar14;
      func_0x00010c113c80(ppuVar14);
      func_0x00010c0df780(ppuVar11,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_168 = &PTR____CFConstantStringClassReference_110dbeb18;
      ppuVar1 = ppuVar14;
      ppuStack_160 = ppuVar11;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar1;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_158 = unaff_x19;
      if (unaff_x25 != (undefined **)0x0) {
        ppuStack_158 = unaff_x25;
      }
      pppuVar10 = &ppuStack_160;
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfadea0(ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(ppuVar1);
      param_3 = ppuStack_1e0;
      _objc_release(ppuVar11);
    }
    unaff_x27 = ppuStack_1e8;
    if (ppuStack_1e8 == (undefined **)0x0) {
      ppuStack_1e8 = (undefined **)0x0;
      goto LAB_107fbc35c;
    }
    func_0x00010befa120(ppuStack_1d8,param_2,ppuStack_1e8);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_190 = &PTR____CFConstantStringClassReference_110e0a798;
    ppuVar11 = unaff_x27;
    func_0x00010c113c80(unaff_x27);
    func_0x00010c0df780(ppuVar1,param_2,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_188 = &PTR____CFConstantStringClassReference_110dbeb18;
    ppuVar11 = unaff_x27;
    ppuStack_180 = ppuVar1;
    func_0x00010c280fa0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar11;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_178 = unaff_x19;
    if (unaff_x25 != (undefined **)0x0) {
      ppuStack_178 = unaff_x25;
    }
    pppuVar10 = &ppuStack_180;
    unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfadea0(unaff_x27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    param_3 = ppuStack_1e0;
    _objc_release(ppuVar11);
  }
  _objc_release(ppuVar1);
LAB_107fbc35c:
  _objc_release(ppuVar14);
  _objc_release(ppuVar12);
  _objc_release(ppuStack_1e8);
  _objc_release(param_3);
  ppuVar11 = ppuStack_1d8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_107fbc3bc;
    lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_250 = unaff_x28;
    ppuStack_248 = unaff_x27;
    ppuStack_240 = unaff_x26;
    ppuStack_238 = unaff_x25;
    ppuStack_230 = ppuVar1;
    ppuStack_228 = ppuVar14;
    ppuStack_220 = unaff_x22;
    ppuStack_218 = ppuVar12;
    ppuStack_210 = param_3;
    ppuStack_208 = unaff_x19;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar10);
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    _objc_retain(pppuVar10);
    pppuVar6 = pppuVar10;
    func_0x00010bf52a60(pppuVar10,param_2,&uStack_320,auStack_2e0,0x10);
    if (pppuVar6 != (undefined ***)0x0) {
      lVar13 = *plStack_310;
      do {
        pppuVar16 = (undefined ***)0x0;
        do {
          if (*plStack_310 != lVar13) {
            _objc_enumerationMutation(pppuVar10);
          }
          lVar15 = *(long *)(lStack_318 + (long)pppuVar16 * 8);
          lVar7 = lVar15;
          func_0x00010c280fa0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf529e0();
          _objc_release(lVar8);
          _objc_release(lVar7);
          if (lVar9 != 0) {
            func_0x00010bfadea0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar11,param_2,lVar15);
            _objc_release(lVar15);
          }
          pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
        } while (pppuVar6 != pppuVar16);
        pppuVar6 = pppuVar10;
        func_0x00010bf52a60(pppuVar10,param_2,&uStack_320,auStack_2e0,0x10);
      } while (pppuVar6 != (undefined ***)0x0);
    }
    _objc_release(pppuVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
      ___stack_chk_fail();
      return pppuVar10[7];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return ppuVar11;
}



/* Entry: 107fbc3bc; end: 107fbc55b; +[SCUnlockablesContextBasedSelector visualContextFilterIds:] */

undefined * FUN_107fbc3bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = *(long *)(lStack_128 + lVar8 * 8);
        lVar3 = lVar6;
        func_0x00010c280fa0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar5 != 0) {
          func_0x00010bfadea0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar6);
          _objc_release(lVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 0x38);
}



/* Entry: 107fbc55c; end: 107fbc563; -[SCUnlockablesContextBasedSelector filterContextData] */

undefined8 FUN_107fbc55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107fbc564; end: 107fbc593; -[SCUnlockablesContextBasedSelector setFilterContextData:] */

void FUN_107fbc564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fbc594; end: 107fbc5f3; -[SCUnlockablesContextBasedSelector .cxx_destruct] */

void FUN_107fbc594(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fbc5f4; end: 107fbc70f; -[SCMainAppStickerPickerLogger initWithSourceType:commonLoggingParamsBuilder:cameoMetricsService:blizzardLogger:valdiReportedMetrics:valdiPickerSessionId:] */

undefined1 *
FUN_107fbc5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbfc8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 200) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined8 *)((long)puVar1 + 0xd0) = param_8;
    _objc_release(uVar2);
    func_0x00010c1397a0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107fbc710; end: 107fbc8df; -[SCMainAppStickerPickerLogger resetStickerSession] */

void FUN_107fbc710(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fbc8e0; end: 107fbc9cb; -[SCMainAppStickerPickerLogger stickerPickerOpened] */

void FUN_107fbc8e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    func_0x00010c1397a0();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    if ((*(byte *)(param_1 + 200) & 1) == 0) {
      puVar1 = PTR_PTR_1126c44c0;
      _objc_opt_new(PTR_PTR_1126c44c0);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf21f60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf31200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179280(puVar1,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010c1db720(puVar1,param_2,*(undefined8 *)(param_1 + 0xd8));
      func_0x00010c206fa0(puVar1,param_2,5);
      func_0x00010c1db7c0(puVar1,param_2,1);
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 107fbc9cc; end: 107fbcd83; -[SCMainAppStickerPickerLogger stickerPickerClosed] */

void FUN_107fbc9cc(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 8) == 3) {
    param_4 = *(undefined8 *)(param_2 + 0xa0);
    func_0x00010be51c60(param_2,param_3,param_4,0xffffffffffffffff);
  }
  else if (*(long *)(param_2 + 8) == 1) {
    param_4 = *(undefined8 *)(param_2 + 0xa0);
    func_0x00010be51880(param_2,param_3,param_4,0xffffffffffffffff);
  }
  puVar1 = param_2;
  func_0x00010be3dee0();
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126c44c8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf21f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1,param_3,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar2);
    func_0x00010c1db720(puVar1,param_3,*(undefined8 *)(param_2 + 0xd8));
    func_0x00010c206fa0(puVar1,param_3,5);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar11 = param_1;
    func_0x00010c26f320(*(undefined8 *)(param_2 + 0x10));
    _objc_release(puVar3);
    func_0x00010c222d40(param_1 - dVar11,puVar1);
    func_0x00010c20bd60(puVar1,param_3,*(undefined8 *)(param_2 + 0x60));
    func_0x00010c20bba0(puVar1,param_3,*(undefined8 *)(param_2 + 0x50));
    func_0x00010c20bd60(puVar1,param_3,*(undefined8 *)(param_2 + 0x58));
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar7 = *(long *)(param_2 + 0x68);
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010bf52a60(lVar7,param_3,&uStack_140,auStack_f8,0x10);
    if (lVar4 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          lVar8 = *(long *)(lStack_138 + lVar10 * 8);
          lVar5 = lVar8;
          func_0x00010c2827c0();
          uVar6 = *(undefined8 *)(param_2 + 0x68);
          func_0x00010c0e00e0(uVar6,param_3,lVar8);
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 < 5) {
            if (lVar5 == 1) {
              uVar2 = uVar6;
              func_0x00010bf529e0(uVar6);
              func_0x00010c20aee0(puVar1,param_3,uVar2);
            }
            else if (lVar5 == 2) {
              uVar2 = uVar6;
              func_0x00010bf529e0(uVar6);
              func_0x00010c20b940(puVar1,param_3,uVar2);
            }
            else if (lVar5 == 3) {
              uVar2 = uVar6;
              func_0x00010bf529e0(uVar6);
              func_0x00010c20a900(puVar1,param_3,uVar2);
            }
          }
          else if (lVar5 == 5) {
            uVar2 = uVar6;
            func_0x00010bf529e0(uVar6);
            func_0x00010c20ad00(puVar1,param_3,uVar2);
          }
          else if (lVar5 == 6) {
            uVar2 = uVar6;
            func_0x00010bf529e0(uVar6);
            func_0x00010c20b200(puVar1,param_3,uVar2);
          }
          else if (lVar5 == 7) {
            uVar2 = uVar6;
            func_0x00010bf529e0(uVar6);
            func_0x00010c20b080(puVar1,param_3,uVar2);
          }
          _objc_release(uVar6);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar7;
        func_0x00010bf52a60(lVar7,param_3,&uStack_140,auStack_f8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar7);
    uVar6 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0xa0)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar6 = uVar2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    param_4 = uVar6;
    func_0x00010be57060(param_2,param_3,uVar6,0xffffffffffffffff);
    _objc_release(uVar6);
    param_2[0xb0] = 0;
    uVar6 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_2 + 0xd8) = 0;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  if (*(long *)(puVar1 + 8) == 0) {
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(puVar1 + 0x40) = param_4;
    _objc_release(uVar6);
    *(long *)(puVar1 + 0x60) = *(long *)(puVar1 + 0x60) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107fbcd84; end: 107fbcdd7; -[SCMainAppStickerPickerLogger setupSearchQuery:] */

void FUN_107fbcd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
    _objc_release(uVar1);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbcdd8; end: 107fbcff7; -[SCMainAppStickerPickerLogger didStartLoadingSticker:superCategoryType:] */

void FUN_107fbcdd8(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 != (undefined *)0x0) && ((*(ulong *)(param_1 + 8) & 0xfffffffffffffffd) == 1)) {
      lVar6 = *(long *)(param_1 + 0xa0);
      _objc_release(puVar1);
      if (lVar6 != param_4) goto LAB_107fbcfdc;
      puVar2 = param_3;
      func_0x00010c27dd80();
      puVar1 = PTR_PTR_1126bac28;
      if (puVar2 == (undefined *)0x3) {
        puVar2 = param_3;
        func_0x00010c2540c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1b9e0(puVar1,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      else {
        puVar1 = param_3;
        func_0x00010c2540c0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126d8b00;
      _objc_alloc(PTR_PTR_1126d8b00);
      func_0x00010c04c860();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar6 = *(long *)(param_1 + 0x88);
      puVar4 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0df840(puVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar6,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (lVar6 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        puVar5 = param_3;
        func_0x00010c27dd80(param_3);
        func_0x00010c0df840(puVar2,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar7,param_2,puVar4,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar4);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar7 = *(undefined8 *)(param_1 + 0x88);
      puVar4 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0df840(puVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar7,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar7);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
LAB_107fbcfdc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbcff8; end: 107fbd34b; -[SCMainAppStickerPickerLogger didShowSticker:superCategoryType:timeToDisplay:indexPath:downloadSource:] */

void FUN_107fbcff8(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_4 != 0) {
    lVar4 = param_4;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    if ((((lVar4 != 0) && (lVar4 = *(long *)(param_2 + 0xd8), _objc_release(), lVar4 != 0)) &&
        (*(long *)(param_2 + 0xa0) == param_5)) &&
       (func_0x00010bdfe8a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7),
       *(long *)(param_2 + 8) == 0)) {
      *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
      lVar4 = *(long *)(param_2 + 0x70);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (lVar4 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        uVar5 = *(undefined8 *)(param_2 + 0x70);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar5,param_3,puVar1,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar3 = *(long *)(param_2 + 0x68);
      lVar4 = param_4;
      func_0x00010c27dd80(param_4);
      func_0x00010c0df840(puVar1,param_3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar3,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (lVar3 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar5 = *(undefined8 *)(param_2 + 0x68);
        lVar4 = param_4;
        func_0x00010c27dd80(param_4);
        func_0x00010c0df840(puVar1,param_3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar5,param_3,puVar2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar2);
      }
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar5 = *(undefined8 *)(param_2 + 0x68);
      lVar4 = param_4;
      func_0x00010c27dd80(param_4);
      func_0x00010c0df840(puVar1,param_3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar5,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      lVar4 = param_4;
      func_0x00010c2540c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5,param_3,lVar4);
      _objc_release(lVar4);
      if (param_1 != -1.0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_2 + 0x78);
        lVar4 = param_4;
        func_0x00010c2540c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar6,param_3,puVar1,lVar4);
        _objc_release(lVar4);
        _objc_release(puVar1);
      }
      if (param_5 == 0) {
        *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x70);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar6,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010befa120(uVar6,param_3,param_4);
      if (param_5 == 2) {
        *(undefined1 *)(param_2 + 0xb1) = 1;
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107fbd34c; end: 107fbd47b; -[SCMainAppStickerPickerLogger superCategoryDidChange:] */

void FUN_107fbd34c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != -1) {
    if (lVar2 == param_3) {
      return;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 3) {
      func_0x00010be51c60(param_1,param_2,lVar2,param_3);
    }
    else if (lVar3 == 1) {
      func_0x00010be51880(param_1,param_2,lVar2,param_3);
    }
    else if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar4,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined8 *)(param_1 + 0xa0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,0,puVar1);
      _objc_release(puVar1);
      uVar5 = uVar4;
      func_0x00010bf00560(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be57060(param_1,param_2,uVar5,param_3);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  *(long *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 107fbd47c; end: 107fbd483; -[SCMainAppStickerPickerLogger searchDidChangeSuperCategory:loadedFromGifMetaSticker:] */

void FUN_107fbd47c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x48) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c262b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_superCategoryDidChange__1126764e8);
  return;
}



/* Entry: 107fbd484; end: 107fbd687; -[SCMainAppStickerPickerLogger logStickerPickerSessionEnded:categoryCellSourceType:searchQuery:index:bitmojiTabVisible:tabSource:stickerPickerType:captureSessionId:hasCameos:] */

void FUN_107fbd484(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined1 param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_10);
  func_0x00010bea1380(param_1,param_2,param_3,param_6);
  lVar1 = param_1;
  func_0x00010be3dee0();
  if ((int)lVar1 == 0) goto LAB_107fbd654;
  func_0x000108d12f1c(param_8);
  lVar1 = param_1;
  func_0x00010be988a0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 == 0)) {
    if (param_3 != 0) goto LAB_107fbd554;
  }
  else {
    func_0x00010be591a0(param_1,param_2,param_3,param_4,lVar1,param_6,param_8,param_9);
LAB_107fbd554:
    func_0x00010be59160(param_1,param_2,param_3,param_4,lVar1,param_6,param_8,param_9,param_10,
                        param_11);
  }
  if (param_5 == 0) {
    bVar7 = false;
  }
  else {
    lVar2 = param_5;
    func_0x00010c08fa60(param_5);
    bVar7 = param_3 != 0 && lVar2 != 0;
  }
  func_0x00010be59140(param_1,param_2,param_3,bVar7,lVar1,param_7,param_8,param_9,param_10);
  func_0x00010bf7e980(param_1,param_2,0,0xffffffffffffffff,param_11);
  if ((param_4 == 0) && ((*(byte *)(param_1 + 0xb1) & 1) == 0)) {
    puVar3 = PTR_PTR_1126bac68;
    func_0x00010bfe4040(PTR_PTR_1126bac68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c254060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
LAB_107fbd654:
  _objc_release(param_10);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbd688; end: 107fbd74f; -[SCMainAppStickerPickerLogger logStickerPickerSearchEvent:results:] */

void FUN_107fbd688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be45520(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be988a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf21f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be59120(param_1,param_2,lVar1,param_4,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbd750; end: 107fbd7d3; -[SCMainAppStickerPickerLogger viewStickerCategoryAtIndex:type:] */

void FUN_107fbd750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3dee0();
  if ((int)lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbd7d4; end: 107fbd8d3; +[SCMainAppStickerPickerLogger logFriendmojiPickerCloseWithSourceType:stickerId:friendmojiType:snapSessionId:mischiefId:blizzardLogger:] */

void FUN_107fbd7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8b08;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1a0620();
  _objc_release(param_4);
  func_0x00010c206c40(puVar1,param_2,param_3);
  func_0x00010c20af40(puVar1,param_2,param_5);
  func_0x00010c205660(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1c8600(puVar1,param_2,param_7);
  _objc_release(param_7);
  uVar2 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c0b2e60(uVar2,param_2,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fbd8d4; end: 107fbdad3; -[SCMainAppStickerPickerLogger _logChatDrawerTabSessionWithSourceTab:destinationTab:] */

void FUN_107fbd8d4(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && (*(long *)(param_1 + 8) == 1)) {
    lVar2 = *(long *)(param_1 + 0x88);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x90);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        lVar2 = *(long *)(param_1 + 0x80);
        func_0x00010bf529e0();
        if (lVar2 == 0) {
          return;
        }
      }
    }
    func_0x00010bb14018();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ecb098;
    if (param_4 != (undefined **)0x0) {
      ppuVar1 = param_4;
    }
    _objc_retain(ppuVar1);
    _objc_release(param_4);
    ppuVar3 = ppuVar1;
    func_0x00010bb14244(ppuVar1);
    _objc_release(ppuVar1);
    puVar4 = PTR_PTR_1126d8b10;
    _objc_alloc_init(PTR_PTR_1126d8b10);
    func_0x00010c1918c0();
    lVar2 = param_1;
    func_0x00010bddcde0(param_1,param_2,*(undefined8 *)(param_1 + 0x80),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b820(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bddcde0(param_1,param_2,*(undefined8 *)(param_1 + 0x88),2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b3e0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bddcde0(param_1,param_2,*(undefined8 *)(param_1 + 0x90),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b300(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bddcde0(param_1,param_2,*(undefined8 *)(param_1 + 0x90),3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b2e0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c20b9e0(puVar4,param_2,param_3);
    func_0x00010c20b9a0(puVar4,param_2,ppuVar3);
    func_0x00010c20ba00(puVar4,param_2,0);
    func_0x00010c20b9c0(puVar4,param_2,0);
    uVar5 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    func_0x00010be93da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 107fbdad4; end: 107fbdc77; -[SCMainAppStickerPickerLogger _logCommentsStickerDrawerSessionWithSourceTab:destinationTab:] */

void FUN_107fbdad4(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && (*(long *)(param_1 + 8) == 3)) {
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x80);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        return;
      }
    }
    func_0x00010bb14018();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ecb098;
    if (param_4 != (undefined **)0x0) {
      ppuVar1 = param_4;
    }
    _objc_retain(ppuVar1);
    _objc_release(param_4);
    ppuVar3 = ppuVar1;
    func_0x00010bb14244(ppuVar1);
    _objc_release(ppuVar1);
    puVar4 = PTR_PTR_1126d8b18;
    _objc_alloc_init(PTR_PTR_1126d8b18);
    lVar2 = param_1;
    func_0x00010bddcde0(param_1,param_2,*(undefined8 *)(param_1 + 0x80),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b820(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bddcde0(param_1,param_2,*(undefined8 *)(param_1 + 0x90),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b300(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bddcde0(param_1,param_2,*(undefined8 *)(param_1 + 0x90),3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b2e0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c20b9e0(puVar4,param_2,param_3);
    func_0x00010c20b9a0(puVar4,param_2,ppuVar3);
    uVar5 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    func_0x00010be93da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 107fbdc78; end: 107fbdf93; -[SCMainAppStickerPickerLogger _logStickerPickerSessionWithSticker:fromSearch:searchQuery:bitmojiTabVisible:sourceTab:stickerPickerType:captureSessionId:] */

void FUN_107fbdc78(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long in_x4;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 in_stack_00000000;
  undefined8 uStack_2a0;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  _objc_retain(in_stack_00000000);
  puVar3 = PTR_PTR_1126d8b20;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  func_0x00010c222d20(puVar3);
  _objc_release(puVar4);
  func_0x00010c1fdce0(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd9c0(puVar3);
  _objc_release(puVar4);
  func_0x00010c226f00(puVar3);
  func_0x00010c226c40(puVar3);
  func_0x00010c1f8b80(puVar3);
  func_0x00010c1f8a00(puVar3);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c20b7e0(puVar3);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c20b980(puVar3);
  func_0x00010c20b880(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar3);
  _objc_release(uVar11);
  _objc_release(uVar5);
  func_0x00010c225dc0(puVar3);
  func_0x00010c20b960(puVar3);
  func_0x00010c20b560(puVar3);
  func_0x00010c179280(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_f0;
  uVar11 = 0x10;
  lVar12 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar8 = *(long *)(lVar14 * 8);
      func_0x00010c067fc0();
      func_0x000108d12ef8();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        func_0x00010befa120(puVar6);
      }
      _objc_release(lVar8);
      lVar14 = lVar14 + 1;
    } while (lVar12 != lVar14);
    puVar4 = auStack_f0;
    uVar11 = 0x10;
    lVar12 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar9 = puVar6;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b800(puVar3);
  _objc_release(puVar9);
  puVar9 = puVar3;
  func_0x00010be177e0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(in_stack_00000000);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar4);
  _objc_retain(uVar11);
  puVar3 = PTR_PTR_1126d8b28;
  _objc_alloc_init();
  func_0x00010c20b880();
  func_0x00010c179280(puVar3);
  func_0x00010c1f8b80(puVar3);
  uVar10 = *(undefined8 *)(in_x4 + 0x20);
  func_0x00010bf21f60(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar10);
  func_0x00010c1f8a00(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(puVar4);
  uVar5 = 0x10;
  puVar6 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar2 = PTR_DAT_1126a5ab0;
      lVar7 = *(long *)((long)puVar13 * 8);
      if (lVar7 != 0) {
        _objc_retain(lVar7);
        lVar14 = lVar7;
        func_0x00010010fab4(lVar7,puVar2);
        _objc_release(lVar7);
        if ((int)lVar14 != 0) {
          func_0x00010c27dd80();
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar6 != puVar13);
    uVar5 = 0x10;
    puVar6 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  func_0x00010c20b6a0(puVar3);
  func_0x00010c20a860(puVar3);
  func_0x00010c20ae60(puVar3);
  func_0x00010c20b8c0(puVar3);
  puVar6 = puVar3;
  func_0x00010be177e0(in_x4);
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    _objc_retain(uVar5);
    _objc_retain(uStack_2a0);
    puVar4 = puVar6;
    func_0x00010c27dd80();
    if (puVar4 == (undefined *)0x4) {
      puVar4 = PTR_PTR_1126d8b30;
      _objc_alloc_init(PTR_PTR_1126d8b30);
      func_0x00010be59180(puVar9);
      _objc_release(puVar4);
    }
    func_0x00010be52120(puVar9);
    puVar4 = PTR_PTR_1126d8b38;
    _objc_alloc_init(PTR_PTR_1126d8b38);
    func_0x00010be59180(puVar9);
    _objc_release(puVar4);
    _objc_release(uStack_2a0);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 107fbdf94; end: 107fbe25f; -[SCMainAppStickerPickerLogger _logStickerPickerSearch:results:captureSessionId:] */

void FUN_107fbdf94(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_160;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126d8b28;
  _objc_alloc_init();
  func_0x00010c20b880();
  func_0x00010c179280(puVar3);
  func_0x00010c1f8b80(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar4);
  func_0x00010c1f8a00(puVar3);
  if (param_4 == (undefined *)0x0) {
    param_4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_4);
  uVar7 = 0x10;
  puVar5 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      puVar2 = PTR_DAT_1126a5ab0;
      lVar9 = *(long *)((long)puVar10 * 8);
      if (lVar9 != 0) {
        _objc_retain(lVar9);
        lVar6 = lVar9;
        func_0x00010010fab4(lVar9,puVar2);
        _objc_release(lVar9);
        if ((int)lVar6 != 0) {
          func_0x00010c27dd80();
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar5 != puVar10);
    uVar7 = 0x10;
    puVar5 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  func_0x00010c20b6a0(puVar3);
  func_0x00010c20a860(puVar3);
  func_0x00010c20ae60(puVar3);
  func_0x00010c20b8c0(puVar3);
  puVar5 = puVar3;
  func_0x00010be177e0(param_1);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(uVar7);
  _objc_retain(uStack_160);
  puVar3 = puVar5;
  func_0x00010c27dd80();
  if (puVar3 == (undefined *)0x4) {
    puVar3 = PTR_PTR_1126d8b30;
    _objc_alloc_init(PTR_PTR_1126d8b30);
    func_0x00010be59180(param_3);
    _objc_release(puVar3);
  }
  func_0x00010be52120(param_3);
  puVar3 = PTR_PTR_1126d8b38;
  _objc_alloc_init(PTR_PTR_1126d8b38);
  func_0x00010be59180(param_3);
  _objc_release(puVar3);
  _objc_release(uStack_160);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107fbe260; end: 107fbe38f; -[SCMainAppStickerPickerLogger _logStickerPickerStickerPick:categoryCellSourceType:searchQuery:index:sourceTab:stickerPickerType:captureSessionId:hasCameos:] */

void FUN_107fbe260(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 == 4) {
    puVar2 = PTR_PTR_1126d8b30;
    _objc_alloc_init(PTR_PTR_1126d8b30);
    func_0x00010be59180(param_1,param_2,puVar2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10);
    _objc_release(puVar2);
  }
  func_0x00010be52120(param_1,param_2,param_3,param_6);
  puVar2 = PTR_PTR_1126d8b38;
  _objc_alloc_init(PTR_PTR_1126d8b38);
  func_0x00010be59180(param_1,param_2,puVar2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                      ,param_10);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


