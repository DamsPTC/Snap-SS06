/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d868ec; end: 102d869b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d868ec(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f154e0;
  func_0x000107c61614(unaff_x20 + _DAT_112f154e0,0);
  puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
     (puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
     puVar4 = PTR___swiftEmptySetSingleton_11034f1d8, puVar3 != (undefined *)0x0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102d84a9c();
  }
  *(undefined **)(unaff_x20 + _DAT_112f154d0) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f154d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d869b4; end: 102d869d7;  */

undefined8 FUN_102d869b4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d869d8; end: 102d86a3b;  */

void FUN_102d869d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5978);
  return;
}



/* Entry: 102d86a3c; end: 102d86a43;  */

void FUN_102d86a3c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102d86a44; end: 102d86a53; -[SCTalkUIChatViewLifeCycleListener chatEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f15518));
  return;
}



/* Entry: 102d86a54; end: 102d86a5f; -[SCTalkUIChatViewLifeCycleListener chatMediaWillEnterFullscreen] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d230)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86a60; end: 102d86a6b; -[SCTalkUIChatViewLifeCycleListener chatMediaDidCloseFullscreen] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d240)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86a6c; end: 102d86a77; -[SCTalkUIChatViewLifeCycleListener viewDidSwipeIn] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d10c)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86a78; end: 102d86a83; -[SCTalkUIChatViewLifeCycleListener viewDidSwipeOut] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d0fc)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86a84; end: 102d86a8f; -[SCTalkUIChatViewLifeCycleListener viewWillResignActive] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d11c)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86a90; end: 102d86a9b; -[SCTalkUIChatViewLifeCycleListener viewDidFullyDisappear] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d12c)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86a9c; end: 102d86aa7; -[SCTalkUIChatViewLifeCycleListener viewDidFullyAppear] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86a9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d13c)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86aa8; end: 102d86ab3; -[SCTalkUIChatViewLifeCycleListener viewDidBecomeActive] */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86aa8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*(code *)&UNK_10446d14c)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86ab4; end: 102d86b2b;  */

/* WARNING: Possible PIC construction at 0x000102d86b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86ab4(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  (*param_3)();
  func_0x000107c4d664(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d86b2c; end: 102d86ba3; -[SCTalkUIChatViewLifeCycleListener viewDidAppearAtPercentage:] */

/* WARNING: Possible PIC construction at 0x000102d86b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86b2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f15518);
  func_0x00010446d50c(0);
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x00010446d15c(param_1);
  func_0x000107c4d664(uVar2,param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102d86ba4; end: 102d86c07; -[SCTalkUIChatViewLifeCycleListener init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86ba4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f15518;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d86c08; end: 102d86c3b;  */

void FUN_102d86c08(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d86c3c; end: 102d86c4b; -[SCTalkUIChatViewLifeCycleListener .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f15518));
  return;
}



/* Entry: 102d86c4c; end: 102d86c6b;  */

void FUN_102d86c4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5a48);
  return;
}



/* Entry: 102d86c6c; end: 102d86c77; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem contentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86c6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15548);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f15548))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d86c78; end: 102d86c83; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86c78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15550);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f15550))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d86c84; end: 102d86ccb;  */

void FUN_102d86c84(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d86ccc; end: 102d86cdb; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem serverMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d86ccc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f15558);
}



/* Entry: 102d86cdc; end: 102d86df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15548);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15550);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f15558) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d86df4; end: 102d86e93; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem initWithContentId:conversationId:serverMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f15548);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f15550);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_112f15558) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d86e94; end: 102d86ef3; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem init] */

void FUN_102d86e94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNSEPrefetchedMediaServices.NSEPrefetchedMediaItem",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d86ec0);
  (*pcVar1)();
}



/* Entry: 102d86ef4; end: 102d86f33; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d86f14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d86f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f15548 + 8))
  ;
  return;
}



/* Entry: 102d86f34; end: 102d86f53;  */

void FUN_102d86f34(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5b00);
  return;
}



/* Entry: 102d86f54; end: 102d86f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86f54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f15588) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d86fa0; end: 102d86ff7; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices initWithReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d86fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f15588) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102d86ff8; end: 102d87057; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices init] */

void FUN_102d86ff8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNSEPrefetchedMediaServices.NSEPrefetchedMediaServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d87024);
  (*pcVar1)();
}



/* Entry: 102d87058; end: 102d8707b; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d87058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f15588));
  return;
}



/* Entry: 102d8707c; end: 102d87127;  */

void FUN_102d8707c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d87128; end: 102d8716f;  */

void FUN_102d87128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_102d87170(param_1,param_2,param_3);
  return;
}



