/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085508d4; end: 10855094f; -[SCSnapVideoFilterCoordinatorLoggerImpl logChainedFireInvoked] */

void FUN_1085508d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010bf34be0(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108550950; end: 10855098b; -[SCSnapVideoFilterCoordinatorLoggerImpl _stringWithBool:] */

void FUN_108550950(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10855098c; end: 1085509a7; -[SCSnapVideoFilterCoordinatorLoggerImpl _stringWithDataSource:] */

undefined ** FUN_10855098c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee2438;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df2998;
  }
  return ppuVar1;
}



/* Entry: 1085509a8; end: 1085509cf; -[SCSnapVideoFilterCoordinatorLoggerImpl _errorReasonStringWithError:] */

undefined ** FUN_1085509a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110a54ba8)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dabe78;
}



/* Entry: 1085509d0; end: 108550a5f; -[SCSnapVideoFilterCoordinatorLoggerImpl _mediaSourceString:] */

void FUN_1085509d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfae4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfae4c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      ppuVar2 = (undefined **)0x0;
    }
    else {
      ppuVar2 = *(undefined ***)(lVar1 + 0x10);
    }
    _objc_release();
    FUN_108552ebc(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108550a60; end: 108550b1b; -[SCSnapVideoFilterCoordinatorLoggerImpl _mediaDestinationString:] */

void FUN_108550a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfae4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfae4c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      ppuVar3 = *(undefined ***)(lVar1 + 0x18);
    }
    _objc_retain(ppuVar3);
    ppuVar2 = ppuVar3;
    func_0x00010bf6eb60(ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(lVar1);
    func_0x000108552ee4(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108550b1c; end: 108550b27; -[SCSnapVideoFilterCoordinatorLoggerImpl .cxx_destruct] */

void FUN_108550b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108550b28; end: 108550bcb; -[SCSnapVideoFilterLoggedCoordinatorImpl initWithSnapVideoFilterCoordinator:grapheneRegistryLazy:] */

undefined1 *
FUN_108550b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcc78;
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



/* Entry: 108550bcc; end: 108550d83; -[SCSnapVideoFilterLoggedCoordinatorImpl filterVideoAndCreateThumbnailUsingSnapVideoFilter:withMediaId:skipTranscodingIfPossible:crossPostToStoryInfo:completion:] */

void FUN_108550bcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126da008;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c27a080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108550d84;
  puStack_90 = &UNK_110a54bd0;
  uStack_88 = uVar3;
  uStack_80 = param_8;
  uStack_78 = param_1;
  _objc_retain(uVar3);
  _objc_retain(param_8);
  func_0x00010bfae6a0(uVar4,param_3,param_4,param_5,param_6,param_7,&puStack_a8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(puVar2);
  return;
}



/* Entry: 108550d84; end: 108550f97;  */

void FUN_108550d84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,param_4,param_5);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_108550f98(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108550e34(uVar3,uVar2,&PTR____CFConstantStringClassReference_110ee24f8,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108550f98; end: 10855103f;  */

void FUN_108550f98(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  else {
    lVar1 = param_2;
    FUN_108552c64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108551040; end: 108551217; -[SCSnapVideoFilterLoggedCoordinatorImpl filterVideoUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:skipTranscodingIfPossible:crossPostToStoryInfo:completion:] */

void FUN_108551040(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar5 = param_1;
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126da008;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c27a080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_3 + 8);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108551218;
  puStack_a0 = &UNK_110a54c00;
  uStack_98 = uVar4;
  uStack_90 = param_10;
  uStack_88 = uVar5;
  _objc_retain(uVar4);
  _objc_retain(param_10);
  func_0x00010bfae7a0(param_1,param_2,uVar3,param_4,param_5,param_6,param_7,param_8,param_9,
                      &puStack_b8);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(param_10);
  _objc_release(puVar2);
  return;
}



/* Entry: 108551218; end: 1085512b7;  */

void FUN_108551218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,param_4);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_108550f98(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108550e34(uVar3,uVar2,&PTR____CFConstantStringClassReference_110ee2518,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085512b8; end: 10855149f; -[SCSnapVideoFilterLoggedCoordinatorImpl filterVideoFragmentedUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:segmentOutputBlock:crossPostToStoryInfo:completion:] */

void FUN_1085512b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar5 = param_1;
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126da008;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c27a080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_3 + 8);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1085514a0;
  puStack_a0 = &UNK_110a54c00;
  uStack_98 = uVar4;
  uStack_90 = param_10;
  uStack_88 = uVar5;
  _objc_retain(uVar4);
  _objc_retain(param_10);
  func_0x00010bfae720(param_1,param_2,uVar3,param_4,param_5,param_6,param_7,param_8,param_9,
                      &puStack_b8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(param_10);
  _objc_release(puVar2);
  return;
}



/* Entry: 1085514a0; end: 10855153f;  */

void FUN_1085514a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,param_4);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_108550f98(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108550e34(uVar3,uVar2,&PTR____CFConstantStringClassReference_110ee2518,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108551540; end: 10855175f; -[SCSnapVideoFilterLoggedCoordinatorImpl retryTranscodingForMediaId:completion:] */

void FUN_108551540(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126da008;
  _objc_retain(param_4);
  func_0x00010c27a080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1085516b0;
  puStack_70 = &UNK_110a54bd0;
  uStack_68 = uVar3;
  uStack_60 = param_5;
  uStack_58 = param_1;
  _objc_retain(uVar3);
  _objc_retain(param_5);
  func_0x00010c13fa40(uVar4,param_3,param_4,&puStack_88);
  _objc_release(param_4);
  _objc_release(uStack_68);
  _objc_release(uStack_60);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(puVar2);
  return;
}



/* Entry: 108551760; end: 108551767; -[SCSnapVideoFilterLoggedCoordinatorImpl resetTranscodingForMediaId:completion:] */

void FUN_108551760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_resetTranscodingForMediaId_compl_11262c0a8);
  return;
}



/* Entry: 108551768; end: 10855176f; -[SCSnapVideoFilterLoggedCoordinatorImpl transcodingRegisteredForMediaId:] */

void FUN_108551768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27a070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_transcodingRegisteredForMediaId__11267c240);
  return;
}



/* Entry: 108551770; end: 108551777; -[SCSnapVideoFilterLoggedCoordinatorImpl persistSnapVideoFilter:forMediaId:completion:] */

void FUN_108551770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fa1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_persistSnapVideoFilter_forMediaI_11261c298);
  return;
}



/* Entry: 108551778; end: 10855177f; -[SCSnapVideoFilterLoggedCoordinatorImpl retrieveCachedSnapVideoFilterForMediaId:completion:] */

void FUN_108551778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_retrieveCachedSnapVideoFilterFor_11262d310);
  return;
}



/* Entry: 108551780; end: 108551787; -[SCSnapVideoFilterLoggedCoordinatorImpl removeCachedSnapVideoFilterForMediaId:] */

void FUN_108551780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeCachedSnapVideoFilterForMe_112628798);
  return;
}



/* Entry: 108551788; end: 10855178f; -[SCSnapVideoFilterLoggedCoordinatorImpl setTranscodeStatusReporter:] */

void FUN_108551788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2196b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setTranscodeStatusReporter__112663fd0);
  return;
}



/* Entry: 108551790; end: 108551797; -[SCSnapVideoFilterLoggedCoordinatorImpl setChainedTranscodeFiringBlock:] */

void FUN_108551790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setChainedTranscodeFiringBlock__11263c450);
  return;
}



/* Entry: 108551798; end: 10855179f; -[SCSnapVideoFilterLoggedCoordinatorImpl fireCrossPostToStoryTranscodeWithData:overlayData:url:isImage:crossPostToStoryInfo:] */

void FUN_108551798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fireCrossPostToStoryTranscodeWit_1125c99e8);
  return;
}



/* Entry: 1085517a0; end: 10855180f; -[SCSnapVideoFilterLoggedCoordinatorImpl .cxx_destruct] */

void FUN_1085517a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108551810; end: 10855181f;  */

