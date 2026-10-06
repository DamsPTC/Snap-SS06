/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106481350; end: 10648138f;  */

bool FUN_106481350(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 0xd;
}



/* Entry: 106481390; end: 1064813e7;  */

bool FUN_106481390(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 0x27) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c27dd80(param_2);
    bVar1 = lVar2 == 2;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1064813e8; end: 10648180f; -[SCContextActionMenuTimestampView initWithLocationTitle:timestampTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1064813e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a8 = PTR_PTR_1126f1508;
  puVar1 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar9 = (long)_DAT_11274831c;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar9));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar9 = (long)_DAT_112748320;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar9));
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar9 = (long)_DAT_112748324;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010befbb60(puVar1);
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar8;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar13;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar10;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar7);
    _objc_release(uVar11);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(uVar13);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar12);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_112748324,0);
  _objc_storeStrong(param_3 + _DAT_112748320,0);
  puVar1 = (undefined8 *)(param_3 + _DAT_11274831c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1,0);
  return puVar1;
}



/* Entry: 106481810; end: 10648185f; -[SCContextActionMenuTimestampView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106481810(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748324,0);
  _objc_storeStrong(param_1 + _DAT_112748320,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274831c,0);
  return;
}



/* Entry: 106481860; end: 1064818fb; -[SCContextBlockBasedUITapGestureRecognizer initWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106481860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1510;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithTarget_action__1125f1c48,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748328);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112748328) = uVar2;
    _objc_release(uVar3);
    func_0x00010befbd40(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064818fc; end: 106481917; -[SCContextBlockBasedUITapGestureRecognizer onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064818fc(long param_1)

{
  if (*(long *)(param_1 + _DAT_112748328) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106481910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112748328) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106481918; end: 106481927; -[SCContextBlockBasedUITapGestureRecognizer block] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106481918(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748328);
}



/* Entry: 106481928; end: 10648193b; -[SCContextBlockBasedUITapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106481928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748328,0);
  return;
}



/* Entry: 10648193c; end: 106481c97; -[SCContextV2ActionMenuViewController initWithActionParams:operaPageObservable:logger:fromSwipeUpMessagingController:circumstanceEngine:composerRuntime:operaNavigationStyle:boostCoordinator:contextExperimentService:currentUserId:valdiRuntimeProvider:snapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10648193c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9
             ,undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126f1518;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar6 = (long)_DAT_11274832c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112748330;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112748334;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112748338;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274833c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274833c) = puVar3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112748340;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    uVar2 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    ppuVar4 = &PTR___NSConcreteGlobalBlock_110924360;
    if (param_6 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    _objc_retainBlock(ppuVar4);
    puVar3 = PTR_PTR_1126cad38;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c0ea4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031d40();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748348);
    *(undefined **)((long)puVar1 + (long)_DAT_112748348) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106481c98; end: 106481cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106481c98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112748344;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106481d00; end: 106481d07;  */

