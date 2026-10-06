/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106911bf4; end: 106912263; -[SCSpotlightStoriesPrefetcherV2 initWithFeedType:spotlightMediaFetcherFactory:discoverFeedCollection:spotlightDisplayOrdererFactory:networkConnectivityMonitor:readReceiptCoordinator:circumstanceEngine:contextSpotlightDataFetcher:appStartReader:spotlightOperaLifecycleTracker:discoverFeedDataFetcher:mixerNetworkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:snapchattersDataFetcher:locationProvider:adRenderDataParser:discoverFeedDataMutator:contentObjectResolver:] */

undefined8 *
FUN_106911bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f3d08;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x15] = param_3;
    _objc_retain(param_9);
    uVar2 = puVar1[1];
    puVar1[1] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[2];
    puVar1[2] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x21];
    puVar1[0x21] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf87080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x25) = 0;
    puVar1[0x1a] = 2;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_6);
  }
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
  return puVar1;
}



/* Entry: 106912264; end: 106912343;  */

void FUN_106912264(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24b200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106912344; end: 1069123a7; -[SCSpotlightStoriesPrefetcherV2 dealloc] */

void FUN_106912344(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f3d08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069123a8; end: 1069124a3; -[SCSpotlightStoriesPrefetcherV2 _processReceiptAndRemoveStoryToPrefetch:] */

void FUN_1069123a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x100));
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x138);
    *(undefined **)(param_1 + 0x138) = puVar1;
    _objc_release(uVar5);
    lVar4 = param_3;
    func_0x00010c2827c0();
    lVar2 = *(long *)(param_1 + 0xe0);
    func_0x00010bf529e0();
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_1069124a4;
    puStack_40 = &UNK_11094a000;
    lStack_38 = lVar4;
    func_0x0001006372a4(uVar3,&puStack_58);
    uVar5 = uVar3;
    func_0x00010c0d3c80();
    uVar6 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0xe0);
    func_0x00010bf529e0();
    if (lVar2 != lVar4) {
      func_0x00010be089e0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069124a4; end: 1069124d3;  */

bool FUN_1069124a4(long param_1,long param_2)

{
  func_0x00010c259740(param_2);
  return param_2 != *(long *)(param_1 + 0x20);
}



/* Entry: 1069124d4; end: 10691251f; -[SCSpotlightStoriesPrefetcherV2 _enableAndTriggerPrefetching] */

void FUN_1069124d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 0xb8) = 0x40dc200000000000;
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000108f4ad18();
  *(undefined8 *)(param_2 + 0xc0) = uVar1;
  func_0x000108f4ad60(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 0xb0) = param_1;
  *(undefined1 *)(param_2 + 0xd8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010becfd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__triggerPrefetching_1125918f0);
  return;
}



/* Entry: 106912520; end: 1069125a7; -[SCSpotlightStoriesPrefetcherV2 _setStoriesOrder:] */

void FUN_106912520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069125a8;
  puStack_30 = &UNK_1108f1040;
  lStack_28 = param_1;
  func_0x0001006372a4(param_3,&puStack_48);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  func_0x00010becfd20(param_1);
  return;
}



/* Entry: 1069125a8; end: 10691263b;  */

uint FUN_1069125a8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0741a0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar1 & 1) == 0) {
    func_0x00010c259740(param_2);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100);
    func_0x00010bf4b900(uVar3);
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(puVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10691263c; end: 106912643; -[SCSpotlightStoriesPrefetcherV2 _setMediaStateTarget:] */

void FUN_10691263c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010becfd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerPrefetching_1125918f0);
  return;
}



/* Entry: 106912644; end: 106912a67; -[SCSpotlightStoriesPrefetcherV2 startListener] */

void FUN_106912644(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    *(undefined1 *)(param_1 + 200) = 1;
    _objc_initWeak(auStack_80,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106912a68;
    puStack_90 = &UNK_11094a020;
    _objc_retain(uVar8);
    uVar3 = uVar7;
    uStack_88 = uVar8;
    func_0x00010c0b8600(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106912ab4;
    puStack_b8 = &UNK_110842a38;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c25a440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106912b1c;
    puStack_e0 = &UNK_1108531d0;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar6 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    uStack_100 = *(undefined8 *)(param_1 + 0xa8);
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x106912b64;
    puStack_110 = &UNK_110846540;
    _objc_copyWeak(auStack_108,auStack_80);
    func_0x00010c0f7fc0(uVar7);
    puStack_140 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x2020000000;
    uStack_130 = 1;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0ece20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_150,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_150);
    __Block_object_dispose(&uStack_148,8);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_80);
  }
  return;
}



/* Entry: 106912a68; end: 106912ab3;  */

