/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b49a14; end: 103b49a3b; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportGrayThumbnail] */

void FUN_103b49a14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b49960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b49a3c; end: 103b49bcf;  */

/* WARNING: Possible PIC construction at 0x000103b49b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b49b8c) */
/* WARNING: Removing unreachable block (ram,0x000103b49b9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b49a3c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  lVar5 = *(long *)(unaff_x20 + _DAT_112fee540);
  if (lVar5 != 0) {
    puStack_50 = (undefined *)0x0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x35);
    func_0x000107c5fb78(0xd00000000000001e,0x800000010f1a1040);
    bVar3 = (param_2 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar3) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar3) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fb78(0xd000000000000013,0x800000010f1a1060);
    func_0x000107c5fddc(param_1,&puStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_48;
    puVar4 = puStack_50;
    func_0x000107c5fadc(puStack_50,uStack_48);
    func_0x000107c6142c(uVar1);
    func_0x0001044db3fc(0);
    func_0x0001044dac34();
    func_0x000107c5027c(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 103b49bd0; end: 103b49c0f; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportBlackThumbnailWithExpirationTime:isPlaceholder:] */

void FUN_103b49bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_103b49a3c(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103b49c10; end: 103b49e2f;  */

/* WARNING: Possible PIC construction at 0x000103b49c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b49de8) */
/* WARNING: Removing unreachable block (ram,0x000103b49d2c) */
/* WARNING: Removing unreachable block (ram,0x000103b49d44) */
/* WARNING: Removing unreachable block (ram,0x000103b49d04) */
/* WARNING: Removing unreachable block (ram,0x000103b49e2c) */
/* WARNING: Removing unreachable block (ram,0x000103b49d08) */
/* WARNING: Removing unreachable block (ram,0x000103b49ccc) */
/* WARNING: Removing unreachable block (ram,0x000103b49e28) */
/* WARNING: Removing unreachable block (ram,0x000103b49ce8) */
/* WARNING: Removing unreachable block (ram,0x000103b49c8c) */
/* WARNING: Removing unreachable block (ram,0x000103b49e24) */
/* WARNING: Removing unreachable block (ram,0x000103b49ca0) */
/* WARNING: Removing unreachable block (ram,0x000103b49df8) */
/* WARNING: Removing unreachable block (ram,0x000103b49dfc) */

void FUN_103b49c10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  puVar1 = PTR_PTR_1126b8460;
  func_0x000107c610f8(PTR_PTR_1126b8460);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126e1920;
  func_0x000107c610f8(PTR_PTR_1126e1920);
  func_0x000107c453e4();
  func_0x000107c541cc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103b49e30; end: 103b49e3b; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportStoriesSnapHasDuplicateIdWithSnapId:] */

void FUN_103b49e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103b49c10(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b49e3c; end: 103b49f43;  */

void FUN_103b49e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b49f44; end: 103b49f6b; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportSuperfeedViewControllerFailToPresent] */

