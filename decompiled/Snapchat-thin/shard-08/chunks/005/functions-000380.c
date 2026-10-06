/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062b10c0; end: 1062b114f; -[SCContextSpotlightViewController removeSwipeUpTeachingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b10c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c2a6740(param_3,param_2,0);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c12c8e0(param_3);
  func_0x00010c12cf80(*(undefined8 *)(param_1 + _DAT_112744c68),param_2,param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744dc8);
  *(undefined8 *)(param_1 + _DAT_112744dc8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062b1150; end: 1062b124f; -[SCContextSpotlightViewController _createPendingRepliesTooltipWithSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062b1150(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b09c0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc();
    puVar2 = puVar1;
    FUN_1062ccd14();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bcbeb30();
    uVar4 = 3;
    if ((int)puVar3 == 0) {
      uVar4 = 4;
    }
    func_0x00010c051640(puVar1,param_2,puVar2,0,uVar4);
    lVar5 = (long)_DAT_112744dcc;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar5);
    func_0x00010be71280(param_1,param_2,param_3);
    _objc_release(param_3);
    return param_1;
  }
  return 0;
}



/* Entry: 1062b1250; end: 1062b13ef; -[SCContextSpotlightViewController _pendingRepliesTooltipConstraintsWithSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1062b1250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar14 = (long)_DAT_112744dd0;
  if (*(long *)(param_1 + lVar14) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar13 = (long)_DAT_112744dcc;
  uVar1 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf493c0(0xc024000000000000,uVar1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 2;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar6;
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar1);
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,uVar10);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined *)0x1;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126c9668;
  _objc_retain(uVar10);
  func_0x00010c0cb140(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217740();
  func_0x00010c18fca0(puVar6,param_2,uVar10);
  func_0x00010c217980(puVar6,param_2,1);
  puVar7 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217760();
  puVar8 = puVar7;
  func_0x00010c0ccaa0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179660();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126b5c68;
  func_0x00010c2751c0(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c0ccaa0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010c0ccaa0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1619e0();
  _objc_release(uVar10);
  _objc_release(puVar8);
  func_0x00010c0f80a0(param_3,param_2,puVar7,uVar11,param_5,param_6);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return puVar6;
}



/* Entry: 1062b13f0; end: 1062b1557; -[SCContextSpotlightViewController _presentTopicWithHashtag:contextMenuType:actionType:interactionContext:] */

void FUN_1062b13f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c9668;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217740();
  func_0x00010c18fca0(puVar1,param_2,param_3);
  func_0x00010c217980(puVar1,param_2,1);
  puVar2 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217760();
  puVar3 = puVar2;
  func_0x00010c0ccaa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179660();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b5c68;
  func_0x00010c2751c0(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0ccaa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0ccaa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1619e0();
  _objc_release(param_3);
  _objc_release(puVar3);
  func_0x00010c0f80a0(param_1,param_2,puVar2,param_4,param_5,param_6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b1558; end: 1062b1573; -[SCContextSpotlightViewController spotlightDescriptionViewController:didSelectHashtag:] */

void FUN_1062b1558(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7f0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentTopicWithHashtag_context_11257d5d0,param_4,8,5,0xe);
    return;
  }
  return;
}



/* Entry: 1062b1574; end: 1062b15f7; -[SCContextSpotlightViewController spotlightDescriptionViewController:didSelectMentionedUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b1574(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112744c5c);
    func_0x00010c0e00e0(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c0f80a0(param_1,param_2,lVar1,8,5,0xe);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062b15f8; end: 1062b17a3; -[SCContextSpotlightViewController _prefetchActionsForMentions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b15f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091a5c8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1062b17ac;
    puStack_60 = &UNK_110856a28;
    lVar2 = lVar1;
    lStack_58 = param_1;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_80,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112744ccc);
      func_0x00010c244620(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010c09d7c0(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062b17a4; end: 1062b17ab;  */

void FUN_1062b17a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1062b17ac; end: 1062b181f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1062b17ac(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744c5c);
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    _objc_release();
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1062b1820; end: 1062b19a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b1820(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_2);
          }
          lVar9 = *(long *)(lStack_128 + lVar11 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar9;
          func_0x00010c08fa60();
          if (lVar2 != 0) {
            lVar2 = param_1;
            func_0x00010bdd6540();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112744c5c));
            _objc_release(lVar2);
          }
          _objc_release(lVar9);
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        lVar1 = param_2;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_2);
    param_3 = (undefined1 *)puVar8;
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0ccaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179660();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b5c68;
  func_0x00010c0ca400(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0ccaa0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar6 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0ccaa0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1619e0();
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar6 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  if (puVar7 == (undefined1 *)0x0) {
    puVar4 = PTR_PTR_1126c9678;
    _objc_opt_new(PTR_PTR_1126c9678);
    puVar6 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar4);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(puVar4);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18af40(puVar4);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170a80(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171480(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c21ef80(puVar3);
  }
  else {
    puVar4 = PTR_PTR_1126c9670;
    _objc_opt_new(PTR_PTR_1126c9670);
    puVar6 = param_3;
    func_0x00010c242760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140(puVar4);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9240(puVar4);
    _objc_release(puVar6);
    func_0x00010c1e5800(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062b19a4; end: 1062b1c7b; -[SCContextSpotlightViewController _buildMentionActionFromSnapchatter:] */

void FUN_1062b19a4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ccaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179660();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010c0ca400(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0ccaa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ccaa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1619e0();
  _objc_release(puVar2);
  _objc_release(ppuVar4);
  ppuVar4 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c08fa60();
  _objc_release(ppuVar4);
  if (ppuVar5 == (undefined **)0x0) {
    puVar2 = PTR_PTR_1126c9678;
    _objc_opt_new(PTR_PTR_1126c9678);
    ppuVar5 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
    }
    func_0x00010c21e620(puVar2,param_2,ppuVar4);
    _objc_release(ppuVar5);
    ppuVar5 = param_3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
    }
    func_0x00010c21f760(puVar2,param_2,ppuVar4);
    _objc_release(ppuVar5);
    ppuVar5 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
    }
    func_0x00010c18af40(puVar2,param_2,ppuVar4);
    _objc_release(ppuVar5);
    ppuVar5 = param_3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c170a80(puVar2,param_2,ppuVar4);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    ppuVar5 = param_3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c171480(puVar2,param_2,ppuVar4);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    func_0x00010c21ef80(puVar1,param_2,puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126c9670;
    _objc_opt_new(PTR_PTR_1126c9670);
    ppuVar4 = param_3;
    func_0x00010c242760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140(puVar2,param_2,ppuVar4);
    _objc_release(ppuVar4);
    ppuVar5 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
    }
    func_0x00010c1a9240(puVar2,param_2,ppuVar4);
    _objc_release(ppuVar5);
    func_0x00010c1e5800(puVar1,param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062b1c7c; end: 1062b1d87; -[SCContextSpotlightViewController spotlightDescriptionViewControllerDidUpdateIsExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b1c7c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = (long)_DAT_112744d54;
  if (*(long *)(param_1 + lVar1) != 0) {
    if (param_3 == 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      uStack_60 = 0x1062b1da0;
      puStack_58 = &UNK_110842e18;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1062b1db8;
      puStack_80 = &UNK_110841f20;
      lStack_78 = param_1;
      lStack_50 = param_1;
      func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_70,
                          &puStack_98);
    }
    else {
      func_0x00010c1677c0(0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar1),param_2,1);
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_1062b1d88;
      puStack_30 = &UNK_110842e18;
      lStack_28 = param_1;
      func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48)
      ;
    }
  }
  return;
}



/* Entry: 1062b1d88; end: 1062b1db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b1d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744d54),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062b1db8; end: 1062b1df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b1db8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112744d54;
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),
             PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 1062b1df8; end: 1062b1e13; -[SCContextSpotlightViewController hashtagsViewController:didSelectHashtag:] */

void FUN_1062b1df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7f0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentTopicWithHashtag_context_11257d5d0,param_4,8,5,0xd);
    return;
  }
  return;
}



