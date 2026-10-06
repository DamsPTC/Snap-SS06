/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e4540c; end: 104e4546b; -[SCMyProfileStoriesNewStoryActionsManager .cxx_destruct] */

void FUN_104e4540c(long param_1)

{
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



/* Entry: 104e4546c; end: 104e4596b; -[SCMyProfileStoriesSectionCreator initWithImageDownloader:actionHandler:storiesDataSourceManager:userSession:circumstanceEngine:complianceEngine:snapProServices:storiesMetricServices:myStoriesServices:storiesServices:readReceiptService:storiesPreferencesServices:snapchatterServices:ourStoriesServices:shortcutsDataFetcher:updatesTracker:lazyLegacyProfileTooltipsService:publicStoriesSectionDataProviderGenerator:] */

undefined8 *
FUN_104e4546c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  puStack_70 = PTR_PTR_1126e47c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    uVar2 = param_20;
    _objc_retainBlock();
    uVar10 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar10);
    _objc_retain(param_4);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_4;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1218;
    _objc_alloc();
    uVar10 = param_11;
    func_0x00010c0d4b00(param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_12;
    func_0x00010c243de0(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_13;
    func_0x00010c08d900(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_14;
    func_0x00010c25aae0(param_14);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[4];
    func_0x00010c2932e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[4];
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dbc0();
    uVar11 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar10);
    func_0x00010c127100(puVar1[2]);
    _objc_release(uVar2);
  }
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



/* Entry: 104e4596c; end: 104e45e4f; -[SCMyProfileStoriesSectionCreator sectionForDescriptor:] */

void FUN_104e4596c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1220;
  _objc_opt_class(PTR_PTR_1126b1220);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_104e45e50();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b1228;
  if ((int)uVar3 == 0) {
    uVar1 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar1 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
        func_0x00010bebed40(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104e45b7c;
      }
      uVar1 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
        func_0x00010bebefa0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104e45b7c;
      }
      uVar1 = param_3;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126b1228;
      uVar1 = uVar4;
      if ((int)uVar3 == 0) {
        uVar3 = param_3;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        puVar2 = PTR_PTR_1126b1228;
        if ((int)uVar5 == 0) {
          uVar1 = param_3;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar1);
          uVar1 = param_3;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          if ((int)uVar3 == 0) {
            uVar3 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            puVar2 = PTR_PTR_1126b1228;
            if ((int)uVar3 != 0) {
              _objc_retain(uVar4);
              _objc_opt_class(puVar2);
              uVar1 = uVar4;
              _objc_opt_isKindOfClass(uVar4,puVar2);
              uVar3 = uVar4;
              if ((uVar1 & 1) == 0) {
                uVar3 = 0;
              }
              _objc_retain(uVar3);
              _objc_release(uVar4);
              uVar1 = uVar3;
              func_0x00010c259cc0(uVar3);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar3);
              func_0x00010be90700(param_1);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_104e45b78;
            }
          }
          else {
            uVar3 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar3 != 0) {
              func_0x00010bdf78a0(param_1);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_104e45b7c;
            }
          }
          param_1 = 0;
          goto LAB_104e45b7c;
        }
        _objc_retain(uVar4);
        _objc_opt_class(puVar2);
        uVar3 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar2);
        if ((uVar3 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar4);
        func_0x00010beb20c0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar4);
        _objc_opt_class(puVar2);
        uVar3 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar2);
        if ((uVar3 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar4);
        func_0x00010be1a700(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x20);
      func_0x00010c2932e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar5);
      func_0x00010be83cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar1 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar1 = uVar3;
    func_0x00010c259cc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7900(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
LAB_104e45b78:
  _objc_release(uVar1);
LAB_104e45b7c:
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e45e50; end: 104e45f0b;  */

ulong FUN_104e45e50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57a18);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57a38),
       (uVar1 & 1) == 0)) &&
      (uVar1 = param_1,
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57ad8),
      (uVar1 & 1) == 0)) &&
     (((uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57af8),
       (uVar1 & 1) == 0 &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57b18),
       (uVar1 & 1) == 0)) &&
      ((uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57b38),
       (uVar1 & 1) == 0 &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57b58),
       (uVar1 & 1) == 0)))))) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e57b78);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104e45f0c; end: 104e463a7; -[SCMyProfileStoriesSectionCreator _customStoriesSectionWithStoryId:sectionType:] */

