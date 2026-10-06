/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10643a108; end: 10643a17b; -[SCPayToPromoteOperaPlugin dataStatusForPublisherId:editionId:corpus:] */

ulong FUN_10643a108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x80);
  FUN_106438854(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1 & 0xffffffff;
}



/* Entry: 10643a17c; end: 10643a26b; -[SCPayToPromoteOperaPlugin isDupDiscoverStoryForPublisherId:editionId:corpus:] */

undefined8
FUN_10643a17c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_106438854(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0fed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      lVar2 = lVar3;
      func_0x000106438908(lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010bf4b900(uVar4);
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10643a26c; end: 10643a567; -[SCPayToPromoteOperaPlugin insertPromotedPublisherStoryWithPublisherId:editionId:corpus:afterGroup:] */

long FUN_10643a26c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  
  _objc_retain(param_6);
  FUN_106438854(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    ppuVar10 = &PTR____CFConstantStringClassReference_110e4f3b8;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000106438908(lVar4);
      _objc_retainAutoreleasedReturnValue();
      iVar1 = (int)*(undefined8 *)(param_1 + 0x90);
      func_0x00010bf4b900();
      if (iVar1 == 0) {
        lVar3 = param_1 + 0x60;
        _objc_loadWeakRetained();
        lVar6 = lVar3;
        func_0x00010c1014c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        if (lVar6 == 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x78));
        }
        else {
          lVar3 = param_1 + 0x60;
          _objc_loadWeakRetained(lVar3);
          func_0x00010c12dbc0();
          _objc_release(lVar3);
        }
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88));
        lVar3 = param_1 + 0x60;
        _objc_loadWeakRetained();
        lVar7 = lVar3;
        func_0x00010bf63e80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = param_1;
        func_0x00010be11240(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_1;
        func_0x00010bed8040(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar4 = param_1 + 0x60;
        _objc_loadWeakRetained();
        lVar3 = lVar4;
        func_0x00010c066bc0();
        _objc_retain(0);
        _objc_release(lVar4);
        if ((int)lVar3 == 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x88));
          uVar11 = *(undefined8 *)(param_1 + 0x38);
          puVar9 = PTR_PTR_1126ca5e0;
          func_0x00010c0673a0(PTR_PTR_1126ca5e0);
          _objc_retainAutoreleasedReturnValue();
          FUN_1064389dc(uVar11,0,puVar9,lVar6 != 0);
          _objc_release(puVar9);
        }
        else {
          FUN_1064389dc(*(undefined8 *)(param_1 + 0x38),1,0,lVar6 != 0);
        }
        _objc_release(0);
        _objc_release(lVar7);
      }
      else {
        FUN_1064389dc(*(undefined8 *)(param_1 + 0x38),0,
                      &PTR____CFConstantStringClassReference_110e4f3f8,1);
        lVar3 = 0;
        lVar8 = lVar4;
      }
      _objc_release(lVar5);
      _objc_release(lVar8);
      goto LAB_10643a52c;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    ppuVar10 = &PTR____CFConstantStringClassReference_110e4f3d8;
  }
  FUN_1064389dc(uVar11,0,ppuVar10,0);
  lVar3 = 0;
LAB_10643a52c:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_6);
  return lVar3;
}



/* Entry: 10643a568; end: 10643a73b; -[SCPayToPromoteOperaPlugin _cleanUpAfterExitingOperaSession] */