/* Entry: 102d87170; end: 102d873ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d87170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  undefined *puVar9;
  long unaff_x20;
  code *pcVar10;
  long *plStack_78;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f155b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112f155c0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102d8a2d4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112f155c8) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_112f155d0;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f155d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f155e0) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_3);
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar5,puVar3);
  func_0x0001000d224c(&plStack_78);
  plVar6 = plStack_78;
  if (plStack_78 == (long *)0x0) {
    func_0x000107c61574(param_3);
  }
  else {
    func_0x0001000285a8(0x112df8820,&UNK_10dae9e10);
    func_0x000107c61174(plVar6);
    plVar7 = plVar6;
    func_0x0001000b637c();
    func_0x000107c61170(plVar6);
    func_0x000107c61170(plVar6);
    func_0x0001000d224c(&plStack_78);
    plVar6 = plStack_78;
    func_0x000100471e0c(plStack_78,0);
    func_0x000107c61574(plVar7);
    func_0x000107c61170(plStack_78);
    puVar3 = &UNK_1105ce6c8;
    func_0x000107c613fc(&UNK_1105ce6c8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,puVar5);
    pcVar8 = FUN_102d8a3d0;
    puVar9 = puVar3;
    (**(code **)(*plVar6 + 0x60))(FUN_102d8a3d0);
    func_0x000107c61574(plVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c614f0(pcVar8);
    uVar4 = *(undefined8 *)(puVar5 + _DAT_112f155d0);
    pcVar10 = *(code **)(puVar9 + 0x18);
    func_0x000107c6157c(uVar4);
    (*pcVar10)();
    func_0x000107c615e8(pcVar8);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(param_2);
    param_2 = param_3;
  }
  func_0x000107c61574(param_2);
  return puVar5;
}



/* Entry: 102d873ac; end: 102d87583;  */

void FUN_102d873ac(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar7 = *param_1;
  puVar2 = &UNK_1105ce8e8;
  func_0x000107c613fc(&UNK_1105ce8e8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102d8a6b8;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102d8a6c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_1105ce900;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1105ce938;
  func_0x000107c613fc(&UNK_1105ce938,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x102d8a6fc;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = (code *)0x102d8a70c;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_1105ce950;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c5b4(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x74,0x25,0x2c,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d87580);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x74,0x27,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d87584);
  (*pcVar1)();
}



/* Entry: 102d87584; end: 102d875f3;  */

void FUN_102d87584(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102d875f4(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102d875f4; end: 102d87727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d875f4(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  
  func_0x0001000d224c(auStack_58);
  FUN_102d8a678(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  func_0x000107c61170(auStack_58[0]);
  puVar1 = (ulong *)(unaff_x20 + _DAT_112f155b8);
  uVar5 = puVar1[1];
  if (param_2 == 0) {
    if (uVar5 == 0) {
      return;
    }
  }
  else if (uVar5 != 0) {
    if (param_1 == *puVar1 && param_2 == uVar5) {
      return;
    }
    uVar3 = param_1;
    func_0x000107c605b8(param_1,param_2,*puVar1,uVar5,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar5);
  lVar2 = _DAT_112f155c0;
  func_0x000107c61428(unaff_x20 + _DAT_112f155c0,auStack_58,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar4);
  lVar2 = _DAT_112f155c8;
  func_0x000107c61428(unaff_x20 + _DAT_112f155c8,auStack_70,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 102d87728; end: 102d87783;  */

void FUN_102d87728(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102d875f4(0,0);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102d87784; end: 102d878df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d87784(ulong param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_68 [3];
  
  func_0x0001000d224c(auStack_68);
  FUN_102d8a678(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  func_0x000107c61170(auStack_68[0]);
  uVar2 = ((ulong *)(unaff_x20 + _DAT_112f155b8))[1];
  if ((uVar2 != 0) &&
     ((uVar1 = *(ulong *)(unaff_x20 + _DAT_112f155b8), param_1 == uVar1 && uVar2 == param_2 ||
      (func_0x000107c605b8(param_1,param_2,uVar1,uVar2,0), (param_1 & 1) != 0)))) {
    lVar3 = _DAT_112f155c0;
    func_0x000107c61428(unaff_x20 + _DAT_112f155c0,auStack_68,0x20,0);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (*(long *)(lVar3 + 0x10) != 0) {
      func_0x000107c61434(lVar3);
      func_0x000100029284();
      if ((param_4 & 1) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_3 * 8);
        func_0x000107c61434(uVar4);
        func_0x000107c614a8(auStack_68);
        func_0x000107c6142c(lVar3);
        FUN_102d878e0(param_5,uVar4);
        func_0x000107c6142c(uVar4);
        if ((param_5 & 1) == 0) {
          return 1;
        }
        return 0;
      }
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c614a8(auStack_68);
    return 1;
  }
  return 0;
}



/* Entry: 102d878e0; end: 102d8799b;  */

undefined1 FUN_102d878e0(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar2 = (ulong)(param_1 & 0xff);
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar1 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar2) == (param_1 & 0xff)) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar1;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 102d8799c; end: 102d87c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8799c(long param_1,ulong param_2,undefined8 param_3,long *param_4,ulong param_5,
                  undefined8 param_6,code *param_7)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_b8 [32];
  undefined8 auStack_98 [3];
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  FUN_102d87784(param_2,param_3,param_4,param_5,param_6);
  lVar1 = _DAT_112f155c0;
  if ((param_2 & 1) == 0) goto LAB_102d87c14;
  func_0x000107c61428(param_1 + _DAT_112f155c0,auStack_b8,0x20,0);
  lVar4 = *(long *)(param_1 + lVar1);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_102d87a9c:
    func_0x000107c614a8(auStack_b8);
    func_0x000107c61428(param_1 + lVar1,auStack_b8,0x21,0);
    func_0x000107c61434(param_5);
    uVar9 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c61558(uVar9);
    auStack_98[0] = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
    FUN_102d8a184(PTR___swiftEmptySetSingleton_11034f1d8,param_4,param_5,uVar9);
    func_0x000107c6142c(param_5);
    *(undefined8 *)(param_1 + lVar1) = auStack_98[0];
    func_0x000107c614a8(auStack_b8);
  }
  else {
    func_0x000107c61434(lVar4);
    plVar3 = param_4;
    uVar6 = param_5;
    func_0x000100029284();
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_102d87a9c;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + (long)plVar3 * 8);
    func_0x000107c61434(uVar9);
    func_0x000107c614a8(auStack_b8);
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c61428(param_1 + lVar1,auStack_98,0x21,0);
  pcVar2 = (code *)auStack_b8;
  FUN_102d87c3c(pcVar2,param_4,param_5);
  if (*param_4 != 0) {
    FUN_102d89178(&uStack_79,param_6);
  }
  (*pcVar2)(auStack_b8,0);
  func_0x000107c614a8(auStack_98);
  uVar6 = *(ulong *)(param_1 + _DAT_112f155d8);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d87bfc);
          (*pcVar2)();
        }
        uVar10 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c615f0(uVar10);
      }
      else {
        uVar10 = uVar8;
        FUN_102d88d3c(uVar8,uVar6);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d87bf8);
        (*pcVar2)();
      }
      uVar5 = uVar8 + 1;
      (*param_7)(uVar10);
      func_0x000107c615e8(uVar10);
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar7);
  }
LAB_102d87c14:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d87c3c; end: 102d87caf;  */

code * FUN_102d87c3c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x7c60);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_102d890a4();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_102d87cb0;
}



