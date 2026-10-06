/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e37d74; end: 107e37d7f; -[SCPreviewFeatureOverlayCompositionServices .cxx_destruct] */

void FUN_107e37d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e37d80; end: 107e37e97; -[SCPreviewOverlayCompositionRequest initWithCoder:] */

undefined1 * FUN_107e37d80(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fb5f0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x10) = (double)param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e37e98; end: 107e37f37; -[SCPreviewOverlayCompositionRequest initWithOriginalImageIncluded:filteredImageIncluded:videoOverlayImageIncluded:captionIncluded:filterOverlayImageIncluded:shouldGenerateOverlayImageForMask:shouldGenerateVideoThumbnailImageWithOverlay:unifiedCameraObjectImageIncluded:croppingAspectRatio:] */

void FUN_107e37e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fb5f0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined1 *)((long)puVar1 + 0xc) = param_8;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xf) = param_10._1_1_;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 107e37f38; end: 107e37f5b; -[SCPreviewOverlayCompositionRequest copyWithZone:] */

undefined8 FUN_107e37f38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e37f5c; end: 107e3804b; -[SCPreviewOverlayCompositionRequest encodeWithCoder:] */

void FUN_107e37f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ec08d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110ec08f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110ec0918);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110ec0938);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110ec0958);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110ec0978);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110ec0998);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110ec09b8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110ec09d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e3804c; end: 107e3810f; -[SCPreviewOverlayCompositionRequest hash] */

ulong * FUN_107e3804c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  double dVar9;
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
  
  puVar2 = &uStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar4 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar4);
  uVar8 = CONCAT44((int)(uVar4 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar4 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar4 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar4 >> 0x30);
  uStack_60 = (ulong)uVar1 & 0xff;
  uStack_58 = uVar4 >> 0x10 & 0xff;
  uStack_50 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar4 >> 0x20)) & 0xffffffff;
  uStack_48 = (ulong)uVar6;
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar4);
  uVar8 = CONCAT44((int)(uVar4 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar4 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar4 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar4 >> 0x30);
  uStack_40 = (ulong)uVar1 & 0xff;
  uStack_38 = uVar4 >> 0x10 & 0xff;
  uStack_30 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar4 >> 0x20)) & 0xffffffff;
  uStack_28 = (ulong)uVar6;
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_60,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((((ulong)puVar3 & 1) == 0) ||
           ((((*(char *)((long)puVar2 + 8) != param_3[8] ||
              (*(char *)((long)puVar2 + 9) != param_3[9])) ||
             (*(char *)((long)puVar2 + 10) != param_3[10])) ||
            ((*(char *)((long)puVar2 + 0xb) != param_3[0xb] ||
             (*(char *)((long)puVar2 + 0xc) != param_3[0xc])))))) ||
          (*(char *)((long)puVar2 + 0xd) != param_3[0xd])) ||
         ((*(char *)((long)puVar2 + 0xe) != param_3[0xe] ||
          (*(char *)((long)puVar2 + 0xf) != param_3[0xf])))) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        dVar9 = ABS(*(double *)((long)puVar2 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar9 <= 2.2250738585072014e-308) {
          dVar9 = 2.2250738585072014e-308;
        }
        puVar5 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar2 + 0x10) - *(double *)(param_3 + 0x10)) < dVar9
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 107e38110; end: 107e3823b; -[SCPreviewOverlayCompositionRequest isEqual:] */

