/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107da4e44; end: 107da4e4b; -[SCSpectaclesVideoActivityItemGenerator cancel] */

void FUN_107da4e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_cancelProcessing_1125a9498);
  return;
}



/* Entry: 107da4e4c; end: 107da4e87; -[SCSpectaclesVideoActivityItemGenerator itemDuration] */

long FUN_107da4e4c(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x38);
  func_0x00010bfed740();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x38));
    lVar2 = (long)param_1;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 107da4e88; end: 107da4e9f; -[SCSpectaclesVideoActivityItemGenerator delegate] */

void FUN_107da4e88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107da4ea0; end: 107da4eab; -[SCSpectaclesVideoActivityItemGenerator setDelegate:] */

void FUN_107da4ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107da4eac; end: 107da4eb3; -[SCSpectaclesVideoActivityItemGenerator videoFilter] */

undefined8 FUN_107da4eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107da4eb4; end: 107da4ebb; -[SCSpectaclesVideoActivityItemGenerator snap] */

undefined8 FUN_107da4eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107da4ebc; end: 107da4ec3; -[SCSpectaclesVideoActivityItemGenerator dataObjectContext] */

undefined8 FUN_107da4ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107da4ec4; end: 107da4ecb; -[SCSpectaclesVideoActivityItemGenerator cloudFS] */

undefined8 FUN_107da4ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107da4ecc; end: 107da4ed3; -[SCSpectaclesVideoActivityItemGenerator encryptedContentManager] */

undefined8 FUN_107da4ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107da4ed4; end: 107da4edb; -[SCSpectaclesVideoActivityItemGenerator cachingMediaManager] */

undefined8 FUN_107da4ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107da4edc; end: 107da4ee3; -[SCSpectaclesVideoActivityItemGenerator reverseAudioCache] */

undefined8 FUN_107da4edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107da4ee4; end: 107da4eeb; -[SCSpectaclesVideoActivityItemGenerator userSession] */

undefined8 FUN_107da4ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107da4eec; end: 107da4ef3; -[SCSpectaclesVideoActivityItemGenerator spectaclesCustomExportFormat] */

undefined8 FUN_107da4eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107da4ef4; end: 107da4efb; -[SCSpectaclesVideoActivityItemGenerator uploadToYoutube] */

undefined1 FUN_107da4ef4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 107da4efc; end: 107da4f03; -[SCSpectaclesVideoActivityItemGenerator primaryCamera] */

undefined8 FUN_107da4efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107da4f04; end: 107da4f0b; -[SCSpectaclesVideoActivityItemGenerator spectaclesAuxiliaryContentServices] */

undefined8 FUN_107da4f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107da4f0c; end: 107da4f13; -[SCSpectaclesVideoActivityItemGenerator previewAssetVideoProviderFactory] */

undefined8 FUN_107da4f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107da4f14; end: 107da4f1b; -[SCSpectaclesVideoActivityItemGenerator targetTrajectoryFactory] */

undefined8 FUN_107da4f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107da4f1c; end: 107da4f23; -[SCSpectaclesVideoActivityItemGenerator circumstanceEngine] */

undefined8 FUN_107da4f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107da4f24; end: 107da4ff3; -[SCSpectaclesVideoActivityItemGenerator .cxx_destruct] */

void FUN_107da4f24(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107da4ff4; end: 107da5397; -[SCMemoriesTranscodingHelper initWithCloudFS:encryptedContentManager:userSession:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:mediaLoader:memoriesCachingMediaHelper:previewURLVideoProvide:activeVideoPaths:snapDocManager:snapVideoFilterFactory:imageCommandProvider:previewCameraSourceOverlayService:captionDataProvider:creativeToolsMemoriesResources:circumstanceEngine:cameraConfig:] */

undefined8 *
FUN_107da4ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_70 = PTR_PTR_1126fb0e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 107da5398; end: 107da53a3; -[SCMemoriesTranscodingHelper spectaclesSnapCommandProviderForSnap:] */

void FUN_107da5398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfb80;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = uVar3;
  func_0x00010c1307e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046fe0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107da53a4; end: 107da551b; -[SCMemoriesTranscodingHelper imageSnapComponentsForSnap:snapOverlay:isSending:exportSetting:queue:completion:] */

void FUN_107da53a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010be20780(param_3);
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x68);
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  FUN_107da5ebc(param_1,param_2,param_5,param_6,param_7,param_8,uVar3,uVar4,uVar1,uVar2,uVar6,uVar5,
                *(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x58),
                *(undefined8 *)(param_3 + 0x38),param_9,param_10,*(undefined8 *)(param_3 + 0x70),
                *(undefined8 *)(param_3 + 0x78),*(undefined8 *)(param_3 + 0x88));
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107da551c; end: 107da552f; -[SCMemoriesTranscodingHelper memoriesTranscodingSnapVideoFilter:transcodingDestinationInfo:] */

void FUN_107da551c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x58);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf58fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b26c0;
  _objc_opt_class(PTR_PTR_1126b26c0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107da5530; end: 107da556b; -[SCMemoriesTranscodingHelper memoriesTranscodingSegmentLongVideoWithUrl:] */

void FUN_107da5530(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_107da6d34(param_3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 107da556c; end: 107da55df; -[SCMemoriesTranscodingHelper memoriesTranscodeSnapInfoFromMemoriesSnap:snapOverlay:] */

void FUN_107da556c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be20780(param_1);
  uVar1 = param_3;
  FUN_107da647c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107da55e0; end: 107da55eb; -[SCMemoriesTranscodingHelper memoriesTranscodingCompositeVideos:] */

void FUN_107da55e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined4 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined ***pppuVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined8 uVar26;
  undefined *puVar27;
  double dVar28;
  undefined *puVar29;
  double dVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **appuStack_2d0 [5];
  undefined *puStack_2a8;
  undefined ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined ***pppuStack_270;
  long lStack_268;
  long lStack_260;
  undefined **ppuStack_258;
  long lStack_250;
  undefined ***pppuStack_248;
  uint uStack_23c;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  ppuVar13 = *(undefined ***)(param_1 + 0x48);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  appuStack_2d0[3] = ppuVar13;
  _objc_retain(ppuVar13);
  ppuVar35 = (undefined **)PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600();
  _objc_retainAutoreleasedReturnValue();
  uStack_290 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  puVar27 = (undefined *)ppuVar35;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
  puVar8 = (undefined *)ppuVar35;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  puStack_230 = puVar20;
  func_0x00010bf529e0(param_3);
  appuStack_2d0[2] = (undefined **)appuStack_2d0;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 * 3);
  pppuVar19 = appuStack_2d0 + extraout_x8 * -2;
  lVar16 = param_3;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar25 = pppuVar19 + lVar16 * -2;
  lVar16 = param_3;
  func_0x00010bf529e0(param_3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 * 0x18 + 0xfU & 0xfffffffffffffff0);
  ppuVar23 = (undefined **)((long)pppuVar25 - extraout_x8_00);
  lVar16 = param_3;
  func_0x00010bf529e0(param_3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 * 3);
  ppuVar13 = ppuVar23 + extraout_x8_01 * -2;
  ppuStack_f8 = *(undefined ***)(PTR__kCMTimeZero_110348670 + 8);
  ppuStack_100 = *(undefined ***)PTR__kCMTimeZero_110348670;
  ppuStack_f0 = *(undefined ***)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_260 = param_3;
  func_0x00010bf529e0();
  puStack_2a8 = puVar8;
  lStack_268 = param_3;
  if (param_3 != 0) {
    uStack_23c = 0;
    lVar16 = 0;
    pppuVar24 = pppuVar25 + 1;
    ppuVar34 = (undefined **)0x0;
    ppuVar32 = (undefined **)0x0;
    appuStack_2d0[0] = ppuVar23;
    appuStack_2d0[1] = ppuVar35;
    appuStack_2d0[4] = ppuVar13;
    pppuStack_2a0 = pppuVar25;
    pppuStack_270 = pppuVar19;
    puStack_238 = puVar27;
    do {
      lVar17 = lStack_260;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar33 = ppuVar32;
      if (lVar17 != 0) {
        puVar8 = PTR__OBJC_CLASS___AVAsset_1126aff38;
        lStack_250 = lVar17;
        func_0x00010bf0b9e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_220 = puVar8;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        if (puVar20 == (undefined *)0x0) {
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c26f620(&ppuStack_e0,puVar20);
        }
        ppuStack_278 = *(undefined ***)(PTR__kCMTimeInvalid_110348648 + 8);
        ppuStack_280 = *(undefined ***)PTR__kCMTimeInvalid_110348648;
        ppuStack_288 = *(undefined ***)(PTR__kCMTimeInvalid_110348648 + 0x10);
        param_6 = 0;
        ppuStack_160 = ppuStack_280;
        ppuStack_158 = ppuStack_278;
        ppuStack_150 = ppuStack_288;
        func_0x00010c067160(puVar27);
        puVar27 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
        func_0x00010c299860();
        _objc_retainAutoreleasedReturnValue();
        puStack_228 = puVar27;
        if (puVar20 == (undefined *)0x0) {
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c26f620(&ppuStack_e0,puVar20);
        }
        ppuStack_158 = ppuStack_f8;
        ppuStack_160 = ppuStack_100;
        ppuStack_150 = ppuStack_f0;
        ppuStack_188 = ppuStack_c0;
        ppuStack_190 = ppuStack_c8;
        ppuStack_180 = ppuStack_b8;
        _CMTimeRangeMake(&ppuStack_130,&ppuStack_160,&ppuStack_190);
        ppuStack_158 = ppuStack_128;
        ppuStack_160 = ppuStack_130;
        ppuStack_148 = ppuStack_118;
        ppuStack_150 = ppuStack_120;
        ppuStack_138 = ppuStack_108;
        ppuStack_140 = ppuStack_110;
        ppuVar33 = ppuStack_110;
        ppuVar35 = ppuStack_120;
        func_0x00010c214ec0(puStack_228);
        func_0x00010befa120(puStack_230);
        func_0x00010c0d5d20(puVar20);
        if (puVar20 == (undefined *)0x0) {
          ppuStack_148 = (undefined **)0x0;
          ppuStack_150 = (undefined **)0x0;
          ppuStack_138 = (undefined **)0x0;
          ppuStack_140 = (undefined **)0x0;
          ppuStack_158 = (undefined **)0x0;
          ppuStack_160 = (undefined **)0x0;
        }
        else {
          func_0x00010c106f40(&ppuStack_160,puVar20);
        }
        ppuStack_d8 = ppuStack_158;
        ppuStack_e0 = ppuStack_160;
        ppuStack_c8 = ppuStack_148;
        ppuStack_d0 = ppuStack_150;
        ppuStack_b8 = ppuStack_138;
        ppuStack_c0 = ppuStack_140;
        _CGRectApplyAffineTransform(0,0,&ppuStack_e0);
        pppuVar24[-1] = ppuVar33;
        *pppuVar24 = ppuVar35;
        ppuVar4 = ppuStack_100;
        ppuVar23[1] = (undefined *)ppuStack_f8;
        *ppuVar23 = (undefined *)ppuVar4;
        ppuVar23[2] = (undefined *)ppuStack_f0;
        ppuStack_258 = ppuVar23;
        pppuStack_248 = pppuVar24;
        if (puVar20 == (undefined *)0x0) {
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c106f40(&ppuStack_e0,puVar20);
        }
        ppuVar5 = ppuStack_c8;
        ppuVar4 = ppuStack_d0;
        ppuVar23 = ppuStack_e0;
        pppuVar19[1] = ppuStack_d8;
        *pppuVar19 = ppuVar23;
        pppuVar19[3] = ppuVar5;
        pppuVar19[2] = ppuVar4;
        ppuVar23 = ppuStack_c0;
        pppuVar19[5] = ppuStack_b8;
        pppuVar19[4] = ppuVar23;
        puVar8 = puStack_220;
        if ((double)ppuVar35 <= (double)ppuVar34 && (double)ppuVar33 <= (double)ppuVar32) {
          ppuVar33 = ppuVar32;
          ppuVar35 = ppuVar34;
        }
        ppuVar34 = ppuVar35;
        puVar27 = puStack_220;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar27;
        func_0x00010bf529e0();
        _objc_release(puVar27);
        puVar27 = puStack_238;
        lVar17 = lStack_250;
        if (puVar6 == (undefined *)0x0) {
          if (puVar20 == (undefined *)0x0) {
            ppuStack_148 = (undefined **)0x0;
            ppuStack_150 = (undefined **)0x0;
            ppuStack_138 = (undefined **)0x0;
            ppuStack_140 = (undefined **)0x0;
            ppuStack_158 = (undefined **)0x0;
            ppuStack_160 = (undefined **)0x0;
          }
          else {
            func_0x00010c26f620(&ppuStack_160,puVar20);
          }
          pppuVar24 = pppuStack_248;
          ppuVar23 = ppuStack_258;
          ppuStack_188 = ppuStack_f8;
          ppuStack_190 = ppuStack_100;
          ppuStack_180 = ppuStack_f0;
          ppuStack_1b8 = ppuStack_140;
          ppuStack_1c0 = ppuStack_148;
          ppuStack_1b0 = ppuStack_138;
          _CMTimeRangeMake(&ppuStack_e0,&ppuStack_190,&ppuStack_1c0);
          ppuVar4 = ppuStack_c8;
          ppuVar32 = ppuStack_d0;
          ppuVar35 = ppuStack_e0;
          ppuVar13[1] = (undefined *)ppuStack_d8;
          *ppuVar13 = (undefined *)ppuVar35;
          ppuVar13[3] = (undefined *)ppuVar4;
          ppuVar13[2] = (undefined *)ppuVar32;
          ppuVar35 = ppuStack_c0;
          ppuVar13[5] = (undefined *)ppuStack_b8;
          ppuVar13[4] = (undefined *)ppuVar35;
          if (puVar27 != (undefined *)0x0) goto LAB_107da7a34;
LAB_107da7aa0:
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c279200(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          if (puVar20 == (undefined *)0x0) {
            ppuStack_c8 = (undefined **)0x0;
            ppuStack_d0 = (undefined **)0x0;
            ppuStack_b8 = (undefined **)0x0;
            ppuStack_c0 = (undefined **)0x0;
            ppuStack_d8 = (undefined **)0x0;
            ppuStack_e0 = (undefined **)0x0;
          }
          else {
            func_0x00010c26f620(&ppuStack_e0,puVar20);
          }
          puVar27 = puStack_238;
          lVar17 = lStack_250;
          ppuVar23 = ppuStack_258;
          ppuStack_158 = ppuStack_278;
          ppuStack_160 = ppuStack_280;
          ppuStack_150 = ppuStack_288;
          param_6 = 0;
          func_0x00010c067160(puStack_2a8);
          puVar8 = *(undefined **)PTR__kCMTimeRangeInvalid_110348660;
          puVar31 = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
          puVar29 = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
          ppuVar13[1] = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 8);
          *ppuVar13 = puVar8;
          ppuVar13[3] = puVar31;
          ppuVar13[2] = puVar29;
          puVar8 = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
          ppuVar13[5] = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
          ppuVar13[4] = puVar8;
          _objc_release(puVar6);
          uStack_23c = 1;
          pppuVar24 = pppuStack_248;
          if (puVar27 == (undefined *)0x0) goto LAB_107da7aa0;
LAB_107da7a34:
          func_0x00010c26f620(&ppuStack_e0,puVar27);
        }
        ppuStack_f8 = ppuStack_c0;
        ppuStack_100 = ppuStack_c8;
        ppuStack_f0 = ppuStack_b8;
        _objc_release(puStack_228);
        _objc_release(puVar20);
        _objc_release(puStack_220);
        pppuVar25 = pppuStack_2a0;
      }
      _objc_release(lVar17);
      lVar16 = lVar16 + 1;
      ppuVar13 = ppuVar13 + 6;
      pppuVar19 = pppuVar19 + 6;
      ppuVar23 = ppuVar23 + 3;
      pppuVar24 = pppuVar24 + 2;
      ppuVar32 = ppuVar33;
    } while (lStack_268 != lVar16);
    lVar16 = 0;
    pppuVar25 = pppuVar25 + 1;
    ppuVar13 = appuStack_2d0[0];
    lVar17 = lStack_268;
    do {
      pppuVar19 = pppuStack_270;
      lVar17 = lVar17 + -1;
      ppuVar23 = pppuVar25[-1];
      ppuVar35 = *pppuVar25;
      dVar28 = (double)ppuVar33 / (double)ppuVar23;
      dVar30 = (double)ppuVar34 / (double)ppuVar35;
      if (dVar30 <= dVar28) {
        dVar28 = dVar30;
      }
      puVar27 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
      func_0x00010c2998a0();
      _objc_retainAutoreleasedReturnValue();
      _CGAffineTransformMakeTranslation
                (&ppuStack_e0,((double)ppuVar33 - dVar28 * (double)ppuVar23) * 0.5,
                 ((double)ppuVar34 - dVar28 * (double)ppuVar35) * 0.5);
      ppuStack_188 = ppuStack_d8;
      ppuStack_190 = ppuStack_e0;
      ppuStack_178 = ppuStack_c8;
      ppuStack_180 = ppuStack_d0;
      ppuStack_168 = ppuStack_b8;
      ppuStack_170 = ppuStack_c0;
      _CGAffineTransformScale(&ppuStack_160,dVar28,dVar28,&ppuStack_190);
      ppuStack_d8 = ppuStack_158;
      ppuStack_e0 = ppuStack_160;
      ppuStack_c8 = ppuStack_148;
      ppuStack_d0 = ppuStack_150;
      ppuStack_b8 = ppuStack_138;
      ppuStack_c0 = ppuStack_140;
      puVar3 = (undefined8 *)((long)pppuVar19 + lVar16);
      ppuStack_188 = (undefined **)puVar3[1];
      ppuStack_190 = (undefined **)*puVar3;
      ppuStack_178 = (undefined **)puVar3[3];
      ppuStack_180 = (undefined **)puVar3[2];
      ppuStack_168 = (undefined **)puVar3[5];
      ppuStack_170 = (undefined **)puVar3[4];
      ppuStack_1b8 = ppuStack_158;
      ppuStack_1c0 = ppuStack_160;
      ppuStack_1a8 = ppuStack_148;
      ppuStack_1b0 = ppuStack_150;
      ppuStack_198 = ppuStack_138;
      ppuStack_1a0 = ppuStack_140;
      _CGAffineTransformConcat(&ppuStack_160,&ppuStack_190,&ppuStack_1c0);
      ppuStack_c8 = ppuStack_148;
      ppuStack_d0 = ppuStack_150;
      ppuStack_b8 = ppuStack_138;
      ppuStack_c0 = ppuStack_140;
      ppuStack_d8 = ppuStack_158;
      ppuStack_e0 = ppuStack_160;
      ppuStack_188 = (undefined **)ppuVar13[1];
      ppuStack_190 = (undefined **)*ppuVar13;
      ppuStack_180 = (undefined **)ppuVar13[2];
      func_0x00010c219980(puVar27);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar27;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puStack_230;
      func_0x00010c0dfd40(puStack_230);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9960();
      _objc_release(puVar20);
      _objc_release(puVar8);
      if ((uStack_23c & 1) == 0) {
        _objc_release(puVar27);
        ppuVar35 = appuStack_2d0[1];
        puVar27 = puStack_238;
        if (lVar17 == 0) goto LAB_107da7d14;
      }
      else {
        puVar3 = (undefined8 *)((long)appuStack_2d0[4] + lVar16);
        if (((((*(byte *)((long)puVar3 + 0xc) & 1) != 0) &&
             ((*(byte *)((long)puVar3 + 0x24) & 1) != 0)) &&
            (*(long *)((long)appuStack_2d0[4] + lVar16 + 0x28) == 0)) && (-1 < (long)puVar3[3])) {
          ppuStack_158 = (undefined **)puVar3[1];
          ppuStack_160 = (undefined **)*puVar3;
          ppuStack_148 = (undefined **)puVar3[3];
          ppuStack_150 = (undefined **)puVar3[2];
          ppuStack_138 = (undefined **)puVar3[5];
          ppuStack_140 = (undefined **)puVar3[4];
          func_0x00010c066740(puStack_2a8);
        }
        _objc_release(puVar27);
        ppuVar35 = appuStack_2d0[1];
        puVar27 = puStack_238;
        if (lVar17 == 0) goto LAB_107da7d20;
      }
      pppuVar25 = pppuVar25 + 2;
      lVar16 = lVar16 + 0x30;
      ppuVar13 = ppuVar13 + 3;
    } while( true );
  }
  ppuVar34 = (undefined **)0x0;
  ppuVar33 = (undefined **)0x0;
LAB_107da7d14:
  func_0x00010c12ec60(ppuVar35);
LAB_107da7d20:
  puVar8 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
  func_0x00010c299820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adc60();
  func_0x00010c1ea8e0(ppuVar33,ppuVar34,puVar8);
  _CMTimeMake(&ppuStack_1d8,1,0x1e);
  ppuStack_d8 = (undefined **)uStack_1d0;
  ppuStack_e0 = ppuStack_1d8;
  ppuStack_d0 = (undefined **)uStack_1c8;
  func_0x00010c19f2e0(puVar8);
  puVar20 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc();
  func_0x00010bff4280();
  puVar6 = PTR_PTR_1126b24f0;
  func_0x00010bfbde00(PTR_PTR_1126b24f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7200(puVar20);
  _objc_release(puVar6);
  ppuVar23 = appuStack_2d0[3];
  ppuVar13 = appuStack_2d0[3];
  func_0x00010c269d40(appuStack_2d0[3]);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar20;
  func_0x00010c0ef100(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar6;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900(ppuVar13);
  _objc_release(puVar29);
  _objc_release(puVar6);
  _objc_release(ppuVar13);
  func_0x00010c1d6fc0(puVar20);
  func_0x00010c200aa0(puVar20);
  func_0x00010c2213a0(puVar20);
  uVar7 = 0;
  _dispatch_semaphore_create();
  lVar16 = lStack_260;
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_107da7fa8;
  puStack_200 = &UNK_11084c4a0;
  ppuStack_1f8 = ppuVar23;
  lStack_1e8 = lStack_260;
  puStack_1f0 = puVar20;
  uStack_1e0 = uVar7;
  _objc_retain();
  _objc_retain(lVar16);
  _objc_retain(puVar20);
  _objc_retain(ppuVar23);
  func_0x00010bf9cee0(puVar20);
  _dispatch_semaphore_wait(uVar7,0xffffffffffffffff);
  puVar6 = puVar20;
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_1e0);
  _objc_release(lStack_1e8);
  _objc_release(puStack_1f0);
  _objc_release(ppuStack_1f8);
  _objc_release(uVar7);
  _objc_release(lVar16);
  _objc_release(puVar20);
  _objc_release(ppuVar23);
  _objc_release(puVar8);
  ppuVar13 = appuStack_2d0[2];
  _objc_release(puStack_230);
  _objc_release(puStack_2a8);
  _objc_release(puVar27);
  puVar29 = (undefined *)ppuVar35;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar12 = (undefined1 *)((long)ppuVar13 + -0x130);
  *(undefined ****)((long)ppuVar13 + -0x60) = &ppuStack_190;
  *(undefined **)((long)ppuVar13 + -0x58) = puVar27;
  *(undefined ***)((long)ppuVar13 + -0x50) = ppuVar23;
  *(long *)((long)ppuVar13 + -0x48) = lVar16;
  *(undefined **)((long)ppuVar13 + -0x40) = puVar6;
  *(undefined ***)((long)ppuVar13 + -0x38) = ppuVar35;
  *(undefined8 *)((long)ppuVar13 + -0x30) = uVar7;
  *(undefined **)((long)ppuVar13 + -0x28) = puVar20;
  *(undefined **)((long)ppuVar13 + -0x20) = puVar8;
  *(undefined ****)((long)ppuVar13 + -0x18) = appuStack_2d0;
  *(undefined1 **)((long)ppuVar13 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppuVar13 + -8) = FUN_107da7fa8;
  *(undefined8 *)((long)ppuVar13 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(puVar29 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = *(undefined **)(puVar29 + 0x28);
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar7);
  _objc_release(puVar20);
  _objc_release(puVar8);
  _objc_release(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x108) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x110) = 0;
  *(undefined8 *)((long)ppuVar13 + -0xf8) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x100) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x128) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x130) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x118) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x120) = 0;
  puVar18 = *(undefined **)(puVar29 + 0x30);
  _objc_retain(puVar18);
  puVar11 = (undefined1 *)((long)ppuVar13 + -0xe8);
  uVar7 = 0x10;
  puVar31 = puVar18;
  func_0x00010bf52a60();
  uVar14 = (undefined4)param_6;
  if (puVar31 != (undefined *)0x0) {
    lVar16 = **(long **)((long)ppuVar13 + -0x120);
    ppuVar23 = &PTR_PTR_1126af000;
    do {
      puVar27 = (undefined *)0x0;
      do {
        if (**(long **)((long)ppuVar13 + -0x120) != lVar16) {
          _objc_enumerationMutation(puVar18);
        }
        puVar20 = *(undefined **)(*(long *)((long)ppuVar13 + -0x128) + (long)puVar27 * 8);
        uVar7 = *(undefined8 *)(puVar29 + 0x20);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar20;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12f0c0(uVar7);
        _objc_release(puVar6);
        _objc_release(uVar7);
        ppuVar35 = (undefined **)PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60();
        _objc_release(ppuVar35);
        puVar27 = puVar27 + 1;
      } while (puVar31 != puVar27);
      puVar11 = (undefined1 *)((long)ppuVar13 + -0xe8);
      uVar7 = 0x10;
      puVar31 = puVar18;
      puVar12 = (undefined1 *)((long)ppuVar13 + -0x130);
      func_0x00010bf52a60();
      uVar14 = (undefined4)param_6;
      puVar8 = (undefined *)0x0;
    } while (puVar31 != (undefined *)0x0);
  }
  _objc_release(puVar18);
  uVar9 = *(undefined8 *)(puVar29 + 0x38);
  _dispatch_semaphore_signal();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar13 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined ***)((long)ppuVar13 + -0x1a0) = ppuVar34;
  *(undefined ***)((long)ppuVar13 + -0x198) = ppuVar33;
  *(undefined ****)((long)ppuVar13 + -400) = &ppuStack_190;
  *(undefined **)((long)ppuVar13 + -0x188) = puVar27;
  *(undefined ***)((long)ppuVar13 + -0x180) = ppuVar23;
  *(long *)((long)ppuVar13 + -0x178) = lVar16;
  *(undefined **)((long)ppuVar13 + -0x170) = puVar6;
  *(undefined ***)((long)ppuVar13 + -0x168) = ppuVar35;
  *(undefined **)((long)ppuVar13 + -0x160) = puVar20;
  *(undefined **)((long)ppuVar13 + -0x158) = puVar8;
  *(undefined **)((long)ppuVar13 + -0x150) = puVar18;
  *(undefined **)((long)ppuVar13 + -0x148) = puVar29;
  *(undefined1 **)((long)ppuVar13 + -0x140) = (undefined1 *)((long)ppuVar13 + -0x10);
  *(code **)((long)ppuVar13 + -0x138) = FUN_107da817c;
  *(undefined4 *)((long)ppuVar13 + -0x7e8) = uVar14;
  *(undefined4 *)((long)ppuVar13 + -0x7e4) = param_7;
  *(undefined8 *)((long)ppuVar13 + -0x728) = uVar9;
  *(undefined8 *)((long)ppuVar13 + -0x730) = *(undefined8 *)((long)ppuVar13 + -0xc0);
  *(undefined8 *)((long)ppuVar13 + -0x748) = *(undefined8 *)((long)ppuVar13 + -200);
  *(undefined8 *)((long)ppuVar13 + -0x750) = *(undefined8 *)((long)ppuVar13 + -0xd0);
  *(undefined8 *)((long)ppuVar13 + -0x738) = *(undefined8 *)((long)ppuVar13 + -0xd8);
  *(undefined8 *)((long)ppuVar13 + -0x758) = *(undefined8 *)((long)ppuVar13 + -0xe0);
  *(undefined8 *)((long)ppuVar13 + -0x760) = *(undefined8 *)((long)ppuVar13 + -0xe8);
  *(undefined8 *)((long)ppuVar13 + -0x780) = *(undefined8 *)((long)ppuVar13 + -0xf0);
  *(undefined8 *)((long)ppuVar13 + -0x768) = *(undefined8 *)((long)ppuVar13 + -0xf8);
  *(undefined8 *)((long)ppuVar13 + -0x778) = *(undefined8 *)((long)ppuVar13 + -0x100);
  uVar9 = *(undefined8 *)((long)ppuVar13 + -0x110);
  uVar15 = *(undefined8 *)((long)ppuVar13 + -0x108);
  uVar22 = *(undefined8 *)((long)ppuVar13 + -0x120);
  uVar21 = *(undefined8 *)((long)ppuVar13 + -0x118);
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x130);
  uVar26 = *(undefined8 *)((long)ppuVar13 + -0x128);
  *(undefined8 *)((long)ppuVar13 + -0x1b8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  *(undefined1 **)((long)ppuVar13 + -0x7c8) = puVar11;
  _objc_retain(puVar11);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x7c0) = param_8;
  _objc_retain(param_8);
  *(undefined8 *)((long)ppuVar13 + -0x7b8) = uVar10;
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x7b0) = uVar26;
  _objc_retain(uVar26);
  *(undefined8 *)((long)ppuVar13 + -0x7a8) = uVar22;
  _objc_retain(uVar22);
  *(undefined8 *)((long)ppuVar13 + -0x798) = uVar21;
  _objc_retain(uVar21);
  *(undefined8 *)((long)ppuVar13 + -0x7a0) = uVar9;
  _objc_retain(uVar9);
  *(undefined8 *)((long)ppuVar13 + -0x790) = uVar15;
  uVar26 = *(undefined8 *)((long)ppuVar13 + -0x778);
  _objc_retain(uVar15);
  _objc_retain(uVar26);
  uVar21 = *(undefined8 *)((long)ppuVar13 + -0x780);
  _objc_retain(*(undefined8 *)((long)ppuVar13 + -0x768));
  _objc_retain(uVar21);
  _objc_retain(*(undefined8 *)((long)ppuVar13 + -0x760));
  _objc_retain(*(undefined8 *)((long)ppuVar13 + -0x758));
  _objc_retain(*(undefined8 *)((long)ppuVar13 + -0x738));
  _objc_retain(*(undefined8 *)((long)ppuVar13 + -0x750));
  _objc_retain(*(undefined8 *)((long)ppuVar13 + -0x748));
  _objc_retain(*(undefined8 *)((long)ppuVar13 + -0x730));
  uVar15 = *(undefined8 *)((long)ppuVar13 + -0x728);
  uVar9 = uVar15;
  func_0x00010c2056c0();
  _dispatch_group_create();
  uVar22 = uVar15;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)((long)ppuVar13 + -0x740) = uVar22;
  _objc_release(uVar15);
  puVar27 = PTR_PTR_1126b0018;
  _objc_alloc();
  *(undefined8 *)((long)ppuVar13 + -0x7e0) = uVar10;
  func_0x00010c047840();
  _dispatch_group_enter(uVar9);
  *(undefined8 *)((long)ppuVar13 + -0x1f0) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x1e8) = (undefined1 *)((long)ppuVar13 + -0x1f0);
  *(undefined8 *)((long)ppuVar13 + -0x1e0) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x1d8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x1d0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x1c8) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x220) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x218) = (undefined1 *)((long)ppuVar13 + -0x220);
  *(undefined8 *)((long)ppuVar13 + -0x210) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x208) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x200) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x1f8) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x250) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x248) = (undefined1 *)((long)ppuVar13 + -0x250);
  *(undefined8 *)((long)ppuVar13 + -0x240) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x238) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x230) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x228) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x280) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x278) = (undefined1 *)((long)ppuVar13 + -0x280);
  *(undefined8 *)((long)ppuVar13 + -0x270) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x268) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x260) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -600) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x2b0) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x2a8) = (undefined1 *)((long)ppuVar13 + -0x2b0);
  *(undefined8 *)((long)ppuVar13 + -0x2a0) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x298) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x290) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x288) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x2e0) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x2d8) = (undefined1 *)((long)ppuVar13 + -0x2e0);
  *(undefined8 *)((long)ppuVar13 + -0x2d0) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x2c8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x2c0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x2b8) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x300) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x2f8) = (undefined1 *)((long)ppuVar13 + -0x300);
  *(undefined8 *)((long)ppuVar13 + -0x2f0) = 0x2020000000;
  *(undefined1 *)((long)ppuVar13 + -0x2e8) = 0;
  *(undefined8 *)((long)ppuVar13 + -800) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x318) = (undefined1 *)((long)ppuVar13 + -800);
  *(undefined8 *)((long)ppuVar13 + -0x310) = 0x2020000000;
  *(undefined1 *)((long)ppuVar13 + -0x308) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x328) = 0;
  *(undefined **)((long)ppuVar13 + -0x710) = puVar27;
  func_0x00010c13e8e0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)ppuVar13 + -0x770) = puVar27;
  lVar16 = *(long *)((long)ppuVar13 + -0x328);
  _objc_retain(lVar16);
  *(undefined8 *)((long)ppuVar13 + -0x720) = 0;
  *(long *)((long)ppuVar13 + -0x788) = lVar16;
  if ((lVar16 == 0) && (*(long *)((long)ppuVar13 + -0x770) != 0)) {
    puVar27 = PTR_PTR_1126bcdd8;
    _objc_alloc();
    func_0x00010c0206e0();
    *(undefined **)((long)ppuVar13 + -0x720) = puVar27;
  }
  *(undefined **)((long)ppuVar13 + -0x3b0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)ppuVar13 + -0x3a8) = 0xc2000000;
  *(code **)((long)ppuVar13 + -0x3a0) = FUN_107da8f1c;
  *(undefined **)((long)ppuVar13 + -0x398) = &UNK_110a0c740;
  *(undefined1 **)((long)ppuVar13 + -0x360) = (undefined1 *)((long)ppuVar13 + -0x300);
  *(undefined1 **)((long)ppuVar13 + -0x358) = (undefined1 *)((long)ppuVar13 + -800);
  *(undefined1 **)((long)ppuVar13 + -0x368) = (undefined1 *)((long)ppuVar13 + -0x2e0);
  *(undefined8 *)((long)ppuVar13 + -0x390) = *(undefined8 *)((long)ppuVar13 + -0x728);
  uVar22 = *(undefined8 *)((long)ppuVar13 + -0x740);
  _objc_retain(uVar22);
  *(undefined8 *)((long)ppuVar13 + -0x388) = uVar22;
  _objc_retain(puVar12);
  *(undefined1 **)((long)ppuVar13 + -0x380) = puVar12;
  uVar22 = *(undefined8 *)((long)ppuVar13 + -0x720);
  _objc_retain(uVar22);
  *(undefined8 *)((long)ppuVar13 + -0x378) = uVar22;
  *(undefined1 **)((long)ppuVar13 + -0x350) = (undefined1 *)((long)ppuVar13 + -0x1f0);
  *(undefined1 **)((long)ppuVar13 + -0x348) = (undefined1 *)((long)ppuVar13 + -0x220);
  *(undefined1 **)((long)ppuVar13 + -0x340) = (undefined1 *)((long)ppuVar13 + -0x250);
  *(undefined1 **)((long)ppuVar13 + -0x338) = (undefined1 *)((long)ppuVar13 + -0x280);
  *(undefined1 **)((long)ppuVar13 + -0x330) = (undefined1 *)((long)ppuVar13 + -0x2b0);
  _objc_retain(uVar9);
  *(undefined8 *)((long)ppuVar13 + -0x370) = uVar9;
  func_0x00010c13ec80(*(undefined8 *)((long)ppuVar13 + -0x710));
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x710);
  func_0x00010c13ef00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar10;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)((long)ppuVar13 + -0x718) = uVar22;
  _objc_release(uVar10);
  lVar16 = *(long *)((long)ppuVar13 + -0x718);
  func_0x00010bf529e0();
  *(undefined8 *)((long)ppuVar13 + -0x7d8) = uVar7;
  *(undefined1 **)((long)ppuVar13 + -2000) = puVar12;
  if (lVar16 == 1) {
    lVar16 = *(long *)((long)ppuVar13 + -0x718);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar16 == 0) {
      *(undefined8 *)((long)ppuVar13 + -0x3c8) = 0;
      *(undefined8 *)((long)ppuVar13 + -0x3d0) = 0;
      *(undefined8 *)((long)ppuVar13 + -0x3b8) = 0;
      *(undefined8 *)((long)ppuVar13 + -0x3c0) = 0;
      *(undefined8 *)((long)ppuVar13 + -0x3d8) = 0;
      *(undefined8 *)((long)ppuVar13 + -0x3e0) = 0;
    }
    else {
      func_0x00010bdc1120((undefined1 *)((long)ppuVar13 + -0x3e0),lVar16);
    }
    uVar7 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uVar10 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uVar22 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    *(undefined8 *)((long)ppuVar13 + -0x408) = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    *(undefined8 *)((long)ppuVar13 + -0x410) = uVar7;
    *(undefined8 *)((long)ppuVar13 + -0x3f8) = uVar10;
    *(undefined8 *)((long)ppuVar13 + -0x400) = uVar22;
    uVar7 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    *(undefined8 *)((long)ppuVar13 + -1000) =
         *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    *(undefined8 *)((long)ppuVar13 + -0x3f0) = uVar7;
    puVar11 = (undefined1 *)((long)ppuVar13 + -0x3e0);
    _CMTimeRangeEqual(puVar11,(undefined1 *)((long)ppuVar13 + -0x410));
    _objc_release(lVar16);
    if ((int)puVar11 != 0) {
      func_0x000107e623f0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined1 *)0x0) {
        *(undefined8 *)((long)ppuVar13 + -0x408) = 0;
        *(undefined8 *)((long)ppuVar13 + -0x410) = 0;
        *(undefined8 *)((long)ppuVar13 + -0x400) = 0;
      }
      else {
        func_0x00010bdc1140((undefined1 *)((long)ppuVar13 + -0x410),puVar12);
      }
      *(undefined8 *)((long)ppuVar13 + -0x3d8) = *(undefined8 *)((long)ppuVar13 + -0x408);
      *(undefined8 *)((long)ppuVar13 + -0x3e0) = *(undefined8 *)((long)ppuVar13 + -0x410);
      *(undefined8 *)((long)ppuVar13 + -0x3d0) = *(undefined8 *)((long)ppuVar13 + -0x400);
      uVar22 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      *(undefined8 *)((long)ppuVar13 + -0x7f8) = uVar22;
      *(undefined8 *)((long)ppuVar13 + -0x800) = uVar7;
      *(undefined8 *)((long)ppuVar13 + -0x4a8) = uVar22;
      *(undefined8 *)((long)ppuVar13 + -0x4b0) = uVar7;
      uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      *(undefined8 *)((long)ppuVar13 + -0x4a0) = uVar7;
      puVar11 = (undefined1 *)((long)ppuVar13 + -0x3e0);
      _CMTimeCompare(puVar11,(undefined1 *)((long)ppuVar13 + -0x4b0));
      puVar27 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if ((int)puVar11 == 0) {
        *(undefined **)((long)ppuVar13 + -0x440) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)ppuVar13 + -0x438) = 0xc2000000;
        *(code **)((long)ppuVar13 + -0x430) = FUN_107da98ec;
        *(undefined **)((long)ppuVar13 + -0x428) = &UNK_11084aaa8;
        uVar7 = *(undefined8 *)((long)ppuVar13 + -0x730);
        _objc_retain(uVar7);
        *(undefined8 *)((long)ppuVar13 + -0x418) = uVar7;
        *(undefined8 *)((long)ppuVar13 + -0x420) = *(undefined8 *)((long)ppuVar13 + -0x728);
        func_0x00010007380c(*(undefined8 *)((long)ppuVar13 + -0x738),
                            (undefined1 *)((long)ppuVar13 + -0x440));
        _objc_release(*(undefined8 *)((long)ppuVar13 + -0x418));
        uVar7 = *(undefined8 *)((long)ppuVar13 + -0x7d8);
        lVar16 = *(long *)((long)ppuVar13 + -2000);
        _objc_release(puVar12);
        goto LAB_107da8bf0;
      }
      *(undefined8 *)((long)ppuVar13 + -0x4a8) = *(undefined8 *)((long)ppuVar13 + -0x7f8);
      *(undefined8 *)((long)ppuVar13 + -0x4b0) = *(undefined8 *)((long)ppuVar13 + -0x800);
      *(undefined8 *)((long)ppuVar13 + -0x4a0) = uVar7;
      *(undefined8 *)((long)ppuVar13 + -0x4d8) = *(undefined8 *)((long)ppuVar13 + -0x408);
      *(undefined8 *)((long)ppuVar13 + -0x4e0) = *(undefined8 *)((long)ppuVar13 + -0x410);
      *(undefined8 *)((long)ppuVar13 + -0x4d0) = *(undefined8 *)((long)ppuVar13 + -0x400);
      _CMTimeRangeMake((undefined1 *)((long)ppuVar13 + -0x3e0),
                       (undefined1 *)((long)ppuVar13 + -0x4b0),
                       (undefined1 *)((long)ppuVar13 + -0x4e0));
      func_0x00010c297240();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar13 + -0x1c0) = puVar27;
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(*(undefined8 *)((long)ppuVar13 + -0x718));
      _objc_release(puVar27);
      _objc_release(puVar12);
      *(undefined **)((long)ppuVar13 + -0x718) = puVar8;
    }
  }
  _dispatch_group_enter(uVar9);
  puVar27 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)ppuVar13 + -0x3e0) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x3d8) = (undefined1 *)((long)ppuVar13 + -0x3e0);
  *(undefined8 *)((long)ppuVar13 + -0x3d0) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x3c8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x3c0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x3b8) = 0;
  *(undefined8 *)((long)ppuVar13 + -0x410) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x408) = (undefined1 *)((long)ppuVar13 + -0x410);
  *(undefined8 *)((long)ppuVar13 + -0x400) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x3f8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x3f0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -1000) = 0;
  *(undefined **)((long)ppuVar13 + -0x480) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)ppuVar13 + -0x478) = 0xc2000000;
  *(code **)((long)ppuVar13 + -0x470) = FUN_107da99e8;
  *(undefined **)((long)ppuVar13 + -0x468) = &UNK_110a0c790;
  *(undefined1 **)((long)ppuVar13 + -0x450) = (undefined1 *)((long)ppuVar13 + -0x410);
  *(undefined1 **)((long)ppuVar13 + -0x448) = (undefined1 *)((long)ppuVar13 + -0x3e0);
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x740);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x460) = uVar7;
  _objc_retain(uVar9);
  *(undefined8 *)((long)ppuVar13 + -0x458) = uVar9;
  func_0x00010c13e8c0(*(undefined8 *)((long)ppuVar13 + -0x710));
  _dispatch_group_enter(uVar9);
  *(undefined8 *)((long)ppuVar13 + -0x4b0) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x4a8) = (undefined1 *)((long)ppuVar13 + -0x4b0);
  *(undefined8 *)((long)ppuVar13 + -0x4a0) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x498) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x490) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x488) = 0;
  puVar11 = (undefined1 *)((long)ppuVar13 + -0x4e0);
  *(undefined8 *)((long)ppuVar13 + -0x4e0) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x4d8) = puVar11;
  *(undefined8 *)((long)ppuVar13 + -0x4d0) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x4c8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x4c0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x4b8) = 0;
  puVar12 = (undefined1 *)((long)ppuVar13 + -0x510);
  *(undefined8 *)((long)ppuVar13 + -0x510) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x508) = puVar12;
  *(undefined8 *)((long)ppuVar13 + -0x500) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x4f8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x4f0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x4e8) = 0;
  puVar1 = (undefined1 *)((long)ppuVar13 + -0x540);
  *(undefined8 *)((long)ppuVar13 + -0x540) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x538) = puVar1;
  *(undefined8 *)((long)ppuVar13 + -0x530) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x528) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x520) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x518) = 0;
  puVar2 = (undefined1 *)((long)ppuVar13 + -0x570);
  *(undefined8 *)((long)ppuVar13 + -0x570) = 0;
  *(undefined1 **)((long)ppuVar13 + -0x568) = puVar2;
  *(undefined8 *)((long)ppuVar13 + -0x560) = 0x3032000000;
  *(code **)((long)ppuVar13 + -0x558) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar13 + -0x550) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar13 + -0x548) = 0;
  *(undefined **)((long)ppuVar13 + -0x5c0) = puVar27;
  *(undefined8 *)((long)ppuVar13 + -0x5b8) = 0xc2000000;
  *(code **)((long)ppuVar13 + -0x5b0) = FUN_107da9c1c;
  *(undefined **)((long)ppuVar13 + -0x5a8) = &UNK_110a0c7c0;
  *(undefined1 **)((long)ppuVar13 + -0x598) = (undefined1 *)((long)ppuVar13 + -0x4b0);
  *(undefined1 **)((long)ppuVar13 + -0x590) = puVar11;
  *(undefined1 **)((long)ppuVar13 + -0x588) = puVar12;
  *(undefined1 **)((long)ppuVar13 + -0x580) = puVar1;
  *(undefined1 **)((long)ppuVar13 + -0x578) = puVar2;
  _objc_retain(uVar9);
  *(undefined8 *)((long)ppuVar13 + -0x5a0) = uVar9;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x728);
  uVar22 = uVar10;
  func_0x00010be63f00(uVar10);
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)ppuVar13 + -0x708) = puVar27;
  *(undefined8 *)((long)ppuVar13 + -0x700) = 0xc2000000;
  *(code **)((long)ppuVar13 + -0x6f8) = FUN_107da9d58;
  *(undefined **)((long)ppuVar13 + -0x6f0) = &UNK_110a0c850;
  *(undefined1 **)((long)ppuVar13 + -0x640) = (undefined1 *)((long)ppuVar13 + -0x2e0);
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x788);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x6e8) = uVar7;
  *(undefined1 **)((long)ppuVar13 + -0x638) = (undefined1 *)((long)ppuVar13 + -0x410);
  *(undefined1 **)((long)ppuVar13 + -0x630) = puVar12;
  *(undefined1 **)((long)ppuVar13 + -0x628) = puVar1;
  *(undefined1 **)((long)ppuVar13 + -0x620) = puVar2;
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x738);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x6e0) = uVar7;
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x730);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x648) = uVar7;
  *(undefined8 *)((long)ppuVar13 + -0x6d8) = uVar10;
  *(undefined1 **)((long)ppuVar13 + -0x618) = (undefined1 *)((long)ppuVar13 + -0x220);
  *(undefined1 **)((long)ppuVar13 + -0x610) = (undefined1 *)((long)ppuVar13 + -0x250);
  *(undefined1 **)((long)ppuVar13 + -0x608) = (undefined1 *)((long)ppuVar13 + -0x280);
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x720);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x6d0) = uVar7;
  *(undefined1 **)((long)ppuVar13 + -0x600) = (undefined1 *)((long)ppuVar13 + -0x3e0);
  *(undefined1 **)((long)ppuVar13 + -0x5f8) = (undefined1 *)((long)ppuVar13 + -0x4b0);
  *(undefined1 **)((long)ppuVar13 + -0x5f0) = puVar11;
  *(undefined1 **)((long)ppuVar13 + -0x5e8) = (undefined1 *)((long)ppuVar13 + -0x2b0);
  *(char *)((long)ppuVar13 + -0x5c8) = (char)*(undefined4 *)((long)ppuVar13 + -0x7e8);
  *(char *)((long)ppuVar13 + -0x5c7) = (char)*(undefined4 *)((long)ppuVar13 + -0x7e4);
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x7c0);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x6c8) = uVar7;
  uVar26 = *(undefined8 *)((long)ppuVar13 + -0x778);
  _objc_retain(uVar26);
  *(undefined8 *)((long)ppuVar13 + -0x6c0) = uVar26;
  uVar21 = *(undefined8 *)((long)ppuVar13 + -0x780);
  _objc_retain(uVar21);
  *(undefined8 *)((long)ppuVar13 + -0x6b8) = uVar21;
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x760);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x6b0) = uVar7;
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x7c8);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x6a8) = uVar7;
  uVar7 = *(undefined8 *)((long)ppuVar13 + -0x7d8);
  _objc_retain(uVar7);
  *(undefined8 *)((long)ppuVar13 + -0x6a0) = uVar7;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x7b0);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x698) = uVar10;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x7a0);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x690) = uVar10;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x790);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x688) = uVar10;
  *(undefined1 **)((long)ppuVar13 + -0x5e0) = (undefined1 *)((long)ppuVar13 + -0x300);
  *(undefined1 **)((long)ppuVar13 + -0x5d8) = (undefined1 *)((long)ppuVar13 + -800);
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x758);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x680) = uVar10;
  *(undefined1 **)((long)ppuVar13 + -0x5d0) = (undefined1 *)((long)ppuVar13 + -0x1f0);
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x718);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x678) = uVar10;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x768);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x670) = uVar10;
  lVar16 = *(long *)((long)ppuVar13 + -2000);
  _objc_retain(lVar16);
  *(long *)((long)ppuVar13 + -0x668) = lVar16;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x748);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x660) = uVar10;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x7b8);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x658) = uVar10;
  uVar10 = *(undefined8 *)((long)ppuVar13 + -0x750);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar13 + -0x650) = uVar10;
  func_0x000100bc0718(uVar9,uVar22,(undefined1 *)((long)ppuVar13 + -0x708));
  _objc_release(uVar22);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x650));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x658));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x660));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x668));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x670));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x678));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x680));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x688));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x690));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x698));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6a0));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6a8));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6b0));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6b8));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6c0));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6c8));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6d0));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x648));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6e0));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x6e8));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x5a0));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x570),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x548));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x540),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x518));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x510),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x4e8));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x4e0),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x4b8));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x4b0),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x488));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x458));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x460));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x410),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -1000));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x3e0),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x3b8));