/* Entry: 102d87cb0; end: 102d87cdf;  */

void FUN_102d87cb0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 102d87ce0; end: 102d87d3f; -[_TtC45ChatMessageDisplayStateLoggingServiceProvider29ChatMessageDisplayStateLogger init] */

void FUN_102d87ce0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMessageDisplayStateLoggingServiceProvider.ChatMessageDisplayStateLogger",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d87d0c);
  (*pcVar1)();
}



/* Entry: 102d87d40; end: 102d87dbb; -[_TtC45ChatMessageDisplayStateLoggingServiceProvider29ChatMessageDisplayStateLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d87d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d87d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d87d40(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f155d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f155e0));
  return;
}



/* Entry: 102d87dbc; end: 102d87f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d87dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  func_0x000107c6071c();
  puVar1 = &UNK_1105ce6f0;
  func_0x000107c613fc(&UNK_1105ce6f0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_1105ce6c8;
  func_0x000107c613fc(&UNK_1105ce6c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105ce718;
  func_0x000107c613fc(&UNK_1105ce718,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  puVar3[0x38] = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0x102d8a3d8;
  *(undefined **)(puVar3 + 0x48) = puVar1;
  uVar4 = 0;
  FUN_102d8a678(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x102d8a3e4,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102d87f2c; end: 102d87fa3;  */

/* WARNING: Possible PIC construction at 0x000102d87f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d87f8c) */