void FUN_108551810(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_defaultImageProcessCommandProvid_1125b7fe8);
  return;
}



/* Entry: 108551820; end: 108551847;  */

void FUN_108551820(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108551848; end: 108551b8b; -[SCSnapVideoFilterServicesEntryPoint _snapVideoFilterCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108551848(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108551b8c;
  puStack_90 = &UNK_110a54cd0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126da018;
  _objc_alloc(PTR_PTR_1126da018);
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112776274;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar14;
  func_0x00010c0c5ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be730c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112776240;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0961a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bdd7520(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112776278;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar15;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010be02240();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11277623c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029a40(puVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar14);
  puVar13 = PTR_PTR_1126da020;
  _objc_alloc(PTR_PTR_1126da020);
  param_1 = param_1 + _DAT_112776248;
  _objc_loadWeakRetained(param_1);
  lVar14 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048b40(puVar13);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108551b8c; end: 108551c0b;  */

void FUN_108551b8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebd4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108551c0c; end: 108551c87; -[SCSnapVideoFilterServicesEntryPoint _snapVideoFilterStateValidator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108551c0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126da028;
  _objc_alloc(PTR_PTR_1126da028);
  param_1 = param_1 + _DAT_112776270;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108551c88; end: 108551d03; -[SCSnapVideoFilterServicesEntryPoint _snapVideoFilterCoordinatorLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108551c88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126da030;
  _objc_alloc(PTR_PTR_1126da030);
  param_1 = param_1 + _DAT_112776248;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0188a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108551d04; end: 108551ed3; -[SCSnapVideoFilterServicesEntryPoint _persistConverter] */

void FUN_108551d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126da038;
  _objc_alloc_init();
  uVar3 = param_1;
  func_0x00010bebd500();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126da040;
  _objc_alloc();
  func_0x00010bebd4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108551ed4;
  puStack_70 = &UNK_110a54d30;
  puStack_68 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bf11fe0(puVar5,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108551efc;
  puStack_98 = &UNK_110a54d60;
  uStack_90 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bf11fe0(puVar6,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060de0(puVar4,param_2,param_1,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x108551f24;
  puStack_c0 = &UNK_110a54d90;
  puStack_b8 = puVar4;
  _objc_retain(puVar4);
  func_0x00010bf11fe0(puVar5,param_2,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_b8);
  _objc_release(puVar4);
  _objc_release(uStack_90);
  _objc_release(puStack_68);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108551ed4; end: 108551f4b;  */

void FUN_108551ed4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108551f4c; end: 108552077; -[SCSnapVideoFilterServicesEntryPoint _cache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108551f4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126da048;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112776270;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11277623c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002f60(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108552078;
  puStack_50 = &UNK_110a54dc0;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar5,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108552078; end: 1085520c7;  */

void FUN_108552078(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085520c8; end: 1085520fb; -[SCSnapVideoFilterServicesEntryPoint _diskPerformer] */

void FUN_1085520c8(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085520fc; end: 10855214b;  */

void FUN_1085520fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10855214c; end: 1085522b3; -[SCSnapVideoFilterServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10855214c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776210,0);
  _objc_destroyWeak(param_1 + _DAT_11277626c);
  _objc_destroyWeak(param_1 + _DAT_11277625c);
  _objc_destroyWeak(param_1 + _DAT_112776258);
  _objc_destroyWeak(param_1 + _DAT_112776264);
  _objc_destroyWeak(param_1 + _DAT_112776268);
  _objc_destroyWeak(param_1 + _DAT_112776270);
  _objc_destroyWeak(param_1 + _DAT_112776260);
  _objc_destroyWeak(param_1 + _DAT_112776254);
  _objc_destroyWeak(param_1 + _DAT_112776250);
  _objc_destroyWeak(param_1 + _DAT_11277624c);
  _objc_destroyWeak(param_1 + _DAT_112776240);
  _objc_destroyWeak(param_1 + _DAT_112776238);
  _objc_destroyWeak(param_1 + _DAT_112776244);
  _objc_destroyWeak(param_1 + _DAT_112776278);
  _objc_destroyWeak(param_1 + _DAT_11277623c);
  _objc_destroyWeak(param_1 + _DAT_112776234);
  _objc_destroyWeak(param_1 + _DAT_112776230);
  _objc_destroyWeak(param_1 + _DAT_11277622c);
  _objc_destroyWeak(param_1 + _DAT_112776228);
  _objc_destroyWeak(param_1 + _DAT_112776224);
  _objc_destroyWeak(param_1 + _DAT_112776214);
  _objc_destroyWeak(param_1 + _DAT_112776274);
  _objc_destroyWeak(param_1 + _DAT_112776248);
  _objc_destroyWeak(param_1 + _DAT_112776218);
  _objc_destroyWeak(param_1 + _DAT_112776220);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277621c);
  return;
}



/* Entry: 1085522b4; end: 10855231f; -[SCSnapVideoFilterFactoryImpl createSnapVideoFilterWithMediaSource:mediaDestination:] */

void FUN_1085522b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4910;
  func_0x00010bf5a260(PTR_PTR_1126c4910,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58fe0(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108552320; end: 10855246f; -[SCSnapVideoFilterFactoryImpl createSnapVideoFilterWithMediaSource:mediaDestinationInfo:] */

void FUN_108552320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = PTR_PTR_1126b26c0;
  _objc_retain(param_4);
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = param_1;
  func_0x00010bdea6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  lVar7 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0963a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029dc0(puVar5,param_2,param_3,param_4,uVar9,uVar10,lVar6,uVar12,uVar3,uVar11,uVar14,
                      uVar2,uVar4,uVar1,uVar13,lVar8,*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0));
  _objc_release(param_4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108552470; end: 1085525af; -[SCSnapVideoFilterFactoryImpl createSnapVideoFilterWithState:] */

void FUN_108552470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = PTR_PTR_1126b26c0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = param_1;
  func_0x00010bdea6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  lVar7 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0963a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeec20(puVar5,param_2,param_3,uVar9,uVar10,lVar6,uVar12,uVar3,uVar11,uVar14,uVar2,
                      uVar4,uVar1,uVar13,lVar8,*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 200),
                      *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0));
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085525b0; end: 108552627; -[SCSnapVideoFilterFactoryImpl _createAdaptor] */

void FUN_1085525b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c05cee0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb0));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108552628; end: 108552787; -[SCSnapVideoFilterFactoryImpl .cxx_destruct] */

void FUN_108552628(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108552788; end: 108552843; +[SCSnapVideoURLOwner createWithURL:] */

void FUN_108552788(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    _objc_alloc_init();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    *(long *)(lVar3 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 8);
    *(undefined **)(lVar3 + 8) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar2);
    func_0x00010c1e7ea0(param_1,param_2,1,param_3,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108552844; end: 10855298f; +[SCSnapVideoURLOwner setReadOnlyPermissions:forURL:withFileManager:] */

void FUN_108552844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c0f5800(param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  puVar4 = param_5;
  func_0x00010bf0e880(param_5,param_2,uVar3,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(uVar3);
  if (lVar2 != 0) {
    _objc_release(puVar4);
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
  }
  puVar5 = puVar4;
  func_0x00010c0d3c80(puVar4);
  func_0x00010c1d0640();
  uVar3 = param_4;
  func_0x00010c0f5800(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lStack_50 = lVar2;
  func_0x00010c16b7e0(param_5,param_2,puVar5,uVar3,&lStack_50);
  lVar1 = lStack_50;
  _objc_retain(lStack_50);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108552990; end: 1085529d7; -[SCSnapVideoURLOwner isPersistedOnDisk] */

undefined8 FUN_108552990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0f5800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacbe0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1085529d8; end: 108552afb; -[SCSnapVideoURLOwner dealloc] */

void FUN_1085529d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108552afc;
    puStack_58 = &UNK_110841f80;
    lStack_50 = lVar3;
    uStack_48 = uVar4;
    _objc_retain(uVar4);
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  puStack_78 = PTR_PTR_1126fcc88;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108552afc; end: 108552b43;  */

void FUN_108552afc(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010c1e7ea0(PTR_PTR_1126da070,param_2,0,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  uStack_28 = 0;
  func_0x00010c12cc60(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),
                      &uStack_28);
  return;
}



/* Entry: 108552b44; end: 108552b4b; -[SCSnapVideoURLOwner url] */

undefined8 FUN_108552b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108552b4c; end: 108552b7b; -[SCSnapVideoURLOwner .cxx_destruct] */

void FUN_108552b4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108552b7c; end: 108552bdb; +[SCSnapVideoURLUnowner createWithURL:] */

void FUN_108552b7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_alloc_init();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108552bdc; end: 108552c4f; -[SCSnapVideoURLUnowner isPersistedOnDisk] */

undefined * FUN_108552bdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 108552c50; end: 108552c57; -[SCSnapVideoURLUnowner url] */

undefined8 FUN_108552c50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108552c58; end: 108552c63; -[SCSnapVideoURLUnowner .cxx_destruct] */

void FUN_108552c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108552c64; end: 108552ebb;  */

void FUN_108552c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf3ec40(param_1);
  func_0x00010c0df780(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108552ebc; end: 108552f07;  */

undefined ** FUN_108552ebc(long param_1)

{
  if (param_1 - 1U < 7) {
    return (undefined **)(&PTR_PTR_110a54e80)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110ee2578;
}



/* Entry: 108552f08; end: 108552ff3;  */

bool FUN_108552f08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain();
  func_0x00010bf69bc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lStack_38 = 0;
  puVar4 = puVar2;
  func_0x00010bf0e880(puVar2,param_2,uVar3,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (lVar1 == 0) {
    puVar2 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,*(undefined8 *)PTR__NSFileSize_110345448);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0b4ca0();
    bVar6 = 9999 < (long)puVar5;
    _objc_release(puVar2);
  }
  else {
    bVar6 = false;
  }
  _objc_release(puVar4);
  return bVar6;
}



/* Entry: 108552ff4; end: 108553057; -[SCSkipTranscodingLoggerImpl logSkipDecisionWithSource:destinationInfo:requiresTranscodingReasons:] */

void FUN_108552ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010be58ac0(param_1,param_2,param_3,param_4,param_5);
  func_0x00010be59e80(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108553058; end: 1085531b3; -[SCSkipTranscodingLoggerImpl _logSkipRateWithSource:destinationInfo:requiresTranscodingReasons:] */

void FUN_108553058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bf6eb60(param_4);
  puVar2 = PTR_PTR_1126da078;
  func_0x00010c23e380(PTR_PTR_1126da078);
  _objc_retainAutoreleasedReturnValue();
  FUN_108552ebc(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  func_0x000108552ee4(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee2418,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db86d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c23e540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1085531b4; end: 10855340b; -[SCSkipTranscodingLoggerImpl _logTranscodingReasonsWithSource:destinationInfo:requiresTranscodingReasons:] */

void FUN_1085531b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  FUN_10858904c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf6eb60(param_4);
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      puVar4 = PTR_PTR_1126da078;
      func_0x00010c279c60(PTR_PTR_1126da078);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      FUN_108552ebc(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c2ac460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar5);
      lVar7 = lVar2;
      func_0x000108552ee4(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c2ac460(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar7);
      puVar6 = puVar4;
      func_0x00010c2ac460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c23e540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(puVar6);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 10855340c; end: 108553417; -[SCSkipTranscodingLoggerImpl .cxx_destruct] */

void FUN_10855340c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108553418; end: 108553477; -[SCTranscodingSkipControllerImpl canSkipTranscodingWithIsMultiSnap:configProviderInput:outputConfig:inputVideoCodec:inputAudioCodec:inputResolution:inputOriginalDuration:inputIsHDR:timeRanges:imageCommandCount:audioEnabled:audioOverrideAssetsCount:audioOverrideMixingProportion:baseAudioTrackMixingProportion:mixedAudioTracksCount:videoPlaybackRate:targetOrientation:] */

bool FUN_108553418(long param_1)

{
  func_0x00010c137540();
  return param_1 == 0;
}



/* Entry: 108553478; end: 10855368f; -[SCTranscodingSkipControllerImpl requireTranscodingReasonsWithIsMultiSnap:configProviderInput:outputConfig:inputVideoCodec:inputAudioCodec:inputResolution:inputOriginalDuration:inputIsHDR:timeRanges:imageCommandCount:audioEnabled:audioOverrideAssetsCount:audioOverrideMixingProportion:baseAudioTrackMixingProportion:mixedAudioTracksCount:videoPlaybackRate:targetOrientation:] */

undefined *
FUN_108553478(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,long param_18,long param_19,long param_20,long param_21,
             undefined8 param_22)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_14);
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    _objc_retain(0);
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_7 + 0x60);
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)(param_7 + 0x58);
  }
  uVar3 = uVar2;
  func_0x00010bf91b00(uVar2,param_5,uVar8,uVar5,param_6);
  _objc_release(uVar8);
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    puVar6 = (undefined *)0x400;
    goto LAB_108553640;
  }
  uStack_98 = param_11[1];
  uStack_a0 = *param_11;
  uStack_90 = param_11[2];
  puVar6 = PTR_PTR_1126da080;
  func_0x00010c137a60(param_3,PTR_PTR_1126da080,param_5,&uStack_a0,param_14,param_15,param_16,
                      (param_18 != 0 || param_19 != 0) || (param_20 != 0 || param_21 != 0),param_22)
  ;
  if (param_7 == 0) {
    _objc_retain(0);
LAB_1085535dc:
    _objc_release(0);
LAB_1085535e4:
    puVar4 = PTR_PTR_1126da080;
    func_0x00010c137a40(param_1,param_2,PTR_PTR_1126da080,param_5,param_7,param_8,param_9,param_10,
                        param_12,*(undefined8 *)(param_4 + 0x10));
    puVar6 = (undefined *)((ulong)puVar4 | (ulong)puVar6);
    uVar2 = *(undefined8 *)(param_4 + 8);
    if (param_7 != 0) goto LAB_108553618;
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(param_7 + 0x60);
    _objc_retain(lVar7);
    if (lVar7 == 0) goto LAB_1085535dc;
    cVar1 = *(char *)(lVar7 + 0x13);
    _objc_release(lVar7);
    if (cVar1 != '\x01') goto LAB_1085535e4;
    uVar2 = *(undefined8 *)(param_4 + 8);
LAB_108553618:
    uVar5 = *(undefined8 *)(param_7 + 0x58);
    uVar8 = *(undefined8 *)(param_7 + 0x60);
  }
  _objc_retain(uVar8);
  func_0x00010c0afa20(uVar2,param_5,uVar5,uVar8,puVar6);
  _objc_release(uVar8);
LAB_108553640:
  _objc_release(param_14);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar6;
}



/* Entry: 108553690; end: 1085536cb; -[SCTranscodingSkipControllerImpl .cxx_destruct] */

void FUN_108553690(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085536cc; end: 108553727; -[SnapVideoFilter setImageHasAnimatedContent:] */

void FUN_1085536cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_imageHasAnimatedContent_1125d7940;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,puVar1,puVar2,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108553728; end: 10855376b; -[SnapVideoFilter imageHasAnimatedContent] */

undefined8 FUN_108553728(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_getAssociatedObject(param_1,PTR_s_imageHasAnimatedContent_1125d7940);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10855376c; end: 108553813; -[SnapVideoFilter filterImageCompletion:] */

void FUN_10855376c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf14280(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108553814;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108553814; end: 108553b6b;  */

void FUN_108553814(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bef6760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bfd94e0();
  _objc_release(uVar1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar8 != 0) {
    uVar2 = 0;
    _dispatch_semaphore_create();
    func_0x00010c21d9a0(*(undefined8 *)(param_3 + 0x20));
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bef6760(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29b640(*(undefined8 *)(param_3 + 0x20));
    uVar8 = param_1;
    uVar1 = param_2;
    func_0x00010c29b640(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c0c4a00(*(undefined8 *)(param_3 + 0x20));
    puStack_b0 = puVar6;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108553b6c;
    puStack_98 = &UNK_110a54ee8;
    uStack_90 = *(undefined8 *)(param_3 + 0x20);
    uStack_88 = uVar2;
    _objc_retain(uVar2);
    func_0x00010bfbfd80(param_1,param_2,uVar8,uVar1,0x3ff0000000000000,uVar3);
    _objc_release(uVar3);
    _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
    _objc_release(uStack_88);
    _objc_release(uVar2);
  }
  func_0x00010be1ad40(*(undefined8 *)(param_3 + 0x20));
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c241520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bfe9820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204760(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar8);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_3 + 0x20);
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_e0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    param_2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    param_1 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_d0 = param_2;
    uStack_c0 = param_1;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x20);
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      param_1 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010bf27a60(&uStack_e0,lVar5);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  puVar7 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c241520(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c241520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdc1580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c680(param_1,param_2,puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar8);
  func_0x00010c2505e0(puVar6);
  _objc_release(uVar8);
  _objc_release(puVar6);
  return;
}



/* Entry: 108553b6c; end: 108553c07;  */

void FUN_108553b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  _UIImagePNGRepresentation(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d75e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1d7660(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  func_0x00010c1d76a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c222140(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108553c08; end: 108553c13;  */

void FUN_108553c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108553c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108553c14; end: 108553fbf; -[SnapVideoFilter _generateCommandsForStaticImage] */

void FUN_108553c14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b26d8;
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfae180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b26e0;
    param_4 = param_1;
    func_0x00010c07f100(param_1);
    func_0x00010c29b780();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bef6760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf41e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar5;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010befa160(puVar1);
    }
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b26c8;
    func_0x00010c22b820(PTR_PTR_1126b26c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
  }
  lVar2 = param_1;
  func_0x00010c0ef960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c0ef960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageRetain();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126bf488;
    func_0x00010c29b640(param_1);
    func_0x00010bf41dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
    if (lVar5 != 0) {
      _CGImageRelease(lVar5);
    }
  }
  func_0x00010bf529e0();
  func_0x00010c1a1920(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_retain(param_2);
  puVar4 = puVar1;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = puVar6;
  func_0x00010c0899c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108553fc0; end: 10855400b;  */

void FUN_108553fc0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10855400c; end: 1085545fb; -[SnapVideoFilter initWithMediaSource:mediaDestinationInfo:transcoder:parameterProvider:adaptor:cameraConfiguration:previewURLVideoProvider:logger:backgroundTaskWrapper:audioProcessingSessionFactory:videoTrackingTargetTrajectoryFactory:grapheneRegistry:circumstanceEngine:lensProcessingTranscodingProvider:crashLogger:overlayFormat:snapDocManager:spectaclesImageProcessCommandFactory:lensCrashLogger:creativeToolsABProvider:watermarkGenerator:skipController:contentDelivery:uploadMediaQualityController:qualityLevelSelector:] */

undefined8 *
FUN_10855400c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_b0 = param_4;
  if (param_4 == (undefined *)0x0) {
    puStack_b0 = PTR_PTR_1126c4910;
    func_0x00010bf5a260();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_70 = PTR_PTR_1126fcca0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_7;
    _objc_release(uVar2);
    puVar3 = &UNK_10f4a5928;
    _dispatch_queue_create(&UNK_10f4a5928,0);
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar1[0x2d] = param_3;
    _objc_retain(puStack_b0);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puStack_b0;
    _objc_release();
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x2c];
    puVar1[0x2c] = uVar2;
    _objc_release();
    puVar1[0x4e] = 0x7ff0000000000000;
    puVar1[0x48] = 0x3ff0000000000000;
    puVar3 = PTR__kCMTimeInvalid_110348648;
    uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar1[0x6e] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    puVar1[0x6d] = uVar2;
    puVar1[0x6f] = *(undefined8 *)(puVar3 + 0x10);
    puVar1[0x45] = 0;
    puVar1[0x5b] = 0xffffffffffffffff;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = uVar5;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x62];
    puVar1[0x62] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x5f];
    puVar1[0x5f] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x60];
    puVar1[0x60] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x61];
    puVar1[0x61] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x65];
    puVar1[0x65] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_27;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010bdeb220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    _objc_release(uVar2);
  }
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
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puStack_b0);
  return puVar1;
}



/* Entry: 1085545fc; end: 108555347; -[SnapVideoFilter initFromSnapVideoFilterState:transcoder:parameterProvider:adaptor:cameraConfiguration:previewURLVideoProvider:logger:backgroundTaskWrapper:audioProcessingSessionFactory:videoTrackingTargetTrajectoryFactory:grapheneRegistry:circumstanceEngine:lensProcessingTranscodingProvider:crashLogger:overlayFormat:snapDocManager:spectaclesImageProcessCommandFactory:lensCrashLogger:creativeToolsABProvider:skipController:contentDelivery:uploadMediaQualityController:qualityLevelSelector:] */

undefined8 *
FUN_1085545fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
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
  puStack_70 = PTR_PTR_1126fcca0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_108555198;
  _objc_retain(param_6);
  uVar2 = puVar1[0x2b];
  puVar1[0x2b] = param_6;
  _objc_release(uVar2);
  _objc_retain(param_4);
  uVar2 = puVar1[0x10];
  puVar1[0x10] = param_4;
  _objc_release(uVar2);
  _objc_retain(param_9);
  uVar2 = puVar1[0x12];
  puVar1[0x12] = param_9;
  _objc_release(uVar2);
  _objc_retain(param_5);
  uVar2 = puVar1[0x11];
  puVar1[0x11] = param_5;
  _objc_release(uVar2);
  _objc_retain(param_11);
  uVar2 = puVar1[0x15];
  puVar1[0x15] = param_11;
  _objc_release(uVar2);
  _objc_retain(param_12);
  uVar2 = puVar1[0x14];
  puVar1[0x14] = param_12;
  _objc_release(uVar2);
  _objc_retain(param_7);
  uVar2 = puVar1[0x62];
  puVar1[0x62] = param_7;
  _objc_release(uVar2);
  _objc_retain(param_8);
  uVar2 = puVar1[0x17];
  puVar1[0x17] = param_8;
  _objc_release(uVar2);
  _objc_retain(param_14);
  uVar2 = puVar1[0x19];
  puVar1[0x19] = param_14;
  _objc_release(uVar2);
  _objc_retain(param_10);
  uVar2 = puVar1[0x13];
  puVar1[0x13] = param_10;
  _objc_release(uVar2);
  _objc_retain(param_13);
  uVar2 = puVar1[0x16];
  puVar1[0x16] = param_13;
  _objc_release(uVar2);
  _objc_retain(param_15);
  uVar2 = puVar1[0x1b];
  puVar1[0x1b] = param_15;
  _objc_release(uVar2);
  _objc_retain(param_16);
  uVar2 = puVar1[0x18];
  puVar1[0x18] = param_16;
  _objc_release(uVar2);
  _objc_retain(param_17);
  uVar2 = puVar1[0x5f];
  puVar1[0x5f] = param_17;
  _objc_release(uVar2);
  _objc_retain(param_18);
  uVar2 = puVar1[0x60];
  puVar1[0x60] = param_18;
  _objc_release(uVar2);
  _objc_retain(param_19);
  uVar2 = puVar1[0x1d];
  puVar1[0x1d] = param_19;
  _objc_release(uVar2);
  _objc_retain(param_20);
  uVar2 = puVar1[0x61];
  puVar1[0x61] = param_20;
  _objc_release(uVar2);
  _objc_retain(param_21);
  uVar2 = puVar1[0x1a];
  puVar1[0x1a] = param_21;
  _objc_release(uVar2);
  puVar12 = &UNK_10f4a5928;
  _dispatch_queue_create(&UNK_10f4a5928,0);
  uVar2 = puVar1[6];
  puVar1[6] = puVar12;
  _objc_release(uVar2);
  puVar12 = PTR_PTR_1126b33c0;
  _objc_opt_new();
  uVar2 = puVar1[10];
  puVar1[10] = puVar12;
  _objc_release(uVar2);
  _objc_retain(param_23);
  uVar2 = puVar1[0x24];
  puVar1[0x24] = param_23;
  _objc_release(uVar2);
  _objc_retain(param_24);
  uVar2 = puVar1[0x20];
  puVar1[0x20] = param_24;
  _objc_release(uVar2);
  _objc_retain(param_25);
  uVar2 = puVar1[0x21];
  puVar1[0x21] = param_25;
  _objc_release(uVar2);
  puVar12 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puVar1[0x25];
  puVar1[0x25] = puVar12;
  _objc_release(uVar2);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = puVar1[0x26];
  puVar1[0x26] = puVar12;
  _objc_release(uVar2);
  puVar11 = puVar1;
  func_0x00010bdeb220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puVar1[0xf];
  puVar1[0xf] = puVar11;
  _objc_release();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puVar1[0x2c];
  puVar1[0x2c] = uVar2;
  _objc_release(uVar5);
  if (param_3 == 0) {
    puVar1[0x4e] = 0x7ff0000000000000;
    puVar1[0x45] = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x30);
    _objc_retain(lVar6);
    lVar10 = param_8;
    if (lVar6 == 0) {
      lVar10 = *(long *)(param_3 + 0x38);
      _objc_retain(lVar10);
      if (lVar10 != 0) goto LAB_108554a8c;
    }
    else {
LAB_108554a8c:
      lVar13 = *(long *)(param_3 + 0xd0);
      _objc_retain(lVar13);
      _objc_release(lVar13);
      if (lVar6 != 0) {
        lVar10 = lVar6;
      }
      _objc_release(lVar10);
      if (lVar13 == 0) {
        lVar10 = *(long *)(param_3 + 0x38);
        _objc_retain(lVar10);
        _objc_release(lVar10);
        if (lVar10 == 0) {
          puVar7 = *(undefined8 **)(param_3 + 0x30);
          puVar11 = puVar7;
          _objc_retain(puVar7);
          uVar2 = puVar1[0x17];
          func_0x000107c31298();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar7;
          func_0x000108552df0(puVar7,puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29af00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = puVar1[0x2f];
          puVar1[0x2f] = uVar2;
          _objc_release(uVar5);
          _objc_release(puVar3);
        }
        else {
          uVar5 = *(undefined8 *)(param_3 + 0x38);
          _objc_retain(uVar5);
          uVar2 = puVar1[0x27];
          puVar1[0x27] = uVar5;
          _objc_release(uVar2);
          uVar2 = puVar1[0x17];
          puVar7 = puVar1;
          func_0x00010be96880(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29af00();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = (undefined8 *)puVar1[0x2f];
          puVar1[0x2f] = uVar2;
        }
        _objc_release(puVar11);
        _objc_release(puVar7);
      }
    }
    puVar1[0x2d] = *(undefined8 *)(param_3 + 0x10);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = uVar5;
    _objc_release(uVar2);
    puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar5 = *(undefined8 *)(param_3 + 0xe0);
    _objc_retain(uVar5);
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x30];
    puVar1[0x30] = puVar12;
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar1[0x31] = *(undefined8 *)(param_3 + 0xe8);
    puVar1[0x32] = *(undefined8 *)(param_3 + 0xf0);
    puVar1[0x33] = *(undefined8 *)(param_3 + 0xf8);
    puVar1[0x45] = *(undefined8 *)(param_3 + 0x100);
    puVar1[0x5b] = *(undefined8 *)(param_3 + 0x108);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = uVar5;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = uVar5;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = uVar5;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_3 + 0x50);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = uVar5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x29) = *(undefined1 *)(param_3 + 8);
    puVar1[0x40] = *(undefined8 *)(param_3 + 0x58);
    uVar5 = *(undefined8 *)(param_3 + 0x68);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = uVar5;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar1[0x41] == 0) {
      puVar8 = *(undefined **)(param_3 + 0x70);
      _objc_retain(puVar8);
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined *)puVar1[0x42];
      puVar1[0x42] = puVar4;
    }
    else {
      func_0x000107c31298();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[0x41];
      func_0x00010c128220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar12;
      func_0x00010bdc2c60(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar12);
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      puVar12 = puVar8;
      func_0x00010c0f5800(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0x42];
      puVar1[0x42] = puVar4;
      _objc_release(uVar2);
    }
    _objc_release(puVar12);
    _objc_release(puVar8);
    puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar5 = *(undefined8 *)(param_3 + 0x78);
    _objc_retain(uVar5);
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x44];
    puVar1[0x44] = puVar12;
    _objc_release(uVar2);
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + 0x149) = *(undefined1 *)(param_3 + 9);
    *(undefined1 *)((long)puVar1 + 0x14a) = *(undefined1 *)(param_3 + 10);
    puVar1[0x48] = *(undefined8 *)(param_3 + 0x80);
    puVar1[0x49] = *(undefined8 *)(param_3 + 0x88);
    puVar1[0x4a] = *(undefined8 *)(param_3 + 0x90);
    puVar1[0x4b] = *(undefined8 *)(param_3 + 0x98);
    uVar9 = *(undefined8 *)(param_3 + 0xa0);
    _objc_retain(uVar9);
    uVar2 = uVar9;
    func_0x00010bf51e00();
    uVar5 = puVar1[0x54];
    puVar1[0x54] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar9);
    uVar5 = *(undefined8 *)(param_3 + 0xa8);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = uVar5;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_3 + 0xb0);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = uVar5;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_3 + 0xb8);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = uVar5;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_3 + 0xc0);
    _objc_retain(uVar5);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = uVar5;
    _objc_release(uVar2);
    dVar14 = *(double *)(param_3 + 200);
    dVar16 = ABS(dVar14 + 0.0) * 2.220446049250313e-16;
    if (dVar16 <= 2.2250738585072014e-308) {
      dVar16 = 2.2250738585072014e-308;
    }
    dVar15 = INFINITY;
    if (dVar16 <= ABS(dVar14)) {
      dVar15 = dVar14;
    }
    puVar1[0x4e] = dVar15;
    lVar10 = *(long *)(param_3 + 0xd0);
    _objc_retain(lVar10);
    if (lVar10 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar10 + 8);
    }
    _objc_retain(lVar6);
    _objc_release(lVar6);
    _objc_release(lVar10);
    if (lVar6 != 0) {
      lVar10 = *(long *)(param_3 + 0xd0);
      _objc_retain(lVar10);
      if (lVar10 == 0) {
        uVar2 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar10 + 0x40);
        uVar2 = *(undefined8 *)(lVar10 + 0x38);
      }
      puVar1[0x6a] = uVar5;
      puVar1[0x69] = uVar2;
      _objc_release(lVar10);
      lVar10 = *(long *)(param_3 + 0xd0);
      _objc_retain(lVar10);
      if (lVar10 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(lVar10 + 0x18);
      }
      puVar1[0x50] = uVar2;
      _objc_release(lVar10);
      lVar10 = *(long *)(param_3 + 0xd0);
      _objc_retain(lVar10);
      if (lVar10 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(lVar10 + 0x20);
      }
      puVar1[0x4f] = uVar2;
      _objc_release(lVar10);
      lVar10 = *(long *)(param_3 + 0xd0);
      _objc_retain(lVar10);
      if (lVar10 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(lVar10 + 0x28);
      }
      puVar1[0x57] = uVar2;
      _objc_release(lVar10);
      lVar10 = *(long *)(param_3 + 0xd0);
      _objc_retain(lVar10);
      if (lVar10 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(lVar10 + 0x30);
      }
      _objc_retain(lVar6);
      _objc_release(lVar6);
      _objc_release(lVar10);
      if (lVar6 != 0) {
        lVar10 = *(long *)(param_3 + 0xd0);
        _objc_retain(lVar10);
        if (lVar10 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(lVar10 + 0x30);
        }
        _objc_retain(uVar2);
        uVar5 = puVar1[0x51];
        puVar1[0x51] = uVar2;
        _objc_release(uVar5);
        _objc_release(lVar10);
      }
      if (puVar1[0x51] != 0) {
        lVar10 = *(long *)(param_3 + 0xd0);
        _objc_retain(lVar10);
        if (lVar10 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar10 + 0x10);
        }
        _objc_retain(lVar6);
        _objc_release(lVar6);
        _objc_release(lVar10);
        lVar10 = *(long *)(param_3 + 0xd0);
        _objc_retain(lVar10);
        if (lVar6 == 0) {
          if (lVar10 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined8 *)(lVar10 + 8);
          }
          uVar5 = uVar2;
          _objc_retain(uVar2);
          func_0x000107c31298();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar2;
          func_0x000108552df0(uVar2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar2);
          _objc_release(lVar10);
          uVar2 = puVar1[0x17];
          func_0x00010c29af00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = puVar1[0x52];
          puVar1[0x52] = uVar2;
          _objc_release(uVar5);
          _objc_release(uVar9);
        }
        else {
          if (lVar10 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined8 *)(lVar10 + 0x10);
          }
          _objc_retain(uVar2);
          uVar5 = puVar1[0x28];
          puVar1[0x28] = uVar2;
          _objc_release(uVar5);
          _objc_release(lVar10);
          uVar2 = puVar1[0x17];
          puVar11 = puVar1;
          func_0x00010be96880(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29af00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = puVar1[0x52];
          puVar1[0x52] = uVar2;
          _objc_release(uVar5);
          _objc_release(puVar11);
        }
      }
    }
  }
  if ((double)puVar1[0x48] == 0.0) {
    puVar1[0x48] = 0x3ff0000000000000;
  }
  if (puVar1[0x2e] == 0) {
    puVar12 = PTR_PTR_1126c4910;
    func_0x00010bf5a260();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar12;
    _objc_release(uVar2);
  }
  puVar12 = PTR__kCMTimeInvalid_110348648;
  uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  puVar1[0x6e] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  puVar1[0x6d] = uVar2;
  puVar1[0x6f] = *(undefined8 *)(puVar12 + 0x10);
  _objc_retain(param_22);
  uVar2 = puVar1[0x1f];
  puVar1[0x1f] = param_22;
  _objc_release(uVar2);
