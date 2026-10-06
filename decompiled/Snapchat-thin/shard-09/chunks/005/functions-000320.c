/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106de8010; end: 106de80e7; -[SCGallerySendItemsTask _reportEndToEndSendingMetricsIfNeeded] */

void FUN_106de8010(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36f00();
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36fc0();
    lVar3 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36f40();
    if (lVar1 == lVar3 + lVar2) {
      lVar1 = *(long *)(param_1 + 0xd8);
      func_0x00010c25a8c0();
      lVar2 = *(long *)(param_1 + 0xd8);
      func_0x00010c25a940();
      lVar3 = *(long *)(param_1 + 0xd8);
      func_0x00010c25a900();
      if (lVar1 == lVar3 + lVar2) {
        lVar1 = *(long *)(param_1 + 0xd8);
        func_0x00010c242fe0();
        lVar2 = *(long *)(param_1 + 0xd8);
        func_0x00010c2431a0();
        lVar3 = *(long *)(param_1 + 0xd8);
        func_0x00010c243040();
        if (lVar1 == lVar3 + lVar2) {
          *(undefined1 *)(param_1 + 0x110) = 1;
          func_0x00010be8f720(param_1);
          uVar4 = *(undefined8 *)(param_1 + 0x118);
          *(undefined8 *)(param_1 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar4);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 106de80e8; end: 106de83ef; -[SCGallerySendItemsTask _reportEndToEndBlizzardEvent] */

void FUN_106de80e8(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  
  _CACurrentMediaTime();
  dVar9 = *(double *)(param_2 + 0x48);
  uVar2 = *(ulong *)(param_2 + 0xd8);
  func_0x00010c109980(uVar2);
  lVar3 = *(long *)(param_2 + 0xd8);
  func_0x00010bf36f40();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 0xd8);
    func_0x00010c25a900(lVar3);
    bVar1 = lVar3 == 0;
  }
  else {
    bVar1 = false;
  }
  puVar4 = PTR_PTR_1126d2a68;
  _objc_opt_new(PTR_PTR_1126d2a68);
  func_0x00010c1b92e0();
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010bf88dc0(uVar5);
  func_0x00010c191260(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c279ba0(uVar5);
  func_0x00010c219660(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23edc0(uVar5);
  func_0x00010c2035e0(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c109980(uVar5);
  func_0x00010c1e0980(puVar4,param_3,uVar5);
  func_0x00010c226f80(puVar4,param_3,bVar1);
  lVar3 = *(long *)(param_2 + 0x60);
  func_0x00010bf529e0(lVar3);
  lVar6 = *(long *)(param_2 + 0x88);
  func_0x000108605534(lVar6);
  func_0x00010c1e88a0(puVar4,param_3,lVar6 + lVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c105440(uVar5);
  func_0x00010c2267c0(puVar4,param_3,uVar5);
  uVar7 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010beffdc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf529e0();
  func_0x00010c1a4b40(puVar4,param_3,uVar5);
  _objc_release(uVar7);
  lVar3 = *(long *)(param_2 + 0x78);
  func_0x00010c0ee3a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff200(puVar4,param_3,lVar3 != 0);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010bf529e0(uVar5);
  func_0x00010c174680(puVar4,param_3,uVar5);
  lVar3 = *(long *)(param_2 + 0xd8);
  func_0x00010bfe72c0(lVar3);
  lVar6 = *(long *)(param_2 + 0xd8);
  func_0x00010c0db360(lVar6);
  lVar8 = *(long *)(param_2 + 0xd8);
  func_0x00010c248420(lVar8);
  func_0x00010c1846c0(puVar4,param_3,lVar6 + lVar3 + lVar8);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010bfe72c0(uVar5);
  func_0x00010c1aa160(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c0db360(uVar5);
  func_0x00010c221460(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c2483c0(uVar5);
  func_0x00010c2075e0(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c248420(uVar5);
  func_0x00010c207620(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ed00(uVar5);
  func_0x00010c203500(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ee20(uVar5);
  func_0x00010c203680(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ed20(uVar5);
  func_0x00010c203520(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ed40(uVar5);
  func_0x00010c203560(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ed60(uVar5);
  func_0x00010c203580(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ede0(uVar5);
  func_0x00010c2036a0(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ee00(uVar5);
  func_0x00010c2036c0(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23ed80(uVar5);
  func_0x00010c203640(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c23eda0(uVar5);
  func_0x00010c203660(puVar4,param_3,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x270);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  func_0x00010bfb0400((param_1 - dVar9) + (double)uVar2 / 1000.0,PTR_PTR_1126b24e0,param_3,bVar1,
                      *(undefined8 *)(param_2 + 0x2c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106de83f0; end: 106de8417; -[SCGallerySendItemsTask failureReasonWithPostingState:] */

undefined ** FUN_106de83f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 7U < 10) {
    return (undefined **)(&PTR_PTR_11097d480)[param_3 + 7U];
  }
  return &PTR____CFConstantStringClassReference_110e86dd8;
}



/* Entry: 106de8418; end: 106de8563; -[SCGallerySendItemsTask _storyPostCount] */

long FUN_106de8418(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1;
  func_0x00010beeb0e0();
  if ((int)uVar6 == 0) {
    lVar7 = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x3e0);
    _objc_retain(uVar6);
    uVar2 = uVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      do {
        uVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar6);
          }
          lVar8 = *(long *)(uVar9 * 8);
          lVar3 = lVar8;
          func_0x00010bfe72c0();
          lVar4 = lVar8;
          func_0x00010c0db360();
          func_0x00010c248420();
          lVar7 = lVar3 + lVar7 + lVar4 + lVar8;
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
        uVar2 = uVar6;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar2 = uVar6;
    func_0x00010beeb2e0();
    if (((((uVar2 & 1) == 0) && (uVar2 = uVar6, func_0x00010beeb2a0(), (uVar2 & 1) == 0)) &&
        (uVar2 = uVar6, func_0x00010beeb2c0(), (uVar2 & 1) == 0)) &&
       (uVar2 = uVar6, func_0x00010beeb300(), (int)uVar2 == 0)) {
      return 0;
    }
    lVar5 = *(long *)(uVar6 + 0x3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_count_1125b2420);
    return lVar5;
  }
  return lVar7;
}



/* Entry: 106de8564; end: 106de85bf; -[SCGallerySendItemsTask _chatMessageCount] */

undefined8 FUN_106de8564(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010beeb2e0();
  if (((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010beeb2a0(), (uVar1 & 1) == 0)) &&
      (uVar1 = param_1, func_0x00010beeb2c0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010beeb300(), (int)uVar1 == 0)) {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_count_1125b2420);
  return uVar2;
}



/* Entry: 106de85c0; end: 106de85df; -[SCGallerySendItemsTask _willSendMediaAsGroupChat] */

bool FUN_106de85c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106de85e0; end: 106de85ff; -[SCGallerySendItemsTask _willSendMediaAsDirectChat] */

bool FUN_106de85e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106de8600; end: 106de861f; -[SCGallerySendItemsTask _willSendMediaAsArroyoChat] */

bool FUN_106de8600(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x168);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106de8620; end: 106de863f; -[SCGallerySendItemsTask _willSendMediaToMassSnap] */

bool FUN_106de8620(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106de8640; end: 106de867f; -[SCGallerySendItemsTask _willSendToChat] */

bool FUN_106de8640(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x88);
    func_0x00010bf529e0(lVar2);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106de8680; end: 106de86bf; -[SCGallerySendItemsTask _willPostToStories] */

bool FUN_106de8680(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x78);
  func_0x00010846b590();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x80);
    func_0x00010bf529e0(lVar3);
    bVar1 = lVar3 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106de86c0; end: 106de8727; -[SCGallerySendItemsTask _storyDestinationIncludeSpotlight] */

undefined8 FUN_106de86c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0ee3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106de8728; end: 106de875b; -[SCGallerySendItemsTask _storyDestinationCount] */

long FUN_106de8728(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010846b750(lVar1);
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010bf529e0(lVar2);
  return lVar2 + lVar1;
}



/* Entry: 106de875c; end: 106de87bb; -[SCGallerySendItemsTask _transcodingMediaDestinationInfo] */

void FUN_106de875c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11097d460);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010846bbd0(uVar2,uVar1,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106de87bc; end: 106de87c3;  */

void FUN_106de87bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 106de87c4; end: 106de88bf; -[SCGallerySendItemsTask _linkToTemporaryMp4FileFromURL:error:] */

void FUN_106de87c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4e638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099760();
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106de88c0; end: 106de898b; -[SCGallerySendItemsTask _memoriesCRFeaturedStoryFromGalleryMedia:] */

void FUN_106de88c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4650;
  _objc_opt_class(PTR_PTR_1126c4650);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = uVar2;
    func_0x00010c09da80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106de898c; end: 106de8caf; -[SCGallerySendItemsTask copy] */

undefined * FUN_106de898c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar6 = PTR_PTR_1126d2988;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 0x3e0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x370);
  uVar9 = *(undefined8 *)(param_1 + 0x288);
  uVar10 = *(undefined8 *)(param_1 + 0xd8);
  uVar5 = *(undefined1 *)(param_1 + 0x40);
  lVar7 = param_1 + 0x368;
  _objc_loadWeakRetained();
  func_0x00010c044600(puVar6,*(undefined8 *)(param_1 + 0x3a8),uVar8,uVar1,uVar3,uVar2,uVar4,uVar11,
                      uVar9,uVar10,uVar5);
  _objc_release(lVar7);
  func_0x00010c1fc880(puVar6);
  return puVar6;
}



/* Entry: 106de8cb0; end: 106de8d07; -[SCGallerySendItemsTask _shouldReadMetadataFromImage:] */

bool FUN_106de8cb0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0fce40();
  if (uVar2 < 0x961) {
    uVar2 = param_3;
    func_0x00010c0fcaa0(param_3);
    bVar1 = uVar2 < 0x961;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106de8d08; end: 106de8e1b; -[SCGallerySendItemsTask _shouldAutosaveStoryToMemories] */

undefined8 FUN_106de8d08(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c105440();
  if (iVar1 == 0) {
LAB_106de8d50:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
    func_0x00010c105460();
    if (iVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x2a8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c22e140();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
      }
      else {
        uVar4 = *(ulong *)(param_1 + 0x1e0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c11a9c0();
        _objc_release(uVar4);
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_106de8da8;
      }
    }
    lVar5 = *(long *)(param_1 + 0x78);
    func_0x00010beffdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x1e0);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfbda60();
      _objc_release(uVar7);
    }
    _objc_release(lVar5);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x1e0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbda60();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_106de8d50;
LAB_106de8da8:
    uVar8 = 1;
  }
  return uVar8;
}



/* Entry: 106de8e1c; end: 106de8e27; -[SCGallerySendItemsTask _maxImageEdgeLengthForUploadAsset:] */

undefined8 FUN_106de8e1c(void)

{
  return 0x4098600000000000;
}



/* Entry: 106de8e28; end: 106de8e3f; -[SCGallerySendItemsTask delegate] */

void FUN_106de8e28(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x3d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106de8e40; end: 106de8e4b; -[SCGallerySendItemsTask setDelegate:] */

void FUN_106de8e40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x3d8,param_3);
  return;
}



/* Entry: 106de8e4c; end: 106de8e53; -[SCGallerySendItemsTask mediaGroups] */

undefined8 FUN_106de8e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3e0);
}



/* Entry: 106de8e54; end: 106de8e5b; -[SCGallerySendItemsTask cloudFiles] */

undefined8 FUN_106de8e54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106de8e5c; end: 106de8e63; -[SCGallerySendItemsTask userContext] */

undefined8 FUN_106de8e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 106de8e64; end: 106de8e6b; -[SCGallerySendItemsTask shouldNavigateToSpotlight] */

undefined8 FUN_106de8e64(long param_1)

{
  return *(undefined8 *)(param_1 + 1000);
}



/* Entry: 106de8e6c; end: 106de8e9b; -[SCGallerySendItemsTask setShouldNavigateToSpotlight:] */

void FUN_106de8e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 1000);
  *(undefined8 *)(param_1 + 1000) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106de8e9c; end: 106de8ea3; -[SCGallerySendItemsTask isCreatePostFlow] */

undefined1 FUN_106de8e9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3d1);
}



/* Entry: 106de8ea4; end: 106de8eab; -[SCGallerySendItemsTask setIsCreatePostFlow:] */

void FUN_106de8ea4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3d1) = param_3;
  return;
}



/* Entry: 106de8eac; end: 106de8eb3; -[SCGallerySendItemsTask sendToSessionId] */

undefined8 FUN_106de8eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3f0);
}



/* Entry: 106de8eb4; end: 106de8ebb; -[SCGallerySendItemsTask setSendToSessionId:] */

void FUN_106de8eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106de8ebc; end: 106de942f; -[SCGallerySendItemsTask .cxx_destruct] */

void FUN_106de8ebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x3f0,0);
  _objc_storeStrong(param_1 + 1000,0);
  _objc_storeStrong(param_1 + 0x3e0,0);
  _objc_destroyWeak(param_1 + 0x3d8);
  _objc_storeStrong(param_1 + 0x3c8,0);
  _objc_storeStrong(param_1 + 0x3c0,0);
  _objc_storeStrong(param_1 + 0x3b8,0);
  _objc_storeStrong(param_1 + 0x3a8,0);
  _objc_storeStrong(param_1 + 0x3a0,0);
  _objc_storeStrong(param_1 + 0x398,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_destroyWeak(param_1 + 0x368);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
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
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 106de9430; end: 106de94a3; -[SCMemoriesActionMenuScopedMemoriesSendServices initWithMemoriesSendServices:] */

undefined1 * FUN_106de9430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6f00;
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



/* Entry: 106de94a4; end: 106de94ab; -[SCMemoriesActionMenuScopedMemoriesSendServices memoriesSendServices] */

undefined8 FUN_106de94a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106de94ac; end: 106de94b7; -[SCMemoriesActionMenuScopedMemoriesSendServices .cxx_destruct] */

void FUN_106de94ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106de94b8; end: 106de94bf; -[SCLegacyEagerTranscodeEntry state] */

undefined8 FUN_106de94b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106de94c0; end: 106de94c7; -[SCLegacyEagerTranscodeEntry setState:] */

void FUN_106de94c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106de94c8; end: 106de94cf; -[SCLegacyEagerTranscodeEntry scope] */

undefined8 FUN_106de94c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106de94d0; end: 106de94ff; -[SCLegacyEagerTranscodeEntry setScope:] */

void FUN_106de94d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106de9500; end: 106de9507; -[SCLegacyEagerTranscodeEntry filter] */

undefined8 FUN_106de9500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106de9508; end: 106de9537; -[SCLegacyEagerTranscodeEntry setFilter:] */

void FUN_106de9508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106de9538; end: 106de953f; -[SCLegacyEagerTranscodeEntry videoURL] */

undefined8 FUN_106de9538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106de9540; end: 106de956f; -[SCLegacyEagerTranscodeEntry setVideoURL:] */

void FUN_106de9540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106de9570; end: 106de9577; -[SCLegacyEagerTranscodeEntry overlayImage] */

undefined8 FUN_106de9570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106de9578; end: 106de95a7; -[SCLegacyEagerTranscodeEntry setOverlayImage:] */

void FUN_106de9578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106de95a8; end: 106de95af; -[SCLegacyEagerTranscodeEntry cancelled] */

undefined1 FUN_106de95a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106de95b0; end: 106de95b7; -[SCLegacyEagerTranscodeEntry setCancelled:] */

void FUN_106de95b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106de95b8; end: 106de95bf; -[SCLegacyEagerTranscodeEntry pendingConsumer] */

undefined8 FUN_106de95b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106de95c0; end: 106de95c7; -[SCLegacyEagerTranscodeEntry setPendingConsumer:] */

void FUN_106de95c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106de95c8; end: 106de961b; -[SCLegacyEagerTranscodeEntry .cxx_destruct] */

void FUN_106de95c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106de961c; end: 106de9737; -[SCMemoriesLegacyEagerSendTranscoder initWithScopeExposer:factory:circumstanceEngine:] */

undefined1 *
FUN_106de961c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6f08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106de9738; end: 106de9833; -[SCMemoriesLegacyEagerSendTranscoder startTranscodeForSnap:cloudFile:key:] */

void FUN_106de9738(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106de9834;
    puStack_68 = &UNK_11084c4a0;
    lStack_60 = param_1;
    _objc_retain(param_5);
    lStack_58 = param_5;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106de9834; end: 106de9b9b;  */

void FUN_106de9834(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x28) & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126d2a70;
      _objc_opt_new(PTR_PTR_1126d2a70);
      func_0x00010c209fc0();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      puVar4 = PTR____NSArray0__struct_11034ab48;
      func_0x00010846bbd0(PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,0,
                          PTR____NSArray0__struct_11034ab48);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010bf58fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b26c0;
      _objc_opt_class(PTR_PTR_1126b26c0);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      if (uVar1 == 0) {
        puVar6 = PTR_PTR_1126cf9c0;
        _objc_alloc(PTR_PTR_1126cf9c0);
        puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        func_0x00010bdc3540();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029d60(puVar6);
        _objc_release(uVar10);
        _objc_release(puVar9);
      }
      else {
        func_0x00010c19bd60(puVar3);
        puVar6 = PTR_PTR_1126cf9c0;
        _objc_alloc(PTR_PTR_1126cf9c0);
        puVar8 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x20);
        func_0x00010c11de00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c048b00(puVar6);
      }
      _objc_release(puVar8);
      func_0x00010c1f69c0(puVar3);
      _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
      _objc_initWeak(auStack_70,puVar6);
      _objc_copyWeak(auStack_78,*(long *)(param_1 + 0x20) + 8);
      _objc_copyWeak(auStack_90,auStack_68);
      _objc_copyWeak(auStack_88,auStack_70);
      _objc_copyWeak(auStack_80,auStack_78);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar10);
      func_0x00010c17fb20(puVar6);
      lVar2 = *(long *)(param_1 + 0x20) + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf9d620();
      _objc_release(lVar2);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar6);
      _objc_release(uVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 106de9b9c; end: 106de9e43;  */

void FUN_106de9b9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c072e60();
    if ((int)lVar2 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar5);
    }
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 == 0) goto LAB_106de9e10;
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_106de9e10;
    lVar3 = lVar2;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = lVar1 + 8;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar2;
      func_0x00010c150520(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e1e0(lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    func_0x00010c1f69c0(lVar2);
    func_0x00010c19bd60(lVar2);
    lVar3 = lVar2;
    func_0x00010bf2f680();
    if ((int)lVar3 != 0) {
      func_0x00010bdfa940(lVar1);
      func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x18));
      goto LAB_106de9e10;
    }
    func_0x00010c222240(lVar2);
    if ((param_3 == 0) || (param_4 != 0)) {
      func_0x00010c1d75e0(lVar2);
    }
    else {
      uVar6 = param_2;
      func_0x00010c0efa40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0(lVar2);
      _objc_release(uVar6);
    }
    func_0x00010c209fc0(lVar2);
    lVar3 = lVar2;
    func_0x00010c0f73e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_106de9e10;
    param_1 = lVar2;
    func_0x00010c0f73e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da1e0(lVar2);
    func_0x00010c209fc0(lVar2);
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x18));
    lVar3 = lVar2;
    func_0x00010c29bb40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0ef960(lVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))(param_1,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
LAB_106de9e10:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106de9e44; end: 106de9fcf; -[SCMemoriesLegacyEagerSendTranscoder consumeOutputForKey:destinationInfo:onResult:] */

byte FUN_106de9e44(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c08fa60();
  bVar4 = 0;
  if ((param_5 == 0) || (lVar2 == 0)) goto LAB_106de9ec0;
  uVar3 = param_4;
  func_0x00010c073360();
  if (((int)uVar3 == 0) ||
     ((uVar3 = param_4, func_0x00010c073460(), (uVar3 & 1) != 0 ||
      (uVar3 = param_4, func_0x00010c0733a0(), (uVar3 & 1) != 0)))) {
LAB_106de9ebc:
    bVar4 = 0;
  }
  else {
    uVar3 = param_4;
    func_0x00010c073440();
    if ((int)uVar3 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010bf1f440();
      if (iVar1 == 0) goto LAB_106de9ebc;
    }
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f8240(uVar5);
    bVar4 = *(byte *)(puStack_58 + 3);
    _objc_release(param_5);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
  }
LAB_106de9ec0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar4 & 1;
}



/* Entry: 106de9fd0; end: 106dea0d3;  */

void FUN_106de9fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c252440(), lVar2 != 2)) {
    lVar2 = lVar1;
    func_0x00010c0f73e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
      lVar2 = lVar1;
      func_0x00010c252440();
      if (lVar2 == 1) {
        func_0x00010c209fc0(lVar1);
        lVar2 = lVar1;
        func_0x00010c29bb40(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0ef960(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar2,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      else {
        func_0x00010c1da1e0(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dea0d4; end: 106dea12b; -[SCMemoriesLegacyEagerSendTranscoder cancelAll] */

void FUN_106dea0d4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106dea12c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 106dea12c; end: 106dea1ab;  */

void FUN_106dea12c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00(uVar1);
  func_0x00010bf97ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dea1ac; end: 106dea28f;  */

void FUN_106dea1ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010c29bb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfa940(uVar2);
    _objc_release(lVar1);
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  else {
    lVar1 = param_3;
    func_0x00010c252440();
    if (lVar1 == 0) {
      func_0x00010c178260(param_3);
      func_0x00010c1da1e0(param_3);
      lVar1 = param_3;
      func_0x00010bfad780(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ebc0();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dea290; end: 106dea2ef; -[SCMemoriesLegacyEagerSendTranscoder _deleteTempFileAtURL:] */

void FUN_106dea290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c072e60();
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dea2f0; end: 106dea493; -[SCMemoriesLegacyEagerSendTranscoder dealloc] */

void FUN_106dea2f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  plVar6 = &lStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010c252440();
        if (lVar3 == 1) {
          lVar3 = lVar7;
          func_0x00010c29bb40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c072e60();
          _objc_release(lVar3);
          if ((int)lVar4 != 0) {
            puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29bb40(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12cc60(puVar5);
            _objc_release(lVar7);
            _objc_release(puVar5);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_1126f6f08;
  lStack_140 = param_1;
  _objc_msgSendSuper2(&lStack_140,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong((undefined1 *)((long)plVar6 + 0x30),0);
  _objc_storeStrong((undefined1 *)((long)plVar6 + 0x20),0);
  _objc_storeStrong((undefined1 *)((long)plVar6 + 0x18),0);
  _objc_storeStrong((undefined1 *)((long)plVar6 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)((undefined1 *)((long)plVar6 + 8));
  return;
}



/* Entry: 106dea494; end: 106dea54f; -[SCMemoriesLegacyEagerSendTranscoder .cxx_destruct] */

void FUN_106dea494(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106dea550; end: 106dea6d3;  */

void FUN_106dea550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106dea6d4;
  uStack_60 = 0x106dea6e4;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0c0800(param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  if (puStack_78[5] == 0) {
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0dfd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dea6d4; end: 106dea6f7;  */

void FUN_106dea6d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106dea6f8; end: 106dea72f;  */

void FUN_106dea6f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dea730; end: 106dea887;  */

void FUN_106dea730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106dea6d4;
  uStack_60 = 0x106dea6e4;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  puVar1 = PTR_PTR_1126af5d0;
  if (puStack_78[5] == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dea888; end: 106dea893;  */

void FUN_106dea888(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106dea894; end: 106dea8cb;  */

void FUN_106dea894(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dea8cc; end: 106deaba3; -[SCMemoriesMultiSnapStitcher initWithCloudFiles:encryptedContentManager:mediaDestinationInfo:reverseAudioCache:timeProvider:userSession:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:previewAssetVideoProviderFactory:targetTrajectoryFactory:snapVideoFilterScopeExposer:creativeToolsMemoriesResources:] */

undefined8 *
FUN_106dea8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f6f10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
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
    _objc_storeWeak(puVar1 + 0xc,param_14);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
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



/* Entry: 106deaba4; end: 106deaceb; -[SCMemoriesMultiSnapStitcher stitchMediaGroup:sendItemsCounter:] */

void FUN_106deaba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bfbd240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106deacec; end: 106deaf3b;  */

void FUN_106deacec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x000106dea4e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106dea6d4;
    uStack_40 = 0x106dea6e4;
    puStack_38 = (undefined *)0x0;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106dea6d4;
    uStack_70 = 0x106dea6e4;
    uStack_68 = 0;
    func_0x00010c0c0800(param_2);
    puVar2 = PTR_PTR_1126ae6b8;
    if (puStack_88[5] == 0) {
      puVar3 = *(undefined **)(param_1 + 0x20);
      func_0x00010bfbd240();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = puVar2;
      func_0x00010010fab4(puVar2,PTR_DAT_1126a5228);
      puVar3 = puVar2;
      if ((int)puVar4 == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar2);
      func_0x00010c0ed100(puVar3);
      puVar2 = puVar1;
      func_0x00010bec2c20(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    __Block_object_dispose(&uStack_60,8);
    puVar3 = puStack_38;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106deaf3c; end: 106deafab;  */

void FUN_106deaf3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106deafac; end: 106deb0bf; -[SCMemoriesMultiSnapStitcher _transcodeSnaps:sendItemsCounter:] */

void FUN_106deafac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106deb0c0; end: 106deb4fb;  */

void FUN_106deb0c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  ppuVar11 = (undefined **)PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    lVar8 = lVar2;
    func_0x000106dea4e4();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)ppuVar11;
    func_0x00010c0860a0(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bffc4a0();
    uVar12 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lVar13 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar13);
    lVar8 = lVar13;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar18 = *plStack_190;
      do {
        lVar10 = 0;
        do {
          if (*plStack_190 != lVar18) {
            _objc_enumerationMutation(lVar13);
          }
          puVar9 = PTR_DAT_1126a5228;
          lVar15 = *(long *)(lStack_198 + lVar10 * 8);
          _objc_retain(lVar15);
          lVar4 = lVar15;
          func_0x00010010fab4(lVar15,puVar9);
          lVar1 = lVar15;
          if ((int)lVar4 == 0) {
            lVar1 = 0;
          }
          _objc_retain(lVar1);
          _objc_release(lVar15);
          if (lVar1 != 0) {
            uVar17 = *(undefined8 *)(lVar2 + 0x10);
            func_0x00010c241220(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar17);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar2;
            func_0x00010bece720(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(lVar4);
            _objc_release(uVar17);
            _objc_release(lVar15);
          }
          _objc_release(lVar1);
          lVar10 = lVar10 + 1;
        } while (lVar8 != lVar10);
        lVar8 = lVar13;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar13);
    func_0x00010bf5fd80(*(undefined8 *)(lVar2 + 8));
    _objc_retain(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(puVar3);
    func_0x00010bffc4a0();
    puVar6 = puVar3;
    func_0x00010bfb1920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    func_0x00010bf529e0();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if ((undefined *)0x1 < puVar16) {
      puVar16 = (undefined *)0x1;
      puVar14 = puVar6;
      do {
        puStack_138 = puVar9;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_106dea550;
        puStack_120 = &UNK_1108b97b8;
        _objc_retain(puVar5);
        puStack_118 = puVar5;
        _objc_retain(puVar3);
        puVar6 = puVar14;
        puStack_110 = puVar3;
        puStack_108 = puVar16;
        func_0x00010bfb2660(puVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puStack_110);
        _objc_release(puStack_118);
        puVar7 = puVar3;
        func_0x00010bf529e0();
        puVar16 = puVar16 + 1;
        puVar14 = puVar6;
      } while (puVar16 < puVar7);
    }
    puStack_160 = puVar9;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_106dea730;
    puStack_148 = &UNK_1108b9878;
    puStack_140 = puVar5;
    _objc_retain(puVar5);
    puVar16 = puVar6;
    func_0x00010c0b8600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_140);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puStack_1d8 = puVar9;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_106deb4fc;
    puStack_1c0 = &UNK_1108601c0;
    ppuVar11 = &puStack_1d8;
    _objc_copyWeak(auStack_1b0,param_1 + 0x30);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uStack_1a8 = uVar12;
    _objc_retain(uVar17);
    puVar9 = puVar16;
    uStack_1b8 = uVar17;
    func_0x00010bf87460(puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_1b8);
    _objc_destroyWeak(auStack_1b0);
    _objc_release(puVar16);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar11 + 5);
    __Unwind_Resume();
    lVar8 = lVar2 + 0x28;
    _objc_loadWeakRetained();
    if (lVar8 != 0) {
      func_0x00010bf5fd80(*(undefined8 *)(lVar8 + 8));
      uVar12 = *(undefined8 *)(lVar2 + 0x20);
      func_0x00010c279ba0(uVar12);
      func_0x00010c219660(uVar12);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106deb4fc; end: 106deb56b;  */

void FUN_106deb4fc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf5fd80(*(undefined8 *)(lVar1 + 8));
    dVar4 = *(double *)(param_2 + 0x30);
    uVar3 = *(ulong *)(param_2 + 0x20);
    uVar2 = uVar3;
    func_0x00010c279ba0(uVar3);
    func_0x00010c219660(uVar3,param_3,(long)((double)uVar2 + (param_1 - dVar4) * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106deb56c; end: 106deb68b; -[SCMemoriesMultiSnapStitcher _transcodeLegacyMultiSnap:cloudFile:] */

void FUN_106deb56c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cf9c0;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c029d60();
  _objc_release(param_4);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106deb68c;
  puStack_50 = &UNK_1108683b8;
  uStack_48 = param_3;
  puStack_40 = puVar1;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106deb68c; end: 106deb797;  */

void FUN_106deb68c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_2);
  func_0x00010c17fb20(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106deb798; end: 106deb87b;  */

void FUN_106deb798(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1e0(uVar3,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126af5d0;
  if (param_4 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106deb87c; end: 106deb96f; -[SCMemoriesMultiSnapStitcher _stitchVideoUrls:orientation:] */

void FUN_106deb87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106deb970; end: 106debb67;  */

void FUN_106deb970(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR_PTR_1126b1350;
    _objc_alloc(PTR_PTR_1126b1350);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c2542a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf5d860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05cee0(puVar6);
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x000108553e88(&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dbab38,1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar5 = param_1;
    func_0x00010bded860(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010bf9cfa0(lVar5);
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106debb68; end: 106debbd7;  */

void FUN_106debb68(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106debbd8; end: 106debc4b; -[SCMemoriesMultiSnapStitcher _createExportSessionWithInputUrls:outputUrl:orientation:] */

void FUN_106debbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2a78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01e200();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106debc4c; end: 106debcfb; -[SCMemoriesMultiSnapStitcher .cxx_destruct] */

void FUN_106debc4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 106debcfc; end: 106debdb7; -[SCMemoriesScopedMemoriesSendServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106debcfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d2a80;
  _objc_alloc(PTR_PTR_1126d2a80);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275e9e0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c9780(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b7420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02acc0(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106debdb8; end: 106debdef; -[SCMemoriesScopedMemoriesSendServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106debdb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275e9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275e9dc);
  return;
}



/* Entry: 106debdf0; end: 106debe63; -[SCMemoriesScopedMemoriesSendServices initWithMemoriesSendServices:] */

undefined1 * FUN_106debdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6f18;
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



/* Entry: 106debe64; end: 106debe6b; -[SCMemoriesScopedMemoriesSendServices memoriesSendServices] */

undefined8 FUN_106debe64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106debe6c; end: 106debe77; -[SCMemoriesScopedMemoriesSendServices .cxx_destruct] */

void FUN_106debe6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106debe78; end: 106debf5b; -[SCMemoriesSendFactoryServiceProvider provide] */

void FUN_106debe78(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d2a88;
  _objc_alloc(PTR_PTR_1126d2a88);
  func_0x00010c02ac80();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106debf5c; end: 106debf73;  */

void FUN_106debf5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106debf74; end: 106dec057; -[SCMemoriesSendFactoryServiceProvider makeMemoriesSendServices] */

void FUN_106debf74(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d2a90;
  _objc_alloc(PTR_PTR_1126d2a90);
  func_0x00010c02ace0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dec058; end: 106dec097;  */

void FUN_106dec058(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c15b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106dec098; end: 106ded8e7; -[SCMemoriesSendFactoryServiceProvider sendController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dec098(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  ulong uVar150;
  long lVar151;
  long lVar152;
  long lVar153;
  long lStack_388;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_340;
  long lStack_320;
  long lStack_310;
  long lStack_2f8;
  undefined8 uStack_2e8;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_210;
  long lStack_1e0;
  long lStack_1a0;
  long lStack_e0;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  if (param_1 == 0) {
    uVar150 = 0;
  }
  else {
    uVar150 = param_1 + _DAT_11275eb04;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar150;
  func_0x00010c072b80();
  _objc_release(uVar150);
  if ((uVar1 & 1) == 0) {
    if (param_1 == 0) {
      lVar99 = 0;
    }
    else {
      lVar99 = param_1 + _DAT_11275eb08;
      _objc_loadWeakRetained();
    }
    lStack_e0 = lVar99;
    func_0x00010c24b780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar99);
  }
  else {
    lStack_e0 = 0;
  }
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = param_1;
  FUN_106ded938();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar99;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar99);
  lVar99 = param_1;
  func_0x000106ded95c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar99;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar99);
  puVar5 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d2aa0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar99 = 0;
  }
  else {
    lVar99 = param_1 + _DAT_11275e9ec;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar99;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_106ded9b0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_106ded9b0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar100 = 0;
  }
  else {
    lVar100 = param_1 + _DAT_11275ea8c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar100;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar101 = 0;
  }
  else {
    lVar101 = param_1 + _DAT_11275e9f0;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar101;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar102 = 0;
  }
  else {
    lVar102 = param_1 + _DAT_11275e9f4;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar102;
  func_0x00010bf11c20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar103 = 0;
  }
  else {
    lVar103 = param_1 + _DAT_11275ea10;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar103;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar104 = 0;
  }
  else {
    lVar104 = param_1 + _DAT_11275e9fc;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar104;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar105 = 0;
  }
  else {
    lVar105 = param_1 + _DAT_11275ea3c;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar105;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x000106ded9d4();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c15a860();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x000106ded9d4();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar106 = 0;
  }
  else {
    lVar106 = param_1 + _DAT_11275ea38;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar106;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar107 = 0;
  }
  else {
    lVar107 = param_1 + _DAT_11275ea14;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar107;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar108 = 0;
  }
  else {
    lVar108 = param_1 + _DAT_11275ea18;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar108;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x000106ded9f8();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x000106ded9f8();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar109 = 0;
  }
  else {
    lVar109 = param_1 + _DAT_11275ea24;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar109;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar110 = 0;
  }
  else {
    lVar110 = param_1 + _DAT_11275ea28;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar110;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar111 = 0;
  }
  else {
    lVar111 = param_1 + _DAT_11275ea2c;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar111;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar112 = 0;
  }
  else {
    lVar112 = param_1 + _DAT_11275ea48;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar112;
  func_0x00010bfbd1e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar113 = 0;
  }
  else {
    lVar113 = param_1 + _DAT_11275ea74;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar113;
  func_0x00010bf69900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar114 = 0;
  }
  else {
    lVar114 = param_1 + _DAT_11275ea04;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar114;
  func_0x00010c08ef00();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x000106deda1c();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x000106deda40();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_1a0 = 0;
    lVar115 = 0;
  }
  else {
    lStack_1a0 = param_1 + _DAT_11275ea60;
    _objc_loadWeakRetained();
    lVar115 = param_1 + _DAT_11275ea30;
    _objc_loadWeakRetained();
  }
  lVar38 = lVar115;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar116 = 0;
  }
  else {
    lVar116 = param_1 + _DAT_11275ea44;
    _objc_loadWeakRetained();
  }
  lVar39 = lVar116;
  func_0x00010c0c9dc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar117 = 0;
  }
  else {
    lVar117 = param_1 + _DAT_11275ea4c;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar117;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x000106ded95c();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x000106deda1c();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = lVar43;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x000106deda64();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010c1104a0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1;
  func_0x000106deda64();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_1e0 = 0;
    lVar118 = 0;
  }
  else {
    lStack_1e0 = param_1 + _DAT_11275ea08;
    _objc_loadWeakRetained();
    lVar118 = param_1 + _DAT_11275ea0c;
    _objc_loadWeakRetained();
  }
  lVar49 = lVar118;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar119 = 0;
  }
  else {
    lVar119 = param_1 + _DAT_11275e9f8;
    _objc_loadWeakRetained();
  }
  lVar50 = lVar119;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1;
  func_0x000106deda88();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = lVar51;
  func_0x00010c29a4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x000106deda88();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010bfe7f20();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1;
  func_0x000106dedaac();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar55;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_210 = 0;
    lVar120 = 0;
  }
  else {
    uStack_210 = *(undefined8 *)(param_1 + _DAT_11275eb1c);
    _objc_retain();
    lVar120 = param_1 + _DAT_11275ea68;
    _objc_loadWeakRetained();
  }
  lVar57 = lVar120;
  func_0x00010c06a980();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar121 = 0;
  }
  else {
    lVar121 = param_1 + _DAT_11275ea6c;
    _objc_loadWeakRetained();
  }
  lVar58 = lVar121;
  func_0x00010c22b420();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar122 = 0;
  }
  else {
    lVar122 = param_1 + _DAT_11275ea88;
    _objc_loadWeakRetained();
  }
  lVar59 = lVar122;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar123 = 0;
  }
  else {
    lVar123 = param_1 + _DAT_11275ea7c;
    _objc_loadWeakRetained();
  }
  lVar60 = lVar123;
  func_0x00010bf9e340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar124 = 0;
  }
  else {
    lVar124 = param_1 + _DAT_11275ea90;
    _objc_loadWeakRetained();
  }
  lVar61 = lVar124;
  func_0x00010c0c9ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar125 = 0;
  }
  else {
    lVar125 = param_1 + _DAT_11275ea34;
    _objc_loadWeakRetained();
  }
  lVar62 = lVar125;
  func_0x00010c0c88c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_250 = 0;
    uStack_248 = 0;
    lVar126 = 0;
  }
  else {
    uStack_248 = *(undefined8 *)(param_1 + _DAT_11275eb20);
    _objc_retain();
    lStack_250 = param_1 + _DAT_11275eb18;
    _objc_loadWeakRetained();
    lVar126 = param_1 + _DAT_11275ea80;
    _objc_loadWeakRetained();
  }
  lVar63 = lVar126;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar127 = 0;
  }
  else {
    lVar127 = param_1 + _DAT_11275eaa0;
    _objc_loadWeakRetained();
  }
  lVar64 = lVar127;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1;
  FUN_106ded938();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar128 = 0;
  }
  else {
    lVar128 = param_1 + _DAT_11275eab0;
    _objc_loadWeakRetained();
  }
  lVar67 = lVar128;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar129 = 0;
  }
  else {
    lVar129 = param_1 + _DAT_11275ea40;
    _objc_loadWeakRetained();
  }
  lVar68 = lVar129;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar130 = 0;
  }
  else {
    lVar130 = param_1 + _DAT_11275eac0;
    _objc_loadWeakRetained();
  }
  lVar69 = lVar130;
  func_0x00010c13ff40();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_1;
  func_0x000106deda40();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = lVar70;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar131 = 0;
  }
  else {
    lVar131 = param_1 + _DAT_11275ea94;
    _objc_loadWeakRetained();
  }
  lVar72 = lVar131;
  func_0x00010c0c9c00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar132 = 0;
  }
  else {
    lVar132 = param_1 + _DAT_11275ea98;
    _objc_loadWeakRetained();
  }
  lVar73 = lVar132;
  func_0x00010c0c64e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar133 = 0;
  }
  else {
    lVar133 = param_1 + _DAT_11275ea9c;
    _objc_loadWeakRetained();
  }
  lVar74 = lVar133;
  func_0x00010bf97800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar134 = 0;
  }
  else {
    lVar134 = param_1 + _DAT_11275eaa4;
    _objc_loadWeakRetained();
  }
  lVar75 = lVar134;
  func_0x00010c0c9f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar135 = 0;
  }
  else {
    lVar135 = param_1 + _DAT_11275eaac;
    _objc_loadWeakRetained();
  }
  lVar76 = lVar135;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar136 = 0;
  }
  else {
    lVar136 = param_1 + _DAT_11275eab8;
    _objc_loadWeakRetained();
  }
  lVar77 = lVar136;
  func_0x00010c14a940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar137 = 0;
  }
  else {
    lVar137 = param_1 + _DAT_11275eabc;
    _objc_loadWeakRetained();
  }
  lVar78 = lVar137;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar138 = 0;
  }
  else {
    lVar138 = param_1 + _DAT_11275eadc;
    _objc_loadWeakRetained();
  }
  lVar79 = lVar138;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar139 = 0;
  }
  else {
    lVar139 = param_1 + _DAT_11275eae4;
    _objc_loadWeakRetained();
  }
  lVar80 = lVar139;
  func_0x00010c240520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar140 = 0;
  }
  else {
    lVar140 = param_1 + _DAT_11275eae0;
    _objc_loadWeakRetained();
  }
  lVar81 = lVar140;
  func_0x00010c2403e0();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = param_1;
  func_0x000106dedaac();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_2e8 = 0;
    lVar141 = 0;
  }
  else {
    uStack_2e8 = *(undefined8 *)(param_1 + _DAT_11275eb24);
    _objc_retain();
    lVar141 = param_1 + _DAT_11275ead8;
    _objc_loadWeakRetained();
  }
  lVar83 = lVar141;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_2f8 = 0;
  }
  else {
    lStack_2f8 = param_1 + _DAT_11275eab4;
    _objc_loadWeakRetained();
  }
  lVar84 = param_1;
  func_0x000106deda1c();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = lVar84;
  func_0x00010c2947e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar142 = 0;
  }
  else {
    lVar142 = param_1 + _DAT_11275eac4;
    _objc_loadWeakRetained();
  }
  lVar86 = lVar142;
  func_0x00010c08da20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_310 = 0;
    lVar143 = 0;
  }
  else {
    lStack_310 = param_1 + _DAT_11275eac8;
    _objc_loadWeakRetained();
    lVar143 = param_1 + _DAT_11275eacc;
    _objc_loadWeakRetained();
  }
  lVar87 = lVar143;
  func_0x00010bf8cbe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_320 = 0;
    lVar144 = 0;
  }
  else {
    lStack_320 = param_1 + _DAT_11275ead0;
    _objc_loadWeakRetained();
    lVar144 = param_1 + _DAT_11275ead4;
    _objc_loadWeakRetained();
  }
  lVar88 = lVar144;
  func_0x00010c0ca880();
  _objc_retainAutoreleasedReturnValue();
  lVar89 = param_1;
  func_0x000106deda1c();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = lVar89;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar145 = 0;
  }
  else {
    lVar145 = param_1 + _DAT_11275eae8;
    _objc_loadWeakRetained();
  }
  lVar91 = lVar145;
  func_0x00010c2a29c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_340 = 0;
    lVar146 = 0;
  }
  else {
    uStack_340 = *(undefined8 *)(param_1 + _DAT_11275eb2c);
    _objc_retain();
    lVar146 = param_1 + _DAT_11275eaec;
    _objc_loadWeakRetained();
  }
  lVar92 = lVar146;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_370 = 0;
    lStack_360 = 0;
    lStack_350 = 0;
    uStack_358 = 0;
    lStack_368 = 0;
    lVar147 = 0;
  }
  else {
    lStack_350 = param_1 + _DAT_11275eaf0;
    _objc_loadWeakRetained();
    uStack_358 = *(undefined8 *)(param_1 + _DAT_11275eb28);
    _objc_retain();
    lStack_360 = param_1 + _DAT_11275eaf4;
    _objc_loadWeakRetained();
    lStack_368 = param_1 + _DAT_11275eb0c;
    _objc_loadWeakRetained();
    lStack_370 = param_1 + _DAT_11275eaf8;
    _objc_loadWeakRetained();
    lVar147 = param_1 + _DAT_11275eafc;
    _objc_loadWeakRetained();
  }
  lVar93 = lVar147;
  func_0x00010c27fe60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar148 = 0;
  }
  else {
    lVar148 = param_1 + _DAT_11275eb00;
    _objc_loadWeakRetained();
  }
  lVar94 = lVar148;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_388 = 0;
    lVar149 = 0;
  }
  else {
    lStack_388 = param_1 + _DAT_11275eb10;
    _objc_loadWeakRetained();
    lVar149 = param_1 + _DAT_11275eb30;
    _objc_loadWeakRetained();
  }
  lVar95 = lVar149;
  func_0x00010c15d360();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar152 = 0;
  }
  else {
    lVar152 = param_1 + _DAT_11275eb34;
    _objc_loadWeakRetained();
  }
  lVar96 = lVar152;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = param_1;
  func_0x000106deda88();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar153 = 0;
  }
  else {
    lVar153 = param_1 + _DAT_11275ea5c;
    _objc_loadWeakRetained();
  }
  lVar98 = lVar153;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar151 = 0;
    param_1 = 0;
  }
  else {
    lVar151 = param_1 + _DAT_11275eb14;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_11275eb38;
    _objc_loadWeakRetained();
  }
  func_0x00010c05d360();
  _objc_release(param_1);
  _objc_release(lVar151);
  _objc_release(lVar98);
  _objc_release(lVar153);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar152);
  _objc_release(lVar95);
  _objc_release(lVar149);
  _objc_release(lStack_388);
  _objc_release(lVar94);
  _objc_release(lVar148);
  _objc_release(lVar93);
  _objc_release(lVar147);
  _objc_release(lStack_370);
  _objc_release(lStack_368);
  _objc_release(lStack_360);
  _objc_release(uStack_358);
  _objc_release(lStack_350);
  _objc_release(lVar92);
  _objc_release(lVar146);
  _objc_release(uStack_340);
  _objc_release(lVar91);
  _objc_release(lVar145);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar144);
  _objc_release(lStack_320);
  _objc_release(lVar87);
  _objc_release(lVar143);
  _objc_release(lStack_310);
  _objc_release(lVar86);
  _objc_release(lVar142);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lStack_2f8);
  _objc_release(lVar83);
  _objc_release(lVar141);
  _objc_release(uStack_2e8);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar140);
  _objc_release(lVar80);
  _objc_release(lVar139);
  _objc_release(lVar79);
  _objc_release(lVar138);
  _objc_release(lVar78);
  _objc_release(lVar137);
  _objc_release(lVar77);
  _objc_release(lVar136);
  _objc_release(lVar76);
  _objc_release(lVar135);
  _objc_release(lVar75);
  _objc_release(lVar134);
  _objc_release(lVar74);
  _objc_release(lVar133);
  _objc_release(lVar73);
  _objc_release(lVar132);
  _objc_release(lVar72);
  _objc_release(lVar131);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar130);
  _objc_release(lVar68);
  _objc_release(lVar129);
  _objc_release(lVar67);
  _objc_release(lVar128);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar127);
  _objc_release(lVar63);
  _objc_release(lVar126);
  _objc_release(lStack_250);
  _objc_release(uStack_248);
  _objc_release(lVar62);
  _objc_release(lVar125);
  _objc_release(lVar61);
  _objc_release(lVar124);
  _objc_release(lVar60);
  _objc_release(lVar123);
  _objc_release(lVar59);
  _objc_release(lVar122);
  _objc_release(lVar58);
  _objc_release(lVar121);
  _objc_release(lVar57);
  _objc_release(lVar120);
  _objc_release(uStack_210);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar119);
  _objc_release(lVar49);
  _objc_release(lVar118);
  _objc_release(lStack_1e0);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar117);
  _objc_release(lVar39);
  _objc_release(lVar116);
  _objc_release(lVar38);
  _objc_release(lVar115);
  _objc_release(lStack_1a0);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar114);
  _objc_release(lVar32);
  _objc_release(lVar113);
  _objc_release(lVar31);
  _objc_release(lVar112);
  _objc_release(lVar30);
  _objc_release(lVar111);
  _objc_release(lVar29);
  _objc_release(lVar110);
  _objc_release(lVar28);
  _objc_release(lVar109);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar108);
  _objc_release(lVar22);
  _objc_release(lVar107);
  _objc_release(lVar21);
  _objc_release(lVar106);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar105);
  _objc_release(lVar15);
  _objc_release(lVar104);
  _objc_release(lVar14);
  _objc_release(lVar103);
  _objc_release(lVar13);
  _objc_release(lVar102);
  _objc_release(lVar12);
  _objc_release(lVar101);
  _objc_release(lVar11);
  _objc_release(lVar100);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar99);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106ded8e8; end: 106ded937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ded8e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11275ea70;
    _objc_loadWeakRetained(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ded938; end: 106ded97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ded938(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275eaa8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ded980; end: 106ded9af;  */

void FUN_106ded980(void)

{
  _objc_alloc(PTR_PTR_1126d2a98);
  func_0x00010bffab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ded9b0; end: 106dedacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ded9b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275ea84);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dedad0; end: 106dedeff; -[SCMemoriesSendFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dedad0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275eb38);
  _objc_destroyWeak(param_1 + _DAT_11275eb34);
  _objc_destroyWeak(param_1 + _DAT_11275eb30);
  _objc_storeStrong(param_1 + _DAT_11275eb2c,0);
  _objc_storeStrong(param_1 + _DAT_11275eb28,0);
  _objc_storeStrong(param_1 + _DAT_11275eb24,0);
  _objc_storeStrong(param_1 + _DAT_11275eb20,0);
  _objc_storeStrong(param_1 + _DAT_11275eb1c,0);
  _objc_destroyWeak(param_1 + _DAT_11275eb18);
  _objc_destroyWeak(param_1 + _DAT_11275eb14);
  _objc_destroyWeak(param_1 + _DAT_11275eb10);
  _objc_destroyWeak(param_1 + _DAT_11275eb0c);
  _objc_destroyWeak(param_1 + _DAT_11275eb08);
  _objc_destroyWeak(param_1 + _DAT_11275eb04);
  _objc_destroyWeak(param_1 + _DAT_11275eb00);
  _objc_destroyWeak(param_1 + _DAT_11275eafc);
  _objc_destroyWeak(param_1 + _DAT_11275eaf8);
  _objc_destroyWeak(param_1 + _DAT_11275eaf4);
  _objc_destroyWeak(param_1 + _DAT_11275eaf0);
  _objc_destroyWeak(param_1 + _DAT_11275eaec);
  _objc_destroyWeak(param_1 + _DAT_11275eae8);
  _objc_destroyWeak(param_1 + _DAT_11275eae4);
  _objc_destroyWeak(param_1 + _DAT_11275eae0);
  _objc_destroyWeak(param_1 + _DAT_11275eadc);
  _objc_destroyWeak(param_1 + _DAT_11275ead8);
  _objc_destroyWeak(param_1 + _DAT_11275ead4);
  _objc_destroyWeak(param_1 + _DAT_11275ead0);
  _objc_destroyWeak(param_1 + _DAT_11275eacc);
  _objc_destroyWeak(param_1 + _DAT_11275eac8);
  _objc_destroyWeak(param_1 + _DAT_11275eac4);
  _objc_destroyWeak(param_1 + _DAT_11275eac0);
  _objc_destroyWeak(param_1 + _DAT_11275eabc);
  _objc_destroyWeak(param_1 + _DAT_11275eab8);
  _objc_destroyWeak(param_1 + _DAT_11275eab4);
  _objc_destroyWeak(param_1 + _DAT_11275eab0);
  _objc_destroyWeak(param_1 + _DAT_11275eaac);
  _objc_destroyWeak(param_1 + _DAT_11275eaa8);
  _objc_destroyWeak(param_1 + _DAT_11275eaa4);
  _objc_destroyWeak(param_1 + _DAT_11275eaa0);
  _objc_destroyWeak(param_1 + _DAT_11275ea9c);
  _objc_destroyWeak(param_1 + _DAT_11275ea98);
  _objc_destroyWeak(param_1 + _DAT_11275ea94);
  _objc_destroyWeak(param_1 + _DAT_11275ea90);
  _objc_destroyWeak(param_1 + _DAT_11275ea8c);
  _objc_destroyWeak(param_1 + _DAT_11275ea88);
  _objc_destroyWeak(param_1 + _DAT_11275ea84);
  _objc_destroyWeak(param_1 + _DAT_11275ea80);
  _objc_destroyWeak(param_1 + _DAT_11275ea7c);
  _objc_destroyWeak(param_1 + _DAT_11275ea78);
  _objc_destroyWeak(param_1 + _DAT_11275ea74);
  _objc_destroyWeak(param_1 + _DAT_11275ea70);
  _objc_destroyWeak(param_1 + _DAT_11275ea6c);
  _objc_destroyWeak(param_1 + _DAT_11275ea68);
  _objc_destroyWeak(param_1 + _DAT_11275ea64);
  _objc_destroyWeak(param_1 + _DAT_11275ea60);
  _objc_destroyWeak(param_1 + _DAT_11275ea5c);
  _objc_destroyWeak(param_1 + _DAT_11275ea58);
  _objc_destroyWeak(param_1 + _DAT_11275ea54);
  _objc_destroyWeak(param_1 + _DAT_11275ea50);
  _objc_destroyWeak(param_1 + _DAT_11275ea4c);
  _objc_destroyWeak(param_1 + _DAT_11275ea48);
  _objc_destroyWeak(param_1 + _DAT_11275ea44);
  _objc_destroyWeak(param_1 + _DAT_11275ea40);
  _objc_destroyWeak(param_1 + _DAT_11275ea3c);
  _objc_destroyWeak(param_1 + _DAT_11275ea38);
  _objc_destroyWeak(param_1 + _DAT_11275ea34);
  _objc_destroyWeak(param_1 + _DAT_11275ea30);
  _objc_destroyWeak(param_1 + _DAT_11275ea2c);
  _objc_destroyWeak(param_1 + _DAT_11275ea28);
  _objc_destroyWeak(param_1 + _DAT_11275ea24);
  _objc_destroyWeak(param_1 + _DAT_11275ea20);
  _objc_destroyWeak(param_1 + _DAT_11275ea1c);
  _objc_destroyWeak(param_1 + _DAT_11275ea18);
  _objc_destroyWeak(param_1 + _DAT_11275ea14);
  _objc_destroyWeak(param_1 + _DAT_11275ea10);
  _objc_destroyWeak(param_1 + _DAT_11275ea0c);
  _objc_destroyWeak(param_1 + _DAT_11275ea08);
  _objc_destroyWeak(param_1 + _DAT_11275ea04);
  _objc_destroyWeak(param_1 + _DAT_11275ea00);
  _objc_destroyWeak(param_1 + _DAT_11275e9fc);
  _objc_destroyWeak(param_1 + _DAT_11275e9f8);
  _objc_destroyWeak(param_1 + _DAT_11275e9f4);
  _objc_destroyWeak(param_1 + _DAT_11275e9f0);
  _objc_destroyWeak(param_1 + _DAT_11275e9ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275e9e8);
  return;
}



/* Entry: 106dedf00; end: 106dedf73; -[SCMemoriesSendFactoryServices initWithMemoriesSendFactory:] */

undefined1 * FUN_106dedf00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6f20;
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