LAB_107da8bf0:
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x718));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x370));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x378));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x380));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x388));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x770));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x788));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x720));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -800),8);
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x300),8);
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x2e0),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x2b8));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x2b0),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x288));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x280),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -600));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x250),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x228));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x220),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x1f8));
  __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x1f0),8);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x1c8));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x710));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x740));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x7e0));
  _objc_release(uVar9);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x730));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x748));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x750));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x738));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x758));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x760));
  _objc_release(uVar21);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x768));
  _objc_release(uVar26);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x790));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x7a0));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x798));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x7a8));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x7b0));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x7b8));
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x7c0));
  _objc_release(uVar7);
  _objc_release(*(undefined8 *)((long)ppuVar13 + -0x7c8));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)ppuVar13 + -0x1b8)) {
    ___stack_chk_fail();
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -800),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x300),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x2e0),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x2b0),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x280),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x250),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x220),8);
    lVar17 = 8;
    __Block_object_dispose((undefined1 *)((long)ppuVar13 + -0x1f0));
    __Unwind_Resume();
    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(lVar17 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 107da55ec; end: 107da5673; -[SCMemoriesTranscodingHelper memoriesTranscodeInfoFromSnapDoc:gallerySnap:] */

void FUN_107da55ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_107da734c(param_3,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107da5674; end: 107da5733; -[SCMemoriesTranscodingHelper _getMediaRenderSizeForSnap:] */

undefined1  [16]
FUN_107da5674(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_PTR_1126bf720;
  _objc_retain(param_5);
  func_0x00010c0c2640(puVar1);
  uVar2 = param_5;
  func_0x00010bfe0640();
  uVar3 = param_5;
  func_0x00010c2a5040();
  _objc_release(param_5);
  fVar4 = (float)(int)uVar2 / (float)(int)uVar3;
  fVar5 = ABS(fVar4 + 1.3333334) * 1.1920929e-07;
  if (fVar5 <= 1.1754944e-38) {
    fVar5 = 1.1754944e-38;
  }
  dVar6 = param_1 * 1.3333333730697632;
  if (fVar5 <= ABS(fVar4 + -1.3333334)) {
    dVar6 = param_2;
  }
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 107da5734; end: 107da5817; -[SCMemoriesTranscodingHelper .cxx_destruct] */

void FUN_107da5734(long param_1)

{
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



/* Entry: 107da5818; end: 107da58fb; -[SCMemoriesTranscodingHelperServiceProvider provide] */

void FUN_107da5818(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d7d38;
  _objc_alloc(PTR_PTR_1126d7d38);
  func_0x00010c02b020();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107da58fc; end: 107da593b;  */

void FUN_107da58fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107da593c; end: 107da5dc3; -[SCMemoriesTranscodingHelperServiceProvider _buildMemoriesTranscodingHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da593c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uStack_88;
  
  puVar1 = PTR_PTR_1126d7d40;
  _objc_alloc();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11276f174;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar17;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11276f178;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar18;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11276f170;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_88 = 0;
    lVar20 = 0;
  }
  else {
    uStack_88 = param_1 + _DAT_11276f1ac;
    _objc_loadWeakRetained();
    lVar20 = param_1 + _DAT_11276f17c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar20;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11276f180;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar21;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11276f184;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar22;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11276f188;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar23;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11276f18c;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar24;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11276f190;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar25;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11276f194;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar26;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11276f1a8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar27;
  func_0x00010bf69900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
    lVar28 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11276f198;
    _objc_loadWeakRetained();
    lVar28 = param_1 + _DAT_11276f19c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar28;
  func_0x00010bf2fe40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
    lVar31 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11276f1a0;
    _objc_loadWeakRetained();
    lVar31 = param_1 + _DAT_11276f1b0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar31;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 0;
  if (param_1 != 0) {
    lVar15 = param_1 + _DAT_11276f1a4;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar15;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff2c0(puVar1,param_2,lVar2,lVar3,lVar4,uStack_88,lVar5,lVar6,lVar7,lVar8,lVar9,
                      lVar10,lVar11,lVar12,lVar29,lVar13,lVar30,lVar14,lVar16);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar13);
  _objc_release(lVar28);
  _objc_release(lVar29);
  _objc_release(lVar12);
  _objc_release(lVar27);
  _objc_release(lVar11);
  _objc_release(lVar26);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar24);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(lVar7);
  _objc_release(lVar22);
  _objc_release(lVar6);
  _objc_release(lVar21);
  _objc_release(lVar5);
  _objc_release(lVar20);
  _objc_release(uStack_88);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(lVar2);
  _objc_release(lVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107da5dc4; end: 107da5ebb; -[SCMemoriesTranscodingHelperServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da5dc4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276f1b0);
  _objc_destroyWeak(param_1 + _DAT_11276f1ac);
  _objc_destroyWeak(param_1 + _DAT_11276f1a8);
  _objc_destroyWeak(param_1 + _DAT_11276f1a4);
  _objc_destroyWeak(param_1 + _DAT_11276f1a0);
  _objc_destroyWeak(param_1 + _DAT_11276f19c);
  _objc_destroyWeak(param_1 + _DAT_11276f198);
  _objc_destroyWeak(param_1 + _DAT_11276f194);
  _objc_destroyWeak(param_1 + _DAT_11276f190);
  _objc_destroyWeak(param_1 + _DAT_11276f18c);
  _objc_destroyWeak(param_1 + _DAT_11276f188);
  _objc_destroyWeak(param_1 + _DAT_11276f184);
  _objc_destroyWeak(param_1 + _DAT_11276f180);
  _objc_destroyWeak(param_1 + _DAT_11276f17c);
  _objc_destroyWeak(param_1 + _DAT_11276f178);
  _objc_destroyWeak(param_1 + _DAT_11276f174);
  _objc_destroyWeak(param_1 + _DAT_11276f170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276f16c);
  return;
}



/* Entry: 107da5ebc; end: 107da61d7;  */

void FUN_107da5ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
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
  undefined1 uStack_80;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_107da61d8;
  puStack_108 = &UNK_110a0c6e0;
  uStack_f0 = in_stack_00000020;
  uStack_d8 = in_stack_00000008;
  uStack_d0 = in_stack_00000038;
  uStack_c8 = in_stack_00000040;
  uStack_c0 = in_stack_00000048;
  uStack_b0 = in_stack_00000018;
  uStack_a0 = in_stack_00000010;
  uStack_98 = in_stack_00000030;
  uStack_100 = param_7;
  uStack_f8 = param_3;
  uStack_e8 = param_4;
  uStack_e0 = param_9;
  uStack_b8 = param_8;
  uStack_a8 = param_6;
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_5;
  _objc_retain();
  _objc_retain(in_stack_00000010);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000018);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_9);
  _objc_retain(param_4);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010007380c(in_stack_00000028,&puStack_120);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000010);
  _objc_release(param_6);
  _objc_release(in_stack_00000018);
  _objc_release(param_8);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000008);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(in_stack_00000020);
  _objc_release(param_3);
  _objc_release(param_7);
  return;
}