LAB_108555198:
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
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 108555348; end: 10855545f; -[SnapVideoFilter dealloc] */

void FUN_108555348(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar2 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_1 + 0x130);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c12cc60(*(undefined8 *)(param_1 + 0x128));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  puStack_118 = PTR_PTR_1126fcca0;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)((long)plVar2 + 0x78);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108555460; end: 108555487; -[SnapVideoFilter backgroundPerformer] */

void FUN_108555460(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108555488; end: 1085554f7; -[SnapVideoFilter _createBackgroundPerformer] */

void FUN_108555488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f4a5954);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,0x27);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085554f8; end: 108555547; -[SnapVideoFilter disposableBag] */

void FUN_1085554f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(undefined **)(param_1 + 0x118) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x118);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108555548; end: 10855555f; -[SnapVideoFilter transcodingTaskId] */

void FUN_108555548(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108555560; end: 1085555af; -[SnapVideoFilter setDelegate:] */

void FUN_108555560(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_3 == 0) ||
     (lVar1 = param_3, func_0x000107c318f8(param_3,PTR_DAT_1126a5af0), (int)lVar1 != 0)) {
    _objc_storeWeak(param_1 + 0x150,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085555b0; end: 108555abf; -[SnapVideoFilter snapVideoFilterState] */

void FUN_1085555b0(undefined *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puStack_120;
  undefined *puStack_f0;
  
  puVar7 = param_1;
  func_0x00010c07c7e0();
  if ((int)puVar7 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_108555a8c;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x1e0);
  _objc_retain(uVar20);
  uVar4 = *(undefined8 *)(param_1 + 0x268);
  _objc_retain();
  uVar21 = *(undefined8 *)(param_1 + 0x1a0);
  _objc_retain(uVar21);
  uVar22 = *(undefined8 *)(param_1 + 0x2a0);
  _objc_retain(uVar22);
  uVar5 = *(ulong *)(param_1 + 0x178);
  func_0x00010c2bd800();
  if ((uVar5 & 1) == 0) {
    uVar13 = *(undefined8 *)(param_1 + 200);
    func_0x00010bf1f440();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((int)uVar13 != 0) {
      puVar6 = param_1;
      func_0x00010be63200();
      goto LAB_108555660;
    }
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    if (puVar6 == (undefined *)0x0) goto LAB_1085556b0;
LAB_1085556c0:
    if ((*(long *)(param_1 + 0x178) != 0) && (*(long *)(param_1 + 0x138) == 0)) {
      puVar7 = param_1;
      func_0x00010be73340();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x138);
      *(undefined **)(param_1 + 0x138) = puVar7;
      _objc_release(uVar13);
    }
    if ((*(long *)(param_1 + 0x288) == 0) ||
       (puVar7 = *(undefined **)(param_1 + 0x290), puVar7 == (undefined *)0x0)) {
      uVar13 = *(undefined8 *)(param_1 + 0x78);
      _objc_retain(puVar6);
      func_0x00010c0f7fc0(uVar13);
      puVar7 = puVar6;
      _objc_release();
      puStack_f0 = (undefined *)0x0;
    }
    else {
      func_0x00010c2bd7e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        puStack_f0 = (undefined *)0x0;
      }
      else {
        if (*(long *)(param_1 + 0x140) == 0) {
          puVar8 = param_1;
          func_0x00010be73340();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + 0x140);
          *(undefined **)(param_1 + 0x140) = puVar8;
          _objc_release(uVar13);
        }
        puStack_f0 = PTR_PTR_1126da088;
        _objc_alloc();
        func_0x00010b0572d8(*(undefined8 *)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x348),
                            *(undefined8 *)(param_1 + 0x350));
      }
      _objc_release();
    }
    puStack_120 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((*(long *)(param_1 + 0x210) == 0) && (*(long *)(param_1 + 0x218) == 0)) {
      puStack_120 = (undefined *)0x0;
    }
    else {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar9 = puVar8;
      func_0x000107c31298();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad300(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc34c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      uVar13 = *(undefined8 *)(param_1 + 0x78);
      _objc_retain(puStack_120);
      func_0x00010c0f7fc0(uVar13);
      _objc_release(puStack_120);
    }
    puVar7 = PTR_PTR_1126da090;
    _objc_alloc();
    uVar13 = *(undefined8 *)(param_1 + 0x168);
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    uVar14 = *(undefined8 *)(param_1 + 0x160);
    uVar18 = *(undefined8 *)(param_1 + 0x58);
    uVar15 = *(undefined8 *)(param_1 + 0x138);
    uVar16 = *(undefined8 *)(param_1 + 0x1b8);
    uVar2 = param_1[0x148];
    uVar19 = *(undefined8 *)(param_1 + 0x1c8);
    uVar17 = *(undefined8 *)(param_1 + 0x200);
    uVar11 = *(undefined8 *)(param_1 + 0x220);
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1[0x149];
    uVar23 = *(undefined8 *)(param_1 + 0x240);
    uVar24 = *(undefined8 *)(param_1 + 0x248);
    uVar25 = *(undefined8 *)(param_1 + 0x270);
    uVar12 = *(undefined8 *)(param_1 + 0x180);
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b057c10(uVar23,uVar24,uVar25,*(undefined8 *)(param_1 + 0x188),puVar7,uVar13,uVar1,
                        uVar14,uVar18,puVar6,uVar15,uVar16,uVar2,uVar19,uVar20,uVar17,0,puStack_120,
                        0,uVar11,uVar3);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puStack_120);
    _objc_release(puStack_f0);
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x178);
    func_0x00010c2bd7e0();
    _objc_retainAutoreleasedReturnValue();
