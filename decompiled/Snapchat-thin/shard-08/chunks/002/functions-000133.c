/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e4f7fc; end: 105e4f8d3; -[SCTopicSendToSelectedTopicsCollectionViewController presentTopicSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4f7fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + _DAT_112737fe4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_112738018;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c275620(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e4f8d4;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e4f8d4; end: 105e4f903;  */

void FUN_105e4f8d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4f904; end: 105e4f9db; -[SCTopicSendToSelectedTopicsCollectionViewController presentPlaceSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4f904(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + _DAT_112737fe4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_112738018;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c275620(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e4f9dc;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e4f9dc; end: 105e4fa0b;  */

void FUN_105e4f9dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4fa0c; end: 105e4fb77; -[SCTopicSendToSelectedTopicsCollectionViewController _presentTopicOrPlaceSearchWithContainerFrame:showPlaceSearchView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_5 + _DAT_112737ff4) - 1U < 2) {
    uVar1 = 1;
    if (param_7 != 0) {
      uVar1 = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010becce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_5,PTR_s__togglePlaceAndTopicSearchForVie_112590d30,uVar1);
    return;
  }
  puVar2 = PTR_PTR_1126c5258;
  _objc_alloc(PTR_PTR_1126c5258);
  func_0x00010c002760(param_1,param_2,param_3,param_4);
  func_0x00010c073920(param_5);
  func_0x00010c1b1340(puVar2);
  func_0x00010c1c8c00(puVar2);
  func_0x00010c1c8b80(puVar2);
  func_0x00010bf0c980(*(undefined8 *)(param_5 + _DAT_112737fcc));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105e4fb78; end: 105e4fc4b; -[SCTopicSendToSelectedTopicsCollectionViewController _togglePlaceAndTopicSearchForViewMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fb78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737ff4;
  if (*(long *)(param_1 + lVar3) != param_3) {
    lVar2 = (long)_DAT_112737fd8;
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      *(long *)(param_1 + lVar3) = param_3;
      func_0x00010c28bf20(*(undefined8 *)(param_1 + _DAT_112737fc8),param_2,param_3);
      if (param_3 == 1) {
        param_1 = param_1 + lVar2;
        _objc_loadWeakRetained(param_1);
        func_0x00010c153340();
      }
      else {
        if (param_3 != 2) {
          return;
        }
        param_1 = param_1 + lVar2;
        _objc_loadWeakRetained(param_1);
        func_0x00010c153de0();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 105e4fc4c; end: 105e4fcbf; -[SCTopicSendToSelectedTopicsCollectionViewController unselectCommunity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fc4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112737fe4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c275600();
  _objc_release(lVar1);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_112737fcc),param_2,0);
  param_1 = param_1 + _DAT_112737fe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c286ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4fcc0; end: 105e4fd7b; -[SCTopicSendToSelectedTopicsCollectionViewController handleDidTapBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fcc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  if (*(long *)(param_1 + _DAT_112737ff4) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737fd0);
  uVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0140(uVar3,param_2,param_1,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e4fd7c; end: 105e4fddb; -[SCTopicSendToSelectedTopicsCollectionViewController dismissTopicSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fd7c(long param_1)

{
  long lVar1;
  
  func_0x00010c0dd3e0(*(undefined8 *)(param_1 + _DAT_112737fc4));
  lVar1 = param_1 + _DAT_112737fe4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c275600();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737fcc),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105e4fddc; end: 105e4fe0f; -[SCTopicSendToSelectedTopicsCollectionViewController topicsUpdated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fddc(long param_1)

{
  param_1 = param_1 + _DAT_112737fe4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c275b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4fe10; end: 105e4fe2f; -[SCTopicSendToSelectedTopicsCollectionViewController containerCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fe10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112738018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e4fe30; end: 105e4fe43; -[SCTopicSendToSelectedTopicsCollectionViewController setContainerCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fe30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112738018,param_3);
  return;
}



/* Entry: 105e4fe44; end: 105e4fe53; -[SCTopicSendToSelectedTopicsCollectionViewController isFriendsOnlyProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105e4fe44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112737fc0);
}



/* Entry: 105e4fe54; end: 105e4fe63; -[SCTopicSendToSelectedTopicsCollectionViewController setIsFriendsOnlyProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fe54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112737fc0) = param_3;
  return;
}



/* Entry: 105e4fe64; end: 105e4ff7f; -[SCTopicSendToSelectedTopicsCollectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4fe64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738018);
  _objc_storeStrong(param_1 + _DAT_112738010,0);
  _objc_storeStrong(param_1 + _DAT_112738008,0);
  _objc_storeStrong(param_1 + _DAT_112738004,0);
  _objc_storeStrong(param_1 + _DAT_112738000,0);
  _objc_storeStrong(param_1 + _DAT_112737ffc,0);
  _objc_storeStrong(param_1 + _DAT_112737ff8,0);
  _objc_destroyWeak(param_1 + _DAT_112737fe0);
  _objc_destroyWeak(param_1 + _DAT_112737fe4);
  _objc_destroyWeak(param_1 + _DAT_112737fdc);
  _objc_destroyWeak(param_1 + _DAT_112737fd8);
  _objc_storeStrong(param_1 + _DAT_112737fcc,0);
  _objc_storeStrong(param_1 + _DAT_112737fd0,0);
  _objc_storeStrong(param_1 + _DAT_112737fd4,0);
  _objc_storeStrong(param_1 + _DAT_112737fc4,0);
  _objc_storeStrong(param_1 + _DAT_112737fc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738014,0);
  return;
}



/* Entry: 105e4ff80; end: 105e4ff87; -[SCTopicsCollectionViewFlowLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_105e4ff80(void)

{
  return 1;
}



/* Entry: 105e4ff88; end: 105e50323; -[SCTopicSendToSuggestedTopicCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105e4ff88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  puStack_88 = PTR_PTR_1126ed510;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_11273801c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar4);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar5 = (long)_DAT_112738020;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_112738024;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_112738028;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar5 = (long)_DAT_11273802c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010b816670();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112738030) = uVar8;
    func_0x00010beabac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e50324; end: 105e50b03; -[SCTopicSendToSuggestedTopicCollectionViewCell _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e50324(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined8 uVar59;
  undefined *puVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  undefined *puVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  
  puVar64 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar61 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar62 = (long)_DAT_11273801c;
  lVar1 = *(long *)(param_1 + lVar62);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar67;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = (long)_DAT_112738020;
  uVar15 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = (long)_DAT_112738024;
  uVar25 = *(undefined8 *)(param_1 + lVar65);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar65);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar28;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar65);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_112738028;
  uVar34 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar65);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar34;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar37;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar40;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar43;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = (long)_DAT_11273802c;
  uVar46 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar46;
  func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_112738030));
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar48;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar51;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)(param_1 + lVar62);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar54;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar57 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = puVar57;
  func_0x00010beef8c0(puVar64);
  _objc_release(puVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar59);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar67);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar61) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar60);
  lVar67 = (long)_DAT_112738034;
  puVar64 = *(undefined **)(lVar1 + lVar67);
  _objc_retain(puVar64);
  _objc_retain(puVar60);
  if (puVar64 == puVar60) {
    _objc_release(puVar60);
  }
  else {
    if (puVar60 == (undefined *)0x0) {
      _objc_release(puVar64);
    }
    else {
      puVar57 = puVar64;
      func_0x00010c071ae0();
      _objc_release(puVar60);
      _objc_release(puVar64);
      if (((ulong)puVar57 & 1) != 0) goto LAB_105e50c5c;
    }
    puVar64 = PTR_PTR_1126c51f8;
    _objc_retain(puVar60);
    _objc_opt_class(puVar64);
    puVar58 = puVar60;
    _objc_opt_isKindOfClass(puVar60,puVar64);
    puVar57 = puVar60;
    if (((ulong)puVar58 & 1) == 0) {
      puVar57 = (undefined *)0x0;
    }
    _objc_retain(puVar57);
    _objc_release(puVar60);
    puVar64 = (undefined *)0x0;
    if (puVar57 != (undefined *)0x0) {
      _objc_retain(puVar60);
      uVar59 = *(undefined8 *)(lVar1 + lVar67);
      *(undefined **)(lVar1 + lVar67) = puVar57;
      _objc_release(uVar59);
      uVar59 = *(undefined8 *)(lVar1 + _DAT_112738024);
      puVar64 = puVar60;
      func_0x00010c2711a0(puVar60);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar59);
      _objc_release(puVar64);
      uVar59 = *(undefined8 *)(lVar1 + _DAT_112738028);
      puVar64 = puVar60;
      func_0x00010c260dc0(puVar60);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar59);
      _objc_release(puVar64);
      func_0x00010c1cbe20(lVar1);
      puVar64 = puVar60;
    }
  }
  _objc_release(puVar64);
LAB_105e50c5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar60);
  return;
}



/* Entry: 105e50b04; end: 105e50c73; -[SCTopicSendToSuggestedTopicCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e50b04(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112738034;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105e50c5c;
    }
    puVar2 = PTR_PTR_1126c51f8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar4 = 0;
    if (uVar1 != 0) {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = uVar1;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112738024);
      uVar4 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar3);
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112738028);
      uVar4 = param_3;
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar3);
      _objc_release(uVar4);
      func_0x00010c1cbe20(param_1);
      uVar4 = param_3;
    }
  }
  _objc_release(uVar4);
LAB_105e50c5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e50c74; end: 105e50c7f; +[SCTopicSendToSuggestedTopicCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_105e50c74(void)

{
  return;
}



/* Entry: 105e50c80; end: 105e50d37; -[SCTopicSendToSuggestedTopicCollectionViewCell didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e50c80(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c51f8;
  uVar4 = *(ulong *)(param_1 + _DAT_112738034);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010befc5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc580(param_1);
    _objc_release(uVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e50d38; end: 105e50d47; -[SCTopicSendToSuggestedTopicCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e50d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112738034);
}



/* Entry: 105e50d48; end: 105e50d57; -[SCTopicSendToSuggestedTopicCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e50d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112738038);
}



/* Entry: 105e50d58; end: 105e50d97; -[SCTopicSendToSuggestedTopicCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e50d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112738038;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e50d98; end: 105e50db7; -[SCTopicSendToSuggestedTopicCollectionViewCell addTopicDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e50d98(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273803c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e50db8; end: 105e50dcb; -[SCTopicSendToSuggestedTopicCollectionViewCell setAddTopicDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e50db8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273803c,param_3);
  return;
}



/* Entry: 105e50dcc; end: 105e50e67; -[SCTopicSendToSuggestedTopicCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e50dcc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273803c);
  _objc_storeStrong(param_1 + _DAT_112738038,0);
  _objc_storeStrong(param_1 + _DAT_112738034,0);
  _objc_storeStrong(param_1 + _DAT_11273802c,0);
  _objc_storeStrong(param_1 + _DAT_112738020,0);
  _objc_storeStrong(param_1 + _DAT_11273801c,0);
  _objc_storeStrong(param_1 + _DAT_112738028,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738024,0);
  return;
}



/* Entry: 105e50e68; end: 105e50f3f; -[SCTopicSendToSuggestedTopicCellViewModel initWithTitle:subtitle:topicModel:] */

undefined1 *
FUN_105e50e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ed518;
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



/* Entry: 105e50f40; end: 105e50f63; -[SCTopicSendToSuggestedTopicCellViewModel copyWithZone:] */

undefined8 FUN_105e50f40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e50f64; end: 105e50fe3; -[SCTopicSendToSuggestedTopicCellViewModel hash] */

undefined8 * FUN_105e50f64(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_105e5107c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105e51088;
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
            goto LAB_105e51088;
          }
          goto LAB_105e5107c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105e51088:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105e50fe4; end: 105e510a3; -[SCTopicSendToSuggestedTopicCellViewModel isEqual:] */

long FUN_105e50fe4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e5107c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e51088;
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
            goto LAB_105e51088;
          }
          goto LAB_105e5107c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105e51088:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e510a4; end: 105e510ab; -[SCTopicSendToSuggestedTopicCellViewModel title] */

undefined8 FUN_105e510a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e510ac; end: 105e510b3; -[SCTopicSendToSuggestedTopicCellViewModel subtitle] */

undefined8 FUN_105e510ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e510b4; end: 105e510bb; -[SCTopicSendToSuggestedTopicCellViewModel topicModel] */

undefined8 FUN_105e510b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e510bc; end: 105e510f7; -[SCTopicSendToSuggestedTopicCellViewModel .cxx_destruct] */

void FUN_105e510bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e510f8; end: 105e5123f; -[SCTopicSendToAddTopicWithDescriptionCellViewModel initWithTitle:placeholder:tapActionModel:editMode:taggedPlace:remixPreviewConfiguration:] */

undefined1 *
FUN_105e510f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126ed520;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
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



/* Entry: 105e51240; end: 105e51263; -[SCTopicSendToAddTopicWithDescriptionCellViewModel copyWithZone:] */

undefined8 FUN_105e51240(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e51264; end: 105e512ff; -[SCTopicSendToAddTopicWithDescriptionCellViewModel hash] */

undefined8 * FUN_105e51264(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105e513d8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105e513e4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_105e513e4;
              }
              goto LAB_105e513d8;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105e513e4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105e51300; end: 105e513ff; -[SCTopicSendToAddTopicWithDescriptionCellViewModel isEqual:] */

long FUN_105e51300(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e513d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e513e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_105e513e4;
              }
              goto LAB_105e513d8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105e513e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e51400; end: 105e51407; -[SCTopicSendToAddTopicWithDescriptionCellViewModel title] */

undefined8 FUN_105e51400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e51408; end: 105e5140f; -[SCTopicSendToAddTopicWithDescriptionCellViewModel placeholder] */

undefined8 FUN_105e51408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e51410; end: 105e51417; -[SCTopicSendToAddTopicWithDescriptionCellViewModel tapActionModel] */

undefined8 FUN_105e51410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e51418; end: 105e5141f; -[SCTopicSendToAddTopicWithDescriptionCellViewModel editMode] */

undefined1 FUN_105e51418(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105e51420; end: 105e51427; -[SCTopicSendToAddTopicWithDescriptionCellViewModel taggedPlace] */

undefined8 FUN_105e51420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e51428; end: 105e5142f; -[SCTopicSendToAddTopicWithDescriptionCellViewModel remixPreviewConfiguration] */

undefined8 FUN_105e51428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e51430; end: 105e51483; -[SCTopicSendToAddTopicWithDescriptionCellViewModel .cxx_destruct] */

void FUN_105e51430(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105e51484; end: 105e514f3; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel initWithSectionHeight:isFullScreenEnabled:isLastRow:fullyRoundedCorners:] */

void FUN_105e51484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ed528;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
  }
  return;
}



/* Entry: 105e514f4; end: 105e51517; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_105e514f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e51518; end: 105e5159f; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel hash] */

ulong * FUN_105e51518(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  double dVar5;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_38 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  puVar1 = &uStack_38;
  func_0x000100505190(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((((char)puVar1[1] != (char)param_3[1] ||
           (*(char *)((long)puVar1 + 9) != *(char *)((long)param_3 + 9))) ||
          (*(char *)((long)puVar1 + 10) != *(char *)((long)param_3 + 10))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        dVar5 = ABS((double)puVar1[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (ulong *)(ulong)(ABS((double)puVar1[2] - (double)param_3[2]) < dVar5);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105e515a0; end: 105e5167b; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel isEqual:] */

bool FUN_105e515a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 105e5167c; end: 105e51683; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel sectionHeight] */

undefined8 FUN_105e5167c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e51684; end: 105e5168b; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel isFullScreenEnabled] */

undefined1 FUN_105e51684(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105e5168c; end: 105e51693; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel isLastRow] */

undefined1 FUN_105e5168c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105e51694; end: 105e5169b; -[SCTopicSendToCommunitySectionCollectionViewCellViewModel fullyRoundedCorners] */

undefined1 FUN_105e51694(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105e5169c; end: 105e516f3; -[SCRemixSendToView initWithTypeStyle:] */

undefined1 * FUN_105e5169c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed530;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bec5b20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e516f4; end: 105e51b4b; -[SCRemixSendToView _stylizeButtonWithTypeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e516f4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  FUN_105e51b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bdc2620();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112738074;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar3;
  _objc_release(uVar14);
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c219b60();
  func_0x00010902294c();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010c23b9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c16b780(*(undefined8 *)(param_1 + lVar15));
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar4);
  _objc_release(puVar3);
  lVar5 = param_1;
  func_0x00010b8166c0();
  bVar1 = (int)lVar5 == 0;
  uVar4 = 0x4024000000000000;
  if (bVar1) {
    uVar4 = 0x401c000000000000;
  }
  uVar16 = 0x401c000000000000;
  if (bVar1) {
    uVar16 = 0x4024000000000000;
  }
  uVar17 = 0xc008000000000000;
  if (bVar1) {
    uVar17 = 0x4008000000000000;
  }
  uVar18 = 0x4008000000000000;
  if (bVar1) {
    uVar18 = 0xc008000000000000;
  }
  func_0x00010c181e40(0x4010000000000000,uVar4,0x4010000000000000,uVar16,
                      *(undefined8 *)(param_1 + lVar15));
  func_0x00010c2163a0(0,uVar17,0,uVar18,*(undefined8 *)(param_1 + lVar15));
  func_0x00010befbb60(param_1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar12);
  _objc_release(uVar18);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112738074,0);
  return;
}



/* Entry: 105e51b4c; end: 105e51b5f; -[SCRemixSendToView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e51b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738074,0);
  return;
}



/* Entry: 105e51b60; end: 105e51bdb;  */

void FUN_105e51b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126c5260;
  _objc_opt_class(PTR_PTR_1126c5260);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e2b578,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e51bdc; end: 105e51cbf; -[SCSelectionSectionCollectionView initWithFrame:] */

undefined1 *
FUN_105e51bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puVar1 = PTR_PTR_1126b56b0;
  _objc_opt_new(PTR_PTR_1126b56b0);
  func_0x00010c190c40();
  func_0x00010c1a7ac0(puVar1);
  puStack_48 = PTR_PTR_1126ed538;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c181f80(0,0,0x4050000000000000,0,puVar2);
    func_0x00010c167740(puVar2);
    func_0x00010c160fc0(puVar2);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 105e51cc0; end: 105e51d43; -[SCSelectionSectionCollectionView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e51cc0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed538;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1 + _DAT_112738078;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77f60(lVar1);
  _objc_release(param_1);
  _objc_release(lVar1);
  return;
}



/* Entry: 105e51d44; end: 105e51d63; -[SCSelectionSectionCollectionView windowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e51d44(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112738078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e51d64; end: 105e51d77; -[SCSelectionSectionCollectionView setWindowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e51d64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112738078,param_3);
  return;
}



/* Entry: 105e51d78; end: 105e51d87; -[SCSelectionSectionCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e51d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738078);
  return;
}



/* Entry: 105e51d88; end: 105e51deb; -[SCSelectionSectionRenderingSource sectionDataTrackerObservableForCollectionViewSection:] */

void FUN_105e51d88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  FUN_105e51dec();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010010fab4();
  lVar2 = 0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    lVar2 = param_3;
    func_0x00010c155b00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e51dec; end: 105e51f23;  */

void FUN_105e51dec(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar3 = PTR_PTR_1126b1108;
  _objc_opt_class(PTR_PTR_1126b1108);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar3 = PTR_PTR_1126bed88;
  uVar4 = param_1;
  if (uVar1 == 0) {
    _objc_retain(param_1);
    _objc_opt_class(puVar3);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puVar3 = PTR_DAT_1126a5248;
    if (uVar2 == 0) {
      _objc_retain(param_1);
      func_0x00010010fab4(param_1,puVar3);
      uVar5 = param_1;
      if ((int)uVar4 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_1);
      _objc_retain(uVar5);
      uVar4 = uVar5;
    }
    else {
      func_0x00010c155a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010c155a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e51f24; end: 105e51feb; -[SCSelectionSectionRenderingSource subsectionDataProvidersForCollectionViewSection:] */

void FUN_105e51f24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1108;
  _objc_opt_class(PTR_PTR_1126b1108);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c155a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c50b8;
  _objc_opt_class(PTR_PTR_1126c50b8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c155ae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e51fec; end: 105e52073; -[SCSelectionSectionRenderingSource sectionIdentifierForSectionDataProvider:] */

void FUN_105e51fec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105e52074; end: 105e5211b; -[SCSelectionSectionRenderingSource sectionIdentifierForCollectionViewSection:] */

void FUN_105e52074(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_105e51dec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010c155f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e5211c; end: 105e5219b; -[SCSelectionSectionRenderingSource viewModelsForCollectionViewSection:] */

void FUN_105e5211c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_105e51dec(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0deec0();
  uVar2 = 0;
  func_0x00010bd86bb4(0,uVar1,&PTR___NSConcreteGlobalBlock_1108ed010);
  uVar1 = param_3;
  func_0x00010bf4ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5219c; end: 105e521af;  */

void FUN_105e5219c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSIndexPath_1126b0990,PTR_s_indexPathForItem_inSection__1125d8dd0,
             param_2,0);
  return;
}



/* Entry: 105e521b0; end: 105e522b7; -[SCSelectionSectionRenderingSource sectionIndexToSectionIdentifierMappingForCollectionViewSections:] */

void FUN_105e521b0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c155f80(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,lVar3,puVar5);
        _objc_release(puVar5);
      }
      _objc_release(lVar3);
      uVar6 = uVar6 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar6 < uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e522b8; end: 105e523b3; -[SCSendToActionSheetProviderScope initWithPlugInRegistry:sendToTracker:storyConfiguration:uiContainer:] */

undefined1 *
FUN_105e522b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ed540;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e523b4; end: 105e523bb; -[SCSendToActionSheetProviderScope plugInRegistry] */

undefined8 FUN_105e523b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e523bc; end: 105e523c3; -[SCSendToActionSheetProviderScope sendToTracker] */

undefined8 FUN_105e523bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e523c4; end: 105e523cb; -[SCSendToActionSheetProviderScope storyConfiguration] */

undefined8 FUN_105e523c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e523cc; end: 105e523d3; -[SCSendToActionSheetProviderScope uiContainer] */

undefined8 FUN_105e523cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e523d4; end: 105e5241b; -[SCSendToActionSheetProviderScope .cxx_destruct] */

void FUN_105e523d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e5241c; end: 105e525b7; -[SCMultiSectionDataProvider sectionDataTrackerObservable] */

undefined ** FUN_105e5241c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_198;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010c155ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_e8;
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar6 = PTR_DAT_1126a5240;
      lVar9 = *(long *)(lVar11 * 8);
      _objc_retain(lVar9);
      lVar3 = lVar9;
      func_0x00010010fab4(lVar9,puVar6);
      _objc_release(lVar9);
      if ((int)lVar3 != 0 && lVar9 != 0) {
        func_0x00010c155b00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 != 0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(lVar9);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    puVar7 = auStack_e8;
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  ppuVar4 = (undefined **)PTR_PTR_1126ae6b8;
  puVar6 = puVar5;
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
    return ppuVar4;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puStack_220 = PTR_PTR_1126ed548;
  ppuVar4 = &puStack_228;
  puStack_228 = puVar5;
  _objc_msgSendSuper2(ppuVar4,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    puVar5 = puVar6;
    func_0x00010bf51e00();
    puVar8 = ppuVar4[8];
    ppuVar4[8] = puVar5;
    _objc_release(puVar8);
    _objc_retain(puVar7);
    puVar5 = ppuVar4[3];
    ppuVar4[3] = puVar7;
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5268;
    _objc_opt_new();
    puVar8 = ppuVar4[4];
    ppuVar4[4] = puVar5;
    _objc_release(puVar8);
    puVar10 = ppuVar4[8];
    _objc_retain(puVar10);
    puVar5 = puVar10;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    puVar8 = PTR_s_containerCellViewModels_1125b04a0;
    while (PTR_s_containerCellViewModels_1125b04a0 = puVar8, puVar5 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar10);
        }
        _objc_opt_respondsToSelector(*(undefined8 *)((long)puVar12 * 8),puVar8);
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar10;
      func_0x00010bf52a60();
      puVar8 = PTR_s_containerCellViewModels_1125b04a0;
    }
    _objc_release(puVar10);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e2c4b8;
}



/* Entry: 105e525b8; end: 105e5275f; -[SCMultiSectionDataProvider initWithSectionDataProviders:sendToExperimentConfiguration:] */

undefined **
FUN_105e525b8(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_f0 = PTR_PTR_1126ed548;
  ppuVar2 = &puStack_f8;
  puStack_f8 = param_1;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = param_3;
    func_0x00010bf51e00();
    puVar4 = ppuVar2[8];
    ppuVar2[8] = puVar3;
    _objc_release(puVar4);
    _objc_retain(param_4);
    puVar3 = ppuVar2[3];
    ppuVar2[3] = param_4;
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c5268;
    _objc_opt_new();
    puVar4 = ppuVar2[4];
    ppuVar2[4] = puVar3;
    _objc_release(puVar4);
    puVar5 = ppuVar2[8];
    _objc_retain(puVar5);
    puVar3 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar4 = PTR_s_containerCellViewModels_1125b04a0;
    while (PTR_s_containerCellViewModels_1125b04a0 = puVar4, puVar3 != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        _objc_opt_respondsToSelector(*(undefined8 *)((long)puVar6 * 8),puVar4);
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
      puVar3 = puVar5;
      func_0x00010bf52a60();
      puVar4 = PTR_s_containerCellViewModels_1125b04a0;
    }
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e2c4b8;
}



/* Entry: 105e52760; end: 105e5276b; +[SCMultiSectionDataProvider announcerIdentifier] */

undefined ** FUN_105e52760(void)

{
  return &PTR____CFConstantStringClassReference_110e2c4b8;
}



/* Entry: 105e5276c; end: 105e52773; -[SCMultiSectionDataProvider addListener:] */

void FUN_105e5276c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105e52774; end: 105e5277b; -[SCMultiSectionDataProvider removeListener:] */

void FUN_105e52774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105e5277c; end: 105e52887; -[SCMultiSectionDataProvider setUpdateQueuePerformer:] */

undefined1 * FUN_105e5277c(long param_1,undefined **param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_738;
  undefined8 uStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  undefined *puStack_718;
  undefined8 uStack_710;
  long lStack_708;
  long *plStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  long *plStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_4c8;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar13 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_100;
    do {
      lVar16 = 0;
      do {
        if (*plStack_100 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010c21c740(*(undefined8 *)(lStack_108 + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar13;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar13 = *(long *)(param_3 + 0x40);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_210;
    do {
      lVar16 = 0;
      do {
        if (*plStack_210 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010c1896c0(*(undefined8 *)(lStack_218 + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar13;
      puVar5 = &uStack_220;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(puVar5);
  uVar4 = *(undefined8 *)((long)puVar3 + 0x30);
  *(undefined8 **)((long)puVar3 + 0x30) = puVar5;
  _objc_release(uVar4);
  lVar16 = *(long *)((long)puVar3 + 0x40);
  _objc_retain(lVar16);
  lVar2 = lVar16;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar16);
      }
      func_0x00010c1f9220(*(undefined8 *)(lVar17 * 8));
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return (undefined1 *)puVar5;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_450;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  lVar13 = *(long *)((long)puVar5 + 0x40);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar14 = (undefined1 *)0x0;
  }
  else {
    puVar14 = (undefined1 *)0x0;
    lVar15 = *plStack_440;
    do {
      lVar16 = 0;
      do {
        if (*plStack_440 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        lVar17 = *(long *)(lStack_448 + lVar16 * 8);
        func_0x00010c0deec0();
        puVar14 = puVar14 + lVar17;
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar13;
      puVar3 = &uStack_450;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar14;
  }
  ___stack_chk_fail();
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  plStack_680 = (long *)0x0;
  uStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  uStack_660 = 0;
  lVar15 = *(long *)(lVar13 + 0x40);
  _objc_retain(lVar15);
  lVar2 = lVar15;
  func_0x00010bf52a60();
  puVar8 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    lVar16 = *plStack_680;
    do {
      lVar17 = 0;
      do {
        if (*plStack_680 != lVar16) {
          _objc_enumerationMutation(lVar15);
        }
        puVar7 = *(undefined **)(lStack_688 + lVar17 * 8);
        func_0x00010bf4abe0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        if (puVar7 != (undefined *)0x0) {
          puVar9 = puVar7;
        }
        _objc_retain(puVar9);
        _objc_release(puVar7);
        func_0x00010befa160(puVar6);
        _objc_release(puVar9);
        lVar17 = lVar17 + 1;
      } while (lVar2 != lVar17);
      lVar2 = lVar15;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar15);
  puVar8 = (undefined *)puVar3;
  func_0x00010bf529e0();
  puVar9 = puVar6;
  func_0x00010bf529e0();
  if (puVar9 < puVar8) {
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    lStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    plStack_6c0 = (long *)0x0;
    lVar15 = *(long *)(lVar13 + 0x40);
    _objc_retain(lVar15);
    lVar2 = lVar15;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar16 = *plStack_6c0;
      do {
        lVar17 = 0;
        do {
          if (*plStack_6c0 != lVar16) {
            _objc_enumerationMutation(lVar15);
          }
          uVar10 = *(ulong *)(lStack_6c8 + lVar17 * 8);
          func_0x00010c1559c0();
          _objc_retainAutoreleasedReturnValue();
          param_2 = (undefined **)PTR_PTR_1126b5240;
          _objc_opt_class(PTR_PTR_1126b5240);
          uVar11 = uVar10;
          _objc_opt_isKindOfClass(uVar10,param_2);
          uVar1 = uVar10;
          if ((uVar11 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar10);
          uVar11 = uVar1;
          func_0x00010c155f60(uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          func_0x00010be53060(lVar13);
          _objc_release(uVar11);
          lVar17 = lVar17 + 1;
        } while (lVar2 != lVar17);
        lVar2 = lVar15;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar15);
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    lStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    plStack_700 = (long *)0x0;
    lVar13 = *(long *)(lVar13 + 0x40);
    _objc_retain(lVar13);
    lVar2 = lVar13;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar15 = *plStack_700;
      do {
        lVar16 = 0;
        do {
          if (*plStack_700 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          uVar4 = *(undefined8 *)(lStack_708 + lVar16 * 8);
          func_0x00010bf64120(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c155aa0();
          _objc_release(uVar4);
          lVar16 = lVar16 + 1;
        } while (lVar2 != lVar16);
        lVar2 = lVar13;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar13);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar12 = *(undefined8 *)(lVar13 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010c07be40();
    _objc_release(uVar12);
    if ((int)uVar4 != 0) {
      puVar8 = (undefined *)puVar3;
      func_0x00010bf529e0();
      puVar9 = puVar6;
      func_0x00010bf529e0();
      puVar7 = PTR____NSArray0__struct_11034ab48;
      if (puVar9 < puVar8) goto LAB_105e52f84;
    }
    puStack_738 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_730 = 0xc2000000;
    pcStack_728 = FUN_105e52fd4;
    puStack_720 = &UNK_110845ab0;
    _objc_retain(puVar6);
    param_2 = &puStack_738;
    puVar7 = (undefined *)puVar3;
    puStack_718 = puVar6;
    func_0x000100504554(puVar3,param_2);
    _objc_release(puStack_718);
  }
LAB_105e52f84:
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined1 **)((long)puVar3 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return puVar14;
}



/* Entry: 105e52888; end: 105e52993; -[SCMultiSectionDataProvider setDataProviderDelegate:] */

undefined1 * FUN_105e52888(long param_1,undefined **param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_628;
  undefined8 uStack_620;
  code *pcStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_3b8;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_278;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar13 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_100;
    do {
      lVar16 = 0;
      do {
        if (*plStack_100 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010c1896c0(*(undefined8 *)(lStack_108 + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar13;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar4);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 **)(param_3 + 0x30) = puVar4;
  _objc_release(uVar3);
  lVar16 = *(long *)(param_3 + 0x40);
  _objc_retain(lVar16);
  lVar2 = lVar16;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar16);
      }
      func_0x00010c1f9220(*(undefined8 *)(lVar17 * 8));
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_340;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lVar13 = *(long *)((long)puVar4 + 0x40);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar14 = (undefined1 *)0x0;
  }
  else {
    puVar14 = (undefined1 *)0x0;
    lVar15 = *plStack_330;
    do {
      lVar16 = 0;
      do {
        if (*plStack_330 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        lVar17 = *(long *)(lStack_338 + lVar16 * 8);
        func_0x00010c0deec0();
        puVar14 = puVar14 + lVar17;
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar13;
      puVar12 = &uStack_340;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar14;
  }
  ___stack_chk_fail();
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  plStack_570 = (long *)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  lVar15 = *(long *)(lVar13 + 0x40);
  _objc_retain(lVar15);
  lVar2 = lVar15;
  func_0x00010bf52a60();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    lVar16 = *plStack_570;
    do {
      lVar17 = 0;
      do {
        if (*plStack_570 != lVar16) {
          _objc_enumerationMutation(lVar15);
        }
        puVar6 = *(undefined **)(lStack_578 + lVar17 * 8);
        func_0x00010bf4abe0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        if (puVar6 != (undefined *)0x0) {
          puVar8 = puVar6;
        }
        _objc_retain(puVar8);
        _objc_release(puVar6);
        func_0x00010befa160(puVar5);
        _objc_release(puVar8);
        lVar17 = lVar17 + 1;
      } while (lVar2 != lVar17);
      lVar2 = lVar15;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar15);
  puVar7 = (undefined *)puVar12;
  func_0x00010bf529e0();
  puVar8 = puVar5;
  func_0x00010bf529e0();
  if (puVar8 < puVar7) {
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    lStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    plStack_5b0 = (long *)0x0;
    lVar15 = *(long *)(lVar13 + 0x40);
    _objc_retain(lVar15);
    lVar2 = lVar15;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar16 = *plStack_5b0;
      do {
        lVar17 = 0;
        do {
          if (*plStack_5b0 != lVar16) {
            _objc_enumerationMutation(lVar15);
          }
          uVar9 = *(ulong *)(lStack_5b8 + lVar17 * 8);
          func_0x00010c1559c0();
          _objc_retainAutoreleasedReturnValue();
          param_2 = (undefined **)PTR_PTR_1126b5240;
          _objc_opt_class(PTR_PTR_1126b5240);
          uVar10 = uVar9;
          _objc_opt_isKindOfClass(uVar9,param_2);
          uVar1 = uVar9;
          if ((uVar10 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar9);
          uVar10 = uVar1;
          func_0x00010c155f60(uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          func_0x00010be53060(lVar13);
          _objc_release(uVar10);
          lVar17 = lVar17 + 1;
        } while (lVar2 != lVar17);
        lVar2 = lVar15;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar15);
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    lStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    plStack_5f0 = (long *)0x0;
    lVar13 = *(long *)(lVar13 + 0x40);
    _objc_retain(lVar13);
    lVar2 = lVar13;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar15 = *plStack_5f0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_5f0 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          uVar3 = *(undefined8 *)(lStack_5f8 + lVar16 * 8);
          func_0x00010bf64120(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c155aa0();
          _objc_release(uVar3);
          lVar16 = lVar16 + 1;
        } while (lVar2 != lVar16);
        lVar2 = lVar13;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar13);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar11 = *(undefined8 *)(lVar13 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010c07be40();
    _objc_release(uVar11);
    if ((int)uVar3 != 0) {
      puVar7 = (undefined *)puVar12;
      func_0x00010bf529e0();
      puVar8 = puVar5;
      func_0x00010bf529e0();
      puVar6 = PTR____NSArray0__struct_11034ab48;
      if (puVar8 < puVar7) goto LAB_105e52f84;
    }
    puStack_628 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_620 = 0xc2000000;
    pcStack_618 = FUN_105e52fd4;
    puStack_610 = &UNK_110845ab0;
    _objc_retain(puVar5);
    param_2 = &puStack_628;
    puVar6 = (undefined *)puVar12;
    puStack_608 = puVar5;
    func_0x000100504554(puVar12,param_2);
    _objc_release(puStack_608);
  }
LAB_105e52f84:
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined1 **)((long)puVar12 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return puVar14;
}



/* Entry: 105e52994; end: 105e52ab3; -[SCMultiSectionDataProvider setSectionDataModel:] */

undefined * FUN_105e52994(long param_1,undefined **param_2,undefined *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_518;
  undefined8 uStack_510;
  code *pcStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_2a8;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = param_3;
  _objc_release(uVar2);
  lVar12 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar12);
  lVar3 = lVar12;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar12);
      }
      func_0x00010c1f9220(*(undefined8 *)(lVar15 * 8));
      lVar15 = lVar15 + 1;
    } while (lVar3 != lVar15);
    lVar3 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar13 = *(long *)(param_3 + 0x40);
  _objc_retain(lVar13);
  lVar3 = lVar13;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    lVar11 = *plStack_220;
    do {
      lVar12 = 0;
      do {
        if (*plStack_220 != lVar11) {
          _objc_enumerationMutation(lVar13);
        }
        lVar15 = *(long *)(lStack_228 + lVar12 * 8);
        func_0x00010c0deec0();
        puVar14 = puVar14 + lVar15;
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = lVar13;
      puVar10 = &uStack_230;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar14;
  }
  ___stack_chk_fail();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  lVar11 = *(long *)(lVar13 + 0x40);
  _objc_retain(lVar11);
  lVar3 = lVar11;
  func_0x00010bf52a60();
  puVar14 = PTR____NSArray0__struct_11034ab48;
  if (lVar3 != 0) {
    lVar12 = *plStack_460;
    do {
      lVar15 = 0;
      do {
        if (*plStack_460 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        puVar5 = *(undefined **)(lStack_468 + lVar15 * 8);
        func_0x00010bf4abe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar14;
        if (puVar5 != (undefined *)0x0) {
          puVar6 = puVar5;
        }
        _objc_retain(puVar6);
        _objc_release(puVar5);
        func_0x00010befa160(puVar4);
        _objc_release(puVar6);
        lVar15 = lVar15 + 1;
      } while (lVar3 != lVar15);
      lVar3 = lVar11;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar11);
  puVar14 = (undefined *)puVar10;
  func_0x00010bf529e0();
  puVar6 = puVar4;
  func_0x00010bf529e0();
  if (puVar6 < puVar14) {
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    lVar11 = *(long *)(lVar13 + 0x40);
    _objc_retain(lVar11);
    lVar3 = lVar11;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar12 = *plStack_4a0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_4a0 != lVar12) {
            _objc_enumerationMutation(lVar11);
          }
          uVar7 = *(ulong *)(lStack_4a8 + lVar15 * 8);
          func_0x00010c1559c0();
          _objc_retainAutoreleasedReturnValue();
          param_2 = (undefined **)PTR_PTR_1126b5240;
          _objc_opt_class(PTR_PTR_1126b5240);
          uVar8 = uVar7;
          _objc_opt_isKindOfClass(uVar7,param_2);
          uVar1 = uVar7;
          if ((uVar8 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar7);
          uVar8 = uVar1;
          func_0x00010c155f60(uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          func_0x00010be53060(lVar13);
          _objc_release(uVar8);
          lVar15 = lVar15 + 1;
        } while (lVar3 != lVar15);
        lVar3 = lVar11;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar11);
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    lVar13 = *(long *)(lVar13 + 0x40);
    _objc_retain(lVar13);
    lVar3 = lVar13;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_4e0;
      do {
        lVar12 = 0;
        do {
          if (*plStack_4e0 != lVar11) {
            _objc_enumerationMutation(lVar13);
          }
          uVar2 = *(undefined8 *)(lStack_4e8 + lVar12 * 8);
          func_0x00010bf64120(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c155aa0();
          _objc_release(uVar2);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar13;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar13);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar9 = *(undefined8 *)(lVar13 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010c07be40();
    _objc_release(uVar9);
    if ((int)uVar2 != 0) {
      puVar14 = (undefined *)puVar10;
      func_0x00010bf529e0();
      puVar6 = puVar4;
      func_0x00010bf529e0();
      puVar5 = PTR____NSArray0__struct_11034ab48;
      if (puVar6 < puVar14) goto LAB_105e52f84;
    }
    puStack_518 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_510 = 0xc2000000;
    pcStack_508 = FUN_105e52fd4;
    puStack_500 = &UNK_110845ab0;
    _objc_retain(puVar4);
    param_2 = &puStack_518;
    puVar5 = (undefined *)puVar10;
    puStack_4f8 = puVar4;
    func_0x000100504554(puVar10,param_2);
    _objc_release(puStack_4f8);
  }
LAB_105e52f84:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined **)((long)puVar10 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return puVar14;
}



/* Entry: 105e52ab4; end: 105e52bc7; -[SCMultiSectionDataProvider numberOfItemsInSection:] */

undefined * FUN_105e52ab4(long param_1,undefined **param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_198;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar11 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = (undefined *)0x0;
    lVar13 = *plStack_110;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(lVar11);
        }
        lVar3 = *(long *)(lStack_118 + lVar15 * 8);
        func_0x00010c0deec0();
        puVar12 = puVar12 + lVar3;
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar11;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar12;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  lVar13 = *(long *)(lVar11 + 0x40);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  puVar12 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    lVar15 = *plStack_350;
    do {
      lVar3 = 0;
      do {
        if (*plStack_350 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        puVar5 = *(undefined **)(lStack_358 + lVar3 * 8);
        func_0x00010bf4abe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar12;
        if (puVar5 != (undefined *)0x0) {
          puVar6 = puVar5;
        }
        _objc_retain(puVar6);
        _objc_release(puVar5);
        func_0x00010befa160(puVar4);
        _objc_release(puVar6);
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
      lVar2 = lVar13;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar13);
  puVar12 = (undefined *)puVar10;
  func_0x00010bf529e0();
  puVar6 = puVar4;
  func_0x00010bf529e0();
  if (puVar6 < puVar12) {
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    lVar13 = *(long *)(lVar11 + 0x40);
    _objc_retain(lVar13);
    lVar2 = lVar13;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar15 = *plStack_390;
      do {
        lVar3 = 0;
        do {
          if (*plStack_390 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          uVar7 = *(ulong *)(lStack_398 + lVar3 * 8);
          func_0x00010c1559c0();
          _objc_retainAutoreleasedReturnValue();
          param_2 = (undefined **)PTR_PTR_1126b5240;
          _objc_opt_class(PTR_PTR_1126b5240);
          uVar8 = uVar7;
          _objc_opt_isKindOfClass(uVar7,param_2);
          uVar1 = uVar7;
          if ((uVar8 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar7);
          uVar8 = uVar1;
          func_0x00010c155f60(uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          func_0x00010be53060(lVar11);
          _objc_release(uVar8);
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
        lVar2 = lVar13;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar13);
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    lStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    plStack_3d0 = (long *)0x0;
    lVar11 = *(long *)(lVar11 + 0x40);
    _objc_retain(lVar11);
    lVar2 = lVar11;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar13 = *plStack_3d0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_3d0 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          uVar14 = *(undefined8 *)(lStack_3d8 + lVar15 * 8);
          func_0x00010bf64120(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c155aa0();
          _objc_release(uVar14);
          lVar15 = lVar15 + 1;
        } while (lVar2 != lVar15);
        lVar2 = lVar11;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar11);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010c07be40();
    _objc_release(uVar9);
    if ((int)uVar14 != 0) {
      puVar12 = (undefined *)puVar10;
      func_0x00010bf529e0();
      puVar6 = puVar4;
      func_0x00010bf529e0();
      puVar5 = PTR____NSArray0__struct_11034ab48;
      if (puVar6 < puVar12) goto LAB_105e52f84;
    }
    puStack_408 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_400 = 0xc2000000;
    pcStack_3f8 = FUN_105e52fd4;
    puStack_3f0 = &UNK_110845ab0;
    _objc_retain(puVar4);
    param_2 = &puStack_408;
    puVar5 = (undefined *)puVar10;
    puStack_3e8 = puVar4;
    func_0x000100504554(puVar10,param_2);
    _objc_release(puStack_3e8);
  }
LAB_105e52f84:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    puVar12 = *(undefined **)((long)puVar10 + 0x20);
    func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar12,PTR_s_objectAtIndexedSubscript__112615968,param_2);
    return puVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 105e52bc8; end: 105e52fd3; -[SCMultiSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105e52bc8(long param_1,undefined **param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
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
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar11 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar11);
  lVar3 = lVar11;
  func_0x00010bf52a60();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (lVar3 != 0) {
    lVar13 = *plStack_230;
    do {
      lVar10 = 0;
      do {
        if (*plStack_230 != lVar13) {
          _objc_enumerationMutation(lVar11);
        }
        puVar4 = *(undefined **)(lStack_238 + lVar10 * 8);
        func_0x00010bf4abe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        if (puVar4 != (undefined *)0x0) {
          puVar6 = puVar4;
        }
        _objc_retain(puVar6);
        _objc_release(puVar4);
        func_0x00010befa160(puVar2);
        _objc_release(puVar6);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar11;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar11);
  puVar5 = param_3;
  func_0x00010bf529e0();
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 < puVar5) {
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    lVar11 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar11);
    lVar3 = lVar11;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar13 = *plStack_270;
      do {
        lVar10 = 0;
        do {
          if (*plStack_270 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          uVar7 = *(ulong *)(lStack_278 + lVar10 * 8);
          func_0x00010c1559c0();
          _objc_retainAutoreleasedReturnValue();
          param_2 = (undefined **)PTR_PTR_1126b5240;
          _objc_opt_class(PTR_PTR_1126b5240);
          uVar8 = uVar7;
          _objc_opt_isKindOfClass(uVar7,param_2);
          uVar1 = uVar7;
          if ((uVar8 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar7);
          uVar8 = uVar1;
          func_0x00010c155f60(uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          func_0x00010be53060(param_1);
          _objc_release(uVar8);
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar11;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar11);
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    lVar11 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar11);
    lVar3 = lVar11;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar13 = *plStack_2b0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_2b0 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          uVar12 = *(undefined8 *)(lStack_2b8 + lVar10 * 8);
          func_0x00010bf64120(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c155aa0();
          _objc_release(uVar12);
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar11;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar11);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c07be40();
    _objc_release(uVar9);
    if ((int)uVar12 != 0) {
      puVar5 = param_3;
      func_0x00010bf529e0();
      puVar6 = puVar2;
      func_0x00010bf529e0();
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if (puVar6 < puVar5) goto LAB_105e52f84;
    }
    puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e0 = 0xc2000000;
    pcStack_2d8 = FUN_105e52fd4;
    puStack_2d0 = &UNK_110845ab0;
    _objc_retain(puVar2);
    param_2 = &puStack_2e8;
    puVar4 = param_3;
    puStack_2c8 = puVar2;
    func_0x000100504554(param_3,param_2);
    _objc_release(puStack_2c8);
  }
LAB_105e52f84:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar12,PTR_s_objectAtIndexedSubscript__112615968,param_2)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e52fd4; end: 105e52fff;  */

void FUN_105e52fd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 105e53000; end: 105e5312f; -[SCMultiSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Removing unreachable block (ram,0x000106c9cd84) */

undefined * FUN_105e53000(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *unaff_x21;
  long *plVar10;
  undefined8 *puVar11;
  undefined *unaff_x22;
  undefined8 *puVar12;
  ulong unaff_x23;
  undefined **unaff_x24;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined1 uStack_698;
  undefined8 *puStack_690;
  undefined8 *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 ***pppuStack_670;
  undefined *puStack_668;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined **ppuStack_600;
  ulong uStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  long lStack_5e0;
  undefined *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_4f8;
  undefined8 ***pppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_3c8;
  undefined1 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  long lStack_358;
  ulong *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_298;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  ulong *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  ppuVar8 = *(undefined ***)(param_1 + 0x40);
  _objc_retain(ppuVar8);
  ppuVar1 = ppuVar8;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x23 = *puStack_110;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(ppuVar8);
        }
        unaff_x22 = *(undefined **)(lStack_118 + (long)unaff_x24 * 8);
        func_0x00010bf4bfc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar14);
        _objc_release(unaff_x22);
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar1 != unaff_x24);
      ppuVar1 = ppuVar8;
      func_0x00010bf52a60();
      unaff_x21 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_105e53130;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    puStack_230 = (ulong *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puVar7 = ppuVar8[8];
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar14 = puVar7;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      unaff_x23 = *puStack_230;
      unaff_x24 = &PTR_s_setTranscodingTaskId__112664000;
      do {
        unaff_x21 = PTR_s_setUp_112664a70;
        puVar13 = (undefined *)0x0;
        do {
          if (*puStack_230 != unaff_x23) {
            _objc_enumerationMutation(puVar7);
          }
          unaff_x22 = *(undefined **)(lStack_238 + (long)puVar13 * 8);
          puVar2 = unaff_x22;
          _objc_opt_respondsToSelector(unaff_x22,unaff_x21);
          if (((ulong)puVar2 & 1) != 0) {
            func_0x00010c21c120(unaff_x22);
          }
          puVar13 = puVar13 + 1;
        } while (puVar14 != puVar13);
        puVar14 = puVar7;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return puVar7;
    }
    ___stack_chk_fail();
    pcStack_248 = FUN_105e53244;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    puStack_350 = (ulong *)0x0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    puVar7 = *(undefined **)(puVar7 + 0x40);
    ppuStack_250 = &puStack_130;
    _objc_retain(puVar7);
    puVar14 = puVar7;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      unaff_x23 = *puStack_350;
      unaff_x24 = &PTR_s_tapToStartWithAttribution__112678000;
      do {
        unaff_x21 = PTR_s_tearDown_112678508;
        puVar13 = (undefined *)0x0;
        do {
          if (*puStack_350 != unaff_x23) {
            _objc_enumerationMutation(puVar7);
          }
          unaff_x22 = *(undefined **)(lStack_358 + (long)puVar13 * 8);
          puVar2 = unaff_x22;
          _objc_opt_respondsToSelector(unaff_x22,unaff_x21);
          if (((ulong)puVar2 & 1) != 0) {
            func_0x00010c26ab80(unaff_x22);
          }
          puVar13 = puVar13 + 1;
        } while (puVar14 != puVar13);
        puVar14 = puVar7;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
      return puVar7;
    }
    ___stack_chk_fail();
    pcStack_368 = FUN_105e53358;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    plStack_480 = (long *)0x0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    puVar7 = *(undefined **)(puVar7 + 0x40);
    pppuStack_370 = &ppuStack_250;
    _objc_retain(puVar7);
    puVar14 = puVar7;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      unaff_x24 = (undefined **)*plStack_480;
      puVar13 = (undefined *)0x1;
      unaff_x21 = puVar14;
      do {
        unaff_x22 = PTR_s_dataLoadingStatus_1125b6908;
        puVar14 = (undefined *)0x0;
        do {
          if ((undefined **)*plStack_480 != unaff_x24) {
            _objc_enumerationMutation(puVar7);
          }
          unaff_x23 = *(ulong *)(lStack_488 + (long)puVar14 * 8);
          uVar3 = unaff_x23;
          _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
          if (((uVar3 & 1) != 0) && (uVar3 = unaff_x23, func_0x00010bf63d80(), uVar3 < 2))
          goto LAB_105e53440;
          puVar14 = puVar14 + 1;
        } while (unaff_x21 != puVar14);
        unaff_x21 = puVar7;
        func_0x00010bf52a60();
      } while (unaff_x21 != (undefined *)0x0);
    }
    puVar13 = (undefined *)0x2;
LAB_105e53440:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return puVar13;
    }
    ___stack_chk_fail();
    puVar6 = &uStack_5c0;
    pcStack_498 = FUN_105e53488;
    lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    pppuStack_4a0 = &pppuStack_370;
    _objc_opt_new();
    lStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    plStack_5b0 = (long *)0x0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    lVar9 = *(long *)(puVar7 + 0x40);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      unaff_x24 = (undefined **)*plStack_5b0;
      do {
        unaff_x22 = PTR_s_configurationBlocksByReuseIdenti_1125af330;
        lVar15 = 0;
        do {
          if ((undefined **)*plStack_5b0 != unaff_x24) {
            _objc_enumerationMutation(lVar9);
          }
          unaff_x23 = *(ulong *)(lStack_5b8 + lVar15 * 8);
          uVar3 = unaff_x23;
          _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
          if ((uVar3 & 1) != 0) {
            func_0x00010bf46620();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef7f60(puVar14);
            _objc_release(unaff_x23);
          }
          lVar15 = lVar15 + 1;
        } while (lVar4 != lVar15);
        lVar4 = lVar9;
        puVar6 = &uStack_5c0;
        func_0x00010bf52a60();
        unaff_x21 = (undefined *)0x0;
      } while (lVar4 != 0);
    }
    lVar4 = lVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
      ___stack_chk_fail();
      lVar4 = *(long *)(lVar4 + 0x20);
      uVar5 = 1;
      pcStack_5c8 = FUN_105e535dc;
      puVar12 = (undefined8 *)0x1;
      lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_600 = unaff_x24;
      uStack_5f8 = unaff_x23;
      puStack_5f0 = unaff_x22;
      puStack_5e8 = unaff_x21;
      lStack_5e0 = lVar9;
      puStack_5d8 = puVar14;
      pppuStack_5d0 = &pppuStack_4a0;
      _objc_retain(puVar6);
      puVar11 = (undefined8 *)0x0;
      if (lVar4 != 0) {
        plVar10 = *(long **)(lVar4 + 8);
        func_0x00010002b838(auStack_638,&UNK_10f3cc40a);
        _objc_retain(puVar6);
        if (puVar6 == (undefined8 *)0x0) {
          puVar14 = &UNK_10f3cc415;
        }
        else {
          _objc_retainAutorelease(puVar6);
          puVar14 = (undefined *)puVar6;
          func_0x00010bdc3520(puVar6);
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_620,puVar14);
        uStack_658 = 0;
        uStack_650 = 0;
        uStack_648 = 0;
        func_0x00010007e1e8(&uStack_658,auStack_638,&lStack_608,2);
        puVar14 = &UNK_11096e968;
        puVar12 = &uStack_658;
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096e968,&uStack_658,1);
        puStack_640 = puVar12;
        func_0x00010007e5dc(&puStack_640);
        lVar4 = 0;
        puVar11 = auStack_638;
        do {
          if ((&cStack_609)[lVar4] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar4));
          }
          uVar5 = SUB81(puVar14,0);
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != -0x30);
      }
      puVar14 = (undefined *)puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
        return puVar14;
      }
      ___stack_chk_fail();
      _objc_release(puVar6);
      if (cStack_621 < '\0') {
        __ZdlPv(auStack_638[0]);
      }
      _objc_release(puVar6);
      puVar7 = puVar14;
      __Unwind_Resume();
      puStack_668 = &UNK_106c9cf14;
      puStack_690 = puVar12;
      puStack_688 = puVar11;
      puStack_680 = puVar14;
      puStack_678 = (undefined *)puVar6;
      pppuStack_670 = &pppuStack_5d0;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126b5658;
      _objc_opt_class(PTR_PTR_1126b5658);
      puVar13 = puVar7;
      _objc_opt_isKindOfClass(puVar7,puVar14);
      puVar14 = puVar7;
      if (((ulong)puVar13 & 1) == 0) {
        puVar14 = (undefined *)0x0;
      }
      _objc_retain(puVar14);
      _objc_release(puVar7);
      puVar7 = puVar14;
      func_0x00010c15a7c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puStack_6b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_6b0 = 0xc0000000;
      puStack_6a8 = &UNK_106c9d02c;
      puStack_6a0 = &UNK_1108ec870;
      puVar13 = puVar7;
      uStack_698 = uVar5;
      func_0x000100504554(puVar7,&puStack_6b8);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b5658;
      _objc_alloc(PTR_PTR_1126b5658);
      func_0x00010c043e40();
      puVar14 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      _objc_release(puVar7);
      _objc_release(puVar13);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 105e53130; end: 105e53243; -[SCMultiSectionDataProvider setUp] */

/* WARNING: Removing unreachable block (ram,0x000106c9cd84) */

undefined * FUN_105e53130(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *unaff_x21;
  long *plVar8;
  undefined8 *puVar9;
  undefined *unaff_x22;
  undefined8 *puVar10;
  ulong unaff_x23;
  undefined **unaff_x24;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined1 uStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 *puStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined **ppuStack_4e0;
  ulong uStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  long lStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_3d8;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  ulong *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar6 = *(undefined **)(param_1 + 0x40);
  _objc_retain(puVar6);
  puVar12 = puVar6;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    unaff_x23 = *puStack_110;
    unaff_x24 = &PTR_s_setTranscodingTaskId__112664000;
    do {
      unaff_x21 = PTR_s_setUp_112664a70;
      puVar11 = (undefined *)0x0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(puVar6);
        }
        unaff_x22 = *(undefined **)(lStack_118 + (long)puVar11 * 8);
        puVar1 = unaff_x22;
        _objc_opt_respondsToSelector(unaff_x22,unaff_x21);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010c21c120(unaff_x22);
        }
        puVar11 = puVar11 + 1;
      } while (puVar12 != puVar11);
      puVar12 = puVar6;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105e53244;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  puStack_230 = (ulong *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar6 = *(undefined **)(puVar6 + 0x40);
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar12 = puVar6;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    unaff_x23 = *puStack_230;
    unaff_x24 = &PTR_s_tapToStartWithAttribution__112678000;
    do {
      unaff_x21 = PTR_s_tearDown_112678508;
      puVar11 = (undefined *)0x0;
      do {
        if (*puStack_230 != unaff_x23) {
          _objc_enumerationMutation(puVar6);
        }
        unaff_x22 = *(undefined **)(lStack_238 + (long)puVar11 * 8);
        puVar1 = unaff_x22;
        _objc_opt_respondsToSelector(unaff_x22,unaff_x21);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010c26ab80(unaff_x22);
        }
        puVar11 = puVar11 + 1;
      } while (puVar12 != puVar11);
      puVar12 = puVar6;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_105e53358;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  puVar6 = *(undefined **)(puVar6 + 0x40);
  ppuStack_250 = &puStack_130;
  _objc_retain(puVar6);
  puVar12 = puVar6;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    unaff_x24 = (undefined **)*plStack_360;
    puVar11 = (undefined *)0x1;
    unaff_x21 = puVar12;
    do {
      unaff_x22 = PTR_s_dataLoadingStatus_1125b6908;
      puVar12 = (undefined *)0x0;
      do {
        if ((undefined **)*plStack_360 != unaff_x24) {
          _objc_enumerationMutation(puVar6);
        }
        unaff_x23 = *(ulong *)(lStack_368 + (long)puVar12 * 8);
        uVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if (((uVar2 & 1) != 0) && (uVar2 = unaff_x23, func_0x00010bf63d80(), uVar2 < 2))
        goto LAB_105e53440;
        puVar12 = puVar12 + 1;
      } while (unaff_x21 != puVar12);
      unaff_x21 = puVar6;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined *)0x0);
  }
  puVar11 = (undefined *)0x2;
LAB_105e53440:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_4a0;
  pcStack_378 = FUN_105e53488;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  pppuStack_380 = &ppuStack_250;
  _objc_opt_new();
  lStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  plStack_490 = (long *)0x0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  lVar7 = *(long *)(puVar6 + 0x40);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x24 = (undefined **)*plStack_490;
    do {
      unaff_x22 = PTR_s_configurationBlocksByReuseIdenti_1125af330;
      lVar13 = 0;
      do {
        if ((undefined **)*plStack_490 != unaff_x24) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x23 = *(ulong *)(lStack_498 + lVar13 * 8);
        uVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf46620();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar12);
          _objc_release(unaff_x23);
        }
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar7;
      puVar5 = &uStack_4a0;
      func_0x00010bf52a60();
      unaff_x21 = (undefined *)0x0;
    } while (lVar3 != 0);
  }
  lVar3 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
    ___stack_chk_fail();
    lVar3 = *(long *)(lVar3 + 0x20);
    uVar4 = 1;
    pcStack_4a8 = FUN_105e535dc;
    puVar10 = (undefined8 *)0x1;
    lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_4e0 = unaff_x24;
    uStack_4d8 = unaff_x23;
    puStack_4d0 = unaff_x22;
    puStack_4c8 = unaff_x21;
    lStack_4c0 = lVar7;
    puStack_4b8 = puVar12;
    pppuStack_4b0 = &pppuStack_380;
    _objc_retain(puVar5);
    puVar9 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      plVar8 = *(long **)(lVar3 + 8);
      func_0x00010002b838(auStack_518,&UNK_10f3cc40a);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar12 = &UNK_10f3cc415;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar12 = (undefined *)puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_500,puVar12);
      uStack_538 = 0;
      uStack_530 = 0;
      uStack_528 = 0;
      func_0x00010007e1e8(&uStack_538,auStack_518,&lStack_4e8,2);
      puVar12 = &UNK_11096e968;
      puVar10 = &uStack_538;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11096e968,&uStack_538,1);
      puStack_520 = puVar10;
      func_0x00010007e5dc(&puStack_520);
      lVar3 = 0;
      puVar9 = auStack_518;
      do {
        if ((&cStack_4e9)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar3));
        }
        uVar4 = SUB81(puVar12,0);
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    puVar12 = (undefined *)puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
      return puVar12;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    if (cStack_501 < '\0') {
      __ZdlPv(auStack_518[0]);
    }
    _objc_release(puVar5);
    puVar6 = puVar12;
    __Unwind_Resume();
    puStack_548 = &UNK_106c9cf14;
    puStack_570 = puVar10;
    puStack_568 = puVar9;
    puStack_560 = puVar12;
    puStack_558 = (undefined *)puVar5;
    pppuStack_550 = &pppuStack_4b0;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    puVar11 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar12);
    puVar12 = puVar6;
    if (((ulong)puVar11 & 1) == 0) {
      puVar12 = (undefined *)0x0;
    }
    _objc_retain(puVar12);
    _objc_release(puVar6);
    puVar6 = puVar12;
    func_0x00010c15a7c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puStack_598 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_590 = 0xc0000000;
    puStack_588 = &UNK_106c9d02c;
    puStack_580 = &UNK_1108ec870;
    puVar11 = puVar6;
    uStack_578 = uVar4;
    func_0x000100504554(puVar6,&puStack_598);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b5658;
    _objc_alloc(PTR_PTR_1126b5658);
    func_0x00010c043e40();
    puVar12 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar6);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 105e53244; end: 105e53357; -[SCMultiSectionDataProvider tearDown] */

/* WARNING: Removing unreachable block (ram,0x000106c9cd84) */

undefined * FUN_105e53244(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *unaff_x21;
  long *plVar8;
  undefined8 *puVar9;
  undefined *unaff_x22;
  undefined8 *puVar10;
  ulong unaff_x23;
  undefined **unaff_x24;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined1 uStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  undefined *puStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined **ppuStack_3c0;
  ulong uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  long lStack_3a0;
  undefined *puStack_398;
  undefined1 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2b8;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar6 = *(undefined **)(param_1 + 0x40);
  _objc_retain(puVar6);
  puVar12 = puVar6;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    unaff_x23 = *puStack_110;
    unaff_x24 = &PTR_s_tapToStartWithAttribution__112678000;
    do {
      unaff_x21 = PTR_s_tearDown_112678508;
      puVar11 = (undefined *)0x0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(puVar6);
        }
        unaff_x22 = *(undefined **)(lStack_118 + (long)puVar11 * 8);
        puVar1 = unaff_x22;
        _objc_opt_respondsToSelector(unaff_x22,unaff_x21);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010c26ab80(unaff_x22);
        }
        puVar11 = puVar11 + 1;
      } while (puVar12 != puVar11);
      puVar12 = puVar6;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105e53358;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar6 = *(undefined **)(puVar6 + 0x40);
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar12 = puVar6;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    unaff_x24 = (undefined **)*plStack_240;
    puVar11 = (undefined *)0x1;
    unaff_x21 = puVar12;
    do {
      unaff_x22 = PTR_s_dataLoadingStatus_1125b6908;
      puVar12 = (undefined *)0x0;
      do {
        if ((undefined **)*plStack_240 != unaff_x24) {
          _objc_enumerationMutation(puVar6);
        }
        unaff_x23 = *(ulong *)(lStack_248 + (long)puVar12 * 8);
        uVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if (((uVar2 & 1) != 0) && (uVar2 = unaff_x23, func_0x00010bf63d80(), uVar2 < 2))
        goto LAB_105e53440;
        puVar12 = puVar12 + 1;
      } while (unaff_x21 != puVar12);
      unaff_x21 = puVar6;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined *)0x0);
  }
  puVar11 = (undefined *)0x2;
LAB_105e53440:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_380;
  pcStack_258 = FUN_105e53488;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  ppuStack_260 = &puStack_130;
  _objc_opt_new();
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lVar7 = *(long *)(puVar6 + 0x40);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x24 = (undefined **)*plStack_370;
    do {
      unaff_x22 = PTR_s_configurationBlocksByReuseIdenti_1125af330;
      lVar13 = 0;
      do {
        if ((undefined **)*plStack_370 != unaff_x24) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x23 = *(ulong *)(lStack_378 + lVar13 * 8);
        uVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf46620();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar12);
          _objc_release(unaff_x23);
        }
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar7;
      puVar5 = &uStack_380;
      func_0x00010bf52a60();
      unaff_x21 = (undefined *)0x0;
    } while (lVar3 != 0);
  }
  lVar3 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
    ___stack_chk_fail();
    lVar3 = *(long *)(lVar3 + 0x20);
    uVar4 = 1;
    pcStack_388 = FUN_105e535dc;
    puVar10 = (undefined8 *)0x1;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_3c0 = unaff_x24;
    uStack_3b8 = unaff_x23;
    puStack_3b0 = unaff_x22;
    puStack_3a8 = unaff_x21;
    lStack_3a0 = lVar7;
    puStack_398 = puVar12;
    pppuStack_390 = &ppuStack_260;
    _objc_retain(puVar5);
    puVar9 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      plVar8 = *(long **)(lVar3 + 8);
      func_0x00010002b838(auStack_3f8,&UNK_10f3cc40a);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar12 = &UNK_10f3cc415;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar12 = (undefined *)puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_3e0,puVar12);
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
      puVar12 = &UNK_11096e968;
      puVar10 = &uStack_418;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11096e968,&uStack_418,1);
      puStack_400 = puVar10;
      func_0x00010007e5dc(&puStack_400);
      lVar3 = 0;
      puVar9 = auStack_3f8;
      do {
        if ((&cStack_3c9)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar3));
        }
        uVar4 = SUB81(puVar12,0);
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    puVar12 = (undefined *)puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return puVar12;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    if (cStack_3e1 < '\0') {
      __ZdlPv(auStack_3f8[0]);
    }
    _objc_release(puVar5);
    puVar6 = puVar12;
    __Unwind_Resume();
    puStack_428 = &UNK_106c9cf14;
    puStack_450 = puVar10;
    puStack_448 = puVar9;
    puStack_440 = puVar12;
    puStack_438 = (undefined *)puVar5;
    pppuStack_430 = &pppuStack_390;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    puVar11 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar12);
    puVar12 = puVar6;
    if (((ulong)puVar11 & 1) == 0) {
      puVar12 = (undefined *)0x0;
    }
    _objc_retain(puVar12);
    _objc_release(puVar6);
    puVar6 = puVar12;
    func_0x00010c15a7c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puStack_478 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_470 = 0xc0000000;
    puStack_468 = &UNK_106c9d02c;
    puStack_460 = &UNK_1108ec870;
    puVar11 = puVar6;
    uStack_458 = uVar4;
    func_0x000100504554(puVar6,&puStack_478);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b5658;
    _objc_alloc(PTR_PTR_1126b5658);
    func_0x00010c043e40();
    puVar12 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar6);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 105e53358; end: 105e53487; -[SCMultiSectionDataProvider dataLoadingStatus] */

/* WARNING: Removing unreachable block (ram,0x000106c9cd84) */

undefined * FUN_105e53358(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x21;
  long *plVar8;
  undefined8 *puVar9;
  undefined *unaff_x22;
  undefined8 *puVar10;
  ulong unaff_x23;
  long unaff_x24;
  long lVar11;
  long lVar12;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined1 uStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined1 ***pppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  undefined *puStack_290;
  long lStack_288;
  long lStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar6);
  lVar11 = lVar6;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x24 = *plStack_120;
    puVar7 = (undefined *)0x1;
    unaff_x21 = lVar11;
    do {
      unaff_x22 = PTR_s_dataLoadingStatus_1125b6908;
      lVar11 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(lVar6);
        }
        unaff_x23 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar1 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if (((uVar1 & 1) != 0) && (uVar1 = unaff_x23, func_0x00010bf63d80(), uVar1 < 2))
        goto LAB_105e53440;
        lVar11 = lVar11 + 1;
      } while (unaff_x21 != lVar11);
      unaff_x21 = lVar6;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar7 = (undefined *)0x2;
LAB_105e53440:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  pcStack_138 = FUN_105e53488;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar6 = *(long *)(lVar6 + 0x40);
  _objc_retain(lVar6);
  lVar11 = lVar6;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x24 = *plStack_250;
    do {
      unaff_x22 = PTR_s_configurationBlocksByReuseIdenti_1125af330;
      lVar12 = 0;
      do {
        if (*plStack_250 != unaff_x24) {
          _objc_enumerationMutation(lVar6);
        }
        unaff_x23 = *(ulong *)(lStack_258 + lVar12 * 8);
        uVar1 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf46620();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar7);
          _objc_release(unaff_x23);
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = lVar6;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar11 != 0);
  }
  lVar11 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    lVar11 = *(long *)(lVar11 + 0x20);
    uVar4 = 1;
    pcStack_268 = FUN_105e535dc;
    puVar10 = (undefined8 *)0x1;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_2a0 = unaff_x24;
    uStack_298 = unaff_x23;
    puStack_290 = unaff_x22;
    lStack_288 = unaff_x21;
    lStack_280 = lVar6;
    puStack_278 = puVar7;
    ppuStack_270 = &puStack_140;
    _objc_retain(puVar5);
    puVar9 = (undefined8 *)0x0;
    if (lVar11 != 0) {
      plVar8 = *(long **)(lVar11 + 8);
      func_0x00010002b838(auStack_2d8,&UNK_10f3cc40a);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar7 = &UNK_10f3cc415;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar7 = (undefined *)puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_2c0,puVar7);
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
      puVar7 = &UNK_11096e968;
      puVar10 = &uStack_2f8;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11096e968,&uStack_2f8,1);
      puStack_2e0 = puVar10;
      func_0x00010007e5dc(&puStack_2e0);
      lVar11 = 0;
      puVar9 = auStack_2d8;
      do {
        if ((&cStack_2a9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar11));
        }
        uVar4 = SUB81(puVar7,0);
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    puVar7 = (undefined *)puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return puVar7;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    if (cStack_2c1 < '\0') {
      __ZdlPv(auStack_2d8[0]);
    }
    _objc_release(puVar5);
    puVar2 = puVar7;
    __Unwind_Resume();
    puStack_308 = &UNK_106c9cf14;
    puStack_330 = puVar10;
    puStack_328 = puVar9;
    puStack_320 = puVar7;
    puStack_318 = (undefined *)puVar5;
    pppuStack_310 = &ppuStack_270;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar7);
    puVar7 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar2);
    puVar2 = puVar7;
    func_0x00010c15a7c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_350 = 0xc0000000;
    puStack_348 = &UNK_106c9d02c;
    puStack_340 = &UNK_1108ec870;
    puVar3 = puVar2;
    uStack_338 = uVar4;
    func_0x000100504554(puVar2,&puStack_358);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b5658;
    _objc_alloc(PTR_PTR_1126b5658);
    func_0x00010c043e40();
    puVar7 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 105e53488; end: 105e535db; -[SCMultiSectionDataProvider configurationBlocksByReuseIdentifier] */

/* WARNING: Removing unreachable block (ram,0x000106c9cd84) */

void FUN_105e53488(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 unaff_x21;
  long *plVar9;
  undefined8 *puVar10;
  undefined *unaff_x22;
  undefined8 *puVar11;
  ulong unaff_x23;
  long unaff_x24;
  long lVar12;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined1 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
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
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x24 = *plStack_120;
    do {
      unaff_x22 = PTR_s_configurationBlocksByReuseIdenti_1125af330;
      lVar12 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x23 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf46620();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar1);
          _objc_release(unaff_x23);
        }
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = lVar8;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar3 != 0);
  }
  lVar3 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar3 = *(long *)(lVar3 + 0x20);
    uVar6 = 1;
    pcStack_138 = FUN_105e535dc;
    puVar11 = (undefined8 *)0x1;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    puStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    lStack_150 = lVar8;
    puStack_148 = puVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar10 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      plVar9 = *(long **)(lVar3 + 8);
      func_0x00010002b838(auStack_1a8,&UNK_10f3cc40a);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = &UNK_10f3cc415;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = (undefined *)puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_190,puVar1);
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      func_0x00010007e1e8(&uStack_1c8,auStack_1a8,&lStack_178,2);
      puVar1 = &UNK_11096e968;
      puVar11 = &uStack_1c8;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11096e968,&uStack_1c8,1);
      puStack_1b0 = puVar11;
      func_0x00010007e5dc(&puStack_1b0);
      lVar3 = 0;
      puVar10 = auStack_1a8;
      do {
        if ((&cStack_179)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar3));
        }
        uVar6 = SUB81(puVar1,0);
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    puVar1 = (undefined *)puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    _objc_release(puVar7);
    puVar4 = puVar1;
    __Unwind_Resume();
    puStack_1d8 = &UNK_106c9cf14;
    puStack_200 = puVar11;
    puStack_1f8 = puVar10;
    puStack_1f0 = puVar1;
    puStack_1e8 = (undefined *)puVar7;
    ppuStack_1e0 = &puStack_140;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar1);
    puVar1 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c15a7c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc0000000;
    puStack_218 = &UNK_106c9d02c;
    puStack_210 = &UNK_1108ec870;
    puVar5 = puVar4;
    uStack_208 = uVar6;
    func_0x000100504554(puVar4,&puStack_228);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b5658;
    _objc_alloc(PTR_PTR_1126b5658);
    func_0x00010c043e40();
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e535dc; end: 105e535eb; -[SCMultiSectionDataProvider _logFailureForSectionId:] */

/* WARNING: Removing unreachable block (ram,0x000106c9cd84) */

void FUN_105e535dc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar5 = 1;
  puVar8 = (undefined8 *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar7 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 8);
    func_0x00010002b838(auStack_78,&UNK_10f3cc40a);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3cc415;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11096e968;
    puVar8 = &uStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11096e968,&uStack_98,1);
    puStack_80 = puVar8;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    puVar7 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      uVar5 = SUB81(puVar2,0);
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    puVar3 = puVar2;
    __Unwind_Resume();
    puStack_a8 = &UNK_106c9cf14;
    puStack_d0 = puVar8;
    puStack_c8 = puVar7;
    puStack_c0 = puVar2;
    puStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c15a7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc0000000;
    puStack_e8 = &UNK_106c9d02c;
    puStack_e0 = &UNK_1108ec870;
    puVar2 = puVar3;
    uStack_d8 = uVar5;
    func_0x000100504554(puVar3,&puStack_f8);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b5658;
    _objc_alloc(PTR_PTR_1126b5658);
    func_0x00010c043e40();
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105e535ec; end: 105e53603; -[SCMultiSectionDataProvider dataProviderDelegate] */

void FUN_105e535ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e53604; end: 105e5360b; -[SCMultiSectionDataProvider sectionDataModel] */

undefined8 FUN_105e53604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e5360c; end: 105e53613; -[SCMultiSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105e5360c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e53614; end: 105e5361b; -[SCMultiSectionDataProvider sectionDataProviders] */

undefined8 FUN_105e53614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105e5361c; end: 105e5368f; -[SCMultiSectionDataProvider .cxx_destruct] */

void FUN_105e5361c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e53690; end: 105e5382f; -[SCSearchSelectionHighlighter initWithSelectionTracker:textField:] */

undefined8 *
FUN_105e53690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126ed550;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    *(undefined1 *)(puVar1 + 3) = 1;
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = param_3;
    func_0x00010bf6d420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[2];
    puVar1[2] = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}


