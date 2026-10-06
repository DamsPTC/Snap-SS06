/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104da8374; end: 104da83ab; -[SCCommerceOrderHistoryViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104da8374(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010be341e0();
  lVar2 = *(long *)(param_1 + (long)_DAT_112712d74);
  func_0x00010bf529e0(lVar2);
  return lVar2 + (uVar1 & 0xffffffff);
}



/* Entry: 104da83ac; end: 104da84cb; -[SCCommerceOrderHistoryViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da83ac(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c142240();
  lVar7 = (long)_DAT_112712d74;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    lVar3 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0610;
    _objc_opt_class(PTR_PTR_1126b0610);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf6e080(lVar3,param_2,puVar4,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    uVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40(uVar6,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46fe0(lVar5,param_2,uVar6,*(undefined8 *)(param_1 + _DAT_112712d64));
    _objc_release(uVar6);
    param_1 = lVar5;
  }
  else {
    func_0x00010be4f020(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104da84cc; end: 104da8753; -[SCCommerceOrderHistoryViewController _loadingCell] */

void FUN_104da84cc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
  _objc_opt_class(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf6e060(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_opt_class(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ec80(puVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc(PTR_PTR_1126afd30);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffb60(puVar1,param_2,puVar3,1);
    _objc_release(puVar3);
    func_0x00010bf345e0(puVar2);
    func_0x00010c17a6a0(puVar1);
    puVar3 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x104da86cc;
    puStack_40 = &UNK_1108471b0;
    _objc_retain(puVar2);
    puStack_38 = puVar2;
    func_0x00010c0bbfc0(puVar1,param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c211780(puVar1,param_2,0x3e9);
    func_0x00010c211780(puVar2,param_2,0x7d2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puStack_38);
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  func_0x00010c29ea20(puVar2,param_2,0x3e9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104da8754; end: 104da8877; -[SCCommerceOrderHistoryViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da8754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112712d74);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0638;
  _objc_alloc(PTR_PTR_1126b0638);
  lVar3 = param_1 + _DAT_112712d54;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c05d3c0(puVar2,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_112712d5c),
                      *(undefined8 *)(param_1 + _DAT_112712d60),
                      *(undefined8 *)(param_1 + _DAT_112712d58),
                      *(undefined8 *)(param_1 + _DAT_112712d64),uVar4,
                      *(undefined8 *)(param_1 + _DAT_112712d6c));
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104da8878; end: 104da8883; -[SCCommerceOrderHistoryViewController tableView:heightForRowAtIndexPath:] */

void FUN_104da8878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0caaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0610,PTR_s_merchantHeight_1126104d0);
  return;
}



/* Entry: 104da8884; end: 104da88bf; -[SCCommerceOrderHistoryViewController tableView:willDisplayCell:forRowAtIndexPath:] */

void FUN_104da8884(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c268120();
  if (param_4 == 0x7d2) {
                    /* WARNING: Could not recover jumptable at 0x00010be12b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMorePages_112562468);
    return;
  }
  return;
}



/* Entry: 104da88c0; end: 104da88cf; -[SCCommerceOrderHistoryViewController getTitle] */

void FUN_104da88c0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db28f8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110db28f8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104da88d0; end: 104da89d7; -[SCCommerceOrderHistoryViewController _sortOrdersByDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da88d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_11084fcd8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112712d74);
    *(long *)(param_1 + _DAT_112712d74) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104da89d8; end: 104da89db; -[SCCommerceOrderHistoryViewController _fetchMorePages] */

void FUN_104da89d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be341f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hasMorePages_11256aa18);
  return;
}



/* Entry: 104da89dc; end: 104da89e3; -[SCCommerceOrderHistoryViewController _hasMorePages] */

undefined8 FUN_104da89dc(void)

{
  return 0;
}



/* Entry: 104da89e4; end: 104da8b73; -[SCCommerceOrderHistoryViewController _showBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da89e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_112712d78;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  lVar4 = (long)_DAT_112712d7c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104da8b74;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 104da8b74; end: 104da8bfb;  */

void FUN_104da8b74(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104da8bfc; end: 104da8c5b; -[SCCommerceOrderHistoryViewController _hideBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da8bfc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112712d7c;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
  lVar2 = (long)_DAT_112712d78;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da8c5c; end: 104da8c8b; -[SCCommerceOrderHistoryViewController displayId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da8c5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712d70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104da8c8c; end: 104da8cab; -[SCCommerceOrderHistoryViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da8c8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712d54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104da8cac; end: 104da8cbb; -[SCCommerceOrderHistoryViewController commerceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da8cac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712d5c);
}



/* Entry: 104da8cbc; end: 104da8d87; -[SCCommerceOrderHistoryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da8cbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712d5c,0);
  _objc_destroyWeak(param_1 + _DAT_112712d54);
  _objc_storeStrong(param_1 + _DAT_112712d6c,0);
  _objc_storeStrong(param_1 + _DAT_112712d64,0);
  _objc_storeStrong(param_1 + _DAT_112712d58,0);
  _objc_storeStrong(param_1 + _DAT_112712d60,0);
  _objc_storeStrong(param_1 + _DAT_112712d70,0);
  _objc_storeStrong(param_1 + _DAT_112712d7c,0);
  _objc_storeStrong(param_1 + _DAT_112712d78,0);
  _objc_storeStrong(param_1 + _DAT_112712d74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712d68,0);
  return;
}



/* Entry: 104da8d88; end: 104da917b; -[SCCommercePaymentSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da8d88(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b0640;
  _objc_alloc();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112712d90;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar25;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_104da917c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000104da91a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010beed500();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000104da91a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0f6880();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112712d8c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar26;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bee81c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112712d80;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar27;
  func_0x00010c0f69e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112712d94;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar28;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112712d9c;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar29;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112712d98;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar30;
  func_0x00010bf45480();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  FUN_104da917c();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112712d80;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf424a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d380(puVar1,param_2,lVar2,lVar4,lVar7,lVar10,lVar11,lVar12,lVar14,lVar15,lVar17,
                      lVar19,lVar21,lVar24);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar30);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar29);
  _objc_release(lVar15);
  _objc_release(lVar28);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar26);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar25);
  FUN_104da917c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar25);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104da917c; end: 104da91c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da917c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112712d84);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104da91c4; end: 104da923b; -[SCCommercePaymentSettingsEntryPoint _vendOrdersProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da91c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112712da0;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c0ecb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104da923c; end: 104da92c7; -[SCCommercePaymentSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da923c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712da0);
  _objc_destroyWeak(param_1 + _DAT_112712d9c);
  _objc_destroyWeak(param_1 + _DAT_112712d98);
  _objc_destroyWeak(param_1 + _DAT_112712d94);
  _objc_destroyWeak(param_1 + _DAT_112712d90);
  _objc_destroyWeak(param_1 + _DAT_112712d80);
  _objc_destroyWeak(param_1 + _DAT_112712d8c);
  _objc_destroyWeak(param_1 + _DAT_112712d88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712d84);
  return;
}



/* Entry: 104da92c8; end: 104da92fb; -[SCGenericPaymentsSettingsViewController viewWillAppear:] */

void FUN_104da92c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e42c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 104da92fc; end: 104da9303; -[SCGenericPaymentsSettingsViewController additionalXOffsetForRightButton] */

undefined8 FUN_104da92fc(void)

{
  return 0x402e000000000000;
}



/* Entry: 104da9304; end: 104da93e3; -[SCPaymentsAddItemTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104da9304(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e42c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0648;
    _objc_opt_new();
    lVar5 = (long)_DAT_112712da4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17a540(puVar1);
    func_0x00010c161260(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104da93e4; end: 104da94e7; -[SCPaymentsAddItemTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da93e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e42c8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112712da4;
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar2));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 104da94e8; end: 104da984b;  */

void FUN_104da94e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0bbf20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104da984c; end: 104da9853; -[SCPaymentsAddItemTableViewCell isCellSelected] */

undefined8 FUN_104da984c(void)

{
  return 0;
}



/* Entry: 104da9854; end: 104da98a7; -[SCPaymentsAddItemTableViewCell setHighlighted:animated:] */

void FUN_104da9854(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0xa8;
  if (param_3 == 0) {
    uVar1 = 0x29;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104da98a8; end: 104da9ae7; -[SCPaymentsAddItemTableViewCell setCellType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da98a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  
  *(long *)(param_1 + _DAT_112712da8) = param_3;
  if (param_3 == 0) {
    puVar5 = *(undefined **)(param_1 + _DAT_112712dac);
    func_0x00010bfe82e0(puVar5,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c26cfe0();
    puVar2 = PTR_PTR_1126ae6b8;
    if (lVar1 == 1) {
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c102040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar7);
      _objc_release(lVar1);
      ppuVar6 = &PTR____CFConstantStringClassReference_110db2938;
      puVar5 = puVar2;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110db2938;
    }
  }
  else {
    if (param_3 != 1) {
      puVar5 = (undefined *)0x0;
      ppuVar6 = (undefined **)0x0;
      goto LAB_104da9a98;
    }
    lVar1 = param_1;
    func_0x00010c26cfe0();
    if (lVar1 == 1) {
      func_0x00010be06000(param_1);
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(param_1 + _DAT_112712dac);
      func_0x00010bfe82e0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110db2918;
  }
  func_0x00010bcbeaa8(ppuVar6,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  if (puVar5 != (undefined *)0x0) {
    lVar7 = (long)_DAT_112712da4;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c29c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae790;
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a320(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa620(*(undefined8 *)(param_1 + lVar7));
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
LAB_104da9a98:
  lVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar1);
  func_0x00010c1cbe20(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 104da9ae8; end: 104da9bcb; -[SCPaymentsAddItemTableViewCell _downloadPlusIcon] */

void FUN_104da9ae8(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010bfe5980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    func_0x00010bfe5980(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bfe55a0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104da9bcc; end: 104da9c13;  */

void FUN_104da9bcc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104da9c14; end: 104da9c9b; -[SCPaymentsAddItemTableViewCell _plusIconDownloaded:] */

void FUN_104da9c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104da9c9c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104da9c9c; end: 104da9ca7;  */

void FUN_104da9c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadPlusIcon__1125712a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104da9ca8; end: 104da9cb7; -[SCPaymentsAddItemTableViewCell _loadPlusIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da9ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712da4),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 104da9cb8; end: 104da9cc7; -[SCPaymentsAddItemTableViewCell type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da9cb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712da8);
}



/* Entry: 104da9cc8; end: 104da9cd7; -[SCPaymentsAddItemTableViewCell imageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da9cc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712dac);
}



/* Entry: 104da9cd8; end: 104da9d17; -[SCPaymentsAddItemTableViewCell setImageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da9cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712dac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da9d18; end: 104da9d57; -[SCPaymentsAddItemTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da9d18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712dac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712da4,0);
  return;
}



/* Entry: 104da9d58; end: 104da9f0b; -[SCPaymentsCard initWithNumber:expirationMonth:expirationYear:cvv:billingAdress:] */

long FUN_104da9d58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  func_0x00010c030500(param_1,param_2,param_3,param_4,param_5,param_6);
  if (param_1 != 0) {
    uVar1 = param_7;
    func_0x00010bfb18a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d320(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c089720(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8360(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c25caa0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e6e0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c25cac0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1991a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010bf39960(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf480(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c252440(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e96a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c2befe0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df560(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010bf53220(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184980(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  return param_1;
}



/* Entry: 104da9f0c; end: 104daa157; -[SCPaymentsCard initWithLastFourDigits:expirationMonth:expirationYear:cvv:brandNetwork:brandName:billingAdress:] */

long FUN_104da9f0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_9;
  func_0x00010c2befe0(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0216e0(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  if (param_1 != 0) {
    uVar1 = param_9;
    func_0x00010bfb18a0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d320(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_9;
    func_0x00010c089720(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8360(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_9;
    func_0x00010c25caa0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e6e0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_9;
    func_0x00010c25cac0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1991a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_9;
    func_0x00010bf39960(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf480(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_9;
    func_0x00010c252440(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e96a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_9;
    func_0x00010c2befe0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df560(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_9;
    func_0x00010bf53220(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184980(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_9);
  return param_1;
}



/* Entry: 104daa158; end: 104daa447; -[SCPaymentsCardCreateUpdateViewController initWithCommerceLogger:paymentSettingsImageProvider:paymentCard:cardError:popToViewController:currentPageTracker:paymentInfoProvider:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104daa158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_1126e42d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112712db0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712db4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712db8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712dbc);
    *(undefined **)((long)puVar1 + (long)_DAT_112712dbc) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712dc0);
    *(undefined **)((long)puVar1 + (long)_DAT_112712dc0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712dc4);
    *(undefined **)((long)puVar1 + (long)_DAT_112712dc4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712dc8);
    *(undefined **)((long)puVar1 + (long)_DAT_112712dc8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712dcc);
    *(undefined **)((long)puVar1 + (long)_DAT_112712dcc) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712dd0);
    *(undefined **)((long)puVar1 + (long)_DAT_112712dd0) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712dd4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712dd8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712ddc);
    *(undefined **)((long)puVar1 + (long)_DAT_112712ddc) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712de0,param_9);
    lVar4 = (long)_DAT_112712de4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712de8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
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



/* Entry: 104daa448; end: 104daa567; -[SCPaymentsCardCreateUpdateViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa448(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  func_0x00010be3a100(param_1);
  func_0x00010be39700(param_1);
  func_0x00010be396e0(param_1);
  func_0x00010beac800(param_1);
  func_0x00010be395a0(param_1);
  func_0x00010bdc5e60(param_1);
  func_0x00010be39580(param_1);
  func_0x00010be39a20(param_1);
  func_0x00010be3a3a0(param_1);
  func_0x00010be3a280(param_1);
  func_0x00010beb9000(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_112712dec;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  return;
}



/* Entry: 104daa568; end: 104daa5b7; -[SCPaymentsCardCreateUpdateViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa568(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  *(undefined8 *)(param_1 + _DAT_112712df0) = 0xc1;
  return;
}



/* Entry: 104daa5b8; end: 104daa61f; -[SCPaymentsCardCreateUpdateViewController leftSwipeSucceed] */

void FUN_104daa5b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftSwipeSucceed_112601480);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5660();
  _objc_release(param_1);
  return;
}



/* Entry: 104daa620; end: 104daa727; -[SCPaymentsCardCreateUpdateViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa620(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  lVar1 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5680();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  func_0x00010be89520(param_1);
  return;
}



/* Entry: 104daa728; end: 104daa7cf; -[SCPaymentsCardCreateUpdateViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bea3f80();
  puStack_28 = PTR_PTR_1126e42d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712db4);
  func_0x00010c24fc40();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712df4);
  *(undefined8 *)(param_1 + _DAT_112712df4) = uVar1;
  _objc_release(uVar2);
  func_0x00010c0abc20(*(undefined8 *)(param_1 + _DAT_112712db0));
  return;
}



/* Entry: 104daa7d0; end: 104daa82b; -[SCPaymentsCardCreateUpdateViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa7d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c0abb20(*(undefined8 *)(param_1 + _DAT_112712db0));
  return;
}



/* Entry: 104daa82c; end: 104daa91f; -[SCPaymentsCardCreateUpdateViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa82c(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112712df8));
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112712dfc));
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112712e00));
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112712e04));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  func_0x00010be8c600(param_1);
  return;
}



/* Entry: 104daa920; end: 104daa927; -[SCPaymentsCardCreateUpdateViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_104daa920(void)

{
  return 0;
}



/* Entry: 104daa928; end: 104daa983; -[SCPaymentsCardCreateUpdateViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa928(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112712e08;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined ***)(param_1 + lVar3) = ppuVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104daa984; end: 104daa987; -[SCPaymentsCardCreateUpdateViewController rightButtonPressed] */

void FUN_104daa984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapSaveButton_11255de28);
  return;
}



/* Entry: 104daa988; end: 104daa9ef; -[SCPaymentsCardCreateUpdateViewController leftButtonPressed] */

void FUN_104daa988(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftButtonPressed_112601348);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5660();
  _objc_release(param_1);
  return;
}



/* Entry: 104daa9f0; end: 104daab03; -[SCPaymentsCardCreateUpdateViewController _initParentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daa9f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_112712e0c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104daab04;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  lVar4 = (long)_DAT_112712e10;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar3;
  _objc_release(uVar2);
  return;
}



/* Entry: 104daab04; end: 104daabdb;  */

void FUN_104daab04(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104daabdc; end: 104daaca3; -[SCPaymentsCardCreateUpdateViewController _initCardErrorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daabdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112712e14;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010beac620(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112712e10),param_2,
                      *(undefined8 *)(param_1 + lVar3));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104daaca4;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104daaca4; end: 104daae57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daaca4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112712e10;
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c0bc080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712dfc);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104daae58; end: 104daaf1f; -[SCPaymentsCardCreateUpdateViewController _initBillingAddressErrorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daae58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112712e18;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010beac620(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112712e10),param_2,
                      *(undefined8 *)(param_1 + lVar3));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104daaf20;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104daaf20; end: 104dab0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daaf20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112712e10;
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c0bc080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712e1c);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dab0d4; end: 104dab17b; -[SCPaymentsCardCreateUpdateViewController _setupErrorLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dab0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c1248c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c19e480(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112712dc0));
  func_0x00010c1cfce0(param_3,param_2,0);
  func_0x00010c1bdb00(param_3,param_2,0);
  func_0x00010c213040(param_3,param_2,1);
  func_0x00010c1a7f60(param_3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dab17c; end: 104dab63f; -[SCPaymentsCardCreateUpdateViewController _initCardFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dab17c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0650;
  _objc_alloc();
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar10 = (long)_DAT_112712df8;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR_PTR_1126b0658;
  _objc_alloc();
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar12 = (long)_DAT_112712dfc;
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar8);
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar13 = (long)_DAT_112712e00;
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar8);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar13));
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2a18;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2a18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c213360(*(undefined8 *)(param_1 + lVar12));
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2a38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2a38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2a58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2a58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c213360(*(undefined8 *)(param_1 + lVar10));
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  lVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2a18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(uVar8);
  _objc_release(ppuVar3);
  func_0x00010c1f9a00(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1f9a00(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c200e80(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c200e80(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112712e10;
  func_0x00010bdc6c60(param_1);
  _objc_release(puVar1);
  lVar9 = *(long *)(param_1 + _DAT_112712e20);
  _objc_retain(lVar9);
  lVar4 = lVar9;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar9);
      }
      uVar8 = *(undefined8 *)(lVar11 * 8);
      func_0x00010befbd60(uVar8);
      func_0x00010befbd60(uVar8);
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar14));
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  func_0x00010be39da0(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar12));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + lVar13);
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112712e10;
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + lVar9);
  func_0x00010c0bc080(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104dab640; end: 104dabbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dab640(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112712e10;
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c0bc080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dabbec; end: 104dabd77; -[SCPaymentsCardCreateUpdateViewController _initIconsForCardNumberField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dabbec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b0648;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_112712e24;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_112712e28;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112712e10),param_2,
                      *(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104dabd78;
  puStack_70 = &UNK_1108471b0;
  lStack_68 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104dac000;
  puStack_98 = &UNK_1108471b0;
  lStack_90 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104dabd78; end: 104dabfff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dabd78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112712e28;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bbf20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dac000; end: 104dac00b;  */

void FUN_104dac000(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcdcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyCardNumberIconConstraints__1125510d0,
             param_2);
  return;
}



/* Entry: 104dac00c; end: 104dac0b3; -[SCPaymentsCardCreateUpdateViewController _applyCardNumberIconConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dac00c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dac0b4; end: 104dac25f; -[SCPaymentsCardCreateUpdateViewController _addFields:toView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dac0b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar12 = (long)_DAT_112712e20;
  lVar1 = *(long *)(param_1 + lVar12);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar2;
    _objc_release(uVar10);
    lVar1 = *(long *)(param_1 + lVar12);
  }
  func_0x00010befa160(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar17 * 8);
        func_0x00010befbd60(uVar10);
        func_0x00010befbd60(uVar10);
        func_0x00010befbb60(param_4);
        func_0x00010bdc8c80(param_1);
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = param_3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIToolbar_1126b0668;
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_alloc();
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0(0,0);
  _objc_release(param_3);
  func_0x00010c16f1c0(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_1126b0670;
  _objc_alloc();
  func_0x00010c053480();
  puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_1126b0670;
  _objc_alloc();
  func_0x00010bff6a60();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6420(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1ad180(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112712e20;
  lVar17 = *(long *)(puVar2 + lVar15);
  _objc_retain(lVar17);
  lVar1 = lVar17;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar17);
      }
      uVar13 = *(ulong *)(lVar19 * 8);
      uVar6 = uVar13;
      func_0x00010c065660();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIToolbar_1126b0668;
      _objc_opt_class(PTR__OBJC_CLASS___UIToolbar_1126b0668);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar3);
      _objc_release(uVar6);
      if ((uVar7 & 1) != 0) {
        uVar6 = uVar13;
        func_0x00010c065660();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b0678;
        _objc_alloc();
        func_0x00010c050900();
        func_0x00010c1a97a0();
        func_0x00010c103dc0(puVar3);
        func_0x00010c268120(uVar13);
        func_0x00010c211780(puVar3);
        uVar7 = *(ulong *)(puVar2 + lVar15);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar13 == uVar7) {
          func_0x00010c195460(puVar3);
        }
        puVar4 = PTR_PTR_1126b0678;
        _objc_alloc(PTR_PTR_1126b0678);
        func_0x00010c050900();
        func_0x00010c1a97a0();
        func_0x00010c103dc0(puVar4);
        func_0x00010c268120(uVar13);
        func_0x00010c211780(puVar4);
        uVar7 = *(ulong *)(puVar2 + lVar15);
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar13 == uVar7) {
          func_0x00010c195460(puVar4);
        }
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        uVar7 = uVar6;
        func_0x00010c084fc0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4000();
        _objc_release(uVar7);
        func_0x00010c066b00(puVar5);
        func_0x00010c066b00(puVar5);
        func_0x00010c1b6420(uVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(uVar6);
      }
      lVar19 = lVar19 + 1;
    } while (lVar1 != lVar19);
    lVar1 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar21 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar1 = (long)_DAT_112712e1c;
  uVar10 = *(undefined8 *)(lVar17 + lVar1);
  *(undefined **)(lVar17 + lVar1) = puVar2;
  _objc_release(uVar10);
  func_0x00010befbb60(*(undefined8 *)(lVar17 + _DAT_112712e10));
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar1));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0618;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0878a0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c165e20(puVar2);
  func_0x00010c1c83a0(0x3fd999999999999a,puVar2);
  func_0x00010befbb60(*(undefined8 *)(lVar17 + lVar1));
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar18 = (long)_DAT_112712e2c;
  uVar10 = *(undefined8 *)(lVar17 + lVar18);
  *(undefined **)(lVar17 + lVar18) = puVar3;
  _objc_release(uVar10);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar17 + lVar18));
  func_0x00010c16d0a0(*(undefined8 *)(lVar17 + lVar18));
  func_0x00010c211780(*(undefined8 *)(lVar17 + lVar18));
  puVar3 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar20 = (long)_DAT_112712e30;
  uVar10 = *(undefined8 *)(lVar17 + lVar20);
  *(undefined **)(lVar17 + lVar20) = puVar3;
  _objc_release(uVar10);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar17 + lVar20));
  func_0x00010c16d0a0(*(undefined8 *)(lVar17 + lVar20));
  func_0x00010c211780(*(undefined8 *)(lVar17 + lVar20));
  puVar3 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar15 = (long)_DAT_112712e34;
  uVar10 = *(undefined8 *)(lVar17 + lVar15);
  *(undefined **)(lVar17 + lVar15) = puVar3;
  _objc_release(uVar10);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar17 + lVar15));
  func_0x00010c16d0a0(*(undefined8 *)(lVar17 + lVar15));
  func_0x00010c211780(*(undefined8 *)(lVar17 + lVar15));
  puVar3 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar19 = (long)_DAT_112712e38;
  uVar10 = *(undefined8 *)(lVar17 + lVar19);
  *(undefined **)(lVar17 + lVar19) = puVar3;
  _objc_release(uVar10);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar17 + lVar19));
  func_0x00010c16d0a0(*(undefined8 *)(lVar17 + lVar19));
  func_0x00010c211780(*(undefined8 *)(lVar17 + lVar19));
  func_0x00010c195580(*(undefined8 *)(lVar17 + lVar19));
  puVar3 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar16 = (long)_DAT_112712e3c;
  uVar10 = *(undefined8 *)(lVar17 + lVar16);
  *(undefined **)(lVar17 + lVar16) = puVar3;
  _objc_release(uVar10);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar17 + lVar16));
  func_0x00010c16d0a0(*(undefined8 *)(lVar17 + lVar16));
  func_0x00010c211780(*(undefined8 *)(lVar17 + lVar16));
  puVar3 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar11 = (long)_DAT_112712e40;
  uVar10 = *(undefined8 *)(lVar17 + lVar11);
  *(undefined **)(lVar17 + lVar11) = puVar3;
  _objc_release(uVar10);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar17 + lVar11));
  func_0x00010c16d0a0(*(undefined8 *)(lVar17 + lVar11));
  func_0x00010c211780(*(undefined8 *)(lVar17 + lVar11));
  puVar3 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar14 = (long)_DAT_112712e04;
  uVar10 = *(undefined8 *)(lVar17 + lVar14);
  *(undefined **)(lVar17 + lVar14) = puVar3;
  _objc_release(uVar10);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar17 + lVar14));
  func_0x00010c211780(*(undefined8 *)(lVar17 + lVar14));
  func_0x00010c213240(*(undefined8 *)(lVar17 + lVar18));
  func_0x00010c213240(*(undefined8 *)(lVar17 + lVar20));
  func_0x00010c213240(*(undefined8 *)(lVar17 + lVar15));
  func_0x00010c213240(*(undefined8 *)(lVar17 + lVar19));
  func_0x00010c213240(*(undefined8 *)(lVar17 + lVar16));
  func_0x00010c213240(*(undefined8 *)(lVar17 + lVar11));
  func_0x00010c213240(*(undefined8 *)(lVar17 + lVar14));
  func_0x00010c160fc0(*(undefined8 *)(lVar17 + lVar18));
  func_0x00010c160fc0(*(undefined8 *)(lVar17 + lVar20));
  func_0x00010c160fc0(*(undefined8 *)(lVar17 + lVar15));
  func_0x00010c160fc0(*(undefined8 *)(lVar17 + lVar19));
  func_0x00010c160fc0(*(undefined8 *)(lVar17 + lVar16));
  func_0x00010c160fc0(*(undefined8 *)(lVar17 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(lVar17 + lVar14));
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2b78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar17);
  _objc_release(ppuVar8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2b98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar17);
  _objc_release(ppuVar8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar17);
  _objc_release(ppuVar8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2bd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar17);
  _objc_release(ppuVar8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2bf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar17);
  _objc_release(ppuVar8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2c18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar17);
  _objc_release(ppuVar8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2c38;
  lVar1 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar17);
  _objc_release(ppuVar8);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar17 + _DAT_112712e44);
  *(undefined **)(lVar17 + _DAT_112712e44) = puVar3;
  _objc_release(uVar10);
  func_0x00010bdc6c60(lVar17);
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar15));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar19));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar16));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar14));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beaae40(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  lVar12 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar12;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar17 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar17);
  _objc_release(lVar12);
  lVar12 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar12;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + (long)_DAT_112712e14);
  func_0x00010c0bbea0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar17 + 0x10))(lVar17,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(lVar17);
  _objc_release(lVar12);
  lVar12 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar12;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar17 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar17);
  _objc_release(lVar12);
  lVar12 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar12;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 104dac260; end: 104dac3d3; -[SCPaymentsCardCreateUpdateViewController _addToolbarToTextField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dac260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar1 = PTR__OBJC_CLASS___UIToolbar_1126b0668;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0(0,0);
  _objc_release(param_1);
  func_0x00010c16f1c0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_1126b0670;
  _objc_alloc();
  func_0x00010c053480();
  puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_1126b0670;
  _objc_alloc();
  func_0x00010bff6a60();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6420(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1ad180(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112712e20;
  lVar12 = *(long *)(puVar1 + lVar15);
  _objc_retain(lVar12);
  lVar8 = lVar12;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar12);
      }
      uVar13 = *(ulong *)(lVar18 * 8);
      uVar5 = uVar13;
      func_0x00010c065660();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIToolbar_1126b0668;
      _objc_opt_class(PTR__OBJC_CLASS___UIToolbar_1126b0668);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      _objc_release(uVar5);
      if ((uVar6 & 1) != 0) {
        uVar5 = uVar13;
        func_0x00010c065660();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b0678;
        _objc_alloc();
        func_0x00010c050900();
        func_0x00010c1a97a0();
        func_0x00010c103dc0(puVar2);
        func_0x00010c268120(uVar13);
        func_0x00010c211780(puVar2);
        uVar6 = *(ulong *)(puVar1 + lVar15);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar13 == uVar6) {
          func_0x00010c195460(puVar2);
        }
        puVar3 = PTR_PTR_1126b0678;
        _objc_alloc(PTR_PTR_1126b0678);
        func_0x00010c050900();
        func_0x00010c1a97a0();
        func_0x00010c103dc0(puVar3);
        func_0x00010c268120(uVar13);
        func_0x00010c211780(puVar3);
        uVar6 = *(ulong *)(puVar1 + lVar15);
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar13 == uVar6) {
          func_0x00010c195460(puVar3);
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        uVar6 = uVar5;
        func_0x00010c084fc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4000();
        _objc_release(uVar6);
        func_0x00010c066b00(puVar4);
        func_0x00010c066b00(puVar4);
        func_0x00010c1b6420(uVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(uVar5);
      }
      lVar18 = lVar18 + 1;
    } while (lVar8 != lVar18);
    lVar8 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar8 = (long)_DAT_112712e1c;
  uVar11 = *(undefined8 *)(lVar12 + lVar8);
  *(undefined **)(lVar12 + lVar8) = puVar1;
  _objc_release(uVar11);
  func_0x00010befbb60(*(undefined8 *)(lVar12 + _DAT_112712e10));
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0618;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0878a0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c165e20(puVar1);
  func_0x00010c1c83a0(0x3fd999999999999a,puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar12 + lVar8));
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar17 = (long)_DAT_112712e2c;
  uVar11 = *(undefined8 *)(lVar12 + lVar17);
  *(undefined **)(lVar12 + lVar17) = puVar2;
  _objc_release(uVar11);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar12 + lVar17));
  func_0x00010c16d0a0(*(undefined8 *)(lVar12 + lVar17));
  func_0x00010c211780(*(undefined8 *)(lVar12 + lVar17));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar19 = (long)_DAT_112712e30;
  uVar11 = *(undefined8 *)(lVar12 + lVar19);
  *(undefined **)(lVar12 + lVar19) = puVar2;
  _objc_release(uVar11);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar12 + lVar19));
  func_0x00010c16d0a0(*(undefined8 *)(lVar12 + lVar19));
  func_0x00010c211780(*(undefined8 *)(lVar12 + lVar19));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar15 = (long)_DAT_112712e34;
  uVar11 = *(undefined8 *)(lVar12 + lVar15);
  *(undefined **)(lVar12 + lVar15) = puVar2;
  _objc_release(uVar11);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar12 + lVar15));
  func_0x00010c16d0a0(*(undefined8 *)(lVar12 + lVar15));
  func_0x00010c211780(*(undefined8 *)(lVar12 + lVar15));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar18 = (long)_DAT_112712e38;
  uVar11 = *(undefined8 *)(lVar12 + lVar18);
  *(undefined **)(lVar12 + lVar18) = puVar2;
  _objc_release(uVar11);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar12 + lVar18));
  func_0x00010c16d0a0(*(undefined8 *)(lVar12 + lVar18));
  func_0x00010c211780(*(undefined8 *)(lVar12 + lVar18));
  func_0x00010c195580(*(undefined8 *)(lVar12 + lVar18));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar16 = (long)_DAT_112712e3c;
  uVar11 = *(undefined8 *)(lVar12 + lVar16);
  *(undefined **)(lVar12 + lVar16) = puVar2;
  _objc_release(uVar11);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar12 + lVar16));
  func_0x00010c16d0a0(*(undefined8 *)(lVar12 + lVar16));
  func_0x00010c211780(*(undefined8 *)(lVar12 + lVar16));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar9 = (long)_DAT_112712e40;
  uVar11 = *(undefined8 *)(lVar12 + lVar9);
  *(undefined **)(lVar12 + lVar9) = puVar2;
  _objc_release(uVar11);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar12 + lVar9));
  func_0x00010c16d0a0(*(undefined8 *)(lVar12 + lVar9));
  func_0x00010c211780(*(undefined8 *)(lVar12 + lVar9));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar14 = (long)_DAT_112712e04;
  uVar11 = *(undefined8 *)(lVar12 + lVar14);
  *(undefined **)(lVar12 + lVar14) = puVar2;
  _objc_release(uVar11);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar12 + lVar14));
  func_0x00010c211780(*(undefined8 *)(lVar12 + lVar14));
  func_0x00010c213240(*(undefined8 *)(lVar12 + lVar17));
  func_0x00010c213240(*(undefined8 *)(lVar12 + lVar19));
  func_0x00010c213240(*(undefined8 *)(lVar12 + lVar15));
  func_0x00010c213240(*(undefined8 *)(lVar12 + lVar18));
  func_0x00010c213240(*(undefined8 *)(lVar12 + lVar16));
  func_0x00010c213240(*(undefined8 *)(lVar12 + lVar9));
  func_0x00010c213240(*(undefined8 *)(lVar12 + lVar14));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar17));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar19));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar15));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar18));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar16));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar9));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar14));
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2b78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar12);
  _objc_release(ppuVar7);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2b98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar12);
  _objc_release(ppuVar7);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar12);
  _objc_release(ppuVar7);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2bd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar12);
  _objc_release(ppuVar7);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2bf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar12);
  _objc_release(ppuVar7);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2c18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar12);
  _objc_release(ppuVar7);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2c38;
  lVar8 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar12);
  _objc_release(ppuVar7);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar12 + _DAT_112712e44);
  *(undefined **)(lVar12 + _DAT_112712e44) = puVar2;
  _objc_release(uVar11);
  func_0x00010bdc6c60(lVar12);
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar17));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar19));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar15));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar16));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar9));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar12 + lVar14));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beaae40(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  lVar10 = lVar8;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar12 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar10);
  lVar10 = lVar8;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_112712e14);
  func_0x00010c0bbea0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar12 + 0x10))(lVar12,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar12);
  _objc_release(lVar10);
  lVar10 = lVar8;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar12 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar10);
  lVar10 = lVar8;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar10;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 104dac3d4; end: 104dac6c3; -[SCPaymentsCardCreateUpdateViewController _addArrowsToFieldToolbars] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dac3d4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112712e20;
  lVar10 = *(long *)(param_1 + lVar14);
  _objc_retain(lVar10);
  lVar11 = lVar10;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar10);
      }
      uVar12 = *(ulong *)(lVar17 * 8);
      uVar1 = uVar12;
      func_0x00010c065660();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIToolbar_1126b0668;
      _objc_opt_class(PTR__OBJC_CLASS___UIToolbar_1126b0668);
      uVar3 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        uVar1 = uVar12;
        func_0x00010c065660();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b0678;
        _objc_alloc();
        func_0x00010c050900();
        func_0x00010c1a97a0();
        func_0x00010c103dc0(puVar2);
        func_0x00010c268120(uVar12);
        func_0x00010c211780(puVar2);
        uVar3 = *(ulong *)(param_1 + lVar14);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar12 == uVar3) {
          func_0x00010c195460(puVar2);
        }
        puVar4 = PTR_PTR_1126b0678;
        _objc_alloc(PTR_PTR_1126b0678);
        func_0x00010c050900();
        func_0x00010c1a97a0();
        func_0x00010c103dc0(puVar4);
        func_0x00010c268120(uVar12);
        func_0x00010c211780(puVar4);
        uVar3 = *(ulong *)(param_1 + lVar14);
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar12 == uVar3) {
          func_0x00010c195460(puVar4);
        }
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        uVar3 = uVar1;
        func_0x00010c084fc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4000();
        _objc_release(uVar3);
        func_0x00010c066b00(puVar5);
        func_0x00010c066b00(puVar5);
        func_0x00010c1b6420(uVar1);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(uVar1);
      }
      lVar17 = lVar17 + 1;
    } while (lVar11 != lVar17);
    lVar11 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar11 = (long)_DAT_112712e1c;
  uVar9 = *(undefined8 *)(lVar10 + lVar11);
  *(undefined **)(lVar10 + lVar11) = puVar2;
  _objc_release(uVar9);
  func_0x00010befbb60(*(undefined8 *)(lVar10 + _DAT_112712e10));
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0618;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0878a0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c165e20(puVar2);
  func_0x00010c1c83a0(0x3fd999999999999a,puVar2);
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar11));
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar16 = (long)_DAT_112712e2c;
  uVar9 = *(undefined8 *)(lVar10 + lVar16);
  *(undefined **)(lVar10 + lVar16) = puVar4;
  _objc_release(uVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar16));
  func_0x00010c16d0a0(*(undefined8 *)(lVar10 + lVar16));
  func_0x00010c211780(*(undefined8 *)(lVar10 + lVar16));
  puVar4 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar18 = (long)_DAT_112712e30;
  uVar9 = *(undefined8 *)(lVar10 + lVar18);
  *(undefined **)(lVar10 + lVar18) = puVar4;
  _objc_release(uVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar18));
  func_0x00010c16d0a0(*(undefined8 *)(lVar10 + lVar18));
  func_0x00010c211780(*(undefined8 *)(lVar10 + lVar18));
  puVar4 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar14 = (long)_DAT_112712e34;
  uVar9 = *(undefined8 *)(lVar10 + lVar14);
  *(undefined **)(lVar10 + lVar14) = puVar4;
  _objc_release(uVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar14));
  func_0x00010c16d0a0(*(undefined8 *)(lVar10 + lVar14));
  func_0x00010c211780(*(undefined8 *)(lVar10 + lVar14));
  puVar4 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar17 = (long)_DAT_112712e38;
  uVar9 = *(undefined8 *)(lVar10 + lVar17);
  *(undefined **)(lVar10 + lVar17) = puVar4;
  _objc_release(uVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar17));
  func_0x00010c16d0a0(*(undefined8 *)(lVar10 + lVar17));
  func_0x00010c211780(*(undefined8 *)(lVar10 + lVar17));
  func_0x00010c195580(*(undefined8 *)(lVar10 + lVar17));
  puVar4 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar15 = (long)_DAT_112712e3c;
  uVar9 = *(undefined8 *)(lVar10 + lVar15);
  *(undefined **)(lVar10 + lVar15) = puVar4;
  _objc_release(uVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar15));
  func_0x00010c16d0a0(*(undefined8 *)(lVar10 + lVar15));
  func_0x00010c211780(*(undefined8 *)(lVar10 + lVar15));
  puVar4 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar7 = (long)_DAT_112712e40;
  uVar9 = *(undefined8 *)(lVar10 + lVar7);
  *(undefined **)(lVar10 + lVar7) = puVar4;
  _objc_release(uVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar7));
  func_0x00010c16d0a0(*(undefined8 *)(lVar10 + lVar7));
  func_0x00010c211780(*(undefined8 *)(lVar10 + lVar7));
  puVar4 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar13 = (long)_DAT_112712e04;
  uVar9 = *(undefined8 *)(lVar10 + lVar13);
  *(undefined **)(lVar10 + lVar13) = puVar4;
  _objc_release(uVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar13));
  func_0x00010c211780(*(undefined8 *)(lVar10 + lVar13));
  func_0x00010c213240(*(undefined8 *)(lVar10 + lVar16));
  func_0x00010c213240(*(undefined8 *)(lVar10 + lVar18));
  func_0x00010c213240(*(undefined8 *)(lVar10 + lVar14));
  func_0x00010c213240(*(undefined8 *)(lVar10 + lVar17));
  func_0x00010c213240(*(undefined8 *)(lVar10 + lVar15));
  func_0x00010c213240(*(undefined8 *)(lVar10 + lVar7));
  func_0x00010c213240(*(undefined8 *)(lVar10 + lVar13));
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar16));
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar18));
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar14));
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar17));
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar15));
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar7));
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar13));
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2b78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar10);
  _objc_release(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2b98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar10);
  _objc_release(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar10);
  _objc_release(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2bd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar10);
  _objc_release(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2bf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar10);
  _objc_release(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2c18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar10);
  _objc_release(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2c38;
  lVar11 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(lVar10);
  _objc_release(ppuVar6);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar10 + _DAT_112712e44);
  *(undefined **)(lVar10 + _DAT_112712e44) = puVar4;
  _objc_release(uVar9);
  func_0x00010bdc6c60(lVar10);
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar16));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar14));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar17));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar15));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar7));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar13));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beaae40(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar11);
  lVar8 = lVar11;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar8);
  lVar8 = lVar11;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + (long)_DAT_112712e14);
  func_0x00010c0bbea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(lVar10,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar10);
  _objc_release(lVar8);
  lVar8 = lVar11;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar8);
  lVar8 = lVar11;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 104dac6c4; end: 104dacf57; -[SCPaymentsCardCreateUpdateViewController _initBillingAddressFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dac6c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar8 = (long)_DAT_112712e1c;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar5);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112712e10));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0618;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0878a0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c165e20(puVar1);
  func_0x00010c1c83a0(0x3fd999999999999a,puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar12 = (long)_DAT_112712e2c;
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar12));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar13 = (long)_DAT_112712e30;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar13));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar7 = (long)_DAT_112712e34;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar9 = (long)_DAT_112712e38;
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c195580(*(undefined8 *)(param_1 + lVar9));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar11 = (long)_DAT_112712e3c;
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar11));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar6 = (long)_DAT_112712e40;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar10 = (long)_DAT_112712e04;
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2b78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2b98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2b98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2bd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2bf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2bf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2c18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2c38;
  lVar8 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb06a0(param_1);
  _objc_release(ppuVar3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112712e44);
  *(undefined **)(param_1 + _DAT_112712e44) = puVar2;
  _objc_release(uVar5);
  func_0x00010bdc6c60(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar12));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar13));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar7));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar9));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beaae40(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = lVar8;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_112712e14);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = lVar8;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = lVar8;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104dacf58; end: 104dad0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dacf58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712e14);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dad0f8; end: 104dad6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dad0f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112712e1c;
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bc020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x403c800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dad6c4; end: 104dadfd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dad6c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712e2c);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dadfd8; end: 104dae233; -[SCPaymentsCardCreateUpdateViewController _setupBillingAddressToggleAndSectionLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dadfd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c22c980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c082e00();
  _objc_release(lVar1);
  if ((int)lVar5 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db2c98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2c98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_3);
    _objc_release(ppuVar3);
    lVar1 = param_1;
    func_0x00010be41140();
    if ((int)lVar1 != 0) {
      func_0x00010beaae60(param_1);
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db2c58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2c58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_3);
    _objc_release(ppuVar3);
    puVar2 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112712e48;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR_PTR_1126b0688;
    func_0x00010c26d020(PTR_PTR_1126b0688);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(uVar4);
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112712e1c));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(param_3);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c0bc060(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be41140();
    if ((int)lVar1 == 0) {
      func_0x00010c1d1360(*(undefined8 *)(param_1 + lVar5));
      func_0x00010beaae80(param_1);
    }
    else {
      func_0x00010c1d1360(*(undefined8 *)(param_1 + lVar5));
      func_0x00010beaae60(param_1);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dae234; end: 104dae43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dae234(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112712e1c);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02a000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dae43c; end: 104dae78f; -[SCPaymentsCardCreateUpdateViewController _initDeleteCardButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dae43c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = param_1;
  func_0x00010be41140();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c082e00();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_112712e50;
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar3;
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      ppuVar4 = &PTR____CFConstantStringClassReference_110db2cb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cb8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar7);
      _objc_release(ppuVar4);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar7);
      _objc_release(puVar3);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c271420(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c271420(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(uVar7);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8));
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(uVar7);
      _objc_release(puVar3);
      func_0x00010befbb60(*(undefined8 *)(param_1 + (long)_DAT_112712e10));
      func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar8));
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010c013de0(uVar7,uVar9,uVar10,uVar11);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar3);
      _objc_release(puVar5);
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c013de0(uVar7,uVar9,uVar10,uVar11);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar5);
      _objc_release(puVar6);
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
      func_0x00010c0bbfc0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c0bbfc0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010befbd60(*(undefined8 *)(param_1 + lVar8));
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 104dae790; end: 104dae93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dae790(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712e18);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dae93c; end: 104daeb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dae93c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104daeb5c; end: 104daec5b; -[SCPaymentsCardCreateUpdateViewController _initSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daeb5c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b0620;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar2);
  puVar3 = puVar2;
  func_0x00010c271420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fd999999999999a);
  _objc_release(puVar3);
  func_0x00010befbd60(puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112712e54);
  *(undefined **)(param_1 + _DAT_112712e54) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar4);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104daec5c; end: 104daede3; -[SCPaymentsCardCreateUpdateViewController _setupTextField:withPlaceHolder:border:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daec5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c480(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19dea0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c480(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19de60(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c19dec0(0x4010000000000000,param_3);
  if (param_4 != 0) {
    func_0x00010c1dc9c0(param_3,param_2,param_4);
  }
  func_0x00010c193400(0,0x4028000000000000,0,0,param_3);
  func_0x00010c16e440(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112712dcc));
  func_0x00010c213180(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112712dc8));
  if (param_5 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(uVar2);
  }
  func_0x00010c18b5e0(param_3,param_2,param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104daede4; end: 104daf2eb; -[SCPaymentsCardCreateUpdateViewController _setupExistingPaymentInfoIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daede4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  uVar1 = param_1;
  func_0x00010be41140();
  if ((int)uVar1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bf8c6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf20fc0();
  func_0x000104dced3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0c27a0();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf8c6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c088be0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  _objc_release(uVar10);
  if (uVar1 != uVar14) {
    uVar10 = 0;
    do {
      func_0x00010bf070e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110db2d38);
      uVar10 = uVar10 + 1;
      uVar4 = param_1;
      func_0x00010bf8c6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar4;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar14;
      func_0x00010c08fa60();
      _objc_release(uVar14);
      _objc_release(uVar4);
    } while (uVar10 < uVar1 - uVar5);
  }
  uVar10 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c088be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar10);
  uVar10 = uVar2;
  func_0x00010bfb5c60(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c0d3c80();
  uVar14 = param_1;
  func_0x00010bf8c6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010c088be0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08fa60();
  _objc_release(uVar5);
  _objc_release(uVar14);
  if (uVar1 != uVar6) {
    uVar14 = 0;
    do {
      func_0x00010c130d20(uVar4,param_2,uVar14,1,&PTR____CFConstantStringClassReference_110db2d58);
      uVar14 = uVar14 + 1;
      uVar5 = param_1;
      func_0x00010bf8c6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c08fa60();
      _objc_release(uVar6);
      _objc_release(uVar5);
    } while (uVar14 < uVar1 - uVar7);
  }
  lVar11 = (long)_DAT_112712df8;
  uVar12 = *(undefined8 *)(param_1 + lVar11);
  uVar1 = uVar4;
  func_0x00010c25cd40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar12,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf8c6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  func_0x00010bf9c7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010c08fa60();
  if (1 < uVar5) {
    uVar5 = param_1;
    func_0x00010bf8c6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf9c900();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fa60();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar1);
    if (uVar7 < 2) goto LAB_104daf1e0;
    uVar14 = param_1;
    func_0x00010bf8c6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bf9c900();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf8c6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf9c900();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    uVar1 = uVar5;
    func_0x00010c260c80(uVar5,param_2,uVar8 - 2,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar14 = param_1;
    func_0x00010bf8c6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bf9c7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + (long)_DAT_112712dfc),param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar5);
  }
  _objc_release(uVar14);
  _objc_release(uVar1);
LAB_104daf1e0:
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar11),param_2,0);
  uVar13 = *(undefined8 *)(param_1 + lVar11);
  uVar12 = uVar13;
  func_0x00010bfb2d60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar13,param_2,uVar12);
  _objc_release(uVar12);
  uVar1 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  func_0x00010bf63100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + (long)_DAT_112712e00),param_2,uVar14);
  _objc_release(uVar14);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bddbb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(*(undefined8 *)(param_1 + (long)_DAT_112712e24),param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104daf2ec; end: 104daf323; -[SCPaymentsCardCreateUpdateViewController _showErrorsIfNecessary] */

void FUN_104daf2ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be41140();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateErrorLabelsWithPreemptive_112593818,0);
    return;
  }
  return;
}



/* Entry: 104daf324; end: 104daf3fb; -[SCPaymentsCardCreateUpdateViewController _registerForKeyboardNotifications] */

void FUN_104daf324(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104daf3fc; end: 104daf4bb; -[SCPaymentsCardCreateUpdateViewController _removeKeyboardNotifications] */

void FUN_104daf3fc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104daf4bc; end: 104daf87f; -[SCPaymentsCardCreateUpdateViewController keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daf4bc(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  *(undefined1 *)(param_5 + _DAT_112712e58) = 1;
  lVar1 = param_7;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  dVar15 = param_4;
  _objc_release(lVar8);
  dVar11 = 0.0;
  lVar6 = *(long *)(param_5 + _DAT_112712e20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar9 = *(undefined8 *)(lVar10 * 8);
        uVar7 = uVar9;
        func_0x00010c073040();
        if ((int)uVar7 != 0) {
          _objc_retain(uVar9);
          _objc_release(uVar5);
          uVar5 = uVar9;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  lVar8 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(uVar5);
  uVar7 = uVar5;
  func_0x00010c262ca0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(dVar11,param_2,param_3,lVar8);
  _objc_release(uVar7);
  _objc_release(lVar8);
  dVar18 = dVar11;
  dVar13 = dVar15;
  _CGRectGetMaxY(dVar11,param_2,param_3);
  lVar8 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar16 = dVar13;
  _objc_release(lVar8);
  lVar8 = param_5;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar12 = dVar11;
  dVar14 = param_2;
  dVar17 = dVar15;
  _CGRectGetMaxY(dVar11,param_2,param_3,dVar15);
  if (dVar12 <= dVar16 - param_4) {
    _CGRectGetMinY(dVar11,param_2,param_3,dVar15);
    _objc_release(lVar8);
    if (0.0 <= dVar11) {
      lVar8 = (long)_DAT_112712e0c;
      goto LAB_104daf7b4;
    }
  }
  else {
    _objc_release(lVar8);
    param_2 = dVar14;
    dVar15 = dVar17;
  }
  dVar13 = dVar13 - param_4;
  dVar18 = dVar18 - dVar13;
  lVar8 = (long)_DAT_112712e0c;
  uVar7 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010bf4cdc0(uVar7);
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar8));
  dVar18 = dVar18 + param_2 + 25.0;
  dVar11 = 0.0;
  if (0.0 <= dVar18) {
    dVar11 = dVar18;
  }
  func_0x00010c1822e0(dVar13,dVar11,uVar7);
LAB_104daf7b4:
  func_0x00010c0bbfe0(*(undefined8 *)(param_5 + lVar8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  lVar8 = param_6;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_7 + 0x20);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  lVar8 = param_6;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar1 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_7 + 0x20);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c0df720(dVar15 - *(double *)(param_7 + 0x30),puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 104daf880; end: 104daf9f7;  */

void FUN_104daf880(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double in_d3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c0df720(in_d3 - *(double *)(param_1 + 0x30),puVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104daf9f8; end: 104dafa07; -[SCPaymentsCardCreateUpdateViewController keyboardDidShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104daf9f8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112712e58) = 0;
  return;
}



/* Entry: 104dafa08; end: 104dafb27; -[SCPaymentsCardCreateUpdateViewController keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dafa08(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112712e0c;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf4cdc0(uVar1);
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar2));
  dVar3 = (param_2 - param_4) + -25.0;
  dVar4 = 0.0;
  if (0.0 <= dVar3) {
    dVar4 = dVar3;
  }
  func_0x00010c1822e0(param_1,dVar4,uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104dafb28;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_5;
  func_0x00010c0bbfe0(*(undefined8 *)(param_5 + lVar2),param_6,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 104dafb28; end: 104dafbff;  */

void FUN_104dafb28(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104dafc00; end: 104db003b; -[SCPaymentsCardCreateUpdateViewController textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104dafc00(ulong param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,ulong param_6
             )

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if ((uVar3 == 0) && (uVar3 = param_6, func_0x00010c08fa60(), 1 < uVar3)) {
    uVar3 = param_6;
    func_0x00010c08fa60(param_6);
    uVar4 = param_6;
    func_0x00010c260c00(param_6,param_2,uVar3 - 1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_104dafd60;
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    func_0x00010c25d0a0(param_6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar5);
    uVar2 = param_1;
    func_0x00010c26bc40(param_1,param_2,param_3,param_4,param_5,uVar3);
    if ((int)uVar2 != 0) {
      func_0x00010c212f20(param_3,param_2,uVar3);
      func_0x00010c26be80(param_1,param_2,param_3);
      func_0x00010bee2a80(param_1);
    }
    _objc_release(uVar3);
  }
  else {
    _objc_release(uVar2);
LAB_104dafd60:
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    if ((ulong)(param_5 + param_4) <= uVar3) {
      uVar2 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fa60();
      uVar4 = param_6;
      func_0x00010c08fa60();
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010c268120();
      uVar9 = 0x96;
      if ((long)uVar2 < 2) {
        iVar1 = _DAT_112712df8;
        if ((uVar2 == 0) || (iVar1 = _DAT_112712dfc, uVar2 == 1)) {
          uVar7 = *(undefined8 *)(param_1 + (long)iVar1);
          func_0x00010c26bc40(uVar7,param_2,param_3,param_4,param_5,param_6);
          goto LAB_104dafd94;
        }
      }
      else if (uVar2 == 2) {
        uVar2 = param_6;
        func_0x00010bf87980(param_6,param_2,&PTR____CFConstantStringClassReference_110db2958);
        uVar9 = param_1;
        func_0x00010bee7720();
        if ((uVar2 & 1) == 0) goto LAB_104dafd90;
      }
      else if (uVar2 == 8) {
        puVar5 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
        func_0x00010c0989a0(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7620();
        puVar6 = puVar5;
        func_0x00010c06a520(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_6;
        func_0x00010c11f340(param_6,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        if (uVar2 != 0x7fffffffffffffff) goto LAB_104dafd90;
        uVar9 = 2;
      }
      else if (uVar2 == 9) {
        puVar5 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
        func_0x00010bf66760(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7620();
        puVar6 = puVar5;
        func_0x00010c06a520(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_6;
        func_0x00010c11f340(param_6,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        if (uVar2 != 0x7fffffffffffffff) goto LAB_104dafd90;
        uVar9 = 5;
      }
      lVar8 = (long)_DAT_112712e48;
      iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
      func_0x00010c079040();
      if ((iVar1 != 0) && (uVar2 = param_3, func_0x00010c268120(), uVar2 - 3 < 7)) {
        func_0x00010c1d1380(*(undefined8 *)(param_1 + lVar8),param_2,0,1);
      }
      if ((uVar3 - param_5) + uVar4 <= uVar9) {
        func_0x00010beb8340(param_1);
        lVar10 = (long)_DAT_112712de4;
        lVar8 = *(long *)(param_1 + lVar10);
        if (lVar8 != 0) {
          func_0x00010bf3ec40();
          uVar2 = param_1;
          func_0x00010becb580(param_1,param_2,lVar8);
          _objc_retainAutoreleasedReturnValue();
          if (uVar2 != 0) {
            uVar3 = uVar2;
            func_0x00010c268120();
            uVar7 = *(undefined8 *)(param_1 + lVar10);
            func_0x00010bf3ec40(uVar7);
            uVar4 = param_1;
            func_0x00010becb580(param_1,param_2,uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar4;
            func_0x00010c268120();
            _objc_release(uVar4);
            if (uVar3 == uVar9) {
              uVar7 = *(undefined8 *)(param_1 + lVar10);
              *(undefined8 *)(param_1 + lVar10) = 0;
              _objc_release(uVar7);
            }
          }
          _objc_release(uVar2);
        }
        uVar7 = 1;
        goto LAB_104dafd94;
      }
    }
  }
LAB_104dafd90:
  uVar7 = 0;
LAB_104dafd94:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 104db003c; end: 104db00cb; -[SCPaymentsCardCreateUpdateViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db003c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c268120();
  lVar4 = (long)_DAT_112712e20;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 + 1U < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    lVar1 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010c0dfd40(uVar3,param_2,lVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 104db00cc; end: 104db013f; -[SCPaymentsCardCreateUpdateViewController textFieldDidEndEditing:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db00cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c268120();
  if (lVar1 == 0) {
    func_0x00010c26bd40(*(undefined8 *)(param_1 + _DAT_112712df8),param_2,param_3,param_4);
  }
  func_0x00010bdde3e0(param_1,param_2,param_3,0);
  func_0x00010bea3b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db0140; end: 104db0147; -[SCPaymentsCardCreateUpdateViewController cardNumberTextFieldDidEndEditing:] */

void FUN_104db0140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_textFieldDidEndEditing_reason__112678978,param_3,0);
  return;
}



/* Entry: 104db0148; end: 104db014b; -[SCPaymentsCardCreateUpdateViewController cardNumberTextFieldDidChange:] */

void FUN_104db0148(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showCVVReconfirmErrorIfNeeded_11258ba78);
  return;
}



/* Entry: 104db014c; end: 104db0153; -[SCPaymentsCardCreateUpdateViewController cardExpiryTextFieldDidEndEditing:] */

void FUN_104db014c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_textFieldDidEndEditing_reason__112678978,param_3,0);
  return;
}



/* Entry: 104db0154; end: 104db0157; -[SCPaymentsCardCreateUpdateViewController cardExpiryTextFieldDidChange:] */

void FUN_104db0154(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showCVVReconfirmErrorIfNeeded_11258ba78);
  return;
}



/* Entry: 104db0158; end: 104db04fb; -[SCPaymentsCardCreateUpdateViewController _didTapSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db0158(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010c0a1d40(*(undefined8 *)(param_1 + _DAT_112712db0),param_2,0x11,0xffffffffffffffff,0xb,
                      0);
  func_0x00010bee2a80(param_1);
  func_0x00010bed79c0(param_1);
  puVar1 = param_1;
  func_0x00010bdcf220();
  if ((int)puVar1 != 0) {
    func_0x00010be945e0(param_1);
    func_0x00010beb8160(param_1);
    lVar8 = (long)_DAT_112712de0;
    puVar1 = param_1 + lVar8;
    _objc_loadWeakRetained();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_1;
      func_0x00010bf8c6c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b0690;
        _objc_alloc();
        uVar2 = *(undefined8 *)(param_1 + _DAT_112712df8);
        func_0x00010c26b700(uVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_112712dfc;
        uVar3 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010bf9c7c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010bf9c900(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + _DAT_112712e00);
        func_0x00010c26b700(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010be1d380(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c030520();
        _objc_release(puVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar6 = param_1;
        func_0x00010bde9060(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_58,param_1);
        param_1 = param_1 + lVar8;
        _objc_loadWeakRetained(param_1);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_copyWeak(auStack_90,auStack_58);
        _objc_retain(puVar1);
        func_0x00010befa6e0(param_1);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(param_1);
        _objc_release(puVar1);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(auStack_58);
        _objc_release(puVar6);
      }
      else {
        puVar6 = param_1;
        func_0x00010bf8c6c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        func_0x00010bde9060(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_initWeak(auStack_58,param_1);
        puVar6 = param_1 + lVar8;
        _objc_loadWeakRetained(puVar6);
        uVar2 = *(undefined8 *)(param_1 + _DAT_112712dd4);
        func_0x00010bfe5ec0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_104db04fc;
        puStack_70 = &UNK_11084fcf8;
        _objc_copyWeak(auStack_60,auStack_58);
        puStack_68 = param_1;
        func_0x00010c288660(puVar6);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uVar2);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      _objc_release(puVar1);
    }
  }
  return;
}



/* Entry: 104db04fc; end: 104db06c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db04fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf42540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01760(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712dd4));
  func_0x00010c0a4260(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010bec8c40(param_1);
  }
  else {
    func_0x00010be0e3c0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104db06c4; end: 104db07e7; -[SCPaymentsCardCreateUpdateViewController _didTapDeleteCardButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db06c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c0a1d40(*(undefined8 *)(param_1 + _DAT_112712db0),param_2,0x12,0xffffffffffffffff,0xb,
                      0);
  lVar2 = *(long *)(param_1 + _DAT_112712dd4);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db2dd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2dd8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126b0698;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c239920(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(ppuVar3);
  }
  return;
}



/* Entry: 104db07e8; end: 104db0813;  */

void FUN_104db07e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db0814; end: 104db097b; -[SCPaymentsCardCreateUpdateViewController _removeActionHandlerHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db0814(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010be945e0();
  func_0x00010beb8160(param_1);
  lVar4 = (long)_DAT_112712de0;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    _objc_retain(puVar2);
    lVar1 = param_1;
    func_0x00010bf8c6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf6c560(lVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}