LAB_108555660:
    if (puVar6 != (undefined *)0x0) goto LAB_1085556c0;
LAB_1085556b0:
    if ((*(long *)(param_1 + 0x290) != 0) && (*(long *)(param_1 + 0x288) != 0)) goto LAB_1085556c0;
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar6);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar20);
LAB_108555a8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108555ac0; end: 108555b43;  */

void FUN_108555ac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17d00();
  _objc_release(uVar1);
  func_0x00010bf9d2e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x178),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108555b44; end: 108555c1f;  */

void FUN_108555b44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17d00();
  _objc_release(uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x218);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x210);
    _UIImagePNGRepresentation(lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar4);
  }
  func_0x00010c14e060(lVar4,param_2,*(undefined8 *)(param_1 + 0x28),1);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(lVar1 + 0x208) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 108555c20; end: 108555c53; -[SnapVideoFilter isRestorable] */

bool FUN_108555c20(long param_1)

{
  func_0x00010c091860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 == 0;
}



/* Entry: 108555c54; end: 108555c57; +[SnapVideoFilter baseVideoPath] */

void FUN_108555c54(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdf20 != -1) {
    func_0x00010002a2fc(0x1137fdf20,&PTR___NSConcreteGlobalBlock_110d98848);
  }
  uVar1 = uRam00000001137fdf18;
  func_0x000107c61174(uRam00000001137fdf18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108555c58; end: 108555cfb; -[SnapVideoFilter tempFileURL] */

void FUN_108555c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126b26c0;
  func_0x00010bf162e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ee2718);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108555cfc; end: 108555d8f; -[SnapVideoFilter tempReverseFileURL] */

