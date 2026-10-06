/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bfd99c; end: 107bfda0b;  */

void FUN_107bfd99c(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107bfda08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,0);
  return;
}



/* Entry: 107bfda0c; end: 107bfdb4f; -[SCDiscoverFeedStoryIHDocDataCoordinator updateVersion:version:numSnapsInVersion:] */

void FUN_107bfda0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  FUN_107bf6d98();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107bfdb50;
  puStack_80 = &UNK_110a00648;
  uStack_54 = (undefined1)uVar2;
  uStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = uVar1;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar4,param_2,&puStack_98,0,0);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfdb50; end: 107bfdc63;  */

void FUN_107bfdb50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08b320();
  if (lVar3 != *(long *)(param_1 + 0x38)) {
    func_0x000107bfa450(uVar2,*(long *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = uVar2;
    func_0x00010bf21f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0f60(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfdc64; end: 107bfdc93; -[SCDiscoverFeedStoryIHDocDataCoordinator .cxx_destruct] */

void FUN_107bfdc64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bfdc94; end: 107bfde23; -[SCDiscoverFeedRankerV2 initWithLazyDiscoverFeedInteractionHistoryManager:storiesConfigProvider:discoverFeedDataMutator:] */

undefined8 *
FUN_107bfdc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fa2f8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 8,param_5);
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107bfde24; end: 107bfdeb7;  */

void FUN_107bfde24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf82840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf71380();
  func_0x00010c0df760(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107bfdeb8; end: 107bfdec3; +[SCDiscoverFeedRankerV2 announcerIdentifier] */

undefined ** FUN_107bfdeb8(void)

{
  return &PTR____CFConstantStringClassReference_110eb39f8;
}



/* Entry: 107bfdec4; end: 107bfdecb; -[SCDiscoverFeedRankerV2 addListener:] */

void FUN_107bfdec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107bfdecc; end: 107bfded3; -[SCDiscoverFeedRankerV2 removeListener:] */

void FUN_107bfdecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107bfded4; end: 107bfe53f; -[SCDiscoverFeedRankerV2 reorderStories:scoringParams:isPullToRefresh:isDebouncedQuery:isLocalReranking:feedType:mostRecentStoryOnDataStoreForCurrentFeedType:preservedStoriesForCurrentFeedType:interactionHistoryArray:] */

void FUN_107bfded4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_108;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar15 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar15);
  lVar2 = lVar15;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar17 = *plStack_1c0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1c0 != lVar17) {
          _objc_enumerationMutation(lVar15);
        }
        puVar3 = puVar1;
        func_0x00010bf4b900();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      lVar2 = lVar15;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar15);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = param_11;
  func_0x00010050471c(param_11,&PTR___NSConcreteGlobalBlock_110a00678,
                      &PTR___NSConcreteGlobalBlock_110a00698);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_107bfe598;
  puStack_208 = &UNK_110a006b8;
  _objc_retain(uVar4);
  uStack_200 = uVar4;
  lStack_1f8 = param_1;
  uStack_1d8 = param_5;
  uStack_1d7 = param_6;
  _objc_retain(puVar5);
  puStack_1f0 = puVar5;
  _objc_retain(puVar3);
  puStack_1e8 = puVar3;
  _objc_retain(puVar6);
  puVar7 = puVar1;
  puStack_1e0 = puVar6;
  func_0x00010bd86420(puVar1,&puStack_220);
  uVar16 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf51e00();
  _objc_retain();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110eb3b18;
  puVar9 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  func_0x00010bf7dbc0(uVar16);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(lVar2);
  puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar11 = puVar10;
  func_0x000100504554(puVar10,&PTR___NSConcreteGlobalBlock_110a00708);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf82760();
  puVar13 = puVar11;
  puVar8 = puVar1;
  FUN_107bf52a4(puVar11,puVar1,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c11f880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(uVar12);
  lVar17 = param_1;
  func_0x00010bec2420();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  _objc_retain(lVar17);
  lVar2 = lVar17;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar17);
      }
      uVar16 = *(undefined8 *)(lVar18 * 8);
      func_0x00010c12d360(puVar13);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf51e00(uVar16);
      func_0x00010befa120(uVar12);
      _objc_release(uVar16);
      lVar18 = lVar18 + 1;
    } while (lVar2 != lVar18);
    lVar2 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ff80();
  _objc_release(uVar16);
  lVar2 = param_1;
  func_0x00010bee54a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar13);
  _objc_release(lVar2);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(lVar17);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1f0);
  _objc_release(uStack_200);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar15);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  __Unwind_Resume(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,puVar8);
  return;
}



/* Entry: 107bfe540; end: 107bfe597;  */

void FUN_107bfe540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 107bfe598; end: 107bfebb3;  */

void FUN_107bfe598(double param_1,long param_2,undefined *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar14 = *(undefined **)(param_2 + 0x20);
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar14;
  if (puVar14 != (undefined *)0x0) {
    puVar6 = puVar14;
    func_0x00010c08b320();
    puVar15 = param_3;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010c298be0();
    _objc_release(puVar15);
    if (puVar6 != puVar7) {
      puVar6 = PTR_PTR_1126d71d0;
      func_0x00010bf820c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010bf454e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar5;
      func_0x00010c298be0();
      puVar7 = param_3;
      func_0x000108483614(param_3);
      func_0x000107bfa450(puVar6,puVar15,puVar7);
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_3;
      func_0x00010bf454e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0();
      func_0x000108483614(param_3);
      func_0x00010c28be20(uVar8);
      _objc_release(puVar14);
      _objc_release(uVar8);
      _objc_release(puVar6);
    }
  }
  cVar2 = *(char *)(param_2 + 0x48);
  cVar3 = *(char *)(param_2 + 0x49);
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c067ec0();
  _objc_retain(param_3);
  _objc_retain(puVar5);
  func_0x00010c150c20(param_3);
  puVar14 = puVar5;
  dVar19 = param_1;
  func_0x00010c2770c0();
  puVar6 = puVar5;
  func_0x00010c276740();
  dVar22 = 1.0;
  if ((uint)puVar6 < 0x33) {
    fVar16 = ((float)((ulong)puVar6 & 0xffffffff) / 10.0 + -1.0) * -10.0;
    _expf();
    dVar19 = 1.0 / ((double)fVar16 + 1.0) + -4.539787187241018e-05;
    dVar22 = dVar19 / 0.9999545812606812;
  }
  fVar16 = SUB84(dVar19,0);
  puVar15 = puVar5;
  func_0x00010c23f8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  func_0x00010c296d80();
  _objc_release(puVar15);
  if (puVar5 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = puVar5;
    func_0x00010c0b5120(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_107bf2dc8(puVar15,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  dVar19 = 1.0;
  if ((uint)puVar6 < 0x33) {
    fVar17 = -((float)((ulong)puVar6 & 0xffffffff) + -1.0);
    _expf();
    dVar19 = (1.0 / ((double)fVar17 + 1.0) + -0.2689414322376251) / 0.7310585975646973;
  }
  puVar10 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf52680();
  _objc_release(puVar10);
  puVar10 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf52680();
  _objc_release(puVar10);
  puVar10 = puVar5;
  func_0x00010c276740();
  iVar4 = (int)puVar10 + -0x14;
  fVar17 = 20.0;
  if (puVar11 != (undefined *)0x10) {
    fVar17 = 10.0;
  }
  fVar18 = 60.0;
  if (puVar12 != (undefined *)0x10) {
    fVar18 = 50.0;
  }
  dVar20 = 0.0;
  if (-1 < iVar4) {
    fVar21 = (float)iVar4;
    dVar20 = 1.0;
    if (fVar21 <= fVar18) {
      fVar18 = (fVar18 / fVar17 + -1.0) * -2.0;
      _expf();
      fVar17 = (fVar21 / fVar17 + -1.0) * -2.0;
      _expf();
      dVar20 = (1.0 / ((double)fVar17 + 1.0) + -0.11920291930437088) /
               (double)(1.0 / (fVar18 + 1.0) + -0.11920292);
    }
  }
  uVar13 = 0x28;
  if (cVar2 == '\0') {
    uVar13 = 1;
  }
  uVar1 = (uint)uVar8;
  if (cVar3 == '\0') {
    uVar1 = uVar13;
  }
  fVar18 = (float)(5.0 / ((double)uVar1 * dVar19 * (double)((ulong)puVar6 & 0xffffffff) + 5.0));
  fVar17 = 1.0;
  if (puVar7 == (undefined *)0x64) {
    fVar17 = 0.0;
  }
  dVar19 = 1.0;
  if (puVar7 == (undefined *)0x64) {
    dVar19 = 0.0;
  }
  if (fVar16 <= fVar17) {
    fVar17 = fVar16;
  }
  fVar16 = (float)(dVar19 * 0.099 + 0.001 + (double)fVar17 * 0.9);
  fVar17 = (float)(dVar20 * -0.99999 + 1.0);
  if (fVar17 <= fVar18) {
    fVar18 = fVar17;
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  dVar19 = (double)(SUB84(param_1,0) *
                    (float)((((double)((ulong)puVar14 & 0xffffffff) + 5.0) /
                             ((double)((ulong)puVar6 & 0xffffffff) * dVar22 + 5.0) + -1.0) * 0.2 +
                           1.0) * fVar16);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(uVar9);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar19,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x30));
  _objc_release(puVar14);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar19,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar8);
  _objc_release(puVar14);
  _objc_release(puVar6);
  puVar14 = PTR_PTR_1126d7200;
  _objc_alloc(PTR_PTR_1126d7200);
  func_0x00010c0422e0(dVar19);
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107bfebb4; end: 107bfec13;  */

void FUN_107bfebb4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2098;
  _objc_opt_class(PTR_PTR_1126c2098);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bfec14; end: 107bfee1f; -[SCDiscoverFeedRankerV2 _stashAdjacentAdStoriesAfterReRank:mostRecentStoryForCurrentFeedType:] */

undefined * FUN_107bfec14(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
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
  
  puVar11 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  puVar2 = param_3;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_f0;
  uVar13 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    lVar15 = *plStack_120;
    do {
      puVar16 = (undefined *)0x0;
      puVar6 = puVar14;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(puVar2);
        }
        puVar14 = *(undefined **)(lStack_128 + (long)puVar16 * 8);
        puVar4 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (((puVar14 != puVar4) &&
            (puVar4 = puVar14, func_0x00010c25b720(), puVar4 == (undefined *)0x5)) &&
           (puVar4 = puVar6, func_0x00010c25b720(), puVar4 == (undefined *)0x5)) {
          func_0x00010befa120(puVar1);
        }
        _objc_retain(puVar14);
        _objc_release(puVar6);
        puVar16 = puVar16 + 1;
        puVar6 = puVar14;
      } while (puVar3 != puVar16);
      puVar12 = auStack_f0;
      uVar13 = 0x10;
      puVar3 = puVar2;
      puVar11 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
    _objc_release(puVar14);
  }
  _objc_release(puVar2);
  lVar15 = param_4;
  func_0x00010c25b720();
  if (lVar15 == 5) {
    puVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25b720();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x5) {
      puVar2 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined8 *)puVar2;
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    _objc_retain(uVar13);
    ppuVar10 = &PTR___NSConcreteGlobalBlock_110a00728;
    puVar2 = (undefined *)puVar11;
    func_0x0001006372a4(puVar11,&PTR___NSConcreteGlobalBlock_110a00728);
    puVar1 = puVar2;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(puVar11);
      puVar1 = (undefined *)puVar11;
    }
    else {
      puVar5 = puVar12;
      func_0x0001006372a4(puVar12,&PTR___NSConcreteGlobalBlock_110a00728);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      func_0x00010befa160(puVar6);
      ppuVar10 = &PTR___NSConcreteGlobalBlock_110a00748;
      puVar4 = puVar6;
      func_0x00010bd86590(puVar6,&PTR___NSConcreteGlobalBlock_110a00748);
      puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      _objc_retain(uVar13);
      func_0x00010c246980();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      _objc_retain(uVar13);
      func_0x00010c246980();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      _objc_retain(uVar13);
      func_0x00010c246980();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246980();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246980();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c246cc0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010be3c820(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010bf51e00();
      _objc_release(param_3);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar16);
      _objc_release(uVar13);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(puVar3);
      _objc_release(uVar13);
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      func_0x00010c25b720(ppuVar10);
      return (undefined *)(ulong)(ppuVar10 == (undefined **)0x5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 107bfee20; end: 107bff187; -[SCDiscoverFeedRankerV2 _updatedStoriesByRerankingPromotedStories:withPreservedStories:interactionHistoryDict:] */

ulong FUN_107bfee20(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar13 = &PTR___NSConcreteGlobalBlock_110a00728;
  uVar1 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110a00728);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
  }
  else {
    uVar3 = param_4;
    func_0x0001006372a4(param_4,&PTR___NSConcreteGlobalBlock_110a00728);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    func_0x00010befa160(puVar4);
    ppuVar13 = &PTR___NSConcreteGlobalBlock_110a00748;
    puVar5 = puVar4;
    func_0x00010bd86590(puVar4,&PTR___NSConcreteGlobalBlock_110a00748);
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    _objc_retain(param_5);
    func_0x00010c246980();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    _objc_retain(param_5);
    func_0x00010c246980();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    _objc_retain(param_5);
    func_0x00010c246980();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246980();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246980();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010c246cc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010be3c820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf51e00();
    _objc_release(param_1);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(param_5);
    _objc_release(puVar7);
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_release(param_5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x00010c25b720(ppuVar13);
  return (ulong)(ppuVar13 == (undefined **)0x5);
}



/* Entry: 107bff188; end: 107bff1a7;  */

bool FUN_107bff188(undefined8 param_1,long param_2)

{
  func_0x00010c25b720(param_2);
  return param_2 == 5;
}



/* Entry: 107bff1a8; end: 107bff1d7;  */

void FUN_107bff1a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 107bff1d8; end: 107bff64f;  */

undefined * FUN_107bff1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c259740(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c259740(param_3);
  _objc_release(param_3);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    func_0x00010c276740(lVar5);
  }
  if (lVar4 != 0) {
    func_0x00010c276740(lVar4);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar5);
  return puVar3;
}



/* Entry: 107bff650; end: 107bff6df;  */

long FUN_107bff650(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c13bd00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c13bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = 0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = param_2;
    func_0x00010bf433a0(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 107bff6e0; end: 107bff78f;  */

undefined *
FUN_107bff6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c150c20(param_3);
  uVar4 = param_1;
  func_0x00010c150c20(param_4);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(uVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 107bff790; end: 107bff8fb; -[SCDiscoverFeedRankerV2 _insertPromotedStoriesForBrandSuitability:currentStories:] */

void FUN_107bff790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be521e0(param_1,param_2,param_4);
  uVar2 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x00010c0d3c80();
  uVar4 = param_4;
  func_0x00010bfed480(param_4,param_2,&PTR___NSConcreteGlobalBlock_110a007f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107bff91c;
  puStack_70 = &UNK_110a00848;
  uStack_68 = uVar2;
  uStack_60 = param_4;
  uStack_58 = param_1;
  _objc_retain(uVar3);
  uStack_50 = uVar3;
  puStack_48 = puVar5;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010bf97bc0(uVar4,param_2,&puStack_88);
  func_0x00010c12d480(uVar3,param_2,puVar5);
  puVar1 = puStack_48;
  _objc_retain(uVar3);
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107bff8fc; end: 107bff91b;  */

bool FUN_107bff8fc(undefined8 param_1,long param_2)

{
  func_0x00010c25b720(param_2);
  return param_2 == 5;
}



/* Entry: 107bff91c; end: 107bffa73;  */

void FUN_107bff91c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    *param_3 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    FUN_107bf3b10(uVar2,param_2);
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bfece40();
    if (lVar1 == 0x7fffffffffffffff) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
      func_0x000107d04ea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010852fb28(uVar3,uVar2,1);
      _objc_release(uVar2);
      func_0x00010bef92c0(*(undefined8 *)(param_1 + 0x40));
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bede100(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x38));
      _objc_release(uVar3);
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 107bffa74; end: 107bffb7f;  */

bool FUN_107bffa74(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar7 = false;
  }
  else {
    lVar4 = param_2;
    FUN_107bf3bf8();
    lVar2 = *(long *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    lVar5 = lVar3;
    func_0x00010bf21060(lVar3);
    func_0x000107d04ec4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107d04ea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    bVar7 = lVar2 <= lVar4;
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
    if (lVar4 < lVar2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db6af8;
    }
    func_0x00010852f868(uVar8,lVar5,uVar6,ppuVar1,1);
    _objc_release(uVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return bVar7;
}



/* Entry: 107bffb80; end: 107bffd1b; -[SCDiscoverFeedRankerV2 _logCurrentStoriesGarmFlags:] */

void FUN_107bffb80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar7;
  long lVar8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
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
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(long *)(lStack_128 + lVar8 * 8);
        lVar1 = unaff_x23;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = lVar1;
        func_0x00010afef744();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        if (unaff_x22 == 0) {
          FUN_107bf3bf8();
          unaff_x24 = *(undefined8 *)(param_1 + 0x28);
          func_0x000107d04ea0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010852fc9c(unaff_x24,unaff_x23,1);
        }
        else {
          unaff_x24 = *(undefined8 *)(param_1 + 0x28);
          unaff_x23 = unaff_x22;
          func_0x00010bf21060();
          func_0x000107d04ec4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010852fe10(unaff_x24,unaff_x23,1);
        }
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar6 != 0);
  }
  lVar6 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107bffd1c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_107bfff64;
  uStack_190 = 0x107bfff74;
  uStack_188 = 0;
  puVar2 = (undefined *)puVar5;
  func_0x00010c259560(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(puVar2);
  if (puStack_1a8[5] == 0) {
    _objc_retain(puVar5);
    puVar2 = (undefined *)puVar5;
  }
  else {
    puVar3 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c6d88;
    func_0x00010c118280(PTR_PTR_1126c6d88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba3c0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar6 + 0x40;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_180 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a480(lVar7);
    _objc_release(puVar4);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(puVar3);
  }
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar6 = 8;
  __Block_object_dispose(&uStack_1b0);
  __Unwind_Resume();
  *(undefined8 *)((long)puVar5 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 107bffd1c; end: 107bfff63; -[SCDiscoverFeedRankerV2 _updatePromotedStoryForSlotRiskTolerance:adjStoriesRisk:] */

void FUN_107bffd1c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107bfff64;
  uStack_60 = 0x107bfff74;
  uStack_58 = 0;
  puVar1 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(puVar1);
  if (puStack_78[5] == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c6d88;
    func_0x00010c118280(PTR_PTR_1126c6d88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba3c0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a480(lVar4);
    _objc_release(puVar3);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 107bfff64; end: 107bfff7b;  */

void FUN_107bfff64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107bfff7c; end: 107bfffef;  */

void FUN_107bfff7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d7208;
  func_0x00010bf81be0(PTR_PTR_1126d7208,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7fc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bffff0; end: 107c0005b; -[SCDiscoverFeedRankerV2 _logStoriesIdsBeforeAndAfterRerank:newStories:] */

void FUN_107bffff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110a008a8);
  uVar1 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110a008c8);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0005c; end: 107c000bb;  */

void FUN_107c0005c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 107c000bc; end: 107c0042b; -[SCDiscoverFeedRankerV2 _logsAdStoriesBeforeAndAfterRerank:newStories:storyToScore:] */

void FUN_107c000bc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c25b720();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar3 == 5) {
        uVar3 = uVar2;
        func_0x00010c259740(uVar2);
        func_0x00010c0df880(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = uVar2;
        func_0x00010c11f680(uVar2);
        func_0x00010c0df6e0(puVar6,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c150c20(uVar2);
        func_0x00010c0df740();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_5;
        func_0x00010c0e00e0(param_5,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110eb3a18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar9);
        _objc_release(puVar9);
        _objc_release(uVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar11 < uVar2);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c25b720();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar3 == 5) {
        uVar3 = uVar2;
        func_0x00010c259740(uVar2);
        func_0x00010c0df880(puVar6,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = uVar2;
        func_0x00010c11f680(uVar2);
        func_0x00010c0df6e0(puVar7,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c150c20(uVar2);
        func_0x00010c0df740();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_5;
        func_0x00010c0e00e0(param_5,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eb3a18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar10);
        _objc_release(puVar6);
      }
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
    } while (uVar11 < uVar2);
  }
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0042c; end: 107c0079b; -[SCDiscoverFeedRankerV2 _logOrganicStoriesIdsBeforeAndAfterRerank:newStories:storyToScore:] */

void FUN_107c0042c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c25b720();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar3 != 5) {
        uVar3 = uVar2;
        func_0x00010c259740(uVar2);
        func_0x00010c0df880(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = uVar2;
        func_0x00010c11f680(uVar2);
        func_0x00010c0df6e0(puVar6,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c150c20(uVar2);
        func_0x00010c0df740();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_5;
        func_0x00010c0e00e0(param_5,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110eb3a38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar9);
        _objc_release(puVar9);
        _objc_release(uVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar11 < uVar2);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c25b720();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar3 != 5) {
        uVar3 = uVar2;
        func_0x00010c259740(uVar2);
        func_0x00010c0df880(puVar6,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = uVar2;
        func_0x00010c11f680(uVar2);
        func_0x00010c0df6e0(puVar7,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c150c20(uVar2);
        func_0x00010c0df740();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_5;
        func_0x00010c0e00e0(param_5,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eb3a38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar10);
        _objc_release(puVar6);
      }
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
    } while (uVar11 < uVar2);
  }
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0079c; end: 107c00803; -[SCDiscoverFeedRankerV2 .cxx_destruct] */

void FUN_107c0079c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c00804; end: 107c00993; -[SCFriendStoriesRanker initWithCircumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_107c00804(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fa300;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined4 *)((long)puVar1 + 0x48) = 0;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar3);
    func_0x000108f54478(param_4);
    *(undefined4 *)((long)puVar1 + 0x18) = param_1;
    func_0x000108f5448c(param_4);
    *(undefined4 *)((long)puVar1 + 0x1c) = param_1;
    func_0x000108f544a4(param_4);
    *(undefined4 *)((long)puVar1 + 0x20) = param_1;
    *(undefined1 *)((long)puVar1 + 0x24) = 0;
    uVar3 = param_4;
    func_0x000108f544bc();
    *(int *)((long)puVar1 + 0x28) = (int)uVar3;
    func_0x000108f544e8(param_4);
    *(undefined4 *)((long)puVar1 + 0x2c) = param_1;
    uVar3 = param_4;
    func_0x000108f54500();
    *(char *)((long)puVar1 + 0x30) = (char)uVar3;
    puVar2 = PTR_PTR_1126d7210;
    _objc_alloc();
    func_0x000108f54424(param_4);
    func_0x000108f54438(param_4);
    func_0x000108f5444c(param_4);
    func_0x000108f54514(param_4);
    func_0x00010c01e6c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107c00994; end: 107c00b2f; -[SCFriendStoriesRanker reorderFriendStoriesRankedIds:storySummaries:rerankTrigger:interactionHistoryArray:] */

void FUN_107c00994(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107c00b30;
  uStack_50 = 0x107c00b40;
  uStack_48 = 0;
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_80 = param_5;
  _objc_retain(param_6);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c00b30; end: 107c00b47;  */

void FUN_107c00b30(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107c00b48; end: 107c00ba3;  */

void FUN_107c00b48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be72580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c00ba4; end: 107c010c3; -[SCFriendStoriesRanker _performReorderFriendStoriesRankedIds:storySummaries:rerankTrigger:interactionHistoryArray:] */

void FUN_107c00ba4(long param_1,undefined **param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [136];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 == 2) {
    iVar18 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar18;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb8ca0();
    iVar4 = (int)uVar6;
LAB_107c00c8c:
    if (iVar4 < 2) {
      _objc_release(uVar5);
    }
    else {
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar18 / iVar4;
      }
      _objc_release(uVar5);
      if (iVar18 != iVar2 * iVar4) {
        puVar19 = (undefined *)0x0;
        goto LAB_107c00ffc;
      }
    }
  }
  else {
    if (param_5 == 1) {
      iVar18 = *(int *)(param_1 + 0x44) + 1;
      *(int *)(param_1 + 0x44) = iVar18;
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb8cc0();
      iVar4 = (int)uVar6;
      goto LAB_107c00c8c;
    }
    if (param_5 == 0) {
      iVar18 = *(int *)(param_1 + 0x40) + 1;
      *(int *)(param_1 + 0x40) = iVar18;
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb8ce0();
      iVar4 = (int)uVar6;
      goto LAB_107c00c8c;
    }
  }
  _objc_initWeak(auStack_100,param_1);
  uVar6 = param_4;
  func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_110a00918,
                      &PTR___NSConcreteGlobalBlock_110a00938);
  func_0x00010be16220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar7 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110a00958,
                      &PTR___NSConcreteGlobalBlock_110a00978);
  lVar8 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110a009b8,
                      &PTR___NSConcreteGlobalBlock_110a009d8);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_107c011bc;
  puStack_138 = &UNK_110a009f8;
  _objc_retain(uVar6);
  uStack_130 = uVar6;
  _objc_retain(puVar10);
  puStack_128 = puVar10;
  _objc_retain(puVar9);
  puStack_120 = puVar9;
  _objc_retain(lVar7);
  lStack_118 = lVar7;
  _objc_retain(lVar8);
  lStack_110 = lVar8;
  _objc_copyWeak(auStack_108,auStack_100);
  param_2 = &puStack_150;
  lVar11 = param_3;
  func_0x000100504554(param_3,param_2);
  puVar12 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar13);
  lVar14 = lVar13;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar13);
      }
      uVar15 = *(ulong *)(lVar17 * 8);
      func_0x00010c0dfc60();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar16 = uVar15;
      _objc_opt_isKindOfClass(uVar15,param_2);
      uVar1 = uVar15;
      if ((uVar16 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar15);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar19);
      }
      _objc_release(uVar1);
      lVar17 = lVar17 + 1;
    } while (lVar14 != lVar17);
    lVar14 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  func_0x00010befa160(puVar19);
  func_0x00010befa160(puVar19);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_destroyWeak(auStack_108);
  _objc_release(lStack_110);
  _objc_release(lStack_118);
  _objc_release(puStack_120);
  _objc_release(puStack_128);
  _objc_release(uStack_130);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_100);
  param_6 = param_1;
LAB_107c00ffc:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_100);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 107c010c4; end: 107c010cb;  */

void FUN_107c010c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 107c010cc; end: 107c011bb;  */

void FUN_107c010cc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107c011bc; end: 107c01313;  */

void FUN_107c011bc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c27dd80();
  if (lVar4 == 6) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
  }
  else {
    lVar4 = lVar1;
    func_0x00010c259580();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar4 != 0x80) {
      if (lVar1 == 0) {
LAB_107c01288:
        lVar4 = *(long *)(param_2 + 0x40);
        func_0x00010c0e00e0(lVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar4 = *(long *)(param_2 + 0x38);
        func_0x00010c259d00(lVar1);
        func_0x00010c0df880(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (lVar4 == 0) goto LAB_107c01288;
      }
      param_2 = param_2 + 0x48;
      _objc_loadWeakRetained(param_2);
      func_0x00010be19540();
      _objc_release(param_2);
      puVar3 = PTR_PTR_1126d7200;
      _objc_alloc(PTR_PTR_1126d7200);
      func_0x00010c0422e0((double)(float)param_1);
      _objc_release(lVar4);
      goto LAB_107c012e8;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x30);
  }
  func_0x00010befa120(uVar2);
  puVar3 = (undefined *)0x0;
LAB_107c012e8:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c01314; end: 107c0150f; -[SCFriendStoriesRanker _friendStoriesScoreFromInteractionHistory:storyInfo:] */

double FUN_107c01314(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5
                    )

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  dVar11 = 1.0;
  if ((*(byte *)(param_2 + 0x24) & 1) == 0) {
    func_0x00010c150c20(param_5);
    dVar11 = (double)SUB84(param_1,0);
  }
  func_0x00010c259d00(param_5);
  uVar2 = param_5;
  func_0x00010c259cc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1120(param_5);
  if (param_4 == 0) {
    fVar8 = 0.0;
  }
  else {
    uVar4 = (ulong)param_1;
    uVar3 = param_4;
    func_0x00010c08b320();
    if (uVar3 != uVar4) goto LAB_107c014d4;
    uVar3 = param_4;
    func_0x00010c0b4c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    iVar1 = *(int *)(param_2 + 0x28);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (param_1 < (double)-iVar1) goto LAB_107c014d4;
    uVar3 = param_4;
    func_0x00010c276740();
    fVar8 = (float)(uVar3 & 0xffffffff);
  }
  fVar9 = *(float *)(param_2 + 0x18);
  dVar6 = 0.0;
  if ((((0.0 < fVar9) && (fVar10 = *(float *)(param_2 + 0x1c), fVar9 < fVar10)) &&
      (fVar12 = *(float *)(param_2 + 0x20), 0.0 < fVar12)) && (dVar6 = 1.0, fVar8 <= fVar10)) {
    fVar5 = fVar12;
    _expf();
    fVar10 = -(fVar12 * (fVar10 / fVar9 + -1.0));
    _expf();
    dVar6 = (double)(1.0 / (fVar5 + 1.0));
    fVar8 = -(fVar12 * (fVar8 / fVar9 + -1.0));
    _expf();
    dVar6 = (1.0 / ((double)fVar8 + 1.0) - dVar6) /
            (double)(float)(1.0 / ((double)fVar10 + 1.0) - dVar6);
  }
  dVar7 = 1.0 - dVar6;
  if (1.0 - dVar6 <= (double)*(float *)(param_2 + 0x2c)) {
    dVar7 = (double)*(float *)(param_2 + 0x2c);
  }
  dVar11 = dVar11 + dVar7 + -1.0;
LAB_107c014d4:
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return dVar11;
}



