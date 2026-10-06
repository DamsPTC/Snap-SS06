/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106454968; end: 1064549eb; -[SCAdPromotedStoryShareParameters hash] */

undefined8 * FUN_106454968(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106454a94:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106454aa0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_106454aa0;
          }
          goto LAB_106454a94;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106454aa0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1064549ec; end: 106454abb; -[SCAdPromotedStoryShareParameters isEqual:] */

long FUN_1064549ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106454a94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106454aa0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106454aa0;
          }
          goto LAB_106454a94;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106454aa0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106454abc; end: 106454ac3; -[SCAdPromotedStoryShareParameters adId] */

undefined8 FUN_106454abc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106454ac4; end: 106454acb; -[SCAdPromotedStoryShareParameters lineItemId] */

undefined8 FUN_106454ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106454acc; end: 106454ad3; -[SCAdPromotedStoryShareParameters posterId] */

undefined8 FUN_106454acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106454ad4; end: 106454adb; -[SCAdPromotedStoryShareParameters recipientCount] */

undefined8 FUN_106454ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106454adc; end: 106454b17; -[SCAdPromotedStoryShareParameters .cxx_destruct] */

void FUN_106454adc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106454b18; end: 106454b1f; -[SCAdLifecycleInfo lastAppBackgroundTimestamp] */

undefined8 FUN_106454b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106454b20; end: 106454b27; -[SCAdLifecycleInfo setLastAppBackgroundTimestamp:] */

void FUN_106454b20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 106454b28; end: 106454b2f; -[SCAdLifecycleInfo lastAppForegroundTimestamp] */

undefined8 FUN_106454b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106454b30; end: 106454b37; -[SCAdLifecycleInfo setLastAppForegroundTimestamp:] */

