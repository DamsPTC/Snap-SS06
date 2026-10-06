/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bf506c; end: 103bf51d3;  */

int FUN_103bf506c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bf50e8;
        goto LAB_103bf50cc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bf50cc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103bf50e8:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bf51d4; end: 103bf5213;  */

void FUN_103bf51d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff6438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc640c0;
  func_0x000107c61520(&UNK_10dc640c0,&UNK_1106e73b0);
  puRam0000000112ff6438 = puVar1;
  return;
}



/* Entry: 103bf5214; end: 103bf524b;  */

void FUN_103bf5214(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_103ee457c(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bf524c; end: 103bf525b; -[_TtC28SCPreviewUcoTrackingServices28SCPreviewUcoTrackingServices interactionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf524c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6448));
  return;
}



/* Entry: 103bf525c; end: 103bf52a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf525c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff6448) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf52a8; end: 103bf52ff; -[_TtC28SCPreviewUcoTrackingServices28SCPreviewUcoTrackingServices initWithInteractionTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf52a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff6448) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103bf5300; end: 103bf535f; -[_TtC28SCPreviewUcoTrackingServices28SCPreviewUcoTrackingServices init] */

void FUN_103bf5300(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPreviewUcoTrackingServices.SCPreviewUcoTrackingServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf532c);
  (*pcVar1)();
}



/* Entry: 103bf5360; end: 103bf536f; -[_TtC28SCPreviewUcoTrackingServices28SCPreviewUcoTrackingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf5360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff6448));
  return;
}



/* Entry: 103bf5370; end: 103bf538f;  */

void FUN_103bf5370(void)

{
  func_0x000107c61168(&PTR_PTR_1129444b8);
  return;
}



/* Entry: 103bf5390; end: 103bf539f; -[_TtC27AdPromotedStoryDataServices27AdPromotedStoryDataServices stateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf5390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6478));
  return;
}



/* Entry: 103bf53a0; end: 103bf53af; -[_TtC27AdPromotedStoryDataServices27AdPromotedStoryDataServices logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf53a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6480));
  return;
}



/* Entry: 103bf53b0; end: 103bf53bf; -[_TtC27AdPromotedStoryDataServices27AdPromotedStoryDataServices requestProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf53b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6488));
  return;
}



/* Entry: 103bf53c0; end: 103bf53cf; -[_TtC27AdPromotedStoryDataServices27AdPromotedStoryDataServices s2RInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf53c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6490));
  return;
}



/* Entry: 103bf53d0; end: 103bf545b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf53d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff6478) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6480) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6488) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6490) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf545c; end: 103bf54b7; -[_TtC27AdPromotedStoryDataServices27AdPromotedStoryDataServices init] */

void FUN_103bf545c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPromotedStoryDataServices.AdPromotedStoryDataServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf5488);
  (*pcVar1)();
}



/* Entry: 103bf54b8; end: 103bf550f; -[_TtC27AdPromotedStoryDataServices27AdPromotedStoryDataServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bf54d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bf54f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bf54d8) */
/* WARNING: Removing unreachable block (ram,0x000103bf54f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf54b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff6478));
  return;
}



/* Entry: 103bf5510; end: 103bf5ee7;  */

long FUN_103bf5510(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103bf5ee8; end: 103bf5efb; -[SCAdPromotedStoryAttachmentLoggingMetadata promotedStoryTileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103bf5ee8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112ff64c0);
}



/* Entry: 103bf5efc; end: 103bf5f0b; -[SCAdPromotedStoryAttachmentLoggingMetadata tileTapCoordinates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf5efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff64c8));
  return;
}



/* Entry: 103bf5f0c; end: 103bf5f1f; -[SCAdPromotedStoryAttachmentLoggingMetadata tileState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bf5f0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff64d0);
}



/* Entry: 103bf5f20; end: 103bf6033; -[SCAdPromotedStoryAttachmentLoggingMetadata initWithPromotedStoryTileSize:tileTapCoordinates:tileState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf5f20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_3;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_3 + _DAT_112ff64c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_3 + _DAT_112ff64c8) = param_5;
  *(undefined8 *)(param_3 + _DAT_112ff64d0) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_3;
  lStack_48 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 103bf6034; end: 103bf6037; -[SCAdPromotedStoryAttachmentLoggingMetadata copyWithZone:] */