void FUN_103b49f44(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103b49e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b49f6c; end: 103b4a0a3;  */

/* WARNING: Possible PIC construction at 0x000103b4a07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4a080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b49f6c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  puVar3 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  lVar4 = *(long *)(unaff_x20 + _DAT_112fee540);
  if (lVar4 != 0) {
    func_0x000107c602fc(0x1b);
    func_0x000107c6142c(0xe000000000000000);
    lVar1 = -0x7ffffffef0e5eef0;
    uVar2 = 0xd000000000000010;
    if (param_2 != 0) {
      lVar1 = param_2;
      uVar2 = param_1;
    }
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
    puVar3 = (undefined *)0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f1a10f0);
    func_0x000107c6142c(0x800000010f1a10f0);
    func_0x0001044db3fc(0);
    func_0x0001044dac34();
    func_0x000107c5027c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103b4a0a4; end: 103b4a0af; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportFailureToEncodeStoryMetadataWithDescription:] */

void FUN_103b4a0a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_103b49f6c(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b4a0b0; end: 103b4a1e7;  */

/* WARNING: Possible PIC construction at 0x000103b4a1c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4a1c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a0b0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  puVar3 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  lVar4 = *(long *)(unaff_x20 + _DAT_112fee540);
  if (lVar4 != 0) {
    func_0x000107c602fc(0x1b);
    func_0x000107c6142c(0xe000000000000000);
    lVar1 = -0x7ffffffef0e5eef0;
    uVar2 = 0xd000000000000010;
    if (param_2 != 0) {
      lVar1 = param_2;
      uVar2 = param_1;
    }
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
    puVar3 = (undefined *)0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f1a1130);
    func_0x000107c6142c(0x800000010f1a1130);
    func_0x0001044db3fc(0);
    func_0x0001044dac34();
    func_0x000107c5027c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103b4a1e8; end: 103b4a1f3; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportFailureToDecodeStoryMetadataWithDescription:] */

void FUN_103b4a1e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_103b4a0b0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b4a1f4; end: 103b4a32b;  */

/* WARNING: Possible PIC construction at 0x000103b4a304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4a308) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a1f4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  puVar3 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  lVar4 = *(long *)(unaff_x20 + _DAT_112fee540);
  if (lVar4 != 0) {
    func_0x000107c602fc(0x1b);
    func_0x000107c6142c(0xe000000000000000);
    lVar1 = -0x7ffffffef0e5eef0;
    uVar2 = 0xd000000000000010;
    if (param_2 != 0) {
      lVar1 = param_2;
      uVar2 = param_1;
    }
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
    puVar3 = (undefined *)0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f1a1150);
    func_0x000107c6142c(0x800000010f1a1150);
    func_0x0001044db3fc(0);
    func_0x0001044dac34();
    func_0x000107c5027c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103b4a32c; end: 103b4a337; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportInvalidNetworkRequestWithDescription:] */

void FUN_103b4a32c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_103b4a1f4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b4a338; end: 103b4a3a7;  */

void FUN_103b4a338(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b4a3a8; end: 103b4a3d7;  */

void FUN_103b4a3a8(void)

{
  func_0x00010044b5bc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b4a3d8; end: 103b4a3e7; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fee540));
  return;
}



/* Entry: 103b4a3e8; end: 103b4a433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a3e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee570) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4a434; end: 103b4a493; -[_TtC31SCSpotlightDisplayOrderServices31SCSpotlightDisplayOrderServices init] */

void FUN_103b4a434(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightDisplayOrderServices.SCSpotlightDisplayOrderServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4a460);
  (*pcVar1)();
}



/* Entry: 103b4a494; end: 103b4a4a3; -[_TtC31SCSpotlightDisplayOrderServices31SCSpotlightDisplayOrderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee570));
  return;
}



/* Entry: 103b4a4a4; end: 103b4a4c3; -[_TtC35SCDiscoverFeedActionHandlerServices35SCDiscoverFeedActionHandlerServices discoverFeedActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a4a4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee5a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4a4c4; end: 103b4a4d3; -[_TtC35SCDiscoverFeedActionHandlerServices35SCDiscoverFeedActionHandlerServices actionHandlersFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee5a8));
  return;
}



/* Entry: 103b4a4d4; end: 103b4a537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a4d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee5a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fee5a8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4a538; end: 103b4a5af; -[_TtC35SCDiscoverFeedActionHandlerServices35SCDiscoverFeedActionHandlerServices initWithDiscoverFeedActionHandler:actionHandlersFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fee5a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fee5a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103b4a5b0; end: 103b4a60f; -[_TtC35SCDiscoverFeedActionHandlerServices35SCDiscoverFeedActionHandlerServices init] */

void FUN_103b4a5b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDiscoverFeedActionHandlerServices.SCDiscoverFeedActionHandlerServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4a5dc);
  (*pcVar1)();
}



