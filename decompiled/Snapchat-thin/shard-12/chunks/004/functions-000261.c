/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090726e4; end: 109072723; -[SCImageProcessAnimatedTexturesCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090726e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112780c40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112780c3c,0);
  return;
}



/* Entry: 109072724; end: 109072767;  */

void FUN_109072724(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d8a78;
  _objc_alloc();
  func_0x00010c060ac0();
  uVar1 = puRam00000001137307f8;
  puRam00000001137307f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109072768; end: 1090727af; +[SCImageProcessBlendRGBCommand commandWithImage:outputSize:] */

void FUN_109072768(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126bf488);
  func_0x00010c01c220(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090727b0; end: 10907287f; -[SCImageProcessBlendRGBCommand initWithImage:outputSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1090727b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  if (lRam00000001137307f0 != -1) {
    func_0x000107c27d9c(0x1137307f0,&PTR___NSConcreteGlobalBlock_110ad6c18);
  }
  uVar1 = uRam00000001137307f8;
  _objc_retain(uRam00000001137307f8);
  puStack_48 = PTR_PTR_1127001f0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithProgram__11253a1b0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    _CGImageRetain();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112780c68) = param_5;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112780c6c) = param_1;
    ((undefined8 *)((long)puVar2 + (long)_DAT_112780c6c))[1] = param_2;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 109072880; end: 1090728cf; -[SCImageProcessBlendRGBCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109072880(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGImageRelease(*(undefined8 *)(param_1 + _DAT_112780c68));
  puStack_28 = PTR_PTR_1127001f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090728d0; end: 109072a6f; -[SCImageProcessBlendRGBCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1090728d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  long lStack_60;
  undefined *puStack_58;
  long lVar6;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1127001f0;
  plVar4 = &lStack_60;
  lStack_60 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  if ((int)plVar4 != 0) {
    pdVar1 = (double *)(param_1 + _DAT_112780c6c);
    dVar10 = *pdVar1;
    dVar11 = pdVar1[1];
    bVar2 = false;
    if ((dVar10 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar2 = false, !NAN(dVar11) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = dVar11 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar2) {
      func_0x00010c0ef080(param_3);
      *pdVar1 = dVar10;
      pdVar1[1] = dVar11;
    }
    lVar5 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c117700();
    uVar3 = (undefined4)lVar6;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780c70) = uVar3;
    _objc_release(lVar5);
    _CGColorSpaceCreateDeviceRGB();
    dVar10 = pdVar1[1];
    iVar9 = (int)*pdVar1;
    uVar7 = 0;
    _CGBitmapContextCreate(0,(long)iVar9,(long)(int)dVar10,8,(long)(iVar9 << 2),lVar5,1);
    _CGContextDrawImage(0,0,(double)iVar9,(double)(int)dVar10);
    _CGColorSpaceRelease(lVar5);
    _CGBitmapContextGetData(uVar7);
    uVar8 = param_3;
    func_0x00010bf596e0();
    *(int *)(param_1 + _DAT_112780c74) = (int)uVar8;
    _CGContextRelease(uVar7);
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 109072a70; end: 109072be7; -[SCImageProcessBlendRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_109072a70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  lVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,1,lVar1,in_stack_00000018);
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
    _glActiveTexture(0x84c2);
    _glBindTexture(0xde1,*(undefined4 *)(param_3 + _DAT_112780c74));
    _glUniform1i(*(undefined4 *)(param_3 + _DAT_112780c70),2);
    func_0x00010bf89d00(param_1,param_2);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar2;
}



/* Entry: 109072be8; end: 109072c47; -[SCImageProcessBlendRGBCommand unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109072be8(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1127001f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar1 != 0) {
    _glDeleteTextures(1,param_1 + _DAT_112780c74);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 109072c48; end: 109072c53; -[SCImageProcessBlendRGBCommand commandName] */

undefined ** FUN_109072c48(void)

{
  return &PTR____CFConstantStringClassReference_110f1e5d8;
}



/* Entry: 109072c54; end: 109072c5b; -[SCImageProcessBlendRGBCommand inputConstraint] */

undefined8 FUN_109072c54(void)

{
  return 1;
}



/* Entry: 109072c5c; end: 109072d4f; -[SCImageProcessBlendRGBCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_109072c5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar4 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar7 = true;
    goto LAB_109072d04;
  }
  puVar5 = PTR_PTR_1126bf488;
  _objc_opt_class(PTR_PTR_1126bf488);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar3 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  if (uVar3 == 0) {
LAB_109072cf0:
    bVar7 = false;
  }
  else {
    puStack_38 = PTR_PTR_1127001f0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if ((iVar4 == 0) ||
       (*(long *)(param_3 + (long)_DAT_112780c68) != *(long *)(param_1 + (long)_DAT_112780c68)))
    goto LAB_109072cf0;
    pdVar1 = (double *)(param_1 + (long)_DAT_112780c6c);
    pdVar2 = (double *)(uVar3 + (long)_DAT_112780c6c);
    bVar7 = pdVar1[1] == pdVar2[1] && *pdVar1 == *pdVar2;
  }
  _objc_release(uVar3);
LAB_109072d04:
  _objc_release(param_3);
  return bVar7;
}



/* Entry: 109072d50; end: 109072d97; +[SCImageProcessCPUBlendBGRCommand commandWithImage:outputSize:] */

void FUN_109072d50(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126bf490);
  func_0x00010c01c220(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109072d98; end: 109072e17; -[SCImageProcessCPUBlendBGRCommand initWithImage:outputSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109072d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127001f8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CGImageRetain();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780c78) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780c7c) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_112780c7c))[1] = param_2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109072e18; end: 109072e7f; -[SCImageProcessCPUBlendBGRCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109072e18(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112780c78) != 0) {
    _CGImageRelease();
  }
  if (*(long *)(param_1 + _DAT_112780c80) != 0) {
    _free();
  }
  puStack_28 = PTR_PTR_1127001f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109072e80; end: 109072f4f; -[SCImageProcessCPUBlendBGRCommand _generatePixelDataFromImageWithWidth:height:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109072e80(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112780c78;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1;
    _CGColorSpaceCreateDeviceRGB();
    *(ulong *)(param_1 + _DAT_112780c84) = param_3 * 4;
    lVar2 = param_3 * 4 * param_4;
    _calloc(lVar2,1);
    *(long *)(param_1 + _DAT_112780c80) = lVar2;
    _CGBitmapContextCreate();
    _CGContextDrawImage(0,0,(double)param_3,(double)param_4);
    _CGColorSpaceRelease(lVar1);
    _CGContextRelease(lVar2);
    _CGImageRelease(*(undefined8 *)(param_1 + lVar3));
    *(undefined8 *)(param_1 + lVar3) = 0;
  }
  return;
}



/* Entry: 109072f50; end: 1090732b7; -[SCImageProcessCPUBlendBGRCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_109072f50(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
             undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090798f0(param_6,100,1,lVar1,param_7);
  _objc_release(lVar1);
  if ((int)param_6 != 0) {
    uVar2 = param_4;
    _CVPixelBufferGetWidth();
    uVar3 = param_4;
    _CVPixelBufferGetHeight();
    func_0x00010be1b920(param_1);
    _CVPixelBufferLockBaseAddress(param_4,0);
    _CVPixelBufferLockBaseAddress(param_5,0);
    uVar4 = param_4;
    _CVPixelBufferGetBytesPerRow();
    uVar5 = param_4;
    _CVPixelBufferGetBaseAddress();
    uVar6 = param_5;
    _CVPixelBufferGetWidth();
    uVar7 = param_5;
    _CVPixelBufferGetHeight();
    uVar8 = param_5;
    _CVPixelBufferGetBytesPerRow();
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    FUN_109079a74(uVar2,uVar3,uVar4,100,1,lVar1,param_7);
    _objc_release(lVar1);
    if ((int)uVar9 != 0) {
      if ((uVar2 == uVar6) && (uVar3 == uVar7)) {
        uVar6 = param_5;
        _CVPixelBufferGetBaseAddress();
        uVar15 = *(undefined8 *)(param_1 + _DAT_112780c80);
        uVar16 = *(undefined8 *)(param_1 + _DAT_112780c84);
        uVar10 = 0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_110 = 0xc0000000;
        pcStack_108 = FUN_1090733b8;
        puStack_100 = &UNK_110ad6c38;
        uStack_f8 = uVar6;
        uStack_f0 = uVar3 >> 2;
        uStack_e8 = uVar8;
        uStack_e0 = uVar5;
        uStack_d8 = uVar4;
        uStack_d0 = uVar15;
        uStack_c8 = uVar16;
        uStack_c0 = uVar3;
        uStack_b8 = uVar2;
        _dispatch_apply(4,uVar10,&puStack_118);
        _objc_release(uVar10);
        _CVPixelBufferUnlockBaseAddress(param_5,0);
        _CVPixelBufferUnlockBaseAddress(param_4,0);
        ppuVar14 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
        goto LAB_10907327c;
      }
      if (param_7 != (undefined8 *)0x0) {
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
        uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        uStack_a8 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
        ppuStack_90 = &PTR____CFConstantStringClassReference_110f78ef8;
        ppuStack_a0 = &PTR____CFConstantStringClassReference_110f78f38;
        puStack_88 = puVar11;
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_98 = &PTR____CFConstantStringClassReference_110f78fb8;
        ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f20;
        puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        lStack_80 = param_1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_7 = puVar13;
        _objc_release(puVar12);
        _objc_release(param_1);
        _objc_release(puVar11);
      }
    }
  }
  ppuVar14 = (undefined **)0x0;
LAB_10907327c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar14;
  }
  ___stack_chk_fail(ppuVar14);
  return &PTR____CFConstantStringClassReference_110f1e618;
}



/* Entry: 1090732b8; end: 1090732c3; -[SCImageProcessCPUBlendBGRCommand commandName] */

undefined ** FUN_1090732b8(void)

{
  return &PTR____CFConstantStringClassReference_110f1e618;
}



/* Entry: 1090732c4; end: 1090733b7; -[SCImageProcessCPUBlendBGRCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1090732c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar4 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar7 = true;
    goto LAB_10907336c;
  }
  puVar5 = PTR_PTR_1126bf490;
  _objc_opt_class(PTR_PTR_1126bf490);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar3 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  if (uVar3 == 0) {
LAB_109073358:
    bVar7 = false;
  }
  else {
    puStack_38 = PTR_PTR_1127001f8;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if ((iVar4 == 0) ||
       (*(long *)(param_3 + (long)_DAT_112780c78) != *(long *)(param_1 + (long)_DAT_112780c78)))
    goto LAB_109073358;
    pdVar1 = (double *)(param_1 + (long)_DAT_112780c7c);
    pdVar2 = (double *)(uVar3 + (long)_DAT_112780c7c);
    bVar7 = pdVar1[1] == pdVar2[1] && *pdVar1 == *pdVar2;
  }
  _objc_release(uVar3);
LAB_10907336c:
  _objc_release(param_3);
  return bVar7;
}



/* Entry: 1090733b8; end: 1090734df;  */

void FUN_1090733b8(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  byte *pbVar17;
  long lVar18;
  
  lVar14 = *(long *)(param_1 + 0x28);
  uVar8 = lVar14 * param_2;
  uVar9 = lVar14 * (param_2 + 1);
  uVar15 = *(ulong *)(param_1 + 0x58);
  if (uVar15 <= uVar9) {
    uVar9 = uVar15;
  }
  if (uVar8 < uVar9) {
    lVar6 = *(long *)(param_1 + 0x50);
    lVar18 = *(long *)(param_1 + 0x40);
    lVar10 = *(long *)(param_1 + 0x48) + lVar6 * uVar8;
    lVar3 = *(long *)(param_1 + 0x30);
    lVar11 = *(long *)(param_1 + 0x38) + lVar18 * uVar8;
    pcVar12 = (char *)(*(long *)(param_1 + 0x20) + lVar3 * uVar8);
    uVar9 = *(ulong *)(param_1 + 0x60);
    uVar13 = uVar9;
    do {
      if (uVar9 != 0) {
        uVar15 = 0;
        pcVar16 = (char *)(lVar10 + 1);
        pbVar17 = (byte *)(lVar11 + 1);
        pcVar4 = pcVar12;
        uVar9 = uVar13;
        do {
          bVar2 = pcVar16[2];
          if (bVar2 == 0xff) {
            uVar5 = *(undefined4 *)(pcVar16 + -1);
LAB_109073434:
            *(undefined4 *)pcVar4 = uVar5;
          }
          else {
            if (bVar2 == 0) {
              uVar5 = *(undefined4 *)(pbVar17 + -1);
              goto LAB_109073434;
            }
            uVar1 = bVar2 ^ 0xff;
            *pcVar4 = pcVar16[-1] + (char)((pbVar17[-1] * uVar1) / 0xff);
            pcVar4[1] = *pcVar16 + (char)((*pbVar17 * uVar1) / 0xff);
            pcVar4[2] = pcVar16[1] + (char)((pbVar17[1] * uVar1) / 0xff);
            pcVar4[3] = '\0';
            uVar9 = *(ulong *)(param_1 + 0x60);
          }
          uVar15 = uVar15 + 1;
          pcVar4 = pcVar4 + 4;
          pcVar16 = pcVar16 + 4;
          pbVar17 = pbVar17 + 4;
        } while (uVar15 < uVar9);
        lVar18 = *(long *)(param_1 + 0x40);
        lVar14 = *(long *)(param_1 + 0x28);
        lVar3 = *(long *)(param_1 + 0x30);
        lVar6 = *(long *)(param_1 + 0x50);
        uVar15 = *(ulong *)(param_1 + 0x58);
        uVar13 = uVar9;
      }
      pcVar12 = pcVar12 + lVar3;
      lVar11 = lVar11 + lVar18;
      lVar10 = lVar10 + lVar6;
      uVar8 = uVar8 + 1;
      uVar7 = lVar14 * (param_2 + 1);
      if (uVar15 <= uVar7) {
        uVar7 = uVar15;
      }
    } while (uVar8 < uVar7);
  }
  return;
}



/* Entry: 1090734e0; end: 109073517; -[SCImageProcessCPUCommandImpl init] */

void FUN_1090734e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700200;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithProgram__11253a1b0,0);
  return;
}