/* Entry: 1062b1e14; end: 1062b1e43; -[SCContextSpotlightViewController actionsViewController:didSelectAction:contextMenuType:actionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b1e14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  if (*(char *)(param_1 + _DAT_112744c18) == '\0') {
    uVar1 = 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performAction_contextMenuType_ac_11261ba48,param_4,param_5,param_6,uVar1)
  ;
  return;
}



/* Entry: 1062b1e44; end: 1062b1fcf; -[SCContextSpotlightViewController actionsViewControllerDidRequestToShowDoubleTapUserEducation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b1e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_5 + _DAT_112744d94);
  func_0x00010c234800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126c9308;
    _objc_alloc(PTR_PTR_1126c9308);
    func_0x00010c031360();
    func_0x00010bef7700(param_5,param_6,puVar2);
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar4 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar3,param_6,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    func_0x00010bf77e80(puVar2,param_6,param_5);
    uVar5 = *(undefined8 *)(param_5 + _DAT_112744c64);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3e60();
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1062b1fd0; end: 1062b2083; -[SCContextSpotlightViewController showPendingRepliesTooltipConstrainedToSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062b1fd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) ||
     (0x1e < *(ulong *)(param_1 + _DAT_112744db0) ||
      (1L << (*(ulong *)(param_1 + _DAT_112744db0) & 0x3f) & 0x48000200U) == 0)) {
    param_1 = 0;
  }
  else {
    lVar2 = (long)_DAT_112744dcc;
    if (*(long *)(param_1 + lVar2) == 0) {
      func_0x00010bdf11a0(param_1,param_2,param_3);
    }
    else {
      lVar1 = param_1;
      func_0x00010be71280(param_1,param_2,param_3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
      param_1 = lVar1;
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1062b2084; end: 1062b209f; -[SCContextSpotlightViewController hidePendingRepliesTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b2084(long param_1)

{
  if (*(long *)(param_1 + _DAT_112744dcc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112744dcc),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 1062b20a0; end: 1062b20a3; -[SCContextSpotlightViewController showDSAModalWithActionsViewController:] */

void FUN_1062b20a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDSAEnablePersonalizedConten_11258bc00);
  return;
}



/* Entry: 1062b20a4; end: 1062b21ff; -[SCContextSpotlightViewController showDoubleTapToFavUserEdWithActionsViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b20a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c9308;
  _objc_alloc(PTR_PTR_1126c9308);
  func_0x00010c031360();
  func_0x00010bef7700(param_5,param_6,puVar1);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar3 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_6,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010bf77e80(puVar1,param_6,param_5);
  uVar4 = *(undefined8 *)(param_5 + _DAT_112744c64);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b2200; end: 1062b2423; -[SCContextSpotlightViewController headerViewController:didSelectAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b2200(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    if (*(long *)(param_1 + _DAT_112744c4c) != 0) {
      (**(code **)(*(long *)(param_1 + _DAT_112744c4c) + 0x10))();
    }
    goto LAB_1062b2400;
  }
  lVar2 = param_4;
  func_0x00010beeed20();
  lVar3 = param_4;
  if ((int)lVar2 == 0xb) {
    func_0x00010c2932a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
LAB_1062b22b8:
    lVar7 = lVar2;
    func_0x00010c0720c0();
    iVar1 = (int)lVar7;
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  else {
    lVar2 = param_4;
    func_0x00010beeed20();
    if ((int)lVar2 == 0xc) {
      func_0x00010c11a660();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bfe44e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062b22b8;
    }
    iVar1 = 0;
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744cac);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b12d0;
  func_0x00010c24b8e0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf1f320(uVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  if ((iVar1 != 0) && ((int)uVar6 != 0)) {
    lVar7 = *(long *)(param_1 + _DAT_112744cb4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      lVar3 = param_4;
      func_0x00010bf51e00(param_4);
      lVar8 = lVar3;
      func_0x00010c11a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4140();
      _objc_release(lVar8);
      func_0x00010c0f80a0(param_1,param_2,lVar3,8,5,0xd);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar7);
      goto LAB_1062b2400;
    }
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  func_0x00010c0f80a0(param_1,param_2,param_4,8,5,0xd);
LAB_1062b2400:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062b2424; end: 1062b2437; -[SCContextSpotlightViewController primaryCTAViewController:didSelectAction:] */

void FUN_1062b2424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performAction_contextMenuType_ac_11261ba48,param_4,8,5,8);
  return;
}



