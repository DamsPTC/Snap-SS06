/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059058a4; end: 1059058df; -[SCStreamingResourceLoaderDelegateRequest .cxx_destruct] */

void FUN_1059058a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059058e0; end: 105905a67; -[SCStreamingMediaManager initWithPlaybackResolver:grapheneRegistry:circumstanceEngine:applicationLifecycleEvents:manifestRewriter:performerProvider:] */

undefined1 *
FUN_1059058e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eadb8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bffd8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bffe0;
    _objc_alloc();
    func_0x00010c036e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bffe8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x28) = (char)uVar3;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105905a68; end: 105905a6f; -[SCStreamingMediaManager newURLProvider] */

void FUN_105905a68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be634d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__newURLProviderWithStreamingDele_1125766d0,0)
  ;
  return;
}



/* Entry: 105905a70; end: 105905a77; -[SCStreamingMediaManager newURLProviderForLongformMedia] */

void FUN_105905a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be634d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__newURLProviderWithStreamingDele_1125766d0,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 105905a78; end: 105905a7f; -[SCStreamingMediaManager newMediaFetcher] */

void FUN_105905a78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__newMediaFetcherWithStreamingDel_112576600,0)
  ;
  return;
}



/* Entry: 105905a80; end: 105905a87; -[SCStreamingMediaManager newMediaFetcherForLongformMedia] */

void FUN_105905a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__newMediaFetcherWithStreamingDel_112576600,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 105905a88; end: 105905a8b; -[SCStreamingMediaManager clearCache] */

void FUN_105905a88(void)

{
  return;
}



/* Entry: 105905a8c; end: 105905b17; -[SCStreamingMediaManager _newURLProviderWithStreamingDelegate:] */

undefined * FUN_105905a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bfff0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03ee20();
  puVar2 = PTR_PTR_1126bfff8;
  _objc_alloc(PTR_PTR_1126bfff8);
  func_0x00010c057d00();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 105905b18; end: 105905b77; -[SCStreamingMediaManager _newMediaFetcherWithStreamingDelegate:] */

undefined * FUN_105905b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0000;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03ee40();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105905b78; end: 105905b7f; -[SCStreamingMediaManager requestHandler] */

undefined8 FUN_105905b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105905b80; end: 105905bd3; -[SCStreamingMediaManager .cxx_destruct] */

void FUN_105905b80(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105905bd4; end: 105905cdf; -[SCStreamingManifestFetchResult initWithMainManifestData:videoMediaManifestData:audioMediaManifestData:iframeMediaManifestData:] */

undefined1 *
FUN_105905bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eadc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105905ce0; end: 105905d03; -[SCStreamingManifestFetchResult copyWithZone:] */

undefined8 FUN_105905ce0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105905d04; end: 105905d8f; -[SCStreamingManifestFetchResult hash] */

undefined8 * FUN_105905d04(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105905e40:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105905e4c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_105905e4c;
            }
            goto LAB_105905e40;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105905e4c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105905d90; end: 105905e67; -[SCStreamingManifestFetchResult isEqual:] */

long FUN_105905d90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105905e40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105905e4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_105905e4c;
            }
            goto LAB_105905e40;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105905e4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105905e68; end: 105905e6f; -[SCStreamingManifestFetchResult mainManifestData] */

undefined8 FUN_105905e68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105905e70; end: 105905e77; -[SCStreamingManifestFetchResult videoMediaManifestData] */

undefined8 FUN_105905e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105905e78; end: 105905e7f; -[SCStreamingManifestFetchResult audioMediaManifestData] */

undefined8 FUN_105905e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105905e80; end: 105905e87; -[SCStreamingManifestFetchResult iframeMediaManifestData] */

undefined8 FUN_105905e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105905e88; end: 105905ecf; -[SCStreamingManifestFetchResult .cxx_destruct] */

void FUN_105905e88(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105905ed0; end: 105905fa7; -[SCStreamingMediaData initWithPreviewImage:overlayImage:videoAsset:] */

undefined1 *
FUN_105905ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eadc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105905fa8; end: 105905fcb; -[SCStreamingMediaData copyWithZone:] */

undefined8 FUN_105905fa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105905fcc; end: 10590604b; -[SCStreamingMediaData hash] */

undefined8 * FUN_105905fcc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1059060e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1059060f0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1059060f0;
          }
          goto LAB_1059060e4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1059060f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10590604c; end: 10590610b; -[SCStreamingMediaData isEqual:] */

long FUN_10590604c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059060e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059060f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1059060f0;
          }
          goto LAB_1059060e4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1059060f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10590610c; end: 105906113; -[SCStreamingMediaData previewImage] */

undefined8 FUN_10590610c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105906114; end: 10590611b; -[SCStreamingMediaData overlayImage] */

undefined8 FUN_105906114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10590611c; end: 105906123; -[SCStreamingMediaData videoAsset] */