bool FUN_106481d00(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c27dd80();
  if ((lVar2 == 0x15) || (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 0x16)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c27dd80(param_2);
    bVar1 = lVar2 == 0x22;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106481d08; end: 106481d6f; -[SCContextV2ActionMenuViewController setContextActionSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106481d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274834c);
  *(undefined8 *)(param_1 + _DAT_11274834c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c182de0(*(undefined8 *)(param_1 + _DAT_112748348),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106481d70; end: 106481e03; -[SCContextV2ActionMenuViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106481d70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1518;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112748348);
  func_0x00010beef480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be86a80(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 106481e04; end: 1064827db; -[SCContextV2ActionMenuViewController _rebuildContainingViewsWithActions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106481e04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar33 = (long)_DAT_112748350;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar33));
    puVar35 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    uVar31 = *(undefined8 *)(param_1 + lVar33);
    *(undefined **)(param_1 + lVar33) = puVar35;
    _objc_release(uVar31);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar33));
    func_0x00010c16e060(*(undefined8 *)(param_1 + lVar33));
    func_0x00010c207380(0x4024000000000000,*(undefined8 *)(param_1 + lVar33));
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar35 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar33);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar2;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar33);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar26;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar4;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar33);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar5;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar33);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar8;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar35);
    _objc_release(puVar11);
    _objc_release(uVar38);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar37);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar36);
    _objc_release(lVar34);
    _objc_release(lVar26);
    _objc_release(uVar4);
    _objc_release(uVar31);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c160fc0();
    func_0x00010c219b60(puVar11);
    puVar35 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar11);
    _objc_release(puVar35);
    puVar35 = puVar11;
    func_0x00010c08c0e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar35);
    puVar35 = puVar11;
    func_0x00010c08c0e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar35);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar33));
    puVar12 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    func_0x00010c219b60();
    func_0x00010c16e060(puVar12);
    func_0x00010c207380(0,puVar12);
    func_0x00010befbb60(puVar11);
    puVar35 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar13 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar11;
    func_0x00010c08de00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar11;
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar35);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    lVar26 = *(long *)(param_1 + _DAT_11274832c);
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar26;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08bda0();
    _objc_release(lVar3);
    _objc_release(lVar26);
    if (((lVar1 - 3U < 6) || (lVar1 == 0x22)) || (lVar1 == 0x20)) {
      uVar32 = *(ulong *)(param_1 + _DAT_112748344);
      _objc_retain(uVar32);
      uVar29 = uVar32;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar29;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar29);
      puVar35 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar28 = uVar27;
      _objc_opt_isKindOfClass(uVar27,puVar35);
      uVar29 = uVar27;
      if ((uVar28 & 1) == 0) {
        uVar29 = 0;
      }
      _objc_retain(uVar29);
      _objc_release(uVar27);
      uVar27 = uVar32;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar32);
      uVar28 = uVar27;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar27);
      puVar35 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar32 = uVar28;
      _objc_opt_isKindOfClass(uVar28,puVar35);
      uVar27 = uVar28;
      if ((uVar32 & 1) == 0) {
        uVar27 = 0;
      }
      _objc_retain(uVar27);
      _objc_release(uVar28);
      uVar28 = uVar29;
      func_0x00010c08fa60();
      if ((uVar28 == 0) && (uVar28 = uVar27, func_0x00010c08fa60(), uVar28 == 0)) {
        puVar35 = (undefined *)0x0;
      }
      else {
        puVar35 = PTR_PTR_1126cad58;
        _objc_alloc();
        func_0x00010c027040();
        puVar13 = puVar35;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf49420(0x4049000000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162480();
        _objc_release(puVar14);
        _objc_release(puVar13);
      }
      _objc_release(uVar27);
      _objc_release(uVar29);
      if (puVar35 != (undefined *)0x0) {
        func_0x00010bef6d60(puVar12);
      }
      _objc_release(puVar35);
    }
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 != 0) {
      uVar31 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      do {
        lVar26 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          lVar34 = *(long *)(lVar26 * 8);
          puVar35 = puVar12;
          func_0x00010c261580();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar35;
          func_0x00010bf529e0();
          _objc_release(puVar35);
          if (puVar13 != (undefined *)0x0) {
            puVar35 = PTR__OBJC_CLASS___UIView_1126aec20;
            _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
            func_0x00010c013de0(uVar31,uVar36,uVar37,uVar38);
            puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16e440(puVar35);
            _objc_release(puVar13);
            puVar13 = puVar35;
            func_0x00010bfe0660(puVar35);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010bf49420(0x3fe0000000000000);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c162480();
            _objc_release(puVar14);
            _objc_release(puVar13);
            func_0x00010bef6d60(puVar12);
            _objc_release(puVar35);
          }
          func_0x00010bf0e700();
          if (lVar34 == 5) {
            uVar29 = *(ulong *)(param_1 + _DAT_112748330);
            func_0x000108435ed8();
            if ((uVar29 & 1) == 0) goto LAB_1064826f0;
          }
          else {
LAB_1064826f0:
            func_0x00010bf0e700();
          }
          lVar34 = param_1;
          func_0x00010bf33ae0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6d60(puVar12);
          _objc_release(lVar34);
          lVar26 = lVar26 + 1;
        } while (lVar3 != lVar26);
        lVar3 = param_3;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be86a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1064827dc; end: 1064827e3; -[SCContextV2ActionMenuViewController actionMenuDataSource:didUpdateActions:] */

void FUN_1064827dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be86a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__rebuildContainingViewsWithActio_11257f440,param_4);
  return;
}



/* Entry: 1064827e4; end: 106482caf; -[SCContextV2ActionMenuViewController cellForContextMenuAction:includeIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064827e4(long param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf0e700();
  puVar4 = PTR_PTR_1126b10a0;
  puVar6 = (undefined *)0x0;
  puVar3 = param_3;
  if ((long)puVar2 < 4) {
    if ((long)puVar2 < 2) {
      if (puVar2 == (undefined *)0x0) goto LAB_1064829b4;
      if (puVar2 != (undefined *)0x1) goto LAB_106482ab4;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f180();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar2 == (undefined *)0x2) {
        puVar2 = param_3;
        func_0x00010c2711a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ec240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        func_0x00010c195460(puVar4);
        puVar6 = puVar4;
        goto LAB_106482ab4;
      }
      if (puVar2 != (undefined *)0x3) goto LAB_106482ab4;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d0f20();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (puVar2 + -6 < (undefined *)0x2) {
LAB_1064829b4:
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar2 == (undefined *)0x4) {
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cfa0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar2 != (undefined *)0x5) goto LAB_106482ab4;
    puVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112748330);
    func_0x000108435ed8();
    puVar6 = puVar4;
    if (iVar1 == 0) goto LAB_106482ab4;
    puVar3 = PTR_PTR_1126cad40;
    _objc_alloc(PTR_PTR_1126cad40);
    func_0x00010c01af40(0x4000000000000000,0x4042000000000000,0x4032000000000000);
    puVar2 = PTR_PTR_1126cad48;
    _objc_alloc(PTR_PTR_1126cad48);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112748334);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar2);
    _objc_release(uVar5);
    func_0x00010c19f0e0(0,0,0x4058000000000000,0x4042000000000000,puVar2);
    _CGAffineTransformMakeTranslation(&uStack_90,0x4000000000000000,0);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x00010c219960(puVar2);
    func_0x00010c2194c0(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  puVar6 = puVar4;
LAB_106482ab4:
  puVar4 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar6);
  _objc_release(puVar4);
  if (param_4 != 0) {
    puVar4 = param_3;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      uVar5 = 0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_106482cb0;
      puStack_d8 = &UNK_110841f80;
      _objc_retain(param_3);
      puStack_d0 = param_3;
      _objc_retain(puVar6);
      puStack_c8 = puVar6;
      func_0x00010007380c(uVar5,&puStack_f0);
      _objc_release(puStack_c8);
      _objc_release(puStack_d0);
      _objc_release(uVar5);
    }
  }
  puVar4 = param_3;
  func_0x00010bfd3220();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf0e700();
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x2) {
      _objc_initWeak(&uStack_c0,param_1);
      puVar4 = PTR_PTR_1126cad50;
      _objc_alloc(PTR_PTR_1126cad50);
      _objc_copyWeak(auStack_f8,&uStack_c0);
      _objc_retain(param_3);
      func_0x00010bff8d00(puVar4);
      func_0x00010bef9040(puVar6);
      _objc_release(puVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(&uStack_c0);
    }
  }
  func_0x00010c165e40(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106482cb0; end: 106482e53;  */