void FUN_102d87f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c4bcbc(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d87fa4; end: 102d87faf; -[_TtC45ChatMessageDisplayStateLoggingServiceProvider29ChatMessageDisplayStateLogger logMessageInitializedWithConversationId:analyticsMessageId:] */

/* WARNING: Possible PIC construction at 0x000102d88218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8821c) */

void FUN_102d87fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_102d87dbc(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d87fb0; end: 102d88123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d87fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  func_0x000107c6071c();
  puVar1 = &UNK_1105ce740;
  func_0x000107c613fc(&UNK_1105ce740,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_1105ce6c8;
  func_0x000107c613fc(&UNK_1105ce6c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105ce768;
  func_0x000107c613fc(&UNK_1105ce768,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  puVar3[0x38] = 1;
  *(undefined8 *)(puVar3 + 0x40) = 0x102d8a3e8;
  *(undefined **)(puVar3 + 0x48) = puVar1;
  uVar4 = 0;
  FUN_102d8a678(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x102d8a710,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102d88124; end: 102d8819b;  */

/* WARNING: Possible PIC construction at 0x000102d88180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d88184) */

void FUN_102d88124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c4bcc8(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d8819c; end: 102d881a7; -[_TtC45ChatMessageDisplayStateLoggingServiceProvider29ChatMessageDisplayStateLogger logMessageLoadStartedWithConversationId:analyticsMessageId:] */

/* WARNING: Possible PIC construction at 0x000102d88218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8821c) */

void FUN_102d8819c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_102d87fb0(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d881a8; end: 102d88233;  */

/* WARNING: Possible PIC construction at 0x000102d88218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8821c) */

void FUN_102d881a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d88234; end: 102d883a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d88234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  func_0x000107c6071c();
  puVar1 = &UNK_1105ce790;
  func_0x000107c613fc(&UNK_1105ce790,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_1105ce6c8;
  func_0x000107c613fc(&UNK_1105ce6c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105ce7b8;
  func_0x000107c613fc(&UNK_1105ce7b8,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  puVar3[0x38] = 2;
  *(undefined8 *)(puVar3 + 0x40) = 0x102d8a3f4;
  *(undefined **)(puVar3 + 0x48) = puVar1;
  uVar4 = 0;
  FUN_102d8a678(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x102d8a714,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102d883a8; end: 102d8841f;  */

/* WARNING: Possible PIC construction at 0x000102d88404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d88408) */

void FUN_102d883a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c4bcc0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d88420; end: 102d8842b; -[_TtC45ChatMessageDisplayStateLoggingServiceProvider29ChatMessageDisplayStateLogger logMessageLoadEndedWithConversationId:analyticsMessageId:] */

/* WARNING: Possible PIC construction at 0x000102d88218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8821c) */

void FUN_102d88420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_102d88234(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d8842c; end: 102d8859f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8842c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  func_0x000107c6071c();
  puVar1 = &UNK_1105ce7e0;
  func_0x000107c613fc(&UNK_1105ce7e0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_3);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_1105ce6c8;
  func_0x000107c613fc(&UNK_1105ce6c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105ce808;
  func_0x000107c613fc(&UNK_1105ce808,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  puVar3[0x38] = 3;
  *(code **)(puVar3 + 0x40) = FUN_102d8a42c;
  *(undefined **)(puVar3 + 0x48) = puVar1;
  uVar4 = 0;
  FUN_102d8a678(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x102d8a718,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102d885a0; end: 102d88617;  */

/* WARNING: Possible PIC construction at 0x000102d885fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d88600) */

void FUN_102d885a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c4bcc4(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102d88618; end: 102d88623; -[_TtC45ChatMessageDisplayStateLoggingServiceProvider29ChatMessageDisplayStateLogger logMessageLoadFailedWithConversationId:analyticsMessageId:] */

/* WARNING: Possible PIC construction at 0x000102d88218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8821c) */

void FUN_102d88618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_102d8842c(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d88624; end: 102d8873b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d88624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_1105ce6c8;
  func_0x000107c613fc(&UNK_1105ce6c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105ce830;
  func_0x000107c613fc(&UNK_1105ce830,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  uVar3 = 0;
  FUN_102d8a678(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_4);
  func_0x00010090569c(0x102d8a4a0,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102d8873c; end: 102d88c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8873c(long param_1,ulong param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  puVar11 = auStack_80;
  func_0x000107c61428(param_1 + 0x10,puVar11,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar16 = (undefined1 *)((ulong *)(param_1 + _DAT_112f155b8))[1];
    if ((puVar16 == (undefined1 *)0x0) ||
       ((param_2 != *(ulong *)(param_1 + _DAT_112f155b8) || puVar16 != param_3 &&
        (uVar20 = param_2, puVar11 = param_3, func_0x000107c605b8(), (uVar20 & 1) == 0)))) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar16 = (undefined1 *)((ulong)param_4 & 0xffffffffffffff8);
      if ((ulong)param_4 >> 0x3e == 0) {
        puVar23 = *(undefined1 **)(puVar16 + 0x10);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar23 = puVar16;
        if ((undefined1 *)0x7fffffffffffffff < param_4) {
          puVar23 = param_4;
        }
        func_0x000107c60480();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
      if (puVar23 != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)0x0;
        do {
          while( true ) {
            if (((ulong)param_4 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(puVar16 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x102d88914);
                (*pcVar5)();
              }
              puVar6 = *(undefined1 **)(param_4 + (long)puVar8 * 8 + 0x20);
              func_0x000107c61174();
              puVar15 = puVar11;
            }
            else {
              puVar6 = puVar8;
              puVar15 = param_4;
              FUN_102d88ee0();
            }
            puVar1 = puVar8 + 1;
            if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102d88910);
              (*pcVar5)();
            }
            puVar7 = puVar6;
            func_0x000107c4c99c();
            func_0x000107c61180();
            if (puVar7 != (undefined1 *)0x0) break;
            func_0x000107c61170(puVar6);
            puVar11 = puVar15;
            puVar8 = puVar8 + 1;
            if (puVar1 == puVar23) goto LAB_102d88930;
          }
          puVar8 = puVar7;
          func_0x000107c5faec();
          puVar11 = puVar15;
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          puVar9 = puVar10;
          func_0x000107c61558();
          if (((ulong)puVar9 & 1) == 0) {
            puVar11 = (undefined1 *)(*(long *)(puVar10 + 0x10) + 1);
            puVar9 = (undefined *)0x0;
            func_0x0001000d182c(0,puVar11,1,puVar10);
            puVar10 = puVar9;
          }
          uVar20 = *(ulong *)(puVar10 + 0x10);
          puVar6 = (undefined1 *)(uVar20 + 1);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar20) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            puVar11 = puVar6;
            func_0x0001000d182c(puVar10,puVar6,1);
          }
          *(undefined1 **)(puVar10 + 0x10) = puVar6;
          *(undefined1 **)(puVar10 + uVar20 * 0x10 + 0x20) = puVar8;
          *(undefined1 **)(puVar10 + uVar20 * 0x10 + 0x28) = puVar15;
          puVar8 = puVar1;
        } while (puVar1 != puVar23);
      }
LAB_102d88930:
      lVar4 = _DAT_112f155c8;
      uVar20 = *(ulong *)(puVar10 + 0x10);
      func_0x000107c61428(param_1 + _DAT_112f155c8,auStack_a0,0,0);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar20 != 0) {
        uVar21 = 0;
        do {
          if (*(ulong *)(puVar10 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102d88c30);
            (*pcVar5)();
          }
          uVar19 = *(ulong *)(puVar10 + uVar21 * 0x10 + 0x20);
          uVar24 = *(ulong *)((long)(puVar10 + uVar21 * 0x10 + 0x20) + 8);
          uVar21 = uVar21 + 1;
          lVar18 = *(long *)(param_1 + lVar4);
          if (*(long *)(lVar18 + 0x10) == 0) {
            func_0x000107c61434(uVar24);
          }
          else {
            func_0x000107c6068c(auStack_e8,*(undefined8 *)(lVar18 + 0x28));
            func_0x000107c61434(uVar24);
            func_0x000107c61434(lVar18);
            puVar11 = auStack_e8;
            func_0x000107c5fb58(puVar11,uVar19,uVar24);
            func_0x000107c606a8();
            uVar17 = -1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
            uVar22 = (ulong)puVar11 & (uVar17 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar18 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0) {
              do {
                puVar2 = (ulong *)(*(long *)(lVar18 + 0x30) + uVar22 * 0x10);
                uVar12 = *puVar2;
                uVar3 = puVar2[1];
                if ((uVar12 == uVar19 && uVar3 == uVar24) ||
                   (func_0x000107c605b8(uVar12,uVar3,uVar19,uVar24,0), (uVar12 & 1) != 0)) {
                  func_0x000107c6142c(uVar24);
                  func_0x000107c6142c(lVar18);
                  goto joined_r0x000102d8898c;
                }
                uVar22 = uVar22 + 1 & ~uVar17;
              } while ((*(ulong *)(lVar18 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0);
            }
            func_0x000107c6142c(lVar18);
          }
          puVar13 = puVar9;
          func_0x000107c61558();
          puStack_88 = puVar9;
          if (((ulong)puVar13 & 1) == 0) {
            func_0x000100403514(0,*(long *)(puVar9 + 0x10) + 1,1);
          }
          uVar17 = *(ulong *)(puStack_88 + 0x10);
          if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar17) {
            func_0x000100403514(1 < *(ulong *)(puStack_88 + 0x18),uVar17 + 1,1);
          }
          *(ulong *)(puStack_88 + 0x10) = uVar17 + 1;
          *(ulong *)(puStack_88 + uVar17 * 0x10 + 0x20) = uVar19;
          *(ulong *)(puStack_88 + uVar17 * 0x10 + 0x28) = uVar24;
          puVar9 = puStack_88;
joined_r0x000102d8898c:
        } while (uVar21 != uVar20);
      }
      if (*(long *)(puVar9 + 0x10) == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(puVar10);
      }
      else {
        func_0x000107c61428(param_1 + lVar4,auStack_e8,0x21,0);
        func_0x00010040448c(puVar10);
        func_0x000107c614a8(auStack_e8);
        func_0x000107c6142c(puVar10);
        uVar20 = *(ulong *)(param_1 + _DAT_112f155d8);
        if (uVar20 >> 0x3e == 0) {
          uVar21 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar21 = uVar20 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar20) {
            uVar21 = uVar20;
          }
          func_0x000107c60480();
        }
        if (uVar21 != 0) {
          uVar19 = 0;
          do {
            if ((uVar20 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x102d88c34);
                (*pcVar5)();
              }
              uVar24 = *(ulong *)(uVar20 + uVar19 * 8 + 0x20);
              func_0x000107c615f0(uVar24);
            }
            else {
              uVar24 = uVar19;
              FUN_102d88d3c(uVar19,uVar20);
            }
            if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102d88c18);
              (*pcVar5)();
            }
            uVar22 = uVar19 + 1;
            uVar17 = param_2;
            func_0x000107c5fadc(param_2,param_3);
            uVar14 = param_5;
            func_0x000107c5fadc(param_5,param_6);
            puVar10 = puVar9;
            func_0x000107c5fc48(puVar9,PTR___sSSN_11034da80);
            func_0x000107c4bccc(uVar24);
            func_0x000107c615e8(uVar24);
            func_0x000107c61170(uVar17);
            func_0x000107c61170(uVar14);
            func_0x000107c61170(puVar10);
            uVar19 = uVar19 + 1;
          } while (uVar22 != uVar21);
        }
        func_0x000107c61170(param_1);
      }
      func_0x000107c61574(puVar9);
    }
  }
  return;
}



/* Entry: 102d88c7c; end: 102d88d3b; -[_TtC45ChatMessageDisplayStateLoggingServiceProvider29ChatMessageDisplayStateLogger logMessageMediaDisplayedWithConversationId:analyticsMessageId:contentIdentifiers:] */

/* WARNING: Possible PIC construction at 0x000102d88d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d88d1c) */

void FUN_102d88c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  uVar1 = 0;
  FUN_102d8a678(0,0x112f15618,&PTR_PTR_1126c6bc0);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c61174(param_1);
  FUN_102d88624(param_3,param_2,param_4,uVar2,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d88d3c; end: 102d88edf;  */

ulong FUN_102d88d3c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d88e14);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d88e18);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000022,0x800000010f10ce80);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d88ee0);
  (*pcVar2)();
}



/* Entry: 102d88ee0; end: 102d890a3;  */

ulong FUN_102d88ee0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d88fc4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d88fc8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c6bc0;
    func_0x000107c61168(PTR_PTR_1126c6bc0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c6bc0;
    func_0x000107c61168(PTR_PTR_1126c6bc0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102d8a678(0,0x112f15618,&PTR_PTR_1126c6bc0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d890a4);
  (*pcVar2)();
}



/* Entry: 102d890a4; end: 102d8913b;  */

code * FUN_102d890a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x553b);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_102d89ba4();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_102d89938(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_102d8913c;
}



/* Entry: 102d8913c; end: 102d89177;  */

void FUN_102d8913c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102d89178; end: 102d89263;  */

undefined8 FUN_102d89178(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_102d89248;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_102d89264(param_2,uVar1,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar2 = 1;
LAB_102d89248:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 102d89264; end: 102d89393;  */

void FUN_102d89264(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  uVar4 = (ulong)(uint)param_1;
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_102d895a4();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_102d89394(uVar3 + 1);
    }
    else {
      FUN_102d896e4();
    }
    lVar5 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((uint)*(byte *)(*(long *)(lVar5 + 0x30) + param_2) == (uint)param_1) {
          func_0x000107c60620(&UNK_1105ce8c8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d89394);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar5 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(byte *)(*(long *)(lVar2 + 0x30) + param_2) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d89384);
  (*pcVar1)();
}



/* Entry: 102d89394; end: 102d895a3;  */

void FUN_102d89394(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112f15620;
  func_0x0001000285a8(0x112f15620,&UNK_10db4b080);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_102d8956c:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d895a0);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) goto LAB_102d8956c;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar15 << 6));
    uVar14 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar14 >> 6;
    uVar7 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar14 = uVar9 + 1;
        if ((uVar14 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d895a4);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar14 != uVar7) {
          uVar9 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar7 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 102d895a4; end: 102d896e3;  */

void FUN_102d895a4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112f15620,&UNK_10db4b080);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d896e4);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_102d896c4;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_102d896c4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102d896e4; end: 102d89937;  */

void FUN_102d896e4(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112f15620;
  func_0x0001000285a8(0x112f15620,&UNK_10db4b080);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_102d89904:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d89934);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_102d89904;
        }
        uVar12 = puVar14[lVar16];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar16 << 6));
    uVar15 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar15 = uVar15 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar15 >> 6;
    uVar7 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar15 = uVar9 + 1;
        if ((uVar15 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d89938);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar15 != uVar7) {
          uVar9 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar7 | bVar3);
        uVar15 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 102d89938; end: 102d89a73;  */

undefined1  [16] FUN_102d89938(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0x3a7c);
  }
  *param_1 = (long)puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  func_0x000100029284();
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d89a30);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    FUN_102d89ee8(lVar1,param_4 & 1);
    func_0x000100029284();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d89a10);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102d89d78();
    puVar3[4] = lVar4;
    goto joined_r0x000102d89a44;
  }
  puVar3[4] = lVar4;