void FUN_106454b30(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 106454b38; end: 106454b3f; -[SCAdLifecycleInfo adRequestSubmitTimestamp] */

undefined8 FUN_106454b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106454b40; end: 106454b47; -[SCAdLifecycleInfo setAdRequestSubmitTimestamp:] */

void FUN_106454b40(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 106454b48; end: 106454b4f; -[SCAdLifecycleInfo adRequestCompleteTimestamp] */

undefined8 FUN_106454b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106454b50; end: 106454b57; -[SCAdLifecycleInfo setAdRequestCompleteTimestamp:] */

void FUN_106454b50(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 106454b58; end: 106454b5f; -[SCAdLifecycleInfo adRequestConnectionDownloadBandwidthBps] */

undefined8 FUN_106454b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106454b60; end: 106454b67; -[SCAdLifecycleInfo setAdRequestConnectionDownloadBandwidthBps:] */

void FUN_106454b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106454b68; end: 106454b6f; -[SCAdLifecycleInfo adRequestStatusCode] */

undefined8 FUN_106454b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106454b70; end: 106454b77; -[SCAdLifecycleInfo setAdRequestStatusCode:] */

void FUN_106454b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 106454b78; end: 106454b7f; -[SCAdLifecycleInfo adResponseDeserializationStartTimestamp] */

undefined8 FUN_106454b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106454b80; end: 106454b87; -[SCAdLifecycleInfo setAdResponseDeserializationStartTimestamp:] */

void FUN_106454b80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 106454b88; end: 106454b8f; -[SCAdLifecycleInfo adResponseDeserializationEndTimestamp] */

undefined8 FUN_106454b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106454b90; end: 106454b97; -[SCAdLifecycleInfo setAdResponseDeserializationEndTimestamp:] */

void FUN_106454b90(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 106454b98; end: 106454b9f; -[SCAdLifecycleInfo adMediaSize] */

undefined8 FUN_106454b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106454ba0; end: 106454ba7; -[SCAdLifecycleInfo setAdMediaSize:] */

void FUN_106454ba0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 106454ba8; end: 106454baf; -[SCAdLifecycleInfo adMediaStartDownloadTimestamp] */

undefined8 FUN_106454ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106454bb0; end: 106454bb7; -[SCAdLifecycleInfo setAdMediaStartDownloadTimestamp:] */

void FUN_106454bb0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 106454bb8; end: 106454bbf; -[SCAdLifecycleInfo adMediaFinishDownloadTimestamp] */

undefined8 FUN_106454bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106454bc0; end: 106454bc7; -[SCAdLifecycleInfo setAdMediaFinishDownloadTimestamp:] */

void FUN_106454bc0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 106454bc8; end: 106454bcf; -[SCAdLifecycleInfo adMediaConnectionDownloadBandwidthBps] */

undefined8 FUN_106454bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106454bd0; end: 106454bd7; -[SCAdLifecycleInfo setAdMediaConnectionDownloadBandwidthBps:] */

void FUN_106454bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 106454bd8; end: 106454bdf; -[SCAdLifecycleInfo mediaCacheHit] */

undefined1 FUN_106454bd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106454be0; end: 106454be7; -[SCAdLifecycleInfo setMediaCacheHit:] */

void FUN_106454be0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106454be8; end: 106454bef; -[SCAdLifecycleInfo adTopSnapMediaType] */

undefined8 FUN_106454be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106454bf0; end: 106454bf7; -[SCAdLifecycleInfo setAdTopSnapMediaType:] */

void FUN_106454bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 106454bf8; end: 106454bff; -[SCAdLifecycleInfo firstTimeAdViewStartTimestamp] */

undefined8 FUN_106454bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106454c00; end: 106454c07; -[SCAdLifecycleInfo setFirstTimeAdViewStartTimestamp:] */

void FUN_106454c00(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 106454c08; end: 106454c0f; -[SCAdLifecycleInfo firstTimeAdViewFinishTimestamp] */

undefined8 FUN_106454c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106454c10; end: 106454c17; -[SCAdLifecycleInfo setFirstTimeAdViewFinishTimestamp:] */

void FUN_106454c10(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 106454c18; end: 106454c1f; -[SCAdLifecycleInfo adIndexPosition] */

undefined8 FUN_106454c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106454c20; end: 106454c27; -[SCAdLifecycleInfo setAdIndexPosition:] */

void FUN_106454c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 106454c28; end: 106454c2f; -[SCAdLifecycleInfo noFillAdNotRequestedCount] */

undefined8 FUN_106454c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106454c30; end: 106454c37; -[SCAdLifecycleInfo setNoFillAdNotRequestedCount:] */

void FUN_106454c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 106454c38; end: 106454c3f; -[SCAdLifecycleInfo noFillAdRequestFail] */

undefined1 FUN_106454c38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106454c40; end: 106454c47; -[SCAdLifecycleInfo setNoFillAdRequestFail:] */

void FUN_106454c40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106454c48; end: 106454c4f; -[SCAdLifecycleInfo noFillAdRequestInProgressCount] */

undefined8 FUN_106454c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106454c50; end: 106454c57; -[SCAdLifecycleInfo setNoFillAdRequestInProgressCount:] */

void FUN_106454c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 106454c58; end: 106454c5f; -[SCAdLifecycleInfo noFillAdRequestInProgressTimestamp] */

undefined8 FUN_106454c58(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106454c60; end: 106454c67; -[SCAdLifecycleInfo setNoFillAdRequestInProgressTimestamp:] */

void FUN_106454c60(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xa0) = param_1;
  return;
}



/* Entry: 106454c68; end: 106454c6f; -[SCAdLifecycleInfo noFillAdMediaDownloadInProgressCount] */

undefined8 FUN_106454c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106454c70; end: 106454c77; -[SCAdLifecycleInfo setNoFillAdMediaDownloadInProgressCount:] */

void FUN_106454c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 106454c78; end: 106454c7f; -[SCAdLifecycleInfo noFillAdMediaDownloadInProgressTimestamp] */

undefined8 FUN_106454c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106454c80; end: 106454c87; -[SCAdLifecycleInfo setNoFillAdMediaDownloadInProgressTimestamp:] */

void FUN_106454c80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xb0) = param_1;
  return;
}



/* Entry: 106454c88; end: 106454c8f; -[SCAdLifecycleInfo noFillAdMediaDownloadError] */

undefined8 FUN_106454c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106454c90; end: 106454c97; -[SCAdLifecycleInfo setNoFillAdMediaDownloadError:] */

void FUN_106454c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 106454c98; end: 106454c9f; -[SCAdLifecycleInfo noFillAdNotBrandSafeCount] */

undefined8 FUN_106454c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106454ca0; end: 106454ca7; -[SCAdLifecycleInfo setNoFillAdNotBrandSafeCount:] */

void FUN_106454ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 106454ca8; end: 106454caf; -[SCAdLifecycleInfo noFillAdMediaMissingCount] */

undefined8 FUN_106454ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106454cb0; end: 106454cb7; -[SCAdLifecycleInfo setNoFillAdMediaMissingCount:] */

void FUN_106454cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 106454cb8; end: 106454cbf; -[SCAdLifecycleInfo streamingEnabled] */

undefined1 FUN_106454cb8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106454cc0; end: 106454cc7; -[SCAdLifecycleInfo setStreamingEnabled:] */

void FUN_106454cc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106454cc8; end: 106454ccf; -[SCAdLifecycleInfo totalStallCount] */

undefined8 FUN_106454cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106454cd0; end: 106454cd7; -[SCAdLifecycleInfo setTotalStallCount:] */

void FUN_106454cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 106454cd8; end: 106454cdf; -[SCAdLifecycleInfo stallOnStartDurationMillis] */

undefined8 FUN_106454cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106454ce0; end: 106454ce7; -[SCAdLifecycleInfo setStallOnStartDurationMillis:] */

void FUN_106454ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 106454ce8; end: 106454cef; -[SCAdLifecycleInfo firstStallMediaTimeMillis] */

undefined8 FUN_106454ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106454cf0; end: 106454cf7; -[SCAdLifecycleInfo setFirstStallMediaTimeMillis:] */

void FUN_106454cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 106454cf8; end: 106454cff; -[SCAdLifecycleInfo totalStallDurationMillis] */

undefined8 FUN_106454cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106454d00; end: 106454d07; -[SCAdLifecycleInfo setTotalStallDurationMillis:] */

void FUN_106454d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 106454d08; end: 106454d0f; -[SCAdLifecycleInfo firstStallDurationMillis] */

undefined8 FUN_106454d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 106454d10; end: 106454d17; -[SCAdLifecycleInfo setFirstStallDurationMillis:] */

void FUN_106454d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 106454d18; end: 106454d1f; -[SCAdLifecycleInfo videoLoadedOnEntry] */

undefined8 FUN_106454d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106454d20; end: 106454d4f; -[SCAdLifecycleInfo setVideoLoadedOnEntry:] */

void FUN_106454d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106454d50; end: 106454d57; -[SCAdLifecycleInfo videoLoadedOnExit] */

undefined8 FUN_106454d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 106454d58; end: 106454d87; -[SCAdLifecycleInfo setVideoLoadedOnExit:] */

void FUN_106454d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106454d88; end: 106454d8f; -[SCAdLifecycleInfo mediaWaitTimeInSec] */

undefined8 FUN_106454d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 106454d90; end: 106454dbf; -[SCAdLifecycleInfo setMediaWaitTimeInSec:] */

void FUN_106454d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106454dc0; end: 106454dc7; -[SCAdLifecycleInfo adId] */

undefined8 FUN_106454dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 106454dc8; end: 106454dcf; -[SCAdLifecycleInfo setAdId:] */

void FUN_106454dc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106454dd0; end: 106454dd7; -[SCAdLifecycleInfo adRequestId] */

undefined8 FUN_106454dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 106454dd8; end: 106454ddf; -[SCAdLifecycleInfo setAdRequestId:] */

void FUN_106454dd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106454de0; end: 106454de7; -[SCAdLifecycleInfo adRequestClientId] */

undefined8 FUN_106454de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 106454de8; end: 106454def; -[SCAdLifecycleInfo setAdRequestClientId:] */

void FUN_106454de8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106454df0; end: 106454df7; -[SCAdLifecycleInfo adRequestUrl] */

undefined8 FUN_106454df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 106454df8; end: 106454dff; -[SCAdLifecycleInfo setAdRequestUrl:] */

void FUN_106454df8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106454e00; end: 106454e07; -[SCAdLifecycleInfo adType] */

undefined8 FUN_106454e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 106454e08; end: 106454e0f; -[SCAdLifecycleInfo setAdType:] */

void FUN_106454e08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106454e10; end: 106454e17; -[SCAdLifecycleInfo adProductSourceType] */

undefined8 FUN_106454e10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 106454e18; end: 106454e1f; -[SCAdLifecycleInfo setAdProductSourceType:] */

void FUN_106454e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x138) = param_3;
  return;
}



/* Entry: 106454e20; end: 106454e27; -[SCAdLifecycleInfo adInsertionTimestampInMillis] */

undefined8 FUN_106454e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 106454e28; end: 106454e2f; -[SCAdLifecycleInfo setAdInsertionTimestampInMillis:] */

void FUN_106454e28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x140) = param_1;
  return;
}