undefined8 FUN_10590611c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105906124; end: 10590615f; -[SCStreamingMediaData .cxx_destruct] */

void FUN_105906124(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105906160; end: 105906273; -[SCStreamingRequestManagerInfo initWithRequestContexts:priority:connectivity:requestType:trackingInfo:postParameters:authenticated:useStreamingAPI:] */

undefined1 *
FUN_105906160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126eadd0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105906274; end: 105906297; -[SCStreamingRequestManagerInfo copyWithZone:] */

undefined8 FUN_105906274(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105906298; end: 10590633b; -[SCStreamingRequestManagerInfo hash] */

undefined8 * FUN_105906298(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  lStack_50 = -lVar4;
  if (-1 < lVar4) {
    lStack_50 = lVar4;
  }
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar2 = &uStack_68;
  uStack_40 = uVar1;
  func_0x000100505190(puVar2,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_105906424:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105906430;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((((puVar2[3] == param_3[3] && (puVar2[4] == param_3[4])) && (puVar2[5] == param_3[5])) &&
        ((*(char *)(puVar2 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar2 + 9) == *(char *)((long)param_3 + 9))))))) {
      lVar4 = puVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[6];
        if ((lVar4 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = (undefined8 *)puVar2[7];
          if (puVar5 != (undefined8 *)param_3[7]) {
            func_0x00010c071ae0();
            goto LAB_105906430;
          }
          goto LAB_105906424;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_105906430:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10590633c; end: 10590644b; -[SCStreamingRequestManagerInfo isEqual:] */

long FUN_10590633c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105906424:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105906430;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_105906430;
          }
          goto LAB_105906424;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105906430:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10590644c; end: 105906453; -[SCStreamingRequestManagerInfo requestContexts] */

undefined8 FUN_10590644c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105906454; end: 10590645b; -[SCStreamingRequestManagerInfo priority] */

undefined8 FUN_105906454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10590645c; end: 105906463; -[SCStreamingRequestManagerInfo connectivity] */

undefined8 FUN_10590645c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105906464; end: 10590646b; -[SCStreamingRequestManagerInfo requestType] */

undefined8 FUN_105906464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10590646c; end: 105906473; -[SCStreamingRequestManagerInfo trackingInfo] */

undefined8 FUN_10590646c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105906474; end: 10590647b; -[SCStreamingRequestManagerInfo postParameters] */

undefined8 FUN_105906474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10590647c; end: 105906483; -[SCStreamingRequestManagerInfo authenticated] */

undefined1 FUN_10590647c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105906484; end: 10590648b; -[SCStreamingRequestManagerInfo useStreamingAPI] */

undefined1 FUN_105906484(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10590648c; end: 1059064c7; -[SCStreamingRequestManagerInfo .cxx_destruct] */

void FUN_10590648c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1059064c8; end: 10590668f;  */

void FUN_1059064c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_3);
  func_0x00010c0c0320(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105906690; end: 1059066d7;  */

/* WARNING: Removing unreachable block (ram,0x000105909f64) */
/* WARNING: Removing unreachable block (ram,0x00010590a368) */

char * FUN_105906690(long param_1)

{
  char *pcVar1;
  undefined **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  char *pcVar10;
  char *pcVar11;
  char *in_x4;
  long lVar12;
  long *plVar13;
  undefined **unaff_x24;
  char *pcStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  char *pcStack_190;
  char *pcStack_188;
  undefined **ppuStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar12 = *(long *)(param_1 + 0x20);
  pcVar4 = *(char **)(param_1 + 0x28);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dfae38;
  pcVar10 = (char *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  ppuVar8 = ppuVar2;
  _objc_retain(pcVar4);
  _objc_retain(&PTR____CFConstantStringClassReference_110dfae38);
  if (lVar12 != 0) {
    plVar13 = *(long **)(lVar12 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = (undefined **)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(&PTR____CFConstantStringClassReference_110dfae38);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dfae38);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110dfae38);
    _objc_release(&PTR____CFConstantStringClassReference_110dfae38);
    func_0x00010002b838(auStack_60,ppuVar2);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    ppuVar8 = &puStack_98;
    pcVar10 = (char *)0x1;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    ppuStack_80 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar12 = 0;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dfae38);
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dfae38);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dfae38);
  _objc_release(pcVar4);
  __Unwind_Resume();
  ppuVar9 = &puStack_160;
  pcStack_a8 = FUN_10590a0e0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  ppuVar2 = ppuVar8;
  pcVar11 = pcVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(ppuVar8);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_140,pcVar4);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar8);
      pcVar4 = (char *)ppuVar8;
      func_0x00010bdc3520(ppuVar8);
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_128,pcVar4);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar4 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_110,pcVar4);
    puStack_160 = (undefined *)0x0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&puStack_160,auStack_140,&lStack_f8,3);
    pcVar4 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bf6c8,&puStack_160,in_x4);
    puStack_148 = (undefined1 *)&puStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar12 = 0;
    ppuVar2 = ppuVar9;
    pcVar11 = in_x4;
    do {
      if ((&cStack_f9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &puStack_160;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(ppuVar8);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    puStack_198 = auStack_140;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != (undefined **)puStack_198);
    _objc_release(pcVar10);
    _objc_release(ppuVar8);
    _objc_release(pcVar1);
    pcVar5 = pcVar3;
    __Unwind_Resume();
    pcStack_168 = FUN_10590a3a0;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar9 = ppuVar2;
    puStack_1a0 = unaff_x24;
    pcStack_190 = pcVar3;
    pcStack_188 = pcVar10;
    ppuStack_180 = ppuVar8;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_b0;
    _objc_retain(pcVar4);
    _objc_retain(ppuVar2);
    if (pcVar5 != (char *)0x0) {
      plVar13 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(ppuVar2);
      if (ppuVar2 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar2);
        pcVar1 = (char *)ppuVar2;
        func_0x00010bdc3520(ppuVar2);
      }
      _objc_release(ppuVar2);
      func_0x00010002b838(auStack_1c0,pcVar1);
      puStack_1f8 = (undefined *)0x0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&puStack_1f8,auStack_1d8,&lStack_1a8,2);
      ppuVar9 = &puStack_1f8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bf718,ppuVar9,pcVar11);
      ppuStack_1e0 = &puStack_1f8;
      func_0x00010007e5dc(&ppuStack_1e0);
      lVar12 = 0;
      do {
        if ((&cStack_1a9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(ppuVar2);
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(ppuVar2);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(ppuVar2);
      _objc_release(pcVar4);
      __Unwind_Resume();
      ppcVar6 = &pcStack_230;
      pcStack_208 = FUN_10590a5d0;
      ppuStack_220 = ppuVar2;
      pcStack_218 = pcVar4;
      pppuStack_210 = &ppuStack_170;
      _objc_retain(ppuVar9);
      puStack_228 = PTR_PTR_1126eae00;
      pcStack_230 = pcVar1;
      _objc_msgSendSuper2(&pcStack_230,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        _objc_retain(ppuVar9);
        uVar7 = *(undefined8 *)((long)ppcVar6 + 8);
        *(undefined ***)((long)ppcVar6 + 8) = ppuVar9;
        _objc_release(uVar7);
      }
      _objc_release(ppuVar9);
      return (char *)ppcVar6;
    }
    return pcVar1;
  }
  return pcVar3;
}