void FUN_103bf6034(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bf6038; end: 103bf6053; -[SCAdPromotedStoryAttachmentLoggingMetadata description] */

void FUN_103bf6038(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf6054; end: 103bf60cf; -[SCAdPromotedStoryAttachmentLoggingMetadata init] */

void FUN_103bf6054(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AdPromotedStoryDataServices/AdPromotedStoryAttachmentLoggingMetadataWrapper.swift"
                      ,0x51,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf609c);
  (*pcVar1)();
}



/* Entry: 103bf60d0; end: 103bf60df; -[SCAdPromotedStoryAttachmentLoggingMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf60d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff64c8));
  return;
}



/* Entry: 103bf60e0; end: 103bf60ff;  */

void FUN_103bf60e0(void)

{
  func_0x000107c61168(&PTR_PTR_112944650);
  return;
}



/* Entry: 103bf6100; end: 103bf6103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff64c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff64c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff64d0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf6104; end: 103bf61af;  */

void FUN_103bf6104(void)

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



/* Entry: 103bf61b0; end: 103bf61eb;  */

void FUN_103bf61b0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103bf61ec; end: 103bf625f; -[SCAdPromotedStoryAttachmentTrackInfo description] */

void FUN_103bf61ec(ulong param_1)

{
  ulong uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bf67f8();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1 & 0x3fffffffffffffff);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf6260; end: 103bf62a7; -[SCAdPromotedStoryAttachmentTrackInfo init] */

void FUN_103bf6260(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AdPromotedStoryDataServices/AdPromotedStoryAttachmentTrackInfoWrapper.swift",
                      0x4b,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf62a8);
  (*pcVar1)();
}



/* Entry: 103bf62a8; end: 103bf62ab; -[SCAdPromotedStoryAttachmentTrackInfo copyWithZone:] */

void FUN_103bf62a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bf62ac; end: 103bf62e3; +[SCAdPromotedStoryAttachmentTrackInfo webViewWithTrackInfo:] */

void FUN_103bf62ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103bf69c0();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bf62e4; end: 103bf631b; +[SCAdPromotedStoryAttachmentTrackInfo appInstallWithTrackInfo:] */

void FUN_103bf62e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103bf6a4c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bf631c; end: 103bf637b; +[SCAdPromotedStoryAttachmentTrackInfo deepLinkWithTrackInfo:fallbackAdTrackInfo:] */

void FUN_103bf631c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  FUN_103bf6adc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bf637c; end: 103bf6417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf637c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112ff6500) == '\0') {
    if (*(long *)(unaff_x20 + _DAT_112ff6520) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf6414);
      (*pcVar1)();
    }
    (*param_1)();
  }
  else if (*(char *)(unaff_x20 + _DAT_112ff6500) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_112ff6518) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf6410);
      (*pcVar1)();
    }
    (*param_3)();
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112ff6508) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf6418);
      (*pcVar1)();
    }
    (*param_5)(*(long *)(unaff_x20 + _DAT_112ff6508),*(undefined8 *)(unaff_x20 + _DAT_112ff6510));
  }
  return;
}



/* Entry: 103bf6418; end: 103bf647b; -[SCAdPromotedStoryAttachmentTrackInfo matchWebView:appInstall:deepLink:] */

