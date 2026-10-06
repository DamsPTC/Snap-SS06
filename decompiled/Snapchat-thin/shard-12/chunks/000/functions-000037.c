/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c86128; end: 108c86207; -[SCLensProcessingEffectComponentAggregator lensComponent:lensId:setScreenDimmingEnabled:] */

void FUN_108c86128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f51051b;
  func_0x000107c31820(&UNK_10f51051b);
  uVar2 = *(ulong *)(param_1 + 0xa0);
  func_0x00010bf4b900(uVar2,param_2,param_4);
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR_PTR_1126db488;
    _objc_alloc(PTR_PTR_1126db488);
    func_0x00010c00f020();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60),param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c86208; end: 108c86307; -[SCLensProcessingEffectComponentAggregator lensComponent:lensId:performInterfaceAction:interfaceElement:interfaceData:] */

void FUN_108c86208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f51053a;
  func_0x000107c31820(&UNK_10f51053a);
  uVar2 = *(ulong *)(param_1 + 0xa0);
  func_0x00010bf4b900(uVar2,param_2,param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = param_7;
    func_0x00010bf51e00(param_7);
    func_0x00010bdfff20(param_1,param_2,param_4,param_5,param_6,uVar3);
    _objc_release(uVar3);
  }
  func_0x000107c31828(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c86308; end: 108c86407; -[SCLensProcessingEffectComponentAggregator lensComponent:lensId:showHintWithId:] */

void FUN_108c86308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f51055b;
  func_0x000107c31820(&UNK_10f51055b);
  uVar2 = *(ulong *)(param_1 + 0xa0);
  func_0x00010bf4b900(uVar2,param_2,param_4);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    puVar3 = PTR_PTR_1126db470;
    func_0x00010c237c60(PTR_PTR_1126db470,param_2,param_4,param_5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x000107c31828(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c86408; end: 108c864cf; -[SCLensProcessingEffectComponentAggregator lensComponent:hideAllHintsForLensWithId:] */

void FUN_108c86408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f510575;
  func_0x000107c31820(&UNK_10f510575);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  puVar2 = PTR_PTR_1126db470;
  func_0x00010bfe1740(PTR_PTR_1126db470,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c864d0; end: 108c86527; -[SCLensProcessingEffectComponentAggregator lensComponentDidStartPlayingAudio:] */

void FUN_108c864d0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108c86528;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 108c86528; end: 108c865b3;  */

void FUN_108c86528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x000107c31820(&UNK_10f51058f);
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,
                        PTR____kCFBooleanTrue_11034ab68);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108c865b4; end: 108c8660b; -[SCLensProcessingEffectComponentAggregator lensComponentDidStopPlayingAudio:] */

void FUN_108c865b4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108c8660c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 108c8660c; end: 108c86677;  */

void FUN_108c8660c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c31820(&UNK_10f5105b2);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,
                      PTR____kCFBooleanFalse_11034ab60);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c86678; end: 108c86737; -[SCLensProcessingEffectComponentAggregator trackingComponent:didRecognizeExpression:] */

void FUN_108c86678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f5105d4;
  func_0x000107c31820(&UNK_10f5105d4);
  puVar2 = PTR_PTR_1126db490;
  _objc_alloc(PTR_PTR_1126db490);
  func_0x00010c011200();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,puVar2);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c86738; end: 108c867df; -[SCLensProcessingEffectComponentAggregator trackingComponent:didRecognizeFaces:] */

void FUN_108c86738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f5105f9;
  func_0x000107c31820(&UNK_10f5105f9);
  puVar2 = PTR_PTR_1126db498;
  _objc_alloc(PTR_PTR_1126db498);
  func_0x00010c011600();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80),param_2,puVar2);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c867e0; end: 108c8686f; -[SCLensProcessingEffectComponentAggregator playButtonDidPerformActionWithLensWithId:] */

void FUN_108c867e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfe6360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097fe0();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108c86870; end: 108c868ff; -[SCLensProcessingEffectComponentAggregator snapButtonDidPerformTriggerActionWithLensWithId:] */

void FUN_108c86870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfe6360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097fe0();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108c86900; end: 108c8698f; -[SCLensProcessingEffectComponentAggregator snapButtonDidPerformLongTapStartActionWithLensWithId:] */

void FUN_108c86900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfe6360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097fe0();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108c86990; end: 108c86a1f; -[SCLensProcessingEffectComponentAggregator snapButtonDidPerformLongTapReleaseActionWithLensWithId:] */

void FUN_108c86990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfe6360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097fe0();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108c86a20; end: 108c86adb; -[SCLensProcessingEffectComponentAggregator fullScreenDidEnterWithLensWithId:] */