void FUN_106482cb0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106482d6c;
  puStack_48 = &UNK_110841f80;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lStack_40 = lVar2;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 106482e54; end: 106482ea7;  */

void FUN_106482e54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd3220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83160(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106482ea8; end: 106482f1f; -[SCContextV2ActionMenuViewController dismissAndPerform:] */

void FUN_106482ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = lVar1;
  }
  _objc_retain(param_1);
  _objc_release(lVar1);
  func_0x00010bf84b00(param_1,param_2,1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106482f20; end: 106482f2f; -[SCContextV2ActionMenuViewController contextActionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106482f20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274834c);
}



/* Entry: 106482f30; end: 106482fef; -[SCContextV2ActionMenuViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106482f30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274834c,0);
  _objc_storeStrong(param_1 + _DAT_112748340,0);
  _objc_storeStrong(param_1 + _DAT_112748334,0);
  _objc_storeStrong(param_1 + _DAT_112748330,0);
  _objc_storeStrong(param_1 + _DAT_112748338,0);
  _objc_storeStrong(param_1 + _DAT_11274833c,0);
  _objc_storeStrong(param_1 + _DAT_112748344,0);
  _objc_storeStrong(param_1 + _DAT_112748348,0);
  _objc_storeStrong(param_1 + _DAT_112748350,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274832c,0);
  return;
}



/* Entry: 106482ff0; end: 1064830e3; -[SCContextMessagingViewControllerAnimator initWithHorizontalSwipe:contextExperimentService:] */

undefined1 * FUN_106482ff0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1520;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(char *)((long)puVar1 + 8) = (char)param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    if (param_3 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
      *(undefined **)((long)puVar1 + 0x48) = puVar3;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x48));
      puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
      *(undefined **)((long)puVar1 + 0x40) = puVar3;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x40));
    }
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1064830e4; end: 106483133; -[SCContextMessagingViewControllerAnimator modalInteractionController] */

void FUN_1064830e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106483134; end: 106483137; -[SCContextMessagingViewControllerAnimator animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106483134(void)

{
  return;
}



/* Entry: 106483138; end: 10648313b; -[SCContextMessagingViewControllerAnimator animationControllerForDismissedController:] */

void FUN_106483138(void)

{
  return;
}



/* Entry: 10648313c; end: 1064831d3; -[SCContextMessagingViewControllerAnimator isInteractiveTransition] */

uint FUN_10648313c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x000106483180();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x000106483180(uVar3);
    uVar1 = (uint)uVar3;
  }
  else {
    uVar1 = 1;
  }
  return *(byte *)(param_1 + 8) & uVar1 & 1;
}



/* Entry: 1064831d4; end: 10648320f; -[SCContextMessagingViewControllerAnimator interactionControllerForPresentation:] */

void FUN_1064831d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c075ba0();
  if ((int)uVar1 != 0) {
    func_0x00010c0cfaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106483210; end: 10648324b; -[SCContextMessagingViewControllerAnimator interactionControllerForDismissal:] */

void FUN_106483210(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c075ba0();
  if ((int)uVar1 != 0) {
    func_0x00010c0cfaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10648324c; end: 106483253; -[SCContextMessagingViewControllerAnimator transitionDuration:] */

undefined8 FUN_10648324c(void)

{
  return 0;
}



/* Entry: 106483254; end: 106483267; -[SCContextMessagingViewControllerAnimator animateTransition:] */

void FUN_106483254(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateVerticalTransition__112550678);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdcacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateHorizontalTransition__1125504d8);
  return;
}



/* Entry: 106483268; end: 10648354b; -[SCContextMessagingViewControllerAnimator _animateVerticalTransition:] */

void FUN_106483268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_130 [8];
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 uStack_e8;
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
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c06d1e0();
  uVar1 = uVar6;
  if ((int)uVar7 == 0) {
    uVar1 = uVar5;
  }
  _objc_retain(uVar1);
  if ((int)uVar7 == 0) {
    uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_e0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uVar8 = uVar5;
  }
  else {
    func_0x00010befbb60(uVar3);
    func_0x00010bfaef80(param_3);
    func_0x00010c19f0e0(uVar6);
    func_0x00010c2a5040(uVar3);
    _CGAffineTransformMakeTranslation(&uStack_b0);
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uVar8 = uVar6;
  }
  uStack_c0 = uStack_90;
  func_0x00010c219960(uVar8);
  _objc_initWeak(&uStack_e0,param_1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_1);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10648354c;
  puStack_108 = &UNK_110844dd0;
  _objc_copyWeak(auStack_f0,&uStack_e0);
  uStack_e8 = (char)uVar7;
  _objc_retain(uVar1);
  uStack_100 = uVar1;
  _objc_retain(uVar3);
  uStack_f8 = uVar3;
  _objc_copyWeak(auStack_130,&uStack_e0);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  uStack_128 = (char)uVar7;
  _objc_retain(uVar6);
  func_0x00010bf03420(uStack_90,puVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_130);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(&uStack_e0);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10648354c; end: 1064835fb;  */

void FUN_10648354c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else {
      if (*(char *)(lVar1 + 9) != '\x01') {
        func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
        goto LAB_1064835e4;
      }
      func_0x00010c2a5040(*(undefined8 *)(param_1 + 0x28));
      _CGAffineTransformMakeTranslation(&uStack_80);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uStack_48 = uStack_78;
      uStack_50 = uStack_80;
      uStack_38 = uStack_68;
      uStack_40 = uStack_70;
    }
    uStack_30 = uStack_60;
    uStack_28 = uStack_58;
    func_0x00010c219960(uVar2,param_2,&uStack_50);
  }