/* Entry: 103b4a610; end: 103b4a647; -[_TtC35SCDiscoverFeedActionHandlerServices35SCDiscoverFeedActionHandlerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a610(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee5a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee5a8));
  return;
}



/* Entry: 103b4a648; end: 103b4a657; -[_TtC36MapPlaceCategoryIconResolverServices36MapPlaceCategoryIconResolverServices placeCategoryIconResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee5d8));
  return;
}



/* Entry: 103b4a658; end: 103b4a6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a658(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee5d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4a6f0; end: 103b4a747; -[_TtC36MapPlaceCategoryIconResolverServices36MapPlaceCategoryIconResolverServices initWithPlaceCategoryIconResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fee5d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b4a748; end: 103b4a7a7; -[_TtC36MapPlaceCategoryIconResolverServices36MapPlaceCategoryIconResolverServices init] */

void FUN_103b4a748(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapPlaceCategoryIconResolverServices.MapPlaceCategoryIconResolverServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4a774);
  (*pcVar1)();
}



/* Entry: 103b4a7a8; end: 103b4a7b7; -[_TtC36MapPlaceCategoryIconResolverServices36MapPlaceCategoryIconResolverServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a7a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee5d8));
  return;
}



/* Entry: 103b4a7b8; end: 103b4a7c7; -[SCContextPostStoryDataServices postStoryDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee608));
  return;
}



/* Entry: 103b4a7c8; end: 103b4a813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a7c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee608) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4a814; end: 103b4a873; -[SCContextPostStoryDataServices init] */

void FUN_103b4a814(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextPostStoryDataServices.SCContextPostStoryDataServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4a840);
  (*pcVar1)();
}



/* Entry: 103b4a874; end: 103b4a883; -[SCContextPostStoryDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4a874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee608));
  return;
}



/* Entry: 103b4a884; end: 103b4a8ab;  */

void FUN_103b4a884(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam000000011358d708 = puVar1;
  return;
}



/* Entry: 103b4a8ac; end: 103b4a8d3;  */

void FUN_103b4a8ac(void)