void FUN_108c86a20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_3;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(lVar1);
  func_0x00010bfe6360(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097fe0();
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c86adc; end: 108c86b97; -[SCLensProcessingEffectComponentAggregator fullScreenDidExitWithLensWithId:] */

void FUN_108c86adc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_3;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(lVar1);
  func_0x00010bfe6360(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097fe0();
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c86b98; end: 108c86ca7; -[SCLensProcessingEffectComponentAggregator _provideExternalMediaWithHandler:forEffectId:] */

void FUN_108c86b98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010bf9e2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108c86ca8;
  puStack_58 = &UNK_110abf6e8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_4;
  lStack_48 = lVar2;
  _objc_retain(lVar2);
  _objc_retain(param_4);
  func_0x00010c297260(uVar3,param_2,&puStack_70,uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_48);
  _objc_release(uStack_50);
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108c86ca8; end: 108c86e3b;  */

void FUN_108c86ca8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c1480(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108c86e3c; end: 108c86e3f;  */

void FUN_108c86e3c(void)

{
  return;
}



/* Entry: 108c86e40; end: 108c86f33;  */

void FUN_108c86e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(param_6);
  func_0x00010bdc1080(param_7);
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_7);
  func_0x00010c1995a0(param_1,param_2,param_3,param_4,uVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_7);
  return;
}



/* Entry: 108c86f34; end: 108c86f37;  */

void FUN_108c86f34(void)

{
  return;
}



/* Entry: 108c86f38; end: 108c87037; -[SCLensProcessingEffectComponentAggregator _willRemoveReverseCameraLensWithId:] */

void FUN_108c86f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x108c86fe8;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_48);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b3e0();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108c87038; end: 108c870bf; -[SCLensProcessingEffectComponentAggregator _cancelEffects:] */

void FUN_108c87038(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb2040(param_3,param_2,&PTR___NSConcreteGlobalBlock_110abf718);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010bf2f5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2e300();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c870c0; end: 108c870c7;  */

void FUN_108c870c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isSponsored_1125fd690);
  return;
}



/* Entry: 108c870c8; end: 108c87123; -[SCLensProcessingEffectComponentAggregator _willRemovePhotoPickerLensWithId:] */

void FUN_108c870c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bdfff20(param_1,param_2,param_3,4,1,PTR____NSDictionary0__struct_11034ab58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c87124; end: 108c8717f; -[SCLensProcessingEffectComponentAggregator _willRemoveSnapButtonLensWithId:] */

void FUN_108c87124(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bdfff20(param_1,param_2,param_3,3,5,PTR____NSDictionary0__struct_11034ab58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c87180; end: 108c871db; -[SCLensProcessingEffectComponentAggregator _willRemoveAllUIHiddenLensWithId:] */

void FUN_108c87180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0xc0);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bdfff20(param_1,param_2,param_3,3,7,PTR____NSDictionary0__struct_11034ab58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c871dc; end: 108c87237; -[SCLensProcessingEffectComponentAggregator _willRemoveModalCardLensWithId:] */

void FUN_108c871dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 200);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bdfff20(param_1,param_2,param_3,4,3,PTR____NSDictionary0__struct_11034ab58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c87238; end: 108c872ff; -[SCLensProcessingEffectComponentAggregator _willRemoveExternalMediaLensWithId:] */

void FUN_108c87238(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0xd8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x108c872b0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 108c87300; end: 108c873c7; -[SCLensProcessingEffectComponentAggregator _willRemoveTouchProcessorForLensWithId:] */

void FUN_108c87300(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0xd0);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x108c87378;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 108c873c8; end: 108c8759f; -[SCLensProcessingEffectComponentAggregator _willRemoveLensWithId:] */

void FUN_108c873c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xa8));
    func_0x00010beeb1e0(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb0);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xb0));
    func_0x00010beeb1c0(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xb8));
    func_0x00010beeb200(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0xc0);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xc0));
    func_0x00010beeb140(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 200);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 200));
    func_0x00010beeb1a0(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xd0));
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010bf51e00(uVar2);
    func_0x00010c0d9840(uVar3);
    _objc_release(uVar2);
    func_0x00010beeb220(param_1);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108c875a0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_60);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xd8));
    func_0x00010beeb160(param_1);
  }
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108c875a0; end: 108c87643;  */

void FUN_108c875a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108c87644; end: 108c87b43; -[SCLensProcessingEffectComponentAggregator _didApplyLensWithId:withFeatures:] */