joined_r0x000102d89a44:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_102d89a74;
  return auVar10;
}



/* Entry: 102d89a74; end: 102d89ba3;  */

void FUN_102d89a74(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  lVar9 = *param_1;
  bVar3 = *(byte *)(param_1 + 5);
  if ((param_2 & 1) == 0) {
    if (lVar9 == 0) goto LAB_102d89b04;
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) goto LAB_102d89af8;
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d89ba4);
      (*pcVar4)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_102d89b04:
      if ((bVar3 & 1) != 0) {
        lVar6 = param_1[4];
        lVar7 = *(long *)param_1[3];
        func_0x000100bcb1dc(*(long *)(lVar7 + 0x30) + lVar6 * 0x10);
        FUN_102d89bc8(lVar6,lVar7);
      }
      goto LAB_102d89b78;
    }
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) {
LAB_102d89af8:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
      goto LAB_102d89b78;
    }
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d89ae8);
      (*pcVar4)();
    }
  }
  lVar5 = param_1[2];
  *(long *)(lVar6 + 0x10) = lVar7 + 1;
  func_0x000107c61434(lVar5);
LAB_102d89b78:
  lVar6 = *param_1;
  func_0x000107c61434(lVar9);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 102d89ba4; end: 102d89bc7;  */

undefined1  [16] FUN_102d89ba4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x102d89bbc;
  return auVar1;
}



