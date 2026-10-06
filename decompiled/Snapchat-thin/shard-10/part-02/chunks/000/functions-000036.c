/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a4dcd0; end: 107a4dcfb;  */

void FUN_107a4dcd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a4dcfc; end: 107a4ddb7;  */

void FUN_107a4dcfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bdfb6a0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a4ddb8; end: 107a4de33;  */

void FUN_107a4ddb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1599e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010befd440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0740(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a4de34; end: 107a4dedf; -[SCLongformShowOperaSession didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_107a4de34(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0xf0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xf0));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bdfd560(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x100);
  func_0x00010c076220();
  if (iVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107a4dee0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bf94c40(*(undefined8 *)(param_1 + 0x100),param_2,&puStack_48);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  _objc_release(uVar3);
  return;
}



/* Entry: 107a4dee0; end: 107a4dee7;  */

void FUN_107a4dee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDismissSendViewController_11255cef8);
  return;
}



/* Entry: 107a4dee8; end: 107a4e0e3; -[SCLongformShowOperaSession _sendToPreviewConfigurationWithThumbnailUrl:completion:] */

void FUN_107a4dee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107a4dfb4;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a4e0e4; end: 107a4e20b;  */

void FUN_107a4e0e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b07e8;
  _objc_alloc(PTR_PTR_1126b07e8);
  func_0x00010c061960();
  puVar3 = PTR_PTR_1126b07f0;
  func_0x00010c299100(0x3fe3aa03e88cb3c9,PTR_PTR_1126b07f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b07f8;
  _objc_alloc(PTR_PTR_1126b07f8);
  func_0x00010c01dde0();
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar6);
  return;
}



/* Entry: 107a4e20c; end: 107a4e263;  */

void FUN_107a4e20c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0648;
  _objc_alloc(PTR_PTR_1126b0648);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c182220();
  func_0x00010c1a9f00(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a4e264; end: 107a4e34b; -[SCLongformShowOperaSession _detachSendToUIWithCompletion:] */

void FUN_107a4e264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  lVar2 = *(long *)(param_1 + 0x1c0);
  if (lVar2 != 0) {
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf6f440(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107a4e34c; end: 107a4e387;  */

void FUN_107a4e34c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfd560();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000107a4e384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107a4e388; end: 107a4e3df; -[SCLongformShowOperaSession _didDismissSendViewController] */

void FUN_107a4e388(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be95dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeOpera_112583110);
  return;
}



/* Entry: 107a4e3e0; end: 107a4e80b; -[SCLongformShowOperaSession _sendStoryShareToSelectedItems:additionalText:] */

void FUN_107a4e3e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = PTR_PTR_1126afca8;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107a4e80c;
  puStack_88 = &UNK_110855e40;
  ppuVar1 = &puStack_a0;
  lStack_80 = param_1;
  _objc_retainBlock();
  uVar4 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109f71b0);
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf82000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar7 = uVar5;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = uVar7;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar9 = PTR_PTR_1126be938;
  _objc_alloc();
  lVar10 = param_1;
  func_0x00010bf5e5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  uVar6 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf45500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60(puVar9);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar10);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_initWeak(auStack_a8,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(ppuVar1);
  _objc_retain(uVar4);
  _objc_retain(param_4);
  func_0x00010c13ac40(uVar5);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a4e80c; end: 107a4e817;  */

void FUN_107a4e80c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be311f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleStoryShareSendResult__112569e18,param_2);
  return;
}



/* Entry: 107a4e818; end: 107a4e8ff;  */