void FUN_106912a68(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5e480();
  if (param_2 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000108f4a9dc(uVar2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 106912ab4; end: 106912b1b;  */

void FUN_106912ab4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0();
  _objc_release(param_2);
  func_0x00010bea5860(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106912b1c; end: 106912b8f;  */

void FUN_106912b1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106912b90; end: 106912c2f;  */

void FUN_106912b90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee02a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea7f60();
  _objc_release(lVar1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be4daa0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106912c30; end: 106912c7b; -[SCSpotlightStoriesPrefetcherV2 _updateInitialMediaStates:] */

void FUN_106912c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001006decbc(param_3,*(undefined8 *)(param_1 + 0xf8));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106912c7c; end: 106912e6b; -[SCSpotlightStoriesPrefetcherV2 _updateSnapIdToDedupeFpMap:] */

void FUN_106912c7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar9 = *(long *)(lVar10 * 8);
      func_0x00010c259740(lVar9);
      func_0x00010c0df880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(param_1 + 0x110);
      func_0x00010bf4b900();
      if ((uVar5 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x110));
        func_0x000108f4bc08();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar9;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar8 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar9);
            }
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x108));
            lVar8 = lVar8 + 1;
          } while (lVar6 != lVar8);
          lVar6 = lVar9;
          func_0x00010bf52a60();
        }
        _objc_release(lVar9);
      }
      _objc_release(puVar4);
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar3);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x140),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 106912e6c; end: 106912e73; -[SCSpotlightStoriesPrefetcherV2 prefetchedBufferCount] */

void FUN_106912e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 106912e74; end: 106912f0b; -[SCSpotlightStoriesPrefetcherV2 removeDedupeFpFromPrefetchList:] */

void FUN_106912e74(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106912f0c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106912f0c; end: 106912f57;  */

void FUN_106912f0c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x100);
  func_0x00010bf4b900(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110);
    func_0x00010bf4b900();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be81f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__processReceiptAndRemoveStoryToP_11257e178,
                 *(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}



/* Entry: 106912f58; end: 10691303b; -[SCSpotlightStoriesPrefetcherV2 prefetchStoriesForNotificationCompositeStoryIds:] */

void FUN_106912f58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10691303c; end: 1069131f3;  */

void FUN_10691303c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar11;
  long lVar12;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar5 = lVar10;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x24 = *(long *)(lStack_128 + lVar12 * 8);
        lVar6 = unaff_x24;
        func_0x00010c08fa60();
        if (lVar6 != 0) {
          unaff_x23 = unaff_x24;
          func_0x000108f51d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = *(long *)(lVar3 + 0x50);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x26;
          func_0x00010c25baa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          if (unaff_x25 == 0) {
            func_0x00010befa120(puVar4);
          }
          else {
            func_0x00010becfd00(lVar3);
          }
          _objc_release(unaff_x25);
          _objc_release(unaff_x23);
        }
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar10;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar5 != 0);
  }
  _objc_release(lVar10);
  puVar9 = puVar4;
  func_0x00010be147e0(lVar3);
  _objc_release(puVar4);
  lVar5 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1069131f4;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  lStack_158 = lVar10;
  puStack_150 = puVar4;
  lStack_148 = lVar3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  puVar4 = puVar9;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    _objc_initWeak(auStack_188,lVar5);
    uVar7 = *(undefined8 *)(lVar5 + 0x58);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar5 + 0x60);
    uVar2 = *(undefined8 *)(lVar5 + 0x68);
    uVar8 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_10691336c;
    puStack_1a0 = &UNK_110853590;
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(puVar9);
    puStack_198 = puVar9;
    func_0x00010846e82c(uVar7,3,&PTR____CFConstantStringClassReference_110e64cd8,uVar1,uVar2,puVar9,
                        0,uVar8,&puStack_1b8,*(undefined8 *)(lVar5 + 0x70),
                        *(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x78),
                        *(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x80),
                        *(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x98));
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puStack_198);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
  }
  _objc_release(puVar9);
  return;
}



/* Entry: 1069131f4; end: 10691336b; -[SCSpotlightStoriesPrefetcherV2 _fetchStoriesFromMixer:] */

void FUN_1069131f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar5 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10691336c;
    puStack_70 = &UNK_110853590;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    lStack_68 = param_3;
    func_0x00010846e82c(uVar4,3,&PTR____CFConstantStringClassReference_110e64cd8,uVar1,uVar2,param_3
                        ,0,uVar5,&puStack_88,*(undefined8 *)(param_1 + 0x70),
                        *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x80),
                        *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x98));
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10691336c; end: 10691341b;  */

void FUN_10691336c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10691341c; end: 10691353f;  */

void FUN_10691341c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      func_0x00010becfd00(*(undefined8 *)(param_1 + 0x28));
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf070a0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  uVar8 = *(undefined8 *)(lVar2 + 0xa0);
  _objc_retain(uVar8);
  _objc_initWeak(auStack_158,lVar2);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x108);
  func_0x00010bf002e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar8);
  _objc_copyWeak(auStack_160,auStack_158);
  func_0x00010c121840(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_160);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_158);
  _objc_release(uVar8);
  _objc_release(uVar5);
  return;
}



/* Entry: 106913540; end: 106913673; -[SCSpotlightStoriesPrefetcherV2 _loadInitialReadState:] */