/* Entry: 109073518; end: 10907351f; -[SCImageProcessCPUCommandImpl isLoaded] */

undefined8 FUN_109073518(void)

{
  return 1;
}



/* Entry: 109073520; end: 109073527; -[SCImageProcessCPUCommandImpl drawWithPixelWidth:pixelHeight:outputWidth:outputHeight:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

undefined8 FUN_109073520(void)

{
  return 1;
}



/* Entry: 109073528; end: 10907352f; -[SCImageProcessCPUCommandImpl unloadWithError:] */

undefined8 FUN_109073528(void)

{
  return 1;
}



/* Entry: 109073530; end: 109073537; -[SCImageProcessCPUCommandImpl isGPUPass] */

undefined8 FUN_109073530(void)

{
  return 0;
}



/* Entry: 109073538; end: 109073543; -[SCImageProcessCPUCommandImpl runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

undefined * FUN_109073538(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 109073544; end: 10907354f; -[SCImageProcessCPUCommandImpl runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

undefined * FUN_109073544(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 109073550; end: 10907355b; -[SCImageProcessCPUCommandImpl commandName] */

undefined ** FUN_109073550(void)

{
  return &PTR____CFConstantStringClassReference_110f1e638;
}



/* Entry: 10907355c; end: 10907358f; -[SCImageProcessCPUCommandImpl isEqual:] */

void FUN_10907355c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700200;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 109073590; end: 109073603; -[SCImageProcessCommandImpl initWithProgram:] */

undefined1 * FUN_109073590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700208;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109073604; end: 10907370b; -[SCImageProcessCommandImpl loadWithContext:error:] */

undefined8 FUN_109073604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = 1;
      goto LAB_1090736f0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010bf436c0();
    if ((int)lVar2 == 0) {
LAB_1090736e4:
      uVar3 = 0;
      goto LAB_1090736f0;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = 0;
    if (lVar2 != 0) {
      func_0x00010c099860();
      if ((int)lVar2 == 0) goto LAB_1090736e4;
      uVar1 = (undefined4)*(undefined8 *)(param_1 + 0x20);
    }
  }
  func_0x00010c117700();
  _glGetAttribLocation();
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c117700();
  _glGetAttribLocation();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c117700();
  _glGetUniformLocation();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c117700();
  _glGetUniformLocation();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar3 = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_1090736f0:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10907370c; end: 109073713; -[SCImageProcessCommandImpl isGPUPass] */

undefined8 FUN_10907370c(void)

{
  return 1;
}



/* Entry: 109073714; end: 10907371b; -[SCImageProcessCommandImpl isUnifiedCameraObjectCompatible] */

undefined8 FUN_109073714(void)

{
  return 0;
}



/* Entry: 10907371c; end: 109073723; -[SCImageProcessCommandImpl isRenderingCompatible] */

undefined8 FUN_10907371c(void)

{
  return 1;
}



/* Entry: 109073724; end: 10907372b; -[SCImageProcessCommandImpl isColorFilter] */

undefined8 FUN_109073724(void)

{
  return 0;
}



/* Entry: 10907372c; end: 109073733; -[SCImageProcessCommandImpl isUnifiedCameraObjectExportable] */

undefined8 FUN_10907372c(void)

{
  return 0;
}



/* Entry: 109073734; end: 10907373b; -[SCImageProcessCommandImpl isPixelBufferInputCompatible] */

undefined8 FUN_109073734(void)

{
  return 0;
}



/* Entry: 10907373c; end: 109073743; -[SCImageProcessCommandImpl appliesInputTransform] */

undefined8 FUN_10907373c(void)

{
  return 0;
}



/* Entry: 109073744; end: 10907374b; -[SCImageProcessCommandImpl appliesInputOrientation] */

undefined8 FUN_109073744(void)

{
  return 0;
}



/* Entry: 10907374c; end: 109073753; -[SCImageProcessCommandImpl isResourcesDownloaded] */

undefined8 FUN_10907374c(void)

{
  return 1;
}



/* Entry: 109073754; end: 10907376f; -[SCImageProcessCommandImpl lensIds] */

void FUN_109073754(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109073770; end: 109073777; -[SCImageProcessCommandImpl inputConstraint] */

undefined8 FUN_109073770(void)

{
  return 0;
}



/* Entry: 109073778; end: 109073a97; -[SCImageProcessCommandImpl drawWithPixelSize:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

undefined *
FUN_109073778(float param_1,float param_2,long param_3,undefined8 param_4,undefined *param_5,
             undefined *param_6,undefined *param_7,undefined *param_8,ulong param_9,
             undefined8 *param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_d8 = param_1;
  fStack_d4 = param_2;
  _objc_retain(param_11);
  lVar1 = param_3;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 200;
  puVar5 = (undefined8 *)0xe;
  puVar2 = param_5;
  puVar8 = param_8;
  lVar6 = lVar1;
  func_0x000109079c3c(param_5,param_6,param_7,param_8,200,0xe,lVar1,param_12);
  _objc_release(lVar1);
  if ((int)puVar2 == 0) goto LAB_109073a40;
  if (*(int *)(param_3 + 0x10) != -1) {
    _glUniform1i(*(int *)(param_3 + 0x10),0);
  }
  if (*(int *)(param_3 + 0x14) != -1) {
    func_0x00010bfc9760(param_11);
    uStack_d0 = CONCAT44((float)dStack_e0,(float)dStack_a0);
    uStack_c8 = CONCAT44((float)dStack_f0,(float)dStack_e8);
    _glUniform4fv(*(undefined4 *)(param_3 + 0x14),1,&uStack_d0);
  }
  puVar8 = param_6;
  if (((param_9 & 0xffffffffffffffef) < 8) && ((1L << (param_9 & 0x2f) & 0xccU) != 0)) {
    puVar8 = param_5;
    param_5 = param_6;
  }
  dStack_100 = 1.0;
  if ((param_5 == param_7) && (puVar8 == param_8)) {
LAB_10907391c:
    dVar13 = 1.0;
  }
  else {
    if ((ulong)((long)param_5 * (long)param_8) < (ulong)((long)puVar8 * (long)param_7) ||
        (long)param_5 * (long)param_8 - (long)puVar8 * (long)param_7 == 0) {
      dStack_100 = (((double)param_7 / (double)param_5) * (double)puVar8) / (double)param_8;
      goto LAB_10907391c;
    }
    dVar13 = (((double)param_8 / (double)puVar8) * (double)param_5) / (double)param_7;
  }
  auVar9 = NEON_fmov(0xbf800000,4);
  auVar10._4_4_ = 0;
  auVar10._0_4_ = param_1 * 2.0 + -1.0;
  auVar10._8_4_ = (param_1 + param_2) * 2.0 + -1.0;
  auVar10._12_4_ = 0;
  auVar12 = NEON_rev64(auVar10,4);
  uStack_f8 = 0;
  uStack_98 = CONCAT44((float)(dStack_100 * (double)auVar9._12_4_),
                       (float)(dVar13 * (double)auVar12._12_4_));
  auVar10 = NEON_fmov(0x3f800000,4);
  uStack_90 = CONCAT44((float)(dStack_100 * (double)auVar10._4_4_),
                       (float)(dVar13 * (double)auVar12._4_4_));
  uStack_88 = CONCAT44((float)(dStack_100 * (double)auVar10._12_4_),
                       (float)(dVar13 * (double)auVar12._12_4_));
  dStack_a0 = (double)CONCAT44((float)(dStack_100 * (double)auVar9._4_4_),
                               (float)(dVar13 * (double)auVar12._4_4_));
  _glVertexAttribPointer(*(undefined4 *)(param_3 + 8),2,0x1406,0,0,&dStack_a0);
  _glEnableVertexAttribArray(*(undefined4 *)(param_3 + 8));
  uVar7 = (param_9 & 0xffffffffffffffef) - 1;
  if (uVar7 < 7) {
    puVar8 = (&PTR_DAT_110ad6cb0)[uVar7];
  }
  else {
    puVar8 = &UNK_10dfb2b68;
  }
  dVar11 = dStack_100;
  if (((uint)param_9 >> 4 & 1) != 0) {
    FUN_109073d8c(&uStack_d0,param_10);
    param_10[1] = uStack_c8;
    *param_10 = uStack_d0;
    param_10[3] = uStack_b8;
    param_10[2] = dStack_c0;
    param_10[5] = uStack_a8;
    param_10[4] = dStack_b0;
    dVar13 = dStack_b0;
    dVar11 = dStack_c0;
  }
  func_0x000109073cfc(dVar13,dVar11,puVar8,&uStack_d0,&fStack_d8,param_10);
  puVar5 = &uStack_d0;
  puVar8 = (undefined *)0x0;
  uVar4 = 0;
  _glVertexAttribPointer(*(undefined4 *)(param_3 + 0xc),2,0x1406,0,0,puVar5);
  _glEnableVertexAttribArray(*(undefined4 *)(param_3 + 0xc));
  _glDrawArrays(5,0,4);
LAB_109073a40:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    auVar10 = ___stack_chk_fail();
    _objc_retain(dStack_100);
    uVar3 = param_11;
    _objc_opt_class(param_11);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x000109079e0c(puVar8,uVar4,puVar5,lVar6,param_12,100,0xe,uVar3,uStack_f8);
    _objc_release(uVar3);
    if ((int)puVar8 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      uVar4 = param_11;
      func_0x00010c117700(param_11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28fd20();
      _objc_release(uVar4);
      func_0x00010bf89d00(auVar10._0_8_,auVar10._8_8_);
      puVar2 = PTR____NSDictionary0__struct_11034ab58;
      if ((int)param_11 == 0) {
        puVar2 = (undefined *)0x0;
      }
    }
    _objc_release(dStack_100);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 109073a98; end: 109073bdf; -[SCImageProcessCommandImpl runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

undefined *
FUN_109073a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,0xe,uVar1,in_stack_00000018);
  _objc_release(uVar1);
  if ((int)param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(uVar1);
    func_0x00010bf89d00(param_1,param_2);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar2;
}



/* Entry: 109073be0; end: 109073beb; -[SCImageProcessCommandImpl unloadWithError:] */

undefined8 FUN_109073be0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 1;
}



/* Entry: 109073bec; end: 109073bf7; -[SCImageProcessCommandImpl commandName] */

undefined ** FUN_109073bec(void)

{
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 109073bf8; end: 109073c5b; -[SCImageProcessCommandImpl innerCommands] */

undefined * FUN_109073bf8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_20 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  if ((undefined8 *)puVar1 != puVar2) {
    _objc_opt_class(puVar2);
    _objc_opt_class(puVar1);
    return (undefined *)(ulong)(puVar2 == (undefined8 *)puVar1);
  }
  return (undefined *)0x1;
}



/* Entry: 109073c5c; end: 109073ca3; -[SCImageProcessCommandImpl baseisEqual:] */