void FUN_107a4e818(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0f4aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d6058;
  _objc_alloc(PTR_PTR_1126d6058);
  uVar1 = param_2;
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d480(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a4e900; end: 107a4e947;  */

void FUN_107a4e900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a4e948; end: 107a4ea33;  */

void FUN_107a4e948(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      func_0x00010be2f320(lVar1);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_107a4ea34;
      puStack_50 = &UNK_110849530;
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar2);
      uStack_48 = uVar2;
      func_0x00010007380c(uVar3,&puStack_68);
      _objc_release(uStack_48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a4ea34; end: 107a4ea43;  */

void FUN_107a4ea34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107a4ea40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xc);
  return;
}



/* Entry: 107a4ea44; end: 107a4eb63; -[SCLongformShowOperaSession _handleResolvedConversations:platformAnalytics:recipients:additionalText:completionQueue:completionHandler:] */

void FUN_107a4ea44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf45500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b5bc8;
    _objc_alloc(PTR_PTR_1126b5bc8);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c067fc0(uVar4);
    func_0x00010c000be0(puVar3,param_2,lVar1,0,uVar4,param_6,0,0);
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c420();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4eb64; end: 107a4ec1b; -[SCLongformShowOperaSession _handleStoryShareSendResult:] */

void FUN_107a4eb64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
  if (param_3 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 107a4ec1c; end: 107a4ecab; -[SCLongformShowOperaSession _resumeOpera] */

void FUN_107a4ec1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    return;
  }
  param_1 = param_1 + 0x298;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a4ecac; end: 107a4ed27; -[SCLongformShowOperaSession _pauseOpera] */

void FUN_107a4ecac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,0,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a4ed28; end: 107a4ee27; -[SCLongformShowOperaSession _logAffiliateWebpageImpressionWithIsTopSnap:currentShow:] */

void FUN_107a4ed28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  FUN_107a53668(param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_4);
  uVar2 = uVar3;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_107a53e5c();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0308;
  if ((int)uVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0de0(puVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107a4ee28; end: 107a4f063; -[SCLongformShowOperaSession _handleConfirmationUnsubscribeAction:params:] */

void FUN_107a4ee28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c11b700(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar7 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107a4f064;
  puStack_90 = &UNK_110850cf8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  uStack_88 = uVar1;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  ppuVar6 = &puStack_a8;
  uStack_78 = param_4;
  _objc_retainBlock();
  lVar7 = *(long *)(param_1 + 0x1a0);
  if (lVar7 == 0) {
    (*(code *)ppuVar6[2])(ppuVar6);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251ac0();
    _objc_release(lVar7);
  }
  _objc_release(ppuVar6);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a4f064; end: 107a4f13f;  */

void FUN_107a4f064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a4f140;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a4f140; end: 107a4f17f;  */

void FUN_107a4f140(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0eb7c0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a4f180; end: 107a4f2df; -[SCLongformShowOperaSession _subscribeToLongform:show:interactionContext:shouldLogSubscribeAction:currentItemPageId:] */

void FUN_107a4f180(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d6050;
  _objc_alloc(PTR_PTR_1126d6050);
  func_0x00010c11b1e0(param_4);
  func_0x00010c03c080(puVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_3;
  _objc_retain(param_7);
  uStack_68 = param_5;
  uStack_5f = param_6;
  func_0x00010c28a8a0(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 107a4f2e0; end: 107a4f4bb;  */

void FUN_107a4f2e0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((param_2 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x140);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf82000(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    uVar4 = uVar2;
    func_0x00010c25bac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      FUN_107aff838(uVar4,*(undefined8 *)(lVar1 + 0x180),*(undefined8 *)(lVar1 + 0xb8),
                    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1a8));
    }
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107a4f4bc;
    puStack_58 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lStack_50 = lVar1;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    if (*(char *)(param_1 + 0x49) == '\x01') {
      func_0x00010bdcbca0(lVar1);
      uVar5 = *(undefined8 *)(lVar1 + 0xd8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x000107bfa524(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf454e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c285ba0(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
    _objc_release(uStack_48);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107a4f4bc; end: 107a4f4c7;  */

void FUN_107a4f4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedd690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaylistItemForItemPageId_112594f48,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107a4f4c8; end: 107a4f567; -[SCLongformShowOperaSession _updatePlaylistItemForItemPageId:] */

void FUN_107a4f4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x2a0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + 0x2a0;
  _objc_loadWeakRetained(param_1);
  lVar1 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a4f568; end: 107a4f72f; -[SCLongformShowOperaSession _sendToShareSheetConfigurationWithDeeplinkUrl:sendToSessionId:] */

void FUN_107a4f568(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x107a4f690;
    puStack_40 = &UNK_110850038;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(param_4);
    func_0x00010bf11fe0(puVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2498;
    _objc_alloc(PTR_PTR_1126b2498);
    func_0x00010c037ea0();
    _objc_release(param_4);
    puVar3 = PTR_PTR_1126b0808;
    _objc_alloc(PTR_PTR_1126b0808);
    func_0x00010c051820();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a4f730; end: 107a4f737; -[SCLongformShowOperaSession handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_107a4f730(void)

{
  return 0;
}



/* Entry: 107a4f738; end: 107a4f73b; -[SCLongformShowOperaSession shareSheetDismissedWithShareDestination:] */

void FUN_107a4f738(void)

{
  return;
}



/* Entry: 107a4f73c; end: 107a4f73f; -[SCLongformShowOperaSession showProfilePresenterDidFinishPresenting:profileViewController:] */

void FUN_107a4f73c(void)

{
  return;
}



/* Entry: 107a4f740; end: 107a4f75f; -[SCLongformShowOperaSession businessProfilesPresenterScopeWillDismiss:] */

void FUN_107a4f740(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0xf8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a4f760; end: 107a4f86f; -[SCLongformShowOperaSession _subscribeToOperaAnalyticsEvents] */

void FUN_107a4f760(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x298;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0e9f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = lVar1;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107a4f870; end: 107a4f92b;  */

void FUN_107a4f870(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0be740(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107a4f92c; end: 107a4f983;  */

void FUN_107a4f92c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a4f984; end: 107a4f98f;  */

void FUN_107a4f984(void)

{
  return;
}



/* Entry: 107a4f990; end: 107a4fa57; -[SCLongformShowOperaSession _handleOperaPlaybackEventPageId:isPlaying:] */

void FUN_107a4f990(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x200);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new(PTR_PTR_1126b46f0);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x200),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x200);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c0f5b20();
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3);
  }
  else {
    func_0x00010c24d960();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4fa58; end: 107a4fc13; -[SCLongformShowOperaSession _totalViewTimeForPageId:] */

long FUN_107a4fa58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x200);
    func_0x00010c0dff20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x200);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed820();
      uVar3 = *(undefined8 *)(param_1 + 0x1f8);
      func_0x00010bf4b900(uVar3,param_2,param_3);
      if ((int)uVar3 == 0) {
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        lVar4 = *(long *)(param_1 + 0x200);
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010bf52a60();
        if (lVar1 != 0) {
          lVar6 = *plStack_130;
          do {
            lVar7 = 0;
            do {
              if (*plStack_130 != lVar6) {
                _objc_enumerationMutation(lVar4);
              }
              uVar3 = *(undefined8 *)(lStack_138 + lVar7 * 8);
              uVar5 = *(ulong *)(param_1 + 0x1f8);
              func_0x00010bf4b900(uVar5,param_2,uVar3);
              if ((uVar5 & 1) == 0) {
                func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x200),param_2,uVar3);
              }
              lVar7 = lVar7 + 1;
            } while (lVar1 != lVar7);
            lVar1 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_140,auStack_f8,0x10);
          } while (lVar1 != 0);
        }
        _objc_release(lVar4);
      }
      else {
        func_0x00010c138160(uVar2);
      }
      _objc_release(uVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    return *(long *)(param_3 + 0x220);
  }
  return param_3;
}



/* Entry: 107a4fc14; end: 107a4fc1b; -[SCLongformShowOperaSession sessionID] */

undefined8 FUN_107a4fc14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}



/* Entry: 107a4fc1c; end: 107a4fc23; -[SCLongformShowOperaSession loggingContext] */

undefined8 FUN_107a4fc1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 107a4fc24; end: 107a4fc2b; -[SCLongformShowOperaSession actionMenuEntryEvent] */

undefined8 FUN_107a4fc24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 107a4fc2c; end: 107a4fc33; -[SCLongformShowOperaSession sessionTimeViewedSec] */

undefined8 FUN_107a4fc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* Entry: 107a4fc34; end: 107a4fc3b; -[SCLongformShowOperaSession topSnapsViewed] */

undefined8 FUN_107a4fc34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 107a4fc3c; end: 107a4fc43; -[SCLongformShowOperaSession channelIndex] */

undefined8 FUN_107a4fc3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 107a4fc44; end: 107a4fc4b; -[SCLongformShowOperaSession numSnaps] */

undefined8 FUN_107a4fc44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x250);
}



/* Entry: 107a4fc4c; end: 107a4fc53; -[SCLongformShowOperaSession sortOrderId] */

undefined8 FUN_107a4fc4c(long param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



/* Entry: 107a4fc54; end: 107a4fc5b; -[SCLongformShowOperaSession context] */

undefined8 FUN_107a4fc54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}



/* Entry: 107a4fc5c; end: 107a4fc63; -[SCLongformShowOperaSession deepLinkId] */

undefined8 FUN_107a4fc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x268);
}



/* Entry: 107a4fc64; end: 107a4fc6b; -[SCLongformShowOperaSession editionVersion] */

undefined8 FUN_107a4fc64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 107a4fc6c; end: 107a4fc73; -[SCLongformShowOperaSession editionId] */

undefined8 FUN_107a4fc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 107a4fc74; end: 107a4fc7b; -[SCLongformShowOperaSession publisherId] */

undefined8 FUN_107a4fc74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 107a4fc7c; end: 107a4fc83; -[SCLongformShowOperaSession isPayToPromote] */

undefined1 FUN_107a4fc7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x219);
}



/* Entry: 107a4fc84; end: 107a4fc8b; -[SCLongformShowOperaSession hostUserId] */

undefined8 FUN_107a4fc84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 107a4fc8c; end: 107a4fc93; -[SCLongformShowOperaSession mediaPlaybackSessionId] */

undefined8 FUN_107a4fc8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



/* Entry: 107a4fc94; end: 107a4fcab; -[SCLongformShowOperaSession operaControlling] */

void FUN_107a4fc94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a4fcac; end: 107a4fcc3; -[SCLongformShowOperaSession playlistItemController] */

void FUN_107a4fcac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x2a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a4fcc4; end: 107a4fccf; -[SCLongformShowOperaSession setPlaylistItemController:] */

void FUN_107a4fcc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x2a0,param_3);
  return;
}



/* Entry: 107a4fcd0; end: 107a5000b; -[SCLongformShowOperaSession .cxx_destruct] */

void FUN_107a4fcd0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x2a0);
  _objc_destroyWeak(param_1 + 0x298);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 107a5000c; end: 107a52a3b;  */