void FUN_103bf6418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_103bf637c(FUN_103bf6d48,auStack_40,0x103bf6d84,auStack_60,0x103bf6d58,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bf647c; end: 103bf64af;  */

void FUN_103bf647c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bf64b0; end: 103bf655b; -[SCAdPromotedStoryAttachmentTrackInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bf64d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bf64f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bf6514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bf653c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bf6518) */
/* WARNING: Removing unreachable block (ram,0x000103bf6524) */
/* WARNING: Removing unreachable block (ram,0x000103bf64f4) */
/* WARNING: Removing unreachable block (ram,0x000103bf64d4) */
/* WARNING: Removing unreachable block (ram,0x000103bf6540) */
/* WARNING: Removing unreachable block (ram,0x000103bf6510) */
/* WARNING: Removing unreachable block (ram,0x000103bf6548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf64b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff6520));
  return;
}



/* Entry: 103bf655c; end: 103bf67f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ** FUN_103bf655c(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puStack_688;
  undefined8 *puStack_680;
  undefined1 auStack_678 [776];
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined8 uStack_29f;
  
  uVar5 = (uint)(param_1 >> 0x3e);
  if (uVar5 == 0) {
    func_0x000107c610b4(&uStack_350,param_1 + 0x10,0x301);
    FUN_1042ca7c4(0);
    func_0x000107c610f8();
    func_0x00010178e208(&uStack_350,auStack_678);
    puVar1 = &uStack_350;
    FUN_1042c6780();
    puVar2 = puVar1;
    FUN_103bf6b80();
    puVar3 = puVar2;
    func_0x000107c610f8();
    *(undefined1 *)((long)puVar3 + _DAT_112ff6500) = 0;
    *(undefined8 **)((long)puVar3 + _DAT_112ff6520) = puVar1;
    *(undefined8 *)((long)puVar3 + _DAT_112ff6518) = 0;
    *(undefined8 *)((long)puVar3 + _DAT_112ff6508) = 0;
    *(undefined8 *)((long)puVar3 + _DAT_112ff6510) = 0;
    ppuVar4 = &puStack_688;
    puStack_688 = puVar3;
    puStack_680 = puVar2;
    func_0x000107c61154(ppuVar4,PTR_s_init_1125d9248);
  }
  else {
    if (uVar5 == 1) {
      uStack_2c8 = *(undefined8 *)(param_1 + 0x98);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x90);
      uStack_2b8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_2c0 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2b0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2a8 = (undefined1)*(undefined8 *)(param_1 + 0xb8);
      uStack_29f = *(undefined8 *)(param_1 + 0xc1);
      uStack_2a7 = (undefined7)*(undefined8 *)(param_1 + 0xb9);
      uStack_2a0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xb9) >> 0x38);
      uStack_308 = *(undefined8 *)(param_1 + 0x58);
      uStack_310 = *(undefined8 *)(param_1 + 0x50);
      uStack_300 = *(undefined8 *)(param_1 + 0x60);
      uStack_2f8 = (undefined1)*(undefined8 *)(param_1 + 0x68);
      uStack_2f7 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x68) >> 8);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x88);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x80);
      uStack_2e8 = (undefined1)*(undefined8 *)(param_1 + 0x78);
      uStack_2e7 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x78) >> 8);
      uStack_2f0 = (undefined1)*(undefined8 *)(param_1 + 0x70);
      uStack_2ef = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x70) >> 8);
      uStack_348 = *(undefined8 *)(param_1 + 0x18);
      uStack_350 = *(undefined8 *)(param_1 + 0x10);
      uStack_338 = *(undefined8 *)(param_1 + 0x28);
      uStack_340 = *(undefined8 *)(param_1 + 0x20);
      uStack_328 = *(undefined8 *)(param_1 + 0x38);
      uStack_330 = *(undefined8 *)(param_1 + 0x30);
      uStack_318 = *(undefined8 *)(param_1 + 0x48);
      uStack_320 = *(undefined8 *)(param_1 + 0x40);
      FUN_10427bf14(0);
      func_0x000107c610f8();
      func_0x00010178e29c(&uStack_350,auStack_678);
      puVar1 = &uStack_350;
      func_0x00010427a814();
      puVar2 = puVar1;
      FUN_103bf6b80();
      puVar3 = puVar2;
      func_0x000107c610f8();
      *(undefined1 *)((long)puVar3 + _DAT_112ff6500) = 1;
      *(undefined8 *)((long)puVar3 + _DAT_112ff6520) = 0;
      *(undefined8 **)((long)puVar3 + _DAT_112ff6518) = puVar1;
      *(undefined8 *)((long)puVar3 + _DAT_112ff6508) = 0;
      *(undefined8 *)((long)puVar3 + _DAT_112ff6510) = 0;
      ppuVar4 = &puStack_370;
      puStack_370 = puVar3;
      puStack_368 = puVar2;
    }
    else {
      uStack_318 = *(undefined8 *)(param_1 + 0x48);
      uStack_320 = *(undefined8 *)(param_1 + 0x40);
      uStack_308 = *(undefined8 *)(param_1 + 0x58);
      uStack_310 = *(undefined8 *)(param_1 + 0x50);
      uStack_300 = *(undefined8 *)(param_1 + 0x60);
      uStack_2f8 = (undefined1)*(undefined8 *)(param_1 + 0x68);
      uStack_2ef = (undefined7)*(undefined8 *)(param_1 + 0x71);
      uStack_2e8 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x71) >> 0x38);
      uStack_2f7 = (undefined7)*(undefined8 *)(param_1 + 0x69);
      uStack_2f0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x38);
      uStack_348 = *(undefined8 *)(param_1 + 0x18);
      uStack_350 = *(undefined8 *)(param_1 + 0x10);
      uStack_338 = *(undefined8 *)(param_1 + 0x28);
      uStack_340 = *(undefined8 *)(param_1 + 0x20);
      uStack_328 = *(undefined8 *)(param_1 + 0x38);
      uStack_330 = *(undefined8 *)(param_1 + 0x30);
      puVar6 = *(undefined8 **)(param_1 + 0x80);
      FUN_1042826f0(0);
      func_0x000107c610f8();
      func_0x00010178e30c(&uStack_350,auStack_678);
      puVar1 = &uStack_350;
      FUN_104281270();
      puVar2 = puVar1;
      puVar3 = (undefined8 *)0x0;
      if ((((ulong)puVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
        func_0x000103bf6d6c(puVar6);
        FUN_103bf655c();
        puVar2 = puVar6;
        puVar3 = puVar6;
      }
      FUN_103bf6b80();
      puVar6 = puVar2;
      func_0x000107c610f8();
      *(undefined1 *)((long)puVar6 + _DAT_112ff6500) = 2;
      *(undefined8 *)((long)puVar6 + _DAT_112ff6520) = 0;
      *(undefined8 *)((long)puVar6 + _DAT_112ff6518) = 0;
      *(undefined8 **)((long)puVar6 + _DAT_112ff6508) = puVar1;
      *(undefined8 **)((long)puVar6 + _DAT_112ff6510) = puVar3;
      ppuVar4 = &puStack_360;
      puStack_360 = puVar6;
      puStack_358 = puVar2;
    }
    func_0x000107c61154(ppuVar4,PTR_s_init_1125d9248);
  }
  func_0x000107c61574(param_1 & 0x3fffffffffffffff);
  return ppuVar4;
}



/* Entry: 103bf67f8; end: 103bf69bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103bf67f8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined8 uStack_287;
  
  if (*(char *)(param_1 + _DAT_112ff6500) == '\0') {
    lVar3 = *(long *)(param_1 + _DAT_112ff6520);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf69bc);
      (*pcVar1)();
    }
    puVar2 = &UNK_1106e7878;
    func_0x000107c613fc(&UNK_1106e7878,0x311,7);
    func_0x000107c61174(lVar3);
    FUN_1042c3e04(&uStack_338);
    func_0x000107c610b4(puVar2 + 0x10,&uStack_338,0x301);
  }
  else if (*(char *)(param_1 + _DAT_112ff6500) == '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_112ff6518);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf69b8);
      (*pcVar1)();
    }
    puVar2 = &UNK_1106e7850;
    func_0x000107c613fc(&UNK_1106e7850,0xc9,7);
    func_0x000107c61174(lVar3);
    func_0x00010427a3ac(&uStack_338);
    *(undefined8 *)(puVar2 + 0x98) = uStack_2b0;
    *(undefined8 *)(puVar2 + 0x90) = uStack_2b8;
    *(undefined8 *)(puVar2 + 0xa8) = uStack_2a0;
    *(undefined8 *)(puVar2 + 0xa0) = uStack_2a8;
    *(ulong *)(puVar2 + 0xb8) = CONCAT71(uStack_28f,uStack_290);
    *(undefined8 *)(puVar2 + 0xb0) = uStack_298;
    *(undefined8 *)(puVar2 + 0xc1) = uStack_287;
    *(ulong *)(puVar2 + 0xb9) = CONCAT17(uStack_288,uStack_28f);
    *(undefined8 *)(puVar2 + 0x58) = uStack_2f0;
    *(undefined8 *)(puVar2 + 0x50) = uStack_2f8;
    *(ulong *)(puVar2 + 0x68) = CONCAT71(uStack_2df,uStack_2e0);
    *(undefined8 *)(puVar2 + 0x60) = uStack_2e8;
    *(ulong *)(puVar2 + 0x78) = CONCAT71(uStack_2cf,uStack_2d0);
    *(ulong *)(puVar2 + 0x70) = CONCAT71(uStack_2d7,uStack_2d8);
    *(undefined8 *)(puVar2 + 0x88) = uStack_2c0;
    *(undefined8 *)(puVar2 + 0x80) = uStack_2c8;
    *(undefined8 *)(puVar2 + 0x18) = uStack_330;
    *(undefined8 *)(puVar2 + 0x10) = uStack_338;
    *(undefined8 *)(puVar2 + 0x28) = uStack_320;
    *(undefined8 *)(puVar2 + 0x20) = uStack_328;
    *(undefined8 *)(puVar2 + 0x38) = uStack_310;
    *(undefined8 *)(puVar2 + 0x30) = uStack_318;
    *(undefined8 *)(puVar2 + 0x48) = uStack_300;
    *(undefined8 *)(puVar2 + 0x40) = uStack_308;
    puVar2 = (undefined *)((ulong)puVar2 | 0x4000000000000000);
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112ff6508);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf69c0);
      (*pcVar1)();
    }
    lVar4 = *(long *)(param_1 + _DAT_112ff6510);
    puVar2 = &UNK_1106e7828;
    func_0x000107c613fc(&UNK_1106e7828,0x88,7);
    func_0x000107c61174(lVar3);
    FUN_104280ddc(&uStack_338);
    *(undefined8 *)(puVar2 + 0x58) = uStack_2f0;
    *(undefined8 *)(puVar2 + 0x50) = uStack_2f8;
    *(ulong *)(puVar2 + 0x68) = CONCAT71(uStack_2df,uStack_2e0);
    *(undefined8 *)(puVar2 + 0x60) = uStack_2e8;
    *(ulong *)(puVar2 + 0x71) = CONCAT17(uStack_2d0,uStack_2d7);
    *(ulong *)(puVar2 + 0x69) = CONCAT17(uStack_2d8,uStack_2df);
    *(undefined8 *)(puVar2 + 0x18) = uStack_330;
    *(undefined8 *)(puVar2 + 0x10) = uStack_338;
    *(undefined8 *)(puVar2 + 0x28) = uStack_320;
    *(undefined8 *)(puVar2 + 0x20) = uStack_328;
    *(undefined8 *)(puVar2 + 0x38) = uStack_310;
    *(undefined8 *)(puVar2 + 0x30) = uStack_318;
    *(undefined8 *)(puVar2 + 0x48) = uStack_300;
    *(undefined8 *)(puVar2 + 0x40) = uStack_308;
    if (lVar4 == 0) {
      lVar3 = -0xffffffffffffff9;
    }
    else {
      func_0x000107c61174();
      lVar3 = lVar4;
      FUN_103bf67f8();
      func_0x000107c61170(lVar4);
    }
    *(long *)(puVar2 + 0x80) = lVar3;
    puVar2 = (undefined *)((ulong)puVar2 | 0x8000000000000000);
  }
  return puVar2;
}



/* Entry: 103bf69c0; end: 103bf6adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf69c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_103bf6b80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112ff6500) = 0;
  *(long *)(lVar3 + _DAT_112ff6520) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ff6518) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff6508) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff6510) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103bf6adc; end: 103bf6b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6adc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_103bf6b80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112ff6500) = 2;
  *(undefined8 *)(lVar3 + _DAT_112ff6520) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff6518) = 0;
  *(long *)(lVar3 + _DAT_112ff6508) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ff6510) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103bf6b80; end: 103bf6b9f;  */

void FUN_103bf6b80(void)

{
  func_0x000107c61168(&PTR_PTR_112944728);
  return;
}



/* Entry: 103bf6ba0; end: 103bf6d07;  */

int FUN_103bf6ba0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bf6c1c;
        goto LAB_103bf6c00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bf6c00:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103bf6c1c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bf6d08; end: 103bf6d47;  */

void FUN_103bf6d08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff6550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc642ec;
  func_0x000107c61520(&UNK_10dc642ec,&UNK_1106e7808);
  puRam0000000112ff6550 = puVar1;
  return;
}