/* Entry: 102d89bc8; end: 102d89d77;  */

void FUN_102d89bc8(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_102d89cbc:
          if ((long)param_1 < (long)uVar8) goto LAB_102d89c44;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_102d89cbc;
LAB_102d89c44:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102d89d78);
  (*pcVar5)();
}



/* Entry: 102d89d78; end: 102d89ee7;  */

void FUN_102d89d78(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f15628,&UNK_10db4b088);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102d89e54;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_102d89e54:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102d89ee8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102d89ec0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102d89ec0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102d89ee8; end: 102d8a183;  */

void FUN_102d89ee8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f15628;
  func_0x0001000285a8(0x112f15628,&UNK_10db4b088);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102d8a150:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d8a180);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102d8a150;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d8a184);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102d8a184; end: 102d8a3cf;  */

void FUN_102d8a184(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d8a25c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102d89ee8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d8a224);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102d89d78();
    lVar6 = *unaff_x20;
    goto joined_r0x000102d8a270;
  }
  lVar6 = *unaff_x20;
joined_r0x000102d8a270:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d8a2d4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102d8a3d0; end: 102d8a3ff;  */

void FUN_102d8a3d0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar7 = *param_1;
  puVar2 = &UNK_1105ce8e8;
  func_0x000107c613fc(&UNK_1105ce8e8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102d8a6b8;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102d8a6c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_1105ce900;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1105ce938;
  func_0x000107c613fc(&UNK_1105ce938,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x102d8a6fc;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  pcStack_70 = (code *)0x102d8a70c;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_1105ce950;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c5b4(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x74,0x25,0x2c,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d87580);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x74,0x27,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d87584);
  (*pcVar1)();
}