void FUN_107a5000c(double param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,long param_7,long param_8,ulong param_9,long param_10,
                  undefined8 param_11,undefined8 param_12,ulong param_13,ulong param_14,
                  char param_15,undefined4 param_16,ulong param_17,undefined8 param_18,
                  undefined8 param_19,undefined8 param_20,undefined8 param_21,undefined8 param_22,
                  undefined8 param_23,undefined1 param_24,undefined4 param_25,long param_26,
                  undefined8 param_27)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  double dVar22;
  ulong uStack_310;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain();
  _objc_retain(param_5);
  puVar21 = PTR_PTR_1126b2368;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_alloc(puVar21);
  func_0x00010c0594a0();
  lVar3 = param_2;
  func_0x00010c29a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar17 = param_4;
  FUN_107af8fb4(param_4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar3);
  func_0x00010c2b53a0(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  uVar4 = param_5;
  func_0x00010bf45500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf82000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_5;
    func_0x00010bf82000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar4);
  }
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar17);
  _objc_release(puVar21);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_retain(puVar2);
  _objc_retain(param_17);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_22);
  _objc_retain(param_8);
  func_0x00010bf885a0(param_13);
  if (param_1 <= 0.0) {
    uVar4 = param_5;
    func_0x00010c2a2900(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108476e48();
    _objc_release(uVar4);
    if (0.0 < param_1) {
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar21);
    }
  }
  else {
    func_0x00010c1d0640(puVar2);
  }
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x4086800000000000,0x4094000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  puVar21 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b19f8;
  puStack_100 = puVar21;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar21);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  lVar3 = param_2;
  func_0x000108476a6c(param_2,param_22,1,500,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_22);
  lVar6 = param_8;
  func_0x00010c25c9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  if (lVar6 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(puVar19);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_17);
  _objc_release(puVar2);
  _objc_retain(puVar2);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_17);
  uVar4 = param_5;
  func_0x00010c11b6e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar4);
  puVar21 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  if (param_7 != 0) {
    func_0x00010c1d0640(puVar2);
    uVar4 = param_5;
    func_0x00010c0b4680(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  func_0x00010c1d0640(puVar2);
  uVar4 = param_5;
  func_0x00010c23aa60();
  if (((uVar4 == 3) || (uVar4 = param_5, func_0x00010c154b00(), (long)uVar4 < 1)) ||
     (uVar4 = param_5, func_0x00010bf984c0(),
     ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0, (long)uVar4 < 1)) {
    uVar4 = param_5;
    func_0x00010bfe2bc0();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((uVar4 & 1) == 0) {
      uVar4 = param_5;
      func_0x00010c11ae60(param_5);
      func_0x00010bf655e0((double)(uVar4 / 1000),ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar8;
      func_0x0001084866e4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107a508b0;
    }
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e58318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e58318,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154b00();
    func_0x00010bf984c0();
    func_0x00010c14de00(ppuVar16);
    _objc_retainAutoreleasedReturnValue();
LAB_107a508b0:
    func_0x00010c1d0640(puVar2);
    _objc_release(ppuVar16);
    _objc_release(ppuVar8);
  }
  _objc_release(param_17);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(puVar2);
  uVar4 = param_17;
  func_0x000108f4ae38();
  lVar3 = param_2;
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(lVar3);
  _objc_retain(param_17);
  _objc_retain(param_5);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf8c980();
  func_0x00010c14de00(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_5;
  func_0x00010bf68960(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c238a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar7);
  puVar21 = puVar2;
  func_0x00010c1d0640(puVar2);
  FUN_107ac03a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120();
  if ((((param_14 - 0x49 < 0x1a) && ((1L << (param_14 - 0x49 & 0x3f) & 0x2020001U) != 0)) ||
      ((uVar7 = param_14 - 0x57 >> 1, (uVar7 | param_14 - 0x57 << 0x3f) < 8 &&
       ((1L << (uVar7 & 0x3f) & 0xb1U) != 0)))) ||
     ((param_14 - 0x42 < 0x2a && ((1L << (param_14 - 0x42 & 0x3f) & 0x3c000100701U) != 0)))) {
    func_0x00010befa120(puVar21);
  }
  if ((((int)uVar4 != 0) && (param_14 - 0x2c < 0x37)) &&
     ((1L << (param_14 - 0x2c & 0x3f) & 0x40008000000003U) != 0)) {
    func_0x00010befa120(puVar21);
  }
  func_0x00010befa120(puVar21);
  puVar5 = puVar21;
  func_0x00010bf51e00(puVar21);
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar5);
  lVar6 = lVar3;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  if ((param_14 == 0x46) && (uVar4 = param_17, func_0x000108f4b648(), (int)uVar4 != 0)) {
    func_0x00010c1d0640(puVar2);
  }
  _objc_release(puVar21);
  _objc_release(param_17);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_retain(param_5);
  _objc_retain(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_5;
  func_0x00010bf68960(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0df760(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  _objc_release(uVar4);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar2);
  _objc_retain(puVar2);
  _objc_retain(param_2);
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar9 = param_2;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar9);
      }
      uVar18 = *(undefined8 *)(lVar20 * 8);
      puVar19 = PTR_PTR_1126d53e0;
      _objc_alloc(PTR_PTR_1126d53e0);
      func_0x00010c250f20(uVar18);
      uVar17 = uVar18;
      func_0x00010c241220(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c030d20(puVar19);
      _objc_release(uVar17);
      func_0x00010befa120(puVar21);
      func_0x00010c241220(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar5);
      _objc_release(uVar18);
      _objc_release(puVar19);
      lVar20 = lVar20 + 1;
    } while (lVar3 != lVar20);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  puVar19 = puVar21;
  func_0x00010c246ca0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar19;
  func_0x00010bf51e00();
  _objc_release(puVar21);
  _objc_release(puVar19);
  puVar21 = PTR_PTR_1126d53e8;
  _objc_alloc(PTR_PTR_1126d53e8);
  puVar19 = PTR_PTR_1126c9d08;
  func_0x00010bf35860(PTR_PTR_1126c9d08);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf51e00(puVar10);
  func_0x00010c010d80(puVar21);
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  _objc_release(puVar11);
  _objc_release(puVar19);
  puVar21 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar22 = 0.0;
  lVar9 = param_2;
  FUN_107aec27c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar9);
      }
      uVar17 = *(undefined8 *)(lVar20 * 8);
      puVar19 = PTR_PTR_1126d53e0;
      _objc_alloc(PTR_PTR_1126d53e0);
      func_0x00010c250f20(uVar17);
      func_0x00010c241220(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c030d20(puVar19);
      func_0x00010befa120(puVar21);
      _objc_release(puVar19);
      _objc_release(uVar17);
      lVar20 = lVar20 + 1;
    } while (lVar3 != lVar20);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  func_0x00010bf8b340(param_2);
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (0.0 < dVar22) {
    func_0x00010bf8b340(param_2);
    func_0x00010c0df720(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar19);
  }
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar11 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar11 != (undefined *)0x0) {
    puVar11 = puVar2;
    func_0x00010c0e00e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar19);
    _objc_release(puVar11);
  }
  puVar11 = puVar21;
  func_0x00010bf529e0();
  if (puVar11 != (undefined *)0x0) {
    puVar11 = PTR_PTR_1126d53e8;
    _objc_alloc(PTR_PTR_1126d53e8);
    puVar12 = PTR_PTR_1126c9d08;
    func_0x00010befdf80(PTR_PTR_1126c9d08);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar21;
    func_0x00010bf51e00(puVar21);
    func_0x00010c010d80(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar12);
    func_0x00010c066b00(puVar19);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar11);
  }
  puVar11 = puVar19;
  func_0x00010bf529e0();
  if (puVar11 != (undefined *)0x0) {
    puVar11 = puVar19;
    func_0x00010bf51e00(puVar19);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar11);
  }
  _objc_release(puVar19);
  _objc_release(puVar21);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_retain(puVar2);
  puVar21 = PTR_PTR_1126ce808;
  func_0x00010c29d3c0();
  if ((int)puVar21 != 0) {
    puVar5 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar19 = puVar5;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = puVar5;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar19;
    func_0x00010bf529e0();
    _objc_release(puVar19);
    if (puVar10 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar11 = puVar5;
        func_0x00010bf9a520(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e1120();
        func_0x00010c0df720(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(puVar21);
        _objc_release(puVar10);
        _objc_release(puVar12);
        _objc_release(puVar11);
        puVar10 = puVar5;
        func_0x00010bf9a520();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf529e0();
        _objc_release(puVar10);
        puVar19 = puVar19 + 1;
      } while (puVar19 < puVar11);
    }
    puVar19 = puVar21;
    func_0x00010bf51e00(puVar21);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar19);
    _objc_release(puVar21);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_5);
  _objc_retain(puVar2);
  func_0x00010bf8c980(param_5);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar21;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  uVar4 = param_5;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar4);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11b1e0(param_5);
  func_0x00010c0df7c0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  uVar4 = param_5;
  func_0x00010c11b6e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar4);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11ae60(param_5);
  func_0x00010c0df880(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  uVar4 = param_5;
  func_0x00010c237cc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar4);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_5;
  func_0x00010c2a2900(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0741a0(uVar4);
  func_0x00010c0df6e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar21);
  _objc_release(uVar4);
  _objc_release(puVar5);
  func_0x00010c11b1e0(param_5);
  _objc_retain(puVar2);
  _objc_retain(param_9);
  _objc_retain(param_17);
  puVar5 = PTR_PTR_1126d6050;
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_alloc(puVar5);
  func_0x00010c03c080();
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c080120(param_9);
  func_0x00010c0df6e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  func_0x00010c1d0640(puVar2);
  uVar4 = param_9;
  func_0x00010c080120();
  if ((int)uVar4 != 0) {
    func_0x00010c1d0640(puVar2);
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c079480(param_9);
    func_0x00010c0df6e0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar21);
    func_0x00010c1d0640(puVar2);
  }
  uVar4 = param_9;
  func_0x00010c080120();
  if ((uVar4 & 1) == 0) {
    func_0x00010c1d0640(puVar2);
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000108f4816c(param_17,1);
    func_0x00010c0df780(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar21);
    func_0x00010c1d0640(puVar2);
    puVar19 = PTR_PTR_1126d52a0;
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c2bea80(puVar19);
    func_0x00010c0df720(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar21);
    _objc_release(puVar10);
LAB_107a5193c:
    func_0x00010c1d0640(puVar2);
  }
  else {
    uVar4 = param_9;
    func_0x00010c080120();
    if (((int)uVar4 != 0) && (uVar4 = param_9, func_0x00010bf2cf60(), (int)uVar4 != 0)) {
      func_0x00010c1d0640(puVar2);
      goto LAB_107a5193c;
    }
  }
  _objc_release(puVar5);
  _objc_release(param_17);
  _objc_release(param_9);
  _objc_release(puVar2);
  if (param_15 != '\0') {
    _objc_retain(puVar2);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_7);
    _objc_retain(param_17);
    if (param_7 != 0) {
      uVar4 = param_3;
      func_0x00010bfb1200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        func_0x00010c1d0640(puVar2);
        uVar4 = param_3;
        func_0x00010bfb1200(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar7;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1266c0(param_7);
        _objc_release(uVar14);
        _objc_release(uVar7);
        _objc_release(uVar4);
        uVar4 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar7);
        _objc_release(uVar4);
      }
      uVar4 = param_3;
      func_0x00010c0ef980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        func_0x00010c1d0640(puVar2);
        uVar4 = param_3;
        func_0x00010c0ef980(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar7;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c126ce0(param_7);
        _objc_release(uVar14);
        _objc_release(uVar7);
        _objc_release(uVar4);
        uVar4 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar7);
        _objc_release(uVar4);
        func_0x00010c1d0640(puVar2);
      }
    }
    _objc_release(param_17);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(puVar2);
  }
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  uVar4 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(param_5);
  _objc_retain(param_23);
  _objc_retain(param_13);
  _objc_retain(uVar4);
  _objc_retain(param_26);
  _objc_retain(param_17);
  puVar19 = puVar2;
  FUN_107b27784(puVar2,param_5,param_24,param_17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = puVar19;
  func_0x00010bf46560(puVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b5c0();
  func_0x00010c0df6e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  _objc_release(puVar5);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = puVar19;
  func_0x00010bf46560(puVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d7a0();
  func_0x00010c0df6e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  _objc_release(puVar5);
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = puVar19;
  func_0x00010c25a6e0(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c25b720();
  puVar11 = puVar19;
  func_0x00010c25a6e0(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25b7c0();
  puVar13 = puVar19;
  func_0x00010c29d360(puVar19);
  FUN_107b2894c(puVar10,puVar12,puVar13);
  func_0x00010c0df6e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  _objc_release(puVar11);
  _objc_release(puVar5);
  uVar17 = param_23;
  func_0x00010c269d40(param_23);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c116a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf8c980(param_5);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar21);
  _objc_retainAutoreleasedReturnValue();
  uStack_310 = param_13;
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  uVar14 = uVar4;
  func_0x00010bfbf900(uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar21);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar17);
  uVar17 = uVar18;
  func_0x00010beec820(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar17);
  if ((param_14 == 0x65) && (uVar7 = param_17, func_0x000108f4b700(param_17,0), (int)uVar7 != 0)) {
    puVar21 = PTR_PTR_1126b2d20;
    func_0x00010bf7f080(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar21);
  }
  puVar21 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_26 != 0) {
    _objc_initWeak(&uStack_180,param_26);
    puVar5 = PTR_PTR_1126ae720;
    puStack_100 = puVar21;
    puStack_f8 = (undefined *)0xc2000000;
    pcStack_f0 = FUN_107a53fa0;
    puStack_e8 = &UNK_110885178;
    _objc_copyWeak(&uStack_d8,&uStack_180);
    _objc_retain(puVar19);
    puStack_e0 = puVar19;
    func_0x00010bf11fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2d20;
    func_0x00010c24afc0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puStack_e0);
    _objc_destroyWeak(&uStack_d8);
    _objc_destroyWeak(&uStack_180);
  }
  _objc_retain(puVar2);
  _objc_retain(param_5);
  puVar5 = puVar19;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c06d7a0();
  _objc_release(puVar5);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar10 != 0) {
    puVar11 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar12 = puVar11;
    _objc_opt_isKindOfClass(puVar11,puVar10);
    puVar10 = puVar11;
    if (((ulong)puVar12 & 1) == 0) {
      puVar10 = (undefined *)0x0;
    }
    _objc_retain(puVar10);
    _objc_release(puVar11);
    puVar11 = puVar5;
    if (puVar10 != (undefined *)0x0) {
      puVar11 = puVar10;
    }
    _objc_retain(puVar11);
    _objc_release(puVar10);
    _objc_opt_class(PTR_PTR_1126d52b0);
    puVar10 = puVar11;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07c940(param_5);
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0822a0(param_5);
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar10);
  }
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(uVar18);
  _objc_release(puVar19);
  _objc_release(param_17);
  _objc_release(param_26);
  _objc_release(uVar4);
  _objc_release(param_13);
  _objc_release(param_23);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  uVar4 = param_17;
  func_0x0001085356d8(param_17,param_14);
  puVar19 = PTR_PTR_1126b3af0;
  if ((int)uVar4 != 0) {
    _objc_retain(param_17);
    _objc_retain(puVar2);
    _objc_alloc(puVar19);
    func_0x00010c054900();
    puVar10 = puVar2;
    func_0x000107d27920(puVar2,param_14,param_17,puVar19,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_17);
    func_0x00010bef7f60(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar19);
  }
  uVar4 = param_3;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 == 0) {
    uVar4 = param_5;
    func_0x00010bf01420();
    if ((int)uVar4 != 0) {
      _objc_retain(param_5);
      _objc_retain(param_17);
      puVar19 = PTR_PTR_1126b64b8;
      uVar4 = param_5;
      uVar7 = param_17;
      if (param_10 != 0) {
        _objc_retain(param_10);
        _objc_retain(param_9);
        _objc_retain(puVar2);
        _objc_opt_new(puVar19);
        uVar15 = param_5;
        func_0x00010c237cc0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c201be0(puVar19);
        _objc_release(uVar15);
        uVar15 = param_5;
        func_0x00010c116a20(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c174420(puVar19);
        _objc_release(uVar15);
        func_0x00010c080120(param_9);
        func_0x00010c20f460(puVar19);
        func_0x00010c079480(param_9);
        _objc_release(param_9);
        func_0x00010c1d5c40(puVar19);
        func_0x00010c11b1e0(param_5);
        func_0x00010c1e5b60(puVar19);
        uVar15 = param_5;
        func_0x00010c116fc0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d74a0(puVar19);
        _objc_release(uVar15);
        puVar10 = PTR_PTR_1126ce808;
        func_0x00010c29d3e0(PTR_PTR_1126ce808);
        puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uStack_310 = param_5;
        func_0x00010bf8c980();
        func_0x00010c14de00(puVar21);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_10;
        (**(code **)(param_10 + 0x10))(param_10,puVar19,puVar21,1,puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_10);
        func_0x000107d74fcc(puVar2,lVar3,0);
        _objc_release(lVar3);
        _objc_release(puVar21);
        func_0x000107d75344(puVar2,puVar10);
        puVar10 = puVar2;
        goto LAB_107a52584;
      }
      goto LAB_107a52594;
    }
  }
  else {
    uVar4 = param_3;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf8c980(param_5);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar19;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(uVar4);
    _objc_retain(uVar7);
    _objc_retain(param_6);
    _objc_retain(puVar10);
    _objc_retain(param_21);
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    pcStack_168 = FUN_107a53870;
    uStack_160 = 0x107a53880;
    uStack_158 = 0;
    puStack_100 = puVar21;
    puStack_f8 = (undefined *)0xc2000000;
    pcStack_f0 = FUN_107a54020;
    puStack_e8 = &UNK_1109f7550;
    puStack_b8 = puStack_178;
    _objc_retain(puVar2);
    puStack_e0 = puVar2;
    _objc_retain(param_6);
    uStack_b0 = param_11;
    uStack_d8 = param_6;
    _objc_retain(puVar10);
    puStack_d0 = puVar10;
    _objc_retain(uVar7);
    uStack_c8 = uVar7;
    _objc_retain(param_21);
    uStack_c0 = param_21;
    func_0x00010c0bd040(uVar4);
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(puStack_d0);
    _objc_release(uStack_d8);
    _objc_release(puStack_e0);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
    _objc_release(param_21);
    _objc_release(puVar10);
    _objc_release(param_6);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(puVar2);
LAB_107a52584:
    _objc_release(puVar10);
    _objc_release(puVar19);
LAB_107a52594:
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  _objc_retain(puVar2);
  puVar19 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class();
  puVar11 = puVar19;
  _objc_opt_isKindOfClass();
  puVar21 = puVar19;
  if (((ulong)puVar11 & 1) == 0) {
    puVar21 = (undefined *)0x0;
  }
  _objc_retain(puVar21);
  _objc_release(puVar19);
  puVar19 = puVar5;
  if (puVar21 != (undefined *)0x0) {
    puVar19 = puVar21;
  }
  _objc_retain(puVar19);
  _objc_release(puVar21);
  _objc_opt_class(PTR_PTR_1126d53d8);
  puVar21 = puVar19;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar21);
  uVar4 = param_17;
  func_0x000108f4aedc();
  uVar1 = (uint)uVar4 ^ 1;
  if ((param_14 & 0xfffffffffffffffb) != 0x62) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    func_0x00010c1d0640(puVar2);
  }
  puVar21 = PTR_PTR_1126c9448;
  _objc_alloc(PTR_PTR_1126c9448);
  uVar17 = 0;
  func_0x00010c00f960();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar21);
  ppuVar16 = &PTR____CFConstantStringClassReference_110f0eaf8;
  puVar19 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640(puVar2);
  puVar21 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_destroyWeak(puVar5 + 0x28);
  _objc_destroyWeak(&uStack_180);
  __Unwind_Resume(param_2);
  _objc_retain();
  _objc_retain(puVar10);
  _objc_retain(puVar19);
  _objc_retain(ppuVar16);
  _objc_retain(uVar17);
  _objc_retain(uVar14);
  _objc_retain(uStack_310);
  puVar21 = puVar19;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar21 == (undefined *)0x0) {
LAB_107a52d88:
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar19;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar21);
    if (puVar5 == (undefined *)0x0) goto LAB_107a52d88;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar21 = puVar19;
    func_0x00010bf0cb60(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(ppuVar16);
    _objc_retain(puVar10);
    _objc_retain(uVar17);
    _objc_retain(uStack_310);
    _objc_retain(puVar2);
    _objc_retain(ppuVar16);
    _objc_retain(uVar14);
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    func_0x00010c0bd040(puVar21);
    _objc_release(puVar21);
    puVar5 = PTR_PTR_1126b2368;
    _objc_alloc(PTR_PTR_1126b2368);
    func_0x00010c0594a0();
    lVar3 = param_2;
    func_0x00010c29a460(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010c241220(puVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x000107af8fe8(lVar3,puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(lVar3);
    func_0x00010c2b53a0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    puVar11 = puVar2;
    func_0x00010bf529e0();
    puVar21 = (undefined *)0x0;
    if (puVar11 != (undefined *)0x0) {
      puVar21 = puVar2;
    }
    _objc_retain(puVar21);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar14);
    _objc_release(ppuVar16);
    _objc_release(puVar2);
    _objc_release(uStack_310);
    _objc_release(uVar17);
    _objc_release(puVar10);
    _objc_release(ppuVar16);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(uStack_310);
  _objc_release(uVar14);
  _objc_release(uVar17);
  _objc_release(ppuVar16);
  _objc_release(puVar19);
  _objc_release(puVar10);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 107a52a3c; end: 107a52deb;  */

void FUN_107a52a3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar1 = param_3;
      func_0x00010bf0cb60(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      _objc_retain(param_4);
      _objc_retain(param_2);
      _objc_retain(param_6);
      _objc_retain(param_9);
      _objc_retain(puVar4);
      _objc_retain(param_4);
      _objc_retain(param_8);
      _objc_retain(puVar4);
      _objc_retain(puVar4);
      func_0x00010c0bd040(lVar1);
      _objc_release(lVar1);
      puVar5 = PTR_PTR_1126b2368;
      _objc_alloc(PTR_PTR_1126b2368);
      func_0x00010c0594a0();
      uVar6 = param_1;
      func_0x00010c29a460(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x000107af8fe8(uVar6,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(uVar6);
      func_0x00010c2b53a0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      puVar8 = puVar4;
      func_0x00010bf529e0();
      puVar9 = (undefined *)0x0;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar4;
      }
      _objc_retain(puVar9);
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(param_8);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(param_9);
      _objc_release(param_6);
      _objc_release(param_2);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(puVar4);
      goto LAB_107a52d8c;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_107a52d8c:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107a52dec; end: 107a52e1f;  */

void FUN_107a52dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_107a52e20(*(undefined8 *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 107a52e20; end: 107a53137;  */

void FUN_107a52e20(undefined8 param_1,long param_2,long param_3,undefined8 param_4,code *param_5,
                  long param_6,long param_7,ulong param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_107a530e4;
  }
  else {
    _objc_release(lVar1);
  }
  if ((param_8 & 1) == 0) {
    func_0x00010c1d0640(param_1);
    func_0x00010c1d0640(param_1);
  }
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf51e00(param_2);
    func_0x00010c1d0640(param_1);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1d0640(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar3);
  }
  lVar1 = param_6;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1d0640(param_1);
  }
  lVar1 = param_7;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1d0640(param_1);
  }
  if (param_5 != (code *)0x0) {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    (*param_5)(param_4,param_2,lVar1,param_9,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c1d0640(param_1);
    _objc_release(uVar4);
  }
LAB_107a530e4:
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a53138; end: 107a5341f;  */

void FUN_107a53138(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_9);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_6;
    func_0x00010bf529e0();
    if (((lVar1 != 0) && (puVar2 != (undefined *)0x0)) || (puVar2 != (undefined *)0x0)) {
      func_0x00010c1d0640(uVar5);
    }
    uVar3 = param_9;
    func_0x00010c067ec0();
    if ((int)uVar3 != 0) {
      func_0x00010c1d0640(uVar5);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar4);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(uVar5);
    puVar4 = PTR_PTR_1126b8238;
    func_0x00010c291260(PTR_PTR_1126b8238);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a53420; end: 107a53667;  */

void FUN_107a53420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2368;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x00010bf28f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0f19c0(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = puVar1;
  func_0x00010c1531a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a53668; end: 107a5386f;  */

void FUN_107a53668(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x21;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_130;
    do {
      lVar5 = 0;
      do {
        if (*plStack_130 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lStack_138 + lVar5 * 8);
        uStack_170 = 0;
        uStack_160 = 0x3032000000;
        pcStack_158 = FUN_107a53870;
        uStack_150 = 0x107a53880;
        uStack_148 = 0;
        puStack_168 = &uStack_170;
        _objc_retain(param_2);
        func_0x00010c0bebc0(uVar2);
        lVar3 = puStack_168[5];
        if (lVar3 != 0) {
          _objc_retain(lVar3);
          unaff_x21 = lVar3;
        }
        _objc_release(param_2);
        __Block_object_dispose(&uStack_170,8);
        _objc_release(uStack_148);
        if (lVar3 != 0) goto LAB_107a537f4;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  unaff_x21 = 0;
LAB_107a537f4:
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
    return;
  }
  ___stack_chk_fail();
  lVar1 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 107a53870; end: 107a53887;  */

void FUN_107a53870(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a53888; end: 107a539d7;  */

void FUN_107a53888(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar1 != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          _objc_retain(uVar4);
          uVar2 = *(undefined8 *)(lVar3 + 0x28);
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          _objc_release(uVar2);
          goto LAB_107a53994;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
LAB_107a53994:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 107a539d8; end: 107a539db;  */

void FUN_107a539d8(void)

{
  return;
}



/* Entry: 107a539dc; end: 107a53c03;  */

void FUN_107a539dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined1 *puVar10;
  undefined8 *unaff_x27;
  code *unaff_x28;
  undefined1 auStack_2c8 [128];
  long lStack_248;
  code *pcStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_107a53870;
  uStack_110 = 0x107a53880;
  uStack_108 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(param_1);
  puVar6 = auStack_100;
  lStack_1d8 = param_1;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    unaff_x24 = *plStack_160;
    unaff_x26 = &UNK_1109f73a0;
    unaff_x27 = &uStack_130;
    unaff_x28 = FUN_107a53d70;
    do {
      unaff_x25 = 0;
      do {
        if (*plStack_160 != unaff_x24) {
          _objc_enumerationMutation(lStack_1d8);
        }
        unaff_x22 = *(undefined8 *)(lStack_168 + unaff_x25 * 8);
        puStack_1a0 = puVar1;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_107a53c04;
        puStack_188 = &UNK_1109f73a0;
        _objc_retain(param_2);
        puStack_1d0 = puVar1;
        uStack_1c8 = 0xc2000000;
        pcStack_1c0 = FUN_107a53d70;
        puStack_1b8 = &UNK_1109f73f0;
        uStack_180 = param_2;
        puStack_178 = unaff_x27;
        _objc_retain(param_2);
        uStack_1b0 = param_2;
        puStack_1a8 = unaff_x27;
        func_0x00010c0bebc0(unaff_x22);
        _objc_release(uStack_1b0);
        _objc_release(uStack_180);
        unaff_x25 = unaff_x25 + 1;
      } while (param_1 != unaff_x25);
      puVar6 = auStack_100;
      param_1 = lStack_1d8;
      func_0x00010bf52a60();
      unaff_x23 = puVar1;
    } while (param_1 != 0);
  }
  _objc_release(lStack_1d8);
  uVar9 = puStack_128[5];
  _objc_retain(uVar9);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(param_2);
  lVar8 = lStack_1d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_130,8);
  lVar2 = lVar8;
  __Unwind_Resume();
  pcStack_1e8 = FUN_107a53c04;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_240 = unaff_x28;
  puStack_238 = unaff_x27;
  puStack_230 = unaff_x26;
  lStack_228 = unaff_x25;
  lStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  uStack_210 = unaff_x22;
  uStack_208 = uVar9;
  uStack_200 = param_2;
  lStack_1f8 = lVar8;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar3 = puVar6;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_2c8;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  do {
    if (puVar4 == (undefined1 *)0x0) {
LAB_107a53d24:
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(puVar7);
      puVar4 = puVar7;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      if ((int)puVar3 != 0) {
        puVar4 = puVar7;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(puVar6 + 0x28) + 8) + 0x28);
        *(undefined1 **)(*(long *)(*(long *)(puVar6 + 0x28) + 8) + 0x28) = puVar4;
        _objc_release(uVar9);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
    puVar10 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(puVar3);
      }
      uVar5 = *(undefined8 *)((long)puVar10 * 8);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((int)uVar9 != 0) {
        puVar4 = puVar6;
        func_0x00010c29a460();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = *(long *)(*(long *)(lVar2 + 0x28) + 8);
        uVar9 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined1 **)(lVar8 + 0x28) = puVar4;
        _objc_release(uVar9);
        goto LAB_107a53d24;
      }
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar10);
    puVar7 = auStack_2c8;
    puVar4 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107a53c04; end: 107a53d6f;  */

void FUN_107a53c04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = param_4;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_e8;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar6 != 0) {
          lVar1 = param_4;
          func_0x00010c29a460();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          uVar6 = *(undefined8 *)(lVar8 + 0x28);
          *(long *)(lVar8 + 0x28) = lVar1;
          _objc_release(uVar6);
          goto LAB_107a53d24;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar5 = auStack_e8;
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,puVar5,0x10);
    } while (lVar1 != 0);
  }
LAB_107a53d24:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    puVar3 = puVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)puVar4 != 0) {
      puVar3 = puVar5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_4 + 0x28) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined1 **)(lVar7 + 0x28) = puVar3;
      _objc_release(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 107a53d70; end: 107a53df7;  */

void FUN_107a53d70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a53df8; end: 107a53e0f;  */

void FUN_107a53df8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdcf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_hasSuffix__1125d4da0,&PTR____CFConstantStringClassReference_110eaa698);
  return;
}