{
  puRam000000011358d718 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 103b4a8d4; end: 103b4a90f; -[SCStoriesPrivateStoryLockIcon init] */

void FUN_103b4a8d4(undefined8 param_1)

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



/* Entry: 103b4a910; end: 103b4acab;  */

undefined * FUN_103b4a910(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 auStack_78 [24];
  
  uVar5 = param_1;
  func_0x00010099be78();
  if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103b4ac58);
    (*pcVar4)();
  }
  if (lRam000000011358d700 != -1) {
    func_0x000107c61568(0x11358d700,FUN_103b4a884);
  }
  uVar1 = uRam000000011358d708;
  uVar5 = param_1 & 1 | uVar5 << 1;
  func_0x000107c4b940(uRam000000011358d708);
  if (lRam000000011358d710 != -1) {
    func_0x000107c61568(0x11358d710,FUN_103b4a8ac);
  }
  puVar15 = auStack_78;
  func_0x000107c61428(0x11358d718,puVar15,0x20,0);
  lVar2 = lRam000000011358d718;
  if ((*(long *)(lRam000000011358d718 + 0x10) != 0) &&
     (uVar6 = uVar5, func_0x00010035a314(), ((ulong)puVar15 & 1) != 0)) {
    puVar16 = *(undefined **)(*(long *)(lVar2 + 0x38) + uVar6 * 8);
    func_0x000107c614a8(auStack_78);
    func_0x000107c61174(puVar16);
    goto LAB_103b4ac28;
  }
  func_0x000107c614a8(auStack_78);
  puVar10 = (undefined *)0x88;
  if ((param_1 & 1) == 0) {
    puVar10 = (undefined *)0xd7;
  }
  puVar7 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x000107c61168(PTR__OBJC_CLASS___UITraitCollection_1126b6d80);
  puVar8 = puVar7;
  func_0x000107c5ceb4();
  func_0x000107c61180();
  func_0x000107c5ceb4(puVar7);
  func_0x000107c61180();
  puVar9 = puVar10;
  FUN_103b4acac(puVar10,puVar8);
  FUN_103b4acac(puVar10,puVar7);
  if (puVar9 == (undefined *)0x0) {
    puVar9 = puVar10;
    func_0x000107c61174(puVar10);
    puVar16 = puVar10;
    puVar10 = puVar9;
    puVar13 = (undefined *)0x0;
LAB_103b4aba4:
    func_0x000107c61428(0x11358d718,auStack_78,0x21,0);
    func_0x000107c61174(puVar13);
    func_0x000107c61174(puVar9);
    lVar14 = lRam000000011358d718;
    func_0x000107c61558(lRam000000011358d718);
    lVar2 = lRam000000011358d718;
    lRam000000011358d718 = 0x8000000000000000;
    func_0x000103b4af74(puVar16,uVar5,lVar14);
    lRam000000011358d718 = lVar2;
    func_0x000107c614a8(auStack_78);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar10);
  }
  else {
    puVar16 = puVar9;
    puVar13 = puVar9;
    if (puVar10 == (undefined *)0x0) goto LAB_103b4aba4;
    puVar13 = PTR__OBJC_CLASS___UIImageAsset_1126ad918;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImageAsset_1126ad918);
    func_0x000107c453e4();
    func_0x000107c4fc2c();
    func_0x000107c4fc2c(puVar13);
    func_0x000107c61428(0x11358d718,auStack_78,0x21,0);
    puVar11 = puVar9;
    func_0x000107c61174(puVar9);
    func_0x000107c61174();
    lVar14 = lRam000000011358d718;
    func_0x000107c61558(lRam000000011358d718);
    lVar2 = lRam000000011358d718;
    lRam000000011358d718 = 0x8000000000000000;
    func_0x000103b4af74(puVar9,uVar5,lVar14);
    lRam000000011358d718 = lVar2;
    func_0x000107c614a8(auStack_78);
    if (lRam000000011358d720 != -1) {
      func_0x000107c61568(0x11358d720,0x103b4a8c0);
    }
    func_0x000107c61428(0x11358d728,auStack_78,0x21,0);
    func_0x000107c61174(puVar13);
    uVar12 = uRam000000011358d728;
    func_0x000107c61558(uRam000000011358d728);
    uVar3 = uRam000000011358d728;
    uRam000000011358d728 = 0x8000000000000000;
    func_0x000103b4ae44(puVar13,uVar5,uVar12);
    uRam000000011358d728 = uVar3;
    func_0x000107c614a8(auStack_78);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(puVar13);
LAB_103b4ac28:
  func_0x000107c5d278(uVar1);
  return puVar16;
}



/* Entry: 103b4acac; end: 103b4addf;  */

undefined8 FUN_103b4acac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar3 = &UNK_1106d7a58;
  func_0x000107c613fc(&UNK_1106d7a58,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 **)(puVar3 + 0x20) = &uStack_48;
  puVar4 = &UNK_1106d7a80;
  func_0x000107c613fc(&UNK_1106d7a80,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x103b4b844;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_58 = FUN_103b4baa4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_10006eb60;
  puStack_60 = &UNK_1106d7a98;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_50;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4e548(param_2);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar4;
  func_0x000107c61544(puVar4,"",99,0x36,0x21,1);
  func_0x000107c61574(puVar4);
  uVar1 = uStack_48;
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000107c61574(puVar3);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b4ade0);
  (*pcVar2)();
}



/* Entry: 103b4ade0; end: 103b4ae0b; +[SCStoriesPrivateStoryLockIcon ringLockIconWithUnviewedStories:] */