void FUN_108c87644(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain();
  _objc_initWeak(auStack_70,0);
  _objc_initWeak(auStack_78,0);
  _objc_initWeak(auStack_80,0);
  if ((param_4 & 0x12) == 0) {
    bVar5 = false;
    bVar4 = false;
    bVar2 = false;
  }
  else {
    lVar7 = *(long *)(param_1 + 0xd0);
    func_0x00010bf529e0();
    bVar4 = lVar7 != 0;
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xd0));
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010bf51e00(uVar8);
    func_0x00010c0d9840(uVar6);
    _objc_release(uVar8);
    lVar9 = *(long *)(param_1 + 0xd0);
    func_0x00010bf529e0();
    bVar2 = lVar9 == 1 && lVar7 == 0;
    lVar7 = param_1;
    func_0x00010bf44420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c277360();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(auStack_80,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_storeWeak(auStack_70,*(undefined8 *)(param_1 + 0x40));
    _objc_storeWeak(auStack_78,*(undefined8 *)(param_1 + 0x48));
    lVar7 = param_1;
    func_0x00010bf5e060();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    bVar5 = lVar9 != 0;
    _objc_release();
    _objc_release(lVar7);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain();
  _objc_initWeak(auStack_88,0);
  _objc_initWeak(auStack_90,0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_158 = 0;
  if (((uint)param_4 >> 6 & 1) != 0) {
    lVar7 = param_1;
    func_0x00010bf5e060();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108c87b4c;
    puStack_a0 = &UNK_110857a38;
    _objc_retain(param_3);
    lStack_158 = lVar7;
    uStack_98 = param_3;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010bf44420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf1b120();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(auStack_90,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_storeWeak(auStack_88,*(undefined8 *)(param_1 + 0x28));
    _objc_release(uStack_98);
  }
  if ((param_4 & 1) == 0) {
    bVar3 = false;
    uVar10 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0xd8);
    func_0x00010bf529e0();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xd8));
    lVar9 = *(long *)(param_1 + 0xd8);
    func_0x00010bf529e0();
    bVar3 = lVar9 == 1 && lVar7 == 0;
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar10);
  }
  if (((uint)param_4 >> 2 & 1) != 0) {
    func_0x00010c24dea0(*(undefined8 *)(param_1 + 0x18));
  }
  _objc_initWeak(auStack_c0,param_1);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_108c87b94;
  puStack_130 = &UNK_110abf7d8;
  uStack_c8 = bVar4;
  uStack_c7 = bVar5;
  _objc_copyWeak(auStack_100,auStack_70);
  uStack_c6 = bVar2;
  _objc_copyWeak(auStack_f8,auStack_80);
  _objc_copyWeak(auStack_f0,auStack_78);
  _objc_retain(uVar6);
  uStack_c5 = (undefined1)((param_4 & 0x40) >> 6);
  uStack_128 = uVar6;
  uStack_d0 = param_4;
  _objc_copyWeak(auStack_e8,auStack_88);
  _objc_copyWeak(auStack_e0,auStack_90);
  _objc_retain(lStack_158);
  lStack_120 = lStack_158;
  _objc_retain(uVar8);
  uStack_118 = uVar8;
  uStack_c4 = bVar3;
  _objc_retain(uVar10);
  uStack_110 = uVar10;
  _objc_copyWeak(auStack_d8,auStack_c0);
  _objc_retain(param_3);
  uStack_108 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_148);
  _objc_release(uStack_108);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(lStack_120);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_128);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar6);
  _objc_release(lStack_158);
  _objc_release(param_3);
  return;
}



/* Entry: 108c87b44; end: 108c87b4b;  */

void FUN_108c87b44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isPostCaptureRequiresTouchSuppor_1125fc418);
  return;
}



/* Entry: 108c87b4c; end: 108c87b93;  */

undefined8 FUN_108c87b4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108c87b94; end: 108c87f43;  */

void FUN_108c87b94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auStack_48 [8];
  
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x81) == '\x01')) {
    lVar6 = param_1 + 0x48;
    _objc_loadWeakRetained();
    lVar1 = lVar6;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar9 = 0;
    }
    else {
      lVar2 = param_1 + 0x48;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1379e0();
      uVar9 = (uint)lVar4 ^ 1;
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(lVar6);
  }
  else {
    uVar9 = 0;
  }
  if (((*(byte *)(param_1 + 0x82) & 1) != 0) || (uVar9 != 0)) {
    puVar5 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained();
    if (puVar5 != (undefined *)0x0) {
      lVar6 = param_1 + 0x50;
      _objc_loadWeakRetained();
      if (lVar6 != 0) {
        lVar1 = param_1 + 0x58;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar6);
        _objc_release(puVar5);
        if (lVar1 == 0) goto LAB_108c87d7c;
        lVar6 = param_1 + 0x48;
        _objc_loadWeakRetained();
        lVar1 = lVar6;
        func_0x00010c150520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar6);
        if (lVar1 != 0) {
          lVar6 = param_1 + 0x48;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c12e1c0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar6);
        }
        puVar5 = PTR_PTR_1126db4a0;
        _objc_alloc(PTR_PTR_1126db4a0);
        lVar6 = param_1 + 0x50;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c00f080(puVar5);
        _objc_release(lVar6);
        lVar6 = param_1 + 0x48;
        _objc_loadWeakRetained(lVar6);
        lVar1 = param_1 + 0x58;
        _objc_loadWeakRetained(lVar1);
        lVar2 = lVar1;
        func_0x00010bf23820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(lVar6);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(lVar6);
      }
      _objc_release(puVar5);
    }
  }