/* Entry: 1062b2438; end: 1062b244b; -[SCContextSpotlightViewController replyViewController:didSelectAction:] */

void FUN_1062b2438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performAction_contextMenuType_ac_11261ba48,param_4,8,5,8);
  return;
}



/* Entry: 1062b244c; end: 1062b245f; -[SCContextSpotlightViewController replyViewController:didUpdateRenderableState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b244c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d10),PTR_s_setReplyBarRenderable__1126585f8,
             param_4);
  return;
}



/* Entry: 1062b2460; end: 1062b2537; -[SCContextSpotlightViewController replyViewController:didShowReplyBar:] */

void FUN_1062b2460(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if ((param_4 & 1) != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1062b2504;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x00010bf03440(0x3fd999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,
                        &puStack_48,0);
    return;
  }
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b2538; end: 1062b254b; -[SCContextSpotlightViewController sponsorTagViewController:didSelectAction:] */

void FUN_1062b2538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performAction_contextMenuType_ac_11261ba48,param_4,8,5,0xd);
  return;
}



/* Entry: 1062b254c; end: 1062b259f; -[SCContextSpotlightViewController suggestedSearchViewController:didSelectSearchString:] */

void FUN_1062b254c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010c08bd00(PTR_PTR_1126b5b00,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80a0(param_1,param_2,puVar1,8,5,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b25a0; end: 1062b270b; -[SCContextSpotlightViewController _updateCreateStickerFromPauseEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b25a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  byte bStack_50;
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + _DAT_112744d88) != '\x01') {
    return;
  }
  lVar5 = (long)_DAT_112744d8c;
  if (*(long *)(param_1 + lVar5) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112744ce0);
    func_0x00010c0ea8e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b2340;
    func_0x00010c083240();
    if (((((ulong)puVar3 & 1) == 0) &&
        (puVar3 = PTR_PTR_1126b2340, func_0x00010c074260(), ((ulong)puVar3 & 1) == 0)) &&
       (puVar3 = PTR_PTR_1126b2340, func_0x00010c07cc40(), (int)puVar3 == 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = *(byte *)(param_1 + _DAT_112744d00) ^ 1;
    }
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    _objc_copyWeak(auStack_58,auStack_48);
    bStack_50 = bVar4 & 1;
    func_0x00010c1852c0(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    return;
  }
  return;
}



/* Entry: 1062b270c; end: 1062b27b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b270c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112744cac);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c24b980(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 1062b27b4; end: 1062b2837; -[SCContextSpotlightViewController contentSpotlightPauseGestureControllerDidTapCreateSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b27b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744c68);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf591a0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744ce0);
  func_0x00010c0ea8e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar3,param_2,puVar1,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b2838; end: 1062b283f; -[SCContextSpotlightViewController pageViewName] */

undefined8 FUN_1062b2838(void)

{
  return 0x139;
}



/* Entry: 1062b2840; end: 1062b2843; -[SCContextSpotlightViewController tooltipDidDismiss:] */

void FUN_1062b2840(void)

{
  return;
}



/* Entry: 1062b2844; end: 1062b289b; -[SCContextSpotlightViewController tooltipTapped:] */

void FUN_1062b2844(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010bf42020(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80a0(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfe2530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hidePendingRepliesTooltip_1125d6308);
  return;
}



/* Entry: 1062b289c; end: 1062b29a3; -[SCContextSpotlightViewController _fetchSwipeToProfileParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b289c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744cd8);
  FUN_10629b314(uVar1,*(undefined8 *)(param_1 + _DAT_112744cac));
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1062b29a4; end: 1062b2a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b29a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112744c70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbbc0();
      _objc_release(uVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062b2a44; end: 1062b34db; -[SCContextSpotlightViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b2a44(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar15 != 0) {
    if ((param_4 != 0) && (lVar11 = (long)_DAT_112744dd4, (*(byte *)(param_1 + lVar11) & 1) != 0)) {
      lVar14 = (long)_DAT_112744ce0;
      lVar2 = *(long *)(param_1 + lVar14);
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        _objc_release(lVar2);
      }
      else {
        uVar7 = param_4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010c0ea8e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar15);
        _objc_release(uVar4);
        _objc_release(uVar7);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar10 != 0) {
          *(undefined1 *)(param_1 + lVar11) = 0;
          func_0x00010bdcb300(0x3ff0000000000000,param_1);
        }
      }
    }
    uVar7 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar8 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar1);
    uVar7 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar10);
    iVar12 = (int)*(undefined8 *)(param_1 + _DAT_112744db8);
    uVar10 = uVar7;
    func_0x00010c259cc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x00010c0720c0();
    _objc_release(uVar10);
    if (iVar12 == 0) goto LAB_1062b34a8;
    lVar11 = (long)_DAT_112744dc0;
    *(undefined1 *)(param_1 + lVar11) = 0;
    uVar7 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c9358;
    func_0x00010c07f340(PTR_PTR_1126c9358);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar7);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar1);
    uVar7 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar10);
    uVar10 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    if ((int)uVar10 == 0) goto LAB_1062b34a8;
    uVar7 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar10 != 0) {
      uVar8 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010c067fc0();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar10);
      _objc_release(uVar7);
      if (uVar6 == 0) {
        *(undefined1 *)(param_1 + lVar11) = 1;
        func_0x00010beb0440(param_1);
      }
      goto LAB_1062b34a8;
    }
    goto LAB_1062b34a0;
  }
  puVar1 = PTR_PTR_1126c9400;
  func_0x00010c2999c0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar15 == 0) {
    puVar5 = PTR_PTR_1126b2638;
    func_0x00010c24eb60(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar1);
    if ((int)uVar15 != 0) goto LAB_1062b2c10;
    puVar1 = PTR_PTR_1126c9400;
    func_0x00010c2999a0(PTR_PTR_1126c9400);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar15 == 0) {
      puVar5 = PTR_PTR_1126b2638;
      func_0x00010bf948a0(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      _objc_release(puVar1);
      if ((int)uVar15 == 0) {
        puVar1 = PTR_PTR_1126b2d30;
        func_0x00010bf591c0(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)uVar15 != 0) {
          if (param_4 == 0) goto LAB_1062b34a8;
          lVar11 = (long)_DAT_112744ce0;
          uVar7 = *(ulong *)(param_1 + lVar11);
          func_0x00010c0ea8e0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar7;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar10 != 0) {
            uVar8 = param_4;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(param_1 + lVar11);
            func_0x00010c0ea8e0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar4;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0720c0();
            _objc_release(uVar15);
            _objc_release(uVar4);
            _objc_release(uVar8);
            _objc_release(uVar10);
            _objc_release(uVar7);
            if ((int)uVar9 != 0) {
              func_0x00010be6cfe0(param_1);
            }
            goto LAB_1062b34a8;
          }
          goto LAB_1062b34a0;
        }
        puVar1 = PTR_PTR_1126b2ce8;
        func_0x00010c2a68c0(PTR_PTR_1126b2ce8);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)uVar15 == 0) {
          puVar1 = PTR_PTR_1126b2ce8;
          func_0x00010bf750a0(PTR_PTR_1126b2ce8);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)uVar15 == 0) {
            puVar1 = PTR_PTR_1126b2638;
            func_0x00010c2a59e0(PTR_PTR_1126b2638);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)uVar15 == 0) {
              puVar1 = PTR_PTR_1126b2638;
              func_0x00010bf75b40(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              uVar15 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)uVar15 != 0) {
                if (*(char *)(param_1 + _DAT_112744dd8) != '\x01') goto LAB_1062b34a8;
                *(undefined1 *)(param_1 + _DAT_112744dd8) = 0;
                goto LAB_1062b3298;
              }
              puVar1 = PTR_PTR_1126c95c8;
              func_0x00010bf98f20(PTR_PTR_1126c95c8);
              _objc_retainAutoreleasedReturnValue();
              uVar15 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((param_4 == 0) || ((int)uVar15 == 0)) goto LAB_1062b34a8;
              lVar11 = (long)_DAT_112744ce0;
              uVar7 = *(ulong *)(param_1 + lVar11);
              func_0x00010c0ea8e0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar7;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              if (uVar10 != 0) {
                uVar8 = param_4;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = *(undefined8 *)(param_1 + lVar11);
                func_0x00010c0ea8e0(uVar4);
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar4;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c0720c0();
                _objc_release(uVar15);
                _objc_release(uVar4);
                _objc_release(uVar8);
                _objc_release(uVar10);
                _objc_release(uVar7);
                if ((int)uVar9 == 0) goto LAB_1062b34a8;
                puVar1 = PTR_PTR_1126c9680;
                func_0x00010c06eb00(PTR_PTR_1126c9680);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = param_5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar1);
                puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                uVar8 = uVar10;
                _objc_opt_isKindOfClass(uVar10,puVar1);
                uVar7 = uVar10;
                if ((uVar8 & 1) == 0) {
                  uVar7 = 0;
                }
                _objc_retain(uVar7);
                _objc_release(uVar10);
                uVar10 = uVar7;
                func_0x00010bf1f3c0();
                _objc_release(uVar7);
                iVar12 = _DAT_112744dd4;
                if ((uVar10 & 1) == 0) {
                  uVar7 = param_4;
                  func_0x00010c118b40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = uVar7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar7);
                  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
                  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
                  uVar8 = uVar10;
                  _objc_opt_isKindOfClass(uVar10,puVar1);
                  uVar7 = uVar10;
                  if ((uVar8 & 1) == 0) {
                    uVar7 = 0;
                  }
                  _objc_retain(uVar7);
                  _objc_release(uVar10);
                  uVar10 = uVar7;
                  func_0x00010c14d140();
                  _objc_release(uVar7);
                  iVar13 = (int)uVar10;
                  iVar12 = _DAT_112744dd4;
                  goto joined_r0x0001062b3488;
                }
                goto LAB_1062b3494;
              }
            }
            else {
              puVar1 = PTR_PTR_1126c9410;
              func_0x00010c07b460(PTR_PTR_1126c9410);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar1);
              puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              uVar8 = uVar10;
              _objc_opt_isKindOfClass(uVar10,puVar1);
              uVar7 = uVar10;
              if ((uVar8 & 1) == 0) {
                uVar7 = 0;
              }
              _objc_retain(uVar7);
              _objc_release(uVar10);
              uVar10 = uVar7;
              func_0x00010bf1f3c0();
              _objc_release(uVar7);
              if ((param_4 == 0) || ((uVar10 & 1) != 0)) goto LAB_1062b34a8;
              lVar11 = (long)_DAT_112744ce0;
              uVar7 = *(ulong *)(param_1 + lVar11);
              func_0x00010c0ea8e0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar7;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              if (uVar10 != 0) {
                uVar8 = param_4;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = *(undefined8 *)(param_1 + lVar11);
                func_0x00010c0ea8e0(uVar4);
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar4;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c0720c0();
                _objc_release(uVar15);
                _objc_release(uVar4);
                _objc_release(uVar8);
                _objc_release(uVar10);
                _objc_release(uVar7);
                if ((int)uVar9 == 0) goto LAB_1062b34a8;
                uVar4 = *(undefined8 *)(param_1 + _DAT_112744cb8);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar4;
                func_0x00010c24b2a0();
                _objc_release(uVar4);
                iVar13 = (int)uVar15;
                iVar12 = _DAT_112744dd8;
joined_r0x0001062b3488:
                if (iVar13 == 0) goto LAB_1062b34a8;
LAB_1062b3494:
                *(undefined1 *)(param_1 + iVar12) = 1;
                goto LAB_1062b301c;
              }
            }
LAB_1062b34a0:
            _objc_release(uVar7);
            goto LAB_1062b34a8;
          }
          uVar7 = *(long *)(param_1 + _DAT_112744ce4) - 0x49;
          if (((0x19 < uVar7) || ((1L << (uVar7 & 0x3f) & 0x2020001U) == 0)) &&
             ((uVar10 = *(long *)(param_1 + _DAT_112744ce4) - 0x57, uVar7 = uVar10 >> 1,
              7 < (uVar7 | uVar10 << 0x3f) || ((1L << (uVar7 & 0x3f) & 0xb1U) == 0))))
          goto LAB_1062b34a8;
LAB_1062b3298:
          uVar15 = 0x3ff0000000000000;
        }
        else {
          uVar7 = *(long *)(param_1 + _DAT_112744ce4) - 0x49;
          if (((0x19 < uVar7) || ((1L << (uVar7 & 0x3f) & 0x2020001U) == 0)) &&
             ((uVar10 = *(long *)(param_1 + _DAT_112744ce4) - 0x57, uVar7 = uVar10 >> 1,
              7 < (uVar7 | uVar10 << 0x3f) || ((1L << (uVar7 & 0x3f) & 0xb1U) == 0))))
          goto LAB_1062b34a8;
LAB_1062b301c:
          uVar15 = 0;
        }
        func_0x00010bdcb300(uVar15,param_1);
        goto LAB_1062b34a8;
      }
    }
    else {
      _objc_release(puVar1);
    }
    uVar15 = 0x3ff0000000000000;
  }
  else {
    _objc_release(puVar1);
LAB_1062b2c10:
    uVar15 = 0;
  }
  func_0x00010bdcb300(uVar15,param_1);
LAB_1062b34a8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062b34dc; end: 1062b3643; -[SCContextSpotlightViewController _openCommentsWithCreatedStickerParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b34dc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744cac);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf61cc0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126b5bf0;
    func_0x00010bf591e0(PTR_PTR_1126b5bf0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b0cc0;
    _objc_opt_class(PTR_PTR_1126b0cc0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126b5b00;
    if (uVar1 != 0) {
      puVar7 = PTR_PTR_1126b5c68;
      func_0x00010c269ac0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42060(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar4;
      func_0x00010bf42020(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ac9e0();
      _objc_release(puVar7);
      func_0x00010c0f80a0(param_1);
      _objc_release(puVar4);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062b3644; end: 1062b372f; -[SCContextSpotlightViewController _animateUIElements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3644(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar3 = 0;
  if (*(char *)(param_2 + _DAT_112744dd4) == '\0') {
    uVar3 = param_1;
  }
  dVar2 = *(double *)(param_2 + _DAT_112744c10);
  if (*(double *)(param_2 + _DAT_112744c10) <= 0.0) {
    dVar2 = 0.3;
  }
  _objc_initWeak(auStack_38,param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar3;
  func_0x00010bf03400(dVar2,puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1062b3730; end: 1062b37c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3730(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + _DAT_112744d5c));
    uVar3 = 0;
    if ((*(byte *)(lVar1 + _DAT_112744c08) & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112744d08);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062b37c8; end: 1062b39ef; -[SCContextSpotlightViewController _showDSAEnablePersonalizedContentModal] */

void FUN_1062b37c8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_70;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f59584();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1062b39f0;
  puStack_80 = &UNK_1108482a8;
  puVar9 = auStack_70;
  _objc_copyWeak(auStack_78,puVar9);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108f5959c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000108f595b4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108f595cc();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar1 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  puVar8 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_a8 = FUN_1062b39f0;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = puVar2;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_copyWeak(auStack_d8,puVar8 + 0x20);
  func_0x00010bf84b00(puVar9);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar9);
  return;
}