/* Entry: 107a53e10; end: 107a53e5b;  */

void FUN_107a53e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a53e5c; end: 107a53f27;  */

undefined1 FUN_107a53e5c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bd040(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107a53f28; end: 107a53f47;  */

void FUN_107a53f28(void)

{
  return;
}



/* Entry: 107a53f48; end: 107a53f9f;  */

bool FUN_107a53f48(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010c0e1120(param_3);
  dVar1 = param_1;
  func_0x00010c0e1120(param_4);
  _objc_release(param_4);
  return dVar1 < param_1;
}



/* Entry: 107a53fa0; end: 107a5401f;  */

void FUN_107a53fa0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaa640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107a54020; end: 107a54133;  */

void FUN_107a54020(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c08fa60();
    _objc_release();
    if (lVar2 == 0) goto LAB_107a54108;
  }
  else {
    _objc_release();
  }
  if (param_4 == 0) {
    func_0x000107b94e40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar3;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = param_4;
  }
  _objc_release(uVar1);
  FUN_107a52e20(*(undefined8 *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),1,*(undefined8 *)(param_1 + 0x40));
LAB_107a54108:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a54134; end: 107a54283;  */

void FUN_107a54134(long param_1)

{
  undefined8 uVar1;
  long in_x7;
  long lVar2;
  long lVar3;
  
  lVar3 = in_x7;
  _objc_retain();
  if (in_x7 == 0) {
    func_0x000107b94d98();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar3;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(in_x7);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = in_x7;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x7);
  return;
}



/* Entry: 107a54284; end: 107a54457; +[SCLongformShowStoryPagePropertyHelpers sharedPagePropertiesForLongFormSnap:viewLocation:shouldEnableCommentsOnStory:liveRepliesCount:] */

void FUN_107a54284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f0e018);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dc41b8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d20;
  func_0x00010beeebc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110dcae18);
  if (param_6 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010beeea00(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b2d20;
    func_0x00010beee9e0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,puVar4);
    _objc_release(puVar4);
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a54458; end: 107a545d7;  */

void FUN_107a54458(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c240380();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_107b8dc40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      func_0x00010c1097e0(lVar3);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar7);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,1,param_2,0);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a545d8; end: 107a545f3;  */