/* Entry: 103bf6d48; end: 103bf6d87;  */

void FUN_103bf6d48(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103bf6d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103bf6d88; end: 103bf6dfb; -[SCAdPromotedStoryClientInfo encryptedUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6d88(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ff6558))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ff6558);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    func_0x000107c5ee20(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bf6dfc; end: 103bf6e0b; -[SCAdPromotedStoryClientInfo limitAdTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bf6dfc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff6560);
}



/* Entry: 103bf6e0c; end: 103bf6e1b; -[SCAdPromotedStoryClientInfo audienceMatchOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bf6e0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff6568);
}



/* Entry: 103bf6e1c; end: 103bf6e2b; -[SCAdPromotedStoryClientInfo externalActivityMatchOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bf6e1c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff6570);
}



/* Entry: 103bf6e2c; end: 103bf6e37; -[SCAdPromotedStoryClientInfo debugAdId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6e2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff6578))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff6578);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bf6e38; end: 103bf6e8b; -[SCAdPromotedStoryClientInfo debugProductIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6e38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ff6580);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 103bf6e8c; end: 103bf6e97; -[SCAdPromotedStoryClientInfo said] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6e8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff6588))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff6588);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bf6e98; end: 103bf6eef;  */

void FUN_103bf6e98(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103bf6ef0; end: 103bf6eff; -[SCAdPromotedStoryClientInfo diskTotalSpaceKb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6590));
  return;
}



