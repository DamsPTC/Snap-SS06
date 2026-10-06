/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084baa2c; end: 1084bad6f; -[SCAdLifecycleEvent subType] */

undefined8 FUN_1084baa2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bad70; end: 1084baf13;  */

void FUN_1084bad70(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1084baf14; end: 1084bb2fb; -[SCAdLifecycleEvent parserSymbol] */

void FUN_1084baf14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084bb2fc;
  uStack_40 = 0x1084bb30c;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1084bb2fc;
  uStack_70 = 0x1084bb30c;
  uVar2 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = uVar1;
  _objc_release(uVar2);
  func_0x00010c27dd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084bb2fc; end: 1084bb34b;  */

void FUN_1084bb2fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1084bb34c; end: 1084bb473;  */

void FUN_1084bb34c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ddf358);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ddf398);
    if ((int)uVar2 == 0) goto LAB_1084bb3bc;
    ppuVar3 = &PTR____CFConstantStringClassReference_110ddf3b8;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ddf378;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined ***)(lVar4 + 0x28) = ppuVar3;
  _objc_release(uVar2);
LAB_1084bb3bc:
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined ***)(lVar4 + 0x28) = &PTR____CFConstantStringClassReference_110ddd7d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084bb474; end: 1084bb4e3;  */