/* Entry: 107c01510; end: 107c0183b; -[SCFriendStoriesRanker _filterOriginalFriendStoriesInteractionHistory:] */

undefined8 * FUN_107c01510(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126d7180;
    _objc_alloc();
    func_0x00010c068640(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c068660(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c027be0();
    dVar16 = 0.0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    puVar12 = &uStack_140;
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar13 = *plStack_130;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          dVar15 = dVar16;
          if (*plStack_130 != lVar13) {
            _objc_enumerationMutation(param_3);
            dVar15 = dVar16;
          }
          uVar14 = *(ulong *)(lStack_138 + (long)puVar12 * 8);
          uVar4 = uVar14;
          func_0x00010c0b4c40(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f3a0();
          lVar6 = *(long *)(param_1 + 0x38);
          func_0x00010c0686c0();
          dVar16 = (double)-lVar6;
          if (dVar15 <= dVar16) {
            _objc_release(uVar5);
            _objc_release(uVar4);
          }
          else {
            _objc_retain(uVar14);
            _objc_retain(puVar2);
            uVar7 = uVar14;
            func_0x00010c0b4bc0();
            puVar8 = puVar2;
            func_0x00010c0b4be0();
            if (puVar8 < (undefined *)(uVar7 & 0xffffffff)) {
              _objc_release(puVar2);
              _objc_release(uVar14);
              _objc_release(uVar5);
              _objc_release(uVar4);
            }
            else {
              uVar7 = uVar14;
              func_0x00010c276740();
              puVar8 = puVar2;
              func_0x00010c276760();
              _objc_release(puVar2);
              _objc_release(uVar14);
              _objc_release(uVar5);
              _objc_release(uVar4);
              if ((undefined *)(uVar7 & 0xffffffff) <= puVar8) goto LAB_107c0172c;
            }
            func_0x00010befa120(puVar1);
          }
LAB_107c0172c:
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar3 != puVar12);
        puVar12 = &uStack_140;
        puVar3 = param_3;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar9 = puVar1;
    func_0x00010bf51e00();
    lVar13 = *(long *)(param_1 + 0x38);
    func_0x00010c068600();
    puVar3 = puVar9;
    if (lVar13 < 0x7fffffff) {
      func_0x00010c246ba0(puVar1);
      func_0x00010bf529e0();
      func_0x00010c068600();
      puVar12 = (undefined8 *)0x0;
      puVar3 = puVar1;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c0b4c40(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c0b4c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar11 = uVar10;
  func_0x00010c2709c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf433a0(puVar3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar12);
  return puVar1;
}



/* Entry: 107c0183c; end: 107c018fb;  */

undefined8 FUN_107c0183c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x00010c0b4c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0b4c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c2709c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107c018fc; end: 107c018ff; -[SCFriendStoriesRanker _logFriendStoriesInfoBeforeAndAfterRerankWithOriginalIds:updatedIds:storyIdToStoryInfo:fpsToHI:storyIdToHI:] */

void FUN_107c018fc(void)

{
  return;
}



/* Entry: 107c01900; end: 107c0193b; -[SCFriendStoriesRanker .cxx_destruct] */

void FUN_107c01900(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c0193c; end: 107c01c8b;  */

void FUN_107c0193c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_2b4;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 uStack_279;
  undefined **appuStack_278 [3];
  byte bStack_25e;
  byte bStack_25d;
  long lStack_230;
  long lStack_228;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126d71f0);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar4 = &uStack_191;
  FUN_107c0413c();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_DAT_110864b98;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_110864b38;
  pppuStack_150 = &ppuStack_208;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  lStack_140 = 0;
  lStack_148 = 0;
  puVar5 = &uStack_279;
  uStack_1d8 = param_2;
  bStack_176 = bVar1;
  bStack_175 = bVar2;
  puStack_158 = puVar4;
  FUN_107c04280(puVar5);
  FUN_107c01c8c(&lStack_298,param_3);
  FUN_107c035b0(appuStack_278,puVar5,&lStack_298);
  bStack_105 = bVar2 & bStack_25d;
  bStack_106 = (bVar1 | bStack_25e) & 1;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_1108629c8;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b4 = 0;
  puVar6 = &uStack_b0;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = appuStack_278;
  func_0x0001000e77a0(puVar6,&ppuStack_120,&lStack_2b0,&uStack_2b4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_DAT_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_210;
  appuStack_278[0] = &PTR_DAT_110881e20;
  plStack_210 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  if (lStack_298 != 0) {
    lStack_290 = lStack_298;
    __ZdlPv();
  }
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_DAT_110864b38;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar3 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110864b98;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107c01c8c; end: 107c01e0f;  */

void FUN_107c01c8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uStack_43c;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined **ppuStack_420;
  undefined4 uStack_418;
  undefined4 uStack_408;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 uStack_3a9;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined2 uStack_390;
  byte bStack_38e;
  byte bStack_38d;
  undefined1 *puStack_370;
  undefined ***pppuStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined **ppuStack_338;
  undefined4 uStack_330;
  undefined4 uStack_320;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined1 uStack_2c1;
  undefined **ppuStack_2c0;
  undefined4 uStack_2b8;
  undefined2 uStack_2a8;
  undefined2 uStack_2a6;
  undefined1 *puStack_288;
  undefined ***pppuStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined **ppuStack_250;
  undefined4 uStack_248;
  undefined2 uStack_238;
  byte bStack_236;
  byte bStack_235;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0();
  func_0x000100676478(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_2);
  puVar9 = &uStack_120;
  puVar3 = param_2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + (long)puVar9 * 8);
        _objc_retain(uVar7);
        _objc_retain(uVar7);
        uVar4 = uVar7;
        func_0x00010c0b4ca0();
        _objc_release(uVar7);
        puVar2 = &uStack_128;
        uStack_128 = uVar4;
        FUN_107c03624(param_1);
        _objc_release(uVar7);
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (puVar3 != puVar9);
      puVar9 = &uStack_120;
      puVar3 = param_2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((int)puVar2 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126d71f0);
    if (param_2 == (undefined8 *)0x0) {
      uStack_1b0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_1e0,param_2);
    }
    puVar5 = &uStack_2c1;
    FUN_107c0413c();
    uStack_330 = 0xf;
    uStack_320 = 0x100;
    ppuStack_338 = &PTR_DAT_110864b98;
    uStack_2f8 = 0;
    uStack_300 = 0;
    lStack_2e8 = 0;
    lStack_2f0 = 0;
    plStack_2d8 = (long *)0x0;
    uStack_2e0 = 0;
    plStack_2d0 = (long *)0x0;
    uStack_2a6 = *(undefined2 *)(puVar5 + 0x1a);
    uStack_2b8 = 10;
    uStack_2a8 = 0x100;
    ppuStack_2c0 = &PTR_DAT_110864b38;
    lStack_270 = 0;
    lStack_278 = 0;
    plStack_260 = (long *)0x0;
    uStack_268 = 0;
    plStack_258 = (long *)0x0;
    puVar6 = &uStack_3a9;
    puStack_308 = puVar2;
    puStack_288 = puVar5;
    pppuStack_280 = &ppuStack_338;
    FUN_107c04280();
    uStack_418 = 0xf;
    uStack_408 = 0x100;
    ppuStack_420 = &PTR_DAT_110862958;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    lStack_3d0 = 0;
    lStack_3d8 = 0;
    plStack_3c0 = (long *)0x0;
    uStack_3c8 = 0;
    plStack_3b8 = (long *)0x0;
    bStack_38e = puVar6[0x1a];
    bStack_38d = puVar6[0x1b];
    uStack_3a0 = 10;
    uStack_390 = 0x100;
    ppuStack_3a8 = &PTR_DAT_110881e20;
    plStack_340 = (long *)0x0;
    lStack_358 = 0;
    lStack_360 = 0;
    plStack_348 = (long *)0x0;
    uStack_350 = 0;
    bStack_236 = (byte)uStack_2a6 | bStack_38e;
    bStack_235 = uStack_2a6._1_1_ & bStack_38d;
    uStack_248 = 4;
    uStack_238 = 0x100;
    ppuStack_250 = &PTR_DAT_1108629c8;
    pppuStack_218 = &ppuStack_2c0;
    pppuStack_210 = &ppuStack_3a8;
    uStack_200 = 0;
    lStack_208 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1f8 = 0;
    plStack_1e8 = (long *)0x0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_428 = 0;
    uStack_43c = 0;
    puVar2 = &uStack_1e0;
    puStack_3f0 = puVar9;
    puStack_370 = puVar6;
    pppuStack_368 = &ppuStack_420;
    func_0x0001000e77a0(puVar2,&ppuStack_250,&lStack_438,&uStack_43c);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (lStack_438 != 0) {
      lStack_430 = lStack_438;
      __ZdlPv();
    }
    plVar1 = plStack_1e8;
    ppuStack_250 = &PTR_DAT_1108629c8;
    plStack_1e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1f0;
    plStack_1f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_208 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_340;
    ppuStack_3a8 = &PTR_DAT_110881e20;
    plStack_340 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_348;
    plStack_348 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_360 != 0) {
      lStack_358 = lStack_360;
      __ZdlPv();
    }
    plVar1 = plStack_3b8;
    ppuStack_420 = &PTR_DAT_110862958;
    plStack_3b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3c0;
    plStack_3c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_3d8 != 0) {
      lStack_3d0 = lStack_3d8;
      __ZdlPv();
    }
    plVar1 = plStack_258;
    ppuStack_2c0 = &PTR_DAT_110864b38;
    plStack_258 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_260;
    plStack_260 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_278 != 0) {
      lStack_270 = lStack_278;
      __ZdlPv();
    }
    plVar1 = plStack_2d0;
    ppuStack_338 = &PTR_DAT_110864b98;
    plStack_2d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2d8;
    plStack_2d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_2f0 != 0) {
      lStack_2e8 = lStack_2f0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_1b8);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1d0);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  return;
}