/* Entry: 1059066d8; end: 10590674f;  */

void FUN_1059066d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_10590a0e0(uVar1,uVar2,puVar4,&PTR____CFConstantStringClassReference_110e0ce78,1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105906750; end: 105906753;  */

void FUN_105906750(void)

{
  return;
}



/* Entry: 105906754; end: 1059068a7;  */

char * FUN_105906754(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  char *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar8 = *(long *)(param_1 + 0x20);
  pcVar1 = *(char **)(param_1 + 0x28);
  if (param_2 == 2) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e0cdf8;
  }
  else {
    if (param_2 != 1) {
      pcVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      FUN_10590a3a0(lVar8,pcVar1,pcVar3,1);
      _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
      return pcVar2;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e0ce18;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar6;
  _objc_retain(pcVar1);
  _objc_retain(ppuVar6);
  if (lVar8 != 0) {
    plVar9 = *(long **)(lVar8 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar6);
      pcVar2 = (char *)ppuVar6;
      func_0x00010bdc3520(ppuVar6);
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_60,pcVar2);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    ppuVar7 = &puStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108bf718,ppuVar7,1);
    ppuStack_80 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar8 = 0;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(ppuVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(ppuVar6);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar4 = &pcStack_d0;
  pcStack_a8 = FUN_10590a5d0;
  ppuStack_c0 = ppuVar6;
  pcStack_b8 = pcVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  puStack_c8 = PTR_PTR_1126eae00;
  pcStack_d0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(ppuVar7);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined ***)((long)ppcVar4 + 8) = ppuVar7;
    _objc_release(uVar5);
  }
  _objc_release(ppuVar7);
  return (char *)ppcVar4;
}



/* Entry: 1059068a8; end: 1059069df;  */