bool FUN_109073c5c(long param_1,undefined8 param_2,long param_3)

{
  if (param_1 != param_3) {
    _objc_opt_class(param_3);
    _objc_opt_class(param_1);
    return param_3 == param_1;
  }
  return true;
}



/* Entry: 109073ca4; end: 109073cdf; -[SCImageProcessCommandImpl hash] */

undefined8 FUN_109073ca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf41ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109073ce0; end: 109073ce7; -[SCImageProcessCommandImpl isLoaded] */

undefined1 FUN_109073ce0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 109073ce8; end: 109073cef; -[SCImageProcessCommandImpl program] */

undefined8 FUN_109073ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109073cf0; end: 109073d8b; -[SCImageProcessCommandImpl .cxx_destruct] */

void FUN_109073cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 109073d8c; end: 109073e7f;  */

void FUN_109073d8c(undefined8 *param_1,double param_2,double param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
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
  
  uVar2 = *param_4;
  uVar6 = param_4[3];
  uVar4 = param_4[2];
  param_1[1] = param_4[1];
  *param_1 = uVar2;
  param_1[3] = uVar6;
  param_1[2] = uVar4;
  uVar2 = param_4[4];
  param_1[5] = param_4[5];
  param_1[4] = uVar2;
  dVar3 = ABS(param_2 - param_3);
  dVar5 = ABS(param_2 + param_3) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar5))) {
    bVar1 = dVar3 < dVar5;
  }
  if (bVar1) {
    return;
  }
  if (param_2 <= param_3) {
    dVar5 = 1.0;
    dVar3 = 1.0;
    if (param_3 <= param_2) goto LAB_109073e08;
    dVar5 = param_2 / param_3;
  }
  else {
    dVar5 = param_3 / param_2;
  }
  dVar3 = 1.0 / dVar5;
LAB_109073e08:
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_48 = param_4[3];
  uStack_50 = param_4[2];
  uStack_38 = param_4[5];
  uStack_40 = param_4[4];
  _CGAffineTransformScale(param_1,dVar3,dVar3,&uStack_60);
  dVar3 = (1.0 - dVar5) * -0.5;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  _CGAffineTransformTranslate(&uStack_60,dVar3,dVar3,&uStack_90);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  return;
}