/* Entry: 107c01e10; end: 107c02223;  */

void FUN_107c01e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d71f0);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_191;
  FUN_107c0413c();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_DAT_110864b98;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_110864b38;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar3 = &uStack_279;
  uStack_1d8 = param_2;
  puStack_158 = puVar2;
  pppuStack_150 = &ppuStack_208;
  FUN_107c04280();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_110862958;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar3[0x1a];
  bStack_25d = puVar3[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_DAT_110881e20;
  plStack_210 = (long *)0x0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar4 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar3;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_DAT_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_DAT_110881e20;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110862958;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_110864b38;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110864b98;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107c02224; end: 107c0227b;  */

void FUN_107c02224(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_107c0193c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c0227c; end: 107c02303;  */

void FUN_107c0227c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_107c06700(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c02304; end: 107c024c7;  */

undefined ** FUN_107c02304(undefined **param_1,undefined ***param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined *puVar17;
  long *plVar18;
  undefined ***pppuVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar24;
  undefined **unaff_x25;
  undefined **ppuVar25;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  long *plVar26;
  long lStack_a10;
  long lStack_a08;
  long *plStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined4 uStack_9c8;
  undefined1 uStack_9c1;
  long lStack_9c0;
  long lStack_9b8;
  undefined8 uStack_9b0;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined **ppuStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  ulong uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  long lStack_948;
  long lStack_940;
  undefined8 uStack_938;
  long *plStack_930;
  long *plStack_928;
  undefined1 uStack_911;
  undefined **ppuStack_910;
  undefined4 uStack_908;
  undefined2 uStack_8f8;
  undefined2 uStack_8f6;
  undefined1 *puStack_8d8;
  undefined ***pppuStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  undefined8 uStack_8b8;
  long *plStack_8b0;
  long *plStack_8a8;
  long lStack_8a0;
  long lStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_860;
  long lStack_858;
  long *plStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long lStack_7a0;
  undefined8 uStack_798;
  code *pcStack_790;
  undefined8 uStack_788;
  undefined1 auStack_780 [128];
  long lStack_700;
  undefined ***pppuStack_6f0;
  undefined ***pppuStack_6e8;
  undefined ***pppuStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined **ppuStack_6c8;
  undefined **ppuStack_6c0;
  undefined8 *puStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined8 ***pppuStack_6a0;
  code *pcStack_698;
  undefined4 uStack_688;
  undefined1 uStack_681;
  long lStack_680;
  long lStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long lStack_660;
  undefined *puStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined1 uStack_610;
  undefined1 uStack_60f;
  undefined4 uStack_60c;
  code *pcStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined ***pppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined1 ***pppuStack_5e0;
  code *pcStack_5d8;
  undefined4 uStack_5d0;
  undefined1 uStack_5c9;
  long lStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  undefined **ppuStack_598;
  undefined4 uStack_590;
  undefined4 uStack_580;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 uStack_540;
  long *plStack_538;
  long *plStack_530;
  undefined1 uStack_521;
  undefined **ppuStack_520;
  undefined4 uStack_518;
  undefined2 uStack_508;
  undefined2 uStack_506;
  undefined1 *puStack_4e8;
  undefined ***pppuStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 uStack_470;
  undefined1 uStack_46f;
  undefined4 uStack_46c;
  code *pcStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined ***pppuStack_450;
  undefined **ppuStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined1 **ppuStack_410;
  code *pcStack_408;
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined4 uStack_3e0;
  undefined1 uStack_3d9;
  long lStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_390;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 uStack_331;
  undefined **ppuStack_330;
  undefined4 uStack_328;
  undefined2 uStack_318;
  undefined2 uStack_316;
  undefined **ppuStack_2f8;
  undefined ***pppuStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined4 uStack_234;
  code *pcStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar3 = param_1;
  FUN_107c0193c(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  ppuVar4 = ppuVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = (undefined8 *)*puStack_120;
    unaff_x25 = &PTR_PTR_1126d7000;
    do {
      ppuVar25 = (undefined **)0x0;
      do {
        if ((undefined8 *)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        param_2 = *(undefined ****)(lStack_128 + (long)ppuVar25 * 8);
        unaff_x23 = (undefined8 *)PTR_PTR_1126d7218;
        FUN_107c0668c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        ppuVar25 = (undefined **)((long)ppuVar25 + 1);
      } while (ppuVar5 != ppuVar25);
      ppuVar5 = ppuVar4;
      func_0x00010bf52a60();
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  ppuVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(param_1);
  __Unwind_Resume();
  pcStack_138 = FUN_107c024c8;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = param_2;
  ppuStack_3e8 = ppuVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  ppuStack_3f0 = ppuVar5;
  _objc_retain(param_2);
  puVar20 = &uStack_280;
  pppuVar19 = param_2;
  func_0x00010bf52a60();
  if (pppuVar19 != (undefined ***)0x0) {
    lStack_3f8 = *plStack_270;
    unaff_x27 = &ppuStack_3a8;
    unaff_x28 = &ppuStack_330;
    ppuVar4 = &PTR_DAT_110862958;
    ppuVar3 = &PTR_DAT_110881e20;
    do {
      pppuVar22 = (undefined ***)0x0;
      do {
        if (*plStack_270 != lStack_3f8) {
          _objc_enumerationMutation(param_2);
        }
        uVar24 = *(ulong *)(lStack_278 + (long)pppuVar22 * 8);
        pppuVar6 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar23 = pppuVar6;
        func_0x00010c067ec0();
        _objc_release(pppuVar6);
        _objc_opt_class(PTR_PTR_1126d71f0);
        if (ppuStack_3e8 == (undefined **)0x0) {
          uStack_290 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_2b8 = 0;
          uStack_2c0 = 0;
        }
        else {
          func_0x00010bfa6be0(&uStack_2c0);
        }
        unaff_x25 = (undefined **)&uStack_331;
        FUN_107c04280();
        func_0x00010c282760();
        uStack_3a0 = 0xf;
        uStack_390 = 0x100;
        uStack_378 = uVar24 & 0xffffffff;
        ppuStack_3a8 = &PTR_DAT_110862958;
        uStack_368 = 0;
        uStack_370 = 0;
        lStack_358 = 0;
        lStack_360 = 0;
        plStack_348 = (long *)0x0;
        uStack_350 = 0;
        plStack_340 = (long *)0x0;
        uStack_316 = *(undefined2 *)((long)unaff_x25 + 0x1a);
        uStack_328 = 10;
        uStack_318 = 0x100;
        ppuStack_330 = &PTR_DAT_110881e20;
        lStack_2e0 = 0;
        lStack_2e8 = 0;
        plStack_2d0 = (long *)0x0;
        uStack_2d8 = 0;
        plStack_2c8 = (long *)0x0;
        puVar7 = &uStack_3d9;
        ppuStack_2f8 = unaff_x25;
        pppuStack_2f0 = unaff_x27;
        FUN_107c043c4();
        uStack_240 = *(undefined8 *)(puVar7 + 0x10);
        uStack_238 = puVar7[0x19];
        uStack_237 = puVar7[0x18];
        uStack_228 = *(undefined8 *)(puVar7 + 0x28);
        uStack_234 = 1;
        pcStack_230 = FUN_107c036e4;
        lStack_3d0 = 0;
        uStack_3c8 = 0;
        lStack_3d8 = 0;
        func_0x000100c435d0(&lStack_3d8,&uStack_240,auStack_220,1);
        func_0x000100c436b8(&lStack_3c0,&lStack_3d8);
        uStack_3e0 = SUB84(pppuVar23,0);
        unaff_x24 = &uStack_2c0;
        pppuVar6 = &ppuStack_330;
        func_0x0001000e77a0(unaff_x24,pppuVar6,&lStack_3c0,&uStack_3e0);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x24;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        if (lStack_3c0 != 0) {
          lStack_3b8 = lStack_3c0;
          __ZdlPv();
        }
        if (lStack_3d8 != 0) {
          lStack_3d0 = lStack_3d8;
          __ZdlPv();
        }
        plVar18 = plStack_2c8;
        ppuStack_330 = &PTR_DAT_110881e20;
        plStack_2c8 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        plVar18 = plStack_2d0;
        plStack_2d0 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        if (lStack_2e8 != 0) {
          lStack_2e0 = lStack_2e8;
          __ZdlPv();
        }
        plVar18 = plStack_340;
        ppuStack_3a8 = &PTR_DAT_110862958;
        plStack_340 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        plVar18 = plStack_348;
        plStack_348 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        if (lStack_360 != 0) {
          lStack_358 = lStack_360;
          __ZdlPv();
        }
        func_0x0001000e76e0(&uStack_298);
        _objc_release(uStack_2a8);
        _objc_release(uStack_2b0);
        func_0x00010befa160(ppuStack_3f0);
        _objc_release(unaff_x23);
        pppuVar22 = (undefined ***)((long)pppuVar22 + 1);
      } while (pppuVar19 != pppuVar22);
      puVar20 = &uStack_280;
      pppuVar19 = param_2;
      func_0x00010bf52a60();
    } while (pppuVar19 != (undefined ***)0x0);
  }
  _objc_release(param_2);
  ppuVar25 = ppuStack_3f0;
  ppuVar5 = ppuStack_3f0;
  func_0x00010bf51e00(ppuStack_3f0);
  _objc_release(ppuVar25);
  _objc_release(param_2);
  ppuVar8 = ppuStack_3e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
    ___stack_chk_fail();
    _objc_release(ppuStack_3f0);
    _objc_release(param_2);
    _objc_release(ppuStack_3e8);
    ppuVar9 = ppuVar8;
    __Unwind_Resume();
    ppuStack_418 = ppuVar25;
    pcStack_408 = FUN_107c02968;
    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_450 = param_2;
    ppuStack_448 = unaff_x25;
    puStack_440 = unaff_x24;
    puStack_438 = unaff_x23;
    ppuStack_430 = ppuVar8;
    ppuStack_428 = ppuVar4;
    ppuStack_420 = ppuVar3;
    ppuStack_410 = &puStack_140;
    _objc_retain();
    _objc_retain(pppuVar6);
    _objc_retain(puVar20);
    _objc_opt_class(PTR_PTR_1126d71f0);
    if (ppuVar9 == (undefined **)0x0) {
      uStack_480 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      uStack_4a8 = 0;
      puStack_4b0 = (undefined *)0x0;
    }
    else {
      func_0x00010bfa6be0(&puStack_4b0,ppuVar9);
    }
    puVar7 = &uStack_521;
    FUN_107c04280();
    pppuVar19 = pppuVar6;
    func_0x00010c282760();
    uStack_590 = 0xf;
    uStack_580 = 0x100;
    uStack_568 = (ulong)pppuVar19 & 0xffffffff;
    ppuStack_598 = &PTR_DAT_110862958;
    uStack_558 = 0;
    uStack_560 = 0;
    lStack_548 = 0;
    lStack_550 = 0;
    plStack_538 = (long *)0x0;
    uStack_540 = 0;
    plStack_530 = (long *)0x0;
    uStack_506 = *(undefined2 *)(puVar7 + 0x1a);
    uStack_518 = 10;
    uStack_508 = 0x100;
    ppuStack_520 = &PTR_DAT_110881e20;
    pppuStack_4e0 = &ppuStack_598;
    lStack_4d0 = 0;
    lStack_4d8 = 0;
    plStack_4c0 = (long *)0x0;
    uStack_4c8 = 0;
    plStack_4b8 = (long *)0x0;
    puVar10 = &uStack_5c9;
    puStack_4e8 = puVar7;
    FUN_107c043c4();
    uStack_478 = *(undefined8 *)(puVar10 + 0x10);
    uStack_470 = puVar10[0x19];
    uStack_46f = puVar10[0x18];
    uStack_460 = *(undefined8 *)(puVar10 + 0x28);
    uStack_46c = 1;
    pcStack_468 = FUN_107c036e4;
    lStack_5c0 = 0;
    uStack_5b8 = 0;
    lStack_5c8 = 0;
    func_0x000100c435d0(&lStack_5c8,&uStack_478,&lStack_458,1);
    func_0x000100c436b8(&lStack_5b0,&lStack_5c8);
    puVar11 = puVar20;
    func_0x00010c067ec0();
    uStack_5d0 = SUB84(puVar11,0);
    ppuVar3 = &puStack_4b0;
    func_0x0001000e77a0(ppuVar3,&ppuStack_520,&lStack_5b0,&uStack_5d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    if (lStack_5b0 != 0) {
      lStack_5a8 = lStack_5b0;
      __ZdlPv();
    }
    if (lStack_5c8 != 0) {
      lStack_5c0 = lStack_5c8;
      __ZdlPv();
    }
    plVar18 = plStack_4b8;
    ppuStack_520 = &PTR_DAT_110881e20;
    plStack_4b8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    plVar18 = plStack_4c0;
    plStack_4c0 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (lStack_4d8 != 0) {
      lStack_4d0 = lStack_4d8;
      __ZdlPv();
    }
    plVar18 = plStack_530;
    ppuStack_598 = &PTR_DAT_110862958;
    plStack_530 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    plVar18 = plStack_538;
    plStack_538 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (lStack_550 != 0) {
      lStack_548 = lStack_550;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_488);
    _objc_release(uStack_498);
    _objc_release(uStack_4a0);
    ppuVar5 = ppuVar4;
    func_0x00010bf51e00(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(puVar20);
    _objc_release(pppuVar6);
    ppuVar3 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
      ___stack_chk_fail();
      _objc_release(ppuVar4);
      _objc_release(puVar20);
      _objc_release(pppuVar6);
      _objc_release(ppuVar9);
      ppuVar25 = ppuVar3;
      __Unwind_Resume();
      pcStack_5d8 = FUN_107c02cf0;
      lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_5f0 = pppuVar6;
      ppuStack_5e8 = ppuVar9;
      pppuStack_5e0 = &ppuStack_410;
      _objc_retain();
      _objc_opt_class(PTR_PTR_1126d71f0);
      if (ppuVar25 == (undefined **)0x0) {
        uStack_620 = 0;
        uStack_638 = 0;
        uStack_640 = 0;
        uStack_628 = 0;
        uStack_630 = 0;
        uStack_648 = 0;
        puStack_650 = (undefined *)0x0;
      }
      else {
        func_0x00010bfa6be0(&puStack_650,ppuVar25);
      }
      puVar7 = &uStack_681;
      FUN_107c043c4();
      uStack_618 = *(undefined8 *)(puVar7 + 0x10);
      uStack_610 = puVar7[0x19];
      uStack_60f = puVar7[0x18];
      uStack_600 = *(undefined8 *)(puVar7 + 0x28);
      uStack_60c = 1;
      pcStack_608 = FUN_107c036e4;
      lStack_678 = 0;
      uStack_670 = 0;
      lStack_680 = 0;
      func_0x000100c435d0(&lStack_680,&uStack_618,&lStack_5f8,1);
      func_0x000100c436b8(&lStack_668,&lStack_680);
      uStack_688 = 0;
      ppuVar5 = &puStack_650;
      plVar18 = &lStack_668;
      func_0x00010054c81c(ppuVar5,plVar18,&uStack_688);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_668 != 0) {
        lStack_660 = lStack_668;
        __ZdlPv();
      }
      if (lStack_680 != 0) {
        lStack_678 = lStack_680;
        __ZdlPv();
      }
      func_0x0001000e76e0(&uStack_628);
      _objc_release(uStack_638);
      _objc_release(uStack_640);
      ppuVar8 = ppuVar25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5f8) {
        ___stack_chk_fail();
        func_0x000104d96620(&puStack_650);
        _objc_release(ppuVar25);
        ppuVar5 = ppuVar8;
        __Unwind_Resume();
        puStack_6d8 = &UNK_110881e10;
        puStack_6d0 = &UNK_110862948;
        pcStack_698 = FUN_107c02e70;
        lStack_700 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_6f0 = unaff_x28;
        pppuStack_6e8 = unaff_x27;
        pppuStack_6e0 = param_2;
        ppuStack_6c8 = ppuVar3;
        ppuStack_6c0 = ppuVar4;
        puStack_6b8 = puVar20;
        ppuStack_6b0 = ppuVar8;
        ppuStack_6a8 = ppuVar25;
        pppuStack_6a0 = &pppuStack_5e0;
        _objc_retain();
        _objc_retain(plVar18);
        plVar12 = plVar18;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        uStack_838 = 0;
        uStack_840 = 0;
        uStack_828 = 0;
        uStack_830 = 0;
        lStack_858 = 0;
        uStack_860 = 0;
        uStack_848 = 0;
        plStack_850 = (long *)0x0;
        _objc_retain();
        plVar13 = plVar12;
        func_0x00010bf52a60();
        if (plVar13 != (long *)0x0) {
          lVar21 = *plStack_850;
          do {
            plVar26 = (long *)0x0;
            do {
              if (*plStack_850 != lVar21) {
                _objc_enumerationMutation(plVar12);
              }
              uVar24 = *(ulong *)(lStack_858 + (long)plVar26 * 8);
              plVar14 = plVar18;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              plVar15 = plVar14;
              func_0x00010c2827c0();
              _objc_release(plVar14);
              _objc_opt_class(PTR_PTR_1126d71f0);
              if (ppuVar5 == (undefined **)0x0) {
                uStack_870 = 0;
                uStack_888 = 0;
                uStack_890 = 0;
                uStack_878 = 0;
                uStack_880 = 0;
                lStack_898 = 0;
                lStack_8a0 = 0;
              }
              else {
                func_0x00010bfa6be0(&lStack_8a0,ppuVar5);
              }
              puVar7 = &uStack_911;
              FUN_107c04280();
              func_0x00010c282760();
              uStack_988 = CONCAT44(uStack_988._4_4_,0xf);
              uStack_978 = CONCAT44(uStack_978._4_4_,0x100);
              uStack_960 = uVar24 & 0xffffffff;
              ppuStack_990 = &PTR_DAT_110862958;
              uStack_950 = 0;
              uStack_958 = 0;
              lStack_940 = 0;
              lStack_948 = 0;
              plStack_930 = (long *)0x0;
              uStack_938 = 0;
              plStack_928 = (long *)0x0;
              uStack_8f6 = *(undefined2 *)(puVar7 + 0x1a);
              uStack_908 = 10;
              uStack_8f8 = 0x100;
              ppuStack_910 = &PTR_DAT_110881e20;
              lStack_8c0 = 0;
              lStack_8c8 = 0;
              plStack_8b0 = (long *)0x0;
              uStack_8b8 = 0;
              plStack_8a8 = (long *)0x0;
              puVar10 = &uStack_9c1;
              puStack_8d8 = puVar7;
              pppuStack_8d0 = &ppuStack_990;
              FUN_107c043c4();
              lStack_7a0 = *(long *)(puVar10 + 0x10);
              uStack_788 = *(undefined8 *)(puVar10 + 0x28);
              uStack_798._0_2_ = CONCAT11(puVar10[0x18],puVar10[0x19]);
              uStack_798 = CONCAT44(1,(undefined4)uStack_798);
              pcStack_790 = FUN_107c036e4;
              lStack_9b8 = 0;
              uStack_9b0 = 0;
              lStack_9c0 = 0;
              func_0x000100c435d0(&lStack_9c0,&lStack_7a0,auStack_780,1);
              func_0x000100c436b8(&uStack_9a8,&lStack_9c0);
              uStack_9c8 = 0;
              plVar14 = &lStack_8a0;
              func_0x0001000e77a0(plVar14,&ppuStack_910,&uStack_9a8,&uStack_9c8);
              _objc_retainAutoreleasedReturnValue();
              if (CONCAT44(uStack_9a4,uStack_9a8) != 0) {
                __ZdlPv();
              }
              if (lStack_9c0 != 0) {
                lStack_9b8 = lStack_9c0;
                __ZdlPv();
              }
              plVar16 = plStack_8a8;
              ppuStack_910 = &PTR_DAT_110881e20;
              plStack_8a8 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              plVar16 = plStack_8b0;
              plStack_8b0 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              if (lStack_8c8 != 0) {
                lStack_8c0 = lStack_8c8;
                __ZdlPv();
              }
              plVar16 = plStack_928;
              ppuStack_990 = &PTR_DAT_110862958;
              plStack_928 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              plVar16 = plStack_930;
              plStack_930 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              if (lStack_948 != 0) {
                lStack_940 = lStack_948;
                __ZdlPv();
              }
              func_0x0001000e76e0(&uStack_878);
              _objc_release(uStack_888);
              _objc_release(uStack_890);
              for (; plVar16 = plVar14, func_0x00010bf529e0(), plVar15 < plVar16;
                  plVar15 = (long *)((long)plVar15 + 1)) {
                plVar16 = plVar14;
                func_0x00010c0dfd40(plVar14);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = PTR_PTR_1126d7218;
                FUN_107c0668c(PTR_PTR_1126d7218,plVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25ed40(ppuVar5);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar17);
                _objc_release(plVar16);
              }
              _objc_release(plVar14);
              plVar26 = (long *)((long)plVar26 + 1);
            } while (plVar26 != plVar13);
            plVar13 = plVar12;
            func_0x00010bf52a60();
          } while (plVar13 != (long *)0x0);
        }
        _objc_release(plVar12);
        _objc_opt_class(PTR_PTR_1126d71f0);
        if (ppuVar5 == (undefined **)0x0) {
          uStack_960 = 0;
          uStack_978 = 0;
          uStack_980 = 0;
          uStack_968 = 0;
          uStack_970 = 0;
          uStack_988 = 0;
          ppuStack_990 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_990,ppuVar5);
        }
        plVar13 = &lStack_9c0;
        FUN_107c04280(plVar13);
        FUN_107c01c8c(&lStack_8a0,plVar12);
        FUN_107c035b0(&ppuStack_910,plVar13,&lStack_8a0);
        lStack_7a0 = 0;
        uStack_798 = 0;
        pcStack_790 = (code *)0x0;
        uStack_9a8 = 0;
        pppuVar6 = &ppuStack_990;
        pppuVar19 = &ppuStack_910;
        func_0x0001000e77a0(pppuVar6,pppuVar19,&lStack_7a0,&uStack_9a8);
        _objc_retainAutoreleasedReturnValue();
        pppuVar22 = pppuVar6;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar6);
        if (lStack_7a0 != 0) {
          uStack_798 = lStack_7a0;
          __ZdlPv();
        }
        plVar13 = plStack_8a8;
        ppuStack_910 = &PTR_DAT_110881e20;
        plStack_8a8 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plStack_8b0;
        plStack_8b0 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        if (lStack_8c8 != 0) {
          lStack_8c0 = lStack_8c8;
          __ZdlPv();
        }
        if (lStack_8a0 != 0) {
          lStack_898 = lStack_8a0;
          __ZdlPv();
        }
        func_0x0001000e76e0(&uStack_968);
        _objc_release(uStack_978);
        _objc_release(uStack_980);
        lStack_a08 = 0;
        lStack_a10 = 0;
        uStack_9f8 = 0;
        plStack_a00 = (long *)0x0;
        uStack_9e8 = 0;
        uStack_9f0 = 0;
        uStack_9d8 = 0;
        uStack_9e0 = 0;
        _objc_retain(pppuVar22);
        plVar13 = &lStack_a10;
        pppuVar6 = pppuVar22;
        func_0x00010bf52a60();
        if (pppuVar6 != (undefined ***)0x0) {
          lVar21 = *plStack_a00;
          do {
            pppuVar23 = (undefined ***)0x0;
            do {
              if (*plStack_a00 != lVar21) {
                _objc_enumerationMutation(pppuVar22);
              }
              pppuVar19 = *(undefined ****)(lStack_a08 + (long)pppuVar23 * 8);
              puVar17 = PTR_PTR_1126d7218;
              FUN_107c0668c(PTR_PTR_1126d7218);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25ed40(ppuVar5);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar17);
              pppuVar23 = (undefined ***)((long)pppuVar23 + 1);
            } while (pppuVar6 != pppuVar23);
            plVar13 = &lStack_a10;
            pppuVar6 = pppuVar22;
            func_0x00010bf52a60();
          } while (pppuVar6 != (undefined ***)0x0);
        }
        _objc_release(pppuVar22);
        _objc_release(pppuVar22);
        _objc_release(plVar12);
        _objc_release(plVar18);
        ppuVar4 = ppuVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_700) {
          ___stack_chk_fail();
          _objc_release(pppuVar22);
          _objc_release(pppuVar22);
          _objc_release(plVar12);
          _objc_release(plVar18);
          _objc_release(ppuVar5);
          __Unwind_Resume();
          uVar2 = *(undefined2 *)((long)pppuVar19 + 0x19);
          uVar1 = *(undefined *)((long)pppuVar19 + 0x1b);
          *(undefined4 *)(ppuVar4 + 1) = 0xd;
          *(undefined1 *)(ppuVar4 + 3) = 0;
          *(undefined2 *)((long)ppuVar4 + 0x19) = uVar2;
          *(undefined1 *)((long)ppuVar4 + 0x1b) = uVar1;
          *ppuVar4 = (undefined *)&PTR_DAT_110881e20;
          ppuVar4[7] = (undefined *)pppuVar19;
          ppuVar4[9] = (undefined *)0x0;
          ppuVar4[8] = (undefined *)0x0;
          ppuVar4[0xb] = (undefined *)0x0;
          ppuVar4[10] = (undefined *)0x0;
          func_0x0001006581c0(ppuVar4 + 9,*plVar13,plVar13[1],plVar13[1] - *plVar13 >> 3);
          ppuVar4[0xc] = (undefined *)0x0;
          ppuVar4[0xd] = (undefined *)0x0;
          return ppuVar4;
        }
        return ppuVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return ppuVar5;
}



/* Entry: 107c024c8; end: 107c02967;  */

undefined8 * FUN_107c024c8(undefined8 *param_1,undefined ***param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined *puVar17;
  long *plVar18;
  undefined ***pppuVar19;
  long lVar20;
  undefined ***pppuVar21;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined ***pppuVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar23;
  undefined1 *unaff_x25;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  long *plVar24;
  long lStack_8e0;
  long lStack_8d8;
  long *plStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined4 uStack_898;
  undefined1 uStack_891;
  long lStack_890;
  long lStack_888;
  undefined8 uStack_880;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined **ppuStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  ulong uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  long lStack_818;
  long lStack_810;
  undefined8 uStack_808;
  long *plStack_800;
  long *plStack_7f8;
  undefined1 uStack_7e1;
  undefined **ppuStack_7e0;
  undefined4 uStack_7d8;
  undefined2 uStack_7c8;
  undefined2 uStack_7c6;
  undefined1 *puStack_7a8;
  undefined ***pppuStack_7a0;
  long lStack_798;
  long lStack_790;
  undefined8 uStack_788;
  long *plStack_780;
  long *plStack_778;
  long lStack_770;
  long lStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_730;
  long lStack_728;
  long *plStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  long lStack_670;
  undefined8 uStack_668;
  code *pcStack_660;
  undefined8 uStack_658;
  undefined1 auStack_650 [128];
  long lStack_5d0;
  undefined ***pppuStack_5c0;
  undefined ***pppuStack_5b8;
  undefined ***pppuStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined1 ***pppuStack_570;
  code *pcStack_568;
  undefined4 uStack_558;
  undefined1 uStack_551;
  long lStack_550;
  long lStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long lStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  undefined4 uStack_4dc;
  code *pcStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined ***pppuStack_4c0;
  undefined8 *puStack_4b8;
  undefined1 **ppuStack_4b0;
  code *pcStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_499;
  long lStack_498;
  long lStack_490;
  undefined8 uStack_488;
  long lStack_480;
  long lStack_478;
  undefined **ppuStack_468;
  undefined4 uStack_460;
  undefined4 uStack_450;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  undefined1 uStack_3f1;
  undefined **ppuStack_3f0;
  undefined4 uStack_3e8;
  undefined2 uStack_3d8;
  undefined2 uStack_3d6;
  undefined1 *puStack_3b8;
  undefined ***pppuStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 uStack_340;
  undefined1 uStack_33f;
  undefined4 uStack_33c;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined ***pppuStack_320;
  undefined1 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined4 uStack_2b0;
  undefined1 uStack_2a9;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined4 uStack_104;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = param_2;
  puStack_2b8 = param_1;
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  puStack_2c0 = puVar3;
  _objc_retain(param_2);
  puVar3 = &uStack_150;
  pppuVar19 = param_2;
  func_0x00010bf52a60();
  if (pppuVar19 != (undefined ***)0x0) {
    lStack_2c8 = *plStack_140;
    unaff_x27 = &ppuStack_278;
    unaff_x28 = &ppuStack_200;
    unaff_x21 = &PTR_DAT_110862958;
    unaff_x20 = &PTR_DAT_110881e20;
    do {
      pppuVar21 = (undefined ***)0x0;
      do {
        if (*plStack_140 != lStack_2c8) {
          _objc_enumerationMutation(param_2);
        }
        uVar23 = *(ulong *)(lStack_148 + (long)pppuVar21 * 8);
        pppuVar4 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar22 = pppuVar4;
        func_0x00010c067ec0();
        _objc_release(pppuVar4);
        _objc_opt_class(PTR_PTR_1126d71f0);
        if (puStack_2b8 == (undefined8 *)0x0) {
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          func_0x00010bfa6be0(&uStack_190);
        }
        unaff_x25 = &uStack_201;
        FUN_107c04280();
        func_0x00010c282760();
        uStack_270 = 0xf;
        uStack_260 = 0x100;
        uStack_248 = uVar23 & 0xffffffff;
        ppuStack_278 = &PTR_DAT_110862958;
        uStack_238 = 0;
        uStack_240 = 0;
        lStack_228 = 0;
        lStack_230 = 0;
        plStack_218 = (long *)0x0;
        uStack_220 = 0;
        plStack_210 = (long *)0x0;
        uStack_1e6 = *(undefined2 *)(unaff_x25 + 0x1a);
        uStack_1f8 = 10;
        uStack_1e8 = 0x100;
        ppuStack_200 = &PTR_DAT_110881e20;
        lStack_1b0 = 0;
        lStack_1b8 = 0;
        plStack_1a0 = (long *)0x0;
        uStack_1a8 = 0;
        plStack_198 = (long *)0x0;
        puVar5 = &uStack_2a9;
        puStack_1c8 = unaff_x25;
        pppuStack_1c0 = unaff_x27;
        FUN_107c043c4();
        uStack_110 = *(undefined8 *)(puVar5 + 0x10);
        uStack_108 = puVar5[0x19];
        uStack_107 = puVar5[0x18];
        uStack_f8 = *(undefined8 *)(puVar5 + 0x28);
        uStack_104 = 1;
        pcStack_100 = FUN_107c036e4;
        lStack_2a0 = 0;
        uStack_298 = 0;
        lStack_2a8 = 0;
        func_0x000100c435d0(&lStack_2a8,&uStack_110,auStack_f0,1);
        func_0x000100c436b8(&lStack_290,&lStack_2a8);
        uStack_2b0 = SUB84(pppuVar22,0);
        unaff_x24 = &uStack_190;
        pppuVar4 = &ppuStack_200;
        func_0x0001000e77a0(unaff_x24,pppuVar4,&lStack_290,&uStack_2b0);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x24;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        if (lStack_290 != 0) {
          lStack_288 = lStack_290;
          __ZdlPv();
        }
        if (lStack_2a8 != 0) {
          lStack_2a0 = lStack_2a8;
          __ZdlPv();
        }
        plVar18 = plStack_198;
        ppuStack_200 = &PTR_DAT_110881e20;
        plStack_198 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        plVar18 = plStack_1a0;
        plStack_1a0 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        if (lStack_1b8 != 0) {
          lStack_1b0 = lStack_1b8;
          __ZdlPv();
        }
        plVar18 = plStack_210;
        ppuStack_278 = &PTR_DAT_110862958;
        plStack_210 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        plVar18 = plStack_218;
        plStack_218 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        if (lStack_230 != 0) {
          lStack_228 = lStack_230;
          __ZdlPv();
        }
        func_0x0001000e76e0(&uStack_168);
        _objc_release(uStack_178);
        _objc_release(uStack_180);
        func_0x00010befa160(puStack_2c0);
        _objc_release(unaff_x23);
        pppuVar21 = (undefined ***)((long)pppuVar21 + 1);
      } while (pppuVar19 != pppuVar21);
      puVar3 = &uStack_150;
      pppuVar19 = param_2;
      func_0x00010bf52a60();
    } while (pppuVar19 != (undefined ***)0x0);
  }
  _objc_release(param_2);
  puVar10 = puStack_2c0;
  puVar6 = puStack_2c0;
  func_0x00010bf51e00(puStack_2c0);
  _objc_release(puVar10);
  _objc_release(param_2);
  puVar7 = puStack_2b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puStack_2c0);
    _objc_release(param_2);
    _objc_release(puStack_2b8);
    puVar8 = puVar7;
    __Unwind_Resume();
    puStack_2e8 = puVar10;
    pcStack_2d8 = FUN_107c02968;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_320 = param_2;
    puStack_318 = unaff_x25;
    puStack_310 = unaff_x24;
    puStack_308 = unaff_x23;
    puStack_300 = puVar7;
    ppuStack_2f8 = unaff_x21;
    ppuStack_2f0 = unaff_x20;
    puStack_2e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar4);
    _objc_retain(puVar3);
    _objc_opt_class(PTR_PTR_1126d71f0);
    if (puVar8 == (undefined8 *)0x0) {
      uStack_350 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_380,puVar8);
    }
    puVar5 = &uStack_3f1;
    FUN_107c04280();
    pppuVar19 = pppuVar4;
    func_0x00010c282760();
    uStack_460 = 0xf;
    uStack_450 = 0x100;
    uStack_438 = (ulong)pppuVar19 & 0xffffffff;
    ppuStack_468 = &PTR_DAT_110862958;
    uStack_428 = 0;
    uStack_430 = 0;
    lStack_418 = 0;
    lStack_420 = 0;
    plStack_408 = (long *)0x0;
    uStack_410 = 0;
    plStack_400 = (long *)0x0;
    uStack_3d6 = *(undefined2 *)(puVar5 + 0x1a);
    uStack_3e8 = 10;
    uStack_3d8 = 0x100;
    ppuStack_3f0 = &PTR_DAT_110881e20;
    pppuStack_3b0 = &ppuStack_468;
    lStack_3a0 = 0;
    lStack_3a8 = 0;
    plStack_390 = (long *)0x0;
    uStack_398 = 0;
    plStack_388 = (long *)0x0;
    puVar9 = &uStack_499;
    puStack_3b8 = puVar5;
    FUN_107c043c4();
    uStack_348 = *(undefined8 *)(puVar9 + 0x10);
    uStack_340 = puVar9[0x19];
    uStack_33f = puVar9[0x18];
    uStack_330 = *(undefined8 *)(puVar9 + 0x28);
    uStack_33c = 1;
    pcStack_338 = FUN_107c036e4;
    lStack_490 = 0;
    uStack_488 = 0;
    lStack_498 = 0;
    func_0x000100c435d0(&lStack_498,&uStack_348,&lStack_328,1);
    func_0x000100c436b8(&lStack_480,&lStack_498);
    puVar6 = puVar3;
    func_0x00010c067ec0();
    uStack_4a0 = SUB84(puVar6,0);
    puVar6 = &uStack_380;
    func_0x0001000e77a0(puVar6,&ppuStack_3f0,&lStack_480,&uStack_4a0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (lStack_480 != 0) {
      lStack_478 = lStack_480;
      __ZdlPv();
    }
    if (lStack_498 != 0) {
      lStack_490 = lStack_498;
      __ZdlPv();
    }
    plVar18 = plStack_388;
    ppuStack_3f0 = &PTR_DAT_110881e20;
    plStack_388 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    plVar18 = plStack_390;
    plStack_390 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (lStack_3a8 != 0) {
      lStack_3a0 = lStack_3a8;
      __ZdlPv();
    }
    plVar18 = plStack_400;
    ppuStack_468 = &PTR_DAT_110862958;
    plStack_400 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    plVar18 = plStack_408;
    plStack_408 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (lStack_420 != 0) {
      lStack_418 = lStack_420;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_358);
    _objc_release(uStack_368);
    _objc_release(uStack_370);
    puVar6 = puVar10;
    func_0x00010bf51e00(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(pppuVar4);
    puVar7 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      _objc_release(puVar3);
      _objc_release(pppuVar4);
      _objc_release(puVar8);
      puVar11 = puVar7;
      __Unwind_Resume();
      pcStack_4a8 = FUN_107c02cf0;
      lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_4c0 = pppuVar4;
      puStack_4b8 = puVar8;
      ppuStack_4b0 = &puStack_2e0;
      _objc_retain();
      _objc_opt_class(PTR_PTR_1126d71f0);
      if (puVar11 == (undefined8 *)0x0) {
        uStack_4f0 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_520,puVar11);
      }
      puVar5 = &uStack_551;
      FUN_107c043c4();
      uStack_4e8 = *(undefined8 *)(puVar5 + 0x10);
      uStack_4e0 = puVar5[0x19];
      uStack_4df = puVar5[0x18];
      uStack_4d0 = *(undefined8 *)(puVar5 + 0x28);
      uStack_4dc = 1;
      pcStack_4d8 = FUN_107c036e4;
      lStack_548 = 0;
      uStack_540 = 0;
      lStack_550 = 0;
      func_0x000100c435d0(&lStack_550,&uStack_4e8,&lStack_4c8,1);
      func_0x000100c436b8(&lStack_538,&lStack_550);
      uStack_558 = 0;
      puVar6 = &uStack_520;
      plVar18 = &lStack_538;
      func_0x00010054c81c(puVar6,plVar18,&uStack_558);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_538 != 0) {
        lStack_530 = lStack_538;
        __ZdlPv();
      }
      if (lStack_550 != 0) {
        lStack_548 = lStack_550;
        __ZdlPv();
      }
      func_0x0001000e76e0(&uStack_4f8);
      _objc_release(uStack_508);
      _objc_release(uStack_510);
      puVar8 = puVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
        ___stack_chk_fail();
        func_0x000104d96620(&uStack_520);
        _objc_release(puVar11);
        puVar6 = puVar8;
        __Unwind_Resume();
        puStack_5a8 = &UNK_110881e10;
        puStack_5a0 = &UNK_110862948;
        pcStack_568 = FUN_107c02e70;
        lStack_5d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_5c0 = unaff_x28;
        pppuStack_5b8 = unaff_x27;
        pppuStack_5b0 = param_2;
        puStack_598 = puVar7;
        puStack_590 = puVar10;
        puStack_588 = puVar3;
        puStack_580 = puVar8;
        puStack_578 = puVar11;
        pppuStack_570 = &ppuStack_4b0;
        _objc_retain();
        _objc_retain(plVar18);
        plVar12 = plVar18;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        uStack_708 = 0;
        uStack_710 = 0;
        uStack_6f8 = 0;
        uStack_700 = 0;
        lStack_728 = 0;
        uStack_730 = 0;
        uStack_718 = 0;
        plStack_720 = (long *)0x0;
        _objc_retain();
        plVar13 = plVar12;
        func_0x00010bf52a60();
        if (plVar13 != (long *)0x0) {
          lVar20 = *plStack_720;
          do {
            plVar24 = (long *)0x0;
            do {
              if (*plStack_720 != lVar20) {
                _objc_enumerationMutation(plVar12);
              }
              uVar23 = *(ulong *)(lStack_728 + (long)plVar24 * 8);
              plVar14 = plVar18;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              plVar15 = plVar14;
              func_0x00010c2827c0();
              _objc_release(plVar14);
              _objc_opt_class(PTR_PTR_1126d71f0);
              if (puVar6 == (undefined8 *)0x0) {
                uStack_740 = 0;
                uStack_758 = 0;
                uStack_760 = 0;
                uStack_748 = 0;
                uStack_750 = 0;
                lStack_768 = 0;
                lStack_770 = 0;
              }
              else {
                func_0x00010bfa6be0(&lStack_770,puVar6);
              }
              puVar5 = &uStack_7e1;
              FUN_107c04280();
              func_0x00010c282760();
              uStack_858 = CONCAT44(uStack_858._4_4_,0xf);
              uStack_848 = CONCAT44(uStack_848._4_4_,0x100);
              uStack_830 = uVar23 & 0xffffffff;
              ppuStack_860 = &PTR_DAT_110862958;
              uStack_820 = 0;
              uStack_828 = 0;
              lStack_810 = 0;
              lStack_818 = 0;
              plStack_800 = (long *)0x0;
              uStack_808 = 0;
              plStack_7f8 = (long *)0x0;
              uStack_7c6 = *(undefined2 *)(puVar5 + 0x1a);
              uStack_7d8 = 10;
              uStack_7c8 = 0x100;
              ppuStack_7e0 = &PTR_DAT_110881e20;
              lStack_790 = 0;
              lStack_798 = 0;
              plStack_780 = (long *)0x0;
              uStack_788 = 0;
              plStack_778 = (long *)0x0;
              puVar9 = &uStack_891;
              puStack_7a8 = puVar5;
              pppuStack_7a0 = &ppuStack_860;
              FUN_107c043c4();
              lStack_670 = *(long *)(puVar9 + 0x10);
              uStack_658 = *(undefined8 *)(puVar9 + 0x28);
              uStack_668._0_2_ = CONCAT11(puVar9[0x18],puVar9[0x19]);
              uStack_668 = CONCAT44(1,(undefined4)uStack_668);
              pcStack_660 = FUN_107c036e4;
              lStack_888 = 0;
              uStack_880 = 0;
              lStack_890 = 0;
              func_0x000100c435d0(&lStack_890,&lStack_670,auStack_650,1);
              func_0x000100c436b8(&uStack_878,&lStack_890);
              uStack_898 = 0;
              plVar14 = &lStack_770;
              func_0x0001000e77a0(plVar14,&ppuStack_7e0,&uStack_878,&uStack_898);
              _objc_retainAutoreleasedReturnValue();
              if (CONCAT44(uStack_874,uStack_878) != 0) {
                __ZdlPv();
              }
              if (lStack_890 != 0) {
                lStack_888 = lStack_890;
                __ZdlPv();
              }
              plVar16 = plStack_778;
              ppuStack_7e0 = &PTR_DAT_110881e20;
              plStack_778 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              plVar16 = plStack_780;
              plStack_780 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              if (lStack_798 != 0) {
                lStack_790 = lStack_798;
                __ZdlPv();
              }
              plVar16 = plStack_7f8;
              ppuStack_860 = &PTR_DAT_110862958;
              plStack_7f8 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              plVar16 = plStack_800;
              plStack_800 = (long *)0x0;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 8))();
              }
              if (lStack_818 != 0) {
                lStack_810 = lStack_818;
                __ZdlPv();
              }
              func_0x0001000e76e0(&uStack_748);
              _objc_release(uStack_758);
              _objc_release(uStack_760);
              for (; plVar16 = plVar14, func_0x00010bf529e0(), plVar15 < plVar16;
                  plVar15 = (long *)((long)plVar15 + 1)) {
                plVar16 = plVar14;
                func_0x00010c0dfd40(plVar14);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = PTR_PTR_1126d7218;
                FUN_107c0668c(PTR_PTR_1126d7218,plVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25ed40(puVar6);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar17);
                _objc_release(plVar16);
              }
              _objc_release(plVar14);
              plVar24 = (long *)((long)plVar24 + 1);
            } while (plVar24 != plVar13);
            plVar13 = plVar12;
            func_0x00010bf52a60();
          } while (plVar13 != (long *)0x0);
        }
        _objc_release(plVar12);
        _objc_opt_class(PTR_PTR_1126d71f0);
        if (puVar6 == (undefined8 *)0x0) {
          uStack_830 = 0;
          uStack_848 = 0;
          uStack_850 = 0;
          uStack_838 = 0;
          uStack_840 = 0;
          uStack_858 = 0;
          ppuStack_860 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_860,puVar6);
        }
        plVar13 = &lStack_890;
        FUN_107c04280(plVar13);
        FUN_107c01c8c(&lStack_770,plVar12);
        FUN_107c035b0(&ppuStack_7e0,plVar13,&lStack_770);
        lStack_670 = 0;
        uStack_668 = 0;
        pcStack_660 = (code *)0x0;
        uStack_878 = 0;
        pppuVar4 = &ppuStack_860;
        pppuVar19 = &ppuStack_7e0;
        func_0x0001000e77a0(pppuVar4,pppuVar19,&lStack_670,&uStack_878);
        _objc_retainAutoreleasedReturnValue();
        pppuVar21 = pppuVar4;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar4);
        if (lStack_670 != 0) {
          uStack_668 = lStack_670;
          __ZdlPv();
        }
        plVar13 = plStack_778;
        ppuStack_7e0 = &PTR_DAT_110881e20;
        plStack_778 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plStack_780;
        plStack_780 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        if (lStack_798 != 0) {
          lStack_790 = lStack_798;
          __ZdlPv();
        }
        if (lStack_770 != 0) {
          lStack_768 = lStack_770;
          __ZdlPv();
        }
        func_0x0001000e76e0(&uStack_838);
        _objc_release(uStack_848);
        _objc_release(uStack_850);
        lStack_8d8 = 0;
        lStack_8e0 = 0;
        uStack_8c8 = 0;
        plStack_8d0 = (long *)0x0;
        uStack_8b8 = 0;
        uStack_8c0 = 0;
        uStack_8a8 = 0;
        uStack_8b0 = 0;
        _objc_retain(pppuVar21);
        plVar13 = &lStack_8e0;
        pppuVar4 = pppuVar21;
        func_0x00010bf52a60();
        if (pppuVar4 != (undefined ***)0x0) {
          lVar20 = *plStack_8d0;
          do {
            pppuVar22 = (undefined ***)0x0;
            do {
              if (*plStack_8d0 != lVar20) {
                _objc_enumerationMutation(pppuVar21);
              }
              pppuVar19 = *(undefined ****)(lStack_8d8 + (long)pppuVar22 * 8);
              puVar17 = PTR_PTR_1126d7218;
              FUN_107c0668c(PTR_PTR_1126d7218);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25ed40(puVar6);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar17);
              pppuVar22 = (undefined ***)((long)pppuVar22 + 1);
            } while (pppuVar4 != pppuVar22);
            plVar13 = &lStack_8e0;
            pppuVar4 = pppuVar21;
            func_0x00010bf52a60();
          } while (pppuVar4 != (undefined ***)0x0);
        }
        _objc_release(pppuVar21);
        _objc_release(pppuVar21);
        _objc_release(plVar12);
        _objc_release(plVar18);
        puVar3 = puVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5d0) {
          ___stack_chk_fail();
          _objc_release(pppuVar21);
          _objc_release(pppuVar21);
          _objc_release(plVar12);
          _objc_release(plVar18);
          _objc_release(puVar6);
          __Unwind_Resume();
          uVar2 = *(undefined2 *)((long)pppuVar19 + 0x19);
          uVar1 = *(undefined1 *)((long)pppuVar19 + 0x1b);
          *(undefined4 *)(puVar3 + 1) = 0xd;
          *(undefined1 *)(puVar3 + 3) = 0;
          *(undefined2 *)((long)puVar3 + 0x19) = uVar2;
          *(undefined1 *)((long)puVar3 + 0x1b) = uVar1;
          *puVar3 = &PTR_DAT_110881e20;
          puVar3[7] = pppuVar19;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          func_0x0001006581c0(puVar3 + 9,*plVar13,plVar13[1],plVar13[1] - *plVar13 >> 3);
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          return puVar3;
        }
        return puVar3;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 107c02968; end: 107c02cef;  */

