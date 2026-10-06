/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104da11d4; end: 104da11e3; -[SCPaymentsGenericTableViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da11d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712cd4);
}



/* Entry: 104da11e4; end: 104da1223; -[SCPaymentsGenericTableViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da11e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712cd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da1224; end: 104da1233; -[SCPaymentsGenericTableViewController sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da1224(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712cd0);
}



/* Entry: 104da1234; end: 104da1273; -[SCPaymentsGenericTableViewController setSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da1234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712cd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da1274; end: 104da1283; -[SCPaymentsGenericTableViewController logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da1274(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712cdc);
}



/* Entry: 104da1284; end: 104da12c3; -[SCPaymentsGenericTableViewController setLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da1284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712cdc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da12c4; end: 104da1333; -[SCPaymentsGenericTableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da12c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712cdc,0);
  _objc_storeStrong(param_1 + _DAT_112712cd0,0);
  _objc_storeStrong(param_1 + _DAT_112712cd4,0);
  _objc_storeStrong(param_1 + _DAT_112712ccc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712cd8,0);
  return;
}



/* Entry: 104da1334; end: 104da146b; -[SCPaymentsPageLogger initWithSessionId:sourcePage:userBlizzardLogger:] */

long FUN_104da1334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104da146c; end: 104da1493; -[SCPaymentsPageLogger paymentsSessionId] */

void FUN_104da146c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104da1494; end: 104da14bb; -[SCPaymentsPageLogger sourcePage] */

void FUN_104da1494(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104da14bc; end: 104da14fb; -[SCPaymentsPageLogger didBecomeActive] */

void FUN_104da14bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104da14fc; end: 104da1507; -[SCPaymentsPageLogger willResignActive] */

void FUN_104da14fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_onPageChanged_withExitEvent__112616fb0,0xffffffffffffffff,6);
  return;
}



/* Entry: 104da1508; end: 104da15bf; -[SCPaymentsPageLogger onPageChanged:withExitEvent:] */

void FUN_104da1508(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0600;
  _objc_opt_new(PTR_PTR_1126b0600);
  lVar2 = param_2;
  func_0x00010c1127c0(param_2);
  func_0x00010c1e26a0(puVar1,param_3,lVar2);
  func_0x00010c1cd480(puVar1,param_3,param_4);
  func_0x00010c198340(puVar1,param_3,param_5);
  func_0x00010c206c40(puVar1,param_3,*(undefined8 *)(param_2 + 0x20));
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c222d20(param_1 - *(double *)(param_2 + 8),puVar1);
  _objc_release(puVar3);
  func_0x00010c278460(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104da15c0; end: 104da162f; -[SCPaymentsPageLogger onPageEnter:] */

void FUN_104da15c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_2;
  func_0x00010c0f1860();
  func_0x00010c1e26a0(param_2,param_3,lVar1);
  func_0x00010c1d84e0(param_2,param_3,param_4);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 8) = param_1;
  _objc_release(puVar2);
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
  return;
}



/* Entry: 104da1630; end: 104da16b7; -[SCPaymentsPageLogger trackPaymentsEvent:] */