/* Entry: 1062b39f0; end: 1062b3a97;  */

void FUN_1062b39f0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1062b3a98; end: 1062b3ac3;  */

void FUN_1062b3a98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be06a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b3ac4; end: 1062b3ad3;  */

void FUN_1062b3ac4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1062b3ad4; end: 1062b3b87; -[SCContextSpotlightViewController _dsaPersonalizedContentEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3ad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744c88;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8acc0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192180();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744c64);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b04e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1062b3b88; end: 1062b3ba3; -[SCContextSpotlightViewController soundHeaderViewController:didSelectAction:] */

void FUN_1062b3b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_performAction_contextMenuType_ac_11261ba48,param_4,8,5,0xd);
    return;
  }
  return;
}



/* Entry: 1062b3ba4; end: 1062b3e1f; -[SCContextSpotlightViewController heroContextLabelViewController:didSelectAction:cardType:tapZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3ba4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = param_4;
    func_0x00010beeed20();
    if (((int)uVar1 == 0x5b) && (lVar10 = (long)_DAT_112744cd4, *(long *)(param_1 + lVar10) != 0)) {
      uVar1 = param_4;
      func_0x00010bfd91c0();
      if ((uVar1 & 1) == 0) {
        lVar9 = (long)_DAT_112744ce0;
      }
      else {
        puVar2 = PTR_PTR_1126b6038;
        _objc_alloc();
        func_0x00010bff0a60();
        lVar9 = (long)_DAT_112744ce0;
        uVar3 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_4;
        func_0x00010c0ccaa0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010beef1e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar5 = param_4;
        func_0x00010c0ccaa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf31ca0();
        func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_4;
        func_0x00010c0ccaa0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010beee760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0480(uVar3,param_2,uVar4,puVar8,uVar7,puVar2);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(puVar8);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
        _objc_release(uVar3);
        _objc_release(puVar2);
      }
      func_0x00010c10c3e0(*(undefined8 *)(param_1 + lVar10),param_2,param_1,
                          *(undefined8 *)(param_1 + lVar9),*(undefined8 *)(param_1 + _DAT_112744cdc)
                         );
    }
    else {
      func_0x00010bf4e940(PTR_PTR_1126c9390,param_2,param_5);
      func_0x00010bf78360(*(undefined8 *)(param_1 + _DAT_112744d10),param_2,param_4);
      puVar8 = PTR_PTR_1126b6038;
      _objc_alloc(PTR_PTR_1126b6038);
      func_0x00010bff0a60();
      func_0x00010c183120();
      func_0x00010be250c0(param_1,param_2,param_4,puVar8);
      _objc_release(puVar8);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062b3e20; end: 1062b3e4b; -[SCContextSpotlightViewController heroContextLabelViewControllerDidFinishVisibilityTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3e20(long param_1)

{
  func_0x00010bed93c0();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d5c),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1062b3e4c; end: 1062b3e77; -[SCContextSpotlightViewController madeOnSnapchatViewControllerDidFinishVisibilityTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3e4c(long param_1)

{
  func_0x00010bed93c0();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d5c),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1062b3e78; end: 1062b3e87; -[SCContextSpotlightViewController heroContextLabelRowViewController:didSelectAction:cardType:tapZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe0d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_heroContextLabelViewController_d_1125d5d20,
             *(undefined8 *)(param_1 + _DAT_112744d1c));
  return;
}



/* Entry: 1062b3e88; end: 1062b3e97; -[SCContextSpotlightViewController heroContextLabelRowViewControllerDidFinishVisibilityTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d5c),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1062b3e98; end: 1062b3f3f; -[SCContextSpotlightViewController performContextAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3e98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744d10);
    _objc_retain(param_3);
    func_0x00010bf78360(uVar3,param_2,param_3);
    puVar1 = PTR_PTR_1126b6038;
    _objc_alloc(PTR_PTR_1126b6038);
    func_0x00010bff0a60();
    lVar2 = param_3;
    func_0x00010bfe0d60(param_3);
    func_0x00010c183120(puVar1,param_2,lVar2);
    func_0x00010be250c0(param_1,param_2,param_3,puVar1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1062b3f40; end: 1062b3faf; -[SCContextSpotlightViewController showHeroContextMenuOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3f40(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_112744da8) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1062b3fb0;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  }
  return;
}



/* Entry: 1062b3fb0; end: 1062b3fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe999999999999a,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744da8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062b3fcc; end: 1062b403b; -[SCContextSpotlightViewController hideHeroContextMenuOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b3fcc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_112744da8) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1062b403c;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  }
  return;
}



/* Entry: 1062b403c; end: 1062b4053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b403c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744da8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062b4054; end: 1062b4057; -[SCContextSpotlightViewController quickShareParentViewController] */