undefined8 * FUN_107c02968(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined *puVar16;
  long *plVar17;
  undefined ***pppuVar18;
  long lVar19;
  undefined ***pppuVar20;
  ulong uVar21;
  long *plVar22;
  long lStack_610;
  long lStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5c8;
  undefined1 uStack_5c1;
  long lStack_5c0;
  long lStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined **ppuStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  ulong uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long lStack_540;
  undefined8 uStack_538;
  long *plStack_530;
  long *plStack_528;
  undefined1 uStack_511;
  undefined **ppuStack_510;
  undefined4 uStack_508;
  undefined2 uStack_4f8;
  undefined2 uStack_4f6;
  undefined1 *puStack_4d8;
  undefined ***pppuStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [128];
  long lStack_300;
  undefined4 uStack_288;
  undefined1 uStack_281;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined4 uStack_20c;
  code *pcStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1c9;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126d71f0);
  if (param_1 == (undefined8 *)0x0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar3 = &uStack_121;
  FUN_107c04280();
  uVar21 = param_2;
  func_0x00010c282760();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  uStack_168 = uVar21 & 0xffffffff;
  ppuStack_198 = &PTR_DAT_110862958;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_110881e20;
  pppuStack_e0 = &ppuStack_198;
  lStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puVar4 = &uStack_1c9;
  puStack_e8 = puVar3;
  FUN_107c043c4();
  uStack_78 = *(undefined8 *)(puVar4 + 0x10);
  uStack_70 = puVar4[0x19];
  uStack_6f = puVar4[0x18];
  uStack_60 = *(undefined8 *)(puVar4 + 0x28);
  uStack_6c = 1;
  pcStack_68 = FUN_107c036e4;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1c8 = 0;
  func_0x000100c435d0(&lStack_1c8,&uStack_78,&lStack_58,1);
  func_0x000100c436b8(&lStack_1b0,&lStack_1c8);
  uVar5 = param_3;
  func_0x00010c067ec0();
  uStack_1d0 = (undefined4)uVar5;
  puVar6 = &uStack_b0;
  func_0x0001000e77a0(puVar6,&ppuStack_120,&lStack_1b0,&uStack_1d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  plVar17 = plStack_b8;
  ppuStack_120 = &PTR_DAT_110881e20;
  plStack_b8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  plVar17 = plStack_130;
  ppuStack_198 = &PTR_DAT_110862958;
  plStack_130 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar6 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release(puVar7);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar8 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    pcStack_1d8 = FUN_107c02cf0;
    lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1f0 = param_2;
    puStack_1e8 = param_1;
    puStack_1e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126d71f0);
    if (puVar8 == (undefined8 *)0x0) {
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_250,puVar8);
    }
    puVar3 = &uStack_281;
    FUN_107c043c4();
    uStack_218 = *(undefined8 *)(puVar3 + 0x10);
    uStack_210 = puVar3[0x19];
    uStack_20f = puVar3[0x18];
    uStack_200 = *(undefined8 *)(puVar3 + 0x28);
    uStack_20c = 1;
    pcStack_208 = FUN_107c036e4;
    lStack_278 = 0;
    uStack_270 = 0;
    lStack_280 = 0;
    func_0x000100c435d0(&lStack_280,&uStack_218,&lStack_1f8,1);
    func_0x000100c436b8(&lStack_268,&lStack_280);
    uStack_288 = 0;
    puVar6 = &uStack_250;
    plVar17 = &lStack_268;
    func_0x00010054c81c(puVar6,plVar17,&uStack_288);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_268 != 0) {
      lStack_260 = lStack_268;
      __ZdlPv();
    }
    if (lStack_280 != 0) {
      lStack_278 = lStack_280;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_228);
    _objc_release(uStack_238);
    _objc_release(uStack_240);
    puVar7 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
      ___stack_chk_fail();
      func_0x000104d96620(&uStack_250);
      _objc_release(puVar8);
      __Unwind_Resume();
      lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(plVar17);
      plVar9 = plVar17;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      lStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      plStack_450 = (long *)0x0;
      _objc_retain();
      plVar10 = plVar9;
      func_0x00010bf52a60();
      if (plVar10 != (long *)0x0) {
        lVar19 = *plStack_450;
        do {
          plVar22 = (long *)0x0;
          do {
            if (*plStack_450 != lVar19) {
              _objc_enumerationMutation(plVar9);
            }
            uVar21 = *(ulong *)(lStack_458 + (long)plVar22 * 8);
            plVar11 = plVar17;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            plVar12 = plVar11;
            func_0x00010c2827c0();
            _objc_release(plVar11);
            _objc_opt_class(PTR_PTR_1126d71f0);
            if (puVar7 == (undefined8 *)0x0) {
              uStack_470 = 0;
              uStack_488 = 0;
              uStack_490 = 0;
              uStack_478 = 0;
              uStack_480 = 0;
              lStack_498 = 0;
              lStack_4a0 = 0;
            }
            else {
              func_0x00010bfa6be0(&lStack_4a0,puVar7);
            }
            puVar3 = &uStack_511;
            FUN_107c04280();
            func_0x00010c282760();
            uStack_588 = CONCAT44(uStack_588._4_4_,0xf);
            uStack_578 = CONCAT44(uStack_578._4_4_,0x100);
            uStack_560 = uVar21 & 0xffffffff;
            ppuStack_590 = &PTR_DAT_110862958;
            uStack_550 = 0;
            uStack_558 = 0;
            lStack_540 = 0;
            lStack_548 = 0;
            plStack_530 = (long *)0x0;
            uStack_538 = 0;
            plStack_528 = (long *)0x0;
            uStack_4f6 = *(undefined2 *)(puVar3 + 0x1a);
            uStack_508 = 10;
            uStack_4f8 = 0x100;
            ppuStack_510 = &PTR_DAT_110881e20;
            lStack_4c0 = 0;
            lStack_4c8 = 0;
            plStack_4b0 = (long *)0x0;
            uStack_4b8 = 0;
            plStack_4a8 = (long *)0x0;
            puVar4 = &uStack_5c1;
            puStack_4d8 = puVar3;
            pppuStack_4d0 = &ppuStack_590;
            FUN_107c043c4();
            lStack_3a0 = *(long *)(puVar4 + 0x10);
            uStack_388 = *(undefined8 *)(puVar4 + 0x28);
            uStack_398._0_2_ = CONCAT11(puVar4[0x18],puVar4[0x19]);
            uStack_398 = CONCAT44(1,(undefined4)uStack_398);
            pcStack_390 = FUN_107c036e4;
            lStack_5b8 = 0;
            uStack_5b0 = 0;
            lStack_5c0 = 0;
            func_0x000100c435d0(&lStack_5c0,&lStack_3a0,auStack_380,1);
            func_0x000100c436b8(&uStack_5a8,&lStack_5c0);
            uStack_5c8 = 0;
            plVar11 = &lStack_4a0;
            func_0x0001000e77a0(plVar11,&ppuStack_510,&uStack_5a8,&uStack_5c8);
            _objc_retainAutoreleasedReturnValue();
            if (CONCAT44(uStack_5a4,uStack_5a8) != 0) {
              __ZdlPv();
            }
            if (lStack_5c0 != 0) {
              lStack_5b8 = lStack_5c0;
              __ZdlPv();
            }
            plVar13 = plStack_4a8;
            ppuStack_510 = &PTR_DAT_110881e20;
            plStack_4a8 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 8))();
            }
            plVar13 = plStack_4b0;
            plStack_4b0 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 8))();
            }
            if (lStack_4c8 != 0) {
              lStack_4c0 = lStack_4c8;
              __ZdlPv();
            }
            plVar13 = plStack_528;
            ppuStack_590 = &PTR_DAT_110862958;
            plStack_528 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 8))();
            }
            plVar13 = plStack_530;
            plStack_530 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 8))();
            }
            if (lStack_548 != 0) {
              lStack_540 = lStack_548;
              __ZdlPv();
            }
            func_0x0001000e76e0(&uStack_478);
            _objc_release(uStack_488);
            _objc_release(uStack_490);
            for (; plVar13 = plVar11, func_0x00010bf529e0(), plVar12 < plVar13;
                plVar12 = (long *)((long)plVar12 + 1)) {
              plVar13 = plVar11;
              func_0x00010c0dfd40(plVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar16 = PTR_PTR_1126d7218;
              FUN_107c0668c(PTR_PTR_1126d7218,plVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25ed40(puVar7);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar16);
              _objc_release(plVar13);
            }
            _objc_release(plVar11);
            plVar22 = (long *)((long)plVar22 + 1);
          } while (plVar22 != plVar10);
          plVar10 = plVar9;
          func_0x00010bf52a60();
        } while (plVar10 != (long *)0x0);
      }
      _objc_release(plVar9);
      _objc_opt_class(PTR_PTR_1126d71f0);
      if (puVar7 == (undefined8 *)0x0) {
        uStack_560 = 0;
        uStack_578 = 0;
        uStack_580 = 0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_588 = 0;
        ppuStack_590 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_590,puVar7);
      }
      plVar10 = &lStack_5c0;
      FUN_107c04280(plVar10);
      FUN_107c01c8c(&lStack_4a0,plVar9);
      FUN_107c035b0(&ppuStack_510,plVar10,&lStack_4a0);
      lStack_3a0 = 0;
      uStack_398 = 0;
      pcStack_390 = (code *)0x0;
      uStack_5a8 = 0;
      pppuVar14 = &ppuStack_590;
      pppuVar18 = &ppuStack_510;
      func_0x0001000e77a0(pppuVar14,pppuVar18,&lStack_3a0,&uStack_5a8);
      _objc_retainAutoreleasedReturnValue();
      pppuVar15 = pppuVar14;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar14);
      if (lStack_3a0 != 0) {
        uStack_398 = lStack_3a0;
        __ZdlPv();
      }
      plVar10 = plStack_4a8;
      ppuStack_510 = &PTR_DAT_110881e20;
      plStack_4a8 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      plVar10 = plStack_4b0;
      plStack_4b0 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      if (lStack_4c8 != 0) {
        lStack_4c0 = lStack_4c8;
        __ZdlPv();
      }
      if (lStack_4a0 != 0) {
        lStack_498 = lStack_4a0;
        __ZdlPv();
      }
      func_0x0001000e76e0(&uStack_568);
      _objc_release(uStack_578);
      _objc_release(uStack_580);
      lStack_608 = 0;
      lStack_610 = 0;
      uStack_5f8 = 0;
      plStack_600 = (long *)0x0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      _objc_retain(pppuVar15);
      plVar10 = &lStack_610;
      pppuVar14 = pppuVar15;
      func_0x00010bf52a60();
      if (pppuVar14 != (undefined ***)0x0) {
        lVar19 = *plStack_600;
        do {
          pppuVar20 = (undefined ***)0x0;
          do {
            if (*plStack_600 != lVar19) {
              _objc_enumerationMutation(pppuVar15);
            }
            pppuVar18 = *(undefined ****)(lStack_608 + (long)pppuVar20 * 8);
            puVar16 = PTR_PTR_1126d7218;
            FUN_107c0668c(PTR_PTR_1126d7218);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(puVar7);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar16);
            pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
          } while (pppuVar14 != pppuVar20);
          plVar10 = &lStack_610;
          pppuVar14 = pppuVar15;
          func_0x00010bf52a60();
        } while (pppuVar14 != (undefined ***)0x0);
      }
      _objc_release(pppuVar15);
      _objc_release(pppuVar15);
      _objc_release(plVar9);
      _objc_release(plVar17);
      puVar6 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_300) {
        ___stack_chk_fail();
        _objc_release(pppuVar15);
        _objc_release(pppuVar15);
        _objc_release(plVar9);
        _objc_release(plVar17);
        _objc_release(puVar7);
        __Unwind_Resume();
        uVar2 = *(undefined2 *)((long)pppuVar18 + 0x19);
        uVar1 = *(undefined1 *)((long)pppuVar18 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = 0xd;
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar2;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar1;
        *puVar6 = &PTR_DAT_110881e20;
        puVar6[7] = pppuVar18;
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        func_0x0001006581c0(puVar6 + 9,*plVar10,plVar10[1],plVar10[1] - *plVar10 >> 3);
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        return puVar6;
      }
      return puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 107c02cf0; end: 107c02e6f;  */

undefined8 * FUN_107c02cf0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  long *plVar15;
  undefined ***pppuVar16;
  long lVar17;
  undefined ***pppuVar18;
  ulong uVar19;
  long *plVar20;
  long lStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_3f8;
  undefined1 uStack_3f1;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined1 uStack_341;
  undefined **ppuStack_340;
  undefined4 uStack_338;
  undefined2 uStack_328;
  undefined2 uStack_326;
  undefined1 *puStack_308;
  undefined ***pppuStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [128];
  long lStack_130;
  undefined4 uStack_b8;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d71f0);
  if (param_1 == (undefined8 *)0x0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar3 = &uStack_b1;
  FUN_107c043c4();
  uStack_48 = *(undefined8 *)(puVar3 + 0x10);
  uStack_40 = puVar3[0x19];
  uStack_3f = puVar3[0x18];
  uStack_30 = *(undefined8 *)(puVar3 + 0x28);
  uStack_3c = 1;
  pcStack_38 = FUN_107c036e4;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  func_0x000100c435d0(&lStack_b0,&uStack_48,&lStack_28,1);
  func_0x000100c436b8(&lStack_98,&lStack_b0);
  uStack_b8 = 0;
  puVar4 = &uStack_80;
  plVar15 = &lStack_98;
  func_0x00010054c81c(puVar4,plVar15,&uStack_b8);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  puVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&uStack_80);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(plVar15);
  plVar6 = plVar15;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  _objc_retain();
  plVar7 = plVar6;
  func_0x00010bf52a60();
  if (plVar7 != (long *)0x0) {
    lVar17 = *plStack_280;
    do {
      plVar20 = (long *)0x0;
      do {
        if (*plStack_280 != lVar17) {
          _objc_enumerationMutation(plVar6);
        }
        uVar19 = *(ulong *)(lStack_288 + (long)plVar20 * 8);
        plVar8 = plVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        plVar9 = plVar8;
        func_0x00010c2827c0();
        _objc_release(plVar8);
        _objc_opt_class(PTR_PTR_1126d71f0);
        if (puVar5 == (undefined8 *)0x0) {
          uStack_2a0 = 0;
          uStack_2b8 = 0;
          uStack_2c0 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          lStack_2c8 = 0;
          lStack_2d0 = 0;
        }
        else {
          func_0x00010bfa6be0(&lStack_2d0,puVar5);
        }
        puVar3 = &uStack_341;
        FUN_107c04280();
        func_0x00010c282760();
        uStack_3b8 = CONCAT44(uStack_3b8._4_4_,0xf);
        uStack_3a8 = CONCAT44(uStack_3a8._4_4_,0x100);
        uStack_390 = uVar19 & 0xffffffff;
        ppuStack_3c0 = &PTR_DAT_110862958;
        uStack_380 = 0;
        uStack_388 = 0;
        lStack_370 = 0;
        lStack_378 = 0;
        plStack_360 = (long *)0x0;
        uStack_368 = 0;
        plStack_358 = (long *)0x0;
        uStack_326 = *(undefined2 *)(puVar3 + 0x1a);
        uStack_338 = 10;
        uStack_328 = 0x100;
        ppuStack_340 = &PTR_DAT_110881e20;
        lStack_2f0 = 0;
        lStack_2f8 = 0;
        plStack_2e0 = (long *)0x0;
        uStack_2e8 = 0;
        plStack_2d8 = (long *)0x0;
        puVar10 = &uStack_3f1;
        puStack_308 = puVar3;
        pppuStack_300 = &ppuStack_3c0;
        FUN_107c043c4();
        lStack_1d0 = *(long *)(puVar10 + 0x10);
        uStack_1b8 = *(undefined8 *)(puVar10 + 0x28);
        uStack_1c8._0_2_ = CONCAT11(puVar10[0x18],puVar10[0x19]);
        uStack_1c8 = CONCAT44(1,(undefined4)uStack_1c8);
        pcStack_1c0 = FUN_107c036e4;
        lStack_3e8 = 0;
        uStack_3e0 = 0;
        lStack_3f0 = 0;
        func_0x000100c435d0(&lStack_3f0,&lStack_1d0,auStack_1b0,1);
        func_0x000100c436b8(&uStack_3d8,&lStack_3f0);
        uStack_3f8 = 0;
        plVar8 = &lStack_2d0;
        func_0x0001000e77a0(plVar8,&ppuStack_340,&uStack_3d8,&uStack_3f8);
        _objc_retainAutoreleasedReturnValue();
        if (CONCAT44(uStack_3d4,uStack_3d8) != 0) {
          __ZdlPv();
        }
        if (lStack_3f0 != 0) {
          lStack_3e8 = lStack_3f0;
          __ZdlPv();
        }
        plVar11 = plStack_2d8;
        ppuStack_340 = &PTR_DAT_110881e20;
        plStack_2d8 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        plVar11 = plStack_2e0;
        plStack_2e0 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        if (lStack_2f8 != 0) {
          lStack_2f0 = lStack_2f8;
          __ZdlPv();
        }
        plVar11 = plStack_358;
        ppuStack_3c0 = &PTR_DAT_110862958;
        plStack_358 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        plVar11 = plStack_360;
        plStack_360 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        if (lStack_378 != 0) {
          lStack_370 = lStack_378;
          __ZdlPv();
        }
        func_0x0001000e76e0(&uStack_2a8);
        _objc_release(uStack_2b8);
        _objc_release(uStack_2c0);
        for (; plVar11 = plVar8, func_0x00010bf529e0(), plVar9 < plVar11;
            plVar9 = (long *)((long)plVar9 + 1)) {
          plVar11 = plVar8;
          func_0x00010c0dfd40(plVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR_PTR_1126d7218;
          FUN_107c0668c(PTR_PTR_1126d7218,plVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar14);
          _objc_release(plVar11);
        }
        _objc_release(plVar8);
        plVar20 = (long *)((long)plVar20 + 1);
      } while (plVar20 != plVar7);
      plVar7 = plVar6;
      func_0x00010bf52a60();
    } while (plVar7 != (long *)0x0);
  }
  _objc_release(plVar6);
  _objc_opt_class(PTR_PTR_1126d71f0);
  if (puVar5 == (undefined8 *)0x0) {
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    ppuStack_3c0 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_3c0,puVar5);
  }
  plVar7 = &lStack_3f0;
  FUN_107c04280(plVar7);
  FUN_107c01c8c(&lStack_2d0,plVar6);
  FUN_107c035b0(&ppuStack_340,plVar7,&lStack_2d0);
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  pcStack_1c0 = (code *)0x0;
  uStack_3d8 = 0;
  pppuVar12 = &ppuStack_3c0;
  pppuVar16 = &ppuStack_340;
  func_0x0001000e77a0(pppuVar12,pppuVar16,&lStack_1d0,&uStack_3d8);
  _objc_retainAutoreleasedReturnValue();
  pppuVar13 = pppuVar12;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar12);
  if (lStack_1d0 != 0) {
    uStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  plVar7 = plStack_2d8;
  ppuStack_340 = &PTR_DAT_110881e20;
  plStack_2d8 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_2e0;
  plStack_2e0 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (lStack_2f8 != 0) {
    lStack_2f0 = lStack_2f8;
    __ZdlPv();
  }
  if (lStack_2d0 != 0) {
    lStack_2c8 = lStack_2d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_398);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3b0);
  lStack_438 = 0;
  lStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  _objc_retain(pppuVar13);
  plVar7 = &lStack_440;
  pppuVar12 = pppuVar13;
  func_0x00010bf52a60();
  if (pppuVar12 != (undefined ***)0x0) {
    lVar17 = *plStack_430;
    do {
      pppuVar18 = (undefined ***)0x0;
      do {
        if (*plStack_430 != lVar17) {
          _objc_enumerationMutation(pppuVar13);
        }
        pppuVar16 = *(undefined ****)(lStack_438 + (long)pppuVar18 * 8);
        puVar14 = PTR_PTR_1126d7218;
        FUN_107c0668c(PTR_PTR_1126d7218);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
      } while (pppuVar12 != pppuVar18);
      plVar7 = &lStack_440;
      pppuVar12 = pppuVar13;
      func_0x00010bf52a60();
    } while (pppuVar12 != (undefined ***)0x0);
  }
  _objc_release(pppuVar13);
  _objc_release(pppuVar13);
  _objc_release(plVar6);
  _objc_release(plVar15);
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar13);
  _objc_release(pppuVar13);
  _objc_release(plVar6);
  _objc_release(plVar15);
  _objc_release(puVar5);
  __Unwind_Resume();
  uVar2 = *(undefined2 *)((long)pppuVar16 + 0x19);
  uVar1 = *(undefined1 *)((long)pppuVar16 + 0x1b);
  *(undefined4 *)(puVar4 + 1) = 0xd;
  *(undefined1 *)(puVar4 + 3) = 0;
  *(undefined2 *)((long)puVar4 + 0x19) = uVar2;
  *(undefined1 *)((long)puVar4 + 0x1b) = uVar1;
  *puVar4 = &PTR_DAT_110881e20;
  puVar4[7] = pppuVar16;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  func_0x0001006581c0(puVar4 + 9,*plVar7,plVar7[1],plVar7[1] - *plVar7 >> 3);
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  return puVar4;
}



