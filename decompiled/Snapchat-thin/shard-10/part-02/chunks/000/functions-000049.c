/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a8e15c; end: 107a8e163; -[SCStoriesOperaMediaManager operaPageDidClose] */

void FUN_107a8e15c(long param_1)

{
  *(undefined1 *)(param_1 + 0x8b) = 0;
  return;
}



/* Entry: 107a8e164; end: 107a8e37f; -[SCStoriesOperaMediaManager prepareToViewStorySnap:completion:] */

void FUN_107a8e164(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be79940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010bfa0a00();
    if (0 < lVar2) {
      func_0x00010be782e0(param_1);
      goto LAB_107a8e318;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    if ((((0x1b < lVar3 + 1U) || ((1L << (lVar3 + 1U & 0x3f) & 0xb4b5dbbU) == 0)) ||
        (0x1a < lVar3 + 1U)) || ((1L << (lVar3 + 1U & 0x3f) & 0x6c6bd77U) == 0)) {
      _objc_release(lVar2);
      func_0x00010be79880(param_1);
      goto LAB_107a8e318;
    }
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    if ((0x1b < lVar3 + 1U) || ((1L << (lVar3 + 1U & 0x3f) & 0xd8de5fdU) == 0)) {
      _objc_release(lVar2);
      func_0x00010be78700(param_1);
      goto LAB_107a8e318;
    }
  }
  else {
    if (param_4 == 0) goto LAB_107a8e318;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107a8e380;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(lVar1);
    lStack_50 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(lStack_50);
    lVar2 = lStack_48;
  }
  _objc_release(lVar2);
LAB_107a8e318:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8e380; end: 107a8e393;  */

void FUN_107a8e380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107a8e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107a8e394; end: 107a8e43f; -[SCStoriesOperaMediaManager _prepareFanPassPlaceholderForStorySnap:completion:] */

void FUN_107a8e394(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010bea67c0(param_1);
  if (param_4 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107a8e440;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107a8e440; end: 107a8e453;  */

void FUN_107a8e440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107a8e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107a8e454; end: 107a8e5fb; -[SCStoriesOperaMediaManager _prepareVideoMediaForStorySnap:completion:] */

void FUN_107a8e454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be78d00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107a8e528;
  puStack_48 = &UNK_1109f86f0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be94a60(param_1,param_2,uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107a8e5fc; end: 107a8e60f;  */

void FUN_107a8e5fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107a8e60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107a8e610; end: 107a8e6b7; -[SCStoriesOperaMediaManager _imageFromData:] */

void FUN_107a8e610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c105b00(param_3);
    func_0x00010be07460(param_1,param_2,lVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if ((int)param_1 == 0) {
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfe9400(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195840();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a8e6b8; end: 107a8e6d3; -[SCStoriesOperaMediaManager _eligibleForNativeWebPDecoder:] */

byte FUN_107a8e6b8(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  if (param_3 == 3) {
    bVar1 = *(byte *)(param_1 + 0x8a);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 107a8e6d4; end: 107a8e6e3; -[SCStoriesOperaMediaManager _eligibleForAsyncImageDecoder:] */

byte FUN_107a8e6d4(long param_1)

{
  return (*(byte *)(param_1 + 0x8b) ^ 0xff) & 1;
}



/* Entry: 107a8e6e4; end: 107a8e85f; -[SCStoriesOperaMediaManager _prepareOperaPropertiesForStorySnap:] */

void FUN_107a8e6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  uVar4 = param_1;
  func_0x00010be853c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puStack_50 = puVar3;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010be94a60(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a8e860; end: 107a8eadf;  */

void FUN_107a8e860(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_107a8eaa8;
  if (param_3 != 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    goto LAB_107a8eaa8;
  }
  lVar3 = param_2;
  func_0x00010bfb1220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    _objc_release(lVar3);
LAB_107a8e948:
    func_0x00010bdf0840(lVar2);
  }
  else {
    lVar4 = param_2;
    func_0x00010c25c760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar5 = param_2;
      func_0x00010c25c760();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf4bee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar6 == 0) goto LAB_107a8e948;
    }
    else {
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c5340(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    func_0x00010be53880(lVar2);
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar1);
    lVar3 = param_2;
    func_0x00010bfb1220(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010be37280(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    func_0x00010be29e00(lVar2);
    _objc_release(uVar7);
    _objc_release(lVar4);
  }
LAB_107a8eaa8:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a8eae0; end: 107a8eb4b;  */

void FUN_107a8eae0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a8eb4c; end: 107a8ece3; -[SCStoriesOperaMediaManager _createNonStreamingAssetAndExtractFirstFrameForStoriesContent:storySnap:loadedPropertiesPromise:] */

void FUN_107a8eb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined1 uStack_58;
  undefined1 auStack_50 [15];
  undefined1 uStack_41;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_41 = 0;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010bee89a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_50,param_1);
  puStack_60 = puVar2;
  _objc_copyWeak(auStack_68,auStack_50);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_58 = uStack_41;
  _objc_retain(param_5);
  func_0x00010be94a60(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8ece4; end: 107a8ee57;  */

void FUN_107a8ece4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      func_0x00010be2b860(lVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      func_0x00010be29e00(lVar2);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a8ee58; end: 107a8ee6f;  */

void FUN_107a8ee58(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 107a8ee70; end: 107a8efbb; -[SCStoriesOperaMediaManager _loadAdditionalPagePropertiesForStorySnap:usingLoadedPageProperties:loadedVideoAsset:firstFrameImage:overlayImage:] */

void FUN_107a8ee70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d53b0;
  _objc_retain(param_5);
  func_0x00010c299200(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d53b0;
  func_0x00010bfb1320(PTR_PTR_1126d53b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d53b0;
  func_0x00010c0efac0(PTR_PTR_1126d53b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221140(param_1,param_2,param_5,puVar1);
  _objc_release(param_5);
  if (param_7 != 0) {
    func_0x00010c1a9f80(param_1,param_2,param_7,puVar3);
  }
  if (param_6 != 0) {
    func_0x00010c1a9f80(param_1,param_2,param_6,puVar2);
  }
  func_0x00010bea67c0(param_1,param_2,param_4,param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a8efbc; end: 107a8f31b; -[SCStoriesOperaMediaManager _handleLoadedVideoAsset:storySnap:storiesContent:useInMemoryDataForAVAsset:completion:] */

void FUN_107a8efbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar5 = param_5;
  func_0x00010bfb1220();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    uVar2 = param_4;
    func_0x00010c0c5340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    func_0x00010be53880(param_1);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x60);
    uVar2 = param_3;
    func_0x00010c0d5720(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    uVar4 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9ed00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    uStack_70 = param_6;
    _objc_retain(param_7);
    func_0x00010c297260(lVar5);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  else {
    uVar2 = param_4;
    func_0x00010c0c5340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    func_0x00010be53880(param_1);
    _objc_release(uVar2);
    lVar1 = param_5;
    func_0x00010bfb1220(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be37280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be29e00(param_1);
  }
  _objc_release(lVar5);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8f31c; end: 107a8f39b;  */

void FUN_107a8f31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29e00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a8f39c; end: 107a8f743; -[SCStoriesOperaMediaManager _handleFirstFrameExtractionCompletionForStorySnap:storiesContent:firstFrameImage:loadedVideoAsset:useInMemoryDataForAVAsset:error:completion:] */

void FUN_107a8f39c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_8 != 0) {
    _objc_release(param_8);
    _objc_release(param_5);
    param_5 = 0;
  }
  lVar5 = param_4;
  func_0x00010c25c760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0ef700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  if (lVar7 == 0) {
    lVar1 = param_4;
    func_0x00010c0db020(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ef700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be37280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010be37280();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c25c760();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_107a8f744;
  uStack_90 = 0x107a8f754;
  _objc_retain(param_6);
  lVar7 = param_6;
  lStack_88 = param_6;
  if ((param_6 == 0) && (lVar5 != 0)) {
    lVar7 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeae60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_a8[5];
    puStack_a8[5] = param_1;
    _objc_release(uVar6);
    _objc_release(lVar7);
    lVar7 = puStack_a8[5];
  }
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd00b8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e3c5d8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(lVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(uVar3);
  func_0x00010c09c660(lVar7);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(param_9);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(lStack_88);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_b0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 107a8f744; end: 107a8f75b;  */

void FUN_107a8f744(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a8f75c; end: 107a8f8db;  */

void FUN_107a8f75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x28));
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107a8f8dc;
  puStack_98 = &UNK_1109f87e0;
  _objc_copyWeak(auStack_58,auStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_50 = *(undefined1 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = uVar1;
  _objc_retain(uVar2);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar3;
  _objc_retain(uVar1);
  uStack_70 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_b0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a8f8dc; end: 107a8f9b3;  */

void FUN_107a8f8dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
  }
  else {
    if ((*(long *)(param_1 + 0x20) != 0) || (*(char *)(param_1 + 0x60) == '\x01')) {
      uVar4 = *(undefined8 *)(lVar1 + 0x78);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf3cf60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    func_0x00010be4e300(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a8f9b4; end: 107a8fba3; -[SCStoriesOperaMediaManager _loadPagePropertiesIfNeededForStorySnap:baseMediaResult:videoAsset:firstFrameImage:overlayImage:completion:] */

void FUN_107a8f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x00010be4e2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_7;
  _objc_retain(param_7);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8fba4; end: 107a8fd33;  */

void FUN_107a8fba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_2);
  }
  else {
    _objc_copyWeak(auStack_58,param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010be4e7c0(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a8fd34; end: 107a8fdb3;  */

void FUN_107a8fd34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar2 + 0x10);
  }
  else {
    func_0x00010be4c8e0(lVar1);
    lVar2 = *(long *)(param_1 + 0x48);
    pcVar4 = *(code **)(lVar2 + 0x10);
    uVar3 = param_2;
  }
  (*pcVar4)(lVar2,uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a8fdb4; end: 107a8ffeb; -[SCStoriesOperaMediaManager _loadSpectaclesPagePropertiesIfNeededForStorySnap:loadedAsset:pageProperties:completion:] */

void FUN_107a8fdb4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  if ((uVar2 < 0x1b) && ((1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0)) {
    func_0x000108544644();
    if (1 < (int)uVar2 - 9U) goto LAB_107a8fe54;
    _objc_release(uVar1);
LAB_107a8feac:
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_107a8f744;
    uStack_60 = 0x107a8f754;
    uVar4 = param_5;
    func_0x00010c0d3c80();
    uVar5 = param_4;
    uStack_58 = uVar4;
    func_0x00010c0d5720(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010bf9ee40(uVar5);
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  else {
LAB_107a8fe54:
    uVar2 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27dd80();
    if ((uVar3 < 0x1b) && ((1L << (uVar3 & 0x3f) & 0x7e7fc60U) != 0)) {
      func_0x000108544644();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 - 0xbU < 2) goto LAB_107a8feac;
    }
    else {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    (**(code **)(param_6 + 0x10))(param_6,param_5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8ffec; end: 107a90097;  */

void FUN_107a8ffec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a90098;
  puStack_60 = &UNK_110992d30;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uStack_58 = uVar1;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  return;
}



/* Entry: 107a90098; end: 107a9019f;  */

void FUN_107a90098(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c141c40();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c27dd80();
    if (uVar2 < 0x1b && (1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0) {
      func_0x000108544644();
    }
    _objc_release(uVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  func_0x000107dc32a8(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  lVar1 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf51e00(uVar4);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107a901a0; end: 107a902cf; -[SCStoriesOperaMediaManager _videoAssetFutureForStoriesContent:storySnap:useInMemoryDataForStorySnap:] */

void FUN_107a901a0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c25c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c0db020(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c23fc80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee8980(param_1,param_2,puVar3,param_4,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar3);
  }
  else {
    uVar2 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeae60(param_1,param_2,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    param_1 = puVar3;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107a902d0; end: 107a903d7; -[SCStoriesOperaMediaManager _videoAssetFutureForData:storySnap:storiesContent:useInMemoryDataForStorySnap:] */

void FUN_107a902d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = 0;
  func_0x00010bc7c628();
  if (iVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010becb120(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010be797a0(param_1,param_2,uVar3,param_3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    *param_6 = 1;
    func_0x00010be79800(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107a903d8; end: 107a9055f; -[SCStoriesOperaMediaManager _queryMediaCoordinatorForStorySnap:] */

void FUN_107a903d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010853acb4(param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c5340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010b26c050(uVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x00010c0c5340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(puVar1);
  func_0x00010c11d460(uVar6);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a90560; end: 107a905f7;  */

void FUN_107a90560(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_2 == 2) {
    lVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      goto LAB_107a905d4;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
  _objc_release(lVar1);
LAB_107a905d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a905f8; end: 107a90a4f; -[SCStoriesOperaMediaManager _loadPagePropertiesForStreamingStorySnap:baseMediaResult:videoAsset:firstFrameImage:overlayImage:] */

void FUN_107a905f8(double param_1,double param_2,long param_3,long param_4,ulong param_5,
                  long param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR_PTR_1126d53b0;
  func_0x00010bfb1320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d53b0;
  puStack_a8 = puVar3;
  func_0x00010c0efac0(PTR_PTR_1126d53b0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d53b0;
  func_0x00010c299200(PTR_PTR_1126d53b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_6 != 0) {
    func_0x00010c23d0a0(param_8);
    func_0x00010c2971c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
    uVar8 = param_5;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c27dd80();
    uVar12 = uVar9 + 1;
    if (uVar12 < 0x1c) {
      if ((1L << (uVar12 & 0x3f) & 0xb4b5dbbU) == 0) {
        uVar2 = 0x484a040;
      }
      else {
        if (((uVar9 + 1 < 0x1b) && ((1L << (uVar9 + 1 & 0x3f) & 0x6c6bd77U) != 0)) || (0x1a < uVar9)
           ) goto LAB_107a90800;
        uVar2 = 0x7e7fc60;
        uVar12 = uVar9;
      }
      if ((1L << (uVar12 & 0x3f) & (ulong)uVar2) == 0) goto LAB_107a90800;
      _objc_release(uVar8);
      func_0x00010c1d0640(puVar5);
    }
    else {
LAB_107a90800:
      _objc_release(uVar8);
    }
    _objc_release(puVar3);
  }
  if (param_9 != 0) {
    func_0x00010c1d0640(puVar5);
  }
  if (param_8 == 0) {
    func_0x00010c1d0640(puVar5);
    if (param_6 != 0) {
      puVar10 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar3 = puVar10;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e3c5d8;
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 1.60807493534087e-314;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107a90a50;
      puStack_88 = &UNK_1109f88b0;
      _objc_retain(puVar5);
      puStack_80 = puVar5;
      puStack_78 = puVar10;
      _objc_retain(puVar10);
      puVar14 = puVar11;
      func_0x00010c09c660(param_7);
      _objc_release(puVar11);
      _objc_release(puStack_78);
      _objc_release(puStack_80);
      goto LAB_107a909ac;
    }
  }
  else {
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
  }
  puVar3 = PTR_PTR_1126ae558;
  puVar10 = puVar5;
  func_0x00010bf51e00();
  puVar14 = puVar10;
  func_0x00010bfe9ca0(puVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_107a909ac:
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puStack_a8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  uVar12 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_107a90a50;
  lStack_e0 = param_8;
  uStack_d8 = param_7;
  lStack_d0 = param_6;
  uStack_c8 = param_5;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (puVar14 == (undefined *)0x0) {
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_4;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c0d5d20(lVar13);
    if (lVar13 == 0) {
      dStack_110 = 0.0;
      dStack_108 = 0.0;
      dStack_100 = 0.0;
      dStack_f8 = 0.0;
    }
    else {
      func_0x00010c106f40(&dStack_110,lVar13);
    }
    dVar15 = dStack_100 * param_2 + dStack_110 * param_1;
    dVar16 = dStack_f8 * param_2 + dStack_108 * param_1;
    _objc_release(lVar13);
  }
  else {
    dVar16 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar15 = *(double *)PTR__CGSizeZero_110347620;
  }
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(dVar15,dVar16,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(uVar12 + 0x20));
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(uVar12 + 0x20);
  uVar1 = *(undefined8 *)(uVar12 + 0x28);
  func_0x00010bf51e00(uVar7);
  func_0x00010bf43d60(uVar1);
  _objc_release(uVar7);
  return;
}



/* Entry: 107a90a50; end: 107a90b67;  */

void FUN_107a90a50(double param_1,double param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  if (param_5 == 0) {
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c0d5d20(lVar2);
    if (lVar2 == 0) {
      dStack_60 = 0.0;
      dStack_58 = 0.0;
      dStack_50 = 0.0;
      dStack_48 = 0.0;
    }
    else {
      func_0x00010c106f40(&dStack_60,lVar2);
    }
    dVar5 = dStack_50 * param_2 + dStack_60 * param_1;
    dVar6 = dStack_48 * param_2 + dStack_58 * param_1;
    _objc_release(lVar2);
  }
  else {
    dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar5 = *(double *)PTR__CGSizeZero_110347620;
  }
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(dVar5,dVar6,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf51e00(uVar4);
  func_0x00010bf43d60(uVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 107a90b68; end: 107a90bb3;  */

undefined8 FUN_107a90b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c6c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107a90bb4; end: 107a90d4b; -[SCStoriesOperaMediaManager _prepareVideoAssetAfterWritingVideoToDisk:data:storiesContent:useInMemoryDataForStorySnap:] */

void FUN_107a90bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  _objc_retain(puVar1);
  func_0x00010beebd60(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a90d4c; end: 107a90dbb;  */

void FUN_107a90d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be337c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a90dbc; end: 107a90f0b; -[SCStoriesOperaMediaManager _handleWriteVideoDataCompletionForVideoURL:data:success:storiesContent:error:useInMemoryDataForStorySnap:promise:] */

void FUN_107a90dbc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,long param_6,undefined8 param_7,undefined1 *param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  if (param_5 == 0) {
    func_0x00010be52640(param_1);
    lVar2 = param_6;
    func_0x00010c0db020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf43ca0(param_9,param_2,param_7);
      goto LAB_107a90ec0;
    }
    *param_8 = 1;
    func_0x00010be797c0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR_PTR_1126bcb80;
    _objc_alloc(PTR_PTR_1126bcb80);
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefc40(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  func_0x00010bf43d60(param_9,param_2,param_1);
  _objc_release(param_1);
LAB_107a90ec0:
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a90f0c; end: 107a90f5b; -[SCStoriesOperaMediaManager _prepareVideoAssetFutureForInMemoryPlaybackUsingData:] */

void FUN_107a90f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be797c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a90f5c; end: 107a90fe3; -[SCStoriesOperaMediaManager _prepareVideoAssetForInMemoryPlaybackUsingData:] */

void FUN_107a90f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bcb80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  func_0x00010c0082a0();
  _objc_release(param_3);
  func_0x00010bfefc40(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a90fe4; end: 107a910f3; -[SCStoriesOperaMediaManager _prepareImageMediaForStorySnapMaybeWithoutThreadHop:completion:] */

void FUN_107a90fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a910f4;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a910f4; end: 107a91127;  */

void FUN_107a910f4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be786e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a91128; end: 107a912b7; -[SCStoriesOperaMediaManager _prepareImageMediaForStorySnap:completion:] */

void FUN_107a91128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107a912b8;
  puStack_70 = &UNK_1109f8910;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010853acb4(param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c5340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010b26c050(uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x00010c0c5340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d620(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a912b8; end: 107a9157b;  */

void FUN_107a912b8(long param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107a8f744;
  uStack_60 = 0x107a8f754;
  uStack_58 = 0;
  if (param_2 == 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar3 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be37280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be37280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_78[5];
    puStack_78[5] = uVar5;
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (lVar4 != 0) {
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x107a91590;
      puStack_e0 = &UNK_1108ac328;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(*(undefined8 *)(param_1 + 0x28));
      uStack_d8 = uVar3;
      uStack_d0 = uVar5;
      _objc_retain(lVar4);
      puStack_b8 = &uStack_80;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lStack_c8 = lVar4;
      _objc_retain(uVar3);
      uStack_c0 = uVar3;
      func_0x000100162d98("APPSTORE",&puStack_f8);
      _objc_release(uStack_c0);
      _objc_release(lStack_c8);
      _objc_release(uStack_d0);
      goto LAB_107a9151c;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    param_4 = puVar1;
  }
  else if (param_4 == (undefined *)0x0) {
    param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107a9157c;
    puStack_98 = &UNK_11084aaa8;
    _objc_retain(lVar4);
    lStack_88 = lVar4;
    _objc_retain(param_4);
    puStack_90 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_b0);
    _objc_release(puStack_90);
    _objc_release(lStack_88);
  }
  lVar4 = 0;
LAB_107a9151c:
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a9157c; end: 107a915ab;  */

void FUN_107a9157c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107a9158c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107a915ac; end: 107a9188b; -[SCStoriesOperaMediaManager _handlePreparedImageForStorySnap:image:overlayImage:completion:] */

void FUN_107a915ac(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR_PTR_1126d53b0;
  func_0x00010bfe8000(PTR_PTR_1126d53b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f80(param_1);
  func_0x00010c1d0640(puVar2);
  if (param_5 != 0) {
    puVar4 = PTR_PTR_1126d53b0;
    func_0x00010c0efac0(PTR_PTR_1126d53b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f80(param_1);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar4);
  }
  uVar5 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c27dd80();
  if ((uVar6 < 0x1b) && ((1L << (uVar6 & 0x3f) & 0x7e7fc60U) != 0)) {
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c27dd80();
    bVar1 = true;
    if ((uVar6 < 0x1b) && ((1L << (uVar6 & 0x3f) & 0x7e7fc60U) != 0)) {
      func_0x000108544644();
      bVar1 = (uint)uVar6 < 0xb;
    }
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0c5340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c27dd80();
    func_0x00010c23d0a0(param_4);
    func_0x000107dc32a8(uVar6,bVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  func_0x00010c1d0640(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf93780(param_4);
  func_0x00010be07420(param_1);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010bea67c0(param_1);
  _objc_release(puVar4);
  if (param_6 != 0) {
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    (**(code **)(param_6 + 0x10))(param_6,puVar4,0);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a9188c; end: 107a91b1b; -[SCStoriesOperaMediaManager updateStoryLoadingLayerImageForStorySnap:loadedImageKey:] */

void FUN_107a9188c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_107a91ab4;
  }
  puVar2 = PTR_PTR_1126d53b0;
  func_0x00010c09d340(PTR_PTR_1126d53b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar3 != 0) && (puVar2 != (undefined *)0x0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar4,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f80(param_1,param_2,uVar4,puVar2);
    _objc_release(uVar4);
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f0c898;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  puVar5 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c27dd80();
  puVar7 = puVar6 + 1;
  if (puVar7 < (undefined *)0x1c) {
    if ((1L << ((ulong)puVar7 & 0x3f) & 0xb4b5dbbU) == 0) {
      uVar1 = 0x484a040;
    }
    else {
      if (((puVar6 + 1 < (undefined *)0x1b) &&
          ((1L << ((ulong)(puVar6 + 1) & 0x3f) & 0x6c6bd77U) != 0)) || ((undefined *)0x1a < puVar6))
      goto LAB_107a91a04;
      uVar1 = 0x7e7fc60;
      puVar7 = puVar6;
    }
    if ((1L << ((ulong)puVar7 & 0x3f) & (ulong)uVar1) == 0) goto LAB_107a91a04;
    _objc_release(puVar5);
    func_0x00010c1d0640(puVar8,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb338,
                        &PTR____CFConstantStringClassReference_110f0c9d8);
  }
  else {
LAB_107a91a04:
    _objc_release(puVar5);
  }
  puVar7 = puVar8;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  puVar6 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010c1d0640(uVar4,param_2,puVar7,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010bf51e00();
  _objc_release(puVar8);
  _objc_release(puVar2);
LAB_107a91ab4:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    puVar7 = puVar5;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar8 = *(undefined **)(param_3 + 0xa0);
      puVar7 = puVar5;
      func_0x00010bf3cf60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar8,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      uVar4 = *(undefined8 *)(param_3 + 0xa0);
      puVar7 = puVar5;
      func_0x00010bf3cf60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar4,param_2,puVar7);
      _objc_release(puVar7);
      puVar2 = puVar8;
      func_0x00010c0e00e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110f0c898);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        func_0x00010c12cae0(param_3,param_2,puVar2);
        _objc_retain(puVar8);
        puVar7 = puVar8;
      }
      _objc_release(puVar2);
      _objc_release(puVar8);
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107a91b1c; end: 107a91c3b; -[SCStoriesOperaMediaManager removeStoryLoadingLayerImageForStorySnap:] */

void FUN_107a91b1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xa0);
    lVar2 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    lVar2 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar1 = lVar3;
    func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f0c898);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      func_0x00010c12cae0(param_1,param_2,lVar1);
      _objc_retain(lVar3);
      lVar2 = lVar3;
    }
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107a91c3c; end: 107a91ccf; -[SCStoriesOperaMediaManager setError:forStorySnap:] */

void FUN_107a91c3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,param_3,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a91cd0; end: 107a91d67; -[SCStoriesOperaMediaManager errorForStorySnap:] */

void FUN_107a91cd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a91d68; end: 107a91dbb; +[SCStoriesOperaMediaManager clientIdFromVideoAssetKey:] */

void FUN_107a91d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110ea2b38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a91dbc; end: 107a91e0b; +[SCStoriesOperaMediaManager videoAssetKeyForStorySnap:] */

void FUN_107a91dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a91e0c; end: 107a91e5b; +[SCStoriesOperaMediaManager firstFrameKeyForStorySnap:] */

void FUN_107a91e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a91e5c; end: 107a91eab; +[SCStoriesOperaMediaManager overlayImageKeyForStorySnap:] */

void FUN_107a91e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a91eac; end: 107a91efb; +[SCStoriesOperaMediaManager imageKeyForStorySnap:] */

void FUN_107a91eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a91efc; end: 107a91f4b; +[SCStoriesOperaMediaManager loadingScreenImageKeyForStorySnap:] */

void FUN_107a91efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a91f4c; end: 107a91fe3; -[SCStoriesOperaMediaManager _preparedPagePropertiesForStorySnap:] */

void FUN_107a91f4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    lVar1 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a91fe4; end: 107a92077; -[SCStoriesOperaMediaManager _setPreparedPageProperties:forStorySnap:] */

void FUN_107a91fe4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    lVar1 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,param_3,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a92078; end: 107a922d3; -[SCStoriesOperaMediaManager removePreparedStorySnap:] */

void FUN_107a92078(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = 0;
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    lVar6 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar5);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0x98);
    lVar1 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_retain(lVar6);
    lVar1 = lVar6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = lVar6;
        func_0x00010c0e00e0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cae0(param_1);
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    func_0x00010c12f0a0(param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    lVar1 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar5);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar5);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    lVar1 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 107a922d4; end: 107a922db; -[SCStoriesOperaMediaManager setImage:forKey:] */

void FUN_107a922d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 107a922dc; end: 107a922e3; -[SCStoriesOperaMediaManager removeImageForKey:] */

void FUN_107a922dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 107a922e4; end: 107a924bb; -[SCStoriesOperaMediaManager imageForKey:completion:] */

void FUN_107a922e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x00010c1504a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        if (puVar4 != (undefined *)0x0) {
          puVar3 = PTR_PTR_1126b4860;
          func_0x00010c0fde60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x58);
          _objc_retain(param_4);
          _objc_retain(param_4);
          _objc_retain(puVar3);
          func_0x00010c09bc40(uVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(param_4);
          _objc_release(puVar3);
          _objc_release(param_4);
          _objc_release(puVar3);
        }
      }
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x28);
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a924bc; end: 107a924eb;  */

void FUN_107a924bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107a924cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 107a924ec; end: 107a924f3; -[SCStoriesOperaMediaManager setVideoAsset:forKey:] */

void FUN_107a924ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 107a924f4; end: 107a92637; -[SCStoriesOperaMediaManager removeVideoForStorySnap:] */

void FUN_107a924f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d53b0;
  func_0x00010c299200(PTR_PTR_1126d53b0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bddfc00(param_1);
    uVar3 = 0;
    func_0x00010bc7c628();
    if ((uVar3 & 1) == 0) {
      uVar4 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becb120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_107a92638;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      _objc_retain(param_1);
      func_0x00010007380c(uVar4,&puStack_58);
      _objc_release(uVar4);
      _objc_release(lStack_38);
      _objc_release(param_1);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107a92638; end: 107a9267b;  */

void FUN_107a92638(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a9267c; end: 107a926db; -[SCStoriesOperaMediaManager videoAssetForKey:] */

void FUN_107a9267c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bee8940(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107a926dc; end: 107a9272b; -[SCStoriesOperaMediaManager videoAssetFutureForKey:] */

void FUN_107a926dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c2991c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a9272c; end: 107a9272f; -[SCStoriesOperaMediaManager resetVideoAssetForKey:] */

void FUN_107a9272c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddfc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupVideoAssetForKey__1125558a0);
  return;
}



/* Entry: 107a92730; end: 107a92857; -[SCStoriesOperaMediaManager _videoAssetForKey:] */

void FUN_107a92730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d53b0;
    func_0x00010bf3cfa0(PTR_PTR_1126d53b0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0e00e0(uVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdeae60(param_1,param_2,uVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,lVar5,param_3);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(lVar1);
    lVar5 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107a92858; end: 107a928fb; -[SCStoriesOperaMediaManager _writeVideoData:toURL:storiesContent:completion:] */

void FUN_107a92858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c14e080();
  _objc_retain(0);
  if ((int)param_3 != 0) {
    func_0x00010befb520(param_4);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_3,0);
  _objc_release(0);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107a928fc; end: 107a92987; -[SCStoriesOperaMediaManager _cleanupVideoAssetForKey:] */

void FUN_107a928fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128420(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a92988; end: 107a92993; -[SCStoriesOperaMediaManager _logDiskWriteFailure] */

void FUN_107a92988(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a072a0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107a92994; end: 107a92a2b; -[SCStoriesOperaMediaManager _logFirstFrameGenerationIsServerSide:storyType:] */

void FUN_107a92994(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d23ed0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108534a80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cd09cc(uVar3,puVar1,param_4,uVar2,1);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a92a2c; end: 107a92ab3; -[SCStoriesOperaMediaManager _resolveFuture:withCompletion:] */

void FUN_107a92a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107a92ab4;
  puStack_30 = &UNK_110843510;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(param_3,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 107a92ab4; end: 107a92abf;  */

void FUN_107a92ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107a92abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107a92ac0; end: 107a92b3b; -[SCStoriesOperaMediaManager _tempVideoURLForClientId:] */

void FUN_107a92ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4e638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar2,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a92b3c; end: 107a92e1f; -[SCStoriesOperaMediaManager _createAssetWithContent:clientId:] */

void FUN_107a92b3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000108ea5f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010becb120(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bcb80;
    _objc_alloc(PTR_PTR_1126bcb80);
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefc40(puVar5,param_2,puVar4);
    _objc_release(puVar4);
LAB_107a92c78:
    _objc_release(param_1);
  }
  else {
    lVar2 = param_3;
    func_0x00010c25c760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    lVar2 = param_3;
    if (lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c25c760();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010bf4bee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar6 == 0) {
        puVar5 = PTR_PTR_1126bcb80;
        _objc_alloc(PTR_PTR_1126bcb80);
        puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
        param_1 = param_3;
        func_0x00010c0db020(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010c23fc80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0082a0(puVar4,param_2,lVar2,*(undefined8 *)PTR__kUTTypeMPEG4_11034b1e8);
        func_0x00010bfefc40(puVar5,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(lVar2);
        goto LAB_107a92c78;
      }
      puVar4 = *(undefined **)(param_1 + 0x50);
      func_0x00010c269d40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25c760(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf4bee0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c25c760(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf4bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf57a00(puVar4,param_2,lVar3,lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    else {
      puVar4 = *(undefined **)(param_1 + 0x50);
      func_0x00010c269d40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25c760(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf4d380();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf549c0(puVar4,param_2,lVar3,uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar4);
    func_0x00010c222620(puVar5,param_2,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a92e20; end: 107a92e27; -[SCStoriesOperaMediaManager preparedStoryPageProperties] */

undefined8 FUN_107a92e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107a92e28; end: 107a92e2f; -[SCStoriesOperaMediaManager loadingBackgroundImagePreparedStoryPageProperties] */

undefined8 FUN_107a92e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107a92e30; end: 107a92f13; -[SCStoriesOperaMediaManager .cxx_destruct] */

void FUN_107a92e30(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a92f14; end: 107a92f1f; +[SCDiscoverSubscriptionSession announcerIdentifier] */

undefined ** FUN_107a92f14(void)

{
  return &PTR____CFConstantStringClassReference_110eabbd8;
}



/* Entry: 107a92f20; end: 107a92faf; -[SCDiscoverSubscriptionSession initWithSubscribeActionHandler:] */

undefined1 * FUN_107a92f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f99d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a92fb0; end: 107a92ff7; -[SCDiscoverSubscriptionSession dealloc] */

void FUN_107a92fb0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126f99d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107a92ff8; end: 107a930b3; -[SCDiscoverSubscriptionSession registeredEventsForOperaSession] */

void FUN_107a92ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9ce8;
  func_0x00010c260740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9ce8;
  puStack_48 = puVar1;
  func_0x00010c260520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  uVar4 = uVar7;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  if ((uVar5 & 1) == 0) {
    _objc_retain(uVar4);
    uVar6 = *(undefined8 *)(puVar1 + 0x10);
    *(ulong *)(puVar1 + 0x10) = uVar4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar1 + 0x20) = 0;
    _objc_release(uVar6);
  }
  func_0x00010c06b7e0(uVar7);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107a930b4; end: 107a93137; -[SCDiscoverSubscriptionSession operaViewDidSendEvent:page:params:] */

void FUN_107a930b4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar3);
  }
  func_0x00010c06b7e0(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a93138; end: 107a931bf; -[SCDiscoverSubscriptionSession extraProperties] */

void FUN_107a93138(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (*(long *)(param_1 + 0x20) != 0) {
    ppuStack_28 = &PTR____CFConstantStringClassReference_110f0c7b8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_20 = *(long *)(param_1 + 0x20);
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_20,&ppuStack_28,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a931c0; end: 107a931d7; -[SCDiscoverSubscriptionSession playlistItemController] */

void FUN_107a931c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a931d8; end: 107a931e3; -[SCDiscoverSubscriptionSession setPlaylistItemController:] */

void FUN_107a931d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107a931e4; end: 107a9322f; -[SCDiscoverSubscriptionSession .cxx_destruct] */

void FUN_107a931e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a93230; end: 107a9339f;  */

long * FUN_107a93230(long param_1,undefined8 param_2,undefined1 *param_3,long *param_4,long param_5,
                    long param_6,long param_7,long param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  byte bVar11;
  long *plVar12;
  long unaff_x25;
  long lVar13;
  long unaff_x26;
  long lVar14;
  long unaff_x27;
  long unaff_x28;
  long lStack_1b8;
  undefined *puStack_1b0;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar9 = param_1;
  func_0x00010bf529e0();
  if (lVar9 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    lStack_108 = 0;
    lStack_110 = 0;
    lStack_f8 = 0;
    lStack_100 = 0;
    lStack_128 = 0;
    lStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_1);
    param_4 = &lStack_e8;
    param_5 = 0x10;
    lVar9 = param_1;
    func_0x00010bf52a60();
    if (lVar9 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)0x0;
      lVar13 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(param_1);
          }
          lVar4 = *(long *)(lStack_128 + lVar14 * 8);
          func_0x00010bf0a640();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0b4ca0();
          plVar12 = (long *)(lVar6 + (long)plVar12);
          _objc_release(lVar5);
          _objc_release(lVar4);
          lVar14 = lVar14 + 1;
        } while (lVar9 != lVar14);
        param_4 = &lStack_e8;
        param_5 = 0x10;
        lVar9 = param_1;
        plVar7 = &lStack_130;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(param_1);
    param_3 = (undefined1 *)plVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar3 = lStack_68;
    lVar4 = lStack_f8;
    lVar6 = lStack_100;
    lVar5 = lStack_108;
    lVar14 = lStack_110;
    uVar2 = uStack_118;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar2);
    _objc_retain(lVar14);
    _objc_retain(lVar5);
    _objc_retain(lVar6);
    _objc_retain(lVar4);
    _objc_retain(lStack_f0);
    _objc_retain(lStack_e8);
    _objc_retain(lStack_e0);
    _objc_retain(lStack_d8);
    _objc_retain(lStack_d0);
    _objc_retain(lStack_c8);
    _objc_retain(lStack_c0);
    _objc_retain(lStack_b8);
    _objc_retain(lStack_b0);
    _objc_retain(lStack_a8);
    _objc_retain(lStack_a0);
    _objc_retain(lStack_80);
    _objc_retain(lStack_78);
    _objc_retain(lStack_70);
    _objc_retain(lVar3);
    _objc_retain(unaff_x28);
    _objc_retain();
    _objc_retain(unaff_x25);
    puStack_1b0 = PTR_PTR_1126f99d8;
    plVar7 = &lStack_1b8;
    lStack_1b8 = param_1;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
    lVar13 = lStack_128;
    lVar9 = lStack_130;
    if (plVar7 != (long *)0x0) {
      uVar1 = plStack_120._0_1_;
      _objc_storeWeak(plVar7 + 0x3e,uVar2);
      _objc_retain(param_3);
      lVar8 = plVar7[0x39];
      plVar7[0x39] = (long)param_3;
      _objc_release(lVar8);
      _objc_retain(param_4);
      lVar8 = plVar7[0x38];
      plVar7[0x38] = (long)param_4;
      _objc_release(lVar8);
      _objc_retain(param_5);
      lVar8 = plVar7[5];
      plVar7[5] = param_5;
      _objc_release(lVar8);
      plVar7[0xc] = lVar13;
      plVar7[0xd] = param_6;
      plVar7[6] = param_7;
      plVar7[0x3b] = param_8;
      plVar7[0xb] = lVar9;
      _objc_retain(lVar14);
      lVar9 = plVar7[1];
      plVar7[1] = lVar14;
      _objc_release(lVar9);
      _objc_retain(lVar6);
      lVar9 = plVar7[2];
      plVar7[2] = lVar6;
      _objc_release(lVar9);
      _objc_retain(lVar5);
      lVar9 = plVar7[3];
      plVar7[3] = lVar5;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126d62b0;
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = plVar7[4];
      plVar7[4] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126b46f0;
      _objc_opt_new();
      lVar9 = plVar7[0xf];
      plVar7[0xf] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126b46f0;
      _objc_opt_new();
      lVar9 = plVar7[0x10];
      plVar7[0x10] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126b46f0;
      _objc_opt_new();
      lVar9 = plVar7[0x11];
      plVar7[0x11] = (long)puVar10;
      _objc_release(lVar9);
      lVar9 = plVar7[5];
      func_0x00010c135d00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = plVar7[7];
      plVar7[7] = lVar9;
      _objc_release(lVar13);
      *(undefined1 *)(plVar7 + 0x15) = uVar1;
      plVar12 = plVar7;
      func_0x00010be40b40();
      *(char *)(plVar7 + 0xe) = (char)plVar12;
      puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = plVar7[0x14];
      plVar7[0x14] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar9 = plVar7[0x13];
      plVar7[0x13] = (long)puVar10;
      _objc_release(lVar9);
      plVar7[8] = 0;
      plVar7[0x3c] = 0;
      plVar7[0x3d] = 0;
      _objc_retain(lStack_f0);
      lVar9 = plVar7[0x17];
      plVar7[0x17] = lStack_f0;
      _objc_release(lVar9);
      _objc_retain(lStack_c8);
      lVar9 = plVar7[0x1d];
      plVar7[0x1d] = lStack_c8;
      _objc_release(lVar9);
      _objc_retain(lVar4);
      lVar9 = plVar7[0x16];
      plVar7[0x16] = lVar4;
      _objc_release(lVar9);
      _objc_retain(lStack_e8);
      lVar9 = plVar7[0x18];
      plVar7[0x18] = lStack_e8;
      _objc_release(lVar9);
      _objc_retain(lStack_e0);
      lVar9 = plVar7[0x19];
      plVar7[0x19] = lStack_e0;
      _objc_release(lVar9);
      _objc_retain(lStack_d8);
      lVar9 = plVar7[0x1c];
      plVar7[0x1c] = lStack_d8;
      _objc_release(lVar9);
      _objc_retain(lStack_d0);
      lVar9 = plVar7[0x3f];
      plVar7[0x3f] = lStack_d0;
      _objc_release(lVar9);
      _objc_retain(lStack_b0);
      lVar9 = plVar7[0x40];
      plVar7[0x40] = lStack_b0;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126ae720;
      _objc_retain(lStack_c0);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = plVar7[0x22];
      plVar7[0x22] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126ae720;
      _objc_retain(lStack_c0);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = plVar7[0x23];
      plVar7[0x23] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126ae720;
      _objc_retain(lStack_c0);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = plVar7[0x24];
      plVar7[0x24] = (long)puVar10;
      _objc_release(lVar9);
      _objc_retain(lStack_a8);
      lVar9 = plVar7[0x25];
      plVar7[0x25] = lStack_a8;
      _objc_release(lVar9);
      _objc_retain(lStack_a0);
      lVar9 = plVar7[0x26];
      plVar7[0x26] = lStack_a0;
      _objc_release(lVar9);
      plVar7[0x27] = lStack_98;
      _objc_retain(lStack_b8);
      lVar9 = plVar7[0x1e];
      plVar7[0x1e] = lStack_b8;
      _objc_release(lVar9);
      plVar7[0x28] = lStack_90;
      _objc_retain(lStack_c0);
      lVar9 = plVar7[10];
      plVar7[10] = lStack_c0;
      _objc_release(lVar9);
      *(undefined1 *)(plVar7 + 0x29) = uStack_88;
      lVar9 = lStack_b8;
      func_0x00010c25a560();
      *(char *)(plVar7 + 0x2b) = (char)lVar9;
      puVar10 = PTR_PTR_1126c22f8;
      func_0x00010bf526c0(PTR_PTR_1126c22f8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lStack_b8;
      func_0x00010bf1f320();
      *(char *)((long)plVar7 + 0x15a) = (char)lVar9;
      _objc_release(puVar10);
      if ((*(byte *)(plVar7 + 0x2b) & 1) == 0) {
        bVar11 = *(byte *)((long)plVar7 + 0x15a);
      }
      else {
        bVar11 = 1;
      }
      *(byte *)((long)plVar7 + 0x159) = bVar11 & 1;
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar9 = plVar7[0x2d];
      plVar7[0x2d] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      lVar9 = plVar7[0x2c];
      plVar7[0x2c] = (long)puVar10;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126ae810;
      _objc_opt_new();
      lVar9 = plVar7[0x2e];
      plVar7[0x2e] = (long)puVar10;
      _objc_release(lVar9);
      plVar7[0x2f] = 0;
      _objc_retain(lStack_80);
      lVar9 = plVar7[0x2a];
      plVar7[0x2a] = lStack_80;
      _objc_release(lVar9);
      _objc_retain(lStack_78);
      lVar9 = plVar7[0x30];
      plVar7[0x30] = lStack_78;
      _objc_release(lVar9);
      _objc_retain(lStack_70);
      lVar9 = plVar7[0x31];
      plVar7[0x31] = lStack_70;
      _objc_release(lVar9);
      _objc_retain(lVar3);
      lVar9 = plVar7[0x32];
      plVar7[0x32] = lVar3;
      _objc_release(lVar9);
      _objc_retain(unaff_x28);
      lVar9 = plVar7[0x33];
      plVar7[0x33] = unaff_x28;
      _objc_release(lVar9);
      plVar7[0x34] = unaff_x27;
      _objc_retain(unaff_x26);
      lVar9 = plVar7[0x35];
      plVar7[0x35] = unaff_x26;
      _objc_release(lVar9);
      _objc_retain(unaff_x25);
      lVar9 = plVar7[0x36];
      plVar7[0x36] = unaff_x25;
      _objc_release(lVar9);
      func_0x00010bec7f60(plVar7);
      _objc_release(lStack_c0);
      _objc_release(lStack_c0);
      _objc_release(lStack_c0);
    }
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    _objc_release(unaff_x28);
    _objc_release(lVar3);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_release(lStack_a0);
    _objc_release(lStack_a8);
    _objc_release(lStack_b0);
    _objc_release(lStack_b8);
    _objc_release(lStack_c0);
    _objc_release(lStack_c8);
    _objc_release(lStack_d0);
    _objc_release(lStack_d8);
    _objc_release(lStack_e0);
    _objc_release(lStack_e8);
    _objc_release(lStack_f0);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    return plVar7;
  }
  return plVar12;
}



/* Entry: 107a933a0; end: 107a93c2b; -[SCSingleStoryViewingSession initWithFirstStorySnap:storiesPlaybackSequence:userSession:storyPlayMode:viewingType:storyViewingActionContext:viewLocation:viewLocationPos:didEnterFromInterstitial:friendStoryViewingSession:storiesBlizzardLogger:unlockableBlizzardLogger:loggingInfo:storiesPlaybackDataProvider:unlockableViewTracker:snapchatterFetcher:snapchatterPublicInfoFetcher:readReceiptCoordinator:entryInteraction:grapheneMetricsEmitter:circumstanceEngine:storiesConfigProvider:storyViewId:discoverFeedEventsController:operaSessionId:pageType:triggeringSection:movedToDifferentStory:operaAnalyticsEventObservable:contentSharerUserId:contentSharerMischiefId:contentShareId:searchSessionId:searchQueryId:searchActionId:searchResultRankingId:] */

undefined8 *
FUN_107a933a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined1 param_31,undefined4 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain();
  _objc_retain(param_40);
  puStack_80 = PTR_PTR_1126f99d8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0x3e,param_13);
    _objc_retain(param_3);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar1[0xc] = param_10;
    puVar1[0xd] = param_6;
    puVar1[6] = param_7;
    puVar1[0x3b] = param_8;
    puVar1[0xb] = param_9;
    _objc_retain(param_14);
    uVar2 = puVar1[1];
    puVar1[1] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[2];
    puVar1[2] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[3];
    puVar1[3] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d62b0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[5];
    func_0x00010c135d00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar6);
    *(undefined1 *)(puVar1 + 0x15) = param_11;
    puVar4 = puVar1;
    func_0x00010be40b40();
    *(char *)(puVar1 + 0xe) = (char)puVar4;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puVar1[8] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_26;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_24);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_24);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_24);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_28;
    _objc_release(uVar2);
    puVar1[0x27] = param_29;
    _objc_retain(param_25);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_25;
    _objc_release(uVar2);
    puVar1[0x28] = param_30;
    _objc_retain(param_24);
    uVar2 = puVar1[10];
    puVar1[10] = param_24;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x29) = param_31;
    uVar2 = param_25;
    func_0x00010c25a560();
    *(char *)(puVar1 + 0x2b) = (char)uVar2;
    puVar3 = PTR_PTR_1126c22f8;
    func_0x00010bf526c0(PTR_PTR_1126c22f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_25;
    func_0x00010bf1f320();
    *(char *)((long)puVar1 + 0x15a) = (char)uVar2;
    _objc_release(puVar3);
    if ((*(byte *)(puVar1 + 0x2b) & 1) == 0) {
      bVar5 = *(byte *)((long)puVar1 + 0x15a);
    }
    else {
      bVar5 = 1;
    }
    *(byte *)((long)puVar1 + 0x159) = bVar5 & 1;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    _objc_release(uVar2);
    puVar1[0x2f] = 0;
    _objc_retain(param_33);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_37;
    _objc_release(uVar2);
    puVar1[0x34] = param_38;
    _objc_retain(param_39);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_40;
    _objc_release(uVar2);
    func_0x00010bec7f60(puVar1);
    _objc_release(param_24);
    _objc_release(param_24);
    _objc_release(param_24);
  }
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a93c2c; end: 107a93cd3;  */

void FUN_107a93c2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f54774(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 107a93cd4; end: 107a93d07; -[SCSingleStoryViewingSession dealloc] */

void FUN_107a93cd4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f99d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107a93d08; end: 107a93d3f; -[SCSingleStoryViewingSession startViewingSessionIsViewingLongform:] */

void FUN_107a93d08(long param_1)

{
  if (*(long *)(param_1 + 0x1c0) != 0) {
    func_0x00010bede900();
    func_0x00010c138160(*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  return;
}



/* Entry: 107a93d40; end: 107a93d6f; -[SCSingleStoryViewingSession resumeViewingSession] */

void FUN_107a93d40(long param_1)

{
  func_0x00010bede900();
  func_0x00010c24d960(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



/* Entry: 107a93d70; end: 107a93f87; -[SCSingleStoryViewingSession _updateRequestManagerContexts] */

void FUN_107a93d70(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x1c0) != 0) {
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x000108535b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
    lVar8 = *(long *)(param_1 + 0x58);
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 5) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_60 = puVar1;
      puStack_58 = puVar3;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dd4898);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = PTR_PTR_1126b19f8;
      puStack_80 = puVar1;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_78 = puVar4;
      puStack_70 = puVar3;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dd4898);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_68 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar1);
    func_0x00010be90d20(param_1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar1 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
    func_0x00010c1835e0();
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release();
    param_1 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b19f8;
  lVar8 = *(long *)(param_1 + 0x1d0);
  puVar1 = param_3;
  if ((lVar8 == 0) && (lVar8 = *(long *)(param_1 + 0x1c8), lVar8 == 0)) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b300(puVar3,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar8);
    func_0x00010bf09f60(param_3,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a93f88; end: 107a9405b; -[SCSingleStoryViewingSession _requestContextsByAddingStorySnapViewingSessionIfNeeded:] */

void FUN_107a93f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b19f8;
  lVar1 = *(long *)(param_1 + 0x1d0);
  uVar4 = param_3;
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + 0x1c8), lVar1 == 0)) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b300(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf09f60(param_3,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107a9405c; end: 107a9406b; -[SCSingleStoryViewingSession didOpenFriendStorySnap:] */

void FUN_107a9405c(long param_1)

{
  *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
  return;
}