LAB_108c87d7c:
  if (*(char *)(param_1 + 0x83) == '\x01') {
    lVar6 = param_1 + 0x60;
    _objc_loadWeakRetained();
    if (lVar6 != 0) {
      lVar1 = param_1 + 0x68;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar6);
      if (lVar1 != 0) {
        lVar6 = param_1 + 0x60;
        _objc_loadWeakRetained();
        lVar1 = lVar6;
        func_0x00010c150520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar6);
        if (lVar1 != 0) {
          lVar6 = param_1 + 0x60;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c12e1c0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar6);
        }
        lVar6 = param_1 + 0x60;
        _objc_loadWeakRetained(lVar6);
        puVar5 = PTR_PTR_1126db4a8;
        _objc_alloc(PTR_PTR_1126db4a8);
        lVar1 = param_1 + 0x68;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c022720(puVar5);
        func_0x00010bf9d620(lVar6);
        _objc_release(puVar5);
        _objc_release(lVar1);
        _objc_release(lVar6);
      }
    }
  }
  if ((*(char *)(param_1 + 0x84) == '\x01') && (lVar6 = *(long *)(param_1 + 0x38), lVar6 != 0)) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    }
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_48,param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar7);
    func_0x00010bf9d5c0(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 108c87f44; end: 108c8803b;  */

void FUN_108c87f44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126db448;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bf57b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db4b0;
  _objc_alloc(PTR_PTR_1126db4b0);
  func_0x00010c037640();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c8803c; end: 108c8808f;  */

void FUN_108c8803c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be839c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108c88090; end: 108c88093;  */

void FUN_108c88090(void)

{
  return;
}



/* Entry: 108c88094; end: 108c8818f;  */

void FUN_108c88094(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_copyWeak(param_1 + 0x48,param_2 + 0x48);
  _objc_copyWeak(param_1 + 0x50,param_2 + 0x50);
  _objc_copyWeak(param_1 + 0x58,param_2 + 0x58);
  _objc_copyWeak(param_1 + 0x60,param_2 + 0x60);
  _objc_copyWeak(param_1 + 0x68,param_2 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 108c88190; end: 108c8882f; -[SCLensProcessingEffectComponentAggregator _didRequestInterfaceElementForEffectId:interfaceAction:interfaceElement:interfaceData:] */

void FUN_108c88190(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined *param_6)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  lVar3 = param_1;
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108c88830;
  puStack_d0 = &UNK_110abf838;
  _objc_retain(uVar6);
  puStack_b0 = &uStack_98;
  uStack_a8 = 0;
  uStack_c8 = uVar6;
  _objc_retain(lVar1);
  lStack_c0 = lVar1;
  _objc_retain(param_3);
  ppuVar2 = &puStack_e8;
  uStack_b8 = param_3;
  lStack_a0 = param_5;
  _objc_retainBlock(ppuVar2);
  if (param_5 < 5) {
    if (param_5 < 3) {
      if (param_5 != 0) {
        if (param_5 == 1) {
          if (param_4 == 4) {
            func_0x00010c12d360(*(undefined8 *)(param_1 + 0xb0));
          }
          else if (param_4 == 3) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0xb0));
          }
          _objc_retain(param_6);
          uVar7 = *(undefined8 *)(param_1 + 0xe0);
          *(undefined **)(param_1 + 0xe0) = param_6;
          _objc_release(uVar7);
          puVar5 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c0e00e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(puVar5);
          func_0x00010c135820(*(undefined8 *)(param_1 + 0x50));
        }
        goto LAB_108c8871c;
      }
      puVar5 = PTR_PTR_1126db4b8;
      _objc_alloc(PTR_PTR_1126db4b8);
      func_0x00010c00efa0();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
    }
    else if (param_5 == 3) {
      if (param_4 == 4) {
        func_0x00010c12d360(*(undefined8 *)(param_1 + 200));
      }
      else if (param_4 == 3) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 200));
      }
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      puVar5 = param_6;
      func_0x00010c0e00e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_6;
      func_0x00010c0e00e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135e40(uVar7);
      _objc_release(puVar4);
    }
    else {
      if (param_5 != 4) goto LAB_108c8871c;
      puVar5 = PTR_PTR_1126db4c8;
      _objc_alloc(PTR_PTR_1126db4c8);
      func_0x00010c00efa0();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88));
    }
  }
  else {
    if (param_5 < 7) {
      if (param_5 == 5) {
        if (param_4 == 4) {
          func_0x00010befa120(*(undefined8 *)(param_1 + 0xb8));
        }
        else if (param_4 == 3) {
          func_0x00010c12d360(*(undefined8 *)(param_1 + 0xb8));
        }
        func_0x00010c1366e0(*(undefined8 *)(param_1 + 0x50));
      }
      else if (param_5 == 6) {
        func_0x00010c136260(*(undefined8 *)(param_1 + 0x50));
      }
      goto LAB_108c8871c;
    }
    if (param_5 == 7) {
      if (param_4 == 4) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0xc0));
      }
      else if (param_4 == 3) {
        func_0x00010c12d360(*(undefined8 *)(param_1 + 0xc0));
      }
      func_0x00010c1356c0(*(undefined8 *)(param_1 + 0x50));
      goto LAB_108c8871c;
    }
    if (param_5 == 10) {
      func_0x00010c134960(*(undefined8 *)(param_1 + 0x50));
      goto LAB_108c8871c;
    }
    if (param_5 != 0xb) goto LAB_108c8871c;
    if (param_4 != 4) {
      if (param_4 == 3) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0xa8));
        lVar3 = *(long *)(param_1 + 0x38);
        func_0x00010c150520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
        }
        _objc_initWeak(auStack_f0,param_1);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        puStack_118 = puVar5;
        uStack_110 = 0xc2000000;
        pcStack_108 = FUN_108c8890c;
        puStack_100 = &UNK_1108d4780;
        _objc_retain(param_3);
        uStack_f8 = param_3;
        _objc_copyWeak(auStack_120,auStack_f0);
        _objc_retain(param_3);
        func_0x00010bf9d5c0(uVar7);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_120);
        _objc_release(uStack_f8);
        _objc_destroyWeak(auStack_f0);
      }
      goto LAB_108c8871c;
    }
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xa8));
    lVar3 = *(long *)(param_1 + 0xa8);
    func_0x00010bf529e0();
    if (lVar3 != 0) goto LAB_108c8871c;
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_108c8871c;
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    puVar5 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b3e0();
  }
  _objc_release(puVar5);