/* Entry: 102d8a400; end: 102d8a42b;  */

void FUN_102d8a400(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d8a42c; end: 102d8a44b;  */

/* WARNING: Possible PIC construction at 0x000102d885fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d88600) */

void FUN_102d8a42c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c4bcc4(uVar4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102d8a44c; end: 102d8a487;  */

void FUN_102d8a44c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d8a488; end: 102d8a4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8a488(void)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auStack_b8 [32];
  undefined8 auStack_98 [3];
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(ulong *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar7 = *(long **)(unaff_x20 + 0x28);
  uVar8 = *(ulong *)(unaff_x20 + 0x30);
  pcVar3 = *(code **)(unaff_x20 + 0x40);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  FUN_102d87784(uVar11,uVar13,plVar7,uVar8,uVar1);
  lVar2 = _DAT_112f155c0;
  if ((uVar11 & 1) == 0) goto LAB_102d87c14;
  func_0x000107c61428(lVar4 + _DAT_112f155c0,auStack_b8,0x20,0);
  lVar9 = *(long *)(lVar4 + lVar2);
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_102d87a9c:
    func_0x000107c614a8(auStack_b8);
    func_0x000107c61428(lVar4 + lVar2,auStack_b8,0x21,0);
    func_0x000107c61434(uVar8);
    uVar13 = *(undefined8 *)(lVar4 + lVar2);
    func_0x000107c61558(uVar13);
    auStack_98[0] = *(undefined8 *)(lVar4 + lVar2);
    *(undefined8 *)(lVar4 + lVar2) = 0x8000000000000000;
    FUN_102d8a184(PTR___swiftEmptySetSingleton_11034f1d8,plVar7,uVar8,uVar13);
    func_0x000107c6142c(uVar8);
    *(undefined8 *)(lVar4 + lVar2) = auStack_98[0];
    func_0x000107c614a8(auStack_b8);
  }
  else {
    func_0x000107c61434(lVar9);
    plVar5 = plVar7;
    uVar11 = uVar8;
    func_0x000100029284();
    if ((uVar11 & 1) == 0) {
      func_0x000107c6142c(lVar9);
      goto LAB_102d87a9c;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + (long)plVar5 * 8);
    func_0x000107c61434(uVar13);
    func_0x000107c614a8(auStack_b8);
    func_0x000107c6142c(uVar13);
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c61428(lVar4 + lVar2,auStack_98,0x21,0);
  pcVar6 = (code *)auStack_b8;
  FUN_102d87c3c(pcVar6,plVar7,uVar8);
  if (*plVar7 != 0) {
    FUN_102d89178(&uStack_79,uVar1);
  }
  (*pcVar6)(auStack_b8,0);
  func_0x000107c614a8(auStack_98);
  uVar11 = *(ulong *)(lVar4 + _DAT_112f155d8);
  if (uVar11 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar8 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar12 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102d87bfc);
          (*pcVar3)();
        }
        uVar14 = *(ulong *)(uVar11 + uVar12 * 8 + 0x20);
        func_0x000107c615f0(uVar14);
      }
      else {
        uVar14 = uVar12;
        FUN_102d88d3c(uVar12,uVar11);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d87bf8);
        (*pcVar3)();
      }
      uVar10 = uVar12 + 1;
      (*pcVar3)(uVar14);
      func_0x000107c615e8(uVar14);
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar8);
  }
LAB_102d87c14:
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102d8a4b0; end: 102d8a4cf;  */

void FUN_102d8a4b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5c90);
  return;
}