void FUN_10643a568(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + 0x70);
  _objc_retain(lVar9);
  puVar7 = auStack_e8;
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        lVar3 = *(long *)(param_1 + 0x70);
        func_0x00010c0e00e0(lVar3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          uVar4 = *(ulong *)(param_1 + 0x78);
          func_0x00010bf4b900(uVar4,param_2,uVar10);
          if ((uVar4 & 1) == 0) {
            func_0x00010bedb000(param_1,param_2,lVar3,0);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            func_0x00010befa120(puVar1,param_2,lVar3);
          }
        }
        _objc_release(lVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar7 = auStack_e8;
      lVar2 = lVar9;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf51e00();
    func_0x00010be70fc0(param_1);
    puVar7 = (undefined1 *)(long)(int)param_1;
    puVar6 = (undefined8 *)puVar8;
    func_0x00010c12e620(uVar10,param_2,puVar8,puVar7,0);
    _objc_release(puVar8);
    _objc_release(uVar10);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c6d78;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar6);
    func_0x00010bf82080(puVar1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2140;
    puVar8 = (undefined *)puVar6;
    func_0x00010c25a160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bf82100(puVar5,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c2b1100(puVar5,param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar1,param_2,puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10643a73c; end: 10643a84f; -[SCPayToPromoteOperaPlugin _updateLoggingInfoForStory:isPayToPromoteStory:] */

void FUN_10643a73c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c6d78;
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf82080(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2140;
    lVar2 = param_3;
    func_0x00010c25a160(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf82100(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c2b1100(puVar3,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar1,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10643a850; end: 10643a8a3; -[SCPayToPromoteOperaPlugin insertedAdResponseForGroupId:] */

void FUN_10643a850(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10643a8a4; end: 10643a8db; -[SCPayToPromoteOperaPlugin isInsertedGroupWithGroupId:] */

bool FUN_10643a8a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c296f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 10643a8dc; end: 10643aa4f; -[SCPayToPromoteOperaPlugin _updateFeedTypeForPlayableDataModel:feedType:] */

void FUN_10643a8dc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar3 = PTR_PTR_1126bdd28;
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    puVar3 = PTR_PTR_1126bdd30;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retain(param_3);
      goto LAB_10643aa2c;
    }
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126ca870;
    func_0x00010c0b5320(PTR_PTR_1126ca870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126ca868;
    func_0x00010bf827a0(PTR_PTR_1126ca868);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  func_0x00010c2adcc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_10643aa2c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10643aa50; end: 10643ab8b; -[SCPayToPromoteOperaPlugin _fetchFeedTypeForPlayableDataModel:] */

void FUN_10643aa50(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_PTR_1126bdd30;
  uVar2 = param_3;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    puVar1 = PTR_PTR_1126c2118;
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      puVar1 = PTR_PTR_1126bdd28;
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        goto LAB_10643ab44;
      }
      goto LAB_10643aa8c;
    }
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar3 = uVar2;
    func_0x0001085357a4(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_10643aa8c:
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar3 = uVar2;
    func_0x00010bfa4340(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_10643ab44:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10643ab8c; end: 10643ab9f; -[SCPayToPromoteOperaPlugin _payToPromoteStoryDiscoverFeedDataStoreFeedType] */

undefined4 FUN_10643ab8c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10643aba0; end: 10643ad23; -[SCPayToPromoteOperaPlugin logPayToPromoteRequestError:errorReason:adResponse:storyId:publisherId:startFetchingTimeInSeconds:endFetchingTimeInSeconds:] */

void FUN_10643aba0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca878;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010c197380();
  func_0x00010c197240(puVar1,param_4,param_6);
  _objc_release(param_6);
  uVar2 = param_7;
  func_0x00010bef2c20(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_4,uVar2);
  _objc_release(uVar2);
  func_0x00010c20d1a0(puVar1,param_4,param_8);
  _objc_release(param_8);
  func_0x00010c1e5b60(puVar1,param_4,param_9);
  _objc_release(param_9);
  uVar2 = param_7;
  func_0x00010c15ed20(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c1fd160(puVar1,param_4,uVar2);
  _objc_release(uVar2);
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010c1ec0c0(puVar1,param_4,(long)param_1);
  func_0x00010c155420(param_2,PTR_PTR_1126afec0);
  func_0x00010c1ec0c0(puVar1,param_4,(long)param_2);
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10643ad24; end: 10643ad2b; -[SCPayToPromoteOperaPlugin currentPayToPromoteStoryIsPlaying] */

undefined1 FUN_10643ad24(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb1);
}



/* Entry: 10643ad2c; end: 10643ad33; -[SCPayToPromoteOperaPlugin setCurrentPayToPromoteStoryIsPlaying:] */

void FUN_10643ad2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb1) = param_3;
  return;
}



/* Entry: 10643ad34; end: 10643ae43; -[SCPayToPromoteOperaPlugin .cxx_destruct] */

void FUN_10643ad34(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 10643ae44; end: 10643aefb; +[SCAdInsertionUtils insertionFailureReasonFromPlaybackError:] */

undefined ** FUN_10643ae44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9e00;
    func_0x00010bf98a40(PTR_PTR_1126c9e00);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010bf3ec40();
      if (lVar1 - 1U < 9) {
        ppuVar4 = (undefined **)(&PTR_PTR_1109222e8)[lVar1 - 1U];
        goto LAB_10643aee0;
      }
    }
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110db8b78;
LAB_10643aee0:
  _objc_release(param_3);
  return ppuVar4;
}



/* Entry: 10643aefc; end: 10643af03; -[SCAdPlacement error] */

undefined8 FUN_10643aefc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10643af04; end: 10643af33; -[SCAdPlacement setError:] */

void FUN_10643af04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10643af34; end: 10643af3f; -[SCAdPlacement .cxx_destruct] */

void FUN_10643af34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10643af40; end: 10643b06f;  */

ulong FUN_10643af40(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar2 = 0;
  if (param_2 != 1) {
    uVar2 = (uint)(param_1 == 6);
  }
  uVar3 = (ulong)uVar2;
  if ((param_2 == 1) && (param_1 == 6)) {
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c0f2600(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10643b070; end: 10643b12f;  */

undefined8
FUN_10643b070(long param_1,long param_2,long param_3,byte param_4,undefined8 param_5,uint param_6,
             uint param_7,undefined8 param_8,uint param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 2) {
    param_7 = 1;
  }
  uVar1 = 2;
  if (param_9._2_1_ != '\0') {
    uVar1 = 3;
  }
  uVar2 = 2;
  if (param_7 == 0) {
    uVar2 = uVar1;
  }
  if ((((param_7 & 1) == 0) && ((param_6 & 1) == 0)) && ((param_9 & 0x10000) == 0)) {
    uVar2 = 0;
    switch(param_1) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x13:
      return 2;
    case 3:
    case 0x14:
      uVar2 = 3;
      break;
    case 7:
      if (((param_2 == 0) && (param_3 == 1)) &&
         (((param_4 | (byte)param_9 | param_9._1_1_) & 1) != 0)) {
        return 0;
      }
    case 6:
    case 8:
    case 0xb:
    case 0xd:
      uVar1 = 1;
      if (param_2 != 1) {
        uVar1 = 2;
      }
      return uVar1;
    case 9:
      uVar1 = 2;
      if (param_3 != 1) {
        uVar1 = 0;
      }
      return uVar1;
    case 0x11:
    case 0x12:
      uVar1 = 0;
      if (param_9._3_1_ == '\0') {
        uVar1 = 3;
      }
      return uVar1;
    }
  }
  return uVar2;
}



/* Entry: 10643b130; end: 10643b2ab;  */

byte FUN_10643b130(long param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c27dd80();
  if (((param_2 == 1) || (lVar3 != 9)) && (lVar3 = param_3, func_0x00010c27dd80(), lVar3 != 10)) {
    bVar2 = false;
  }
  else {
    lVar3 = param_1;
    func_0x00010bef60a0(param_1);
    bVar2 = lVar3 == 1;
  }
  lVar3 = param_3;
  func_0x00010c27dd80(param_3);
  bVar1 = lVar3 - 7U < 2;
  if (param_2 != 1) {
    bVar1 = lVar3 == 6;
  }
  lVar3 = param_3;
  func_0x00010c27dd80();
  if ((lVar3 != 4) && (lVar3 = param_3, func_0x00010c27dd80(), lVar3 != 5)) {
    lVar3 = param_3;
    func_0x00010c27dd80();
    if (param_2 == 1) {
      if ((lVar3 != 9) && (lVar3 = param_3, func_0x00010c27dd80(), lVar3 != 6)) {
LAB_10643b250:
        lVar3 = param_3;
        func_0x00010c27dd80();
        if ((((lVar3 != 6) && (lVar3 = param_3, func_0x00010c27dd80(), lVar3 != 2)) &&
            (lVar3 = param_3, func_0x00010c27dd80(), lVar3 != 1)) &&
           (lVar3 = param_3, func_0x00010c27dd80(), lVar3 != 0xd)) {
          lVar3 = param_3;
          func_0x00010c27dd80(param_3);
          bVar4 = lVar3 == 0 | bVar2 | bVar1;
          goto LAB_10643b1e4;
        }
      }
    }
    else if ((lVar3 != 7) && (lVar3 = param_3, func_0x00010c27dd80(), lVar3 != 8))
    goto LAB_10643b250;
  }
  bVar4 = 1;
LAB_10643b1e4:
  _objc_release(param_3);
  _objc_release(param_1);
  return bVar4;
}



/* Entry: 10643b2ac; end: 10643b3cf;  */

bool FUN_10643b2ac(double param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  _objc_retain();
  uVar3 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a53c0);
  if ((param_2 == 0) || ((int)uVar3 == 0)) {
    puVar4 = PTR_PTR_1126b8e08;
    _objc_opt_class(PTR_PTR_1126b8e08);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar4);
    puVar4 = PTR_PTR_1126afec0;
    if ((uVar3 & 1) != 0) {
      uVar3 = param_2;
      func_0x00010bef35e0();
      param_1 = (double)(long)uVar3;
      func_0x00010c0cd480(puVar4);
      goto LAB_10643b324;
    }
    puVar4 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar4);
    puVar4 = PTR_PTR_1126afec0;
    if ((uVar3 & 1) == 0) {
      bVar2 = false;
      goto LAB_10643b330;
    }
    uVar3 = param_2;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c4bc0();
    dVar7 = (double)(long)uVar6;
    func_0x00010c0cd480(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    bVar2 = NAN(dVar7);
    bVar1 = dVar7 < 12.0;
  }
  else {
    func_0x00010c26f000(param_2);
LAB_10643b324:
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 12.0;
      bVar2 = false;
    }
  }
  bVar2 = bVar1 == bVar2;
LAB_10643b330:
  _objc_release(param_2);
  return bVar2;
}



/* Entry: 10643b3d0; end: 10643b3d7; -[SCAdLongformVideoTopSnapAdMediaInfo mediaStartTime] */

undefined8 FUN_10643b3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10643b3d8; end: 10643b3df; -[SCAdLongformVideoTopSnapAdMediaInfo setMediaStartTime:] */

void FUN_10643b3d8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10643b3e0; end: 10643b44b; -[SCAdLongformVideoTopSnapManager init] */

undefined1 * FUN_10643b3e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f12d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10643b44c; end: 10643b453; -[SCAdLongformVideoTopSnapManager clear] */

void FUN_10643b44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10643b454; end: 10643b5d3; -[SCAdLongformVideoTopSnapManager didCloseViewForAdRequestClientId:itemId:params:playlistItemController:] */

void FUN_10643b454(float param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c29b0c0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  lVar4 = param_4;
  func_0x00010c08fa60();
  if ((lVar4 != 0) && (param_1 != 0.0)) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bfbbde0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    func_0x00010c0e00e0(param_6,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    if ((int)uVar3 == 0) {
      if (0.0 < param_1) {
        lVar4 = *(long *)(param_2 + 8);
        func_0x00010c0e00e0(lVar4,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c1c5300((double)param_1,lVar4);
        }
        _objc_release(lVar4);
      }
    }
    else {
      func_0x00010c0bb680(param_2,param_3,param_4);
    }
    func_0x00010c101400(param_7,param_3,param_5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10643b5d4; end: 10643b5e3; -[SCAdLongformVideoTopSnapManager markFullViewForAd:] */

void FUN_10643b5d4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__112628f18);
    return;
  }
  return;
}



/* Entry: 10643b5e4; end: 10643b62b; -[SCAdLongformVideoTopSnapManager mediaStartTimeForAd:] */

undefined8 FUN_10643b5e4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6880();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10643b62c; end: 10643b737; -[SCAdLongformVideoTopSnapManager extraPagePropertiesForAdRequestClientId:] */

void FUN_10643b62c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    if (param_4 != 0) {
      lVar1 = *(long *)(param_2 + 8);
      func_0x00010c0dff20(lVar1,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        puVar3 = PTR_PTR_1126ca880;
        _objc_alloc_init(PTR_PTR_1126ca880);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar3,param_4);
        _objc_release(puVar3);
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c0c68a0(param_2,param_3,param_4);
    if (param_1 != 0.0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_3,puVar3,&PTR____CFConstantStringClassReference_110f0d398);
      _objc_release(puVar3);
    }
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10643b738; end: 10643b743; -[SCAdLongformVideoTopSnapManager .cxx_destruct] */

void FUN_10643b738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10643b744; end: 10643b74b; -[SCAdUnskippableAdMediaInfo isStreamingMedia] */

undefined1 FUN_10643b744(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10643b74c; end: 10643b753; -[SCAdUnskippableAdMediaInfo setIsStreamingMedia:] */

void FUN_10643b74c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10643b754; end: 10643b75b; -[SCAdUnskippableAdMediaInfo imageKey] */

undefined8 FUN_10643b754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10643b75c; end: 10643b763; -[SCAdUnskippableAdMediaInfo setImageKey:] */

void FUN_10643b75c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10643b764; end: 10643b76b; -[SCAdUnskippableAdMediaInfo videoUrl] */

undefined8 FUN_10643b764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10643b76c; end: 10643b79b; -[SCAdUnskippableAdMediaInfo setVideoUrl:] */

void FUN_10643b76c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10643b79c; end: 10643b7a3; -[SCAdUnskippableAdMediaInfo mediaStartTime] */

undefined8 FUN_10643b79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10643b7a4; end: 10643b7ab; -[SCAdUnskippableAdMediaInfo setMediaStartTime:] */

void FUN_10643b7a4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10643b7ac; end: 10643b7b3; -[SCAdUnskippableAdMediaInfo accumulatedLongformTimeViewedInSec] */

undefined8 FUN_10643b7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10643b7b4; end: 10643b7bb; -[SCAdUnskippableAdMediaInfo setAccumulatedLongformTimeViewedInSec:] */

void FUN_10643b7b4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10643b7bc; end: 10643b7eb; -[SCAdUnskippableAdMediaInfo .cxx_destruct] */

void FUN_10643b7bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10643b7ec; end: 10643b943; -[SCAdUnskippableAdManager initWithGrapheneRegistry:timerFactoryBlock:] */

undefined1 *
FUN_10643b7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f12e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_4;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10643b944; end: 10643b98b; -[SCAdUnskippableAdManager clear] */

void FUN_10643b944(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 10643b98c; end: 10643ba0b; -[SCAdUnskippableAdManager trackUnSkippableAdIfNecessary:] */

void FUN_10643b98c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c0dff20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126ca888;
      _objc_alloc_init(PTR_PTR_1126ca888);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,puVar2,param_3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10643ba0c; end: 10643ba27; -[SCAdUnskippableAdManager isUnSkippableAd:] */

uint FUN_10643ba0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf4b900(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10643ba28; end: 10643ba2f; -[SCAdUnskippableAdManager isUnSkippableAdWhenStartViewing:] */

void FUN_10643ba28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10643ba30; end: 10643ba87; -[SCAdUnskippableAdManager markFullViewForAd:] */

void FUN_10643ba30(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_3);
    func_0x00010befa120(uVar1,param_2,param_3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10643ba88; end: 10643bacf; -[SCAdUnskippableAdManager mediaStartTimeForAd:] */

undefined8 FUN_10643ba88(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6880();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10643bad0; end: 10643bbab; -[SCAdUnskippableAdManager updateMediaStartTimeSec:videoUrl:imageKey:isStreamingMedia:forAd:] */

void FUN_10643bad0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c0e00e0(lVar1,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1c5300(param_1,lVar1);
    func_0x00010c2222e0(lVar1,param_3,param_4);
    func_0x00010c1b4c20(lVar1,param_3,param_6);
    func_0x00010bed9780(param_1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa460(lVar1,param_3,param_2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10643bbac; end: 10643bbf3; -[SCAdUnskippableAdManager imageKeyForAd:] */

void FUN_10643bbac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe7fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10643bbf4; end: 10643bd4b; -[SCAdUnskippableAdManager didStartViewForAdRequestClientId:isUnSkippableAd:adProductType:unskippableDurationMs:adConfigProvider:adConfigProviderV2:] */

void FUN_10643bbf4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (param_5 == 0) {
      func_0x00010c12d360(*(undefined8 *)(param_2 + 0x40),param_3,param_4);
    }
    else {
      func_0x00010befa120();
      uVar1 = param_7;
      func_0x00010c269d40(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010be089c0(param_1,param_2,param_3,param_6,uVar1,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)lVar3 != 0) {
        lVar3 = *(long *)(param_2 + 8);
        func_0x00010c0dff20(lVar3,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          puVar4 = PTR_PTR_1126ca890;
          _objc_alloc(PTR_PTR_1126ca890);
          func_0x00010c059540(param_1);
          func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar4,param_4);
          _objc_release(puVar4);
          func_0x00010bece2c0(param_2,param_3,param_6);
        }
      }
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10643bd4c; end: 10643c00b; -[SCAdUnskippableAdManager didStartViewForAdRequestClientId:isUnSkippableAd:adProductType:unskippableDurationMs:adConfigProvider:adConfigProviderV2:itemId:playlistItemController:] */

void FUN_10643bd4c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar5 = param_4;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x40);
    if (param_5 == 0) {
      func_0x00010c12d360();
    }
    else {
      func_0x00010bf4b900();
      if ((uVar1 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x40));
        _objc_initWeak(auStack_78,param_2);
        lVar5 = *(long *)(param_2 + 0x28);
        uVar4 = param_1;
        func_0x00010c0cd480(param_1,PTR_PTR_1126afec0);
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_10643c00c;
        puStack_b8 = &UNK_1108a0d90;
        _objc_copyWeak(auStack_90,auStack_78);
        _objc_retain(param_4);
        lStack_b0 = param_4;
        _objc_retain(param_9);
        uStack_a8 = param_9;
        _objc_retain(param_10);
        uStack_a0 = param_10;
        uStack_88 = param_6;
        uStack_80 = param_1;
        _objc_retain(param_7);
        uStack_98 = param_7;
        (**(code **)(lVar5 + 0x10))(uVar4,lVar5,0,&puStack_d0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        *(long *)(param_2 + 0x20) = lVar5;
        _objc_release(uVar4);
        _objc_release(uStack_98);
        _objc_release(uStack_a0);
        _objc_release(uStack_a8);
        _objc_release(lStack_b0);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(auStack_78);
      }
      uVar4 = param_7;
      func_0x00010c269d40(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010be089c0(param_1);
      _objc_release(uVar2);
      _objc_release(uVar4);
      if ((int)lVar5 != 0) {
        lVar5 = *(long *)(param_2 + 8);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 == 0) {
          puVar3 = PTR_PTR_1126ca890;
          _objc_alloc(PTR_PTR_1126ca890);
          func_0x00010c059540(param_1);
          func_0x00010c1d0640(*(undefined8 *)(param_2 + 8));
          _objc_release(puVar3);
          func_0x00010bece2c0(param_2);
        }
      }
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 10643c00c; end: 10643c04b;  */

void FUN_10643c00c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf77120(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10643c04c; end: 10643c8db; -[SCAdUnskippableAdManager extraPagePropertiesForAdRequestClientId:adConfigProvider:adConfigProviderV2:adProduectType:skippableType:unskippableDurationMs:progressBarEnabled:unifiedActionTrayEnabled:progressViewTimeTextOverride:progressViewText:isSpotlight:mediaViewedTimeInSec:isSKOverlay:shouldSetCustomLayer:wakeUpUiType:] */

void FUN_10643c04c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,uint param_9,undefined4 param_10,
                  undefined4 param_11,undefined **param_12,undefined8 param_13,uint param_14,
                  undefined4 param_15,long param_16)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  undefined **ppuStack_a8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar13 = (undefined *)0x0;
    goto LAB_10643c88c;
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010bf4b900();
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = param_6;
  func_0x00010bf1f480();
  lVar4 = param_6;
  func_0x00010bf1f480();
  uVar2 = (uint)lVar3;
  if ((byte)param_14 == 0) {
    uVar2 = (uint)lVar4;
  }
  uVar2 = uVar2 & (param_14 >> 8 & 0xff ^ 1);
  if ((param_8 == 2) || (iVar1 != 0)) {
    if ((param_9 & uVar2) == 1) {
      func_0x00010beae940(param_1,0xbff0000000000000,param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c0d3c80();
      _objc_release(param_2);
      if (((((byte)param_14 ^ 1) & 1) == 0) && (func_0x00010c1d0640(lVar3), param_16 == 2)) {
        func_0x00010c1d0640(lVar3);
      }
      func_0x00010bef7f60(puVar13);
      _objc_release(lVar3);
    }
    func_0x00010c1d0640(puVar13);
    func_0x00010c1d0640(puVar13);
    func_0x00010c1d0640(puVar13);
    goto LAB_10643c88c;
  }
  func_0x00010c1d0640(puVar13);
  lVar3 = param_2;
  func_0x00010be089c0(param_1);
  if ((int)lVar3 == 0) {
LAB_10643c1ac:
    func_0x00010be45200(param_1);
    func_0x00010c1d0640(puVar13);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x18);
    func_0x00010bf4b900();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar5 & 1) != 0) goto LAB_10643c1ac;
    func_0x00010bf91fe0(PTR_PTR_1126b8ca8);
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar6);
  }
  func_0x00010c1d0640(puVar13);
  lVar3 = param_2;
  dVar14 = param_1;
  func_0x00010be089c0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar3 == 0) {
    if (param_7 == 2) {
      lVar3 = param_6;
      func_0x00010c067f60();
      dVar14 = (double)lVar3;
      if (param_1 == dVar14) {
        func_0x00010c1d0640(puVar13);
        func_0x00010c1d0640(puVar13);
      }
    }
  }
  else {
    func_0x00010bf92000(PTR_PTR_1126b8ca8);
    func_0x00010c0df760(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar6);
  }
  if (param_12 == (undefined **)0x0) {
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110e4f598;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4f598,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_12);
    ppuStack_a8 = param_12;
  }
  if (param_8 == 1) {
    dVar14 = param_1;
    func_0x00010c0cd480(PTR_PTR_1126afec0);
    dVar15 = dVar14;
  }
  else {
    func_0x00010c0d8740();
    dVar15 = -1.0;
  }
  func_0x00010bf1f480();
  if ((param_9 & uVar2) == 1) {
    func_0x00010bdc40c0(param_2);
    lVar3 = param_2;
    func_0x00010beae940(param_1,dVar14 * 1000.0,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar13);
    _objc_release(lVar3);
    dVar14 = param_1;
LAB_10643c60c:
    bVar12 = false;
  }
  else {
    if ((param_9 & 1) == 0) {
      func_0x00010c1d0640(puVar13);
      func_0x00010c1d0640(puVar13);
      goto LAB_10643c60c;
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x4032000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar6);
    dVar14 = 18.0;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar6);
    bVar12 = true;
  }
  if (param_16 != 2) {
    FUN_10643c8dc();
  }
  puVar6 = PTR_PTR_1126ca3f8;
  _objc_alloc();
  func_0x00010bdc40c0(param_2);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (bVar12) {
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c03b460(dVar14,dVar15,puVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c1d0640(puVar13);
  if (((byte)param_14 != 0) && (param_16 == 2)) {
    func_0x00010c1d0640(puVar13);
  }
  func_0x00010c278aa0(param_2);
  func_0x00010c0c68a0(param_2);
  func_0x00010bfe7fc0();
  _objc_retainAutoreleasedReturnValue();
  if ((dVar14 != 0.0) && (param_2 != 0)) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar14,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar13);
  }
  _objc_release(param_2);
  _objc_release(puVar6);
  _objc_release(ppuStack_a8);
LAB_10643c88c:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10643c8dc; end: 10643c93b;  */

ulong FUN_10643c8dc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bfe3100();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = param_1;
    func_0x00010bf1f480(param_1,param_2,&PTR____CFConstantStringClassReference_110e4f5f8);
  }
  else {
    uVar2 = (ulong)(puVar1 != (undefined *)0x2);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10643c93c; end: 10643cb9b; -[SCAdUnskippableAdManager didCloseViewForAdRequestClientId:itemId:page:params:lastInteraction:playlistItemController:] */

void FUN_10643c93c(float param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c29b0c0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if ((lVar3 != 0) && (param_1 != 0.0)) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bfbbde0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_7;
    func_0x00010c0e00e0(param_7,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    if ((int)uVar4 == 0) {
      if (0.0 < param_1) {
        uVar2 = param_6;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = param_6;
        func_0x00010c118b40(param_6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = param_6;
        func_0x00010c118b40(param_6);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf1f3c0();
        _objc_release(uVar6);
        _objc_release(uVar2);
        func_0x00010c2879e0((double)param_1,param_2,param_3,uVar4,uVar5,uVar7,param_4);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
    }
    else {
      func_0x00010c0bb680(param_2,param_3,param_4);
    }
    func_0x00010c101400(param_9,param_3,param_5);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10643cb9c; end: 10643cba3; -[SCAdUnskippableAdManager viewWillAppearForItemId:playlistItemController:] */

void FUN_10643cb9c(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c101410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x3,PTR_s_playlistItemDidUpdateForID__11261df20);
  return;
}



/* Entry: 10643cba4; end: 10643cc2b; -[SCAdUnskippableAdManager didFullyViewedForAdRequestClientId:itemId:playlistItemController:adProductType:unskippableDurationMs:adConfigProvider:] */

void FUN_10643cba4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c0bb680(param_1,param_2,param_3);
    func_0x00010c101400(param_5,param_2,param_4);
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10643cc2c; end: 10643ccfb; -[SCAdUnskippableAdManager didViewAdRequestClientId:itemId:longformTimeViewedInSec:playlistItemController:] */

void FUN_10643cc2c(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (0.0 < param_1 && lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010beed720(lVar1);
      func_0x00010c161480(param_1 + dVar3,lVar1);
      lVar2 = param_5;
      func_0x00010c08fa60();
      if ((param_6 != 0) && (lVar2 != 0)) {
        func_0x00010c101400(param_6,param_3,param_5);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10643ccfc; end: 10643cd97; -[SCAdUnskippableAdManager didHideAdForAdRequestClientId:itemId:playlistItemController:] */

void FUN_10643ccfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    func_0x00010c101400(param_5,param_2,param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10643cd98; end: 10643ce1f; -[SCAdUnskippableAdManager _accumulatedLongformTimeViewedForAdRequestClientId:] */

undefined8 FUN_10643cd98(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x38);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010beed720(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10643ce20; end: 10643cebb; -[SCAdUnskippableAdManager _updateImageKey:withMediaStartTime:] */

void FUN_10643ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_3,&PTR____CFConstantStringClassReference_110e17af8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10643cebc; end: 10643cfaf; -[SCAdUnskippableAdManager _trackUnskippableAdsMetricsForAdProductType:] */

void FUN_10643cebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c2828c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10643cfb0; end: 10643d057; -[SCAdUnskippableAdManager _enableABBasedExtendedPlayForAdProductType:adConfigProvider:unskippableDurationMs:adConfigProviderV2:] */

bool FUN_10643cfb0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  _objc_retain(param_6);
  lVar3 = param_6;
  func_0x00010c0ec0c0(param_6,param_3,&PTR____CFConstantStringClassReference_110e4f5d8);
  uVar1 = 0;
  if (param_4 == 7) {
    uVar1 = (uint)lVar3 ^ 1;
  }
  if (param_4 == 2) {
    lVar3 = param_6;
    func_0x00010c067f60(param_6,param_3,&PTR____CFConstantStringClassReference_110e4f578,0);
    if (param_1 == (double)lVar3 && (uVar1 & 1) == 0) {
LAB_10643d030:
      bVar2 = param_4 == 5;
      goto LAB_10643d038;
    }
  }
  else if ((uVar1 & 1) == 0) goto LAB_10643d030;
  bVar2 = true;
LAB_10643d038:
  _objc_release(param_6);
  return bVar2;
}



/* Entry: 10643d058; end: 10643d0df; -[SCAdUnskippableAdManager _isUserStoryUnskippableTestWithBlockingSwipeEnabledForAdProduectType:adConfigProvider:adConfigProviderV2:unskippableDurationMs:] */

undefined8
FUN_10643d058(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  if ((param_4 == 2) &&
     (func_0x00010c067f60(param_6,param_3,&PTR____CFConstantStringClassReference_110e4f578,0),
     param_1 == (double)param_6)) {
    uVar1 = param_5;
    func_0x00010bf91fa0(param_5);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_5);
  return uVar1;
}



/* Entry: 10643d0e0; end: 10643d413; -[SCAdUnskippableAdManager _setupOrganicProgressBarForAdRequestClientId:unskippableDurationMs:resetProgressBarOnDisappear:shouldHideProgressBar:accumulatedLongformTimeViewedMs:isSpotlight:shouldSetCustomLayer:wakeUpUiType:adConfigProviderV2:] */

undefined *
FUN_10643d0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,ulong param_9,
             long param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_11);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR_PTR_1126b3af0;
  _objc_alloc(PTR_PTR_1126b3af0);
  lVar5 = 1;
  func_0x00010c054900();
  if (param_10 != 2) {
    lVar5 = param_11;
    FUN_10643c8dc();
  }
  if (((param_9 & 1) != 0) || (((uint)param_8 & (uint)lVar5) != 0)) {
    puVar3 = PTR_PTR_1126b3b00;
    _objc_opt_class();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar4,&PTR____CFConstantStringClassReference_110f0e2b8);
    _objc_release(puVar4);
  }
  func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110eb9618);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110ebe7f8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110ebe858);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110eb9698);
  _objc_release(puVar3);
  if ((param_8 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x4020000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110f0d5f8);
    _objc_release(puVar3);
  }
  func_0x00010c1d0640(puVar1,param_4,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110eb96b8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110eb96d8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110eb96f8);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5fc8,
                      &PTR____CFConstantStringClassReference_110eb9638);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110eb9718);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_11 + 0x30);
}



/* Entry: 10643d414; end: 10643d41b; -[SCAdUnskippableAdManager skippableAdRequestIds] */

undefined8 FUN_10643d414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10643d41c; end: 10643d44b; -[SCAdUnskippableAdManager setSkippableAdRequestIds:] */

void FUN_10643d41c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10643d44c; end: 10643d453; -[SCAdUnskippableAdManager adRequestClientIdToMediaInfoMap] */

undefined8 FUN_10643d44c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10643d454; end: 10643d483; -[SCAdUnskippableAdManager setAdRequestClientIdToMediaInfoMap:] */

void FUN_10643d454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10643d484; end: 10643d48b; -[SCAdUnskippableAdManager adRequestClientIdsForAdsStartedAsUnSkippable] */

undefined8 FUN_10643d484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10643d48c; end: 10643d4bb; -[SCAdUnskippableAdManager setAdRequestClientIdsForAdsStartedAsUnSkippable:] */

void FUN_10643d48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10643d4bc; end: 10643d533; -[SCAdUnskippableAdManager .cxx_destruct] */

void FUN_10643d4bc(long param_1)

{
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



/* Entry: 10643d534; end: 10643d57b; -[SCAdUnskippableTrackInfo initWithUnskippableDurationMs:] */

void FUN_10643d534(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f12e8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10643d57c; end: 10643d583; -[SCAdUnskippableTrackInfo unskippableDurationMs] */

undefined8 FUN_10643d57c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10643d584; end: 10643d633;  */

double FUN_10643d584(double param_1,float param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  _objc_retain();
  func_0x00010c1177a0(param_3);
  dVar1 = dVar2;
  func_0x00010c1177e0(param_3);
  _objc_release(param_3);
  dVar3 = 1.0;
  if (dVar2 != 0.0) {
    if (dVar2 <= 0.0) {
      dVar2 = (double)param_2;
      func_0x00010c0cd480(PTR_PTR_1126afec0);
    }
    dVar2 = (dVar1 + (double)(SUB84(param_1,0) / 1000.0)) / dVar2 + 1e-06;
    dVar3 = 1.0;
    if (dVar2 <= 1.0) {
      dVar3 = dVar2;
    }
  }
  return dVar3;
}



/* Entry: 10643d634; end: 10643d83b;  */

ulong FUN_10643d634(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar5 & 1) == 0) {
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar5 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar5 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffffffffffff;
      }
      else {
        uVar4 = param_1;
        func_0x00010643e29c();
        uVar5 = 10;
        if ((int)uVar4 != 0) {
          uVar5 = 0xb;
        }
      }
    }
    else {
      uVar4 = param_1;
      func_0x0001085367d4(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x000108532b98();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
  }
  else {
    uVar5 = 0xb;
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10643d83c; end: 10643e23f;  */

void FUN_10643d83c(undefined8 param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_90;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  puVar2 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar12);
  if (((ulong)puVar2 & 1) != 0) {
    puVar12 = puVar1;
    func_0x00010bf5ac40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a7980(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  puVar12 = param_2;
  func_0x00010be36bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bef4b20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar4 = uVar3;
  func_0x00010c15ed20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b8440(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bef4d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7c00(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7bc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bef2c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7840(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c099300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a79e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c258fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0fdbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7aa0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bef4260(param_4);
  func_0x0001084b952c();
  func_0x00010c2a7ae0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bef60a0(uVar3);
  func_0x00010c2a7e20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0ec0e0(uVar3);
  func_0x00010c2b4f80(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf21060(uVar3);
  func_0x00010c2a98e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar12 = param_2;
  FUN_106441c8c(param_2,param_3);
  puVar2 = param_2;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar12 == 0) {
    puVar7 = param_3;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010bfecde0();
    _objc_release(puVar12);
    _objc_retain(puVar6);
    puVar9 = puVar2;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c0720c0();
    puVar12 = PTR_PTR_1126b8e08;
    if (((ulong)puVar11 & 1) == 0) {
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
LAB_10643ded8:
      _objc_retain(puVar2);
      puVar12 = puVar2;
    }
    else {
      _objc_retain(puVar6);
      _objc_opt_class(puVar12);
      puVar11 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar12);
      puVar12 = puVar6;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
      }
      _objc_retain(puVar12);
      _objc_release(puVar6);
      puVar11 = puVar12;
      func_0x00010bef4240();
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      if (puVar11 == (undefined *)0x4) goto LAB_10643ded8;
      if ((long)puVar8 < 1) {
LAB_10643deec:
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = puVar7;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar12;
        func_0x00010bf529e0();
        _objc_release(puVar12);
        if (puVar9 <= puVar8 + -1) goto LAB_10643deec;
        puVar8 = puVar7;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
      }
      func_0x00010c2a8ce0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar8 = param_3;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puStack_90 = (undefined *)0x0;
    }
    else {
      FUN_10643d634();
      func_0x00010643d740();
      _objc_retain(puVar8);
      puVar9 = PTR_PTR_1126c2118;
      _objc_opt_class(PTR_PTR_1126c2118);
      puVar10 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar9);
      puVar9 = puVar8;
      if (((ulong)puVar10 & 1) == 0) {
        puVar10 = PTR_PTR_1126b8e08;
        _objc_opt_class(PTR_PTR_1126b8e08);
        puVar11 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar10);
        puStack_90 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (((ulong)puVar11 & 1) != 0) {
          func_0x00010c15ed20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10643e028;
        }
        puStack_90 = (undefined *)0x0;
      }
      else {
        func_0x0001085367d4();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar11;
        func_0x00010bf5bc00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar10);
LAB_10643e028:
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
    }
    puVar9 = PTR_PTR_1126b8e08;
    _objc_retain(puVar6);
    _objc_opt_class(puVar9);
    puVar10 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar9);
    puVar9 = puVar6;
    if (((ulong)puVar10 & 1) == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar6);
    func_0x00010bef4240();
    _objc_release(puVar9);
    func_0x00010c2ba700(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba720(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b5920(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c084fc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2b9400(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar12);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    goto LAB_10643e14c;
  }
  _objc_release(puVar2);
  puVar12 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  puVar2 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar12);
  puVar12 = puVar6;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    puVar7 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar2);
    if (((ulong)puVar7 & 1) != 0) {
      _objc_retain(puVar6);
      puVar2 = puVar6;
      func_0x00010c11b3a0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6500(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar6;
      func_0x00010bf8c980(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2acc80(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar6;
      func_0x00010c11b020(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aa4c0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c242500(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010bf529e0(puVar12);
      func_0x00010c2b9400(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_10643de74;
    }
  }
  else {
    _objc_retain(puVar6);
    puVar2 = puVar6;
    func_0x00010c11b3a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6500(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf8c980(puVar6);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2acc80(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar2);
    func_0x00010bf68960(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar2 = puVar12;
    func_0x00010beec820(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa4c0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
LAB_10643de74:
    _objc_release(puVar12);
  }
  func_0x00010643e29c();
  func_0x00010c2ba700(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107a59564(param_6);
  func_0x00010c2aa4e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_90 = puVar6;
LAB_10643e14c:
  _objc_release(puStack_90);
  func_0x00010c0710c0(param_4);
  func_0x00010c2b0640(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c241620(param_4);
  func_0x00010c2b9420(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bef3ee0(param_4);
  func_0x00010c2a78a0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c275f20(param_4);
  func_0x00010c2a7880(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bef2ee0(param_4);
  func_0x00010c2a78c0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10643e240; end: 10643e30b;  */

ulong FUN_10643e240(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c11b1e0(param_1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10643e30c; end: 10643e417;  */

ulong FUN_10643e30c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfd5020(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10643e418; end: 10643e4c7;  */

void FUN_10643e418(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10643e4c8; end: 10643e5ef;  */

ulong FUN_10643e4c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_1);
    uVar2 = param_3;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c9870;
    _objc_opt_class(PTR_PTR_1126c9870);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar5 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    uVar3 = param_1;
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar4 = uVar3;
    func_0x00010bfecde0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar5 = 0;
    if (uVar4 != 0x7fffffffffffffff) {
      uVar5 = uVar4;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10643e5f0; end: 10643e707;  */

bool FUN_10643e5f0(ulong param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  puVar2 = PTR_PTR_1126bdd28;
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar3 = param_2;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_2);
    uVar4 = param_1;
    func_0x00010c242500(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar5 = uVar4;
    func_0x00010bf529e0(uVar4);
    uVar6 = uVar3;
    func_0x00010c242500(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar6;
    func_0x00010bf529e0(uVar6);
    bVar1 = uVar5 != uVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10643e708; end: 10643ed4f;  */

void FUN_10643e708(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar4 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  puVar1 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar4);
  if (((ulong)puVar1 & 1) == 0) {
    puVar4 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    puVar1 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar4);
    if (((ulong)puVar1 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_10643ed28;
    }
    _objc_retain(param_1);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar2 = param_1;
    func_0x00010bf8c980();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bf8c980();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b92c8;
      func_0x00010bf8c980(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b92c8;
      if (param_2 == 0) {
        func_0x00010c0ecf40(PTR_PTR_1126b92c8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0ecfa0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar4 = param_1;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010c11b3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b92c8;
      func_0x00010c11b3a0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar2 = param_1;
    func_0x00010c11b1e0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c11b1e0(param_1);
      func_0x00010c0df7c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b92c8;
      func_0x00010c11b1e0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar4 = param_1;
    func_0x00010bfe4640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010bfe4640(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b92c8;
      func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c077680(param_1);
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b92c8;
    func_0x00010c260660(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
  }
  else {
    _objc_retain(param_1);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar4 = param_1;
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010bf8c980(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b92c8;
      func_0x00010bf8c980(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bf8c980(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b92c8;
      if (param_2 == 0) {
        func_0x00010c0ecf40(PTR_PTR_1126b92c8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0ecfa0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar4 = param_1;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010c11b3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b92c8;
      func_0x00010c11b3a0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar2 = param_1;
    func_0x00010c11b1e0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c11b1e0(param_1);
      func_0x00010c0df7c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b92c8;
      func_0x00010c11b1e0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar4 = param_1;
    func_0x00010bfe4640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010bfe4640(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b92c8;
      func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c077680(param_1);
    func_0x00010c0df6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c260660(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar2 = param_1;
    func_0x00010c242500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b92c8;
    func_0x00010c23fa00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
LAB_10643ed28:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10643ed50; end: 10643eeef;  */

void FUN_10643ed50(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010c11b3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6500(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf8c980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2acc80(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c11b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c2aa4c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10643eef0; end: 10643ef3f;  */

bool FUN_10643eef0(long param_1)

{
  long lVar1;
  
  func_0x00010643ee4c(param_1,&PTR___NSConcreteGlobalBlock_110922350,
                      PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 10643ef40; end: 10643f00f;  */

void FUN_10643ef40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bef3720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0ec640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10643f010; end: 10643f03f;  */

void FUN_10643f010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef51e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 10643f040; end: 10643f20b;  */

void FUN_10643f040(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar6 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        puVar6 = *(undefined **)((long)puVar7 * 8);
        puVar3 = puVar6;
        func_0x00010bef60a0();
        if (puVar3 != (undefined *)0x0) {
          puVar3 = puVar6;
          func_0x00010c26a3a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar3);
          puVar3 = puVar6;
          func_0x00010c26a3a0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 != (undefined *)0x0) {
            puVar2 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar2;
            func_0x00010bf51e00();
            _objc_release(puVar2);
            _objc_release(puVar3);
            goto LAB_10643f1c4;
          }
          puVar4 = puVar3;
          func_0x00010bf529e0();
          _objc_release(puVar3);
          if (puVar4 != (undefined *)0x0) {
            func_0x00010c26a3a0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10643f1c4;
          }
        }
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = param_2;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    puVar6 = (undefined *)0x0;
  }
LAB_10643f1c4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain();
    puVar6 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    puVar2 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = param_2;
      func_0x000108536f70();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bf4bf60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        puVar6 = puVar7;
      }
      _objc_retain(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar2);
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10643f20c; end: 10643f2a7;  */

void FUN_10643f20c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  puVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = param_1;
    func_0x000108536f70();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4bf60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10643f2a8; end: 10643f30b;  */

void FUN_10643f2a8(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000108535b00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10643f30c; end: 10643f377;  */

undefined8 FUN_10643f30c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010c101520(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10643f378; end: 10643f3db;  */

void FUN_10643f378(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25cfc0(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10643f3dc; end: 10643f58b;  */

void FUN_10643f3dc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10643f58c;
    uStack_40 = 0x10643f59c;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    uVar4 = puStack_58[5];
    _objc_retain(uVar4);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10643f58c; end: 10643f5a3;  */

void FUN_10643f58c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10643f5a4; end: 10643f633;  */

void FUN_10643f5a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10643f378();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643f634; end: 10643f63f;  */

void FUN_10643f634(void)

{
  return;
}



/* Entry: 10643f640; end: 10643f6cf;  */

void FUN_10643f640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10643f378();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643f6d0; end: 10643f6d3;  */

void FUN_10643f6d0(void)

{
  return;
}