void FUN_1062b4054(void)

{
  return;
}



/* Entry: 1062b4058; end: 1062b4067; -[SCContextSpotlightViewController quickShareAnchorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d08),PTR_s_quickShareAnchorView_112625470);
  return;
}



/* Entry: 1062b4068; end: 1062b406b; -[SCContextSpotlightViewController quickCommentParentViewController] */

void FUN_1062b4068(void)

{
  return;
}



/* Entry: 1062b406c; end: 1062b407b; -[SCContextSpotlightViewController quickCommentAnchorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b406c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11e430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d08),PTR_s_quickCommentAnchorView_112625328);
  return;
}



/* Entry: 1062b407c; end: 1062b426f; -[SCContextSpotlightViewController oneTapToShareViewController:didSelectAction:rankingResultsId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b407c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    func_0x00010c123ba0(*(undefined8 *)(param_1 + _DAT_112744d04));
    lVar7 = (long)_DAT_112744c3c;
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010beeed40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c08fa60();
    if ((lVar2 == 0) || (lVar1 == 0)) {
      func_0x00010c0f80a0(param_1,param_2,param_4,8,5,0xd);
    }
    else {
      func_0x00010c1e7520(lVar1,param_2,param_5);
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010beee700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf54560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar2 = param_1 + _DAT_112744c40;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c18b5e0(uVar5,param_2,lVar2);
      _objc_release(lVar2);
      func_0x00010bf78360(*(undefined8 *)(param_1 + _DAT_112744d10),param_2,param_4);
      puVar6 = PTR_PTR_1126b6038;
      _objc_alloc(PTR_PTR_1126b6038);
      func_0x00010bff0a60();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1062b4270;
      puStack_60 = &UNK_1108450c8;
      uStack_58 = uVar5;
      _objc_retain(uVar5);
      func_0x00010bfd0040(uVar5,param_2,param_4,puVar6,param_1,0,&puStack_78);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uStack_58);
      _objc_release(uVar5);
      _objc_release(puVar6);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1062b4270; end: 1062b4273;  */