/* Entry: 102d8a4d0; end: 102d8a637;  */

int FUN_102d8a4d0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d8a54c;
        goto LAB_102d8a530;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d8a530:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102d8a54c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d8a638; end: 102d8a677;  */

void FUN_102d8a638(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4b058;
  func_0x000107c61520(&UNK_10db4b058,&UNK_1105ce8c8);
  puRam0000000112f15610 = puVar1;
  return;
}



/* Entry: 102d8a678; end: 102d8a6b7;  */

void FUN_102d8a678(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102d8a6b8; end: 102d8a6bf;  */

void FUN_102d8a6b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102d875f4(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102d8a6c0; end: 102d8a6df;  */

void FUN_102d8a6c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102d8a6e0; end: 102d8a71b;  */

void FUN_102d8a6e0(long param_1,long param_2)

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



/* Entry: 102d8a71c; end: 102d8a7b7;  */

void FUN_102d8a71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 102d8a7b8; end: 102d8a863;  */

code * FUN_102d8a7b8(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105ce9c0;
  func_0x000107c613fc(&UNK_1105ce9c0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112f15630,&UNK_10db4b090);
  func_0x000107c613fc();
  pcVar2 = FUN_102d8a8d8;
  func_0x0001000bdd8c(FUN_102d8a8d8,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  uVar4 = 0;
  func_0x000100323428(0);
  func_0x000107c610f8();
  func_0x000103a9860c(pcVar3,uVar4);
  func_0x000107c61574(pcVar2);
  return pcVar3;
}



/* Entry: 102d8a864; end: 102d8a8d7;  */

void FUN_102d8a864(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_102d8a8e0();
    func_0x000107c61574(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102d8a8d8; end: 102d8a8df;  */

void FUN_102d8a8d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_102d8a8e0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102d8a8e0; end: 102d8ab07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d8a8e0(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11305e778);
  func_0x000107c6157c(uVar9);
  func_0x0001000d224c(auStack_78);
  func_0x000107c61574(uVar9);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  uVar9 = 3;
  func_0x00010043c5c0(3,0,0,uStack_60,uStack_58,puVar4);
  puVar4 = auStack_78;
  func_0x0001000834e4();
  FUN_102d8acc8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f854();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_102d8b01c();
  lVar10 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112f15730) = uVar5;
  plVar7 = &lStack_88;
  lStack_88 = lVar10;
  lStack_80 = lVar6;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *(long **)(puVar4 + 0x20) = plVar7;
  lVar6 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c4d858();
  func_0x000107c61180();
  lVar10 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar8 = puVar4;
  if (lVar10 != 0) {
    uVar11 = (ulong)puVar4 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar11 + 0x10);
    uVar2 = *(ulong *)(uVar11 + 0x18);
    func_0x000107c615f0(lVar10);
    if (uVar2 >> 1 <= uVar1) {
      puVar8 = (undefined1 *)(ulong)(1 < uVar2);
      FUN_102d8ad5c(puVar8,uVar1 + 1,1,puVar4);
      uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
    *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar10;
    func_0x000107c615e8(lVar10);
  }
  lVar10 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61434(puVar8);
  func_0x000107c40670();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x0001000285a8(0x112ea3498,&UNK_10dab5900);
    lVar6 = lVar10;
    func_0x0001000bda74(lVar10);
    func_0x000107c61170(lVar10);
    uVar5 = 0;
    FUN_102d8a4b0(0);
    func_0x000107c610f8();
    puVar4 = puVar8;
    FUN_102d87170(puVar8,lVar6,uVar9,uVar5);
    func_0x000107c6142c(puVar8);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102d8ab08);
  (*pcVar3)();
}



/* Entry: 102d8ab08; end: 102d8ab33;  */

/* WARNING: Possible PIC construction at 0x000102d8ab14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d8ab24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8ab18) */
/* WARNING: Removing unreachable block (ram,0x000102d8ab28) */

void FUN_102d8ab08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d8ab34; end: 102d8ab8f;  */

void FUN_102d8ab34(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d8ab90; end: 102d8ac0f;  */

void FUN_102d8ab90(undefined8 param_1)

{
  if (lRam0000000112f15660 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72edd4);
  return;
}



/* Entry: 102d8ac10; end: 102d8acc7;  */

void FUN_102d8ac10(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105ce9c0;
  func_0x000107c613fc(&UNK_1105ce9c0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112f15630,&UNK_10db4b090);
  func_0x000107c613fc();
  pcVar2 = FUN_102d8afa8;
  func_0x0001000bdd8c(FUN_102d8afa8,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  uVar4 = 0;
  func_0x000100323428(0);
  func_0x000107c610f8();
  func_0x000103a9860c(pcVar3,uVar4);
  func_0x000107c61574(pcVar2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 102d8acc8; end: 102d8acdb;  */

void FUN_102d8acc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15728 == (undefined *)0x0 || ((ulong)puRam0000000112f15728 & 1) != 0) {
    puVar1 = &UNK_10e95b7da;
    func_0x000107c61518(&UNK_10e95b7da,0x31,0,0);
    puRam0000000112f15728 = puVar1;
  }
  return;
}