void FUN_106913540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010bf002e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c121840(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106913674; end: 10691372f;  */

void FUN_106913674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106913730; end: 106913763;  */

void FUN_106913730(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106913764; end: 1069138eb; -[SCSpotlightStoriesPrefetcherV2 _updateViewedStateFromMap:] */

long FUN_106913764(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
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
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x128) = 1;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar5 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar2 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c29ea60();
        if ((int)lVar3 == 0) {
LAB_10691386c:
          _objc_release(lVar2);
        }
        else {
          lVar3 = *(long *)(param_1 + 0x108);
          func_0x00010c0e00e0(lVar3,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          if (lVar3 != 0) {
            uVar1 = *(undefined8 *)(param_1 + 0x100);
            lVar2 = *(long *)(param_1 + 0x108);
            func_0x00010c0e00e0(lVar2,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar1,param_2,lVar2);
            goto LAB_10691386c;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar5 != 0);
  }
  func_0x00010bea7f60(param_1,param_2,*(undefined8 *)(param_1 + 0xe0));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  dVar9 = *(double *)(param_3 + 0xb0);
  if (0.0 < dVar9) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar10 = *(double *)(param_3 + 0xb0);
    _objc_release(puVar4);
    if (dVar9 < dVar10) {
      return 0;
    }
  }
  lVar5 = *(long *)(param_3 + 8);
  func_0x000108f4ac88(lVar5);
  func_0x00010bdf69e0(param_3);
  return param_3 + lVar5;
}



/* Entry: 1069138ec; end: 106913973; -[SCSpotlightStoriesPrefetcherV2 _prefetchBufferTarget] */

long FUN_1069138ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(param_1 + 0xb0);
  if (0.0 < dVar3) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar4 = *(double *)(param_1 + 0xb0);
    _objc_release(puVar1);
    if (dVar3 < dVar4) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x000108f4ac88(lVar2);
  func_0x00010bdf69e0(param_1);
  return param_1 + lVar2;
}



/* Entry: 106913974; end: 1069139f7; -[SCSpotlightStoriesPrefetcherV2 _currentExtraBufferCapacity] */

void FUN_106913974(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000108f4acd0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0xe0);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 1069139f8; end: 106913c03; -[SCSpotlightStoriesPrefetcherV2 _triggerPrefetchingForUnsupportedACFStories] */

long FUN_1069139f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long lStack_298;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x000108f4ac88();
  lVar14 = lVar2;
  if (0 < lVar2) {
    lVar14 = *(long *)(param_1 + 0xe0);
    _objc_retain(lVar14);
    lVar3 = lVar14;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 != 0) {
      lVar13 = 0;
      do {
        lVar16 = 0;
        lVar17 = lVar2;
        if (lVar2 <= lVar13) {
          lVar17 = lVar13;
        }
        lVar17 = lVar17 - lVar13;
        lVar13 = lVar3 + lVar13;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar14);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c259740(*(undefined8 *)(lVar16 * 8));
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          if (lVar17 == lVar16) {
LAB_106913bb8:
            _objc_release(puVar4);
            goto LAB_106913bc0;
          }
          uVar5 = *(ulong *)(param_1 + 0x118);
          func_0x00010bf4b900();
          if ((uVar5 & 1) == 0) {
            uVar5 = *(ulong *)(param_1 + 0xf0);
            func_0x00010bf4b900();
            if ((uVar5 & 1) == 0) {
              lVar6 = *(long *)(param_1 + 0xf8);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c067fc0();
              lVar15 = *(long *)(param_1 + 0xd0);
              _objc_release(lVar6);
              if ((lVar7 < lVar15) && (lVar7 = param_1, func_0x00010be3eb20(), (int)lVar7 != 0)) {
                func_0x00010befa120(*(undefined8 *)(param_1 + 0x118));
                func_0x00010becfd00(param_1);
                goto LAB_106913bb8;
              }
            }
          }
          _objc_release(puVar4);
          lVar16 = lVar16 + 1;
        } while (lVar3 != lVar16);
        lVar3 = lVar14;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
LAB_106913bc0:
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return lVar14;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar14;
  if ((*(char *)(lVar14 + 0xd8) == '\x01') && (*(char *)(lVar14 + 0x128) == '\x01')) {
    lVar2 = *(long *)(lVar14 + 0xe8);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = lVar14;
      func_0x00010be77080();
      if (lVar2 == 0) {
        lVar2 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010becfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (lVar14,PTR_s__triggerPrefetchingForUnsupporte_1125918f8);
          return lVar14;
        }
        goto LAB_106913f20;
      }
      dVar20 = 0.0;
      lVar13 = *(long *)(lVar14 + 0xe0);
      _objc_retain(lVar13);
      lVar3 = lVar13;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar3 != 0) {
        lStack_298 = 0;
        lVar16 = 0;
        do {
          lVar17 = 0;
          do {
            dVar19 = dVar20;
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar13);
              dVar19 = dVar20;
            }
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar18 = *(undefined8 *)(lVar17 * 8);
            func_0x00010c259740(uVar18);
            func_0x00010c0df880(puVar4);
            _objc_retainAutoreleasedReturnValue();
            if ((lVar2 <= lVar16) && (*(long *)(lVar14 + 0xc0) <= lStack_298)) {
LAB_106913ec8:
              _objc_release(puVar4);
              goto LAB_106913ed0;
            }
            uVar5 = *(ulong *)(lVar14 + 0xf0);
            func_0x00010bf4b900();
            dVar20 = dVar19;
            if ((uVar5 & 1) == 0) {
              uVar11 = uVar18;
              func_0x00010c13bd00(uVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f3a0();
              dVar20 = *(double *)(lVar14 + 0xb8);
              dVar21 = -dVar20;
              _objc_release(uVar11);
              lVar6 = *(long *)(lVar14 + 0xf8);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c067fc0();
              lVar15 = *(long *)(lVar14 + 0xd0);
              _objc_release(lVar6);
              if (lVar7 < lVar15) {
                if ((lVar16 < lVar2) || (dVar21 < dVar19)) {
                  func_0x00010becfd00(lVar14);
                  goto LAB_106913ec8;
                }
              }
              else {
                uVar8 = *(undefined8 *)(lVar14 + 0x20);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar8;
                func_0x00010c2632a0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c25b720(uVar18);
                func_0x00010c0df780(puVar9);
                _objc_retainAutoreleasedReturnValue();
                uVar18 = uVar11;
                func_0x00010bf4b900();
                _objc_release(puVar9);
                _objc_release(uVar11);
                _objc_release(uVar8);
                lVar7 = lStack_298;
                if (dVar21 < dVar19) {
                  lVar7 = lStack_298 + 1;
                }
                if ((int)uVar18 != 0) {
                  lVar16 = lVar16 + 1;
                  lStack_298 = lVar7;
                }
              }
            }
            _objc_release(puVar4);
            lVar17 = lVar17 + 1;
          } while (lVar3 != lVar17);
          lVar3 = lVar13;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
LAB_106913ed0:
      _objc_release(lVar13);
      func_0x00010be84500();
      lVar2 = lVar14;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return lVar2;
  }