void FUN_1062b4270(void)

{
  return;
}



/* Entry: 1062b4274; end: 1062b4287; -[SCContextSpotlightViewController oneTapToShareViewController:didUpdateRenderableState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d10),PTR_s_setOneTapToShareRenderable__112652cf8,
             param_4);
  return;
}



/* Entry: 1062b4288; end: 1062b432b; -[SCContextSpotlightViewController _didReceiveFocusOnShareButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4288(long param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  double dStack_38;
  
  func_0x00010bf1f3c0();
  dVar1 = 1.0;
  dStack_38 = 0.5;
  if (param_3 == 0) {
    dStack_38 = 1.0;
  }
  func_0x00010bf01b40(*(undefined8 *)(param_1 + _DAT_112744d5c));
  if (dVar1 != dStack_38) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1062b432c;
    puStack_48 = &UNK_110848c48;
    lStack_40 = param_1;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_60);
  }
  return;
}



/* Entry: 1062b432c; end: 1062b4343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b432c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744d5c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062b4344; end: 1062b4353; -[SCContextSpotlightViewController horizontalActionBarViewDidTapComposerPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d08),PTR_s_didTapReply_1125bce60);
  return;
}



/* Entry: 1062b4354; end: 1062b4363; -[SCContextSpotlightViewController horizontalActionBarViewDidTapFavorite:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d08),PTR_s_didSelectFavorite_1125bc410);
  return;
}



/* Entry: 1062b4364; end: 1062b4373; -[SCContextSpotlightViewController horizontalActionBarViewDidTapRepost:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d08),PTR_s_didSelectRecommend_1125bc520);
  return;
}



/* Entry: 1062b4374; end: 1062b4383; -[SCContextSpotlightViewController horizontalActionBarViewDidTapShare:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d08),PTR_s_didSelectShare_1125bc598);
  return;
}



/* Entry: 1062b4384; end: 1062b4397; -[SCContextSpotlightViewController actionsViewController:didUpdateLiveRepliesFormattedCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17edd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744d6c),PTR_s_setCommentCountText__11263d590,param_4)
  ;
  return;
}



/* Entry: 1062b4398; end: 1062b43db; -[SCContextSpotlightViewController actionsViewController:didUpdateCommentsEnabled:shareEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b4398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112744d6c;
  func_0x00010c180280(*(undefined8 *)(param_1 + lVar1),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1fec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setShareEnabled__11265d540,param_5);
  return;
}



/* Entry: 1062b43dc; end: 1062b442b; -[SCContextSpotlightViewController actionsViewController:didUpdateFavorited:reposted:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b43dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112744d6c;
  func_0x00010c19a6e0(*(undefined8 *)(param_1 + lVar1),param_2,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c1eb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setReposted_animated__112658840,param_5,param_6)
  ;
  return;
}



/* Entry: 1062b442c; end: 1062b44af; -[SCContextSpotlightViewController actionsViewController:didUpdateFavoriteCount:repostCount:shareCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b442c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744d6c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c19a560(uVar1,param_2,param_4);
  func_0x00010c1eb780(*(undefined8 *)(param_1 + lVar2),param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1feb80(*(undefined8 *)(param_1 + lVar2),param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1062b44b0; end: 1062b4a97; -[SCContextSpotlightViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b44b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744c9c,0);
  _objc_storeStrong(param_1 + _DAT_112744c98,0);
  _objc_storeStrong(param_1 + _DAT_112744c00,0);
  _objc_storeStrong(param_1 + _DAT_112744cd0,0);
  _objc_storeStrong(param_1 + _DAT_112744cfc,0);
  _objc_storeStrong(param_1 + _DAT_112744d04,0);
  _objc_storeStrong(param_1 + _DAT_112744d10,0);
  _objc_storeStrong(param_1 + _DAT_112744d4c,0);
  _objc_storeStrong(param_1 + _DAT_112744da4,0);
  _objc_storeStrong(param_1 + _DAT_112744d54,0);
  _objc_storeStrong(param_1 + _DAT_112744da0,0);
  _objc_storeStrong(param_1 + _DAT_112744d9c,0);
  _objc_storeStrong(param_1 + _DAT_112744ccc,0);
  _objc_storeStrong(param_1 + _DAT_112744cd4,0);
  _objc_storeStrong(param_1 + _DAT_112744d40,0);
  _objc_storeStrong(param_1 + _DAT_112744d98,0);
  _objc_storeStrong(param_1 + _DAT_112744da8,0);
  _objc_storeStrong(param_1 + _DAT_112744cf8,0);
  _objc_storeStrong(param_1 + _DAT_112744cf4,0);
  _objc_storeStrong(param_1 + _DAT_112744d80,0);
  _objc_storeStrong(param_1 + _DAT_112744d7c,0);
  _objc_storeStrong(param_1 + _DAT_112744d84,0);
  _objc_storeStrong(param_1 + _DAT_112744d74,0);
  _objc_storeStrong(param_1 + _DAT_112744ce0,0);
  _objc_storeStrong(param_1 + _DAT_112744ca8,0);
  _objc_storeStrong(param_1 + _DAT_112744c2c,0);
  _objc_storeStrong(param_1 + _DAT_112744d90,0);
  _objc_storeStrong(param_1 + _DAT_112744d8c,0);
  _objc_storeStrong(param_1 + _DAT_112744d94,0);
  _objc_destroyWeak(param_1 + _DAT_112744ca4);
  _objc_storeStrong(param_1 + _DAT_112744cb8,0);
  _objc_storeStrong(param_1 + _DAT_112744ca0,0);
  _objc_storeStrong(param_1 + _DAT_112744c5c,0);
  _objc_storeStrong(param_1 + _DAT_112744c94,0);
  _objc_storeStrong(param_1 + _DAT_112744c90,0);
  _objc_storeStrong(param_1 + _DAT_112744c8c,0);
  _objc_storeStrong(param_1 + _DAT_112744c88,0);
  _objc_storeStrong(param_1 + _DAT_112744d70,0);
  _objc_storeStrong(param_1 + _DAT_112744d6c,0);
  _objc_storeStrong(param_1 + _DAT_112744ce8,0);
  _objc_storeStrong(param_1 + _DAT_112744cec,0);
  _objc_storeStrong(param_1 + _DAT_112744cb4,0);
  _objc_storeStrong(param_1 + _DAT_112744cb0,0);
  _objc_storeStrong(param_1 + _DAT_112744cdc,0);
  _objc_storeStrong(param_1 + _DAT_112744db8,0);
  _objc_storeStrong(param_1 + _DAT_112744d48,0);
  _objc_storeStrong(param_1 + _DAT_112744c74,0);
  _objc_storeStrong(param_1 + _DAT_112744d44,0);
  _objc_storeStrong(param_1 + _DAT_112744c38,0);
  _objc_storeStrong(param_1 + _DAT_112744c34,0);
  _objc_storeStrong(param_1 + _DAT_112744cd8,0);
  _objc_storeStrong(param_1 + _DAT_112744c4c,0);
  _objc_storeStrong(param_1 + _DAT_112744c68,0);
  _objc_storeStrong(param_1 + _DAT_112744c70,0);
  _objc_storeStrong(param_1 + _DAT_112744c64,0);
  _objc_storeStrong(param_1 + _DAT_112744c60,0);
  _objc_storeStrong(param_1 + _DAT_112744c54,0);
  _objc_storeStrong(param_1 + _DAT_112744c50,0);
  _objc_storeStrong(param_1 + _DAT_112744c6c,0);
  _objc_storeStrong(param_1 + _DAT_112744c48,0);
  _objc_storeStrong(param_1 + _DAT_112744c44,0);
  _objc_storeStrong(param_1 + _DAT_112744dac,0);
  _objc_destroyWeak(param_1 + _DAT_112744c40);
  _objc_storeStrong(param_1 + _DAT_112744c3c,0);
  _objc_storeStrong(param_1 + _DAT_112744cac,0);
  _objc_storeStrong(param_1 + _DAT_112744c84,0);
  _objc_storeStrong(param_1 + _DAT_112744c80,0);
  _objc_storeStrong(param_1 + _DAT_112744d20,0);
  _objc_storeStrong(param_1 + _DAT_112744d68,0);
  _objc_storeStrong(param_1 + _DAT_112744d3c,0);
  _objc_storeStrong(param_1 + _DAT_112744d18,0);
  _objc_storeStrong(param_1 + _DAT_112744d64,0);
  _objc_storeStrong(param_1 + _DAT_112744d1c,0);
  _objc_storeStrong(param_1 + _DAT_112744d38,0);
  _objc_storeStrong(param_1 + _DAT_112744d2c,0);
  _objc_storeStrong(param_1 + _DAT_112744d28,0);
  _objc_storeStrong(param_1 + _DAT_112744d60,0);
  _objc_storeStrong(param_1 + _DAT_112744d34,0);
  _objc_storeStrong(param_1 + _DAT_112744dc8,0);
  _objc_storeStrong(param_1 + _DAT_112744d14,0);
  _objc_storeStrong(param_1 + _DAT_112744d30,0);
  _objc_storeStrong(param_1 + _DAT_112744d0c,0);
  _objc_storeStrong(param_1 + _DAT_112744dbc,0);
  _objc_storeStrong(param_1 + _DAT_112744d08,0);
  _objc_storeStrong(param_1 + _DAT_112744c7c,0);
  _objc_storeStrong(param_1 + _DAT_112744c78,0);
  _objc_storeStrong(param_1 + _DAT_112744c30,0);
  _objc_storeStrong(param_1 + _DAT_112744dd0,0);
  _objc_storeStrong(param_1 + _DAT_112744dcc,0);
  _objc_storeStrong(param_1 + _DAT_112744d58,0);
  _objc_storeStrong(param_1 + _DAT_112744d50,0);
  _objc_storeStrong(param_1 + _DAT_112744d5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744c58,0);
  return;
}



/* Entry: 1062b4a98; end: 1062b4b3b; -[SCContextSpotlightSubscriptionSessionLoggingSession initWithInner:logger:] */

