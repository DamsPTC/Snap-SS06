/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079af224; end: 1079af2a7; -[SCDiscoverFeedGenericRemoteSectionParser parseSectionMetadataWithDisplayName:loggingKey:feedType:eof:] */

void FUN_1079af224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2248;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0126e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079af2a8; end: 1079af41f; -[SCDiscoverFeedGenericRemoteSectionParser remoteSectionDescriptorWithSectionMetadata:circumstanceEngine:] */

void FUN_1079af2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bfa4340(param_7);
  func_0x000108f53fe8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2180;
  _objc_alloc(PTR_PTR_1126c2180);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_7);
  func_0x00010c0df840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010bf86660(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c0127c0(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  FUN_107c27608(uVar1);
  uVar5 = 0x3f95cfaac0000000;
  func_0x00010b8169fc(0x3f95cfaac0000000);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x0001079b7cb4(uVar5,uVar1,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079af420; end: 1079af427; -[SCDiscoverFeedGenericRemoteSectionParser remoteSectionDescriptorWithSection:] */

void FUN_1079af420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 1;
  lVar2 = param_7;
  func_0x00010c08cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    lVar2 = param_7;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c233900();
    iVar1 = (int)lVar6;
    _objc_release(lVar2);
    lVar2 = param_7;
    func_0x00010c08cb80(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154d40();
    _objc_release(lVar2);
    lVar2 = param_7;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08d100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar6 != 0) {
      lVar2 = param_7;
      func_0x00010c08cb80(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puStack_e0 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x2020000000;
      uStack_98 = 0;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x1079af5fc;
      puStack_c0 = &UNK_1109f3658;
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x1079af660;
      puStack_e8 = &UNK_1109f3688;
      puStack_b8 = puStack_e0;
      puStack_a8 = puStack_e0;
      func_0x00010c0c1440(lVar6);
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(lVar6);
      _objc_release(lVar6);
      _objc_release(lVar2);
      lVar2 = param_7;
      func_0x00010c08cb80(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1440();
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
  }
  lVar2 = param_7;
  func_0x00010bfa4340(param_7);
  func_0x000108f53fe8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2180;
  _objc_alloc(PTR_PTR_1126c2180);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_7);
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_7;
    func_0x00010bf86660(param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0127c0(puVar3);
  if (iVar1 != 0) {
    _objc_release(lVar6);
  }
  _objc_release(puVar4);
  FUN_107c27608(lVar2);
  if (*(char *)(puStack_118 + 3) == '\x01') {
    dVar7 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
  }
  else {
    dVar8 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
    dVar7 = dVar8;
    func_0x00010b816218();
    dVar7 = (double)(long)(dVar8 * dVar7) / dVar7;
  }
  lVar6 = lVar2;
  if (*(char *)(puStack_118 + 3) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7cb4(dVar7,lVar2,puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
    FUN_1079b7d94(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7bc4(dVar7,lVar2,puVar5,puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1079af428; end: 1079af5ab;  */

void FUN_1079af428(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar5;
  undefined **ppuVar4;
  
  _objc_retain();
  ppuVar4 = &PTR_PTR_1126b1700;
  puVar3 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  if ((uVar5 & 1) == 0) {
    ppuVar4 = &PTR_PTR_1126b4890;
    puVar3 = PTR_PTR_1126b4890;
    _objc_opt_class(PTR_PTR_1126b4890);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      goto LAB_1079af50c;
    }
  }
  puVar3 = *ppuVar4;
  _objc_retain(param_1);
  _objc_opt_class(puVar3);
  uVar1 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar5 = param_1;
  if ((uVar1 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_1);
  uVar1 = uVar5;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  uVar5 = uVar1;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
LAB_1079af50c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1079af5ac; end: 1079af6a7;  */

void FUN_1079af5ac(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1554e0(param_1);
  func_0x0001079af528();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079af6a8; end: 1079afb3b;  */

void FUN_1079af6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 1;
  lVar2 = param_5;
  func_0x00010c08cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    lVar2 = param_5;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c233900();
    iVar1 = (int)lVar6;
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c08cb80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154d40();
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08d100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar6 != 0) {
      lVar2 = param_5;
      func_0x00010c08cb80(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puStack_e0 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x2020000000;
      uStack_98 = 0;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x1079af5fc;
      puStack_c0 = &UNK_1109f3658;
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x1079af660;
      puStack_e8 = &UNK_1109f3688;
      puStack_b8 = puStack_e0;
      puStack_a8 = puStack_e0;
      func_0x00010c0c1440(lVar6);
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(lVar6);
      _objc_release(lVar6);
      _objc_release(lVar2);
      lVar2 = param_5;
      func_0x00010c08cb80(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1440();
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
  }
  lVar2 = param_5;
  func_0x00010bfa4340(param_5);
  func_0x000108f53fe8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2180;
  _objc_alloc(PTR_PTR_1126c2180);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_5);
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_5;
    func_0x00010bf86660(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0127c0(puVar3);
  if (iVar1 != 0) {
    _objc_release(lVar6);
  }
  _objc_release(puVar4);
  FUN_107c27608(lVar2);
  if (*(char *)(puStack_118 + 3) == '\x01') {
    dVar7 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
  }
  else {
    dVar8 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
    dVar7 = dVar8;
    func_0x00010b816218();
    dVar7 = (double)(long)(dVar8 * dVar7) / dVar7;
  }
  lVar6 = lVar2;
  if (*(char *)(puStack_118 + 3) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7cb4(dVar7,lVar2,puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
    FUN_1079b7d94(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7bc4(dVar7,lVar2,puVar5,puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1079afb3c; end: 1079afb5f;  */

void FUN_1079afb3c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1079afb60; end: 1079afc53;  */

void FUN_1079afb60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c23f8;
    _objc_opt_new(PTR_PTR_1126c23f8);
    func_0x00010c2b7e40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b25e0(param_1,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6060(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6080(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079afc54; end: 1079aff73; -[SCDiscoverFeedGenericSectionCreator initWithActionHandler:discoverFeedDataFetcher:imageDownloader:bitmojiAvatarId:textColor:backgroundColor:shouldBounceCarousels:gestureCoordinator:sectionHeaderActionHandler:snapchattersSynchronousDataFetcher:circumstanceEngine:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:] */

undefined8 *
FUN_1079afc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f9098;
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
    _objc_retain(param_15);
    uVar2 = puVar1[4];
    puVar1[4] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[5];
    puVar1[5] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2178;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079aff74; end: 1079affc3; -[SCDiscoverFeedGenericSectionCreator setSectionExtensionServices:] */

void FUN_1079aff74(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079affc4; end: 1079b04b3; -[SCDiscoverFeedGenericSectionCreator sectionForDescriptor:] */

void FUN_1079affc4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  puVar5 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar1);
  puVar1 = puVar6;
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar6);
  if (puVar1 == (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b4890;
    _objc_opt_class(PTR_PTR_1126b4890);
    puVar2 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar6);
    puVar6 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar5);
    if (puVar6 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
      goto LAB_1079b0478;
    }
    puVar6 = puVar5;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2180;
    _objc_opt_class(PTR_PTR_1126c2180);
    puVar3 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar2);
    puVar2 = puVar6;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c156900();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c262de0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    FUN_1079afb60(0x4028000000000000,puVar6,puVar3,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126bed88;
    _objc_alloc(PTR_PTR_1126bed88);
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c04f820(puVar6);
    }
    else {
      puVar3 = PTR_PTR_1126c23a8;
      _objc_alloc(PTR_PTR_1126c23a8);
      func_0x00010c01a180();
      func_0x00010c04f820(puVar6);
      _objc_release(puVar3);
    }
    puVar3 = puVar2;
    func_0x00010c26ee40();
    if ((puVar3 == (undefined *)0x5) ||
       (puVar3 = puVar2, func_0x00010c26ee40(), puVar3 == (undefined *)0x6)) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      puVar3 = puVar2;
      func_0x00010bfa4340(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010bf009e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010bf529e0(uVar7);
      _objc_release(uVar7);
    }
    func_0x00010c1f7b20(puVar6);
    func_0x00010c1738c0(puVar6);
    func_0x00010c1951e0(puVar6);
    puVar3 = PTR_PTR_1126c23b0;
    _objc_alloc(PTR_PTR_1126c23b0);
    func_0x00010c00cd80();
    func_0x00010c16e440();
    func_0x00010c1f9240(puVar6);
    func_0x00010c189700(puVar6);
    func_0x00010c161980(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2180;
    _objc_opt_class(PTR_PTR_1126c2180);
    puVar2 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar5);
    puVar5 = puVar6;
    if (((ulong)puVar2 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c156900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c262de0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    FUN_1079afb60(0x4028000000000000,puVar6,puVar2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    if (puVar5 == (undefined *)0x0) {
      func_0x00010c04f820(puVar6);
    }
    else {
      puVar2 = PTR_PTR_1126c23a8;
      _objc_alloc(PTR_PTR_1126c23a8);
      func_0x00010c01a180();
      func_0x00010c04f820(puVar6);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126c23b0;
    _objc_alloc(PTR_PTR_1126c23b0);
    func_0x00010c00cd80();
    func_0x00010c16e440();
    func_0x00010c18e980(puVar2);
    func_0x00010c1f9240(puVar6);
    func_0x00010c189700(puVar6);
    puVar3 = PTR_PTR_1126c23a0;
    _objc_alloc(PTR_PTR_1126c23a0);
    func_0x00010c042de0();
    func_0x00010c1b9a60(puVar6);
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c08caa0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189840();
    _objc_release(puVar3);
    func_0x00010c161980(puVar6);
  }
  _objc_release(puVar2);
LAB_1079b0478:
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1079b04b4; end: 1079b04bb; -[SCDiscoverFeedGenericSectionCreator sectionExtensionServices] */

undefined8 FUN_1079b04b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1079b04bc; end: 1079b0587; -[SCDiscoverFeedGenericSectionCreator .cxx_destruct] */

void FUN_1079b04bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1079b0588; end: 1079b0593; +[SCDiscoverFeedGenericSectionDataProvider announcerIdentifier] */

undefined ** FUN_1079b0588(void)

{
  return &PTR____CFConstantStringClassReference_110ea7bd8;
}



/* Entry: 1079b0594; end: 1079b059b; -[SCDiscoverFeedGenericSectionDataProvider addListener:] */

void FUN_1079b0594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079b059c; end: 1079b05a3; -[SCDiscoverFeedGenericSectionDataProvider removeListener:] */

void FUN_1079b059c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079b05a4; end: 1079b0953; -[SCDiscoverFeedGenericSectionDataProvider initWithDiscoverFeedDataFetcher:imageDownloader:bitmojiAvatarId:gestureCoordinator:initialHeaderViewModel:snapchattersSynchronousDataFetcher:isThreeColumnsLayoutEnabled:circumstanceEngine:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:promotedStoriesLogger:friendsContextLabelBuilder:] */

undefined8 *
FUN_1079b05a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_80 = PTR_PTR_1126f90a0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[7];
    puVar1[7] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 0x14) = 0;
    _objc_retain(param_7);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[8];
    puVar1[8] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[9];
    puVar1[9] = param_16;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 0xf) = param_9;
    _objc_retain(param_11);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_13);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_13);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar3);
    _objc_release(param_13);
    _objc_release(param_13);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079b0954; end: 1079b09af;  */

void FUN_1079b0954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1cc00();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079b09b0; end: 1079b0a3b;  */

void FUN_1079b09b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2328;
  func_0x00010bf71b80(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079b0a3c; end: 1079b0a47; -[SCDiscoverFeedGenericSectionDataProvider setUp] */

void FUN_1079b0a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addUpdateListener__11259cb88,param_1);
  return;
}



/* Entry: 1079b0a48; end: 1079b0a83; -[SCDiscoverFeedGenericSectionDataProvider tearDown] */

void FUN_1079b0a48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12eea0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079b0a84; end: 1079b0b37; -[SCDiscoverFeedGenericSectionDataProvider setSectionDataModel:] */

void FUN_1079b0a84(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0xb0);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_1079b0b24;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    *(ulong *)(param_1 + 0xb0) = uVar3;
    _objc_release(uVar2);
    func_0x00010be8ab60(param_1);
  }
LAB_1079b0b24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079b0b38; end: 1079b0b3f; -[SCDiscoverFeedGenericSectionDataProvider dataLoadingStatus] */

undefined8 FUN_1079b0b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079b0b40; end: 1079b0b47; -[SCDiscoverFeedGenericSectionDataProvider experimentalPagingMode] */

undefined8 FUN_1079b0b40(void)

{
  return 0;
}



/* Entry: 1079b0b48; end: 1079b0b4f; -[SCDiscoverFeedGenericSectionDataProvider numberOfItemsInSection:] */

void FUN_1079b0b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1079b0b50; end: 1079b0bf3; -[SCDiscoverFeedGenericSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1079b0b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1079b0bf4;
  puStack_40 = &UNK_110845ab0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079b0bf4; end: 1079b0c1f;  */

void FUN_1079b0bf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 1079b0c20; end: 1079b0d6b; -[SCDiscoverFeedGenericSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1079b0c20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [136];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = puVar2;
  func_0x00010bef7f60();
  FUN_1079b9684();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_1c8,puVar1);
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e8 = 0xc2000000;
    pcStack_1e0 = FUN_1079b1014;
    puStack_1d8 = &UNK_110845ae0;
    puVar11 = auStack_1c8;
    _objc_copyWeak(auStack_1d0,puVar11);
    ppuVar4 = &puStack_1f0;
    _objc_retainBlock();
    ppuStack_140 = &PTR____CFConstantStringClassReference_110eb45f8;
    ppuVar5 = ppuVar4;
    _objc_retainBlock();
    ppuStack_138 = &PTR____CFConstantStringClassReference_110eb45d8;
    ppuVar6 = ppuVar4;
    ppuStack_120 = ppuVar5;
    _objc_retainBlock();
    ppuStack_130 = &PTR____CFConstantStringClassReference_110eb4698;
    ppuVar7 = ppuVar4;
    ppuStack_118 = ppuVar6;
    _objc_retainBlock();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110eb46b8;
    ppuVar8 = ppuVar4;
    ppuStack_110 = ppuVar7;
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_108 = ppuVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar3 = puVar9;
    func_0x00010bef7f60();
    FUN_1079b9740();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        ppuVar5 = ppuVar4;
        _objc_retainBlock(ppuVar4);
        func_0x00010c1d0560(puVar9);
        _objc_release(ppuVar5);
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar1 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar3 = puVar9;
    func_0x00010bf51e00(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_1d0);
    puVar10 = auStack_1c8;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_100) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_1d0);
      _objc_destroyWeak(auStack_1c8);
      __Unwind_Resume(puVar10);
      _objc_retain(puVar11);
      puVar10 = puVar10 + 0x20;
      _objc_loadWeakRetained(puVar10);
      func_0x00010bde5ba0();
      _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079b0d6c; end: 1079b1013; -[SCDiscoverFeedGenericSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1079b0d6c(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [136];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_138,param_1);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1079b1014;
  puStack_148 = &UNK_110845ae0;
  puVar12 = auStack_138;
  _objc_copyWeak(auStack_140,puVar12);
  ppuVar2 = &puStack_160;
  _objc_retainBlock();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110eb45f8;
  ppuVar3 = ppuVar2;
  _objc_retainBlock();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110eb45d8;
  ppuVar4 = ppuVar2;
  ppuStack_90 = ppuVar3;
  _objc_retainBlock();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eb4698;
  ppuVar5 = ppuVar2;
  ppuStack_88 = ppuVar4;
  _objc_retainBlock();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110eb46b8;
  ppuVar6 = ppuVar2;
  ppuStack_80 = ppuVar5;
  _objc_retainBlock();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_78 = ppuVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar9 = puVar8;
  func_0x00010bef7f60();
  FUN_1079b9740();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar10 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar9);
      }
      ppuVar3 = ppuVar2;
      _objc_retainBlock(ppuVar2);
      func_0x00010c1d0560(puVar8);
      _objc_release(ppuVar3);
      puVar13 = puVar13 + 1;
    } while (puVar10 != puVar13);
    puVar10 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  puVar10 = puVar8;
  func_0x00010bf51e00(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_140);
  puVar11 = auStack_138;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(puVar11);
  _objc_retain(puVar12);
  puVar11 = puVar11 + 0x20;
  _objc_loadWeakRetained(puVar11);
  func_0x00010bde5ba0();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 1079b1014; end: 1079b105b;  */

void FUN_1079b1014(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079b105c; end: 1079b1067; -[SCDiscoverFeedGenericSectionDataProvider modelCanUpdateComparator] */

undefined ** FUN_1079b105c(void)

{
  return &PTR___NSConcreteGlobalBlock_1109f36b8;
}



/* Entry: 1079b1068; end: 1079b11df;  */

bool FUN_1079b1068(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aea98;
  _objc_opt_class(PTR_PTR_1126aea98);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar5 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar5 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea98;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar2 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c259740(uVar5);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c259740(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3 == uVar5;
}



/* Entry: 1079b11e0; end: 1079b11eb; -[SCDiscoverFeedGenericSectionDataProvider viewModelChangesComparator] */

undefined ** FUN_1079b11e0(void)

{
  return &PTR___NSConcreteGlobalBlock_1109f36d8;
}



/* Entry: 1079b11ec; end: 1079b179f;  */

bool FUN_1079b11ec(double param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  double dVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aea98;
  _objc_opt_class(PTR_PTR_1126aea98);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126aea98;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar3 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c259740();
  uVar5 = uVar3;
  func_0x00010c259740();
  if (uVar4 == uVar5) {
    uVar4 = uVar1;
    func_0x00010bf8ba00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf8ba00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == uVar5) {
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar6 = uVar1;
      func_0x00010bf8ba00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bf8ba00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c071ae0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar8 == 0) goto LAB_1079b1598;
    }
    uVar4 = uVar1;
    func_0x00010bfe8d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfe8d80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == uVar5) {
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar6 = uVar1;
      func_0x00010bfe8d80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bfe8d80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c071ae0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar8 == 0) goto LAB_1079b1598;
    }
    uVar4 = uVar1;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == uVar5) {
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar6 = uVar1;
      func_0x00010c26e120();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c26e120(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c071ae0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar8 == 0) goto LAB_1079b1598;
    }
    uVar4 = uVar1;
    func_0x00010c11b580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c117840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117800();
    uVar6 = uVar3;
    dVar14 = param_1;
    func_0x00010c11b580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c117840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117800();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (param_1 == dVar14) {
      uVar4 = uVar1;
      func_0x00010c11b580();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c261160();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c11b580();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c261160();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == uVar7) {
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      else {
        uVar8 = uVar1;
        func_0x00010c11b580();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c261160();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010c11b580(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c261160();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar9;
        func_0x00010c071ae0();
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar12 & 1) == 0) goto LAB_1079b1598;
      }
      uVar4 = uVar1;
      func_0x00010c23a960();
      uVar5 = uVar3;
      func_0x00010c23a960();
      if ((int)uVar4 == (int)uVar5) {
        uVar4 = uVar1;
        func_0x00010c0b4d20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0b4d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar4);
        if (uVar4 == uVar5) {
          uVar4 = uVar1;
          func_0x00010c087660(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c087660(uVar3);
          _objc_retainAutoreleasedReturnValue();
          bVar13 = (uVar4 != 0) != (uVar5 == 0);
          _objc_release();
          _objc_release(uVar4);
          goto LAB_1079b159c;
        }
      }
    }
  }
LAB_1079b1598:
  bVar13 = false;
LAB_1079b159c:
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar13;
}



/* Entry: 1079b17a0; end: 1079b186b; -[SCDiscoverFeedGenericSectionDataProvider supplementaryViewModels] */

void FUN_1079b17a0(undefined *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + 0x60);
  if (*plVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uStack_38 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110caf18;
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = *plVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&ppuStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_30 = param_1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf4bb00();
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be72d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performUpdateStoriesFromDataSto_11257a4e8);
  return;
}



/* Entry: 1079b186c; end: 1079b18b3; -[SCDiscoverFeedGenericSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1079b186c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110f48d18);
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be72d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performUpdateStoriesFromDataSto_11257a4e8);
  return;
}



/* Entry: 1079b18b4; end: 1079b1aeb; -[SCDiscoverFeedGenericSectionDataProvider _configureStoryCardCollectionViewCell:] */

void FUN_1079b18b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5058);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa2c0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a5060;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a59a0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c1a2e80(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a4ff0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c1aa2c0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a4ff0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c20c5a0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a4ff8;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c171140(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a5070;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c1a07e0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079b1aec; end: 1079b1b93; -[SCDiscoverFeedGenericSectionDataProvider _performUpdateStoriesFromDataStore] */

void FUN_1079b1aec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1079b1b94; end: 1079b1bbf;  */

void FUN_1079b1b94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ab60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079b1bc0; end: 1079b2797; -[SCDiscoverFeedGenericSectionDataProvider _reloadSection] */

void FUN_1079b1bc0(undefined8 param_1,double param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lVar32;
  double dVar33;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_3 + 0x18) = 1;
  puVar30 = PTR_PTR_1126c2180;
  puVar25 = *(undefined **)(param_3 + 0xb0);
  _objc_retain(puVar25);
  _objc_opt_class(puVar30);
  puVar27 = puVar25;
  _objc_opt_isKindOfClass(puVar25,puVar30);
  puVar30 = puVar25;
  if (((ulong)puVar27 & 1) == 0) {
    puVar30 = (undefined *)0x0;
  }
  _objc_retain(puVar30);
  _objc_release(puVar25);
  puVar27 = puVar30;
  func_0x00010c262de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar27 != (undefined *)0x0) {
    puVar19 = puVar30;
    func_0x00010c262de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x60);
    func_0x00010c113160(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar19;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(puVar19);
    _objc_release(puVar27);
    if (((ulong)puVar26 & 1) == 0) {
      puVar27 = PTR_PTR_1126c23f8;
      func_0x00010bf81ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar30;
      func_0x00010c262de0(puVar30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6060(puVar27);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar19);
      func_0x00010c2b5ec0(puVar27);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar19 = puVar27;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 0x60);
      *(undefined **)(param_3 + 0x60) = puVar19;
      _objc_release(uVar4);
      _objc_release(puVar27);
    }
  }
  if (puVar30 == (undefined *)0x0) {
    iVar2 = 0;
  }
  else {
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar25;
    func_0x00010c067ec0();
    iVar2 = (int)puVar27;
    _objc_release(puVar25);
  }
  lVar5 = *(long *)(param_3 + 0x20);
  lVar32 = (long)iVar2;
  func_0x00010bf009e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar5;
  if (iVar2 == 0xef) {
    iVar3 = (int)*(undefined8 *)(param_3 + 0x80);
    func_0x000108f4a1f0();
    if (iVar3 != 0) {
      func_0x00010847f398();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
  }
  puVar27 = puVar30;
  func_0x00010c26ee40();
  FUN_107c79b74();
  FUN_107c76c5c();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b1118;
  _objc_alloc();
  puVar19 = puVar30;
  func_0x00010c156900(puVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043160();
  _objc_release(puVar26);
  _objc_release(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar4 = 0;
  _objc_retain(lVar23);
  lVar5 = lVar23;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar23);
      }
      puVar31 = *(undefined **)(lVar24 * 8);
      puVar26 = puVar30;
      func_0x00010c26ee40();
      if (puVar26 == (undefined *)0x5) {
        FUN_1079b3458(puVar31,*(undefined8 *)(param_3 + 0x50),puVar25,5);
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar31;
        if (puVar31 != (undefined *)0x0) {
          func_0x00010befa120(puVar19);
        }
      }
      else {
        puVar26 = puVar30;
        func_0x00010c26ee40();
        if (puVar26 == (undefined *)0x4) {
          puVar26 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar31;
          FUN_1079b64c0(puVar31,*(undefined8 *)(param_3 + 0x50),puVar27,puVar25,
                        *(undefined8 *)(param_3 + 0x68),*(undefined1 *)(param_3 + 0x78),
                        *(undefined8 *)(param_3 + 0x80),*(undefined8 *)(param_3 + 0x98));
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar16;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar30;
          func_0x00010c156900();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_3;
          func_0x00010bf13d40();
          _objc_retainAutoreleasedReturnValue();
          puVar28 = puVar30;
          func_0x00010c26ee40(puVar30);
          puVar9 = puVar30;
          func_0x00010c06e300();
          uVar17 = *(undefined8 *)(param_3 + 0x80);
          func_0x00010bec6a00(param_3);
          lVar29 = *(long *)(param_3 + 0x98);
          _objc_retain(puVar31);
          _objc_retain(puVar6);
          _objc_retain(uVar8);
          _objc_retain(lVar29);
          puVar26 = PTR_PTR_1126c21d8;
          _objc_retain(uVar17);
          func_0x00010bf82280();
          _objc_retainAutoreleasedReturnValue();
          FUN_107c79b74(puVar28,uVar17,lVar29);
          _objc_release(uVar17);
          puVar28 = puVar6;
          func_0x00010c087660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar28 != (undefined *)0x0) {
            lVar10 = lVar29;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar28 = PTR_PTR_1126c2328;
            func_0x00010bf71560(PTR_PTR_1126c2328);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010c0b84c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar28);
            _objc_release(lVar10);
            dVar33 = param_2;
            if (lVar11 != 0) {
              lVar10 = lVar11;
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lVar10;
              func_0x00010c067ec0();
              _objc_release(lVar10);
              dVar33 = param_2 - (double)(ulong)(long)(int)lVar12;
              if (dVar33 <= 80.0) {
                dVar33 = 80.0;
              }
              if ((int)lVar12 < 1) {
                dVar33 = param_2;
              }
            }
            puVar28 = PTR_PTR_1126d5a18;
            puVar13 = puVar6;
            func_0x00010c087660(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d6e0(uVar4,0x7fefffffffffffff,puVar28);
            func_0x00010c2a9c40(puVar26);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar13);
            _objc_release(lVar11);
            param_2 = dVar33;
          }
          func_0x00010c2b5a00(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar28 = PTR_PTR_1126c2408;
          puVar13 = puVar6;
          func_0x00010c087760(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf81940(puVar28);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          if (iVar2 == 0xef) {
            func_0x00010c2b8f80(puVar26);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar13 = puVar31;
            func_0x00010848192c(puVar31);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c123160();
            func_0x00010c2b12a0(puVar26);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar13);
          }
          func_0x00010c2ba900(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
          if ((int)puVar9 == 0) {
            puVar9 = puVar6;
            func_0x00010c087760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar9;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bb3c0(puVar28);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar13);
            _objc_release(puVar9);
            puVar9 = puVar6;
            func_0x00010c11b580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar9 != (undefined *)0x0) {
              puVar9 = puVar6;
              func_0x00010c11b580(puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar9;
              FUN_107c21580();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2b6560(puVar26);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar13);
              _objc_release(puVar9);
            }
            FUN_107c6b2a4(puVar6,puVar26);
          }
          else {
            puVar9 = puVar6;
            func_0x00010c259ca0();
            if (puVar9 != (undefined *)0x0) {
              func_0x00010c2ba440(puVar26);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            puVar9 = puVar6;
            func_0x00010c087760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar9;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c25cd40();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            FUN_107c794c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bb3c0(puVar28);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar9);
            puVar9 = puVar31;
            func_0x00010c080120(puVar31);
            lVar10 = lVar29;
            func_0x00010c269d40(lVar29);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf432a0();
            FUN_107c6b504(puVar6,puVar26,puVar9);
            _objc_release(lVar10);
          }
          if (iVar2 == 0xef) {
            _objc_release(puVar28);
            func_0x00010c2acbc0(puVar26);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b31e0(puVar26);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b6560(puVar26);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar28 = (undefined *)0x0;
          }
          func_0x00010c25b720(puVar31);
          func_0x00010c2ba700(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar9 = puVar28;
          func_0x00010bf21f60(puVar28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b2000(puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar9);
          if (uVar8 != 0) {
            func_0x00010c2ab200(puVar26);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          if (iVar2 == 2) {
            puVar9 = puVar6;
            func_0x00010bf96140();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar9;
            FUN_107c27350();
            _objc_release(puVar9);
            if ((int)puVar13 != 0) {
              func_0x00010c2ad360(puVar26);
              _objc_unsafeClaimAutoreleasedReturnValue();
              func_0x00010c2acbc0(puVar26);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
          }
          puVar9 = puVar26;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar28);
          _objc_release(puVar26);
          _objc_release(lVar29);
          _objc_release(uVar8);
          _objc_release(puVar6);
          _objc_release(puVar31);
          _objc_release(uVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar26 = puVar9;
          func_0x00010bfe8d80();
          _objc_retainAutoreleasedReturnValue();
          if (puVar26 == (undefined *)0x0) {
            puVar26 = puVar9;
            func_0x00010bf28ba0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar26 != (undefined *)0x0) goto LAB_1079b2544;
            puVar26 = puVar9;
            func_0x00010c26e120();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar26 != (undefined *)0x0) goto LAB_1079b2548;
            _objc_release(puVar9);
            puVar26 = (undefined *)0x0;
LAB_1079b260c:
            _objc_release(puVar16);
          }
          else {
LAB_1079b2544:
            _objc_release();
LAB_1079b2548:
            puVar26 = PTR_PTR_1126aea98;
            _objc_alloc();
            puVar6 = puVar31;
            func_0x00010c25b720(puVar31);
            puVar7 = puVar9;
            FUN_107c1fd68(puVar9,puVar6,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bffd260();
            _objc_release(puVar7);
            _objc_release(puVar9);
            _objc_release(puVar16);
            if (puVar26 != (undefined *)0x0) {
              func_0x00010befa120(puVar19);
              func_0x00010c25b720();
              if (puVar31 == (undefined *)0x5) {
                func_0x00010bddd260(param_3);
                puVar16 = *(undefined **)(param_3 + 0x40);
                func_0x00010c269d40(puVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf529e0(puVar19);
                func_0x00010c0ad040(puVar16);
                goto LAB_1079b260c;
              }
            }
          }
        }
      }
      _objc_release(puVar26);
      lVar24 = lVar24 + 1;
    } while (lVar5 != lVar24);
    lVar5 = lVar23;
    func_0x00010bf52a60();
  }
  _objc_release(lVar23);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c1559e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bfd9420();
  if ((int)uVar4 == 0) {
LAB_1079b2704:
    _objc_release(uVar17);
  }
  else {
    uVar8 = param_3;
    func_0x00010bf80300();
    _objc_release(uVar17);
    if ((uVar8 & 1) == 0) {
      func_0x00010c26ee40(puVar30);
      FUN_107c79b74();
      uVar17 = 1;
      FUN_107c142dc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar19);
      goto LAB_1079b2704;
    }
  }
  puVar26 = puVar19;
  func_0x00010bf51e00();
  puVar31 = puVar26;
  func_0x00010be8aba0(param_3);
  _objc_release(puVar26);
  _objc_release(puVar19);
  _objc_release(puVar25);
  _objc_release(puVar27);
  _objc_release(lVar23);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = lVar32;
  _objc_retain(puVar31);
  *(undefined8 *)(puVar30 + 0x18) = 2;
  uVar18 = *(ulong *)(puVar30 + 0x10);
  func_0x00010bf51e00();
  puVar27 = puVar30;
  func_0x00010c29d5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar18;
  puVar25 = puVar27;
  func_0x00010b814518(uVar18,puVar31);
  _objc_release(puVar27);
  _objc_release(uVar18);
  if ((uVar8 & 1) == 0) {
    puVar27 = puVar31;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(puVar30 + 0x10);
    *(undefined **)(puVar30 + 0x10) = puVar27;
    _objc_release(uVar4);
    puVar27 = puVar30 + 0xa8;
    _objc_loadWeakRetained(puVar27);
    func_0x00010c155aa0();
    _objc_release(puVar27);
    uVar4 = *(undefined8 *)(puVar30 + 8);
    puVar27 = puVar30;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = *(undefined **)(puVar30 + 0xb0);
    func_0x00010bf51e00();
    puVar25 = puVar19;
    if (puVar19 == (undefined *)0x0) {
      puVar25 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar26 = puVar31;
    func_0x00010bf51e00();
    puVar16 = puVar26;
    if (puVar26 == (undefined *)0x0) {
      puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar4);
    _objc_release(puVar6);
    if (puVar26 == (undefined *)0x0) {
      _objc_release(puVar16);
    }
    _objc_release(puVar26);
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puVar25);
    }
    _objc_release(puVar19);
    _objc_release(puVar27);
    puVar25 = puVar31;
    func_0x00010be777c0(puVar30);
    lVar22 = lVar32;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar25);
  if (lVar22 == 0xf7) {
    puVar30 = (undefined *)0x4;
  }
  else {
    if (lVar22 != 3) goto LAB_1079b2c88;
    uVar20 = *(undefined8 *)(puVar31 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar20;
    func_0x00010bf82b40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar17;
    func_0x00010bf71460();
    puVar30 = (undefined *)(long)(int)uVar21;
    _objc_release(uVar17);
    _objc_release(uVar4);
    _objc_release(uVar20);
  }
  puVar27 = puVar25;
  func_0x00010bf529e0();
  if (puVar27 <= puVar30) {
    puVar30 = puVar27;
  }
  if (puVar30 != (undefined *)0x0) {
    puVar27 = (undefined *)0x0;
    do {
      puVar19 = puVar25;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar19;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = PTR_PTR_1126c22b8;
      _objc_opt_class(PTR_PTR_1126c22b8);
      puVar16 = puVar26;
      _objc_opt_isKindOfClass(puVar26,puVar19);
      puVar19 = puVar26;
      if (((ulong)puVar16 & 1) == 0) {
        puVar19 = (undefined *)0x0;
      }
      _objc_retain(puVar19);
      _objc_release(puVar26);
      puVar26 = puVar19;
      func_0x00010c26e120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      if ((puVar26 != (undefined *)0x0) &&
         (puVar19 = puVar31, func_0x00010be33800(), ((ulong)puVar19 & 1) == 0)) {
        puVar19 = puVar26;
        func_0x000107dd5184();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar19;
        func_0x00010c08fa60();
        if (puVar16 != (undefined *)0x0) {
          puVar16 = puVar26;
          func_0x000107dd4c00(puVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126aebf0;
          _objc_alloc(PTR_PTR_1126aebf0);
          puVar7 = puVar31;
          _objc_opt_class(puVar31);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c011b80(puVar6);
          _objc_release(puVar7);
          puVar7 = PTR_PTR_1126b85a8;
          _objc_alloc(PTR_PTR_1126b85a8);
          puVar28 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c01cf00(puVar7);
          _objc_release(puVar28);
          uVar4 = *(undefined8 *)(puVar31 + 0x30);
          _objc_retain(puVar26);
          func_0x00010bfa7900(uVar4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar26);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar16);
        }
        _objc_release(puVar19);
      }
      _objc_release(puVar26);
      puVar27 = puVar27 + 1;
    } while (puVar30 != puVar27);
  }
LAB_1079b2c88:
  _objc_release(puVar25);
  return;
}



/* Entry: 1079b2798; end: 1079b29d3; -[SCDiscoverFeedGenericSectionDataProvider _reloadSectionWithContainerViewModels:feedType:] */

void FUN_1079b2798(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_5;
  _objc_retain(param_4);
  *(undefined8 *)(param_2 + 0x18) = 2;
  uVar1 = *(ulong *)(param_2 + 0x10);
  func_0x00010bf51e00();
  puVar15 = param_2;
  func_0x00010c29d5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  puVar4 = puVar15;
  func_0x00010b814518(uVar1,param_4);
  _objc_release(puVar15);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar15 = param_4;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    *(undefined **)(param_2 + 0x10) = puVar15;
    _objc_release(uVar14);
    puVar15 = param_2 + 0xa8;
    _objc_loadWeakRetained(puVar15);
    func_0x00010c155aa0();
    _objc_release(puVar15);
    uVar14 = *(undefined8 *)(param_2 + 8);
    puVar15 = param_2;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(param_2 + 0xb0);
    func_0x00010bf51e00();
    puVar4 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = param_4;
    func_0x00010bf51e00();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar14);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar15);
    puVar4 = param_4;
    func_0x00010be777c0(param_2);
    lVar12 = param_5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if (lVar12 == 0xf7) {
    puVar15 = (undefined *)0x4;
  }
  else {
    if (lVar12 != 3) goto LAB_1079b2c88;
    uVar8 = *(undefined8 *)(param_4 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bf82b40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar17;
    func_0x00010bf71460();
    puVar15 = (undefined *)(long)(int)uVar16;
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar8);
  }
  puVar3 = puVar4;
  func_0x00010bf529e0();
  if (puVar3 <= puVar15) {
    puVar15 = puVar3;
  }
  if (puVar15 != (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    uVar14 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar17 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    do {
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126c22b8;
      _objc_opt_class(PTR_PTR_1126c22b8);
      puVar7 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar5);
      puVar5 = puVar6;
      if (((ulong)puVar7 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010c26e120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if ((puVar6 != (undefined *)0x0) &&
         (puVar5 = param_4, func_0x00010be33800(), ((ulong)puVar5 & 1) == 0)) {
        puVar5 = puVar6;
        func_0x000107dd5184();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c08fa60();
        if (puVar7 != (undefined *)0x0) {
          puVar7 = puVar6;
          func_0x000107dd4c00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126aebf0;
          _objc_alloc(PTR_PTR_1126aebf0);
          puVar10 = param_4;
          _objc_opt_class(param_4);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c011b80(puVar9);
          _objc_release(puVar10);
          puVar10 = PTR_PTR_1126b85a8;
          _objc_alloc(PTR_PTR_1126b85a8);
          puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c01cf00(param_1,uVar14,uVar17,puVar10);
          _objc_release(puVar11);
          uVar16 = *(undefined8 *)(param_4 + 0x30);
          _objc_retain(puVar6);
          func_0x00010bfa7900(uVar16);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar7);
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar6);
      puVar3 = puVar3 + 1;
    } while (puVar15 != puVar3);
  }
LAB_1079b2c88:
  _objc_release(puVar4);
  return;
}



/* Entry: 1079b29d4; end: 1079b2cb7; -[SCDiscoverFeedGenericSectionDataProvider _prefetchThumbnailsIfNeededForViewModels:feedType:] */

void FUN_1079b29d4(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  if (param_5 == 0xf7) {
    uVar10 = 4;
  }
  else {
    if (param_5 != 3) goto LAB_1079b2c88;
    uVar1 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    func_0x00010bf82b40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010bf71460();
    uVar10 = (ulong)(int)uVar11;
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar1);
  }
  uVar9 = param_4;
  func_0x00010bf529e0();
  if (uVar9 <= uVar10) {
    uVar10 = uVar9;
  }
  if (uVar10 != 0) {
    uVar9 = 0;
    uVar12 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar13 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    do {
      uVar2 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126c22b8;
      _objc_opt_class(PTR_PTR_1126c22b8);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c26e120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if ((uVar3 != 0) && (uVar2 = param_2, func_0x00010be33800(), (uVar2 & 1) == 0)) {
        uVar2 = uVar3;
        func_0x000107dd5184();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c08fa60();
        if (uVar5 != 0) {
          uVar5 = uVar3;
          func_0x000107dd4c00(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126aebf0;
          _objc_alloc(PTR_PTR_1126aebf0);
          uVar6 = param_2;
          _objc_opt_class(param_2);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c011b80(puVar4);
          _objc_release(uVar6);
          puVar7 = PTR_PTR_1126b85a8;
          _objc_alloc(PTR_PTR_1126b85a8);
          puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c01cf00(param_1,uVar12,uVar13,puVar7);
          _objc_release(puVar8);
          uVar11 = *(undefined8 *)(param_2 + 0x30);
          _objc_retain(uVar3);
          func_0x00010bfa7900(uVar11);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(puVar7);
          _objc_release(puVar4);
          _objc_release(uVar5);
        }
        _objc_release(uVar2);
      }
      _objc_release(uVar3);
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
LAB_1079b2c88:
  _objc_release(param_4);
  return;
}



/* Entry: 1079b2cb8; end: 1079b2d73;  */

void FUN_1079b2cb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079b2d74; end: 1079b2d7b;  */

void FUN_1079b2d74(void)

{
  return;
}



/* Entry: 1079b2d7c; end: 1079b3023; -[SCDiscoverFeedGenericSectionDataProvider _handledBitmojiThumbnailPrefetch:] */

undefined8 FUN_1079b2d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1079b3024;
  uStack_60 = 0x1079b3034;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1079b3024;
  uStack_90 = 0x1079b3034;
  uStack_88 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_1079b3024;
  uStack_c0 = 0x1079b3034;
  uStack_b8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 7;
  func_0x00010c0c0cc0(param_3);
  lVar1 = puStack_78[5];
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = puStack_a8[5];
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b58e0;
      _objc_opt_new(PTR_PTR_1126b58e0);
      func_0x00010c2bae20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b6d40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf21f60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa5420(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar3 = 1;
      goto LAB_1079b2f74;
    }
  }
  uVar3 = 0;
LAB_1079b2f74:
  __Block_object_dispose(&uStack_100,8);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1079b3024; end: 1079b303b;  */

void FUN_1079b3024(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079b303c; end: 1079b310f;  */

void FUN_1079b303c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_5;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079b3110; end: 1079b3113;  */

void FUN_1079b3110(void)

{
  return;
}



/* Entry: 1079b3114; end: 1079b31ab; -[SCDiscoverFeedGenericSectionDataProvider _subscribeIconStyleForFeedType:] */

undefined8 FUN_1079b3114(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0xf7) {
      uVar1 = *(ulong *)(param_1 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      uVar3 = 2;
      if ((uVar2 & 1) != 0) {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}



/* Entry: 1079b31ac; end: 1079b329b; -[SCDiscoverFeedGenericSectionDataProvider _checkAdsInsertionBrandSafetyViolationForPromotedStory:allStories:] */

void FUN_1079b31ac(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfecde0(param_4);
  uVar2 = param_4;
  FUN_107bf3b10(param_4,uVar1);
  _objc_release(param_4);
  lVar3 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x00010bf21060();
    uVar1 = 2;
    if (lVar3 != 2) {
      uVar1 = 3;
    }
    if (lVar3 == 3) {
      uVar1 = 1;
    }
    if (uVar1 < uVar2) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ad060();
      _objc_release(uVar5);
    }
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079b329c; end: 1079b32b3; -[SCDiscoverFeedGenericSectionDataProvider dataProviderDelegate] */

void FUN_1079b329c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079b32b4; end: 1079b32bf; -[SCDiscoverFeedGenericSectionDataProvider setDataProviderDelegate:] */

void FUN_1079b32b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 1079b32c0; end: 1079b32c7; -[SCDiscoverFeedGenericSectionDataProvider sectionDataModel] */

undefined8 FUN_1079b32c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1079b32c8; end: 1079b32cf; -[SCDiscoverFeedGenericSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1079b32c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1079b32d0; end: 1079b32ff; -[SCDiscoverFeedGenericSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1079b32d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079b3300; end: 1079b3307; -[SCDiscoverFeedGenericSectionDataProvider backgroundColor] */

undefined8 FUN_1079b3300(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1079b3308; end: 1079b3337; -[SCDiscoverFeedGenericSectionDataProvider setBackgroundColor:] */

void FUN_1079b3308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079b3338; end: 1079b333f; -[SCDiscoverFeedGenericSectionDataProvider disableLoadingSpinner] */

undefined1 FUN_1079b3338(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



/* Entry: 1079b3340; end: 1079b3347; -[SCDiscoverFeedGenericSectionDataProvider setDisableLoadingSpinner:] */

void FUN_1079b3340(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 1079b3348; end: 1079b3457; -[SCDiscoverFeedGenericSectionDataProvider .cxx_destruct] */

void FUN_1079b3348(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079b3458; end: 1079b3513;  */

void FUN_1079b3458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c25b720();
  lVar2 = param_1;
  if (lVar1 == 0xb) {
    func_0x0001079b4910(param_1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 2) {
    FUN_1079b3514(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1079b3514; end: 1079b588f;  */

void FUN_1079b3514(double param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined **param_5,undefined *param_6)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  double dVar31;
  undefined8 uVar32;
  undefined *puStack_230;
  undefined *puStack_1e8;
  undefined **ppuStack_1b0;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  ppuVar23 = param_5;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar26 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  if (puVar27 == (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar27);
    _objc_retain(puVar27);
    puVar26 = puVar27;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar26;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    puVar26 = puVar3;
    func_0x00010c2439e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar26;
    func_0x00010c0720c0();
    _objc_release(puVar26);
    if ((int)puVar25 == 0) {
      _objc_retain(puVar3);
      puVar26 = puVar3;
    }
    else {
      puVar26 = puVar27;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar26;
      func_0x00010bf529e0();
      _objc_release(puVar26);
      if (puVar25 < (undefined *)0x2) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar25 = puVar27;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        puVar30 = puVar27;
        func_0x00010c245680(puVar27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        puVar26 = puVar25;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar30);
        _objc_release(puVar25);
      }
    }
    _objc_release(puVar3);
    _objc_release(puVar27);
    puVar3 = puVar26;
    func_0x00010c29ea60();
    _objc_release(puVar26);
    if ((int)puVar3 == 0) {
      puVar26 = puVar27;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar26;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      if (puVar3 == (undefined *)0x0) {
        puVar25 = (undefined *)0x0;
      }
      else {
        puVar25 = (undefined *)0x0;
        do {
          puVar30 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar26);
            }
            puVar29 = *(undefined **)((long)puVar30 * 8);
            puVar4 = puVar29;
            func_0x00010c26e920();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
LAB_1079b37c4:
              puVar4 = puVar29;
              func_0x00010c26e920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar4 != (undefined *)0x0) {
                _objc_retain(puVar29);
                _objc_release(puVar26);
                goto LAB_1079b3838;
              }
            }
            else {
              puVar5 = puVar29;
              func_0x00010c29ea60();
              _objc_release(puVar4);
              if ((int)puVar5 == 0) goto LAB_1079b37c4;
              _objc_retain(puVar29);
              _objc_release(puVar25);
              puVar25 = puVar29;
            }
            puVar30 = puVar30 + 1;
          } while (puVar3 != puVar30);
          puVar3 = puVar26;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar26);
      _objc_retain(puVar25);
      puVar29 = puVar25;
LAB_1079b3838:
      _objc_release(puVar25);
    }
    else {
      puVar26 = puVar27;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar26;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    _objc_release(puVar27);
    puVar26 = puVar29;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar26;
    func_0x00010bf1c4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar3;
    func_0x00010c08fa60();
    if (puVar25 == (undefined *)0x0) {
      _objc_release(puVar3);
      _objc_release(puVar26);
LAB_1079b3990:
      ppuStack_1b0 = (undefined **)PTR_PTR_1126b4860;
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar26 = puVar29;
      func_0x00010c26e920(puVar29);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar26;
      func_0x00010bfe8f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar25);
    }
    else {
      puVar25 = param_4;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      _objc_release(puVar26);
      puVar26 = PTR_PTR_1126b4858;
      if (puVar25 == (undefined *)0x0) goto LAB_1079b3990;
      puVar3 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1bb00(puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
      _objc_release(puVar3);
      ppuStack_1b0 = (undefined **)PTR_PTR_1126b4860;
      puVar3 = puVar29;
      func_0x00010c26e920(puVar29);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar3;
      func_0x00010bf1c4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1aee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
      _objc_release(puVar3);
    }
    _objc_release(puVar26);
    puVar26 = puVar27;
    func_0x00010c11b6a0();
    dVar31 = (double)((ulong)puVar26 / 1000);
    puVar26 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar26;
    FUN_1079b5f8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    puVar26 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar26 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar23 = param_5;
    if (param_5 == (undefined **)0x0) {
      ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar30 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == (undefined **)0x0) {
      _objc_release(ppuVar23);
    }
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar26);
    }
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar5 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar26 = param_3;
    func_0x000107c25cd4(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460();
    _objc_release(puVar26);
    func_0x00010c080120(param_3);
    func_0x00010c0794a0();
    _objc_retain(param_3);
    _objc_retain(puVar27);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc();
    _objc_retain(puVar27);
    puVar26 = puVar27;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar26 == (undefined *)0x0) {
LAB_1079b3bf4:
      _objc_release(puVar27);
LAB_1079b3bfc:
      puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar27;
      func_0x00010c2387e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar26);
      if (puVar3 != (undefined *)0x0) goto LAB_1079b3bf4;
      puVar3 = puVar27;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126cc708;
      _objc_opt_new(PTR_PTR_1126cc708);
      puVar26 = puVar3;
      func_0x00010bfb57e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b20(puVar12);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010c11b080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c140(puVar12);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010bf68960(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar26;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18a720(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010bfad760(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar26;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0ae0(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010bfe4220(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar26;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9180(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar26);
      func_0x00010c116ce0(puVar3);
      func_0x00010c1c0a80(puVar12);
      puVar26 = puVar3;
      func_0x00010bfe0ee0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar26;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e780(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010bfe0e80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170bc0(puVar12);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010c2a4700(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar26;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225220(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar26);
      puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar13 = puVar3;
      func_0x00010c112dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bfe1180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e29e0(puVar12);
      _objc_release(puVar26);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126b64a0;
      _objc_opt_new();
      puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c11b1e0();
      func_0x00010c14de00(puVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b60(puVar13);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010c11b3a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5ba0(puVar13);
      _objc_release(puVar26);
      puVar26 = puVar3;
      func_0x00010bf25140(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1745a0(puVar13);
      _objc_release(puVar26);
      func_0x00010c1b4ca0(puVar13);
      func_0x00010c1b4cc0(puVar13);
      func_0x00010c1c73c0(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar3);
      _objc_release(puVar27);
      if (puVar13 == (undefined *)0x0) goto LAB_1079b3bfc;
      bVar1 = false;
      puVar26 = puVar13;
    }
    puVar3 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460();
    _objc_release(puVar12);
    uVar32 = param_2;
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar3);
      uVar32 = param_2;
    }
    if (bVar1) {
      _objc_release(puVar13);
    }
    _objc_release(puVar26);
    _objc_release(puVar27);
    _objc_release(param_3);
    puVar12 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar13 = param_3;
    FUN_1079b608c(param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar30;
    FUN_1079b6494();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar27);
    puVar26 = puVar27;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar26;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puStack_1e8 = (undefined *)0x0;
LAB_1079b3f18:
      _objc_release(puVar26);
    }
    else {
      puVar3 = puVar27;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0b45a0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar26);
      puVar26 = PTR_PTR_1126b4860;
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar9 == (undefined *)0x1) {
        puVar7 = puVar27;
        func_0x00010bfe5b40(puVar27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0fde60(puVar26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar7);
        puVar3 = PTR_PTR_1126c21e0;
        puVar7 = puVar27;
        func_0x00010bfe5b40(puVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar27;
        func_0x00010bfe5b40(puVar27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26e400(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        puStack_1e8 = PTR_PTR_1126d5a28;
        _objc_alloc();
        puVar7 = puVar27;
        func_0x00010c245680(puVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c26e920();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0b4620();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c027aa0();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar3);
        goto LAB_1079b3f18;
      }
      puStack_1e8 = (undefined *)0x0;
    }
    _objc_release(puVar27);
    puVar7 = PTR_PTR_1126d5a20;
    _objc_retain(puVar29);
    _objc_alloc();
    puVar26 = puVar29;
    func_0x00010c26e920(puVar29);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
    puVar3 = puVar26;
    func_0x00010bfe0440(puVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    FUN_1079b5acc();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_6;
    FUN_1079c3910(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0460();
    puVar10 = param_6;
    FUN_1079c2380(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053200();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar26);
    puVar9 = PTR_PTR_1126d5a38;
    _objc_alloc();
    func_0x00010c04d3e0();
    puVar8 = PTR_PTR_1126d5a30;
    _objc_retain(puVar6);
    _objc_retain(puVar9);
    _objc_retain(puVar27);
    _objc_alloc();
    puVar26 = puVar27;
    func_0x00010c11af80(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    puVar3 = puVar26;
    func_0x00010bfb57e0(puVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    FUN_1079b5bd4();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = param_6;
    FUN_1079c3910(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117160();
    puVar11 = param_6;
    FUN_1079c329c(param_6);
    _objc_retainAutoreleasedReturnValue();
    param_1 = dVar31;
    param_2 = uVar32;
    func_0x00010bff5ec0();
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar28);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar26);
    if ((param_6 < (undefined *)0x5) && (puVar26 = param_3, FUN_107c6e7e4(), (int)puVar26 != 0)) {
      puVar10 = param_6;
      if (param_6 + -2 < (undefined *)0x3) {
        FUN_1079b614c(param_6,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x0001079b61dc(param_6,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    puVar26 = param_3;
    func_0x00010c080120();
    puVar28 = (undefined *)0x0;
    if (((int)puVar26 != 0) && (puVar10 == (undefined *)0x0)) {
      if (((ulong)(param_6 + -1) & 0xfffffffffffffffb) == 0) {
        puVar28 = PTR_PTR_1126d5a40;
        _objc_opt_new();
      }
      else {
        puVar28 = (undefined *)0x0;
      }
    }
    puVar26 = puVar27;
    func_0x00010c2387e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar26 == (undefined *)0x0) {
      puVar11 = PTR_PTR_1126d5a48;
      _objc_alloc();
      puVar26 = puVar25;
      puVar3 = param_6;
      func_0x0001079b5728(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_6;
      FUN_1079c3910(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26e1a0();
      func_0x00010c027ac0();
      _objc_release(puVar15);
      _objc_release(puVar26);
      puVar15 = PTR_PTR_1126d5a50;
      _objc_alloc();
      if (param_6 < (undefined *)0x6) {
        if (((1L << ((ulong)param_6 & 0x3f) & 0x23U) == 0) &&
           ((1L << ((ulong)param_6 & 0x3f) & 0xcU) != 0)) {
          FUN_1079c399c(param_6);
          dVar31 = param_1;
          uVar32 = param_2;
        }
        else {
          dVar31 = *(double *)PTR__CGSizeZero_110347620;
          uVar32 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
        }
      }
      param_2 = uVar32;
      param_1 = dVar31;
      puVar26 = puVar27;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar26;
      func_0x00010c112dc0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar16 == (undefined *)0x0) {
        puVar17 = param_3;
        func_0x00010bfde980(param_3);
        func_0x0001079b6324();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puStack_230 = puVar27;
        func_0x00010c11af80();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puStack_230;
        func_0x00010c112dc0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar18 = param_3;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar29;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010bfe0440();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_release(param_3);
      func_0x00010c03c1c0(param_1,param_2,puVar15);
      _objc_release(0);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      if (puVar16 != (undefined *)0x0) {
        _objc_release(puVar17);
        puVar17 = puStack_230;
      }
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar26);
      puVar26 = PTR_PTR_1126aea98;
      _objc_alloc();
      ppuVar23 = &PTR____CFConstantStringClassReference_110ea82b8;
      func_0x00010bffd260();
      _objc_release(puVar15);
    }
    else {
      puVar11 = puVar29;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = param_3;
      puVar3 = puVar11;
      ppuVar23 = ppuStack_1b0;
      func_0x0001079b4cf4(param_3,puVar11,ppuStack_1b0,param_5,param_6,puStack_1e8,puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar11);
    _objc_release(puVar28);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puStack_1e8);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar30);
    _objc_release(puVar25);
    _objc_release(ppuStack_1b0);
    _objc_release(puVar29);
  }
  _objc_release(puVar27);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar3);
  puVar26 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar26;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  puVar30 = PTR_PTR_1126d5a20;
  _objc_alloc();
  puVar26 = puVar25;
  func_0x00010bfe0440(puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  FUN_1079b5acc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar23;
  FUN_1079c3910(ppuVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0460();
  ppuVar22 = ppuVar23;
  FUN_1079c2380(ppuVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053200(param_1,param_2);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(puVar27);
  _objc_release(puVar26);
  puVar26 = puVar25;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2a2900(puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar26;
  func_0x00010847dea8(puVar26,puVar27);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar27);
  _objc_release(puVar26);
  puVar27 = PTR_PTR_1126b4860;
  puVar26 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar4 == (undefined *)0x0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar29 = puVar4;
    func_0x00010bfe8f00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_release(puVar29);
  }
  puVar26 = puVar25;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar26;
  func_0x00010c08fa60();
  if (puVar29 == (undefined *)0x0) {
    puVar29 = (undefined *)0x0;
LAB_1079b4c58:
    _objc_release(puVar26);
  }
  else {
    puVar5 = puVar4;
    func_0x00010c0b45a0();
    _objc_release(puVar26);
    puVar26 = PTR_PTR_1126b4860;
    puVar29 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar5 == (undefined *)0x1) {
      puVar5 = puVar25;
      func_0x00010bfe5b40(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar29);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60(puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar29);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126c21e0;
      puVar29 = puVar25;
      func_0x00010bfe5b40(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar25;
      func_0x00010bfe5b40(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26e400(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar29);
      puVar29 = PTR_PTR_1126d5a28;
      _objc_alloc(PTR_PTR_1126d5a28);
      puVar6 = puVar4;
      func_0x00010c0b4620(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c027aa0(puVar29);
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_1079b4c58;
    }
    puVar29 = (undefined *)0x0;
  }
  puVar26 = param_3;
  func_0x0001079b4cf4(param_3,puVar4,puVar27,puVar3,ppuVar23,puVar29,puVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  _objc_release(puVar27);
  _objc_release(puVar4);
  _objc_release(puVar30);
  _objc_release(puVar25);
  _objc_release(puVar3);
  _objc_release(param_3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 1079b5890; end: 1079b5acb;  */

void FUN_1079b5890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_6;
  _objc_retain();
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_new();
  func_0x00010c1c82e0(param_1);
  func_0x00010c1c3ba0(param_1,puVar1);
  func_0x00010c1bdb00(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  func_0x00010c1fe720(param_2);
  func_0x00010c1fe7a0(param_3,param_4,puVar2);
  uVar10 = 0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  if (param_5 == (undefined *)0x0) {
    uVar10 = 0x402c000000000000;
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_6;
  if (param_6 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar1;
  func_0x00010bf51e00();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain();
    FUN_1079c2380();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      func_0x00010c271480(puVar7);
      puVar1 = puVar7;
      uVar11 = uVar10;
      func_0x00010c2712c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010c2712e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c271600(puVar7);
      uVar12 = uVar11;
      func_0x00010c2715e0(puVar7);
      puVar3 = puVar1;
      FUN_1079b5890(uVar10,uVar11,uVar12,param_4,puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_5;
      FUN_107c925f4(param_5,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_release(puVar7);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1079b5acc; end: 1079b5bd3;  */

void FUN_1079b5acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  FUN_1079c2380();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010c271480(param_4);
    lVar1 = param_4;
    uVar4 = param_1;
    func_0x00010c2712c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c2712e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c271600(param_4);
    uVar5 = uVar4;
    func_0x00010c2715e0(param_4);
    lVar3 = lVar1;
    FUN_1079b5890(param_1,uVar4,uVar5,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    FUN_107c925f4(param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079b5bd4; end: 1079b5d3b;  */

void FUN_1079b5bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  uVar1 = param_4;
  FUN_1079c329c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116f20();
  uVar2 = param_4;
  uVar8 = param_1;
  FUN_1079c329c(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  FUN_1079c329c(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c116ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  FUN_1079c329c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116f60();
  uVar9 = uVar8;
  FUN_1079c329c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116f40();
  uVar7 = uVar3;
  FUN_1079b5890(param_1,uVar8,uVar9,param_2,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  FUN_107c925f4(param_3,uVar7);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1079b5d3c; end: 1079b5f8b;  */

void FUN_1079b5d3c(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  FUN_1079c2d24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271480();
  uVar1 = param_3;
  func_0x00010c2712c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2712e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  uVar9 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar10 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _objc_retain(uVar1);
  _objc_opt_new();
  func_0x00010c1c82e0(param_1);
  func_0x00010c1c3ba0(param_1,puVar3);
  func_0x00010c1bdb00(puVar3);
  func_0x00010c166c00(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  func_0x00010c1fe720(0);
  func_0x00010c1fe7a0(uVar9,uVar10,puVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf51e00();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_2;
  FUN_107c925f4(param_2,puVar7);
  _objc_release(param_2);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_retain();
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010bf44340();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bfb5a00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079b5f8c; end: 1079b603f;  */

void FUN_1079b5f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain();
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar3 = puVar1;
  func_0x00010bf44340(puVar1,param_2,0x20,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3 + 0x18;
  if (3 < (long)puVar3) {
    puVar1 = (undefined *)0x18;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5a00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1,1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079b6040; end: 1079b608b;  */

ulong FUN_1079b6040(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c080120();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c077680(param_1);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1079b608c; end: 1079b614b;  */

void FUN_1079b608c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d5a70;
  _objc_alloc(PTR_PTR_1126d5a70);
  FUN_1079b6040(param_1);
  func_0x00010c04d4c0(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x00010c01b460(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079b614c; end: 1079b61db;  */

void FUN_1079b614c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d5a60;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea7c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea7c18,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  FUN_1079b5d3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23cb20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079b61dc; end: 1079b6493;  */

void FUN_1079b61dc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  puVar7 = PTR_PTR_1126d5a60;
  _objc_retain(param_2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea7c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea7c18,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  FUN_1079b5d3c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_1079b6040();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea7c98;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea7c78;
  }
  _objc_retain(ppuVar1);
  uVar4 = param_2;
  FUN_1079b6040();
  _objc_release(param_2);
  ppuVar5 = &PTR____CFConstantStringClassReference_110ea7cb8;
  if ((int)uVar4 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea7cd8;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  FUN_1079b5d3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd20(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1079b6494; end: 1079b64bf;  */

void FUN_1079b6494(undefined8 param_1)

{
  _objc_retain();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1079b64c0; end: 1079b6847;  */

void FUN_1079b64c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x00010c25b720();
  uVar7 = 0;
  if ((uVar1 < 0xf) && ((1L << (uVar1 & 0x3f) & 0x682cU) != 0)) {
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2328;
    func_0x00010bf71400(PTR_PTR_1126c2328);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c067e20(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  uVar1 = param_1;
  func_0x00010c25b720();
  uVar8 = 0;
  if ((long)uVar1 < 0xb) {
    if (uVar1 == 2) {
      uVar8 = param_1;
      FUN_107c24704(param_1,param_2,param_3,param_4,param_6,param_8,param_7,uVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar1 == 3) {
      uVar1 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      lVar5 = param_5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0ee920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(lVar5);
      if (lVar6 == 0) {
        lVar5 = param_5;
        func_0x00010c269d40(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c292e20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0ee940(lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(lVar5);
      }
      uVar8 = param_1;
      FUN_107c2049c(param_1,param_4,lVar6 != 0,param_6,param_8,param_7,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(uVar4);
    }
    else if (uVar1 == 5) {
      uVar8 = param_1;
      FUN_1079b68d4(param_1,param_4,param_6,param_7,param_8,uVar7);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (uVar1 == 0xb) {
    uVar8 = param_1;
    FUN_107c261f4(param_1,param_2,param_3,param_4,param_6,param_8,param_7,uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (uVar1 == 0xd) {
    uVar8 = param_1;
    FUN_107c222dc(param_1,param_4,param_6,param_7,param_8,uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (uVar1 == 0xe) {
    uVar8 = param_1;
    FUN_107c21850(param_1,param_4,param_6,param_8,param_7,uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1079b6848; end: 1079b68d3;  */

void FUN_1079b6848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_1079b68d4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  uVar2 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb45d8,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079b68d4; end: 1079b7847;  */

void FUN_1079b68d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_9);
  ppuVar23 = param_5;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar23;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar23);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar23 = (undefined **)0x0;
    goto LAB_1079b7724;
  }
  ppuVar2 = param_5;
  FUN_1079b7848(param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  ppuVar5 = param_5;
  FUN_1079b796c(param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar1;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar23;
  if ((param_7 & 1) == 0) {
    FUN_107c79228();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107c794c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar23);
  ppuVar23 = ppuVar1;
  func_0x00010c26ea40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010c258fc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c26ea60();
  _objc_retain(ppuVar23);
  _objc_retain(ppuVar9);
  ppuVar13 = ppuVar23;
  func_0x00010bf926c0();
  if ((int)ppuVar13 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    ppuVar13 = ppuVar23;
    func_0x00010bf85540();
    puVar25 = (undefined *)0x0;
    if ((ppuVar12 != (undefined **)0x2) && ((int)ppuVar13 != 0)) {
      uVar28 = 0x4024000000000000;
      uVar26 = 0;
      if (param_7 != 0) {
        uVar26 = 0x4024000000000000;
      }
      ppuVar13 = ppuVar23;
      func_0x00010c26eae0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = (undefined **)PTR_PTR_1126c54d0;
      if (ppuVar13 == (undefined **)0x0) {
        ppuVar14 = ppuVar9;
        func_0x00010c242040(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010c274c60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar9;
        func_0x00010c242040(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar16;
        func_0x00010bf20540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befe6c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar18 = ppuVar12;
        }
        func_0x00010c09e420(ppuVar18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        _objc_release(ppuVar17);
      }
      else {
        ppuVar14 = ppuVar23;
        func_0x00010c26eae0(ppuVar23);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010bf5d560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befe6a0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar12;
        func_0x00010c09e420();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar12;
      }
      _objc_release(ppuVar16);
      _objc_release(ppuVar15);
      _objc_release(ppuVar14);
      _objc_release(ppuVar13);
      _objc_retain(ppuVar23);
      _objc_retain(ppuVar9);
      ppuVar12 = ppuVar9;
      func_0x00010bef60a0();
      if (ppuVar12 == (undefined **)0x6) {
        ppuVar12 = ppuVar9;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010bf20540();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar13;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010c28f280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar15;
        func_0x00010c08fa60();
        if (ppuVar16 == (undefined **)0x0) {
          _objc_release(ppuVar15);
          _objc_release(ppuVar14);
          _objc_release(ppuVar13);
          _objc_release(ppuVar12);
          goto LAB_1079b6d4c;
        }
        ppuVar16 = ppuVar23;
        func_0x00010c26eae0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar15);
        _objc_release(ppuVar14);
        _objc_release(ppuVar13);
        _objc_release(ppuVar12);
        if (ppuVar16 != (undefined **)0x0) goto LAB_1079b6d4c;
        uVar28 = 0x4024000000000000;
        uVar29 = 0x4024000000000000;
        if (param_7 == 0) {
          uVar29 = 0x4028000000000000;
        }
        puVar24 = PTR_PTR_1126ae720;
        func_0x00010bf11fe0(PTR_PTR_1126ae720);
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar29;
      }
      else {
LAB_1079b6d4c:
        puVar25 = PTR__CGSizeZero_110347620;
        ppuVar12 = ppuVar23;
        func_0x00010c26eae0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar12 == (undefined **)0x0) {
          ppuVar13 = ppuVar9;
          func_0x00010bef60a0();
        }
        else {
          ppuVar14 = ppuVar23;
          func_0x00010c26eae0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar14;
          func_0x00010bef60a0();
          _objc_release(ppuVar14);
        }
        uVar30 = *(undefined8 *)puVar25;
        uVar29 = *(undefined8 *)(puVar25 + 8);
        _objc_release(ppuVar12);
        if (ppuVar13 == (undefined **)0x3) {
          ppuVar12 = ppuVar23;
          func_0x00010c26eae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar12 == (undefined **)0x0) {
            ppuVar12 = ppuVar9;
            func_0x00010c242040();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar12;
            func_0x00010bf20540();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar13;
            func_0x00010c2a4740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar13);
            _objc_release(ppuVar12);
            ppuVar12 = ppuVar14;
            func_0x00010c2a3520();
            if (ppuVar12 == (undefined **)0x3) {
              uVar28 = 0x4024000000000000;
              uVar29 = 0x4024000000000000;
              if (param_7 == 0) {
                uVar29 = 0x4028000000000000;
              }
              puVar24 = PTR_PTR_1126ae720;
              func_0x00010bf11fe0(PTR_PTR_1126ae720);
              _objc_retainAutoreleasedReturnValue();
              uVar30 = uVar29;
            }
            else {
              puVar24 = (undefined *)0x0;
            }
            _objc_release(ppuVar14);
          }
          else {
            puVar24 = (undefined *)0x0;
          }
        }
        else {
          puVar24 = (undefined *)0x0;
        }
      }
      _objc_release(ppuVar9);
      _objc_release(ppuVar23);
      ppuVar12 = ppuVar9;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar12;
      func_0x00010c0fec20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      ppuVar12 = ppuVar13;
      func_0x00010c26ea80();
      if ((int)ppuVar12 != 0) {
        ppuVar14 = ppuVar23;
        func_0x00010c26eae0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuVar12 = (undefined **)PTR_PTR_1126c54d0;
        if (ppuVar14 == (undefined **)0x0) {
          ppuVar14 = ppuVar13;
          func_0x00010c0feb40(ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befe6a0(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar12;
          func_0x00010c09e420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar18);
          _objc_release(ppuVar12);
          _objc_release(ppuVar14);
          NEON_fmov(0x4034000000000000,8);
          puVar25 = PTR_PTR_1126ae720;
          func_0x00010bf11fe0(PTR_PTR_1126ae720);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar24);
          uVar29 = 0x4034000000000000;
          uVar30 = 0x4034000000000000;
          ppuVar18 = ppuVar15;
          puVar24 = puVar25;
        }
      }
      puVar25 = PTR_PTR_1126d5a88;
      _objc_alloc();
      uVar27 = func_0x00010c268d20(ppuVar23);
      func_0x00010c23a6a0(ppuVar23);
      func_0x00010c0516c0(uVar27,uVar28,param_3,param_4,uVar30,uVar29,uVar26);
      _objc_release(ppuVar13);
      _objc_release(puVar24);
      _objc_release(ppuVar18);
    }
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar23);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar23);
  puVar24 = PTR_PTR_1126d5a78;
  _objc_alloc();
  ppuVar23 = ppuVar1;
  func_0x00010bfe0440(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar23;
  func_0x00010b0af254();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar1;
  func_0x00010bf20f80(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003d00();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar23);
  puVar19 = PTR_PTR_1126ca450;
  _objc_alloc();
  puVar20 = puVar19;
  func_0x00010b0af254();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = param_5;
  func_0x00010c25b720(param_5);
  puVar21 = puVar20;
  FUN_107c79658(puVar20,ppuVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126d5a80;
  func_0x00010bf81900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042c60(0x3fe8000000000000,0x3fe8000000000000,0x3f800000);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  ppuVar23 = param_5;
  FUN_107c23a34(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar1;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR_PTR_1126b4860;
  if (ppuVar7 == (undefined **)0x0) {
    puStack_f8 = (undefined *)0x0;
  }
  else {
    ppuVar8 = ppuVar1;
    func_0x00010bfe5b40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar1;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = PTR_PTR_1126c21e0;
  if (ppuVar7 == (undefined **)0x0) {
    puStack_100 = (undefined *)0x0;
  }
  else {
    ppuVar8 = ppuVar1;
    func_0x00010bfe5b40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar1;
    func_0x00010bfe5b40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR_PTR_1126b4860;
  if (ppuVar7 == (undefined **)0x0) {
    puStack_108 = (undefined *)0x0;
  }
  else {
    ppuVar8 = ppuVar1;
    func_0x00010c26e3a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR_PTR_1126c21e0;
  if (ppuVar7 == (undefined **)0x0) {
    puStack_110 = (undefined *)0x0;
  }
  else {
    ppuVar8 = ppuVar1;
    func_0x00010c26e3a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar1;
    func_0x00010c26e3a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar10 = ppuVar9;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010c0fec20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c0e9500();
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  if ((int)ppuVar12 == 0) {
    ppuVar10 = (undefined **)PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    ppuVar11 = param_5;
    FUN_1079b7848(param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(ppuVar10);
    _objc_release(ppuVar11);
  }
  else {
    ppuVar10 = param_5;
    FUN_1079b796c(param_5,param_6,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c2b6020(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  func_0x00010c2b32e0(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7b80(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abce0(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab780(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126d5a28;
  _objc_alloc(PTR_PTR_1126d5a28);
  func_0x00010c027aa0();
  func_0x00010c2b31e0(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar20);
  func_0x00010c2afa80(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb020(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2000(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fe0(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba440(ppuVar23);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar7 = param_5;
  FUN_107c6e7e4();
  if ((int)ppuVar7 != 0) {
    if ((param_10 == 0) || (ppuVar7 = param_5, FUN_107c6e7e4(), (int)ppuVar7 == 0)) {
LAB_1079b7630:
      ppuVar7 = ppuVar1;
      func_0x00010c245680(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010bf20f80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      FUN_107c234fc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2acbc0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
    }
    else {
      ppuVar7 = param_5;
      FUN_107c6e9a0(param_5,param_6,param_10);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar7 == (undefined **)0x0) goto LAB_1079b7630;
      func_0x00010c2ad360(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(ppuVar7);
  }
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(puVar19);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
LAB_1079b7724:
  _objc_release(ppuVar1);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar23);
  return;
}



/* Entry: 1079b7848; end: 1079b796b;  */

void FUN_1079b7848(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar10);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar1 = PTR_PTR_1126c2088;
    func_0x00010c0e95e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2090;
    func_0x00010bf82a20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    if (param_1 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126c2090;
    func_0x00010bf82140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    if (puVar10 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126c2090;
    func_0x00010c068940();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (puVar10 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    if (param_1 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sig_icon_size_sigColor__11266c940,0x11e,
                 0xd4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079b796c; end: 1079b7b5f;  */

void FUN_1079b796c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126c2088;
  func_0x00010c0e95e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2090;
  func_0x00010bf82a20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126c2090;
  func_0x00010bf82140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126c2090;
  func_0x00010c068940();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sig_icon_size_sigColor__11266c940,0x11e,0xd4)
  ;
  return;
}



/* Entry: 1079b7b60; end: 1079b7b7b;  */

void FUN_1079b7b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sig_icon_size_sigColor__11266c940,0x11e,0xd4)
  ;
  return;
}



/* Entry: 1079b7b7c; end: 1079b7bc3;  */

void FUN_1079b7b7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000109149ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079b7bc4; end: 1079b7d93;  */

void FUN_1079b7bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1260;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  func_0x00010c043020(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c055bc0(puVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079b7d94; end: 1079b7dcf;  */

void FUN_1079b7d94(void)

{
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079b7dd0; end: 1079b7ee3;  */

void FUN_1079b7dd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = 0;
  FUN_1079b7d94();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f4b1d8;
  FUN_1079b7bc4(0,&PTR____CFConstantStringClassReference_110f4b1d8,uVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042a40(puVar3);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  if (puRam00000001137270b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001137270b0 = puVar3;
  }
  return;
}



/* Entry: 1079b7ee4; end: 1079b7fc7; +[MFCFeedCardSnap descriptor] */

void FUN_1079b7ee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b668d0,
                        &PTR____CFConstantStringClassReference_110ea7cf8,&PTR_DAT_11323bca0,
                        &PTR_s_snapId_11323bcb8,5,0x30,0x1c);
    puRam00000001137270b0 = puVar1;
  }
  return;
}



/* Entry: 1079b7fc8; end: 1079b7fd3;  */

bool FUN_1079b7fc8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1079b7fd4; end: 1079b804f;  */

undefined * FUN_1079b7fd4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137270c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ea7d38,
                        &UNK_10dee09b4,&UNK_10dee0a18,7,FUN_1079b8050,0);
    do {
      if (puRam00000001137270c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137270c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137270c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137270c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137270c0;
}



/* Entry: 1079b8050; end: 1079b805b;  */

bool FUN_1079b8050(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 1079b805c; end: 1079b80c3; +[MFCFeedCardCapabilities descriptor] */

void FUN_1079b805c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66970,
                        &PTR____CFConstantStringClassReference_110ea7d58,&PTR_DAT_11323bd58,
                        &PTR_s_share_11323c3d0,0x11,0x90,0x1c);
    puRam00000001137270c8 = puVar1;
  }
  return;
}



/* Entry: 1079b80c4; end: 1079b813f; +[MFCFeedCardCapabilities_AutoPlay descriptor] */

undefined * FUN_1079b80c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b669c0,
                        &PTR____CFConstantStringClassReference_110ea7d78,&PTR_DAT_11323bd58,
                        &PTR_DAT_11323bd70,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001137270d0 = puVar1;
  }
  return puRam00000001137270d0;
}



/* Entry: 1079b8140; end: 1079b81cb; +[MFCFeedCardCapabilities_Share descriptor] */

undefined * FUN_1079b8140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66a10,
                        &PTR____CFConstantStringClassReference_110e86fb8,&PTR_DAT_11323bd58,
                        &PTR_s_disabled_11323c1b0,5,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b66970);
    puRam00000001137270d8 = puVar1;
  }
  return puRam00000001137270d8;
}



/* Entry: 1079b81cc; end: 1079b8247; +[MFCFeedCardCapabilities_Subscribe descriptor] */

undefined * FUN_1079b81cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66a60,
                        &PTR____CFConstantStringClassReference_110ea7d98,&PTR_DAT_11323bd58,
                        &PTR_s_disabled_11323bf30,2,4,0x1c);
    func_0x00010c228780();
    puRam00000001137270e0 = puVar1;
  }
  return puRam00000001137270e0;
}



/* Entry: 1079b8248; end: 1079b82c3; +[MFCFeedCardCapabilities_Notification descriptor] */

undefined * FUN_1079b8248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66ab0,
                        &PTR____CFConstantStringClassReference_110e37678,&PTR_DAT_11323bd58,
                        &PTR_s_disabled_11323bf70,2,4,0x1c);
    func_0x00010c228780();
    puRam00000001137270e8 = puVar1;
  }
  return puRam00000001137270e8;
}



/* Entry: 1079b82c4; end: 1079b833f; +[MFCFeedCardCapabilities_Reply descriptor] */

undefined * FUN_1079b82c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66b00,
                        &PTR____CFConstantStringClassReference_110ea7db8,&PTR_DAT_11323bd58,
                        &PTR_s_disabled_11323bd90,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001137270f0 = puVar1;
  }
  return puRam00000001137270f0;
}



/* Entry: 1079b8340; end: 1079b83cb; +[MFCFeedCardCapabilities_CoverTap descriptor] */

undefined * FUN_1079b8340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66b50,
                        &PTR____CFConstantStringClassReference_110ea7dd8,&PTR_DAT_11323bd58,
                        &PTR_s_disabled_11323bfb0,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b66970);
    puRam00000001137270f8 = puVar1;
  }
  return puRam00000001137270f8;
}



/* Entry: 1079b83cc; end: 1079b8447; +[MFCFeedCardCapabilities_WatchState descriptor] */

undefined * FUN_1079b83cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66ba0,
                        &PTR____CFConstantStringClassReference_110ea7df8,&PTR_DAT_11323bd58,
                        &PTR_DAT_11323c130,4,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113727100 = puVar1;
  }
  return puRam0000000113727100;
}



/* Entry: 1079b8448; end: 1079b84c3; +[MFCFeedCardCapabilities_ContentAds descriptor] */

undefined * FUN_1079b8448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66bf0,
                        &PTR____CFConstantStringClassReference_110ea7e18,&PTR_DAT_11323bd58,
                        &PTR_DAT_11323c070,3,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113727108 = puVar1;
  }
  return puRam0000000113727108;
}



/* Entry: 1079b84c4; end: 1079b853f; +[MFCFeedCardCapabilities_Pin descriptor] */

undefined * FUN_1079b84c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66c40,
                        &PTR____CFConstantStringClassReference_110e06678,&PTR_DAT_11323bd58,
                        &PTR_DAT_11323bdb0,1,4,0x1c);
    func_0x00010c228780();
    puRam0000000113727110 = puVar1;
  }
  return puRam0000000113727110;
}



/* Entry: 1079b8540; end: 1079b85bb; +[MFCFeedCardCapabilities_Description descriptor] */

undefined * FUN_1079b8540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66c90,
                        &PTR____CFConstantStringClassReference_110ea7e38,&PTR_DAT_11323bd58,
                        &PTR_s_text_11323bdd0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam0000000113727118 = puVar1;
  }
  return puRam0000000113727118;
}



/* Entry: 1079b85bc; end: 1079b8637; +[MFCFeedCardCapabilities_Comment descriptor] */

undefined * FUN_1079b85bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b66ce0,
                        &PTR____CFConstantStringClassReference_110ea7e58,&PTR_DAT_11323bd58,
                        &PTR_s_disabled_11323bdf0,1,4,0x1c);
    func_0x00010c228780();
    puRam0000000113727120 = puVar1;
  }
  return puRam0000000113727120;
}



/* Entry: 1079b8638; end: 1079b86b3; +[MFCFeedCardCapabilities_LLMPredictionForSEO descriptor] */

undefined * FUN_1079b8638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b67168,
                        &PTR____CFConstantStringClassReference_110ea7e78,&PTR_DAT_11323bd58,
                        &PTR_DAT_11323be10,1,0x10,0x1c);
    func_0x00010c228780();
    puRam0000000113727128 = puVar1;
  }
  return puRam0000000113727128;
}



/* Entry: 1079b86b4; end: 1079b8737; +[MFCFeedCardCapabilities_LLMPredictionForSEO_ModelResultPair descriptor] */

undefined * FUN_1079b86b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b67190,
                        &PTR____CFConstantStringClassReference_110ea7e98,&PTR_DAT_11323bd58,
                        &PTR_DAT_11323bff0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam0000000113727130 = puVar1;
  }
  return puRam0000000113727130;
}