/* Entry: 103bf6f00; end: 103bf6f0f; -[SCAdPromotedStoryClientInfo diskFreeSpaceKb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6598));
  return;
}



/* Entry: 103bf6f10; end: 103bf6f1f; -[SCAdPromotedStoryClientInfo screenWidthInDp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff65a0));
  return;
}



/* Entry: 103bf6f20; end: 103bf6f2f; -[SCAdPromotedStoryClientInfo screenHeightInDp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff65a8));
  return;
}



/* Entry: 103bf6f30; end: 103bf6f3f; -[SCAdPromotedStoryClientInfo enableBrowserPrivacyConsent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bf6f30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff65b0);
}



/* Entry: 103bf6f40; end: 103bf71e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf6f40(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6558);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff6560) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112ff6568) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112ff6570) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6578);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6580) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6588);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6590) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6598) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ff65a0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ff65a8) = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_112ff65b0) = param_15;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf71e8; end: 103bf73ab; -[SCAdPromotedStoryClientInfo initWithEncryptedUserData:limitAdTracking:audienceMatchOptOut:externalActivityMatchOptOut:debugAdId:debugProductIds:said:diskTotalSpaceKb:diskFreeSpaceKb:screenWidthInDp:screenHeightInDp:enableBrowserPrivacyConsent:] */

