/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b6a2b0; end: 103b6a2bb; -[SCSpotlightReplyShareModel snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a2b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef8a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef8a8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b6a2bc; end: 103b6a2c7; -[SCSpotlightReplyShareModel commentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a2bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef8b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef8b0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b6a2c8; end: 103b6a31f;  */

void FUN_103b6a2c8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b6a320; end: 103b6a3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef8a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef8a8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef8b0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a3bc; end: 103b6a49f; -[SCSpotlightReplyShareModel initWithCompositeStoryId:snapId:commentId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a3bc(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112fef8a0);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_112fef8a8);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112fef8b0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a4a0; end: 103b6a50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a4a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef8a0);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef8a8);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef8b0);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a50c; end: 103b6a50f; -[SCSpotlightReplyShareModel copyWithZone:] */

void FUN_103b6a50c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b6a510; end: 103b6a52b; -[SCSpotlightReplyShareModel description] */

void FUN_103b6a510(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6a52c; end: 103b6a5a7; -[SCSpotlightReplyShareModel init] */

void FUN_103b6a52c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCSpotlightSharingServices/SCSpotlightReplyShareModelWrapper.swift",0x42,2,
                      0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b6a574);
  (*pcVar1)();
}



/* Entry: 103b6a5a8; end: 103b6a5fb; -[SCSpotlightReplyShareModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b6a5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6a5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fef8a0 + 8))
  ;
  return;
}



/* Entry: 103b6a5fc; end: 103b6a61b;  */

void FUN_103b6a5fc(void)

{
  func_0x000107c61168(&PTR_PTR_112932070);
  return;
}



/* Entry: 103b6a61c; end: 103b6a683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a61c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003719ac();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fef8e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b6a684; end: 103b6a6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a684(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef8e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a6d0; end: 103b6a7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103b6a6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  func_0x000107c5fadc(param_3,param_4);
  uVar2 = 0;
  if (param_6 != 0) {
    func_0x000107c5fadc(param_5,param_6);
    uVar2 = param_5;
  }
  puVar1 = PTR_PTR_1126ad0d0;
  func_0x000107c610f8();
  func_0x000107c48098();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(apuStack_68[0]);
  return puVar1;
}



/* Entry: 103b6a7b4; end: 103b6a8ab; -[_TtC41SCLensesCollectionModularCameraScopeProxy44SCLensesCollectionModularCameraScopeServices buildWithPresentingViewController:workflowDelegate:collectionId:preselectedLensId:replyParameters:] */