void FUN_107a545d8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107a545f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 != 0,param_2,0);
  return;
}



/* Entry: 107a545f4; end: 107a54ac7; -[SCSingleLongformShowOperaDataSource initWithStorySessionId:snapDocConfigurer:bitmojiImageFetcher:discoverFeedDataFetcher:discoverFeedEventsController:operaEventAnnouncing:show:storyPlayableDataModel:publisherPagePropertiesManager:viewLocation:longformMediaPrefetcher:streamingURLProvider:circumstanceEngine:discoverBlizzardLogger:creatorSettingsFetcher:contentObjectResolver:subscriptionStore:] */

undefined8 *
FUN_107a545f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126f9768;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c203f20(puVar1);
    uVar2 = param_9;
    func_0x00010bf51e00(param_9);
    func_0x00010c2015e0(puVar1);
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    func_0x00010c1e5bc0(puVar1);
    func_0x00010c1b5fa0(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1b5f80(puVar1);
    _objc_release(puVar3);
    func_0x00010c2046a0(puVar1);
    func_0x00010c1c0de0(puVar1);
    func_0x00010c20e680(puVar1);
    func_0x00010c20f5e0(puVar1);
    puVar3 = PTR_PTR_1126d6068;
    _objc_alloc(PTR_PTR_1126d6068);
    uVar2 = param_9;
    func_0x00010c11b3a0(param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2609a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ceec0;
    _objc_alloc(PTR_PTR_1126ceec0);
    func_0x00010c055000();
    uVar7 = param_10;
    func_0x00010bf8c980(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c120(puVar3);
    func_0x00010c20f5a0(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010c260960(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c260960(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c127820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_8);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c127820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_8);
    _objc_release(puVar4);
    func_0x00010c222620(puVar1);
    func_0x00010c20d9e0(puVar1);
    func_0x00010c17c5e0(puVar1);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc(PTR_PTR_1126ae790);
    func_0x00010c021520();
    func_0x00010c1da9c0(puVar1);
    _objc_release(puVar3);
    func_0x00010c1b9cc0(puVar1);
    _objc_retain(param_6);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a54ac8; end: 107a54ec7; -[SCSingleLongformShowOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_107a54ac8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_210;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  long lVar5;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c084580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c0d3c80();
  _objc_release(lVar7);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar7 = param_1;
  func_0x00010c235840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar4;
  func_0x00010bf52a60();
  if (lVar7 == 0) {
    puStack_210 = (undefined *)0x0;
  }
  else {
    puStack_210 = (undefined *)0x0;
    lVar8 = *plStack_150;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != lVar8) {
          _objc_enumerationMutation(lVar4);
        }
        uVar10 = *(undefined8 *)(lStack_158 + lVar9 * 8);
        uStack_190 = 0;
        uStack_180 = 0x3032000000;
        pcStack_178 = FUN_107a54ec8;
        uStack_170 = 0x107a54ed8;
        uStack_168 = 0;
        uStack_1b0 = 0;
        uStack_1a0 = 0x2020000000;
        uStack_198 = 0;
        puStack_1a8 = &uStack_1b0;
        puStack_188 = &uStack_190;
        func_0x00010c0bebc0(uVar10);
        lVar5 = param_1;
        func_0x00010c29d360();
        iVar1 = (int)lVar5;
        func_0x0001084837a4();
        if (iVar1 != 0) {
          func_0x00010bf398e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        func_0x00010c1d0640(lVar3);
        puVar6 = PTR_PTR_1126b23d8;
        _objc_alloc();
        FUN_107aec018(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0558c0();
        _objc_release(uVar10);
        if (puStack_210 == (undefined *)0x0) {
          _objc_retain(puVar6);
          puStack_210 = puVar6;
        }
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        __Block_object_dispose(&uStack_1b0,8);
        __Block_object_dispose(&uStack_190,8);
        _objc_release(uStack_168);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar4;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar4);
  lVar7 = lVar3;
  func_0x00010bf51e00(lVar3);
  func_0x00010c1b5fa0(param_1);
  _objc_release(lVar7);
  lVar7 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar7);
  if (lVar8 == 0) {
    if (puStack_210 != (undefined *)0x0) {
      puVar6 = puStack_210;
      func_0x00010bdc1720(puStack_210);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a9e0(param_3);
      _objc_release(puVar6);
    }
  }
  else {
    func_0x00010c13a9c0(param_3);
  }
  _objc_release(lVar3);
  _objc_release(puStack_210);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1b0,8);
    lVar7 = 8;
    __Block_object_dispose(&uStack_190);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 107a54ec8; end: 107a54edf;  */

void FUN_107a54ec8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a54ee0; end: 107a54f1f;  */

void FUN_107a54ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a54f20; end: 107a54faf;  */

void FUN_107a54f20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c2439e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a54fb0; end: 107a5506b; -[SCSingleLongformShowOperaDataSource dataModelFor:] */

void FUN_107a54fb0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010c084580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126c9a80;
  _objc_opt_class(PTR_PTR_1126c9a80);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a5506c; end: 107a55223; -[SCSingleLongformShowOperaDataSource publisherSnapPlayableDataModelForSnap:uniqueIdentifier:] */

void FUN_107a5506c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c2412c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      func_0x00010c2412c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0e00e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      goto LAB_107a551e8;
    }
  }
  lVar1 = param_3;
  func_0x0001080725ac(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2412c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf51e00(lVar3);
  func_0x00010c2046a0(param_1);
LAB_107a551e8:
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a55224; end: 107a55313; -[SCSingleLongformShowOperaDataSource updateViewLocation:] */

void FUN_107a55224(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((param_3 != -1) && (lVar1 = param_1, func_0x00010c29d360(), param_3 != lVar1)) {
    func_0x00010c222620(param_1,param_2,param_3);
    lVar1 = param_1;
    func_0x00010c260960(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ceec0;
    _objc_alloc(PTR_PTR_1126ceec0);
    lVar3 = param_1;
    func_0x00010c29d360(param_1);
    func_0x00010c25b040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055000(puVar2,param_2,0,lVar3,0,0xffffffffffffffff,0,0xffffffffffffffff,param_1);
    func_0x00010c1c0620(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107a55314; end: 107a55467; -[SCSingleLongformShowOperaDataSource prefetchSnapPlayableDataModel:completion:] */

void FUN_107a55314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x3032000000;
  pcStack_50 = FUN_107a54ec8;
  uStack_48 = 0x107a54ed8;
  uStack_40 = 0;
  _objc_retain(param_4);
  _objc_copyWeak(auStack_70,auStack_38);
  func_0x00010c0bebc0(param_3);
  uVar1 = puStack_60[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_68,8);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a55468; end: 107a55667;  */

void FUN_107a55468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c235840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf398e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b5280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25c9e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08d3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar10);
  _objc_copyWeak(auStack_68,param_1 + 0x38);
  _objc_retain(param_2);
  uVar7 = param_4;
  FUN_107a42208(param_4,uVar2,uVar3,uVar4,1,500,2,uVar5,uVar6,1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = uVar7;
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar10);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a55668; end: 107a556c7;  */

void FUN_107a55668(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be789e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a556c8; end: 107a557bf; -[SCSingleLongformShowOperaDataSource prefetchRequestForSnapPlayableDataModel:requestImportance:trigger:] */

void FUN_107a556c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107a54ec8;
  uStack_40 = 0x107a54ed8;
  uStack_38 = 0;
  func_0x00010c0bebc0(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a557c0; end: 107a558df;  */

void FUN_107a557c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c235840(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf398e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25c9e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08d3a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  FUN_107a4211c(param_4,uVar2,uVar3,0,uVar7,uVar1,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107a558e0; end: 107a55a77; -[SCSingleLongformShowOperaDataSource operaViewDidSendEvent:page:params:] */

void FUN_107a558e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0(PTR_PTR_1126c95c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_107a55a78;
      puStack_68 = &UNK_110848218;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_4);
      uStack_60 = param_4;
      _objc_retain(param_5);
      uStack_58 = param_5;
      func_0x0001000d76cc("APPSTORE",&puStack_80);
      _objc_release(uStack_58);
      _objc_release(uStack_60);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  else {
    func_0x00010be01200(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a55a78; end: 107a55aab;  */

void FUN_107a55a78(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a55aac; end: 107a55b6b; -[SCSingleLongformShowOperaDataSource registeredEventsForOperaSession] */

void FUN_107a55aac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long in_x4;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_48 = puVar1;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  uVar7 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
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
  _objc_retain(ppuVar6);
  _objc_retain(uVar7);
  _objc_retain(in_x4);
  if (in_x4 != 0) {
    ppuVar4 = ppuVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar5 != (undefined **)0x0) {
      func_0x00010c084580();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar6;
      func_0x00010be36bc0(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(puVar1);
      if (puVar2 != (undefined *)0x0) {
        _objc_retain(uVar7);
        _objc_retain(ppuVar6);
        _objc_retain(in_x4);
        _objc_retain(uVar7);
        _objc_retain(in_x4);
        func_0x00010c0bebc0(puVar2);
        _objc_release(in_x4);
        _objc_release(uVar7);
        _objc_release(in_x4);
        _objc_release(ppuVar6);
        _objc_release(uVar7);
        _objc_release(puVar2);
        goto LAB_107a55d1c;
      }
    }
    (**(code **)(in_x4 + 0x10))(in_x4,1,0,6);
  }
LAB_107a55d1c:
  _objc_release(in_x4);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}