LAB_108c8871c:
  _objc_release(ppuVar2);
  _objc_release(uStack_b8);
  _objc_release(lStack_c0);
  _objc_release(uStack_c8);
  _objc_release(lVar1);
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108c88830; end: 108c888db;  */

void FUN_108c88830(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108c888dc; end: 108c8890b;  */

void FUN_108c888dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c098010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensWithId_interfaceControl_didS_112603a10,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
             *(undefined1 *)(param_1 + 0x48));
  return;
}



/* Entry: 108c8890c; end: 108c88967;  */

void FUN_108c8890c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db4c0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c024860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c88968; end: 108c88ab7;  */

long FUN_108c88968(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199860();
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_2;
  }
  ___stack_chk_fail();
  return *(long *)(param_2 + 0x58);
}



/* Entry: 108c88ab8; end: 108c88abf; -[SCLensProcessingEffectComponentAggregator toggleCameraEventObservable] */

undefined8 FUN_108c88ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108c88ac0; end: 108c88ac7; -[SCLensProcessingEffectComponentAggregator screenDimmingEventObservable] */

undefined8 FUN_108c88ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108c88ac8; end: 108c88acf; -[SCLensProcessingEffectComponentAggregator hapticFeedbackEventObservable] */

undefined8 FUN_108c88ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108c88ad0; end: 108c88ad7; -[SCLensProcessingEffectComponentAggregator didRecongizeExpressionEventObservable] */

undefined8 FUN_108c88ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108c88ad8; end: 108c88adf; -[SCLensProcessingEffectComponentAggregator didRecongizeFacesEventObservable] */

undefined8 FUN_108c88ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108c88ae0; end: 108c88ae7; -[SCLensProcessingEffectComponentAggregator effectRecordingEventObservable] */

undefined8 FUN_108c88ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108c88ae8; end: 108c88aef; -[SCLensProcessingEffectComponentAggregator linkBitmojiCTAEventObservable] */

undefined8 FUN_108c88ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108c88af0; end: 108c88af7; -[SCLensProcessingEffectComponentAggregator lensEffectAudioPlayingStatusObservable] */

undefined8 FUN_108c88af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108c88af8; end: 108c88b0f; -[SCLensProcessingEffectComponentAggregator cancelationDelegate] */

void FUN_108c88af8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c88b10; end: 108c88b1b; -[SCLensProcessingEffectComponentAggregator setCancelationDelegate:] */

void FUN_108c88b10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 108c88b1c; end: 108c88b23; -[SCLensProcessingEffectComponentAggregator scheduledApplyCount] */

undefined8 FUN_108c88b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108c88b24; end: 108c88b2b; -[SCLensProcessingEffectComponentAggregator setScheduledApplyCount:] */

void FUN_108c88b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 108c88b2c; end: 108c88cb3; -[SCLensProcessingEffectComponentAggregator .cxx_destruct] */

void FUN_108c88b2c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c88cb4; end: 108c88e47; -[SCLensProcessingURISystemAggregator initWithLensProcessingURIPluginScopeExposer:uriPluginProvider:apiServicePluginProvider:effectActionUpdater:appliedEffectsObservable:lensApplicator:performer:] */

undefined1 *
FUN_108c88cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_58 = PTR_PTR_1126fdf80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    if (param_4 == 0) {
      puVar3 = PTR_PTR_1126db4d0;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar3;
    }
    else {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = param_4;
    }
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
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