LAB_1064835e4:
  _objc_release(lVar1);
  return;
}



/* Entry: 1064835fc; end: 10648375f;  */

void FUN_1064835fc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c27ac00();
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_60);
    if ((uVar2 & 1) == 0) {
      func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,1);
      if (*(char *)(param_1 + 0x40) == '\x01') {
        if (*(long *)(lVar1 + 0x28) == 0) goto LAB_106483744;
        lVar3 = *(long *)(lVar1 + 0x48);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(lVar1 + 0x28);
        _objc_release();
        if (lVar3 == lVar5) goto LAB_106483744;
        uVar4 = *(undefined8 *)(lVar1 + 0x48);
        func_0x00010c29bf00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c9c0();
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(lVar1 + 0x28);
      }
      else {
        if (*(long *)(lVar1 + 0x20) == 0) goto LAB_106483744;
        lVar3 = *(long *)(lVar1 + 0x48);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(lVar1 + 0x20);
        _objc_release();
        if (lVar3 == lVar5) goto LAB_106483744;
        uVar4 = *(undefined8 *)(lVar1 + 0x48);
        func_0x00010c29bf00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c9c0();
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(lVar1 + 0x20);
      }
      func_0x00010bef9040(uVar4,param_2,*(undefined8 *)(lVar1 + 0x48));
    }
    else {
      func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
      }
    }
  }
LAB_106483744:
  _objc_release(lVar1);
  return;
}



/* Entry: 106483760; end: 10648399f; -[SCContextMessagingViewControllerAnimator _animateHorizontalTransition:] */

void FUN_106483760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c06d1e0();
  uVar1 = uVar5;
  if ((int)uVar6 == 0) {
    uVar1 = uVar4;
  }
  _objc_retain(uVar1);
  if ((int)uVar6 != 0) {
    uVar7 = param_4;
    func_0x00010bf4b2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar7);
    func_0x00010bfaef80(param_4);
    func_0x00010c19f0e0(uVar5);
    param_1 = 0;
    func_0x00010c1677c0(0,uVar5);
  }
  _objc_initWeak(auStack_68,param_2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1064839a0;
  puStack_80 = &UNK_110845ce0;
  _objc_retain(uVar1);
  uStack_70 = (undefined1)uVar6;
  uStack_78 = uVar1;
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010bf03420(param_1,puVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 1064839a0; end: 1064839af;  */

void FUN_1064839a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1064839b0; end: 1064839f7;  */

void FUN_1064839b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x28),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064839f8; end: 106483b1f; -[SCContextMessagingViewControllerAnimator gestureRecognizerShouldBegin:] */

bool FUN_1064839f8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_5);
  lVar2 = *(long *)(param_3 + 0x48);
  if (param_5 == lVar2) {
    lVar3 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(lVar2,param_4,lVar3);
    _objc_release(lVar3);
    bVar1 = ABS(param_2) < ABS(param_1);
    lVar2 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_3 + 0x28);
    _objc_release();
    if (lVar2 == lVar3) {
      bVar1 = (bool)*(char *)(param_3 + 8) == ABS(param_2) < ABS(param_1);
    }
  }
  else {
    lVar2 = *(long *)(param_3 + 0x40);
    if (param_5 == lVar2) {
      lVar3 = lVar2;
      func_0x00010c29bf00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(lVar2,param_4,lVar3);
      _objc_release(lVar3);
      bVar1 = ABS(param_2) < ABS(param_1);
    }
    else {
      bVar1 = true;
    }
  }
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 106483b20; end: 106483cd3; -[SCContextMessagingViewControllerAnimator _onPanGesture:] */

void FUN_106483b20(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_6);
  lVar2 = param_6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_4 + 0x28);
  _objc_release();
  lVar1 = param_6;
  func_0x00010c29bf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_6,param_5,lVar1);
  dVar4 = param_1;
  _objc_release(lVar1);
  lVar1 = param_6;
  func_0x00010c252440();
  if (lVar1 == 3) {
    lVar1 = param_6;
    func_0x00010c29bf00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_6,param_5,lVar1);
    _objc_release(lVar1);
    param_1 = param_1 + dVar4 / 3.0;
  }
  if (lVar2 != lVar3) {
    param_1 = -param_1;
  }
  lVar1 = param_6;
  func_0x00010c29bf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  dVar4 = 1.0;
  if (param_1 / param_3 <= 1.0) {
    dVar4 = param_1 / param_3;
  }
  lVar1 = param_6;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    lVar2 = param_4;
    func_0x00010c0cfaa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    if (dVar4 <= 0.5) {
      func_0x00010bf2e5a0();
    }
    else {
      func_0x00010bfaf8e0();
    }
    _objc_release(lVar2);
    *(undefined1 *)(param_4 + 9) = 0;
  }
  else if (lVar1 == 2) {
    func_0x00010c286a00(dVar4,*(undefined8 *)(param_4 + 0x10));
  }
  else if (lVar1 == 1) {
    if (lVar2 == lVar3) {
      lVar2 = *(long *)(param_4 + 0x38);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x30);
    }
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))();
    }
    *(undefined1 *)(param_4 + 9) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106483cd4; end: 106483d0f; -[SCContextMessagingViewControllerAnimator attachPanGestureToView:] */