void FUN_108555cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126b26c0;
  func_0x00010bf162e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ee2738);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108555d90; end: 108555eb7; -[SnapVideoFilter _filterVideoWithMediaId:fixedOutputSize:skipTranscodingIfPossible:completion:] */

void FUN_108555d90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x2e8);
  *(undefined8 *)(param_3 + 0x2e8) = param_5;
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_7);
  func_0x00010bfae7e0(param_1,param_2,param_3);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 108555eb8; end: 108555f53;  */

void FUN_108555eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be3dbc0(param_1);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108555f54; end: 108556153; -[SnapVideoFilter _invokeCompletionAndGenerateThumbnailWithUrl:retriable:error:completion:] */

void FUN_108555f54(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if ((puVar2 == (undefined *)0x0) ||
       (puVar2 = puVar1, func_0x00010c08fa60(), puVar2 < (undefined *)0x1f4)) {
      param_5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_5 = (undefined *)0x0;
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108556154;
    puStack_70 = &UNK_110852488;
    lStack_68 = param_1;
    _objc_retain(param_6);
    puStack_60 = puVar1;
    lStack_48 = param_6;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_5);
    puStack_50 = param_5;
    _objc_retain(puVar1);
    func_0x000107c312d0("APPSTORE",&puStack_88);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x158);
    uVar3 = param_3;
    func_0x00010c0899c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar4);
    _objc_release(uVar3);
    _objc_release(puStack_50);
    _objc_release(uStack_58);
    _objc_release(puStack_60);
    _objc_release(lStack_48);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be833a0(param_1);
    (**(code **)(param_6 + 0x10))(param_6,0,0,param_4 | (uint)param_1 ^ 1,param_5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108556154; end: 10855616b;  */

void FUN_108556154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108556168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),1,*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10855616c; end: 108556173; -[SnapVideoFilter mediaDestination] */