/* Entry: 108c88e48; end: 108c8907f; -[SCLensProcessingURISystemAggregator registerPluginsForComponent:completion:] */

void FUN_108c88e48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f5106a1;
  func_0x000107c31820(&UNK_10f5106a1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    _objc_release(lVar2);
LAB_108c88f18:
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c119ac0(uVar6);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x40);
    _objc_release();
    _objc_release(lVar2);
    if (lVar5 == 0) goto LAB_108c88f18;
    func_0x00010c189680(param_3);
    if (param_4 == 0) goto LAB_108c89008;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c28f2c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,uVar3);
  }
  _objc_release(uVar3);
LAB_108c89008:
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c89080; end: 108c890f3;  */

void FUN_108c89080(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be89ea0();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c890f4; end: 108c8913f; -[SCLensProcessingURISystemAggregator resetPluginsForComponent:] */

void FUN_108c890f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c137fe0(uVar1);
  func_0x00010c12bd40(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c89140; end: 108c8923f; -[SCLensProcessingURISystemAggregator _registerURIPlugins:serviceComponent:] */

void FUN_108c89140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126db4d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034d60(puVar1,param_2,uVar4,uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf7f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e5a0(*(undefined8 *)(param_1 + 0x40),param_2,lVar3);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = param_3;
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1267a0(uVar4,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c189680(param_4,param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c89240; end: 108c89247; -[SCLensProcessingURISystemAggregator dirtyFrameProvider] */

undefined8 FUN_108c89240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108c89248; end: 108c89277; -[SCLensProcessingURISystemAggregator setDirtyFrameProvider:] */

void FUN_108c89248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c89278; end: 108c892f7; -[SCLensProcessingURISystemAggregator .cxx_destruct] */

void FUN_108c89278(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108c892f8; end: 108c893a3; -[SCLensProcessingCancelationController initWithLensProcessingGraphene:performer:] */

undefined1 *
FUN_108c892f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdf88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c893a4; end: 108c894c3; -[SCLensProcessingCancelationController willCancelExecution] */

void FUN_108c893a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _os_unfair_lock_lock(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dea0();
    _objc_release(puVar1);
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  *(undefined **)(param_2 + 0x10) = puVar2;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c081620();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_108c894c4;
    puStack_40 = &UNK_110848088;
    puStack_38 = puVar2;
    func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x28),param_3,&puStack_58);
  }
  _os_unfair_lock_unlock(param_2 + 8);
  return;
}



/* Entry: 108c894c4; end: 108c89503;  */

void FUN_108c894c4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c89504; end: 108c895d3; -[SCLensProcessingCancelationController didCancelExecutionWithDescription:lensId:] */

void FUN_108c89504(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  _os_unfair_lock_unlock(param_2 + 8);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
    func_0x00010be8f4c0(param_1 - dVar3,param_2,param_3,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c895d4; end: 108c896db; -[SCLensProcessingCancelationController _reportCancellationGrapheneWithDescription:latencySec:] */

void FUN_108c895d4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x20) != 0) && (uVar1 = param_4, func_0x00010c08fa60(), uVar1 != 0)) {
    _objc_retain(param_4);
    uVar1 = param_4;
    func_0x00010c08fa60();
    uVar2 = param_4;
    if (0x40 < uVar1) {
      uVar1 = param_4;
      func_0x00010c08fa60(param_4);
      func_0x00010c260c00(param_4,param_3,uVar1 - 0x40);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
    }
    puVar3 = PTR_PTR_1126db4e0;
    func_0x00010c090580(PTR_PTR_1126db4e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bfec2a0(*(undefined8 *)(param_2 + 0x20),param_3,puVar4);
    func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 0x20),param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c896dc; end: 108c8970b; -[SCLensProcessingCancelationController .cxx_destruct] */

void FUN_108c896dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108c8970c; end: 108c8986f; -[SCAbstractComponentProxy initWithComponentFuture:aClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c8970c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + _DAT_1127794d0) = param_4;
  lVar3 = (long)_DAT_1127794d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794d8);
  *(undefined **)(param_1 + _DAT_1127794d8) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794dc);
  *(undefined **)(param_1 + _DAT_1127794dc) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794e0);
  *(undefined **)(param_1 + _DAT_1127794e0) = puVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108c89870; end: 108c898e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89870(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar2 = (long)_DAT_1127794e4;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010beaba00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c898e4; end: 108c8990b; -[SCAbstractComponentProxy setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c898e4(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127794e4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_1127794e4),PTR_s_setDelegate__112640798);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127794e0),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 108c8990c; end: 108c89933; -[SCAbstractComponentProxy setDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8990c(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127794e4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c189690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_1127794e4),PTR_s_setDataProvider__11263ffc0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127794d8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 108c89934; end: 108c8995b; -[SCAbstractComponentProxy removeDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89934(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127794e4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_1127794e4),PTR_s_removeDataProvider__112628970);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127794d8),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 108c8995c; end: 108c89983; -[SCAbstractComponentProxy addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8995c(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127794e4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_1127794e4),PTR_s_addListener__11259c008);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127794dc),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 108c89984; end: 108c899ab; -[SCAbstractComponentProxy removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89984(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127794e4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_1127794e4),PTR_s_removeListener__112628e00);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127794dc),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 108c899ac; end: 108c89a0b; -[SCAbstractComponentProxy setupOutputResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c899ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_108c89a0c;
  puStack_28 = &UNK_110abf898;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010c297260(*(undefined8 *)(param_3 + _DAT_1127794d4),param_4,&puStack_40,0);
  return;
}