/* Entry: 107da61d8; end: 107da647b;  */

void FUN_107da61d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13a8c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbf380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  FUN_107ff9c80(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),uVar4,
                *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar2 = uVar6;
  func_0x00010c2a5040(uVar6);
  dVar13 = (double)(int)uVar2;
  uVar2 = uVar6;
  func_0x00010bfe0640(uVar6);
  _objc_release(uVar6);
  dVar12 = (double)(int)uVar2;
  func_0x00010b690b78(dVar13,dVar12,0x500);
  puVar5 = PTR_PTR_1126b26c0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_107da647c(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),uVar2,
                *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29b8e0(dVar13,dVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar11);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar2);
  _objc_retain(puVar5);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010c136020(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 107da647c; end: 107da6613;  */

void FUN_107da647c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d7d48;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26fd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  FUN_107ff9c80(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar6 = param_3;
  func_0x00010c2a5040(param_3);
  uVar7 = param_3;
  func_0x00010bfe0640(param_3);
  func_0x000109023974(param_3);
  func_0x00010c0ed100(param_3);
  func_0x000109023b28(param_3);
  func_0x000109023acc();
  _objc_release(param_3);
  func_0x00010c047320((double)(int)uVar6,(double)(int)uVar7,param_1,param_2,puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107da6614; end: 107da6ab3;  */

void FUN_107da6614(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010b5fa088();
  uVar4 = 6;
  if (10 < lVar1 - 2U) {
    uVar4 = 4;
  }
  puVar2 = PTR_PTR_1126c4288;
  func_0x00010b68eef4();
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_3 + 0x68) & 1) == 0) {
    if (puVar2 != (undefined *)0x0) {
      puVar2[0x1b] = 1;
      _objc_retain(puVar2);
    }
    _objc_release(puVar2);
  }
  puVar3 = puVar2;
  func_0x00010b68f1bc(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107da6ab4(uVar4,puVar3,*(undefined8 *)(param_3 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = *(ulong *)(param_3 + 0x20);
  func_0x00010bfed740();
  dVar11 = 3.0;
  if ((uVar5 & 1) == 0) {
    func_0x00010bf8b160(0x4008000000000000,*(undefined8 *)(param_3 + 0x20));
    dVar11 = (double)SUB84(dVar11,0);
  }
  func_0x00010c1aa220(dVar11,uVar4);
  func_0x00010c204760(uVar4);
  func_0x00010bf46b40(uVar4);
  lVar1 = *(long *)(param_3 + 0x38);
  func_0x00010c27dd80();
  if (lVar1 - 1U < 2) {
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c130740(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(uVar4);
    _objc_release(uVar6);
    dVar12 = INFINITY;
    func_0x00010c186240(uVar4);
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    dVar11 = 0.0;
    if (dVar12 != 0.0) {
      if (param_2 == 0.0) {
        dVar11 = INFINITY;
      }
      else {
        dVar11 = dVar12 / param_2;
      }
    }
  }
  else {
    if (lVar1 != 0) goto LAB_107da67bc;
    func_0x00010c186260(uVar4);
    func_0x00010c186240(0x7ff0000000000000,uVar4);
    dVar11 = 0.0;
  }
  func_0x00010c222080(dVar11,uVar4);
LAB_107da67bc:
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010b5fa088();
  uVar6 = param_4;
  if (lVar1 - 2U < 0xb) {
    func_0x000109023974(*(undefined8 *)(param_3 + 0x20));
    if (*(char *)(param_3 + 0x68) == '\x01') {
      uVar9 = param_4;
      func_0x00010c0c5d00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0(uVar4);
      _objc_release(uVar9);
      func_0x00010c222140(uVar4);
      func_0x00010c1511c0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1511c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_4;
      func_0x00010c0c5d00(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + 0x20);
      func_0x000109023acc(uVar7);
      uVar10 = uVar6;
      func_0x00010854478c(dVar11,param_2,0x3ff0000000000000,0x3ff0000000000000,uVar6,uVar9,0,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0(uVar4);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar6);
      func_0x00010c222140(uVar4);
      uVar6 = 0;
    }
    lVar1 = *(long *)(param_3 + 0x50);
    if (lVar1 != 0) {
      uVar9 = *(undefined8 *)(param_3 + 0x48);
      uVar10 = *(undefined8 *)(param_3 + 0x20);
      _objc_retain(lVar1);
      _objc_retain(uVar4);
      func_0x00010902339c(uVar10,uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010bf39800(lVar1);
      _objc_release(lVar1);
      uVar9 = uVar10;
      func_0x000109024c88(0x3f9999999999999a,uVar10,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c207b40(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(uVar10);
    }
  }
  else {
    func_0x00010c1511c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d75e0(uVar4);
    func_0x00010c21d9a0(uVar4);
    func_0x00010c222140(uVar4);
  }
  lVar1 = *(long *)(param_3 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c241220(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    func_0x00010c135240(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar4);
  }
  (**(code **)(*(long *)(param_3 + 0x60) + 0x10))(*(long *)(param_3 + 0x60),uVar6,uVar4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 107da6ab4; end: 107da6d33;  */

void FUN_107da6ab4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf58fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b26c0;
  _objc_opt_class(PTR_PTR_1126b26c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107da6d34; end: 107da7297;  */

void FUN_107da6d34(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuStack_128;
  undefined *puStack_110;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126ae558;
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126affb8;
    _objc_alloc();
    puVar11 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined *)0x0) {
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_e0,puVar11);
    }
    uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(auStack_98,&uStack_b0,&uStack_e0);
    uStack_d8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
    uStack_e0 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
    uStack_c8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
    uStack_d0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
    uStack_b8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
    uStack_c0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
    func_0x00010c0525a0();
    _objc_release(puVar11);
    puVar3 = PTR_PTR_1126affb0;
    _objc_alloc();
    func_0x00010bffe1e0();
    func_0x00010bef9e40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb4f40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      ppuStack_128 = &PTR____CFConstantStringClassReference_110f314b8;
      do {
        puVar6 = PTR_PTR_1126b1350;
        _objc_alloc(PTR_PTR_1126b1350);
        uVar10 = param_8;
        func_0x00010c2542a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_8;
        func_0x00010bf5d860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05cee0(puVar6);
        ppuVar8 = ppuStack_128;
        func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                            &PTR____CFConstantStringClassReference_110dbab38,1,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(ppuVar8);
        _objc_release(puVar6);
        _objc_release(uVar7);
        _objc_release(uVar10);
        puVar11 = puVar11 + 1;
        puVar6 = puVar4;
        func_0x00010bf529e0();
      } while (puVar11 < puVar6);
    }
    puVar6 = puVar4;
    func_0x00010bf529e0();
    puVar11 = PTR_PTR_1126ae558;
    if (puVar6 == (undefined *)0x0) {
      puStack_110 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9c80(puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_110 = param_2;
      func_0x00010c29af00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c4ad0;
      _objc_alloc(PTR_PTR_1126c4ad0);
      puVar11 = puStack_110;
      func_0x00010c0d9500(puStack_110);
      func_0x00010c060b80(puVar6);
      _objc_release(puVar11);
      puVar9 = PTR_PTR_1126c4ac8;
      _objc_alloc(PTR_PTR_1126c4ac8);
      func_0x00010c0525e0();
      uVar10 = 0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      func_0x00010bf16e60(puVar6);
      _objc_release(uVar10);
      puVar11 = puVar1;
      func_0x00010bfbc3e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar6);
    }
    _objc_release(puStack_110);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107da7298; end: 107da734b;  */

void FUN_107da7298(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (((param_3 == 0) || (param_4 != 0)) || (lVar1 = param_2, func_0x00010bf529e0(), lVar1 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107da734c; end: 107da752b;  */

void FUN_107da734c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b0018;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c047840();
  _objc_release(param_5);
  puVar2 = puVar1;
  func_0x00010c13e8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126bcdd8;
    _objc_alloc(PTR_PTR_1126bcdd8);
    func_0x00010c0206e0();
  }
  puVar3 = PTR_PTR_1126d7d48;
  _objc_alloc(PTR_PTR_1126d7d48);
  uVar4 = param_4;
  func_0x00010bf313a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c26fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  uVar7 = param_3;
  FUN_107ff9770(param_3,puVar8);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ff9530(param_3);
  uVar9 = param_1;
  uVar10 = param_2;
  FUN_107ff9530(param_3);
  func_0x00010c047320(param_1,param_2,uVar9,uVar10,puVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107da752c; end: 107da7fa7;  */

void FUN_107da752c(long param_1,undefined **param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined8 in_x5;
  undefined4 in_w6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined ***pppuVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined8 uVar26;
  undefined *puVar27;
  double dVar28;
  undefined *puVar29;
  double dVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **appuStack_2d0 [5];
  undefined *puStack_2a8;
  undefined ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined ***pppuStack_270;
  long lStack_268;
  long lStack_260;
  undefined **ppuStack_258;
  long lStack_250;
  undefined ***pppuStack_248;
  uint uStack_23c;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  appuStack_2d0[3] = param_2;
  _objc_retain(param_2);
  ppuVar35 = (undefined **)PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600();
  _objc_retainAutoreleasedReturnValue();
  uStack_290 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  puVar27 = (undefined *)ppuVar35;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
  puVar9 = (undefined *)ppuVar35;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  puStack_230 = puVar20;
  func_0x00010bf529e0(param_1);
  appuStack_2d0[2] = (undefined **)appuStack_2d0;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 * 3);
  pppuVar19 = appuStack_2d0 + extraout_x8 * -2;
  lVar16 = param_1;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar25 = pppuVar19 + lVar16 * -2;
  lVar16 = param_1;
  func_0x00010bf529e0(param_1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 * 0x18 + 0xfU & 0xfffffffffffffff0);
  ppuVar23 = (undefined **)((long)pppuVar25 - extraout_x8_00);
  lVar16 = param_1;
  func_0x00010bf529e0(param_1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 * 3);
  ppuVar7 = ppuVar23 + extraout_x8_01 * -2;
  ppuStack_f8 = *(undefined ***)(PTR__kCMTimeZero_110348670 + 8);
  ppuStack_100 = *(undefined ***)PTR__kCMTimeZero_110348670;
  ppuStack_f0 = *(undefined ***)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_260 = param_1;
  func_0x00010bf529e0();
  puStack_2a8 = puVar9;
  lStack_268 = param_1;
  if (param_1 != 0) {
    uStack_23c = 0;
    lVar16 = 0;
    pppuVar24 = pppuVar25 + 1;
    ppuVar34 = (undefined **)0x0;
    ppuVar32 = (undefined **)0x0;
    appuStack_2d0[0] = ppuVar23;
    appuStack_2d0[1] = ppuVar35;
    appuStack_2d0[4] = ppuVar7;
    pppuStack_2a0 = pppuVar25;
    pppuStack_270 = pppuVar19;
    puStack_238 = puVar27;
    do {
      lVar17 = lStack_260;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar33 = ppuVar32;
      if (lVar17 != 0) {
        puVar9 = PTR__OBJC_CLASS___AVAsset_1126aff38;
        lStack_250 = lVar17;
        func_0x00010bf0b9e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_220 = puVar9;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        if (puVar20 == (undefined *)0x0) {
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c26f620(&ppuStack_e0,puVar20);
        }
        ppuStack_278 = *(undefined ***)(PTR__kCMTimeInvalid_110348648 + 8);
        ppuStack_280 = *(undefined ***)PTR__kCMTimeInvalid_110348648;
        ppuStack_288 = *(undefined ***)(PTR__kCMTimeInvalid_110348648 + 0x10);
        in_x5 = 0;
        ppuStack_160 = ppuStack_280;
        ppuStack_158 = ppuStack_278;
        ppuStack_150 = ppuStack_288;
        func_0x00010c067160(puVar27);
        puVar27 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
        func_0x00010c299860();
        _objc_retainAutoreleasedReturnValue();
        puStack_228 = puVar27;
        if (puVar20 == (undefined *)0x0) {
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c26f620(&ppuStack_e0,puVar20);
        }
        ppuStack_158 = ppuStack_f8;
        ppuStack_160 = ppuStack_100;
        ppuStack_150 = ppuStack_f0;
        ppuStack_188 = ppuStack_c0;
        ppuStack_190 = ppuStack_c8;
        ppuStack_180 = ppuStack_b8;
        _CMTimeRangeMake(&ppuStack_130,&ppuStack_160,&ppuStack_190);
        ppuStack_158 = ppuStack_128;
        ppuStack_160 = ppuStack_130;
        ppuStack_148 = ppuStack_118;
        ppuStack_150 = ppuStack_120;
        ppuStack_138 = ppuStack_108;
        ppuStack_140 = ppuStack_110;
        ppuVar33 = ppuStack_110;
        ppuVar35 = ppuStack_120;
        func_0x00010c214ec0(puStack_228);
        func_0x00010befa120(puStack_230);
        func_0x00010c0d5d20(puVar20);
        if (puVar20 == (undefined *)0x0) {
          ppuStack_148 = (undefined **)0x0;
          ppuStack_150 = (undefined **)0x0;
          ppuStack_138 = (undefined **)0x0;
          ppuStack_140 = (undefined **)0x0;
          ppuStack_158 = (undefined **)0x0;
          ppuStack_160 = (undefined **)0x0;
        }
        else {
          func_0x00010c106f40(&ppuStack_160,puVar20);
        }
        ppuStack_d8 = ppuStack_158;
        ppuStack_e0 = ppuStack_160;
        ppuStack_c8 = ppuStack_148;
        ppuStack_d0 = ppuStack_150;
        ppuStack_b8 = ppuStack_138;
        ppuStack_c0 = ppuStack_140;
        _CGRectApplyAffineTransform(0,0,&ppuStack_e0);
        pppuVar24[-1] = ppuVar33;
        *pppuVar24 = ppuVar35;
        ppuVar4 = ppuStack_100;
        ppuVar23[1] = (undefined *)ppuStack_f8;
        *ppuVar23 = (undefined *)ppuVar4;
        ppuVar23[2] = (undefined *)ppuStack_f0;
        ppuStack_258 = ppuVar23;
        pppuStack_248 = pppuVar24;
        if (puVar20 == (undefined *)0x0) {
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c106f40(&ppuStack_e0,puVar20);
        }
        ppuVar5 = ppuStack_c8;
        ppuVar4 = ppuStack_d0;
        ppuVar23 = ppuStack_e0;
        pppuVar19[1] = ppuStack_d8;
        *pppuVar19 = ppuVar23;
        pppuVar19[3] = ppuVar5;
        pppuVar19[2] = ppuVar4;
        ppuVar23 = ppuStack_c0;
        pppuVar19[5] = ppuStack_b8;
        pppuVar19[4] = ppuVar23;
        puVar9 = puStack_220;
        if ((double)ppuVar35 <= (double)ppuVar34 && (double)ppuVar33 <= (double)ppuVar32) {
          ppuVar33 = ppuVar32;
          ppuVar35 = ppuVar34;
        }
        ppuVar34 = ppuVar35;
        puVar27 = puStack_220;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar27;
        func_0x00010bf529e0();
        _objc_release(puVar27);
        puVar27 = puStack_238;
        lVar17 = lStack_250;
        if (puVar6 == (undefined *)0x0) {
          if (puVar20 == (undefined *)0x0) {
            ppuStack_148 = (undefined **)0x0;
            ppuStack_150 = (undefined **)0x0;
            ppuStack_138 = (undefined **)0x0;
            ppuStack_140 = (undefined **)0x0;
            ppuStack_158 = (undefined **)0x0;
            ppuStack_160 = (undefined **)0x0;
          }
          else {
            func_0x00010c26f620(&ppuStack_160,puVar20);
          }
          pppuVar24 = pppuStack_248;
          ppuVar23 = ppuStack_258;
          ppuStack_188 = ppuStack_f8;
          ppuStack_190 = ppuStack_100;
          ppuStack_180 = ppuStack_f0;
          ppuStack_1b8 = ppuStack_140;
          ppuStack_1c0 = ppuStack_148;
          ppuStack_1b0 = ppuStack_138;
          _CMTimeRangeMake(&ppuStack_e0,&ppuStack_190,&ppuStack_1c0);
          ppuVar4 = ppuStack_c8;
          ppuVar32 = ppuStack_d0;
          ppuVar35 = ppuStack_e0;
          ppuVar7[1] = (undefined *)ppuStack_d8;
          *ppuVar7 = (undefined *)ppuVar35;
          ppuVar7[3] = (undefined *)ppuVar4;
          ppuVar7[2] = (undefined *)ppuVar32;
          ppuVar35 = ppuStack_c0;
          ppuVar7[5] = (undefined *)ppuStack_b8;
          ppuVar7[4] = (undefined *)ppuVar35;
          if (puVar27 != (undefined *)0x0) goto LAB_107da7a34;
LAB_107da7aa0:
          ppuStack_c8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
        }
        else {
          func_0x00010c279200(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          if (puVar20 == (undefined *)0x0) {
            ppuStack_c8 = (undefined **)0x0;
            ppuStack_d0 = (undefined **)0x0;
            ppuStack_b8 = (undefined **)0x0;
            ppuStack_c0 = (undefined **)0x0;
            ppuStack_d8 = (undefined **)0x0;
            ppuStack_e0 = (undefined **)0x0;
          }
          else {
            func_0x00010c26f620(&ppuStack_e0,puVar20);
          }
          puVar27 = puStack_238;
          lVar17 = lStack_250;
          ppuVar23 = ppuStack_258;
          ppuStack_158 = ppuStack_278;
          ppuStack_160 = ppuStack_280;
          ppuStack_150 = ppuStack_288;
          in_x5 = 0;
          func_0x00010c067160(puStack_2a8);
          puVar9 = *(undefined **)PTR__kCMTimeRangeInvalid_110348660;
          puVar31 = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
          puVar29 = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
          ppuVar7[1] = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 8);
          *ppuVar7 = puVar9;
          ppuVar7[3] = puVar31;
          ppuVar7[2] = puVar29;
          puVar9 = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
          ppuVar7[5] = *(undefined **)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
          ppuVar7[4] = puVar9;
          _objc_release(puVar6);
          uStack_23c = 1;
          pppuVar24 = pppuStack_248;
          if (puVar27 == (undefined *)0x0) goto LAB_107da7aa0;
LAB_107da7a34:
          func_0x00010c26f620(&ppuStack_e0,puVar27);
        }
        ppuStack_f8 = ppuStack_c0;
        ppuStack_100 = ppuStack_c8;
        ppuStack_f0 = ppuStack_b8;
        _objc_release(puStack_228);
        _objc_release(puVar20);
        _objc_release(puStack_220);
        pppuVar25 = pppuStack_2a0;
      }
      _objc_release(lVar17);
      lVar16 = lVar16 + 1;
      ppuVar7 = ppuVar7 + 6;
      pppuVar19 = pppuVar19 + 6;
      ppuVar23 = ppuVar23 + 3;
      pppuVar24 = pppuVar24 + 2;
      ppuVar32 = ppuVar33;
    } while (lStack_268 != lVar16);
    lVar16 = 0;
    pppuVar25 = pppuVar25 + 1;
    ppuVar7 = appuStack_2d0[0];
    lVar17 = lStack_268;
    do {
      pppuVar19 = pppuStack_270;
      lVar17 = lVar17 + -1;
      ppuVar23 = pppuVar25[-1];
      ppuVar35 = *pppuVar25;
      dVar28 = (double)ppuVar33 / (double)ppuVar23;
      dVar30 = (double)ppuVar34 / (double)ppuVar35;
      if (dVar30 <= dVar28) {
        dVar28 = dVar30;
      }
      puVar27 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
      func_0x00010c2998a0();
      _objc_retainAutoreleasedReturnValue();
      _CGAffineTransformMakeTranslation
                (&ppuStack_e0,((double)ppuVar33 - dVar28 * (double)ppuVar23) * 0.5,
                 ((double)ppuVar34 - dVar28 * (double)ppuVar35) * 0.5);
      ppuStack_188 = ppuStack_d8;
      ppuStack_190 = ppuStack_e0;
      ppuStack_178 = ppuStack_c8;
      ppuStack_180 = ppuStack_d0;
      ppuStack_168 = ppuStack_b8;
      ppuStack_170 = ppuStack_c0;
      _CGAffineTransformScale(&ppuStack_160,dVar28,dVar28,&ppuStack_190);
      ppuStack_d8 = ppuStack_158;
      ppuStack_e0 = ppuStack_160;
      ppuStack_c8 = ppuStack_148;
      ppuStack_d0 = ppuStack_150;
      ppuStack_b8 = ppuStack_138;
      ppuStack_c0 = ppuStack_140;
      puVar3 = (undefined8 *)((long)pppuVar19 + lVar16);
      ppuStack_188 = (undefined **)puVar3[1];
      ppuStack_190 = (undefined **)*puVar3;
      ppuStack_178 = (undefined **)puVar3[3];
      ppuStack_180 = (undefined **)puVar3[2];
      ppuStack_168 = (undefined **)puVar3[5];
      ppuStack_170 = (undefined **)puVar3[4];
      ppuStack_1b8 = ppuStack_158;
      ppuStack_1c0 = ppuStack_160;
      ppuStack_1a8 = ppuStack_148;
      ppuStack_1b0 = ppuStack_150;
      ppuStack_198 = ppuStack_138;
      ppuStack_1a0 = ppuStack_140;
      _CGAffineTransformConcat(&ppuStack_160,&ppuStack_190,&ppuStack_1c0);
      ppuStack_c8 = ppuStack_148;
      ppuStack_d0 = ppuStack_150;
      ppuStack_b8 = ppuStack_138;
      ppuStack_c0 = ppuStack_140;
      ppuStack_d8 = ppuStack_158;
      ppuStack_e0 = ppuStack_160;
      ppuStack_188 = (undefined **)ppuVar7[1];
      ppuStack_190 = (undefined **)*ppuVar7;
      ppuStack_180 = (undefined **)ppuVar7[2];
      func_0x00010c219980(puVar27);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar27;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puStack_230;
      func_0x00010c0dfd40(puStack_230);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9960();
      _objc_release(puVar20);
      _objc_release(puVar9);
      if ((uStack_23c & 1) == 0) {
        _objc_release(puVar27);
        ppuVar35 = appuStack_2d0[1];
        puVar27 = puStack_238;
        if (lVar17 == 0) goto LAB_107da7d14;
      }
      else {
        puVar3 = (undefined8 *)((long)appuStack_2d0[4] + lVar16);
        if (((((*(byte *)((long)puVar3 + 0xc) & 1) != 0) &&
             ((*(byte *)((long)puVar3 + 0x24) & 1) != 0)) &&
            (*(long *)((long)appuStack_2d0[4] + lVar16 + 0x28) == 0)) && (-1 < (long)puVar3[3])) {
          ppuStack_158 = (undefined **)puVar3[1];
          ppuStack_160 = (undefined **)*puVar3;
          ppuStack_148 = (undefined **)puVar3[3];
          ppuStack_150 = (undefined **)puVar3[2];
          ppuStack_138 = (undefined **)puVar3[5];
          ppuStack_140 = (undefined **)puVar3[4];
          func_0x00010c066740(puStack_2a8);
        }
        _objc_release(puVar27);
        ppuVar35 = appuStack_2d0[1];
        puVar27 = puStack_238;
        if (lVar17 == 0) goto LAB_107da7d20;
      }
      pppuVar25 = pppuVar25 + 2;
      lVar16 = lVar16 + 0x30;
      ppuVar7 = ppuVar7 + 3;
    } while( true );
  }
  ppuVar34 = (undefined **)0x0;
  ppuVar33 = (undefined **)0x0;
LAB_107da7d14:
  func_0x00010c12ec60(ppuVar35);
LAB_107da7d20:
  puVar9 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
  func_0x00010c299820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adc60();
  func_0x00010c1ea8e0(ppuVar33,ppuVar34,puVar9);
  _CMTimeMake(&ppuStack_1d8,1,0x1e);
  ppuStack_d8 = (undefined **)uStack_1d0;
  ppuStack_e0 = ppuStack_1d8;
  ppuStack_d0 = (undefined **)uStack_1c8;
  func_0x00010c19f2e0(puVar9);
  puVar20 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc();
  func_0x00010bff4280();
  puVar6 = PTR_PTR_1126b24f0;
  func_0x00010bfbde00(PTR_PTR_1126b24f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7200(puVar20);
  _objc_release(puVar6);
  ppuVar23 = appuStack_2d0[3];
  ppuVar7 = appuStack_2d0[3];
  func_0x00010c269d40(appuStack_2d0[3]);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar20;
  func_0x00010c0ef100(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar6;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900(ppuVar7);
  _objc_release(puVar29);
  _objc_release(puVar6);
  _objc_release(ppuVar7);
  func_0x00010c1d6fc0(puVar20);
  func_0x00010c200aa0(puVar20);
  func_0x00010c2213a0(puVar20);
  uVar8 = 0;
  _dispatch_semaphore_create();
  lVar16 = lStack_260;
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_107da7fa8;
  puStack_200 = &UNK_11084c4a0;
  ppuStack_1f8 = ppuVar23;
  lStack_1e8 = lStack_260;
  puStack_1f0 = puVar20;
  uStack_1e0 = uVar8;
  _objc_retain();
  _objc_retain(lVar16);
  _objc_retain(puVar20);
  _objc_retain(ppuVar23);
  func_0x00010bf9cee0(puVar20);
  _dispatch_semaphore_wait(uVar8,0xffffffffffffffff);
  puVar6 = puVar20;
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_1e0);
  _objc_release(lStack_1e8);
  _objc_release(puStack_1f0);
  _objc_release(ppuStack_1f8);
  _objc_release(uVar8);
  _objc_release(lVar16);
  _objc_release(puVar20);
  _objc_release(ppuVar23);
  _objc_release(puVar9);
  ppuVar7 = appuStack_2d0[2];
  _objc_release(puStack_230);
  _objc_release(puStack_2a8);
  _objc_release(puVar27);
  puVar29 = (undefined *)ppuVar35;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar13 = (undefined1 *)((long)ppuVar7 + -0x130);
  *(undefined ****)((long)ppuVar7 + -0x60) = &ppuStack_190;
  *(undefined **)((long)ppuVar7 + -0x58) = puVar27;
  *(undefined ***)((long)ppuVar7 + -0x50) = ppuVar23;
  *(long *)((long)ppuVar7 + -0x48) = lVar16;
  *(undefined **)((long)ppuVar7 + -0x40) = puVar6;
  *(undefined ***)((long)ppuVar7 + -0x38) = ppuVar35;
  *(undefined8 *)((long)ppuVar7 + -0x30) = uVar8;
  *(undefined **)((long)ppuVar7 + -0x28) = puVar20;
  *(undefined **)((long)ppuVar7 + -0x20) = puVar9;
  *(undefined ****)((long)ppuVar7 + -0x18) = appuStack_2d0;
  *(undefined1 **)((long)ppuVar7 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppuVar7 + -8) = FUN_107da7fa8;
  *(undefined8 *)((long)ppuVar7 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(puVar29 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined **)(puVar29 + 0x28);
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar9;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar8);
  _objc_release(puVar20);
  _objc_release(puVar9);
  _objc_release(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x108) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x110) = 0;
  *(undefined8 *)((long)ppuVar7 + -0xf8) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x100) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x128) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x130) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x118) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x120) = 0;
  puVar18 = *(undefined **)(puVar29 + 0x30);
  _objc_retain(puVar18);
  puVar12 = (undefined1 *)((long)ppuVar7 + -0xe8);
  uVar8 = 0x10;
  puVar31 = puVar18;
  func_0x00010bf52a60();
  uVar14 = (undefined4)in_x5;
  if (puVar31 != (undefined *)0x0) {
    lVar16 = **(long **)((long)ppuVar7 + -0x120);
    ppuVar23 = &PTR_PTR_1126af000;
    do {
      puVar27 = (undefined *)0x0;
      do {
        if (**(long **)((long)ppuVar7 + -0x120) != lVar16) {
          _objc_enumerationMutation(puVar18);
        }
        puVar20 = *(undefined **)(*(long *)((long)ppuVar7 + -0x128) + (long)puVar27 * 8);
        uVar8 = *(undefined8 *)(puVar29 + 0x20);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar20;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12f0c0(uVar8);
        _objc_release(puVar6);
        _objc_release(uVar8);
        ppuVar35 = (undefined **)PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60();
        _objc_release(ppuVar35);
        puVar27 = puVar27 + 1;
      } while (puVar31 != puVar27);
      puVar12 = (undefined1 *)((long)ppuVar7 + -0xe8);
      uVar8 = 0x10;
      puVar31 = puVar18;
      puVar13 = (undefined1 *)((long)ppuVar7 + -0x130);
      func_0x00010bf52a60();
      uVar14 = (undefined4)in_x5;
      puVar9 = (undefined *)0x0;
    } while (puVar31 != (undefined *)0x0);
  }
  _objc_release(puVar18);
  uVar10 = *(undefined8 *)(puVar29 + 0x38);
  _dispatch_semaphore_signal();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar7 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined ***)((long)ppuVar7 + -0x1a0) = ppuVar34;
  *(undefined ***)((long)ppuVar7 + -0x198) = ppuVar33;
  *(undefined ****)((long)ppuVar7 + -400) = &ppuStack_190;
  *(undefined **)((long)ppuVar7 + -0x188) = puVar27;
  *(undefined ***)((long)ppuVar7 + -0x180) = ppuVar23;
  *(long *)((long)ppuVar7 + -0x178) = lVar16;
  *(undefined **)((long)ppuVar7 + -0x170) = puVar6;
  *(undefined ***)((long)ppuVar7 + -0x168) = ppuVar35;
  *(undefined **)((long)ppuVar7 + -0x160) = puVar20;
  *(undefined **)((long)ppuVar7 + -0x158) = puVar9;
  *(undefined **)((long)ppuVar7 + -0x150) = puVar18;
  *(undefined **)((long)ppuVar7 + -0x148) = puVar29;
  *(undefined1 **)((long)ppuVar7 + -0x140) = (undefined1 *)((long)ppuVar7 + -0x10);
  *(code **)((long)ppuVar7 + -0x138) = FUN_107da817c;
  *(undefined4 *)((long)ppuVar7 + -0x7e8) = uVar14;
  *(undefined4 *)((long)ppuVar7 + -0x7e4) = in_w6;
  *(undefined8 *)((long)ppuVar7 + -0x728) = uVar10;
  *(undefined8 *)((long)ppuVar7 + -0x730) = *(undefined8 *)((long)ppuVar7 + -0xc0);
  *(undefined8 *)((long)ppuVar7 + -0x748) = *(undefined8 *)((long)ppuVar7 + -200);
  *(undefined8 *)((long)ppuVar7 + -0x750) = *(undefined8 *)((long)ppuVar7 + -0xd0);
  *(undefined8 *)((long)ppuVar7 + -0x738) = *(undefined8 *)((long)ppuVar7 + -0xd8);
  *(undefined8 *)((long)ppuVar7 + -0x758) = *(undefined8 *)((long)ppuVar7 + -0xe0);
  *(undefined8 *)((long)ppuVar7 + -0x760) = *(undefined8 *)((long)ppuVar7 + -0xe8);
  *(undefined8 *)((long)ppuVar7 + -0x780) = *(undefined8 *)((long)ppuVar7 + -0xf0);
  *(undefined8 *)((long)ppuVar7 + -0x768) = *(undefined8 *)((long)ppuVar7 + -0xf8);
  *(undefined8 *)((long)ppuVar7 + -0x778) = *(undefined8 *)((long)ppuVar7 + -0x100);
  uVar10 = *(undefined8 *)((long)ppuVar7 + -0x110);
  uVar15 = *(undefined8 *)((long)ppuVar7 + -0x108);
  uVar22 = *(undefined8 *)((long)ppuVar7 + -0x120);
  uVar21 = *(undefined8 *)((long)ppuVar7 + -0x118);
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x130);
  uVar26 = *(undefined8 *)((long)ppuVar7 + -0x128);
  *(undefined8 *)((long)ppuVar7 + -0x1b8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  *(undefined1 **)((long)ppuVar7 + -0x7c8) = puVar12;
  _objc_retain(puVar12);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x7c0) = in_x7;
  _objc_retain(in_x7);
  *(undefined8 *)((long)ppuVar7 + -0x7b8) = uVar11;
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x7b0) = uVar26;
  _objc_retain(uVar26);
  *(undefined8 *)((long)ppuVar7 + -0x7a8) = uVar22;
  _objc_retain(uVar22);
  *(undefined8 *)((long)ppuVar7 + -0x798) = uVar21;
  _objc_retain(uVar21);
  *(undefined8 *)((long)ppuVar7 + -0x7a0) = uVar10;
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar7 + -0x790) = uVar15;
  uVar26 = *(undefined8 *)((long)ppuVar7 + -0x778);
  _objc_retain(uVar15);
  _objc_retain(uVar26);
  uVar21 = *(undefined8 *)((long)ppuVar7 + -0x780);
  _objc_retain(*(undefined8 *)((long)ppuVar7 + -0x768));
  _objc_retain(uVar21);
  _objc_retain(*(undefined8 *)((long)ppuVar7 + -0x760));
  _objc_retain(*(undefined8 *)((long)ppuVar7 + -0x758));
  _objc_retain(*(undefined8 *)((long)ppuVar7 + -0x738));
  _objc_retain(*(undefined8 *)((long)ppuVar7 + -0x750));
  _objc_retain(*(undefined8 *)((long)ppuVar7 + -0x748));
  _objc_retain(*(undefined8 *)((long)ppuVar7 + -0x730));
  uVar15 = *(undefined8 *)((long)ppuVar7 + -0x728);
  uVar10 = uVar15;
  func_0x00010c2056c0();
  _dispatch_group_create();
  uVar22 = uVar15;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)((long)ppuVar7 + -0x740) = uVar22;
  _objc_release(uVar15);
  puVar27 = PTR_PTR_1126b0018;
  _objc_alloc();
  *(undefined8 *)((long)ppuVar7 + -0x7e0) = uVar11;
  func_0x00010c047840();
  _dispatch_group_enter(uVar10);
  *(undefined8 *)((long)ppuVar7 + -0x1f0) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x1e8) = (undefined1 *)((long)ppuVar7 + -0x1f0);
  *(undefined8 *)((long)ppuVar7 + -0x1e0) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x1d8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x1d0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x1c8) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x220) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x218) = (undefined1 *)((long)ppuVar7 + -0x220);
  *(undefined8 *)((long)ppuVar7 + -0x210) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x208) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x200) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x1f8) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x250) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x248) = (undefined1 *)((long)ppuVar7 + -0x250);
  *(undefined8 *)((long)ppuVar7 + -0x240) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x238) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x230) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x228) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x280) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x278) = (undefined1 *)((long)ppuVar7 + -0x280);
  *(undefined8 *)((long)ppuVar7 + -0x270) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x268) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x260) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -600) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x2b0) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x2a8) = (undefined1 *)((long)ppuVar7 + -0x2b0);
  *(undefined8 *)((long)ppuVar7 + -0x2a0) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x298) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x290) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x288) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x2e0) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x2d8) = (undefined1 *)((long)ppuVar7 + -0x2e0);
  *(undefined8 *)((long)ppuVar7 + -0x2d0) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x2c8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x2c0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x2b8) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x300) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x2f8) = (undefined1 *)((long)ppuVar7 + -0x300);
  *(undefined8 *)((long)ppuVar7 + -0x2f0) = 0x2020000000;
  *(undefined1 *)((long)ppuVar7 + -0x2e8) = 0;
  *(undefined8 *)((long)ppuVar7 + -800) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x318) = (undefined1 *)((long)ppuVar7 + -800);
  *(undefined8 *)((long)ppuVar7 + -0x310) = 0x2020000000;
  *(undefined1 *)((long)ppuVar7 + -0x308) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x328) = 0;
  *(undefined **)((long)ppuVar7 + -0x710) = puVar27;
  func_0x00010c13e8e0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)ppuVar7 + -0x770) = puVar27;
  lVar16 = *(long *)((long)ppuVar7 + -0x328);
  _objc_retain(lVar16);
  *(undefined8 *)((long)ppuVar7 + -0x720) = 0;
  *(long *)((long)ppuVar7 + -0x788) = lVar16;
  if ((lVar16 == 0) && (*(long *)((long)ppuVar7 + -0x770) != 0)) {
    puVar27 = PTR_PTR_1126bcdd8;
    _objc_alloc();
    func_0x00010c0206e0();
    *(undefined **)((long)ppuVar7 + -0x720) = puVar27;
  }
  *(undefined **)((long)ppuVar7 + -0x3b0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)ppuVar7 + -0x3a8) = 0xc2000000;
  *(code **)((long)ppuVar7 + -0x3a0) = FUN_107da8f1c;
  *(undefined **)((long)ppuVar7 + -0x398) = &UNK_110a0c740;
  *(undefined1 **)((long)ppuVar7 + -0x360) = (undefined1 *)((long)ppuVar7 + -0x300);
  *(undefined1 **)((long)ppuVar7 + -0x358) = (undefined1 *)((long)ppuVar7 + -800);
  *(undefined1 **)((long)ppuVar7 + -0x368) = (undefined1 *)((long)ppuVar7 + -0x2e0);
  *(undefined8 *)((long)ppuVar7 + -0x390) = *(undefined8 *)((long)ppuVar7 + -0x728);
  uVar22 = *(undefined8 *)((long)ppuVar7 + -0x740);
  _objc_retain(uVar22);
  *(undefined8 *)((long)ppuVar7 + -0x388) = uVar22;
  _objc_retain(puVar13);
  *(undefined1 **)((long)ppuVar7 + -0x380) = puVar13;
  uVar22 = *(undefined8 *)((long)ppuVar7 + -0x720);
  _objc_retain(uVar22);
  *(undefined8 *)((long)ppuVar7 + -0x378) = uVar22;
  *(undefined1 **)((long)ppuVar7 + -0x350) = (undefined1 *)((long)ppuVar7 + -0x1f0);
  *(undefined1 **)((long)ppuVar7 + -0x348) = (undefined1 *)((long)ppuVar7 + -0x220);
  *(undefined1 **)((long)ppuVar7 + -0x340) = (undefined1 *)((long)ppuVar7 + -0x250);
  *(undefined1 **)((long)ppuVar7 + -0x338) = (undefined1 *)((long)ppuVar7 + -0x280);
  *(undefined1 **)((long)ppuVar7 + -0x330) = (undefined1 *)((long)ppuVar7 + -0x2b0);
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar7 + -0x370) = uVar10;
  func_0x00010c13ec80(*(undefined8 *)((long)ppuVar7 + -0x710));
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x710);
  func_0x00010c13ef00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar11;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)((long)ppuVar7 + -0x718) = uVar22;
  _objc_release(uVar11);
  lVar16 = *(long *)((long)ppuVar7 + -0x718);
  func_0x00010bf529e0();
  *(undefined8 *)((long)ppuVar7 + -0x7d8) = uVar8;
  *(undefined1 **)((long)ppuVar7 + -2000) = puVar13;
  if (lVar16 == 1) {
    lVar16 = *(long *)((long)ppuVar7 + -0x718);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar16 == 0) {
      *(undefined8 *)((long)ppuVar7 + -0x3c8) = 0;
      *(undefined8 *)((long)ppuVar7 + -0x3d0) = 0;
      *(undefined8 *)((long)ppuVar7 + -0x3b8) = 0;
      *(undefined8 *)((long)ppuVar7 + -0x3c0) = 0;
      *(undefined8 *)((long)ppuVar7 + -0x3d8) = 0;
      *(undefined8 *)((long)ppuVar7 + -0x3e0) = 0;
    }
    else {
      func_0x00010bdc1120((undefined1 *)((long)ppuVar7 + -0x3e0),lVar16);
    }
    uVar8 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uVar11 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uVar22 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    *(undefined8 *)((long)ppuVar7 + -0x408) = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    *(undefined8 *)((long)ppuVar7 + -0x410) = uVar8;
    *(undefined8 *)((long)ppuVar7 + -0x3f8) = uVar11;
    *(undefined8 *)((long)ppuVar7 + -0x400) = uVar22;
    uVar8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    *(undefined8 *)((long)ppuVar7 + -1000) = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28)
    ;
    *(undefined8 *)((long)ppuVar7 + -0x3f0) = uVar8;
    puVar12 = (undefined1 *)((long)ppuVar7 + -0x3e0);
    _CMTimeRangeEqual(puVar12,(undefined1 *)((long)ppuVar7 + -0x410));
    _objc_release(lVar16);
    if ((int)puVar12 != 0) {
      func_0x000107e623f0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar13 == (undefined1 *)0x0) {
        *(undefined8 *)((long)ppuVar7 + -0x408) = 0;
        *(undefined8 *)((long)ppuVar7 + -0x410) = 0;
        *(undefined8 *)((long)ppuVar7 + -0x400) = 0;
      }
      else {
        func_0x00010bdc1140((undefined1 *)((long)ppuVar7 + -0x410),puVar13);
      }
      *(undefined8 *)((long)ppuVar7 + -0x3d8) = *(undefined8 *)((long)ppuVar7 + -0x408);
      *(undefined8 *)((long)ppuVar7 + -0x3e0) = *(undefined8 *)((long)ppuVar7 + -0x410);
      *(undefined8 *)((long)ppuVar7 + -0x3d0) = *(undefined8 *)((long)ppuVar7 + -0x400);
      uVar22 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      *(undefined8 *)((long)ppuVar7 + -0x7f8) = uVar22;
      *(undefined8 *)((long)ppuVar7 + -0x800) = uVar8;
      *(undefined8 *)((long)ppuVar7 + -0x4a8) = uVar22;
      *(undefined8 *)((long)ppuVar7 + -0x4b0) = uVar8;
      uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      *(undefined8 *)((long)ppuVar7 + -0x4a0) = uVar8;
      puVar12 = (undefined1 *)((long)ppuVar7 + -0x3e0);
      _CMTimeCompare(puVar12,(undefined1 *)((long)ppuVar7 + -0x4b0));
      puVar27 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if ((int)puVar12 == 0) {
        *(undefined **)((long)ppuVar7 + -0x440) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)ppuVar7 + -0x438) = 0xc2000000;
        *(code **)((long)ppuVar7 + -0x430) = FUN_107da98ec;
        *(undefined **)((long)ppuVar7 + -0x428) = &UNK_11084aaa8;
        uVar8 = *(undefined8 *)((long)ppuVar7 + -0x730);
        _objc_retain(uVar8);
        *(undefined8 *)((long)ppuVar7 + -0x418) = uVar8;
        *(undefined8 *)((long)ppuVar7 + -0x420) = *(undefined8 *)((long)ppuVar7 + -0x728);
        func_0x00010007380c(*(undefined8 *)((long)ppuVar7 + -0x738),
                            (undefined1 *)((long)ppuVar7 + -0x440));
        _objc_release(*(undefined8 *)((long)ppuVar7 + -0x418));
        uVar8 = *(undefined8 *)((long)ppuVar7 + -0x7d8);
        lVar16 = *(long *)((long)ppuVar7 + -2000);
        _objc_release(puVar13);
        goto LAB_107da8bf0;
      }
      *(undefined8 *)((long)ppuVar7 + -0x4a8) = *(undefined8 *)((long)ppuVar7 + -0x7f8);
      *(undefined8 *)((long)ppuVar7 + -0x4b0) = *(undefined8 *)((long)ppuVar7 + -0x800);
      *(undefined8 *)((long)ppuVar7 + -0x4a0) = uVar8;
      *(undefined8 *)((long)ppuVar7 + -0x4d8) = *(undefined8 *)((long)ppuVar7 + -0x408);
      *(undefined8 *)((long)ppuVar7 + -0x4e0) = *(undefined8 *)((long)ppuVar7 + -0x410);
      *(undefined8 *)((long)ppuVar7 + -0x4d0) = *(undefined8 *)((long)ppuVar7 + -0x400);
      _CMTimeRangeMake((undefined1 *)((long)ppuVar7 + -0x3e0),(undefined1 *)((long)ppuVar7 + -0x4b0)
                       ,(undefined1 *)((long)ppuVar7 + -0x4e0));
      func_0x00010c297240();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar7 + -0x1c0) = puVar27;
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(*(undefined8 *)((long)ppuVar7 + -0x718));
      _objc_release(puVar27);
      _objc_release(puVar13);
      *(undefined **)((long)ppuVar7 + -0x718) = puVar9;
    }
  }
  _dispatch_group_enter(uVar10);
  puVar27 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)ppuVar7 + -0x3e0) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x3d8) = (undefined1 *)((long)ppuVar7 + -0x3e0);
  *(undefined8 *)((long)ppuVar7 + -0x3d0) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x3c8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x3c0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x3b8) = 0;
  *(undefined8 *)((long)ppuVar7 + -0x410) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x408) = (undefined1 *)((long)ppuVar7 + -0x410);
  *(undefined8 *)((long)ppuVar7 + -0x400) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x3f8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x3f0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -1000) = 0;
  *(undefined **)((long)ppuVar7 + -0x480) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)ppuVar7 + -0x478) = 0xc2000000;
  *(code **)((long)ppuVar7 + -0x470) = FUN_107da99e8;
  *(undefined **)((long)ppuVar7 + -0x468) = &UNK_110a0c790;
  *(undefined1 **)((long)ppuVar7 + -0x450) = (undefined1 *)((long)ppuVar7 + -0x410);
  *(undefined1 **)((long)ppuVar7 + -0x448) = (undefined1 *)((long)ppuVar7 + -0x3e0);
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x740);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x460) = uVar8;
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar7 + -0x458) = uVar10;
  func_0x00010c13e8c0(*(undefined8 *)((long)ppuVar7 + -0x710));
  _dispatch_group_enter(uVar10);
  *(undefined8 *)((long)ppuVar7 + -0x4b0) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x4a8) = (undefined1 *)((long)ppuVar7 + -0x4b0);
  *(undefined8 *)((long)ppuVar7 + -0x4a0) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x498) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x490) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x488) = 0;
  puVar12 = (undefined1 *)((long)ppuVar7 + -0x4e0);
  *(undefined8 *)((long)ppuVar7 + -0x4e0) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x4d8) = puVar12;
  *(undefined8 *)((long)ppuVar7 + -0x4d0) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x4c8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x4c0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x4b8) = 0;
  puVar13 = (undefined1 *)((long)ppuVar7 + -0x510);
  *(undefined8 *)((long)ppuVar7 + -0x510) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x508) = puVar13;
  *(undefined8 *)((long)ppuVar7 + -0x500) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x4f8) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x4f0) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x4e8) = 0;
  puVar1 = (undefined1 *)((long)ppuVar7 + -0x540);
  *(undefined8 *)((long)ppuVar7 + -0x540) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x538) = puVar1;
  *(undefined8 *)((long)ppuVar7 + -0x530) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x528) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x520) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x518) = 0;
  puVar2 = (undefined1 *)((long)ppuVar7 + -0x570);
  *(undefined8 *)((long)ppuVar7 + -0x570) = 0;
  *(undefined1 **)((long)ppuVar7 + -0x568) = puVar2;
  *(undefined8 *)((long)ppuVar7 + -0x560) = 0x3032000000;
  *(code **)((long)ppuVar7 + -0x558) = FUN_107da8f04;
  *(undefined8 *)((long)ppuVar7 + -0x550) = 0x107da8f14;
  *(undefined8 *)((long)ppuVar7 + -0x548) = 0;
  *(undefined **)((long)ppuVar7 + -0x5c0) = puVar27;
  *(undefined8 *)((long)ppuVar7 + -0x5b8) = 0xc2000000;
  *(code **)((long)ppuVar7 + -0x5b0) = FUN_107da9c1c;
  *(undefined **)((long)ppuVar7 + -0x5a8) = &UNK_110a0c7c0;
  *(undefined1 **)((long)ppuVar7 + -0x598) = (undefined1 *)((long)ppuVar7 + -0x4b0);
  *(undefined1 **)((long)ppuVar7 + -0x590) = puVar12;
  *(undefined1 **)((long)ppuVar7 + -0x588) = puVar13;
  *(undefined1 **)((long)ppuVar7 + -0x580) = puVar1;
  *(undefined1 **)((long)ppuVar7 + -0x578) = puVar2;
  _objc_retain(uVar10);
  *(undefined8 *)((long)ppuVar7 + -0x5a0) = uVar10;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x728);
  uVar22 = uVar11;
  func_0x00010be63f00(uVar11);
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)ppuVar7 + -0x708) = puVar27;
  *(undefined8 *)((long)ppuVar7 + -0x700) = 0xc2000000;
  *(code **)((long)ppuVar7 + -0x6f8) = FUN_107da9d58;
  *(undefined **)((long)ppuVar7 + -0x6f0) = &UNK_110a0c850;
  *(undefined1 **)((long)ppuVar7 + -0x640) = (undefined1 *)((long)ppuVar7 + -0x2e0);
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x788);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x6e8) = uVar8;
  *(undefined1 **)((long)ppuVar7 + -0x638) = (undefined1 *)((long)ppuVar7 + -0x410);
  *(undefined1 **)((long)ppuVar7 + -0x630) = puVar13;
  *(undefined1 **)((long)ppuVar7 + -0x628) = puVar1;
  *(undefined1 **)((long)ppuVar7 + -0x620) = puVar2;
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x738);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x6e0) = uVar8;
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x730);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x648) = uVar8;
  *(undefined8 *)((long)ppuVar7 + -0x6d8) = uVar11;
  *(undefined1 **)((long)ppuVar7 + -0x618) = (undefined1 *)((long)ppuVar7 + -0x220);
  *(undefined1 **)((long)ppuVar7 + -0x610) = (undefined1 *)((long)ppuVar7 + -0x250);
  *(undefined1 **)((long)ppuVar7 + -0x608) = (undefined1 *)((long)ppuVar7 + -0x280);
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x720);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x6d0) = uVar8;
  *(undefined1 **)((long)ppuVar7 + -0x600) = (undefined1 *)((long)ppuVar7 + -0x3e0);
  *(undefined1 **)((long)ppuVar7 + -0x5f8) = (undefined1 *)((long)ppuVar7 + -0x4b0);
  *(undefined1 **)((long)ppuVar7 + -0x5f0) = puVar12;
  *(undefined1 **)((long)ppuVar7 + -0x5e8) = (undefined1 *)((long)ppuVar7 + -0x2b0);
  *(char *)((long)ppuVar7 + -0x5c8) = (char)*(undefined4 *)((long)ppuVar7 + -0x7e8);
  *(char *)((long)ppuVar7 + -0x5c7) = (char)*(undefined4 *)((long)ppuVar7 + -0x7e4);
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x7c0);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x6c8) = uVar8;
  uVar26 = *(undefined8 *)((long)ppuVar7 + -0x778);
  _objc_retain(uVar26);
  *(undefined8 *)((long)ppuVar7 + -0x6c0) = uVar26;
  uVar21 = *(undefined8 *)((long)ppuVar7 + -0x780);
  _objc_retain(uVar21);
  *(undefined8 *)((long)ppuVar7 + -0x6b8) = uVar21;
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x760);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x6b0) = uVar8;
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x7c8);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x6a8) = uVar8;
  uVar8 = *(undefined8 *)((long)ppuVar7 + -0x7d8);
  _objc_retain(uVar8);
  *(undefined8 *)((long)ppuVar7 + -0x6a0) = uVar8;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x7b0);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x698) = uVar11;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x7a0);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x690) = uVar11;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x790);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x688) = uVar11;
  *(undefined1 **)((long)ppuVar7 + -0x5e0) = (undefined1 *)((long)ppuVar7 + -0x300);
  *(undefined1 **)((long)ppuVar7 + -0x5d8) = (undefined1 *)((long)ppuVar7 + -800);
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x758);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x680) = uVar11;
  *(undefined1 **)((long)ppuVar7 + -0x5d0) = (undefined1 *)((long)ppuVar7 + -0x1f0);
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x718);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x678) = uVar11;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x768);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x670) = uVar11;
  lVar16 = *(long *)((long)ppuVar7 + -2000);
  _objc_retain(lVar16);
  *(long *)((long)ppuVar7 + -0x668) = lVar16;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x748);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x660) = uVar11;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x7b8);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x658) = uVar11;
  uVar11 = *(undefined8 *)((long)ppuVar7 + -0x750);
  _objc_retain(uVar11);
  *(undefined8 *)((long)ppuVar7 + -0x650) = uVar11;
  func_0x000100bc0718(uVar10,uVar22,(undefined1 *)((long)ppuVar7 + -0x708));
  _objc_release(uVar22);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x650));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x658));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x660));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x668));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x670));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x678));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x680));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x688));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x690));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x698));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6a0));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6a8));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6b0));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6b8));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6c0));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6c8));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6d0));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x648));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6e0));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x6e8));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x5a0));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x570),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x548));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x540),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x518));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x510),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x4e8));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x4e0),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x4b8));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x4b0),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x488));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x458));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x460));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x410),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -1000));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x3e0),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x3b8));