void FUN_104da1630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c1d9de0(param_3,param_2,uVar2);
  func_0x00010c162fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1d8600(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  lVar1 = param_1;
  func_0x00010c0f1860(param_1);
  func_0x00010c1d84e0(param_3,param_2,lVar1);
  func_0x00010c206c40(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104da16b8; end: 104da16bf; -[SCPaymentsPageLogger pageSequenceId] */

undefined8 FUN_104da16b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104da16c0; end: 104da16c7; -[SCPaymentsPageLogger setPageSequenceId:] */

void FUN_104da16c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 104da16c8; end: 104da16cf; -[SCPaymentsPageLogger adAccountId] */

undefined8 FUN_104da16c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104da16d0; end: 104da16ff; -[SCPaymentsPageLogger setAdAccountId:] */

void FUN_104da16d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104da1700; end: 104da1707; -[SCPaymentsPageLogger pageName] */

undefined8 FUN_104da1700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104da1708; end: 104da170f; -[SCPaymentsPageLogger setPageName:] */

void FUN_104da1708(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 104da1710; end: 104da1717; -[SCPaymentsPageLogger previousPage] */

undefined8 FUN_104da1710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104da1718; end: 104da171f; -[SCPaymentsPageLogger setPreviousPage:] */

void FUN_104da1718(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 104da1720; end: 104da1727; -[SCPaymentsPageLogger nextPage] */

undefined8 FUN_104da1720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104da1728; end: 104da172f; -[SCPaymentsPageLogger setNextPage:] */

void FUN_104da1728(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 104da1730; end: 104da1777; -[SCPaymentsPageLogger .cxx_destruct] */

void FUN_104da1730(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104da1778; end: 104da1cb3; -[SCCommerceImageDetailTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104da1778(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  puStack_90 = PTR_PTR_1126e42a8;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  puVar3 = PTR__CGRectZero_110347608;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar10 = (long)_DAT_112712d04;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar10);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112712d08;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar9 = (long)_DAT_112712d0c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar6 = (long)_DAT_112712d10;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b0608;
    _objc_alloc();
    uVar11 = *(undefined8 *)puVar3;
    uVar12 = *(undefined8 *)(puVar3 + 8);
    uVar13 = *(undefined8 *)(puVar3 + 0x10);
    uVar14 = *(undefined8 *)(puVar3 + 0x18);
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    lVar5 = (long)_DAT_112712d14;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    lVar7 = (long)_DAT_112712d18;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar10);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),
                      *(undefined8 *)(puVar3 + 0x10),*(undefined8 *)(puVar3 + 0x18));
  lVar5 = (long)_DAT_112712d1c;
  uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined **)((long)puVar1 + lVar5) = puVar2;
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
  _objc_release(puVar3);
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
  func_0x00010befbb60(puVar1);
  uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 104da1cb4; end: 104da1e7f;  */

void FUN_104da1cb4(long param_1,long param_2)

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
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
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
  func_0x00010c0bbee0(uVar3);
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



/* Entry: 104da1e80; end: 104da1f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da1e80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1fec0();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104da1f44; end: 104da22c7;  */

void FUN_104da1f44(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
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
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
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
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbee0(uVar3);
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



/* Entry: 104da22c8; end: 104da252f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da22c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712d04);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3ff0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712d14);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712d0c);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc024000000000000);
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



/* Entry: 104da2530; end: 104da2633;  */

void FUN_104da2530(undefined8 param_1,long param_2)

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
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1fec0();
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



/* Entry: 104da2634; end: 104da2727; -[SCCommerceImageDetailTableViewCell setNeedsLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da2634(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104da2728;
  puStack_60 = &UNK_1108471b0;
  lStack_58 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112712d0c),param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112712d10;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x104da286c;
    puStack_88 = &UNK_1108471b0;
    lStack_80 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_a8 = PTR_PTR_1126e42a8;
  lStack_b0 = param_1;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104da2728; end: 104da29af;  */

void FUN_104da2728(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  func_0x00010c21c560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010beed340();
  lVar2 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0xc02e000000000000;
  if (lVar1 != 0) {
    uVar8 = 0xc046800000000000;
  }
  lVar1 = lVar6;
  (**(code **)(lVar6 + 0x10))(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104da29b0; end: 104da2a03; -[SCCommerceImageDetailTableViewCell setHighlighted:animated:] */

void FUN_104da29b0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 104da2a04; end: 104da2acf; -[SCCommerceImageDetailTableViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da2a04(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712d04));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712d08));
  lVar1 = (long)_DAT_112712d0c;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  lVar1 = (long)_DAT_112712d10;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1805a0(*(undefined8 *)(param_1 + _DAT_112712d14));
  return;
}



/* Entry: 104da2ad0; end: 104da2aef; -[SCCommerceImageDetailTableViewCell setShouldShowBottomBorderLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da2ad0(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_112712d20) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712d1c),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 104da2af0; end: 104da2c07; -[SCCommerceImageDetailTableViewCell configureForOrderSummary:compositeImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da2af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112712d14);
  _objc_retain(param_3);
  func_0x00010c1aa200(uVar4);
  func_0x00010bea59e0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_3;
  func_0x00010c276980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar4;
  func_0x00010bf02460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712d0c));
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  lVar3 = (long)_DAT_112712d10;
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c161260(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104da2c08; end: 104da31c3; -[SCCommerceImageDetailTableViewCell configureForBillingItem:compositeImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da2c08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar6 = (long)_DAT_112712d04;
  uVar4 = *(undefined8 *)(param_3 + lVar6);
  uVar8 = 0x402e000000000000;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar4,param_4,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_3 + lVar6),param_4,3);
  lVar5 = param_5;
  func_0x00010c0d4f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_3 + lVar6),param_4,lVar5);
  _objc_release(lVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104da31c4;
  puStack_98 = &UNK_1108471b0;
  lStack_90 = param_3;
  func_0x00010c0bbfe0(*(undefined8 *)(param_3 + lVar6),param_4,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112712d08;
  func_0x00010c1cfce0(*(undefined8 *)(param_3 + lVar5),param_4,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_3 + lVar5),param_4,0);
  puVar2 = PTR_PTR_1126b0610;
  func_0x00010c2610c0(PTR_PTR_1126b0610,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_3 + lVar5),param_4,puVar2);
  _objc_release(puVar2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x104da3428;
  puStack_c0 = &UNK_1108471b0;
  lStack_b8 = param_3;
  func_0x00010c0bbfe0(*(undefined8 *)(param_3 + lVar5),param_4,&puStack_d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112712d0c;
  func_0x00010c160fc0(*(undefined8 *)(param_3 + lVar7),param_4,
                      &PTR____CFConstantStringClassReference_110db2638);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = param_5;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf02460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_4,&PTR____CFConstantStringClassReference_110db2618);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_3 + lVar7),param_4,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c26b700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010bfb3a80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dce0(uVar4,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_104da3690;
  puStack_f8 = &UNK_11084fbb8;
  lStack_f0 = param_3;
  uStack_e8 = uVar8;
  uStack_e0 = param_2;
  func_0x00010c0bbfe0(*(undefined8 *)(param_3 + lVar7),param_4,&puStack_110);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c25ccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf02460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar7 = (long)_DAT_112712d10;
    func_0x00010befbb60(param_3,param_4,*(undefined8 *)(param_3 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)(param_3 + lVar7),param_4,
                        &PTR____CFConstantStringClassReference_110db2658);
    puVar2 = PTR_PTR_1126b0618;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = param_5;
    func_0x00010c25ccc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf02460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_4,&PTR____CFConstantStringClassReference_110db2618);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cce0(0x402e000000000000,puVar2,param_4,0,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_3 + lVar7),param_4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = param_5;
    func_0x00010c25ccc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf02460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_4,&PTR____CFConstantStringClassReference_110db2618);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_3 + lVar7),param_4,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_104da385c;
    puStack_120 = &UNK_1108471b0;
    lStack_118 = param_3;
    func_0x00010c0bbfe0(*(undefined8 *)(param_3 + lVar7),param_4,&puStack_138);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar7 = (long)_DAT_112712d14;
  func_0x00010c1aa200(*(undefined8 *)(param_3 + lVar7),param_4,param_6);
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4018000000000000);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xad);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  func_0x00010c182220(*(undefined8 *)(param_3 + lVar7),param_4,1);
  lVar5 = param_5;
  func_0x00010c115f40(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000106d772a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805a0(*(undefined8 *)(param_3 + lVar7),param_4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_104da39b0;
  puStack_148 = &UNK_1108471b0;
  puStack_160 = puVar1;
  lStack_140 = param_3;
  func_0x00010c0bbfe0(*(undefined8 *)(param_3 + _DAT_112712d18),param_4,&puStack_160);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c161260(param_3,param_4,0);
  func_0x00010c1cbe20(param_3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104da31c4; end: 104da368f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da31c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112712d14;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402b000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
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
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712d0c);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc024000000000000);
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



/* Entry: 104da3690; end: 104da385b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da3690(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712d04);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
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
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104da385c; end: 104da39af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da385c(long param_1,long param_2)

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
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712d0c);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
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
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
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



/* Entry: 104da39b0; end: 104da3b0b;  */

void FUN_104da39b0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104da3b0c; end: 104da3cf7; -[SCCommerceImageDetailTableViewCell configureForMerchantInfo:compositeImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da3b0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712d14);
  _objc_retain(param_3);
  func_0x00010c1aa200(uVar2,param_2,param_4);
  func_0x00010bea59e0(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712d0c),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  lVar1 = (long)_DAT_112712d10;
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1),param_2,0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104da3c0c;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112712d04),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c161260(param_1,param_2,0);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 104da3cf8; end: 104da4047; -[SCCommerceImageDetailTableViewCell _setMerchantDetails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da3cf8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c257a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712d04));
  _objc_release(lVar1);
  lVar10 = (long)_DAT_112712d14;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4008000000000000);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar10));
  lVar1 = param_3;
  func_0x00010c2577c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x000106d772a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805a0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(lVar7);
  _objc_release(lVar1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112712d18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf19f20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar10 == 0) {
    _objc_release(lVar7);
    ppuVar5 = &PTR____CFConstantStringClassReference_110db1e98;
  }
  else {
    lVar11 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        lVar4 = *(long *)(lVar9 * 8);
        func_0x00010c11cf60();
        lVar11 = lVar4 + lVar11;
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar7;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
    _objc_release(lVar7);
    ppuVar5 = &PTR____CFConstantStringClassReference_110db1e78;
    if (lVar11 != 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db1e98;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar7 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf5a4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c73c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712d08));
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(ppuVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(lVar7);
    func_0x00010c21c560(lVar7);
    lVar1 = lVar7;
    func_0x00010c2a5040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar1;
    func_0x00010bfe0640();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104da4048; end: 104da40eb;  */

void FUN_104da4048(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010c21c560(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104da40ec; end: 104da4203; +[SCCommerceImageDetailTableViewCell subtitleStringForItem:] */

void FUN_104da40ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c297560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar2 = param_3;
    func_0x00010c297560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110db26d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db26d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11cf60();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104da4204; end: 104da45a3; +[SCCommerceImageDetailTableViewCell heightForBillingItem:] */

double FUN_104da4204(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_6);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  uVar3 = param_6;
  func_0x00010c0d4f60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_5,uVar3);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar4,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c2610c0(param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4,param_5,param_4);
  _objc_release(param_4);
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  dVar10 = 15.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar5,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_6;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar6 = uVar3;
  func_0x00010bf02460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_5,&PTR____CFConstantStringClassReference_110db2618);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5,param_5,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar2 = puVar5;
  func_0x00010c26b700(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bfb3a80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dce0(puVar2,param_5,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar2);
  dVar12 = dVar10 + 10.0 + 15.0;
  puVar2 = puVar1;
  func_0x00010c26b700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bfb3a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar10 = param_3 + -116.0;
  dVar11 = dVar10 - dVar12;
  puVar9 = puVar1;
  func_0x00010bfb3a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  dVar10 = dVar10 * 3.0;
  func_0x00010c14dd20(dVar11,puVar2,param_5,puVar7,0);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c26b700(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bfb3a80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar11 = 1.79769313486232e+308;
  func_0x00010c14dd20((param_3 + -116.0) - dVar12,puVar2,param_5,puVar7,0);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  dVar10 = dVar10 + 28.5 + 2.0 + dVar11 + 15.0;
  if (dVar10 <= 116.0) {
    dVar10 = 116.0;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return dVar10;
}



/* Entry: 104da45a4; end: 104da45af; +[SCCommerceImageDetailTableViewCell merchantHeight] */

undefined8 FUN_104da45a4(void)

{
  return 0x4052400000000000;
}



/* Entry: 104da45b0; end: 104da45bf; -[SCCommerceImageDetailTableViewCell shouldShowBottomBorderLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104da45b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712d20);
}



/* Entry: 104da45c0; end: 104da45cf; -[SCCommerceImageDetailTableViewCell leftViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da45c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712d18);
}



/* Entry: 104da45d0; end: 104da460f; -[SCCommerceImageDetailTableViewCell setLeftViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da45d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712d18;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da4610; end: 104da461f; -[SCCommerceImageDetailTableViewCell customImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da4610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712d14);
}



/* Entry: 104da4620; end: 104da465f; -[SCCommerceImageDetailTableViewCell setCustomImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da4620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712d14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da4660; end: 104da46ef; -[SCCommerceImageDetailTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da4660(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712d14,0);
  _objc_storeStrong(param_1 + _DAT_112712d18,0);
  _objc_storeStrong(param_1 + _DAT_112712d1c,0);
  _objc_storeStrong(param_1 + _DAT_112712d10,0);
  _objc_storeStrong(param_1 + _DAT_112712d0c,0);
  _objc_storeStrong(param_1 + _DAT_112712d08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712d04,0);
  return;
}



/* Entry: 104da46f0; end: 104da48a3; -[SCCommerceOrderDetailsViewController initWithUserSession:commerceLogger:paymentSettingsImageProvider:userBlizzardLogger:compositeImageFetcher:order:iconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104da46f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e42b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithUserBlizzardLogger__1125f4460,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112712d28),param_3);
    lVar4 = (long)_DAT_112712d2c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712d30;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712d34;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712d38;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar3 = *(long *)((long)puVar1 + lVar4);
    func_0x00010bf19f20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    *(long *)((long)puVar1 + (long)_DAT_112712d3c) = lVar4 + 8;
    _objc_release(lVar3);
    lVar4 = (long)_DAT_112712d40;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104da48a4; end: 104da4993; -[SCCommerceOrderDetailsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da48a4(long param_1)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e42b0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_loadView_112604be0);
  func_0x00010beacfe0(param_1);
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112712d44));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beb0580(param_1);
  return;
}



/* Entry: 104da4994; end: 104da4c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da4994(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712d44);
  func_0x00010c0bc020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104da4c08; end: 104da4d3b; -[SCCommerceOrderDetailsViewController viewDidLoad] */

void FUN_104da4c08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010be3e680();
  puVar3 = PTR_PTR_1126b0620;
  if ((int)uVar1 == 0) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf138e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb760();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b0620;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26e6a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf25c40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010befbd60(puVar3);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188540();
  _objc_release(param_1);
  _objc_release(puVar3);
  return;
}



/* Entry: 104da4d3c; end: 104da4df3; -[SCCommerceOrderDetailsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da4d3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  lVar1 = param_1;
  func_0x00010be3e680();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c08e9a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release();
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712d48);
  *(long *)(param_1 + _DAT_112712d48) = lVar1;
  _objc_release(uVar2);
  func_0x00010c0abc20(*(undefined8 *)(param_1 + _DAT_112712d2c));
  return;
}



/* Entry: 104da4df4; end: 104da4e4f; -[SCCommerceOrderDetailsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da4df4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c0abb20(*(undefined8 *)(param_1 + _DAT_112712d2c));
  return;
}



/* Entry: 104da4e50; end: 104da51ab; -[SCCommerceOrderDetailsViewController _setupTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da4e50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  undefined8 uVar13;
  
  lVar11 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce40();
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b0610);
  puVar2 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(lVar11);
  _objc_release(puVar2);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b0628);
  puVar2 = PTR_PTR_1126b0628;
  _objc_opt_class(PTR_PTR_1126b0628);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(lVar11);
  _objc_release(puVar2);
  _objc_release(lVar11);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar11);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar11 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(0,0,puVar2);
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211680();
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar11);
  lVar11 = (long)_DAT_112712d38;
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c261380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c22ca20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c276e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf81380(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0x4028000000000000;
  uVar8 = uVar3;
  func_0x0001057c4524(0x4014000000000000,0,0x4028000000000000,0,uVar3,uVar5,uVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112712d4c);
  *(undefined8 *)(param_1 + _DAT_112712d4c) = uVar8;
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b0630;
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar12 = 1.79769313486232e+308;
  func_0x00010c23d6e0(uVar13,puVar2);
  *(double *)(param_1 + _DAT_112712d50) = dVar12 + 0.5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 104da51ac; end: 104da51b3; -[SCCommerceOrderDetailsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_104da51ac(void)

{
  return 0;
}



/* Entry: 104da51b4; end: 104da51bb; -[SCCommerceOrderDetailsViewController tableViewStyle] */

undefined8 FUN_104da51b4(void)

{
  return 0;
}



/* Entry: 104da51bc; end: 104da51cb; -[SCCommerceOrderDetailsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da51bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712d3c);
}



/* Entry: 104da51cc; end: 104da5503; -[SCCommerceOrderDetailsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da51cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x22;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be97b60(param_1,param_2,param_4);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c267f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b0610;
      _objc_opt_class(PTR_PTR_1126b0610);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = lVar1;
      func_0x00010bf6e080(lVar1,param_2,puVar6,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar1);
      func_0x00010bf46fc0(unaff_x22,param_2,*(undefined8 *)(param_1 + _DAT_112712d38),
                          *(undefined8 *)(param_1 + _DAT_112712d34));
    }
    else {
      if (lVar1 != 1) goto LAB_104da54d8;
      lVar1 = param_1;
      func_0x00010c267f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b0610;
      _objc_opt_class(PTR_PTR_1126b0610);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = lVar1;
      func_0x00010bf6e080(lVar1,param_2,puVar6,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112712d38);
      func_0x00010bf19f20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c142240(param_4);
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,lVar1 + -1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf46fa0(unaff_x22,param_2,uVar3,*(undefined8 *)(param_1 + _DAT_112712d34));
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    func_0x00010c2010c0(unaff_x22,param_2,1);
    func_0x00010c21e900(unaff_x22,param_2,0);
  }
  else if (lVar1 == 2) {
    lVar1 = param_4;
    func_0x00010c142240();
    uVar4 = *(ulong *)(param_1 + _DAT_112712d38);
    func_0x00010bf19f20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    lVar1 = lVar1 + ~uVar5;
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b0628;
    _objc_opt_class(PTR_PTR_1126b0628);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_3;
    func_0x00010bf6e080(param_3,param_2,puVar6,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c1a97a0(unaff_x22,param_2,*(undefined8 *)(param_1 + _DAT_112712d40));
    if (lVar1 < 3) {
      if (lVar1 == 0) {
        func_0x00010bde5460(param_1,param_2,unaff_x22);
      }
      else if (lVar1 == 1) {
        func_0x00010bde5480(param_1,param_2,unaff_x22);
      }
      else if (lVar1 == 2) {
        func_0x00010bde4f20(param_1,param_2,unaff_x22);
      }
    }
    else if (lVar1 == 3) {
      func_0x00010bde5900(param_1,param_2,unaff_x22);
    }
    else if (lVar1 == 4) {
      func_0x00010bde5920(param_1,param_2,unaff_x22);
    }
    else if (lVar1 == 5) {
      func_0x00010bde54c0(param_1,param_2,unaff_x22);
    }
    func_0x00010c1fbac0(unaff_x22,param_2,0);
    func_0x00010c161260(unaff_x22,param_2,0);
  }
  else if (lVar1 == 3) {
    func_0x00010bec8ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
  }
LAB_104da54d8:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 104da5504; end: 104da5683; -[SCCommerceOrderDetailsViewController _configureOrderDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da5504(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar25 = (long)_DAT_112712d38;
  lVar2 = *(long *)(param_1 + lVar25);
  if (lVar2 == 0) {
LAB_104da55d8:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e2f8;
  }
  else {
    func_0x00010bf5a4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar2;
    func_0x00010c25d3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar24 == 0) goto LAB_104da55d8;
    uVar3 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010bf5a4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c25d3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110db2718;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2718,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(param_3);
  _objc_release(ppuVar5);
  func_0x00010c1b7240(param_3);
  func_0x00010c1a5dc0(param_3);
  func_0x00010c1b4680(param_3);
  lVar2 = 0;
  func_0x00010c1b71e0(param_3);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar2);
  lVar24 = (long)_DAT_112712d38;
  lVar23 = *(long *)(param_3 + lVar24);
  if (lVar23 == 0) {
LAB_104da5724:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e310;
  }
  else {
    func_0x00010bf9e4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar23 == 0) goto LAB_104da5724;
    uVar6 = *(undefined8 *)(param_3 + lVar24);
    func_0x00010bf9e4c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110db2738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2738,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(lVar2);
  _objc_release(ppuVar5);
  func_0x00010c1b7240(lVar2);
  func_0x00010c1a5dc0(lVar2);
  func_0x00010c1b4680(lVar2);
  lVar23 = 0;
  func_0x00010c1b71e0(lVar2);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar23);
  lVar26 = (long)_DAT_112712d38;
  lVar25 = *(long *)(lVar2 + lVar26);
  if (lVar25 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf49cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar25 == 0) {
      bVar1 = false;
    }
    else {
      lVar7 = *(long *)(lVar2 + lVar26);
      func_0x00010bf49cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        bVar1 = false;
      }
      else {
        lVar9 = *(long *)(lVar2 + lVar26);
        func_0x00010bf49cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c0faaa0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar10 != 0;
        _objc_release();
        _objc_release(lVar9);
      }
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    _objc_release(lVar25);
  }
  puVar15 = PTR_PTR_1126b05a8;
  _objc_alloc();
  uVar11 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c0faaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f3a0();
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar11);
  if (bVar1) {
    puVar13 = puVar15;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar15;
    func_0x00010c0faaa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e328;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110db2758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(lVar23);
  _objc_release(ppuVar5);
  func_0x00010c1b7240(lVar23);
  func_0x00010c1a5dc0(lVar23);
  func_0x00010c1b4680(lVar23);
  lVar2 = 0;
  func_0x00010c1b71e0(lVar23);
  _objc_release(ppuVar4);
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db2778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2778,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(lVar2);
  _objc_release(ppuVar4);
  func_0x00010c1a5dc0(lVar2);
  func_0x00010c1b4680(lVar2);
  func_0x00010c1b71e0(lVar2);
  lVar26 = (long)_DAT_112712d38;
  lVar25 = *(long *)(lVar23 + lVar26);
  if (lVar25 == 0) {
LAB_104da5e50:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e340;
  }
  else {
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    if (lVar25 == 0) goto LAB_104da5e50;
    lVar7 = *(long *)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      _objc_release(lVar7);
      _objc_release(lVar25);
      goto LAB_104da5e50;
    }
    lVar9 = *(long *)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar25);
    if (lVar10 == 0) goto LAB_104da5e50;
    puVar15 = *(undefined **)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar15;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = *(undefined8 *)(lVar23 + lVar26);
    func_0x00010c22c980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c25cb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar15 != 0) {
      uVar11 = *(undefined8 *)(lVar23 + lVar26);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c25cae0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(lVar23 + lVar26);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar12;
      func_0x00010c25cb00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(uVar3);
      _objc_release(uVar12);
      _objc_release(uVar6);
      _objc_release(uVar11);
      puVar14 = puVar13;
    }
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar16 = *(undefined8 *)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar16;
    func_0x00010bfb18a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar17;
    func_0x00010c089720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar18 = *(undefined8 *)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar18;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar19;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar23 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c105660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(uVar11);
    _objc_release(uVar18);
    _objc_release(puVar15);
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(puVar14);
  }
  ppuVar5 = ppuVar4;
  func_0x00010c1b7240(lVar2);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  lVar24 = (long)_DAT_112712d38;
  lVar23 = *(long *)(lVar2 + lVar24);
  if (lVar23 == 0) {
LAB_104da5f84:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e358;
  }
  else {
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar23;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar23);
    if (lVar26 == 0) goto LAB_104da5f84;
    uVar3 = *(undefined8 *)(lVar2 + lVar24);
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  ppuVar22 = &PTR____CFConstantStringClassReference_110db27f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db27f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar5);
  _objc_release(ppuVar22);
  func_0x00010c1a5dc0(ppuVar5);
  func_0x00010c1b4680(ppuVar5);
  func_0x00010c1b71e0(ppuVar5);
  ppuVar22 = ppuVar4;
  func_0x00010c1b7240(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar22);
  lVar25 = (long)_DAT_112712d38;
  lVar2 = *(long *)((long)ppuVar5 + lVar25);
  if (lVar2 != 0) {
    func_0x00010c0f6920();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar24 != 0) {
      uVar11 = *(undefined8 *)((long)ppuVar5 + lVar25);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar11);
      uVar6 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_112712d30);
      uVar11 = *(undefined8 *)((long)ppuVar5 + lVar25);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31a80();
      func_0x00010bfe8300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar11);
      goto LAB_104da6188;
    }
  }
  uVar6 = 0;
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e370;
LAB_104da6188:
  ppuVar5 = &PTR____CFConstantStringClassReference_110db2818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar22);
  _objc_release(ppuVar5);
  func_0x00010c1b71e0(ppuVar22);
  func_0x00010c1a5dc0(ppuVar22);
  func_0x00010c1b4680(ppuVar22);
  ppuVar5 = ppuVar4;
  func_0x00010c1b7240(ppuVar22);
  _objc_release(ppuVar4);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  func_0x00010c267f00(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar22;
  func_0x00010bf6e080(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(puVar15);
  _objc_release(ppuVar22);
  func_0x00010bf46fc0(ppuVar4);
  func_0x00010c21e900(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104da5684; end: 104da57cb; -[SCCommerceOrderDetailsViewController _configureOrderNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da5684(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar24 = (long)_DAT_112712d38;
  lVar2 = *(long *)(param_1 + lVar24);
  if (lVar2 == 0) {
LAB_104da5724:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e310;
  }
  else {
    func_0x00010bf9e4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_104da5724;
    uVar3 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bf9e4c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110db2738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2738,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(param_3);
  _objc_release(ppuVar5);
  func_0x00010c1b7240(param_3);
  func_0x00010c1a5dc0(param_3);
  func_0x00010c1b4680(param_3);
  lVar2 = 0;
  func_0x00010c1b71e0(param_3);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar2);
  lVar25 = (long)_DAT_112712d38;
  lVar23 = *(long *)(param_3 + lVar25);
  if (lVar23 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf49cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar23 == 0) {
      bVar1 = false;
    }
    else {
      lVar6 = *(long *)(param_3 + lVar25);
      func_0x00010bf49cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar6;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar26 == 0) {
        bVar1 = false;
      }
      else {
        lVar7 = *(long *)(param_3 + lVar25);
        func_0x00010bf49cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar7;
        func_0x00010c0faaa0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar12 != 0;
        _objc_release();
        _objc_release(lVar7);
      }
      _objc_release(lVar26);
      _objc_release(lVar6);
    }
    _objc_release(lVar23);
  }
  puVar14 = PTR_PTR_1126b05a8;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_3 + lVar25);
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar25);
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010c0faaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f3a0();
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  if (bVar1) {
    puVar10 = puVar14;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010c0faaa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e328;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110db2758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(lVar2);
  _objc_release(ppuVar5);
  func_0x00010c1b7240(lVar2);
  func_0x00010c1a5dc0(lVar2);
  func_0x00010c1b4680(lVar2);
  lVar23 = 0;
  func_0x00010c1b71e0(lVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar23);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db2778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2778,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(lVar23);
  _objc_release(ppuVar4);
  func_0x00010c1a5dc0(lVar23);
  func_0x00010c1b4680(lVar23);
  func_0x00010c1b71e0(lVar23);
  lVar26 = (long)_DAT_112712d38;
  lVar24 = *(long *)(lVar2 + lVar26);
  if (lVar24 == 0) {
LAB_104da5e50:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e340;
  }
  else {
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    if (lVar24 == 0) goto LAB_104da5e50;
    lVar12 = *(long *)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar12;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_release(lVar12);
      _objc_release(lVar24);
      goto LAB_104da5e50;
    }
    lVar13 = *(long *)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar13;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    _objc_release(lVar6);
    _objc_release(lVar12);
    _objc_release(lVar24);
    if (lVar7 == 0) goto LAB_104da5e50;
    puVar14 = *(undefined **)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar15 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c22c980(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010c25cb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(uVar3);
    _objc_release(uVar15);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar14 != 0) {
      uVar8 = *(undefined8 *)(lVar2 + lVar26);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c25cae0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar2 + lVar26);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar9;
      func_0x00010c25cb00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(uVar15);
      _objc_release(uVar9);
      _objc_release(uVar3);
      _objc_release(uVar8);
      puVar11 = puVar10;
    }
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar16 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010bfb18a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar17;
    func_0x00010c089720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar18 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar18;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar19;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c105660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar9);
    _objc_release(uVar19);
    _objc_release(uVar8);
    _objc_release(uVar18);
    _objc_release(puVar14);
    _objc_release(uVar15);
    _objc_release(uVar17);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(puVar11);
  }
  ppuVar5 = ppuVar4;
  func_0x00010c1b7240(lVar23);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  lVar25 = (long)_DAT_112712d38;
  lVar2 = *(long *)(lVar23 + lVar25);
  if (lVar2 == 0) {
LAB_104da5f84:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e358;
  }
  else {
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar26 == 0) goto LAB_104da5f84;
    uVar15 = *(undefined8 *)(lVar23 + lVar25);
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar15);
  }
  ppuVar22 = &PTR____CFConstantStringClassReference_110db27f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db27f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar5);
  _objc_release(ppuVar22);
  func_0x00010c1a5dc0(ppuVar5);
  func_0x00010c1b4680(ppuVar5);
  func_0x00010c1b71e0(ppuVar5);
  ppuVar22 = ppuVar4;
  func_0x00010c1b7240(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar22);
  lVar24 = (long)_DAT_112712d38;
  lVar2 = *(long *)((long)ppuVar5 + lVar24);
  if (lVar2 != 0) {
    func_0x00010c0f6920();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar25 != 0) {
      uVar8 = *(undefined8 *)((long)ppuVar5 + lVar24);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar3;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar3);
      _objc_release(uVar8);
      uVar3 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_112712d30);
      uVar8 = *(undefined8 *)((long)ppuVar5 + lVar24);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31a80();
      func_0x00010bfe8300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar8);
      goto LAB_104da6188;
    }
  }
  uVar3 = 0;
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e370;
LAB_104da6188:
  ppuVar5 = &PTR____CFConstantStringClassReference_110db2818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar22);
  _objc_release(ppuVar5);
  func_0x00010c1b71e0(ppuVar22);
  func_0x00010c1a5dc0(ppuVar22);
  func_0x00010c1b4680(ppuVar22);
  ppuVar5 = ppuVar4;
  func_0x00010c1b7240(ppuVar22);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  func_0x00010c267f00(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar22;
  func_0x00010bf6e080(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(puVar14);
  _objc_release(ppuVar22);
  func_0x00010bf46fc0(ppuVar4);
  func_0x00010c21e900(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104da57cc; end: 104da5a63; -[SCCommerceOrderDetailsViewController _configureContactsCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da57cc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar24 = (long)_DAT_112712d38;
  lVar2 = *(long *)(param_1 + lVar24);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf49cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = *(long *)(param_1 + lVar24);
      func_0x00010bf49cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar3;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar25 == 0) {
        bVar1 = false;
      }
      else {
        lVar4 = *(long *)(param_1 + lVar24);
        func_0x00010bf49cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar4;
        func_0x00010c0faaa0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar11 != 0;
        _objc_release();
        _objc_release(lVar4);
      }
      _objc_release(lVar25);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  puVar13 = PTR_PTR_1126b05a8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010c0faaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f3a0();
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  if (bVar1) {
    puVar7 = puVar13;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010c0faaa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    ppuVar9 = &PTR__OBJC_CLASS___NSConstantArray_11117e328;
  }
  ppuVar10 = &PTR____CFConstantStringClassReference_110db2758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(param_3);
  _objc_release(ppuVar10);
  func_0x00010c1b7240(param_3);
  func_0x00010c1a5dc0(param_3);
  func_0x00010c1b4680(param_3);
  lVar2 = 0;
  func_0x00010c1b71e0(param_3);
  _objc_release(ppuVar9);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar2);
  ppuVar9 = &PTR____CFConstantStringClassReference_110db2778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2778,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(lVar2);
  _objc_release(ppuVar9);
  func_0x00010c1a5dc0(lVar2);
  func_0x00010c1b4680(lVar2);
  func_0x00010c1b71e0(lVar2);
  lVar25 = (long)_DAT_112712d38;
  lVar22 = *(long *)(param_3 + lVar25);
  if (lVar22 == 0) {
LAB_104da5e50:
    ppuVar9 = &PTR__OBJC_CLASS___NSConstantArray_11117e340;
  }
  else {
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    if (lVar22 == 0) goto LAB_104da5e50;
    lVar11 = *(long *)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release(lVar11);
      _objc_release(lVar22);
      goto LAB_104da5e50;
    }
    lVar12 = *(long *)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar12);
    _objc_release(lVar3);
    _objc_release(lVar11);
    _objc_release(lVar22);
    if (lVar4 == 0) goto LAB_104da5e50;
    puVar13 = *(undefined **)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar14 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c22c980(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar14;
    func_0x00010c25cb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(uVar23);
    _objc_release(uVar14);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar13 != 0) {
      uVar5 = *(undefined8 *)(param_3 + lVar25);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar5;
      func_0x00010c25cae0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + lVar25);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar6;
      func_0x00010c25cb00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(uVar14);
      _objc_release(uVar6);
      _objc_release(uVar23);
      _objc_release(uVar5);
      puVar8 = puVar7;
    }
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar15 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bfb18a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar16;
    func_0x00010c089720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar17 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar17;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar18;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c105660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar6);
    _objc_release(uVar18);
    _objc_release(uVar5);
    _objc_release(uVar17);
    _objc_release(puVar13);
    _objc_release(uVar14);
    _objc_release(uVar16);
    _objc_release(uVar23);
    _objc_release(uVar15);
    _objc_release(puVar8);
  }
  ppuVar10 = ppuVar9;
  func_0x00010c1b7240(lVar2);
  _objc_release(ppuVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar10);
  lVar25 = (long)_DAT_112712d38;
  lVar22 = *(long *)(lVar2 + lVar25);
  if (lVar22 == 0) {
LAB_104da5f84:
    ppuVar9 = &PTR__OBJC_CLASS___NSConstantArray_11117e358;
  }
  else {
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar22;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar22);
    if (lVar3 == 0) goto LAB_104da5f84;
    uVar14 = *(undefined8 *)(lVar2 + lVar25);
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar14;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar23);
    _objc_release(uVar14);
  }
  ppuVar21 = &PTR____CFConstantStringClassReference_110db27f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db27f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar10);
  _objc_release(ppuVar21);
  func_0x00010c1a5dc0(ppuVar10);
  func_0x00010c1b4680(ppuVar10);
  func_0x00010c1b71e0(ppuVar10);
  ppuVar21 = ppuVar9;
  func_0x00010c1b7240(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar21);
  lVar24 = (long)_DAT_112712d38;
  lVar2 = *(long *)((long)ppuVar10 + lVar24);
  if (lVar2 != 0) {
    func_0x00010c0f6920();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar25 != 0) {
      uVar5 = *(undefined8 *)((long)ppuVar10 + lVar24);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar23;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      _objc_release(uVar23);
      _objc_release(uVar5);
      uVar23 = *(undefined8 *)((long)ppuVar10 + (long)_DAT_112712d30);
      uVar5 = *(undefined8 *)((long)ppuVar10 + lVar24);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31a80();
      func_0x00010bfe8300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      _objc_release(uVar5);
      goto LAB_104da6188;
    }
  }
  uVar23 = 0;
  ppuVar9 = &PTR__OBJC_CLASS___NSConstantArray_11117e370;
LAB_104da6188:
  ppuVar10 = &PTR____CFConstantStringClassReference_110db2818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar21);
  _objc_release(ppuVar10);
  func_0x00010c1b71e0(ppuVar21);
  func_0x00010c1a5dc0(ppuVar21);
  func_0x00010c1b4680(ppuVar21);
  ppuVar10 = ppuVar9;
  func_0x00010c1b7240(ppuVar21);
  _objc_release(ppuVar9);
  _objc_release(uVar23);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  func_0x00010c267f00(ppuVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar21;
  func_0x00010bf6e080(ppuVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  _objc_release(puVar13);
  _objc_release(ppuVar21);
  func_0x00010bf46fc0(ppuVar9);
  func_0x00010c21e900(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 104da5a64; end: 104da5eaf; -[SCCommerceOrderDetailsViewController _configureShippingAddressCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da5a64(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2778,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(param_3);
  _objc_release(ppuVar1);
  func_0x00010c1a5dc0(param_3);
  func_0x00010c1b4680(param_3);
  func_0x00010c1b71e0(param_3);
  lVar23 = (long)_DAT_112712d38;
  lVar2 = *(long *)(param_1 + lVar23);
  if (lVar2 == 0) {
LAB_104da5e50:
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117e340;
  }
  else {
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_104da5e50;
    lVar3 = *(long *)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_104da5e50;
    }
    lVar5 = *(long *)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar6 == 0) goto LAB_104da5e50;
    puVar7 = *(undefined **)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar9 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c22c980(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar9;
    func_0x00010c25cb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(uVar22);
    _objc_release(uVar9);
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar7 != 0) {
      uVar10 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar10;
      func_0x00010c25cae0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c22c980();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar11;
      func_0x00010c25cb00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(uVar22);
      _objc_release(uVar10);
      puVar8 = puVar12;
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar13 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar13;
    func_0x00010bfb18a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010c089720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar15 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar15;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar16;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c105660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar11);
    _objc_release(uVar16);
    _objc_release(uVar10);
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar22);
    _objc_release(uVar13);
    _objc_release(puVar8);
  }
  ppuVar20 = ppuVar1;
  func_0x00010c1b7240(param_3);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar20);
  lVar23 = (long)_DAT_112712d38;
  lVar2 = *(long *)(param_3 + lVar23);
  if (lVar2 == 0) {
LAB_104da5f84:
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117e358;
  }
  else {
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar4 == 0) goto LAB_104da5f84;
    uVar9 = *(undefined8 *)(param_3 + lVar23);
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar9;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
    _objc_release(uVar9);
  }
  ppuVar19 = &PTR____CFConstantStringClassReference_110db27f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db27f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar20);
  _objc_release(ppuVar19);
  func_0x00010c1a5dc0(ppuVar20);
  func_0x00010c1b4680(ppuVar20);
  func_0x00010c1b71e0(ppuVar20);
  ppuVar19 = ppuVar1;
  func_0x00010c1b7240(ppuVar20);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar19);
  lVar23 = (long)_DAT_112712d38;
  lVar2 = *(long *)((long)ppuVar20 + lVar23);
  if (lVar2 != 0) {
    func_0x00010c0f6920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      uVar10 = *(undefined8 *)((long)ppuVar20 + lVar23);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar22;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar22);
      _objc_release(uVar10);
      uVar22 = *(undefined8 *)((long)ppuVar20 + (long)_DAT_112712d30);
      uVar10 = *(undefined8 *)((long)ppuVar20 + lVar23);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31a80();
      func_0x00010bfe8300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar10);
      goto LAB_104da6188;
    }
  }
  uVar22 = 0;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117e370;
LAB_104da6188:
  ppuVar20 = &PTR____CFConstantStringClassReference_110db2818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar19);
  _objc_release(ppuVar20);
  func_0x00010c1b71e0(ppuVar19);
  func_0x00010c1a5dc0(ppuVar19);
  func_0x00010c1b4680(ppuVar19);
  ppuVar20 = ppuVar1;
  func_0x00010c1b7240(ppuVar19);
  _objc_release(ppuVar1);
  _objc_release(uVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar20);
  func_0x00010c267f00(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar19;
  func_0x00010bf6e080(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar20);
  _objc_release(puVar7);
  _objc_release(ppuVar19);
  func_0x00010bf46fc0(ppuVar1);
  func_0x00010c21e900(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104da5eb0; end: 104da602f; -[SCCommerceOrderDetailsViewController _configureShippingMethodCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da5eb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = (long)_DAT_112712d38;
  lVar1 = *(long *)(param_1 + lVar11);
  if (lVar1 == 0) {
LAB_104da5f84:
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e358;
  }
  else {
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_104da5f84;
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c22ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar3);
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110db27f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db27f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(param_3);
  _objc_release(ppuVar5);
  func_0x00010c1a5dc0(param_3);
  func_0x00010c1b4680(param_3);
  func_0x00010c1b71e0(param_3);
  ppuVar5 = ppuVar4;
  func_0x00010c1b7240(param_3);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  lVar11 = (long)_DAT_112712d38;
  lVar1 = *(long *)(param_3 + lVar11);
  if (lVar1 != 0) {
    func_0x00010c0f6920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(uVar6);
      uVar10 = *(undefined8 *)(param_3 + _DAT_112712d30);
      uVar6 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31a80();
      func_0x00010bfe8300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar6);
      goto LAB_104da6188;
    }
  }
  uVar10 = 0;
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e370;
LAB_104da6188:
  ppuVar7 = &PTR____CFConstantStringClassReference_110db2818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(ppuVar5);
  _objc_release(ppuVar7);
  func_0x00010c1b71e0(ppuVar5);
  func_0x00010c1a5dc0(ppuVar5);
  func_0x00010c1b4680(ppuVar5);
  ppuVar7 = ppuVar4;
  func_0x00010c1b7240(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  func_0x00010c267f00(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar5;
  func_0x00010bf6e080(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(puVar8);
  _objc_release(ppuVar5);
  func_0x00010bf46fc0(ppuVar4);
  func_0x00010c21e900(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104da6030; end: 104da6237; -[SCCommerceOrderDetailsViewController _configurePaymentMethodCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da6030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112712d38;
  lVar1 = *(long *)(param_1 + lVar10);
  if (lVar1 != 0) {
    func_0x00010c0f6920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c088be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(uVar3);
      uVar9 = *(undefined8 *)(param_1 + _DAT_112712d30);
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c0f6920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31a80();
      func_0x00010bfe8300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      goto LAB_104da6188;
    }
  }
  uVar9 = 0;
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_11117e370;
LAB_104da6188:
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7200(param_3);
  _objc_release(ppuVar6);
  func_0x00010c1b71e0(param_3);
  func_0x00010c1a5dc0(param_3);
  func_0x00010c1b4680(param_3);
  ppuVar6 = ppuVar5;
  func_0x00010c1b7240(param_3);
  _objc_release(ppuVar5);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf6e080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(puVar7);
  _objc_release(param_3);
  func_0x00010bf46fc0(uVar9);
  func_0x00010c21e900(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 104da6238; end: 104da62ff; -[SCCommerceOrderDetailsViewController _orderItemCellForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da6238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf6e080(lVar1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010bf46fc0(lVar3,param_2,*(undefined8 *)(param_1 + _DAT_112712d38),
                      *(undefined8 *)(param_1 + _DAT_112712d34));
  func_0x00010c21e900(lVar3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104da6300; end: 104da64ff; -[SCCommerceOrderDetailsViewController _summaryViewCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da6300(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  
  puVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    puVar1 = PTR_PTR_1126b0630;
    _objc_opt_class(PTR_PTR_1126b0630);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ec80(puVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),uVar7,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0630;
    _objc_alloc_init(PTR_PTR_1126b0630);
    puVar4 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    lVar5 = (long)_DAT_112712d4c;
    func_0x00010c2226c0(puVar3,param_2,*(undefined8 *)(param_1 + lVar5));
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar4);
    dVar6 = 0.0;
    func_0x00010c19f0e0(0,0,uVar7,0x3fe0000000000000,puVar1);
    func_0x00010bf8c020(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c19f0e0(0,dVar6 + 0.5,uVar7,*(undefined8 *)(param_1 + _DAT_112712d50),puVar3);
    func_0x00010c21e900(puVar2,param_2,0);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104da6500; end: 104da6d63; -[SCCommerceOrderDetailsViewController _setupHelpView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da6500(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar10 = (long)_DAT_112712d44;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar9;
  _objc_release(uVar7);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar9);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2838;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2838,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1);
  _objc_release(ppuVar2);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c4e0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar9);
  func_0x00010befbb60();
  func_0x0001008522a8();
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010befbd60(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2858;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2858,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar3);
  _objc_release(ppuVar2);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c4e0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar3);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c271420(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar8);
  _objc_release(puVar9);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c0bbfc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010befbd60(puVar3);
  _objc_retain(puVar3);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar11 = (long)_DAT_112712d38;
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c263000(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  _objc_release(uVar7);
  puVar8 = (undefined *)0x0;
  puVar4 = puVar3;
  if ((int)puVar9 != 0) {
    puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar7 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c263000(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010c13b440();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar7);
    func_0x00010c216260(puVar8);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c4e0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar8);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c271420(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar9);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
    _objc_retain(puVar3);
    func_0x00010c0bbfc0(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010befbd60(puVar8);
    _objc_release(puVar3);
    _objc_retain(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar4 = puVar8;
  }
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0caac0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  _objc_release(uVar7);
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c0caac0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar9);
    _objc_release(uVar7);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c4e0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar9);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c271420(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
    _objc_retain(puVar8);
    _objc_retain(puVar3);
    func_0x00010c0bbfc0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010befbd60(puVar9);
    _objc_retain(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar4 = puVar9;
  }
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5);
  _objc_release(ppuVar2);
  func_0x00010c213040(puVar5);
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar6);
  func_0x00010c165e20(puVar5);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
  _objc_retain(puVar4);
  func_0x00010c0bbfc0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  _objc_retain(puVar5);
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104da6d64; end: 104da75df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da6d64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
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
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(-*(double *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104da75e0; end: 104da76df;  */

void FUN_104da75e0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
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
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104da76e0; end: 104da7843; -[SCCommerceOrderDetailsViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104da76e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 unaff_d8;
  
  _objc_retain(param_5);
  lVar2 = param_2;
  func_0x00010be97b60(param_2,param_3,param_5);
  puVar1 = PTR_PTR_1126b0610;
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010c0caae0(PTR_PTR_1126b0610);
      unaff_d8 = param_1;
    }
    else if (lVar2 == 1) {
      uVar3 = *(undefined8 *)(param_2 + _DAT_112712d38);
      func_0x00010bf19f20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010c142240(param_5);
      uVar4 = uVar3;
      func_0x00010c0dfd40(uVar3,param_3,lVar2 + -1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0700(puVar1,param_3,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      unaff_d8 = param_1;
    }
  }
  else if (lVar2 == 2) {
    lVar2 = param_5;
    func_0x00010c142240();
    uVar5 = *(ulong *)(param_2 + _DAT_112712d38);
    func_0x00010bf19f20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    uVar4 = 0x4052000000000000;
    if (lVar2 + ~uVar6 != 5) {
      uVar4 = 0x404c800000000000;
    }
    unaff_d8 = 0x4059800000000000;
    if (lVar2 + ~uVar6 != 3) {
      unaff_d8 = uVar4;
    }
  }
  else if (lVar2 == 3) {
    unaff_d8 = *(undefined8 *)(param_2 + _DAT_112712d50);
  }
  _objc_release(param_5);
  return unaff_d8;
}



/* Entry: 104da7844; end: 104da7853; -[SCCommerceOrderDetailsViewController getTitle] */

void FUN_104da7844(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db28b8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110db28b8,0);
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



/* Entry: 104da7854; end: 104da78cf; -[SCCommerceOrderDetailsViewController leftButtonPressed] */

void FUN_104da7854(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010be3e680();
  if ((int)uVar1 != 0) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  puStack_28 = PTR_PTR_1126e42b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftButtonPressed_112601348);
  return;
}



/* Entry: 104da78d0; end: 104da792f; -[SCCommerceOrderDetailsViewController _isBeingPresented] */

bool FUN_104da78d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 1;
}