/* Entry: 107c02e70; end: 107c035af;  */

undefined8 * FUN_107c02e70(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  long lVar15;
  undefined ***pppuVar16;
  ulong uVar17;
  long *plVar18;
  long lStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_338;
  undefined1 uStack_331;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined **ppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined1 uStack_281;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined2 uStack_268;
  undefined2 uStack_266;
  undefined1 *puStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  plVar3 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  _objc_retain();
  plVar4 = plVar3;
  func_0x00010bf52a60();
  if (plVar4 != (long *)0x0) {
    lVar15 = *plStack_1c0;
    do {
      plVar18 = (long *)0x0;
      do {
        if (*plStack_1c0 != lVar15) {
          _objc_enumerationMutation(plVar3);
        }
        uVar17 = *(ulong *)(lStack_1c8 + (long)plVar18 * 8);
        plVar5 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        plVar6 = plVar5;
        func_0x00010c2827c0();
        _objc_release(plVar5);
        _objc_opt_class(PTR_PTR_1126d71f0);
        if (param_1 == (undefined8 *)0x0) {
          uStack_1e0 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          lStack_208 = 0;
          lStack_210 = 0;
        }
        else {
          func_0x00010bfa6be0(&lStack_210,param_1);
        }
        puVar7 = &uStack_281;
        FUN_107c04280();
        func_0x00010c282760();
        uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0xf);
        uStack_2e8 = CONCAT44(uStack_2e8._4_4_,0x100);
        uStack_2d0 = uVar17 & 0xffffffff;
        ppuStack_300 = &PTR_DAT_110862958;
        uStack_2c0 = 0;
        uStack_2c8 = 0;
        lStack_2b0 = 0;
        lStack_2b8 = 0;
        plStack_2a0 = (long *)0x0;
        uStack_2a8 = 0;
        plStack_298 = (long *)0x0;
        uStack_266 = *(undefined2 *)(puVar7 + 0x1a);
        uStack_278 = 10;
        uStack_268 = 0x100;
        ppuStack_280 = &PTR_DAT_110881e20;
        lStack_230 = 0;
        lStack_238 = 0;
        plStack_220 = (long *)0x0;
        uStack_228 = 0;
        plStack_218 = (long *)0x0;
        puVar8 = &uStack_331;
        puStack_248 = puVar7;
        pppuStack_240 = &ppuStack_300;
        FUN_107c043c4();
        lStack_110 = *(long *)(puVar8 + 0x10);
        uStack_f8 = *(undefined8 *)(puVar8 + 0x28);
        uStack_108._0_2_ = CONCAT11(puVar8[0x18],puVar8[0x19]);
        uStack_108 = CONCAT44(1,(undefined4)uStack_108);
        pcStack_100 = FUN_107c036e4;
        lStack_328 = 0;
        uStack_320 = 0;
        lStack_330 = 0;
        func_0x000100c435d0(&lStack_330,&lStack_110,auStack_f0,1);
        func_0x000100c436b8(&uStack_318,&lStack_330);
        uStack_338 = 0;
        plVar5 = &lStack_210;
        func_0x0001000e77a0(plVar5,&ppuStack_280,&uStack_318,&uStack_338);
        _objc_retainAutoreleasedReturnValue();
        if (CONCAT44(uStack_314,uStack_318) != 0) {
          __ZdlPv();
        }
        if (lStack_330 != 0) {
          lStack_328 = lStack_330;
          __ZdlPv();
        }
        plVar9 = plStack_218;
        ppuStack_280 = &PTR_DAT_110881e20;
        plStack_218 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        plVar9 = plStack_220;
        plStack_220 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        if (lStack_238 != 0) {
          lStack_230 = lStack_238;
          __ZdlPv();
        }
        plVar9 = plStack_298;
        ppuStack_300 = &PTR_DAT_110862958;
        plStack_298 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        plVar9 = plStack_2a0;
        plStack_2a0 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        if (lStack_2b8 != 0) {
          lStack_2b0 = lStack_2b8;
          __ZdlPv();
        }
        func_0x0001000e76e0(&uStack_1e8);
        _objc_release(uStack_1f8);
        _objc_release(uStack_200);
        for (; plVar9 = plVar5, func_0x00010bf529e0(), plVar6 < plVar9;
            plVar6 = (long *)((long)plVar6 + 1)) {
          plVar9 = plVar5;
          func_0x00010c0dfd40(plVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126d7218;
          FUN_107c0668c(PTR_PTR_1126d7218,plVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(plVar9);
        }
        _objc_release(plVar5);
        plVar18 = (long *)((long)plVar18 + 1);
      } while (plVar18 != plVar4);
      plVar4 = plVar3;
      func_0x00010bf52a60();
    } while (plVar4 != (long *)0x0);
  }
  _objc_release(plVar3);
  _objc_opt_class(PTR_PTR_1126d71f0);
  if (param_1 == (undefined8 *)0x0) {
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    ppuStack_300 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_300,param_1);
  }
  plVar4 = &lStack_330;
  FUN_107c04280(plVar4);
  FUN_107c01c8c(&lStack_210,plVar3);
  FUN_107c035b0(&ppuStack_280,plVar4,&lStack_210);
  lStack_110 = 0;
  uStack_108 = 0;
  pcStack_100 = (code *)0x0;
  uStack_318 = 0;
  pppuVar10 = &ppuStack_300;
  pppuVar14 = &ppuStack_280;
  func_0x0001000e77a0(pppuVar10,pppuVar14,&lStack_110,&uStack_318);
  _objc_retainAutoreleasedReturnValue();
  pppuVar11 = pppuVar10;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar10);
  if (lStack_110 != 0) {
    uStack_108 = lStack_110;
    __ZdlPv();
  }
  plVar4 = plStack_218;
  ppuStack_280 = &PTR_DAT_110881e20;
  plStack_218 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_220;
  plStack_220 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_238 != 0) {
    lStack_230 = lStack_238;
    __ZdlPv();
  }
  if (lStack_210 != 0) {
    lStack_208 = lStack_210;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_2d8);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2f0);
  lStack_378 = 0;
  lStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  _objc_retain(pppuVar11);
  plVar4 = &lStack_380;
  pppuVar10 = pppuVar11;
  func_0x00010bf52a60();
  if (pppuVar10 != (undefined ***)0x0) {
    lVar15 = *plStack_370;
    do {
      pppuVar16 = (undefined ***)0x0;
      do {
        if (*plStack_370 != lVar15) {
          _objc_enumerationMutation(pppuVar11);
        }
        pppuVar14 = *(undefined ****)(lStack_378 + (long)pppuVar16 * 8);
        puVar12 = PTR_PTR_1126d7218;
        FUN_107c0668c(PTR_PTR_1126d7218);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
        pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
      } while (pppuVar10 != pppuVar16);
      plVar4 = &lStack_380;
      pppuVar10 = pppuVar11;
      func_0x00010bf52a60();
    } while (pppuVar10 != (undefined ***)0x0);
  }
  _objc_release(pppuVar11);
  _objc_release(pppuVar11);
  _objc_release(plVar3);
  _objc_release(param_2);
  puVar13 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar11);
  _objc_release(pppuVar11);
  _objc_release(plVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  uVar2 = *(undefined2 *)((long)pppuVar14 + 0x19);
  uVar1 = *(undefined1 *)((long)pppuVar14 + 0x1b);
  *(undefined4 *)(puVar13 + 1) = 0xd;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined2 *)((long)puVar13 + 0x19) = uVar2;
  *(undefined1 *)((long)puVar13 + 0x1b) = uVar1;
  *puVar13 = &PTR_DAT_110881e20;
  puVar13[7] = pppuVar14;
  puVar13[9] = 0;
  puVar13[8] = 0;
  puVar13[0xb] = 0;
  puVar13[10] = 0;
  func_0x0001006581c0(puVar13 + 9,*plVar4,plVar4[1],plVar4[1] - *plVar4 >> 3);
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  return puVar13;
}



