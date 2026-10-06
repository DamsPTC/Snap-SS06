/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d661c8; end: 105d663d3; -[SCGalleryLogger memoriesSnapMetricInfoWithSnapDocWrapper:snapOverlay:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:storyCount:smartShared:userContext:isStitched:totalDuration:memSessionId:snapDocEditorServices:viewSource:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:] */

void FUN_105d661c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_stack_fffffffffffffee0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  _objc_retain(param_24);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde9720(param_1,param_2,param_3,param_4,uVar1,param_5,param_6,param_7,
                      CONCAT71(CONCAT61(CONCAT51(CONCAT41(uVar4,param_12),param_9._1_1_),
                                        (undefined1)param_9),param_8),param_11,param_14,param_17,
                      param_18,param_19,0,param_20,param_21,param_22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_24);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c3358;
  _objc_alloc(PTR_PTR_1126c3358);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bf00940(param_3);
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a720(puVar2,param_2,0,0,puVar3,param_1,0,0,0xffffffffffffffff);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d663d4; end: 105d671d3; -[SCGalleryLogger _convertToSnapCommonLoggingFromSnap:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:smartShared:storyCount:userContext:memSessionId:snapDocEditorServices:viewSource:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:] */

void FUN_105d663d4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000050);
  uVar1 = in_stack_00000058;
  _objc_retain(in_stack_00000058);
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fde868(param_4);
  func_0x000107fde8cc(param_4);
  func_0x00010c2a83a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8360(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcf00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc940(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab260(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((in_stack_00000010 == 0xd) || (param_9._2_1_ != '\0')) {
    func_0x00010c2b9b80(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar6 = param_1;
    func_0x00010bf5f400(param_1);
    lVar2 = param_1;
    func_0x00010c0c8780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fde5f4(param_3,lVar6,lVar2);
    func_0x00010c2b9b80(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  func_0x00010bebcfa0(param_1);
  func_0x00010c2b3b00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x000107fdccc8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9c00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010bf8b160(param_3);
  func_0x00010c2b3780(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfed740(param_3);
  func_0x00010c2b9800(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010b5f7a24(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9240(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x000107fdebbc(param_4);
  func_0x00010c2aca40(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107fdec84(param_4);
  func_0x00010c2a9fa0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107fde9ec(param_4);
  func_0x00010c2ab6a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd000(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6e20(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b68e0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_8;
  func_0x00010bf446e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4060(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar6 = param_4;
  func_0x000107fdee3c(param_4);
  func_0x000108442c94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf40(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x000107fdef5c(param_4);
  func_0x000108442cdc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae1a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x000107fdf008(param_4);
  func_0x00010c2aa100(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2ba100(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x000107fdf048(param_4);
  func_0x00010c2ba260(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107fdeee4(param_4);
  func_0x00010c2adfa0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010bfaebe0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140160();
  _objc_release(lVar6);
  func_0x00010c2ae060(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010b5f57a8(in_stack_00000010);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3cc0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c2b9460(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010b5fa088();
  if (lVar6 - 2U < 0xb) {
    lVar6 = param_3;
    func_0x000107fde6f0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2080(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010bf70720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2060(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  lVar6 = param_4;
  func_0x00010c2453c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b99a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010bf10220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c40(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bee8260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc500(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x000107fdf170(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2740(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010c2aa1c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b5fb758();
  func_0x00010c2b3820(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108dfcbcc(in_stack_00000010);
  func_0x00010c2aeba0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0(param_8);
  lVar6 = param_1;
  func_0x00010bf6ef40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac320(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010c2ba560(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b5fa088(param_3);
  func_0x00010b5f57cc();
  func_0x00010c2aeb20(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0ed100();
  func_0x00010c2b5080(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfbdda0(param_5);
  func_0x000108dfcb04();
  func_0x00010c2ad4e0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c07b240(param_5);
  func_0x00010c2b3de0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfd9dc0(param_3);
  func_0x00010c2af1e0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010bf9e140(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad420(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b93a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_5;
  func_0x00010bf97200(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad440(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_5;
  func_0x00010bfa34a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adbe0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_5;
  func_0x00010bfa3440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adbc0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_5;
  func_0x00010bf3d240();
  lVar5 = (long)(int)lVar6;
  func_0x00010b5f5ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3ca0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa7c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  lVar6 = 0;
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126b25c0;
    _objc_alloc(PTR_PTR_1126b25c0);
    lVar6 = param_3;
    func_0x00010c23ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar4);
    _objc_release(lVar6);
    lVar6 = param_5;
    func_0x00010bf3d240();
    lVar6 = (long)(int)lVar6;
    func_0x00010b5f5e50(lVar6,puVar4,in_stack_00000020);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fde78c(puVar4,uVar1);
    _objc_release(puVar4);
  }
  func_0x00010c2b43a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010c26afc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bae20(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bf3f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa860(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adba0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x000107fdf3b0(param_4);
  func_0x00010c2b9160(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3be0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar2 == 5) {
    lVar2 = param_5;
    func_0x00010bf977c0(param_5);
    lVar7 = (long)(int)lVar2;
    func_0x00010b5f5864(lVar7,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeaa0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010bf9e140(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad420(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  lVar2 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x000107fdce9c(uVar1,param_3);
  }
  else {
    lVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c2b2ca0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = param_4;
  func_0x00010c096600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c096600(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6760(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  func_0x00010bf8a880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c2acb20(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = param_3;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_105d67134;
  lVar7 = lVar2;
  func_0x00010bf8a400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2acae0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar2;
  func_0x00010bf8a7e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2acb00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c2b9b80(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010bf977c0(param_5);
  lVar8 = (long)(int)lVar7;
  func_0x00010b5f5864(lVar8,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aeaa0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c08fa60();
  if (lVar9 == 0) {
    lVar9 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08fa60();
    _objc_release(lVar9);
    _objc_release(lVar7);
    if (lVar10 != 0) {
      lVar7 = lVar2;
      func_0x00010c094540(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(uVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_105d67120;
    }
  }
  else {
LAB_105d67120:
    _objc_release(lVar7);
  }
  _objc_release(lVar8);
LAB_105d67134:
  uVar3 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d671d4; end: 105d6774f; -[SCGalleryLogger _convertToSnapCommonLoggingFromPHAsset:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:storyCount:isInsideStory:userContext:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:importedContentId:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:] */

void FUN_105d671d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  _objc_retain(param_4);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000058);
  uVar1 = param_7;
  _objc_retain(param_7);
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_4);
  func_0x00010c2b3b00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3820(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107fdf54c(param_4);
  func_0x00010c2b3780((float)(double)CONCAT44(uVar7,uVar6),uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9800(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf5a700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9240(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2bcf80(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd000(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6e20(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab260(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b68e0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010bf446e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4060(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2b9460(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b5f57a8(in_stack_00000010);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3cc0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x000108dfcbcc(in_stack_00000010);
  func_0x00010c2aeba0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0(param_7);
  _objc_release(param_7);
  func_0x00010bf6ef40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac320(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2ba560(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  func_0x00010c2aeb20(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0fce40();
  func_0x00010c0fcaa0();
  func_0x00010c2b5080(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3de0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af1e0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3be0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3c00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc940(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afb40(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (in_stack_00000030 == 0) {
    func_0x00010c2ad4e0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar4 = in_stack_00000030;
    func_0x00010c0fa980();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfecde0();
    if (lVar5 != 0x7fffffffffffffff) {
      lVar5 = in_stack_00000030;
      func_0x00010c0fa980(in_stack_00000030);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0();
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    func_0x00010c2b3ca0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = in_stack_00000030;
    func_0x00010b5fadbc(in_stack_00000030);
    func_0x00010b5f5864();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeaa0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = in_stack_00000030;
    func_0x00010bfe5ec0(in_stack_00000030);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad440(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ad420(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf97860(in_stack_00000030);
    func_0x000108dfcb04();
    func_0x00010c2ad4e0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  uVar2 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d67750; end: 105d68213; -[SCGalleryLogger _convertToSnapCommonLoggingFromSnapDocWrapper:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:smartShared:storyCount:userContext:memSessionId:snapDocEditorServices:viewSource:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:] */

void FUN_105d67750(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined4 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000050;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000050);
  _objc_retain(param_9);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fde868(param_5);
  func_0x000107fde8cc(param_5);
  func_0x00010c2a83a0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8360(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcf00(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab260(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_10._2_1_ == '\0') {
    uVar3 = param_2;
    func_0x00010bf5f400(param_2);
    uVar4 = param_2;
    func_0x00010c0c8780(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fde5f4(lVar2,uVar3,uVar4);
    func_0x00010c2b9b80(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    func_0x00010c2b9b80(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf0efe0();
  func_0x00010c2b3b00(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x000107fdccc8(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9c00(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c276460(param_4);
  _objc_release(param_4);
  func_0x00010c2b3780(param_1,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9800(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9240(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x000107fdebbc(param_5);
  func_0x00010c2aca40(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107fdec84(param_5);
  func_0x00010c2a9fa0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107fde9ec(param_5);
  func_0x00010c2ab6a0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd000(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6e20(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b68e0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_9;
  func_0x00010bf446e0(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4060(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar7 = param_5;
  func_0x000107fdee3c(param_5);
  func_0x000108442c94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf40(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_5;
  func_0x000107fdef5c(param_5);
  func_0x000108442cdc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae1a0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x000107fdf008(param_5);
  func_0x00010c2aa100(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010c2553e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2ba100(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x000107fdf048(param_5);
  func_0x00010c2ba260(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107fdeee4(param_5);
  func_0x00010c2adfa0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010bfaebe0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140160();
  _objc_release(lVar7);
  func_0x00010c2ae060(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010b5f57a8(in_stack_00000010);
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3cc0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c2b9460(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc940(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010c2453c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b99a0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_5;
  func_0x00010bf10220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c40(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar3 = param_2;
  func_0x00010bee8260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc500(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar7 = param_5;
  func_0x000107fdf170(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2740(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010b5fb758();
  func_0x00010c2b3820(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108dfcbcc(in_stack_00000010);
  func_0x00010c2aeba0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0(param_9);
  _objc_release(param_9);
  func_0x00010bf6ef40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac320(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2ba560(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b5fa088(lVar2);
  func_0x00010b5f57cc();
  func_0x00010c2aeb20(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5080(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfbdda0(param_6);
  func_0x000108dfcb04();
  func_0x00010c2ad4e0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3de0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfd9dc0(lVar2);
  func_0x00010c2af1e0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf9e140(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad420(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c2b93a0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf97200(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad440(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_6;
  func_0x00010bf3d240(param_6);
  lVar6 = (long)(int)lVar7;
  func_0x00010b5f5ca0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3ca0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa7c0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126b25c0;
    _objc_alloc(PTR_PTR_1126b25c0);
    lVar7 = lVar2;
    func_0x00010c23ff80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar5);
    _objc_release(lVar7);
    lVar7 = param_6;
    func_0x00010bf3d240(param_6);
    lVar7 = (long)(int)lVar7;
    func_0x00010b5f5e50(lVar7,puVar5,in_stack_00000020);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fde78c(puVar5,lVar1);
    _objc_release(puVar5);
  }
  func_0x00010c2b43a0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar8 = param_6;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    lVar8 = param_6;
    func_0x00010c26afc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bae20(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  lVar8 = param_6;
  func_0x00010bf3f9e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa860(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  func_0x00010c2b3be0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar8 = param_6;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar8 == 5) {
    lVar8 = param_6;
    func_0x00010bf977c0(param_6);
    lVar8 = (long)(int)lVar8;
    func_0x00010b5f5864(lVar8,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeaa0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = param_6;
    func_0x00010bf9e140(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad420(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  lVar8 = param_5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 == 0) {
    func_0x000107fdce9c(lVar1,lVar2);
  }
  else {
    lVar8 = param_5;
    func_0x00010c094540(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
    func_0x00010c2b2ca0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar8 = lVar1;
  func_0x00010bf21f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105d68214; end: 105d683f3; -[SCGalleryLogger createDirectStorySend:recipientCount:] */

void FUN_105d68214(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4590;
  _objc_opt_new(PTR_PTR_1126c4590);
  func_0x00010c1e88a0();
  func_0x00010c2056c0(puVar1);
  func_0x00010c226c40(puVar1);
  lVar2 = param_3;
  func_0x00010bfbd240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c203cc0(puVar1);
  _objc_release(lVar2);
  func_0x00010c1a1aa0(puVar1);
  func_0x00010c276460(param_3);
  func_0x00010c205880(puVar1);
  lVar2 = param_3;
  func_0x00010c259a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  _objc_release(lVar2);
  if (lVar3 == 5) {
    lVar2 = param_3;
    func_0x00010c259a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf977c0();
    lVar4 = (long)(int)lVar3;
    lVar3 = param_3;
    func_0x00010c259a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f5864(lVar4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c259a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c259a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  _objc_release(lVar2);
  if (lVar3 == 2) {
    func_0x00010c20ddc0(puVar1);
    func_0x00010c20de00(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d683f4; end: 105d6856f; -[SCGalleryLogger galleryBatchSendWithTotalCount:smartShareCount:meoCount:contextMenuSource:sendToFriend:mischiefIds:postToStory:includeSpotlight:retryCount:latencyMs:failureReason:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:] */

void FUN_105d683f4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  long param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c4598;
  _objc_retain(param_13);
  _objc_retain(param_9);
  _objc_opt_new(puVar1);
  func_0x000108dfcbcc(param_7);
  func_0x00010c1fc3e0(puVar1,param_3,param_7);
  lVar2 = param_9;
  func_0x00010bf529e0(param_9);
  _objc_release(param_9);
  func_0x00010bf6ef40(param_2,param_3,param_8,lVar2 != 0,(undefined1)param_10,param_10._1_1_,
                      param_14,param_15,param_16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c480(puVar1,param_3,param_2);
  _objc_release(param_2);
  func_0x00010c2181e0(puVar1,param_3,param_4);
  func_0x00010c203700(puVar1,param_3,param_5);
  func_0x00010c1c6bc0(puVar1,param_3,param_6);
  func_0x00010c1ed9a0(puVar1,param_3,param_12);
  func_0x00010c1b92e0(puVar1,param_3,(long)(param_1 * 1000.0));
  func_0x00010c19a060(puVar1,param_3,param_13);
  _objc_release(param_13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d68570; end: 105d6876f; -[SCGalleryLogger createStoryStoryPost:] */

void FUN_105d68570(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c45a0;
  _objc_opt_new(PTR_PTR_1126c45a0);
  lVar2 = param_3;
  func_0x00010c259a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240();
  _objc_release(lVar2);
  func_0x00010c2056c0(puVar1);
  func_0x00010c1a1aa0(puVar1);
  func_0x00010c226c40(puVar1);
  lVar2 = param_3;
  func_0x00010bfbd240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c203cc0(puVar1);
  _objc_release(lVar2);
  func_0x00010c276460(param_3);
  func_0x00010c205880(puVar1);
  lVar2 = param_3;
  func_0x00010c259a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  _objc_release(lVar2);
  if (lVar3 == 5) {
    lVar2 = param_3;
    func_0x00010c259a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf977c0();
    lVar4 = (long)(int)lVar3;
    lVar3 = param_3;
    func_0x00010c259a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f5864(lVar4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c259a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c259a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  _objc_release(lVar2);
  if (lVar3 == 2) {
    func_0x00010c20ddc0(puVar1);
    func_0x00010c20de00(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d68770; end: 105d68b17; -[SCGalleryLogger browseSnapViewWithGallerySnap:snapOverlay:memSessionId:entry:] */

void FUN_105d68770(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2350;
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010be15dc0(param_1);
  lVar2 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf30e80();
  if (((int)lVar2 == 2) || (lVar2 = param_3, func_0x00010bf30e80(), (int)lVar2 == 1)) {
    func_0x00010c226140(puVar1);
  }
  lVar2 = param_3;
  func_0x00010b5f9b0c();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010b5f9b9c(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192ce0(puVar1);
    _objc_release(lVar2);
  }
  if (param_5 != 0) {
    func_0x00010c1c58e0(puVar1);
  }
  lVar2 = param_1;
  func_0x00010bf8a880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c191e80(puVar1);
  }
  lVar3 = param_3;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010bf8a7e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe120(puVar1);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bf8a400(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar1);
    _objc_release(lVar4);
    func_0x00010c206c40(puVar1);
    lVar4 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      lVar7 = lVar3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      _objc_release(lVar4);
      if (lVar5 == 0) goto LAB_105d689a4;
      lVar4 = lVar3;
      func_0x00010c094540(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c240(puVar1);
    }
    _objc_release(lVar4);
  }
LAB_105d689a4:
  uVar6 = param_6;
  func_0x00010bfa34a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae80(puVar1);
  _objc_release(uVar6);
  uVar6 = param_6;
  func_0x00010bfa3440(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae20(puVar1);
  _objc_release(uVar6);
  lVar4 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8180(puVar1);
  _objc_release(lVar4);
  uVar6 = param_6;
  func_0x00010bf977c0(param_6);
  lVar7 = (long)(int)uVar6;
  func_0x00010b5f5864(lVar7,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a00(puVar1);
  uVar6 = param_6;
  func_0x00010bf9e140(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1a1a20(puVar1);
  _objc_release(uVar6);
  func_0x00010c0c9d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e5c0();
  _objc_release(lVar4);
  _objc_release(param_1);
  func_0x00010c1b4f00(puVar1);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d68b18; end: 105d68bdf; -[SCGalleryLogger geofilterBrowseSnapViewWithGallerySnap:snapOverlay:] */

void FUN_105d68b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c45a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15dc0(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c100(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x000107fdedf8(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c19c040(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d68be0; end: 105d68ffb; -[SCGalleryLogger _fillParametersInBrowseSnapBase:withSnap:snapOverlay:] */

void FUN_105d68be0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000107fde868(param_6);
  func_0x000107fde8cc(param_6);
  lVar1 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(param_4);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010b5f7a24(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2053e0(param_4);
  _objc_release(lVar1);
  func_0x00010c167f20(param_4);
  func_0x00010c167e60(param_4);
  func_0x00010c225be0(param_4);
  uVar2 = param_2;
  func_0x00010bf5f400(param_2);
  uVar3 = param_2;
  func_0x00010c0c8780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fde5f4(param_5,uVar2,uVar3);
  func_0x00010c206c40(param_4);
  _objc_release(uVar3);
  func_0x00010be5eda0(param_2);
  func_0x00010c1c5440(param_4);
  func_0x00010b5fa088(param_5);
  func_0x00010b5f57cc();
  func_0x00010c1a1ba0(param_4);
  func_0x00010b5fb758();
  func_0x00010c1c4760(param_4);
  lVar1 = param_5;
  func_0x000107fdccc8(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2075c0(param_4);
  _objc_release(lVar1);
  func_0x00010bf8b160(param_5);
  func_0x00010c205880((double)param_1,param_4);
  func_0x00010bfed740(param_5);
  func_0x00010c205840(param_4);
  lVar1 = param_5;
  func_0x00010bf59960(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203d60(param_4);
  _objc_release(lVar1);
  func_0x000107fdebbc(param_6);
  func_0x00010c191960(param_4);
  func_0x000107fdec84(param_6);
  func_0x00010c178460(param_4);
  func_0x000107fde9ec(param_6);
  func_0x00010c226060(param_4);
  func_0x000107fdee3c(param_6);
  func_0x00010c19c1c0(param_4);
  func_0x000107fdef5c(param_6);
  func_0x00010c19c760(param_4);
  func_0x000107fdf008(param_6);
  func_0x00010c178b80(param_4);
  func_0x00010be33cc0(param_2);
  func_0x00010c178660(param_4);
  uVar2 = param_6;
  func_0x00010c2553e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c20abc0(param_4);
  _objc_release(uVar2);
  func_0x000107fdf048(param_6);
  func_0x00010c20ba80(param_4);
  func_0x000107fdeee4(param_6);
  func_0x00010c19c2c0(param_4);
  uVar2 = param_6;
  func_0x00010bfaebe0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140160();
  _objc_release(uVar2);
  func_0x00010c19c460(param_4);
  func_0x00010c1a1aa0(param_4);
  func_0x00010c226c40(param_4);
  lVar1 = param_5;
  func_0x00010b5fa088();
  if (lVar1 - 2U < 0xb) {
    func_0x00010c176040(param_4);
    lVar1 = param_5;
    func_0x000107fde6f0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73e0(param_4);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010bf70720(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7380(param_4);
    _objc_release(lVar1);
  }
  uVar2 = param_6;
  func_0x00010c2453c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2060e0(param_4);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010bf10220(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(param_4);
  _objc_release(uVar2);
  func_0x000107fdf3b0(param_6);
  func_0x00010c203740(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d68ffc; end: 105d69053; -[SCGalleryLogger _mediaTypeWithSnap:snapOverlay:] */

ulong FUN_105d68ffc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010b5fa088();
  uVar2 = param_4;
  func_0x00010bf0efe0(param_4);
  _objc_release(param_4);
  if ((param_3 < 0xd) && ((1L << (param_3 & 0x3f) & 0x1566U) != 0)) {
    return (ulong)((uint)uVar2 ^ 1);
  }
  uVar1 = 0xffffffffffffffff;
  if (param_3 != 9999) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 105d69054; end: 105d690ab; -[SCGalleryLogger _snapMediaTypeWithSnap:snapOverlay:] */

undefined8 FUN_105d69054(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010b5fa088();
  uVar2 = param_4;
  func_0x00010bf0efe0();
  _objc_release(param_4);
  if ((param_3 < 0xd) && ((1L << (param_3 & 0x3f) & 0x1566U) != 0)) {
    uVar1 = 1;
    if ((int)uVar2 != 0) {
      uVar1 = 2;
    }
    return uVar1;
  }
  uVar2 = 0xffffffffffffffff;
  if (param_3 != 9999) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 105d690ac; end: 105d6929f; -[SCGalleryLogger _hasCaptionStylingWithSnapOverlay:] */

undefined8 *
FUN_105d690ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long lVar14;
  char cStack_3b0;
  char cStack_3af;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [128];
  long lStack_2e0;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined8 *)0x0) {
LAB_105d69254:
    puVar12 = (undefined8 *)0x0;
    puVar11 = param_3;
  }
  else {
    unaff_x20 = param_3;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010c25dfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = unaff_x21;
    func_0x00010bf529e0();
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    unaff_x22 = (undefined8 *)0x0;
    if (puVar12 == (undefined8 *)0x0) goto LAB_105d69254;
    puVar1 = param_3;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar1;
    func_0x00010c27dde0();
    _objc_release(puVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    puStack_138 = param_3;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_3;
    func_0x00010c25dfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar1 = &uStack_130;
    puVar12 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar12 != (undefined8 *)0x0) {
      unaff_x26 = (undefined8 *)*puStack_120;
      unaff_x27 = 0x6b8dab7c;
      param_3 = puVar12;
      do {
        unaff_x28 = (undefined8 *)0x0;
        do {
          if ((undefined8 *)*puStack_120 != unaff_x26) {
            _objc_enumerationMutation(unaff_x21);
          }
          puVar11 = *(undefined8 **)(lStack_128 + (long)unaff_x28 * 8);
          unaff_x24 = puVar11;
          func_0x00010bf1ede0();
          unaff_x25 = puVar11;
          func_0x00010c0840c0();
          func_0x00010c27f780();
          puVar12 = (undefined8 *)0x1;
          if (((((ulong)unaff_x25 & 1) != 0) || (((ulong)puVar11 & 1) != 0)) ||
             ((((uint)(unaff_x20 != (undefined8 *)0x6b8dab7c) ^ (uint)unaff_x24) & 1) != 0))
          goto LAB_105d69244;
          unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
        } while (param_3 != unaff_x28);
        puVar1 = &uStack_130;
        param_3 = unaff_x21;
        func_0x00010bf52a60();
      } while (param_3 != (undefined8 *)0x0);
    }
    puVar12 = (undefined8 *)0x0;
LAB_105d69244:
    _objc_release(unaff_x21);
    puVar11 = puStack_138;
    unaff_x22 = param_3;
  }
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_270;
  pcStack_148 = FUN_105d692a0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = puVar12;
  puStack_170 = unaff_x22;
  puStack_168 = unaff_x21;
  puStack_160 = unaff_x20;
  puStack_158 = puVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar11 = puVar1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar11;
  func_0x00010bf4e7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c23de80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar11);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  puVar11 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    unaff_x27 = *plStack_260;
    do {
      unaff_x28 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != unaff_x27) {
          _objc_enumerationMutation(puVar2);
        }
        puVar10 = *(undefined8 **)(lStack_268 + (long)unaff_x28 * 8);
        puVar12 = puVar10;
        func_0x00010c294d60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = puVar1;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010bf4e780();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar12;
        puVar7 = unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(puVar12);
        if (((ulong)unaff_x26 & 1) != 0) {
          puVar11 = puVar10;
          func_0x00010c23e780();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105d69418;
        }
        unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
      } while (puVar3 != unaff_x28);
      puVar3 = puVar2;
      puVar7 = &uStack_270;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
    puVar11 = (undefined8 *)0x0;
  }
LAB_105d69418:
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_278 = FUN_105d69468;
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2d0 = unaff_x28;
  lStack_2c8 = unaff_x27;
  puStack_2c0 = unaff_x26;
  puStack_2b8 = unaff_x25;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = puVar12;
  puStack_2a0 = puVar10;
  puStack_298 = puVar11;
  puStack_290 = puVar2;
  puStack_288 = puVar1;
  ppuStack_280 = &puStack_150;
  _objc_retain(puVar7);
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  plStack_390 = (long *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  puVar1 = puVar7;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  iVar6 = (int)&uStack_3a0;
  iVar8 = (int)auStack_360;
  puVar12 = puVar1;
  func_0x00010bf52a60();
  iVar9 = (int)param_6;
  if (puVar12 == (undefined8 *)0x0) {
    _objc_release(puVar1);
LAB_105d69620:
    puVar1 = puVar7;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c297ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010bf1f3c0();
    _objc_release(puVar12);
    _objc_release(puVar1);
    if ((int)puVar11 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar1 = puVar7;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010c297c00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar12;
      func_0x00010c15a3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar1);
    }
  }
  else {
    puVar11 = (undefined8 *)0x0;
    lVar14 = *plStack_390;
    do {
      puVar10 = (undefined8 *)0x0;
      puVar2 = puVar11;
      do {
        if (*plStack_390 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        puVar13 = *(undefined8 **)(lStack_398 + (long)puVar10 * 8);
        puVar11 = puVar13;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar11;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c297e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar11);
        puVar11 = puVar2;
        if (puVar5 != (undefined8 *)0x0) {
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar13;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar4;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar13);
        }
        puVar10 = (undefined8 *)((long)puVar10 + 1);
        puVar2 = puVar11;
      } while (puVar12 != puVar10);
      iVar6 = (int)&uStack_3a0;
      iVar8 = (int)auStack_360;
      puVar12 = puVar1;
      func_0x00010bf52a60();
      iVar9 = (int)param_6;
    } while (puVar12 != (undefined8 *)0x0);
    _objc_release(puVar1);
    if (puVar11 == (undefined8 *)0x0) goto LAB_105d69620;
  }
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e0) {
    ___stack_chk_fail();
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (iVar6 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbb9d8);
    }
    if (iVar8 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29778);
    }
    if (iVar9 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29798);
    }
    if (param_7 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e297b8);
    }
    if (cStack_3b0 != '\0') {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1e5b8);
    }
    if (cStack_3af != '\0') {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e297d8);
    }
    puVar11 = puVar1;
    func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 105d692a0; end: 105d69467; -[SCGalleryLogger _contextFilterSelectedSkyTypeWithSnapOverlay:] */

void FUN_105d692a0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *unaff_x23;
  undefined *puVar13;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  long lVar14;
  char cStack_270;
  char cStack_26f;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf4e7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar12;
  func_0x00010c23de80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar10);
  puVar9 = puVar1;
  func_0x00010bf52a60();
  puVar10 = (undefined *)0x0;
  if (puVar9 != (undefined *)0x0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(puVar1);
        }
        puVar12 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        unaff_x23 = puVar12;
        func_0x00010c294d60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = param_3;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010bf4e780();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x23;
        puVar6 = (undefined8 *)unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        if (((ulong)unaff_x26 & 1) != 0) {
          puVar10 = puVar12;
          func_0x00010c23e780();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105d69418;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar9 != unaff_x28);
      puVar9 = puVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
    puVar10 = (undefined *)0x0;
  }
LAB_105d69418:
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_138 = FUN_105d69468;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = puVar12;
  puStack_158 = puVar10;
  puStack_150 = puVar1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar12 = (undefined *)puVar6;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  iVar5 = (int)&uStack_260;
  iVar7 = (int)auStack_220;
  puVar1 = puVar12;
  func_0x00010bf52a60();
  iVar8 = (int)param_6;
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar12);
LAB_105d69620:
    puVar10 = (undefined *)puVar6;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010c297ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010bf1f3c0();
    _objc_release(puVar12);
    _objc_release(puVar10);
    if ((int)puVar1 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar12 = (undefined *)puVar6;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar12;
      func_0x00010c297c00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010c15a3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar12);
    }
  }
  else {
    puVar10 = (undefined *)0x0;
    lVar14 = *plStack_250;
    do {
      puVar9 = (undefined *)0x0;
      puVar11 = puVar10;
      do {
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(puVar12);
        }
        puVar13 = *(undefined **)(lStack_258 + (long)puVar9 * 8);
        puVar10 = puVar13;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar10;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c297e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar10);
        puVar10 = puVar11;
        if (puVar4 != (undefined *)0x0) {
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar13;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar13);
        }
        puVar9 = puVar9 + 1;
        puVar11 = puVar10;
      } while (puVar1 != puVar9);
      iVar5 = (int)&uStack_260;
      iVar7 = (int)auStack_220;
      puVar1 = puVar12;
      func_0x00010bf52a60();
      iVar8 = (int)param_6;
    } while (puVar1 != (undefined *)0x0);
    _objc_release(puVar12);
    if (puVar10 == (undefined *)0x0) goto LAB_105d69620;
  }
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
    ___stack_chk_fail();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (iVar5 != 0) {
      func_0x00010befa120(puVar12,param_2,&PTR____CFConstantStringClassReference_110dbb9d8);
    }
    if (iVar7 != 0) {
      func_0x00010befa120(puVar12,param_2,&PTR____CFConstantStringClassReference_110e29778);
    }
    if (iVar8 != 0) {
      func_0x00010befa120(puVar12,param_2,&PTR____CFConstantStringClassReference_110e29798);
    }
    if (param_7 != 0) {
      func_0x00010befa120(puVar12,param_2,&PTR____CFConstantStringClassReference_110e297b8);
    }
    if (cStack_270 != '\0') {
      func_0x00010befa120(puVar12,param_2,&PTR____CFConstantStringClassReference_110e1e5b8);
    }
    if (cStack_26f != '\0') {
      func_0x00010befa120(puVar12,param_2,&PTR____CFConstantStringClassReference_110e297d8);
    }
    puVar10 = puVar12;
    func_0x00010bf446e0(puVar12,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105d69468; end: 105d696f3; -[SCGalleryLogger _venueIDWithSnapOverlay:] */

void FUN_105d69468(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  char cStack_140;
  char cStack_13f;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  iVar6 = (int)&uStack_130;
  iVar7 = (int)auStack_f0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  iVar8 = (int)param_6;
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  else {
    puVar10 = (undefined *)0x0;
    lVar13 = *plStack_120;
    do {
      puVar9 = (undefined *)0x0;
      puVar11 = puVar10;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar1);
        }
        puVar12 = *(undefined **)(lStack_128 + (long)puVar9 * 8);
        puVar10 = puVar12;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar10;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c297e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar10);
        puVar10 = puVar11;
        if (puVar5 != (undefined *)0x0) {
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar12;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar4;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar12);
        }
        puVar9 = puVar9 + 1;
        puVar11 = puVar10;
      } while (puVar2 != puVar9);
      iVar6 = (int)&uStack_130;
      iVar7 = (int)auStack_f0;
      puVar2 = puVar1;
      func_0x00010bf52a60();
      iVar8 = (int)param_6;
    } while (puVar2 != (undefined *)0x0);
    _objc_release(puVar1);
    if (puVar10 != (undefined *)0x0) goto LAB_105d696ac;
  }
  puVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c297ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar10 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c297c00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c15a3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
LAB_105d696ac:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (iVar6 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbb9d8);
    }
    if (iVar7 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29778);
    }
    if (iVar8 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29798);
    }
    if (param_7 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e297b8);
    }
    if (cStack_140 != '\0') {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1e5b8);
    }
    if (cStack_13f != '\0') {
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e297d8);
    }
    puVar10 = puVar1;
    func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105d696f4; end: 105d69803; -[SCGalleryLogger destinationsWithSendToFriend:sendToGroup:postToStory:includeSpotlight:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:] */

void FUN_105d696f4(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6,long param_7,undefined8 param_8,undefined4 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbb9d8);
  }
  if (param_4 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29778);
  }
  if (param_6 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29798);
  }
  if (param_7 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e297b8);
  }
  if ((char)param_9 != '\0') {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1e5b8);
  }
  if (param_9._1_1_ != '\0') {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e297d8);
  }
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d69804; end: 105d69853; -[SCGalleryLogger hasGeoFiltersOrGeolensWithSnapOverlay:] */

bool FUN_105d69804(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bfaebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 105d69854; end: 105d698a3; -[SCGalleryLogger encryptId:] */

void FUN_105d69854(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c260c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d698a4; end: 105d69f9b; -[SCGalleryLogger initWithDataObjectContext:graphene:unlockableViewTracker:grapheneRegistry:userTrackedLogger:networkConnectivityMonitor:bandwidthEstimator:profile:thumbnailDebugManager:featureSettingsService:applicationLifecycleEvents:snapDocEditorServices:dreamsSessionService:memoriesSearchDatabase:spectrumLogger:circumstanceEngine:userId:birthdayProvider:simpleContentFetcher:filePathManager:memoriesVisualTagAnalyzer:docObjectContext:memoriesEncryptedDatabase:locationProvider:genAiUnifiedAnalyticsService:memoriesStorageQuotaManager:faceTaggingDataProvider:] */

undefined8 *
FUN_105d698a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
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
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1126ed060;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[1];
    puVar1[1] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[2];
    puVar1[2] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[3];
    puVar1[3] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar1[0x3a] = 0xffffffffffffffff;
    puVar1[0x3b] = 0xffffffffffffffff;
    uVar2 = puVar1[0x38];
    puVar1[0x38] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = 0;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b7008;
    _objc_alloc_init();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_29;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x32];
    puVar1[0x32] = puVar3;
    _objc_release(uVar2);
    func_0x00010c204520(puVar1);
    uVar2 = param_18;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x33) = (char)uVar2;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1c6460(puVar1);
    _objc_release(puVar3);
    puVar5 = puVar1;
    func_0x00010c0c9800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(puVar5);
  }
  _objc_release(param_29);
  _objc_release(param_28);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105d69f9c; end: 105d6a15b; -[SCGalleryLogger fireSpectrumRankingSignalsForPreviewSharing:entry:phAsset:crFeaturedStory:postedToStory:recipientCount:] */

void FUN_105d69f9c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 == 0) {
    if (param_5 == 0) goto LAB_105d6a110;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x105d6a550;
    puStack_c0 = &UNK_11084c4a0;
    _objc_retain(param_5);
    lStack_b8 = param_5;
    _objc_retain(param_6);
    uStack_b0 = param_6;
    lStack_a8 = param_1;
    _objc_retain(param_7);
    uStack_a0 = param_7;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_d8);
    _objc_release(uStack_a0);
    _objc_release(uStack_b0);
    lVar1 = lStack_b8;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105d6a15c;
    puStack_80 = &UNK_1108475b0;
    _objc_retain(param_4);
    lStack_78 = param_4;
    _objc_retain(param_3);
    lStack_70 = param_3;
    lStack_68 = param_1;
    _objc_retain(param_7);
    uStack_60 = param_7;
    _objc_retain(param_8);
    uStack_58 = param_8;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_98);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_70);
    lVar1 = lStack_78;
  }
  _objc_release(lVar1);
LAB_105d6a110:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6a15c; end: 105d6a91b;  */

void FUN_105d6a15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar7 = PTR_PTR_1126af4c0;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = *(undefined **)(param_1 + 0x20);
  if (puVar19 == (undefined *)0x0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x148);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  else {
    _objc_retain(puVar19);
    puVar7 = puVar19;
  }
  puVar19 = PTR_PTR_1126bc7b8;
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x148);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar19;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(uVar8);
  puVar10 = PTR_PTR_1126c45b0;
  _objc_alloc();
  func_0x00010c047100();
  puVar19 = PTR_PTR_1126af4d0;
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x148);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar11 = *(undefined **)(param_1 + 0x30);
  func_0x00010bebcd40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf529e0();
  puVar13 = puVar11;
  if (puVar12 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(param_1 + 0x30);
  func_0x00010c29e220();
  if (lVar14 != 0x65) {
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  uVar20 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar20);
  _objc_retain(puVar13);
  func_0x00010be155e0(uVar15);
  _objc_release(uVar20);
  _objc_release(uVar1);
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(uVar8);
  _objc_release(puVar19);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    lVar17 = *(long *)(puVar7 + 0x20);
    uVar2 = *(undefined8 *)(puVar7 + 0x28);
    uVar18 = *(undefined8 *)(lVar17 + 0x160);
    uVar8 = *(undefined8 *)(puVar7 + 0x30);
    uVar3 = *(undefined8 *)(puVar7 + 0x38);
    uVar15 = *(undefined8 *)(lVar17 + 0x150);
    uVar4 = *(undefined8 *)(lVar17 + 0x158);
    _objc_retain(param_2);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(puVar7 + 0x20);
    uVar21 = *(undefined8 *)(lVar17 + 0x170);
    uVar1 = *(undefined8 *)(puVar7 + 0x40);
    uVar5 = *(undefined8 *)(puVar7 + 0x48);
    uVar20 = *(undefined8 *)(puVar7 + 0x50);
    uVar6 = *(undefined8 *)(puVar7 + 0x58);
    uVar22 = *(undefined8 *)(lVar17 + 0xd0);
    uVar16 = *(undefined8 *)(lVar17 + 0x148);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(puVar7 + 0x20);
    uVar23 = *(undefined8 *)(lVar17 + 0x140);
    func_0x00010bee6e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fe0680(uVar4,uVar18,uVar2,uVar8,uVar3,uVar15,uVar1,0xf,uVar21,uVar5,uVar20,0,0,
                        uVar6,param_2,0,uVar22,uVar16,uVar23,lVar17);
    _objc_release(param_2);
    _objc_release(lVar17);
    _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar15);
    return;
  }
  return;
}



/* Entry: 105d6a91c; end: 105d6a93b; -[SCGalleryLogger _getOffPlatformShareDestination:] */

undefined * FUN_105d6a91c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x1c) {
    return (&PTR_PTR_1108e77d8)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 105d6a93c; end: 105d6aa2b; -[SCGalleryLogger fireSpectrumRankingSignalsForCROffPlatformShare:phAsset:destination:] */

void FUN_105d6a93c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be20ea0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d6aa2c;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_4;
  uStack_58 = param_3;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
  _objc_release(lStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105d6aa2c; end: 105d6adff;  */

void FUN_105d6aa2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_230;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c45b8;
  _objc_alloc();
  func_0x00010bff41a0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar4);
      }
      puVar5 = PTR_PTR_1126c45b8;
      _objc_alloc(PTR_PTR_1126c45b8);
      func_0x00010bff41a0();
      func_0x00010befa120(puVar3);
      _objc_release(puVar5);
      lVar15 = lVar15 + 1;
    } while (lVar6 != lVar15);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  func_0x00010c29e220();
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar14);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar13);
  _objc_retain(puVar3);
  func_0x00010be155e0(uVar1);
  _objc_release(uVar13);
  _objc_release(puVar3);
  _objc_release(uVar14);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x158);
  lVar12 = *(long *)(*(long *)(puVar2 + 0x20) + 0x130);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar2 + 0x28);
  uVar1 = *(undefined8 *)(puVar2 + 0x30);
  lVar6 = *(long *)(puVar2 + 0x38);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    puStack_230 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_230 = *(undefined **)(puVar2 + 0x38);
  }
  uVar7 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar13;
  func_0x000107fe1b6c(uVar11,lVar12,uVar13,uVar14,uVar1,puStack_230,uVar7,0x12);
  _objc_release(param_2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (lVar6 == 0) {
    _objc_release(puStack_230);
  }
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  uVar14 = *(undefined8 *)(lVar12 + 0x20);
  _objc_retain(uVar9);
  func_0x00010c0f7fc0(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar9);
  return;
}



/* Entry: 105d6ae00; end: 105d6ae97; -[SCGalleryLogger fireSpectrumRankingSignalsForOffPlatformShare:destination:] */

void FUN_105d6ae00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d6ae98;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6ae98; end: 105d6b263;  */

void FUN_105d6ae98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be20ea0(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar3,param_2,uVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126af4c0;
  if (puVar3 != (undefined *)0x0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060(puVar5,param_2,puVar3,0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126bc7b8;
    if (puVar5 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160(puVar6,param_2,puVar3,0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar4);
      puVar8 = PTR_PTR_1126c45b0;
      _objc_alloc();
      func_0x00010c047100();
      puVar6 = PTR_PTR_1126af4d0;
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380(puVar6,param_2,puVar5,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bebcd40(uVar4,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_1 + 0x20);
      func_0x00010c29e220();
      if (lVar9 == 0x65) {
        lStack_68 = 0x65;
      }
      else {
        puVar10 = puVar5;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        lStack_68 = 0x5d;
        if (puVar10 != (undefined *)0x5) {
          lStack_68 = lVar9;
        }
      }
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x105d6b148;
      puStack_a0 = &UNK_1108e73a8;
      uStack_98 = uVar11;
      puStack_90 = puVar5;
      puStack_88 = puVar8;
      uStack_80 = uVar4;
      uStack_78 = uVar2;
      _objc_retain(uVar1);
      uStack_70 = uVar1;
      func_0x00010be155e0(uVar11,param_2,&puStack_b8);
      _objc_release(uStack_70);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d6b264; end: 105d6b32f; -[SCGalleryLogger readMemSessionIdSynchronized] */

void FUN_105d6b264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105d6b330;
  uStack_30 = 0x105d6b340;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d6b348;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d6b330; end: 105d6b347;  */

void FUN_105d6b330(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d6b348; end: 105d6b387;  */

void FUN_105d6b348(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d6b388; end: 105d6b513; -[SCGalleryLogger logDirectSnapCreateWithGallerySnap:snapOverlay:lagunaConnectivity:] */

void FUN_105d6b388(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fdcfb8(uVar1,param_3,param_4,uVar2,*(undefined8 *)(param_1 + 0x200),
                      *(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c45c0;
  _objc_alloc(PTR_PTR_1126c45c0);
  func_0x00010c047260();
  lVar4 = param_3;
  func_0x00010b5fa088();
  if (lVar4 - 2U < 0xb) {
    lVar4 = param_3;
    func_0x00010bf59960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203d60(puVar3);
    _objc_release(lVar4);
    func_0x00010c1b7360(puVar3);
    lVar4 = param_3;
    func_0x00010c27a1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73c0(puVar3);
    _objc_release(lVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  func_0x00010be541a0(param_1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d6b514; end: 105d6b5c7; -[SCGalleryLogger _logGrapheneDirectSnapCreateWithSnapCommonLoggingParameters:] */

void FUN_105d6b514(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  if (param_3 != (undefined **)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    _objc_retain(param_3);
    ppuVar3 = param_3;
    func_0x00010c0c6c20();
    func_0x000108442d24();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    ppuVar4 = param_3;
    func_0x00010c247520();
    _objc_release(param_3);
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar2 = ppuVar4;
    }
    func_0x0001085a964c(uVar5,ppuVar1,ppuVar2,1);
    _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
    return;
  }
  return;
}



/* Entry: 105d6b5c8; end: 105d6b657; -[SCGalleryLogger fetchVisualTagsMap:] */

void FUN_105d6b5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d6b658;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6b658; end: 105d6b663;  */

void FUN_105d6b658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be155f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchVisualTagsMap__112562f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105d6b664; end: 105d6b903; -[SCGalleryLogger _fetchVisualTagsMap:] */

void FUN_105d6b664(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 200);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 200));
    goto LAB_105d6b8e0;
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c141620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar9;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar9);
  }
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
LAB_105d6b808:
    puVar5 = PTR_PTR_1126b08b0;
    func_0x00010bf33760(PTR_PTR_1126b08b0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    uVar9 = *(undefined8 *)(param_1 + 0x120);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c13e600(uVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(param_3);
  }
  else {
    puVar5 = PTR_PTR_1126c45c8;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar6 = puVar5;
    func_0x00010c268320();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar5);
      _objc_release(0);
      goto LAB_105d6b808;
    }
    puVar6 = puVar5;
    func_0x00010c268320();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar6;
    _objc_release(uVar9);
    puVar6 = puVar5;
    func_0x00010c268320(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar6);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_105d6b8e0:
  _objc_release(param_3);
  return;
}



/* Entry: 105d6b904; end: 105d6b9ab;  */

void FUN_105d6b904(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105d6b9ac; end: 105d6b9bb;  */

void FUN_105d6b9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be828f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processVisualTagDataNetworkResp_11257e3d8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105d6b9bc; end: 105d6bb83; -[SCGalleryLogger _processVisualTagDataNetworkResponse:completionHandler:] */

void FUN_105d6b9bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010b5f316c(*(undefined8 *)(param_1 + 0xd0),
                          &PTR____CFConstantStringClassReference_110e29b78);
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      func_0x00010c14e020(lVar1);
      puVar3 = PTR_PTR_1126c45c8;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      puVar4 = puVar3;
      func_0x00010c268320();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf529e0();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) {
        func_0x00010b5f316c(*(undefined8 *)(param_1 + 0xd0),
                            &PTR____CFConstantStringClassReference_110e29b98);
        (**(code **)(param_4 + 0x10))(param_4,0);
      }
      else {
        puVar4 = puVar3;
        func_0x00010c268320();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 200);
        *(undefined **)(param_1 + 200) = puVar4;
        _objc_release(uVar6);
        puVar4 = puVar3;
        func_0x00010c268320(puVar3);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_4 + 0x10))(param_4,puVar4);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_release(0);
    }
    _objc_release(lVar1);
  }
  else {
    func_0x00010b5f316c(*(undefined8 *)(param_1 + 0xd0),
                        &PTR____CFConstantStringClassReference_110e29b58);
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6bb84; end: 105d6bbbb; -[SCGalleryLogger gallerySessionCounter] */

void FUN_105d6bb84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a0);
  if (lVar1 == 0) {
    func_0x00010bdf0700();
    lVar1 = *(long *)(param_1 + 0x1a0);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d6bbbc; end: 105d6bc83; -[SCGalleryLogger _createNewGallerySessionCounter] */

void FUN_105d6bbbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  *(long *)(param_1 + 0x1a8) = lVar1;
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010c0c9800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c45d0;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined **)(param_1 + 0x1a0) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c45d8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ff80(puVar2,param_2,puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105d6bc84; end: 105d6bd5f; -[SCGalleryLogger setMemTabSessionIdObservable:] */

void FUN_105d6bc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6bd60; end: 105d6bdb7;  */

void FUN_105d6bd60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b0) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d6bdb8; end: 105d6c16f; -[SCGalleryLogger _logAndNilGallerySessionCounter] */

void FUN_105d6bdb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    puVar1 = PTR_PTR_1126c45e0;
    _objc_opt_new(PTR_PTR_1126c45e0);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c242fe0();
    func_0x00010c2054c0(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c25af80();
    func_0x00010c20d980(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c2425a0();
    func_0x00010c205020(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c241d80();
    func_0x00010c204d00(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c243a60();
    func_0x00010c205a00(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c25a8c0();
    func_0x00010c20d640(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c25a120();
    func_0x00010c20d460(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c25b860();
    func_0x00010c20df20(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c23fd40();
    func_0x00010c203e20(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c2597c0();
    func_0x00010c20ce20(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfbd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c154500();
    func_0x00010c1a1c20(puVar1,param_2,lVar2);
    _objc_release(lVar5);
    func_0x00010c1ce180(puVar1,param_2,*(undefined8 *)(param_1 + 0x1c0));
    func_0x00010c1ce360(puVar1,param_2,*(undefined8 *)(param_1 + 0x1c8));
    func_0x00010c1c58e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x1a8));
    lVar5 = param_1;
    func_0x00010c29e220(param_1);
    func_0x00010c222c00(puVar1,param_2,lVar5);
    if (*(long *)(param_1 + 0x68) != 0) {
      func_0x00010bf885a0();
      func_0x00010c2062a0(puVar1);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      func_0x00010bf885a0();
      func_0x00010c20c640(puVar1);
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      func_0x00010bf885a0();
      func_0x00010c1767c0(puVar1);
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      func_0x00010bf885a0();
      func_0x00010c1c6be0(puVar1);
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      func_0x00010bf885a0();
      func_0x00010c1f84a0(puVar1);
    }
    func_0x00010c1d50a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x1d0));
    func_0x00010c1d50c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x1d8));
    lVar5 = *(long *)(param_1 + 0x30);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e4a0(lVar5,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c222d20((double)lVar5 / 1000.0,puVar1);
    if (0.0 < *(double *)(param_1 + 0x90)) {
      func_0x00010c1c5c00(puVar1,param_2,(long)(*(double *)(param_1 + 0x90) * 1000.0));
    }
    if (0.0 < *(double *)(param_1 + 0x98)) {
      func_0x00010c20c900(puVar1,param_2,(long)(*(double *)(param_1 + 0x98) * 1000.0));
    }
    if (0.0 < *(double *)(param_1 + 0xa0)) {
      func_0x00010c176f80(puVar1,param_2,(long)(*(double *)(param_1 + 0xa0) * 1000.0));
    }
    func_0x00010c1d9ea0(puVar1,param_2,*(undefined1 *)(param_1 + 0x19b));
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    func_0x00010be3d840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105d6c170; end: 105d6c277; -[SCGalleryLogger _invalidateCurrentMemoriesSession] */

void FUN_105d6c170(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x1d0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c0c9800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  func_0x00010c1b1d20(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x19a) = 0;
  func_0x00010c204520(param_1,param_2,0);
  func_0x00010c2188e0(param_1,param_2,0);
  func_0x00010c218900(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 105d6c278; end: 105d6c2a7; -[SCGalleryLogger viewSource] */

undefined8 FUN_105d6c278(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0755c0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  }
  else {
    uVar2 = 0x65;
  }
  return uVar2;
}



/* Entry: 105d6c2a8; end: 105d6c2ff; -[SCGalleryLogger logGalleryInitialState] */

void FUN_105d6c2a8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d6c300;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d6c300; end: 105d6c8bf;  */

void FUN_105d6c300(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xf0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48f60();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x100);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbcb00();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x148);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52d00(puVar5,param_3,uVar3,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_3,
                      &PTR____CFConstantStringClassReference_110e29bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  puVar8 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x148);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52d00(puVar8,param_3,uVar3,puVar7,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar9 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x148);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52d40(puVar9,param_3,uVar3,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar10 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x148);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52d20(puVar10,param_3,uVar3,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar11 = PTR_PTR_1126bc7e0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x148);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52cc0(puVar11,param_3,uVar3,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar12 = PTR_PTR_1126bc7e0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x148);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6bc0(puVar12,param_3,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (puVar12 == (undefined *)0x0) {
    param_1 = 0.0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf59960(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar13,param_3,puVar14);
    _objc_release(puVar14);
    _objc_release(puVar13);
  }
  lVar15 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0xd0);
  puVar13 = PTR_PTR_1126b2438;
  func_0x00010bfbd060(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1a2c0(lVar15,param_3,puVar13,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(uVar3,param_3,lVar15,puVar5);
  _objc_release(lVar15);
  _objc_release(puVar13);
  lVar15 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0xd0);
  puVar5 = PTR_PTR_1126b2438;
  func_0x00010bfbd040(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1a2c0(lVar15,param_3,puVar5,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(uVar3,param_3,lVar15,puVar8);
  _objc_release(lVar15);
  _objc_release(puVar5);
  lVar15 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0xd0);
  puVar5 = PTR_PTR_1126b2438;
  func_0x00010bfbd000(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1a2c0(lVar15,param_3,puVar5,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(uVar3,param_3,lVar15,puVar9);
  _objc_release(lVar15);
  _objc_release(puVar5);
  lVar15 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0xd0);
  puVar5 = PTR_PTR_1126b2438;
  func_0x00010bfbcfe0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1a2c0(lVar15,param_3,puVar5,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(uVar3,param_3,lVar15,puVar10);
  _objc_release(lVar15);
  _objc_release(puVar5);
  lVar15 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0xd0);
  puVar5 = PTR_PTR_1126b2438;
  func_0x00010bfbd020(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1a2c0(lVar15,param_3,puVar5,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(uVar3,param_3,lVar15,puVar11);
  _objc_release(lVar15);
  _objc_release(puVar5);
  if (0.0 < param_1) {
    lVar15 = *(long *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(lVar15 + 0xd0);
    puVar5 = PTR_PTR_1126b2438;
    func_0x00010bfbcfc0(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1a2c0(lVar15,param_3,puVar5,uVar2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc000(param_1,uVar3,param_3,lVar15);
    _objc_release(lVar15);
    _objc_release(puVar5);
  }
  _objc_release(puVar12);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105d6c8c0; end: 105d6ca97; -[SCGalleryLogger didEnterGallery:] */

void FUN_105d6c8c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  *(undefined **)(param_1 + 0x108) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c2a6420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105d6ca98;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010bf75dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105d6ca98; end: 105d6caef;  */

void FUN_105d6ca98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d6caf0; end: 105d6cb0b;  */

void FUN_105d6caf0(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1b8) = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x1a0) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf0710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__createNewGallerySessionCounter_112559b60);
  return;
}



/* Entry: 105d6cb0c; end: 105d6cb77; -[SCGalleryLogger didExitGallery] */

void FUN_105d6cb0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105d6cb78;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  return;
}



/* Entry: 105d6cb78; end: 105d6cb8b;  */

void FUN_105d6cb78(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x1a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be50270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__logAndNilGallerySessionCounter_112571a38);
    return;
  }
  return;
}



/* Entry: 105d6cb8c; end: 105d6cbf7; -[SCGalleryLogger setMemoriesOpenSource:] */

void FUN_105d6cb8c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010bf96d20();
  if ((uVar1 & 1) == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105d6cbf8;
    puStack_38 = &UNK_110848c48;
    uStack_30 = param_1;
    uStack_28 = param_3;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_50);
  }
  return;
}



/* Entry: 105d6cbf8; end: 105d6cc0b;  */

void FUN_105d6cbf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1d0) = uVar1;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1d8) = uVar1;
  return;
}



/* Entry: 105d6cc0c; end: 105d6cc37; -[SCGalleryLogger setEnteredMemoriesWithSnapFeed] */

void FUN_105d6cc0c(long param_1,undefined8 param_2)

{
  func_0x00010c1c61a0(param_1,param_2,10);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  return;
}



/* Entry: 105d6cc38; end: 105d6cc8f; -[SCGalleryLogger invalidateMemoriesSessionFromForeground] */

void FUN_105d6cc38(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d6cc90;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d6cc90; end: 105d6ccab;  */

void FUN_105d6cc90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x1a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__invalidateCurrentMemoriesSessio_11256cfb0);
    return;
  }
  *(undefined1 *)(lVar1 + 0x29) = 1;
  return;
}



/* Entry: 105d6ccac; end: 105d6cd03; -[SCGalleryLogger enterOnboardingView] */

void FUN_105d6ccac(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d6cd04;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d6cd04; end: 105d6cd13;  */

void FUN_105d6cd04(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
  return;
}



/* Entry: 105d6cd14; end: 105d6cd6b; -[SCGalleryLogger exitOnboardingView] */

void FUN_105d6cd14(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d6cd6c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d6cd6c; end: 105d6cd77;  */

void FUN_105d6cd6c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  return;
}



/* Entry: 105d6cd78; end: 105d6cd7b; -[SCGalleryLogger setCurrentTab:] */

void FUN_105d6cd78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1873d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentGalleryTab__11263f710);
  return;
}



/* Entry: 105d6cd7c; end: 105d6cdb7; -[SCGalleryLogger setSearchPageMaxHeight:] */

void FUN_105d6cd7c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d6cdb8; end: 105d6ce1b; -[SCGalleryLogger setMaxHeight:forTab:] */

void FUN_105d6cdb8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = param_3 - 2;
  if ((uVar2 < 5) && ((0x17U >> (ulong)((uint)uVar2 & 0x1f) & 1) != 0)) {
    lVar4 = *(long *)(&UNK_10ddd0678 + uVar2 * 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105d6ce1c; end: 105d6ce73; -[SCGalleryLogger _appDidEnterBackground] */

void FUN_105d6ce1c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d6ce74;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d6ce74; end: 105d6ce7b;  */

void FUN_105d6ce74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be50270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logAndNilGallerySessionCounter_112571a38);
  return;
}



/* Entry: 105d6ce7c; end: 105d6ced3; -[SCGalleryLogger _appWillEnterForeground] */

void FUN_105d6ce7c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d6ced4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d6ced4; end: 105d6cf1f;  */

void FUN_105d6ced4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x29) == '\x01') {
    *(undefined1 *)(lVar1 + 0x29) = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x1a0) == 0) {
      func_0x00010bdf0700();
      lVar1 = *(long *)(param_1 + 0x20);
    }
    *(undefined8 *)(lVar1 + 0x1d0) = 6;
  }
  return;
}



/* Entry: 105d6cf20; end: 105d6cfbf; -[SCGalleryLogger operaViewFinishLoadingForSnap:loadingLatencyInSec:] */

void FUN_105d6cf20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105d6cfc0;
  puStack_60 = &UNK_110844b80;
  uStack_58 = param_4;
  lStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 105d6cfc0; end: 105d6d15b;  */

void FUN_105d6cfc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  puVar1 = PTR_PTR_1126c45f0;
  _objc_opt_new(PTR_PTR_1126c45f0);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126af4c0;
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x148);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060(puVar4,param_2,uVar6,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = puVar4;
    func_0x00010bfbdda0(puVar4);
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar1,param_2,puVar5);
    _objc_release(puVar4);
  }
  func_0x00010c1b91e0(puVar1,param_2,(long)(*(double *)(param_1 + 0x30) * 1000.0));
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b5fa34c(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b5fa088(uVar6);
  func_0x00010b5f57cc();
  func_0x00010c1a1ba0(puVar1,param_2,uVar6);
  uVar7 = *(ulong *)(param_1 + 0x20);
  func_0x00010b5fb758();
  if (uVar7 < 5) {
    uVar6 = *(undefined8 *)(&UNK_10ddd06a0 + uVar7 * 8);
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  func_0x00010c1c4760(puVar1,param_2,uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107fdccc8(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2075c0(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d6d15c; end: 105d6d223; -[SCGalleryLogger operaViewFinishLoadingForPHAsset:memoriesCRFeaturedStory:loadingLatencyInSec:] */

void FUN_105d6d15c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d6d224;
  puStack_68 = &UNK_11084d788;
  uStack_60 = param_4;
  uStack_58 = param_5;
  lStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d6d224; end: 105d6d30b;  */

void FUN_105d6d224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c45f0;
  _objc_opt_new(PTR_PTR_1126c45f0);
  func_0x00010c1b91e0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b5fa3d8(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0c6c20();
  uVar2 = 9999;
  if (lVar3 == 2) {
    uVar2 = 1;
  }
  uVar4 = 0;
  if (lVar3 != 1) {
    uVar4 = uVar2;
  }
  func_0x00010b5f57cc(uVar4);
  func_0x00010c1a1ba0(puVar1,param_2,uVar4);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    func_0x00010bf97860();
    func_0x000108dfcb70();
    func_0x00010c196b80(puVar1,param_2,lVar3);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d6d30c; end: 105d6d36f; -[SCGalleryLogger operaPlaybackStallCount:firstStallMediaTime:firstStallDuration:totalStallDuration:currentlyStalled:] */

void FUN_105d6d30c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d6d370;
  puStack_48 = &UNK_1108e73d8;
  lStack_40 = param_4;
  uStack_38 = param_6;
  uStack_30 = param_1;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_7;
  func_0x00010c0f7fc0(*(undefined8 *)(param_4 + 0x20),param_5,&puStack_60);
  return;
}



/* Entry: 105d6d370; end: 105d6d49b;  */

void FUN_105d6d370(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c45f8;
  _objc_alloc_init(PTR_PTR_1126c45f8);
  func_0x00010c226f60();
  func_0x00010c19aa40(puVar1,param_2,4);
  func_0x00010c2091c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19d620(puVar1,param_2,(long)(*(double *)(param_1 + 0x30) * 1000.0));
  func_0x00010c19d5e0(puVar1,param_2,(long)(*(double *)(param_1 + 0x38) * 1000.0));
  func_0x00010c2189a0(puVar1,param_2,(long)(*(double *)(param_1 + 0x40) * 1000.0));
  func_0x00010c198660(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  puVar2 = PTR_PTR_1126c4600;
  _objc_alloc_init(PTR_PTR_1126c4600);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5e460();
  func_0x00010c180de0(puVar2,param_2,uVar4);
  _objc_release(uVar3);
  func_0x00010c1cc120(puVar1,param_2,puVar2);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d6d49c; end: 105d6d4f7; -[SCGalleryLogger operaViewCanBeProgressiveDownload:] */

void FUN_105d6d49c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105d6d4f8;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 105d6d4f8; end: 105d6d513;  */

void FUN_105d6d4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b24e0,PTR_s_fireGallerySnapCanStream_graphen_1125c9ac8,
             *(undefined1 *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8));
  return;
}



/* Entry: 105d6d514; end: 105d6d5ab; -[SCGalleryLogger operaBrowseSnap:cacheHit:] */

void FUN_105d6d514(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d6d5ac;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6d5ac; end: 105d6d60b;  */

void FUN_105d6d5ac(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010b5fa088();
  if (uVar1 < 0xd && (1L << (uVar1 & 0x3f) & 0x1566U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfb01b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126b24e0,PTR_s_fireGalleryBrowseCacheHit_graphe_1125c9a10,
               *(undefined1 *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd8));
    return;
  }
  return;
}



/* Entry: 105d6d60c; end: 105d6d757; -[SCGalleryLogger operaFinishViewingSnap:unlockableSnapInfo:isPrivate:timeViewedMillis:pinchToZoomMillis:maxRotationDegree:minRotationDegree:loadingLatencyInSec:isMediaLoaded:pageHeight:contextSessionId:positionIndex:viewSource:] */

void FUN_105d6d60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined1 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
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
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  uVar1 = *(undefined8 *)(param_6 + 0x20);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105d6d758;
  puStack_108 = &UNK_1108e7438;
  uStack_e0 = param_15;
  uStack_a8 = param_14;
  uStack_100 = param_8;
  lStack_f8 = param_6;
  uStack_f0 = param_9;
  uStack_e8 = param_13;
  uStack_d8 = param_11;
  uStack_d0 = param_1;
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  uStack_b0 = param_5;
  uStack_a0 = param_10;
  uStack_9f = param_12;
  _objc_retain(param_13);
  _objc_retain(param_9);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1,param_7,&puStack_120);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_100);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 105d6d758; end: 105d6d98f;  */

void FUN_105d6d758(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
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
  undefined1 uStack_58;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(long *)(*(long *)(param_1 + 0x28) + 0x1b8) == 0x90) {
      uVar8 = 0x90;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x40);
    }
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126bc7b8;
    puVar5 = (undefined *)0x0;
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x148);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160(puVar3,param_2,uVar4,0,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar5 = puVar3;
    }
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      func_0x00010be17860(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48));
    }
    if (puVar5 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar5;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1a8);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2,param_2,uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105d6d990;
    puStack_c8 = &UNK_1108e7408;
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x20);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
    auVar9 = NEON_ext(auVar9,auVar9,8,1);
    uStack_b8 = auVar9._8_8_;
    uStack_c0 = auVar9._0_8_;
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x50);
    uStack_88 = *(undefined8 *)(param_1 + 0x58);
    uStack_78 = *(undefined8 *)(param_1 + 0x68);
    uStack_80 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined1 *)(param_1 + 0x81);
    uStack_70 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    puStack_b0 = puVar3;
    _objc_retain(uVar7);
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    uStack_a8 = uVar7;
    uStack_a0 = uVar6;
    uStack_60 = uVar8;
    _objc_retain(uVar6);
    _objc_retain(puVar3);
    func_0x00010be110e0(uVar2,param_2,uVar4,&puStack_e0);
    _objc_release(uVar4);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 105d6d990; end: 105d6d9db;  */

void FUN_105d6d990(long param_1,undefined8 param_2)

{
  func_0x00010be50de0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),1,
                      *(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 105d6d9dc; end: 105d6db6b; -[SCGalleryLogger operaFinishViewingCameraRollItemWithItemId:memoriesCRFeaturedStory:isImage:loadingLatencyInSec:durationInSec:pageHeight:contextSessionId:phAsset:positionIndex:viewSnapPositionIndex:timeViewedMillis:memoriesLivePhotoPlaybackStyle:viewSource:] */

void FUN_105d6d9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105d6db6c;
  puStack_100 = &UNK_1108e7498;
  uStack_e8 = param_14;
  uStack_a8 = param_15;
  uStack_a0 = param_12;
  uStack_98 = param_13;
  uStack_f8 = param_6;
  uStack_f0 = param_10;
  lStack_e0 = param_4;
  uStack_d8 = param_9;
  uStack_d0 = param_7;
  uStack_c8 = param_1;
  uStack_c0 = param_2;
  uStack_b8 = param_11;
  uStack_b0 = param_3;
  uStack_90 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_14);
  _objc_retain(param_10);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1,param_5,&puStack_118);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_6);
  return;
}



/* Entry: 105d6db6c; end: 105d6e463;  */

void FUN_105d6db6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puStack_2a0;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2350;
  _objc_opt_new();
  func_0x00010c1b92e0();
  func_0x00010c205880(*(undefined8 *)(param_1 + 0x58),puVar1);
  func_0x00010c160a00(puVar1);
  func_0x00010c204680(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5a700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203d60(puVar1);
  _objc_release(uVar2);
  func_0x00010c1be4c0(puVar1);
  if (*(long *)(param_1 + 0x60) != 0x7fffffffffffffff) {
    func_0x00010c1dee00(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107fda3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176f20(puVar1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x200);
  if ((lVar3 == 0xb) || (lVar3 == 4)) {
    func_0x00010c196b80(puVar1);
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x200);
  }
  func_0x000107fdcaa8(lVar3);
  func_0x00010c206c40(puVar1);
  func_0x00010c1ddc60(puVar1);
  func_0x00010c1c5440(puVar1);
  func_0x00010c1d81e0(*(undefined8 *)(param_1 + 0x68),puVar1);
  func_0x00010c1833c0(puVar1);
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x1a8) != 0) {
    func_0x00010c1c58e0(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0c75a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5920(puVar1);
    _objc_release(uVar4);
  }
  func_0x00010c222c00(puVar1);
  if ((*(long *)(param_1 + 0x78) != 0x7fffffffffffffff) && (*(long *)(param_1 + 0x70) == 0x5b)) {
    func_0x00010c1c5840(puVar1);
  }
  puVar5 = *(undefined **)(param_1 + 0x48);
  if (puVar5 == (undefined *)0x0) {
    func_0x00010c1968c0(puVar1);
    puVar5 = PTR_PTR_1126c45b8;
    _objc_alloc();
    func_0x00010bff41a0();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar17);
    func_0x00010be155e0(uVar4);
    _objc_release(uVar17);
  }
  else {
    func_0x00010b5fadbc();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfe5ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar1);
    _objc_release(uVar4);
    uVar16 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf977c0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c230340();
    if ((uVar16 & 1) == 0) {
      func_0x00010bf97860(*(undefined8 *)(param_1 + 0x48));
      func_0x000108dfcb70();
    }
    func_0x00010c196b80(puVar1);
    param_2 = 0;
    func_0x00010b5f5864();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfe5ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar1);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c45b8;
    _objc_alloc();
    func_0x00010bff41a0();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar8 = *(long *)(param_1 + 0x48);
    func_0x00010c0fa980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar8);
        }
        puVar9 = PTR_PTR_1126c45b8;
        _objc_alloc(PTR_PTR_1126c45b8);
        func_0x00010bff41a0();
        func_0x00010befa120(puVar7);
        _objc_release(puVar9);
        lVar15 = lVar15 + 1;
      } while (lVar3 != lVar15);
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar17);
    _objc_retain(puVar7);
    func_0x00010be155e0(uVar4);
    _objc_release(puVar7);
    _objc_release(uVar17);
    _objc_release(puVar7);
    _objc_release(puVar9);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c222d20((double)(*(ulong *)(param_1 + 0x80) / 100) / 10.0,puVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40));
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x158);
  lVar3 = *(long *)(*(long *)(puVar1 + 0x20) + 0x130);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar1 + 0x28);
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  lVar12 = *(long *)(puVar1 + 0x38);
  func_0x00010bf529e0();
  if (lVar12 == 0) {
    puStack_2a0 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_2a0 = *(undefined **)(puVar1 + 0x38);
  }
  uVar10 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x000107fe1b6c(uVar14,lVar3,uVar17,uVar2,uVar4,puStack_2a0,uVar10,0x11);
  _objc_release(param_2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  if (lVar12 == 0) {
    _objc_release(puStack_2a0);
  }
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x158);
  lVar12 = *(long *)(*(long *)(lVar3 + 0x20) + 0x130);
  _objc_retain(lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 8);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe1b6c(uVar11,lVar12,uVar17,uVar2,uVar4,puVar1,uVar14,0x11);
  _objc_release(lVar8);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(puVar1);
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar12 + 0x20);
  _objc_retain();
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d6e464; end: 105d6e4fb; -[SCGalleryLogger startStoryViewSession] */

void FUN_105d6e464(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d6e4fc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d6e4fc; end: 105d6e55b;  */

void FUN_105d6e4fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x40) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c45d8;
  _objc_alloc();
  func_0x00010c00ff80();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d6e55c; end: 105d6e63f; -[SCGalleryLogger endStoryViewSession:itemPosition:numberOfStories:viewSource:] */

void FUN_105d6e55c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105d6e640;
  puStack_88 = &UNK_1108e74c8;
  lStack_80 = param_1;
  puStack_78 = puVar1;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d6e640; end: 105d6e653;  */

void FUN_105d6e640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endStoryViewSessionWithActionTi_112560128,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 105d6e654; end: 105d6e733; -[SCGalleryLogger endStoryViewSessionWithEntryId:itemPosition:numberOfStories:viewSource:] */

void FUN_105d6e654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105d6e734;
  puStack_88 = &UNK_1108e74c8;
  uStack_80 = param_3;
  lStack_78 = param_1;
  puStack_70 = puVar1;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  _objc_release(puStack_70);
  _objc_release(uStack_80);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6e734; end: 105d6e7b3;  */

void FUN_105d6e734(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x148);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be09e20(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30),puVar3
                      ,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105d6e7b4; end: 105d6e897; -[SCGalleryLogger endStoryViewSessionWithCRFeaturedStory:itemPosition:numberOfStories:viewSource:] */

void FUN_105d6e7b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105d6e898;
  puStack_88 = &UNK_1108e74c8;
  lStack_80 = param_1;
  puStack_78 = puVar1;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d6e898; end: 105d6e8ab;  */

void FUN_105d6e898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endStoryViewSessionWithActionTi_112560120,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 105d6e8ac; end: 105d6e973; -[SCGalleryLogger _endStoryViewSessionWithActionTime:entry:itemPosition:numberOfStories:viewSource:] */

void FUN_105d6e8ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  _objc_retain(param_4);
  func_0x00010c29e4a0(lVar3,param_2,param_3);
  func_0x00010bdc8bc0(param_1,param_2,lVar3,param_7);
  func_0x00010be50e20((double)lVar3 / 1000.0,param_1,param_2,param_4,param_5,param_6,param_7);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d6e974; end: 105d6ec5b; -[SCGalleryLogger _endStoryViewSessionWithActionTime:crFeaturedStory:itemPosition:numberOfStories:viewSource:] */

void FUN_105d6e974(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010c29e4a0();
  func_0x00010bdc8bc0(param_1);
  lVar4 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(lVar11);
  func_0x00010b5fadbc();
  func_0x00010bf97860();
  uVar5 = 0;
  func_0x00010b5f5ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50e00((double)lVar3 / 1000.0,param_1);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar7 = param_4;
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar7);
      }
      puVar8 = PTR_PTR_1126c45b8;
      _objc_alloc();
      func_0x00010bff41a0();
      func_0x00010befa120(puVar6);
      _objc_release(puVar8);
      lVar16 = lVar16 + 1;
    } while (lVar11 != lVar16);
    lVar11 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  _objc_retain(puVar6);
  _objc_retain(param_4);
  func_0x00010be155e0(param_1);
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar8;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x158);
  uVar14 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x130);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  uVar1 = *(undefined8 *)(lVar4 + 0x30);
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 8);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x170);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar4 + 0x40);
  lVar11 = *(long *)(lVar4 + 0x20);
  uVar18 = *(undefined8 *)(lVar11 + 0xd0);
  uVar19 = *(undefined8 *)(lVar11 + 0x20);
  uVar15 = *(undefined8 *)(lVar11 + 0x140);
  uVar2 = *(undefined1 *)(lVar11 + 0x198);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe1b6c(uVar13,uVar14,uVar9,uVar5,0,uVar1,uVar10,0x10,uVar20,0,0,puVar6,0,uVar17,
                      param_2,0,uVar18,uVar19,uVar15,uVar2);
  _objc_release(param_2);
  _objc_release(lVar11);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 105d6ec5c; end: 105d6edc7;  */

void FUN_105d6ec5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x158);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x130);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(lVar7 + 0xd0);
  uVar13 = *(undefined8 *)(lVar7 + 0x20);
  uVar10 = *(undefined8 *)(lVar7 + 0x140);
  uVar3 = *(undefined1 *)(lVar7 + 0x198);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe1b6c(uVar8,uVar9,uVar4,uVar1,0,uVar2,uVar5,0x10,uVar14,0,0,puVar6,0,uVar11,param_2,
                      0,uVar12,uVar13,uVar10,uVar3);
  _objc_release(param_2);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 105d6edc8; end: 105d6eddf; -[SCGalleryLogger _addToSnapFeedViewTimeIfNeeded:viewSource:] */

void FUN_105d6edc8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_4 == 0x65) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + param_3;
  }
  return;
}



/* Entry: 105d6ede0; end: 105d6eeeb; -[SCGalleryLogger _fireGalleryTrackWithSnap:unlockableSnapInfo:timeViewedMillis:] */

void FUN_105d6ede0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf8b160(param_3);
    func_0x00010c0df740(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c6c20();
    _objc_release(param_3);
    if ((int)uVar2 == 0) {
      _objc_release(ppuVar1);
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3a30;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb07e0(uVar2,param_2,puVar3,ppuVar1,0,param_4,3,0);
    _objc_release(param_4);
    _objc_release(puVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 105d6eeec; end: 105d6f087; -[SCGalleryLogger _fetchFaceTagCount:completion:] */

void FUN_105d6eeec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0xffffffffffffffff);
  }
  else {
    lVar1 = *(long *)(param_1 + 400);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x188);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfc54e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0e3040(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c067fc0(lVar1);
      (**(code **)(param_4 + 0x10))(param_4,lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d6f088; end: 105d6f187;  */

void FUN_105d6f088(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((param_2 != 0) && (param_3 == 0)) && (lVar2 = param_2, func_0x00010c067fc0(), -1 < lVar2))
    {
      func_0x000107fd9e74(*(undefined8 *)(param_1 + 0x20),lVar2);
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105d6f188; end: 105d6f1eb;  */

void FUN_105d6f188(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (-1 < lVar2) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,lVar2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 400));
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x000105d6f1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar2);
  return;
}



/* Entry: 105d6f1ec; end: 105d6fae3; -[SCGalleryLogger _logBrowseSnapViewWithSnap:snapOverlay:playerVersion:timeViewedMillis:pinchToZoomMillis:maxRotationDegree:minRotationDegree:loadingLatencyInSec:isMediaLoaded:pageHeight:contextSessionId:memSessionId:positionIndex:viewSource:] */

void FUN_105d6f1ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,long param_8,long param_9,
                  undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13,
                  long param_14,long param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  if (param_14 == 0) {
    func_0x00010bf5ee00(param_6);
  }
  puVar2 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_6 + 0x148);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_6;
  func_0x00010bf21500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_6 + 0x148);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fdcfb8(uVar4,param_8,param_9,uVar1,*(undefined8 *)(param_6 + 0x200),param_14,
                      *(undefined8 *)(param_6 + 0x18));
  _objc_release(uVar1);
  uVar5 = uVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  func_0x00010c206c40(uVar3);
  func_0x00010bf03500(uVar5);
  func_0x00010c167e60(uVar3);
  func_0x00010bf89ea0(uVar5);
  func_0x00010c191960(uVar3);
  uVar6 = uVar5;
  func_0x00010bfae8c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108442868();
  func_0x00010c19c760(uVar3);
  _objc_release(uVar6);
  func_0x00010bfae340(uVar5);
  func_0x00010c19c460(uVar3);
  func_0x00010c253c00(uVar5);
  func_0x00010c20abc0(uVar3);
  uVar6 = uVar5;
  func_0x00010bf8a420(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe120(uVar3);
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar7 = uVar5;
    func_0x00010bf8a400(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(uVar3);
    _objc_release(uVar7);
  }
  else {
    func_0x00010c212c20(uVar3);
  }
  _objc_release(uVar6);
  lVar9 = param_9;
  func_0x00010bf308c0(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c178bc0(uVar3);
  _objc_release(lVar9);
  uVar6 = uVar5;
  func_0x00010c0d3a20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    lVar9 = param_9;
    func_0x00010c095720(param_9);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca440(uVar3);
    _objc_release(lVar14);
    _objc_release(lVar9);
  }
  else {
    func_0x00010c1ca440(uVar3);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar14 = *(long *)(param_6 + 400);
  lVar9 = param_8;
  func_0x00010c241220(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (lVar14 != 0) {
    func_0x00010c067fc0(lVar14);
    func_0x00010c199b80(uVar3);
  }
  lVar9 = param_9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if (lVar10 != 0) {
    lVar9 = param_9;
    func_0x00010c094540(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(uVar3);
    _objc_release(lVar9);
  }
  uVar6 = param_6;
  func_0x00010c094a20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbee0(uVar3);
  _objc_release(uVar6);
  if (param_15 != 0x7fffffffffffffff) {
    func_0x00010c1dee00(uVar3);
  }
  lVar9 = param_8;
  func_0x00010b5fa088();
  if (lVar9 - 2U < 0xb) {
    func_0x00010c1ee5e0(param_2,uVar3);
    func_0x00010c1ee600(param_3,uVar3);
  }
  func_0x00010c1b92e0(uVar3);
  func_0x00010c160a00(uVar3);
  func_0x00010c1d81e0(param_5,uVar3);
  lVar9 = param_8;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    puVar8 = puVar2;
    func_0x00010bf97200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(uVar3);
    _objc_release(puVar8);
    func_0x00010bf977c0(puVar2);
    uVar6 = param_6;
    func_0x00010c230340();
    if ((uVar6 & 1) == 0) {
      func_0x00010bfbdda0(puVar2);
      func_0x000108dfcb04();
    }
    func_0x00010c196b80(uVar3);
    puVar8 = puVar2;
    func_0x00010bf977c0(puVar2);
    lVar9 = (long)(int)puVar8;
    func_0x00010b5f5864(lVar9,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(uVar3);
    puVar8 = puVar2;
    func_0x00010bf9e140(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(uVar3);
    _objc_release(puVar8);
    puVar8 = puVar2;
    func_0x00010bf3d240(puVar2);
    lVar10 = (long)(int)puVar8;
    func_0x00010b5f5ca0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cf60(uVar3);
    puVar8 = puVar2;
    func_0x00010c26afc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = puVar2;
      func_0x00010c26afc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212c20(uVar3);
      _objc_release(puVar8);
    }
    lVar11 = param_8;
    func_0x00010bf3f9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    if (lVar12 != 0) {
      lVar11 = param_8;
      func_0x00010bf3f9e0(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(uVar3);
      _objc_release(lVar11);
    }
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  func_0x00010c1ddc60(uVar3);
  func_0x00010c222d20((double)(param_11 / 100) / 10.0,uVar3);
  func_0x00010c1dbbc0((double)(int)((param_1 / 1000.0) * 10.0) / 10.0,uVar3);
  func_0x00010c1833c0(uVar3);
  func_0x00010c222c00(uVar3);
  uVar1 = *(undefined8 *)(param_6 + 0xe8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  uVar6 = param_6;
  func_0x00010bfd7680();
  if ((int)uVar6 != 0) {
    uVar6 = param_6;
    func_0x00010bfc15c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_8;
    func_0x00010b5fa088();
    if (lVar9 - 2U < 0xb) {
      func_0x00010c1ee5e0(param_2,uVar6);
      func_0x00010c1ee600(param_3,uVar6);
    }
    func_0x00010c1ddc60(uVar6);
    func_0x00010c1b92e0(uVar6);
    func_0x00010c160a00(uVar6);
    uVar1 = *(undefined8 *)(param_6 + 0xe8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  func_0x00010be58cc0(param_6);
  if (puVar2 != (undefined *)0x0) {
    puVar13 = PTR_PTR_1126c45b0;
    _objc_alloc();
    func_0x00010c047100();
    puVar8 = PTR_PTR_1126af4d0;
    uVar1 = *(undefined8 *)(param_6 + 0x148);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar6 = param_6;
    func_0x00010bebcd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_6 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be155e0(param_6);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar8);
    _objc_release(puVar13);
  }
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 105d6fae4; end: 105d6fc1b;  */

void FUN_105d6fae4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar9 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(lVar9 + 0x160);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(lVar9 + 0x150);
  uVar5 = *(undefined8 *)(lVar9 + 0x158);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(lVar9 + 0x140);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe0680(uVar5,uVar10,uVar3,uVar1,uVar4,uVar6,uVar2,0x11,uVar11,0,0,0,puVar7,uVar12,
                      param_2,0,uVar13,uVar8,uVar14,lVar9);
  _objc_release(param_2);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}