undefined * FUN_104e45f0c(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  FUN_104e45e50();
  if ((int)uVar1 == 0) {
    puVar14 = (undefined *)0x0;
    goto LAB_104e462d8;
  }
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((((((int)uVar1 == 0) && (uVar1 = param_4, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
       (uVar1 = param_4, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
      ((uVar1 = param_4, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
       (uVar1 = param_4, func_0x00010c0720c0(), (uVar1 & 1) == 0)))) &&
     (uVar1 = param_4, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    func_0x00010c0720c0();
  }
  _objc_release(param_4);
  puVar11 = PTR_PTR_1126b1230;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c243de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c08d900(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dba0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c127100(*(undefined8 *)(param_1 + 0x10));
  puVar9 = PTR_PTR_1126b1238;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c7c0();
  _objc_release(uVar2);
  lVar7 = param_1;
  func_0x00010bf8eda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194860(puVar9);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bf8ed60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194820(puVar9);
  _objc_release(lVar7);
  func_0x00010bf8ed80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194840(puVar9);
  _objc_release(param_1);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_4, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    uVar1 = param_4;
    func_0x00010c0720c0();
    _objc_release(param_4);
    if ((int)uVar1 != 0) goto LAB_104e461f0;
    puVar15 = (undefined *)0x0;
  }
  else {
    _objc_release(param_4);
LAB_104e461f0:
    puVar15 = PTR_PTR_1126b1100;
    _objc_alloc();
    puVar10 = puVar15;
    func_0x000108f58cb4();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar10;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040();
    _objc_release(puVar14);
    _objc_release(puVar10);
  }
  puVar14 = PTR_PTR_1126b1240;
  _objc_alloc();
  func_0x00010c04f840();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar14);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c1f9240(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_release(puVar11);
LAB_104e462d8:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar10);
    puVar14 = PTR_PTR_1126b1240;
    _objc_alloc();
    func_0x00010c04f840();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010c1f93c0(puVar14);
    _objc_release(puVar11);
    puVar11 = *(undefined **)(param_3 + 0x98);
    if (puVar11 != (undefined *)0x0) {
      (**(code **)(puVar11 + 0x10))(puVar11,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010c1f9240(puVar14);
      _objc_release(puVar11);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar9);
      _objc_alloc();
      puVar10 = puVar9;
      func_0x00010bf20dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar14 = puVar10;
      func_0x00010c0e0640(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011080();
      _objc_release(puVar14);
      _objc_release(puVar10);
      puVar14 = PTR_PTR_1126b1240;
      func_0x00010c29de80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c1f93c0(puVar14);
      _objc_release(puVar10);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
        ___stack_chk_fail();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar11);
        _objc_alloc();
        puVar10 = puVar11;
        func_0x00010bf20dc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar14 = puVar10;
        func_0x00010c0e0640(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011080();
        _objc_release(puVar14);
        _objc_release(puVar10);
        puVar14 = PTR_PTR_1126b1240;
        func_0x00010c29de80();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f93c0(puVar14);
        _objc_release(puVar10);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
          ___stack_chk_fail();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar14 = PTR_PTR_1126b1108;
          _objc_alloc();
          func_0x00010c04f820();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f93c0(puVar14);
          _objc_release(puVar10);
          _objc_alloc();
          func_0x00010bffe1e0();
          func_0x00010c1f9240(puVar14);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            ___stack_chk_fail();
            lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar10 = PTR_PTR_1126b1100;
            _objc_alloc();
            puVar14 = puVar10;
            func_0x0001060297bc();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar14;
            func_0x000108f728c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c043040();
            _objc_release(puVar11);
            _objc_release(puVar14);
            puVar14 = PTR_PTR_1126b1108;
            _objc_alloc();
            func_0x00010c04f820();
            puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1f93c0(puVar14);
            _objc_release(puVar11);
            puVar11 = PTR_PTR_1126b1250;
            _objc_alloc();
            func_0x00010bffe1e0();
            func_0x00010c1f9240(puVar14);
            _objc_release(puVar11);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
              ___stack_chk_fail();
              lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar14 = PTR_PTR_1126b1258;
              _objc_alloc_init();
              func_0x000108f496f4(*(undefined8 *)(puVar10 + 0x70),*(undefined8 *)(puVar10 + 0x78));
              func_0x00010c1a83a0(puVar14);
              puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010c1f93c0(puVar14);
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
                ___stack_chk_fail();
                puVar9 = PTR_PTR_1126b1218;
                lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
                _objc_retain(puVar11);
                _objc_alloc();
                uVar2 = *(undefined8 *)(puVar10 + 0x30);
                func_0x00010c0d4b00(uVar2);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = *(undefined8 *)(puVar10 + 0x38);
                func_0x00010c243de0(uVar3);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = *(undefined8 *)(puVar10 + 0x40);
                func_0x00010c08d900(uVar4);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = *(undefined8 *)(puVar10 + 0x48);
                func_0x00010c25aae0(uVar5);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = *(undefined8 *)(puVar10 + 0x20);
                func_0x00010c2932e0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = *(undefined8 *)(puVar10 + 0x20);
                func_0x00010c1176a0();
                _objc_retainAutoreleasedReturnValue();
                puVar14 = puVar10 + 0x18;
                _objc_loadWeakRetained();
                puVar15 = puVar14;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c04dbc0();
                _objc_release(puVar11);
                _objc_release(puVar15);
                _objc_release(puVar14);
                _objc_release(uVar12);
                _objc_release(uVar6);
                _objc_release(uVar5);
                _objc_release(uVar4);
                _objc_release(uVar3);
                _objc_release(uVar2);
                puVar11 = PTR_PTR_1126b1238;
                _objc_alloc(PTR_PTR_1126b1238);
                uVar2 = *(undefined8 *)(puVar10 + 0x48);
                func_0x00010c25aae0(uVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c01c7c0(puVar11);
                _objc_release(uVar2);
                puVar14 = PTR_PTR_1126b1240;
                _objc_alloc(PTR_PTR_1126b1240);
                func_0x00010c04f840();
                puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1f93c0(puVar14);
                _objc_release(puVar10);
                func_0x00010c1f9240(puVar14);
                _objc_release(puVar11);
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
                  ___stack_chk_fail();
                  return *(undefined **)(puVar9 + 0xa0);
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 104e463a8; end: 104e464bf; -[SCMyProfileStoriesSectionCreator _publicStoriesSectionWithBusinessId:] */

undefined * FUN_104e463a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1240;
  _objc_alloc();
  func_0x00010c04f840();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1f93c0(puVar1);
  _objc_release(puVar2);
  puVar2 = *(undefined **)(param_1 + 0x98);
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1f9240(puVar1);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar3);
    _objc_alloc();
    puVar1 = puVar3;
    func_0x00010bf20dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = puVar1;
    func_0x00010c0e0640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011080();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1240;
    func_0x00010c29de80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1f93c0(puVar1);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar3);
      _objc_alloc();
      puVar1 = puVar3;
      func_0x00010bf20dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar2 = puVar1;
      func_0x00010c0e0640(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011080();
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b1240;
      func_0x00010c29de80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f93c0(puVar1);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar1 = PTR_PTR_1126b1108;
        _objc_alloc();
        func_0x00010c04f820();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f93c0(puVar1);
        _objc_release(puVar2);
        _objc_alloc();
        func_0x00010bffe1e0();
        func_0x00010c1f9240(puVar1);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          ___stack_chk_fail();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar2 = PTR_PTR_1126b1100;
          _objc_alloc();
          puVar1 = puVar2;
          func_0x0001060297bc();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x000108f728c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c043040();
          _objc_release(puVar3);
          _objc_release(puVar1);
          puVar1 = PTR_PTR_1126b1108;
          _objc_alloc();
          func_0x00010c04f820();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f93c0(puVar1);
          _objc_release(puVar3);
          puVar3 = PTR_PTR_1126b1250;
          _objc_alloc();
          func_0x00010bffe1e0();
          func_0x00010c1f9240(puVar1);
          _objc_release(puVar3);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
            ___stack_chk_fail();
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar1 = PTR_PTR_1126b1258;
            _objc_alloc_init();
            func_0x000108f496f4(*(undefined8 *)(puVar2 + 0x70),*(undefined8 *)(puVar2 + 0x78));
            func_0x00010c1a83a0(puVar1);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c1f93c0(puVar1);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
              ___stack_chk_fail();
              puVar4 = PTR_PTR_1126b1218;
              lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
              _objc_retain(puVar3);
              _objc_alloc();
              uVar5 = *(undefined8 *)(puVar2 + 0x30);
              func_0x00010c0d4b00(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = *(undefined8 *)(puVar2 + 0x38);
              func_0x00010c243de0(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(puVar2 + 0x40);
              func_0x00010c08d900(uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = *(undefined8 *)(puVar2 + 0x48);
              func_0x00010c25aae0(uVar8);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = *(undefined8 *)(puVar2 + 0x20);
              func_0x00010c2932e0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = *(undefined8 *)(puVar2 + 0x20);
              func_0x00010c1176a0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar2 + 0x18;
              _objc_loadWeakRetained();
              puVar11 = puVar1;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c04dbc0();
              _objc_release(puVar3);
              _objc_release(puVar11);
              _objc_release(puVar1);
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
              puVar3 = PTR_PTR_1126b1238;
              _objc_alloc(PTR_PTR_1126b1238);
              uVar5 = *(undefined8 *)(puVar2 + 0x48);
              func_0x00010c25aae0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c01c7c0(puVar3);
              _objc_release(uVar5);
              puVar1 = PTR_PTR_1126b1240;
              _objc_alloc(PTR_PTR_1126b1240);
              func_0x00010c04f840();
              puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1f93c0(puVar1);
              _objc_release(puVar2);
              func_0x00010c1f9240(puVar1);
              _objc_release(puVar3);
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
                ___stack_chk_fail();
                return *(undefined **)(puVar4 + 0xa0);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 104e464c0; end: 104e4660b; -[SCMyProfileStoriesSectionCreator _generalStoriesViewMoreSectionWithConfiguration:] */

undefined * FUN_104e464c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar5 = param_3;
  func_0x00010bf20dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar5;
  func_0x00010c0e0640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011080();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b1240;
  func_0x00010c29de80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1f93c0(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar3);
    _objc_alloc();
    puVar1 = puVar3;
    func_0x00010bf20dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = puVar1;
    func_0x00010c0e0640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011080();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1240;
    func_0x00010c29de80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar1);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = PTR_PTR_1126b1108;
      _objc_alloc();
      func_0x00010c04f820();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f93c0(puVar1);
      _objc_release(puVar2);
      _objc_alloc();
      func_0x00010bffe1e0();
      func_0x00010c1f9240(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar2 = PTR_PTR_1126b1100;
        _objc_alloc();
        puVar1 = puVar2;
        func_0x0001060297bc();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x000108f728c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c043040();
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126b1108;
        _objc_alloc();
        func_0x00010c04f820();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f93c0(puVar1);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126b1250;
        _objc_alloc();
        func_0x00010bffe1e0();
        func_0x00010c1f9240(puVar1);
        _objc_release(puVar3);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          ___stack_chk_fail();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar1 = PTR_PTR_1126b1258;
          _objc_alloc_init();
          func_0x000108f496f4(*(undefined8 *)(puVar2 + 0x70),*(undefined8 *)(puVar2 + 0x78));
          func_0x00010c1a83a0(puVar1);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c1f93c0(puVar1);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
            ___stack_chk_fail();
            puVar4 = PTR_PTR_1126b1218;
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            _objc_retain(puVar3);
            _objc_alloc();
            uVar5 = *(undefined8 *)(puVar2 + 0x30);
            func_0x00010c0d4b00(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = *(undefined8 *)(puVar2 + 0x38);
            func_0x00010c243de0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(puVar2 + 0x40);
            func_0x00010c08d900(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(puVar2 + 0x48);
            func_0x00010c25aae0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(puVar2 + 0x20);
            func_0x00010c2932e0();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = *(undefined8 *)(puVar2 + 0x20);
            func_0x00010c1176a0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar2 + 0x18;
            _objc_loadWeakRetained();
            puVar11 = puVar1;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04dbc0();
            _objc_release(puVar3);
            _objc_release(puVar11);
            _objc_release(puVar1);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar5);
            puVar3 = PTR_PTR_1126b1238;
            _objc_alloc(PTR_PTR_1126b1238);
            uVar5 = *(undefined8 *)(puVar2 + 0x48);
            func_0x00010c25aae0(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01c7c0(puVar3);
            _objc_release(uVar5);
            puVar1 = PTR_PTR_1126b1240;
            _objc_alloc(PTR_PTR_1126b1240);
            func_0x00010c04f840();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1f93c0(puVar1);
            _objc_release(puVar2);
            func_0x00010c1f9240(puVar1);
            _objc_release(puVar3);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
              ___stack_chk_fail();
              return *(undefined **)(puVar4 + 0xa0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 104e4660c; end: 104e46757; -[SCMyProfileStoriesSectionCreator _sharedStoriesViewMoreSectionWithConfiguration:] */

undefined * FUN_104e4660c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar5 = param_3;
  func_0x00010bf20dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar5;
  func_0x00010c0e0640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011080();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b1240;
  func_0x00010c29de80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar1);
    _objc_release(puVar2);
    _objc_alloc();
    func_0x00010bffe1e0();
    func_0x00010c1f9240(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar2 = PTR_PTR_1126b1100;
      _objc_alloc();
      puVar1 = puVar2;
      func_0x0001060297bc();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x000108f728c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043040();
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b1108;
      _objc_alloc();
      func_0x00010c04f820();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f93c0(puVar1);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b1250;
      _objc_alloc();
      func_0x00010bffe1e0();
      func_0x00010c1f9240(puVar1);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar1 = PTR_PTR_1126b1258;
        _objc_alloc_init();
        func_0x000108f496f4(*(undefined8 *)(puVar2 + 0x70),*(undefined8 *)(puVar2 + 0x78));
        func_0x00010c1a83a0(puVar1);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c1f93c0(puVar1);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          ___stack_chk_fail();
          puVar4 = PTR_PTR_1126b1218;
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(puVar3);
          _objc_alloc();
          uVar5 = *(undefined8 *)(puVar2 + 0x30);
          func_0x00010c0d4b00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(puVar2 + 0x38);
          func_0x00010c243de0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(puVar2 + 0x40);
          func_0x00010c08d900(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(puVar2 + 0x48);
          func_0x00010c25aae0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(puVar2 + 0x20);
          func_0x00010c2932e0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(puVar2 + 0x20);
          func_0x00010c1176a0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2 + 0x18;
          _objc_loadWeakRetained();
          puVar11 = puVar1;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04dbc0();
          _objc_release(puVar3);
          _objc_release(puVar11);
          _objc_release(puVar1);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          puVar3 = PTR_PTR_1126b1238;
          _objc_alloc(PTR_PTR_1126b1238);
          uVar5 = *(undefined8 *)(puVar2 + 0x48);
          func_0x00010c25aae0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01c7c0(puVar3);
          _objc_release(uVar5);
          puVar1 = PTR_PTR_1126b1240;
          _objc_alloc(PTR_PTR_1126b1240);
          func_0x00010c04f840();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f93c0(puVar1);
          _objc_release(puVar2);
          func_0x00010c1f9240(puVar1);
          _objc_release(puVar3);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
            ___stack_chk_fail();
            return *(undefined **)(puVar4 + 0xa0);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 104e46758; end: 104e4684f; -[SCMyProfileStoriesSectionCreator _spotlightFavoriteManagementSection] */

undefined * FUN_104e46758(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1);
  _objc_release(puVar2);
  _objc_alloc();
  func_0x00010bffe1e0();
  func_0x00010c1f9240(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126b1100;
    _objc_alloc();
    puVar1 = puVar2;
    func_0x0001060297bc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b1250;
    _objc_alloc();
    func_0x00010bffe1e0();
    func_0x00010c1f9240(puVar1);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = PTR_PTR_1126b1258;
      _objc_alloc_init();
      func_0x000108f496f4(*(undefined8 *)(puVar2 + 0x70),*(undefined8 *)(puVar2 + 0x78));
      func_0x00010c1a83a0(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c1f93c0(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        puVar4 = PTR_PTR_1126b1218;
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar3);
        _objc_alloc();
        uVar5 = *(undefined8 *)(puVar2 + 0x30);
        func_0x00010c0d4b00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(puVar2 + 0x38);
        func_0x00010c243de0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(puVar2 + 0x40);
        func_0x00010c08d900(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(puVar2 + 0x48);
        func_0x00010c25aae0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(puVar2 + 0x20);
        func_0x00010c2932e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(puVar2 + 0x20);
        func_0x00010c1176a0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2 + 0x18;
        _objc_loadWeakRetained();
        puVar11 = puVar1;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04dbc0();
        _objc_release(puVar3);
        _objc_release(puVar11);
        _objc_release(puVar1);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar3 = PTR_PTR_1126b1238;
        _objc_alloc(PTR_PTR_1126b1238);
        uVar5 = *(undefined8 *)(puVar2 + 0x48);
        func_0x00010c25aae0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c7c0(puVar3);
        _objc_release(uVar5);
        puVar1 = PTR_PTR_1126b1240;
        _objc_alloc(PTR_PTR_1126b1240);
        func_0x00010c04f840();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f93c0(puVar1);
        _objc_release(puVar2);
        func_0x00010c1f9240(puVar1);
        _objc_release(puVar3);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          ___stack_chk_fail();
          return *(undefined **)(puVar4 + 0xa0);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 104e46850; end: 104e4699f; -[SCMyProfileStoriesSectionCreator _spotlightSection] */

undefined * FUN_104e46850(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x0001060297bc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1250;
  _objc_alloc();
  func_0x00010bffe1e0();
  func_0x00010c1f9240(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126b1258;
    _objc_alloc_init();
    func_0x000108f496f4(*(undefined8 *)(puVar1 + 0x70),*(undefined8 *)(puVar1 + 0x78));
    func_0x00010c1a83a0(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c1f93c0(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      puVar4 = PTR_PTR_1126b1218;
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar3);
      _objc_alloc();
      uVar5 = *(undefined8 *)(puVar1 + 0x30);
      func_0x00010c0d4b00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(puVar1 + 0x38);
      func_0x00010c243de0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(puVar1 + 0x40);
      func_0x00010c08d900(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar1 + 0x48);
      func_0x00010c25aae0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar1 + 0x20);
      func_0x00010c2932e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(puVar1 + 0x20);
      func_0x00010c1176a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1 + 0x18;
      _objc_loadWeakRetained();
      puVar11 = puVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dbc0();
      _objc_release(puVar3);
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      puVar3 = PTR_PTR_1126b1238;
      _objc_alloc(PTR_PTR_1126b1238);
      uVar5 = *(undefined8 *)(puVar1 + 0x48);
      func_0x00010c25aae0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c7c0(puVar3);
      _objc_release(uVar5);
      puVar2 = PTR_PTR_1126b1240;
      _objc_alloc(PTR_PTR_1126b1240);
      func_0x00010c04f840();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f93c0(puVar2);
      _objc_release(puVar1);
      func_0x00010c1f9240(puVar2);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        return *(undefined **)(puVar4 + 0xa0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 104e469a0; end: 104e46a6f; -[SCMyProfileStoriesSectionCreator _customStoriesHorizontalCreationSection] */

undefined * FUN_104e469a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1258;
  _objc_alloc_init();
  func_0x000108f496f4(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
  func_0x00010c1a83a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c1f93c0(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126b1218;
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar11);
    _objc_alloc();
    uVar4 = *(undefined8 *)(puVar2 + 0x30);
    func_0x00010c0d4b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + 0x38);
    func_0x00010c243de0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar2 + 0x40);
    func_0x00010c08d900(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar2 + 0x48);
    func_0x00010c25aae0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c2932e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2 + 0x18;
    _objc_loadWeakRetained();
    puVar10 = puVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dbc0();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar11 = PTR_PTR_1126b1238;
    _objc_alloc(PTR_PTR_1126b1238);
    uVar4 = *(undefined8 *)(puVar2 + 0x48);
    func_0x00010c25aae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c7c0(puVar11);
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b1240;
    _objc_alloc(PTR_PTR_1126b1240);
    func_0x00010c04f840();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar1);
    _objc_release(puVar2);
    func_0x00010c1f9240(puVar1);
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      return *(undefined **)(puVar3 + 0xa0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 104e46a70; end: 104e46cff; -[SCMyProfileStoriesSectionCreator _repostStoriesSectionWithStoryId:] */

undefined * FUN_104e46a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b1218;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d4b00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c243de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c08d900(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c25aae0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dbc0(puVar1,param_2,param_3,10,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,lVar9,
                      *(undefined8 *)(param_1 + 0x70),1);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar10 = PTR_PTR_1126b1238;
  _objc_alloc(PTR_PTR_1126b1238);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c25aae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c7c0(puVar10,param_2,uVar3,puVar1,0,uVar2,*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x90));
  _objc_release(uVar2);
  puVar11 = PTR_PTR_1126b1240;
  _objc_alloc(PTR_PTR_1126b1240);
  func_0x00010c04f840();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e9c0b8;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar11,param_2,puVar12);
  _objc_release(puVar12);
  func_0x00010c1f9240(puVar11,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 0xa0);
}



/* Entry: 104e46d00; end: 104e46d07; -[SCMyProfileStoriesSectionCreator emptyStateBitmojiUserId] */

undefined8 FUN_104e46d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 104e46d08; end: 104e46d0f; -[SCMyProfileStoriesSectionCreator setEmptyStateBitmojiUserId:] */

void FUN_104e46d08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104e46d10; end: 104e46d17; -[SCMyProfileStoriesSectionCreator emptyStateBitmojiAvatarId] */

undefined8 FUN_104e46d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 104e46d18; end: 104e46d1f; -[SCMyProfileStoriesSectionCreator setEmptyStateBitmojiAvatarId:] */

void FUN_104e46d18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104e46d20; end: 104e46d27; -[SCMyProfileStoriesSectionCreator emptyStateBitmojiSelfieId] */

undefined8 FUN_104e46d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 104e46d28; end: 104e46d2f; -[SCMyProfileStoriesSectionCreator setEmptyStateBitmojiSelfieId:] */

void FUN_104e46d28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104e46d30; end: 104e46e4b; -[SCMyProfileStoriesSectionCreator .cxx_destruct] */

void FUN_104e46d30(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e46e4c; end: 104e46f3f;  */

void FUN_104e46e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  uVar2 = 0;
  func_0x000106639598(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055bc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e57a98,
                      &PTR____CFConstantStringClassReference_110e57a98,0,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e46f40; end: 104e4736f; -[SCMyProfileStoriesSectionDescriptorProvider initWithUserSession:newStoryActionsManager:circumstanceEngine:complianceEngine:myStoriesServices:snapProUserProfileIdProvider:snapProProfilesProvider:storiesConfigProvider:] */

undefined8 *
FUN_104e46f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126e47d0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar1[10] = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1 + 0xe;
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bfdc4a0();
    *(char *)(puVar1 + 0x10) = (char)uVar7;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = puVar1[4];
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104e47370;
    puStack_98 = &UNK_110842a38;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    uVar7 = puVar1[9];
    func_0x00010c0d9100(uVar7);
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar2 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    uVar7 = puVar1[0xb];
    func_0x00010c0d4b00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
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



/* Entry: 104e47370; end: 104e4749b;  */

void FUN_104e47370(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(lVar1 + 0x40) = (char)uVar2;
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8ac40();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e4749c; end: 104e474cb;  */

void FUN_104e4749c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e474cc; end: 104e4765b; -[SCMyProfileStoriesSectionDescriptorProvider fetchSectionDescriptors:updateReason:updatingQueue:] */

void FUN_104e474cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (param_4 == 1) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104e4765c;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    func_0x00010bedf520(param_1);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(puVar1);
    _objc_retain(param_3);
    func_0x00010be146e0(param_1);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104e4765c; end: 104e47667;  */

void FUN_104e4765c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reloadSectionWithUpdateReason__1125804b0,2);
  return;
}



/* Entry: 104e47668; end: 104e476d3;  */

void FUN_104e47668(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf520();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e476d4; end: 104e4796b; -[SCMyProfileStoriesSectionDescriptorProvider _fetchStoriesAndCustomStoryMetadataWithCompletion:completionQueue:] */

void FUN_104e476d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_104e4796c;
  uStack_80 = 0x104e4797c;
  uStack_78 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0d4b00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104e47984;
  puStack_b8 = &UNK_110853230;
  puStack_a8 = &uStack_a0;
  _objc_retain(uVar2);
  uStack_b0 = uVar2;
  func_0x00010c11d120(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = uVar2;
  _dispatch_group_enter(uVar2);
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_104e4796c;
  uStack_e0 = 0x104e4797c;
  uStack_d8 = 0;
  func_0x000107d6fa04();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x104e479e0;
  puStack_118 = &UNK_110853260;
  puStack_108 = &uStack_100;
  _objc_retain(uVar2);
  uStack_110 = uVar2;
  func_0x00010bf625a0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_104e47a3c;
  puStack_150 = &UNK_110849cb0;
  puStack_140 = &uStack_a0;
  uStack_148 = param_3;
  puStack_138 = &uStack_100;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,param_4,&puStack_168);
  _objc_release(uStack_148);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 104e4796c; end: 104e47983;  */

void FUN_104e4796c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e47984; end: 104e47a3b;  */

void FUN_104e47984(long param_1,undefined8 param_2)

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



/* Entry: 104e47a3c; end: 104e47a5f;  */

void FUN_104e47a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e47a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 104e47a60; end: 104e47aa3; -[SCMyProfileStoriesSectionDescriptorProvider _isStoryActive:] */

bool FUN_104e47a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c25b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 104e47aa4; end: 104e47ab3; -[SCMyProfileStoriesSectionDescriptorProvider _sortByMostRecentSnapTimestamp:] */

void FUN_104e47aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sortUsingComparator__11266f510,&PTR___NSConcreteGlobalBlock_1108532b0);
  return;
}



/* Entry: 104e47ab4; end: 104e47bdb;  */

undefined8 FUN_104e47ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  uVar1 = param_3;
  func_0x00010c25b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010bf433a0(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 104e47bdc; end: 104e47c5b; -[SCMyProfileStoriesSectionDescriptorProvider _sortByLastPostTime:customStoriesByStoryId:] */

void FUN_104e47bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e47c5c;
  puStack_30 = &UNK_1108532d0;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c246ba0(param_3,param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e47c5c; end: 104e47d9b;  */

undefined8 FUN_104e47c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d10a0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0d10a0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf433a0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 104e47d9c; end: 104e48cb3; -[SCMyProfileStoriesSectionDescriptorProvider _updateSectionsWithStories:customStoriesByStoryId:preStoriesSectionDescriptors:updatingBlock:] */

long FUN_104e47d9c(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined **ppuVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_230 = puVar5;
  _objc_opt_new();
  lVar7 = param_1 + 0x70;
  puStack_238 = puVar6;
  _objc_loadWeakRetained();
  lVar30 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar30;
  func_0x00010c073920();
  _objc_release(lVar30);
  _objc_release(lVar7);
  if (*(long *)(param_1 + 0x50) == 2) {
    uVar23 = *(ulong *)(param_1 + 0x10);
    func_0x000108f496f4(uVar23,*(undefined8 *)(param_1 + 0x18));
    puVar5 = PTR_PTR_1126b1260;
    if ((uVar23 & 1) == 0) {
      _objc_retain(&PTR____CFConstantStringClassReference_110e57b98);
      _objc_alloc(puVar5);
      uVar8 = 0;
      func_0x000106639468(0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055bc0(puVar5);
      _objc_release(&PTR____CFConstantStringClassReference_110e57b98);
      _objc_release(uVar8);
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1270;
  func_0x00010c117140(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf1f320();
  _objc_release(puVar5);
  _objc_release(uVar9);
  if ((int)uVar8 != 0) {
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar30 = *plStack_1b0;
      do {
        lVar31 = 0;
        do {
          if (*plStack_1b0 != lVar30) {
            _objc_enumerationMutation(param_3);
          }
          lVar29 = *(long *)(lStack_1b8 + lVar31 * 8);
          lVar27 = lVar29;
          func_0x00010c25b720();
          if (lVar27 == 1) {
            func_0x000107d17768();
            if ((int)lVar29 != 0) {
              uVar9 = *(undefined8 *)(param_1 + 8);
              func_0x00010c2923e0(uVar9);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR_PTR_1126b1260;
              _objc_retain();
              _objc_alloc(puVar5);
              ppuVar26 = &PTR____CFConstantStringClassReference_110e57bd8;
              func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e57bd8);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar9;
              func_0x000107d1fa6c(uVar9,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar9);
              func_0x00010c055bc0(puVar5);
              _objc_release(uVar8);
              _objc_release(ppuVar26);
              func_0x00010befa120(puVar2);
              _objc_release(puVar5);
              _objc_release(uVar9);
            }
            goto LAB_104e480c8;
          }
          lVar31 = lVar31 + 1;
        } while (lVar7 != lVar31);
        lVar7 = param_3;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
LAB_104e480c8:
    _objc_release(param_3);
  }
  if ((((uint)lVar32 | *(byte *)(param_1 + 0x80) ^ 0xffffffff) & 1) == 0) {
    uVar23 = *(ulong *)(param_1 + 0x10);
    func_0x000108f49618(uVar23,*(undefined8 *)(param_1 + 0x18));
    if ((uVar23 & 1) == 0) {
      uVar10 = *(ulong *)(param_1 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar10;
      func_0x00010c080fe0();
      _objc_release(uVar10);
      if ((uVar23 & 1) == 0) {
        lVar7 = param_1 + 0x70;
        _objc_loadWeakRetained();
        lVar30 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar32 = lVar30;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar30);
        _objc_release(lVar7);
        lVar7 = lVar32;
        func_0x00010c08fa60();
        puVar5 = PTR_PTR_1126b1260;
        if (lVar7 != 0) {
          ppuVar26 = &PTR____CFConstantStringClassReference_110e57bb8;
          _objc_retain(lVar32);
          _objc_alloc(puVar5);
          func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e57bb8);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar32;
          func_0x000107d1fa6c(lVar32,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar32);
          func_0x00010c055bc0(puVar5);
          _objc_release(lVar7);
          _objc_release(ppuVar26);
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
        }
        _objc_release(lVar32);
      }
    }
  }
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar30 = *plStack_1f0;
    do {
      lVar32 = 0;
      do {
        if (*plStack_1f0 != lVar30) {
          _objc_enumerationMutation(param_3);
        }
        lVar27 = *(long *)(lStack_1f8 + lVar32 * 8);
        lVar31 = lVar27;
        func_0x00010c25b720();
        if (lVar31 == 2) {
          lVar31 = lVar27;
          func_0x00010c259cc0(lVar27);
          _objc_retainAutoreleasedReturnValue();
          ppuVar26 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar31);
          ppuVar11 = ppuVar26;
          func_0x00010c27dd80();
          if ((ppuVar11 == (undefined **)0x6) ||
             (ppuVar11 = ppuVar26, func_0x00010c27dd80(), ppuVar11 == (undefined **)0xa)) {
            uVar23 = *(ulong *)(param_1 + 0x10);
            func_0x000108f496f4(uVar23,*(undefined8 *)(param_1 + 0x18));
joined_r0x000104e482cc:
            if ((uVar23 & 1) == 0) {
              lVar31 = param_1;
              func_0x00010be443c0();
              ppuVar11 = &puStack_230;
              if ((int)lVar31 == 0) {
                ppuVar11 = &puStack_238;
              }
              ppuVar11 = (undefined **)*ppuVar11;
LAB_104e482e8:
              func_0x00010befa120(ppuVar11);
            }
          }
          else {
            ppuVar11 = ppuVar26;
            func_0x00010c27dd80();
            if (ppuVar11 != (undefined **)0x7) {
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              lVar31 = lVar27;
              func_0x00010bf529e0();
              _objc_release(lVar27);
              puVar5 = PTR_PTR_1126b0e28;
              ppuVar11 = ppuVar3;
              if (lVar31 == 0) {
                uVar8 = *(undefined8 *)(param_1 + 8);
                func_0x00010c2923e0(uVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2315c0();
                _objc_release(uVar8);
                ppuVar11 = ppuVar4;
                if (((ulong)puVar5 & 1) == 0) goto LAB_104e482f0;
              }
              goto LAB_104e482e8;
            }
            iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
            func_0x000108060890();
            if (iVar1 != 0) {
              uVar23 = *(ulong *)(param_1 + 0x10);
              func_0x000108f497bc(uVar23,*(undefined8 *)(param_1 + 0x18));
              goto joined_r0x000104e482cc;
            }
          }
LAB_104e482f0:
          _objc_release(ppuVar26);
        }
        lVar32 = lVar32 + 1;
      } while (lVar7 != lVar32);
      lVar7 = param_3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(param_3);
  func_0x00010bebdfa0(param_1);
  func_0x00010bebdfc0(param_1);
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_104e48cb4;
  puStack_210 = &UNK_1108532d0;
  _objc_retain(param_4);
  puVar5 = puStack_238;
  ppuStack_208 = param_4;
  func_0x00010c246ba0(puStack_238);
  puVar6 = puStack_230;
  func_0x00010bebdfc0(param_1);
  ppuVar26 = ppuVar3;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar26;
  func_0x00010c0d3c80();
  _objc_release(ppuVar26);
  func_0x00010bebdfc0(param_1);
  ppuVar26 = ppuVar4;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar26;
  func_0x00010c0d3c80();
  _objc_release(ppuVar26);
  func_0x00010bebdfa0(param_1);
  ppuVar26 = ppuVar11;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0(puVar6);
  func_0x00010c12adc0(puVar5);
  func_0x00010bf529e0(ppuVar26);
  lVar7 = param_1;
  func_0x00010bdd86a0();
  if (0 < lVar7) {
    lVar30 = 0;
    ppuStack_280 = &PTR____CFConstantStringClassReference_110e57a18;
    ppuStack_278 = &PTR____CFConstantStringClassReference_110e57ad8;
    do {
      ppuVar13 = ppuVar26;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar25 = ppuVar13;
      func_0x00010c25b720();
      if (ppuVar25 != (undefined **)0x1) {
        ppuVar25 = ppuVar13;
        func_0x00010c259cc0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar25);
        if ((ppuVar14 != (undefined **)0x0) &&
           (ppuVar25 = ppuVar14, func_0x00010c27dd80(), ppuVar25 < (undefined **)0xb)) {
          ppuVar15 = ppuVar13;
          if ((1L << ((ulong)ppuVar25 & 0x3f) & 0x4c0U) == 0) {
            if ((1L << ((ulong)ppuVar25 & 0x3f) & 0x24U) == 0) {
              if (ppuVar25 != (undefined **)0x1) goto LAB_104e487d8;
              func_0x00010c259cc0(ppuVar13);
              _objc_retainAutoreleasedReturnValue();
              puStack_270 = PTR_PTR_1126b1260;
              _objc_retain();
              _objc_alloc();
              ppuVar28 = &PTR____CFConstantStringClassReference_110e57a38;
            }
            else {
              func_0x00010c259cc0(ppuVar13);
              _objc_retainAutoreleasedReturnValue();
              puStack_270 = PTR_PTR_1126b1260;
              _objc_retain();
              _objc_alloc();
              ppuVar28 = ppuStack_280;
            }
            func_0x00010c25ce40(ppuVar28);
            _objc_retainAutoreleasedReturnValue();
            ppuVar25 = ppuVar15;
            func_0x000107d1fa6c(ppuVar15,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar15);
            func_0x00010c055bc0(puStack_270);
          }
          else {
            func_0x00010c259cc0(ppuVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(param_1 + 0x10);
            _objc_retain();
            _objc_retain(ppuVar14);
            _objc_retain(uVar8);
            _objc_retain(&PTR____CFConstantStringClassReference_110e57ad8);
            ppuVar25 = ppuVar14;
            func_0x00010c27dd80();
            if (ppuVar25 == (undefined **)0xa) {
              ppuVar25 = &PTR_PTR_110930960;
LAB_104e48704:
              ppuVar25 = (undefined **)*ppuVar25;
              _objc_retain(ppuVar25);
              _objc_release(&PTR____CFConstantStringClassReference_110e57ad8);
            }
            else {
              ppuVar28 = ppuVar14;
              func_0x00010c27dd80();
              ppuVar25 = ppuStack_278;
              if (ppuVar28 == (undefined **)0x7) {
                ppuVar25 = &PTR_PTR_110930968;
                goto LAB_104e48704;
              }
            }
            puStack_270 = PTR_PTR_1126b1260;
            _objc_alloc(PTR_PTR_1126b1260);
            ppuVar28 = ppuVar25;
            func_0x00010c25ce40(ppuVar25);
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar15;
            func_0x000107d1fa6c(ppuVar15,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c055bc0(puStack_270);
            _objc_release(ppuVar16);
            _objc_release(ppuVar28);
            _objc_release(ppuVar25);
            _objc_release(uVar8);
            ppuVar28 = ppuVar15;
            ppuVar25 = ppuVar14;
          }
          _objc_release(ppuVar25);
          _objc_release(ppuVar28);
          func_0x00010befa120(puVar2);
          _objc_release(puStack_270);
          _objc_release(ppuVar15);
        }
LAB_104e487d8:
        _objc_release(ppuVar14);
      }
      _objc_release(ppuVar13);
      lVar30 = lVar30 + 1;
    } while (lVar7 != lVar30);
  }
  ppuVar13 = ppuVar26;
  func_0x00010bf529e0();
  if ((undefined **)0x2 < ppuVar13) {
    func_0x00010bf529e0(puStack_230);
    puVar5 = PTR_PTR_1126b1260;
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    _objc_alloc(puVar5);
    puVar6 = PTR_PTR_1126b1228;
    _objc_alloc(PTR_PTR_1126b1228);
    puVar17 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(0,0x4030000000000000,0x4024000000000000,0x4030000000000000,
                        PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126b1268;
    _objc_alloc(PTR_PTR_1126b1268);
    func_0x00010c030be0();
    _objc_release(uVar8);
    func_0x00010c01e3c0(puVar6);
    func_0x00010c055bc0(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar18);
    _objc_release(puVar17);
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001009703d0(uVar8,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar8 == 0) {
LAB_104e48964:
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x0001005929c0();
    if (iVar1 == 0) goto LAB_104e48964;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    puVar5 = PTR_PTR_1126b1278;
    func_0x00010c11a620(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf926c0();
    iVar1 = (int)uVar8;
    _objc_release(uVar9);
    _objc_release(puVar5);
  }
  func_0x00010bf529e0();
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar6;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1228;
    _objc_opt_class(PTR_PTR_1126b1228);
    puVar18 = puVar17;
    _objc_opt_isKindOfClass(puVar17,puVar5);
    puVar5 = puVar17;
    if (((ulong)puVar18 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126b1260;
    _objc_alloc();
    puVar18 = puVar6;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar6;
    func_0x00010bfe5ec0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86240();
    puVar20 = puVar5;
    func_0x00010c259cc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar5;
    func_0x00010bf20dc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar21;
    func_0x00010c0e0640(puVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x000107d1fb3c(puVar20,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar17);
    _objc_release(puVar22);
    _objc_release(puVar5);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    func_0x00010c1d04c0(puVar2);
    _objc_release(puVar17);
    _objc_release(puVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010befa160();
  uVar8 = 0x19;
  func_0x00010663970c(0x19,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5);
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (iVar1 == 0) {
LAB_104e48b60:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x0001005929c0();
    if (iVar1 == 0) goto LAB_104e48bac;
    uVar23 = *(ulong *)(param_1 + 0x10);
    func_0x000108f4a1f0();
    if ((uVar23 & 1) != 0) goto LAB_104e48bac;
    func_0x000104e46ec4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x0001005929c0();
    if (iVar1 == 0) goto LAB_104e48b60;
    uVar23 = *(ulong *)(param_1 + 0x10);
    func_0x000108f4a1f0();
    if ((uVar23 & 1) != 0) goto LAB_104e48b60;
    func_0x000104e46e4c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120(puVar6);
  _objc_release(uVar23);
LAB_104e48bac:
  uVar9 = 0x1c;
  func_0x00010663970c(0x1c,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010befa160(puVar5);
  _objc_release(uVar9);
  puVar17 = puVar5;
  func_0x00010bf51e00();
  puVar18 = puVar17;
  (**(code **)(param_6 + 0x10))(param_6,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar26);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuStack_208);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar30 = *(long *)(param_3 + 0x20);
  _objc_retain(uVar8);
  func_0x00010c259cc0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar30);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar30;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  _objc_release(puVar18);
  uVar24 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = uVar8;
  func_0x00010c259cc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  func_0x00010c0e00e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar24;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar24);
  _objc_release(uVar9);
  lVar30 = lVar7;
  func_0x00010bf433a0(lVar7);
  _objc_release(uVar8);
  _objc_release(lVar7);
  return lVar30;
}



/* Entry: 104e48cb4; end: 104e48dbb;  */

undefined8 FUN_104e48cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 104e48dbc; end: 104e48ef3; -[SCMyProfileStoriesSectionDescriptorProvider _spotlightSections] */

void FUN_104e48dbc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001009703d0(uVar3,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar3 == 0) {
LAB_104e48e78:
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
LAB_104e48e84:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005929c0();
    if ((int)uVar3 == 0) goto LAB_104e48eb4;
    func_0x000104e46ec4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x0001005929c0();
    if ((uVar2 & 1) == 0) goto LAB_104e48e78;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4 = PTR_PTR_1126b1278;
    func_0x00010c11a620(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf926c0();
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    if ((int)uVar3 == 0) goto LAB_104e48e84;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005929c0();
    if ((int)uVar3 == 0) goto LAB_104e48e84;
    FUN_104e46e4c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120(puVar4);
  _objc_release(uVar3);
LAB_104e48eb4:
  func_0x00010befa160(puVar1);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104e48ef4; end: 104e49017; -[SCMyProfileStoriesSectionDescriptorProvider didUpdateMyStoriesDataRequest:] */

void FUN_104e48ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e49018;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0be260(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e49018; end: 104e490a7;  */

void FUN_104e49018(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e490a8;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e490a8; end: 104e490d7;  */

void FUN_104e490a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e490d8; end: 104e491eb;  */

void FUN_104e490d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    lVar1 = param_4;
    func_0x00010bf25140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if (iVar2 != 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_104e491ec;
      puStack_50 = &UNK_1108434b0;
      _objc_copyWeak(auStack_48,param_1 + 0x28);
      func_0x0001000d76cc("APPSTORE",&puStack_68);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104e491ec; end: 104e4921b;  */

void FUN_104e491ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4921c; end: 104e4925f; -[SCMyProfileStoriesSectionDescriptorProvider _reloadSectionWithUpdateReason:] */

void FUN_104e4921c(long param_1)

{
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e49260; end: 104e49273; -[SCMyProfileStoriesSectionDescriptorProvider _calculateGroupsCountToshowWithExpandedState:threshold:storyCount:] */

ulong FUN_104e49260(undefined8 param_1,undefined8 param_2,int param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  
  uVar1 = param_5;
  if (param_4 <= param_5) {
    uVar1 = param_4;
  }
  if (param_3 == 0) {
    param_5 = uVar1;
  }
  return param_5;
}



/* Entry: 104e49274; end: 104e4928b; -[SCMyProfileStoriesSectionDescriptorProvider delegate] */

void FUN_104e49274(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e4928c; end: 104e49297; -[SCMyProfileStoriesSectionDescriptorProvider setDelegate:] */

void FUN_104e4928c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 104e49298; end: 104e49367; -[SCMyProfileStoriesSectionDescriptorProvider .cxx_destruct] */

void FUN_104e49298(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104e49368; end: 104e4a987; -[SCMyProfileStoriesSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e49368(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
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
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined8 uVar42;
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
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar2 = PTR_PTR_1126b1280;
  _objc_alloc();
  lVar55 = (long)_DAT_112714668;
  lVar3 = param_1 + lVar55;
  _objc_loadWeakRetained(lVar3);
  lVar47 = lVar3;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018440();
  uVar42 = *(undefined8 *)(param_1 + _DAT_11271466c);
  *(undefined **)(param_1 + _DAT_11271466c) = puVar2;
  _objc_release(uVar42);
  _objc_release(lVar47);
  _objc_release(lVar3);
  lVar43 = (long)_DAT_112714670;
  lVar3 = param_1 + lVar43;
  _objc_loadWeakRetained(lVar3);
  lVar47 = lVar3;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab5e0();
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_112714674;
  _objc_loadWeakRetained(lVar3);
  lVar47 = lVar3;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8d40();
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b1288;
  _objc_alloc();
  lVar44 = (long)_DAT_112714678;
  lVar3 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar49 = lVar3;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_11271467c;
  lVar47 = param_1 + lVar45;
  _objc_loadWeakRetained(lVar47);
  lVar5 = lVar47;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar55;
  _objc_loadWeakRetained(lVar48);
  lVar7 = lVar48;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_112714680;
  lVar54 = param_1 + lVar46;
  _objc_loadWeakRetained(lVar54);
  lVar8 = lVar54;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007de0();
  uVar42 = *(undefined8 *)(param_1 + _DAT_112714684);
  *(undefined **)(param_1 + _DAT_112714684) = puVar4;
  _objc_release(uVar42);
  _objc_retain(puVar4);
  _objc_release(lVar8);
  _objc_release(lVar54);
  _objc_release(lVar7);
  _objc_release(lVar48);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar47);
  _objc_release(lVar49);
  _objc_release(lVar3);
  lVar47 = (long)_DAT_112714688;
  lVar3 = param_1 + lVar47;
  _objc_loadWeakRetained();
  lVar48 = lVar3;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar48;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c117140(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar54;
  func_0x00010bf1f320();
  *(char *)(param_1 + _DAT_11271468c) = (char)lVar49;
  _objc_release(puVar2);
  _objc_release(lVar54);
  _objc_release(lVar48);
  _objc_release(lVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar9 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e4a988;
  puStack_90 = &UNK_11084d658;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae720;
  puStack_d8 = puVar2;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x104e4a9c8;
  puStack_c0 = &UNK_110853330;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_b8 = puVar9;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126afda8;
  _objc_alloc();
  puVar11 = puVar12;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x000107d1fa6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032280();
  _objc_release(puVar2);
  _objc_release(puVar11);
  lVar48 = (long)_DAT_112714690;
  lVar3 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar54 = lVar3;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar54);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bdd9da0();
  if ((int)lVar3 != 0) {
    *(undefined1 *)(param_1 + _DAT_112714694) = 1;
    puVar2 = PTR_PTR_1126ae720;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x104e4aa10;
    puStack_f0 = &UNK_110853330;
    _objc_copyWeak(auStack_e0,auStack_80);
    puStack_e8 = puVar9;
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126afda8;
    _objc_alloc(PTR_PTR_1126afda8);
    puVar13 = puVar11;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x000107d1fa6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032280(puVar11);
    _objc_release(puVar14);
    _objc_release(puVar13);
    lVar3 = param_1 + lVar48;
    _objc_loadWeakRetained(lVar3);
    lVar54 = lVar3;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar54);
    _objc_release(lVar3);
    _objc_release(puVar11);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_e0);
  }
  lVar3 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar54 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar54;
  func_0x000108f494b0();
  _objc_release(lVar54);
  _objc_release(lVar3);
  lVar49 = (long)_DAT_112714698;
  lVar3 = param_1 + lVar49;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b1278;
  func_0x00010c11a620(PTR_PTR_1126b1278);
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar3;
  func_0x00010bfb2400();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar54;
  func_0x00010bf926c0();
  _objc_release(lVar54);
  _objc_release(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar49;
  _objc_loadWeakRetained(lVar54);
  lVar8 = lVar7;
  func_0x0001009703d0(lVar7,lVar54);
  uVar1 = 0;
  if (lVar5 != 0) {
    uVar1 = (uint)lVar8;
  }
  if ((uVar1 & 1) == 0) {
    _objc_release(lVar54);
    _objc_release(lVar7);
    _objc_release(lVar3);
  }
  else {
    lVar8 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar15 = lVar8;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x000108f49884();
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar54);
    _objc_release(lVar7);
    _objc_release(lVar3);
    if ((((uint)lVar16 ^ 1) & (uint)lVar6) == 1) {
      *(undefined1 *)(param_1 + _DAT_11271469c) = 1;
      *(long *)(param_1 + _DAT_1127146a0) = lVar5;
      puVar2 = PTR_PTR_1126ae720;
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      uStack_130 = 0x104e4aa58;
      puStack_128 = &UNK_110853360;
      _objc_copyWeak(auStack_118,auStack_80);
      puStack_120 = puVar9;
      lStack_110 = lVar5;
      func_0x00010bf11fe0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126afda8;
      _objc_alloc(PTR_PTR_1126afda8);
      func_0x00010c032280();
      lVar3 = param_1 + lVar48;
      _objc_loadWeakRetained(lVar3);
      lVar54 = lVar3;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar54);
      _objc_release(lVar3);
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_118);
    }
  }
  puVar2 = PTR_PTR_1126b1290;
  _objc_opt_new();
  lVar3 = param_1 + _DAT_1127146a4;
  _objc_loadWeakRetained();
  lVar54 = lVar3;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar54;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e220();
  _objc_release(lVar5);
  _objc_release(lVar54);
  _objc_release(lVar3);
  puVar11 = PTR_PTR_1126b1298;
  _objc_alloc();
  puVar13 = puVar11;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127146a8;
  _objc_loadWeakRetained(lVar3);
  lVar54 = param_1 + _DAT_1127146ac;
  _objc_loadWeakRetained(lVar54);
  lVar50 = (long)_DAT_1127146b0;
  lVar5 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar51 = (long)_DAT_1127146b4;
  lVar6 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar7 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b320();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar54);
  _objc_release(lVar3);
  _objc_release(puVar13);
  lVar3 = param_1 + _DAT_1127146b8;
  _objc_loadWeakRetained();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_104e4aaa4;
  puStack_150 = &UNK_110853390;
  puVar13 = PTR_PTR_1126ae720;
  lStack_148 = lVar3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_1127146bc;
  _objc_loadWeakRetained();
  lVar17 = lVar54;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  puVar14 = PTR_PTR_1126b12a0;
  _objc_alloc();
  lVar54 = param_1 + _DAT_1127146c4;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_1127146c8;
  _objc_loadWeakRetained();
  lVar18 = lVar5;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar19 = lVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar21 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar23 = lVar8;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar24 = lVar15;
  func_0x00010c0f0c00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar25 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = (long)_DAT_1127146d0;
  lVar26 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_1127146d8;
  _objc_loadWeakRetained();
  lVar35 = param_1 + _DAT_1127146e0;
  _objc_loadWeakRetained();
  lVar39 = param_1 + _DAT_1127146e4;
  _objc_loadWeakRetained();
  lVar28 = lVar39;
  func_0x00010c22ac20();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_1127146e8;
  lVar29 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_1127146ec;
  _objc_loadWeakRetained();
  lVar31 = lVar37;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_1127146f0;
  _objc_loadWeakRetained();
  func_0x00010c04d0e0();
  _objc_release(lVar38);
  _objc_release(lVar31);
  _objc_release(lVar37);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar39);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar16);
  _objc_release(lVar24);
  _objc_release(lVar15);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar7);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(lVar5);
  _objc_release(lVar54);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_104e4aaac;
  puStack_178 = &UNK_1108533c0;
  puVar32 = PTR_PTR_1126ae720;
  puStack_170 = puVar14;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126afda8;
  _objc_alloc();
  func_0x00010c032260();
  lVar54 = param_1 + lVar48;
  _objc_loadWeakRetained(lVar54);
  lVar5 = lVar54;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar5);
  _objc_release(lVar54);
  puVar41 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar42 = *(undefined8 *)(param_1 + _DAT_1127146f4);
  *(undefined **)(param_1 + _DAT_1127146f4) = puVar41;
  _objc_release(uVar42);
  puVar36 = PTR_PTR_1126b12a8;
  _objc_alloc();
  lVar54 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar39 = lVar54;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar34 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar7 = param_1 + lVar43;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar26 = lVar8;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar35 = lVar15;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + lVar47;
  _objc_loadWeakRetained();
  lVar16 = lVar47;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dfe0();
  _objc_release(lVar16);
  _objc_release(lVar47);
  _objc_release(lVar35);
  _objc_release(lVar15);
  _objc_release(lVar26);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar34);
  _objc_release(lVar5);
  _objc_release(lVar39);
  _objc_release(lVar54);
  puVar40 = PTR_PTR_1126b12b0;
  _objc_alloc();
  lVar47 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar37 = lVar47;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar34 = lVar54;
  func_0x00010c0f0c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar18 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar26 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar53 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar55 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar43 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar44 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_1127146f8;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_1127146fc;
  _objc_loadWeakRetained();
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar52 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_112714700;
  _objc_loadWeakRetained();
  lVar35 = lVar15;
  func_0x00010c22d820();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112714704;
  _objc_loadWeakRetained();
  lVar39 = lVar16;
  func_0x00010c08f380();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010be83a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c780();
  _objc_release(lVar29);
  _objc_release(lVar39);
  _objc_release(lVar16);
  _objc_release(lVar35);
  _objc_release(lVar15);
  _objc_release(lVar52);
  _objc_release(lVar50);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar55);
  _objc_release(lVar53);
  _objc_release(lVar49);
  _objc_release(lVar26);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(lVar5);
  _objc_release(lVar34);
  _objc_release(lVar54);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar47);
  lVar45 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar47 = lVar45;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar47;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194860(puVar40);
  _objc_release(lVar54);
  _objc_release(lVar47);
  _objc_release(lVar45);
  lVar47 = param_1 + lVar51;
  _objc_loadWeakRetained(lVar47);
  lVar54 = lVar47;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar55;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194820(puVar40);
  _objc_release(lVar43);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar47);
  lVar51 = param_1 + lVar51;
  _objc_loadWeakRetained(lVar51);
  lVar47 = lVar51;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar47;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194840(puVar40);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar47);
  _objc_release(lVar51);
  lVar47 = param_1 + _DAT_112714708;
  _objc_loadWeakRetained(lVar47);
  lVar54 = lVar47;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar55;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar47);
  puVar41 = PTR_PTR_1126b12b8;
  _objc_alloc(PTR_PTR_1126b12b8);
  func_0x00010c00bac0();
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained(lVar48);
  lVar47 = lVar48;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar47);
  _objc_release(lVar48);
  lVar46 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010bf1f440();
  lVar54 = (long)_DAT_11271470c;
  *(char *)(param_1 + lVar54) = (char)lVar48;
  _objc_release(lVar47);
  _objc_release(lVar46);
  if (*(char *)(param_1 + lVar54) == '\x01') {
    _objc_initWeak(auStack_198,param_1);
    lVar47 = param_1 + _DAT_112714710;
    _objc_loadWeakRetained();
    lVar48 = lVar47;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = lVar48;
    func_0x00010bf72840();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1a0,auStack_198);
    lVar55 = lVar54;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)(param_1 + _DAT_112714714);
    *(long *)(param_1 + _DAT_112714714) = lVar55;
    _objc_release(uVar42);
    _objc_release(lVar54);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
  }
  _objc_release(puVar41);
  _objc_release(lVar43);
  _objc_release(puVar40);
  _objc_release(puVar36);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar14);
  _objc_release(lVar17);
  _objc_release(puVar13);
  _objc_release(lVar3);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar4);
  return;
}



/* Entry: 104e4a988; end: 104e4aaa3;  */

void FUN_104e4a988(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e4aaa4; end: 104e4aaab;  */

void FUN_104e4aaa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_creatorInfoProvider_1125b46d0);
  return;
}



/* Entry: 104e4aaac; end: 104e4ab07;  */

void FUN_104e4aaac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e4ab08; end: 104e4ab7b; -[SCMyProfileStoriesSectionEntryPoint _didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4ab08(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112714670;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab5e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4ab7c; end: 104e4ad07; -[SCMyProfileStoriesSectionEntryPoint _canPostToStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104e4ab7c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = param_1 + _DAT_112714680;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112714698;
  _objc_loadWeakRetained(lVar4);
  uVar5 = uVar3;
  func_0x000108f49618(uVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    lVar10 = (long)_DAT_1127146e8;
    lVar4 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c080fe0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf2d160();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    param_1 = param_1 + lVar10;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074e80();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(param_1);
    uVar1 = (uint)lVar8 & (uint)lVar9;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 104e4ad08; end: 104e4ad8f; -[SCMyProfileStoriesSectionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4ad08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bfb30a0(*(undefined8 *)(param_1 + _DAT_11271466c));
  if (*(char *)(param_1 + _DAT_11271470c) == '\x01') {
    lVar2 = (long)_DAT_112714714;
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_1126e47d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e4ad90; end: 104e4af57; -[SCMyProfileStoriesSectionEntryPoint _actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4ad90(long param_1,undefined8 param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126b12c0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271467c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112714718);
  uVar14 = *(undefined8 *)(param_1 + _DAT_11271471c);
  lVar4 = param_1 + _DAT_112714720;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112714680;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112714724);
  lVar7 = param_1 + _DAT_112714678;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112714670;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_1127146d0;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714728;
  _objc_loadWeakRetained();
  func_0x00010c05e460(puVar1,param_2,lVar3,uVar13,uVar14,lVar4,lVar6,uVar15,lVar8,lVar10,lVar12,
                      param_1);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e4af58; end: 104e4b117; -[SCMyProfileStoriesSectionEntryPoint _spotlightEntrySectionWithActionHandler:titleVariant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4af58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar2 = param_1;
  func_0x00010bdf45a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b12c8;
  _objc_alloc(PTR_PTR_1126b12c8);
  lVar4 = param_1 + _DAT_112714690;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0f0c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0140(puVar3,param_2,lVar5,puVar1,lVar2,param_4);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_1127146e8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c073920();
  func_0x00010c1b1340(puVar3,param_2,lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  param_1 = param_1 + _DAT_112714688;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b12d0;
  func_0x00010c12f540(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1f320(lVar5,param_2,puVar8);
  func_0x00010c1ea5a0(puVar3,param_2,lVar6);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e4b118; end: 104e4b917; -[SCMyProfileStoriesSectionEntryPoint _storiesSectionWithActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4b118(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_110 = param_3;
  _objc_retain(param_3);
  lVar15 = (long)_DAT_11271467c;
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar16 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar1);
  lStack_150 = (ulong)*(byte *)(param_1 + _DAT_11271468c) << 1;
  puVar3 = PTR_PTR_1126b1218;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112714670;
  puStack_108 = puVar3;
  _objc_loadWeakRetained();
  lStack_120 = lVar1;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = (long)_DAT_112714678;
  lVar16 = param_1 + lStack_180;
  lStack_100 = lVar1;
  _objc_loadWeakRetained();
  lStack_130 = lVar16;
  func_0x00010c243de0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_1127146f8;
  lStack_158 = lVar16;
  _objc_loadWeakRetained();
  lStack_138 = lVar1;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = (long)_DAT_1127146fc;
  lVar16 = param_1 + lStack_118;
  lStack_168 = lVar1;
  _objc_loadWeakRetained();
  lStack_140 = lVar16;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_1127146e8;
  lVar1 = param_1 + lVar14;
  lStack_170 = lVar16;
  _objc_loadWeakRetained();
  lStack_148 = lVar1;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  lStack_178 = lVar1;
  _objc_loadWeakRetained();
  lStack_160 = lVar14;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar15;
  lStack_f8 = lVar15;
  _objc_loadWeakRetained();
  lVar4 = lVar16;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = (long)_DAT_112714680;
  lVar15 = param_1 + lStack_128;
  _objc_loadWeakRetained();
  lVar6 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lStack_158;
  lVar9 = lStack_168;
  lVar8 = lStack_170;
  lStack_190 = lStack_150;
  lStack_1b0 = lVar1;
  lStack_1a8 = lVar14;
  lStack_1a0 = lVar5;
  lStack_198 = lVar6;
  lStack_150 = lVar2;
  func_0x00010c04dbc0();
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(lStack_160);
  _objc_release(lStack_178);
  _objc_release(lStack_148);
  _objc_release(lVar8);
  _objc_release(lStack_140);
  _objc_release(lVar9);
  _objc_release(lStack_138);
  _objc_release(lVar17);
  _objc_release(lStack_130);
  _objc_release(lStack_100);
  _objc_release(lStack_120);
  if (((*(byte *)(param_1 + _DAT_112714694) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_11271469c) & 1) == 0)) {
    lVar1 = param_1;
    func_0x00010bdf45a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_100 = lVar1;
  }
  else {
    lStack_100 = 0;
  }
  puVar7 = PTR_PTR_1126b1238;
  _objc_alloc(PTR_PTR_1126b1238);
  lVar1 = param_1 + lStack_f8;
  _objc_loadWeakRetained();
  lStack_120 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lStack_118;
  _objc_loadWeakRetained(lVar16);
  lVar9 = lVar16;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lStack_128;
  _objc_loadWeakRetained(lVar14);
  lVar17 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112714704;
  _objc_loadWeakRetained(lVar15);
  lVar2 = lVar15;
  func_0x00010c08f380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c7c0(puVar7);
  _objc_release(lVar2);
  _objc_release(lVar15);
  _objc_release(lVar17);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar16);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lStack_120);
  lVar1 = param_1 + lStack_f8;
  _objc_loadWeakRetained(lVar1);
  lVar16 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar16;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194860(puVar7);
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release(lVar1);
  lVar16 = (long)_DAT_1127146b4;
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar1);
  lVar14 = lVar1;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194820(puVar7);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar1);
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar16);
  lVar1 = lVar16;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194840(puVar7);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(lVar16);
  puVar10 = PTR_PTR_1126b1240;
  _objc_alloc();
  lVar16 = lStack_110;
  lVar1 = lStack_110;
  func_0x00010c269d40(lStack_110);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lStack_100;
  func_0x00010c04f840();
  _objc_release(lVar1);
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e9c0b8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar10);
  _objc_release(puVar3);
  func_0x00010c1f9240(puVar10);
  lVar1 = param_1 + lStack_180;
  _objc_loadWeakRetained();
  lVar15 = lVar1;
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c22c2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11271472c;
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  *(long *)(param_1 + lVar17) = lVar9;
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112714730);
  *(undefined **)(param_1 + _DAT_112714730) = puVar3;
  _objc_release(uVar13);
  _objc_initWeak(auStack_98,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104e4b918;
  puStack_a8 = &UNK_110842a38;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c25ff60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar13);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112714684);
  func_0x00010c0d9100();
  puStack_f0 = puVar3;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_104e4b9dc;
  puStack_d8 = &UNK_1108533f0;
  puVar12 = auStack_98;
  _objc_copyWeak(auStack_c8,puVar12);
  _objc_retain(puVar10);
  uVar13 = uVar11;
  puStack_d0 = puVar10;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(puStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar7);
  _objc_release(lVar14);
  _objc_release(puStack_108);
  _objc_release(lStack_150);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  lVar1 = lVar16;
  __Unwind_Resume(lVar16);
  pcStack_1b8 = FUN_104e4b918;
  ppuStack_1e0 = &puStack_c0;
  lStack_1d8 = param_1;
  uStack_1d0 = uVar13;
  lStack_1c8 = lVar16;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_104e4b9ac;
  puStack_1f0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1e8,lVar1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_208);
  _objc_destroyWeak(auStack_1e8);
  _objc_release(puVar12);
  return;
}



/* Entry: 104e4b918; end: 104e4b9ab;  */

void FUN_104e4b918(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e4b9ac;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e4b9ac; end: 104e4b9db;  */

void FUN_104e4b9ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4b9dc; end: 104e4baeb;  */

void FUN_104e4b9dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c067ec0();
  lStack_38 = (long)(int)uVar1;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104e4ba98;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104e4baec; end: 104e4bc13; -[SCMyProfileStoriesSectionEntryPoint _createSupplementaryViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4baec(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112714684);
  func_0x00010c0d9100();
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_class(PTR_PTR_1126ae820);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar3 = uVar4;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if ((uVar3 == 0) || (uVar4 = uVar3, func_0x00010c067ec0(), (int)uVar4 != 2)) {
    lVar5 = param_1;
    func_0x00010be1b9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = param_1;
    func_0x00010bec4580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  puVar2 = PTR_PTR_1126b0c00;
  _objc_alloc();
  func_0x00010c043040();
  lVar7 = (long)_DAT_112714734;
  _objc_retain();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e4bc14; end: 104e4bc77; -[SCMyProfileStoriesSectionEntryPoint _storiesSectionTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4bc14(long param_1)

{
  if (*(char *)(param_1 + _DAT_11271469c) == '\x01') {
    if (*(long *)(param_1 + _DAT_1127146a0) == 1) {
      func_0x000108f58c9c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f58ccc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108f57e14();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e4bc78; end: 104e4bd0b; -[SCMyProfileStoriesSectionEntryPoint _updateSupplementaryViewProviderWithHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4bc78(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112714734);
    func_0x00010be1b9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010bec4580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112714734);
    param_1 = lVar2;
  }
  func_0x00010c286480(uVar3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4bd0c; end: 104e4be2b; -[SCMyProfileStoriesSectionEntryPoint _generateProfileSectionHeaderViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4bd0c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db73b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db73b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar3 = param_1;
  func_0x00010bec4580(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714678;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c22c260();
  lVar7 = lVar3;
  func_0x000108f72910(lVar3,ppuVar1,&PTR____CFConstantStringClassReference_110db6698,puVar2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 104e4be2c; end: 104e4c037; -[SCMyProfileStoriesSectionEntryPoint _publicStoriesSectionWithActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4be2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_1127146e8;
  _objc_retain(param_3);
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  if ((*(char *)(param_1 + _DAT_112714694) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_11271469c) & 1) == 0)) {
    lVar15 = param_1;
    func_0x00010bdf45a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar15 = 0;
  }
  ppuVar3 = (undefined **)PTR_PTR_1126b1240;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04f840();
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(ppuVar3);
  _objc_release(puVar5);
  func_0x00010be83a20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9240(ppuVar3);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar16 = (long)_DAT_11271467c;
    lVar15 = lVar2 + lVar16;
    _objc_loadWeakRetained();
    lVar1 = lVar15;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar2 + _DAT_112714670;
    _objc_loadWeakRetained();
    lVar14 = lVar15;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar2 + _DAT_112714704;
    _objc_loadWeakRetained();
    lVar6 = lVar15;
    func_0x00010c08f380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar16 = lVar2 + lVar16;
    _objc_loadWeakRetained();
    lVar15 = lVar16;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar15;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    _objc_release(lVar16);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_104e4c35c;
    puStack_f8 = &UNK_110853420;
    puVar8 = PTR_PTR_1126ae720;
    lStack_f0 = lVar2;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2 + _DAT_112714680;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar2 + _DAT_112714738;
    _objc_loadWeakRetained();
    lVar9 = lVar15;
    func_0x00010c2598a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar2 + _DAT_11271473c;
    _objc_loadWeakRetained();
    lVar10 = lVar15;
    func_0x00010c11ab80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar2 + _DAT_112714740;
    _objc_loadWeakRetained();
    lVar11 = lVar15;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar2 + _DAT_1127146b8;
    _objc_loadWeakRetained();
    puStack_138 = puVar5;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_104e4c380;
    puStack_120 = &UNK_110853390;
    puVar12 = PTR_PTR_1126ae720;
    lStack_118 = lVar15;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar2 + _DAT_1127146bc;
    _objc_loadWeakRetained();
    lVar13 = lVar2;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_1b0 = puVar5;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_104e4c388;
    puStack_198 = &UNK_110853450;
    ppuVar3 = &puStack_1b0;
    lStack_190 = lVar1;
    lStack_188 = lVar14;
    lStack_180 = lVar6;
    lStack_178 = lVar7;
    puStack_170 = puVar8;
    lStack_168 = lVar16;
    lStack_160 = lVar9;
    lStack_158 = lVar10;
    lStack_150 = lVar11;
    puStack_148 = puVar12;
    lStack_140 = lVar13;
    _objc_retainBlock();
    _objc_release(lVar13);
    _objc_release(puVar12);
    _objc_release(lVar15);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar16);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar14);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104e4c038; end: 104e4c35b; -[SCMyProfileStoriesSectionEntryPoint _providePublicStoriesSectionDataProviderGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4c038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar14 = (long)_DAT_11271467c;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112714670;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112714704;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c08f380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar2 = lVar14;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar14);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104e4c35c;
  puStack_88 = &UNK_110853420;
  puVar7 = PTR_PTR_1126ae720;
  lStack_80 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112714680;
  _objc_loadWeakRetained();
  lVar14 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112714738;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c2598a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11271473c;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010c11ab80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112714740;
  _objc_loadWeakRetained();
  lVar10 = lVar2;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_1127146b8;
  _objc_loadWeakRetained();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104e4c380;
  puStack_b0 = &UNK_110853390;
  puVar11 = PTR_PTR_1126ae720;
  lStack_a8 = lVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127146bc;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_104e4c388;
  puStack_128 = &UNK_110853450;
  ppuVar13 = &puStack_140;
  lStack_120 = lVar3;
  lStack_118 = lVar4;
  lStack_110 = lVar5;
  lStack_108 = lVar6;
  puStack_100 = puVar7;
  lStack_f8 = lVar14;
  lStack_f0 = lVar8;
  lStack_e8 = lVar9;
  lStack_e0 = lVar10;
  puStack_d8 = puVar11;
  lStack_d0 = lVar12;
  _objc_retainBlock();
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 104e4c35c; end: 104e4c37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4c35c(long param_1)

{
  _objc_loadWeakRetained(*(long *)(param_1 + 0x20) + (long)_DAT_1127146f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e4c380; end: 104e4c387;  */

void FUN_104e4c380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_creatorInfoProvider_1125b46d0);
  return;
}



/* Entry: 104e4c388; end: 104e4c40f;  */

void FUN_104e4c388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b12d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03b160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e4c410; end: 104e4c47f;  */

void FUN_104e4c410(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x70));
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _objc_release(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104e4c480; end: 104e4c72f; -[SCMyProfileStoriesSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4c480(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714720);
  _objc_destroyWeak(param_1 + _DAT_112714728);
  _objc_destroyWeak(param_1 + _DAT_1127146f0);
  _objc_destroyWeak(param_1 + _DAT_112714698);
  _objc_destroyWeak(param_1 + _DAT_112714688);
  _objc_destroyWeak(param_1 + _DAT_1127146bc);
  _objc_destroyWeak(param_1 + _DAT_1127146b8);
  _objc_destroyWeak(param_1 + _DAT_1127146b4);
  _objc_destroyWeak(param_1 + _DAT_1127146ac);
  _objc_destroyWeak(param_1 + _DAT_1127146a8);
  _objc_destroyWeak(param_1 + _DAT_1127146ec);
  _objc_destroyWeak(param_1 + _DAT_1127146e4);
  _objc_destroyWeak(param_1 + _DAT_1127146e0);
  _objc_storeStrong(param_1 + _DAT_1127146dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127146c8);
  _objc_destroyWeak(param_1 + _DAT_1127146d8);
  _objc_storeStrong(param_1 + _DAT_1127146d4,0);
  _objc_storeStrong(param_1 + _DAT_1127146cc,0);
  _objc_storeStrong(param_1 + _DAT_112714724,0);
  _objc_destroyWeak(param_1 + _DAT_1127146c4);
  _objc_storeStrong(param_1 + _DAT_1127146c0,0);
  _objc_storeStrong(param_1 + _DAT_112714718,0);
  _objc_storeStrong(param_1 + _DAT_11271471c,0);
  _objc_destroyWeak(param_1 + _DAT_11271473c);
  _objc_destroyWeak(param_1 + _DAT_112714740);
  _objc_destroyWeak(param_1 + _DAT_112714738);
  _objc_destroyWeak(param_1 + _DAT_112714700);
  _objc_destroyWeak(param_1 + _DAT_112714670);
  _objc_destroyWeak(param_1 + _DAT_112714708);
  _objc_destroyWeak(param_1 + _DAT_1127146d0);
  _objc_destroyWeak(param_1 + _DAT_1127146b0);
  _objc_destroyWeak(param_1 + _DAT_112714668);
  _objc_destroyWeak(param_1 + _DAT_112714680);
  _objc_destroyWeak(param_1 + _DAT_1127146a4);
  _objc_destroyWeak(param_1 + _DAT_1127146fc);
  _objc_destroyWeak(param_1 + _DAT_1127146f8);
  _objc_destroyWeak(param_1 + _DAT_1127146e8);
  _objc_destroyWeak(param_1 + _DAT_112714678);
  _objc_destroyWeak(param_1 + _DAT_112714674);
  _objc_destroyWeak(param_1 + _DAT_112714690);
  _objc_destroyWeak(param_1 + _DAT_112714710);
  _objc_destroyWeak(param_1 + _DAT_11271467c);
  _objc_destroyWeak(param_1 + _DAT_112714704);
  _objc_storeStrong(param_1 + _DAT_112714684,0);
  _objc_storeStrong(param_1 + _DAT_112714734,0);
  _objc_storeStrong(param_1 + _DAT_112714730,0);
  _objc_storeStrong(param_1 + _DAT_112714714,0);
  _objc_storeStrong(param_1 + _DAT_1127146f4,0);
  _objc_storeStrong(param_1 + _DAT_11271472c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271466c,0);
  return;
}



/* Entry: 104e4c730; end: 104e4ca0b; -[SCSharedStoryProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4c730(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e47e0;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_begin_1125a3840);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_2 + _DAT_112714744) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b12e0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b12e8;
  _objc_alloc(PTR_PTR_1126b12e8);
  lVar10 = (long)_DAT_112714748;
  lVar3 = param_2 + lVar10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf62120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2 + _DAT_11271474c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010be9cfa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010be9cfc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2 + _DAT_112714754;
  _objc_loadWeakRetained();
  func_0x00010c008000(puVar2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c18b5e0(puVar2);
  func_0x00010c1e4640(puVar1);
  lVar3 = param_2 + lVar10;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_112714758) = param_1;
  lVar3 = param_2 + _DAT_11271475c;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2 + lVar10;
  _objc_loadWeakRetained(lVar5);
  lVar4 = lVar5;
  func_0x00010bf62120();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + lVar10;
  _objc_loadWeakRetained(param_2);
  lVar7 = param_2;
  func_0x00010c247980();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af780(lVar9);
  _objc_release(lVar7);
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e4ca0c; end: 104e4cb6b; -[SCSharedStoryProfileEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4ca0c(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  long lStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112714760);
  *(undefined8 *)(param_2 + _DAT_112714760) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar2);
  _CACurrentMediaTime();
  dVar9 = *(double *)(param_2 + _DAT_112714758);
  lVar3 = param_2 + _DAT_11271475c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112714748;
  lVar5 = param_2 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf62120();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2 + lVar8;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c247980();
  func_0x00010c0af7a0(param_1 - dVar9,lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puStack_68 = PTR_PTR_1126e47e0;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e4cb6c; end: 104e4cbdf; -[SCSharedStoryProfileEntryPoint didDismissSharedStoryProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4cb6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112714748;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73fc0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e4cbe0; end: 104e4cccb; -[SCSharedStoryProfileEntryPoint _sectionProvidersFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4cbe0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = param_1 + _DAT_112714764;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_112714748;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf62120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf22e60(lVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112714760;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar4;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae558;
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + lVar8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e4cccc; end: 104e4cd5f; -[SCSharedStoryProfileEntryPoint _sectionProvidersPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4cccc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112714768;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e4cd60; end: 104e4cde7; -[SCSharedStoryProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4cd60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714750,0);
  _objc_destroyWeak(param_1 + _DAT_112714764);
  _objc_destroyWeak(param_1 + _DAT_112714754);
  _objc_destroyWeak(param_1 + _DAT_11271475c);
  _objc_destroyWeak(param_1 + _DAT_11271474c);
  _objc_destroyWeak(param_1 + _DAT_112714768);
  _objc_destroyWeak(param_1 + _DAT_112714748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714760,0);
  return;
}



/* Entry: 104e4cde8; end: 104e4ce53; -[SCSharedStoryProfilePageActionHander init] */

undefined1 * FUN_104e4cde8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e47e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e4ce54; end: 104e4cf23; -[SCSharedStoryProfilePageActionHander addSubActionHandler:] */

void FUN_104e4ce54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e4cf24;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104e4cf24; end: 104e4cf57;  */

void FUN_104e4cf24(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4cf58; end: 104e4cff7; -[SCSharedStoryProfilePageActionHander _addSubActionHandlerOnMainThread:] */

void FUN_104e4cf58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    puVar2 = PTR_DAT_1126a4e80;
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    lVar1 = param_3;
    if ((int)lVar4 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_3);
    func_0x00010c1e1580(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e4cff8; end: 104e4d15f; -[SCSharedStoryProfilePageActionHander setProfileViewController:] */

undefined1 * FUN_104e4cff8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  puVar6 = auStack_e8;
  uVar7 = 0x10;
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        puVar1 = PTR_DAT_1126a4e80;
        uVar9 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        _objc_retain(uVar9);
        uVar3 = uVar9;
        func_0x00010010fab4(uVar9,puVar1);
        uVar7 = uVar9;
        if ((int)uVar3 == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar9);
        func_0x00010c1e1580(uVar7);
        _objc_release(uVar7);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar6 = auStack_e8;
      uVar7 = 0x10;
      lVar2 = lVar8;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  lVar13 = *(long *)(param_3 + 8);
  _objc_retain(lVar13);
  lVar8 = lVar13;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar10 = (undefined1 *)0x0;
  if (lVar8 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar13);
        }
        uVar4 = *(ulong *)(lVar12 * 8);
        func_0x00010bfd0140();
        if ((uVar4 & 1) != 0) {
          puVar10 = (undefined1 *)0x1;
          goto LAB_104e4d258;
        }
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar13;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
    puVar10 = (undefined1 *)0x0;
  }
LAB_104e4d258:
  _objc_release(lVar13);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar6 = (undefined1 *)((long)puVar5 + 0x10);
    _objc_loadWeakRetained(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar6;
  }
  return puVar10;
}



/* Entry: 104e4d160; end: 104e4d2b3; -[SCSharedStoryProfilePageActionHander handleActionWithSender:actionModel:fromSourceView:] */

long FUN_104e4d160(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(ulong *)(lStack_118 + lVar5 * 8);
        func_0x00010bfd0140(uVar2,param_2,param_3,param_4,param_5);
        if ((uVar2 & 1) != 0) {
          lVar4 = 1;
          goto LAB_104e4d258;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
    lVar4 = 0;
  }
LAB_104e4d258:
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar4;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return param_3;
}



/* Entry: 104e4d2b4; end: 104e4d2cb; -[SCSharedStoryProfilePageActionHander profileViewController] */

void FUN_104e4d2b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e4d2cc; end: 104e4d2f7; -[SCSharedStoryProfilePageActionHander .cxx_destruct] */

void FUN_104e4d2cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e4d2f8; end: 104e4d39b; -[SCSharedStoryProfileFlowLayout targetContentOffsetForProposedContentOffset:withScrollingVelocity:] */

undefined1  [16] FUN_104e4d2f8(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar6 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befda00();
  _objc_release(param_3);
  dVar2 = 160.0 - dVar6;
  if (param_2 < dVar2) {
    dVar3 = -dVar6;
    dVar5 = dVar3;
    dVar4 = dVar2;
    if (dVar2 <= dVar3) {
      dVar5 = dVar2;
      dVar4 = dVar3;
    }
    dVar6 = (dVar6 + dVar2) * 0.5 - dVar6;
    if (dVar6 <= dVar5) {
      dVar6 = dVar5;
    }
    if (dVar6 <= dVar4) {
      dVar4 = dVar6;
    }
    bVar1 = dVar4 <= param_2;
    param_2 = dVar3;
    if (bVar1) {
      param_2 = dVar2;
    }
    param_1 = 0.0;
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 104e4d39c; end: 104e4d68f; -[SCSharedStoryProfileViewController initWithCustomStoryMetaData:customStoriesDataFetcher:actionHandler:sectionProviders:sharedStoryMenuScopeExposer:sectionProvidersPerformer:sharedStoryMenuScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e4d39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e47f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c216240(puVar1);
    lVar7 = (long)_DAT_112714774;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112714778;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271477c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112714780,param_9);
    func_0x00010c20eaa0(puVar1);
    puVar3 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202660();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010beaa440(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    lVar7 = (long)_DAT_112714784;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b12f0;
    _objc_alloc_init();
    lVar7 = (long)_DAT_112714788;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271478c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271478c) = puVar5;
    _objc_release(uVar2);
    uVar2 = param_6;
    FUN_104e4eb24(param_6,param_8,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714790);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112714790) = uVar2;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b12f0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714794);
    *(undefined **)((long)puVar1 + (long)_DAT_112714794) = puVar5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e4d690; end: 104e4d69b; -[SCSharedStoryProfileViewController supportedInterfaceOrientations] */

undefined8 FUN_104e4d690(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 104e4d69c; end: 104e4d713; -[SCSharedStoryProfileViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_104e4d69c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e47f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e4d714; end: 104e4d757; -[SCSharedStoryProfileViewController preferredStatusBarStyle] */

undefined8 FUN_104e4d714(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  uVar1 = 3;
  if (lVar2 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 104e4d758; end: 104e4d79f; -[SCSharedStoryProfileViewController traitCollectionDidChange:] */

void FUN_104e4d758(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e47f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 104e4d7a0; end: 104e4d847; -[SCSharedStoryProfileViewController _settingsButton] */

void FUN_104e4d7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  uVar1 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf33860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2640(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c181e40(0,0x4008000000000000,0,0x4008000000000000,puVar3);
  func_0x00010befbd60(puVar3,param_2,param_1,PTR_s__onSettingsTapped_1125267c8,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e4d848; end: 104e4d943; -[SCSharedStoryProfileViewController _onSettingsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4d848(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112714780;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112714774);
    func_0x00010c11ac00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf24480(lVar4,param_2,puVar2,param_1,uVar3,0x2e,0x3a,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271477c),param_2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104e4d944; end: 104e4dc37; -[SCSharedStoryProfileViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4d944(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e47f0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b40(param_1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010beaf9a0(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714798);
  *(undefined **)(param_1 + _DAT_112714798) = puVar1;
  _objc_release(uVar3);
  _objc_retain(puVar1);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar4);
  func_0x00010c213040(puVar1);
  func_0x00010c1cfce0(puVar1);
  lVar8 = (long)_DAT_112714774;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf85d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(uVar3);
  func_0x00010c23d620(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112714778);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c11ac00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uVar3 = uVar5;
  func_0x00010bf62580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar7 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e4dc38; end: 104e4dc7f;  */

void FUN_104e4dc38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb9e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4dc80; end: 104e4dd3b; -[SCSharedStoryProfileViewController _updateMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4dc80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112714774;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112714798;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152a40(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104e4dd3c; end: 104e4dd7f; -[SCSharedStoryProfileViewController headlineView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4dd3c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0834c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c09c7a0(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112714798);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e4dd80; end: 104e4dd87; -[SCSharedStoryProfileViewController pageViewName] */

undefined8 FUN_104e4dd80(void)

{
  return 0xe8;
}



/* Entry: 104e4dd88; end: 104e4dd93; -[SCSharedStoryProfileViewController _createLocalSections] */

undefined * FUN_104e4dd88(void)

{
  return PTR____NSArray0__struct_11034ab48;
}