/* Entry: 107c035b0; end: 107c03623;  */

undefined8 * FUN_107c035b0(undefined8 *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)(param_2 + 0x19);
  uVar1 = *(undefined1 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 1) = 0xd;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110881e20;
  param_1[7] = param_2;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x0001006581c0(param_1 + 9,*param_3,param_3[1],param_3[1] - *param_3 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 107c03624; end: 107c036e3;  */

ulong * FUN_107c03624(double param_1,long *param_2,undefined8 *param_3,code *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  double dVar12;
  byte bStack_72;
  byte bStack_71;
  
  puVar5 = (ulong *)(param_2 + 2);
  puVar9 = (undefined8 *)param_2[1];
  if (puVar9 < (undefined8 *)*puVar5) {
    puVar11 = puVar9 + 1;
    *puVar9 = *param_3;
  }
  else {
    lVar10 = (long)puVar9 - *param_2;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000104bef190();
      _objc_retain();
      _objc_retain(param_3);
      (*param_4)(puVar5,&bStack_71);
      dVar12 = param_1;
      (*param_4)(param_3,&bStack_72);
      uVar8 = 2;
      uVar3 = uVar8;
      if (bStack_72 == 0) {
        uVar3 = 0;
      }
      if (bStack_71 == 0) {
        uVar3 = 1;
      }
      if (dVar12 < param_1) {
        uVar8 = 1;
      }
      uVar4 = 0;
      if (dVar12 <= param_1) {
        uVar4 = uVar8;
      }
      uVar8 = uVar3;
      if ((bStack_72 & 1) == 0) {
        uVar8 = uVar4;
      }
      if ((bStack_71 & 1) == 0) {
        uVar3 = uVar8;
      }
      _objc_release(param_3);
      _objc_release(puVar5);
      return (ulong *)(ulong)uVar3;
    }
    uVar6 = (long)*puVar5 - *param_2;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    func_0x00010065b9f0();
    puVar9 = (undefined8 *)((long)puVar5 + lVar10);
    puVar2 = puVar5 + uVar7;
    lVar10 = (long)puVar9 - (param_2[1] - *param_2);
    puVar11 = puVar9 + 1;
    *puVar9 = *param_3;
    _memcpy(lVar10);
    puVar5 = (ulong *)*param_2;
    *param_2 = lVar10;
    param_2[1] = (long)puVar11;
    param_2[2] = (long)puVar2;
    if (puVar5 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  param_2[1] = (long)puVar11;
  return puVar5;
}



/* Entry: 107c036e4; end: 107c03797;  */

undefined4 FUN_107c036e4(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107c03798; end: 107c03833; -[SCDiscoverFeedRankableObject initWithCoder:] */

undefined1 *
FUN_107c03798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fa308;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107c03834; end: 107c038bb; -[SCDiscoverFeedRankableObject initWithScore:object:] */

undefined1 *
FUN_107c03834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa308;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107c038bc; end: 107c038df; -[SCDiscoverFeedRankableObject copyWithZone:] */

undefined8 FUN_107c038bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c038e0; end: 107c0393f; -[SCDiscoverFeedRankableObject encodeWithCoder:] */

void FUN_107c038e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110e89378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eb3a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c03940; end: 107c039bf; -[SCDiscoverFeedRankableObject hash] */

ulong * FUN_107c03940(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  puVar3 = &uStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107c03a5c:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_107c03a68;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
      dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (ulong *)puVar3[2];
        if (puVar6 != (ulong *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107c03a68;
        }
        goto LAB_107c03a5c;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_107c03a68:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107c039c0; end: 107c03a83; -[SCDiscoverFeedRankableObject isEqual:] */

long FUN_107c039c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c03a5c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c03a68;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107c03a68;
        }
        goto LAB_107c03a5c;
      }
    }
    lVar4 = 0;
  }
LAB_107c03a68:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c03a84; end: 107c03a8b; -[SCDiscoverFeedRankableObject score] */

undefined8 FUN_107c03a84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c03a8c; end: 107c03a93; -[SCDiscoverFeedRankableObject object] */

undefined8 FUN_107c03a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c03a94; end: 107c03a9f; -[SCDiscoverFeedRankableObject .cxx_destruct] */

void FUN_107c03a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c03aa0; end: 107c03b4f; -[SCDisocverFeedUserInteractionFeaturesResult initWithCoder:] */

undefined1 * FUN_107c03aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa310;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c03b50; end: 107c03bfb; -[SCDisocverFeedUserInteractionFeaturesResult initWithUserImpressionInteractionHistory:userOverallInteractionHistory:] */

undefined1 *
FUN_107c03b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa310;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c03bfc; end: 107c03c1f; -[SCDisocverFeedUserInteractionFeaturesResult copyWithZone:] */

undefined8 FUN_107c03bfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c03c20; end: 107c03c7f; -[SCDisocverFeedUserInteractionFeaturesResult encodeWithCoder:] */

void FUN_107c03c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eb3a98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eb3ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c03c80; end: 107c03cf3; -[SCDisocverFeedUserInteractionFeaturesResult hash] */

undefined8 * FUN_107c03c80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107c03d74:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c03d80;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107c03d80;
        }
        goto LAB_107c03d74;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107c03d80:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107c03cf4; end: 107c03d9b; -[SCDisocverFeedUserInteractionFeaturesResult isEqual:] */