/* Entry: 104da7930; end: 104da7a63; -[SCCommerceOrderDetailsViewController _rowTypeForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da7930(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c142240();
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c142240();
    if (0 < (long)uVar1) {
      uVar1 = param_3;
      func_0x00010c142240();
      uVar2 = *(ulong *)(param_1 + _DAT_112712d38);
      func_0x00010bf19f20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      if (uVar1 <= uVar3) {
        uVar5 = 1;
        goto LAB_104da7a44;
      }
    }
    uVar1 = param_3;
    func_0x00010c142240();
    lVar6 = (long)_DAT_112712d38;
    uVar2 = *(ulong *)(param_1 + lVar6);
    func_0x00010bf19f20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (uVar3 < uVar1) {
      uVar1 = param_3;
      func_0x00010c142240();
      lVar4 = *(long *)(param_1 + lVar6);
      func_0x00010bf19f20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      _objc_release(uVar2);
      uVar5 = 2;
      if (lVar6 + 6U < uVar1) {
        uVar5 = 3;
      }
    }
    else {
      _objc_release(uVar2);
      uVar5 = 3;
    }
  }
LAB_104da7a44:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 104da7a64; end: 104da7bcf; -[SCCommerceOrderDetailsViewController _didTapMerchantEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7a64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar6 = (long)_DAT_112712d38;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0caac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082d00(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0caac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db28d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc2f20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25cda0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(puVar2,param_2,puVar5,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 104da7bd0; end: 104da7c97; -[SCCommerceOrderDetailsViewController _didTapMerchantWebButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7bd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112712d38;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c263000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar1 != 0) && (lVar1 = *(long *)(param_1 + lVar4), lVar1 != 0)) {
      func_0x00010c263000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c263000(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar3,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be7f640(param_1,param_2,puVar3);
        _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 104da7c98; end: 104da7d0f; -[SCCommerceOrderDetailsViewController _didTapMerchantTerms] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7c98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712d38);
  func_0x00010c26b4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7f640(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da7d10; end: 104da7d87; -[SCCommerceOrderDetailsViewController _didTapMerchantReturnPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712d38);
  func_0x00010c13fc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7f640(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104da7d88; end: 104da7d8b; -[SCCommerceOrderDetailsViewController _presentWebViewWithUrl:] */