/* Entry: 109073e80; end: 109073f03; -[SCImageProcessCompoundCommand initWithCommands:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109073e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithProgram__11253a1b0,0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112780ca0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780ca0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109073f04; end: 10907401b; -[SCImageProcessCompoundCommand isLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_109073f04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong unaff_x23;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong unaff_x28;
  undefined8 uVar26;
  undefined8 uStack_860;
  long lStack_858;
  long *plStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_818 [128];
  long lStack_798;
  ulong uStack_790;
  undefined8 *puStack_788;
  undefined1 *puStack_780;
  undefined *puStack_778;
  undefined *puStack_770;
  ulong uStack_768;
  ulong uStack_760;
  undefined *puStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined8 **ppuStack_740;
  code *pcStack_738;
  undefined8 uStack_730;
  long lStack_728;
  ulong *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6e8 [128];
  long lStack_668;
  ulong uStack_660;
  undefined8 *puStack_658;
  undefined *puStack_650;
  ulong uStack_648;
  ulong uStack_640;
  undefined *puStack_638;
  undefined8 *puStack_630;
  undefined8 uStack_628;
  undefined8 **ppuStack_620;
  code *pcStack_618;
  undefined8 uStack_610;
  undefined8 *puStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_588;
  ulong *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [128];
  long lStack_4d0;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_408 [128];
  long lStack_388;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar14 = *(ulong *)(param_3 + _DAT_112780ca0);
  _objc_retain(uVar14);
  uVar5 = uVar14;
  func_0x00010bf52a60(uVar14,param_4,&uStack_110,auStack_c8,0x10);
  if (uVar5 == 0) {
    puVar17 = (undefined *)0x1;
  }
  else {
    lVar21 = *plStack_100;
    puVar17 = (undefined *)0x1;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_100 != lVar21) {
          _objc_enumerationMutation(uVar14);
        }
        if (((ulong)puVar17 & 1) == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = *(undefined **)(lStack_108 + unaff_x23 * 8);
          func_0x00010c076b80();
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar5 != unaff_x23);
      uVar5 = uVar14;
      func_0x00010bf52a60(uVar14,param_4,&uStack_110,auStack_c8,0x10);
    } while (uVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar17;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10907401c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uVar14 = *(ulong *)(uVar14 + (long)_DAT_112780ca0);
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(uVar14);
  uVar5 = uVar14;
  func_0x00010bf52a60(uVar14,param_4,&uStack_220,auStack_1d8,0x10);
  if (uVar5 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = (undefined *)0x0;
    lVar21 = *plStack_210;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_210 != lVar21) {
          _objc_enumerationMutation(uVar14);
        }
        if (((ulong)puVar17 & 1) == 0) {
          puVar17 = *(undefined **)(lStack_218 + unaff_x23 * 8);
          func_0x00010c0742a0();
        }
        else {
          puVar17 = (undefined *)0x1;
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar5 != unaff_x23);
      uVar5 = uVar14;
      func_0x00010bf52a60(uVar14,param_4,&uStack_220,auStack_1d8,0x10);
    } while (uVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_330;
  pcStack_228 = FUN_109074134;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uVar14 = *(ulong *)(uVar14 + (long)_DAT_112780ca0);
  ppuStack_230 = &puStack_120;
  _objc_retain(uVar14);
  puVar12 = auStack_2e8;
  uVar5 = uVar14;
  func_0x00010bf52a60();
  if (uVar5 == 0) {
    puVar17 = (undefined *)0x1;
  }
  else {
    lVar21 = *plStack_320;
    puVar17 = (undefined *)0x1;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_320 != lVar21) {
          _objc_enumerationMutation(uVar14);
        }
        if (((ulong)puVar17 & 1) == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = *(undefined **)(lStack_328 + unaff_x23 * 8);
          func_0x00010c07c380();
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar5 != unaff_x23);
      puVar12 = auStack_2e8;
      uVar5 = uVar14;
      puVar6 = &uStack_330;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_450;
  pcStack_338 = FUN_10907424c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  _objc_retain(puVar6);
  uVar26 = 0;
  puStack_448 = (undefined8 *)0x0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  lVar18 = *(long *)(uVar14 + (long)_DAT_112780ca0);
  _objc_retain(lVar18);
  puVar13 = auStack_408;
  puVar17 = (undefined *)0x10;
  lVar21 = lVar18;
  func_0x00010bf52a60();
  if (lVar21 != 0) {
    lVar23 = *plStack_440;
    do {
      lVar24 = 0;
      do {
        if (*plStack_440 != lVar23) {
          _objc_enumerationMutation(lVar18);
        }
        unaff_x23 = puStack_448[lVar24];
        uVar5 = unaff_x23;
        func_0x00010c076b80();
        if (((uVar5 & 1) == 0) &&
           (uVar5 = unaff_x23, puVar11 = puVar6, puVar13 = puVar12, func_0x00010c09c860(),
           (int)uVar5 == 0)) {
          puVar20 = (undefined *)0x0;
          goto LAB_109074348;
        }
        lVar24 = lVar24 + 1;
      } while (lVar21 != lVar24);
      puVar13 = auStack_408;
      puVar17 = (undefined *)0x10;
      lVar21 = lVar18;
      puVar11 = &uStack_450;
      func_0x00010bf52a60();
    } while (lVar21 != 0);
  }
  puVar20 = (undefined *)0x1;
LAB_109074348:
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar20;
  }
  ___stack_chk_fail();
  uVar4 = uStack_438;
  plVar3 = plStack_440;
  puVar2 = puStack_448;
  uVar1 = uStack_450;
  pcStack_458 = FUN_109074394;
  lStack_4d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_5e8 = in_x5;
  uStack_5e0 = in_x6;
  uStack_5d8 = in_x7;
  puStack_5c8 = puVar11;
  ppuStack_460 = &ppuStack_340;
  _objc_retain(puVar11);
  plStack_5d0 = plVar3;
  _objc_retain(plVar3);
  puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  puStack_580 = (ulong *)0x0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uVar14 = *(ulong *)((long)puVar6 + (long)_DAT_112780ca0);
  _objc_retain(uVar14);
  puVar11 = &uStack_590;
  uVar5 = uVar14;
  uStack_5f0 = uVar14;
  func_0x00010bf52a60(uVar14,param_4,puVar11,auStack_550,0x10);
  if (uVar5 != 0) {
    uVar14 = *puStack_580;
    unaff_x28 = uVar5;
    do {
      unaff_x23 = 0;
      puVar25 = puVar6;
      do {
        if (*puStack_580 != uVar14) {
          _objc_enumerationMutation(uStack_5f0);
        }
        puVar6 = *(undefined8 **)(lStack_588 + unaff_x23 * 8);
        uStack_5b8 = puVar2[1];
        uStack_5c0 = *puVar2;
        uStack_5a8 = puVar2[3];
        uStack_5b0 = puVar2[2];
        uStack_598 = puVar2[5];
        uStack_5a0 = puVar2[4];
        plStack_600 = plStack_5d0;
        uStack_5f8 = uVar4;
        puStack_608 = &uStack_5c0;
        uStack_610 = uVar1;
        puVar11 = puStack_5c8;
        func_0x00010c142ba0(uVar26,param_2,puVar6,param_4,puStack_5c8,puVar13,puVar17,uStack_5e8,
                            uStack_5e0,uStack_5d8);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined8 *)0x0) {
          _objc_release(uStack_5f0);
          puVar16 = (undefined *)0x0;
          goto LAB_10907452c;
        }
        func_0x00010bef7f60(puVar20,param_4,puVar6);
        _objc_release(puVar6);
        unaff_x23 = unaff_x23 + 1;
        puVar25 = puVar6;
      } while (unaff_x28 != unaff_x23);
      puVar11 = &uStack_590;
      unaff_x28 = uStack_5f0;
      func_0x00010bf52a60(uStack_5f0,param_4,puVar11,auStack_550,0x10);
    } while (unaff_x28 != 0);
  }
  _objc_release(uStack_5f0);
  puVar16 = puVar20;
  func_0x00010bf51e00();
  puVar25 = puVar6;
LAB_10907452c:
  _objc_release(puVar20);
  _objc_release(plStack_5d0);
  puVar6 = puStack_5c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d0) {
    ___stack_chk_fail();
    puStack_630 = puVar2;
    uStack_628 = uVar4;
    pcStack_618 = FUN_109074588;
    lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    puStack_720 = (ulong *)0x0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    puVar15 = *(undefined **)((long)puVar6 + (long)_DAT_112780ca0);
    uStack_660 = unaff_x28;
    puStack_658 = puVar25;
    puStack_650 = puVar17;
    uStack_648 = unaff_x23;
    uStack_640 = uVar14;
    puStack_638 = puVar16;
    ppuStack_620 = &ppuStack_460;
    _objc_retain(puVar15);
    puVar19 = puVar15;
    func_0x00010bf52a60(puVar15,param_4,&uStack_730,auStack_6e8,0x10);
    if (puVar19 != (undefined *)0x0) {
      unaff_x23 = *puStack_720;
      puVar16 = puVar19;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*puStack_720 != unaff_x23) {
            _objc_enumerationMutation(puVar15);
          }
          uVar14 = *(ulong *)(lStack_728 + (long)puVar17 * 8);
          uVar5 = uVar14;
          func_0x00010c076b80();
          if (((int)uVar5 != 0) &&
             (uVar5 = uVar14, func_0x00010c280b20(uVar14,param_4,puVar11), (int)uVar5 == 0)) {
            puVar19 = (undefined *)0x0;
            goto LAB_109074670;
          }
          puVar17 = puVar17 + 1;
        } while (puVar16 != puVar17);
        puVar16 = puVar15;
        func_0x00010bf52a60(puVar15,param_4,&uStack_730,auStack_6e8,0x10);
      } while (puVar16 != (undefined *)0x0);
    }
    puVar19 = (undefined *)0x1;
LAB_109074670:
    puVar7 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
      return puVar19;
    }
    ___stack_chk_fail();
    pcStack_738 = FUN_1090746b4;
    lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_790 = unaff_x28;
    puStack_788 = puVar25;
    puStack_780 = puVar13;
    puStack_778 = puVar20;
    puStack_770 = puVar17;
    uStack_768 = unaff_x23;
    uStack_760 = uVar14;
    puStack_758 = puVar16;
    puStack_750 = puVar19;
    puStack_748 = puVar15;
    ppuStack_740 = &ppuStack_620;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_858 = 0;
    uStack_860 = 0;
    uStack_848 = 0;
    plStack_850 = (long *)0x0;
    uStack_838 = 0;
    uStack_840 = 0;
    uStack_828 = 0;
    uStack_830 = 0;
    lVar18 = *(long *)(puVar7 + _DAT_112780ca0);
    _objc_retain(lVar18);
    lVar21 = lVar18;
    func_0x00010bf52a60(lVar18,param_4,&uStack_860,auStack_818,0x10);
    if (lVar21 != 0) {
      lVar23 = *plStack_850;
      do {
        lVar24 = 0;
        do {
          if (*plStack_850 != lVar23) {
            _objc_enumerationMutation(lVar18);
          }
          lVar22 = *(long *)(lStack_858 + lVar24 * 8);
          lVar9 = lVar22;
          func_0x00010bf41ce0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c08fa60();
          _objc_release(lVar9);
          if (lVar10 != 0) {
            func_0x00010bf41ce0(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8,param_4,lVar22);
            _objc_release(lVar22);
          }
          lVar24 = lVar24 + 1;
        } while (lVar21 != lVar24);
        lVar21 = lVar18;
        func_0x00010bf52a60(lVar18,param_4,&uStack_860,auStack_818,0x10);
      } while (lVar21 != 0);
    }
    _objc_release(lVar18);
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar17 = puVar8;
    func_0x00010bf529e0();
    if (puVar17 == (undefined *)0x0) {
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar17 = puVar8;
      func_0x00010bf446e0(puVar8,param_4,&PTR____CFConstantStringClassReference_110dc1338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_798) {
      ___stack_chk_fail();
      puVar16 = *(undefined **)(puVar8 + _DAT_112780ca0);
      _objc_retain(puVar16);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
}



/* Entry: 10907401c; end: 109074133; -[SCImageProcessCompoundCommand isGPUPass] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10907401c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong unaff_x23;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong unaff_x28;
  undefined8 uVar26;
  undefined8 uStack_750;
  long lStack_748;
  long *plStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined1 auStack_708 [128];
  long lStack_688;
  ulong uStack_680;
  undefined8 *puStack_678;
  undefined1 *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  ulong uStack_658;
  ulong uStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 **ppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  long lStack_618;
  ulong *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 auStack_5d8 [128];
  long lStack_558;
  ulong uStack_550;
  undefined8 *puStack_548;
  undefined *puStack_540;
  ulong uStack_538;
  ulong uStack_530;
  undefined *puStack_528;
  undefined8 *puStack_520;
  undefined8 uStack_518;
  undefined8 **ppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 *puStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  ulong *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [128];
  long lStack_3c0;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar14 = *(ulong *)(param_3 + _DAT_112780ca0);
  _objc_retain(uVar14);
  uVar5 = uVar14;
  func_0x00010bf52a60(uVar14,param_4,&uStack_110,auStack_c8,0x10);
  if (uVar5 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = (undefined *)0x0;
    lVar21 = *plStack_100;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_100 != lVar21) {
          _objc_enumerationMutation(uVar14);
        }
        if (((ulong)puVar17 & 1) == 0) {
          puVar17 = *(undefined **)(lStack_108 + unaff_x23 * 8);
          func_0x00010c0742a0();
        }
        else {
          puVar17 = (undefined *)0x1;
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar5 != unaff_x23);
      uVar5 = uVar14;
      func_0x00010bf52a60(uVar14,param_4,&uStack_110,auStack_c8,0x10);
    } while (uVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_220;
  pcStack_118 = FUN_109074134;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uVar14 = *(ulong *)(uVar14 + (long)_DAT_112780ca0);
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(uVar14);
  puVar12 = auStack_1d8;
  uVar5 = uVar14;
  func_0x00010bf52a60();
  if (uVar5 == 0) {
    puVar17 = (undefined *)0x1;
  }
  else {
    lVar21 = *plStack_210;
    puVar17 = (undefined *)0x1;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_210 != lVar21) {
          _objc_enumerationMutation(uVar14);
        }
        if (((ulong)puVar17 & 1) == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = *(undefined **)(lStack_218 + unaff_x23 * 8);
          func_0x00010c07c380();
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar5 != unaff_x23);
      puVar12 = auStack_1d8;
      uVar5 = uVar14;
      puVar6 = &uStack_220;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_340;
  pcStack_228 = FUN_10907424c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  _objc_retain(puVar6);
  uVar26 = 0;
  puStack_338 = (undefined8 *)0x0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lVar18 = *(long *)(uVar14 + (long)_DAT_112780ca0);
  _objc_retain(lVar18);
  puVar13 = auStack_2f8;
  puVar17 = (undefined *)0x10;
  lVar21 = lVar18;
  func_0x00010bf52a60();
  if (lVar21 != 0) {
    lVar23 = *plStack_330;
    do {
      lVar24 = 0;
      do {
        if (*plStack_330 != lVar23) {
          _objc_enumerationMutation(lVar18);
        }
        unaff_x23 = puStack_338[lVar24];
        uVar5 = unaff_x23;
        func_0x00010c076b80();
        if (((uVar5 & 1) == 0) &&
           (uVar5 = unaff_x23, puVar11 = puVar6, puVar13 = puVar12, func_0x00010c09c860(),
           (int)uVar5 == 0)) {
          puVar20 = (undefined *)0x0;
          goto LAB_109074348;
        }
        lVar24 = lVar24 + 1;
      } while (lVar21 != lVar24);
      puVar13 = auStack_2f8;
      puVar17 = (undefined *)0x10;
      lVar21 = lVar18;
      puVar11 = &uStack_340;
      func_0x00010bf52a60();
    } while (lVar21 != 0);
  }
  puVar20 = (undefined *)0x1;
LAB_109074348:
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar20;
  }
  ___stack_chk_fail();
  uVar4 = uStack_328;
  plVar3 = plStack_330;
  puVar2 = puStack_338;
  uVar1 = uStack_340;
  pcStack_348 = FUN_109074394;
  lStack_3c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4d8 = in_x5;
  uStack_4d0 = in_x6;
  uStack_4c8 = in_x7;
  puStack_4b8 = puVar11;
  ppuStack_350 = &ppuStack_230;
  _objc_retain(puVar11);
  plStack_4c0 = plVar3;
  _objc_retain(plVar3);
  puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  puStack_470 = (ulong *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uVar14 = *(ulong *)((long)puVar6 + (long)_DAT_112780ca0);
  _objc_retain(uVar14);
  puVar11 = &uStack_480;
  uVar5 = uVar14;
  uStack_4e0 = uVar14;
  func_0x00010bf52a60(uVar14,param_4,puVar11,auStack_440,0x10);
  if (uVar5 != 0) {
    uVar14 = *puStack_470;
    unaff_x28 = uVar5;
    do {
      unaff_x23 = 0;
      puVar25 = puVar6;
      do {
        if (*puStack_470 != uVar14) {
          _objc_enumerationMutation(uStack_4e0);
        }
        puVar6 = *(undefined8 **)(lStack_478 + unaff_x23 * 8);
        uStack_4a8 = puVar2[1];
        uStack_4b0 = *puVar2;
        uStack_498 = puVar2[3];
        uStack_4a0 = puVar2[2];
        uStack_488 = puVar2[5];
        uStack_490 = puVar2[4];
        plStack_4f0 = plStack_4c0;
        uStack_4e8 = uVar4;
        puStack_4f8 = &uStack_4b0;
        uStack_500 = uVar1;
        puVar11 = puStack_4b8;
        func_0x00010c142ba0(uVar26,param_2,puVar6,param_4,puStack_4b8,puVar13,puVar17,uStack_4d8,
                            uStack_4d0,uStack_4c8);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined8 *)0x0) {
          _objc_release(uStack_4e0);
          puVar16 = (undefined *)0x0;
          goto LAB_10907452c;
        }
        func_0x00010bef7f60(puVar20,param_4,puVar6);
        _objc_release(puVar6);
        unaff_x23 = unaff_x23 + 1;
        puVar25 = puVar6;
      } while (unaff_x28 != unaff_x23);
      puVar11 = &uStack_480;
      unaff_x28 = uStack_4e0;
      func_0x00010bf52a60(uStack_4e0,param_4,puVar11,auStack_440,0x10);
    } while (unaff_x28 != 0);
  }
  _objc_release(uStack_4e0);
  puVar16 = puVar20;
  func_0x00010bf51e00();
  puVar25 = puVar6;
LAB_10907452c:
  _objc_release(puVar20);
  _objc_release(plStack_4c0);
  puVar6 = puStack_4b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c0) {
    ___stack_chk_fail();
    puStack_520 = puVar2;
    uStack_518 = uVar4;
    pcStack_508 = FUN_109074588;
    lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    puStack_610 = (ulong *)0x0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    puVar15 = *(undefined **)((long)puVar6 + (long)_DAT_112780ca0);
    uStack_550 = unaff_x28;
    puStack_548 = puVar25;
    puStack_540 = puVar17;
    uStack_538 = unaff_x23;
    uStack_530 = uVar14;
    puStack_528 = puVar16;
    ppuStack_510 = &ppuStack_350;
    _objc_retain(puVar15);
    puVar19 = puVar15;
    func_0x00010bf52a60(puVar15,param_4,&uStack_620,auStack_5d8,0x10);
    if (puVar19 != (undefined *)0x0) {
      unaff_x23 = *puStack_610;
      puVar16 = puVar19;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*puStack_610 != unaff_x23) {
            _objc_enumerationMutation(puVar15);
          }
          uVar14 = *(ulong *)(lStack_618 + (long)puVar17 * 8);
          uVar5 = uVar14;
          func_0x00010c076b80();
          if (((int)uVar5 != 0) &&
             (uVar5 = uVar14, func_0x00010c280b20(uVar14,param_4,puVar11), (int)uVar5 == 0)) {
            puVar19 = (undefined *)0x0;
            goto LAB_109074670;
          }
          puVar17 = puVar17 + 1;
        } while (puVar16 != puVar17);
        puVar16 = puVar15;
        func_0x00010bf52a60(puVar15,param_4,&uStack_620,auStack_5d8,0x10);
      } while (puVar16 != (undefined *)0x0);
    }
    puVar19 = (undefined *)0x1;
LAB_109074670:
    puVar7 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_558) {
      return puVar19;
    }
    ___stack_chk_fail();
    pcStack_628 = FUN_1090746b4;
    lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_680 = unaff_x28;
    puStack_678 = puVar25;
    puStack_670 = puVar13;
    puStack_668 = puVar20;
    puStack_660 = puVar17;
    uStack_658 = unaff_x23;
    uStack_650 = uVar14;
    puStack_648 = puVar16;
    puStack_640 = puVar19;
    puStack_638 = puVar15;
    ppuStack_630 = &ppuStack_510;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_748 = 0;
    uStack_750 = 0;
    uStack_738 = 0;
    plStack_740 = (long *)0x0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    lVar18 = *(long *)(puVar7 + _DAT_112780ca0);
    _objc_retain(lVar18);
    lVar21 = lVar18;
    func_0x00010bf52a60(lVar18,param_4,&uStack_750,auStack_708,0x10);
    if (lVar21 != 0) {
      lVar23 = *plStack_740;
      do {
        lVar24 = 0;
        do {
          if (*plStack_740 != lVar23) {
            _objc_enumerationMutation(lVar18);
          }
          lVar22 = *(long *)(lStack_748 + lVar24 * 8);
          lVar9 = lVar22;
          func_0x00010bf41ce0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c08fa60();
          _objc_release(lVar9);
          if (lVar10 != 0) {
            func_0x00010bf41ce0(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8,param_4,lVar22);
            _objc_release(lVar22);
          }
          lVar24 = lVar24 + 1;
        } while (lVar21 != lVar24);
        lVar21 = lVar18;
        func_0x00010bf52a60(lVar18,param_4,&uStack_750,auStack_708,0x10);
      } while (lVar21 != 0);
    }
    _objc_release(lVar18);
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar17 = puVar8;
    func_0x00010bf529e0();
    if (puVar17 == (undefined *)0x0) {
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar17 = puVar8;
      func_0x00010bf446e0(puVar8,param_4,&PTR____CFConstantStringClassReference_110dc1338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_688) {
      ___stack_chk_fail();
      puVar16 = *(undefined **)(puVar8 + _DAT_112780ca0);
      _objc_retain(puVar16);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
}



/* Entry: 109074134; end: 10907424b; -[SCImageProcessCompoundCommand isRenderingCompatible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_109074134(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong unaff_x23;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong unaff_x28;
  undefined8 uVar26;
  undefined8 uStack_640;
  long lStack_638;
  long *plStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 auStack_5f8 [128];
  long lStack_578;
  ulong uStack_570;
  undefined8 *puStack_568;
  undefined1 *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  ulong uStack_548;
  ulong uStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined8 **ppuStack_520;
  code *pcStack_518;
  undefined8 uStack_510;
  long lStack_508;
  ulong *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4c8 [128];
  long lStack_448;
  ulong uStack_440;
  undefined8 *puStack_438;
  undefined *puStack_430;
  ulong uStack_428;
  ulong uStack_420;
  undefined *puStack_418;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined8 **ppuStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  ulong *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [128];
  long lStack_2b0;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar14 = *(ulong *)(param_3 + _DAT_112780ca0);
  _objc_retain(uVar14);
  puVar12 = auStack_c8;
  uVar5 = uVar14;
  func_0x00010bf52a60();
  if (uVar5 == 0) {
    puVar17 = (undefined *)0x1;
  }
  else {
    lVar21 = *plStack_100;
    puVar17 = (undefined *)0x1;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_100 != lVar21) {
          _objc_enumerationMutation(uVar14);
        }
        if (((ulong)puVar17 & 1) == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = *(undefined **)(lStack_108 + unaff_x23 * 8);
          func_0x00010c07c380();
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar5 != unaff_x23);
      puVar12 = auStack_c8;
      uVar5 = uVar14;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_230;
  pcStack_118 = FUN_10907424c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  uVar26 = 0;
  puStack_228 = (undefined8 *)0x0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar18 = *(long *)(uVar14 + (long)_DAT_112780ca0);
  _objc_retain(lVar18);
  puVar13 = auStack_1e8;
  puVar17 = (undefined *)0x10;
  lVar21 = lVar18;
  func_0x00010bf52a60();
  if (lVar21 != 0) {
    lVar23 = *plStack_220;
    do {
      lVar24 = 0;
      do {
        if (*plStack_220 != lVar23) {
          _objc_enumerationMutation(lVar18);
        }
        unaff_x23 = puStack_228[lVar24];
        uVar5 = unaff_x23;
        func_0x00010c076b80();
        if (((uVar5 & 1) == 0) &&
           (uVar5 = unaff_x23, puVar11 = puVar6, puVar13 = puVar12, func_0x00010c09c860(),
           (int)uVar5 == 0)) {
          puVar20 = (undefined *)0x0;
          goto LAB_109074348;
        }
        lVar24 = lVar24 + 1;
      } while (lVar21 != lVar24);
      puVar13 = auStack_1e8;
      puVar17 = (undefined *)0x10;
      lVar21 = lVar18;
      puVar11 = &uStack_230;
      func_0x00010bf52a60();
    } while (lVar21 != 0);
  }
  puVar20 = (undefined *)0x1;
LAB_109074348:
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar20;
  }
  ___stack_chk_fail();
  uVar4 = uStack_218;
  plVar3 = plStack_220;
  puVar2 = puStack_228;
  uVar1 = uStack_230;
  pcStack_238 = FUN_109074394;
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c8 = in_x5;
  uStack_3c0 = in_x6;
  uStack_3b8 = in_x7;
  puStack_3a8 = puVar11;
  ppuStack_240 = &puStack_120;
  _objc_retain(puVar11);
  plStack_3b0 = plVar3;
  _objc_retain(plVar3);
  puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  puStack_360 = (ulong *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uVar14 = *(ulong *)((long)puVar6 + (long)_DAT_112780ca0);
  _objc_retain(uVar14);
  puVar11 = &uStack_370;
  uVar5 = uVar14;
  uStack_3d0 = uVar14;
  func_0x00010bf52a60(uVar14,param_4,puVar11,auStack_330,0x10);
  if (uVar5 != 0) {
    uVar14 = *puStack_360;
    unaff_x28 = uVar5;
    do {
      unaff_x23 = 0;
      puVar25 = puVar6;
      do {
        if (*puStack_360 != uVar14) {
          _objc_enumerationMutation(uStack_3d0);
        }
        puVar6 = *(undefined8 **)(lStack_368 + unaff_x23 * 8);
        uStack_398 = puVar2[1];
        uStack_3a0 = *puVar2;
        uStack_388 = puVar2[3];
        uStack_390 = puVar2[2];
        uStack_378 = puVar2[5];
        uStack_380 = puVar2[4];
        plStack_3e0 = plStack_3b0;
        uStack_3d8 = uVar4;
        puStack_3e8 = &uStack_3a0;
        uStack_3f0 = uVar1;
        puVar11 = puStack_3a8;
        func_0x00010c142ba0(uVar26,param_2,puVar6,param_4,puStack_3a8,puVar13,puVar17,uStack_3c8,
                            uStack_3c0,uStack_3b8);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined8 *)0x0) {
          _objc_release(uStack_3d0);
          puVar16 = (undefined *)0x0;
          goto LAB_10907452c;
        }
        func_0x00010bef7f60(puVar20,param_4,puVar6);
        _objc_release(puVar6);
        unaff_x23 = unaff_x23 + 1;
        puVar25 = puVar6;
      } while (unaff_x28 != unaff_x23);
      puVar11 = &uStack_370;
      unaff_x28 = uStack_3d0;
      func_0x00010bf52a60(uStack_3d0,param_4,puVar11,auStack_330,0x10);
    } while (unaff_x28 != 0);
  }
  _objc_release(uStack_3d0);
  puVar16 = puVar20;
  func_0x00010bf51e00();
  puVar25 = puVar6;
LAB_10907452c:
  _objc_release(puVar20);
  _objc_release(plStack_3b0);
  puVar6 = puStack_3a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b0) {
    ___stack_chk_fail();
    puStack_410 = puVar2;
    uStack_408 = uVar4;
    pcStack_3f8 = FUN_109074588;
    lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    puStack_500 = (ulong *)0x0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    puVar15 = *(undefined **)((long)puVar6 + (long)_DAT_112780ca0);
    uStack_440 = unaff_x28;
    puStack_438 = puVar25;
    puStack_430 = puVar17;
    uStack_428 = unaff_x23;
    uStack_420 = uVar14;
    puStack_418 = puVar16;
    ppuStack_400 = &ppuStack_240;
    _objc_retain(puVar15);
    puVar19 = puVar15;
    func_0x00010bf52a60(puVar15,param_4,&uStack_510,auStack_4c8,0x10);
    if (puVar19 != (undefined *)0x0) {
      unaff_x23 = *puStack_500;
      puVar16 = puVar19;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*puStack_500 != unaff_x23) {
            _objc_enumerationMutation(puVar15);
          }
          uVar14 = *(ulong *)(lStack_508 + (long)puVar17 * 8);
          uVar5 = uVar14;
          func_0x00010c076b80();
          if (((int)uVar5 != 0) &&
             (uVar5 = uVar14, func_0x00010c280b20(uVar14,param_4,puVar11), (int)uVar5 == 0)) {
            puVar19 = (undefined *)0x0;
            goto LAB_109074670;
          }
          puVar17 = puVar17 + 1;
        } while (puVar16 != puVar17);
        puVar16 = puVar15;
        func_0x00010bf52a60(puVar15,param_4,&uStack_510,auStack_4c8,0x10);
      } while (puVar16 != (undefined *)0x0);
    }
    puVar19 = (undefined *)0x1;
LAB_109074670:
    puVar7 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
      return puVar19;
    }
    ___stack_chk_fail();
    pcStack_518 = FUN_1090746b4;
    lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_570 = unaff_x28;
    puStack_568 = puVar25;
    puStack_560 = puVar13;
    puStack_558 = puVar20;
    puStack_550 = puVar17;
    uStack_548 = unaff_x23;
    uStack_540 = uVar14;
    puStack_538 = puVar16;
    puStack_530 = puVar19;
    puStack_528 = puVar15;
    ppuStack_520 = &ppuStack_400;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_638 = 0;
    uStack_640 = 0;
    uStack_628 = 0;
    plStack_630 = (long *)0x0;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    lVar18 = *(long *)(puVar7 + _DAT_112780ca0);
    _objc_retain(lVar18);
    lVar21 = lVar18;
    func_0x00010bf52a60(lVar18,param_4,&uStack_640,auStack_5f8,0x10);
    if (lVar21 != 0) {
      lVar23 = *plStack_630;
      do {
        lVar24 = 0;
        do {
          if (*plStack_630 != lVar23) {
            _objc_enumerationMutation(lVar18);
          }
          lVar22 = *(long *)(lStack_638 + lVar24 * 8);
          lVar9 = lVar22;
          func_0x00010bf41ce0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c08fa60();
          _objc_release(lVar9);
          if (lVar10 != 0) {
            func_0x00010bf41ce0(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8,param_4,lVar22);
            _objc_release(lVar22);
          }
          lVar24 = lVar24 + 1;
        } while (lVar21 != lVar24);
        lVar21 = lVar18;
        func_0x00010bf52a60(lVar18,param_4,&uStack_640,auStack_5f8,0x10);
      } while (lVar21 != 0);
    }
    _objc_release(lVar18);
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar17 = puVar8;
    func_0x00010bf529e0();
    if (puVar17 == (undefined *)0x0) {
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar17 = puVar8;
      func_0x00010bf446e0(puVar8,param_4,&PTR____CFConstantStringClassReference_110dc1338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
      ___stack_chk_fail();
      puVar16 = *(undefined **)(puVar8 + _DAT_112780ca0);
      _objc_retain(puVar16);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
}



/* Entry: 10907424c; end: 109074393; -[SCImageProcessCompoundCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10907424c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  ulong unaff_x23;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong unaff_x28;
  undefined8 uVar25;
  undefined8 uStack_530;
  long lStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4e8 [128];
  long lStack_468;
  ulong uStack_460;
  undefined8 *puStack_458;
  undefined1 *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 **ppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  ulong *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3b8 [128];
  long lStack_338;
  ulong uStack_330;
  undefined8 *puStack_328;
  undefined *puStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar12 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar25 = 0;
  puStack_118 = (undefined8 *)0x0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar17 = *(long *)(param_3 + _DAT_112780ca0);
  _objc_retain(lVar17);
  puVar13 = auStack_d8;
  puVar14 = (undefined *)0x10;
  lVar5 = lVar17;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar22 = *plStack_110;
    do {
      lVar23 = 0;
      do {
        if (*plStack_110 != lVar22) {
          _objc_enumerationMutation(lVar17);
        }
        unaff_x23 = puStack_118[lVar23];
        uVar6 = unaff_x23;
        func_0x00010c076b80();
        if (((uVar6 & 1) == 0) &&
           (uVar6 = unaff_x23, puVar12 = param_5, puVar13 = param_6, func_0x00010c09c860(),
           (int)uVar6 == 0)) {
          puVar19 = (undefined *)0x0;
          goto LAB_109074348;
        }
        lVar23 = lVar23 + 1;
      } while (lVar5 != lVar23);
      puVar13 = auStack_d8;
      puVar14 = (undefined *)0x10;
      lVar5 = lVar17;
      puVar12 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  puVar19 = (undefined *)0x1;
LAB_109074348:
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar19;
  }
  ___stack_chk_fail();
  uVar4 = uStack_108;
  plVar3 = plStack_110;
  puVar2 = puStack_118;
  uVar1 = uStack_120;
  pcStack_128 = FUN_109074394;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b8 = param_8;
  uStack_2b0 = param_9;
  uStack_2a8 = param_10;
  puStack_298 = puVar12;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  plStack_2a0 = plVar3;
  _objc_retain(plVar3);
  puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uVar20 = *(ulong *)((long)param_5 + (long)_DAT_112780ca0);
  _objc_retain(uVar20);
  puVar12 = &uStack_260;
  uVar6 = uVar20;
  uStack_2c0 = uVar20;
  func_0x00010bf52a60(uVar20,param_4,puVar12,auStack_220,0x10);
  if (uVar6 != 0) {
    uVar20 = *puStack_250;
    unaff_x28 = uVar6;
    do {
      unaff_x23 = 0;
      puVar24 = param_5;
      do {
        if (*puStack_250 != uVar20) {
          _objc_enumerationMutation(uStack_2c0);
        }
        param_5 = *(undefined8 **)(lStack_258 + unaff_x23 * 8);
        uStack_288 = puVar2[1];
        uStack_290 = *puVar2;
        uStack_278 = puVar2[3];
        uStack_280 = puVar2[2];
        uStack_268 = puVar2[5];
        uStack_270 = puVar2[4];
        plStack_2d0 = plStack_2a0;
        uStack_2c8 = uVar4;
        puStack_2d8 = &uStack_290;
        uStack_2e0 = uVar1;
        puVar12 = puStack_298;
        func_0x00010c142ba0(uVar25,param_2,param_5,param_4,puStack_298,puVar13,puVar14,uStack_2b8,
                            uStack_2b0,uStack_2a8);
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == (undefined8 *)0x0) {
          _objc_release(uStack_2c0);
          puVar16 = (undefined *)0x0;
          goto LAB_10907452c;
        }
        func_0x00010bef7f60(puVar19,param_4,param_5);
        _objc_release(param_5);
        unaff_x23 = unaff_x23 + 1;
        puVar24 = param_5;
      } while (unaff_x28 != unaff_x23);
      puVar12 = &uStack_260;
      unaff_x28 = uStack_2c0;
      func_0x00010bf52a60(uStack_2c0,param_4,puVar12,auStack_220,0x10);
    } while (unaff_x28 != 0);
  }
  _objc_release(uStack_2c0);
  puVar16 = puVar19;
  func_0x00010bf51e00();
  puVar24 = param_5;
LAB_10907452c:
  _objc_release(puVar19);
  _objc_release(plStack_2a0);
  puVar7 = puStack_298;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
    ___stack_chk_fail();
    puStack_300 = puVar2;
    uStack_2f8 = uVar4;
    pcStack_2e8 = FUN_109074588;
    lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    puStack_3f0 = (ulong *)0x0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    puVar15 = *(undefined **)((long)puVar7 + (long)_DAT_112780ca0);
    uStack_330 = unaff_x28;
    puStack_328 = puVar24;
    puStack_320 = puVar14;
    uStack_318 = unaff_x23;
    uStack_310 = uVar20;
    puStack_308 = puVar16;
    ppuStack_2f0 = &puStack_130;
    _objc_retain(puVar15);
    puVar18 = puVar15;
    func_0x00010bf52a60(puVar15,param_4,&uStack_400,auStack_3b8,0x10);
    if (puVar18 != (undefined *)0x0) {
      unaff_x23 = *puStack_3f0;
      puVar16 = puVar18;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*puStack_3f0 != unaff_x23) {
            _objc_enumerationMutation(puVar15);
          }
          uVar20 = *(ulong *)(lStack_3f8 + (long)puVar14 * 8);
          uVar6 = uVar20;
          func_0x00010c076b80();
          if (((int)uVar6 != 0) &&
             (uVar6 = uVar20, func_0x00010c280b20(uVar20,param_4,puVar12), (int)uVar6 == 0)) {
            puVar18 = (undefined *)0x0;
            goto LAB_109074670;
          }
          puVar14 = puVar14 + 1;
        } while (puVar16 != puVar14);
        puVar16 = puVar15;
        func_0x00010bf52a60(puVar15,param_4,&uStack_400,auStack_3b8,0x10);
      } while (puVar16 != (undefined *)0x0);
    }
    puVar18 = (undefined *)0x1;
LAB_109074670:
    puVar8 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
      return puVar18;
    }
    ___stack_chk_fail();
    pcStack_408 = FUN_1090746b4;
    lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_460 = unaff_x28;
    puStack_458 = puVar24;
    puStack_450 = puVar13;
    puStack_448 = puVar19;
    puStack_440 = puVar14;
    uStack_438 = unaff_x23;
    uStack_430 = uVar20;
    puStack_428 = puVar16;
    puStack_420 = puVar18;
    puStack_418 = puVar15;
    ppuStack_410 = &ppuStack_2f0;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    plStack_520 = (long *)0x0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    lVar17 = *(long *)(puVar8 + _DAT_112780ca0);
    _objc_retain(lVar17);
    lVar5 = lVar17;
    func_0x00010bf52a60(lVar17,param_4,&uStack_530,auStack_4e8,0x10);
    if (lVar5 != 0) {
      lVar22 = *plStack_520;
      do {
        lVar23 = 0;
        do {
          if (*plStack_520 != lVar22) {
            _objc_enumerationMutation(lVar17);
          }
          lVar21 = *(long *)(lStack_528 + lVar23 * 8);
          lVar10 = lVar21;
          func_0x00010bf41ce0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08fa60();
          _objc_release(lVar10);
          if (lVar11 != 0) {
            func_0x00010bf41ce0(lVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar9,param_4,lVar21);
            _objc_release(lVar21);
          }
          lVar23 = lVar23 + 1;
        } while (lVar5 != lVar23);
        lVar5 = lVar17;
        func_0x00010bf52a60(lVar17,param_4,&uStack_530,auStack_4e8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar17);
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar14 = puVar9;
    func_0x00010bf529e0();
    if (puVar14 == (undefined *)0x0) {
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar14 = puVar9;
      func_0x00010bf446e0(puVar9,param_4,&PTR____CFConstantStringClassReference_110dc1338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar16,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_468) {
      ___stack_chk_fail();
      puVar16 = *(undefined **)(puVar9 + _DAT_112780ca0);
      _objc_retain(puVar16);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
}



/* Entry: 109074394; end: 109074587; -[SCImageProcessCompoundCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_109074394(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long unaff_x23;
  long lVar14;
  long lVar15;
  long unaff_x28;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3c8 [128];
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  long lStack_318;
  long lStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_298 [128];
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_198 = param_8;
  uStack_190 = param_9;
  uStack_188 = param_10;
  puStack_178 = param_5;
  _objc_retain(param_5);
  uStack_180 = param_13;
  _objc_retain(param_13);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar12 = *(long *)(param_3 + _DAT_112780ca0);
  _objc_retain(lVar12);
  puVar8 = &uStack_140;
  lVar2 = lVar12;
  lStack_1a0 = lVar12;
  func_0x00010bf52a60(lVar12,param_4,puVar8,auStack_100,0x10);
  if (lVar2 != 0) {
    lVar12 = *plStack_130;
    unaff_x28 = lVar2;
    do {
      unaff_x23 = 0;
      lVar2 = param_3;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lStack_1a0);
        }
        param_3 = *(long *)(lStack_138 + unaff_x23 * 8);
        uStack_168 = param_12[1];
        uStack_170 = *param_12;
        uStack_158 = param_12[3];
        uStack_160 = param_12[2];
        uStack_148 = param_12[5];
        uStack_150 = param_12[4];
        uStack_1b0 = uStack_180;
        uStack_1a8 = param_14;
        puStack_1b8 = &uStack_170;
        uStack_1c0 = param_11;
        puVar8 = puStack_178;
        func_0x00010c142ba0(param_1,param_2,param_3,param_4,puStack_178,param_6,param_7,uStack_198,
                            uStack_190,uStack_188);
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == 0) {
          _objc_release(lStack_1a0);
          puVar10 = (undefined *)0x0;
          goto LAB_10907452c;
        }
        func_0x00010bef7f60(puVar1,param_4,param_3);
        _objc_release(param_3);
        unaff_x23 = unaff_x23 + 1;
        lVar2 = param_3;
      } while (unaff_x28 != unaff_x23);
      puVar8 = &uStack_140;
      unaff_x28 = lStack_1a0;
      func_0x00010bf52a60(lStack_1a0,param_4,puVar8,auStack_100,0x10);
    } while (unaff_x28 != 0);
  }
  _objc_release(lStack_1a0);
  puVar10 = puVar1;
  func_0x00010bf51e00();
  lVar2 = param_3;
LAB_10907452c:
  _objc_release(puVar1);
  _objc_release(uStack_180);
  puVar3 = puStack_178;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puStack_1e0 = param_12;
    uStack_1d8 = param_14;
    pcStack_1c8 = FUN_109074588;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    puVar9 = *(undefined **)((long)puVar3 + (long)_DAT_112780ca0);
    lStack_210 = unaff_x28;
    lStack_208 = lVar2;
    puStack_200 = param_7;
    lStack_1f8 = unaff_x23;
    lStack_1f0 = lVar12;
    puStack_1e8 = puVar10;
    puStack_1d0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puVar11 = puVar9;
    func_0x00010bf52a60(puVar9,param_4,&uStack_2e0,auStack_298,0x10);
    if (puVar11 != (undefined *)0x0) {
      unaff_x23 = *plStack_2d0;
      puVar10 = puVar11;
      do {
        param_7 = (undefined *)0x0;
        do {
          if (*plStack_2d0 != unaff_x23) {
            _objc_enumerationMutation(puVar9);
          }
          lVar12 = *(long *)(lStack_2d8 + (long)param_7 * 8);
          lVar14 = lVar12;
          func_0x00010c076b80();
          if (((int)lVar14 != 0) &&
             (lVar14 = lVar12, func_0x00010c280b20(lVar12,param_4,puVar8), (int)lVar14 == 0)) {
            puVar11 = (undefined *)0x0;
            goto LAB_109074670;
          }
          param_7 = param_7 + 1;
        } while (puVar10 != param_7);
        puVar10 = puVar9;
        func_0x00010bf52a60(puVar9,param_4,&uStack_2e0,auStack_298,0x10);
      } while (puVar10 != (undefined *)0x0);
    }
    puVar11 = (undefined *)0x1;
LAB_109074670:
    puVar4 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
      return puVar11;
    }
    ___stack_chk_fail();
    pcStack_2e8 = FUN_1090746b4;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lStack_340 = unaff_x28;
    lStack_338 = lVar2;
    uStack_330 = param_6;
    puStack_328 = puVar1;
    puStack_320 = param_7;
    lStack_318 = unaff_x23;
    lStack_310 = lVar12;
    puStack_308 = puVar10;
    puStack_300 = puVar11;
    puStack_2f8 = puVar9;
    ppuStack_2f0 = &puStack_1d0;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    plStack_400 = (long *)0x0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    lVar12 = *(long *)(puVar4 + _DAT_112780ca0);
    _objc_retain(lVar12);
    lVar2 = lVar12;
    func_0x00010bf52a60(lVar12,param_4,&uStack_410,auStack_3c8,0x10);
    if (lVar2 != 0) {
      lVar14 = *plStack_400;
      do {
        lVar15 = 0;
        do {
          if (*plStack_400 != lVar14) {
            _objc_enumerationMutation(lVar12);
          }
          lVar13 = *(long *)(lStack_408 + lVar15 * 8);
          lVar6 = lVar13;
          func_0x00010bf41ce0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c08fa60();
          _objc_release(lVar6);
          if (lVar7 != 0) {
            func_0x00010bf41ce0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5,param_4,lVar13);
            _objc_release(lVar13);
          }
          lVar15 = lVar15 + 1;
        } while (lVar2 != lVar15);
        lVar2 = lVar12;
        func_0x00010bf52a60(lVar12,param_4,&uStack_410,auStack_3c8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar12);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar1 = puVar5;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      func_0x00010c14de00(puVar10,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = puVar5;
      func_0x00010bf446e0(puVar5,param_4,&PTR____CFConstantStringClassReference_110dc1338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar10,param_4,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      puVar10 = *(undefined **)(puVar5 + _DAT_112780ca0);
      _objc_retain(puVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 109074588; end: 1090746b3; -[SCImageProcessCompoundCommand unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_109074588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + _DAT_112780ca0);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(lVar6);
        }
        uVar9 = *(undefined8 *)(lStack_118 + lVar12 * 8);
        uVar2 = uVar9;
        func_0x00010c076b80();
        if (((int)uVar2 != 0) && (func_0x00010c280b20(uVar9,param_2,param_3), (int)uVar9 == 0)) {
          puVar8 = (undefined *)0x0;
          goto LAB_109074670;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  puVar8 = (undefined *)0x1;
LAB_109074670:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lVar6 = *(long *)(lVar6 + _DAT_112780ca0);
    _objc_retain(lVar6);
    lVar1 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_250,auStack_208,0x10);
    if (lVar1 != 0) {
      lVar11 = *plStack_240;
      do {
        lVar12 = 0;
        do {
          if (*plStack_240 != lVar11) {
            _objc_enumerationMutation(lVar6);
          }
          lVar10 = *(long *)(lStack_248 + lVar12 * 8);
          lVar3 = lVar10;
          func_0x00010bf41ce0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c08fa60();
          _objc_release(lVar3);
          if (lVar4 != 0) {
            func_0x00010bf41ce0(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8,param_2,lVar10);
            _objc_release(lVar10);
          }
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar12);
        lVar1 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_250,auStack_208,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar6);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = puVar8;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = puVar8;
      func_0x00010bf446e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110dc1338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110f1e798);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      puVar7 = *(undefined **)(puVar8 + _DAT_112780ca0);
      _objc_retain(puVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  return puVar8;
}



/* Entry: 1090746b4; end: 1090748b3; -[SCImageProcessCompoundCommand commandName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090746b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + _DAT_112780ca0);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010bf41ce0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010bf41ce0(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar8);
          _objc_release(lVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110f1e798);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar1;
    func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110f1e798);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(puVar1 + _DAT_112780ca0);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1090748b4; end: 1090748e3; -[SCImageProcessCompoundCommand innerCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090748b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112780ca0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090748e4; end: 1090749bb; -[SCImageProcessCompoundCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090748e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar6 = 1;
    goto LAB_10907499c;
  }
  puVar3 = PTR_PTR_1126b26e8;
  _objc_opt_class(PTR_PTR_1126b26e8);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_109074988:
    uVar6 = 0;
  }
  else {
    puStack_38 = PTR_PTR_112700210;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if (iVar2 == 0) goto LAB_109074988;
    lVar5 = *(long *)(param_3 + (long)_DAT_112780ca0);
    if ((lVar5 != 0 || *(long *)(param_1 + (long)_DAT_112780ca0) != 0) &&
       (func_0x00010c071b60(), (int)lVar5 == 0)) goto LAB_109074988;
    uVar6 = 1;
  }
  _objc_release(uVar1);
LAB_10907499c:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1090749bc; end: 1090749cf; -[SCImageProcessCompoundCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090749bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112780ca0,0);
  return;
}



/* Entry: 1090749d0; end: 109074af7; -[SCImageProcessGLRenderPass initWithGLCommand:correspondingCPUCommand:inputBufferIds:outputBufferIds:] */

