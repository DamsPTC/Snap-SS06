/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e85540; end: 107e85547; -[SCMemoriesCollectionViewSelectionHelper tabType] */

undefined8 FUN_107e85540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107e85548; end: 107e8554f; -[SCMemoriesCollectionViewSelectionHelper setTabType:] */

void FUN_107e85548(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 107e85550; end: 107e85557; -[SCMemoriesCollectionViewSelectionHelper cofTweaksProvider] */

undefined8 FUN_107e85550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107e85558; end: 107e85587; -[SCMemoriesCollectionViewSelectionHelper setCofTweaksProvider:] */

void FUN_107e85558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e85588; end: 107e8558f; -[SCMemoriesCollectionViewSelectionHelper selectedItemCount] */

undefined8 FUN_107e85588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107e85590; end: 107e85643; -[SCMemoriesCollectionViewSelectionHelper .cxx_destruct] */

void FUN_107e85590(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107e85644; end: 107e856ff;  */

void FUN_107e85644(double param_1,double param_2,double param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar2 = param_1;
  dVar3 = param_2;
  dVar4 = param_3;
  dVar5 = param_4;
  _objc_release(puVar1);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  param_1 = param_1 + dVar3;
  param_3 = param_3 - (dVar3 + dVar5);
  param_4 = param_4 - (dVar2 + dVar4);
  dVar3 = param_1;
  _CGRectGetHeight(param_1,param_2 + dVar2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2 + dVar2,param_3,param_4);
  dRam0000000113728208 = dVar3 / param_1;
  return;
}



/* Entry: 107e85700; end: 107e857bb;  */

double FUN_107e85700(double param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  if (param_1 == 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _CGRectGetHeight();
    dVar2 = param_1;
    _objc_release(puVar1);
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar3 = 0.0;
    if (0.0 <= param_1 - dVar2) {
      dVar3 = param_1 - dVar2;
    }
  }
  else {
    dVar3 = 0.0;
  }
  return dVar3;
}



/* Entry: 107e857bc; end: 107e8580b;  */

double FUN_107e857bc(double param_1)

{
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return param_1 + 52.0;
}



/* Entry: 107e8580c; end: 107e8599b;  */

void FUN_107e8580c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d80a8;
  _objc_alloc(PTR_PTR_1126d80a8);
  puVar2 = PTR_PTR_1126cfb18;
  func_0x00010c0c7ec0(PTR_PTR_1126cfb18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042820(0x4061800000000000,0x4055400000000000,puVar1,param_2,puVar2,puVar3,puVar4,1,0)
  ;
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e8599c; end: 107e859ff;  */

void FUN_107e8599c(void)

{
  if (lRam0000000113728210 != -1) {
    func_0x00010002a2fc(0x113728210,&PTR___NSConcreteGlobalBlock_110a10600);
  }
  return;
}



/* Entry: 107e85a00; end: 107e85a63;  */

double FUN_107e85a00(int param_1)

{
  undefined *puVar1;
  double in_d3;
  
  if (param_1 == 0) {
    in_d3 = 1.79769313486232e+308;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    in_d3 = in_d3 + 40.0;
    _objc_release(puVar1);
  }
  return in_d3;
}



/* Entry: 107e85a64; end: 107e85a73;  */

void FUN_107e85a64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c237530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126afca8,PTR_s_showErrorWithText__11266b770,param_1);
  return;
}



/* Entry: 107e85a74; end: 107e85adf;  */

void FUN_107e85a74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain();
  func_0x00010c23ba80(puVar2,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(puVar1,param_2,param_1,puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e85ae0; end: 107e85b03; +[SCGalleryCommonUI memoriesBarRedColor] */

void FUN_107e85ae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fee3e3e40000000,0,0x3fcb1b1b20000000,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 107e85b04; end: 107e85b7b; +[SCGalleryCommonUI rotatedImage:orientation:] */

void FUN_107e85b04(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 - 1U < 3) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8a20(*(undefined8 *)(&UNK_10dee81b0 + (param_4 - 1U) * 8),
                        PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e85b7c; end: 107e85bb3; +[SCGalleryCommonUI momentClusterDateFormatterWithIsClusteredByYear:] */

void FUN_107e85b7c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x00010bfbba40(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfbbe20();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e85bb4; end: 107e85c73; +[SCGalleryCommonUI dateTitleForSnap:isClusteredByYear:] */

void FUN_107e85bb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c0fd820(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126cfb18;
  func_0x00010c0d0b60(PTR_PTR_1126cfb18,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e85c74; end: 107e85ceb; +[SCGalleryCommonUI dateTitleForDate:isClusteredByYear:] */

void FUN_107e85c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cfb18;
  _objc_retain(param_3);
  func_0x00010c0d0b60(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e85cec; end: 107e85d9b; -[SCMemoriesBitmojiFetcher initWithBitmojiFetcherForBitmojiSelfieProvider:bitmojiSelfieFetcher:] */

undefined1 *
FUN_107e85cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb780;
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
    func_0x00010be3b720(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e85d9c; end: 107e85e4b; -[SCMemoriesBitmojiFetcher initWithBitmojiFetcherForBitmojiAvatarProvider:bitmojiImageFetcher:] */

undefined1 *
FUN_107e85d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb780;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    func_0x00010be3b720(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e85e4c; end: 107e85ea7; -[SCMemoriesBitmojiFetcher _initializeMemoriesBitmojiFetcher:] */

void FUN_107e85e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x50) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beaaf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBitmojiObserverAndBehavior_112588568);
  return;
}



/* Entry: 107e85ea8; end: 107e85eeb; -[SCMemoriesBitmojiFetcher dealloc] */

void FUN_107e85ea8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c137fe0();
  puStack_28 = PTR_PTR_1126fb780;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107e85eec; end: 107e85f3b; -[SCMemoriesBitmojiFetcher reset] */

void FUN_107e85eec(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e85f3c; end: 107e8601f; -[SCMemoriesBitmojiFetcher setBitmojiImageParamsWithTemplateId:friendAvatarId:scale:imageType:isAnimated:] */

void FUN_107e85f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x50) == 0) {
    puVar1 = PTR_PTR_1126b58e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar2);
    func_0x00010c2bae20(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ae6c0(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b78c0(*(undefined8 *)(param_1 + 0x28),param_2,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2afaa0(*(undefined8 *)(param_1 + 0x28),param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b01a0(*(undefined8 *)(param_1 + 0x28),param_2,param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e86020; end: 107e86133; -[SCMemoriesBitmojiFetcher setBitmojiSelfieRequestWithTemplateId:avatarId:userId:scale:modifier:type:willAcceptPriorAvatarVersion:] */

void FUN_107e86020(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 0x50) == 1) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126afd38;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar3);
    func_0x00010c2bc360(*(undefined8 *)(param_1 + 0x30),param_2,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8ea0(*(undefined8 *)(param_1 + 0x30),param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b78c0(*(undefined8 *)(param_1 + 0x30),param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4100(*(undefined8 *)(param_1 + 0x30),param_2,param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bbd20(*(undefined8 *)(param_1 + 0x30),param_2,param_8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bcea0(*(undefined8 *)(param_1 + 0x30),param_2,param_9);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e86134; end: 107e8636f; -[SCMemoriesBitmojiFetcher _setupBitmojiObserverAndBehavior] */

void FUN_107e86134(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,param_1);
  if (*(long *)(param_1 + 0x50) == 1) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_107e86328;
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15ae00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = auStack_78;
    _objc_copyWeak(puVar8,auStack_48);
    uVar4 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + 0x50) != 0) goto LAB_107e86328;
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_107e86328;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107e86370;
    puStack_58 = &UNK_110843540;
    puVar8 = auStack_50;
    _objc_copyWeak(puVar8,auStack_48);
    uVar4 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(puVar8);
LAB_107e86328:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107e86370; end: 107e8641f;  */

void FUN_107e86370(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    func_0x00010bfa53c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e86420; end: 107e864d3; -[SCMemoriesBitmojiFetcher startFetchingBitmoji] */

void FUN_107e86420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x50) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5560(param_1,param_2,uVar2);
  }
  else {
    if (*(long *)(param_1 + 0x50) != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa53c0(param_1,param_2,uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e864d4; end: 107e8666f; -[SCMemoriesBitmojiFetcher fetchBitmojiAvatarWithAvatarId:] */

void FUN_107e864d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x28) != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar2);
    func_0x00010c2a8ea0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf21f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uVar2 = uVar3;
    func_0x00010bfa5420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    _objc_release(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107e86670; end: 107e8670b;  */

void FUN_107e86670(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_release();
    if ((param_2 != 0) && (lVar2 == lVar3)) {
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x48));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e8670c; end: 107e86897; -[SCMemoriesBitmojiFetcher fetchBitmojiSelfieWithSelfieId:] */

void FUN_107e8670c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x30) != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar2);
    func_0x00010c2b8160(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf21f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bfaa020(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107e86898; end: 107e86933;  */

void FUN_107e86898(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_release();
    if ((param_2 != 0) && (lVar2 == lVar3)) {
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x48));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e86934; end: 107e8693b; -[SCMemoriesBitmojiFetcher bitmojiAvatarObservable] */

undefined8 FUN_107e86934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107e8693c; end: 107e86943; -[SCMemoriesBitmojiFetcher currentBitmojiAvatarId] */

undefined8 FUN_107e8693c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107e86944; end: 107e869df; -[SCMemoriesBitmojiFetcher .cxx_destruct] */

void FUN_107e86944(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 107e869e0; end: 107e86a73; -[SCMemoriesCollectionViewListSection initWithSupplementaryViewProvider:displayDelegate:isHeaderSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107e869e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb788;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithSupplementaryViewProvide_1125f1810,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112770ae4),param_4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112770ae8) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e86a74; end: 107e86b4b; -[SCMemoriesCollectionViewListSection collectionView:willDisplayCell:atIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e86a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_s_collectionView_willDisplayCell_a_1125adb08;
  puStack_48 = PTR_PTR_1126fb788;
  plVar2 = &lStack_50;
  lStack_50 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_collectionView_willDisplayCell_a_1125adb08);
  if ((int)plVar2 != 0) {
    puStack_58 = PTR_PTR_1126fb788;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,puVar1,param_3,param_4,param_5);
  }
  param_1 = param_1 + _DAT_112770ae4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40a60();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e86b4c; end: 107e86baf; -[SCMemoriesCollectionViewListSection collectionViewDidEndDisplayingCell:atIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e86b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112770ae4;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40a40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e86bb0; end: 107e86bbf; -[SCMemoriesCollectionViewListSection sectionContentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e86bb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770ae8);
}



/* Entry: 107e86bc0; end: 107e86bdf; -[SCMemoriesCollectionViewListSection displayDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e86bc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770ae4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e86be0; end: 107e86bf3; -[SCMemoriesCollectionViewListSection setDisplayDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e86be0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770ae4,param_3);
  return;
}



/* Entry: 107e86bf4; end: 107e86c03; -[SCMemoriesCollectionViewListSection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e86bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770ae4);
  return;
}



/* Entry: 107e86c04; end: 107e86c9f; -[SCMemoriesLoadingFooterSectionController initWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107e86c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb790;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112770aec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0x4000000000000000,puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e86ca0; end: 107e86cb3; -[SCMemoriesLoadingFooterSectionController inset] */

undefined8 FUN_107e86ca0(void)

{
  return 0;
}



/* Entry: 107e86cb4; end: 107e86ceb; -[SCMemoriesLoadingFooterSectionController didUpdateToObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e86cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770aec);
  *(undefined8 *)(param_1 + _DAT_112770aec) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e86cec; end: 107e86cf3; -[SCMemoriesLoadingFooterSectionController numberOfItems] */

undefined8 FUN_107e86cec(void)

{
  return 1;
}



/* Entry: 107e86cf4; end: 107e86d63; -[SCMemoriesLoadingFooterSectionController cellForItemAtIndex:] */

void FUN_107e86cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d80b0;
  _objc_opt_class(PTR_PTR_1126d80b0);
  uVar3 = uVar1;
  func_0x00010bf6e020(uVar1,param_2,puVar2,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e86d64; end: 107e86dbb; -[SCMemoriesLoadingFooterSectionController sizeForItemAtIndex:] */

undefined1  [16] FUN_107e86d64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067520();
  uVar1 = param_1;
  func_0x00010bfe0640(PTR_PTR_1126cfb80);
  _objc_release(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107e86dbc; end: 107e86dcf; -[SCMemoriesLoadingFooterSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e86dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770aec,0);
  return;
}



/* Entry: 107e86dd0; end: 107e870db; -[SCMemoriesLoadingFooterCell initWithFrame:] */

undefined8 * FUN_107e86dd0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126fb798;
  puVar2 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)PTR_PTR_1126cfb80;
    _objc_alloc();
    func_0x00010bf20c00(puVar2);
    func_0x00010c013de0();
    puVar4 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    func_0x00010c219b60(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_88 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    puStack_80 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    puStack_78 = puVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  return puVar3;
}



/* Entry: 107e870dc; end: 107e870df; -[SCMemoriesLoadingFooterSectionViewModel diffIdentifier] */

void FUN_107e870dc(void)

{
  return;
}



/* Entry: 107e870e0; end: 107e87157; -[SCMemoriesLoadingFooterSectionViewModel isEqualToDiffableObject:] */

ulong FUN_107e870e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d2158;
    _objc_opt_class(PTR_PTR_1126d2158);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071ae0(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107e87158; end: 107e871ff; -[SCMemoriesLoadingSectionController initWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107e87158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb7a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112770af0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c20fe80(puVar1);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0x3ff0000000000000,puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e87200; end: 107e87213; -[SCMemoriesLoadingSectionController inset] */

undefined8 FUN_107e87200(void)

{
  return 0;
}



/* Entry: 107e87214; end: 107e8724b; -[SCMemoriesLoadingSectionController didUpdateToObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e87214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770af0);
  *(undefined8 *)(param_1 + _DAT_112770af0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e8724c; end: 107e872cf; -[SCMemoriesLoadingSectionController numberOfItems] */

long FUN_107e8724c(double param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010be45fe0();
  lVar1 = 0;
  if ((0.0 < param_1) && (0.0 < param_2)) {
    dVar3 = param_2;
    func_0x00010bf3fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067520();
    _objc_release(param_3);
    dVar2 = (double)(long)(dVar3 / param_2) * 4.0;
    dVar3 = 0.0;
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    lVar1 = (long)dVar3;
  }
  return lVar1;
}



/* Entry: 107e872d0; end: 107e8733f; -[SCMemoriesLoadingSectionController cellForItemAtIndex:] */

void FUN_107e872d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2850;
  _objc_opt_class(PTR_PTR_1126d2850);
  uVar3 = uVar1;
  func_0x00010bf6e020(uVar1,param_2,puVar2,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e87340; end: 107e87343; -[SCMemoriesLoadingSectionController sizeForItemAtIndex:] */

void FUN_107e87340(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be45ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__itemSize_11256f198);
  return;
}



/* Entry: 107e87344; end: 107e873c7; -[SCMemoriesLoadingSectionController _itemSize] */

undefined1  [16] FUN_107e87344(double param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067520();
  dVar2 = (param_1 + -3.0) * 0.25;
  _objc_release(param_2);
  dVar1 = (dVar2 * 5.0) / 3.0;
  if (dVar2 <= 0.0 || dVar1 <= 0.0) {
    dVar1 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar2 = *(double *)PTR__CGSizeZero_110347620;
  }
  auVar3._8_8_ = dVar1;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 107e873c8; end: 107e87497; -[SCMemoriesLoadingSectionController sizeForSupplementaryViewOfKind:atIndex:] */

undefined1  [16]
FUN_107e873c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar2,param_4,param_5);
  if ((int)uVar2 == 0) {
    iVar1 = 0x10ec1a78;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ec1a78,param_4,param_5);
    if (iVar1 == 0) {
      param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
      param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      goto LAB_107e87478;
    }
    func_0x00010bf3fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067520();
  }
  else {
    func_0x00010bf3fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4afe0();
    param_2 = 0x4042800000000000;
  }
  _objc_release(param_3);
LAB_107e87478:
  _objc_release(param_5);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107e87498; end: 107e87513; -[SCMemoriesLoadingSectionController supportedElementKinds] */

void FUN_107e87498(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110ec1a78;
  puVar6 = &uStack_28;
  uVar7 = 2;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar6,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar6);
  uVar3 = *(ulong *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar3,param_2,puVar6);
  if ((uVar3 & 1) == 0) {
    iVar1 = 0x10ec1a78;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ec1a78,param_2,puVar6);
    if (iVar1 != 0) {
      ppuVar8 = &PTR_PTR_1126d80c0;
      goto LAB_107e87580;
    }
  }
  else {
    ppuVar8 = &PTR_PTR_1126d80b8;
LAB_107e87580:
    puVar4 = puVar2;
    func_0x00010bf3fd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *ppuVar8;
    _objc_opt_class(puVar5);
    func_0x00010bf6e100(puVar4,param_2,puVar6,puVar2,puVar5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e87514; end: 107e875ef; -[SCMemoriesLoadingSectionController viewForSupplementaryElementOfKind:atIndex:] */

void FUN_107e87514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    iVar1 = 0x10ec1a78;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ec1a78,param_2,param_3);
    if (iVar1 == 0) {
      uVar5 = 0;
      goto LAB_107e875d0;
    }
    ppuVar6 = &PTR_PTR_1126d80c0;
  }
  else {
    ppuVar6 = &PTR_PTR_1126d80b8;
  }
  uVar3 = param_1;
  func_0x00010bf3fd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *ppuVar6;
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  func_0x00010bf6e100(uVar3,param_2,param_3,param_1,puVar4,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
LAB_107e875d0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107e875f0; end: 107e87603; -[SCMemoriesLoadingSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e875f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770af0,0);
  return;
}



/* Entry: 107e87604; end: 107e87c57; -[SCMemoriesLoadingSectionHeader initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_107e87604(undefined *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *unaff_x19;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar15;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126fb7a8;
  ppuVar13 = &puStack_e8;
  puStack_e8 = param_1;
  _objc_msgSendSuper2(ppuVar13,PTR_s_initWithFrame__1125e2948);
  puVar12 = (undefined *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    func_0x00010befbb60(ppuVar13);
    func_0x00010c219b60(puVar12);
    puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar13;
    ppuStack_f8 = (undefined **)puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = ppuVar2;
    func_0x00010bf493c0(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    puStack_108 = puVar1;
    puStack_b0 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar13;
    puStack_110 = puVar3;
    func_0x00010c08e400(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    puStack_f0 = puVar12;
    puStack_a8 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar13;
    func_0x00010bf1ff80(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar13;
    func_0x00010c1408a0(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_118);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(puStack_110);
    _objc_release(puStack_108);
    _objc_release(ppuStack_100);
    _objc_release(ppuStack_f8);
    unaff_x21 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    puVar12 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(unaff_x21);
    _objc_release(puVar12);
    func_0x00010c165e20(unaff_x21);
    func_0x00010c1c83a0(0x3fe3b13b13b13b14,unaff_x21);
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(unaff_x21);
    _objc_release(puVar12);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e67698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67698,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(unaff_x21);
    _objc_release(ppuVar2);
    puVar12 = puStack_f0;
    func_0x00010befbb60(puStack_f0);
    func_0x00010c219b60(unaff_x21);
    puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = unaff_x21;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    ppuStack_100 = (undefined **)puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x21;
    puStack_c8 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010c08e400(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = unaff_x21;
    puStack_c0 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf1ff80(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = ppuVar13;
    func_0x00010beef8c0(puStack_110);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puStack_108);
    _objc_release(ppuStack_100);
    unaff_x22 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    func_0x00010befbb60(puVar12);
    func_0x00010c219b60(unaff_x22);
    unaff_x19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x23 = unaff_x22;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x21;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = unaff_x23;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x22;
    puStack_d8 = puVar12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x21;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = unaff_x27;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(unaff_x19);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    ppuVar13 = ppuStack_f8;
    _objc_release(puVar12);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    func_0x00010c24dbc0(unaff_x22);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar12 = puStack_f0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107e87c58;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c8 = PTR_PTR_1126fb7b0;
  ppuVar2 = &puStack_1d0;
  puStack_1d0 = puVar12;
  puStack_180 = unaff_x28;
  puStack_178 = unaff_x27;
  puStack_170 = unaff_x26;
  puStack_168 = unaff_x25;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = unaff_x22;
  puStack_148 = unaff_x21;
  ppuStack_140 = ppuVar13;
  puStack_138 = unaff_x19;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithFrame__1125e2948);
  puVar12 = (undefined *)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    puVar12 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar15 = (long)_DAT_112770af4;
    uVar16 = *(undefined8 *)((long)ppuVar2 + lVar15);
    *(undefined **)((long)ppuVar2 + lVar15) = puVar12;
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)ppuVar2 + lVar15);
    func_0x00010bfcd9c0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207c40(0);
    _objc_release(uVar16);
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_1a0 = puVar1;
    func_0x00010bf41680(0x3ff0000000000000,0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_198 = puVar1;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_190 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)ppuVar2 + lVar15));
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar12);
    uVar16 = *(undefined8 *)((long)ppuVar2 + lVar15);
    func_0x00010bfcd9c0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209760(0,0);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)ppuVar2 + lVar15);
    func_0x00010bfcd9c0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)ppuVar2 + lVar15);
    func_0x00010bfcd9c0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar16);
    func_0x00010befbb60(ppuVar2);
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar2 + lVar15));
    puStack_200 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = *(undefined **)((long)ppuVar2 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    puStack_1d8 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1e0 = ppuVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar12;
    uVar17 = *(undefined8 *)((long)ppuVar2 + lVar15);
    puStack_1e8 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    uStack_1f0 = uVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1f8 = ppuVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uVar17;
    uVar18 = *(undefined8 *)((long)ppuVar2 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf1ff80(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b0 = uVar16;
    ppuVar13 = *(undefined ***)((long)ppuVar2 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010c2793a0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_1a8 = ppuVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_200);
    _objc_release(puVar12);
    _objc_release(ppuVar14);
    _objc_release(ppuVar6);
    _objc_release(ppuVar13);
    _objc_release(uVar16);
    _objc_release(ppuVar4);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(ppuStack_1f8);
    _objc_release(uStack_1f0);
    _objc_release(puStack_1e8);
    _objc_release(ppuStack_1e0);
    puVar12 = puStack_1d8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_230;
  pcStack_208 = FUN_107e8804c;
  uVar16 = *(undefined8 *)(puVar12 + _DAT_112770af4);
  ppuStack_220 = ppuVar13;
  ppuStack_218 = ppuVar2;
  ppuStack_210 = &puStack_130;
  func_0x00010bfcd9c0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar16);
  puStack_228 = PTR_PTR_1126fb7b0;
  puStack_230 = puVar12;
  _objc_msgSendSuper2(&puStack_230,PTR_s_dealloc_112525b20);
  return ppuVar4;
}



/* Entry: 107e87c58; end: 107e8804b; -[SCMemoriesLoadingSectionOverlay initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107e87c58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  long lVar15;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126fb7b0;
  puVar1 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar7 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar15 = (long)_DAT_112770af4;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bfcd9c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207c40(0);
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_80 = puVar3;
    func_0x00010bf41680(0x3ff0000000000000,0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_78 = puVar3;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bfcd9c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209760(0,0);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bfcd9c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bfcd9c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar14);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puStack_e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar7 = *(long *)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    lStack_b8 = lVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = lVar7;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar15);
    lStack_c8 = lVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_d0 = uVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar14;
    unaff_x20 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e0);
    _objc_release(puVar2);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(unaff_x20);
    _objc_release(uVar14);
    _objc_release(puVar8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puStack_d8);
    _objc_release(uStack_d0);
    _objc_release(lStack_c8);
    _objc_release(puStack_c0);
    lVar7 = lStack_b8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  plVar13 = &lStack_110;
  pcStack_e8 = FUN_107e8804c;
  uVar14 = *(undefined8 *)(lVar7 + _DAT_112770af4);
  uStack_100 = unaff_x20;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010bfcd9c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar14);
  puStack_108 = PTR_PTR_1126fb7b0;
  lStack_110 = lVar7;
  _objc_msgSendSuper2(&lStack_110,PTR_s_dealloc_112525b20);
  return plVar13;
}



/* Entry: 107e8804c; end: 107e880b3; -[SCMemoriesLoadingSectionOverlay dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8804c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770af4);
  func_0x00010bfcd9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126fb7b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107e880b4; end: 107e88103; -[SCMemoriesLoadingSectionOverlay willMoveToWindow:] */

void FUN_107e880b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb7b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_willMoveToWindow__112687408);
  if (param_3 == 0) {
    func_0x00010bec2da0(param_1);
  }
  return;
}



/* Entry: 107e88104; end: 107e88167; -[SCMemoriesLoadingSectionOverlay didMoveToWindow] */

void FUN_107e88104(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb7b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bebf680(param_1);
  }
  return;
}



/* Entry: 107e88168; end: 107e882bf; -[SCMemoriesLoadingSectionOverlay _setupAnimationIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e88168(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112770af4;
  puVar1 = *(undefined **)(param_1 + lVar4);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_s_locations_112605880;
    _NSStringFromSelector(PTR_s_locations_112605880);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04040(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c192d40(0x4000000000000000,puVar1);
    func_0x00010c216920(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181b50);
    func_0x00010c19bc40(puVar1,param_2,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
    func_0x00010c1ea580(puVar1,param_2,0);
    func_0x00010c1eabe0(0x7f800000,puVar1);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfcd9c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar3);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e882c0; end: 107e88307; -[SCMemoriesLoadingSectionOverlay _startAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e882c0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010beaa860();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770af4);
  func_0x00010bfcd9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e88308; end: 107e88347; -[SCMemoriesLoadingSectionOverlay _stopAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e88308(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770af4);
  func_0x00010bfcd9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e88348; end: 107e8835b; -[SCMemoriesLoadingSectionOverlay .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e88348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770af4,0);
  return;
}



/* Entry: 107e8835c; end: 107e883a7; -[SCMemoriesLoadingSectionViewModel initWithCollectionViewSize:] */

void FUN_107e8835c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb7b8;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 107e883a8; end: 107e883af; -[SCMemoriesLoadingSectionViewModel diffIdentifier] */

void FUN_107e883a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromCGSize_110345858)
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 107e883b0; end: 107e88463; -[SCMemoriesLoadingSectionViewModel isEqualToDiffableObject:] */

ulong FUN_107e883b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      func_0x00010bf7ecc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf7ecc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(uVar1);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107e88464; end: 107e8846b; -[SCMemoriesLoadingSectionViewModel collectionViewSize] */

undefined1  [16] FUN_107e88464(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 107e8846c; end: 107e884e3;  */

void FUN_107e8846c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3fe0000000000000;
  if (param_2 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(uVar1);
  func_0x00010c21e900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e884e4; end: 107e88537; -[SCGalleryTabCollectionView initWithFrame:collectionViewLayout:] */

undefined1 * FUN_107e884e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb7c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_collectionViewLayo_1125e29e0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c181fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e88538; end: 107e88663; -[SCGalleryTabCollectionView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107e88538(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_50;
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + _DAT_112770afc) & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == param_5) {
      func_0x00010bf4cdc0(param_3);
      dVar4 = param_2;
      func_0x00010bf4c7c0(param_3);
      param_2 = param_2 + param_1;
      lVar2 = param_3;
      func_0x00010c0f36c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00();
      if (dVar4 <= 0.0) {
        _objc_release(lVar2);
        if (0.0 <= param_2) goto LAB_107e88590;
      }
      else if (param_2 == 0.0) {
        _objc_release(lVar2);
      }
      else {
        dVar4 = *(double *)(param_3 + _DAT_112770b00);
        _objc_release(lVar2);
        bVar1 = true;
        if ((0.0 <= param_2) && (bVar1 = false, !NAN(param_2) && !NAN(dVar4))) {
          bVar1 = param_2 == dVar4;
        }
        if (!bVar1) goto LAB_107e88590;
      }
      plVar3 = (long *)0x0;
      goto LAB_107e885b4;
    }
  }
LAB_107e88590:
  puStack_48 = PTR_PTR_1126fb7c0;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_gestureRecognizerShouldBegin__1125ce098,param_5);
LAB_107e885b4:
  _objc_release(param_5);
  return (undefined1 *)plVar3;
}



/* Entry: 107e88664; end: 107e88673; -[SCGalleryTabCollectionView isSelecting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e88664(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770afc);
}



/* Entry: 107e88674; end: 107e88683; -[SCGalleryTabCollectionView setIsSelecting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e88674(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112770afc) = param_3;
  return;
}



/* Entry: 107e88684; end: 107e88693; -[SCGalleryTabCollectionView initialTopInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e88684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770b00);
}



/* Entry: 107e88694; end: 107e886a3; -[SCGalleryTabCollectionView setInitialTopInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e88694(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112770b00) = param_1;
  return;
}



/* Entry: 107e886a4; end: 107e886fb; -[SCGalleryTabCollectionViewFlowLayout setMinimumCollectionViewContentHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e886a4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*(double *)(param_2 + _DAT_112770b04) != param_1) {
    *(double *)(param_2 + _DAT_112770b04) = param_1;
    puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8);
    func_0x00010c06a080(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107e886fc; end: 107e8875b; -[SCGalleryTabCollectionViewFlowLayout setBackgroundViewReferenceSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e886fc(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  bool bVar2;
  undefined *puVar3;
  
  pdVar1 = (double *)(param_3 + _DAT_112770b08);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8);
    func_0x00010c06a080(param_3,param_4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107e8875c; end: 107e887bb; -[SCGalleryTabCollectionViewFlowLayout setForegroundViewReferenceSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8875c(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  bool bVar2;
  undefined *puVar3;
  
  pdVar1 = (double *)(param_3 + _DAT_112770b0c);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8);
    func_0x00010c06a080(param_3,param_4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107e887bc; end: 107e88813; -[SCGalleryTabCollectionViewFlowLayout setCollectionViewHeaderHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e887bc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*(double *)(param_2 + _DAT_112770b10) != param_1) {
    *(double *)(param_2 + _DAT_112770b10) = param_1;
    puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8);
    func_0x00010c06a080(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107e88814; end: 107e888c3; -[SCGalleryTabCollectionViewFlowLayout shouldInvalidateLayoutForBoundsChange:] */

void FUN_107e88814(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar2 = param_5;
  dVar3 = param_3;
  dVar4 = param_4;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  bVar1 = false;
  if ((param_3 == dVar3) && (bVar1 = false, !NAN(param_4) && !NAN(dVar4))) {
    bVar1 = param_4 == dVar4;
  }
  if (bVar1) {
    puStack_58 = PTR_PTR_1126fb7c8;
    uStack_60 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                        PTR_s_shouldInvalidateLayoutForBoundsC_112531590);
  }
  return;
}



/* Entry: 107e888c4; end: 107e88987; -[SCGalleryTabCollectionViewFlowLayout invalidationContextForBoundsChange:] */

void FUN_107e888c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fb7c8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar2 = param_1;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_5);
  if (param_1 != dVar2) {
    func_0x00010c1ae7e0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e88988; end: 107e88a7f; -[SCGalleryTabCollectionViewFlowLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107e88988(double param_1,double param_2,double param_3,long param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fb7c8;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_collectionViewContentSize_1125adb90);
  dVar3 = *(double *)(param_4 + _DAT_112770b08 + 8);
  dVar1 = param_1;
  dVar2 = param_2;
  if (0.0 < dVar3) {
    func_0x00010c156120(param_4);
    func_0x00010c156120(param_4);
    dVar1 = dVar3 + dVar1 + param_3;
    dVar2 = dVar1;
    if (dVar1 <= param_2) {
      dVar2 = param_2;
    }
  }
  dVar4 = *(double *)(param_4 + _DAT_112770b0c + 8);
  dVar3 = dVar2;
  if (0.0 < dVar4) {
    func_0x00010c156120(param_4);
    func_0x00010c156120(param_4);
    dVar3 = dVar4 + dVar1 + param_3;
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
  }
  dVar1 = dVar3 + *(double *)(param_4 + _DAT_112770b10);
  if (*(double *)(param_4 + _DAT_112770b10) <= 0.0) {
    dVar1 = dVar3;
  }
  dVar2 = *(double *)(param_4 + _DAT_112770b04);
  if (*(double *)(param_4 + _DAT_112770b04) <= dVar1) {
    dVar2 = dVar1;
  }
  auVar5._8_8_ = dVar2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107e88a80; end: 107e88ed3; -[SCGalleryTabCollectionViewFlowLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e88a80(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = PTR_PTR_1126fb7c8;
  ppuVar2 = &puStack_118;
  dVar16 = param_2;
  uVar10 = param_3;
  uVar18 = param_4;
  puStack_118 = param_5;
  _objc_msgSendSuper2(ppuVar2,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar7 = (undefined *)0x0;
  puVar8 = (undefined *)0x0;
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = *(double *)(param_5 + (long)_DAT_112770b08 + 8);
  dVar15 = dVar16;
  uVar17 = uVar10;
  uVar19 = uVar18;
  if (0.0 < dVar13) {
    puVar9 = param_5;
    func_0x00010be19020();
    iVar1 = (int)puVar9;
    dVar15 = param_2;
    uVar17 = param_3;
    uVar19 = param_4;
    _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar13,dVar16,uVar10,uVar18);
    if (iVar1 != 0) {
      puVar9 = param_5;
      puVar8 = puVar4;
      func_0x00010c08c9e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010befa120(puVar3);
      _objc_release(puVar9);
    }
  }
  dVar13 = *(double *)(param_5 + (long)_DAT_112770b0c + 8);
  dVar16 = dVar15;
  uVar10 = uVar17;
  uVar18 = uVar19;
  if (0.0 < dVar13) {
    puVar9 = param_5;
    func_0x00010be190a0();
    iVar1 = (int)puVar9;
    dVar16 = param_2;
    uVar10 = param_3;
    uVar18 = param_4;
    _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar13,dVar15,uVar17,uVar19);
    if (iVar1 != 0) {
      puVar9 = param_5;
      puVar8 = puVar4;
      func_0x00010c08c9e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010befa120(puVar3);
      _objc_release(puVar9);
    }
  }
  lVar11 = (long)_DAT_112770b10;
  dVar14 = *(double *)(param_5 + lVar11);
  dVar15 = dVar14;
  dVar13 = dVar16;
  uVar17 = uVar10;
  uVar19 = uVar18;
  if (0.0 < dVar14) {
    puVar9 = param_5;
    func_0x00010be19080();
    iVar1 = (int)puVar9;
    dVar15 = param_1;
    dVar13 = param_2;
    uVar17 = param_3;
    uVar19 = param_4;
    _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar14,dVar16,uVar10,uVar18);
    if (iVar1 != 0) {
      dVar15 = 0.0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      _objc_retain(puVar3);
      puVar7 = puVar3;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar12 = *plStack_150;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_150 != lVar12) {
              _objc_enumerationMutation(puVar3);
            }
            uVar10 = *(undefined8 *)(lStack_158 + (long)puVar8 * 8);
            func_0x00010bfb68e0(uVar10);
            dVar13 = *(double *)(param_5 + lVar11) + dVar13;
            func_0x00010c19f0e0(uVar10);
            puVar8 = puVar8 + 1;
          } while (puVar7 != puVar8);
          puVar7 = puVar3;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      puVar9 = param_5;
      puVar8 = puVar4;
      func_0x00010c08c9e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010befa120(puVar3);
      _objc_release(puVar9);
    }
  }
  puVar9 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010c0df2e0();
  _objc_release(puVar9);
  if (0 < (long)puVar5) {
    puVar9 = (undefined *)0x0;
    lVar11 = (long)_DAT_112770b14;
    do {
      puVar5 = param_5 + lVar11;
      _objc_loadWeakRetained();
      puVar6 = puVar5;
      puVar7 = param_5;
      puVar8 = puVar9;
      func_0x00010bfb2ea0();
      dVar16 = dVar15;
      dVar14 = dVar13;
      uVar10 = uVar17;
      uVar18 = uVar19;
      if ((int)puVar6 == 0) {
LAB_107e88e38:
        _objc_release(puVar5);
        dVar15 = dVar16;
        dVar13 = dVar14;
        uVar17 = uVar10;
        uVar19 = uVar18;
      }
      else {
        puVar6 = param_5;
        puVar7 = puVar9;
        func_0x00010be190e0();
        iVar1 = (int)puVar6;
        dVar16 = param_1;
        dVar14 = param_2;
        uVar10 = param_3;
        uVar18 = param_4;
        _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar15,dVar13,uVar17,uVar19);
        _objc_release(puVar5);
        dVar15 = dVar16;
        dVar13 = dVar14;
        uVar17 = uVar10;
        uVar19 = uVar18;
        if (iVar1 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_5;
          puVar8 = puVar5;
          func_0x00010c08c9e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010befa120(puVar3);
          _objc_release(puVar6);
          goto LAB_107e88e38;
        }
      }
      puVar9 = puVar9 + 1;
      puVar5 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0df2e0();
      _objc_release(puVar5);
    } while ((long)puVar9 < (long)puVar6);
  }
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  puVar6 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar2 = &puStack_1a0;
  pcStack_168 = FUN_107e88ed4;
  puStack_190 = puVar9;
  puStack_188 = puVar4;
  puStack_180 = puVar3;
  puStack_178 = puVar5;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  iVar1 = 0x10ec1a18;
  func_0x00010c0720c0();
  if (iVar1 == 0) {
    iVar1 = 0x10ec1a38;
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be190a0(puVar6);
      func_0x00010c19f0e0(puVar5);
      goto LAB_107e88fa0;
    }
    iVar1 = 0x10ec1a58;
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      iVar1 = 0x10ec1a78;
      func_0x00010c0720c0();
      if (iVar1 != 0) {
        puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1554e0(puVar8);
        func_0x00010be190e0(puVar6);
        func_0x00010c19f0e0(puVar5);
        goto LAB_107e88fa0;
      }
      puStack_198 = PTR_PTR_1126fb7c8;
      puStack_1a0 = puVar6;
      _objc_msgSendSuper2(&puStack_1a0,PTR_s_layoutAttributesForSupplementary_112600c88,puVar7,
                          puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)ppuVar2;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be19080(puVar6);
      func_0x00010c19f0e0(puVar5);
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be19020(puVar6);
    func_0x00010c19f0e0(puVar5);
LAB_107e88fa0:
    func_0x00010c227920(puVar5);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e88ed4; end: 107e890a3; -[SCGalleryTabCollectionViewFlowLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

void FUN_107e88ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = 0x10ec1a18;
  func_0x00010c0720c0();
  if (iVar1 == 0) {
    iVar1 = 0x10ec1a38;
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      iVar1 = 0x10ec1a58;
      func_0x00010c0720c0();
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be19080(param_1);
        func_0x00010c19f0e0(puVar2);
        goto LAB_107e88fa4;
      }
      iVar1 = 0x10ec1a78;
      func_0x00010c0720c0();
      if (iVar1 == 0) {
        puStack_38 = PTR_PTR_1126fb7c8;
        uStack_40 = param_1;
        _objc_msgSendSuper2(&uStack_40,PTR_s_layoutAttributesForSupplementary_112600c88,param_3,
                            param_4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107e88fa4;
      }
      puVar2 = (undefined8 *)PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1554e0(param_4);
      func_0x00010be190e0(param_1);
      func_0x00010c19f0e0(puVar2);
    }
    else {
      puVar2 = (undefined8 *)PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be190a0(param_1);
      func_0x00010c19f0e0(puVar2);
    }
  }
  else {
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be19020(param_1);
    func_0x00010c19f0e0(puVar2);
  }
  func_0x00010c227920(puVar2);
LAB_107e88fa4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e890a4; end: 107e89133; -[SCGalleryTabCollectionViewFlowLayout _frameForBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e890a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be07220();
  func_0x00010c156120(param_3);
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 107e89134; end: 107e891c3; -[SCGalleryTabCollectionViewFlowLayout _frameForForegroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e89134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be07220();
  func_0x00010c156120(param_3);
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 107e891c4; end: 107e8926f; -[SCGalleryTabCollectionViewFlowLayout _frameForCollectionViewHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e891c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be07220();
  func_0x00010be07160(param_3);
  func_0x00010c156120(param_3);
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 107e89270; end: 107e892fb; -[SCGalleryTabCollectionViewFlowLayout _effectiveSectionInsets] */

undefined8 FUN_107e89270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c156120();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf40120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c15b1c0();
  func_0x00010c292b00(puVar1,param_3,uVar2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e892fc; end: 107e8939f; -[SCGalleryTabCollectionViewFlowLayout _effectiveContentInsets] */

undefined8 FUN_107e892fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf40120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c15b1c0();
  func_0x00010c292b00(puVar1,param_3,uVar2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e893a0; end: 107e8956f; -[SCGalleryTabCollectionViewFlowLayout _frameForSectionOverlay:] */

undefined8
FUN_107e893a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_7 != 0x7fffffffffffffff) {
    lVar1 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0deec0();
    _objc_release(lVar1);
    if (0 < lVar2) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,0,param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c08c980(param_5,param_6,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      uVar4 = param_1;
      uVar5 = param_2;
      uVar6 = param_3;
      uVar7 = param_4;
      _objc_release(lVar1);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,lVar2 + -1,param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c08c980(param_5,param_6,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(lVar1);
      _objc_release(puVar3);
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
      _CGRectGetMaxY(uVar4,uVar5,uVar6,uVar7);
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      _objc_release(param_5);
      return 0;
    }
  }
  return *(undefined8 *)PTR__CGRectZero_110347608;
}



/* Entry: 107e89570; end: 107e8958f; -[SCGalleryTabCollectionViewFlowLayout delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e89570(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770b14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