void FUN_106483cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bef9040(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106483d10; end: 106483d43; -[SCContextMessagingViewControllerAnimator detachPanGestureFromView:] */

void FUN_106483d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c12c9c0(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106483d44; end: 106483d4b; -[SCContextMessagingViewControllerAnimator setPanGestureEnabled:] */

void FUN_106483d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 106483d4c; end: 106483d53; -[SCContextMessagingViewControllerAnimator presentingView] */

undefined8 FUN_106483d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106483d54; end: 106483d83; -[SCContextMessagingViewControllerAnimator setPresentingView:] */

void FUN_106483d54(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106483d84; end: 106483d8b; -[SCContextMessagingViewControllerAnimator presentedView] */

undefined8 FUN_106483d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106483d8c; end: 106483dbb; -[SCContextMessagingViewControllerAnimator setPresentedView:] */

void FUN_106483d8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106483dbc; end: 106483dc3; -[SCContextMessagingViewControllerAnimator presentHandler] */

undefined8 FUN_106483dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106483dc4; end: 106483dcb; -[SCContextMessagingViewControllerAnimator setPresentHandler:] */

void FUN_106483dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106483dcc; end: 106483dd3; -[SCContextMessagingViewControllerAnimator dismissHandler] */

undefined8 FUN_106483dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106483dd4; end: 106483ddb; -[SCContextMessagingViewControllerAnimator setDismissHandler:] */

void FUN_106483dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106483ddc; end: 106483de3; -[SCContextMessagingViewControllerAnimator actionBarPanGestureRecognizer] */

undefined8 FUN_106483ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106483de4; end: 106483deb; -[SCContextMessagingViewControllerAnimator panGestureRecognizer] */

undefined8 FUN_106483de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106483dec; end: 106483e63; -[SCContextMessagingViewControllerAnimator .cxx_destruct] */

void FUN_106483dec(long param_1)

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



/* Entry: 106483e64; end: 106483f07; -[SCContextV2CardsDataProvider initWithLogger:cardsDataFetcher:] */

undefined1 *
FUN_106483e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106483f08; end: 10648409b; -[SCContextV2CardsDataProvider loadCardsWithSessionParams:source:onRetry:] */

void FUN_106483f08(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_1064bc9c4();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32320();
    _objc_release(uVar2);
    func_0x00010be55ee0(param_1);
  }
  else {
    uVar1 = param_3;
    FUN_1064bcb64();
    if ((uVar1 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf32320();
      _objc_release(uVar2);
    }
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_4);
    uStack_50 = param_5;
    _objc_retain(param_3);
    func_0x00010c09b060(param_1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10648409c; end: 1064841d3;  */

void FUN_10648409c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfd5240();
    func_0x00010be55ee0(lVar1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1064841d4;
    puStack_70 = &UNK_1108475b0;
    _objc_retain(param_2);
    uStack_68 = param_2;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = param_3;
    lStack_58 = lVar1;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = uVar3;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1064841d4; end: 1064842df;  */

void FUN_1064841d4(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1064842e0;
  puStack_50 = &UNK_110848ba8;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar3;
  uStack_40 = uVar4;
  _objc_retain(uVar1);
  ppuVar2 = &puStack_68;
  uStack_38 = uVar1;
  _objc_retainBlock(ppuVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf322e0();
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 1064842e0; end: 106484313;  */

void FUN_1064842e0(long param_1)

{
  func_0x00010c0aa280(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c09b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadCardsWithSessionParams_sourc_112604630,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 106484314; end: 106484417; -[SCContextV2CardsDataProvider loadCardsWithSessionParams:completion:] */

void FUN_106484314(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c0fd7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    if (lVar1 == 0) {
      FUN_1064845d8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dca20(param_1,param_2,lVar2);
      _objc_release(lVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106484418;
    puStack_40 = &UNK_1109243e0;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010bfa58a0(uVar3,param_2,param_3,&puStack_58);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106484418; end: 106484423;  */

void FUN_106484418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106484420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106484424; end: 106484497; -[SCContextV2CardsDataProvider setPlaceholderCards:] */

void FUN_106484424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32300();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106484498; end: 10648449f; +[SCContextV2CardsDataProvider maybeHasRemoteCardsDataForInfoProvider:] */

ulong FUN_106484498(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar4 = param_3;
  func_0x00010c25a6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  bVar1 = *(byte *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  if (((bVar1 & 1) == 0) && (uVar4 = param_3, FUN_1064bcb64(), (uVar4 & 1) == 0)) {
    uVar4 = param_3;
    func_0x000108437c68(param_3);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1064844a0; end: 106484567; -[SCContextV2CardsDataProvider _logMenuPresentWithResult:source:content:onRetry:] */

void FUN_1064844a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_3 == 0) && ((param_6 & 1) != 0)) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c2839a0(uVar5);
  func_0x00010c0a2a00(*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = param_4;
  func_0x00010beef1e0(param_4);
  uVar1 = param_4;
  func_0x00010bf4eb20(param_4);
  uVar2 = param_4;
  func_0x00010bf4eae0(param_4);
  uVar3 = param_4;
  func_0x00010bf4eb00(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0a3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,PTR_s_logContextMenuPresentWithActionT_1126069c0,uVar5,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 106484568; end: 10648456f; -[SCContextV2CardsDataProvider placeholderCards] */

undefined8 FUN_106484568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106484570; end: 106484587; -[SCContextV2CardsDataProvider delegate] */

void FUN_106484570(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106484588; end: 106484593; -[SCContextV2CardsDataProvider setDelegate:] */

void FUN_106484588(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106484594; end: 1064845d7; -[SCContextV2CardsDataProvider .cxx_destruct] */

void FUN_106484594(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064845d8; end: 1064846d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1064845d8(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x22;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR_PTR_1126cad60;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126cad68;
  _objc_alloc_init();
  func_0x00010c216240();
  puVar3 = puVar2;
  func_0x00010bf31d80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800(0x42a00000);
  _objc_release(puVar3);
  uVar7 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  puVar6 = puVar4;
  func_0x00010c1f97a0(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(puVar2);
  _objc_retain(lVar8);
  _objc_retain(unaff_x22);
  puStack_a8 = PTR_PTR_1126f1530;
  ppuVar1 = &puStack_b0;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(ppuVar1,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined **)0x0) {
    lVar9 = (long)_DAT_11274838c;
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined **)((long)ppuVar1 + lVar9) = puVar6;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_112748390;
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined8 *)((long)ppuVar1 + lVar9) = uVar7;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_112748394;
    _objc_retain(in_x4);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined8 *)((long)ppuVar1 + lVar9) = in_x4;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_112748398;
    _objc_retain(in_x5);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined8 *)((long)ppuVar1 + lVar9) = in_x5;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_11274839c;
    _objc_retain(in_x6);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined8 *)((long)ppuVar1 + lVar9) = in_x6;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_1127483a0;
    _objc_retain(in_x7);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined8 *)((long)ppuVar1 + lVar9) = in_x7;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_1127483a4;
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined **)((long)ppuVar1 + lVar9) = puVar2;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_1127483a8;
    _objc_retain(lVar8);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(long *)((long)ppuVar1 + lVar9) = lVar8;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_1127483ac;
    _objc_retain(unaff_x22);
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar9);
    *(undefined8 *)((long)ppuVar1 + lVar9) = unaff_x22;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(lVar8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_1127483b0);
    *(undefined **)((long)ppuVar1 + (long)_DAT_1127483b0) = puVar3;
    _objc_release(uVar5);
    _objc_release(lVar8);
  }
  _objc_release(unaff_x22);
  _objc_release(lVar8);
  _objc_release(puVar2);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(uVar7);
  _objc_release(puVar6);
  return ppuVar1;
}



/* Entry: 1064846d4; end: 10648495b; -[SCContextV2CardsView initWithActionsHandler:snapchatterActionHandler:imageDownloader:snapchatterServices:userSession:storiesFetcher:composerRuntime:circumstanceEngine:contextExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1064846d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126f1530;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274838c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748390;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748394;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748398;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274839c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127483a0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127483a4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127483a8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127483ac;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127483b0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127483b0) = puVar3;
    _objc_release(uVar2);
    _objc_release(param_10);
  }
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



/* Entry: 10648495c; end: 10648499b;  */

void FUN_10648495c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e50bf8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 10648499c; end: 106484bfb; -[SCContextV2CardsView setPlaceholderCards:collapsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648499c(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c156b40();
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + _DAT_1127483b4) = 0;
    func_0x00010c182b00(param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127483b8);
    *(undefined8 *)(param_1 + _DAT_1127483b8) = 0;
    _objc_release(uVar5);
    func_0x00010bebc440(param_1);
    goto LAB_106484bc0;
  }
  puVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cad70;
  _objc_opt_class(PTR_PTR_1126cad70);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126cad70;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127483a4);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032a60();
    _objc_release(uVar5);
    if (puVar2 != (undefined *)0x0) goto LAB_106484a70;
  }
  else {
LAB_106484a70:
    _objc_retain(param_3);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0x4024000000000000;
    lVar1 = param_3;
    func_0x00010c156b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x000100504554();
    _objc_release(lVar1);
    dVar7 = (double)puStack_68[3];
    puStack_68[3] = dVar7 + 10.0;
    puVar3 = PTR_PTR_1126cadb0;
    _objc_alloc(PTR_PTR_1126cadb0);
    func_0x00010c043820();
    _objc_release(lVar6);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(param_3);
    func_0x00010c182b00(param_1);
    *(double *)(param_1 + _DAT_1127483b4) = dVar7 + 10.0;
    func_0x00010bebc440(param_1);
    func_0x00010c2226c0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127483b8);
  *(undefined8 *)(param_1 + _DAT_1127483b8) = 0;
  _objc_release(uVar5);
LAB_106484bc0:
  _objc_release(param_3);
  return;
}



/* Entry: 106484bfc; end: 106484e2f; -[SCContextV2CardsView showCardsContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106484bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127483b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cad78;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c085d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127483a4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032a60();
  lVar5 = (long)_DAT_1127483bc;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106484e30;
  puStack_78 = &UNK_110858d90;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_opt_class(PTR_PTR_1126cad80);
  func_0x00010c1275a0(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_opt_class(PTR_PTR_1126cad88);
  func_0x00010c1275a0(uVar1);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_1127483c0) = 1;
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106484e30; end: 106484fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106484e30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126cad80;
    _objc_alloc();
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010bf4ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112748394);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112748398);
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127483a0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff50a0(puVar6,param_2,0x1d,puVar2,uVar3,uVar4,uVar5,
                        *(undefined8 *)(param_1 + _DAT_1127483b0));
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126cad88;
      _objc_alloc(PTR_PTR_1126cad88);
      lVar7 = (long)_DAT_112748398;
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c244ac0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c244ae0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c244b40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0492a0(puVar6,param_2,uVar3,uVar4,uVar5,*(undefined8 *)(param_1 + _DAT_11274839c)
                          ,param_1,*(undefined8 *)(param_1 + _DAT_1127483a8));
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106484fa4; end: 10648508b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106484fa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cad88;
    _objc_alloc(PTR_PTR_1126cad88);
    lVar5 = (long)_DAT_112748398;
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c244ac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c244ae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c244b40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0492a0(puVar4,param_2,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + _DAT_11274839c),
                        param_1,*(undefined8 *)(param_1 + _DAT_1127483a8));
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10648508c; end: 1064850bb; -[SCContextV2CardsView cardsContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648508c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127483b8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064850bc; end: 10648530b; -[SCContextV2CardsView showErrorStateWithRetryBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064850bc(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cad90;
  _objc_opt_class(PTR_PTR_1126cad90);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cad90;
    _objc_alloc(PTR_PTR_1126cad90);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127483a4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032a60(puVar1);
    _objc_release(uVar4);
    func_0x00010c182b00(param_1);
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e50bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e50bb8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e50bd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e50bd8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126cad98;
  _objc_alloc(PTR_PTR_1126cad98);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar6);
  _objc_retain(param_3);
  func_0x00010c053740(puVar2);
  func_0x00010c2226c0(puVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127483b8);
  *(undefined8 *)(param_1 + _DAT_1127483b8) = 0;
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10648530c; end: 10648542b;  */

void FUN_10648530c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cad90;
    _objc_opt_class(PTR_PTR_1126cad90);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126cad98;
    _objc_alloc(PTR_PTR_1126cad98);
    func_0x00010c053740();
    func_0x00010c2226c0(uVar1);
    _objc_release(uVar1);
    _objc_release(puVar4);
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10648542c;
      puStack_40 = &UNK_110849530;
      _objc_retain(lVar6);
      lStack_38 = lVar6;
      func_0x0001000d76cc("APPSTORE",&puStack_58);
      _objc_release(lStack_38);
    }
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 10648542c; end: 106485437;  */

void FUN_10648542c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106485434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106485438; end: 106485567; -[SCContextV2CardsView setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106485438(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127483c4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (param_3 != lVar3) {
    _objc_retain(lVar3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    if (param_3 != 0) {
      func_0x00010befbb60(param_1,param_2,param_3);
    }
    func_0x00010bebc440(param_1);
    if (lVar3 == 0) {
      func_0x00010c12c960(0);
    }
    else {
      func_0x00010c1a7f60(param_3,param_2,1);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_106485568;
      puStack_48 = &UNK_110841f80;
      _objc_retain(lVar3);
      lStack_40 = lVar3;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010c27ac60(0x3fc3333333333333,puVar1,param_2,param_1,0x500002,&puStack_60,
                          &PTR___NSConcreteGlobalBlock_110924410);
      _objc_release(lStack_38);
      _objc_release(lStack_40);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106485568; end: 106485593;  */

void FUN_106485568(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 106485594; end: 106485597;  */

void FUN_106485594(void)

{
  return;
}



/* Entry: 106485598; end: 1064855f3; -[SCContextV2CardsView _sizeChanged] */

void FUN_106485598(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0e67a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0e67a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 1064855f4; end: 10648561f; -[SCContextV2CardsView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064855f4(long param_1)

{
  if (*(double *)(param_1 + _DAT_1127483b4) != 0.0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127483c4),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 106485620; end: 1064856b7; -[SCContextV2CardsView layoutSubviews] */

void FUN_106485620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1530;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 1064856b8; end: 10648572b; -[SCContextV2CardsView intrinsicContentSize] */

undefined1  [16]
FUN_1064856b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = 0x47efffffe0000000;
  func_0x00010c23d5a0(param_3,0x47efffffe0000000,param_4);
  _objc_release(puVar1);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 10648572c; end: 1064857b7; -[SCContextV2CardsView handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648572c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112748390);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd0140();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1064857b8; end: 106485873; -[SCContextV2CardsView didRenderValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064857b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c1415c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd5860();
  _objc_release(uVar2);
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    lVar3 = (long)_DAT_1127483c0;
    if (*(char *)(param_1 + lVar3) == '\x01') {
      lVar4 = (long)_DAT_1127483bc;
      func_0x00010c182b00(param_1);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + lVar3) = 0;
    }
    *(undefined8 *)(param_1 + _DAT_1127483b4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bebc450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sizeChanged_11258cab8);
    return;
  }
  return;
}



/* Entry: 106485874; end: 106485883; -[SCContextV2CardsView onSizeChangedBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106485874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127483c8);
}



/* Entry: 106485884; end: 10648588f; -[SCContextV2CardsView setOnSizeChangedBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106485884(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106485890; end: 10648589f; -[SCContextV2CardsView actionsHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106485890(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274838c);
}



/* Entry: 1064858a0; end: 1064858af; -[SCContextV2CardsView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064858a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127483c4);
}



/* Entry: 1064858b0; end: 1064859af; -[SCContextV2CardsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064858b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127483c4,0);
  _objc_storeStrong(param_1 + _DAT_11274838c,0);
  _objc_storeStrong(param_1 + _DAT_1127483c8,0);
  _objc_storeStrong(param_1 + _DAT_112748390,0);
  _objc_storeStrong(param_1 + _DAT_1127483b0,0);
  _objc_storeStrong(param_1 + _DAT_1127483ac,0);
  _objc_storeStrong(param_1 + _DAT_1127483a8,0);
  _objc_storeStrong(param_1 + _DAT_1127483a4,0);
  _objc_storeStrong(param_1 + _DAT_1127483a0,0);
  _objc_storeStrong(param_1 + _DAT_11274839c,0);
  _objc_storeStrong(param_1 + _DAT_112748398,0);
  _objc_storeStrong(param_1 + _DAT_112748394,0);
  _objc_storeStrong(param_1 + _DAT_1127483bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127483b8,0);
  return;
}



/* Entry: 1064859b0; end: 106485ae7;  */

void FUN_1064859b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(double *)(lVar4 + 0x18) = *(double *)(lVar4 + 0x18) + 15.0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  func_0x00010bf31da0(param_2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf31d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010bf980c0(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cada8;
  _objc_alloc(PTR_PTR_1126cada8);
  uVar2 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c052da0(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106485ae8; end: 106485b53;  */

void FUN_106485ae8(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  *(double *)(lVar2 + 0x18) = (double)param_1 + 10.0 + *(double *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR_PTR_1126cada0;
  _objc_alloc(PTR_PTR_1126cada0);
  func_0x00010c01a380((double)param_1);
  func_0x00010befa120(uVar3,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106485b54; end: 106485f8b; -[SCContextV2EmbeddedContextCardsProvider initWithBirthdayProvider:bitmojiAvatarProvider:imageDownloader:storiesFetcher:contextStoryPlaybackScopeExposer:cardsDataFetcher:composerRuntime:alertPresenterFactory:musicServices:musicFavoritesComposerServices:snapchatterServices:userSession:circumstanceEngine:placesContextCardContextCreator:ctpItemViewService:contextExperimentService:chatCameraScopeExposer:chatCameraScopeServices:chatScopeExposer:chatScopeServices:] */

undefined8 *
FUN_106485b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126f1538;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
  }
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



/* Entry: 106485f8c; end: 1064860bf; -[SCContextV2EmbeddedContextCardsProvider createEmbeddedContextCardsWithSessionParams:logger:viewControllerForModalPresentation:interopProvider:actionHandler:appStartExperimentReader:] */

void FUN_106485f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cadb8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0454a0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064860c0; end: 1064861c7; -[SCContextV2EmbeddedContextCardsProvider .cxx_destruct] */

void FUN_1064860c0(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064861c8; end: 1064862ff; -[SCContextV2SwipeUpGestureTracker setPresented:animated:source:completion:] */

void FUN_1064861c8(long param_1,undefined8 param_2,uint param_3,undefined1 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 == (lVar1 == 0)) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = (undefined1)param_3;
    uStack_4f = param_4;
    _objc_retain(param_6);
    func_0x00010be0a6c0(param_1);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106486300; end: 10648658f;  */

void FUN_106486300(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(char *)(param_1 + 0x30) == '\x01') && (*(char *)(param_1 + 0x31) == '\x01')) {
      lVar2 = lVar1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1e11e0(0);
      _objc_release(lVar2);
    }
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
    uVar5 = 0x3fc999999999999a;
    if (*(char *)(param_1 + 0x31) == '\0') {
      uVar5 = 0;
    }
    puVar4 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
    _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
    func_0x00010c008200(0x3feccccccccccccd,0,0x3fb999999999999a);
    func_0x00010c00eb20(uVar5,puVar3);
    _objc_release(puVar4);
    _objc_initWeak(auStack_58,puVar3);
    _objc_copyWeak(auStack_60,lVar1 + 0x10);
    _objc_initWeak(auStack_68,lVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106486590;
    puStack_90 = &UNK_1109244c0;
    uStack_70 = *(undefined1 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_88,auStack_60);
    _objc_copyWeak(auStack_80,auStack_58);
    _objc_copyWeak(auStack_78,auStack_68);
    func_0x00010bef6cc0(puVar3);
    _objc_copyWeak(auStack_c0,auStack_60);
    uStack_b0 = *(undefined1 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_b8,auStack_68);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010bef78c0(puVar3);
    func_0x00010c24dc40(puVar3);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106486590; end: 1064866f3;  */

void FUN_106486590(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar3 = 0xc2000000;
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    _objc_copyWeak(auStack_50,param_1 + 0x20);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1d1d00();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c064520(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_58);
  }
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e11e0(uVar3,lVar1);
  _objc_release(param_1);
  _objc_release(lVar1);
  return;
}



/* Entry: 1064866f4; end: 1064867b3;  */

void FUN_1064866f4(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010bef6cc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  return;
}