undefined1 *
FUN_1062b4a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0b60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b4b3c; end: 1062b4b43; -[SCContextSpotlightSubscriptionSessionLoggingSession observeSubscriptionState] */

void FUN_1062b4b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e1110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_observeSubscriptionState_112615e58);
  return;
}



/* Entry: 1062b4b44; end: 1062b4bbf; -[SCContextSpotlightSubscriptionSessionLoggingSession subscribe] */

/* WARNING: Possible PIC construction at 0x0001062b4b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062b4b68) */

void FUN_1062b4b44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b5c68,PTR_s_subscribe_112675968);
  return;
}



/* Entry: 1062b4bc0; end: 1062b4bf3;  */

void FUN_1062b4bc0(void)

{
  _objc_alloc(PTR_PTR_1126b6038);
  func_0x00010bff0a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062b4bf4; end: 1062b4c6f; -[SCContextSpotlightSubscriptionSessionLoggingSession unsubscribe] */

/* WARNING: Possible PIC construction at 0x0001062b4c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062b4c18) */

void FUN_1062b4bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2829f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b5c68,PTR_s_unsubscribe_11267e4a0);
  return;
}



/* Entry: 1062b4c70; end: 1062b4c9f; -[SCContextSpotlightSubscriptionSessionLoggingSession .cxx_destruct] */