LAB_107da8bf0:
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x718));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x370));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x378));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x380));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x388));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x770));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x788));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x720));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -800),8);
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x300),8);
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x2e0),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x2b8));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x2b0),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x288));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x280),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -600));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x250),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x228));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x220),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x1f8));
  __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x1f0),8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x1c8));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x710));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x740));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x7e0));
  _objc_release(uVar10);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x730));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x748));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x750));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x738));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x758));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x760));
  _objc_release(uVar21);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x768));
  _objc_release(uVar26);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x790));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x7a0));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x798));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x7a8));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x7b0));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x7b8));
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x7c0));
  _objc_release(uVar8);
  _objc_release(*(undefined8 *)((long)ppuVar7 + -0x7c8));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)ppuVar7 + -0x1b8)) {
    ___stack_chk_fail();
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -800),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x300),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x2e0),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x2b0),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x280),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x250),8);
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x220),8);
    lVar17 = 8;
    __Block_object_dispose((undefined1 *)((long)ppuVar7 + -0x1f0));
    __Unwind_Resume();
    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(lVar17 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 107da7fa8; end: 107da817b;  */

void FUN_107da7fa8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined1 uVar22;
  undefined8 in_x5;
  undefined1 uVar23;
  undefined4 in_w6;
  undefined8 in_x7;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined *puStack_720;
  undefined *puStack_718;
  undefined *puStack_708;
  undefined8 uStack_700;
  code *pcStack_6f8;
  undefined *puStack_6f0;
  long lStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined *puStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined1 uStack_5c8;
  undefined1 uStack_5c7;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  code *pcStack_5b0;
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  code *pcStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  code *pcStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined1 uStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
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
  long lStack_68;
  
  puVar18 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar8;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar7);
  _objc_release(uVar21);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar24 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar24);
  puVar20 = &uStack_e8;
  uVar21 = 0x10;
  lVar19 = lVar24;
  func_0x00010bf52a60();
  uVar23 = (undefined1)in_w6;
  uVar22 = (undefined1)in_x5;
  if (lVar19 != 0) {
    lVar26 = *plStack_120;
    do {
      lVar27 = 0;
      do {
        if (*plStack_120 != lVar26) {
          _objc_enumerationMutation(lVar24);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar27 * 8);
        uVar21 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12f0c0(uVar21);
        _objc_release(uVar7);
        _objc_release(uVar21);
        puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60();
        _objc_release(puVar9);
        lVar27 = lVar27 + 1;
      } while (lVar19 != lVar27);
      puVar20 = &uStack_e8;
      uVar21 = 0x10;
      lVar19 = lVar24;
      puVar18 = &uStack_130;
      func_0x00010bf52a60();
      uVar23 = (undefined1)in_w6;
      uVar22 = (undefined1)in_x5;
    } while (lVar19 != 0);
  }
  _objc_release(lVar24);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _dispatch_semaphore_signal();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = uStack_f8;
  uVar5 = uStack_100;
  uVar4 = uStack_108;
  uVar3 = uStack_110;
  uVar2 = uStack_118;
  plVar1 = plStack_120;
  lVar24 = lStack_128;
  uVar8 = uStack_130;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar18);
  _objc_retain(puVar20);
  _objc_retain(uVar21);
  _objc_retain(in_x7);
  _objc_retain(uVar8);
  _objc_retain(lVar24);
  _objc_retain(plVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(uStack_f0);
  _objc_retain(uStack_e8);
  _objc_retain(uStack_e0);
  _objc_retain(uStack_d8);
  _objc_retain(uStack_d0);
  _objc_retain(uStack_c8);
  _objc_retain(uStack_c0);
  uVar10 = uVar7;
  func_0x00010c2056c0();
  _dispatch_group_create();
  uVar25 = uVar7;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar25);
  uVar25 = uVar7;
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar25);
  puVar9 = PTR_PTR_1126b0018;
  _objc_alloc();
  func_0x00010c047840();
  _dispatch_group_enter(uVar10);
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_107da8f04;
  uStack_1d0 = 0x107da8f14;
  uStack_1c8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_107da8f04;
  uStack_200 = 0x107da8f14;
  uStack_1f8 = 0;
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x3032000000;
  pcStack_238 = FUN_107da8f04;
  uStack_230 = 0x107da8f14;
  uStack_228 = 0;
  puStack_278 = &uStack_280;
  uStack_280 = 0;
  uStack_270 = 0x3032000000;
  pcStack_268 = FUN_107da8f04;
  uStack_260 = 0x107da8f14;
  uStack_258 = 0;
  puStack_2a8 = &uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a0 = 0x3032000000;
  pcStack_298 = FUN_107da8f04;
  uStack_290 = 0x107da8f14;
  uStack_288 = 0;
  puStack_2d8 = &uStack_2e0;
  uStack_2e0 = 0;
  uStack_2d0 = 0x3032000000;
  pcStack_2c8 = FUN_107da8f04;
  uStack_2c0 = 0x107da8f14;
  uStack_2b8 = 0;
  puStack_2f8 = &uStack_300;
  uStack_300 = 0;
  uStack_2f0 = 0x2020000000;
  uStack_2e8 = 0;
  puStack_318 = &uStack_320;
  uStack_320 = 0;
  uStack_310 = 0x2020000000;
  uStack_308 = 0;
  lStack_328 = 0;
  puVar13 = puVar9;
  func_0x00010c13e8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lStack_328;
  _objc_retain(lStack_328);
  puStack_720 = (undefined *)0x0;
  if ((lVar19 == 0) && (puVar13 != (undefined *)0x0)) {
    puStack_720 = PTR_PTR_1126bcdd8;
    _objc_alloc();
    func_0x00010c0206e0();
  }
  puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3a8 = 0xc2000000;
  pcStack_3a0 = FUN_107da8f1c;
  puStack_398 = &UNK_110a0c740;
  puStack_360 = &uStack_300;
  puStack_358 = &uStack_320;
  puStack_368 = &uStack_2e0;
  uStack_390 = uVar7;
  _objc_retain(uVar12);
  uStack_388 = uVar12;
  _objc_retain(puVar18);
  puStack_380 = (undefined1 *)puVar18;
  _objc_retain(puStack_720);
  puStack_350 = &uStack_1f0;
  puStack_378 = puStack_720;
  puStack_348 = &uStack_220;
  puStack_340 = &uStack_250;
  puStack_338 = &uStack_280;
  puStack_330 = &uStack_2b0;
  _objc_retain(uVar10);
  uStack_370 = uVar10;
  func_0x00010c13ec80(puVar9);
  puVar14 = puVar9;
  func_0x00010c13ef00();
  _objc_retainAutoreleasedReturnValue();
  puStack_718 = puVar14;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = puStack_718;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x1) {
    puVar14 = puStack_718;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) {
      pcStack_3c8 = (code *)0x0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      puStack_3d8 = (undefined8 *)0x0;
      uStack_3e0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_3e0,puVar14);
    }
    puStack_408 = *(undefined8 **)(PTR__kCMTimeRangeZero_110348668 + 8);
    uStack_410 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    pcStack_3f8 = *(code **)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uStack_400 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_3e8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    uStack_3f0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    puVar15 = &uStack_3e0;
    _CMTimeRangeEqual(puVar15,&uStack_410);
    _objc_release(puVar14);
    if ((int)puVar15 != 0) {
      puVar16 = (undefined1 *)puVar18;
      func_0x000107e623f0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar16 == (undefined1 *)0x0) {
        puStack_408 = (undefined8 *)0x0;
        uStack_410 = 0;
        uStack_400 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_410,puVar16);
      }
      puStack_3d8 = puStack_408;
      uStack_3e0 = uStack_410;
      uStack_3d0 = uStack_400;
      puVar29 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
      uVar28 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar25 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar15 = &uStack_3e0;
      uStack_4b0 = uVar28;
      puStack_4a8 = puVar29;
      uStack_4a0 = uVar25;
      _CMTimeCompare(puVar15,&uStack_4b0);
      puVar14 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if ((int)puVar15 == 0) {
        puStack_440 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_438 = 0xc2000000;
        pcStack_430 = FUN_107da98ec;
        puStack_428 = &UNK_11084aaa8;
        _objc_retain(uStack_c0);
        uStack_418 = uStack_c0;
        uStack_420 = uVar7;
        func_0x00010007380c(uStack_d8,&puStack_440);
        _objc_release(uStack_418);
        _objc_release(puVar16);
        goto LAB_107da8bf0;
      }
      puStack_4d8 = puStack_408;
      uStack_4e0 = uStack_410;
      uStack_4d0 = uStack_400;
      uStack_4b0 = uVar28;
      puStack_4a8 = puVar29;
      uStack_4a0 = uVar25;
      _CMTimeRangeMake(&uStack_3e0,&uStack_4b0,&uStack_4e0);
      func_0x00010c297240();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1c0 = puVar14;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_718);
      _objc_release(puVar14);
      _objc_release(puVar16);
      puStack_718 = puVar17;
    }
  }
  _dispatch_group_enter(uVar10);
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_448 = &uStack_3e0;
  uStack_3e0 = 0;
  uStack_3d0 = 0x3032000000;
  pcStack_3c8 = FUN_107da8f04;
  uStack_3c0 = 0x107da8f14;
  uStack_3b8 = 0;
  puStack_450 = &uStack_410;
  uStack_410 = 0;
  uStack_400 = 0x3032000000;
  pcStack_3f8 = FUN_107da8f04;
  uStack_3f0 = 0x107da8f14;
  uStack_3e8 = 0;
  puStack_480 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_478 = 0xc2000000;
  pcStack_470 = FUN_107da99e8;
  puStack_468 = &UNK_110a0c790;
  puStack_408 = puStack_450;
  puStack_3d8 = puStack_448;
  _objc_retain(uVar12);
  uStack_460 = uVar12;
  _objc_retain(uVar10);
  uStack_458 = uVar10;
  func_0x00010c13e8c0(puVar9);
  _dispatch_group_enter(uVar10);
  puStack_598 = &uStack_4b0;
  uStack_4b0 = 0;
  uStack_4a0 = 0x3032000000;
  pcStack_498 = FUN_107da8f04;
  uStack_490 = 0x107da8f14;
  uStack_488 = 0;
  uStack_4e0 = 0;
  uStack_4d0 = 0x3032000000;
  pcStack_4c8 = FUN_107da8f04;
  uStack_4c0 = 0x107da8f14;
  uStack_4b8 = 0;
  uStack_510 = 0;
  uStack_500 = 0x3032000000;
  pcStack_4f8 = FUN_107da8f04;
  uStack_4f0 = 0x107da8f14;
  uStack_4e8 = 0;
  uStack_540 = 0;
  uStack_530 = 0x3032000000;
  pcStack_528 = FUN_107da8f04;
  uStack_520 = 0x107da8f14;
  uStack_518 = 0;
  uStack_570 = 0;
  uStack_560 = 0x3032000000;
  pcStack_558 = FUN_107da8f04;
  uStack_550 = 0x107da8f14;
  uStack_548 = 0;
  puStack_5c0 = puVar14;
  uStack_5b8 = 0xc2000000;
  pcStack_5b0 = FUN_107da9c1c;
  puStack_5a8 = &UNK_110a0c7c0;
  puStack_590 = &uStack_4e0;
  puStack_588 = &uStack_510;
  puStack_580 = &uStack_540;
  puStack_578 = &uStack_570;
  puStack_568 = &uStack_570;
  puStack_538 = &uStack_540;
  puStack_508 = &uStack_510;
  puStack_4d8 = &uStack_4e0;
  puStack_4a8 = puStack_598;
  _objc_retain(uVar10);
  uVar25 = uVar7;
  uStack_5a0 = uVar10;
  func_0x00010be63f00(uVar7);
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puStack_708 = puVar14;
  uStack_700 = 0xc2000000;
  pcStack_6f8 = FUN_107da9d58;
  puStack_6f0 = &UNK_110a0c850;
  puStack_640 = &uStack_2e0;
  _objc_retain(lVar19);
  puStack_638 = &uStack_410;
  lStack_6e8 = lVar19;
  puStack_630 = &uStack_510;
  puStack_628 = &uStack_540;
  puStack_620 = &uStack_570;
  _objc_retain(uStack_d8);
  uStack_6e0 = uStack_d8;
  _objc_retain(uStack_c0);
  uStack_648 = uStack_c0;
  puStack_618 = &uStack_220;
  puStack_610 = &uStack_250;
  puStack_608 = &uStack_280;
  uStack_6d8 = uVar7;
  _objc_retain(puStack_720);
  puStack_600 = &uStack_3e0;
  puStack_6d0 = puStack_720;
  puStack_5f8 = &uStack_4b0;
  puStack_5e8 = &uStack_2b0;
  puStack_5f0 = &uStack_4e0;
  uStack_5c8 = uVar22;
  uStack_5c7 = uVar23;
  _objc_retain(in_x7);
  uStack_6c8 = in_x7;
  _objc_retain(uVar5);
  uStack_6c0 = uVar5;
  _objc_retain(uStack_f0);
  uStack_6b8 = uStack_f0;
  _objc_retain(uStack_e8);
  uStack_6b0 = uStack_e8;
  _objc_retain(puVar20);
  puStack_6a8 = puVar20;
  _objc_retain(uVar21);
  uStack_6a0 = uVar21;
  _objc_retain(lVar24);
  lStack_698 = lVar24;
  _objc_retain(uVar3);
  uStack_690 = uVar3;
  _objc_retain(uVar4);
  puStack_5e0 = &uStack_300;
  uStack_688 = uVar4;
  puStack_5d8 = &uStack_320;
  _objc_retain(uStack_e0);
  puStack_5d0 = &uStack_1f0;
  uStack_680 = uStack_e0;
  _objc_retain(puStack_718);
  puStack_678 = puStack_718;
  _objc_retain(uVar6);
  uStack_670 = uVar6;
  _objc_retain(puVar18);
  puStack_668 = (undefined1 *)puVar18;
  _objc_retain(uStack_c8);
  uStack_660 = uStack_c8;
  _objc_retain(uVar8);
  uStack_658 = uVar8;
  _objc_retain(uStack_d0);
  uStack_650 = uStack_d0;
  func_0x000100bc0718(uVar10,uVar25,&puStack_708);
  _objc_release(uVar25);
  _objc_release(uStack_650);
  _objc_release(uStack_658);
  _objc_release(uStack_660);
  _objc_release(puStack_668);
  _objc_release(uStack_670);
  _objc_release(puStack_678);
  _objc_release(uStack_680);
  _objc_release(uStack_688);
  _objc_release(uStack_690);
  _objc_release(lStack_698);
  _objc_release(uStack_6a0);
  _objc_release(puStack_6a8);
  _objc_release(uStack_6b0);
  _objc_release(uStack_6b8);
  _objc_release(uStack_6c0);
  _objc_release(uStack_6c8);
  _objc_release(puStack_6d0);
  _objc_release(uStack_648);
  _objc_release(uStack_6e0);
  _objc_release(lStack_6e8);
  _objc_release(uStack_5a0);
  __Block_object_dispose(&uStack_570,8);
  _objc_release(uStack_548);
  __Block_object_dispose(&uStack_540,8);
  _objc_release(uStack_518);
  __Block_object_dispose(&uStack_510,8);
  _objc_release(uStack_4e8);
  __Block_object_dispose(&uStack_4e0,8);
  _objc_release(uStack_4b8);
  __Block_object_dispose(&uStack_4b0,8);
  _objc_release(uStack_488);
  _objc_release(uStack_458);
  _objc_release(uStack_460);
  __Block_object_dispose(&uStack_410,8);
  _objc_release(uStack_3e8);
  __Block_object_dispose(&uStack_3e0,8);
  _objc_release(uStack_3b8);