LAB_106913f20:
  ___stack_chk_fail();
  uVar10 = *(ulong *)(lVar2 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010c079380();
  _objc_release(uVar10);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)(lVar2 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar11;
    func_0x00010c06c3a0();
    _objc_release(uVar11);
    lVar14 = 3;
    if ((int)uVar18 != 0) {
      lVar14 = 4;
    }
  }
  else {
    lVar14 = 2;
  }
  return lVar14;
}



/* Entry: 106913c04; end: 106913f23; -[SCSpotlightStoriesPrefetcherV2 _triggerPrefetching] */

long FUN_106913c04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long lStack_148;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  if ((*(char *)(param_1 + 0xd8) == '\x01') && (*(char *)(param_1 + 0x128) == '\x01')) {
    lVar2 = *(long *)(param_1 + 0xe8);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010be77080();
      if (lVar2 == 0) {
        lVar2 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010becfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__triggerPrefetchingForUnsupporte_1125918f8);
          return param_1;
        }
        goto LAB_106913f20;
      }
      dVar19 = 0.0;
      lVar13 = *(long *)(param_1 + 0xe0);
      _objc_retain(lVar13);
      lVar3 = lVar13;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar3 != 0) {
        lStack_148 = 0;
        lVar14 = 0;
        do {
          lVar15 = 0;
          do {
            dVar18 = dVar19;
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar13);
              dVar18 = dVar19;
            }
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar16 = *(undefined8 *)(lVar15 * 8);
            func_0x00010c259740(uVar16);
            func_0x00010c0df880(puVar4);
            _objc_retainAutoreleasedReturnValue();
            if ((lVar2 <= lVar14) && (*(long *)(param_1 + 0xc0) <= lStack_148)) {
LAB_106913ec8:
              _objc_release(puVar4);
              goto LAB_106913ed0;
            }
            uVar5 = *(ulong *)(param_1 + 0xf0);
            func_0x00010bf4b900();
            dVar19 = dVar18;
            if ((uVar5 & 1) == 0) {
              uVar11 = uVar16;
              func_0x00010c13bd00(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f3a0();
              dVar19 = *(double *)(param_1 + 0xb8);
              dVar20 = -dVar19;
              _objc_release(uVar11);
              lVar6 = *(long *)(param_1 + 0xf8);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c067fc0();
              lVar17 = *(long *)(param_1 + 0xd0);
              _objc_release(lVar6);
              if (lVar7 < lVar17) {
                if ((lVar14 < lVar2) || (dVar20 < dVar18)) {
                  func_0x00010becfd00(param_1);
                  goto LAB_106913ec8;
                }
              }
              else {
                uVar8 = *(undefined8 *)(param_1 + 0x20);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar8;
                func_0x00010c2632a0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c25b720(uVar16);
                func_0x00010c0df780(puVar9);
                _objc_retainAutoreleasedReturnValue();
                uVar16 = uVar11;
                func_0x00010bf4b900();
                _objc_release(puVar9);
                _objc_release(uVar11);
                _objc_release(uVar8);
                lVar7 = lStack_148;
                if (dVar20 < dVar18) {
                  lVar7 = lStack_148 + 1;
                }
                if ((int)uVar16 != 0) {
                  lVar14 = lVar14 + 1;
                  lStack_148 = lVar7;
                }
              }
            }
            _objc_release(puVar4);
            lVar15 = lVar15 + 1;
          } while (lVar3 != lVar15);
          lVar3 = lVar13;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
LAB_106913ed0:
      _objc_release(lVar13);
      func_0x00010be84500();
      lVar2 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return lVar2;
  }
LAB_106913f20:
  ___stack_chk_fail();
  uVar10 = *(ulong *)(lVar2 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010c079380();
  _objc_release(uVar10);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)(lVar2 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010c06c3a0();
    _objc_release(uVar11);
    lVar2 = 3;
    if ((int)uVar16 != 0) {
      lVar2 = 4;
    }
  }
  else {
    lVar2 = 2;
  }
  return lVar2;
}



/* Entry: 106913f24; end: 106913fa7; -[SCSpotlightStoriesPrefetcherV2 _requestTrigger] */