/* Entry: 106454e30; end: 106454e37; -[SCAdLifecycleInfo adResponseParseCompleteTimestampInMillis] */

undefined8 FUN_106454e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 106454e38; end: 106454e3f; -[SCAdLifecycleInfo setAdResponseParseCompleteTimestampInMillis:] */

void FUN_106454e38(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x148) = param_1;
  return;
}



/* Entry: 106454e40; end: 106454eb7; -[SCAdLifecycleInfo .cxx_destruct] */

void FUN_106454e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xf8,0);
  return;
}



/* Entry: 106454eb8; end: 106455337; +[SCAdLifecycleWatermarkEventFactory adLifecycleWatermarkEventV2WithAdLifecycleInfoV2:] */

void FUN_106454eb8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ca970;
  _objc_opt_new(PTR_PTR_1126ca970);
  lVar2 = param_4;
  func_0x00010bef47c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bef4d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  func_0x00010bef4dc0(param_4);
  func_0x00010c1644e0(puVar1,param_3,(long)param_1);
  lVar2 = param_4;
  func_0x00010bef2c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bef60a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bef4200(param_4);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c0ec0e0(param_4);
  func_0x0001084b951c();
  func_0x00010c1d5d80(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c106900(param_4);
  func_0x0001084b94a8();
  func_0x00010c1dfe40(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bef22c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bef22c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163300(puVar1,param_3,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bef32e0(param_4);
  func_0x00010c1639e0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c15ffa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219160(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c278860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c278860(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c219120(puVar1,param_3,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bef2240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126ca978;
    _objc_opt_new(PTR_PTR_1126ca978);
    lVar3 = lVar2;
    func_0x00010bef21c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163220(puVar4,param_3,lVar3);
    _objc_release(lVar3);
    func_0x00010bef21e0(lVar2);
    func_0x00010c163240(puVar4,param_3,(long)param_1);
    lVar3 = lVar2;
    func_0x00010bef2200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163260(puVar4,param_3,lVar3);
    _objc_release(lVar3);
    func_0x00010bef2220(lVar2);
    func_0x00010c163280(puVar4,param_3,(long)param_1);
    func_0x00010c163200(puVar1,param_3,puVar4);
    _objc_release(puVar4);
  }
  lVar3 = param_4;
  func_0x00010bef2fa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126ca980;
    _objc_opt_new(PTR_PTR_1126ca980);
    func_0x00010bef3040(lVar3);
    func_0x00010c163920(puVar4,param_3,(long)param_1);
    lVar5 = lVar3;
    func_0x00010bef55c0(lVar3);
    func_0x00010c1648c0(puVar4,param_3,lVar5);
    func_0x00010c1638c0(puVar1,param_3,puVar4);
    _objc_release(puVar4);
  }
  lVar5 = param_4;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    puVar4 = PTR_PTR_1126ca988;
    _objc_opt_new(PTR_PTR_1126ca988);
    func_0x00010bef5f20(lVar5);
    func_0x00010c164d60(puVar4,param_3,(long)param_1);
    func_0x00010bef5c80(lVar5);
    func_0x00010c164c60(puVar4,param_3,(long)param_1);
    lVar6 = lVar5;
    func_0x00010bef5c00(lVar5);
    func_0x00010c164c20(puVar4,param_3,lVar6);
    lVar6 = lVar5;
    func_0x00010bef5ea0(lVar5);
    func_0x00010c164d20(puVar4,param_3,lVar6);
    lVar6 = lVar5;
    func_0x00010bef5f40(lVar5);
    func_0x00010c164d80(puVar4,param_3,lVar6);
    lVar6 = lVar5;
    func_0x00010bef5be0(lVar5);
    func_0x00010c164c00(puVar4,param_3,lVar6);
    func_0x00010c164be0(puVar1,param_3,puVar4);
    _objc_release(puVar4);
  }
  lVar6 = param_4;
  func_0x00010bef4020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    puVar4 = PTR_PTR_1126ca990;
    _objc_opt_new(PTR_PTR_1126ca990);
    func_0x00010bef40e0(lVar6);
    func_0x00010c163f00(puVar4,param_3,(long)param_1);
    func_0x00010bef3fe0(lVar6);
    func_0x00010c163ee0(puVar4,param_3,(long)param_1);
    lVar7 = lVar6;
    func_0x00010bef3fa0(lVar6);
    func_0x00010c163ec0(puVar4,param_3,lVar7);
    func_0x00010c163ea0(puVar1,param_3,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106455338; end: 10645552b; -[SCAdLifecycleWatermarkEventsTracker initWithLogger:adConfigProvider:flipper:] */

undefined1 *
FUN_106455338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f1340;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf981e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c067fc0(puVar5);
      *(undefined1 *)((long)puVar1 + 0x58) = 1;
    }
    puVar3 = PTR_PTR_1126b7e38;
    func_0x00010c131720();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10645552c; end: 106455603; -[SCAdLifecycleWatermarkEventsTracker onAdOperationEvent:] */

void FUN_10645552c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106455604; end: 1064556cb;  */

void FUN_106455604(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf9a440();
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      func_0x00010c0e75c0(lVar1);
    }
    else {
      func_0x00010bf9a440();
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar3 == 1) {
        func_0x00010c0e6ba0(lVar1);
      }
      else {
        func_0x00010bf9a440();
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar2 == 2) {
          func_0x00010c0e24a0(lVar1);
        }
        else {
          func_0x00010bf9a440();
          lVar2 = *(long *)(param_1 + 0x20);
          if (lVar3 == 3) {
            func_0x00010c0e2540(lVar1);
          }
          else {
            func_0x00010bf9a440();
            if (lVar2 == 4) {
              func_0x00010c0e2520(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064556cc; end: 1064558bf; -[SCAdLifecycleWatermarkEventsTracker onAdServerRequestSubmitted:] */

void FUN_1064556cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    _objc_opt_class();
    lVar3 = param_3;
    func_0x00010c136d60(param_3);
    func_0x00010be45280(lVar2,param_2,lVar3);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      puVar4 = PTR_PTR_1126ca998;
      _objc_opt_new(PTR_PTR_1126ca998);
      puVar5 = PTR_PTR_1126afec0;
      func_0x00010c136900(param_3);
      func_0x00010c155420(puVar5);
      func_0x00010c164360(puVar4);
      lVar1 = param_3;
      func_0x00010c136e20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164380(puVar4,param_2,lVar1);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164260(puVar4,param_2,lVar1);
      _objc_release(lVar1);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_3;
      func_0x00010c136a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bef3ea0();
      func_0x00010c0df780(puVar5,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x00010c067fc0(puVar5);
        func_0x00010c163820(puVar4,param_2,puVar6);
      }
      puVar6 = PTR_PTR_1126b7410;
      func_0x00010c22b6a0(PTR_PTR_1126b7410);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf88860();
      func_0x00010c1642a0(puVar4,param_2,puVar7);
      _objc_release(puVar6);
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      lVar1 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8,param_2,puVar4,lVar1);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7c100(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064558c0; end: 106455a23; -[SCAdLifecycleWatermarkEventsTracker onAdServerRequestResolved:] */

void FUN_1064558c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0x60);
    lVar2 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar6,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      lVar3 = param_1;
      _objc_opt_class();
      lVar4 = param_3;
      func_0x00010c136d60(param_3);
      func_0x00010be45280(lVar3,param_2,lVar4);
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_106455a0c;
      lVar5 = *(long *)(param_1 + 0x60);
      lVar2 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar5,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar1 = PTR_PTR_1126afec0;
      func_0x00010c1364e0(param_3);
      func_0x00010c155420(puVar1);
      func_0x00010c164280(lVar5);
      lVar2 = param_3;
      func_0x00010c136880(param_3);
      func_0x00010c164340(lVar5,param_2,lVar2);
      lVar2 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf76640(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
LAB_106455a0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