long FUN_107c03cf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c03d74:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c03d80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107c03d80;
        }
        goto LAB_107c03d74;
      }
    }
    lVar3 = 0;
  }
LAB_107c03d80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c03d9c; end: 107c03da3; -[SCDisocverFeedUserInteractionFeaturesResult userImpressionInteractionHistory] */

undefined8 FUN_107c03d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c03da4; end: 107c03dab; -[SCDisocverFeedUserInteractionFeaturesResult userOverallInteractionHistory] */

undefined8 FUN_107c03da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c03dac; end: 107c03ddb; -[SCDisocverFeedUserInteractionFeaturesResult .cxx_destruct] */

void FUN_107c03dac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c03ddc; end: 107c040bb;  */

void FUN_107c03ddc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c25b720();
  puVar3 = (undefined *)0x0;
  if ((long)puVar1 < 0xb) {
    if (puVar1 == (undefined *)0x2) {
LAB_107c03ea8:
      puVar3 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar1 == (undefined *)0x0) goto LAB_107c03ed8;
      goto LAB_107c03f08;
    }
    if (puVar1 != (undefined *)0x3) goto LAB_107c03f58;
    puVar3 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) goto LAB_107c03e60;
LAB_107c03e90:
    puVar3 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar1 != (undefined *)0xb) {
      if (puVar1 != (undefined *)0xe) goto LAB_107c03f58;
LAB_107c03e60:
      puVar3 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar1 != (undefined *)0x0) goto LAB_107c03e90;
      goto LAB_107c03ea8;
    }
LAB_107c03ed8:
    puVar3 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010afefbe8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
      goto LAB_107c03f58;
    }
LAB_107c03f08:
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = puVar1;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11b1e0();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_107c03f58:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c040bc; end: 107c0413b;  */