void FUN_10855616c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x170),PTR_s_destination_1125b9480);
  return;
}



/* Entry: 108556174; end: 10855617f; -[SnapVideoFilter filterVideoAndCreateThumbnailWithMediaId:completion:] */

void FUN_108556174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfae6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_filterVideoAndCreateThumbnailWit_1125c9360,param_3,1,param_4);
  return;
}



/* Entry: 108556180; end: 10855618f; -[SnapVideoFilter filterVideoAndCreateThumbnailWithMediaId:skipTranscodingIfPossible:completion:] */

void FUN_108556180(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,param_1,PTR_s__filterVideoWithMediaId_fixedOut_1125632b8);
  return;
}



/* Entry: 108556190; end: 1085561e3; -[SnapVideoFilter convertOverlayImageToPNGData] */

void FUN_108556190(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x210);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  else {
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x218);
    *(long *)(param_1 + 0x218) = lVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085561e4; end: 10855629b; -[SnapVideoFilter cleanupRetainedFiles] */

void FUN_1085561e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = *(long *)(param_1 + 0x138);
  if (lVar2 != 0) {
    FUN_108553fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 != 0) {
    FUN_108553fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b940();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10855629c; end: 108556ddb; -[SnapVideoFilter _generateCommandsForVideoWithVideoSourceSize:ucoConfigs:] */

void FUN_10855629c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  double dVar24;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar24 = *(double *)(param_3 + 0x1f8);
  if (*(long *)(param_3 + 0x1c8) == 0) {
    if (*(long *)(param_3 + 0x1d0) == 0) {
      lVar21 = param_5;
      func_0x00010bf529e0();
      bVar4 = lVar21 != 0;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    lVar21 = *(long *)(param_3 + 0x158);
    func_0x00010c07f100(param_3);
    func_0x00010c299300();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar21 == 0) || (*(long *)(param_3 + 0x1d0) != 0)) {
      bVar4 = true;
    }
    else {
      lVar20 = param_5;
      func_0x00010bf529e0();
      bVar4 = lVar20 != 0;
    }
    _objc_release(lVar21);
  }
  puVar8 = *(undefined **)(param_3 + 0x210);
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    cVar2 = param_3[0x148];
    func_0x00010bdc1020();
    if (cVar2 == '\x01') {
      func_0x00010b690c88(*(undefined8 *)(param_3 + 0x358),*(undefined8 *)(param_3 + 0x360));
    }
    else {
      _CGImageRetain();
    }
  }
  puVar9 = param_3;
  func_0x00010bfd68c0();
  if ((int)puVar9 != 0) {
    lVar20 = (long)dVar24;
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = *(long *)(param_3 + 0x2a0);
    func_0x00010bf529e0();
    if (lVar21 != 0) {
      lVar19 = *(long *)(param_3 + 0x2a0);
      _objc_retain(lVar19);
      lVar21 = lVar19;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar21 != 0) {
        lVar22 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar19);
          }
          uVar23 = *(undefined8 *)(lVar22 * 8);
          uVar12 = uVar23;
          func_0x00010c27a460(uVar23);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar10);
          _objc_retain(puVar10);
          func_0x00010c0c0400(uVar12);
          _objc_release(uVar12);
          func_0x00010bfe6ac0(uVar23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(puVar9);
          _objc_release(uVar23);
          _objc_release(puVar10);
          _objc_release(puVar10);
          lVar22 = lVar22 + 1;
        } while (lVar21 != lVar22);
        lVar21 = lVar19;
        func_0x00010bf52a60();
      }
      _objc_release(lVar19);
    }
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + 0x1d8);
    func_0x00010c0b8600(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar11);
    _objc_release(uVar12);
    lVar21 = param_5;
    func_0x00010c0b8600(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar11);
    _objc_release(lVar21);
    if (*(long *)(param_3 + 0x1d0) != 0) {
      puVar13 = PTR_PTR_1126b26d8;
      func_0x00010bf97940(PTR_PTR_1126b26d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar11);
      _objc_release(puVar13);
    }
    if (*(long *)(param_3 + 0x1c8) != 0) {
      puVar13 = PTR_PTR_1126b26d8;
      func_0x00010bf97900(PTR_PTR_1126b26d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar11);
      _objc_release(puVar13);
    }
    puVar13 = PTR_PTR_1126b26e0;
    func_0x00010c07f100(param_3);
    func_0x00010c29b060(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + 0x158);
    func_0x00010bf41e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar6);
    _objc_release(uVar12);
    puVar15 = puVar6;
    func_0x00010bf529e0();
    if ((puVar15 == (undefined *)0x0) && (*(long *)(param_3 + 0x1f0) != 0)) {
      uVar12 = *(undefined8 *)(param_3 + 0x158);
      func_0x00010c249640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(uVar12);
    }
    lVar21 = *(long *)(param_3 + 0x2a0);
    func_0x00010bf529e0();
    if (lVar21 != 0) {
      puVar15 = PTR_PTR_1126b26f0;
      _objc_alloc();
      uVar12 = *(undefined8 *)(param_3 + 0x240);
      puVar14 = param_3;
      func_0x00010bdf62a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d120(uVar12);
      func_0x00010befa120(puVar6);
      _objc_release(puVar15);
      _objc_release(puVar14);
    }
    uVar12 = *(undefined8 *)(param_3 + 0x358);
    uVar23 = *(undefined8 *)(param_3 + 0x360);
    puVar15 = param_3;
    func_0x00010c0d7560();
    if ((int)puVar15 == 0) {
      param_1 = uVar12;
      param_2 = uVar23;
    }
    if (*(long *)(param_3 + 0x210) != 0) {
      if (lVar20 != 0) {
        puVar15 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_alloc();
        func_0x00010bffa220();
        puVar14 = puVar15;
        func_0x00010bfe98e0((double)lVar20,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        _CGImageRelease(puVar8);
        puVar8 = puVar14;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageRetain();
        _objc_release(puVar14);
      }
      ppuVar1 = &PTR_PTR_1126bf498;
      if (param_3[0x148] == '\0') {
        ppuVar1 = &PTR_PTR_1126bf488;
      }
      puVar15 = *ppuVar1;
      func_0x00010bf41dc0(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar15);
    }
    puVar15 = puVar6;
    func_0x00010bf529e0();
    if ((puVar15 == (undefined *)0x0) && (*(long *)(param_3 + 0x268) != 0)) {
      puVar15 = PTR_PTR_1126b26c8;
      func_0x00010c22b820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar15);
    }
    if (lVar20 == 0 && !bVar4) {
      if (*(long *)(param_3 + 0x1c8) != 0) {
        lVar21 = *(long *)(param_3 + 0x158);
        func_0x00010c07f100(param_3);
        func_0x00010c299300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar21 != 0) {
          uVar12 = *(undefined8 *)(param_3 + 0x158);
          func_0x00010c07f100(param_3);
          func_0x00010c299300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7);
          _objc_release(uVar12);
        }
      }
      lVar21 = *(long *)(param_3 + 0x2a0);
      func_0x00010bf529e0();
      if (lVar21 != 0) {
        puVar15 = PTR_PTR_1126da098;
        _objc_alloc();
        puVar14 = param_3;
        func_0x00010bdf62a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01d100();
        func_0x00010befa120(puVar7);
        _objc_release(puVar15);
        _objc_release(puVar14);
      }
      if (*(long *)(param_3 + 0x210) != 0) {
        ppuVar1 = &PTR_PTR_1126bf4a0;
        if (param_3[0x148] == '\0') {
          ppuVar1 = &PTR_PTR_1126bf490;
        }
        puVar15 = *ppuVar1;
        func_0x00010bf41dc0(param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(puVar15);
      }
      puVar15 = puVar7;
      func_0x00010bf529e0();
      if ((puVar15 == (undefined *)0x0) && (*(long *)(param_3 + 0x268) != 0)) {
        puVar15 = PTR_PTR_1126da0a0;
        func_0x00010c22b820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(puVar15);
      }
    }
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  if (puVar8 != (undefined *)0x0) {
    _CGImageRelease(puVar8);
  }
  puVar8 = param_3;
  func_0x00010c0d7540();
  if ((int)puVar8 != 0) {
    uVar23 = *(undefined8 *)(param_3 + 0xe8);
    func_0x00010c269d40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_3 + 0x238);
    func_0x00010c299740(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar23;
    func_0x00010c299720(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6);
    _objc_release(uVar12);
    _objc_release(uVar16);
    _objc_release(uVar23);
    uVar23 = *(undefined8 *)(param_3 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_3 + 0x238);
    func_0x00010c299740(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar23;
    func_0x00010c299700(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(uVar12);
    _objc_release(uVar16);
    _objc_release(uVar23);
  }
  iVar5 = (int)*(undefined8 *)(param_3 + 0xf0);
  func_0x00010c2357e0();
  if (iVar5 != 0) {
    iVar5 = (int)*(undefined8 *)(param_3 + 0xf0);
    func_0x00010c290c40();
    if (iVar5 != 0) {
      lVar21 = *(long *)(param_3 + 0xf0);
      func_0x00010c2a2a40();
      puVar8 = param_3;
      if (lVar21 == 1) {
        lVar21 = *(long *)(param_3 + 0xf0);
        func_0x00010c10aa20();
        if (lVar21 != -1) {
          func_0x00010c10aa20(*(undefined8 *)(param_3 + 0xf0));
        }
        func_0x00010bde6480(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = param_3;
        func_0x00010beea960(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010beea920(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = param_3;
        func_0x00010be49f80();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_3;
        func_0x00010be97540();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
      }
      puVar9 = PTR_PTR_1126da098;
      _objc_alloc(PTR_PTR_1126da098);
      func_0x00010c01d100();
      func_0x00010befa120(puVar7);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126b26f0;
      _objc_alloc();
      func_0x00010c01d120(*(undefined8 *)(param_3 + 0x240));
      func_0x00010befa120(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
  }
  uVar17 = *(ulong *)(param_3 + 800);
  func_0x00010bf529e0();
  if (1 < uVar17) {
    puVar8 = PTR_PTR_1126bfba8;
    _objc_alloc();
    uVar12 = *(undefined8 *)(param_3 + 800);
    func_0x00010c0dfd40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_3 + 800);
    func_0x00010c0dfd40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0541c0();
    uVar16 = *(undefined8 *)(param_3 + 0x340);
    *(undefined **)(param_3 + 0x340) = puVar8;
    _objc_release(uVar16);
    _objc_release(uVar23);
    _objc_release(uVar12);
  }
  puVar9 = puVar6;
  func_0x00010bf529e0();
  puVar8 = (undefined *)0x0;
  if (puVar9 != (undefined *)0x0) {
    puVar8 = puVar6;
    func_0x00010bf51e00();
  }
  uVar12 = *(undefined8 *)(param_3 + 0x330);
  *(undefined **)(param_3 + 0x330) = puVar8;
  _objc_release(uVar12);
  puVar9 = puVar7;
  func_0x00010bf529e0();
  puVar8 = (undefined *)0x0;
  if (puVar9 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010bf51e00();
  }
  uVar12 = *(undefined8 *)(param_3 + 0x338);
  *(undefined **)(param_3 + 0x338) = puVar8;
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126b2708;
    lVar18 = *(long *)(param_5 + 0x38);
    uVar12 = *(undefined8 *)(param_5 + 0x20);
    if (lVar18 == 0) {
      _objc_retain(param_4);
      _objc_alloc(puVar6);
      func_0x00010c0db660(*(undefined8 *)(param_5 + 0x30));
      func_0x00010c01ce60(puVar6);
    }
    else {
      puVar6 = *(undefined **)(param_5 + 0x28);
      _objc_retain(param_4);
      func_0x00010bdf5dc0((float)lVar18,puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_4);
    func_0x00010befa120(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 108556ddc; end: 108556e93;  */

void FUN_108556ddc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2708;
  lVar2 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar2 == 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    func_0x00010c0db660(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c01ce60(puVar1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bdf5dc0((float)lVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  func_0x00010befa120(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108556e94; end: 108556f3f;  */

void FUN_108556e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d9160();
  _objc_release(param_2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126b26f8;
  _objc_alloc(PTR_PTR_1126b26f8);
  func_0x00010c0db660(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c01cea0(puVar2);
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108556f40; end: 108556f53;  */

void FUN_108556f40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b26d8,PTR_s_entryWithFilterName_filterConfig_1125c37f0,0,param_2);
  return;
}