bool FUN_107e38110(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((((uVar2 & 1) == 0) ||
           ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
              (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
             (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))) ||
            ((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
             (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))))))) ||
          (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))) ||
         ((*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe) ||
          (*(char *)(param_1 + 0xf) != *(char *)(param_3 + 0xf))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107e3823c; end: 107e38243; -[SCPreviewOverlayCompositionRequest originalImageIncluded] */

undefined1 FUN_107e3823c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e38244; end: 107e3824b; -[SCPreviewOverlayCompositionRequest filteredImageIncluded] */

undefined1 FUN_107e38244(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107e3824c; end: 107e38253; -[SCPreviewOverlayCompositionRequest videoOverlayImageIncluded] */

undefined1 FUN_107e3824c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107e38254; end: 107e3825b; -[SCPreviewOverlayCompositionRequest captionIncluded] */

undefined1 FUN_107e38254(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107e3825c; end: 107e38263; -[SCPreviewOverlayCompositionRequest filterOverlayImageIncluded] */

undefined1 FUN_107e3825c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107e38264; end: 107e3826b; -[SCPreviewOverlayCompositionRequest shouldGenerateOverlayImageForMask] */

undefined1 FUN_107e38264(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107e3826c; end: 107e38273; -[SCPreviewOverlayCompositionRequest shouldGenerateVideoThumbnailImageWithOverlay] */

undefined1 FUN_107e3826c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107e38274; end: 107e3827b; -[SCPreviewOverlayCompositionRequest unifiedCameraObjectImageIncluded] */

undefined1 FUN_107e38274(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107e3827c; end: 107e38283; -[SCPreviewOverlayCompositionRequest croppingAspectRatio] */

undefined8 FUN_107e3827c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e38284; end: 107e3829f; +[SCPreviewOverlayCompositionRequestBuilder previewOverlayCompositionRequest] */

void FUN_107e38284(void)

{
  _objc_alloc_init(PTR_PTR_1126c4830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e382a0; end: 107e3847f; +[SCPreviewOverlayCompositionRequestBuilder previewOverlayCompositionRequestFromExistingPreviewOverlayCompositionRequest:] */

void FUN_107e382a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126c4830;
  _objc_retain(param_4);
  func_0x00010c111880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0ed560(param_4);
  puVar3 = puVar1;
  func_0x00010c2b50e0(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfaeaa0(param_4);
  puVar4 = puVar3;
  func_0x00010c2ae1c0(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c29a800(param_4);
  puVar5 = puVar4;
  func_0x00010c2bc700(puVar4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf30040(param_4);
  puVar6 = puVar5;
  func_0x00010c2aa000(puVar5,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfae200(param_4);
  puVar7 = puVar6;
  func_0x00010c2adfc0(puVar6,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c230920(param_4);
  puVar8 = puVar7;
  func_0x00010c2b8900(puVar7,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2309a0(param_4);
  puVar9 = puVar8;
  func_0x00010c2b8920(puVar8,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c27fee0(param_4);
  puVar10 = puVar9;
  func_0x00010c2bbda0(puVar9,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c940(param_4);
  _objc_release(param_4);
  puVar11 = puVar10;
  func_0x00010c2ab6c0(param_1,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107e38480; end: 107e384d7; -[SCPreviewOverlayCompositionRequestBuilder build] */

void FUN_107e38480(long param_1)

{
  _objc_alloc(PTR_PTR_1126c4838);
  func_0x00010c032500(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e384d8; end: 107e384df; -[SCPreviewOverlayCompositionRequestBuilder withOriginalImageIncluded:] */

void FUN_107e384d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107e384e0; end: 107e384e7; -[SCPreviewOverlayCompositionRequestBuilder withFilteredImageIncluded:] */

void FUN_107e384e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107e384e8; end: 107e384ef; -[SCPreviewOverlayCompositionRequestBuilder withVideoOverlayImageIncluded:] */

void FUN_107e384e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 107e384f0; end: 107e384f7; -[SCPreviewOverlayCompositionRequestBuilder withCaptionIncluded:] */

void FUN_107e384f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 107e384f8; end: 107e384ff; -[SCPreviewOverlayCompositionRequestBuilder withFilterOverlayImageIncluded:] */

void FUN_107e384f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 107e38500; end: 107e38507; -[SCPreviewOverlayCompositionRequestBuilder withShouldGenerateOverlayImageForMask:] */

void FUN_107e38500(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 107e38508; end: 107e3850f; -[SCPreviewOverlayCompositionRequestBuilder withShouldGenerateVideoThumbnailImageWithOverlay:] */

void FUN_107e38508(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 107e38510; end: 107e38517; -[SCPreviewOverlayCompositionRequestBuilder withUnifiedCameraObjectImageIncluded:] */

void FUN_107e38510(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 107e38518; end: 107e3851f; -[SCPreviewOverlayCompositionRequestBuilder withCroppingAspectRatio:] */

void FUN_107e38518(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 107e38520; end: 107e38697; -[SCPreviewOverlayCompositionResponse initWithCoder:] */

undefined1 * FUN_107e38520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb5f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e38698; end: 107e3882f; -[SCPreviewOverlayCompositionResponse initWithScreenshotOrOverlay:overlayPngData:rotationalOverlay:overlayImageForMask:videoThumbnailImageWithOverlay:videoTrackedImages:unifiedCameraObjectAppliedImage:] */

undefined1 *
FUN_107e38698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fb5f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e38830; end: 107e38853; -[SCPreviewOverlayCompositionResponse copyWithZone:] */

undefined8 FUN_107e38830(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e38854; end: 107e38917; -[SCPreviewOverlayCompositionResponse encodeWithCoder:] */

void FUN_107e38854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ec09f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ec0a18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ec0a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec0a58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ec0a78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ec0a98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ec0ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e38918; end: 107e389c7; -[SCPreviewOverlayCompositionResponse hash] */

undefined8 * FUN_107e38918(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107e38ac0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e38acc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_107e38acc;
                  }
                  goto LAB_107e38ac0;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107e38acc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107e389c8; end: 107e38ae7; -[SCPreviewOverlayCompositionResponse isEqual:] */

long FUN_107e389c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e38ac0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e38acc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_107e38acc;
                  }
                  goto LAB_107e38ac0;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107e38acc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e38ae8; end: 107e38aef; -[SCPreviewOverlayCompositionResponse screenshotOrOverlay] */

undefined8 FUN_107e38ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e38af0; end: 107e38af7; -[SCPreviewOverlayCompositionResponse overlayPngData] */

undefined8 FUN_107e38af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e38af8; end: 107e38aff; -[SCPreviewOverlayCompositionResponse rotationalOverlay] */

undefined8 FUN_107e38af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e38b00; end: 107e38b07; -[SCPreviewOverlayCompositionResponse overlayImageForMask] */

undefined8 FUN_107e38b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e38b08; end: 107e38b0f; -[SCPreviewOverlayCompositionResponse videoThumbnailImageWithOverlay] */

undefined8 FUN_107e38b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e38b10; end: 107e38b17; -[SCPreviewOverlayCompositionResponse videoTrackedImages] */

undefined8 FUN_107e38b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e38b18; end: 107e38b1f; -[SCPreviewOverlayCompositionResponse unifiedCameraObjectAppliedImage] */

undefined8 FUN_107e38b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e38b20; end: 107e38b8b; -[SCPreviewOverlayCompositionResponse .cxx_destruct] */

void FUN_107e38b20(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 107e38b8c; end: 107e38bff; -[SCPreviewFeatureSwipeDownDismissServices initWithSwipeDownDismiss:] */

undefined1 * FUN_107e38b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb600;
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



/* Entry: 107e38c00; end: 107e38c07; -[SCPreviewFeatureSwipeDownDismissServices swipeDownDismiss] */

undefined8 FUN_107e38c00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e38c08; end: 107e38c13; -[SCPreviewFeatureSwipeDownDismissServices .cxx_destruct] */

void FUN_107e38c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e38c14; end: 107e38c87; -[SCPreviewFeatureVideoPlaybackControlsLegacyServices initWithVideoPlaybackControls:] */

undefined1 * FUN_107e38c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb608;
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



/* Entry: 107e38c88; end: 107e38c8f; -[SCPreviewFeatureVideoPlaybackControlsLegacyServices videoPlaybackControls] */

undefined8 FUN_107e38c88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e38c90; end: 107e38c9b; -[SCPreviewFeatureVideoPlaybackControlsLegacyServices .cxx_destruct] */

void FUN_107e38c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e38c9c; end: 107e38d0f; -[SCPreviewGenericAssetsServices initWithRegistry:] */

undefined1 * FUN_107e38c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb610;
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



/* Entry: 107e38d10; end: 107e38d17; -[SCPreviewGenericAssetsServices registry] */

undefined8 FUN_107e38d10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e38d18; end: 107e38d23; -[SCPreviewGenericAssetsServices .cxx_destruct] */

void FUN_107e38d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e38d24; end: 107e38dc7; -[SCPreviewLensServices initWithDataProviderCommonFactory:lensRemoteAssetsAvalabilityProvider:] */

undefined1 *
FUN_107e38d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb618;
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



/* Entry: 107e38dc8; end: 107e38dcf; -[SCPreviewLensServices dataProviderCommonFactory] */

undefined8 FUN_107e38dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e38dd0; end: 107e38dd7; -[SCPreviewLensServices lensRemoteAssetsAvalabilityProvider] */

undefined8 FUN_107e38dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e38dd8; end: 107e38e07; -[SCPreviewLensServices .cxx_destruct] */

void FUN_107e38dd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e38e08; end: 107e391a3; -[SCPreviewDependencyLoadingStates initWithUserSession:configuration:geoFilterProvider:circumstanceEngine:] */

undefined8 *
FUN_107e38e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126fb620;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_107e390ec;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = puVar1[1];
  puVar1[1] = puVar2;
  _objc_release(uVar7);
  func_0x00010c139f80(param_4);
  _objc_initWeak(auStack_90,puVar1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107e391a4;
  puStack_a0 = &UNK_11084dd40;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010befa300(param_4);
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107e3923c;
  puStack_c8 = &UNK_11084dd40;
  _objc_copyWeak(auStack_c0,auStack_90);
  func_0x00010befa300(param_4);
  puStack_108 = puVar2;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_107e3929c;
  puStack_f0 = &UNK_11084dd40;
  _objc_copyWeak(auStack_e8,auStack_90);
  func_0x00010befa300(param_4);
  puStack_130 = puVar2;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x107e39334;
  puStack_118 = &UNK_11084dd40;
  _objc_copyWeak(auStack_110,auStack_90);
  func_0x00010befa300(param_4);
  _objc_copyWeak(auStack_138,auStack_90);
  func_0x00010befa300(param_4);
  uVar7 = param_4;
  func_0x00010c07e920();
  if ((int)uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c073b80();
    if ((int)uVar3 == 0) {
      uVar3 = param_4;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c073ea0();
      _objc_release(uVar3);
      _objc_release(uVar7);
      if ((int)uVar4 != 0) goto LAB_107e39040;
    }
    else {
      _objc_release(uVar7);
LAB_107e39040:
      func_0x00010c20a020(puVar1);
    }
    lVar5 = param_5;
    func_0x00010c14b940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      _objc_release(lVar5);
    }
    else {
      uVar7 = param_6;
      func_0x00010bf1f440();
      _objc_release(lVar5);
      if ((int)uVar7 != 0) {
        func_0x00010c20a020(puVar1);
      }
    }
  }
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
LAB_107e390ec:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107e391a4; end: 107e3923b;  */

void FUN_107e391a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bfbbbe0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_2;
      func_0x00010bfbbbc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        func_0x00010c20a020(param_1);
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e3923c; end: 107e3929b;  */

void FUN_107e3923c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010c06d080(), (uVar1 & 1) == 0)) {
    func_0x00010c20a020(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e3929c; end: 107e393d7;  */

void FUN_107e3929c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_2;
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        func_0x00010c20a020(param_1);
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e393d8; end: 107e39413;  */

void FUN_107e393d8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c20a020(param_1,param_2,1,9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e39414; end: 107e3954b; -[SCPreviewDependencyLoadingStates setState:forDependency:] */

undefined8 FUN_107e39414(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar4 == 0) {
    if (param_3 != 1) {
      uVar5 = 0;
      goto LAB_107e3952c;
    }
  }
  else {
    lVar2 = lVar4;
    func_0x00010c2827c0();
    uVar5 = 0;
    if ((param_3 != 2) || (lVar2 != 1)) goto LAB_107e3952c;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beffe80();
  uVar5 = 1;
  if ((int)lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c110ac0();
    _objc_release(param_1);
  }
LAB_107e3952c:
  _objc_release(lVar4);
  return uVar5;
}



/* Entry: 107e3954c; end: 107e39627; -[SCPreviewDependencyLoadingStates stateForType:] */

undefined8 FUN_107e3954c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c067fc0();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  return uVar3;
}



/* Entry: 107e39628; end: 107e39733; -[SCPreviewDependencyLoadingStates allDependenciesLoaded] */

long FUN_107e39628(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00010c2827c0();
        if (lVar2 != 2) {
          lVar3 = 0;
          goto LAB_107e396f4;
        }
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  lVar3 = 1;
LAB_107e396f4:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar3;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + 0x18;
  _objc_loadWeakRetained(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return lVar1;
}



/* Entry: 107e39734; end: 107e3974b; -[SCPreviewDependencyLoadingStates delegate] */

void FUN_107e39734(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e3974c; end: 107e39757; -[SCPreviewDependencyLoadingStates setDelegate:] */

void FUN_107e3974c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107e39758; end: 107e39783; -[SCPreviewDependencyLoadingStates .cxx_destruct] */

void FUN_107e39758(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e39784; end: 107e39863; -[SCPreviewEphemeralMediaList forEachContextSetters:] */

void FUN_107e39784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf98360(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107e39820;
  puStack_30 = &UNK_110a0ec68;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97e80(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e39864; end: 107e398e7; -[SCPreviewEphemeralMediaList setAppMetadataWithAppAttachment:] */

void FUN_107e39864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e398e8;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e398e8; end: 107e398f3;  */

void FUN_107e398e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c168e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAppMetadataWithAppAttachment__112637db0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e398f4; end: 107e39977; -[SCPreviewEphemeralMediaList setTopics:] */

void FUN_107e398f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39978;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39978; end: 107e39983;  */

void FUN_107e39978(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c217ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setTopics__1126638d8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39984; end: 107e39a07; -[SCPreviewEphemeralMediaList setCameosStickersIds:] */

void FUN_107e39984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39a08;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39a08; end: 107e39a13;  */

void FUN_107e39a08(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c175fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setCameosStickersIds__11263b210,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39a14; end: 107e39a97; -[SCPreviewEphemeralMediaList setAuraProfileInfo:] */

void FUN_107e39a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39a98;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39a98; end: 107e39aa3;  */

void FUN_107e39a98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAuraProfileInfo__112638bb0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39aa4; end: 107e39b27; -[SCPreviewEphemeralMediaList setMusicTrack:] */

void FUN_107e39aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39b28;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39b28; end: 107e39b33;  */

void FUN_107e39b28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ca410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMusicTrack__112650328,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39b34; end: 107e39bb7; -[SCPreviewEphemeralMediaList setMusicSelection:] */

void FUN_107e39b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39bb8;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39bb8; end: 107e39bc3;  */

void FUN_107e39bb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ca170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMusicSelection__112650280,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39bc4; end: 107e39c47; -[SCPreviewEphemeralMediaList setMusicStickerStyle:] */

void FUN_107e39bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39c48;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39c48; end: 107e39c53;  */

void FUN_107e39c48(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ca2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMusicStickerStyle__1126502e0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39c54; end: 107e39d0b; -[SCPreviewEphemeralMediaList setRemixSourceSnapId:remixSourceUserId:remixLaunchSource:] */

void FUN_107e39c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107e39d0c;
  puStack_50 = &UNK_110a0ecc8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39d0c; end: 107e39d1b;  */

void FUN_107e39d0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setRemixSourceSnapId_remixSource_112658278,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e39d1c; end: 107e39d9f; -[SCPreviewEphemeralMediaList setRepostSourceSnapId:] */

void FUN_107e39d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39da0;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39da0; end: 107e39dab;  */

void FUN_107e39da0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eb7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setRepostSourceSnapId__112658820,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39dac; end: 107e39dfb; -[SCPreviewEphemeralMediaList setUserDisabledMentionRemixing:] */

void FUN_107e39dac(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_107e39dfc;
  puStack_20 = &UNK_110a0ecf8;
  uStack_18 = param_3;
  func_0x00010bfb47c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 107e39dfc; end: 107e39e07;  */

void FUN_107e39dfc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setUserDisabledMentionRemixing__1126652e0,*(undefined1 *)(param_1 + 0x20)
            );
  return;
}



/* Entry: 107e39e08; end: 107e39edf; -[SCPreviewEphemeralMediaList setSnapKitOAuthClientId:providedAppName:attachmentUrl:] */

void FUN_107e39e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107e39ee0;
  puStack_50 = &UNK_110a0ed18;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39ee0; end: 107e39eef;  */

void FUN_107e39ee0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c204af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setSnapKitOAuthClientId_provided_11265ece0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e39ef0; end: 107e39f73; -[SCPreviewEphemeralMediaList setTimelineMetadataWithConfiguration:] */

void FUN_107e39ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e39f74;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e39f74; end: 107e39f7f;  */

void FUN_107e39f74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c215a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setTimelineMetadataWithConfigura_1126630c0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e39f80; end: 107e3a003; -[SCPreviewEphemeralMediaList setDirectorModeMetadataWithConfiguration:] */

void FUN_107e39f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e3a004;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e3a004; end: 107e3a00f;  */

void FUN_107e3a004(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setDirectorModeMetadataWithConfi_112641318,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e3a010; end: 107e3a093; -[SCPreviewEphemeralMediaList setMultiCamModeMetadataWithContextInfo:] */

void FUN_107e3a010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e3a094;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e3a094; end: 107e3a09f;  */

void FUN_107e3a094(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c9430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMultiCamModeMetadataWithConte_11264ff30,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e3a0a0; end: 107e3a123; -[SCPreviewEphemeralMediaList setCommerceAttachmentV2DataModels:] */

void FUN_107e3a0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e3a124;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e3a124; end: 107e3a12f;  */

void FUN_107e3a124(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setCommerceAttachmentV2DataModel_11263d658,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e3a130; end: 107e3a1b3; -[SCPreviewEphemeralMediaList setShoppingLensProductIds:] */

void FUN_107e3a130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e3a1b4;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e3a1b4; end: 107e3a1bf;  */

void FUN_107e3a1b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ff8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setShoppingLensProductIds__11265d858,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e3a1c0; end: 107e3a243; -[SCPreviewEphemeralMediaList setCTItemInstances:] */

void FUN_107e3a1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e3a244;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}