void FUN_103bf71e8(undefined8 param_1,undefined *param_2,long param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,long param_7,long param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined1 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_90;
  
  if (param_3 == 0) {
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_12);
    func_0x000107c61174(param_13);
    uStack_90 = 0;
    puVar2 = (undefined *)0xf000000000000000;
    puVar3 = param_2;
  }
  else {
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_12);
    func_0x000107c61174(param_13);
    lVar5 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    puVar3 = param_2;
    func_0x000107c61170(lVar5);
    puVar2 = param_2;
    uStack_90 = param_3;
  }
  if (param_7 == 0) {
    lVar5 = 0;
    puVar1 = (undefined *)0x0;
    puVar6 = puVar3;
    puVar3 = PTR___sSSN_11034da80;
  }
  else {
    lVar5 = param_7;
    func_0x000107c5faec(param_7);
    puVar6 = puVar3;
    func_0x000107c61170(param_7);
    puVar1 = puVar3;
    puVar3 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar3;
  if (param_8 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_8;
    func_0x000107c5fc54(param_8);
    func_0x000107c61170(param_8);
    puVar6 = puVar3;
  }
  if (param_9 == 0) {
    lVar7 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar7 = param_9;
    func_0x000107c5faec();
    func_0x000107c61170(param_9);
  }
  func_0x000103bf7094(uStack_90,puVar2,param_4,param_5,param_6,lVar5,puVar1,lVar4,lVar7,puVar6,
                      param_10,param_11,param_12,param_13,param_14);
  return;
}



/* Entry: 103bf73ac; end: 103bf73eb;  */

undefined8 FUN_103bf73ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103bf7d7c(param_1);
  FUN_103bf8028(param_1);
  return uVar1;
}



/* Entry: 103bf73ec; end: 103bf73ef; -[SCAdPromotedStoryClientInfo copyWithZone:] */

void FUN_103bf73ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bf73f0; end: 103bf743b; -[SCAdPromotedStoryClientInfo description] */

void FUN_103bf73f0(undefined8 param_1)

{
  undefined1 auStack_a0 [128];
  
  func_0x000107c61174();
  FUN_103bf805c(auStack_a0);
  func_0x000107c61170(param_1);
  FUN_103bf8028(auStack_a0);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf743c; end: 103bf7483; -[SCAdPromotedStoryClientInfo init] */

void FUN_103bf743c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AdPromotedStoryDataServices/AdPromotedStoryClientInfoWrapper.swift",0x42,2,
                      0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf7484);
  (*pcVar1)();
}



/* Entry: 103bf7484; end: 103bf749f; +[SCAdPromotedStoryClientInfoBuilder adPromotedStoryClientInfo] */

void FUN_103bf7484(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf74a0; end: 103bf74df; +[SCAdPromotedStoryClientInfoBuilder adPromotedStoryClientInfoWithExistingAdPromotedStoryClientInfo:] */

void FUN_103bf74a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_103bf8250(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bf74e0; end: 103bf7583; -[SCAdPromotedStoryClientInfoBuilder withEncryptedUserData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf74e0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    func_0x000107c61174();
    param_2 = -0x1000000000000000;
  }
  else {
    func_0x000107c61174();
    lVar3 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
  }
  plVar1 = (long *)(param_1 + _DAT_112ff65b8);
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000100de78a0(param_3,param_2);
  func_0x0001000b44c0(lVar3,lVar2);
  func_0x0001000b44c0(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103bf7584; end: 103bf7593; -[SCAdPromotedStoryClientInfoBuilder withLimitAdTracking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7584(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ff65c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103bf7594; end: 103bf75a3; -[SCAdPromotedStoryClientInfoBuilder withAudienceMatchOptOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7594(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ff65c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103bf75a4; end: 103bf75b3; -[SCAdPromotedStoryClientInfoBuilder withExternalActivityMatchOptOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf75a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ff65d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103bf75b4; end: 103bf75bf; -[SCAdPromotedStoryClientInfoBuilder withDebugAdId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf75b4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff65d8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103bf75c0; end: 103bf7623; -[SCAdPromotedStoryClientInfoBuilder withDebugProductIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf75c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff65e0);
  *(long *)(param_1 + _DAT_112ff65e0) = param_3;
  func_0x000107c61174();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103bf7624; end: 103bf762f; -[SCAdPromotedStoryClientInfoBuilder withSaid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7624(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff65e8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103bf7630; end: 103bf7693;  */

void FUN_103bf7630(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103bf7694; end: 103bf76f3; -[SCAdPromotedStoryClientInfoBuilder withDiskTotalSpaceKb:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bf7694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff65f0);
  *(undefined8 *)(param_1 + _DAT_112ff65f0) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bf76f4; end: 103bf7753; -[SCAdPromotedStoryClientInfoBuilder withDiskFreeSpaceKb:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bf76f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff65f8);
  *(undefined8 *)(param_1 + _DAT_112ff65f8) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bf7754; end: 103bf77b3; -[SCAdPromotedStoryClientInfoBuilder withScreenWidthInDp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bf7754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff6600);
  *(undefined8 *)(param_1 + _DAT_112ff6600) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bf77b4; end: 103bf7813; -[SCAdPromotedStoryClientInfoBuilder withScreenHeightInDp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bf77b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff6608);
  *(undefined8 *)(param_1 + _DAT_112ff6608) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bf7814; end: 103bf7823; -[SCAdPromotedStoryClientInfoBuilder withEnableBrowserPrivacyConsent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7814(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ff6610) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103bf7824; end: 103bf7a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7824(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_70;
  long lStack_68;
  
  bVar8 = *(byte *)(unaff_x20 + _DAT_112ff65c0);
  if (bVar8 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_112ff65c0) = 0;
  }
  bVar9 = *(byte *)(unaff_x20 + _DAT_112ff65c8);
  if (bVar9 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_112ff65c8) = 0;
  }
  bVar10 = *(byte *)(unaff_x20 + _DAT_112ff65d0);
  if (bVar10 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_112ff65d0) = 0;
  }
  bVar11 = *(byte *)(unaff_x20 + _DAT_112ff6610);
  if (bVar11 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_112ff6610) = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ff65b8);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112ff65b8))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ff65d8);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112ff65d8))[1];
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ff65e0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ff65e8);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112ff65e8))[1];
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ff65f0);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ff65f8);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112ff6600);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ff6608);
  FUN_103bf84b0();
  lVar13 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar13 + _DAT_112ff6558);
  *puVar1 = uVar2;
  puVar1[1] = uVar5;
  *(byte *)(lVar13 + _DAT_112ff6560) = bVar8 & 1;
  *(byte *)(lVar13 + _DAT_112ff6568) = bVar9 & 1;
  *(byte *)(lVar13 + _DAT_112ff6570) = bVar10 & 1;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112ff6578);
  *puVar1 = uVar3;
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar13 + _DAT_112ff6580) = uVar14;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112ff6588);
  *puVar1 = uVar4;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar13 + _DAT_112ff6590) = uVar15;
  *(undefined8 *)(lVar13 + _DAT_112ff6598) = uVar18;
  *(undefined8 *)(lVar13 + _DAT_112ff65a0) = uVar17;
  *(undefined8 *)(lVar13 + _DAT_112ff65a8) = uVar16;
  *(byte *)(lVar13 + _DAT_112ff65b0) = bVar11 & 1;
  func_0x000100de78a0(uVar2,uVar5);
  puVar12 = PTR_s_init_1125d9248;
  lStack_70 = lVar13;
  lStack_68 = param_1;
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar14);
  func_0x000107c61434(uVar7);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar16);
  func_0x000107c61154(&lStack_70,puVar12);
  return;
}