LAB_107da8bf0:
  _objc_release(puStack_718);
  _objc_release(uStack_370);
  _objc_release(puStack_378);
  _objc_release(puStack_380);
  _objc_release(uStack_388);
  _objc_release(puVar13);
  _objc_release(lVar19);
  _objc_release(puStack_720);
  __Block_object_dispose(&uStack_320,8);
  __Block_object_dispose(&uStack_300,8);
  __Block_object_dispose(&uStack_2e0,8);
  _objc_release(uStack_2b8);
  __Block_object_dispose(&uStack_2b0,8);
  _objc_release(uStack_288);
  __Block_object_dispose(&uStack_280,8);
  _objc_release(uStack_258);
  __Block_object_dispose(&uStack_250,8);
  _objc_release(uStack_228);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uStack_1f8);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(uStack_1c8);
  _objc_release(puVar9);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(plVar1);
  _objc_release(lVar24);
  _objc_release(uVar8);
  _objc_release(in_x7);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_320,8);
  __Block_object_dispose(&uStack_300,8);
  __Block_object_dispose(&uStack_2e0,8);
  __Block_object_dispose(&uStack_2b0,8);
  __Block_object_dispose(&uStack_280,8);
  __Block_object_dispose(&uStack_250,8);
  __Block_object_dispose(&uStack_220,8);
  lVar19 = 8;
  __Block_object_dispose(&uStack_1f0);
  __Unwind_Resume();
  *(undefined8 *)((long)puVar18 + 0x28) = *(undefined8 *)(lVar19 + 0x28);
  *(undefined8 *)(lVar19 + 0x28) = 0;
  return;
}



/* Entry: 107da817c; end: 107da8f03; -[SnapVideoFilter filterVideoSnapWithSnapDoc:transcodeSnapInfo:reverseAudioCache:respectSnapOrientation:isExporting:userSession:previewAssetVideoProviderFactory:audioProcessingSessionFactory:musicMediaLoader:voiceoverMediaLoader:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:captionDataProvider:creativeToolsMemoriesResources:directorModeVideoOptimizationConfig:completionQueue:watermarkServices:watermarkProfile:completion:] */

void FUN_107da817c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5d8;
  undefined8 uStack_5d0;
  code *pcStack_5c8;
  undefined *puStack_5c0;
  long lStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  long lStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined1 uStack_498;
  undefined1 uStack_497;
  undefined *puStack_490;
  undefined8 uStack_488;
  code *pcStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  uVar1 = param_1;
  func_0x00010c2056c0();
  _dispatch_group_create();
  uVar11 = param_1;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar11 = param_1;
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar4 = PTR_PTR_1126b0018;
  _objc_alloc();
  func_0x00010c047840();
  _dispatch_group_enter(uVar1);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_107da8f04;
  uStack_a0 = 0x107da8f14;
  uStack_98 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_107da8f04;
  uStack_d0 = 0x107da8f14;
  uStack_c8 = 0;
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_107da8f04;
  uStack_100 = 0x107da8f14;
  uStack_f8 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x3032000000;
  pcStack_138 = FUN_107da8f04;
  uStack_130 = 0x107da8f14;
  uStack_128 = 0;
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x3032000000;
  pcStack_168 = FUN_107da8f04;
  uStack_160 = 0x107da8f14;
  uStack_158 = 0;
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_107da8f04;
  uStack_190 = 0x107da8f14;
  uStack_188 = 0;
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x2020000000;
  uStack_1b8 = 0;
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x2020000000;
  uStack_1d8 = 0;
  lStack_1f8 = 0;
  puVar5 = puVar4;
  func_0x00010c13e8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lStack_1f8;
  _objc_retain(lStack_1f8);
  puStack_5f0 = (undefined *)0x0;
  if ((lVar10 == 0) && (puVar5 != (undefined *)0x0)) {
    puStack_5f0 = PTR_PTR_1126bcdd8;
    _objc_alloc();
    func_0x00010c0206e0();
  }
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_107da8f1c;
  puStack_268 = &UNK_110a0c740;
  puStack_230 = &uStack_1d0;
  puStack_228 = &uStack_1f0;
  puStack_238 = &uStack_1b0;
  uStack_260 = param_1;
  _objc_retain(uVar3);
  uStack_258 = uVar3;
  _objc_retain(param_3);
  lStack_250 = param_3;
  _objc_retain(puStack_5f0);
  puStack_220 = &uStack_c0;
  puStack_248 = puStack_5f0;
  puStack_218 = &uStack_f0;
  puStack_210 = &uStack_120;
  puStack_208 = &uStack_150;
  puStack_200 = &uStack_180;
  _objc_retain(uVar1);
  uStack_240 = uVar1;
  func_0x00010c13ec80(puVar4);
  puVar6 = puVar4;
  func_0x00010c13ef00();
  _objc_retainAutoreleasedReturnValue();
  puStack_5e8 = puVar6;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puStack_5e8;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x1) {
    puVar6 = puStack_5e8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      pcStack_298 = (code *)0x0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      puStack_2a8 = (undefined8 *)0x0;
      uStack_2b0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_2b0,puVar6);
    }
    puStack_2d8 = *(undefined8 **)(PTR__kCMTimeRangeZero_110348668 + 8);
    uStack_2e0 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    pcStack_2c8 = *(code **)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uStack_2d0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_2b8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    uStack_2c0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    puVar7 = &uStack_2b0;
    _CMTimeRangeEqual(puVar7,&uStack_2e0);
    _objc_release(puVar6);
    if ((int)puVar7 != 0) {
      lVar8 = param_3;
      func_0x000107e623f0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        puStack_2d8 = (undefined8 *)0x0;
        uStack_2e0 = 0;
        uStack_2d0 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_2e0,lVar8);
      }
      puStack_2a8 = puStack_2d8;
      uStack_2b0 = uStack_2e0;
      uStack_2a0 = uStack_2d0;
      puVar13 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
      uVar12 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar7 = &uStack_2b0;
      uStack_380 = uVar12;
      puStack_378 = puVar13;
      uStack_370 = uVar11;
      _CMTimeCompare(puVar7,&uStack_380);
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if ((int)puVar7 == 0) {
        puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_308 = 0xc2000000;
        pcStack_300 = FUN_107da98ec;
        puStack_2f8 = &UNK_11084aaa8;
        _objc_retain(param_23);
        uStack_2e8 = param_23;
        uStack_2f0 = param_1;
        func_0x00010007380c(param_20,&puStack_310);
        _objc_release(uStack_2e8);
        _objc_release(lVar8);
        goto LAB_107da8bf0;
      }
      puStack_3a8 = puStack_2d8;
      uStack_3b0 = uStack_2e0;
      uStack_3a0 = uStack_2d0;
      uStack_380 = uVar12;
      puStack_378 = puVar13;
      uStack_370 = uVar11;
      _CMTimeRangeMake(&uStack_2b0,&uStack_380,&uStack_3b0);
      func_0x00010c297240();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_5e8);
      _objc_release(puVar6);
      _objc_release(lVar8);
      puStack_5e8 = puVar9;
    }
  }
  _dispatch_group_enter(uVar1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_318 = &uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a0 = 0x3032000000;
  pcStack_298 = FUN_107da8f04;
  uStack_290 = 0x107da8f14;
  uStack_288 = 0;
  puStack_320 = &uStack_2e0;
  uStack_2e0 = 0;
  uStack_2d0 = 0x3032000000;
  pcStack_2c8 = FUN_107da8f04;
  uStack_2c0 = 0x107da8f14;
  uStack_2b8 = 0;
  puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_348 = 0xc2000000;
  pcStack_340 = FUN_107da99e8;
  puStack_338 = &UNK_110a0c790;
  puStack_2d8 = puStack_320;
  puStack_2a8 = puStack_318;
  _objc_retain(uVar3);
  uStack_330 = uVar3;
  _objc_retain(uVar1);
  uStack_328 = uVar1;
  func_0x00010c13e8c0(puVar4);
  _dispatch_group_enter(uVar1);
  puStack_468 = &uStack_380;
  uStack_380 = 0;
  uStack_370 = 0x3032000000;
  pcStack_368 = FUN_107da8f04;
  uStack_360 = 0x107da8f14;
  uStack_358 = 0;
  uStack_3b0 = 0;
  uStack_3a0 = 0x3032000000;
  pcStack_398 = FUN_107da8f04;
  uStack_390 = 0x107da8f14;
  uStack_388 = 0;
  uStack_3e0 = 0;
  uStack_3d0 = 0x3032000000;
  pcStack_3c8 = FUN_107da8f04;
  uStack_3c0 = 0x107da8f14;
  uStack_3b8 = 0;
  uStack_410 = 0;
  uStack_400 = 0x3032000000;
  pcStack_3f8 = FUN_107da8f04;
  uStack_3f0 = 0x107da8f14;
  uStack_3e8 = 0;
  uStack_440 = 0;
  uStack_430 = 0x3032000000;
  pcStack_428 = FUN_107da8f04;
  uStack_420 = 0x107da8f14;
  uStack_418 = 0;
  puStack_490 = puVar6;
  uStack_488 = 0xc2000000;
  pcStack_480 = FUN_107da9c1c;
  puStack_478 = &UNK_110a0c7c0;
  puStack_460 = &uStack_3b0;
  puStack_458 = &uStack_3e0;
  puStack_450 = &uStack_410;
  puStack_448 = &uStack_440;
  puStack_438 = &uStack_440;
  puStack_408 = &uStack_410;
  puStack_3d8 = &uStack_3e0;
  puStack_3a8 = &uStack_3b0;
  puStack_378 = puStack_468;
  _objc_retain(uVar1);
  uVar11 = param_1;
  uStack_470 = uVar1;
  func_0x00010be63f00(param_1);
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puStack_5d8 = puVar6;
  uStack_5d0 = 0xc2000000;
  pcStack_5c8 = FUN_107da9d58;
  puStack_5c0 = &UNK_110a0c850;
  puStack_510 = &uStack_1b0;
  _objc_retain(lVar10);
  puStack_508 = &uStack_2e0;
  lStack_5b8 = lVar10;
  puStack_500 = &uStack_3e0;
  puStack_4f8 = &uStack_410;
  puStack_4f0 = &uStack_440;
  _objc_retain(param_20);
  uStack_5b0 = param_20;
  _objc_retain(param_23);
  uStack_518 = param_23;
  puStack_4e8 = &uStack_f0;
  puStack_4e0 = &uStack_120;
  puStack_4d8 = &uStack_150;
  uStack_5a8 = param_1;
  _objc_retain(puStack_5f0);
  puStack_4d0 = &uStack_2b0;
  puStack_5a0 = puStack_5f0;
  puStack_4c8 = &uStack_380;
  puStack_4b8 = &uStack_180;
  puStack_4c0 = &uStack_3b0;
  uStack_498 = param_6;
  uStack_497 = param_7;
  _objc_retain(param_8);
  uStack_598 = param_8;
  _objc_retain(param_15);
  uStack_590 = param_15;
  _objc_retain(param_17);
  uStack_588 = param_17;
  _objc_retain(param_18);
  uStack_580 = param_18;
  _objc_retain(param_4);
  uStack_578 = param_4;
  _objc_retain(param_5);
  uStack_570 = param_5;
  _objc_retain(param_10);
  uStack_568 = param_10;
  _objc_retain(param_13);
  uStack_560 = param_13;
  _objc_retain(param_14);
  puStack_4b0 = &uStack_1d0;
  uStack_558 = param_14;
  puStack_4a8 = &uStack_1f0;
  _objc_retain(param_19);
  puStack_4a0 = &uStack_c0;
  uStack_550 = param_19;
  _objc_retain(puStack_5e8);
  puStack_548 = puStack_5e8;
  _objc_retain(param_16);
  uStack_540 = param_16;
  _objc_retain(param_3);
  lStack_538 = param_3;
  _objc_retain(param_22);
  uStack_530 = param_22;
  _objc_retain(param_9);
  uStack_528 = param_9;
  _objc_retain(param_21);
  uStack_520 = param_21;
  func_0x000100bc0718(uVar1,uVar11,&puStack_5d8);
  _objc_release(uVar11);
  _objc_release(uStack_520);
  _objc_release(uStack_528);
  _objc_release(uStack_530);
  _objc_release(lStack_538);
  _objc_release(uStack_540);
  _objc_release(puStack_548);
  _objc_release(uStack_550);
  _objc_release(uStack_558);
  _objc_release(uStack_560);
  _objc_release(uStack_568);
  _objc_release(uStack_570);
  _objc_release(uStack_578);
  _objc_release(uStack_580);
  _objc_release(uStack_588);
  _objc_release(uStack_590);
  _objc_release(uStack_598);
  _objc_release(puStack_5a0);
  _objc_release(uStack_518);
  _objc_release(uStack_5b0);
  _objc_release(lStack_5b8);
  _objc_release(uStack_470);
  __Block_object_dispose(&uStack_440,8);
  _objc_release(uStack_418);
  __Block_object_dispose(&uStack_410,8);
  _objc_release(uStack_3e8);
  __Block_object_dispose(&uStack_3e0,8);
  _objc_release(uStack_3b8);
  __Block_object_dispose(&uStack_3b0,8);
  _objc_release(uStack_388);
  __Block_object_dispose(&uStack_380,8);
  _objc_release(uStack_358);
  _objc_release(uStack_328);
  _objc_release(uStack_330);
  __Block_object_dispose(&uStack_2e0,8);
  _objc_release(uStack_2b8);
  __Block_object_dispose(&uStack_2b0,8);
  _objc_release(uStack_288);
LAB_107da8bf0:
  _objc_release(puStack_5e8);
  _objc_release(uStack_240);
  _objc_release(puStack_248);
  _objc_release(lStack_250);
  _objc_release(uStack_258);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(puStack_5f0);
  __Block_object_dispose(&uStack_1f0,8);
  __Block_object_dispose(&uStack_1d0,8);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(uStack_158);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(uStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1f0,8);
  __Block_object_dispose(&uStack_1d0,8);
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_180,8);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_120,8);
  __Block_object_dispose(&uStack_f0,8);
  lVar10 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
  return;
}



/* Entry: 107da8f04; end: 107da8f1b;  */

void FUN_107da8f04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107da8f1c; end: 107da965b;  */

