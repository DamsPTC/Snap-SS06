/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795b3fc; end: 10795b473; -[SCSnapDocManagerImpl _dataFromInMemoryCacheForString:] */

void FUN_10795b3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795b858; end: 10795b90f; -[SCSnapDocMediaResultImpl initWithMediaId:mediaType:assetType:contentResult:] */

undefined1 *
FUN_10795b858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8ef0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = param_4;
    *(undefined4 *)((long)puVar1 + 0x14) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10795ba54; end: 10795ba7b; -[SCSnapDocPlaybackMediaResultImpl getError] */

void FUN_10795ba54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795c0e8; end: 10795c2c7; -[SCSnapDocThumbnailResolverImpl _retrieveLocalGeneratedThumbnailForKey:snapDoc:pageInfo:thumbnailRequestConfig:completion:] */

void FUN_10795c0e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010c09da20(param_6);
  lVar1 = param_1;
  func_0x00010be4f300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c13e480(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10795cc5c; end: 10795cd23;  */

void FUN_10795cc5c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c261740();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_10795ccfc;
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99200(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_10795ccfc:
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10795d58c; end: 10795d5ff; -[SCGrapheneSnapDocMetric2 init] */

undefined1 * FUN_10795d58c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8f08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10795dd20; end: 10795e04b;  */

void FUN_10795dd20(undefined8 param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  func_0x00010795d830();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010795d830();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (param_2 != 0) {
      puVar3 = PTR_PTR_1126c46c8;
      _objc_opt_new(PTR_PTR_1126c46c8);
      func_0x00010c20a620();
      func_0x00010c14b420(lVar2);
      func_0x00010c1d5de0(puVar3);
      func_0x00010c074980();
      func_0x00010c206c40(puVar3);
      func_0x00010c1f59c0(puVar3);
      func_0x00010c0b2e60(param_4);
      _objc_release(puVar3);
    }
    _CACurrentMediaTime();
    func_0x00010c14c040(lVar2);
    lVar1 = lVar2;
    func_0x00010c14bee0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    func_0x00010c1b92e0(lVar4);
    func_0x00010c1f5900(lVar4);
    lVar1 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(lVar4);
    _objc_release(lVar1);
    func_0x00010c0b2e60(param_4);
    lVar1 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2438;
    func_0x00010bfbd520(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2ac460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00010bfec2a0(lVar5);
    func_0x00010befbfe0(lVar5);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(lVar1);
    if (param_3 != 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e29d58;
      func_0x000108e00200(&PTR____CFConstantStringClassReference_110e29d58,param_3,
                          &PTR____CFConstantStringClassReference_110ea68f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60(param_4);
      _objc_release(ppuVar8);
    }
    func_0x00010795d940(param_1);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10795e2bc; end: 10795e2c7; -[SCMemoriesStorySavingLoggingStatus .cxx_destruct] */

void FUN_10795e2bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10795e59c; end: 10795e75f; -[SCCollectionViewLeftAlignedLayout layoutAttributesForElementsInRect:] */

void FUN_10795e59c(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  puVar11 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126f8f18;
  puVar1 = &uStack_f8;
  uStack_f8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  dVar12 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(puVar1);
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar10 = *plStack_130;
    do {
      puVar11 = (undefined8 *)0x0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        lVar9 = *(long *)(lStack_138 + (long)puVar11 * 8);
        lVar4 = lVar9;
        func_0x00010c1345c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == 0) {
          func_0x00010bfecde0();
          func_0x00010bfecf20();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_5;
          func_0x00010c08c980(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(ppuVar2);
          _objc_release(uVar5);
          _objc_release(lVar9);
        }
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar3 != puVar11);
      puVar3 = puVar1;
      puVar11 = &uStack_140;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    puStack_1c8 = PTR_PTR_1126f8f18;
    ppuVar6 = &puStack_1d0;
    puStack_1d0 = puVar1;
    _objc_msgSendSuper2(ppuVar6,PTR_s_layoutAttributesForItemAtIndexPa_112600c70,puVar11);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar6;
    func_0x00010bf51e00();
    _objc_release(ppuVar6);
    func_0x00010c1554e0(puVar11);
    func_0x00010bf99b00(puVar1);
    puVar7 = (undefined1 *)puVar11;
    dVar13 = dVar12;
    dVar15 = param_2;
    dVar17 = param_3;
    dVar19 = param_4;
    func_0x00010c0840e0();
    puVar3 = puVar1;
    func_0x00010bf40120(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    _objc_release(puVar3);
    puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (puVar7 == (undefined1 *)0x0) {
      func_0x00010c08e3a0(dVar12,param_2,param_3,param_4,ppuVar2);
    }
    else {
      dVar13 = dVar13 - param_2;
      dVar21 = dVar13 - param_4;
      func_0x00010c0840e0(puVar11);
      func_0x00010c1554e0(puVar11);
      func_0x00010bfed020(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c08c980(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      dVar16 = dVar15;
      dVar20 = dVar19;
      _objc_release(puVar3);
      ppuVar6 = ppuVar2;
      func_0x00010bfb68e0();
      dVar14 = dVar13;
      dVar18 = dVar17;
      _CGRectIntersectsRect(dVar13,dVar15,dVar17,dVar19,param_2,dVar16,dVar21,dVar20);
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x00010c08e3a0(dVar12,param_2,param_3,param_4,ppuVar2);
      }
      else {
        func_0x00010bfb68e0(ppuVar2);
        func_0x00010c1554e0(puVar11);
        func_0x00010bf99ae0(puVar1);
        func_0x00010c19f0e0(dVar13 + dVar17 + dVar14,dVar15,dVar18,dVar19,ppuVar2);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10795ec64; end: 10795ec7b; -[SCS2RBaseAdapter notificationHandler] */

void FUN_10795ec64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10795f0e4; end: 10795f3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10795f0e4(long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar9 = (long)_DAT_112766374;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar9);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  cVar2 = *(char *)(param_1 + 0x28);
  lVar3 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  if (cVar2 == '\x01') {
    lVar7 = 0;
    if (lVar4 != 0) {
      lVar7 = -8;
    }
    (**(code **)(lVar5 + 0x10))(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
    func_0x00010c0bbfa0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    (**(code **)(lVar4 + 0x10))(lVar4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))((double)lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(uVar6);
  }
  else {
    uVar1 = 0;
    if (lVar4 != 0) {
      uVar1 = 8;
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
    func_0x00010c0bc000(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))((double)uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  _objc_release(lVar8);
  lVar4 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10795f510; end: 10795f51b; -[SCSnapchatAirPerformer perform:after:] */

void FUN_10795f510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113726ff0,PTR_s_perform_after__11261ba18);
  return;
}



/* Entry: 10795f70c; end: 10795f793; +[SCShakeAsyncLogManager sharedManager] */

void FUN_10795f70c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  puStack_38 = &UNK_10795f794;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113727010 != -1) {
    func_0x00010002a2fc(0x113727010,&puStack_48);
  }
  uVar1 = uRam0000000113727008;
  _objc_retain(uRam0000000113727008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795fd5c; end: 10795fd83;  */

void FUN_10795fd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010795fd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,param_3,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079604f4; end: 10796058f; +[SCShakeLogFileManager saveOtherDataToFile:data:shakeId:inPath:] */

undefined8
FUN_1079604f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfc2e00(param_1,param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeb940(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107960fa8; end: 107961027; +[SCShakeLogFileManager _writeDataWithFileName:data:baseUrl:] */

long FUN_107960fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bdc2c60(param_5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c14e060(param_4,param_2,param_5,0);
    _objc_release(param_4);
    _objc_release(param_5);
    return lVar1;
  }
  return 1;
}



/* Entry: 1079613cc; end: 1079613d3; -[SCShakeSyncManager _transitionToState:] */

void FUN_1079613cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__transitionToState_backOffDelayM_112591650,param_3,0);
  return;
}



/* Entry: 107961b04; end: 107961b07; -[SCShakeSyncManager _cleanLogFilesInternal] */

void FUN_107961b04(void)

{
  return;
}



/* Entry: 107961c80; end: 107961c87; -[SCShakeSyncManager setMLastBackoffTicketId:] */

void FUN_107961c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1079622b4; end: 1079622bb; -[SCShakeTicket mReportType] */

undefined8 FUN_1079622b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079622f4; end: 1079622fb; -[SCShakeTicket mWithScreenshot] */

undefined1 FUN_1079622f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107962334; end: 10796233b; -[SCShakeTicket mJiraMetaInfo] */

undefined8 FUN_107962334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10796239c; end: 1079623a3; -[SCShakeTicket mJiraLabels] */

undefined8 FUN_10796239c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1079623dc; end: 1079623e3; -[SCShakeTicket traceId] */

undefined8 FUN_1079623dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107962628; end: 10796262f; -[SCShakeTicketBuilder setMReportType:] */

void FUN_107962628(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107962668; end: 10796266f; -[SCShakeTicketBuilder setSelfAssign:] */

void FUN_107962668(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1079626a8; end: 1079626af; -[SCShakeTicketBuilder setMWithScreenshot:] */

void FUN_1079626a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 107962710; end: 10796273f; -[SCShakeTicketBuilder setMCreateTimeStamp:] */

void FUN_107962710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107962778; end: 10796277f; -[SCShakeTicketBuilder setMJiraMetaInfo:] */

void FUN_107962778(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079627b8; end: 1079627bf; -[SCShakeTicketBuilder setMCameraRollAttachmentsFileNames:] */

void FUN_1079627b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962848; end: 10796284f; -[SCShakeTicketBuilder setCarrierInfo:] */

void FUN_107962848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962888; end: 10796288f; -[SCShakeTicketBuilder setLastCaptureSessionID:] */

void FUN_107962888(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079628c8; end: 1079628cf; -[SCShakeTicketBuilder setUploadUrl:] */

void FUN_1079628c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962d80; end: 107963007; -[SCShakeTicketAdapter fileBetaShakeTicket:reportType:reportSource:bugDescription:project:subProject:screenShot:createTimestamp:viewControllerName:viewControllerFeature:withConfiguration:hasCameraRollAttachment:otherInfo:carrierInfo:infoProviderRegistry:] */

void FUN_107962d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  uVar1 = param_1;
  func_0x00010bee7160();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_107963008;
  puStack_f0 = &UNK_1109f1ce0;
  uStack_e8 = param_13;
  uStack_d8 = param_9;
  uStack_d0 = param_18;
  uStack_70 = param_14;
  uStack_78 = param_10;
  uStack_a8 = param_11;
  uStack_a0 = param_12;
  uStack_98 = param_16;
  uStack_90 = param_17;
  uStack_e0 = param_3;
  uStack_c8 = param_1;
  uStack_c0 = param_6;
  uStack_b8 = param_7;
  uStack_b0 = param_8;
  uStack_88 = param_4;
  uStack_80 = param_5;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_18);
  _objc_retain(param_9);
  _objc_retain(param_3);
  _objc_retain(param_13);
  func_0x00010007380c(uVar1,&puStack_108);
  _objc_release(uVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_18);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_13);
  return;
}



/* Entry: 10796448c; end: 107964603;  */

void FUN_10796448c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = &uStack_130;
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      puVar1 = PTR_s_completeProcessingMetaInfoFile__1125ae860;
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_2);
        }
        puVar3 = PTR_PTR_1126b6c20;
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c2bd3c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14a600();
        _objc_release(uVar8);
        if ((int)puVar3 != 0) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
        }
        uVar4 = *(ulong *)(param_1 + 0x30);
        _objc_opt_respondsToSelector(uVar4,puVar1);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf43ae0(*(undefined8 *)(param_1 + 0x30));
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar5 = &uStack_130;
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(in_x5);
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  if (puVar5 == (undefined8 *)0x0) {
    _objc_retain(in_x6);
    _objc_opt_new();
  }
  else {
    _objc_retain(in_x6);
    func_0x00010c0d3c80();
    puVar6 = puVar5;
  }
  _objc_retain(puVar7);
  _objc_retain(in_x5);
  _objc_retain(uVar8);
  _objc_retain(puVar6);
  func_0x00010bf97de0(in_x6);
  _objc_release(in_x6);
  puVar5 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar7);
  _objc_release(in_x5);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(in_x5);
  _objc_release(uVar8);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107965990; end: 1079659fb; +[SCShakeTicketManager isPermanentError:error:] */

undefined8 FUN_107965990(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252ee0();
  if (((lVar1 == 0x1ad) || (lVar1 = param_3, func_0x00010c252ee0(), lVar1 < 400)) ||
     (lVar1 = param_3, func_0x00010c252ee0(), 499 < lVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107965ec8; end: 107965f3b;  */

void FUN_107965ec8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  return;
}



/* Entry: 1079675b4; end: 107967643; -[SCShakeTicketManager _jsonStringFromDictionary:] */

void FUN_1079675b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  puVar3 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079679ec; end: 10796835b; -[SCShakeTicketTable saveShakeTicket:] */

undefined *
FUN_1079679ec(long param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **unaff_x21;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *unaff_x22;
  undefined *puVar15;
  undefined **unaff_x23;
  undefined *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined **ppuStack_410;
  long lStack_408;
  ulong uStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined1 ***pppuStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined1 **ppuStack_360;
  undefined *puStack_358;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined *puStack_320;
  undefined **ppuStack_318;
  long lStack_310;
  undefined **ppuStack_308;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  int iStack_284;
  undefined *puStack_280;
  int iStack_274;
  undefined *puStack_270;
  int iStack_264;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  int iStack_22c;
  undefined *puStack_228;
  int iStack_21c;
  undefined **ppuStack_218;
  undefined *puStack_210;
  int iStack_204;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  int iStack_1c4;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar17 = (undefined **)0x0;
  }
  else {
    _objc_retain(param_1);
    lStack_1a0 = param_1;
    _objc_sync_enter(param_1);
    ppuVar2 = param_3;
    func_0x00010c0b5ca0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuStack_240 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar17 = param_3;
      func_0x00010c0b5ca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar17;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_240 = ppuVar3;
      _objc_release(ppuVar17);
    }
    _objc_release(ppuVar2);
    ppuVar2 = param_3;
    func_0x00010c0b5e40();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuStack_260 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar17 = param_3;
      func_0x00010c0b5e40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar17;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_260 = ppuVar3;
      _objc_release(ppuVar17);
    }
    _objc_release(ppuVar2);
    ppuStack_2e0 = *(undefined ***)(lStack_1a0 + 8);
    ppuStack_2e8 = *(undefined ***)(lStack_1a0 + 0x10);
    ppuVar3 = param_3;
    func_0x00010c0b5de0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    ppuStack_198 = ppuVar3;
    func_0x00010c0b5f20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_1a8 = ppuVar2;
    ppuStack_190 = ppuVar2;
    func_0x00010c0b5ce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    ppuStack_1b0 = ppuVar17;
    ppuStack_188 = ppuVar17;
    func_0x00010c0b5d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_1b8 = ppuVar2;
    ppuStack_180 = ppuVar2;
    func_0x00010c0b5d60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    ppuStack_1c0 = ppuVar17;
    ppuStack_178 = ppuVar17;
    func_0x00010c0b5e00();
    iStack_1c4 = (int)ppuVar2;
    if (iStack_1c4 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_1d0 = puVar16;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puStack_1d0 = puVar16;
    }
    puStack_170 = puStack_1d0;
    ppuVar2 = param_3;
    func_0x00010c0b5e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_1d8 = ppuVar2;
    ppuStack_168 = ppuVar2;
    func_0x00010c0b5ea0();
    func_0x00010b767794();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    ppuStack_1e0 = ppuVar17;
    ppuStack_160 = ppuVar17;
    func_0x00010c0b5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1e8 = ppuVar2;
    func_0x00010bf446e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_1f0 = ppuVar2;
    ppuStack_158 = ppuVar2;
    func_0x00010c0b5f40();
    func_0x00010b767e90();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    ppuStack_1f8 = ppuVar17;
    ppuStack_150 = ppuVar17;
    func_0x00010c0b5f60();
    func_0x00010b767fb8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_200 = ppuVar2;
    ppuStack_148 = ppuVar2;
    func_0x00010c0b5f80();
    iStack_204 = (int)ppuVar17;
    if (iStack_204 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_210 = puVar16;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puStack_210 = puVar16;
    }
    puStack_140 = puStack_210;
    ppuVar2 = param_3;
    func_0x00010c0b5fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_218 = ppuVar2;
    ppuStack_138 = ppuVar2;
    func_0x00010c0b6020();
    iStack_21c = (int)ppuVar17;
    if (iStack_21c == 0) {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_228 = puVar16;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puStack_228 = puVar16;
    }
    puStack_130 = puStack_228;
    ppuVar2 = param_3;
    func_0x00010c0b6000();
    iStack_22c = (int)ppuVar2;
    if (iStack_22c == 0) {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_238 = puVar16;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puStack_238 = puVar16;
    }
    puStack_128 = puStack_238;
    ppuVar2 = param_3;
    func_0x00010c0b5fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuStack_120 = ppuVar2;
    }
    ppuVar17 = param_3;
    ppuStack_248 = ppuVar2;
    func_0x00010c0b5fc0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar17 != (undefined **)0x0) {
      ppuStack_118 = ppuVar17;
    }
    ppuVar2 = param_3;
    ppuStack_250 = ppuVar17;
    func_0x00010c0b5e60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuStack_110 = ppuVar2;
    }
    ppuVar17 = param_3;
    ppuStack_258 = ppuVar2;
    func_0x00010c0b5da0();
    iStack_264 = (int)ppuVar17;
    if (iStack_264 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_270 = puVar16;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puStack_270 = puVar16;
    }
    puStack_108 = puStack_270;
    ppuVar2 = param_3;
    func_0x00010c0b5dc0();
    iStack_274 = (int)ppuVar2;
    if (iStack_274 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_280 = puVar16;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puStack_280 = puVar16;
    }
    puStack_100 = puStack_280;
    ppuVar2 = param_3;
    func_0x00010c0b5d80();
    iStack_284 = (int)ppuVar2;
    if (iStack_284 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_290 = puVar16;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puStack_290 = puVar16;
    }
    puStack_f8 = puStack_290;
    ppuStack_f0 = ppuStack_240;
    ppuVar2 = param_3;
    func_0x00010c0b5f00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuStack_e8 = ppuVar2;
    }
    ppuStack_e0 = ppuStack_260;
    ppuVar17 = param_3;
    ppuStack_298 = ppuVar2;
    func_0x00010bf32d00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    ppuStack_2a0 = ppuVar17;
    ppuStack_d8 = ppuVar17;
    func_0x00010c106780();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2a8 = ppuVar2;
    ppuStack_d0 = ppuVar2;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110ea6c58;
    ppuVar2 = param_3;
    puStack_2b0 = puVar16;
    puStack_c8 = puVar16;
    func_0x00010bf1d0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_2b8 = ppuVar2;
    ppuStack_b8 = ppuVar2;
    func_0x00010bef0a60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    ppuStack_2c0 = ppuVar17;
    ppuStack_b0 = ppuVar17;
    func_0x00010c0884a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    ppuStack_2c8 = ppuVar2;
    ppuStack_a8 = ppuVar2;
    func_0x00010c088800();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar2 = param_3;
    ppuStack_2d0 = ppuVar17;
    ppuStack_a0 = ppuVar17;
    func_0x00010c15ac60(param_3);
    func_0x00010c0df6e0(puVar16,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    puStack_2d8 = puVar16;
    puStack_98 = puVar16;
    func_0x00010c149240();
    unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)ppuVar2 == 0) {
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar4 = param_3;
    puStack_90 = unaff_x25;
    func_0x00010c2776c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = ppuVar4;
    if (ppuVar4 == (undefined **)0x0) {
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    unaff_x21 = param_3;
    ppuStack_88 = unaff_x26;
    func_0x00010c28ea80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x21;
    if (unaff_x21 == (undefined **)0x0) {
      unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar2 = param_3;
    ppuStack_80 = unaff_x23;
    func_0x00010c0cc860();
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad20;
    if ((int)ppuVar2 == 0) {
      ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad38;
    }
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_198,0x25);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuStack_2e0;
    ppuVar2 = ppuStack_2e8;
    param_4 = unaff_x22;
    func_0x00010bf9b080();
    ppuStack_2e0 = ppuVar3;
    _objc_release(unaff_x22);
    if (unaff_x21 == (undefined **)0x0) {
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x21);
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(unaff_x26);
    }
    _objc_release(ppuVar4);
    _objc_release(unaff_x25);
    _objc_release(puStack_2d8);
    _objc_release(ppuStack_2d0);
    _objc_release(ppuStack_2c8);
    _objc_release(ppuStack_2c0);
    _objc_release(ppuStack_2b8);
    _objc_release(puStack_2b0);
    _objc_release(ppuStack_2a8);
    _objc_release(ppuStack_2a0);
    _objc_release(ppuStack_298);
    _objc_release(puStack_290);
    _objc_release(puStack_280);
    _objc_release(puStack_270);
    _objc_release(ppuStack_258);
    _objc_release(ppuStack_250);
    _objc_release(ppuStack_248);
    _objc_release(puStack_238);
    _objc_release(puStack_228);
    _objc_release(ppuStack_218);
    _objc_release(puStack_210);
    _objc_release(ppuStack_200);
    _objc_release(ppuStack_1f8);
    _objc_release(ppuStack_1f0);
    _objc_release(ppuStack_1e8);
    _objc_release(ppuStack_1e0);
    _objc_release(ppuStack_1d8);
    _objc_release(puStack_1d0);
    _objc_release(ppuStack_1c0);
    _objc_release(ppuStack_1b8);
    _objc_release(ppuStack_1b0);
    _objc_release(ppuStack_1a8);
    _objc_release(ppuStack_2e0);
    _objc_release(ppuStack_260);
    _objc_release(ppuStack_240);
    param_1 = lStack_1a0;
    _objc_sync_exit(lStack_1a0);
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined *)ppuVar17;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lStack_1a0);
  ppuVar3 = param_3;
  __Unwind_Resume();
  puStack_2f8 = &UNK_10796835c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_330 = (undefined *)ppuVar17;
  ppuStack_328 = unaff_x23;
  puStack_320 = unaff_x22;
  ppuStack_318 = unaff_x21;
  lStack_310 = param_1;
  ppuStack_308 = param_3;
  puStack_300 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar3);
  _objc_sync_enter(ppuVar3);
  if (param_4 < (undefined *)0x3) {
    ppuStack_348 = (undefined **)(&PTR_PTR_1109f1f20)[(long)param_4];
  }
  else {
    ppuStack_348 = &PTR____CFConstantStringClassReference_110e45778;
  }
  puVar12 = ppuVar3[1];
  puVar15 = ppuVar3[3];
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_340 = ppuVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_348,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  puVar6 = puVar16;
  func_0x00010bf9b080();
  _objc_release(puVar16);
  _objc_sync_exit(ppuVar3);
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_sync_exit(ppuVar3);
  ppuVar4 = ppuVar2;
  __Unwind_Resume();
  puStack_358 = &UNK_10796847c;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3a0 = unaff_x26;
  puStack_398 = unaff_x25;
  puStack_390 = (undefined *)ppuVar17;
  puStack_388 = puVar16;
  puStack_380 = puVar15;
  puStack_378 = puVar12;
  ppuStack_370 = ppuVar3;
  ppuStack_368 = ppuVar2;
  ppuStack_360 = &puStack_300;
  _objc_retain(puVar7);
  _objc_retain(param_5);
  _objc_retain(ppuVar4);
  _objc_sync_enter(ppuVar4);
  puVar12 = ppuVar4[1];
  puVar15 = ppuVar4[4];
  puVar16 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_3c0 = puVar16;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_3b8 = puVar5;
  uStack_3b0 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_3c0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b080(puVar12,param_2,puVar15,puVar6);
  uVar18 = (ulong)(puVar7 == (undefined *)0x0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar16);
  }
  _objc_sync_exit(ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_sync_exit(ppuVar4);
  puVar6 = puVar7;
  __Unwind_Resume();
  puStack_3c8 = &UNK_1079685f4;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar6;
  uStack_400 = uVar18;
  puStack_3f8 = puVar12;
  puStack_3f0 = puVar16;
  ppuStack_3e8 = ppuVar4;
  uStack_3e0 = param_5;
  puStack_3d8 = puVar7;
  pppuStack_3d0 = &ppuStack_360;
  if (*(long *)(puVar6 + 8) == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_sync_enter(puVar6);
    lVar11 = *(long *)(puVar6 + 8);
    uVar13 = *(undefined8 *)(puVar6 + 0x28);
    ppuStack_410 = &PTR____CFConstantStringClassReference_110ea6c58;
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_410,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b000(lVar11,param_2,uVar13,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    lVar10 = lVar11;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126d5828;
      _objc_alloc_init();
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6c78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c12e0(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110def758);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010b767dd8();
      func_0x00010c1c1460(puVar7,param_2,lVar9);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110e69a58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1440(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110dd3178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1220(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110db1138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1240(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110e69818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14c0(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6c98);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13e0(puVar7,param_2,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6cb8);
      func_0x00010c1c1300(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6cd8);
      func_0x00010c1c14a0(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6cf8);
      func_0x00010c1c1540(puVar7,param_2,lVar8);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar8 = lVar10;
      func_0x00010c0b4ac0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6d18);
      func_0x00010c0df7a0(puVar16,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13a0(puVar7,param_2,puVar16);
      _objc_release(puVar16);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6d38);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010b767714();
      func_0x00010c1c13c0(puVar7,param_2,lVar9);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6d58);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010b767f1c();
      func_0x00010c1c1480(puVar7,param_2,lVar9);
      _objc_release(lVar8);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar8 = lVar10;
      func_0x00010c0b4ac0(lVar10,param_2,&PTR____CFConstantStringClassReference_110e06df8);
      func_0x00010c0df7a0(puVar16,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c11c0(puVar7,param_2,puVar16);
      _objc_release(puVar16);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6d78);
      func_0x00010c1c1520(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1500(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6db8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14e0(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6dd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1360(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6df8);
      func_0x00010c1c1280(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6e18);
      func_0x00010c1c12a0(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6e38);
      func_0x00010c1c1260(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6e58);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1180(puVar7,param_2,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110e69918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1420(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110e69db8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1340(puVar7,param_2,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6e78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179d60(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfd80(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6eb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c171b80(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110e69898);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162820(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110e698b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7880(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6ed8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7ac0(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110e69838);
      func_0x00010c1fbba0(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6ef8);
      func_0x00010c1f51a0(puVar7,param_2,lVar8);
      lVar8 = lVar10;
      func_0x00010bf63a20(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6f18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c218e40(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010c25d260(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d080(puVar7,param_2,lVar8);
      _objc_release(lVar8);
      lVar8 = lVar10;
      func_0x00010bf1f2e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110ea6f58);
      func_0x00010c1c7600(puVar7,param_2,lVar8);
      puVar16 = puVar7;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_sync_exit(puVar6);
    _objc_release();
    puVar7 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return puVar16;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar7);
  __Unwind_Resume();
  puVar16 = puVar15;
  func_0x00010bdf8000();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d5850;
  _objc_alloc();
  puVar6 = puVar16;
  func_0x00010c0f5800(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar7,param_2,puVar6);
  uVar13 = *(undefined8 *)(puVar15 + 8);
  *(undefined **)(puVar15 + 8) = puVar7;
  _objc_release(uVar13);
  _objc_release(puVar6);
  uVar14 = *(undefined8 *)(puVar15 + 8);
  uVar13 = uVar14;
  func_0x00010c252980(uVar14,param_2,&PTR____CFConstantStringClassReference_110ea6f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9afc0(uVar14,param_2,uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar13);
  lVar10 = *(long *)(puVar15 + 8);
  if ((lVar10 != 0) && (func_0x00010c088a40(), (int)lVar10 != 0xe)) {
    iVar1 = (int)*(undefined8 *)(puVar15 + 8);
    func_0x00010c088a40();
    if (iVar1 != 5) {
      iVar1 = (int)*(undefined8 *)(puVar15 + 8);
      func_0x00010c088a40();
      if (iVar1 != 0xb) goto code_r0x000107968ee0;
    }
  }
  func_0x00010bf6bac0(puVar15);
  puVar7 = PTR_PTR_1126d5850;
  _objc_alloc();
  puVar6 = puVar16;
  func_0x00010c0f5800(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar7,param_2,puVar6);
  uVar13 = *(undefined8 *)(puVar15 + 8);
  *(undefined **)(puVar15 + 8) = puVar7;
  _objc_release(uVar13);
  _objc_release(puVar6);
code_r0x000107968ee0:
  uVar14 = *(undefined8 *)(puVar15 + 8);
  uVar13 = uVar14;
  func_0x00010c252980(uVar14,param_2,&PTR____CFConstantStringClassReference_110ea6f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar14,param_2,uVar13);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(puVar15 + 8);
  func_0x00010c252980(uVar13,param_2,&PTR____CFConstantStringClassReference_110ea6fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar15 + 0x10);
  *(undefined8 *)(puVar15 + 0x10) = uVar13;
  _objc_release(uVar14);
  uVar13 = *(undefined8 *)(puVar15 + 8);
  func_0x00010c252980(uVar13,param_2,&PTR____CFConstantStringClassReference_110ea6fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar15 + 0x18);
  *(undefined8 *)(puVar15 + 0x18) = uVar13;
  _objc_release(uVar14);
  uVar13 = *(undefined8 *)(puVar15 + 8);
  func_0x00010c252980(uVar13,param_2,&PTR____CFConstantStringClassReference_110ea6ff8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar15 + 0x20);
  *(undefined8 *)(puVar15 + 0x20) = uVar13;
  _objc_release(uVar14);
  uVar13 = *(undefined8 *)(puVar15 + 8);
  func_0x00010c252980(uVar13,param_2,&PTR____CFConstantStringClassReference_110ea7018);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar15 + 0x28);
  *(undefined8 *)(puVar15 + 0x28) = uVar13;
  _objc_release(uVar14);
  uVar13 = *(undefined8 *)(puVar15 + 8);
  func_0x00010c252980(uVar13,param_2,&PTR____CFConstantStringClassReference_110ea7038);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar15 + 0x30);
  *(undefined8 *)(puVar15 + 0x30) = uVar13;
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return puVar16;
}



/* Entry: 1079691c0; end: 107969363; -[SCShakeTicketUploader initWithTicket:configuration:performer:onSuccess:onTransientError:onPermanentError:] */

undefined1 *
FUN_1079691c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f8f78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = 5;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d57f0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107969758; end: 1079697b3;  */

void FUN_107969758(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be90300(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107969db4; end: 107969eb3; -[SCShakeTicketUploader _reportShakeTicketUploadInPath:] */

void FUN_107969db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0b5de0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc45e0(uVar4,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf99fe0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b5de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6c20;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b5de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3ee0(puVar3,param_2,uVar2,param_3);
  _objc_release(param_3);
  func_0x00010c0af600(uVar5,param_2,uVar1,uVar4,puVar3,
                      &PTR____CFConstantStringClassReference_110daafd8,1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10796a0e8; end: 10796a163; -[SCShakeUploadThrottleController incrementRetryForId:isInfiniteRetry:] */

long FUN_10796a0e8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  func_0x00010be75660(param_1,param_2,*(undefined8 *)(param_1 + 8),param_3,1);
  if (param_4 != 0) {
    func_0x00010be75660(param_1,param_2,*(undefined8 *)(param_1 + 0x10),param_3,4);
  }
  func_0x00010be86060(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10796a430; end: 10796a437; -[SCSnapAirConfiguration logWriter] */

undefined8 FUN_10796a430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10796a4f0; end: 10796a56b; -[SCNotificationProcessingCompletion initWithCompletion:] */

undefined1 * FUN_10796a4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8f90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10796a790; end: 10796a857; -[SCNativeNotificationProcessedEvent isEqual:] */

long FUN_10796a790(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10796a830:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10796a83c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10796a83c;
        }
        goto LAB_10796a830;
      }
    }
    lVar3 = 0;
  }
LAB_10796a83c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10796a8bc; end: 10796aa03; -[SCRemixOperaMetadata initWithReplyParameters:sourceUserId:sourceSnapId:remixPermission:sourceTrackInfo:mentionedPublicProfileId:] */

undefined1 *
FUN_10796a8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f8fb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10796abe4; end: 10796abeb; -[SCRemixOperaMetadata sourceTrackInfo] */

undefined8 FUN_10796abe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10796af00; end: 10796af0b;  */

bool FUN_10796af00(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10796b218; end: 10796b21b;  */

void FUN_10796b218(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010796d2b0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10796ba1c; end: 10796bb8b; -[SCDeepLinkingUrlInterceptor interceptURLWithRefactor:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

long FUN_10796ba1c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long in_stack_00000008;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000008);
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    func_0x00010c068f40();
    goto LAB_10796bb58;
  }
  lVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
LAB_10796bb44:
    (**(code **)(in_stack_00000008 + 0x10))(in_stack_00000008,0);
    lVar1 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c082dc0();
    if ((int)uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010beb4340();
      if ((uVar3 & 1) == 0) goto LAB_10796bb44;
      func_0x00010be29260(param_1);
    }
    else {
      func_0x00010be2aea0(param_1);
    }
    lVar1 = 1;
  }
LAB_10796bb58:
  _objc_release(in_stack_00000008);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10796c15c; end: 10796c29b; -[SCDeepLinkingUrlInterceptor _openUrl:options:completion:] */

void FUN_10796c15c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  dVar5 = *(double *)(param_2 + 0x40);
  bVar1 = true;
  bVar3 = false;
  if (0.0 < dVar5) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(dVar5)) {
      bVar1 = param_1 < dVar5;
      bVar3 = false;
    }
  }
  bVar2 = false;
  if ((bVar1 == bVar3) && (bVar2 = false, !NAN(param_1 - dVar5))) {
    bVar2 = param_1 - dVar5 < 1.0;
  }
  if (bVar2) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  else {
    *(double *)(param_2 + 0x40) = param_1;
    param_2 = param_2 + 0x28;
    _objc_loadWeakRetained(param_2);
    _objc_retain(param_6);
    func_0x00010c0e9b80(param_2);
    _objc_release(param_2);
    _objc_release(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10796c808; end: 10796c873;  */

void FUN_10796c808(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10796ced8; end: 10796cefb;  */

void FUN_10796ced8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010796cee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10796d23c; end: 10796d38f; -[SCDeepLinkingUrlInterceptor .cxx_destruct] */

void FUN_10796d23c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10796e3c4; end: 10796e85f; -[SCStoriesChromeInteractionSession _handleSubscribeButtonPressedForPage:params:shouldLogSubscribeEvent:] */

void FUN_10796e3c4(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108f2174c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010799a354(lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) goto LAB_10796e6f4;
  puVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b5bf0;
    func_0x00010c25fd00(PTR_PTR_1126b5bf0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar6 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b5bf0;
      func_0x00010c25fd00(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      goto LAB_10796e59c;
    }
    puVar7 = PTR_PTR_1126b2cf0;
    func_0x00010c260360(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    if (puVar6 == (undefined *)0x0) goto LAB_10796e6f4;
    puVar7 = PTR_PTR_1126b2cf0;
    func_0x00010c260360(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar9 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar7);
    puVar8 = puVar6;
    if (((ulong)puVar9 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar6);
    puVar7 = puVar8;
    func_0x00010c08fa60();
    if (puVar7 != (undefined *)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010bf5b7e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c080120();
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar6 = puVar8;
      goto LAB_10796e59c;
    }
  }
  else {
    puVar6 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
LAB_10796e59c:
    puVar8 = puVar7;
    _objc_release(puVar6);
    if (puVar8 == (undefined *)0x0) goto LAB_10796e6f4;
    puVar7 = puVar8;
    func_0x00010bf1f3c0(puVar8);
    puVar6 = PTR_PTR_1126d52d0;
    _objc_alloc();
    func_0x00010c006a60();
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar6;
    _objc_release(uVar10);
    _objc_initWeak(auStack_78,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_10796e860;
    puStack_90 = &UNK_11084b7a0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(lVar5);
    lStack_88 = lVar5;
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(lVar5);
    func_0x00010c260180(uVar10);
    func_0x000108f217fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b23b28(lVar5,puVar7,uVar10,*(undefined8 *)(param_1 + 0x88));
    _objc_release(uVar10);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(puVar8);
LAB_10796e6f4:
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10796efa0; end: 10796efa7;  */

void FUN_10796efa0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf25210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_businessProfilesScopeLauncher_1125a6e28);
  return;
}



/* Entry: 10796f75c; end: 10796f837;  */

void FUN_10796f75c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_10796f838;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107970484; end: 1079704cf; -[SCStoriesSharingSession dealloc] */

void FUN_107970484(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x90),param_2,param_1);
  puStack_28 = PTR_PTR_1126f8fc8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107971d50; end: 107971d97;  */

void FUN_107971d50(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1079726d0; end: 1079728a3; -[SCStoriesSharingSession _logFriendStoryOptIn:interactionContext:] */

void FUN_1079726d0(undefined *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,int param_8)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  undefined *puStack_128;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = 0x1c;
  if (param_3 == 0) {
    uVar6 = 0x1d;
  }
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar19);
  _objc_release(puVar18);
  uVar6 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR____CFConstantStringClassReference_110f41518;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_1;
  puVar18 = puVar5;
  func_0x00010bf7dbc0(uVar6);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    _objc_retain(ppuVar17);
    _objc_retain(puVar19);
    _objc_retain(puVar18);
    _objc_retain(param_6);
    _objc_retain(param_7);
    uVar7 = *(ulong *)(puVar5 + 0xb0);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c076220();
    _objc_release(uVar7);
    puVar3 = puVar19;
    if ((uVar8 & 1) == 0) {
      puVar4 = PTR_PTR_1126d5880;
      if (puVar18 == (undefined *)0x0) {
        uVar16 = *(undefined8 *)(puVar5 + 0x10);
        uVar6 = *(undefined8 *)(puVar5 + 0x28);
        func_0x00010c2923e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108539520(uVar16,uVar6);
        _objc_release(uVar6);
        if ((int)uVar16 == 0) {
          puVar18 = (undefined *)0x0;
          puVar4 = PTR_PTR_1126d5880;
        }
        else {
          puVar18 = puVar5;
          func_0x00010be1b720();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126d5880;
        }
      }
      PTR_PTR_1126d5880 = puVar4;
      if (param_8 != 0) {
        func_0x00010c08f4a0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b0380();
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010bf21f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(puVar4);
      }
      uVar6 = *(undefined8 *)(puVar5 + 0x30);
      func_0x000107972d54(uVar6,*(undefined8 *)(puVar5 + 0x10),*(undefined8 *)(puVar5 + 0xe8));
      lVar15 = param_7;
      func_0x00010bf529e0();
      if (lVar15 == 0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = PTR_PTR_1126ae6b8;
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar9 = *(undefined8 *)(puVar5 + 0x10);
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar9;
      func_0x00010bf5b3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar16;
      func_0x00010bf4de40();
      _objc_release(uVar16);
      _objc_release(uVar9);
      puStack_128 = PTR_PTR_1126b1a20;
      _objc_alloc();
      puVar4 = puVar5;
      func_0x00010bdd9d80();
      if ((int)puVar4 != 0) {
        func_0x000108faa89c(*(undefined8 *)(puVar5 + 0xe8));
      }
      if ((puVar5[0xf0] & 1) == 0) {
        func_0x00010c01d660();
      }
      else {
        puVar4 = puVar18;
        func_0x00010c26b9e0(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01d660();
        _objc_release(puVar4);
      }
      puVar11 = PTR_PTR_1126c90a0;
      _objc_alloc(PTR_PTR_1126c90a0);
      puVar4 = puVar5 + 0x40;
      _objc_loadWeakRetained(puVar4);
      puVar12 = puVar4;
      func_0x00010c22b5a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c22b620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c031ee0(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar4);
      if ((int)uVar6 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (uint)*(undefined8 *)(puVar5 + 0xe8);
        func_0x000108faa888();
      }
      if (*(long *)(puVar5 + 0xb8) == 0) {
        puVar4 = PTR_PTR_1126b1a28;
        _objc_alloc();
        func_0x00010c039180();
        uVar6 = *(undefined8 *)(puVar5 + 0xb8);
        *(undefined **)(puVar5 + 0xb8) = puVar4;
        _objc_release(uVar6);
      }
      iVar2 = (int)*(undefined8 *)(puVar5 + 0xe8);
      func_0x000108faa89c();
      if ((iVar2 != 0) && ((int)uVar10 == 1)) {
        _objc_release(puVar18);
        puVar18 = (undefined *)0x0;
      }
      puVar12 = PTR_PTR_1126b1a30;
      _objc_alloc(PTR_PTR_1126b1a30);
      func_0x00010bff5040();
      puVar4 = PTR_DAT_1126a4f48;
      _objc_retain(ppuVar17);
      ppuVar14 = ppuVar17;
      func_0x00010010fab4(ppuVar17,puVar4);
      ppuVar1 = ppuVar17;
      if (((ulong)ppuVar14 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar17);
      if (ppuVar1 == (undefined **)0x0) {
        uVar20 = 1;
      }
      if ((uVar20 & 1) == 0) {
        ppuVar14 = ppuVar17;
        func_0x00010c29e000(ppuVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9920();
        _objc_release(ppuVar14);
      }
      uVar6 = *(undefined8 *)(puVar5 + 0xb0);
      func_0x00010bfe63a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar6);
      _objc_release(ppuVar1);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puStack_128);
      _objc_release(puVar19);
    }
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar18);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar17);
    return;
  }
  return;
}



/* Entry: 10797383c; end: 107973ab3;  */

void FUN_10797383c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x30) == 1) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c2bda80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    _objc_retain(0);
    _objc_release(lVar7);
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x28);
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(lVar7 + 0x10))(lVar7,0,0);
    }
    else {
      puVar6 = PTR_PTR_1126b1c68;
      func_0x00010c29be00(PTR_PTR_1126b1c68);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar7 + 0x10))(lVar7,0,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(uVar1);
    _objc_release(uVar3);
LAB_107973a84:
    _objc_release(puVar8);
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar7 = param_3;
      func_0x00010c23fc80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (lVar2 != 0) {
        lVar7 = param_3;
        func_0x00010c23fc80(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14d040(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = *(long *)(param_1 + 0x28);
        puVar5 = PTR_PTR_1126b1c68;
        func_0x00010bfe94e0(PTR_PTR_1126b1c68);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar7 + 0x10))(lVar7,0,puVar5);
        _objc_release(puVar5);
        goto LAB_107973a84;
      }
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_4,0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079749a8; end: 107974a9b;  */

void FUN_1079749a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 107974f9c; end: 1079750ff; -[SCStoriesSharingSession _fetchFriendScore] */

void FUN_107974f9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = auStack_48;
    _objc_initWeak(puVar3,param_1);
    func_0x000108f22a9c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar2);
    func_0x00010bfb8aa0(puVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1079757ec; end: 107975833;  */

void FUN_1079757ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9f880(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    func_0x00010bdfd560(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079769c4; end: 107976dd3; -[SCStoriesSharingSession _sendStoryShareToSortedRecipients:additionalText:destinationInfo:sendToSessionId:storyPosterSnapchatter:] */

void FUN_1079769c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_107976dd4;
  puStack_88 = &UNK_110841f20;
  _objc_retain();
  ppuVar2 = &puStack_a0;
  uStack_80 = uVar1;
  _objc_retainBlock(ppuVar2);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  puStack_b8 = &UNK_107973530;
  puStack_b0 = &UNK_107973540;
  uStack_a8 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf0e700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0c1320(uVar3);
  _objc_release(uVar3);
  lVar4 = puStack_c8[5];
  if (lVar4 == 0) {
    uVar3 = param_5;
    func_0x000108605098(param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puStack_c8[5];
    puStack_c8[5] = uVar3;
    _objc_release(uVar7);
    lVar4 = puStack_c8[5];
  }
  func_0x00010c15d860();
  if (lVar4 == 0) {
    puVar5 = PTR_PTR_1126b1a40;
    func_0x00010c0fe200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8280();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_c8[5];
    puStack_c8[5] = puVar6;
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    puVar5 = PTR_PTR_1126b1a40;
    func_0x00010c0fe200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8220();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_c8[5];
    puStack_c8[5] = puVar6;
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = puStack_c8[5];
    func_0x000108604db4(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bea07e0(param_1);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107977924; end: 10797793f;  */

void FUN_107977924(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107977938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 107978668; end: 10797899f; -[SCStoriesSharingSession _shareLinkForUsername:inCell:] */

void FUN_107978668(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **unaff_x28;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010c1beb60(param_4);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c07f8c0();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c14cde0();
    _objc_release();
    iVar1 = (int)puVar4;
    func_0x0001008522a8();
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc40();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc60();
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126aeb08;
    _objc_alloc(PTR_PTR_1126aeb08);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0f80(puVar4);
    _objc_release(puVar7);
    uStack_88 = *(undefined8 *)PTR__UIActivityTypeAddToReadingList_110345978;
    uStack_80 = *(undefined8 *)PTR__UIActivityTypeAssignToContact_110345988;
    uStack_78 = *(undefined8 *)PTR__UIActivityTypePrint_1103459e8;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197fe0(puVar4);
    _objc_initWeak(auStack_90,param_1);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &UNK_1079789a0;
    puStack_b0 = &UNK_110993210;
    uStack_98 = SUB81(puVar5,0);
    unaff_x28 = &puStack_c8;
    puStack_a0 = puVar6;
    _objc_copyWeak(auStack_a8,auStack_90);
    func_0x00010c17fc60(puVar4);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  lVar8 = param_3;
  func_0x0001008522a8();
  if ((int)lVar8 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar2);
  }
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c22a860(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be004e0(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107979414; end: 10797941b;  */

void FUN_107979414(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fb4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_photoPermissionCoordinator_11261c750);
  return;
}



/* Entry: 107979708; end: 10797975b;  */

void FUN_107979708(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  if (param_2 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  return;
}



/* Entry: 107979a10; end: 107979a47;  */

void FUN_107979a10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyShareSender_112674660);
  return;
}



/* Entry: 107979b44; end: 107979b4b; -[SCDiscoverFriendStoryTileTapPrecomputedContext setUpNextFallbackStories:] */

void FUN_107979b44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10797a898; end: 10797a9cb;  */

void FUN_10797a898(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_2;
    _objc_release(uVar2);
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        func_0x00010bdd2100(param_1);
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
  }
  _objc_retain(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10797c2d0; end: 10797c3db;  */

void FUN_10797c2d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5ed80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11f7a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00080(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0b3ae0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c084b00(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf9b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7d6e0(lVar2,param_2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10797c748; end: 10797c823; -[SCDiscoverFeedActionHandler _setTransitionModeToUpdateWithTranistionModeDetectionType:baseView:presentingConfig:] */

void FUN_10797c748(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double in_d3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 1) {
    if (param_4 == 0) goto LAB_10797c7fc;
    func_0x00010bfb68e0(param_4);
    dVar3 = 0.5;
    lVar1 = param_4;
    func_0x00010c08c0e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    _objc_release(lVar1);
    uVar2 = 4;
    if (in_d3 * 0.5 == dVar3) {
      uVar2 = 1;
    }
  }
  else {
    if (param_3 != 0) goto LAB_10797c804;
    lVar1 = param_5;
    func_0x00010c0d6c60();
    if (lVar1 == 1) {
      *(undefined8 *)(param_1 + 0x138) = 3;
    }
    lVar1 = param_5;
    func_0x00010c27aa00();
    if (lVar1 == 1) goto LAB_10797c804;
LAB_10797c7fc:
    uVar2 = 4;
  }
  *(undefined8 *)(param_1 + 0x138) = uVar2;
LAB_10797c804:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10797d470; end: 10797d52b; -[SCDiscoverFeedActionHandler _updatedDiscoverFeedFriendStorySessionWithGroupDataModel:] */

void FUN_10797d470(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = param_3;
    func_0x000108535b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126d58b0;
      func_0x00010bfb8f20(PTR_PTR_1126d58b0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10797d95c; end: 10797d973; -[SCDiscoverFeedActionHandler _isVerticalVOperaSwipeLeftToAttachmentEnabledForFeedType:] */

undefined8 FUN_10797d95c(void)

{
  func_0x00010be45660();
  return 0;
}



/* Entry: 10797dc80; end: 10797dcc7;  */

void FUN_10797dc80(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30240();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10797e940; end: 10797e9ab;  */

void FUN_10797e940(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be745e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10797f530; end: 10797fc03; -[SCDiscoverFeedActionHandler _playFriendStoryWithFirstStory:rankedFriendSummaryData:allFriendStories:allFriendAndNonfriendStories:actionModel:baseView:actionIdentifier:interactionContext:exitOperaOffsetArray:precomputedContext:] */

void FUN_10797f530(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lStack_118;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  long alStack_70 [2];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bdd9d60();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf95660(puVar1);
    _objc_release(puVar1);
    lStack_118 = param_4;
  }
  else {
    func_0x00010bf18ba0(puVar1);
    _objc_release(puVar1);
    if (param_12 == 0) {
      alStack_70[0] = param_4;
      func_0x00010797ef8c((long)*(int *)(param_1 + 0x160),param_3,alStack_70,param_7,0);
      lStack_118 = alStack_70[0];
      _objc_retain();
    }
    else {
      lStack_118 = param_12;
      func_0x00010c28d560();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_4);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    lVar3 = param_7;
    func_0x00010c084b00();
    uVar4 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be62540(param_1);
    puVar1 = PTR_PTR_1126b2400;
    _objc_alloc();
    func_0x00010be456e0();
    func_0x00010be456c0();
    func_0x00010c018aa0(0);
    *(bool *)(param_1 + 0x164) = lVar3 == 3;
    uVar5 = param_5;
    func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_1109f2780);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    _objc_release(uVar10);
    _objc_retain(param_11);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = param_11;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126d58b0;
    func_0x00010bfb8f20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar6;
    _objc_release(uVar5);
    func_0x00010bfddf20(param_3);
    func_0x00010be30ce0(param_1);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar6);
    if (param_12 == 0) {
      lVar8 = *(long *)(param_1 + 400);
      func_0x00010c283100();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = param_12;
      func_0x00010c283000(param_12);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107d00798();
      _objc_release(lVar8);
      lVar7 = param_12;
      func_0x00010c283000();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x000107af933c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bf67ac0();
    lVar7 = lVar8;
    func_0x00010799b108(lVar8,uVar5,0,*(undefined8 *)(param_1 + 0x158),0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(uVar10);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    func_0x00010799ad20(0,lVar7,0,uVar5,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar6);
    lVar8 = lVar7;
    func_0x00010797fc0c(lVar7,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0xf0),
                        *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x148),
                        *(undefined8 *)(param_1 + 0x208));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = lVar8;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf18ba0();
    _objc_release(puVar6);
    _objc_initWeak(auStack_78,param_1);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    puStack_e0 = &UNK_10797fd54;
    puStack_d8 = &UNK_1109f27a0;
    _objc_copyWeak(auStack_98,auStack_78);
    _objc_retain(uVar10);
    uStack_d0 = uVar10;
    _objc_retain(param_7);
    lStack_c8 = param_7;
    _objc_retain(param_8);
    uStack_c0 = param_8;
    _objc_retain(lStack_118);
    lStack_b8 = lStack_118;
    _objc_retain(lVar7);
    lStack_b0 = lVar7;
    _objc_retain(param_3);
    uStack_a8 = param_3;
    uStack_80 = lVar3 == 3;
    _objc_retain(param_9);
    uStack_a0 = param_9;
    uStack_90 = param_10;
    puStack_88 = puVar9;
    func_0x00010799a7dc(param_3,lStack_118,puVar1,uVar10,&puStack_f0);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar6);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(lStack_b0);
    _objc_release(lStack_b8);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar10);
    _objc_release(lVar7);
    _objc_release(puVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lStack_118);
  _objc_release(param_3);
  return;
}



/* Entry: 1079809ec; end: 1079810e3; -[SCDiscoverFeedActionHandler _playNonMomentsCheetahNotificationStory:withBaseView:storyLoggingFieldsOverrideDict:feedType:actionIdentifier:feedItemSource:triggeringSection:] */

void FUN_1079809ec(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = *(undefined **)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf52680();
    func_0x000107b018f8(3,puVar2,*(undefined8 *)(param_1 + 0x1a0));
    _objc_release(puVar3);
    goto LAB_107981088;
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_6;
  func_0x00010c067ec0();
  puVar6 = PTR_PTR_1126b1118;
  _objc_alloc();
  lVar7 = lVar5;
  func_0x000108f53fe8(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043160();
  _objc_release(lVar7);
  iVar1 = (int)*(undefined8 *)(param_1 + 400);
  func_0x00010c230260();
  puVar8 = PTR_PTR_1126d58b0;
  func_0x00010bf82160();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar8;
  _objc_release(uVar15);
  puVar8 = PTR_PTR_1126d58c0;
  _objc_alloc();
  func_0x00010c01db20();
  uVar15 = *(undefined8 *)(param_1 + 0x140);
  *(undefined **)(param_1 + 0x140) = puVar8;
  _objc_release(uVar15);
  puVar8 = param_3;
  if (iVar1 == 0) {
    if (param_6 != 0) {
      puVar11 = *(undefined **)(param_1 + 400);
      func_0x00010bfc0360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010799ad20(param_3,puVar11,puVar3,uVar15,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar11;
      goto LAB_107980e58;
    }
  }
  else {
    puVar11 = puVar4;
    if ((int)lVar5 == 2) {
      uVar9 = *(undefined8 *)(param_1 + 0x188);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar9;
      func_0x00010c2830e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar15;
      func_0x00010c25fb40();
      _objc_release(uVar15);
      _objc_release(uVar9);
      if ((int)uVar14 != 1) {
        puVar10 = *(undefined **)(param_1 + 400);
        func_0x00010bfc0360();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        if ((int)uVar14 == 0) {
          _objc_retain();
        }
        else {
          func_0x00010bf529e0();
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
        _objc_release(puVar10);
      }
    }
    uVar15 = *(undefined8 *)(param_1 + 400);
    func_0x00010c283100(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed2340(param_1);
    puVar10 = puVar11;
    func_0x000100504554(puVar11,&PTR___NSConcreteGlobalBlock_1109f27f0);
    puVar4 = puVar11;
    func_0x00010bfb1920(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be488a0(param_1);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar4);
    puVar4 = puVar11;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    uVar14 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010799ad20(param_3,puVar4,puVar3,uVar14,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar14);
    puVar2 = puVar8;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar8;
      func_0x00010bf529e0();
      puVar2 = puVar2 + -1;
    }
    *(undefined **)(param_1 + 0x1e0) = puVar2;
    puVar2 = puVar10;
LAB_107980e58:
    _objc_release(puVar2);
    _objc_release(uVar15);
    puVar2 = puVar8;
  }
  puVar8 = puVar2;
  func_0x00010bfecde0();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc0000000;
  puStack_98 = &UNK_10799b018;
  puStack_90 = &UNK_1109f2f90;
  uStack_88 = 0;
  puVar11 = puVar2;
  func_0x00010bd86420(puVar2,&puStack_a8);
  _objc_release(puVar2);
  puVar10 = puVar3;
  if (puVar8 != (undefined *)0x7fffffffffffffff) {
    puVar10 = puVar11;
    func_0x00010c0dfd40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  uVar15 = *(undefined8 *)(param_1 + 0xc0);
  uVar14 = *(undefined8 *)(param_1 + 0x108);
  uVar9 = *(undefined8 *)(param_1 + 0x188);
  _objc_retain(uVar15);
  _objc_retain(uVar14);
  _objc_retain(uVar9);
  puVar3 = puVar4;
  func_0x0001006372a4(puVar4,&PTR___NSConcreteGlobalBlock_1109f2a70);
  puVar2 = PTR_PTR_1126c6988;
  _objc_alloc();
  func_0x00010c00cf80();
  _objc_release(uVar9);
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_release(puVar3);
  uVar15 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar2;
  _objc_release(uVar15);
  puVar3 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be62540();
  func_0x00010be78160(param_1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf52680();
  func_0x000107b018f8(0,puVar2,*(undefined8 *)(param_1 + 0x1a0));
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar10);
LAB_107981088:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf454e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107982404; end: 107982423;  */

void FUN_107982404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10797c980;
  puStack_30 = &UNK_10797c990;
  uStack_28 = 0;
  func_0x00010c0bdf60(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107982c84; end: 107982d87;  */

void FUN_107982c84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010799a5f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar4 = param_2;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(lVar2);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(long *)(lVar5 + 0x28) = lVar2;
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107983534; end: 107983c53; -[SCDiscoverFeedActionHandler _announceActionWithActionModel:cheetahStory:sectionKey:interactionContext:actionIdentifier:] */

void FUN_107983534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x000107cb7370();
  if ((int)uVar2 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1079836c0;
    puStack_88 = &UNK_1109f29e0;
    _objc_retain(param_7);
    uStack_80 = param_7;
    _objc_retain(param_3);
    uStack_78 = param_3;
    lStack_70 = param_1;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_4);
    uStack_60 = param_4;
    uStack_58 = param_6;
    func_0x0001079836c0(&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f41518,param_1,
                        ppuVar1);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107984130; end: 107984133; -[SCDiscoverFeedActionHandler contextOperaPluginWillDismiss:] */

void FUN_107984130(void)

{
  return;
}



/* Entry: 107984b7c; end: 107984cff; -[SCDiscoverFeedActionHandler operaPresenterDidTearDown:] */

void FUN_107984b7c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
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
  
  puVar15 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be6dd20();
  func_0x00010bddf8a0(param_1);
  lVar13 = param_1 + 0x260;
  _objc_loadWeakRetained();
  func_0x00010c0eb3c0();
  _objc_release(lVar13);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar16 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar16);
  puVar9 = auStack_e8;
  lVar13 = lVar16;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar19 = *plStack_120;
    do {
      puVar12 = PTR_s_operaPresenterDidTearDown_1126185d8;
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(lVar16);
        }
        puVar4 = PTR_DAT_1126a4e80;
        uVar17 = *(ulong *)(lStack_128 + lVar21 * 8);
        _objc_retain(uVar17);
        uVar5 = uVar17;
        func_0x00010010fab4(uVar17,puVar4);
        uVar1 = uVar17;
        if ((int)uVar5 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar17);
        if ((uVar1 != 0) &&
           (uVar5 = uVar17, _objc_opt_respondsToSelector(uVar17,puVar12), (uVar5 & 1) != 0)) {
          func_0x00010c0eaf00(uVar17);
        }
        _objc_release(uVar1);
        lVar21 = lVar21 + 1;
      } while (lVar13 != lVar21);
      puVar9 = auStack_e8;
      lVar13 = lVar16;
      puVar15 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(puVar9);
  puVar6 = (undefined1 *)puVar15;
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6f20(lVar16);
  uVar18 = *(undefined8 *)(lVar16 + 0xa0);
  uVar20 = *(undefined8 *)(lVar16 + 0x248);
  uVar3 = *(undefined1 *)(lVar16 + 0x150);
  uVar14 = *(undefined8 *)(lVar16 + 0x88);
  uVar2 = *(undefined8 *)(lVar16 + 0x90);
  uVar7 = *(undefined8 *)(lVar16 + 0x188);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c231d40();
  func_0x00010798dab4(uVar18,0,uVar20,uVar14,uVar3,0,uVar2,uVar8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  lVar19 = *(long *)(lVar16 + 0xa0);
  func_0x000107af901c();
  lVar13 = lVar16 + 0x250;
  _objc_loadWeakRetained(lVar13);
  func_0x00010bf7bf00();
  _objc_release(puVar9);
  _objc_release(lVar13);
  lVar13 = lVar16;
  func_0x00010be411a0();
  if ((int)lVar13 == 0) {
    puVar9 = (undefined1 *)puVar15;
    if (lVar19 == 0xf7) {
      func_0x00010c27a6a0(puVar15);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar19 == 5) {
      func_0x00010c27a6a0(puVar15);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar19 != 2) goto code_r0x000107984f04;
      uVar14 = *(undefined8 *)(lVar16 + 0x188);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b1270;
      func_0x00010bf71a60(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f320();
      _objc_release(puVar12);
      _objc_release(uVar14);
      func_0x00010c27a6a0(puVar15);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c28b4e0();
  }
  else {
    puVar9 = *(undefined1 **)(lVar16 + 0x188);
    func_0x00010c269d40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0ced60();
    puVar11 = puVar6;
    func_0x000107982d88(puVar6,puVar10);
    *(undefined1 **)(lVar16 + 0x138) = puVar11;
  }
  _objc_release(puVar9);
code_r0x000107984f04:
  lVar13 = *(long *)(lVar16 + 0x1c8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 != 0) {
    puVar12 = PTR_PTR_1126c2d60;
    func_0x00010c0f27c0(PTR_PTR_1126c2d60);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(lVar16 + 0x1d8);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar14);
    _objc_release(puVar12);
  }
  _objc_release(uVar18);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 107985418; end: 10798541b; -[SCDiscoverFeedActionHandler playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_107985418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishDismissin_1126185b0);
  return;
}



/* Entry: 1079857c0; end: 107985957; -[SCDiscoverFeedActionHandler cancelPresentation] */

void FUN_1079857c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar12;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar13;
  long unaff_x25;
  long unaff_x26;
  long lVar14;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = (int)*(undefined8 *)(param_1 + 0x280);
  func_0x00010c07ab40();
  if (iVar3 != 0) {
    func_0x00010bf84cc0(*(undefined8 *)(param_1 + 0x280));
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x27 = &PTR_s_canStopEditingCaption__1125a9000;
    unaff_x28 = &PTR_DAT_1126a4000;
    do {
      unaff_x21 = PTR_s_isPresenting_1125fc4e0;
      unaff_x22 = PTR_s_cancelPresentation_1125a9470;
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar11);
        }
        puVar2 = PTR_DAT_1126a4e80;
        unaff_x24 = *(ulong *)(lStack_128 + unaff_x26 * 8);
        _objc_retain(unaff_x24);
        uVar5 = unaff_x24;
        func_0x00010010fab4(unaff_x24,puVar2);
        unaff_x23 = unaff_x24;
        if ((int)uVar5 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x24);
        uVar5 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x21);
        if ((((uVar5 & 1) != 0) && (uVar5 = unaff_x23, func_0x00010c07ab40(), (int)uVar5 != 0)) &&
           (uVar5 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22), (uVar5 & 1) != 0))
        {
          func_0x00010bf2eb20(unaff_x23);
        }
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x26 + 1;
      } while (lVar4 != unaff_x26);
      lVar4 = lVar11;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x20 = 0;
    } while (lVar4 != 0);
  }
  lVar4 = lVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_260;
  puStack_138 = &UNK_107985958;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  uStack_150 = unaff_x20;
  lStack_148 = lVar11;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_storeWeak(lVar4 + 0x238,puVar7);
  uVar15 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar11 = *(long *)(lVar4 + 0x28);
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar13 = *plStack_250;
    do {
      lVar14 = 0;
      do {
        if (*plStack_250 != lVar13) {
          _objc_enumerationMutation(lVar11);
        }
        puVar2 = PTR_DAT_1126a4e80;
        lVar12 = *(long *)(lStack_258 + lVar14 * 8);
        _objc_retain(lVar12);
        lVar6 = lVar12;
        func_0x00010010fab4(lVar12,puVar2);
        lVar1 = lVar12;
        if ((int)lVar6 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar12);
        if (lVar1 != 0) {
          func_0x00010c1e1580(lVar12);
        }
        _objc_release(lVar1);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar11;
      puVar10 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  if ((*(byte *)((long)puVar7 + 0x164) & 1) == 0) {
    if (puVar10 == (undefined8 *)0x0) {
      puVar8 = (undefined1 *)((long)puVar7 + 0x238);
      _objc_loadWeakRetained(puVar8);
      puVar9 = puVar8;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxY();
      uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010bc8525c(uVar16,uVar17,uVar18,uVar19,uVar15);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c283ba0(*(undefined8 *)((long)puVar7 + 0x280));
      func_0x00010c283c00(uVar16,uVar17,uVar18,uVar19,*(undefined8 *)((long)puVar7 + 0x280));
    }
    else {
      func_0x00010c283ba0(*(undefined8 *)((long)puVar7 + 0x280));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 107985c30; end: 107985c3f; -[SCDiscoverFeedActionHandler operaModalDismissalDidEnd] */

void FUN_107985c30(long param_1)

{
  if (*(long *)(param_1 + 0x280) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0cfa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x280),PTR_s_modalDismissalDidEnd_1126118b0);
    return;
  }
  return;
}



/* Entry: 1079861f0; end: 10798622f; -[SCDiscoverFeedActionHandler _updateCurrentPlaylistWithStories:] */

void FUN_1079861f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109f2a30);
  func_0x00010befa160(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079863bc; end: 1079863eb; -[SCDiscoverFeedActionHandler setStoryPositionProvider:] */

void FUN_1079863bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10798644c; end: 107986453; -[SCDiscoverFeedActionHandler setShouldHandleAction:] */

void FUN_10798644c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x230) = param_3;
  return;
}



/* Entry: 1079864a0; end: 1079864a7; -[SCDiscoverFeedActionHandler operaPresenter] */

undefined8 FUN_1079864a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 10798694c; end: 107986a47;  */

void FUN_10798694c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c071ae0();
    uVar1 = (undefined1)uVar2;
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(lVar5 + 0x18) = uVar1;
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010799aa9c(uVar3,param_2);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar4 = (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  }
  else {
    uVar4 = 1;
  }
  if (((uint)uVar3 & uVar4) == 1) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') &&
     (0 < *(long *)(param_1 + 0x40))) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(ulong *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) - (uVar3 & 0xffffffff);
    *(bool *)param_4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) < 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107987dd8; end: 1079884d7; -[SCDiscoverFeedActionSheetActionHandler _sendCheetahHideRequestWithStoryDedupeFp:] */

void FUN_107987dd8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **unaff_x26;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bec51c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (puVar1 != (undefined *)0x0) {
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110ea8b98;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ea8c18;
    puVar9 = *(undefined **)(param_1 + 0x18);
    puVar2 = puVar9;
    puStack_90 = puVar7;
    if (puVar9 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar9 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(puVar7);
    uVar5 = *(undefined8 *)(param_1 + 0x178);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c0e00;
    func_0x00010c0d7580(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf1f320();
    _objc_release(puVar7);
    _objc_release(uVar5);
    if ((int)uVar8 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = param_1;
      func_0x00010bdf5f80();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar7;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar4);
      puVar2 = puVar1;
      func_0x00010c23c720();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar9);
      }
      else {
        func_0x00010c1d0640(puVar4);
      }
      _objc_release(puVar2);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar8);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c25b720();
    if ((((puVar2 == (undefined *)0x3) ||
         (puVar2 = puVar1, func_0x00010c25b720(), puVar2 == (undefined *)0xe)) ||
        (puVar2 = puVar1, func_0x00010c25b720(), puVar2 == (undefined *)0x2)) ||
       (puVar2 = puVar1, func_0x00010c25b720(), puVar2 == (undefined *)0xb)) {
      puVar2 = puVar1;
      func_0x00010c25b720();
      if (puVar2 == (undefined *)0x3) {
        puVar2 = puVar1;
        func_0x00010c259560(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = puVar9;
        func_0x00010c2923e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar2 = puVar1;
        func_0x00010c25b720();
        if (puVar2 == (undefined *)0xe) {
          puVar2 = puVar1;
          func_0x00010c259560(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar2;
          func_0x00010afefd10();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = puVar9;
          func_0x00010c2923e0(puVar9);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar2 = puVar1;
          func_0x00010c25b720();
          puVar3 = puVar1;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          if (puVar2 == (undefined *)0x2) {
            func_0x00010afef61c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar3 = puVar9;
            func_0x00010c11af80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11b1e0();
            func_0x00010c14de00(puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
          }
          else {
            func_0x00010afefbe8();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar3 = puVar9;
            func_0x00010c11af80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11b1e0();
            func_0x00010c14de00(puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
          }
        }
      }
      _objc_release(puVar9);
      _objc_initWeak(auStack_a8,param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b4028;
      func_0x00010bf81680(PTR_PTR_1126b4028);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      puStack_c8 = &UNK_1079884d8;
      puStack_c0 = &UNK_110841fb0;
      _objc_copyWeak(auStack_b0,auStack_a8);
      _objc_retain(puVar1);
      unaff_x26 = (undefined **)PTR___dispatch_main_q_11034be20;
      puStack_b8 = puVar1;
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_108 = puVar9;
      uStack_100 = 0xc2000000;
      puStack_f8 = &UNK_107988510;
      puStack_f0 = &UNK_11085aad8;
      _objc_copyWeak(auStack_e0,auStack_a8);
      _objc_retain(puVar1);
      puStack_e8 = puVar1;
      func_0x00010c0f9280(uVar8);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar3);
      _objc_release(uVar8);
      _objc_release(puStack_e8);
      _objc_destroyWeak(auStack_e0);
      _objc_release(puStack_b8);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a8);
      _objc_release(puVar2);
    }
    else {
      _objc_initWeak(auStack_a8,param_1);
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      puStack_128 = &UNK_107988548;
      puStack_120 = &UNK_110859c28;
      unaff_x26 = &puStack_138;
      _objc_copyWeak(auStack_110,auStack_a8);
      _objc_retain(puVar1);
      ppuVar6 = &puStack_138;
      puStack_118 = puVar1;
      _objc_retainBlock(ppuVar6);
      uVar10 = *(undefined8 *)(param_1 + 0x148);
      uVar8 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa48e0(uVar10);
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(ppuVar6);
      _objc_release(puStack_118);
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_a8);
    }
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x26 + 5);
    _objc_destroyWeak(auStack_a8);
    __Unwind_Resume();
    puVar1 = puVar1 + 0x28;
    _objc_loadWeakRetained(puVar1);
    func_0x00010be2a7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1079888cc; end: 1079889f3; -[SCDiscoverFeedActionSheetActionHandler _removeStoryFromDataStore:] */

void FUN_1079888cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e600(uVar8);
  _objc_release(puVar1);
  _objc_release(uVar8);
  lVar2 = *(long *)(param_1 + 0xe8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x000107bfa524();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = lVar3;
  func_0x00010c2864e0(lVar2);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010c259740();
  lVar7 = lVar6;
  func_0x00010bf60240();
  if (1 < lVar7 - 1U) {
    lVar4 = lVar2;
    func_0x00010bec51c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      uVar8 = 1;
      if (lVar7 == 3) {
        uVar8 = 2;
      }
      _objc_initWeak(auStack_b8,lVar2);
      uVar5 = *(undefined8 *)(lVar2 + 0xf0);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___dispatch_main_q_11034be20;
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      puStack_e8 = &UNK_107988bfc;
      puStack_e0 = &UNK_1109f2b60;
      _objc_copyWeak(auStack_d0,auStack_b8);
      lStack_c8 = lVar3;
      uStack_c0 = uVar8;
      _objc_retain(lVar6);
      lStack_d8 = lVar6;
      _objc_copyWeak(auStack_110,auStack_b8);
      lStack_108 = lVar3;
      uStack_100 = uVar8;
      _objc_retain(lVar6);
      func_0x00010c28a500(uVar5);
      _objc_release(puVar1);
      _objc_release(puVar1);
      _objc_release(uVar5);
      _objc_release(lVar6);
      _objc_destroyWeak(auStack_110);
      _objc_release(lStack_d8);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_b8);
      func_0x00010c28a540(*(undefined8 *)(lVar2 + 0x40));
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar6);
  return;
}



/* Entry: 107989468; end: 1079894a3;  */

void FUN_107989468(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079897a4; end: 1079897a7; -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerTappedExportURL] */

void FUN_1079897a4(void)

{
  return;
}



/* Entry: 107989bd0; end: 107989ce3; -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentRelatedAccountsViewController:sourceView:] */

void FUN_107989bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10798a6a8; end: 10798a6df;  */

void FUN_10798a6a8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


