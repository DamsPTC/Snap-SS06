/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105500070; end: 10550010f; -[SCGrapheneLoadMessageMetric description] */

void FUN_105500070(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de7958;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de7958,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8c48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105500110; end: 105500283; -[SCGrapheneRegistry loadMessageGraphene] */

void FUN_105500110(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105500198;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bc820 != -1) {
    func_0x00010002a2fc(0x1136bc820,&puStack_48);
  }
  uVar1 = uRam00000001136bc818;
  _objc_retain(uRam00000001136bc818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105500284; end: 1055003ab; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver observeArroyoFeedEntriesEvents] */

void FUN_105500284(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1055003ac; end: 10550043b;  */

void FUN_1055003ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c28d320(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf6cee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed6b00(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550043c; end: 105500467; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver stopObservingArroyoFeedEntriesEvents] */

void FUN_10550043c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105500468; end: 1055004eb; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver _updateDataSourcesWithFeedEntries:deletedFeedEntries:] */

void FUN_105500468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c114a40();
  _objc_release(uVar1);
  func_0x00010bee0440(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055004ec; end: 10550081b; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver _updateSnapchatterWithFeedEntries:deletedFeedEntries:] */

void FUN_1055004ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
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
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_128 + lVar8 * 8);
        lVar4 = lVar11;
        func_0x00010bf509a0();
        if (lVar4 == 0) {
          lVar10 = *(long *)(param_1 + 0x20);
          lVar4 = lVar11;
          func_0x00010c0f4aa0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c122e20(lVar10,param_2,lVar4,*(undefined8 *)(param_1 + 8));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar4 = lVar10;
          func_0x00010c08fa60();
          if (lVar4 != 0) {
            func_0x00010c25c080();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if (lVar11 == 0) {
              puVar12 = (undefined *)0x0;
            }
            else {
              lVar4 = lVar11;
              func_0x00010bf9c8a0(lVar11);
              func_0x00010c0df7c0(puVar12,param_2,lVar4);
              _objc_retainAutoreleasedReturnValue();
            }
            puVar3 = PTR_PTR_1126ba210;
            _objc_alloc();
            lVar4 = lVar11;
            func_0x00010bf529e0(lVar11);
            func_0x00010c04e480(puVar3,param_2,(long)(int)lVar4,puVar12);
            lVar4 = *(long *)(param_1 + 0x28);
            func_0x00010c0e00e0(lVar4,param_2,lVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if ((lVar11 == 0) && (lVar4 != 0)) {
              func_0x00010c1d0640(puVar1,param_2,puVar3,lVar10);
              uVar5 = *(undefined8 *)(param_1 + 0x28);
              puVar6 = (undefined *)0x0;
LAB_105500744:
              func_0x00010c1d0640(uVar5,param_2,puVar6,lVar10);
            }
            else {
              puVar6 = *(undefined **)(param_1 + 0x28);
              func_0x00010c0e00e0(puVar6,param_2,lVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain();
              _objc_retain(puVar3);
              if (puVar6 != puVar3) {
                if (puVar3 == (undefined *)0x0) {
                  _objc_release();
                  _objc_release(puVar6);
                }
                else {
                  puVar7 = puVar6;
                  func_0x00010c071ae0(puVar6,param_2,puVar3);
                  _objc_release(puVar3);
                  _objc_release(puVar6);
                  _objc_release(puVar6);
                  if (((ulong)puVar7 & 1) != 0) goto LAB_10550074c;
                }
                func_0x00010c1d0640(puVar1,param_2,puVar3,lVar10);
                uVar5 = *(undefined8 *)(param_1 + 0x28);
                puVar6 = puVar3;
                goto LAB_105500744;
              }
              _objc_release(puVar3);
              _objc_release(puVar6);
              _objc_release(puVar6);
            }
LAB_10550074c:
            _objc_release(puVar3);
            _objc_release(puVar12);
            _objc_release(lVar11);
          }
          _objc_release(lVar10);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar12 = puVar1;
  func_0x00010bf529e0();
  if (puVar12 != (undefined *)0x0) {
    puVar12 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010bee0420(param_1,param_2,puVar12);
    _objc_release(puVar12);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 10550081c; end: 10550081f; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver didStartSnapchattersUpdateDataRequest:] */

void FUN_10550081c(void)

{
  return;
}



/* Entry: 105500820; end: 105500827; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105500820(void)

{
  return;
}



/* Entry: 105500828; end: 10550089f; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver .cxx_destruct] */

void FUN_105500828(long param_1)

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



/* Entry: 1055008a0; end: 105500973; -[SCStreakMilestoneProvider initWithCircumstanceEngine:] */

undefined8 * FUN_1055008a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8c58;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105500974; end: 1055009cb;  */

void FUN_105500974(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ba218;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be21320(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055009cc; end: 105500a63; -[SCStreakMilestoneProvider isStreakMilestone:] */

bool FUN_1055009cc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = false;
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010be762a0(param_1,param_2,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        bVar1 = false;
      }
      else {
        lVar3 = param_1;
        func_0x00010c104240(param_1);
        bVar1 = lVar3 != 0;
      }
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 105500a64; end: 105500b2b; -[SCStreakMilestoneProvider poseIdForStreakMilestone:] */

void FUN_105500a64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x00010be762a0(param_1,param_2,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if ((param_1 == 0) || (lVar3 = param_1, func_0x00010c104240(), lVar3 == 0)) {
        lVar3 = 0;
      }
      else {
        lVar2 = param_1;
        func_0x00010c104220(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105500b2c; end: 105500bd3; -[SCStreakMilestoneProvider _poseOptionsForStreakLength:config:] */

void FUN_105500b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110de7a58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c104200(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105500bd4; end: 105500cc3; +[SCStreakMilestoneProvider _getOrLoadConfigWithCircumstanceEngine:] */

void FUN_105500bd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_48;
  
  func_0x00010c1195e0(param_3,param_2,&PTR____CFConstantStringClassReference_110de7a38,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126ba220;
      _objc_alloc();
      lVar3 = param_3;
      func_0x00010c296d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lStack_48 = 0;
      func_0x00010c008360(puVar2,param_2,lVar3,&lStack_48);
      lVar1 = lStack_48;
      _objc_release(lVar3);
      puVar4 = (undefined *)0x0;
      if ((puVar2 != (undefined *)0x0) && (lVar1 == 0)) {
        _objc_retain(puVar2);
        puVar4 = puVar2;
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105500cc4; end: 105500ccf; -[SCStreakMilestoneProvider .cxx_destruct] */

void FUN_105500cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105500cd0; end: 105500df7; -[SCStreakProvider initWithCurrentUserId:performer:translator:] */

undefined1 *
FUN_105500cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e8c60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105500df8; end: 105500e6f; -[SCStreakProvider streakForFeedId:] */

void FUN_105500df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105500e70; end: 105500e97; -[SCStreakProvider streaksObservable] */

void FUN_105500e70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105500e98; end: 105500faf; -[SCStreakProvider streakObservableForFeedId:] */

void FUN_105500e98(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    param_1 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25c400(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105500fb0;
    puStack_40 = &UNK_110892440;
    _objc_retain(param_3);
    puVar2 = param_1;
    lStack_38 = param_3;
    func_0x00010c0b8600(param_1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105500fb0; end: 10550100b;  */

void FUN_105500fb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10550100c; end: 105501013; -[SCStreakProvider conversationStreaksObservable] */

void FUN_10550100c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 105501014; end: 105501113; -[SCStreakProvider processFeedEntries:deletedFeedEntries:] */

void FUN_105501014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105501114; end: 105501147;  */

void FUN_105501114(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105501148; end: 105501827; -[SCStreakProvider _processFeedEntries:deletedFeedEntries:] */

void FUN_105501148(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_218;
  undefined *puStack_208;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  puVar3 = *(undefined **)(param_1 + 0x28);
  bVar2 = puVar3 == (undefined *)0x0;
  func_0x00010c0d3c80();
  if (puVar3 == (undefined *)0x0) {
    puStack_218 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar3);
    puStack_218 = puVar3;
  }
  _objc_release(puVar3);
  puVar3 = *(undefined **)(param_1 + 0x30);
  func_0x00010c0d3c80();
  if (puVar3 == (undefined *)0x0) {
    puStack_208 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar3);
    puStack_208 = puVar3;
  }
  _objc_release(puVar3);
  _os_unfair_lock_unlock(param_1 + 8);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar11 = *(long *)(lVar14 * 8);
      lVar5 = lVar11;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        lVar6 = *(long *)(param_1 + 0x20);
        func_0x00010bfb9fc0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          lVar7 = lVar5;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25c080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf509a0();
          puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
          if (lVar11 == 0) {
            puVar3 = puStack_218;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 != (undefined *)0x0) {
              func_0x00010c1d0640(puStack_218);
              bVar2 = true;
            }
            puVar3 = puStack_208;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 != (undefined *)0x0) {
              func_0x00010c1d0640(puStack_208);
              bVar2 = true;
            }
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
          }
          else {
            lVar8 = lVar11;
            func_0x00010bf9c8a0();
            func_0x00010bf655e0((double)(lVar8 / 1000));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            lVar8 = lVar11;
            func_0x00010bf9ca60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar8 == 0) {
              puVar13 = (undefined *)0x0;
            }
            else {
              lVar8 = lVar11;
              func_0x00010bf9ca60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25be80();
              func_0x00010c07c7e0();
              func_0x00010c07c800();
              puVar13 = PTR_PTR_1126ba228;
              _objc_alloc(PTR_PTR_1126ba228);
              func_0x00010c270aa0(lVar8);
              func_0x00010c07c7e0(lVar8);
              func_0x00010c07c800(lVar8);
              func_0x00010c13c380();
              func_0x00010c04e4a0(puVar13);
              _objc_release(lVar8);
            }
            puVar9 = PTR_PTR_1126ba230;
            _objc_alloc();
            func_0x00010c073f40(lVar11);
            func_0x00010c04e540(puVar9);
            func_0x00010c1d0640(puStack_218);
            func_0x00010c1d0640(puStack_208);
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
            _objc_release(puVar9);
            _objc_release(puVar13);
            _objc_release(puVar3);
            bVar2 = true;
          }
          _objc_release(lVar11);
          _objc_release(lVar7);
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
      lVar14 = lVar14 + 1;
    } while (lVar4 != lVar14);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar11 = *(long *)(lVar14 * 8);
      func_0x00010bfa3ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      if (lVar5 != 0) {
        lVar6 = *(long *)(param_1 + 0x38);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar5;
        func_0x00010c272380(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(long *)(param_1 + 0x38));
        puVar3 = puStack_208;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c1d0640(puStack_208);
          bVar2 = true;
        }
        if (lVar6 != 0) {
          puVar3 = puStack_218;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 != (undefined *)0x0) {
            func_0x00010c1d0640(puStack_218);
            bVar2 = true;
          }
        }
        _objc_release(lVar11);
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
      lVar14 = lVar14 + 1;
    } while (lVar4 != lVar14);
    lVar4 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  if (bVar2) {
    puVar3 = puStack_218;
    func_0x00010bf51e00();
    puVar13 = puStack_208;
    func_0x00010bf51e00();
    _os_unfair_lock_lock(param_1 + 8);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar13;
    _objc_retain(puVar13);
    _objc_release(uVar12);
    _os_unfair_lock_unlock(param_1 + 8);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x48));
    _objc_release(puVar13);
    _objc_release(puVar3);
  }
  _objc_release(puStack_208);
  _objc_release(puStack_218);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 8);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 0x10,0);
  return;
}



/* Entry: 105501828; end: 105501997; -[SCStreakProvider .cxx_destruct] */

void FUN_105501828(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105501998; end: 1055019a7; -[SCStreakServicesEntryPoint _observeArroyoFeedEntriesEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105501998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112724f04),
             PTR_s_observeArroyoFeedEntriesEvents_112615c30);
  return;
}



/* Entry: 1055019a8; end: 105501a23; -[SCStreakServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055019a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_112724f08;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c256400(*(undefined8 *)(param_1 + _DAT_112724f04));
  puStack_38 = PTR_PTR_1126e8c68;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105501a24; end: 105501ac7; -[SCStreakServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105501a24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724f00,0);
  _objc_destroyWeak(param_1 + _DAT_112724efc);
  _objc_destroyWeak(param_1 + _DAT_112724ef8);
  _objc_destroyWeak(param_1 + _DAT_112724f18);
  _objc_destroyWeak(param_1 + _DAT_112724ef4);
  _objc_destroyWeak(param_1 + _DAT_112724f14);
  _objc_destroyWeak(param_1 + _DAT_112724f10);
  _objc_destroyWeak(param_1 + _DAT_112724f0c);
  _objc_storeStrong(param_1 + _DAT_112724f08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112724f04,0);
  return;
}



/* Entry: 105501ac8; end: 105501b3b; -[SCValdiStreakProvider initWithStreakProvider:] */

undefined1 * FUN_105501ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8c70;
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



/* Entry: 105501b3c; end: 105501beb; -[SCValdiStreakProvider observeStreaks] */

void FUN_105501b3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25c400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar2;
    func_0x00010c0b8600(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1108932a0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105501bec; end: 105501dcb;  */

void FUN_105501bec(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  dVar10 = 0.0;
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar4 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar9 = dVar10 * 1000.0;
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126ba260;
      _objc_alloc(PTR_PTR_1126ba260);
      uVar5 = uVar4;
      func_0x00010c25c060(uVar4);
      dVar10 = (double)uVar5;
      func_0x00010c0748c0(uVar4);
      func_0x00010c01baa0(dVar10,dVar9,puVar6);
      func_0x00010befa120(puVar2);
      _objc_release(puVar6);
      _objc_release(uVar4);
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
    uVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 105501dcc; end: 105501dd7; -[SCValdiStreakProvider .cxx_destruct] */

void FUN_105501dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105501dd8; end: 105501e3f; +[SCBitmojiFriendshipProfilePosesConfig descriptor] */

void FUN_105501dd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a42a30,
                        &PTR____CFConstantStringClassReference_110de7a98,&PTR_DAT_1130e1798,
                        &PTR_DAT_1130e17b0,1,0x10,0x1c);
    puRam00000001136bc828 = puVar1;
  }
  return;
}



/* Entry: 105501e40; end: 105501ea7; +[SCPoseOptions descriptor] */

void FUN_105501e40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a42a80,
                        &PTR____CFConstantStringClassReference_110de7ab8,&PTR_DAT_1130e1798,
                        &PTR_DAT_1130e17d0,1,0x10,0x1c);
    puRam00000001136bc830 = puVar1;
  }
  return;
}