/* Entry: 108c89a0c; end: 108c89a1f;  */

void FUN_108c89a0c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2290b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,
               PTR_s_setupOutputResolution__112667e50);
    return;
  }
  return;
}



/* Entry: 108c89a20; end: 108c89a7f; -[SCAbstractComponentProxy setViewPortAspectRatioNumerator:denominator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89a20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_108c89a80;
  puStack_28 = &UNK_110abf898;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x00010c297260(*(undefined8 *)(param_1 + _DAT_1127794d4),param_2,&puStack_40,0);
  return;
}



/* Entry: 108c89a80; end: 108c89a93;  */

void FUN_108c89a80(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c222af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_setViewPortAspectRatioNumerator__1126664e0,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 108c89a94; end: 108c89b8b; -[SCAbstractComponentProxy setViewport:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89a94(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
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
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794d4);
  uStack_140 = 0xc2000000;
  uStack_78 = param_3[0x15];
  uStack_80 = param_3[0x14];
  uStack_68 = param_3[0x17];
  uStack_70 = param_3[0x16];
  uStack_58 = param_3[0x19];
  uStack_60 = param_3[0x18];
  uStack_48 = param_3[0x1b];
  uStack_50 = param_3[0x1a];
  uStack_b8 = param_3[0xd];
  uStack_c0 = param_3[0xc];
  uStack_a8 = param_3[0xf];
  uStack_b0 = param_3[0xe];
  uStack_98 = param_3[0x11];
  uStack_a0 = param_3[0x10];
  uStack_88 = param_3[0x13];
  uStack_90 = param_3[0x12];
  uStack_f8 = param_3[5];
  uStack_100 = param_3[4];
  uStack_e8 = param_3[7];
  uStack_f0 = param_3[6];
  uStack_d8 = param_3[9];
  uStack_e0 = param_3[8];
  uStack_c8 = param_3[0xb];
  uStack_d0 = param_3[10];
  uStack_118 = param_3[1];
  uStack_120 = *param_3;
  uStack_108 = param_3[3];
  uStack_110 = param_3[2];
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_138 = FUN_108c89b8c;
  puStack_130 = &UNK_110abf8b8;
  uStack_128 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(uVar1,param_2,&puStack_148,0);
  _objc_release(uStack_128);
  _objc_release(param_4);
  return;
}



/* Entry: 108c89b8c; end: 108c89c0b;  */

void FUN_108c89b8c(long param_1,long param_2)

{
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xd0);
    uStack_50 = *(undefined8 *)(param_1 + 200);
    uStack_38 = *(undefined8 *)(param_1 + 0xe0);
    uStack_40 = *(undefined8 *)(param_1 + 0xd8);
    uStack_28 = *(undefined8 *)(param_1 + 0xf0);
    uStack_30 = *(undefined8 *)(param_1 + 0xe8);
    uStack_18 = *(undefined8 *)(param_1 + 0x100);
    uStack_20 = *(undefined8 *)(param_1 + 0xf8);
    uStack_88 = *(undefined8 *)(param_1 + 0x90);
    uStack_90 = *(undefined8 *)(param_1 + 0x88);
    uStack_78 = *(undefined8 *)(param_1 + 0xa0);
    uStack_80 = *(undefined8 *)(param_1 + 0x98);
    uStack_68 = *(undefined8 *)(param_1 + 0xb0);
    uStack_70 = *(undefined8 *)(param_1 + 0xa8);
    uStack_58 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    uStack_c8 = *(undefined8 *)(param_1 + 0x50);
    uStack_d0 = *(undefined8 *)(param_1 + 0x48);
    uStack_b8 = *(undefined8 *)(param_1 + 0x60);
    uStack_c0 = *(undefined8 *)(param_1 + 0x58);
    uStack_a8 = *(undefined8 *)(param_1 + 0x70);
    uStack_b0 = *(undefined8 *)(param_1 + 0x68);
    uStack_98 = *(undefined8 *)(param_1 + 0x80);
    uStack_a0 = *(undefined8 *)(param_1 + 0x78);
    uStack_e8 = *(undefined8 *)(param_1 + 0x30);
    uStack_f0 = *(undefined8 *)(param_1 + 0x28);
    uStack_d8 = *(undefined8 *)(param_1 + 0x40);
    uStack_e0 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c2232c0(param_2,param_2,&uStack_f0,*(undefined8 *)(param_1 + 0x20));
  }
  return;
}