void FUN_104da7d88(void)

{
  return;
}



/* Entry: 104da7d8c; end: 104da7dbb; -[SCCommerceOrderDetailsViewController displayId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7d8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712d48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104da7dbc; end: 104da7ddb; -[SCCommerceOrderDetailsViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7dbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712d28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104da7ddc; end: 104da7deb; -[SCCommerceOrderDetailsViewController commerceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da7ddc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712d2c);
}



/* Entry: 104da7dec; end: 104da7dfb; -[SCCommerceOrderDetailsViewController order] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da7dec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712d38);
}



/* Entry: 104da7dfc; end: 104da7e0b; -[SCCommerceOrderDetailsViewController theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104da7dfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712d24);
}



/* Entry: 104da7e0c; end: 104da7e1b; -[SCCommerceOrderDetailsViewController setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112712d24) = param_3;
  return;
}



/* Entry: 104da7e1c; end: 104da7ec7; -[SCCommerceOrderDetailsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da7e1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712d38,0);
  _objc_storeStrong(param_1 + _DAT_112712d2c,0);
  _objc_destroyWeak(param_1 + _DAT_112712d28);
  _objc_storeStrong(param_1 + _DAT_112712d40,0);
  _objc_storeStrong(param_1 + _DAT_112712d34,0);
  _objc_storeStrong(param_1 + _DAT_112712d30,0);
  _objc_storeStrong(param_1 + _DAT_112712d4c,0);
  _objc_storeStrong(param_1 + _DAT_112712d48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712d44,0);
  return;
}



/* Entry: 104da7ec8; end: 104da8087; -[SCCommerceOrderHistoryViewController initWithUserSession:commerceLogger:paymentSettingsImageProvider:userBlizzardLogger:compositeImageFetcher:orderList:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104da7ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e42b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithUserBlizzardLogger__1125f4460,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112712d54),param_3);
    lVar4 = (long)_DAT_112712d58;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712d5c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712d60;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112712d64;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712d68);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712d68) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112712d6c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    func_0x00010bebe140(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104da8088; end: 104da80cf; -[SCCommerceOrderHistoryViewController loadView] */

void FUN_104da8088(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010beb0580(param_1);
  return;
}



/* Entry: 104da80d0; end: 104da815b; -[SCCommerceOrderHistoryViewController viewDidLoad] */

void FUN_104da80d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  return;
}



/* Entry: 104da815c; end: 104da81e3; -[SCCommerceOrderHistoryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da815c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126e42b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712d70);
  *(long **)(param_1 + _DAT_112712d70) = plVar1;
  _objc_release(uVar2);
  func_0x00010c0abc20(*(undefined8 *)(param_1 + _DAT_112712d5c));
  return;
}



/* Entry: 104da81e4; end: 104da823f; -[SCCommerceOrderHistoryViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da81e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c0abb20(*(undefined8 *)(param_1 + _DAT_112712d5c));
  return;
}



/* Entry: 104da8240; end: 104da8373; -[SCCommerceOrderHistoryViewController _setupTableView] */

void FUN_104da8240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_4;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_5,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  puVar4 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(uVar1,param_5,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar1 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(0,0,param_3,0x3f847ae140000000,puVar3);
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211680();
  _objc_release(param_4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