void FUN_103b6a7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_5);
  if (param_6 == 0) {
    param_6 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b6a6d0(param_3,param_4,param_5,param_2,param_6,uVar2,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b6a8ac; end: 103b6a8db;  */

void FUN_103b6a8ac(void)

{
  func_0x0001003719ac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b6a8dc; end: 103b6a90b; -[_TtC41SCLensesCollectionModularCameraScopeProxy44SCLensesCollectionModularCameraScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef8e8));
  return;
}



/* Entry: 103b6a90c; end: 103b6a973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a90c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100371940();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fef938) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b6a974; end: 103b6a9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a974(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef938) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a9c0; end: 103b6aae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b6a9c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x5;
  undefined8 in_x6;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (in_x5 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100288f10;
    puStack_80 = &UNK_1106d9750;
    ppuVar3 = &puStack_98;
    lStack_78 = in_x5;
    uStack_70 = in_x6;
    func_0x000107c60bc4(ppuVar3);
    uVar1 = uStack_70;
    func_0x000107c6157c(in_x6);
    func_0x000107c61574(uVar1);
  }
  puVar2 = PTR_PTR_1126ad0c8;
  func_0x000107c610f8();
  func_0x000107c4808c();
  func_0x000107c60bd0(ppuVar3);
  puStack_98 = puVar2;
  func_0x00010008a7c8(&uStack_68,&puStack_98);
  func_0x000100083b20(&puStack_98);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(puStack_98);
  return puVar2;
}



/* Entry: 103b6aae4; end: 103b6abff; -[_TtC34SCLensModularReplyCameraScopeProxy37SCLensModularReplyCameraScopeServices buildWithPresentingViewController:lensReplyParams:lensModularCameraLensData:delegate:activationSource:dismissBlock:] */

void FUN_103b6aae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106d97d0;
    func_0x000107c613fc(&UNK_1106d97d0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    uVar3 = 0x103b6ac7c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b6a9c0(param_3,param_4,param_5,param_6,param_7,uVar3,puVar2);
  func_0x000101237350(uVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b6ac00; end: 103b6ac2f;  */

void FUN_103b6ac00(void)

{
  func_0x000100371940();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b6ac30; end: 103b6ac8f; -[_TtC34SCLensModularReplyCameraScopeProxy37SCLensModularReplyCameraScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6ac30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef938));
  return;
}



/* Entry: 103b6ac90; end: 103b6acdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6ac90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef988) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6acdc; end: 103b6adeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103b6acdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 auStack_78 [2];
  undefined8 uStack_68;
  
  func_0x000100372468(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_9);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_6);
  func_0x000107c61174();
  func_0x000107c615f0(param_7);
  func_0x0001043abdc8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  auStack_78[0] = param_1;
  func_0x00010008a7c8(&uStack_68,auStack_78);
  func_0x000100083b20(auStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(auStack_78[0]);
  return param_1;
}



/* Entry: 103b6adec; end: 103b6aeff; -[_TtC28SCTopicViewerMusicScopeProxy38SCTopicViewerMusicScopeBuilderServices buildWithMusicInfo:sourcePageSessionId:sourcePageType:sourceSnapStoryId:uiContainer:isPrivateTrack:delegate:] */

void FUN_103b6adec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  if (param_6 == 0) {
    param_6 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b6acdc(param_3,param_4,param_2,param_5,param_6,uVar2,param_7,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b6af00; end: 103b6af2f;  */

void FUN_103b6af00(void)

{
  func_0x000100372fe8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b6af30; end: 103b6af5f; -[_TtC28SCTopicViewerMusicScopeProxy38SCTopicViewerMusicScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6af30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef988));
  return;
}



/* Entry: 103b6af60; end: 103b6afc3;  */

long FUN_103b6af60(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b6afc4; end: 103b6b0a3;  */

undefined8 * FUN_103b6afc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 103b6b0a4; end: 103b6b0f7;  */

undefined8 * FUN_103b6b0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103b6b0f8; end: 103b6b1c3;  */

int FUN_103b6b0f8(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103b6b1c4; end: 103b6b1ef; +[SCMusicTopicViewerActionIdentifiers soundHeaderFavoriteSound] */

void FUN_103b6b1c4(void)

{
  func_0x000107c5fadc(0xd000000000000030,0x800000010f1a2490);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b1f0; end: 103b6b1fb;  */

undefined * FUN_103b6b1f0(void)

{
  return &UNK_1106d9a18;
}



/* Entry: 103b6b1fc; end: 103b6b227; +[SCMusicTopicViewerActionIdentifiers soundHeaderPlaySound] */

void FUN_103b6b1fc(void)

{
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f1a24d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b228; end: 103b6b233;  */

undefined * FUN_103b6b228(void)

{
  return &UNK_1106d9a28;
}



/* Entry: 103b6b234; end: 103b6b25f; +[SCMusicTopicViewerActionIdentifiers soundHeaderOpenLinkfire] */

void FUN_103b6b234(void)

{
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f1a2500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b260; end: 103b6b26b;  */

undefined * FUN_103b6b260(void)

{
  return &UNK_1106d9a38;
}



/* Entry: 103b6b26c; end: 103b6b297; +[SCMusicTopicViewerActionIdentifiers soundHeaderOpenRelatedTrack] */

void FUN_103b6b26c(void)

{
  func_0x000107c5fadc(0xd000000000000034,0x800000010f1a2530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b298; end: 103b6b2a3;  */

undefined * FUN_103b6b298(void)

{
  return &UNK_1106d9a48;
}



/* Entry: 103b6b2a4; end: 103b6b2cf; +[SCMusicTopicViewerActionIdentifiers soundHeaderOpenArtistProfile] */

void FUN_103b6b2a4(void)

{
  func_0x000107c5fadc(0xd000000000000035,0x800000010f1a2570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b2d0; end: 103b6b2db;  */

undefined * FUN_103b6b2d0(void)

{
  return &UNK_1106d9a58;
}



/* Entry: 103b6b2dc; end: 103b6b307; +[SCMusicTopicViewerActionIdentifiers soundHeaderAddSong] */

void FUN_103b6b2dc(void)

{
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f1a25b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b308; end: 103b6b313;  */

undefined * FUN_103b6b308(void)

{
  return &UNK_1106d9a68;
}



/* Entry: 103b6b314; end: 103b6b33f; +[SCMusicTopicViewerActionIdentifiers soundHeaderShareSound] */

void FUN_103b6b314(void)

{
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f1a25e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b340; end: 103b6b34f; -[SCMusicTopicViewerActionIdentifiers .cxx_destruct] */

void FUN_103b6b340(void)

{
  return;
}



/* Entry: 103b6b350; end: 103b6b37b; +[SCMusicTopicViewerEventIdentifiers externalMusicAddSongStarted] */

void FUN_103b6b350(void)

{
  func_0x000107c5fadc(0xd00000000000003a,0x800000010f1a2610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b37c; end: 103b6b387;  */

undefined * FUN_103b6b37c(void)

{
  return &UNK_1106d9a88;
}



/* Entry: 103b6b388; end: 103b6b3b3; +[SCMusicTopicViewerEventIdentifiers externalMusicAddSongSuccess] */

void FUN_103b6b388(void)

{
  func_0x000107c5fadc(0xd00000000000003a,0x800000010f1a2650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b3b4; end: 103b6b3bf;  */

undefined * FUN_103b6b3b4(void)

{
  return &UNK_1106d9a98;
}



/* Entry: 103b6b3c0; end: 103b6b3eb; +[SCMusicTopicViewerEventIdentifiers externalMusicAddSongFailed] */

void FUN_103b6b3c0(void)

{
  func_0x000107c5fadc(0xd000000000000039,0x800000010f1a2690);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6b3ec; end: 103b6b427;  */

void FUN_103b6b3ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6b428; end: 103b6b42b;  */

void FUN_103b6b428(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b6b42c; end: 103b6b45f;  */

void FUN_103b6b42c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b6b460; end: 103b6b463; -[SCMusicTopicViewerEventIdentifiers .cxx_destruct] */

void FUN_103b6b460(void)

{
  return;
}



/* Entry: 103b6b464; end: 103b6b4a3;  */

void FUN_103b6b464(void)

{
  func_0x000107c61168(&PTR_PTR_112932388);
  return;
}



/* Entry: 103b6b4a4; end: 103b6b4a7; -[SCMusicTopicViewerActionIdentifiers init] */

void FUN_103b6b4a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6b4a8; end: 103b6b4af; -[SCMusicTopicViewerEventIdentifiers init] */

void FUN_103b6b4a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6b4b0; end: 103b6b4bf; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices trendingRankSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa60));
  return;
}



/* Entry: 103b6b4c0; end: 103b6b4cf; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices cameraPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa68));
  return;
}



/* Entry: 103b6b4d0; end: 103b6b4df; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices ctaProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa70));
  return;
}



/* Entry: 103b6b4e0; end: 103b6b4ef; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices eventService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b4e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa78));
  return;
}



/* Entry: 103b6b4f0; end: 103b6b4ff; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices headerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b4f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa80));
  return;
}



/* Entry: 103b6b500; end: 103b6b50f; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa88));
  return;
}



/* Entry: 103b6b510; end: 103b6b51f; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices soundReportManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa90));
  return;
}



/* Entry: 103b6b520; end: 103b6b52f; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices headerAccessoryButtonProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefa98));
  return;
}



/* Entry: 103b6b530; end: 103b6b53f; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices soundShareSendToPreviewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6b530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefaa0));
  return;
}



/* Entry: 103b6b540; end: 103b6ba77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b6b540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fefa20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fefa28) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar1 = 0x112fefaa8;
  func_0x0001000285a8(0x112fefaa8,&UNK_10dc59dc0);
  pcVar2 = FUN_103b6ba78;
  func_0x0001000cb480(FUN_103b6ba78,0,uVar1);
  *(code **)(unaff_x20 + _DAT_112fefa30) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fefa38) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fefa40) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fefa48) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fefa50) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fefa58) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fefa60) = param_9;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c61174();
  uVar1 = param_9;
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fefa68) = uVar1;
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fefa70) = uVar1;
  uVar1 = 0x112fefab0;
  func_0x0001000285a8(0x112fefab0,&UNK_10dc59dc8);
  pcVar2 = FUN_103b6bab4;
  func_0x0001000cb480(FUN_103b6bab4,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574();
  *(code **)(unaff_x20 + _DAT_112fefa78) = pcVar3;
  func_0x0001003a5b88();
  *(code **)(unaff_x20 + _DAT_112fefa80) = pcVar2;
  func_0x0001003a5b88();
  *(code **)(unaff_x20 + _DAT_112fefa88) = pcVar2;
  func_0x0001000bf56c();
  *(code **)(unaff_x20 + _DAT_112fefa90) = pcVar2;
  func_0x0001003a5b88();
  *(code **)(unaff_x20 + _DAT_112fefa98) = pcVar2;
  func_0x0001003a5b88();
  *(code **)(unaff_x20 + _DAT_112fefaa0) = pcVar2;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61170(param_9);
  return puVar4;
}



/* Entry: 103b6ba78; end: 103b6bab3;  */

void FUN_103b6ba78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar1;
  func_0x000107c614f0();
  param_1[3] = uVar3;
  param_1[4] = uVar2;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar1);
  return;
}



/* Entry: 103b6bab4; end: 103b6babf;  */

void FUN_103b6bab4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103b6bac0; end: 103b6bb1f; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices init] */

void FUN_103b6bac0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerAPI.MusicTopicViewerServices",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b6baec);
  (*pcVar1)();
}



/* Entry: 103b6bb20; end: 103b6bc47; -[_TtC19MusicTopicViewerAPI24MusicTopicViewerServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b6bbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b6bbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b6bbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b6bc1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6bc00) */
/* WARNING: Removing unreachable block (ram,0x000103b6bbe0) */
/* WARNING: Removing unreachable block (ram,0x000103b6bbc0) */
/* WARNING: Removing unreachable block (ram,0x000103b6bc20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6bb20(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa38));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa40));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fefa58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fefa60));
  return;
}



/* Entry: 103b6bc48; end: 103b6bc67;  */

void FUN_103b6bc48(void)

{
  func_0x000107c61168(&PTR_PTR_1129324e8);
  return;
}



/* Entry: 103b6bc68; end: 103b6bc77; -[SCTopicViewerMusicHeaderViewModel favoritesStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6bc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefae0));
  return;
}



/* Entry: 103b6bc78; end: 103b6bc87; -[SCTopicViewerMusicHeaderViewModel trackObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6bc78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefae8));
  return;
}



/* Entry: 103b6bc88; end: 103b6bc97; -[SCTopicViewerMusicHeaderViewModel playerStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6bc88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefaf0));
  return;
}



/* Entry: 103b6bc98; end: 103b6bcab; -[SCTopicViewerMusicHeaderViewModel playbackProgressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6bc98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefaf8));
  return;
}



/* Entry: 103b6bcac; end: 103b6bde7; -[SCTopicViewerMusicHeaderViewModel initWithFavoritesStateObservable:trackObservable:playerStateObservable:playbackProgressObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6bcac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fefae0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fefae8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fefaf0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fefaf8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103b6bde8; end: 103b6bdeb; -[SCTopicViewerMusicHeaderViewModel copyWithZone:] */

void FUN_103b6bde8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b6bdec; end: 103b6be07; -[SCTopicViewerMusicHeaderViewModel description] */

void FUN_103b6bdec(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6be08; end: 103b6be83; -[SCTopicViewerMusicHeaderViewModel init] */

void FUN_103b6be08(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MusicTopicViewerAPI/TopicViewerMusicHeaderViewModelWrapper.swift",0x40,2,0x39
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b6be50);
  (*pcVar1)();
}



/* Entry: 103b6be84; end: 103b6bedb; -[SCTopicViewerMusicHeaderViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b6bea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b6bec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6bea4) */
/* WARNING: Removing unreachable block (ram,0x000103b6bec4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6be84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fefae0));
  return;
}



/* Entry: 103b6bedc; end: 103b6befb;  */

void FUN_103b6bedc(void)

{
  func_0x000107c61168(&PTR_PTR_112932628);
  return;
}



/* Entry: 103b6befc; end: 103b6beff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6befc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fefae0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fefae8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fefaf0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fefaf8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6bf00; end: 103b6bf63;  */

void FUN_103b6bf00(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_2;
  func_0x000107c405e8();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  lVar1 = param_3[1];
  *param_3 = lVar2;
  param_3[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 103b6bf64; end: 103b6bfd3; +[MusicLoggingHelpers contextSessionIdFrom:] */

void FUN_103b6bf64(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_103b6c040(param_3);
  func_0x000107c61170(uVar1);
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b6bfd4; end: 103b6c00f; -[MusicLoggingHelpers init] */

void FUN_103b6bfd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b6c20c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6c010; end: 103b6c03f;  */

void FUN_103b6c010(void)

{
  FUN_103b6c20c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b6c040; end: 103b6c20b;  */

undefined1  [16] FUN_103b6c040(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0;
    puVar2 = &UNK_1106d9b60;
    func_0x000107c613fc(&UNK_1106d9b60,0x18,7);
    *(undefined8 **)(puVar2 + 0x10) = &uStack_70;
    puVar3 = &UNK_1106d9b88;
    func_0x000107c613fc(&UNK_1106d9b88,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x103b6c284;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x103b6c28c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1019e04bc;
    puStack_88 = &UNK_1106d9ba0;
    ppuVar4 = &puStack_a0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_78;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106d9bd8;
    func_0x000107c613fc(&UNK_1106d9bd8,0x18,7);
    *(undefined8 **)(puVar3 + 0x10) = &uStack_70;
    puVar5 = &UNK_1106d9c00;
    func_0x000107c613fc(&UNK_1106d9c00,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_103b6c248;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_80 = FUN_103b6c260;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1019e04d0;
    puStack_88 = &UNK_1106d9c18;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    func_0x000107c4c590(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    uVar8 = uStack_68;
    uVar7 = uStack_70;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 103b6c20c; end: 103b6c22b;  */

void FUN_103b6c20c(void)

{
  func_0x000107c61168(&PTR_PTR_112932708);
  return;
}



/* Entry: 103b6c22c; end: 103b6c247;  */

void FUN_103b6c22c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b6c248; end: 103b6c25f;  */

void FUN_103b6c248(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_103b6bf00(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103b6c260; end: 103b6c27f;  */

void FUN_103b6c260(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103b6c280; end: 103b6c28f;  */

void FUN_103b6c280(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b6c290; end: 103b6c35b; +[MusicPlaybackEventHelpers createPlaybackEventFor:trackId:trackOffsetMs:] */

void FUN_103b6c290(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  double dVar3;
  
  lVar1 = 0;
  dVar3 = param_1;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000103fcc7b0(0);
  func_0x000107c610f8();
  func_0x000103fcc56c(param_1,dVar3 * 1000.0,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6c35c; end: 103b6c37b;  */

void FUN_103b6c35c(void)

{
  func_0x000107c61168(&PTR_PTR_1129327b8);
  return;
}



/* Entry: 103b6c37c; end: 103b6c3b7; -[MusicPlaybackEventHelpers init] */

void FUN_103b6c37c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b6c35c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6c3b8; end: 103b6c3e7;  */

void FUN_103b6c3b8(void)

{
  FUN_103b6c35c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b6c3e8; end: 103b6c3f7; -[SCMusicSecretFeatureChecker muteSwitchObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6c3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fefb78));
  return;
}



/* Entry: 103b6c3f8; end: 103b6c427;  */

void FUN_103b6c3f8(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x00010080c248(param_1);
  return;
}