void FUN_103b4ade0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_103b4a910(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4ae0c; end: 103b4ae3f;  */

void FUN_103b4ae0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b4ae40; end: 103b4ae43; -[SCStoriesPrivateStoryLockIcon .cxx_destruct] */

void FUN_103b4ae40(void)

{
  return;
}



/* Entry: 103b4ae44; end: 103b4b0a3;  */

void FUN_103b4ae44(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4af08);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_103b4b37c(lVar5);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4aed4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_103b4b0c4();
    lVar5 = *unaff_x20;
    goto joined_r0x000103b4af1c;
  }
  lVar5 = *unaff_x20;
joined_r0x000103b4af1c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4af74);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 103b4b0a4; end: 103b4b0c3;  */

void FUN_103b4b0a4(void)

{
  func_0x000107c61168(&PTR_PTR_11292f8c0);
  return;
}



/* Entry: 103b4b0c4; end: 103b4b37b;  */

void FUN_103b4b0c4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112fee660,&UNK_10dc586d0);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_103b4b1a0;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_103b4b1a0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103b4b220);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_103b4b1f8;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_103b4b1f8:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103b4b37c; end: 103b4baa3;  */

void FUN_103b4b37c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112fee660;
  func_0x0001000285a8(0x112fee660,&UNK_10dc586d0);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_103b4b5ac:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103b4b5dc);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_103b4b5ac;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103b4b5e0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 103b4baa4; end: 103b4bac3;  */

void FUN_103b4baa4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103b4bac4; end: 103b4badf;  */

void FUN_103b4bac4(long param_1,long param_2)

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



/* Entry: 103b4bae0; end: 103b4bd53;  */

/* WARNING: Possible PIC construction at 0x000103b4bb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bbc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bbf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bc1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bc74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bcf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4bd1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4bcf8) */
/* WARNING: Removing unreachable block (ram,0x000103b4bcd0) */
/* WARNING: Removing unreachable block (ram,0x000103b4bca8) */
/* WARNING: Removing unreachable block (ram,0x000103b4bc78) */
/* WARNING: Removing unreachable block (ram,0x000103b4bc50) */
/* WARNING: Removing unreachable block (ram,0x000103b4bc20) */
/* WARNING: Removing unreachable block (ram,0x000103b4bbf8) */
/* WARNING: Removing unreachable block (ram,0x000103b4bbcc) */
/* WARNING: Removing unreachable block (ram,0x000103b4bba4) */
/* WARNING: Removing unreachable block (ram,0x000103b4bb74) */
/* WARNING: Removing unreachable block (ram,0x000103b4bb3c) */
/* WARNING: Removing unreachable block (ram,0x000103b4bd20) */

void FUN_103b4bae0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c609ec(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      0x400199999999999a,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 103b4bd54; end: 103b4bd73;  */

void FUN_103b4bd54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103b4bd74; end: 103b4bd7b;  */

void FUN_103b4bd74(long param_1,long param_2)

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



/* Entry: 103b4bd7c; end: 103b4bd8b; -[_TtC25SCComposerStoriesServices25SCComposerStoriesServices composerStoryPlayerVendor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4bd7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee670));
  return;
}



/* Entry: 103b4bd8c; end: 103b4bdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4bd8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee670) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4bdd8; end: 103b4be2f; -[_TtC25SCComposerStoriesServices25SCComposerStoriesServices initWithComposerStoryPlayerVendor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4bdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fee670) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b4be30; end: 103b4be8f; -[_TtC25SCComposerStoriesServices25SCComposerStoriesServices init] */

void FUN_103b4be30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerStoriesServices.SCComposerStoriesServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4be5c);
  (*pcVar1)();
}