void FUN_1084bb474(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110ddf458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bb4e4; end: 1084bb577;  */

void FUN_1084bb4e4(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddf518;
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddf538;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084bb578; end: 1084bb5b3;  */

void FUN_1084bb578(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if (param_2 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ede738;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110ede758;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bb5b4; end: 1084bb617;  */

void FUN_1084bb5b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_2 - 1U < 9) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = (&PTR_PTR_110a4ef28)[param_2 - 1U];
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1084bb618; end: 1084bb727;  */

void FUN_1084bb618(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 - 1U < 5) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = (&PTR_PTR_110a4ef70)[param_2 - 1U];
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1084bb728; end: 1084bb91b; -[SCAdLifecycleEvent isOnAttachment] */

undefined1 FUN_1084bb728(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bb91c; end: 1084bb9e7;  */

void FUN_1084bb91c(void)

{
  return;
}



/* Entry: 1084bb9e8; end: 1084bbb5f; -[SCAdLifecycleEvent attachmentPeeked] */

undefined1 FUN_1084bb9e8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bbb60; end: 1084bbbbf;  */

void FUN_1084bbb60(void)

{
  return;
}



/* Entry: 1084bbbc0; end: 1084bbc03; -[SCAdLifecycleEvent isForegroundToAttachment] */

undefined8 FUN_1084bbbc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f4880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1084bbc04; end: 1084bbd9f; -[SCAdLifecycleEvent isExternal] */

undefined1 FUN_1084bbc04(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bbda0; end: 1084bbe13;  */

void FUN_1084bbda0(void)

{
  return;
}



/* Entry: 1084bbe14; end: 1084bbf8b; -[SCAdLifecycleEvent isExitAd] */

undefined1 FUN_1084bbe14(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bbf8c; end: 1084bbfeb;  */

void FUN_1084bbf8c(void)

{
  return;
}



/* Entry: 1084bbfec; end: 1084bc187; -[SCAdLifecycleEvent attachmentTriggerType] */

undefined8 FUN_1084bbfec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bc188; end: 1084bc1f3;  */

void FUN_1084bc188(void)

{
  return;
}



/* Entry: 1084bc1f4; end: 1084bc38f; -[SCAdLifecycleEvent attachmentFailError] */

void FUN_1084bc1f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bc390; end: 1084bc39f;  */

void FUN_1084bc390(void)

{
  return;
}



/* Entry: 1084bc3a0; end: 1084bc3d7;  */

void FUN_1084bc3a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bc3d8; end: 1084bc417;  */

void FUN_1084bc3d8(void)

{
  return;
}



/* Entry: 1084bc418; end: 1084bc5d7; -[SCAdLifecycleEvent collectionItemIndex] */

void FUN_1084bc418(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084bb2fc;
  uStack_40 = 0x1084bb30c;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bc5d8; end: 1084bc5df;  */

void FUN_1084bc5d8(void)

{
  return;
}



/* Entry: 1084bc5e0; end: 1084bc64f;  */

void FUN_1084bc5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bc650; end: 1084bc693;  */

void FUN_1084bc650(void)

{
  return;
}



/* Entry: 1084bc694; end: 1084bc80b; -[SCAdLifecycleEvent deeplinkEventType] */

undefined8 FUN_1084bc694(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bc80c; end: 1084bc86b;  */

void FUN_1084bc80c(void)

{
  return;
}



/* Entry: 1084bc86c; end: 1084bca07; -[SCAdLifecycleEvent deeplinkUrl] */

void FUN_1084bc86c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bca08; end: 1084bca33;  */

void FUN_1084bca08(void)

{
  return;
}



/* Entry: 1084bca34; end: 1084bca6b;  */

void FUN_1084bca34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bca6c; end: 1084bca8f;  */

void FUN_1084bca6c(void)

{
  return;
}



/* Entry: 1084bca90; end: 1084bcc07; -[SCAdLifecycleEvent customProductPageEnabled] */

undefined1 FUN_1084bca90(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bcc08; end: 1084bcc67;  */

void FUN_1084bcc08(void)

{
  return;
}



/* Entry: 1084bcc68; end: 1084bce03; -[SCAdLifecycleEvent focusItemIndex] */

void FUN_1084bcc68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bce04; end: 1084bce37;  */

void FUN_1084bce04(void)

{
  return;
}



/* Entry: 1084bce38; end: 1084bce7f;  */

void FUN_1084bce38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084bce80; end: 1084bce9b;  */

void FUN_1084bce80(void)

{
  return;
}



/* Entry: 1084bce9c; end: 1084bd037; -[SCAdLifecycleEvent touchPoint] */

void FUN_1084bce9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bd038; end: 1084bd03f;  */

void FUN_1084bd038(void)

{
  return;
}



/* Entry: 1084bd040; end: 1084bd077;  */

void FUN_1084bd040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bd078; end: 1084bd0bf;  */

void FUN_1084bd078(void)

{
  return;
}



/* Entry: 1084bd0c0; end: 1084bd237; -[SCAdLifecycleEvent appInstallEventType] */

undefined8 FUN_1084bd0c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bd238; end: 1084bd297;  */

void FUN_1084bd238(void)

{
  return;
}



/* Entry: 1084bd298; end: 1084bd40f; -[SCAdLifecycleEvent pageLoadedOnExit] */

undefined1 FUN_1084bd298(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bd410; end: 1084bd46f;  */

void FUN_1084bd410(void)

{
  return;
}



/* Entry: 1084bd470; end: 1084bd5e7; -[SCAdLifecycleEvent pageLoadedOnEntry] */

undefined1 FUN_1084bd470(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bd5e8; end: 1084bd647;  */

void FUN_1084bd5e8(void)

{
  return;
}



/* Entry: 1084bd648; end: 1084bd7c7; -[SCAdLifecycleEvent pageVisibleLoadTimeSec] */

undefined8 FUN_1084bd648(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bd7c8; end: 1084bd827;  */

void FUN_1084bd7c8(void)

{
  return;
}



/* Entry: 1084bd828; end: 1084bd99f; -[SCAdLifecycleEvent webviewEventType] */

undefined8 FUN_1084bd828(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0da0();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084bd9a0; end: 1084bd9ff;  */

void FUN_1084bd9a0(void)

{
  return;
}



/* Entry: 1084bda00; end: 1084bdbff; -[SCAdWebviewEvent parserSymbol] */

void FUN_1084bda00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084bb2fc;
  uStack_40 = 0x1084bb30c;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1780();
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bdc00; end: 1084bdd17;  */

void FUN_1084bdc00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e8c3f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bdd18; end: 1084bdef3; -[SCAdWebviewEvent subType] */

undefined8 FUN_1084bdd18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1780();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bdef4; end: 1084bdfbb;  */

void FUN_1084bdef4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  return;
}



/* Entry: 1084bdfbc; end: 1084be12b; -[SCAdDeeplinkEvent parserSymbol] */

void FUN_1084bdfbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084bb2fc;
  uStack_40 = 0x1084bb30c;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc960();
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084be12c; end: 1084be1d3;  */

void FUN_1084be12c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110ede778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084be1d4; end: 1084be2e7; -[SCAdDeeplinkEvent deeplinkUrl] */

void FUN_1084be1d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc960();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084be2e8; end: 1084be357;  */

void FUN_1084be2e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084be358; end: 1084be367;  */

void FUN_1084be358(void)

{
  return;
}



/* Entry: 1084be368; end: 1084be4b3; -[SCAdDeeplinkEvent deeplinkEventType] */

undefined8 FUN_1084be368(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc960();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084be4b4; end: 1084be52b;  */

void FUN_1084be4b4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  return;
}



/* Entry: 1084be52c; end: 1084be60b; -[SCAdDeeplinkEvent customProductPageEnabled] */

undefined1 FUN_1084be52c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc960();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084be60c; end: 1084be62f;  */

void FUN_1084be60c(void)

{
  return;
}



/* Entry: 1084be630; end: 1084be77f; -[SCAdAppInstallEvent parserSymbol] */

void FUN_1084be630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084bb2fc;
  uStack_40 = 0x1084bb30c;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c04e0();
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084be780; end: 1084be80b;  */

void FUN_1084be780(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110ede838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084be80c; end: 1084be937; -[SCAdAppInstallEvent eventType] */

undefined8 FUN_1084be80c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c04e0();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084be938; end: 1084be99b;  */

void FUN_1084be938(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 1084be99c; end: 1084be9d3; -[SCAdAdToMessageEvent parserSymbol] */

undefined ** FUN_1084be99c(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c27dd80();
  if (param_1 - 1U < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a4ef98)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ede938;
  }
  return ppuVar1;
}



/* Entry: 1084be9d4; end: 1084bebc3; -[SCAdTrackEvent common] */

void FUN_1084be9d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_1c0 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bebc4;
  puStack_60 = &UNK_11088aa40;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1084bec04;
  puStack_88 = &UNK_110887570;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1084bec44;
  puStack_b0 = &UNK_1108875a0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1084bec84;
  puStack_d8 = &UNK_1108875d0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1084becc4;
  puStack_100 = &UNK_110887600;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1084bed04;
  puStack_128 = &UNK_110887630;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x1084bed44;
  puStack_150 = &UNK_110887660;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x1084bed84;
  puStack_178 = &UNK_110887690;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x1084bedc4;
  puStack_1a0 = &UNK_1108876c0;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x1084bee04;
  puStack_1c8 = &UNK_110a4e148;
  puStack_198 = puStack_1c0;
  puStack_170 = puStack_1c0;
  puStack_148 = puStack_1c0;
  puStack_120 = puStack_1c0;
  puStack_f8 = puStack_1c0;
  puStack_d0 = puStack_1c0;
  puStack_a8 = puStack_1c0;
  puStack_80 = puStack_1c0;
  puStack_58 = puStack_1c0;
  puStack_48 = puStack_1c0;
  func_0x00010c0be9e0(param_1,param_2,&puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118,
                      &puStack_140,&puStack_168,&puStack_190,&puStack_1b8,&puStack_1e0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bebc4; end: 1084bee43;  */

void FUN_1084bebc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bee44; end: 1084bef57; -[SCAdTrackEvent lifecycle] */

void FUN_1084bee44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bef58;
  puStack_60 = &UNK_11088aa40;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110a4e198,
                      &PTR___NSConcreteGlobalBlock_110a4e1b8,&PTR___NSConcreteGlobalBlock_110a4e1d8,
                      &PTR___NSConcreteGlobalBlock_110a4e1f8,&PTR___NSConcreteGlobalBlock_110a4e218,
                      &PTR___NSConcreteGlobalBlock_110a4e238,&PTR___NSConcreteGlobalBlock_110a4e258,
                      &PTR___NSConcreteGlobalBlock_110a4e278,&PTR___NSConcreteGlobalBlock_110a4e298)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bef58; end: 1084bef8f;  */

void FUN_1084bef58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bef90; end: 1084befb3;  */

void FUN_1084bef90(void)

{
  return;
}



/* Entry: 1084befb4; end: 1084bf0c7; -[SCAdTrackEvent interaction] */

void FUN_1084befb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bf0cc;
  puStack_60 = &UNK_110887570;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4e2b8,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110a4e2d8,&PTR___NSConcreteGlobalBlock_110a4e2f8,
                      &PTR___NSConcreteGlobalBlock_110a4e318,&PTR___NSConcreteGlobalBlock_110a4e338,
                      &PTR___NSConcreteGlobalBlock_110a4e358,&PTR___NSConcreteGlobalBlock_110a4e378,
                      &PTR___NSConcreteGlobalBlock_110a4e398,&PTR___NSConcreteGlobalBlock_110a4e3b8)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bf0c8; end: 1084bf0cb;  */

void FUN_1084bf0c8(void)

{
  return;
}



/* Entry: 1084bf0cc; end: 1084bf103;  */

void FUN_1084bf0cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bf104; end: 1084bf123;  */

void FUN_1084bf104(void)

{
  return;
}



/* Entry: 1084bf124; end: 1084bf237; -[SCAdTrackEvent webview] */

void FUN_1084bf124(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bf240;
  puStack_60 = &UNK_1108875a0;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4e3d8,
                      &PTR___NSConcreteGlobalBlock_110a4e3f8,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110a4e418,&PTR___NSConcreteGlobalBlock_110a4e438,
                      &PTR___NSConcreteGlobalBlock_110a4e458,&PTR___NSConcreteGlobalBlock_110a4e478,
                      &PTR___NSConcreteGlobalBlock_110a4e498,&PTR___NSConcreteGlobalBlock_110a4e4b8,
                      &PTR___NSConcreteGlobalBlock_110a4e4d8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bf238; end: 1084bf23f;  */

void FUN_1084bf238(void)

{
  return;
}



/* Entry: 1084bf240; end: 1084bf277;  */

void FUN_1084bf240(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bf278; end: 1084bf293;  */

void FUN_1084bf278(void)

{
  return;
}



/* Entry: 1084bf294; end: 1084bf3a7; -[SCAdTrackEvent deeplink] */

void FUN_1084bf294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bf3b4;
  puStack_60 = &UNK_1108875d0;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4e4f8,
                      &PTR___NSConcreteGlobalBlock_110a4e518,&PTR___NSConcreteGlobalBlock_110a4e538,
                      &puStack_78,&PTR___NSConcreteGlobalBlock_110a4e558,
                      &PTR___NSConcreteGlobalBlock_110a4e578,&PTR___NSConcreteGlobalBlock_110a4e598,
                      &PTR___NSConcreteGlobalBlock_110a4e5b8,&PTR___NSConcreteGlobalBlock_110a4e5d8,
                      &PTR___NSConcreteGlobalBlock_110a4e5f8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bf3a8; end: 1084bf3b3;  */

void FUN_1084bf3a8(void)

{
  return;
}



/* Entry: 1084bf3b4; end: 1084bf3eb;  */

void FUN_1084bf3b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bf3ec; end: 1084bf403;  */

void FUN_1084bf3ec(void)

{
  return;
}



/* Entry: 1084bf404; end: 1084bf517; -[SCAdTrackEvent appInstall] */

void FUN_1084bf404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bf528;
  puStack_60 = &UNK_110887600;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4e618,
                      &PTR___NSConcreteGlobalBlock_110a4e638,&PTR___NSConcreteGlobalBlock_110a4e658,
                      &PTR___NSConcreteGlobalBlock_110a4e678,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110a4e698,&PTR___NSConcreteGlobalBlock_110a4e6b8,
                      &PTR___NSConcreteGlobalBlock_110a4e6d8,&PTR___NSConcreteGlobalBlock_110a4e6f8,
                      &PTR___NSConcreteGlobalBlock_110a4e718);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bf518; end: 1084bf527;  */

void FUN_1084bf518(void)

{
  return;
}



/* Entry: 1084bf528; end: 1084bf55f;  */

void FUN_1084bf528(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bf560; end: 1084bf573;  */

void FUN_1084bf560(void)

{
  return;
}



/* Entry: 1084bf574; end: 1084bf687; -[SCAdTrackEvent adToMessage] */

void FUN_1084bf574(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bf69c;
  puStack_60 = &UNK_110887630;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4e738,
                      &PTR___NSConcreteGlobalBlock_110a4e758,&PTR___NSConcreteGlobalBlock_110a4e778,
                      &PTR___NSConcreteGlobalBlock_110a4e798,&PTR___NSConcreteGlobalBlock_110a4e7b8,
                      &puStack_78,&PTR___NSConcreteGlobalBlock_110a4e7d8,
                      &PTR___NSConcreteGlobalBlock_110a4e7f8,&PTR___NSConcreteGlobalBlock_110a4e818,
                      &PTR___NSConcreteGlobalBlock_110a4e838);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bf688; end: 1084bf69b;  */

void FUN_1084bf688(void)

{
  return;
}



/* Entry: 1084bf69c; end: 1084bf6d3;  */

void FUN_1084bf69c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bf6d4; end: 1084bf6e3;  */

void FUN_1084bf6d4(void)

{
  return;
}



/* Entry: 1084bf6e4; end: 1084bf7f7; -[SCAdTrackEvent subscribe] */

void FUN_1084bf6e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bf810;
  puStack_60 = &UNK_110887660;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4e858,
                      &PTR___NSConcreteGlobalBlock_110a4e878,&PTR___NSConcreteGlobalBlock_110a4e898,
                      &PTR___NSConcreteGlobalBlock_110a4e8b8,&PTR___NSConcreteGlobalBlock_110a4e8d8,
                      &PTR___NSConcreteGlobalBlock_110a4e8f8,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110a4e918,&PTR___NSConcreteGlobalBlock_110a4e938,
                      &PTR___NSConcreteGlobalBlock_110a4e958);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bf7f8; end: 1084bf80f;  */

void FUN_1084bf7f8(void)

{
  return;
}