void FUN_107da8f1c(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_2;
    func_0x00010bf529e0();
    if (uVar19 != 0) {
      uVar19 = 0;
      puVar13 = (undefined *)0x0;
      do {
        uVar7 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0c6c20();
        if ((int)uVar8 == 2) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 1;
          puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
          uVar8 = uVar7;
          func_0x00010c0c3fe0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14d040(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          puVar10 = PTR_PTR_1126bf698;
          func_0x00010bfe94a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
        }
        else {
          puVar9 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
          _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
          uVar8 = uVar7;
          func_0x00010c0c3fe0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0082a0(puVar9);
          _objc_release(uVar8);
          puVar10 = PTR_PTR_1126bf698;
          func_0x00010bf0b9a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) & 1) == 0) {
            iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
            func_0x00010be41040();
            if (iVar1 != 0) {
              *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = 1;
            }
          }
        }
        _objc_release(puVar9);
        puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (puVar10 == (undefined *)0x0) {
          uVar18 = *(undefined8 *)(param_1 + 0x20);
          _objc_opt_class(uVar18);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = *(long *)(*(long *)(param_1 + 0x48) + 8);
          uVar14 = *(undefined8 *)(lVar17 + 0x28);
          *(undefined **)(lVar17 + 0x28) = puVar13;
LAB_107da94b0:
          _objc_release(uVar14);
          _objc_release(puVar9);
          _objc_release(uVar18);
          _objc_release(uVar7);
          break;
        }
        func_0x00010befa120(puVar2);
        uVar8 = uVar7;
        func_0x00010c2464e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        puVar13 = (undefined *)0x0;
        if (uVar8 != 0) {
          uVar8 = uVar7;
          func_0x00010c2464e0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = 0;
          _objc_retain(0);
          _objc_release(uVar8);
          puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (puVar9 == (undefined *)0x0) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            _objc_opt_class(uVar14);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = *(long *)(*(long *)(param_1 + 0x48) + 8);
            uVar16 = *(undefined8 *)(lVar17 + 0x28);
            *(undefined **)(lVar17 + 0x28) = puVar13;
            _objc_release(uVar16);
            _objc_release(puVar9);
            puVar9 = (undefined *)0x0;
            goto LAB_107da94b0;
          }
          puVar13 = PTR_PTR_1126bcdd8;
          _objc_alloc();
          func_0x00010c0206e0();
          if (puVar13 != (undefined *)0x0) {
            puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(puVar11);
          }
          _objc_release(puVar9);
        }
        uVar12 = uVar7;
        func_0x00010c0ef960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar12 != 0) {
          lVar20 = *(long *)(param_1 + 0x28);
          uVar12 = uVar7;
          func_0x00010c0ef960(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ef880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          lVar17 = lVar20;
          func_0x00010c1511c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar17 != 0) {
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar9);
          }
          _objc_release(lVar17);
          _objc_release(lVar20);
        }
        uVar18 = *(undefined8 *)(param_1 + 0x20);
        uVar12 = *(ulong *)(param_1 + 0x38);
        puVar9 = puVar13;
        FUN_107ff7f70(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2416e0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        func_0x00010befa120(puVar5);
        _objc_release(uVar18);
        _objc_release(puVar13);
        uVar8 = uVar7;
        func_0x00010bf16120(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa140(puVar6);
        _objc_release(uVar8);
        _objc_release(uVar7);
        uVar19 = uVar19 + 1;
        uVar7 = param_2;
        func_0x00010bf529e0();
        puVar13 = puVar10;
      } while (uVar19 < uVar7);
      _objc_release(puVar10);
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) == 0) {
      lVar17 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      _objc_retain(puVar2);
      uVar18 = *(undefined8 *)(lVar17 + 0x28);
      *(undefined **)(lVar17 + 0x28) = puVar2;
      _objc_release(uVar18);
      lVar17 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      _objc_retain(puVar3);
      uVar18 = *(undefined8 *)(lVar17 + 0x28);
      *(undefined **)(lVar17 + 0x28) = puVar3;
      _objc_release(uVar18);
      lVar17 = *(long *)(*(long *)(param_1 + 0x70) + 8);
      _objc_retain(puVar4);
      uVar18 = *(undefined8 *)(lVar17 + 0x28);
      *(undefined **)(lVar17 + 0x28) = puVar4;
      _objc_release(uVar18);
      lVar17 = *(long *)(*(long *)(param_1 + 0x78) + 8);
      _objc_retain(puVar5);
      uVar18 = *(undefined8 *)(lVar17 + 0x28);
      *(undefined **)(lVar17 + 0x28) = puVar5;
      _objc_release(uVar18);
      puVar9 = PTR_PTR_1126bf688;
      func_0x00010bf160a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar9 != (undefined *)0x0) {
        puVar10 = puVar9;
        func_0x00010bf101a0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0dc0();
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = *(long *)(*(long *)(param_1 + 0x80) + 8);
        uVar18 = *(undefined8 *)(lVar17 + 0x28);
        *(undefined **)(lVar17 + 0x28) = puVar13;
        _objc_release(uVar18);
        _objc_release(puVar10);
      }
      _objc_release(puVar9);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    lVar17 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(param_4);
    puVar2 = *(undefined **)(lVar17 + 0x28);
    *(long *)(lVar17 + 0x28) = param_4;
  }
  _objc_release(puVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(uVar12 + 0x20));
  _objc_retain(*(undefined8 *)(uVar12 + 0x28));
  _objc_retain(*(undefined8 *)(uVar12 + 0x30));
  _objc_retain(*(undefined8 *)(uVar12 + 0x38));
  _objc_retain(*(undefined8 *)(uVar12 + 0x40));
  __Block_object_assign(param_2 + 0x48,*(undefined8 *)(uVar12 + 0x48),8);
  __Block_object_assign(param_2 + 0x50,*(undefined8 *)(uVar12 + 0x50),8);
  __Block_object_assign(param_2 + 0x58,*(undefined8 *)(uVar12 + 0x58),8);
  __Block_object_assign(param_2 + 0x60,*(undefined8 *)(uVar12 + 0x60),8);
  __Block_object_assign(param_2 + 0x68,*(undefined8 *)(uVar12 + 0x68),8);
  __Block_object_assign(param_2 + 0x70,*(undefined8 *)(uVar12 + 0x70),8);
  __Block_object_assign(param_2 + 0x78,*(undefined8 *)(uVar12 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_2 + 0x80,*(undefined8 *)(uVar12 + 0x80),8);
  return;
}



/* Entry: 107da965c; end: 107da97bf;  */

void FUN_107da965c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  return;
}



/* Entry: 107da97c0; end: 107da98eb;  */

void FUN_107da97c0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27c940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_60,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf4d860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,lVar1);
  }
  _objc_release(lVar1);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_b0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_d0 = uStack_80;
  _CMTimeSubtract(&uStack_110,&uStack_c0,&uStack_e0);
  uStack_d8 = uStack_40;
  uStack_e0 = uStack_48;
  uStack_d0 = uStack_38;
  _CMTimeRangeMake(&uStack_c0,&uStack_110,&uStack_e0);
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107da98ec; end: 107da99e7;  */

void FUN_107da98ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0xfffffffffffffc0f;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  (**(code **)(lVar1 + 0x10))(lVar1,0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  uVar5 = uVar7;
  _objc_retain(uVar7);
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107da9b44;
  puStack_c8 = &UNK_1108bd210;
  uStack_98 = *(undefined8 *)(lVar2 + 0x38);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x30);
  uVar10 = *(undefined8 *)(lVar2 + 0x20);
  uStack_c0 = uVar7;
  uStack_b8 = uVar6;
  _objc_retain(uVar10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uStack_b0 = uVar10;
  _objc_retain(uVar9);
  uStack_a8 = uVar9;
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  func_0x00010007380c(uVar5,&puStack_e0);
  _objc_release(uVar5);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uVar6);
  _objc_release(uVar7);
  return;
}



/* Entry: 107da99e8; end: 107da9aef;  */

void FUN_107da99e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_4;
  _objc_retain(param_4);
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107da9b44;
  puStack_78 = &UNK_1108bd210;
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = param_4;
  uStack_68 = param_2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar3;
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  _objc_retain(param_2);
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_90);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_4);
  return;
}



/* Entry: 107da9af0; end: 107da9b43;  */

void FUN_107da9af0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727b18 != -1) {
    func_0x00010002a2fc(0x113727b18,&PTR___NSConcreteGlobalBlock_110a0cb80);
  }
  uVar1 = uRam0000000113727b10;
  _objc_retain(uRam0000000113727b10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107da9b44; end: 107da9c1b;  */

void FUN_107da9b44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto LAB_107da9bfc;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uStack_48 = *(undefined8 *)(lVar5 + 0x28);
    func_0x00010c0ef880(uVar2,param_2,lVar1,&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_48;
    _objc_retain(uStack_48);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    _objc_release(uVar3);
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    _objc_release(uVar4);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(lVar5);
    lVar1 = *(long *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x28) = lVar5;
  }
  _objc_release(lVar1);
LAB_107da9bfc:
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107da9c1c; end: 107da9d57;  */

void FUN_107da9c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107da9d58; end: 107daa2db;  */

void FUN_107da9d58(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if (*(long *)(*(long *)(*(long *)(param_3 + 200) + 8) + 0x28) == 0) {
    if (*(long *)(param_3 + 0x20) == 0) {
      if (*(long *)(*(long *)(*(long *)(param_3 + 0xd0) + 8) + 0x28) == 0) {
        if (*(long *)(*(long *)(*(long *)(param_3 + 0xd8) + 8) + 0x28) == 0) {
          if (*(long *)(*(long *)(*(long *)(param_3 + 0xe0) + 8) + 0x28) == 0) {
            lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0xf0) + 8) + 0x28);
            func_0x00010bf529e0();
            if (lVar2 == 0) {
              lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0xf8) + 8) + 0x28);
              func_0x00010bf529e0();
              if (lVar2 != 0) goto LAB_107da9e9c;
              uVar6 = *(undefined8 *)(param_3 + 0x30);
              func_0x00010c2433e0(*(undefined8 *)(param_3 + 0x60));
              uVar5 = *(undefined8 *)(param_3 + 0x48);
              func_0x00010c119b40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bde5d80(param_1,param_2,uVar6);
            }
            else {
LAB_107da9e9c:
              uVar6 = *(undefined8 *)(param_3 + 0x30);
              uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x108) + 8) + 0x28);
              func_0x00010c1511c0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = *(undefined8 *)(param_3 + 0x48);
              func_0x00010c119b40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bde4ea0(uVar6);
              _objc_release(uVar3);
            }
            _objc_release(uVar5);
            if (((*(long *)(param_3 + 0x40) != 0) || (*(long *)(param_3 + 0x78) != 0)) ||
               (*(long *)(param_3 + 0x80) != 0)) {
              if (((*(byte *)(*(long *)(*(long *)(param_3 + 0x128) + 8) + 0x18) & 1) == 0) &&
                 (*(char *)(*(long *)(*(long *)(param_3 + 0x130) + 8) + 0x18) != '\x01')) {
                uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
                uVar6 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
              }
              else {
                uVar3 = *(undefined8 *)(param_3 + 0x88);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar3;
                func_0x00010bf8ef40();
                bVar1 = (int)uVar6 == 0;
                uVar6 = 0x409e000000000000;
                if (bVar1) {
                  uVar6 = 0x4094000000000000;
                }
                uVar5 = 0x4090e00000000000;
                if (bVar1) {
                  uVar5 = 0x4086800000000000;
                }
                _objc_release(uVar3);
              }
              _objc_initWeak(auStack_f0,*(undefined8 *)(param_3 + 0x30));
              uVar4 = *(undefined8 *)(param_3 + 0x30);
              puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_138 = 0xc2000000;
              pcStack_130 = FUN_107daa3fc;
              puStack_128 = &UNK_110a0c7f0;
              uVar3 = *(undefined8 *)(param_3 + 0x40);
              _objc_retain(uVar3);
              uVar7 = *(undefined8 *)(param_3 + 0x78);
              uStack_120 = uVar3;
              _objc_retain(uVar7);
              uVar3 = *(undefined8 *)(param_3 + 0x80);
              uStack_118 = uVar7;
              _objc_retain(uVar3);
              uVar7 = *(undefined8 *)(param_3 + 0x48);
              uStack_110 = uVar3;
              _objc_retain(uVar7);
              uVar3 = *(undefined8 *)(param_3 + 0x98);
              uStack_108 = uVar7;
              _objc_retain(uVar3);
              uVar7 = *(undefined8 *)(param_3 + 0x58);
              uStack_100 = uVar3;
              _objc_retain(uVar7);
              uStack_f8 = uVar7;
              _objc_copyWeak(auStack_148,auStack_f0);
              uVar7 = *(undefined8 *)(param_3 + 0xa0);
              _objc_retain(uVar7);
              uVar8 = *(undefined8 *)(param_3 + 0xa8);
              _objc_retain(uVar8);
              uVar9 = *(undefined8 *)(param_3 + 0xb0);
              _objc_retain(uVar9);
              uVar10 = *(undefined8 *)(param_3 + 0xb8);
              _objc_retain(uVar10);
              uVar11 = *(undefined8 *)(param_3 + 0x28);
              _objc_retain(uVar11);
              uVar3 = *(undefined8 *)(param_3 + 0xc0);
              _objc_retain(uVar3);
              func_0x00010c279ca0(uVar5,uVar6,uVar4);
              _objc_release(uVar3);
              _objc_release(uVar11);
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar7);
              _objc_destroyWeak(auStack_148);
              _objc_release(uStack_f8);
              _objc_release(uStack_100);
              _objc_release(uStack_108);
              _objc_release(uStack_110);
              _objc_release(uStack_118);
              _objc_release(uStack_120);
              _objc_destroyWeak(auStack_f0);
              return;
            }
            uVar3 = *(undefined8 *)(param_3 + 0x28);
            puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_e0 = 0xc2000000;
            pcStack_d8 = FUN_107daa3e8;
            puStack_d0 = &UNK_110849530;
            uVar6 = *(undefined8 *)(param_3 + 0xc0);
            _objc_retain(uVar6);
            uStack_c8 = uVar6;
            func_0x00010007380c(uVar3,&puStack_e8);
            uVar6 = uStack_c8;
            goto LAB_107da9e48;
          }
          uVar6 = 0xfffffffffffffc11;
        }
        else {
          uVar6 = 0xfffffffffffffc12;
        }
      }
      else {
        uVar6 = 0xfffffffffffffc13;
      }
    }
    else {
      uVar6 = 0xfffffffffffffc14;
    }
  }
  else {
    uVar6 = 0xfffffffffffffc15;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107daa2dc;
  puStack_a8 = &UNK_11085b7b0;
  uVar5 = *(undefined8 *)(param_3 + 0xc0);
  _objc_retain(uVar5);
  uStack_a0 = *(undefined8 *)(param_3 + 0x30);
  uStack_98 = uVar5;
  uStack_90 = uVar6;
  func_0x00010007380c(uVar3,&puStack_c0);
  uVar6 = uStack_98;
LAB_107da9e48:
  _objc_release(uVar6);
  return;
}



/* Entry: 107daa2dc; end: 107daa3e7;  */

void FUN_107daa2dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107daa3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))(*(long *)(lVar2 + 0x20),0,0);
  return;
}



/* Entry: 107daa3e8; end: 107daa3fb;  */

void FUN_107daa3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107daa3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107daa3fc; end: 107daa5e3;  */

void FUN_107daa3fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2542a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5d860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cee0(puVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x000108553e88(&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110dbab38,1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 107daa5e4; end: 107daa6cb;  */

void FUN_107daa5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107daa6cc;
  puStack_68 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_2;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar3);
  uStack_50 = param_3;
  uStack_48 = uVar3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107daa6cc; end: 107daa753;  */

void FUN_107daa6cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar1);
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_107daa720;
    }
  }
  else {
    _objc_retain(lVar1);
  }
  puVar2 = PTR_PTR_1126b1358;
  func_0x00010bf5a440(PTR_PTR_1126b1358);
  _objc_retainAutoreleasedReturnValue();
LAB_107daa720:
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),puVar2,*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107daa754; end: 107daaa83;  */

void FUN_107daa754(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  _objc_retain(*(undefined8 *)(param_2 + 0xa0));
  _objc_retain(*(undefined8 *)(param_2 + 0xa8));
  _objc_retain(*(undefined8 *)(param_2 + 0xb0));
  _objc_retain(*(undefined8 *)(param_2 + 0xb8));
  __Block_object_assign(param_1 + 0xc0,*(undefined8 *)(param_2 + 0xc0),7);
  __Block_object_assign(param_1 + 200,*(undefined8 *)(param_2 + 200),8);
  __Block_object_assign(param_1 + 0xd0,*(undefined8 *)(param_2 + 0xd0),8);
  __Block_object_assign(param_1 + 0xd8,*(undefined8 *)(param_2 + 0xd8),8);
  __Block_object_assign(param_1 + 0xe0,*(undefined8 *)(param_2 + 0xe0),8);
  __Block_object_assign(param_1 + 0xe8,*(undefined8 *)(param_2 + 0xe8),8);
  __Block_object_assign(param_1 + 0xf0,*(undefined8 *)(param_2 + 0xf0),8);
  __Block_object_assign(param_1 + 0xf8,*(undefined8 *)(param_2 + 0xf8),8);
  __Block_object_assign(param_1 + 0x100,*(undefined8 *)(param_2 + 0x100),8);
  __Block_object_assign(param_1 + 0x108,*(undefined8 *)(param_2 + 0x108),8);
  __Block_object_assign(param_1 + 0x110,*(undefined8 *)(param_2 + 0x110),8);
  __Block_object_assign(param_1 + 0x118,*(undefined8 *)(param_2 + 0x118),8);
  __Block_object_assign(param_1 + 0x120,*(undefined8 *)(param_2 + 0x120),8);
  __Block_object_assign(param_1 + 0x128,*(undefined8 *)(param_2 + 0x128),8);
  __Block_object_assign(param_1 + 0x130,*(undefined8 *)(param_2 + 0x130),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x138,*(undefined8 *)(param_2 + 0x138),8)
  ;
  return;
}



/* Entry: 107daaa84; end: 107daac07; -[SnapVideoFilter _bakeWatermarkWithMediaUrl:watermarkProfile:previewAssetVideoProviderFactory:withCompletion:] */

void FUN_107daaa84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c2a2a40();
  if (lVar1 == 1) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c057ae0();
    uVar3 = param_5;
    func_0x00010c29aec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(param_1);
    func_0x00010c224ac0(param_1);
    _objc_retain(param_6);
    _objc_retain(param_3);
    func_0x00010bfae7c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,param_3,0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107daac08; end: 107daacab;  */

void FUN_107daac08(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x28);
  if ((param_2 == 0) || (param_4 != 0)) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20),0);
    }
  }
  else if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,0);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107daacac; end: 107daaf73; -[SnapVideoFilter bakeWatermarkWithMediaUrl:snapDoc:watermarkProfile:previewAssetVideoProviderFactory:watermarkServices:withCompletion:] */

void FUN_107daacac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 != 0) {
    func_0x00010bdd28a0(param_1);
    goto LAB_107daaf00;
  }
  lVar1 = param_4;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ea0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfe5ea0();
  if (((param_4 == 0) || (lVar3 == 0)) || (puVar2 == (undefined *)0x0)) {
    _objc_release(lVar1);
LAB_107daaee0:
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,param_3,0);
    }
  }
  else {
    lVar3 = param_7;
    func_0x00010c2a29c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 == 0) goto LAB_107daaee0;
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_7;
    func_0x00010c2a29c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_8);
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c097f80(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar2);
LAB_107daaf00:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107daaf74; end: 107daafef;  */

void FUN_107daaf74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20),0);
    }
  }
  else {
    func_0x00010bdd28a0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107daaff0; end: 107dab173; -[SnapVideoFilter snapInfoFromSnapDoc:overlayEdits:] */

void FUN_107daaff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c270d80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23fb40();
  func_0x00010bf651a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010bf6a760(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  uVar1 = param_5;
  FUN_107ff9770(param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar4 = PTR_PTR_1126d7d48;
  _objc_alloc(PTR_PTR_1126d7d48);
  puVar5 = puVar3;
  func_0x00010c0d4f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ff9530(param_5);
  uVar6 = param_1;
  uVar7 = param_2;
  FUN_107ff9530(param_5);
  _objc_release(param_5);
  func_0x00010c047320(param_1,param_2,uVar6,uVar7,puVar4);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107dab174; end: 107dab57b; -[SnapVideoFilter _nonBaseAudioAssetsFromSnapDocParser:musicMediaLoader:voiceoverMediaLoader:completion:] */

void FUN_107dab174(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107da8f04;
  uStack_88 = 0x107da8f14;
  uStack_80 = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107da8f04;
  uStack_b8 = 0x107da8f14;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_107da8f04;
  uStack_e8 = 0x107da8f14;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_107da8f04;
  uStack_118 = 0x107da8f14;
  uStack_110 = 0;
  puVar3 = param_3;
  func_0x00010c13e240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bf688;
  puVar4 = puVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf160a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar5;
    func_0x00010bf101a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0dc0();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_107dab57c;
  puStack_190 = &UNK_110a0c910;
  puStack_158 = &uStack_d8;
  puStack_150 = &uStack_108;
  puStack_148 = &uStack_138;
  _objc_retain(uVar1);
  uStack_188 = uVar1;
  _objc_retain(puVar6);
  puStack_180 = puVar6;
  _objc_retain(param_4);
  uStack_178 = param_4;
  uStack_170 = param_1;
  _objc_retain(puVar2);
  puStack_168 = puVar2;
  puStack_140 = &uStack_a8;
  _objc_retain(param_5);
  uStack_160 = param_5;
  func_0x00010bdd1140(param_1);
  _objc_release(puVar4);
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_107dabe8c;
  puStack_1e0 = &UNK_110899a58;
  puStack_1c0 = &uStack_d8;
  puStack_1b8 = &uStack_108;
  puStack_1b0 = &uStack_138;
  puStack_1d8 = puVar2;
  uStack_1d0 = param_6;
  puStack_1c8 = &uStack_a8;
  _objc_retain(puVar2);
  _objc_retain(param_6);
  func_0x000100bc0718(uVar1,puVar4,&puStack_1f8);
  _objc_release(puVar4);
  _objc_release(puStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_160);
  _objc_release(puStack_168);
  _objc_release(uStack_178);
  _objc_release(puStack_180);
  _objc_release(uStack_188);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107dab57c; end: 107dab9f7;  */

void FUN_107dab57c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar4;
  _objc_release(uVar10);
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar4;
  _objc_release(uVar10);
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar4;
  _objc_release(uVar10);
  if (((*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28) == 0) &&
      (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28) == 0)) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) == 0)) {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf8cf20();
    if ((int)uVar10 == 1) {
      bVar2 = true;
    }
    else {
      bVar2 = *(long *)(param_1 + 0x28) != 0;
    }
    uVar10 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010bf8cf20();
    if ((int)uVar7 == 1) {
      bVar3 = true;
    }
    else {
      bVar3 = *(long *)(param_1 + 0x28) != 0;
    }
    lVar11 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107dab9f8;
      puStack_a0 = &UNK_110a0c8b0;
      uStack_98 = *(undefined8 *)(param_1 + 0x38);
      uStack_70 = bVar2;
      _objc_retain(uVar4);
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uStack_90 = uVar4;
      _objc_retain(uVar12);
      uStack_78 = *(undefined8 *)(param_1 + 0x68);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uStack_88 = uVar12;
      _objc_retain(uVar13);
      ppuVar8 = &puStack_b8;
      uStack_80 = uVar13;
      _objc_retainBlock(ppuVar8);
      ppuVar9 = ppuVar8;
      FUN_107da9af0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      _objc_opt_class(uVar12);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135ea0(uVar7);
      _objc_release(uVar12);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_release(uVar7);
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    lVar6 = lVar11;
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = puVar1;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x107dabc04;
      puStack_f0 = &UNK_110a0c8e0;
      uStack_e8 = *(undefined8 *)(param_1 + 0x38);
      uStack_c0 = bVar3;
      _objc_retain(uVar10);
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uStack_e0 = uVar10;
      _objc_retain(uVar12);
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uStack_d8 = uVar12;
      _objc_retain(uVar13);
      ppuVar8 = &puStack_108;
      uStack_d0 = uVar13;
      _objc_retainBlock(ppuVar8);
      ppuVar9 = ppuVar8;
      FUN_107da9af0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c136fa0(uVar7);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(uStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uVar7);
    }
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x40));
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar5);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
  }
  else {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107dab9f8; end: 107dabdff;  */

void FUN_107dab9f8(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c4a68;
    _objc_alloc();
    lVar6 = param_3;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_80,param_3);
    }
    lVar4 = lVar6;
    func_0x00010b056d1c(puVar1,lVar6,&uStack_80);
    _objc_release(lVar6);
    if ((*(char *)(param_2 + 0x48) == '\x01') && (puVar1 != (undefined *)0x0)) {
      lVar6 = *(long *)(param_2 + 0x20);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde4100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar3 = *(long *)(param_2 + 0x28);
      if (lVar3 == 0) {
        fVar11 = 1.0;
      }
      else {
        func_0x00010bf101a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0dc0();
        fVar11 = (float)param_1;
        _objc_release(lVar3);
      }
      puVar2 = PTR_PTR_1126bf680;
      _objc_alloc();
      uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      lVar4 = lVar6;
      func_0x00010b744494(fVar11);
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
      _objc_release(puVar2);
    }
    else {
      lVar3 = *(long *)(*(long *)(param_2 + 0x40) + 8);
      _objc_retain(puVar1);
      lVar6 = *(long *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar1;
    }
    _objc_release(lVar6);
    _objc_release(puVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x38));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = lVar4;
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c4a68;
    _objc_alloc();
    lVar6 = lVar4;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    dVar8 = *(double *)PTR__kCMTimeZero_110348670;
    uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lVar5 = lVar6;
    dVar9 = dVar8;
    dStack_100 = dVar8;
    uStack_f8 = uVar10;
    uStack_f0 = uVar7;
    func_0x00010b056d1c(puVar1,lVar6,&dStack_100);
    _objc_release(lVar6);
    if ((*(char *)(param_3 + 0x48) == '\x01') && (puVar1 != (undefined *)0x0)) {
      lVar6 = *(long *)(param_3 + 0x20);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde4100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar3 = *(long *)(param_3 + 0x28);
      if (lVar3 == 0) {
        fVar11 = 1.0;
      }
      else {
        func_0x00010bf101a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0dc0();
        fVar11 = (float)dVar9;
        _objc_release(lVar3);
      }
      puVar2 = PTR_PTR_1126bf680;
      _objc_alloc(PTR_PTR_1126bf680);
      lVar5 = lVar6;
      dStack_100 = dVar8;
      uStack_f8 = uVar10;
      uStack_f0 = uVar7;
      func_0x00010b744494(fVar11);
      func_0x00010befa120(*(undefined8 *)(param_3 + 0x30));
      _objc_release(puVar2);
    }
    else {
      lVar3 = *(long *)(*(long *)(param_3 + 0x40) + 8);
      _objc_retain(puVar1);
      lVar6 = *(long *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar1;
    }
    _objc_release(lVar6);
    _objc_release(puVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x38));
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar5 + 0x20));
  _objc_retain(*(undefined8 *)(lVar5 + 0x28));
  _objc_retain(*(undefined8 *)(lVar5 + 0x30));
  _objc_retain(*(undefined8 *)(lVar5 + 0x38));
  _objc_retain(*(undefined8 *)(lVar5 + 0x40));
  _objc_retain(*(undefined8 *)(lVar5 + 0x48));
  __Block_object_assign(lVar4 + 0x50,*(undefined8 *)(lVar5 + 0x50),8);
  __Block_object_assign(lVar4 + 0x58,*(undefined8 *)(lVar5 + 0x58),8);
  __Block_object_assign(lVar4 + 0x60,*(undefined8 *)(lVar5 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(lVar4 + 0x68,*(undefined8 *)(lVar5 + 0x68),8);
  return;
}



/* Entry: 107dabe00; end: 107dabe8b;  */

void FUN_107dabe00(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 107dabe8c; end: 107dabeff;  */

void FUN_107dabe8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))
            (lVar1,uVar3,uVar2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107dabf00; end: 107dac14b; -[SnapVideoFilter filterVideoSnap:cloudFile:encryptedContentManager:reverseAudioCache:respectSnapOrientation:isExporting:userSession:previewAssetVideoProviderFactory:musicMediaLoader:voiceoverMediaLoader:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:dataObjectContext:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:watermarkServices:completionQueue:completion:] */

void FUN_107dabf00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2a5040(param_3);
  uVar2 = param_3;
  func_0x00010bfe0640(param_3);
  func_0x00010bfae760((double)(int)uVar1,(double)(int)uVar2,param_1,param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,0,0,param_9,0,param_10,0,param_11,param_12,param_13,
                      param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dac14c; end: 107dac7f3; -[SnapVideoFilter filterVideoSnap:cloudFile:encryptedContentManager:reverseAudioCache:respectSnapOrientation:videoTargetSize:isExporting:spectaclesExportFormat:primaryCamera:userSession:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:musicMediaLoader:voiceoverMediaLoader:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:dataObjectContext:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:watermarkServices:completionQueue:completion:] */

void FUN_107dac14c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,long param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
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
  _objc_retain(param_26);
  _objc_retain(param_27);
  lVar2 = param_3;
  func_0x00010c2056c0();
  _dispatch_group_create();
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_107da8f04;
  uStack_98 = 0x107da8f14;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_107da8f04;
  uStack_c8 = 0x107da8f14;
  uStack_c0 = 0;
  lVar3 = lVar2;
  puStack_b0 = &uStack_b8;
  _dispatch_group_enter();
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_107dac7f4;
  puStack_100 = &UNK_11097ce00;
  puStack_f0 = &uStack_b8;
  _objc_retain(lVar2);
  lStack_f8 = lVar2;
  func_0x00010c136020(param_7);
  _objc_release(lVar3);
  lVar3 = param_17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    _dispatch_group_enter(lVar2);
    uVar4 = param_5;
    func_0x00010c241220(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_107da9af0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar1;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x107dac850;
    puStack_130 = &UNK_110a0c940;
    puStack_120 = &uStack_e8;
    _objc_retain(lVar2);
    lVar6 = param_3;
    lStack_128 = lVar2;
    _objc_opt_class(param_3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135240(lVar3);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lStack_128);
  }
  lVar6 = param_18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  if ((lVar6 != 0) && (puStack_e0[5] == 0)) {
    _dispatch_group_enter(lVar2);
    uVar4 = param_5;
    func_0x00010c241220(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_107da9af0();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar1;
    uStack_170 = 0xc2000000;
    uStack_168 = 0x107dac930;
    puStack_160 = &UNK_110a0c970;
    puStack_150 = &uStack_e8;
    _objc_retain(lVar2);
    lStack_158 = lVar2;
    func_0x00010c135260(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar7 = lStack_158;
    _objc_release();
  }
  FUN_107da9af0();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = puVar1;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_107daca0c;
  puStack_240 = &UNK_110a0c9d0;
  uStack_230 = param_21;
  uStack_210 = param_15;
  puStack_1b0 = &uStack_b8;
  puStack_1a8 = &uStack_e8;
  uStack_190 = param_11;
  uStack_188 = param_12;
  uStack_200 = param_13;
  uStack_1f8 = param_14;
  uStack_1f0 = param_16;
  uStack_1e8 = param_19;
  uStack_1e0 = param_20;
  uStack_1d8 = param_22;
  uStack_1d0 = param_23;
  uStack_1c8 = param_24;
  uStack_1c0 = param_25;
  uStack_1b8 = param_27;
  uStack_238 = param_5;
  lStack_228 = param_3;
  uStack_220 = param_6;
  uStack_218 = param_7;
  uStack_208 = param_8;
  uStack_1a0 = param_1;
  uStack_198 = param_2;
  uStack_180 = param_10;
  uStack_17f = param_9;
  _objc_retain();
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_16);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_8);
  _objc_retain(param_15);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_21);
  _objc_retain(param_5);
  func_0x000100bc0718(lVar2,lVar7,&puStack_258);
  _objc_release(lVar7);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  _objc_release(uStack_208);
  _objc_release(uStack_210);
  _objc_release(uStack_218);
  _objc_release(uStack_220);
  _objc_release(uStack_230);
  _objc_release(uStack_238);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lStack_f8);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_27);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_15);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_21);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(param_26);
  _objc_release(param_18);
  _objc_release(param_17);
  return;
}