undefined8 FUN_106913f24(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079380();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06c3a0();
    _objc_release(uVar3);
    uVar3 = 3;
    if ((int)uVar4 != 0) {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



/* Entry: 106913fa8; end: 10691428f; -[SCSpotlightStoriesPrefetcherV2 _triggerPrefetchForStory:] */

void FUN_106913fa8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  uint uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c259740(param_3);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar10);
    _objc_release(puVar2);
    lVar11 = *(long *)(param_1 + 0xd0);
    uVar10 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar10);
    _objc_initWeak(auStack_80,param_1);
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x000108f4aa6c();
    if (iVar1 != 0) {
      func_0x00010be44000(param_1);
    }
    lVar3 = param_1;
    func_0x00010be91b40();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf454e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106914290;
    puStack_a8 = &UNK_11094a050;
    _objc_retain(uVar10);
    uStack_a0 = uVar10;
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_3);
    uStack_88 = (uint)(lVar11 == 2);
    lStack_98 = param_3;
    func_0x00010bfa8600(uVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    uVar7 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c2632a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25b720(param_3);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf4b900();
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar9 & 1) == 0) {
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_1069143ac;
      puStack_e0 = &UNK_110844b80;
      lStack_d8 = param_1;
      _objc_retain(param_3);
      lStack_d0 = param_3;
      lStack_c8 = lVar3;
      func_0x000100162d98("APPSTORE",&puStack_f8);
      _objc_release(lStack_d0);
    }
    _objc_release(lStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar10);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106914290; end: 106914367;  */

void FUN_106914290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_50 = param_2;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106914368; end: 1069143ab;  */