/* Entry: 103bf7a7c; end: 103bf7abf; -[SCAdPromotedStoryClientInfoBuilder build] */

void FUN_103bf7a7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bf7824();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bf7ac0; end: 103bf7b03; -[SCAdPromotedStoryClientInfoBuilder safeBuildAndReturnError:] */

void FUN_103bf7ac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bf7824();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bf7b04; end: 103bf7bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7b04(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff65b8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff65c0) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff65c8) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff65d0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff65d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff65e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff65e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff65f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff65f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6608) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff6610) = 2;
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf7bdc; end: 103bf7bfb; -[SCAdPromotedStoryClientInfoBuilder init] */

void FUN_103bf7bdc(void)

{
  FUN_103bf7b04();
  return;
}



/* Entry: 103bf7bfc; end: 103bf7bff;  */

void FUN_103bf7bfc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bf7c00; end: 103bf7ca3; -[SCAdPromotedStoryClientInfoBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bf7c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bf7c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bf7c6c) */
/* WARNING: Removing unreachable block (ram,0x000103bf7c8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7c00(long param_1)

{
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_112ff65b8),
                      ((undefined8 *)(param_1 + _DAT_112ff65b8))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff65d8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff65e0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff65e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff65f0));
  return;
}



/* Entry: 103bf7ca4; end: 103bf7cd7;  */

void FUN_103bf7ca4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bf7cd8; end: 103bf7d7b; -[SCAdPromotedStoryClientInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bf7d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bf7d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bf7d44) */
/* WARNING: Removing unreachable block (ram,0x000103bf7d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7cd8(long param_1)

{
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_112ff6558),
                      ((undefined8 *)(param_1 + _DAT_112ff6558))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff6578 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff6580));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff6588 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff6590));
  return;
}



/* Entry: 103bf7d7c; end: 103bf8027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf7d7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6558);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_112ff6560) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(unaff_x20 + _DAT_112ff6568) = *(undefined1 *)((long)param_1 + 0x11);
  *(undefined1 *)(unaff_x20 + _DAT_112ff6570) = *(undefined1 *)((long)param_1 + 0x12);
  uStack_68 = param_1[4];
  uStack_70 = param_1[3];
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6578);
  puVar1[1] = param_1[4];
  *puVar1 = uVar3;
  uStack_78 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112ff6580) = uStack_78;
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uVar3 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6588);
  puVar1[1] = param_1[7];
  *puVar1 = uVar3;
  if (*(char *)(param_1 + 9) == '\x01') {
    FUN_103bf84f0(&uStack_60,auStack_a0,0x112d56fe0,&UNK_10d91dda0);
    FUN_103bf84f0(&uStack_70,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103bf84f0(&uStack_78,auStack_a0,0x112d445a8,&UNK_10d990150);
    FUN_103bf84f0(&uStack_90,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    FUN_103bf84f0(&uStack_60,auStack_a0,0x112d56fe0,&UNK_10d91dda0);
    FUN_103bf84f0(&uStack_70,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103bf84f0(&uStack_78,auStack_a0,0x112d445a8,&UNK_10d990150);
    FUN_103bf84f0(&uStack_90,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112ff6590) = puVar2;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112ff6598) = puVar2;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112ff65a0) = puVar2;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112ff65a8) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff65b0) = *(undefined1 *)((long)param_1 + 0x79);
  func_0x000107c61154(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf8028; end: 103bf805b;  */