undefined1 *
FUN_1090749d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700218;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    puVar3 = PTR_PTR_1126bf4b8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109074af8; end: 109074b37; -[SCImageProcessGLRenderPass description] */

void FUN_109074af8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f1e7b8);
  return;
}



/* Entry: 109074b38; end: 109074e47; -[SCImageProcessGLRenderPass renderToDisplayWithInputTextures:outputRenderer:ippContext:negativeSpaceColor:presentationTime:error:] */

bool FUN_109074b38(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,long *param_8)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1a400();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((uVar2 & 1) == 0) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_8 = (long)puVar4;
    _objc_release(param_1);
LAB_109074d98:
    bVar5 = false;
  }
  else {
    func_0x00010c0fcd00();
    func_0x00010c229080(param_4);
    func_0x00010c0fcd00();
    func_0x00010c222b00(*(undefined8 *)(param_1 + 0x18));
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c076b80();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c09c860();
      if (iVar1 == 0) goto LAB_109074d98;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfcce40(param_3);
    func_0x00010c0df820(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    uStack_88 = param_7[1];
    uStack_90 = *param_7;
    uStack_80 = param_7[2];
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    func_0x00010c121740(param_3);
    func_0x00010c1d0640(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfb7260(param_4);
    func_0x00010c0df820(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010c0ed100();
    if (param_3 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_90,param_3);
    }
    func_0x00010c142ba0(0,0x3f800000,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar5 = *param_8 == 0 && lVar6 != 0;
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar5;
}



/* Entry: 109074e48; end: 1090753af; -[SCImageProcessGLRenderPass runWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:GPUAvailable:error:] */

bool FUN_109074e48(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 *param_7,long param_8,char param_9,
                  undefined4 param_10,undefined8 *param_11)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0fcd00(param_3);
  func_0x00010c0fcd00(uVar3);
  if (param_9 == '\0') {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uStack_98 = param_7[1];
    uStack_a0 = *param_7;
    uStack_90 = param_7[2];
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar6);
    if (param_8 != 0) {
      func_0x00010c1d0640(puVar5);
    }
    uVar4 = param_3;
    func_0x00010c2bd7c0(param_3);
    uVar8 = param_3;
    func_0x00010c0ed100();
    if (uVar8 == 0) {
      if (param_3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bf53b80(&uStack_a0,param_3);
      }
      uVar8 = 0;
      _CGAffineTransformIsIdentity();
      if ((uVar8 & 1) == 0) goto LAB_1090751c0;
    }
    else {
LAB_1090751c0:
      func_0x00010c2bd7c0(uVar3);
      if (param_3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bf53b80(&uStack_a0,param_3);
      }
      func_0x00010c0ed100(param_3);
      func_0x00010beced20(param_1);
      uVar4 = uVar3;
      func_0x00010c2bd7c0(uVar3);
      uVar8 = param_1;
      func_0x00010be3e840();
      if ((uVar8 & 1) != 0) {
        _objc_release(puVar5);
        bVar1 = true;
        goto LAB_109075360;
      }
    }
    uVar8 = *(ulong *)(param_1 + 0x10);
    puVar6 = PTR_PTR_1126bf4a0;
    _objc_opt_class(PTR_PTR_1126bf4a0);
    _objc_opt_isKindOfClass(uVar8,puVar6);
    puVar6 = PTR_PTR_1126bf4a0;
    if ((uVar8 & 1) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      _objc_retain(uVar9);
      _objc_opt_class(puVar6);
      uVar7 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar6);
      uVar8 = uVar9;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar9);
      uVar7 = uVar4;
      _CVPixelBufferGetWidth(uVar4);
      _CVPixelBufferGetHeight(uVar4);
      func_0x00010c1d7180((double)uVar7,(double)uVar4,uVar8);
      _objc_release(uVar8);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    func_0x00010c2bd7c0(uVar3);
    func_0x00010c142b80(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    func_0x00010c222b00(*(undefined8 *)(param_1 + 0x18));
    uVar4 = param_3;
    func_0x00010bf1a400();
    uVar8 = uVar3;
    func_0x00010bf1a420();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (((int)uVar4 == 0) || ((uVar8 & 1) == 0)) {
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_11 = puVar5;
      _objc_release(param_1);
LAB_1090751a0:
      bVar1 = false;
      goto LAB_109075360;
    }
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010c076b80();
    if ((uVar4 & 1) == 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c09c860();
      if (iVar2 == 0) goto LAB_1090751a0;
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfcce40(param_3);
    func_0x00010c0df820(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar6);
    uStack_98 = param_7[1];
    uStack_a0 = *param_7;
    uStack_90 = param_7[2];
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar6);
    if (param_8 != 0) {
      func_0x00010c1d0640(puVar5);
    }
    func_0x00010c121740(param_3);
    func_0x00010c1d0640(puVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfccdc0(uVar3);
    func_0x00010c0df820(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar6);
    lVar10 = *(long *)(param_1 + 8);
    func_0x00010c0ed100();
    if (param_3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_a0,param_3);
    }
    func_0x00010c142ba0(0,0x3f800000,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  bVar1 = lVar10 != 0;
  _objc_release(puVar5);
LAB_109075360:
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 1090753b0; end: 109075493; -[SCImageProcessGLRenderPass _getCIContext] */

long FUN_1090753b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___CIContext_1126b3120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uStack_48 = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_11034ad20;
    puStack_40 = PTR____kCFBooleanTrue_11034ab68;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4f640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x20);
  }
  lVar3 = lVar5;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return lVar5;
  }
  ___stack_chk_fail();
  uVar6 = *(ulong *)(lVar3 + 8);
  puVar2 = PTR_PTR_1126b26c8;
  _objc_opt_class(PTR_PTR_1126b26c8);
  _objc_opt_isKindOfClass(uVar6,puVar2);
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(lVar3 + 8);
    puVar2 = PTR_PTR_1126bf440;
    _objc_opt_class(PTR_PTR_1126bf440);
    _objc_opt_isKindOfClass(uVar6,puVar2);
    if ((uVar6 & 1) == 0) {
      uVar6 = *(ulong *)(lVar3 + 8);
      puVar2 = PTR_PTR_1126dd280;
      _objc_opt_class(PTR_PTR_1126dd280);
      _objc_opt_isKindOfClass(uVar6,puVar2);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s__isCPUColorConversionCommand_11256d3b0);
        return lVar3;
      }
    }
  }
  return 1;
}