undefined8 FUN_1059068a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf32ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110deec98);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf32ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110dada18);
    if (lVar1 == 0) {
      uVar2 = 1;
    }
    else {
      lVar1 = param_1;
      func_0x00010bf32ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110deecb8);
      if (lVar1 == 0) {
        uVar2 = 3;
      }
      else {
        lVar1 = param_1;
        func_0x00010bf32ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110deecd8);
        if (lVar1 == 0) {
          uVar2 = 2;
        }
        else {
          lVar1 = param_1;
          func_0x00010bf32ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0ce98);
          uVar2 = 4;
          if (lVar1 != 0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1059069e0; end: 105906b2b;  */

void FUN_1059069e0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar1 = param_3;
    func_0x00010bfe02c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c252ee0(param_3);
    if (param_2 == 0) {
      uVar3 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,uVar1,uVar2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar1);
      lVar5 = *(long *)(param_1 + 0x20);
      uVar1 = param_3;
      func_0x00010bfe02c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c252ee0(param_3);
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,uVar1,uVar2,puVar4);
      _objc_release(puVar4);
    }
    else {
      (**(code **)(lVar5 + 0x10))(lVar5,param_2,uVar1,uVar2,0);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105906b2c; end: 105906c4b;  */

void FUN_105906b2c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_2 != 0) {
    func_0x00010c11f4c0();
    func_0x00010b2918e8();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  puVar2 = PTR_PTR_1126bffc8;
  _objc_alloc(PTR_PTR_1126bffc8);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f9c0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    __Block_object_assign(param_1 + 0x20,*(undefined8 *)(lVar4 + 0x20),7);
    __Block_object_assign(param_1 + 0x28,*(undefined8 *)(lVar4 + 0x28),8);
    __Block_object_assign(param_1 + 0x30,*(undefined8 *)(lVar4 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(lVar4 + 0x38),8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105906c4c; end: 105906d03;  */

void FUN_105906c4c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 105906d04; end: 105906da3; -[SCWebProxyRequestTracker init] */

undefined1 * FUN_105906d04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eadd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105906da4; end: 105906e83; -[SCWebProxyRequestTracker totalInFlightRequestsWithKey:] */

undefined8 FUN_105906da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[3];
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105906e84; end: 105906ecb;  */

void FUN_105906e84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105906ecc; end: 105906fd7; -[SCWebProxyRequestTracker didStartHandlingRequestWithKey:] */

void FUN_105906ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105906f5c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105906fd8; end: 1059070ff; -[SCWebProxyRequestTracker didFinishHandlingRequestWithKey:] */

void FUN_105906fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105907068;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105907100; end: 10590712f; -[SCWebProxyRequestTracker .cxx_destruct] */

void FUN_105907100(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105907130; end: 1059071eb; -[SCWebProxyURLProvider initWithDelegate:useSimplifiedProxyURLs:] */

undefined1 *
FUN_105907130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eade0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)((long)puVar1 + 0x20);
    _objc_storeWeak(puVar2,param_3);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059071ec; end: 105907507; -[SCWebProxyURLProvider requestInfoForProxiedURL:] */

undefined ** FUN_1059071ec(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **unaff_x22;
  undefined *puVar9;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 3) == '\x01') {
    param_1 = param_3;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_1;
    func_0x00010bf529e0();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar8 == (undefined **)0x3) {
      ppuVar1 = param_1;
      func_0x00010bf529e0(param_1);
      ppuVar8 = param_1;
      func_0x00010c0dfd40(param_1,param_2,(long)ppuVar1 + -2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28f460(ppuVar2,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = param_1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = ppuVar1;
      func_0x00010bdc2c60(ppuVar1,param_2,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
      _objc_release(ppuVar1);
      ppuVar8 = (undefined **)PTR_PTR_1126bfe90;
      _objc_alloc();
      ppuVar1 = unaff_x24;
      func_0x00010c05a140();
      _objc_release(unaff_x24);
      _objc_release(ppuVar2);
      unaff_x23 = ppuVar2;
    }
    else {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_release(param_1);
  }
  else {
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuStack_138 = unaff_x22;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &puStack_130;
    unaff_x24 = unaff_x22;
    func_0x00010bf52a60();
    if (unaff_x24 != (undefined **)0x0) {
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x25 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
          unaff_x26 = unaff_x25;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = unaff_x26;
          ppuVar1 = &PTR____CFConstantStringClassReference_110de13f8;
          func_0x00010bf32ee0();
          _objc_release(unaff_x26);
          if (ppuVar8 == (undefined **)0x0) {
            unaff_x23 = unaff_x25;
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105907430;
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (unaff_x24 != unaff_x28);
        ppuVar1 = &puStack_130;
        unaff_x24 = unaff_x22;
        func_0x00010bf52a60();
      } while (unaff_x24 != (undefined **)0x0);
    }
    unaff_x23 = (undefined **)0x0;
LAB_105907430:
    _objc_release(unaff_x22);
    _objc_release(ppuStack_138);
    ppuVar8 = unaff_x23;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      _objc_retain(param_1);
      _objc_sync_enter(param_1);
      ppuVar8 = (undefined **)param_1[2];
      ppuVar1 = unaff_x23;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_exit(param_1);
      _objc_release(param_1);
    }
    _objc_release(unaff_x23);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_sync_exit(param_1);
    ppuVar2 = param_3;
    __Unwind_Resume();
    pcStack_148 = FUN_105907508;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1a0 = unaff_x28;
    lStack_198 = unaff_x27;
    ppuStack_190 = unaff_x26;
    ppuStack_188 = unaff_x25;
    ppuStack_180 = unaff_x24;
    ppuStack_178 = unaff_x23;
    ppuStack_170 = unaff_x22;
    ppuStack_168 = ppuVar8;
    ppuStack_160 = param_1;
    ppuStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = ppuVar2 + 4;
      _objc_loadWeakRetained();
      ppuVar3 = ppuVar8;
      func_0x00010c11a040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (*(char *)(ppuVar2 + 3) == '\x01') {
        ppuVar8 = ppuVar1;
        func_0x00010c28f340(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar8;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar8 = ppuVar1;
        func_0x00010c28f340(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar8;
        func_0x00010bdc2cc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28f480(puVar6,param_2,ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar8);
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad360(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar6,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar4;
        func_0x00010bdc2c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(puVar6);
        _objc_release(ppuVar2);
      }
      else {
        puVar9 = ppuVar2[1];
        _objc_retain(ppuVar1);
        _objc_retain(puVar9);
        ppuVar8 = ppuVar1;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar8;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar1;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110df2d98);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar8);
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bdc35a0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_retain(ppuVar2);
        _objc_sync_enter(ppuVar2);
        func_0x00010c1d0640(ppuVar2[2],param_2,ppuVar1,puVar9);
        _objc_sync_exit(ppuVar2);
        _objc_release(ppuVar2);
        ppuVar2 = ppuVar1;
        func_0x00010c28f340(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
        ppuVar8 = ppuVar2;
        if (ppuVar3 != (undefined **)0x0) {
          _objc_retain(ppuVar3);
          _objc_retain(puVar9);
          _objc_alloc();
          func_0x00010c02dc20();
          _objc_release(puVar9);
          ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
          func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,ppuVar3,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          func_0x00010c0f5800(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d9820(ppuVar4,param_2,ppuVar8);
          _objc_release(ppuVar8);
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1b0 = puVar6;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b0,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e6460(ppuVar4,param_2,puVar7);
          _objc_release(puVar7);
          ppuVar8 = ppuVar4;
          func_0x00010bdc2b80(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          _objc_release(puVar6);
          _objc_release(ppuVar2);
        }
        _objc_release(puVar9);
      }
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_sync_exit(ppuVar8);
      __Unwind_Resume(ppuVar1);
      return (undefined **)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return ppuVar8;
}



/* Entry: 105907508; end: 1059078e3; -[SCWebProxyURLProvider proxiedURLForRequestInfo:] */

undefined * FUN_105907508(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c11a040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (*(char *)(param_1 + 0x18) == '\x01') {
      puVar7 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010c0899c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar7 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010bdc2cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28f480(puVar3,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar7);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad360(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bdc2c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 8);
      _objc_retain(param_3);
      _objc_retain(uVar8);
      puVar3 = param_3;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110df2d98);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bdc35a0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_retain(param_1);
      _objc_sync_enter(param_1);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar4);
      _objc_sync_exit(param_1);
      _objc_release(param_1);
      puVar5 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      puVar7 = puVar5;
      if (lVar2 != 0) {
        _objc_retain(lVar2);
        _objc_retain(puVar4);
        _objc_alloc();
        func_0x00010c02dc20();
        _objc_release(puVar4);
        puVar6 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
        func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,lVar2,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010c0f5800(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9820(puVar6,param_2,puVar7);
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e6460(puVar6,param_2,puVar7);
        _objc_release(puVar7);
        puVar7 = puVar6;
        func_0x00010bdc2b80(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar7);
  __Unwind_Resume(param_3);
  return (undefined *)0x0;
}



/* Entry: 1059078e4; end: 1059078eb; -[SCWebProxyURLProvider proxiedURLForURL:] */

undefined8 FUN_1059078e4(void)

{
  return 0;
}



/* Entry: 1059078ec; end: 1059078f3; -[SCWebProxyURLProvider originalUrlForProxied:] */

undefined8 FUN_1059078ec(void)

{
  return 0;
}



/* Entry: 1059078f4; end: 10590790b; -[SCWebProxyURLProvider delegate] */

void FUN_1059078f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10590790c; end: 105907943; -[SCWebProxyURLProvider .cxx_destruct] */

void FUN_10590790c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105907944; end: 10590797f; -[SCWebProxyServerState init] */

void FUN_105907944(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126eade8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 105907980; end: 10590798f; -[SCWebProxyServerState canStartServer] */

byte FUN_105907980(long param_1)

{
  return (*(byte *)(param_1 + 9) ^ 0xff) & 1;
}



/* Entry: 105907990; end: 1059079ab; -[SCWebProxyServerState isServerRunningInForeground] */

byte FUN_105907990(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1059079ac; end: 1059079b7; -[SCWebProxyServerState appDidEnterBackground] */

void FUN_1059079ac(long param_1)

{
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



/* Entry: 1059079b8; end: 1059079bf; -[SCWebProxyServerState appWillEnterForeground] */

void FUN_1059079b8(long param_1)

{
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 1059079c0; end: 1059079c7; -[SCWebProxyServerState serverDidStop] */

void FUN_1059079c0(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1059079c8; end: 1059079d3; -[SCWebProxyServerState serverDidStart] */

void FUN_1059079c8(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1059079d4; end: 105907d7f; -[SCWebProxyServer initWithRequestHandler:applicationLifecycleEvents:useLastWebServerPortOnAppBackground:] */

undefined8 *
FUN_1059079d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR_PTR_1126eadf0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 0xb) = param_5;
    _objc_storeWeak(puVar1 + 0xe,param_3);
    uVar4 = param_3;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = puVar1[10];
    puVar1[10] = uVar3;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126bffc0;
    _objc_alloc();
    puVar6 = puVar1 + 0xe;
    _objc_loadWeakRetained(puVar6);
    func_0x00010c2909c0();
    func_0x00010c00b260();
    uVar4 = puVar1[1];
    puVar1[1] = puVar5;
    _objc_release(uVar4);
    _objc_release(puVar6);
    puVar1[3] = 0;
    uVar4 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar5 = PTR_PTR_1126c0008;
    _objc_alloc_init();
    uVar4 = puVar1[8];
    puVar1[8] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[9];
    puVar1[9] = puVar5;
    _objc_release(uVar4);
    _objc_initWeak(auStack_90,puVar1);
    uVar4 = param_4;
    func_0x00010bf75dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105907d80;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    if (*(char *)(puVar1 + 0xb) == '\x01') {
      puVar7 = PTR_PTR_1126c0010;
      _objc_opt_new();
      uVar4 = puVar1[0xd];
      puVar1[0xd] = puVar7;
      _objc_release(uVar4);
      uVar4 = param_4;
      func_0x00010c2a6420(param_4);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar5;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x105907db4;
      puStack_c8 = &UNK_110857468;
      _objc_copyWeak(auStack_c0,auStack_90);
      uVar2 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_c0);
    }
    uVar4 = param_4;
    func_0x00010c2a6420(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[7];
    puVar1[7] = puVar5;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105907d80; end: 105907de7;  */

void FUN_105907d80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfd8e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105907de8; end: 105907f37;  */

void FUN_105907de8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126ae960;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bdfe0;
    func_0x00010c2a3ac0(PTR_PTR_1126bdfe0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c49e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126aeec0;
    puVar4 = PTR_PTR_1126ae970;
    func_0x00010bfe2ec0(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    func_0x00010bf0cac0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105907f38; end: 105907f6b;  */

void FUN_105907f38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec23e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105907f6c; end: 105907fb7; -[SCWebProxyServer dealloc] */

void FUN_105907f6c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c255780();
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x48));
  puStack_28 = PTR_PTR_1126eadf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105907fb8; end: 1059081ef; -[SCWebProxyServer start] */

void FUN_105907fb8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c07cd60();
  if ((uVar1 & 1) == 0) {
    func_0x00010be3aa40(param_1);
    ppuStack_88 = &PTR____CFConstantStringClassReference_110ebf298;
    uVar1 = *(ulong *)(param_1 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18)
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1e28;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110ebf2d8;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110ebf318;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110ebf338;
    puStack_58 = PTR____kCFBooleanFalse_11034ab60;
    ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1e40;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_68 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_88,4)
    ;
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = (undefined **)0x0;
    func_0x00010c251b80(uVar1,param_2,puVar3,&ppuStack_90);
    ppuVar8 = ppuStack_90;
    _objc_retain(ppuStack_90);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (ppuVar8 == (undefined **)0x0 && (uVar1 & 1) == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e0ced8;
      func_0x00010b291824(&PTR____CFConstantStringClassReference_110e0ced8);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar6);
    if ((int)uVar1 != 0) {
      func_0x00010c15f0e0(*(undefined8 *)(param_1 + 0x68));
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar2;
      _objc_release(uVar6);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c104060();
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c15f660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  else {
    ppuVar8 = (undefined **)0x0;
  }
  _objc_sync_exit(param_1);
  lVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_sync_enter(lVar5);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x00010c255780();
    uVar6 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x10) = 0;
    _objc_release(uVar6);
    *(undefined1 *)(lVar5 + 0x30) = 0;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = 0;
    _objc_release(uVar6);
    func_0x00010c15f100(*(undefined8 *)(lVar5 + 0x68));
    func_0x00010bf86d80(*(undefined8 *)(lVar5 + 0x38));
  }
  _objc_sync_exit(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1059081f0; end: 10590826f; -[SCWebProxyServer stop] */

void FUN_1059081f0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c255780();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x30) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    func_0x00010c15f100(*(undefined8 *)(param_1 + 0x68));
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105908270; end: 1059082db; -[SCWebProxyServer forceRestart] */

void FUN_105908270(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010c255780(param_1);
  uVar1 = param_1;
  func_0x00010c24d960(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059082dc; end: 105908337; -[SCWebProxyServer isRunning] */

undefined8 FUN_1059082dc(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c07cd60(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105908338; end: 10590840b; -[SCWebProxyServer isProxiedURL:] */

bool FUN_105908338(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010c104060(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c282760();
    bVar1 = *(ulong *)(param_1 + 0x18) == (uVar4 & 0xffffffff);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10590840c; end: 1059084af; -[SCWebProxyServer proxiedURLForRequestInfo:] */

void FUN_10590840c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
    func_0x00010bf2d940();
    if (iVar1 != 0) goto LAB_105908444;
  }
  else {
LAB_105908444:
    lVar2 = param_1;
    func_0x00010c24d960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      goto LAB_105908494;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c119ca0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_105908494:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059084b0; end: 10590863f; -[SCWebProxyServer _initWebServerObservers] */

void FUN_1059084b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a3b20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105908640;
  puStack_68 = &UNK_11084fd28;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a3b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105908640; end: 1059086df;  */

void FUN_105908640(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x000105906804(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059086e0; end: 1059087bb; -[SCWebProxyServer _initWebServerIfNeeded] */

void FUN_1059086e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR_PTR_1126c0018;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    func_0x00010be3aa60(param_1);
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bef9100(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1059087bc; end: 105908877;  */

void FUN_1059087bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0020;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c02bcc0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105908878; end: 1059088e7;  */

void FUN_105908878(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be33540(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059088e8; end: 105908ecb; -[SCWebProxyServer _handleWebServerRequest:completion:] */

void FUN_1059088e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar15 = *(long *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1358a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar15 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    _objc_retain(param_3);
    _objc_retain(lVar15);
    uVar2 = param_3;
    func_0x00010bfe02c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010b291ca4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12d3e0(uVar4);
    func_0x00010c12d3e0(uVar4);
    func_0x00010c12d3e0(uVar4);
    func_0x00010c12d3e0(uVar4);
    uVar2 = param_3;
    func_0x00010c0cc940(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    FUN_1059068a8(uVar2);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126bffc8;
    _objc_alloc();
    puVar6 = puVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f9c0();
    _objc_release(lVar15);
    _objc_release(puVar6);
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126b2798;
    _objc_opt_new();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_288 = 0xc2000000;
    pcStack_280 = FUN_105908ecc;
    puStack_278 = &UNK_110842e18;
    _objc_retain();
    puStack_270 = puVar7;
    _objc_retain(param_4);
    _objc_retain(&puStack_290);
    puStack_268 = puVar1;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_105909ac4;
    puStack_250 = &UNK_1108bf648;
    puStack_248 = (undefined *)param_4;
    ppuStack_240 = &puStack_290;
    _objc_retain(param_4);
    ppuVar8 = &puStack_268;
    _objc_retainBlock();
    _objc_release(ppuStack_240);
    _objc_release(puStack_248);
    _objc_release(param_4);
    _objc_retain(puVar5);
    _objc_retain(ppuVar8);
    puVar6 = &UNK_10f30b0c2;
    _dispatch_queue_create(&UNK_10f30b0c2,0);
    uStack_a8 = 0;
    uStack_98 = 0x2020000000;
    uStack_90 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_10590936c;
    uStack_b8 = 0x10590937c;
    uStack_b0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_10590936c;
    uStack_e8 = 0x10590937c;
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_d0 = &uStack_d8;
    puStack_a0 = &uStack_a8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_118 = 0x2020000000;
    uStack_110 = 0;
    uStack_158 = 0;
    uStack_148 = 0x3032000000;
    pcStack_140 = FUN_105909384;
    pcStack_138 = FUN_1059093ac;
    uStack_130 = 0;
    puStack_198 = puVar1;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1059093b4;
    puStack_180 = &UNK_1108bf528;
    puStack_160 = &uStack_108;
    ppuVar10 = &puStack_198;
    puStack_178 = &uStack_158;
    puStack_170 = &uStack_d8;
    puStack_168 = &uStack_a8;
    puStack_150 = &uStack_158;
    puStack_120 = &uStack_128;
    puStack_e0 = puVar9;
    _objc_retainBlock();
    puStack_1d8 = puVar1;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x105909538;
    puStack_1c0 = &UNK_1108bf588;
    _objc_retain(puVar6);
    puStack_1b8 = puVar6;
    puStack_1a8 = &uStack_158;
    puStack_1a0 = &uStack_a8;
    _objc_retain(ppuVar10);
    ppuVar11 = &puStack_1d8;
    ppuStack_1b0 = ppuVar10;
    _objc_retainBlock();
    puStack_208 = puVar1;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_105909634;
    puStack_1f0 = &UNK_1108bf5b8;
    ppuStack_1e8 = ppuVar8;
    puStack_1e0 = &uStack_128;
    _objc_retain(ppuVar8);
    ppuVar12 = &puStack_208;
    _objc_retainBlock();
    puStack_268 = puVar1;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_1059096ec;
    puStack_250 = &UNK_1108bf618;
    puStack_218 = &uStack_d8;
    puStack_210 = &uStack_108;
    puStack_248 = puVar6;
    ppuStack_240 = (undefined **)puVar5;
    ppuStack_238 = ppuVar12;
    ppuStack_230 = ppuVar10;
    ppuStack_228 = ppuVar11;
    puStack_220 = &uStack_a8;
    _objc_retain(puVar6);
    _objc_retain(ppuVar12);
    _objc_retain(puVar5);
    _objc_retain(ppuVar10);
    _objc_retain(ppuVar11);
    ppuVar13 = &puStack_268;
    _objc_retainBlock(ppuVar13);
    _objc_release(ppuStack_228);
    _objc_release(ppuStack_230);
    _objc_release(ppuStack_240);
    _objc_release(ppuStack_238);
    _objc_release(puStack_248);
    _objc_release(ppuVar12);
    _objc_release(ppuStack_1e8);
    _objc_release(ppuVar11);
    _objc_release(ppuStack_1b0);
    _objc_release(puStack_1b8);
    _objc_release(ppuVar10);
    __Block_object_dispose(&uStack_158,8);
    _objc_release(uStack_130);
    __Block_object_dispose(&uStack_128,8);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(puStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar8);
    __Block_object_dispose(&uStack_a8,8);
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained();
    lVar14 = param_1;
    func_0x00010bfd2b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bef7460(puVar7);
    _objc_release(lVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar8);
    _objc_release(puStack_270);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(lVar15);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105908ecc; end: 105908ed3;  */

void FUN_105908ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105908ed4; end: 105908f57; -[SCWebProxyServer _didEnterBackground] */

void FUN_105908ed4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf04f80(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c255780(param_1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105908f58; end: 105908fa7; -[SCWebProxyServer _willEnterForeground] */

void FUN_105908f58(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010bf06700(*(undefined8 *)(param_1 + 0x68));
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105908fa8; end: 10590905f; -[SCWebProxyServer _startupComplete] */

void FUN_105908fa8(double param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_sync_enter(param_2);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(long *)(param_2 + 0x60) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar1);
      if (1800.0 < param_1) {
        func_0x00010c255780(param_2);
      }
    }
    func_0x00010c24d960(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105909060; end: 1059091bb; -[SCWebProxyServer proxyURLProvider:baseURLForRequestInfo:] */

void FUN_105909060(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c15f660(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
    func_0x00010c07d9e0();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        puVar3 = param_4;
        func_0x00010c28f340(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf16280();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110e0cef8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar2,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x10);
      func_0x00010c15f660(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059091bc; end: 1059091ff; -[SCWebProxyServer _debugIdentifier] */

void FUN_1059091bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
  return;
}



/* Entry: 105909200; end: 1059092bb; -[SCWebProxyServer _serverState] */

void FUN_105909200(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c07cd60(uVar1);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0cf38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059092bc; end: 1059092d3; -[SCWebProxyServer requestHandler] */

void FUN_1059092bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059092d4; end: 10590936b; -[SCWebProxyServer .cxx_destruct] */

void FUN_1059092d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10590936c; end: 105909383;  */

void FUN_10590936c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105909384; end: 1059093ab;  */

void FUN_105909384(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1059093ac; end: 1059093b3;  */

void FUN_1059093ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059093b4; end: 1059095ef;  */

void FUN_1059093b4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  if (lVar2 != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = 0;
      _objc_release(uVar3);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
                 PTR_s_removeAllObjects_112628590);
      return;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      if (*(char *)(lVar2 + 0x18) == '\x01') {
        *(undefined1 *)(lVar2 + 0x18) = 1;
      }
      else {
        lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          bVar1 = false;
        }
        else {
          lVar4 = lVar2;
          func_0x00010c08fa60();
          bVar1 = lVar4 == 0;
        }
        *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = bVar1;
        _objc_release(lVar2);
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010bfb1920(uVar3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar3,0);
      _objc_release(uVar3);
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = 0;
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
                 PTR_s_removeObjectAtIndex__112628f10,0);
      return;
    }
  }
  return;
}