/* Entry: 105501ea8; end: 105501ebb; +[SCCStreakMetadataProviding valdiMarshallableObjectDescriptor] */

void FUN_105501ea8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108932c0;
  param_1[1] = &PTR_s_SCBridgeObservable_1108932f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105501ebc; end: 105501ee3; +[SCCStreakProviding valdiMarshallableObjectDescriptor] */

void FUN_105501ebc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110893308;
  param_1[1] = &PTR_s_SCBridgeObservable_110893338;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105501ee4; end: 105501fbb;  */

undefined8 FUN_105501ee4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf33560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105501fbc; end: 105501fc3;  */

undefined8 FUN_105501fbc(void)

{
  return 1;
}



/* Entry: 105501fc4; end: 105502053;  */

undefined8 FUN_105501fc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf33560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4bb00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105502054; end: 1055020ef;  */

ulong FUN_105502054(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf33560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf33560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1055020f0; end: 1055022df; -[SCFriendmojiPresenter initWithFriendmojiRegistry:currentDateProvider:friendmojiDataProvider:streakProvider:messagingExperimentService:decoratorsFuture:] */

undefined8 *
FUN_1055020f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e8c78;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 5) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    puVar1[4] = PTR____NSDictionary0__struct_11034ab58;
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
    _objc_initWeak(auStack_68,puVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c297260(param_8);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1055022e0; end: 10550235b;  */

void FUN_1055022e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    FUN_10550235c();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10550235c; end: 1055025cf;  */

void FUN_10550235c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar11 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
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
  _objc_retain(param_1);
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar14 = *plStack_120;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_1);
        }
        lVar13 = *(long *)(lStack_128 + (long)puVar12 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar13;
        func_0x00010bfb98c0();
        _objc_release(lVar13);
        if ((lVar3 == 3) || (lVar3 == 0)) {
          puVar4 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf529e0();
          _objc_release(puVar4);
          if (puVar5 == (undefined *)0x0) goto LAB_105502474;
        }
        else {
LAB_105502474:
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if (puVar5 == (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = param_1;
      puVar11 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    puVar6 = (undefined1 *)puVar11;
    func_0x00010bfb9b40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)puVar11;
    func_0x00010901cdb0(puVar11,puVar1);
    puVar8 = puVar6;
    func_0x00010901de3c(puVar6,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar6 = (undefined1 *)puVar11;
    func_0x00010bfb8280(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c243560();
    puVar10 = (undefined1 *)puVar11;
    func_0x00010c2923e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100bf0d4c(puVar11,0);
    _objc_release(puVar11);
    func_0x00010be04ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar1 = param_1;
    func_0x00010c08fa60();
    puVar2 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = param_1;
    }
    _objc_retain(puVar2);
    _objc_release(param_1);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055025d0; end: 10550275b; -[SCFriendmojiPresenter displayStringForSnapchatter:friendmojiFilterType:] */

void FUN_1055025d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfb9b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010901cdb0(param_3,puVar3);
  uVar5 = uVar2;
  func_0x00010901de3c(uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfb8280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243560();
  uVar7 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bf0d4c(param_3,0);
  _objc_release(param_3);
  func_0x00010be04ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar8 = param_1;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar8 != 0) {
    lVar1 = param_1;
  }
  _objc_retain(lVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10550275c; end: 105502767; -[SCFriendmojiPresenter displayStringForFriendmojis:streakLength:friendUserId:friendmojiFilterType:isAiChatBot:] */

void FUN_10550275c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayStringForFriendmojis_str_11255ed58);
  return;
}



/* Entry: 105502768; end: 105502773; -[SCFriendmojiPresenter displayStringWithStreakExpirationForFriendmojis:streakLength:friendUserId:friendmojiFilterType:isAiChatBot:] */

void FUN_105502768(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayStringForFriendmojis_str_11255ed58);
  return;
}



/* Entry: 105502774; end: 1055028af; -[SCFriendmojiPresenter friendmojiDisplayStringForGroup:friendmojiFilterType:] */

void FUN_105502774(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be19720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25bfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  lVar4 = lVar1;
  FUN_1055028b0(lVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c25c060(uVar3);
  uVar2 = uVar3;
  func_0x00010bf9c720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c073f40(uVar3);
  func_0x00010be04f00(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055028b0; end: 1055029e7;  */

void FUN_1055028b0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(param_1);
    puVar4 = param_1;
  }
  else {
    puVar1 = param_1;
    func_0x0001006372a4(param_1,&PTR___NSConcreteGlobalBlock_1108936a0);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c25c060();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126ba270;
      _objc_alloc(PTR_PTR_1126ba270);
      lVar3 = param_2;
      func_0x00010bf9c720(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010bffd140(puVar4);
      _objc_release(lVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
    }
    func_0x00010befa160(puVar2);
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055029e8; end: 105502b27; -[SCFriendmojiPresenter friendmojiDisplayStringForGroupId:friendmojis:friendmojiFilterType:] */

void FUN_1055029e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be19720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25bfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  lVar4 = lVar1;
  FUN_1055028b0(lVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c25c060(uVar3);
  uVar2 = uVar3;
  func_0x00010bf9c720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c073f40(uVar3);
  func_0x00010be04f00(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105502b28; end: 105502b2b; -[SCFriendmojiPresenter observeDisplayStringsForFriendmojis:friendmojiFilterType:isAiChatBotByUserId:] */

void FUN_105502b28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be66070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeDisplayStringsForIdentif_1125771b8);
  return;
}



/* Entry: 105502b2c; end: 105502b37; -[SCFriendmojiPresenter observeDisplayStringsForGroupFriendmojis:friendmojiFilterType:] */

void FUN_105502b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be66070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__observeDisplayStringsForIdentif_1125771b8,param_3,param_4,
             PTR____NSDictionary0__struct_11034ab58);
  return;
}



/* Entry: 105502b38; end: 105502d6f; -[SCFriendmojiPresenter _observeDisplayStringsForIdentifierFriendmojis:friendmojiFilterType:isAiChatBotByIdentifier:] */

void FUN_105502b38(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010bfbc400(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar7);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(lVar1);
    _objc_retain(param_3);
    _objc_retain(param_5);
    uStack_60 = param_4;
    _objc_retain(uVar6);
    puVar7 = puVar4;
    func_0x00010bfb26a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105502d70; end: 105502e87;  */

void FUN_105502d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105502e88;
  uStack_40 = 0x105502e98;
  uStack_38 = 0;
  func_0x00010c0c0800(param_2);
  puVar3 = (undefined *)puStack_58[5];
  puVar1 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  }
  puVar2 = puVar1;
  FUN_10550235c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105502e88; end: 105502e9f;  */

void FUN_105502e88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105502ea0; end: 105502ed7;  */

void FUN_105502ea0(long param_1,undefined8 param_2)

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



/* Entry: 105502ed8; end: 105502f83;  */

void FUN_105502ed8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x40);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010be04f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105502f84; end: 10550349f; -[SCFriendmojiPresenter _displayStringsObservableForIdentifiers:friendmojisByIdentifier:isAiChatBotByIdentifier:friendmojiFilterType:decoratorsByPosition:emojiObservable:] */

void FUN_105502f84(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_118,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar14 = *plStack_150;
    do {
      lVar13 = 0;
      do {
        if (*plStack_150 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        puVar5 = param_1;
        func_0x00010be65be0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c25c0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2519e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(uVar3);
        _objc_release(uVar6);
        puVar7 = PTR_PTR_1126ae6b8;
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_110 = puVar5;
        uStack_108 = uVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf41860(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c22ad80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar8);
        func_0x00010befa120(puVar1);
        _objc_release(puVar9);
        _objc_release(uVar4);
        _objc_release(puVar5);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_10550355c;
  puStack_190 = &UNK_110893460;
  _objc_retain();
  puStack_188 = puVar7;
  _objc_retain(puVar1);
  puStack_180 = puVar1;
  _objc_retain(param_8);
  uStack_178 = param_8;
  _objc_copyWeak(auStack_170,auStack_118);
  uStack_168 = param_6;
  func_0x00010bf97e80(param_3);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_118;
  _objc_copyWeak(auStack_1b8,puVar12);
  _objc_retain(param_3);
  uVar3 = param_8;
  uStack_1b0 = param_6;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc40a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_170);
  _objc_release(uStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_118);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_118);
    __Unwind_Resume(param_3);
    param_1 = PTR_PTR_1126ba268;
    _objc_retain(puVar12);
    _objc_alloc(param_1);
    puVar10 = puVar12;
    func_0x00010c0dfd40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010c0dfd40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar11;
    func_0x00010c0ec5e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4100(param_1);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055034a0; end: 10550355b;  */

void FUN_1055034a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba268;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010c0ec5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4100(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10550355c; end: 10550366f;  */

void FUN_10550355c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x38);
  _objc_retain(param_2);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = uVar2;
  func_0x00010c2b2440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 105503670; end: 1055037ab;  */

void FUN_105503670(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = puVar1;
  func_0x00010be04f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    puVar5 = puVar6;
    ___stack_chk_fail();
    _objc_retain(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055037ac; end: 1055037d3;  */

void FUN_1055037ac(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055037d4; end: 105503877;  */

void FUN_1055037d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  puVar2 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010be04f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105503878; end: 10550392f; -[SCFriendmojiPresenter _accumulatedDisplayStringMapFromUpdates:] */

void FUN_105503878(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14f680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105503930; end: 105503ceb; -[SCFriendmojiPresenter _observeAssembledFriendmojisForIdentifier:friendmojis:isAiChatBot:friendmojiFilterType:decoratorsByPosition:] */

void FUN_105503930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_260;
  undefined1 auStack_208 [8];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_7);
  lStack_260 = param_7;
  func_0x00010bf52a60();
  if (lStack_260 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(param_7);
        }
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar3 = param_7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar13 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar13) {
                _objc_enumerationMutation(lVar3);
              }
              lVar5 = *(long *)(lStack_1e8 + lVar12 * 8);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c0e0b40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar5);
              if (lVar6 != 0) {
                func_0x00010befa120(puVar1);
                func_0x00010befa120(puVar2);
              }
              _objc_release(lVar6);
              lVar12 = lVar12 + 1;
            } while (lVar4 != lVar12);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lStack_260);
      lStack_260 = param_7;
      func_0x00010bf52a60();
    } while (lStack_260 != 0);
  }
  _objc_release(param_7);
  puVar7 = puVar2;
  func_0x00010bf529e0();
  puVar8 = PTR_PTR_1126ae6b8;
  if (puVar7 == (undefined *)0x0) {
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_1f8,param_1);
  puVar7 = auStack_1f8;
  _objc_copyWeak(auStack_208,puVar7);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = puVar8;
  uStack_200 = param_5;
  func_0x00010c0b8600(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_208);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(auStack_1f8);
    puVar9 = puVar7;
    __Unwind_Resume(param_3);
    _objc_retain(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105503cec; end: 105503d13;  */

void FUN_105503cec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105503d14; end: 105503da3;  */

void FUN_105503d14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar2 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010bdcf520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105503da4; end: 105503ee3; -[SCFriendmojiPresenter _assembledFriendmojisFromCategoryOptionals:flatPositions:identifier:friendmojis:isAiChatBot:] */

void FUN_105503da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105503ee4;
  puStack_68 = &UNK_110893570;
  uStack_60 = param_4;
  puStack_58 = puVar1;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010bf97e80(param_3,param_2,&puStack_80);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bdcf500(param_1,param_2,param_5,param_6,puVar2,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105503ee4; end: 105503fbb;  */

void FUN_105503ee4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105503fbc; end: 1055040cf; -[SCFriendmojiPresenter _displayStringsForIdentifiers:allIdentifierData:preResolvedEmojis:friendmojiFilterType:] */

void FUN_105503fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055040d0;
  puStack_70 = &UNK_1108935a0;
  uStack_68 = param_4;
  puStack_60 = puVar1;
  uStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010bf97e80(param_3,param_2,&puStack_88);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(uStack_50);
  _objc_release(puStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055040d0; end: 105504213;  */

void FUN_1055040d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0dfd40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c25be40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf0ad60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1055028b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c25c060(uVar1);
  uVar2 = uVar1;
  func_0x00010bf9c720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c073f40(uVar1);
  func_0x00010be04f00(param_1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28));
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105504214; end: 1055042ab; -[SCFriendmojiPresenter _emojiForFriendmojiType:preResolvedEmojis:] */

void FUN_105504214(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf8e420(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_4;
      func_0x00010c0e00e0(param_4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055042ac; end: 105504383; -[SCFriendmojiPresenter _categoriesByPositionForIdentifier:friendmojiFilterType:] */

void FUN_1055042ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055043ac;
  puStack_48 = &UNK_110893620;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010bd869d0(uVar1,&PTR___NSConcreteGlobalBlock_1108935d0,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105504384; end: 1055043ab;  */

void FUN_105504384(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055043ac; end: 105504437;  */

void FUN_1055043ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105504438;
  puStack_48 = &UNK_1108935f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x000100504554(param_2,&puStack_60);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105504438; end: 1055044a7;  */

void FUN_105504438(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bfb9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055044a8; end: 10550467b; -[SCFriendmojiPresenter _assembledFriendmojisForIdentifier:friendmojis:categoriesByPosition:isAiChatBot:] */

void FUN_1055044a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c02f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10550467c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0310);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10550467c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befa160(puVar1,param_2,param_4);
  _objc_release(param_4);
  if (param_6 != 0) {
    puVar4 = PTR_PTR_1126ba270;
    _objc_alloc(PTR_PTR_1126ba270);
    func_0x00010bffd140(0);
    func_0x00010befa120(puVar1,param_2,puVar4);
    _objc_release(puVar4);
  }
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0328);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10550467c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0340);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10550467c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10550467c; end: 105504833;  */

void FUN_10550467c(undefined *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x23;
  long unaff_x24;
  undefined *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
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
  
  puVar3 = &uStack_130;
  puVar5 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    unaff_x20 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    unaff_x21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    param_4 = auStack_e8;
    param_5 = 0x10;
    puVar1 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_130,param_4,0x10);
    if (puVar1 != (undefined *)0x0) {
      unaff_x24 = *plStack_120;
      do {
        puVar4 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x24) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x23 = *(undefined **)(lStack_128 + (long)puVar4 * 8);
          puVar2 = unaff_x23;
          func_0x00010c08fa60();
          if ((puVar2 != (undefined *)0x0) &&
             (puVar2 = unaff_x20, func_0x00010bf4b900(unaff_x20,param_2,unaff_x23),
             ((ulong)puVar2 & 1) == 0)) {
            func_0x00010befa120(unaff_x20,param_2,unaff_x23);
            unaff_x23 = PTR_PTR_1126ba270;
            _objc_alloc();
            func_0x00010bffd140(0);
            func_0x00010befa120(unaff_x21,param_2,unaff_x23);
            _objc_release(unaff_x23);
          }
          puVar4 = puVar4 + 1;
        } while (puVar1 != puVar4);
        param_4 = auStack_e8;
        param_5 = 0x10;
        puVar1 = param_1;
        puVar3 = &uStack_130;
        func_0x00010bf52a60(param_1,param_2,&uStack_130,param_4,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_1);
    puVar4 = unaff_x21;
    func_0x00010bf51e00();
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    param_3 = (undefined1 *)puVar3;
  }
  puVar1 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcVar6 = FUN_105504834;
    _objc_retain(param_4);
    _objc_retain(param_3);
    puVar2 = puVar1;
    func_0x00010bddbe00(puVar1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcf500(puVar1,param_2,param_3,param_4,puVar2,param_6,param_7,param_8,unaff_x24,
                        unaff_x23,puVar4,unaff_x21,unaff_x20,param_1,puVar5,pcVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105504834; end: 1055048db; -[SCFriendmojiPresenter _friendmojisForIdentifier:friendmojis:friendmojiFilterType:isAiChatBot:] */

void FUN_105504834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bddbe00(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf500(param_1,param_2,param_3,param_4,uVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055048dc; end: 105504b8b; -[SCFriendmojiPresenter _displayStringForFriendmojis:streakLength:friendUserId:friendmojiFilterType:showExpiryTimeForDebugging:isAiChatBot:] */

undefined **
FUN_1055048dc(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,long param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  undefined1 uVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined **ppuVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 uStack_2df;
  undefined1 uStack_2de;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_268;
  long lStack_1e0;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  ppuVar20 = param_2;
  func_0x00010be19720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_2[7];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0790e0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    _objc_retain(ppuVar20);
    uVar16 = 0;
    ppuVar3 = ppuVar20;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    while (param_1 = 0, ppuVar3 != (undefined **)0x0) {
      ppuVar22 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar21) {
          _objc_enumerationMutation(ppuVar20);
        }
        uVar24 = *(ulong *)((long)ppuVar22 * 8);
        uVar4 = uVar24;
        func_0x00010bf33560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf9c880(uVar24);
          param_1 = uVar16;
          goto LAB_105504afc;
        }
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar3 != ppuVar22);
      ppuVar3 = ppuVar20;
      func_0x00010bf52a60();
    }
LAB_105504afc:
    _objc_release(ppuVar20);
    uVar15 = 0;
  }
  else {
    puVar1 = param_2[6];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25bfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    ppuVar3 = ppuVar20;
    FUN_1055028b0(ppuVar20,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    param_5 = puVar2;
    func_0x00010c25c060();
    puVar1 = puVar2;
    func_0x00010bf9c720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c073f40();
    uVar15 = SUB81(puVar1,0);
    _objc_release(puVar2);
    ppuVar20 = ppuVar3;
  }
  uVar16 = 0;
  ppuVar3 = ppuVar20;
  func_0x00010be04f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar3);
  _objc_retain(uVar16);
  _objc_retain(ppuVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar19 = 1;
  pcVar18 = FUN_105501ee4;
  if (param_7 < 5) {
    if (param_7 < 3) {
      if (param_7 == 1) {
        uVar19 = 0;
        pcVar18 = (code *)0x105501f2c;
      }
      else {
        pcVar18 = FUN_105501ee4;
        if (param_7 == 2) {
          pcVar18 = (code *)0x105501f74;
        }
      }
    }
    else if (param_7 == 3) {
      uVar19 = 0;
      pcVar18 = FUN_105501fbc;
    }
    else if (param_7 == 4) {
      pcVar18 = (code *)0x105501fc4;
    }
LAB_105504ee4:
    puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d0 = 0xc0000000;
    pcStack_2c8 = FUN_105505100;
    puStack_2c0 = &UNK_110893650;
    ppuVar20 = ppuVar3;
    pcStack_2b8 = pcVar18;
    func_0x0001006372a4(ppuVar3,&puStack_2d8);
    _objc_release(ppuVar3);
    puStack_320 = puVar2;
    uStack_2df = uVar19;
  }
  else {
    if (param_7 < 7) {
      if (param_7 == 5) {
        pcVar18 = (code *)0x10550200c;
      }
      else if (param_7 == 6) {
        uVar19 = 0;
        pcVar18 = FUN_105502054;
      }
      goto LAB_105504ee4;
    }
    if (param_7 == 8) {
      pcVar18 = (code *)0x0;
      goto LAB_105504ee4;
    }
    if (param_7 != 7) goto LAB_105504ee4;
    _objc_retain(ppuVar3);
    if (lRam00000001136bc838 != -1) {
      func_0x00010002a2fc(0x1136bc838,&PTR___NSConcreteGlobalBlock_1108936c0);
    }
    lVar17 = lRam00000001136bc840;
    _objc_retain(lRam00000001136bc840);
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    _objc_retain(ppuVar3);
    ppuVar20 = ppuVar3;
    func_0x00010bf52a60();
    if (ppuVar20 == (undefined **)0x0) {
      _objc_release(ppuVar3);
LAB_1055050a8:
      ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
    }
    else {
      lVar21 = 0;
      lVar23 = *plStack_2a0;
      do {
        ppuVar22 = (undefined **)0x0;
        do {
          if (*plStack_2a0 != lVar23) {
            _objc_enumerationMutation(ppuVar3);
          }
          lVar25 = *(long *)(lStack_2a8 + (long)ppuVar22 * 8);
          lVar6 = lVar25;
          func_0x00010bf33560();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            lVar7 = lVar25;
            func_0x00010bf33560(lVar25);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar17;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar7);
            _objc_release(lVar6);
            if (lVar8 != 0) {
              if (lVar21 != 0) {
                lVar6 = lVar25;
                func_0x00010bf33560();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar17;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c067ec0();
                lVar9 = lVar21;
                func_0x00010bf33560(lVar21);
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar17;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar10;
                func_0x00010c067ec0();
                _objc_release(lVar10);
                _objc_release(lVar9);
                _objc_release(lVar7);
                _objc_release(lVar6);
                if ((int)lVar11 <= (int)lVar8) goto LAB_105504e50;
              }
              _objc_retain(lVar25);
              _objc_release(lVar21);
              lVar21 = lVar25;
            }
          }
LAB_105504e50:
          ppuVar22 = (undefined **)((long)ppuVar22 + 1);
        } while (ppuVar20 != ppuVar22);
        ppuVar20 = ppuVar3;
        func_0x00010bf52a60();
      } while (ppuVar20 != (undefined **)0x0);
      _objc_release(ppuVar3);
      if (lVar21 == 0) goto LAB_1055050a8;
      ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_268 = lVar21;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar21);
    }
    _objc_release(lVar17);
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    uStack_2df = 0;
    puStack_320 = PTR___NSConcreteStackBlock_11034bd00;
  }
  uStack_318 = 0xc2000000;
  pcStack_310 = FUN_10550515c;
  puStack_308 = &UNK_110893670;
  uStack_300 = param_6;
  puStack_2f0 = param_5;
  uStack_2e8 = param_1;
  uStack_2e0 = uVar15;
  uStack_2de = param_8;
  _objc_retain(uVar16);
  ppuVar22 = &puStack_320;
  ppuVar12 = ppuVar20;
  uStack_2f8 = uVar16;
  func_0x000100504554();
  ppuVar13 = ppuVar12;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c08fa60();
  if (ppuVar14 == (undefined **)0x0) {
LAB_105505024:
    _objc_retain(ppuVar13);
    param_2 = ppuVar13;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c106cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf35940();
    if (puVar2 != (undefined *)0x2) {
      _objc_release(puVar1);
      goto LAB_105505024;
    }
    param_2 = &PTR____CFConstantStringClassReference_110de7af8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de7af8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(uStack_2f8);
  _objc_release(ppuVar20);
  _objc_release(uVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
    ___stack_chk_fail();
    _objc_retain(ppuVar22);
    if (((code *)ppuVar3[4] == (code *)0x0) ||
       (ppuVar20 = ppuVar22, (*(code *)ppuVar3[4])(), (int)ppuVar20 != 0)) {
      ppuVar20 = ppuVar22;
      func_0x00010550200c(ppuVar22);
    }
    else {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_release(ppuVar22);
    return ppuVar20;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return param_2;
}



/* Entry: 105504b8c; end: 1055050ff; -[SCFriendmojiPresenter _displayStringWithFriendmojis:streakLength:streakExpiration:isFrozen:friendmojiFilterType:showExpiryTimeForDebugging:preResolvedEmojis:] */

undefined **
FUN_105504b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5,undefined1 param_6,long param_7,undefined1 param_8,
             undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined1 uVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_4);
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  uVar14 = 1;
  pcVar13 = FUN_105501ee4;
  if (param_7 < 5) {
    if (param_7 < 3) {
      if (param_7 == 1) {
        uVar14 = 0;
        pcVar13 = (code *)0x105501f2c;
      }
      else {
        pcVar13 = FUN_105501ee4;
        if (param_7 == 2) {
          pcVar13 = (code *)0x105501f74;
        }
      }
    }
    else if (param_7 == 3) {
      uVar14 = 0;
      pcVar13 = FUN_105501fbc;
    }
    else if (param_7 == 4) {
      pcVar13 = (code *)0x105501fc4;
    }
LAB_105504ee4:
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc0000000;
    pcStack_168 = FUN_105505100;
    puStack_160 = &UNK_110893650;
    ppuVar15 = param_4;
    pcStack_158 = pcVar13;
    func_0x0001006372a4(param_4,&puStack_178);
    _objc_release(param_4);
    puStack_1c0 = puVar11;
    uStack_17f = uVar14;
  }
  else {
    if (param_7 < 7) {
      if (param_7 == 5) {
        pcVar13 = (code *)0x10550200c;
      }
      else if (param_7 == 6) {
        uVar14 = 0;
        pcVar13 = FUN_105502054;
      }
      goto LAB_105504ee4;
    }
    if (param_7 == 8) {
      pcVar13 = (code *)0x0;
      goto LAB_105504ee4;
    }
    if (param_7 != 7) goto LAB_105504ee4;
    _objc_retain(param_4);
    if (lRam00000001136bc838 != -1) {
      func_0x00010002a2fc(0x1136bc838,&PTR___NSConcreteGlobalBlock_1108936c0);
    }
    lVar1 = lRam00000001136bc840;
    _objc_retain(lRam00000001136bc840);
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_4);
    ppuVar15 = param_4;
    func_0x00010bf52a60();
    if (ppuVar15 == (undefined **)0x0) {
      _objc_release(param_4);
LAB_1055050a8:
      ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
    }
    else {
      lVar16 = 0;
      lVar18 = *plStack_140;
      do {
        ppuVar17 = (undefined **)0x0;
        do {
          if (*plStack_140 != lVar18) {
            _objc_enumerationMutation(param_4);
          }
          lVar19 = *(long *)(lStack_148 + (long)ppuVar17 * 8);
          lVar2 = lVar19;
          func_0x00010bf33560();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 != 0) {
            lVar3 = lVar19;
            func_0x00010bf33560(lVar19);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar3);
            _objc_release(lVar2);
            if (lVar4 != 0) {
              if (lVar16 != 0) {
                lVar2 = lVar19;
                func_0x00010bf33560();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = lVar1;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar3;
                func_0x00010c067ec0();
                lVar5 = lVar16;
                func_0x00010bf33560(lVar16);
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar1;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c067ec0();
                _objc_release(lVar6);
                _objc_release(lVar5);
                _objc_release(lVar3);
                _objc_release(lVar2);
                if ((int)lVar7 <= (int)lVar4) goto LAB_105504e50;
              }
              _objc_retain(lVar19);
              _objc_release(lVar16);
              lVar16 = lVar19;
            }
          }
LAB_105504e50:
          ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        } while (ppuVar15 != ppuVar17);
        ppuVar15 = param_4;
        func_0x00010bf52a60();
      } while (ppuVar15 != (undefined **)0x0);
      _objc_release(param_4);
      if (lVar16 == 0) goto LAB_1055050a8;
      ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_108 = lVar16;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
    }
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_release(param_4);
    uStack_17f = 0;
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  }
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_10550515c;
  puStack_1a8 = &UNK_110893670;
  uStack_1a0 = param_2;
  uStack_190 = param_5;
  uStack_188 = param_1;
  uStack_180 = param_6;
  uStack_17e = param_8;
  _objc_retain(param_9);
  ppuVar17 = &puStack_1c0;
  ppuVar8 = ppuVar15;
  uStack_198 = param_9;
  func_0x000100504554();
  ppuVar9 = ppuVar8;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c08fa60();
  if (ppuVar10 != (undefined **)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c106cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf35940();
    if (puVar11 == (undefined *)0x2) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110de7af8;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de7af8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      goto LAB_105505030;
    }
    _objc_release(puVar12);
  }
  _objc_retain(ppuVar9);
  ppuVar10 = ppuVar9;
LAB_105505030:
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(uStack_198);
  _objc_release(ppuVar15);
  _objc_release(param_9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
    return ppuVar10;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar17);
  if (((code *)param_4[4] == (code *)0x0) ||
     (ppuVar15 = ppuVar17, (*(code *)param_4[4])(), (int)ppuVar15 != 0)) {
    ppuVar15 = ppuVar17;
    func_0x00010550200c(ppuVar17);
  }
  else {
    ppuVar15 = (undefined **)0x0;
  }
  _objc_release(ppuVar17);
  return ppuVar15;
}



/* Entry: 105505100; end: 10550515b;  */

undefined8 FUN_105505100(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (uVar1 = param_2, (**(code **)(param_1 + 0x20))(), (int)uVar1 != 0)) {
    uVar1 = param_2;
    func_0x00010550200c(param_2);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10550515c; end: 105505233;  */

void FUN_10550515c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf33560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((int)uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010bf33560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be08720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bec5260(*(undefined8 *)(param_1 + 0x38),uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105505234; end: 105505583; -[SCFriendmojiPresenter _streakStringWithLength:expiration:isFrozen:shouldDisplayStreakCounter:showExpiryTimeForDebugging:preResolvedEmojis:] */

void FUN_105505234(double param_1,undefined **param_2,undefined8 param_3,long param_4,uint param_5,
                  int param_6,int param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  double dVar8;
  
  dVar8 = param_1;
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_1 == 0.0) {
    func_0x00010bf87060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf655e0();
    _objc_retainAutoreleasedReturnValue();
    dVar8 = param_1;
  }
  if ((param_4 < 1) || ((param_5 & 1) != 0)) {
    if (0 < param_4) goto LAB_105505300;
  }
  else {
    puVar2 = param_2[3];
    func_0x00010bf5e5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf433a0(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x1) {
LAB_105505300:
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      if (param_6 == 0) {
LAB_105505330:
        if (param_5 != 0) goto LAB_105505334;
LAB_1055053c0:
        ppuVar6 = param_2;
        func_0x00010be08720(param_2,param_3,&PTR____CFConstantStringClassReference_110dc5198,param_8
                           );
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110dcb2f8;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar7 = ppuVar6;
        }
        _objc_retain(ppuVar7);
        _objc_release(ppuVar6);
      }
      else {
        if (param_4 == 100) {
          func_0x00010c20e7c0(ppuVar4,param_3,&PTR____CFConstantStringClassReference_110f5f058);
          goto LAB_105505330;
        }
        puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
        _objc_alloc_init(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
        func_0x00010c1d02e0();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c25d4c0(puVar3,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20e7c0(ppuVar4,param_3,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_release(puVar3);
        if (param_5 == 0) goto LAB_1055053c0;
LAB_105505334:
        ppuVar7 = &PTR____CFConstantStringClassReference_110f5ef38;
        _objc_retain(&PTR____CFConstantStringClassReference_110f5ef38);
      }
      func_0x00010bf070e0(ppuVar4,param_3,ppuVar7);
      puVar2 = param_2[2];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25bf20();
      _objc_release(puVar2);
      puVar2 = param_2[3];
      func_0x00010bf5e5e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar1,param_3,puVar2);
      _objc_release(puVar2);
      if (((param_5 & 1) == 0) && (dVar8 < (double)(long)puVar3)) {
        func_0x00010bf070e0(ppuVar4,param_3,&PTR____CFConstantStringClassReference_110de7ad8);
      }
      if (param_7 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
        _objc_alloc_init(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
        puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf3e0(puVar3,param_3,puVar2);
        _objc_release(puVar2);
        func_0x00010c1eea40(puVar3,param_3,2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720((dVar8 / 60.0) / 60.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c25d4c0(puVar3,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar3);
        func_0x00010bf070e0(ppuVar4,param_3,puVar5);
        _objc_release(puVar5);
      }
      ppuVar6 = ppuVar4;
      func_0x00010bf51e00(ppuVar4);
      _objc_release(ppuVar7);
      _objc_release(ppuVar4);
      goto LAB_105505550;
    }
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_105505550:
  _objc_release(puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 105505584; end: 10550563b; -[SCFriendmojiPresenter .cxx_destruct] */

void FUN_105505584(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10550563c; end: 1055057d3;  */

undefined8 *** FUN_10550563c(void)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0358;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0370;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0388;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c03a0;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c03b8;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c03d0;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c03e8;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0400;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0418;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0430;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0448;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0460;
  pppuVar5 = &ppuStack_78;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuRam00000001136bc840;
  pppuRam00000001136bc840 = (undefined8 ***)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar5);
  puStack_118 = PTR_PTR_1126e8c80;
  pppuVar3 = &ppuStack_120;
  ppuStack_120 = pppuVar2;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined8 ***)0x0) {
    _objc_retain(pppuVar5);
    ppuVar4 = pppuVar3[1];
    pppuVar3[1] = pppuVar5;
    _objc_release(ppuVar4);
    ppuVar4 = (undefined8 **)PTR_PTR_1126ae568;
    _objc_opt_new();
    ppuVar6 = pppuVar3[2];
    pppuVar3[2] = ppuVar4;
    _objc_release(ppuVar6);
    ppuVar4 = (undefined8 **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    ppuVar6 = pppuVar3[3];
    pppuVar3[3] = ppuVar4;
    _objc_release(ppuVar6);
    ppuVar4 = (undefined8 **)PTR_PTR_1126ae568;
    _objc_opt_new();
    ppuVar6 = pppuVar3[4];
    pppuVar3[4] = ppuVar4;
    _objc_release(ppuVar6);
    func_0x00010be89640(pppuVar3);
    _objc_initWeak(auStack_128,pppuVar3);
    ppuVar4 = (undefined8 **)PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x00010bf6ab80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010c22ad80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = pppuVar3[5];
    pppuVar3[5] = ppuVar6;
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
  }
  _objc_release(pppuVar5);
  return pppuVar3;
}



/* Entry: 1055057d4; end: 105505963; -[SCFriendmojiDataCoordinator initWithFeatureSettingsService:] */

undefined8 * FUN_1055057d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8c80;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    func_0x00010be89640(puVar1);
    _objc_initWeak(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf6ab80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c22ad80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105505964; end: 1055059e7;  */

void FUN_105505964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010be38ac0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____NSDictionary0__struct_11034ab58);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055059e8; end: 105505adf; -[SCFriendmojiDataCoordinator _incrementalEmojiSnapshotObservable] */

void FUN_1055059e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bdd62a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c14f680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105505ae0; end: 105505b73;  */

void FUN_105505ae0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bebdb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = param_2;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105505b74; end: 105505cef; -[SCFriendmojiDataCoordinator _snapshotByApplyingChangedCategories:toSnapshot:] */

void FUN_105505b74(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = param_1;
        func_0x00010bfb96e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          func_0x00010c12d3e0(param_4);
        }
        else {
          func_0x00010c1d0640(param_4);
        }
        _objc_release(lVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105505cf0;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c281a60(*(undefined8 *)(lVar1 + 0x30));
  puStack_158 = PTR_PTR_1126e8c80;
  lStack_160 = lVar1;
  _objc_msgSendSuper2(&lStack_160,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105505cf0; end: 105505d37; -[SCFriendmojiDataCoordinator dealloc] */

void FUN_105505cf0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126e8c80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105505d38; end: 105505d5f; -[SCFriendmojiDataCoordinator friendmojiSettingsDidChangeObservable] */

void FUN_105505d38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105505d60; end: 105505d87; -[SCFriendmojiDataCoordinator observeFriendmojiEmojis] */

void FUN_105505d60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105505d88; end: 105505e2b; -[SCFriendmojiDataCoordinator editableFriendmojiByCategory] */

void FUN_105505d88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000105507960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010050471c();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105505e2c; end: 105505e53;  */

void FUN_105505e2c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105505e54; end: 105505fcb;  */

void FUN_105505e54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb96e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126ba278;
  _objc_alloc(PTR_PTR_1126ba278);
  uVar3 = uVar8;
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a900(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105505fcc; end: 105506017; -[SCFriendmojiDataCoordinator sortedCategories] */

void FUN_105505fcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf8c540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c086f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105506018; end: 10550609b;  */

undefined8 FUN_105506018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf8e620(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf8e620(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}