/* Entry: 109075494; end: 109075523; -[SCImageProcessGLRenderPass _isColorConversionCommand] */

long FUN_109075494(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b26c8;
  _objc_opt_class(PTR_PTR_1126b26c8);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    puVar1 = PTR_PTR_1126bf440;
    _objc_opt_class(PTR_PTR_1126bf440);
    _objc_opt_isKindOfClass(uVar2,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      puVar1 = PTR_PTR_1126dd280;
      _objc_opt_class(PTR_PTR_1126dd280);
      _objc_opt_isKindOfClass(uVar2,puVar1);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCPUColorConversionCommand_11256d3b0)
        ;
        return param_1;
      }
    }
  }
  return 1;
}



/* Entry: 109075524; end: 1090755a7; -[SCImageProcessGLRenderPass _isCPUColorConversionCommand] */

uint FUN_109075524(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126da0a0;
  _objc_opt_class(PTR_PTR_1126da0a0);
  _objc_opt_isKindOfClass(uVar4,puVar2);
  if ((uVar4 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126c40b8;
    _objc_opt_class(PTR_PTR_1126c40b8);
    _objc_opt_isKindOfClass(uVar4,puVar2);
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      puVar2 = PTR_PTR_1126dd288;
      _objc_opt_class(PTR_PTR_1126dd288);
      _objc_opt_isKindOfClass(uVar3,puVar2);
      uVar1 = (uint)uVar3;
      goto LAB_109075598;
    }
  }
  uVar1 = 1;
LAB_109075598:
  return uVar1 & 1;
}