/* Entry: 103b4be90; end: 103b4be9f; -[_TtC25SCComposerStoriesServices25SCComposerStoriesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4be90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee670));
  return;
}



/* Entry: 103b4bea0; end: 103b4bebf; -[_TtC19SCSnapInsightsScope19SCSnapInsightsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4bea0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee6a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4bec0; end: 103b4bf07; -[_TtC19SCSnapInsightsScope19SCSnapInsightsScope snapInsightsScopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4bec0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee6a8;
  func_0x000107c61428(param_1 + _DAT_112fee6a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4bf08; end: 103b4bf5f; -[_TtC19SCSnapInsightsScope19SCSnapInsightsScope setSnapInsightsScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4bf08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee6a8;
  func_0x000107c61428(param_1 + _DAT_112fee6a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4bf60; end: 103b4bf6f; -[_TtC19SCSnapInsightsScope19SCSnapInsightsScope snapInsightsConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4bf60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee6b0));
  return;
}



/* Entry: 103b4bf70; end: 103b4c12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b4bf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fee6a8;
  func_0x000107c61614(unaff_x20 + _DAT_112fee6a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fee6a0) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112fee6b0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 103b4c130; end: 103b4c1eb; -[_TtC19SCSnapInsightsScope19SCSnapInsightsScope initWithUiContainer:snapInsightsConfiguration:snapInsightsScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fee6a8;
  func_0x000107c61614(param_1 + _DAT_112fee6a8,0);
  *(undefined8 *)(param_1 + _DAT_112fee6a0) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  *(undefined8 *)(param_1 + _DAT_112fee6b0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 103b4c1ec; end: 103b4c24b; -[_TtC19SCSnapInsightsScope19SCSnapInsightsScope init] */

void FUN_103b4c1ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapInsightsScope.SCSnapInsightsScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4c218);
  (*pcVar1)();
}



/* Entry: 103b4c24c; end: 103b4c2b7; -[_TtC19SCSnapInsightsScope19SCSnapInsightsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c24c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee6a0));
  func_0x000103b4c294(param_1 + _DAT_112fee6a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee6b0));
  return;
}



/* Entry: 103b4c2b8; end: 103b4c2d7;  */

void FUN_103b4c2b8(void)

{
  func_0x000107c61168(&PTR_PTR_11292fa30);
  return;
}



/* Entry: 103b4c2d8; end: 103b4c2e3; -[SCSnapInsightsConfiguration profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c2d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fee6e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fee6e0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4c2e4; end: 103b4c2ef; -[SCSnapInsightsConfiguration snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c2e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fee6e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fee6e8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4c2f0; end: 103b4c347;  */