/* Entry: 108c89c0c; end: 108c89ee3; -[SCAbstractComponentProxy _setupComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89c0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = (long)_DAT_1127794d8;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_220,auStack_d8,0x10);
    if (lVar3 != 0) {
      lVar4 = *plStack_210;
      do {
        lVar5 = 0;
        do {
          if (*plStack_210 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c189680(param_1,param_2,*(undefined8 *)(lStack_218 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_220,auStack_d8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
  }
  lVar3 = (long)_DAT_1127794dc;
  lVar4 = *(long *)(param_1 + lVar3);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  lVar3 = lVar4;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(lVar4);
    lVar3 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_260,auStack_158,0x10);
    if (lVar3 != 0) {
      lVar5 = *plStack_250;
      do {
        lVar6 = 0;
        do {
          if (*plStack_250 != lVar5) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010bef9980(param_1,param_2,*(undefined8 *)(lStack_258 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_260,auStack_158,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar4);
  }
  lVar3 = (long)_DAT_1127794e0;
  lVar5 = *(long *)(param_1 + lVar3);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  lVar3 = lVar5;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    _objc_retain(lVar5);
    lVar3 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_2a0,auStack_1d8,0x10);
    if (lVar3 != 0) {
      lVar6 = *plStack_290;
      do {
        lVar7 = 0;
        do {
          if (*plStack_290 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010c18b5e0(param_1,param_2,*(undefined8 *)(lStack_298 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_2a0,auStack_1d8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_1127794e4);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c89ee4; end: 108c89f13; -[SCAbstractComponentProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89ee4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794e4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c89f14; end: 108c89f77; -[SCAbstractComponentProxy forwardInvocation:] */

void FUN_108c89f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15ac20(param_3);
  func_0x00010bfb64a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c06ae40(param_3,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c89f78; end: 108c89f87; -[SCAbstractComponentProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127794d0),
             PTR_s_instanceMethodSignatureForSelect_1125f78f8);
  return;
}



/* Entry: 108c89f88; end: 108c89ff7; -[SCAbstractComponentProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c89f88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127794e0,0);
  _objc_storeStrong(param_1 + _DAT_1127794dc,0);
  _objc_storeStrong(param_1 + _DAT_1127794d8,0);
  _objc_storeStrong(param_1 + _DAT_1127794d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127794e4,0);
  return;
}



/* Entry: 108c89ff8; end: 108c8a613; -[SCComponentManagerProxy initWithComponentManagerFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c89ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db4f0);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127794e8);
  *(undefined **)(param_1 + _DAT_1127794e8) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db4f8);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127794ec);
  *(undefined **)(param_1 + _DAT_1127794ec) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db500);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127794f0);
  *(undefined **)(param_1 + _DAT_1127794f0) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db508);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127794f4);
  *(undefined **)(param_1 + _DAT_1127794f4) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db510);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127794f8);
  *(undefined **)(param_1 + _DAT_1127794f8) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db518);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127794fc);
  *(undefined **)(param_1 + _DAT_1127794fc) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db520);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112779500);
  *(undefined **)(param_1 + _DAT_112779500) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db528);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112779504);
  *(undefined **)(param_1 + _DAT_112779504) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db530);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112779508);
  *(undefined **)(param_1 + _DAT_112779508) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db538);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277950c);
  *(undefined **)(param_1 + _DAT_11277950c) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db540);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112779510);
  *(undefined **)(param_1 + _DAT_112779510) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db548);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112779514);
  *(undefined **)(param_1 + _DAT_112779514) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db550);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112779518);
  *(undefined **)(param_1 + _DAT_112779518) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126db4e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db558);
  func_0x00010c0005a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277951c);
  *(undefined **)(param_1 + _DAT_11277951c) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c297260(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108c8a614; end: 108c8a683;  */

void FUN_108c8a614(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_videoProcessingComponent_112684580);
  return;
}



/* Entry: 108c8a684; end: 108c8a6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a684(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar2 = (long)_DAT_112779520;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8a6f0; end: 108c8a71f; -[SCComponentManagerProxy videoProcessingComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a6f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794e8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a720; end: 108c8a74f; -[SCComponentManagerProxy uriServiceComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a720(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794ec);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a750; end: 108c8a77f; -[SCComponentManagerProxy externalImageComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a750(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794f0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a780; end: 108c8a7af; -[SCComponentManagerProxy lensComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a780(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794f4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a7b0; end: 108c8a7df; -[SCComponentManagerProxy trackingComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a7b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794f8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a7e0; end: 108c8a80f; -[SCComponentManagerProxy trackingSerializationComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a7e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127794fc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a810; end: 108c8a83f; -[SCComponentManagerProxy analyticsComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a810(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779508);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