/* Entry: 1090755a8; end: 1090758ff; -[SCImageProcessGLRenderPass _transformInputPixelBuffer:outputPixelBuffer:transform:orientation:] */

void FUN_1090755a8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar1 = param_5;
  _CGColorSpaceCreateDeviceRGB();
  uVar2 = param_5;
  func_0x00010be1d6a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9320(PTR__OBJC_CLASS___CIImage_1126b3128);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20();
  uVar4 = param_8;
  _CVPixelBufferGetWidth();
  dVar8 = (double)uVar4;
  uVar4 = param_8;
  _CVPixelBufferGetHeight();
  dVar9 = (double)uVar4;
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010becec60(&uStack_f0,param_3,param_4,param_5);
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uVar4 = 0;
  _CGAffineTransformIsIdentity();
  if ((uVar4 & 1) == 0) {
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    func_0x00010beceec0(param_5);
  }
  dVar10 = dVar8 / param_3;
  if (dVar9 / param_4 <= dVar8 / param_3) {
    dVar10 = dVar9 / param_4;
  }
  if (dVar10 != 1.0) {
    _CGAffineTransformMakeScale(&uStack_120,dVar10,dVar10);
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_178 = uStack_118;
    uStack_180 = uStack_120;
    uStack_168 = uStack_108;
    uStack_170 = uStack_110;
    uStack_158 = uStack_f8;
    uStack_160 = uStack_100;
    _CGAffineTransformConcat(&uStack_c0,&uStack_150,&uStack_180);
  }
  if (((dVar8 - param_3 * dVar10) * 0.5 != 0.0) || ((dVar9 - param_4 * dVar10) * 0.5 != 0.0)) {
    _CGAffineTransformMakeTranslation(&uStack_120);
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_1a8 = uStack_118;
    uStack_1b0 = uStack_120;
    uStack_198 = uStack_108;
    uStack_1a0 = uStack_110;
    uStack_188 = uStack_f8;
    uStack_190 = uStack_100;
    _CGAffineTransformConcat(&uStack_150,&uStack_180,&uStack_1b0);
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
  }
  uStack_118 = param_9[1];
  uStack_120 = *param_9;
  uStack_108 = param_9[3];
  uStack_110 = param_9[2];
  uStack_f8 = param_9[5];
  uStack_100 = param_9[4];
  uVar4 = 0;
  _CGAffineTransformIsIdentity();
  if ((uVar4 & 1) == 0) {
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_178 = param_9[1];
    uStack_180 = *param_9;
    uStack_168 = param_9[3];
    uStack_170 = param_9[2];
    uStack_158 = param_9[5];
    uStack_160 = param_9[4];
    _CGAffineTransformConcat(&uStack_120,&uStack_150,&uStack_180);
    uStack_b8 = uStack_118;
    uStack_c0 = uStack_120;
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
  }
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  puVar5 = puVar3;
  func_0x00010bfe6dc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
  puVar6 = PTR__OBJC_CLASS___CIColor_1126c9738;
  func_0x00010bf1c920(PTR__OBJC_CLASS___CIColor_1126c9738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9340(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bfe6e20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _CVPixelBufferLockBaseAddress(param_8,0);
  func_0x00010c12f600(0,0,dVar8,dVar9,uVar2);
  _CVPixelBufferUnlockBaseAddress(param_8,0);
  _CGColorSpaceRelease(uVar1);
  _objc_release(puVar7);
  _objc_release(uVar2);
  return;
}



/* Entry: 109075900; end: 109075933; -[SCImageProcessGLRenderPass _transformedSizeForOrientation:inputSize:] */

undefined1  [16]
FUN_109075900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  if ((param_5 < 8) && ((1L << (param_5 & 0x3f) & 0xccU) != 0)) {
    uVar1 = param_1;
    param_1 = param_2;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 109075934; end: 109075b23; -[SCImageProcessGLRenderPass _transformForOrientation:imageSize:] */

void FUN_109075934(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  if (param_6 < 4) {
    if (param_6 == 1) {
      _CGAffineTransformMakeTranslation(param_1,param_2,param_3);
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      uStack_68 = param_1[3];
      uStack_70 = param_1[2];
      uStack_58 = param_1[5];
      uStack_60 = param_1[4];
      uVar2 = 0x400921fb54442d18;
    }
    else {
      if (param_6 != 2) {
        if (param_6 != 3) {
          return;
        }
        _CGAffineTransformMakeTranslation(param_1,0,param_2);
        goto LAB_109075a08;
      }
      _CGAffineTransformMakeTranslation(param_1,param_3,0);
LAB_109075ae0:
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      uStack_68 = param_1[3];
      uStack_70 = param_1[2];
      uStack_58 = param_1[5];
      uStack_60 = param_1[4];
      uVar2 = 0x3ff921fb54442d18;
    }
  }
  else {
    if (param_6 < 6) {
      if (param_6 == 4) {
        _CGAffineTransformMakeTranslation(param_1,param_2,0);
        uStack_78 = param_1[1];
        uStack_80 = *param_1;
        uStack_68 = param_1[3];
        uStack_70 = param_1[2];
        uStack_58 = param_1[5];
        uStack_60 = param_1[4];
        uVar2 = 0xbff0000000000000;
        uVar3 = 0x3ff0000000000000;
      }
      else {
        if (param_6 != 5) {
          return;
        }
        _CGAffineTransformMakeTranslation(param_1,0,param_3);
        uStack_78 = param_1[1];
        uStack_80 = *param_1;
        uStack_68 = param_1[3];
        uStack_70 = param_1[2];
        uStack_58 = param_1[5];
        uStack_60 = param_1[4];
        uVar2 = 0x3ff0000000000000;
        uVar3 = 0xbff0000000000000;
      }
      _CGAffineTransformScale(&uStack_50,uVar2,uVar3,&uStack_80);
      goto LAB_109075b04;
    }
    if (param_6 == 6) {
      _CGAffineTransformMakeTranslation(param_1,param_3,param_2);
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      uStack_68 = param_1[3];
      uStack_70 = param_1[2];
      uStack_58 = param_1[5];
      uStack_60 = param_1[4];
      _CGAffineTransformScale(&uStack_50,0xbff0000000000000,0x3ff0000000000000,&uStack_80);
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      param_1[3] = uStack_38;
      param_1[2] = uStack_40;
      param_1[5] = uStack_28;
      param_1[4] = uStack_30;
      goto LAB_109075ae0;
    }
    if (param_6 != 7) {
      return;
    }
    _CGAffineTransformMakeScale(param_1,0xbff0000000000000,0x3ff0000000000000);
LAB_109075a08:
    uStack_78 = param_1[1];
    uStack_80 = *param_1;
    uStack_68 = param_1[3];
    uStack_70 = param_1[2];
    uStack_58 = param_1[5];
    uStack_60 = param_1[4];
    uVar2 = 0xbff921fb54442d18;
  }
  _CGAffineTransformRotate(&uStack_50,uVar2,&uStack_80);
LAB_109075b04:
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 109075b24; end: 109075b97; -[SCImageProcessGLRenderPass createInstanceWithUpdatedInputBufferIds:OutputBufferIds:] */

void FUN_109075b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf4b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016a80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109075b98; end: 109075b9f; -[SCImageProcessGLRenderPass isPixelBufferInputCompatible] */

void FUN_109075b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isPixelBufferInputCompatible_1125fc268);
  return;
}



/* Entry: 109075ba0; end: 109075ba7; -[SCImageProcessGLRenderPass appliesInputTransform] */

void FUN_109075ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appliesInputTransform_11259f9c8);
  return;
}