void FUN_103b4c2f0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b4c348; end: 103b4c3a3; -[SCSnapInsightsConfiguration snaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c348(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112fee6f0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010248db74(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b4c3a4; end: 103b4c4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee6e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee6e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fee6f0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4c4bc; end: 103b4c5a3; -[SCSnapInsightsConfiguration initWithProfileId:snapId:snaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c4bc(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  lVar5 = 0;
  if (param_5 != 0) {
    uVar4 = 0;
    func_0x00010248db74();
    func_0x000107c5fc54(param_5,uVar4);
    lVar5 = param_5;
  }
  plVar1 = (long *)(param_1 + _DAT_112fee6e0);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112fee6e8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_112fee6f0) = lVar5;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4c5a4; end: 103b4c603; -[SCSnapInsightsConfiguration init] */

void FUN_103b4c5a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapInsightsScope.SnapInsightsConfiguration",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4c5d0);
  (*pcVar1)();
}



/* Entry: 103b4c604; end: 103b4c653; -[SCSnapInsightsConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b4c624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4c628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fee6e0 + 8))
  ;
  return;
}



/* Entry: 103b4c654; end: 103b4c673;  */

void FUN_103b4c654(void)

{
  func_0x000107c61168(&PTR_PTR_11292fb00);
  return;
}



/* Entry: 103b4c674; end: 103b4c6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c674(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee728;
  func_0x000107c61428(unaff_x20 + _DAT_112fee728,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103b4c6b8; end: 103b4c803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c6b8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee728;
  func_0x000107c61428(unaff_x20 + _DAT_112fee728,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103b4c804; end: 103b4c8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b4c804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fee728;
  func_0x000107c61614(unaff_x20 + _DAT_112fee728,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fee720) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 103b4c8c0; end: 103b4c957; -[_TtC26SCOnboardingChecklistScope26SCOnboardingChecklistScope initWithUIContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4c8c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112fee728;
  func_0x000107c61614(param_1 + _DAT_112fee728,0);
  *(undefined8 *)(param_1 + _DAT_112fee720) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  func_0x000100360684();
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_58,puVar1);
  return;
}



/* Entry: 103b4c958; end: 103b4c987;  */

void FUN_103b4c958(void)

{
  func_0x000100360684();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b4c988; end: 103b4ca2f; -[_TtC26SCOnboardingChecklistScope26SCOnboardingChecklistScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b4c988(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee720));
  param_1 = param_1 + _DAT_112fee728;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b4ca30; end: 103b4cab7; -[_TtC26SCOnboardingChecklistScope41SCOnboardingChecklistScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4ca30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 103b4cab8; end: 103b4caeb;  */

void FUN_103b4cab8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b4caec; end: 103b4cafb;  */

undefined1  [16] FUN_103b4caec(void)

{
  return ZEXT816(0x1106d7cf8);
}



/* Entry: 103b4cafc; end: 103b4cb1f; -[_TtC26SCOnboardingChecklistScope41SCOnboardingChecklistScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4cafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fee738));
  return;
}



/* Entry: 103b4cb20; end: 103b4cbf7;  */

void FUN_103b4cb20(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b4cbf8; end: 103b4cc03;  */

void FUN_103b4cbf8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b4cc04; end: 103b4cc23; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4cc04(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee790));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4cc24; end: 103b4cc3b; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4cc24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee798;
  func_0x000107c61428(param_1 + _DAT_112fee798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4cc3c; end: 103b4cc47; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4cc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee798;
  func_0x000107c61428(param_1 + _DAT_112fee798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4cc48; end: 103b4cd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4cc48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee798;
  func_0x000107c61428(unaff_x20 + _DAT_112fee798,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103b4cd94; end: 103b4cd9f; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope operaPresentingBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4cd94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee7a0;
  func_0x000107c61428(param_1 + _DAT_112fee7a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4cda0; end: 103b4cde3;  */

void FUN_103b4cda0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4cde4; end: 103b4cdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4cde4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee7a0;
  func_0x000107c61428(unaff_x20 + _DAT_112fee7a0,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103b4cdf0; end: 103b4ce2f;  */

void FUN_103b4cdf0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103b4ce30; end: 103b4ce3b; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope setOperaPresentingBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4ce30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee7a0;
  func_0x000107c61428(param_1 + _DAT_112fee7a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4ce3c; end: 103b4cfdb;  */

void FUN_103b4ce3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4cfdc; end: 103b4cfeb; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b4cfdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fee7a8);
}



/* Entry: 103b4cfec; end: 103b4d103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b4cfec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_90;
  func_0x000107c610f8();
  lVar2 = _DAT_112fee798;
  func_0x000107c61614(unaff_x20 + _DAT_112fee798,0);
  lVar3 = _DAT_112fee7a0;
  func_0x000107c61614(unaff_x20 + _DAT_112fee7a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fee790) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112fee7a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(auStack_90,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  return puVar4;
}



/* Entry: 103b4d104; end: 103b4d153;  */

undefined8 FUN_103b4d104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103b4d298();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_2);
  return uVar1;
}



/* Entry: 103b4d154; end: 103b4d1e3; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope initWithUIContainer:delegate:operaPresentingBaseView:source:] */

undefined8
FUN_103b4d154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  uVar2 = param_3;
  FUN_103b4d298(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar1);
  return uVar2;
}