void FUN_106914368(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069143ac; end: 1069143eb;  */

void FUN_1069143ac(long param_1,undefined8 param_2)

{
  func_0x00010c107a60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x28),1,1,1,0,*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1069143ec; end: 10691442f; -[SCSpotlightStoriesPrefetcherV2 _publishUpdatedBufferSize:] */

void FUN_1069143ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106914430; end: 106914523; -[SCSpotlightStoriesPrefetcherV2 _handlePrefetchResultForStory:completePrefetch:mediaState:] */

void FUN_106914430(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0xe8),param_2,puVar2);
  if (param_5 == 2) {
    lVar3 = *(long *)(param_1 + 0xf8);
    func_0x00010c0e00e0(lVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    if (lVar4 != 2) {
      uVar1 = 1;
      if (param_4 != 0) {
        uVar1 = 2;
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf8),param_2,puVar5,puVar2);
      _objc_release(puVar5);
    }
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xf0),param_2,puVar2);
  }
  func_0x00010becfd20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106914524; end: 1069145fb; -[SCSpotlightStoriesPrefetcherV2 didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_106914524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069145fc; end: 10691462f;  */

void FUN_1069145fc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106914630; end: 1069146b7; -[SCSpotlightStoriesPrefetcherV2 _didUpdateWithStoriesSnapReadReceiptUpdateRequest:] */

void FUN_106914630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069146c0;
  puStack_20 = &UNK_110850988;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10691471c;
  puStack_48 = &UNK_110850cc8;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc800(param_3,param_2,&PTR___NSConcreteGlobalBlock_11094a080,
                      &PTR___NSConcreteGlobalBlock_11094a0a0,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1069146b8; end: 1069146bf;  */

void FUN_1069146b8(void)

{
  return;
}



/* Entry: 1069146c0; end: 10691471b;  */

void FUN_1069146c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010be81f60(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10691471c; end: 106914843;  */

ulong FUN_10691471c(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar11 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar12 = param_2;
  func_0x00010bf52a60();
  if (uVar12 != 0) {
    lVar13 = *plStack_110;
    do {
      uVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x108);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) {
          func_0x00010be81f60(*(undefined8 *)(param_1 + 0x20));
        }
        _objc_release(lVar1);
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
      uVar12 = param_2;
      puVar11 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar12 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar2 = (undefined1 *)puVar11;
  func_0x000108f4bad8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfbeba0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar6 == (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c2632a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25b720(puVar11);
    func_0x00010c0df780(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf4b900(uVar8);
    uVar12 = (ulong)((uint)uVar10 ^ 1);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    uVar12 = 1;
  }
  _objc_release(puVar2);
  _objc_release(puVar11);
  return uVar12;
}



/* Entry: 106914844; end: 10691497b; -[SCSpotlightStoriesPrefetcherV2 _isCandidateForACFPrefetch:] */

uint FUN_106914844(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000108f4bad8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfbeba0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2632a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_3;
    func_0x00010c25b720(param_3);
    func_0x00010c0df780(puVar8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf4b900(uVar7,param_2,puVar8);
    uVar10 = (uint)uVar9 ^ 1;
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  else {
    uVar10 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 10691497c; end: 1069149d3; -[SCSpotlightStoriesPrefetcherV2 _isSpotlightActive] */

bool FUN_10691497c(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  return param_1 < 600.0;
}



/* Entry: 1069149d4; end: 1069149fb; -[SCSpotlightStoriesPrefetcherV2 performer] */

void FUN_1069149d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069149fc; end: 106914b93; -[SCSpotlightStoriesPrefetcherV2 .cxx_destruct] */

void FUN_1069149fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
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



/* Entry: 106914b94; end: 106914bdf; -[SCDiscoverFeedExtensionPlugInServiceProvider provide] */

void FUN_106914b94(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be98360();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cf008;
  _objc_alloc(PTR_PTR_1126cf008);
  func_0x00010c042fa0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106914be0; end: 106914c97; -[SCDiscoverFeedExtensionPlugInServiceProvider _saberSectionExtensions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106914be0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + _DAT_112753a7c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf010;
  _objc_alloc(PTR_PTR_1126cf010);
  func_0x00010c043000();
  puVar4 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106914c98; end: 106914ccf; -[SCDiscoverFeedExtensionPlugInServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106914c98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753a7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753a80);
  return;
}



/* Entry: 106914cd0; end: 106914d43; -[SCPremiumStoryShareConversationResolver initWithScopedConversationParser:] */

undefined1 * FUN_106914cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3d10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106914d44; end: 10691505f; -[SCPremiumStoryShareConversationResolver resolveRecipientsConversations:contentShareInfo:sendToSessionId:completion:] */

void FUN_106914d44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf52a60();
  if (lVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    lVar12 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_128 + lVar11 * 8);
        lVar2 = lVar13;
        func_0x00010bfcf060();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        puVar4 = PTR_PTR_1126b01c0;
        if (lVar3 == 0) {
          lVar9 = lVar9 + 1;
          func_0x00010c122b80(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c294260(puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar2 = lVar13;
          func_0x00010bfcf060();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf529e0();
          lVar9 = lVar3 + lVar9;
          _objc_release(lVar2);
          puVar4 = PTR_PTR_1126b01c0;
          func_0x00010c122b80(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfcf680(puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        _objc_release(lVar13);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      lVar10 = param_3;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_106915060;
  puStack_158 = &UNK_110856d50;
  uStack_150 = param_5;
  uStack_148 = param_4;
  uStack_140 = param_6;
  lStack_138 = lVar9;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar7 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_170;
  func_0x00010c297260(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_140);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    if (ppuVar8 == (undefined **)0x0) {
      uVar6 = param_2;
      func_0x00010bf026a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x0001086063f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar7;
      func_0x000108605300(uVar7,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_3 + 0x30);
      uVar5 = param_2;
      func_0x00010bf50b20(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar10 + 0x10))(lVar10,uVar5,uVar6,0);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
    }
    else {
      (**(code **)(*(long *)(param_3 + 0x30) + 0x10))
                (*(long *)(param_3 + 0x30),PTR____NSArray0__struct_11034ab48,0,ppuVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106915060; end: 10691515f;  */

void FUN_106915060(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010bf026a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x000108605300(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x30);
    uVar3 = param_2;
    func_0x00010bf50b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar3,uVar1,0);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),PTR____NSArray0__struct_11034ab48,0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106915160; end: 10691516b; -[SCPremiumStoryShareConversationResolver .cxx_destruct] */

void FUN_106915160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10691516c; end: 106915237; -[SCPremiumStoryShareSender initWithTextSender:circumstanceEngine:externalMediaPreparer:] */

undefined1 *
FUN_10691516c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3d18;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106915238; end: 106915897; -[SCPremiumStoryShareSender sendPremiumStoryShare:conversationIds:platformAnalytics:completionQueue:completionHandler:] */

void FUN_106915238(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uStack_c8;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (((param_3 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), param_5 != 0)) && (lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010befd440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0c5900();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010c294d60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a360(uVar4);
    _objc_release(lVar5);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(param_3);
    _objc_retain(param_5);
    puVar7 = PTR_PTR_1126c6da0;
    _objc_opt_new();
    lVar5 = param_3;
    func_0x00010bf454e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x000108f520ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805c0(puVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar8 != 0) {
      puVar9 = PTR_PTR_1126bc778;
      _objc_opt_new(PTR_PTR_1126bc778);
      lVar5 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar9);
      _objc_release(lVar8);
      _objc_release(lVar5);
      func_0x00010c204680(puVar7);
      _objc_release(puVar9);
    }
    puVar9 = PTR_PTR_1126cf018;
    _objc_alloc_init();
    func_0x00010c20caa0();
    func_0x00010c0f0540(param_3);
    func_0x00010c1d79a0(puVar9);
    if (lVar3 == 0) {
      puVar19 = (undefined *)0x0;
      uStack_c8 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar19 = PTR_PTR_1126caa90;
      _objc_opt_new();
      lVar5 = lVar3;
      func_0x000107d6b30c(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4020(puVar19);
      _objc_release(lVar5);
      lVar5 = lVar3;
      func_0x000107d6ad3c();
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    func_0x00010c20d4c0(puVar9);
    puVar10 = PTR_PTR_1126be930;
    _objc_alloc_init(PTR_PTR_1126be930);
    func_0x00010c1e0960();
    lVar5 = param_5;
    func_0x00010bf4d560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    _objc_release(lVar5);
    puVar12 = PTR_PTR_1126b0cd8;
    if (lVar11 != 0) {
      lVar5 = param_5;
      func_0x00010bf4d560(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar5);
      puVar13 = PTR_PTR_1126bc778;
      _objc_opt_new(PTR_PTR_1126bc778);
      func_0x00010c1feca0(puVar10);
      _objc_release(puVar13);
      puVar13 = puVar12;
      func_0x00010bfe5d80(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar10;
      func_0x00010c22ab40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    puVar12 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c1fea60();
    puVar13 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c27dd80(lVar3);
    func_0x000107d6b2ec();
    func_0x00010c02b8e0(puVar13);
    puVar14 = puVar13;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar15 = puVar12;
    func_0x00010bf63640(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf21f60(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar13);
    puVar17 = puVar13;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(uStack_c8);
    _objc_release(puVar19);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(lVar3);
    func_0x00010c15c260(uVar6);
    _objc_release(puVar17);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 106915898; end: 106915953; -[SCPremiumStoryShareSender .cxx_destruct] */

void FUN_106915898(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106915954; end: 106915a4b; -[SCPremiumStoryShareSendingServiceProvider _createStoryShareSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106915954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126cf028;
  _objc_alloc(PTR_PTR_1126cf028);
  lVar2 = param_1 + _DAT_112753a94;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753a98;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753a9c;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf9e360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051a20(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106915a4c; end: 106915ac7; -[SCPremiumStoryShareSendingServiceProvider _createStoryConversationResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106915a4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cf030;
  _objc_alloc(PTR_PTR_1126cf030);
  param_1 = param_1 + _DAT_112753aa0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0421a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106915ac8; end: 106915b23; -[SCPremiumStoryShareSendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106915ac8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753a9c);
  _objc_destroyWeak(param_1 + _DAT_112753aa0);
  _objc_destroyWeak(param_1 + _DAT_112753a94);
  _objc_destroyWeak(param_1 + _DAT_112753a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753aa4);
  return;
}



/* Entry: 106915b24; end: 106915d3b; -[SCContentSyncCacheRequestSender initWithUnifiedGRPCClientFactory:syncCacheGrapheneMetricsEmitter:storiesConfigProvider:discoverFeedDataMutator:currentUserId:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_106915b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f3d20;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c25a260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar6;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdf41a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined ***)((long)puVar1 + 0x48) = &PTR__OBJC_CLASS___NSConstantArray_111180d58;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined ***)((long)puVar1 + 0x50) = &PTR__OBJC_CLASS___NSConstantArray_111180d70;
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



/* Entry: 106915d3c; end: 106915e27; -[SCContentSyncCacheRequestSender _createStoryManagementService:] */

void FUN_106915d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106915e28; end: 106915f63;  */

void FUN_106915e28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar3 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar3,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar3,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126cf038;
  _objc_alloc(PTR_PTR_1126cf038);
  func_0x00010c058f80();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106915f64; end: 1069160ab; -[SCContentSyncCacheRequestSender sendCacheSyncRequestWithStories:feedType:shouldTakedown:completionQueue:completion:] */

void FUN_106915f64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_68 = param_4;
  uStack_60 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1069160ac; end: 10691632f;  */

void FUN_1069160ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cf040;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_11094a170);
    func_0x00010bf0a0c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cae0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000100564a1c(uVar3,*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebe80(puVar2);
    _objc_release(uVar3);
    puVar4 = puVar2;
    func_0x00010bf3cbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0);
      }
      else {
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_10691649c;
        puStack_60 = &UNK_110849530;
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar3);
        uStack_58 = uVar3;
        func_0x00010007380c(lVar6,&puStack_78);
        _objc_release(uStack_58);
      }
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bdd8d20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_90,param_1 + 0x38);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar8);
      uStack_88 = *(undefined8 *)(param_1 + 0x40);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar9);
      uStack_80 = *(undefined1 *)(param_1 + 0x48);
      func_0x00010bf4c060(uVar3);
      _objc_release(lVar6);
      _objc_release(uVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_90);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106916330; end: 10691649b;  */

void FUN_106916330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106917098;
  uStack_40 = 0x1069170a8;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c259560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10691649c; end: 1069164b3;  */

void FUN_10691649c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001069164b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 1069164b4; end: 106916633;  */

void FUN_1069164b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0 || param_3 != 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) {
          (**(code **)(lVar5 + 0x10))(lVar5,0,0,param_3);
        }
        else {
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0xc2000000;
          pcStack_70 = FUN_106916634;
          puStack_68 = &UNK_11084aaa8;
          _objc_retain(lVar5);
          lStack_58 = lVar5;
          _objc_retain(param_3);
          lStack_60 = param_3;
          func_0x00010007380c(lVar4,&puStack_80);
          _objc_release(lStack_60);
          _objc_release(lStack_58);
        }
      }
    }
    else {
      func_0x00010be80820(lVar1);
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = (ulong)*(uint *)(param_1 + 0x40);
    func_0x000108f53fe8(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1640(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106916634; end: 10691664b;  */

void FUN_106916634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106916648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10691664c; end: 106916673; -[SCContentSyncCacheRequestSender supportedFeedTypes] */

void FUN_10691664c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106916674; end: 10691669b; -[SCContentSyncCacheRequestSender supportedCorpusTypes] */

void FUN_106916674(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10691669c; end: 106916a77; -[SCContentSyncCacheRequestSender _processCacheSyncResponse:feedType:stories:shouldTakedown:completionQueue:completion:] */

void FUN_10691669c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf26ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  lVar3 = param_5;
  func_0x00010bf529e0();
  if (lVar1 == lVar3) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0x2020000000;
    uStack_c8 = 0;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_106916ad0;
    puStack_110 = &UNK_11094a200;
    puStack_d8 = &uStack_e0;
    puStack_b8 = &uStack_c0;
    _objc_retain(lVar2);
    lStack_108 = lVar2;
    puStack_f0 = &uStack_c0;
    _objc_retain(puVar4);
    puStack_100 = puVar4;
    _objc_retain(puVar5);
    puStack_f8 = puVar5;
    puStack_e8 = &uStack_e0;
    func_0x00010bd86420(param_5,&puStack_128);
    _objc_release();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x000108f53fe8(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2420(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f53fe8(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2440(uVar7);
    _objc_release(param_4);
    _objc_release(uVar7);
    if (param_8 != 0) {
      if (param_7 == 0) {
        (**(code **)(param_8 + 0x10))(param_8,puVar4,puVar5,0);
      }
      else {
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        pcStack_150 = FUN_106916eac;
        puStack_148 = &UNK_11084a9e8;
        _objc_retain(param_8);
        lStack_130 = param_8;
        _objc_retain(puVar4);
        puStack_140 = puVar4;
        _objc_retain(puVar5);
        puStack_138 = puVar5;
        func_0x00010007380c(param_7,&puStack_160);
        _objc_release(puStack_138);
        _objc_release(puStack_140);
        _objc_release(lStack_130);
      }
    }
    func_0x00010bee2dc0(param_1);
    _objc_release(puStack_f8);
    _objc_release(puStack_100);
    _objc_release(lStack_108);
    __Block_object_dispose(&uStack_e0,8);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a8e80();
    _objc_release(uVar7);
    if (param_7 == 0) {
      (**(code **)(param_8 + 0x10))(param_8,0,0,0);
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106916ab8;
      puStack_88 = &UNK_110849530;
      _objc_retain(param_8);
      lStack_80 = param_8;
      func_0x00010007380c(param_7,&puStack_a0);
      _objc_release(lStack_80);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106916a78; end: 106916ab7;  */

void FUN_106916a78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c282ce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106916ab8; end: 106916acf;  */

void FUN_106916ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106916acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 106916ad0; end: 106916eab;  */

void FUN_106916ad0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010c259740();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x00010c259740(param_2);
    func_0x00010c0df880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
    lVar7 = lVar2;
    func_0x00010bf529e0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = lVar7 + lVar5;
    lVar7 = lVar2;
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      _objc_retain(param_2);
      if (param_2 == 0) {
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        uStack_80 = 0x3032000000;
        pcStack_78 = FUN_106917098;
        uStack_70 = 0x1069170a8;
        uStack_68 = 0;
        lVar7 = param_2;
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bf680();
        _objc_release(lVar7);
        puVar6 = (undefined *)puStack_88[5];
        _objc_retain(puVar6);
        __Block_object_dispose(&uStack_90,8);
        _objc_release(uStack_68);
      }
      _objc_release(param_2);
      func_0x00010c225c20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010c069840(puVar3);
      puVar6 = puVar3;
      func_0x00010bf529e0();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = puVar3;
        func_0x00010bf51e00(puVar3);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
        _objc_release(puVar6);
        lVar7 = param_2;
        func_0x00010c13bd00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
        _objc_release(lVar7);
      }
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18);
      puVar6 = puVar3;
      func_0x00010bf529e0();
      *(undefined **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = puVar6 + lVar7;
      _objc_retain(param_2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar7 = param_2;
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 106916eac; end: 106916ec3;  */

void FUN_106916eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106916ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 106916ec4; end: 106916f47; -[SCContentSyncCacheRequestSender _updateUnviewableSnapsByStoryDedupeFp:downloadDateByStoryDedupeFp:shouldTakedown:] */

void FUN_106916ec4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b7a0();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106916f48; end: 106917007; -[SCContentSyncCacheRequestSender _callOptionBuilder] */

void FUN_106916f48(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  func_0x00010c08fa60();
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x50,0);
  _objc_storeStrong(puVar3 + 0x48,0);
  _objc_storeStrong(puVar3 + 0x40,0);
  _objc_storeStrong(puVar3 + 0x38,0);
  _objc_storeStrong(puVar3 + 0x30,0);
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 106917008; end: 106917097; -[SCContentSyncCacheRequestSender .cxx_destruct] */

void FUN_106917008(long param_1)

{
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



/* Entry: 106917098; end: 1069170af;  */

void FUN_106917098(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069170b0; end: 106917277;  */

void FUN_1069170b0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cf048;
  _objc_retain(param_2);
  _objc_opt_new();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  lVar4 = param_2;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_2;
  if (lVar4 == 0) {
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar4 = lVar2;
    func_0x000100576e9c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
  else {
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar4 = lVar2;
    func_0x000100576e9c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106917278; end: 106917293;  */

void FUN_106917278(void)

{
  return;
}



/* Entry: 106917294; end: 1069172eb;  */

void FUN_106917294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069172ec; end: 1069172f3;  */

void FUN_1069172ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1069172f4; end: 10691734b;  */

void FUN_1069172f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10691734c; end: 106917353;  */

void FUN_10691734c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106917354; end: 1069173ab;  */

void FUN_106917354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069173ac; end: 1069173b3;  */

void FUN_1069173ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1069173b4; end: 10691749f;  */

void FUN_1069173b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069174a0;
  puStack_40 = &UNK_11094a4b0;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x000100504554(uVar3,&puStack_58);
  _objc_release();
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069174a0; end: 106917563;  */

undefined8 FUN_1069174a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bebc0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return 0;
}



/* Entry: 106917564; end: 1069176a7;  */

void FUN_106917564(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar6 = *(long *)(lVar8 * 8);
      lVar3 = lVar6;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7);
        _objc_release(lVar6);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    lVar2 = lVar4;
    func_0x00010c241220(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar7);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1069176a8; end: 106917723;  */

void FUN_1069176a8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106917724; end: 10691777b;  */

void FUN_106917724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10691777c; end: 106917783;  */

void FUN_10691777c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106917784; end: 1069177db;  */

void FUN_106917784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069177dc; end: 1069177e3;  */

void FUN_1069177dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1069177e4; end: 10691783b;  */

void FUN_1069177e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10691783c; end: 106917843;  */

void FUN_10691783c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}