/* Entry: 109075ba8; end: 109075baf; -[SCImageProcessGLRenderPass appliesInputOrientation] */

void FUN_109075ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appliesInputOrientation_11259f9c0);
  return;
}



/* Entry: 109075bb0; end: 109075bb7; -[SCImageProcessGLRenderPass lensIds] */

void FUN_109075bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_lensIds_112602ba8);
  return;
}



/* Entry: 109075bb8; end: 109075bbf; -[SCImageProcessGLRenderPass unloadWithError:] */

void FUN_109075bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_unloadWithError__11267dcf0);
  return;
}



/* Entry: 109075bc0; end: 109075bcf; -[SCImageProcessGLRenderPass requiresGPU] */

bool FUN_109075bc0(long param_1)

{
  return *(long *)(param_1 + 0x10) == 0;
}



/* Entry: 109075bd0; end: 109075bd3; -[SCImageProcessGLRenderPass isOutputDeterministicAndStatic] */

void FUN_109075bd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isColorConversionCommand_11256d590);
  return;
}



/* Entry: 109075bd4; end: 109075bdb; -[SCImageProcessGLRenderPass glCommand] */

undefined8 FUN_109075bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109075bdc; end: 109075be3; -[SCImageProcessGLRenderPass cpuCommand] */

undefined8 FUN_109075bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109075be4; end: 109075beb; -[SCImageProcessGLRenderPass inputBufferIds] */

undefined8 FUN_109075be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109075bec; end: 109075bf3; -[SCImageProcessGLRenderPass outputBufferIds] */

undefined8 FUN_109075bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109075bf4; end: 109075bfb; -[SCImageProcessGLRenderPass textureType] */

undefined8 FUN_109075bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109075bfc; end: 109075c5b; -[SCImageProcessGLRenderPass .cxx_destruct] */

void FUN_109075bfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109075c5c; end: 109075d3b; +[SCImageProcessGenericLookupRGBCommand sharedCommandWithLookupName:] */

void FUN_109075c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (lRam0000000113730800 != -1) {
    func_0x000107c27d9c(0x113730800,&PTR___NSConcreteGlobalBlock_110ad6ce8);
  }
  lVar1 = lRam0000000113730808;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_3;
    FUN_10907c53c(param_3);
    puVar3 = PTR_PTR_1126bf478;
    _objc_alloc(PTR_PTR_1126bf478);
    func_0x00010be3ad20();
    func_0x00010c1d0640(lRam0000000113730808);
    _CGImageRelease(uVar2);
    _objc_release(puVar3);
  }
  lVar1 = lRam0000000113730808;
  func_0x00010c0e00e0(lRam0000000113730808);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109075d3c; end: 109075d6f;  */

void FUN_109075d3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730808;
  puRam0000000113730808 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109075d70; end: 109075da3; -[SCImageProcessGenericLookupRGBCommand _initWithLookupTable:] */

void FUN_109075d70(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700220;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithLookupTable__11253f5e8);
  return;
}



/* Entry: 109075da4; end: 109075daf; -[SCImageProcessGenericLookupRGBCommand commandName] */

undefined ** FUN_109075da4(void)

{
  return &PTR____CFConstantStringClassReference_110f1e7f8;
}



/* Entry: 109075db0; end: 109075e27; -[SCImageProcessGenericLookupRGBCommand isEqual:] */

void FUN_109075db0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700220;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 109075e28; end: 109075f2f; -[SCImageProcessGradientCommand initWithTopColor:bottomColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109075e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lRam0000000113730810 != -1) {
    func_0x000107c27d9c(0x113730810,&PTR___NSConcreteGlobalBlock_110ad6d08);
  }
  uVar2 = uRam0000000113730818;
  _objc_retain(uRam0000000113730818);
  puStack_48 = PTR_PTR_112700228;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithProgram__11253a1b0,uVar2);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112780cc0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112780cc4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780cc8) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109075f30; end: 10907608f; -[SCImageProcessGradientCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109075f30(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  long lVar4;
  
  plVar2 = &lStack_40;
  puStack_38 = PTR_PTR_112700228;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadWithContext_error__112604c28);
  if ((int)plVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetAttribLocation();
    *(undefined4 *)(param_1 + _DAT_112780ccc) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetAttribLocation();
    *(undefined4 *)(param_1 + _DAT_112780cd0) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780cd4) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780cd8) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780cdc) = uVar1;
    _objc_release(lVar3);
  }
  return (undefined1 *)plVar2;
}



/* Entry: 109076090; end: 1090760c3; -[SCImageProcessGradientCommand unloadWithError:] */

void FUN_109076090(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700228;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_unloadWithError__11267dcf0);
  return;
}



/* Entry: 1090760c4; end: 10907634b; -[SCImageProcessGradientCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_1090760c4(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined **ppuVar2;
  float fVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_stack_00000010);
  lVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,0,lVar1,in_stack_00000018);
  _objc_release(lVar1);
  ppuVar2 = (undefined **)0x0;
  if ((int)param_6 != 0) {
    lVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(lVar1);
    _glBlendFunc(1,0x303);
    _glEnable(0xbe2);
    func_0x00010bfc9760(*(undefined8 *)(param_3 + _DAT_112780cc0));
    uStack_88 = CONCAT44((float)dStack_c0,(float)dStack_b8);
    uStack_90 = CONCAT44((float)dStack_b0,(float)dStack_a8);
    _glUniform4fv(*(undefined4 *)(param_3 + _DAT_112780cd8),1,&uStack_90);
    func_0x00010bfc9760(*(undefined8 *)(param_3 + _DAT_112780cc4));
    uStack_98 = CONCAT44((float)dStack_c0,(float)dStack_b8);
    uStack_a0 = CONCAT44((float)dStack_b0,(float)dStack_a8);
    _glUniform4fv(*(undefined4 *)(param_3 + _DAT_112780cdc),1,&uStack_a0);
    fVar3 = 1.0;
    if (*(char *)(param_3 + _DAT_112780ce0) == '\x01') {
      fVar3 = (float)*(double *)(param_3 + _DAT_112780cc8);
    }
    _glUniform1f(fVar3,*(undefined4 *)(param_3 + _DAT_112780cd4));
    lVar1 = param_3;
    func_0x00010bf89d00(param_1,param_2);
    if ((int)lVar1 == 0) {
      ppuVar2 = (undefined **)0x0;
    }
    else {
      _glActiveTexture(0x84c2);
      _glBindTexture(0xde1,*(undefined4 *)(param_3 + _DAT_112780ce4));
      ppuVar2 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
    }
  }
  _objc_release(in_stack_00000010);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110f1e838;
}



/* Entry: 10907634c; end: 109076357; -[SCImageProcessGradientCommand commandName] */

undefined ** FUN_10907634c(void)

{
  return &PTR____CFConstantStringClassReference_110f1e838;
}



/* Entry: 109076358; end: 109076487; -[SCImageProcessGradientCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109076358(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  iVar5 = (int)&uStack_50;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar4 = 1;
    goto LAB_109076464;
  }
  puVar2 = PTR_PTR_1126bfba8;
  _objc_opt_class(PTR_PTR_1126bfba8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_109076450:
    uVar4 = 0;
  }
  else {
    puStack_48 = PTR_PTR_112700228;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_baseisEqual__11253a1b8,param_3);
    if (iVar5 == 0) goto LAB_109076450;
    iVar5 = (int)*(undefined8 *)(param_1 + (long)_DAT_112780cc0);
    uVar3 = param_3;
    func_0x00010c274320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    _objc_release(uVar3);
    if (iVar5 == 0) goto LAB_109076450;
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112780cc4);
    uVar3 = param_3;
    func_0x00010bf20040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
LAB_109076464:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 109076488; end: 1090764ab; -[SCImageProcessGradientCommand copyWithZone:] */

undefined8 FUN_109076488(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090764ac; end: 1090764bb; -[SCImageProcessGradientCommand shouldFade] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1090764ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112780ce0);
}