/* Entry: 107dac7f4; end: 107daca0b;  */

void FUN_107dac7f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107daca0c; end: 107dace2f;  */

void FUN_107daca0c(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar2 = PTR_PTR_1126bc7b8;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar3 = puVar2;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3c70;
  _objc_alloc(PTR_PTR_1126c3c70);
  func_0x00010c046e40();
  func_0x00010c221d20(*(undefined8 *)(param_2 + 0x30));
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf20900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c29ae80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c0d9500();
    _objc_release(uVar5);
    puVar4 = puVar3;
    func_0x00010bf20900(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar6);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bf209a0((double)param_1,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(*(undefined8 *)(param_2 + 0x30));
    _objc_release(uVar5);
    _objc_release(uVar10);
  }
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x00010b5fa088();
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  if (lVar7 - 2U < 0xb) {
    uVar12 = *(undefined8 *)(param_2 + 0xb8);
    uVar13 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010bde5dc0(uVar12,uVar13,uVar10);
    uVar11 = uVar10;
  }
  else {
    uVar12 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar13 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uVar11 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c0c9f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde5d80(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xc0),uVar10);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  FUN_107dace30();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  _dispatch_time(0,30000000000);
  _dispatch_semaphore_wait(uVar11,uVar10);
  _objc_release(uVar11);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010c0c5b00();
  if (iVar1 == 5) {
    lVar8 = *(long *)(param_2 + 0x98);
    func_0x00010c2a29c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bfbeb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar8);
    if (lVar9 != 0) {
      func_0x00010c224ac0(*(undefined8 *)(param_2 + 0x30));
    }
    _objc_release(lVar9);
  }
  _objc_initWeak(auStack_58,*(undefined8 *)(param_2 + 0x30));
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar11);
  uVar10 = *(undefined8 *)(param_2 + 0xa0);
  _objc_retain(uVar10);
  func_0x00010bfae7e0(uVar12,uVar13,uVar5);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 107dace30; end: 107dace83;  */

void FUN_107dace30(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727b28 != -1) {
    func_0x00010002a2fc(0x113727b28,&PTR___NSConcreteGlobalBlock_110a0cba0);
  }
  uVar1 = uRam0000000113727b20;
  _objc_retain(uRam0000000113727b20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dace84; end: 107dacf4f;  */

void FUN_107dace84(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_4;
  _objc_retain(param_4);
  FUN_107dace30();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_signal();
  _objc_release(lVar2);
  if ((param_2 != 0) && (param_4 == 0)) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    lVar1 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdddc00(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dacf50; end: 107dad0d3;  */

void FUN_107dacf50(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),7);
  __Block_object_assign(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xb0),8);
  return;
}



/* Entry: 107dad0d4; end: 107dad4d3; -[SnapVideoFilter _configureTranscoderWithNonSpecVideoSnapInfo:overlay:overlayFormat:overrideAudioAsset:mixedAudioTracks:baseAudioVolumeProportion:reverseAudioCache:respectSnapOrientation:videoTargetSize:isExporting:userSession:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:captionDataProvider:creativeToolsMemoriesResources:] */

void FUN_107dad0d4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  dVar7 = param_1;
  dVar8 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000010);
  func_0x00010bde5da0(param_3);
  lVar1 = param_5;
  func_0x00010c23fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  if (lVar2 - 1U < 2) {
    lVar2 = lVar1;
    func_0x00010c130740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(param_3);
    _objc_release(lVar2);
    dVar6 = INFINITY;
    func_0x00010c186240(param_3);
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    dVar7 = 0.0;
    if (dVar6 != 0.0) {
      if (dVar8 == 0.0) {
        dVar7 = INFINITY;
      }
      else {
        dVar7 = dVar6 / dVar8;
      }
    }
    func_0x00010c222080(param_3);
  }
  else {
    if (lVar2 != 0) goto LAB_107dad2a0;
    dVar6 = INFINITY;
    func_0x00010c186240(param_3);
    func_0x00010c186260(param_3);
    func_0x00010bf4dde0(param_5);
    dVar7 = 0.0;
    if (dVar6 != 0.0) {
      if (dVar8 == 0.0) {
        dVar7 = INFINITY;
      }
      else {
        dVar7 = dVar6 / dVar8;
      }
    }
    func_0x00010c222080(param_3);
    if (in_stack_00000008 != '\0') {
      func_0x00010c242380(param_5);
    }
  }
  func_0x00010c2220a0(param_3);
LAB_107dad2a0:
  uVar3 = param_7;
  func_0x00010c1511c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d75e0(param_3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ef960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7660(param_3);
  _objc_release(uVar3);
  func_0x00010c21d9a0(param_3);
  puVar4 = PTR_PTR_1126b26c0;
  func_0x00010c29b600(param_3);
  dVar8 = 0.0;
  if (dVar7 != 0.0) {
    if (dVar7 == INFINITY) {
      param_2 = 0.0;
      dVar8 = param_1;
    }
    else {
      dVar8 = param_2 * dVar7;
      if (param_1 <= param_2 * dVar7) {
        param_2 = param_1 / dVar7;
        dVar8 = param_1;
      }
    }
  }
  uVar3 = param_3;
  func_0x00010bf86d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29b8e0(dVar8,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000010);
  func_0x00010c222140(param_3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  uVar3 = param_6;
  FUN_107ff7990();
  if ((int)uVar3 != 0) {
    func_0x00010bf4dde0(param_5);
    dVar7 = dVar8;
    dVar6 = param_2;
    func_0x00010c2433e0(param_5);
    uVar3 = param_3;
    func_0x00010c0ef960(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    FUN_107ff7d2c(dVar8,param_2,dVar7,dVar6,param_6,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d75e0(param_3);
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c21d9a0(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107dad4d4; end: 107dada57; -[SnapVideoFilter _configureClipsEditingTranscoderWithSnapInfos:globalOverlay:localOverlays:globalOverlayImage:localOverlayImages:overrideAudioAsset:mixedAudioTracks:baseAudioVolumeProportion:respectSnapOrientation:isExporting:userSession:previewCameraSourceOverlayProvider:captionDataProvider:creativeToolsMemoriesResources:] */

undefined1  [16]
FUN_107dad4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,long param_6,long param_7,ulong param_8,ulong param_9,long param_10,
             long param_11,long param_12,undefined4 param_13,undefined4 param_14,undefined8 param_15
             ,undefined8 param_16,undefined8 param_17,undefined8 param_18)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lStack_118;
  ulong uStack_110;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_6;
  lVar10 = param_7;
  uVar7 = param_8;
  uVar11 = param_9;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  if (param_10 != 0) {
    lVar9 = 1;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16bf80(param_3);
    _objc_release(puVar2);
  }
  lVar3 = param_11;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c1c8720(param_3);
  }
  uVar13 = (ulong)param_13._1_1_;
  if (param_12 != 0) {
    func_0x00010c16f280(param_3);
  }
  func_0x00010bf0efe0(param_6);
  func_0x00010c16bc20(param_3);
  lVar3 = param_6;
  func_0x00010bf10220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar2 = PTR_PTR_1126d7d50;
    _objc_alloc();
    lVar3 = param_6;
    func_0x00010bf10220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b057030(puVar2,lVar3);
    func_0x00010c16c440(param_3);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  func_0x00010c1a8660(param_3);
  func_0x00010c1f5d00(param_3);
  uVar14 = param_5;
  func_0x00010bf529e0();
  if (uVar14 != 0) {
    uVar14 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar9;
      FUN_107ff7f70();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(puVar2);
      lVar4 = lVar3;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010c2a0480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 == 0) {
        lVar15 = 0;
        uVar8 = param_1;
      }
      else {
        lVar15 = lVar4;
        func_0x00010c2a04a0();
        func_0x000108d3fc9c();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_1;
      }
      lVar9 = lVar4;
      func_0x00010c249da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 == 0) {
        param_1 = 0x3ff0000000000000;
      }
      else {
        lVar9 = lVar4;
        func_0x00010c249dc0();
        uVar17 = 0x3ff0000000000000;
        if (lVar9 == 0x7b2e2fc2) {
          uVar17 = 0x4000000000000000;
        }
        uVar8 = 0x4010000000000000;
        if (lVar9 != 0x7b2e3000) {
          uVar8 = uVar17;
        }
        param_1 = 0x3fe0000000000000;
        if (lVar9 != -0x6e0993d9) {
          param_1 = uVar8;
        }
      }
      uVar5 = param_5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c23fc60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c27dd80();
      if (uVar7 - 1 < 2) {
        uVar16 = uVar6;
        func_0x00010c130740();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar16 = 0;
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_8;
      if (uVar7 != 0) {
        uVar1 = uVar7;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b26c0;
      func_0x00010c2433e0(uVar5);
      uVar17 = param_3;
      func_0x00010bf86d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29b8e0(uVar8,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      lVar10 = 0;
      param_2 = 0x7ff0000000000000;
      uVar13 = uVar14;
      lVar9 = lVar15;
      uVar7 = uVar16;
      uVar11 = uVar1;
      func_0x00010bf46d60(param_1,0x7ff0000000000000,0,param_3);
      _objc_release(uVar1);
      _objc_release(puVar2);
      _objc_release(uVar16);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar15);
      _objc_release(lVar4);
      _objc_release(lVar3);
      uVar14 = uVar14 + 1;
      uVar5 = param_5;
      func_0x00010bf529e0();
      lStack_118 = param_6;
      uStack_110 = param_5;
    } while (uVar14 < uVar5);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_16);
    _objc_retain(param_17);
    _objc_retain(param_3);
    _objc_retain(uStack_110);
    _objc_retain(lStack_118);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(uVar11);
    _objc_retain(uVar7);
    _objc_retain(lVar10);
    _objc_retain(lVar9);
    _objc_retain(uVar13);
    uVar8 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar8;
    func_0x00010c0c9f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010bde5da0(param_5);
    _objc_release(uStack_110);
    _objc_release(uVar11);
    _objc_release(uVar7);
    func_0x00010be792e0(param_1,param_2,param_5);
    _objc_release(param_15);
    _objc_release(param_16);
    _objc_release(param_17);
    _objc_release(param_3);
    _objc_release(lStack_118);
    _objc_release(param_10);
    _objc_release(param_11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar13);
    _objc_release(uVar17);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = param_1;
    return auVar19;
  }
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 107dada58; end: 107dadcbf; -[SnapVideoFilter _configureTranscoderWithSpecVideoSnap:overlay:overlayFormat:overrideAudioAsset:reverseAudioCache:respectSnapOrientation:videoTargetSize:isExporting:spectaclesExportFormat:primaryCamera:userSession:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:] */

undefined1  [16]
FUN_107dada58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c9f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bde5da0(param_3,param_4,uVar2,param_6,param_8,0,0,param_9,param_11,param_18);
  _objc_release(param_18);
  _objc_release(param_9);
  _objc_release(param_8);
  func_0x00010be792e0(param_1,param_2,param_3,param_4,param_7,param_5,param_6,param_11,param_15,
                      param_10,param_13,param_14,param_16,param_17,param_19,param_20,param_21,
                      param_22);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107dadcc0; end: 107dae1af; -[SnapVideoFilter _configureTranscoderWithSnapInfo:overlay:overrideAudioAsset:mixedAudioTracks:baseAudioVolumeProportion:reverseAudioCache:isExporting:audioProcessingSessionFactory:] */

void FUN_107dadcc0(double param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,undefined4 param_10,undefined4 param_11,
                  undefined *param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_f0 = param_12;
  _objc_retain(param_12);
  if (param_6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16bf80(param_2);
    _objc_release(puVar1);
  }
  lVar2 = param_7;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c1c8720(param_2);
  }
  if (param_8 != 0) {
    func_0x00010c16f280(param_2);
  }
  lVar2 = param_5;
  lStack_e8 = param_4;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a0480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010c2a04a0(lVar2);
    func_0x000108d3fc9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c2e0(param_2);
    _objc_release(lVar3);
  }
  lVar3 = lVar2;
  func_0x00010c249da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010c249dc0();
    dVar8 = 2.0;
    if (lVar3 == 0x7b2e3000) {
      dVar8 = 4.0;
    }
    dVar9 = 1.0;
    if (lVar3 != 0) {
      dVar9 = dVar8;
    }
    param_1 = 0.5;
    if (lVar3 != -0x6e0993d9) {
      param_1 = dVar9;
    }
    func_0x00010c221cc0(param_2);
  }
  lVar3 = lVar2;
  func_0x00010c140160();
  if ((int)lVar3 != 0) {
    func_0x00010c29aae0(param_2);
    param_1 = -param_1;
    func_0x00010c221cc0(param_2);
    func_0x00010c29aae0(param_2);
    if (param_1 < 0.0) {
      lVar3 = param_2;
      func_0x00010bf0f680();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        uVar5 = 0;
        _dispatch_semaphore_create();
        lVar3 = lStack_e8;
        uStack_100 = uVar5;
        func_0x00010c0c9a40(lStack_e8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_9;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lStack_108 = lVar4;
        if (lVar4 == 0) {
          puVar1 = puStack_f0;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_2;
          func_0x00010c29ae80();
          _objc_retainAutoreleasedReturnValue();
          lStack_110 = lVar3;
          func_0x00010c0d9500();
          puVar6 = puVar1;
          func_0x00010bf588a0();
          _objc_retainAutoreleasedReturnValue();
          puStack_f8 = puVar6;
          _objc_release(lVar3);
          _objc_release(lStack_110);
          _objc_release(puVar1);
          uVar5 = uStack_100;
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0xc2000000;
          pcStack_d0 = FUN_107dae1b0;
          puStack_c8 = &UNK_1108a8168;
          lStack_c0 = param_2;
          _objc_retain(uStack_100);
          uStack_b8 = uVar5;
          _objc_retain(param_9);
          lVar3 = lStack_e8;
          lStack_b0 = param_9;
          _objc_retain(lStack_e8);
          lStack_a8 = lVar3;
          func_0x00010bfbff80(puStack_f8);
          _objc_release(lStack_a8);
          _objc_release(lStack_b0);
          _objc_release(uStack_b8);
          lVar3 = lStack_108;
        }
        else {
          puVar1 = PTR_PTR_1126c4a68;
          _objc_alloc();
          lVar3 = lStack_108;
          uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
          uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
          uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          func_0x00010b056d1c();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_f8 = puVar1;
          puStack_80 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16bf80(param_2);
          _objc_release(puVar6);
          uVar5 = uStack_100;
          _dispatch_semaphore_signal(uStack_100);
        }
        _objc_release(puStack_f8);
        param_3 = -1;
        _dispatch_semaphore_wait(uVar5);
        _objc_release(lVar3);
        _objc_release(uVar5);
      }
    }
  }
  func_0x00010bf0efe0(param_5);
  func_0x00010c16bc20(param_2);
  lVar3 = param_5;
  func_0x00010bf10220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126d7d50;
    _objc_alloc();
    lVar3 = param_5;
    func_0x00010bf10220();
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar3;
    func_0x00010b057030();
    func_0x00010c16c440(param_2);
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
  func_0x00010c1a8660(param_2);
  func_0x00010c1f5d00(param_2);
  _objc_release(lVar2);
  _objc_release(puStack_f0);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  lVar2 = lStack_e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107dae1b0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = param_9;
  lStack_148 = param_8;
  lStack_140 = param_7;
  lStack_138 = param_6;
  lStack_130 = param_5;
  puStack_128 = puVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4a68;
  _objc_alloc();
  uStack_178 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_180 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_170 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010b056d1c();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_160 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16bf80(*(undefined8 *)(lVar2 + 0x20));
  _objc_release(puVar6);
  _dispatch_semaphore_signal(*(undefined8 *)(lVar2 + 0x28));
  if (param_3 != 0) {
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_107dae340;
    puStack_1a0 = &UNK_110848ba8;
    uVar7 = *(undefined8 *)(lVar2 + 0x30);
    _objc_retain(uVar7);
    uStack_198 = uVar7;
    _objc_retain(param_3);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    lStack_190 = param_3;
    _objc_retain(uVar7);
    uStack_188 = uVar7;
    func_0x00010007380c(uVar5,&puStack_1b8);
    _objc_release(uVar5);
    _objc_release(uStack_188);
    _objc_release(lStack_190);
    _objc_release(uStack_198);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c0c9a40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107dae1b0; end: 107dae33f;  */

void FUN_107dae1b0(long param_1,long param_2)

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
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c4a68;
  _objc_alloc();
  uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010b056d1c();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16bf80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107dae340;
    puStack_90 = &UNK_110848ba8;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uStack_88 = uVar4;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lStack_80 = param_2;
    _objc_retain(uVar4);
    uStack_78 = uVar4;
    func_0x00010007380c(uVar3,&puStack_a8);
    _objc_release(uVar3);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c0c9a40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107dae340; end: 107dae38b;  */

void FUN_107dae340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c9a40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107dae38c; end: 107dae38f; -[SnapVideoFilter _checkIfUrlIsValidForAVAsset:forVideoSnap:] */

void FUN_107dae38c(void)

{
  return;
}



/* Entry: 107dae390; end: 107daf2d7; +[SnapVideoFilter videoTrackedImagesFromSnapOverlay:snapInfo:videoTargetSize:isRectangularCustomExport:userSession:previewCameraSourceOverlayProvider:captionDataProvider:creativeToolsMemoriesResources:disposableBag:] */

void FUN_107dae390(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5,
                  undefined8 param_6,uint param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  uint uStack_4c4;
  undefined *puStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  double dStack_458;
  double dStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  code *pcStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong *puStack_408;
  double dStack_400;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong *puStack_2b8;
  ulong uStack_2b0;
  ulong *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_140;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar27 = param_1;
  dVar31 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar2 = 0;
  _dispatch_semaphore_create();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  uVar11 = param_6;
  dVar32 = dVar27;
  dVar36 = dVar31;
  func_0x00010c07ccc0();
  if ((int)uVar11 != 0) {
    func_0x00010bf4dde0(param_6);
    dVar31 = dVar36;
    dVar27 = dVar32;
  }
  dVar32 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(dVar32))) {
    bVar1 = param_2 == dVar32;
  }
  dVar36 = dVar27;
  dVar28 = dVar31;
  if (!bVar1) {
    uVar11 = param_6;
    func_0x00010c06e8e0();
    param_7 = param_7 & (uint)uVar11;
    if (param_1 == 0.0) {
      dVar37 = 0.0;
      dVar36 = 0.0;
      if ((param_7 & 1) != 0) goto LAB_107dae51c;
    }
    else if (param_2 == 0.0) {
      dVar28 = 0.0;
      if (param_7 != 0) {
        dVar37 = INFINITY;
        goto LAB_107dae51c;
      }
    }
    else {
      dVar37 = param_1 / param_2;
      if ((param_7 & 1) == 0) {
        dVar36 = 0.0;
        if (((dVar37 != 0.0) && (dVar36 = dVar27, dVar28 = 0.0, dVar37 != INFINITY)) &&
           (dVar36 = dVar31 * dVar37, dVar28 = dVar31, dVar27 <= dVar31 * dVar37)) {
          dVar36 = dVar27;
          dVar28 = dVar27 / dVar37;
        }
      }
      else {
LAB_107dae51c:
        dVar28 = 1.0;
        _hypot(0x3ff0000000000000,dVar37);
        dVar32 = (double)(long)(dVar37 * (dVar27 / dVar28) * 0.125);
        dVar36 = dVar32 * 8.0;
        dVar28 = (double)(long)((dVar27 / dVar28) * 0.125) * 8.0;
      }
    }
  }
  _objc_release(param_6);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar37 = 0.0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  puVar22 = param_5;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar22;
  func_0x00010bf52a60();
  if (puVar5 == (undefined *)0x0) {
    uStack_4c4 = 0;
  }
  else {
    uStack_4c4 = 0;
    lVar24 = *plStack_270;
    dVar33 = param_1 / param_2;
    dVar37 = INFINITY;
    dVar32 = dVar33;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_270 != lVar24) {
          _objc_enumerationMutation(puVar22);
        }
        lVar23 = *(long *)(lStack_278 + (long)puVar20 * 8);
        uStack_2b0 = 0;
        uStack_2a0 = 0x3032000000;
        pcStack_298 = FUN_107da8f04;
        uStack_290 = 0x107da8f14;
        uStack_288 = 0;
        puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_308 = 0xc2000000;
        pcStack_300 = FUN_107daf2d8;
        puStack_2f8 = &UNK_110a0ca00;
        puStack_2a8 = &uStack_2b0;
        _objc_retain(param_11);
        uStack_2f0 = param_11;
        lStack_2e8 = lVar23;
        _objc_retain(param_5);
        puStack_2e0 = param_5;
        _objc_retain(param_12);
        uStack_2d8 = param_12;
        puStack_2b8 = &uStack_2b0;
        _objc_retain(uVar2);
        uStack_2d0 = uVar2;
        _objc_retain(param_6);
        uStack_2c8 = param_6;
        _objc_retain(param_8);
        uStack_2c0 = param_8;
        func_0x000100162d98("APPSTORE",&puStack_310);
        _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
        if (puStack_2a8[5] != 0) {
          lVar25 = lVar23;
          func_0x00010c128360();
          _objc_retainAutoreleasedReturnValue();
          dVar29 = dVar37;
          if (lVar25 == 0) {
LAB_107dae778:
            func_0x00010c0c2640(PTR_PTR_1126bf720);
            dVar34 = dVar29;
            if (param_2 != 0.0) {
              dVar34 = 0.0;
            }
            dVar30 = 0.0;
            if (param_2 != 0.0) {
              dVar30 = dVar32;
            }
            dVar35 = dVar32;
            dVar37 = 0.0;
            if (param_1 != 0.0) {
              dVar35 = dVar30;
              dVar37 = dVar34;
            }
            if (dVar33 != 0.0 && (param_2 != 0.0 && param_1 != 0.0)) {
              dVar35 = 0.0;
              dVar37 = dVar29;
            }
            if (dVar33 != INFINITY && (dVar33 != 0.0 && (param_2 != 0.0 && param_1 != 0.0))) {
              dVar37 = dVar29;
              dVar35 = dVar29 / dVar33;
              if (dVar33 * dVar32 < dVar29) {
                dVar37 = dVar33 * dVar32;
                dVar35 = dVar32;
              }
            }
            dVar37 = 55.0 / dVar37;
            dVar32 = 55.0 / dVar35;
          }
          else {
            lVar6 = lVar23;
            func_0x00010c1280e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar25);
            dVar29 = dVar37;
            if (lVar6 == 0) goto LAB_107dae778;
            func_0x00010c128380(lVar23);
            dVar29 = dVar37;
            func_0x00010c128100(lVar23);
            dVar37 = (dVar27 / dVar36) * dVar37;
            dVar32 = (dVar31 / dVar28) * dVar29;
          }
          lVar25 = lVar23;
          func_0x00010c104260(lVar23);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar25;
          func_0x00010c2be880();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          lVar7 = lVar23;
          dVar34 = dVar29;
          func_0x00010c104260();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c2beba0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar30 = dVar34;
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar25);
          lVar25 = lVar23;
          func_0x00010c0816c0();
          puVar9 = PTR_PTR_1126c41f8;
          if ((int)lVar25 == 0) {
            lVar25 = lVar23;
            func_0x00010c14e120(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            dVar35 = dVar30;
            _objc_release(lVar25);
            lVar25 = lVar23;
            func_0x00010c06c000();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar25;
            func_0x00010bf1f3c0();
            _objc_release(lVar25);
            puVar9 = PTR_PTR_1126b2700;
            _objc_alloc(PTR_PTR_1126b2700);
            func_0x00010c141d40(lVar23);
            func_0x00010c055500((dVar27 / dVar36) * (dVar29 + -0.5) + 0.5,
                                (dVar31 / dVar28) * (dVar34 + -0.5) + 0.5,dVar30,dVar35,puVar9);
            puVar21 = PTR_PTR_1126c41f8;
            func_0x00010c252d00(PTR_PTR_1126c41f8);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR_PTR_1126c4200;
            _objc_alloc(PTR_PTR_1126c4200);
            func_0x00010c02fc00();
            func_0x00010befa120(puVar4);
            _objc_release(puVar10);
            uStack_4c4 = uStack_4c4 | (uint)lVar6;
          }
          else {
            func_0x000109174740(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c279740(puVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar23);
            puVar21 = PTR_PTR_1126c4200;
            _objc_alloc(PTR_PTR_1126c4200);
            func_0x00010c02fc00();
            func_0x00010befa120(puVar3);
          }
          _objc_release(puVar21);
          _objc_release(puVar9);
        }
        _objc_release(uStack_2c0);
        _objc_release(uStack_2c8);
        _objc_release(uStack_2d0);
        _objc_release(uStack_2d8);
        _objc_release(puStack_2e0);
        _objc_release(uStack_2f0);
        __Block_object_dispose(&uStack_2b0,8);
        _objc_release(uStack_288);
        puVar20 = puVar20 + 1;
      } while (puVar5 != puVar20);
      puVar5 = puVar22;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar22);
  puVar22 = param_5;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar22 == (undefined *)0x0) {
    puVar22 = param_5;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar22 == (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar5 = param_5;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_140 = puVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
  }
  else {
    puVar22 = param_5;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar11 = param_9;
  func_0x00010c269d40(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efd80();
  _objc_release(uVar11);
  if (puVar22 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    _objc_retain(puVar22);
    puVar9 = puVar22;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar24 = *plStack_340;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_340 != lVar24) {
            _objc_enumerationMutation(puVar22);
          }
          lVar25 = *(long *)(lStack_348 + (long)puVar21 * 8);
          lVar23 = lVar25;
          func_0x00010c0816c0();
          if ((int)lVar23 != 0) {
            lVar23 = lVar25;
            func_0x00010bf8b600();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar23 == 0) {
              lVar23 = lVar25;
              func_0x00010bf303a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar23 == 0) goto LAB_107daec3c;
              func_0x00010bf303a0(lVar25);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
            }
            else {
              func_0x000108e0e67c(lVar25,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar20);
            }
            _objc_release(lVar25);
          }
LAB_107daec3c:
          puVar21 = puVar21 + 1;
        } while (puVar9 != puVar21);
        puVar9 = puVar22;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar22);
    puVar9 = puVar20;
    func_0x00010bf529e0();
    if (puVar9 == (undefined *)0x0) {
      puVar9 = puVar5;
      func_0x00010bf529e0();
      if (puVar9 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        _dispatch_semaphore_create();
        puVar9 = puVar5;
        func_0x00010bf51e00();
        puVar21 = puVar9;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        uVar11 = param_8;
        func_0x00010bf30560(param_8);
        _objc_retainAutoreleasedReturnValue();
        puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_398 = 0xc2000000;
        uStack_390 = 0x107daf6fc;
        puStack_388 = &UNK_110842e18;
        puStack_380 = puVar10;
        _objc_retain(puVar10);
        func_0x00010c09b380(uVar11);
        _objc_release(uVar11);
        _dispatch_semaphore_wait(puVar10,0xffffffffffffffff);
        _objc_release(puStack_380);
        goto LAB_107daedec;
      }
    }
    else {
      puVar21 = (undefined *)0x0;
      _dispatch_semaphore_create();
      uVar11 = param_10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar11;
      func_0x00010bf2ff00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar20;
      func_0x00010bf51e00(puVar20);
      puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_370 = 0xc2000000;
      pcStack_368 = FUN_107daf6f4;
      puStack_360 = &UNK_110842e18;
      puStack_358 = puVar21;
      _objc_retain(puVar21);
      func_0x00010c09b380(uVar26);
      _objc_release(puVar9);
      _objc_release(uVar26);
      _objc_release(uVar11);
      _dispatch_semaphore_wait(puVar21,0xffffffffffffffff);
      puVar10 = puStack_358;
LAB_107daedec:
      _objc_release(puVar10);
      _objc_release(puVar21);
    }
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    lStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    plStack_3d0 = (long *)0x0;
    _objc_retain(puVar22);
    puVar9 = puVar22;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar24 = *plStack_3d0;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_3d0 != lVar24) {
            _objc_enumerationMutation(puVar22);
          }
          uVar26 = *(undefined8 *)(lStack_3d8 + (long)puVar21 * 8);
          uVar11 = uVar26;
          func_0x00010c0816c0();
          if ((int)uVar11 != 0) {
            uVar11 = 0;
            _dispatch_semaphore_create();
            uStack_2b0 = 0;
            uStack_2a0 = 0x3032000000;
            pcStack_298 = FUN_107da8f04;
            uStack_290 = 0x107da8f14;
            uStack_288 = 0;
            puStack_448 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_440 = 0xc2000000;
            pcStack_438 = FUN_107daf704;
            puStack_430 = &UNK_110a0ca30;
            dVar27 = param_2;
            dVar31 = param_1;
            uStack_428 = uVar26;
            dStack_400 = dVar37;
            dStack_3f8 = dVar32;
            dStack_3f0 = param_1;
            dStack_3e8 = param_2;
            puStack_2a8 = &uStack_2b0;
            _objc_retain(param_6);
            uStack_420 = param_6;
            _objc_retain(param_10);
            uStack_418 = param_10;
            puStack_408 = &uStack_2b0;
            _objc_retain(uVar11);
            uStack_410 = uVar11;
            func_0x000100162d98("APPSTORE",&puStack_448);
            _dispatch_semaphore_wait(uVar11,0xffffffffffffffff);
            if (puStack_2a8[5] != 0) {
              func_0x00010c23d0a0();
              func_0x00010c23d0a0(puStack_2a8[5]);
              puVar10 = PTR_PTR_1126c41f8;
              func_0x000109174614(uVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c279740(puVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar26);
              puVar12 = PTR_PTR_1126c4200;
              _objc_alloc(PTR_PTR_1126c4200);
              func_0x00010c02fc00(dVar27 / param_1,dVar31 / param_2);
              func_0x00010befa120(puVar3);
              _objc_release(puVar12);
              _objc_release(puVar10);
            }
            _objc_release(uStack_410);
            _objc_release(uStack_418);
            _objc_release(uStack_420);
            __Block_object_dispose(&uStack_2b0,8);
            _objc_release(uStack_288);
            _objc_release(uVar11);
          }
          puVar21 = puVar21 + 1;
        } while (puVar9 != puVar21);
        puVar9 = puVar22;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar22);
    _objc_release(puVar20);
    _objc_release(puVar5);
  }
  puVar5 = param_5;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    uVar11 = 0;
    _dispatch_semaphore_create();
    puVar5 = param_5;
    func_0x00010bf11400(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_488 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_480 = 0xc2000000;
    pcStack_478 = FUN_107daf8cc;
    puStack_470 = &UNK_110a0ca60;
    dStack_458 = dVar37;
    dStack_450 = dVar32;
    _objc_retain(puVar3);
    puStack_468 = puVar3;
    uStack_460 = uVar11;
    _objc_retain(uVar11);
    func_0x00010808ad8c(puVar5,&puStack_488);
    _objc_release(puVar5);
    _dispatch_semaphore_wait(uVar11,0xffffffffffffffff);
    _objc_release(uStack_460);
    _objc_release(puStack_468);
    _objc_release(uVar11);
  }
  uStack_2b0 = uStack_2b0 & 0xffffffffffffff00;
  func_0x00010c2433e0(param_6);
  func_0x00010bee9000();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