void FUN_107c040bc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b17c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((param_2 & 1) == 0) {
    func_0x00010c2b1080(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c0413c; end: 107c041f3;  */

undefined8 FUN_107c0413c(void)

{
  int iVar1;
  
  if ((bRam00000001138245c8 & 1) == 0) {
    iVar1 = 0x138245c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113824560 = 0xe;
      puRam0000000113824568 = &UNK_10f44d943;
      uRam0000000113824570 = 0x100;
      pcRam0000000113824578 = FUN_107c041f4;
      pcRam0000000113824580 = FUN_107c0422c;
      ppuRam0000000113824558 = &PTR_DAT_110864b98;
      uRam0000000113824598 = 0;
      uRam0000000113824590 = 0;
      uRam00000001138245a8 = 0;
      uRam00000001138245a0 = 0;
      uRam00000001138245b8 = 0;
      uRam00000001138245b0 = 0;
      uRam00000001138245c0 = 0;
      ___cxa_atexit(&DAT_105077cd4,0x113824558,0x100000000);
      ___cxa_guard_release(0x1138245c8);
    }
  }
  return 0x113824558;
}



/* Entry: 107c041f4; end: 107c0422b;  */

undefined8 FUN_107c041f4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 107c0422c; end: 107c0427f;  */

undefined8 FUN_107c0422c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c259740(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107c04280; end: 107c04337;  */

undefined8 FUN_107c04280(void)

{
  int iVar1;
  
  if ((bRam0000000113824640 & 1) == 0) {
    iVar1 = 0x13824640;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138245d8 = 0xe;
      puRam00000001138245e0 = &UNK_10f44d951;
      uRam00000001138245e8 = 0x100;
      pcRam00000001138245f0 = FUN_107c04338;
      pcRam00000001138245f8 = FUN_107c04370;
      ppuRam00000001138245d0 = &PTR_DAT_110862958;
      uRam0000000113824610 = 0;
      uRam0000000113824608 = 0;
      uRam0000000113824620 = 0;
      uRam0000000113824618 = 0;
      uRam0000000113824630 = 0;
      uRam0000000113824628 = 0;
      uRam0000000113824638 = 0;
      ___cxa_atexit(&DAT_1050077c0,0x1138245d0,0x100000000);
      ___cxa_guard_release(0x113824640);
    }
  }
  return 0x1138245d0;
}



/* Entry: 107c04338; end: 107c0436f;  */

undefined8 FUN_107c04338(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 107c04370; end: 107c043c3;  */

undefined8 FUN_107c04370(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf01720(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107c043c4; end: 107c0447f;  */

undefined8 FUN_107c043c4(void)

{
  int iVar1;
  
  if ((bRam00000001138246b8 & 1) == 0) {
    iVar1 = 0x138246b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113824650 = 0xe;
      puRam0000000113824658 = &UNK_10f44d95f;
      uRam0000000113824660 = 0x1010000;
      pcRam0000000113824668 = FUN_107c04480;
      pcRam0000000113824670 = FUN_107c044b4;
      ppuRam0000000113824648 = &PTR_DAT_11086d7d0;
      uRam0000000113824688 = 0;
      uRam0000000113824680 = 0;
      uRam0000000113824698 = 0;
      uRam0000000113824690 = 0;
      uRam00000001138246a8 = 0;
      uRam00000001138246a0 = 0;
      uRam00000001138246b0 = 0;
      ___cxa_atexit(&DAT_105187b98,0x113824648,0x100000000);
      ___cxa_guard_release(0x1138246b8);
    }
  }
  return 0x113824648;
}



/* Entry: 107c04480; end: 107c044b3;  */

undefined8 FUN_107c04480(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 107c044b4; end: 107c0450f;  */

undefined8 FUN_107c044b4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c28b0e0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107c04510; end: 107c0451b; +[SCDiscoverFeedStoryIH table] */

undefined * FUN_107c04510(void)

{
  return &UNK_10f44d96f;
}



/* Entry: 107c0451c; end: 107c05f97; +[SCDiscoverFeedStoryIH immutableObjectParse:bufferSize:] */

void FUN_107c0451c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  ushort *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puStack_110;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar6 = PTR_PTR_1126d71f0;
  _objc_alloc();
  lVar13 = (long)*piVar1;
  uVar10 = *(ushort *)((long)piVar1 - lVar13);
  if (uVar10 < 5) {
    puVar21 = (undefined *)0x0;
LAB_107c045d8:
    uVar7 = 0;
LAB_107c045dc:
    uVar8 = 0;
LAB_107c045e0:
    iVar12 = (int)lVar13;
    puVar24 = (undefined *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar1 - lVar13))[2];
    if (uVar15 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = (long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - lVar13);
    }
    if (uVar10 < 7) goto LAB_107c045d8;
    uVar15 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar13));
    if (uVar15 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)((long)piVar1 + uVar15);
    }
    if (uVar10 < 9) goto LAB_107c045dc;
    uVar15 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar13));
    if (uVar15 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar15);
    }
    if ((uVar10 < 0xb) || (uVar15 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar13)), uVar15 == 0))
    goto LAB_107c045e0;
    puVar2 = (uint *)((long)piVar1 + uVar15);
    uVar5 = *puVar2;
    puVar24 = PTR_PTR_1126d71d8;
    _objc_alloc();
    piVar3 = (int *)((long)puVar2 + (ulong)uVar5);
    iVar12 = *piVar3;
    lVar13 = (long)iVar12;
    puVar16 = (ushort *)((long)piVar3 - lVar13);
    uVar10 = *puVar16;
    if (uVar10 < 5) {
      uVar29 = 0;
LAB_107c04cbc:
      puVar26 = (undefined *)0x0;
LAB_107c04cc0:
      puStack_90 = (undefined *)0x0;
LAB_107c04cc4:
      uStack_c4 = 0;
LAB_107c04ccc:
      uStack_d8 = 0;
      uStack_d0 = 0;
LAB_107c04cd0:
      uVar32 = 0;
LAB_107c04cd4:
      puStack_98 = (undefined *)0x0;
LAB_107c04cd8:
      puStack_a8 = (undefined *)0x0;
LAB_107c04cdc:
      puStack_b0 = (undefined *)0x0;
      uStack_dc = 0;
      puStack_c0 = (undefined *)0x0;
    }
    else {
      if ((ulong)puVar16[2] == 0) {
        uVar29 = 0;
      }
      else {
        uVar29 = *(undefined4 *)((long)piVar3 + (ulong)puVar16[2]);
      }
      if (uVar10 < 7) goto LAB_107c04cbc;
      if ((ulong)puVar16[3] == 0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + (ulong)puVar16[3]);
        uVar5 = *puVar2;
        puVar26 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar32 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar32 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar32);
        lVar13 = (long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - lVar13);
      }
      iVar12 = (int)lVar13;
      lVar13 = -lVar13;
      if (uVar10 < 9) goto LAB_107c04cc0;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 8);
      if (uVar15 == 0) {
        puStack_90 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puStack_90 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar32 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar32 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar32);
        iVar12 = *piVar3;
        lVar13 = -(long)iVar12;
        uVar10 = *(ushort *)((long)piVar3 - (long)iVar12);
      }
      if (uVar10 < 0xb) goto LAB_107c04cc4;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 10);
      if (uVar15 == 0) {
        uStack_c4 = 0;
      }
      else {
        uStack_c4 = *(undefined4 *)((long)piVar3 + uVar15);
      }
      if (uVar10 < 0xd) goto LAB_107c04ccc;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0xc);
      if (uVar15 == 0) {
        uStack_d0 = 0;
      }
      else {
        uStack_d0 = *(undefined8 *)((long)piVar3 + uVar15);
      }
      if (uVar10 < 0xf) {
        uStack_d8 = 0;
        goto LAB_107c04cd0;
      }
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0xe);
      if (uVar15 == 0) {
        uStack_d8 = 0;
      }
      else {
        uStack_d8 = *(undefined8 *)((long)piVar3 + uVar15);
      }
      if (uVar10 < 0x11) goto LAB_107c04cd0;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x10);
      if (uVar15 == 0) {
        uVar32 = 0;
      }
      else {
        uVar32 = *(undefined8 *)((long)piVar3 + uVar15);
      }
      if (uVar10 < 0x13) goto LAB_107c04cd4;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x12);
      if (uVar15 == 0) {
        puStack_98 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puStack_98 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
        iVar12 = *piVar3;
        lVar13 = -(long)iVar12;
        uVar10 = *(ushort *)((long)piVar3 - (long)iVar12);
      }
      if (uVar10 < 0x15) goto LAB_107c04cd8;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x14);
      if (uVar15 == 0) {
        puStack_a8 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puStack_a8 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
        iVar12 = *piVar3;
        lVar13 = -(long)iVar12;
        uVar10 = *(ushort *)((long)piVar3 - (long)iVar12);
      }
      if (uVar10 < 0x17) goto LAB_107c04cdc;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x16);
      if (uVar15 == 0) {
        puStack_b0 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        puStack_b0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        iVar12 = *piVar3;
        lVar13 = -(long)iVar12;
        uVar10 = *(ushort *)((long)piVar3 - (long)iVar12);
      }
      if (uVar10 < 0x19) {
        uStack_dc = 0;
LAB_107c05c98:
        puStack_c0 = (undefined *)0x0;
      }
      else {
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x18);
        if (uVar15 == 0) {
          uStack_dc = 0;
        }
        else {
          uStack_dc = *(undefined4 *)((long)piVar3 + uVar15);
        }
        if ((uVar10 < 0x1b) ||
           (uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x1a), uVar15 == 0))
        goto LAB_107c05c98;
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puStack_c0 = PTR_PTR_1126d71c0;
        _objc_alloc();
        uVar33 = 0;
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        lVar13 = (long)*piVar4;
        puVar16 = (ushort *)((long)piVar4 - lVar13);
        uVar10 = *puVar16;
        if (uVar10 < 5) {
LAB_107c05cfc:
          puVar19 = (undefined *)0x0;
LAB_107c05d00:
          uVar9 = 0;
        }
        else {
          if ((ulong)puVar16[2] == 0) {
            uVar33 = 0;
          }
          else {
            uVar33 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[2]);
          }
          if (uVar10 < 7) goto LAB_107c05cfc;
          if ((ulong)puVar16[3] == 0) {
            puVar19 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar4 + (ulong)puVar16[3]);
            puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar2 + (ulong)*puVar2 + 4);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = (long)*piVar4;
            uVar10 = *(ushort *)((long)piVar4 - lVar13);
          }
          if ((uVar10 < 9) ||
             (uVar15 = (ulong)*(ushort *)((long)piVar4 + (8 - lVar13)), uVar15 == 0))
          goto LAB_107c05d00;
          uVar9 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c005fa0(puStack_c0,param_2,uVar33,puVar19,uVar9);
        _objc_release(puVar19);
        iVar12 = *piVar3;
      }
    }
    uVar10 = *(ushort *)((long)piVar3 - (long)iVar12);
    if (uVar10 < 0x1d) {
      puStack_e8 = (undefined *)0x0;
LAB_107c04e98:
      puStack_f0 = (undefined *)0x0;
LAB_107c04ebc:
      puVar19 = (undefined *)0x0;
LAB_107c04ec0:
      puVar22 = (undefined *)0x0;
LAB_107c04ec8:
      puVar23 = (undefined *)0x0;
LAB_107c04ecc:
      puStack_110 = (undefined *)0x0;
      puVar27 = (undefined *)0x0;
    }
    else {
      uVar15 = (ulong)((ushort *)((long)piVar3 - (long)iVar12))[0xe];
      if (uVar15 == 0) {
        puStack_e8 = (undefined *)0x0;
        lVar13 = (long)iVar12;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puStack_e8 = PTR_PTR_1126d71b0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
        lVar13 = (long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - lVar13);
      }
      lVar13 = -lVar13;
      if (uVar10 < 0x1f) goto LAB_107c04e98;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x1e);
      if (uVar15 == 0) {
        puStack_f0 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        puStack_f0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = -(long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
      }
      if ((uVar10 < 0x21) || (uVar10 < 0x23)) goto LAB_107c04ebc;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x22);
      if (uVar15 == 0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puVar19 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
        lVar13 = -(long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
      }
      if (uVar10 < 0x25) goto LAB_107c04ec0;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x24);
      if (uVar15 == 0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puVar22 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
        lVar13 = -(long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
      }
      if ((uVar10 < 0x27) || (uVar10 < 0x29)) goto LAB_107c04ec8;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x28);
      if (uVar15 == 0) {
        puVar23 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puVar23 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
        lVar13 = -(long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
      }
      if (uVar10 < 0x2b) goto LAB_107c04ecc;
      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x2a);
      if (uVar15 == 0) {
        puStack_110 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puStack_110 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar4 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
        lVar13 = -(long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
      }
      if ((uVar10 < 0x2d) ||
         (uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x2c), uVar15 == 0)) {
        puVar27 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar15);
        uVar5 = *puVar2;
        puVar27 = PTR_PTR_1126d71a0;
        _objc_alloc();
        piVar3 = (int *)((long)puVar2 + (ulong)uVar5);
        uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        uVar33 = 0;
        if (((4 < uVar10) && (6 < uVar10)) &&
           (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar15 != 0)) {
          uVar33 = *(undefined8 *)((long)piVar3 + uVar15);
        }
        func_0x00010c0604a0(uVar33);
      }
    }
    func_0x00010c04d6c0(puVar24,param_2,uVar29,puVar26,puStack_90,uStack_c4,uStack_d0,uStack_d8,
                        uVar32,puStack_98,puStack_a8,puStack_b0,uStack_dc);
    _objc_release(puVar27);
    _objc_release(puStack_110);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar19);
    _objc_release(puStack_f0);
    _objc_release(puStack_e8);
    _objc_release(puStack_c0);
    _objc_release(puStack_b0);
    _objc_release(puStack_a8);
    _objc_release(puStack_98);
    _objc_release(puStack_90);
    _objc_release(puVar26);
    iVar12 = *piVar1;
  }
  uVar10 = *(ushort *)((long)piVar1 - (long)iVar12);
  if (uVar10 < 0xd) {
    puVar26 = (undefined *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar1 - (long)iVar12))[6];
    if (uVar15 == 0) {
      puVar26 = (undefined *)0x0;
      lVar13 = (long)iVar12;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      uVar5 = *puVar2;
      puVar26 = PTR_PTR_1126d71e0;
      _objc_alloc();
      piVar3 = (int *)((long)puVar2 + (ulong)uVar5);
      lVar13 = (long)*piVar3;
      uVar10 = *(ushort *)((long)piVar3 - lVar13);
      if (uVar10 < 5) {
        puStack_90 = (undefined *)0x0;
LAB_107c04774:
        puStack_a8 = (undefined *)0x0;
LAB_107c0477c:
        puVar19 = (undefined *)0x0;
        uVar31 = 0;
        uVar29 = 0;
        uVar20 = 0;
        uVar14 = 0;
LAB_107c04790:
        puVar22 = (undefined *)0x0;
LAB_107c04794:
        puVar23 = (undefined *)0x0;
LAB_107c04798:
        puVar27 = (undefined *)0x0;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar3 - lVar13))[2];
        if (uVar15 == 0) {
          puStack_90 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          uVar5 = *puVar2;
          puStack_90 = PTR_PTR_1126d71a8;
          _objc_alloc();
          piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
          puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar32 = 0;
          uVar29 = 0;
          if (4 < *puVar16) {
            if ((ulong)puVar16[2] != 0) {
              uVar29 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
            }
            if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
              uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
            }
          }
          func_0x00010c0604a0(uVar29,uVar32);
          lVar13 = (long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - lVar13);
        }
        lVar13 = -lVar13;
        if (uVar10 < 7) goto LAB_107c04774;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 6);
        if (uVar15 == 0) {
          puStack_a8 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          uVar5 = *puVar2;
          puStack_a8 = PTR_PTR_1126d71a8;
          _objc_alloc();
          piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
          puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar32 = 0;
          uVar29 = 0;
          if (4 < *puVar16) {
            if ((ulong)puVar16[2] != 0) {
              uVar29 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
            }
            if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
              uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
            }
          }
          func_0x00010c0604a0(uVar29,uVar32);
          lVar13 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 9) goto LAB_107c0477c;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 8);
        if (uVar15 == 0) {
          puVar19 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          uVar5 = *puVar2;
          puVar19 = PTR_PTR_1126d71a8;
          _objc_alloc(PTR_PTR_1126d71a8);
          piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
          puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar32 = 0;
          uVar29 = 0;
          if (4 < *puVar16) {
            if ((ulong)puVar16[2] != 0) {
              uVar29 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
            }
            if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
              uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
            }
          }
          func_0x00010c0604a0(uVar29,uVar32);
          lVar13 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 0xb) {
          uVar31 = 0;
          uVar29 = 0;
          uVar20 = 0;
          uVar14 = 0;
          goto LAB_107c04790;
        }
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 10);
        if (uVar15 == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = *(undefined4 *)((long)piVar3 + uVar15);
        }
        if (uVar10 < 0xd) {
          uVar31 = 0;
          uVar20 = 0;
LAB_107c05064:
          uVar14 = 0;
          goto LAB_107c04790;
        }
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0xc);
        if (uVar15 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(undefined4 *)((long)piVar3 + uVar15);
        }
        if (uVar10 < 0xf) {
          uVar31 = 0;
          goto LAB_107c05064;
        }
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0xe);
        if (uVar15 == 0) {
          uVar31 = 0;
        }
        else {
          uVar31 = *(undefined4 *)((long)piVar3 + uVar15);
        }
        if (uVar10 < 0x11) goto LAB_107c05064;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x10);
        if (uVar15 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined4 *)((long)piVar3 + uVar15);
        }
        if (uVar10 < 0x13) goto LAB_107c04790;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x12);
        if (uVar15 == 0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 0x15) goto LAB_107c04794;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x14);
        if (uVar15 == 0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          uVar5 = *puVar2;
          puVar23 = PTR_PTR_1126d71a8;
          _objc_alloc();
          piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
          puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar32 = 0;
          uVar30 = 0;
          if (4 < *puVar16) {
            if ((ulong)puVar16[2] != 0) {
              uVar30 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
            }
            if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
              uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
            }
          }
          func_0x00010c0604a0(uVar30,uVar32);
          lVar13 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 0x17) goto LAB_107c04798;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x16);
        if (uVar15 == 0) {
          puVar27 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          uVar5 = *puVar2;
          puVar27 = PTR_PTR_1126d71a8;
          _objc_alloc();
          piVar3 = (int *)((long)puVar2 + (ulong)uVar5);
          puVar16 = (ushort *)((long)piVar3 - (long)*piVar3);
          uVar32 = 0;
          uVar30 = 0;
          if (4 < *puVar16) {
            if ((ulong)puVar16[2] != 0) {
              uVar30 = *(undefined4 *)((long)piVar3 + (ulong)puVar16[2]);
            }
            if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
              uVar32 = *(undefined8 *)((long)piVar3 + (ulong)puVar16[3]);
            }
          }
          func_0x00010c0604a0(uVar30,uVar32);
        }
      }
      func_0x00010c045dc0(puVar26,param_2,puStack_90,puStack_a8,puVar19,uVar29,uVar20,uVar31,uVar14)
      ;
      _objc_release(puVar27);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar19);
      _objc_release(puStack_a8);
      _objc_release(puStack_90);
      lVar13 = (long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - lVar13);
    }
    lVar13 = -lVar13;
    if (0xe < uVar10) {
      uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar13 + 0xe);
      if (uVar15 == 0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar15);
        uVar5 = *puVar2;
        puVar19 = PTR_PTR_1126d71e8;
        _objc_alloc();
        piVar3 = (int *)((long)puVar2 + (ulong)uVar5);
        lVar13 = (long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - lVar13);
        if (uVar10 < 5) {
          puVar22 = (undefined *)0x0;
LAB_107c04ad8:
          puStack_98 = (undefined *)0x0;
LAB_107c04adc:
          puVar23 = (undefined *)0x0;
          uVar29 = 0;
          uVar20 = 0;
LAB_107c04ae8:
          puStack_b8 = (undefined *)0x0;
LAB_107c04aec:
          puVar27 = (undefined *)0x0;
LAB_107c04af0:
          puVar28 = (undefined *)0x0;
LAB_107c04af4:
          puVar25 = (undefined *)0x0;
          uVar18 = 0;
          uVar30 = 0;
          uVar14 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar17 = 0;
          uVar11 = 0;
        }
        else {
          uVar15 = (ulong)((ushort *)((long)piVar3 - lVar13))[2];
          if (uVar15 == 0) {
            puVar22 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            uVar5 = *puVar2;
            puVar22 = PTR_PTR_1126d71a8;
            _objc_alloc();
            piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
            puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar32 = 0;
            uVar29 = 0;
            if (4 < *puVar16) {
              if ((ulong)puVar16[2] != 0) {
                uVar29 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
              }
              if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
                uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
              }
            }
            func_0x00010c0604a0(uVar29,uVar32);
            lVar13 = (long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - lVar13);
          }
          lVar13 = -lVar13;
          if (uVar10 < 7) goto LAB_107c04ad8;
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 6);
          if (uVar15 == 0) {
            puStack_98 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            uVar5 = *puVar2;
            puStack_98 = PTR_PTR_1126d71a8;
            _objc_alloc();
            piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
            puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar32 = 0;
            uVar29 = 0;
            if (4 < *puVar16) {
              if ((ulong)puVar16[2] != 0) {
                uVar29 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
              }
              if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
                uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
              }
            }
            func_0x00010c0604a0(uVar29,uVar32);
            lVar13 = -(long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if (uVar10 < 9) goto LAB_107c04adc;
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 8);
          if (uVar15 == 0) {
            puVar23 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar2 + (ulong)*puVar2 + 4);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = -(long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if (uVar10 < 0xb) {
            uVar29 = 0;
LAB_107c04e00:
            uVar20 = 0;
            goto LAB_107c04ae8;
          }
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 10);
          if (uVar15 == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined4 *)((long)piVar3 + uVar15);
          }
          if (uVar10 < 0xd) goto LAB_107c04e00;
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0xc);
          if (uVar15 == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(undefined4 *)((long)piVar3 + uVar15);
          }
          if (uVar10 < 0xf) goto LAB_107c04ae8;
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0xe);
          if (uVar15 == 0) {
            puStack_b8 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            uVar5 = *puVar2;
            puStack_b8 = PTR_PTR_1126d71b0;
            _objc_alloc();
            piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
            uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
            uVar32 = 0;
            if (((4 < uVar10) && (6 < uVar10)) &&
               (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
              uVar32 = *(undefined8 *)((long)piVar4 + uVar15);
            }
            func_0x00010c0604a0(uVar32);
            lVar13 = -(long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if (uVar10 < 0x11) goto LAB_107c04aec;
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x10);
          if (uVar15 == 0) {
            puVar27 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            uVar5 = *puVar2;
            puVar27 = PTR_PTR_1126d71b0;
            _objc_alloc();
            piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
            uVar10 = *(ushort *)((long)piVar4 - (long)*piVar4);
            uVar32 = 0;
            if (((4 < uVar10) && (6 < uVar10)) &&
               (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 != 0)) {
              uVar32 = *(undefined8 *)((long)piVar4 + uVar15);
            }
            func_0x00010c0604a0(uVar32);
            lVar13 = -(long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if (uVar10 < 0x13) goto LAB_107c04af0;
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x12);
          if (uVar15 == 0) {
            puVar28 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            uVar5 = *puVar2;
            puVar28 = PTR_PTR_1126d71a8;
            _objc_alloc();
            piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
            puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar32 = 0;
            uVar31 = 0;
            if (4 < *puVar16) {
              if ((ulong)puVar16[2] != 0) {
                uVar31 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
              }
              if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
                uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
              }
            }
            func_0x00010c0604a0(uVar31,uVar32);
            lVar13 = -(long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if (uVar10 < 0x15) goto LAB_107c04af4;
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x14);
          if (uVar15 == 0) {
            puVar25 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            uVar5 = *puVar2;
            puVar25 = PTR_PTR_1126d71a8;
            _objc_alloc();
            piVar4 = (int *)((long)puVar2 + (ulong)uVar5);
            puVar16 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar32 = 0;
            uVar31 = 0;
            if (4 < *puVar16) {
              if ((ulong)puVar16[2] != 0) {
                uVar31 = *(undefined4 *)((long)piVar4 + (ulong)puVar16[2]);
              }
              if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
                uVar32 = *(undefined8 *)((long)piVar4 + (ulong)puVar16[3]);
              }
            }
            func_0x00010c0604a0(uVar31,uVar32);
            lVar13 = -(long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if (uVar10 < 0x17) {
            uVar14 = 0;
            uVar31 = 0;
LAB_107c05908:
            uVar30 = 0;
            uVar32 = 0;
LAB_107c0590c:
            uVar18 = 0;
            uVar17 = 0;
LAB_107c05910:
            uVar11 = 0;
          }
          else {
            uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x16);
            uVar31 = 0;
            if (uVar15 != 0) {
              uVar31 = *(undefined4 *)((long)piVar3 + uVar15);
            }
            if (uVar10 < 0x19) {
              uVar14 = 0;
              goto LAB_107c05908;
            }
            uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x18);
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = *(undefined4 *)((long)piVar3 + uVar15);
            }
            if (uVar10 < 0x1b) goto LAB_107c05908;
            uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x1a);
            uVar32 = 0;
            if (uVar15 != 0) {
              uVar32 = *(undefined8 *)((long)piVar3 + uVar15);
            }
            if (uVar10 < 0x1d) {
              uVar30 = 0;
              goto LAB_107c0590c;
            }
            uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x1c);
            uVar30 = 0;
            if (uVar15 != 0) {
              uVar30 = *(undefined4 *)((long)piVar3 + uVar15);
            }
            if (uVar10 < 0x1f) goto LAB_107c0590c;
            uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x1e);
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = *(undefined4 *)((long)piVar3 + uVar15);
            }
            if (uVar10 < 0x21) {
              uVar18 = 0;
              goto LAB_107c05910;
            }
            uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x20);
            uVar18 = 0;
            if (uVar15 != 0) {
              uVar18 = *(undefined4 *)((long)piVar3 + uVar15);
            }
            if (uVar10 < 0x23) goto LAB_107c05910;
            uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x22);
            uVar11 = 0;
            if (uVar15 != 0) {
              uVar11 = *(undefined4 *)((long)piVar3 + uVar15);
            }
          }
        }
        func_0x00010c045e40(puVar19,param_2,puVar22,puStack_98,puVar23,uVar29,uVar20,puStack_b8,
                            puVar27,puVar28,puVar25,uVar31,uVar14,uVar32,uVar30,uVar17,uVar18,uVar11
                           );
        _objc_release(puVar25);
        _objc_release(puVar28);
        _objc_release(puVar27);
        _objc_release(puStack_b8);
        _objc_release(puVar23);
        _objc_release(puStack_98);
        _objc_release(puVar22);
        lVar13 = -(long)*piVar1;
        uVar10 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      uVar32 = 0;
      if ((0x10 < uVar10) &&
         (uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar13 + 0x10), uVar32 = 0, uVar15 != 0)) {
        uVar32 = *(undefined8 *)((long)piVar1 + uVar15);
      }
      goto LAB_107c048e8;
    }
  }
  puVar19 = (undefined *)0x0;
  uVar32 = 0;
LAB_107c048e8:
  func_0x00010c01ba40(uVar32,puVar6,param_2,puVar21,uVar7,uVar8,puVar24,puVar26,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107c05f98; end: 107c05fab; +[SCDiscoverFeedStoryIH objectClassFunctionPointer] */

undefined1  [16] FUN_107c05f98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_107c05ff8;
  auVar1._0_8_ = FUN_107c05fac;
  return auVar1;
}



/* Entry: 107c05fac; end: 107c05ff7;  */

void FUN_107c05fac(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf44d985;
  _strcmp(&DAT_10f44d985,param_1);
  if (iVar1 != 0) {
    _strcmp(&UNK_10f44d993,param_1);
  }
  return;
}



/* Entry: 107c05ff8; end: 107c060e3;  */

bool FUN_107c05ff8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f44d9fd);
    _sqlite3_bind_int64();
    if (8 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[4];
      goto joined_r0x000107c060a0;
    }
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f44d9a1);
    _sqlite3_bind_int64();
    if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[3];
joined_r0x000107c060a0:
      if ((ulong)uVar2 != 0) {
        uVar3 = *(undefined8 *)((long)piVar1 + (ulong)uVar2);
        goto LAB_107c060b0;
      }
    }
  }
  uVar3 = 0;
LAB_107c060b0:
  _sqlite3_bind_int64(param_2,2,uVar3);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 107c060e4; end: 107c0623b;  */

undefined1 *
FUN_107c060e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_1126fa318;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = param_8;
      _objc_release(uVar2);
      _objc_retain(param_9);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_9;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x48) = param_1;
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 107c0623c; end: 107c0668b;  */

void FUN_107c0623c(undefined *param_1)

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
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar9,&UNK_10f44da59);
        if (puVar9 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bfe5ec0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar9,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar9;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar9;
            _sqlite3_column_int64(puVar9,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d71f0);
            _sqlite3_column_blob(puVar9,1);
            _sqlite3_column_bytes(puVar9,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar9);
            if (puVar3 == (undefined *)0x0) goto LAB_107c065ac;
            puVar9 = PTR_PTR_1126d7218;
            _objc_alloc(PTR_PTR_1126d7218);
            puVar2 = puVar3;
            func_0x00010bfe5ec0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c259740(puVar3);
            puVar5 = puVar3;
            func_0x00010bf01720(puVar3);
            puVar6 = puVar3;
            func_0x00010c259da0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bfea940(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c29d120(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c28b0e0(puVar3);
            FUN_107c060e4(puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
            param_1 = puVar3;
            goto LAB_107c06384;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d71f0);
      puVar3 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126d7218;
        _objc_alloc(PTR_PTR_1126d7218);
        puVar2 = puVar3;
        func_0x00010bfe5ec0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c259740(puVar3);
        puVar5 = puVar3;
        func_0x00010bf01720(puVar3);
        puVar6 = puVar3;
        func_0x00010c259da0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bfea940(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c29d120(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28b0e0(puVar3);
        FUN_107c060e4(puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
        param_1 = puVar3;
LAB_107c06384:
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar2);
        goto LAB_107c065b4;
      }
LAB_107c065ac:
      param_1 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_107c065b4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107c0668c; end: 107c066ff;  */

void FUN_107c0668c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_107c0623c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c06700; end: 107c06a2f;  */

void FUN_107c06700(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d7218;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_107c0623c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar8 = PTR_PTR_1126d7218;
    _objc_retain(param_2);
    _objc_opt_self(puVar8);
    puVar8 = PTR_PTR_1126d7218;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c259740(param_2);
      puVar4 = param_2;
      func_0x00010bf01720(param_2);
      puVar5 = param_2;
      func_0x00010c259da0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010bfea940(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c29d120(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b0e0(param_2);
      FUN_107c060e4(puVar8,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar8 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar8 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010c259740();
    *(undefined **)(puVar1 + 0x20) = puVar8;
    puVar8 = param_2;
    func_0x00010bf01720();
    *(undefined **)(puVar1 + 0x28) = puVar8;
    puVar8 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    func_0x00010c28b0e0(param_2);
    *(undefined8 *)(puVar1 + 0x48) = param_1;
    _objc_retain(puVar1);
    puVar8 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107c06a30; end: 107c06a9b;  */

void FUN_107c06a30(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d71f0;
    _objc_alloc(PTR_PTR_1126d71f0);
    func_0x00010c01ba40(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c06a9c; end: 107c06ae3; -[SCDiscoverFeedStoryIHChangeRequest .cxx_destruct] */

void FUN_107c06a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107c06ae4; end: 107c06aef; -[SCDiscoverFeedStoryIHChangeRequest table] */

undefined * FUN_107c06ae4(void)

{
  return &UNK_10f44d96f;
}