undefined8 FUN_103bf8028(undefined8 param_1)

{
  (*(code *)(undefined *)0x103bf5874)();
  return param_1;
}



/* Entry: 103bf805c; end: 103bf824f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf805c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_90;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_112ff6558);
  uVar8 = ((undefined8 *)(param_2 + _DAT_112ff6558))[1];
  uVar11 = *(undefined1 *)(param_2 + _DAT_112ff6560);
  uVar12 = *(undefined1 *)(param_2 + _DAT_112ff6568);
  uVar13 = *(undefined1 *)(param_2 + _DAT_112ff6570);
  uVar6 = *(undefined8 *)(param_2 + _DAT_112ff6578);
  uVar9 = ((undefined8 *)(param_2 + _DAT_112ff6578))[1];
  uVar18 = *(undefined8 *)(param_2 + _DAT_112ff6580);
  uVar7 = *(undefined8 *)(param_2 + _DAT_112ff6588);
  uVar10 = ((undefined8 *)(param_2 + _DAT_112ff6588))[1];
  lStack_90 = *(long *)(param_2 + _DAT_112ff6590);
  bVar1 = lStack_90 == 0;
  if (bVar1) {
    func_0x000100de78a0(uVar5,uVar8);
    func_0x000107c61434(uVar10);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar18);
    lStack_90 = 0;
  }
  else {
    func_0x000100de78a0(uVar5,uVar8);
    func_0x000107c61434(uVar10);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar18);
    func_0x000107c49820();
  }
  lVar15 = *(long *)(param_2 + _DAT_112ff6598);
  bVar2 = lVar15 == 0;
  if (bVar2) {
    lVar15 = 0;
  }
  else {
    func_0x000107c49820();
  }
  lVar16 = *(long *)(param_2 + _DAT_112ff65a0);
  bVar3 = lVar16 == 0;
  if (bVar3) {
    lVar16 = 0;
  }
  else {
    func_0x000107c49820();
  }
  lVar17 = *(long *)(param_2 + _DAT_112ff65a8);
  bVar4 = lVar17 == 0;
  if (!bVar4) {
    func_0x000107c49820();
  }
  uVar14 = *(undefined1 *)(param_2 + _DAT_112ff65b0);
  *param_1 = uVar5;
  param_1[1] = uVar8;
  *(undefined1 *)(param_1 + 2) = uVar11;
  *(undefined1 *)((long)param_1 + 0x11) = uVar12;
  *(undefined1 *)((long)param_1 + 0x12) = uVar13;
  param_1[3] = uVar6;
  param_1[4] = uVar9;
  param_1[5] = uVar18;
  param_1[6] = uVar7;
  param_1[7] = uVar10;
  param_1[8] = lStack_90;
  *(bool *)(param_1 + 9) = bVar1;
  param_1[10] = lVar15;
  *(bool *)(param_1 + 0xb) = bVar2;
  param_1[0xc] = lVar16;
  *(bool *)(param_1 + 0xd) = bVar3;
  param_1[0xe] = lVar17;
  *(bool *)(param_1 + 0xf) = bVar4;
  *(undefined1 *)((long)param_1 + 0x79) = uVar14;
  return;
}



/* Entry: 103bf8250; end: 103bf84af;  */

/* WARNING: Possible PIC construction at 0x000103bf8288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bf828c) */

void FUN_103bf8250(long param_1)

{
  if (param_1 == 0) {
    func_0x000103bf84d0();
    func_0x000107c610f8();
  }
  else {
    func_0x000103bf84d0();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103bf84b0; end: 103bf84ef;  */

void FUN_103bf84b0(void)

{
  func_0x000107c61168(&PTR_PTR_112944808);
  return;
}



/* Entry: 103bf84f0; end: 103bf8537;  */

undefined8 FUN_103bf84f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103bf8538; end: 103bf853b;  */

void FUN_103bf8538(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bf853c; end: 103bf8547; -[SCAdPromotedStoryServeLifecycleEvent serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf853c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff6668);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ff6668))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bf8548; end: 103bf8553; -[SCAdPromotedStoryServeLifecycleEvent adRenderData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf8548(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff6670);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ff6670))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bf8554; end: 103bf85ab;  */

void FUN_103bf8554(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