LAB_107daf15c:
    if ((uStack_4c4 & 1) != 0) goto LAB_107daf164;
  }
  else {
    if ((char)uStack_2b0 == '\x01') {
      func_0x00010befa160(puVar3);
      goto LAB_107daf15c;
    }
LAB_107daf164:
    func_0x00010befa160(puVar3);
  }
  if ((param_3 != 0) && ((uStack_2b0 & 1) == 0)) {
    func_0x00010befa160(puVar3);
  }
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  _objc_release(puVar22);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2b0,8);
  __Unwind_Resume();
  uVar13 = *(ulong *)(param_5 + 0x20);
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(ulong *)(param_5 + 0x20);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010c0833e0();
  if ((uVar17 & 1) == 0) {
    uVar17 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar17;
    func_0x00010c06f740();
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    if ((int)uVar16 != 0) {
      uVar15 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010bfaebe0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010bfedce0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar15;
      func_0x00010bf5cd00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar11);
      _objc_release(uVar15);
      uVar17 = *(ulong *)(param_5 + 0x20);
      func_0x00010bf5d860();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      if ((uVar14 != 0) && (uVar17 = uVar15, func_0x00010bf2d360(), (int)uVar17 != 0)) {
        uVar11 = *(undefined8 *)(param_5 + 0x40);
        _objc_retain(uVar11);
        func_0x00010bfe92a0(uVar14);
        _objc_release(uVar11);
        _objc_release(uVar15);
        goto LAB_107daf60c;
      }
      goto LAB_107daf33c;
    }
  }
  else {
LAB_107daf33c:
    _objc_release(uVar15);
    _objc_release(uVar14);
  }
  uVar14 = *(ulong *)(param_5 + 0x20);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010c0833e0();
  if ((uVar17 & 1) == 0) {
    lVar24 = *(long *)(param_5 + 0x28);
    func_0x00010c27dde0();
    if (lVar24 != 0x3cedc99) {
      func_0x00010c27dde0(*(undefined8 *)(param_5 + 0x28));
    }
  }
  _objc_release(uVar15);
  _objc_release(uVar14);
  puVar3 = PTR_PTR_1126b2710;
  uVar2 = *(undefined8 *)(param_5 + 0x48);
  func_0x00010c23fb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_5 + 0x48);
  func_0x00010c2437a0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_5 + 0x48);
  func_0x00010c0c9a40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010bfaebe0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(ulong *)(param_5 + 0x40);
  _objc_retain(uVar14);
  func_0x00010bfe7b80(puVar3);
  _objc_release(uVar11);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar26);
  _objc_release(uVar2);
LAB_107daf60c:
  _objc_release(uVar14);
  _objc_release(uVar13);
  return;
}



/* Entry: 107daf2d8; end: 107daf63b;  */

void FUN_107daf2d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0833e0();
  if ((uVar7 & 1) == 0) {
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c06f740();
    _objc_release(uVar7);
    _objc_release(uVar13);
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      uVar13 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfaebe0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bfedce0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar13;
      func_0x00010bf5cd00(uVar13,param_2,uVar1,uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(uVar13);
      uVar7 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf5d860();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if ((uVar4 != 0) &&
         (uVar7 = uVar13, func_0x00010bf2d360(uVar13,param_2,uVar4), (int)uVar7 != 0)) {
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_107daf63c;
        puStack_78 = &UNK_11088cc20;
        uStack_68 = *(undefined8 *)(param_1 + 0x58);
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar6);
        uStack_70 = uVar6;
        func_0x00010bfe92a0(uVar4,param_2,uVar13,1,9,uVar1,&puStack_90);
        _objc_release(uStack_70);
        _objc_release(uVar13);
        goto LAB_107daf60c;
      }
      goto LAB_107daf33c;
    }
  }
  else {
LAB_107daf33c:
    _objc_release(uVar13);
    _objc_release(uVar4);
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0833e0();
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    func_0x00010c27dde0();
    if (lVar8 != 0x3cedc99) {
      func_0x00010c27dde0(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(uVar13);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b2710;
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c23fb20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2437a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0c9a40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfaebe0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107daf698;
  puStack_a8 = &UNK_11088cc20;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_98 = *(undefined8 *)(param_1 + 0x58);
  uVar13 = *(ulong *)(param_1 + 0x40);
  _objc_retain(uVar13);
  uStack_a0 = uVar13;
  func_0x00010bfe7b80(puVar2,param_2,uVar14,uVar9,uVar10,uVar11,uVar6,uVar1,&puStack_c0);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar4 = uStack_a0;
LAB_107daf60c:
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 107daf63c; end: 107daf6f3;  */

void FUN_107daf63c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107daf6f4; end: 107daf703;  */

void FUN_107daf6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107daf704; end: 107daf86f;  */

void FUN_107daf704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x000108e380fc(uVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + 0x48);
  uVar7 = *(undefined8 *)(param_5 + 0x50);
  func_0x000100841590(uVar6,uVar7);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c06e8e0(uVar2);
  uVar3 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2ff00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000108e23d30(*(undefined8 *)(param_5 + 0x58),*(undefined8 *)(param_5 + 0x60),uVar6,uVar7,
                      param_3,param_4,uVar1,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_5 + 0x38);
  uVar4 = uVar2;
  _objc_retain(uVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  return;
}



/* Entry: 107daf870; end: 107daf8cb;  */

void FUN_107daf870(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107daf8cc; end: 107dafa1b;  */

void FUN_107daf8cc(double param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0(uVar1);
      dVar7 = *(double *)(param_2 + 0x30);
      param_1 = param_1 / dVar7;
      func_0x00010c23d0a0(uVar1);
      dVar6 = *(double *)(param_2 + 0x38);
      puVar3 = PTR_PTR_1126c41f8;
      func_0x00010c279740(PTR_PTR_1126c41f8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c02fc00(param_1,dVar7 / dVar6);
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar5 = uVar5 + 1;
      uVar1 = param_3;
      func_0x00010bf529e0();
    } while (uVar5 < uVar1);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x28));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dafa1c; end: 107daffa3; +[SnapVideoFilter _videoTrackedImageForGeoFilterWithOverlay:snapSize:hasAnimatedSticker:semaphore:belowStickers:userSession:] */

void FUN_107dafa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_2a8;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = param_5;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_107daff08;
    }
  }
  else {
    _objc_release(puVar2);
  }
  puStack_2a8 = puVar1;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_2a8;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010bfc1320(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_2a8);
    _objc_release(puVar3);
    puStack_2a8 = puVar2;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  puVar3 = puVar1;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar12 = *plStack_1c0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_1c0 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        uVar11 = *(undefined8 *)(lStack_1c8 + (long)puVar13 * 8);
        func_0x00010bfe5e40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar2);
        _objc_release(uVar11);
        puVar13 = puVar13 + 1;
      } while (puVar4 != puVar13);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = puStack_2a8;
  func_0x00010bf529e0();
  do {
    puVar4 = puVar3;
    if ((long)(puVar4 + -1) < 0) break;
    puVar3 = puStack_2a8;
    func_0x00010c0dfd40(puStack_2a8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar13;
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f3c0();
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar3);
    puVar3 = puVar4 + -1;
  } while ((int)puVar6 == 0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (-1 < (long)(puVar4 + -1)) {
    puVar13 = (undefined *)0x0;
    do {
      puVar5 = puStack_2a8;
      func_0x00010c0dfd40(puStack_2a8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0dff20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c14c720(puVar3);
      _objc_release(puVar6);
      puVar13 = puVar13 + 1;
    } while (puVar4 != puVar13);
  }
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    uVar11 = 0;
  }
  else {
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x3032000000;
    pcStack_1e8 = FUN_107da8f04;
    uStack_1e0 = 0x107da8f14;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puStack_1d8 = puVar4;
    _objc_retain(puVar3);
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar12 = *plStack_230;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          lVar7 = *(long *)(lStack_238 + (long)puVar13 * 8);
          func_0x000108d3ee18();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 != 0) {
            puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_288 = 0xc2000000;
            pcStack_280 = FUN_107daffa4;
            puStack_278 = &UNK_110a0cac0;
            _objc_retain(lVar7);
            lStack_270 = lVar7;
            _objc_retain(param_9);
            uStack_268 = param_9;
            puStack_258 = &uStack_200;
            uStack_250 = param_1;
            uStack_248 = param_2;
            _objc_retain(param_7);
            uStack_260 = param_7;
            func_0x000100162d98("APPSTORE",&puStack_290);
            _dispatch_semaphore_wait(param_7,0xffffffffffffffff);
            _objc_release(uStack_260);
            _objc_release(uStack_268);
            _objc_release(lStack_270);
          }
          _objc_release(lVar7);
          puVar13 = puVar13 + 1;
        } while (puVar4 != puVar13);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    uVar11 = puStack_1f8[5];
    _objc_retain(uVar11);
    __Block_object_dispose(&uStack_200,8);
    _objc_release(puStack_1d8);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_2a8);
LAB_107daff08:
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_200);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2718;
  _objc_alloc();
  func_0x00010c0044c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(param_5 + 0x28);
  _objc_retain(lVar12);
  uVar14 = *(undefined8 *)(param_5 + 0x30);
  _objc_retain(uVar14);
  uVar11 = *(undefined8 *)(param_5 + 0x30);
  _objc_retain(uVar11);
  puVar3 = puVar2;
  func_0x00010bfa7640(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = lVar7;
    puVar1 = puVar3;
    _objc_retain(lVar7);
    iVar8 = (int)lVar9;
    _objc_retain(puVar3);
    lVar9 = lVar7;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c3c88;
      _objc_alloc();
      puVar1 = puVar2;
      func_0x00010c0140e0(0,0,*(undefined8 *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x40));
      puVar13 = puVar4;
      func_0x00010c29b880();
      _objc_retainAutoreleasedReturnValue();
      if (puVar13 != (undefined *)0x0) {
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x30) + 8) + 0x28);
        puVar5 = puVar4;
        func_0x00010c29b880();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010befa160(uVar11);
        _objc_release(puVar5);
      }
      _objc_release(puVar13);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    _dispatch_semaphore_signal(*(undefined8 *)(lVar12 + 0x28));
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      if ((((ulong)puVar1 & 1) == 0) && (iVar8 != 0)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(lVar7 + 0x20));
      return;
    }
    return;
  }
  return;
}



/* Entry: 107daffa4; end: 107db0113;  */

void FUN_107daffa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar8 = (undefined4)((ulong)param_2 >> 0x20);
  iVar7 = (int)param_2;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2718;
  _objc_alloc();
  func_0x00010c0044c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar14);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar12);
  puVar9 = puVar2;
  func_0x00010bfa7640(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar12);
  _objc_release(uVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = CONCAT44(uVar8,iVar7);
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar9;
  _objc_retain(CONCAT44(uVar8,iVar7));
  _objc_retain(puVar9);
  lVar3 = lVar10;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c3c88;
    _objc_alloc();
    puVar1 = puVar2;
    func_0x00010c0140e0(0,0,*(undefined8 *)(lVar13 + 0x38),*(undefined8 *)(lVar13 + 0x40));
    puVar5 = puVar4;
    func_0x00010c29b880();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x30) + 8) + 0x28);
      puVar6 = puVar4;
      func_0x00010c29b880();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010befa160(uVar12);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(lVar13 + 0x28));
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  if ((((ulong)puVar1 & 1) == 0) && (iVar7 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(lVar10 + 0x20));
  return;
}



/* Entry: 107db0114; end: 107db02b3;  */

void FUN_107db0114(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  iVar6 = (int)param_2;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c3c88;
    _objc_alloc();
    puVar7 = puVar2;
    func_0x00010c0140e0(0,0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    puVar4 = puVar3;
    func_0x00010c29b880();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      puVar5 = puVar3;
      func_0x00010c29b880();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010befa160(uVar9);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if ((((ulong)puVar7 & 1) == 0) && (iVar6 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 107db02b4; end: 107db02c7;  */

void FUN_107db02b4(long param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) == 0) && (param_2 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107db02c8; end: 107db0b3f; -[SnapVideoFilter _prepareSpectaclesMedia:snap:snapOverlay:isExporting:userSession:videoTargetSize:respectSnapOrientation:spectaclesExportFormat:primaryCamera:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:previewCameraSourceOverlayProvider:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:] */

undefined1  [16]
FUN_107db02c8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
             long param_6,long param_7,uint param_8,undefined8 param_9,int param_10,long param_11,
             long param_12,undefined8 param_13,undefined4 param_14,undefined4 param_15,
             undefined8 param_16,undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  
  dVar12 = param_1;
  dVar14 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_17);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_16);
  _objc_retain(param_9);
  lVar2 = param_7;
  FUN_107ff9c0c(param_7,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  if (lVar3 - 1U < 2) {
    lVar3 = lVar2;
    func_0x00010c130740(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(param_3);
    _objc_release(lVar3);
    dVar11 = INFINITY;
    func_0x00010c186240(param_3);
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    dVar12 = 0.0;
    if (dVar11 != 0.0) {
      if (dVar14 == 0.0) {
        dVar12 = INFINITY;
      }
      else {
        dVar12 = dVar11 / dVar14;
      }
    }
    func_0x00010c222080(param_3);
LAB_107db0478:
    func_0x00010c2220a0(param_3);
  }
  else if (lVar3 == 0) {
    dVar11 = INFINITY;
    func_0x00010c186240(param_3);
    dVar12 = dVar11;
    if (param_11 == 0) {
      func_0x00010c186260(param_3);
      func_0x000109023974(param_6);
      dVar12 = 0.0;
      if (dVar11 != 0.0) {
        if (dVar14 == 0.0) {
          dVar12 = INFINITY;
        }
        else {
          dVar12 = dVar11 / dVar14;
        }
      }
      func_0x00010c222080(param_3);
    }
    if (param_10 != 0) {
      func_0x00010c0ed100(param_6);
    }
    goto LAB_107db0478;
  }
  func_0x00010c21d9a0(param_3);
  func_0x00010c1f5d00(param_3);
  lVar3 = param_6;
  func_0x000109023714();
  if ((int)lVar3 != 0) {
    uVar4 = param_13;
    func_0x00010bf0b480(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c29ae80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0d9500();
    uVar7 = uVar5;
    func_0x00010bf9ee60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_17;
    func_0x00010c269d40(param_17);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c249820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if ((param_8 == 0) || (param_11 != 7)) {
      uVar4 = uVar5;
      func_0x00010bfb2080(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb2a0(param_3);
      _objc_release(uVar4);
    }
    else {
      uVar4 = uVar5;
      func_0x00010c1245c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb2a0(param_3);
      _objc_release(uVar4);
      if (param_12 == 2) {
        dVar12 = -57.0;
      }
      else {
        if (param_12 != 1) goto LAB_107db05f4;
        dVar12 = 57.0;
      }
      func_0x00010c207ae0(param_3);
    }
LAB_107db05f4:
    _objc_release(uVar5);
    _objc_release(uVar7);
  }
  puVar8 = PTR_PTR_1126b26c0;
  uVar4 = param_17;
  func_0x00010c269d40(param_17);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c9f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109023974(param_6);
  dVar11 = dVar12;
  func_0x00010c29b600(param_3);
  if (dVar11 == 0.0) {
    dVar13 = 0.0;
  }
  else if (dVar11 == INFINITY) {
    dVar14 = 0.0;
    dVar13 = dVar12;
  }
  else {
    dVar13 = dVar11 * dVar14;
    if (dVar12 <= dVar13) {
      dVar14 = dVar12 / dVar11;
      dVar13 = dVar12;
    }
  }
  lVar3 = param_3;
  func_0x00010bf86d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29b8e0(dVar13,dVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_9);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (param_8 == 0) {
    lVar3 = param_6;
    func_0x00010902339c(param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    dVar13 = 0.0;
    lVar6 = lVar3;
    func_0x000109024c88(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40(param_3);
    _objc_release(lVar6);
    if (param_5 != 0 || puVar8 != (undefined *)0x0) {
      lVar6 = param_5;
      func_0x00010c1511c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7660(param_3);
      _objc_release(lVar6);
      lVar6 = param_5;
      func_0x00010c0c5d00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0(param_3);
      _objc_release(lVar6);
      goto LAB_107db0938;
    }
  }
  else {
    lVar3 = param_6;
    func_0x00010b5fa088();
    if (lVar3 - 0xbU < 2) {
      lVar3 = param_5;
      func_0x00010c1511c0(param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      bVar1 = 1 < lVar3 - 9U;
      func_0x000109023974(param_6);
      lVar3 = param_5;
      func_0x00010c1511c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_5;
      func_0x00010c0c5d00(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010854478c(dVar13,dVar14,0x3ff0000000000000,0x3ff0000000000000,lVar3,lVar6,0,bVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar3);
      lVar6 = param_3;
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar3 = lVar9;
      if (lVar6 != 0) {
        func_0x00010c29b600(param_3);
        func_0x0001085448fc(lVar9,bVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
      }
    }
    func_0x00010c1d75e0(param_3);
    func_0x00010c1d7660(param_3);
LAB_107db0938:
    func_0x00010c222140(param_3);
  }
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c249940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c299740();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = lVar6 != 0;
  if (lVar6 != 0) {
    lVar9 = param_6;
    func_0x000109023c14();
    _objc_release(lVar6);
    _objc_release(lVar3);
    if ((int)lVar9 == 0) {
      bVar1 = false;
      goto LAB_107db09ec;
    }
    lVar3 = param_6;
    FUN_107ff9fe0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(param_3);
    _objc_release(lVar6);
  }
  _objc_release(lVar3);
LAB_107db09ec:
  lVar3 = param_7;
  FUN_107ff7990();
  if ((int)lVar3 != 0) {
    func_0x000109023974(param_6);
    lVar3 = param_6;
    func_0x00010c2a5040(param_6);
    lVar6 = param_6;
    func_0x00010bfe0640(param_6);
    lVar9 = param_3;
    func_0x00010c0ef960(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_7;
    FUN_107ff7d2c(dVar13,dVar14,(double)(int)lVar3,(double)(int)lVar6,param_7,lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d75e0(param_3);
    _objc_release(lVar10);
    _objc_release(lVar9);
    func_0x00010c21d9a0(param_3);
  }
  lVar3 = param_6;
  func_0x000109023acc();
  if (!bVar1 && (param_8 & (uint)lVar3) == 0) {
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    param_1 = *(double *)PTR__CGSizeZero_110347620;
  }
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(param_17);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 107db0b40; end: 107db0c0b; -[SnapVideoFilter _basicVideoCheckForAVAsset:completionBlock:] */

void FUN_107db0b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107db0c0c;
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



/* Entry: 107db0c0c; end: 107db0d7b;  */

void FUN_107db0c0c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  double dVar11;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f30383e);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_60 = puVar2;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_58 = puVar3;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  dVar11 = 1.60807493534087e-314;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107db0d7c;
  puStack_78 = &UNK_11084aaa8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar9;
  _objc_retain(uVar8);
  uStack_68 = uVar8;
  func_0x00010c09c640(uVar9);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_107db0d7c;
  iVar1 = (int)*(undefined8 *)(puVar5 + 0x20);
  puStack_c0 = puVar4;
  puStack_b8 = puVar3;
  uStack_b0 = uVar9;
  uStack_a8 = uVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c07a2c0();
  if (iVar1 == 0) {
    bVar10 = false;
  }
  else {
    lVar6 = *(long *)(puVar5 + 0x20);
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      bVar10 = false;
    }
    else {
      if (*(long *)(puVar5 + 0x20) == 0) {
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_d8);
      }
      _CMTimeGetSeconds(&uStack_d8);
      bVar10 = 2.220446049250313e-16 < dVar11;
    }
    _objc_release(lVar6);
  }
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_107db0e8c;
  puStack_f8 = &UNK_1108523f8;
  uVar9 = *(undefined8 *)(puVar5 + 0x28);
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(puVar5 + 0x20);
  uStack_e8 = uVar9;
  uStack_e0 = bVar10;
  _objc_retain(uVar8);
  uStack_f0 = uVar8;
  func_0x000100162d98("APPSTORE",&puStack_110);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  return;
}



/* Entry: 107db0d7c; end: 107db0e8b;  */

void FUN_107db0d7c(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010c07a2c0();
  if (iVar1 == 0) {
    bVar6 = false;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      bVar6 = false;
    }
    else {
      if (*(long *)(param_2 + 0x20) == 0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_48);
      }
      _CMTimeGetSeconds(&uStack_48);
      bVar6 = 2.220446049250313e-16 < param_1;
    }
    _objc_release(lVar2);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107db0e8c;
  puStack_68 = &UNK_1108523f8;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uStack_58 = uVar5;
  uStack_50 = bVar6;
  _objc_retain(uVar4);
  uStack_60 = uVar4;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  return;
}