void FUN_1062b4c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062b4ca0; end: 1062b4e2f; -[SCContextSpotlightSubscriptionSnapchatterSession initWithSnapchatter:snapchatterServices:snapId:compositeStoryId:] */

undefined1 *
FUN_1062b4ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_58 = PTR_PTR_1126f0b68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9688;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05bac0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x18));
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b4e30; end: 1062b4e37; -[SCContextSpotlightSubscriptionSnapchatterSession observeSubscriptionState] */

void FUN_1062b4e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1062b4e38; end: 1062b4f8b; -[SCContextSpotlightSubscriptionSnapchatterSession subscribe] */

void FUN_1062b4e38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c55c0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  func_0x00010c12fea0(puVar4,param_2,0x10ca441e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680();
  puVar5 = PTR_PTR_1126ae6b8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1062b4f8c;
  puStack_88 = &UNK_11091a658;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = uVar6;
  lStack_68 = param_1;
  puStack_60 = puVar4;
  uStack_58 = uVar3;
  _objc_retain(puVar4);
  func_0x00010bf54280(puVar5,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_60);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1062b4f8c; end: 1062b5097;  */

void FUN_1062b4f8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126ae5c0;
  func_0x00010befca80(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bef8a80(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062b5098; end: 1062b50df;  */

void FUN_1062b5098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b50e0; end: 1062b50e3;  */

void FUN_1062b50e0(void)

{
  return;
}



/* Entry: 1062b50e4; end: 1062b52df; -[SCContextSpotlightSubscriptionSnapchatterSession unsubscribe] */

void FUN_1062b50e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar12);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + 0x10);
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2445c0(puVar4,param_2,uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c0e0ea0(puVar7,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined *)0x0) {
    puVar11 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar10);
    puVar11 = puVar10;
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1062b52e0; end: 1062b551b;  */

void FUN_1062b52e0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126c55c0;
    func_0x00010c12fec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680();
    puVar3 = PTR_PTR_1126ae6b8;
    _objc_retain(param_2);
    _objc_retain(puVar2);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062b551c; end: 1062b5563;  */

void FUN_1062b551c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b5564; end: 1062b5567;  */

void FUN_1062b5564(void)

{
  return;
}



/* Entry: 1062b5568; end: 1062b55c7; -[SCContextSpotlightSubscriptionSnapchatterSession .cxx_destruct] */

void FUN_1062b5568(long param_1)

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



/* Entry: 1062b55c8; end: 1062b568f; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject initWithUserId:snapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062b55c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0b70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744dfc) = 0xfffffffffffffffe;
    lVar3 = (long)_DAT_112744e00;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744e04;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b5690; end: 1062b5843; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5690(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = *(undefined **)(param_1 + _DAT_112744e04);
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2445c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_copyWeak(auStack_60,auStack_58);
  puVar7 = puVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112744e08);
  *(undefined **)(param_1 + _DAT_112744e08) = puVar7;
  _objc_release(uVar8);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1062b5844; end: 1062b58af;  */

void FUN_1062b5844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_1062b58b0(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062b58b0; end: 1062b5a23;  */

undefined8 FUN_1062b58b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0xfffffffffffffffe;
    lVar1 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bdea0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar4 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1062b5a24; end: 1062b5a9b;  */

void FUN_1062b5a24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010c0d9840(lVar1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24dde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b5a9c; end: 1062b5aff; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject startAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5a9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744e04);
  func_0x00010c244b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062b5b00; end: 1062b5b57; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + _DAT_112744dfc) = param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744e0c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b5b58; end: 1062b5c3f; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar2 = &lStack_40;
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112744e0c;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR_PTR_1126c9690;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    func_0x00010c24d960(param_1);
  }
  puStack_38 = PTR_PTR_1126f0b70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_subscribe__112675970,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa200(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 1062b5c40; end: 1062b5c4f; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744e0c),PTR_s_removeObserver__112628f78);
  return;
}


