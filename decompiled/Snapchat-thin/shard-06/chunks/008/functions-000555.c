/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e9d964; end: 104e9d9a3; -[SCPostRegAddFriendsBusinessLogic _markSkipVisibleIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9d964(long param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  
  iVar1 = (int)param_1;
  lVar2 = (long)_DAT_1127157b4;
  dVar3 = *(double *)(param_1 + lVar2);
  if ((dVar3 == 0.0) && (func_0x00010be43c40(), iVar1 != 0)) {
    func_0x00010bd55ed4();
    *(double *)(param_1 + lVar2) = dVar3;
  }
  return;
}



/* Entry: 104e9d9a4; end: 104e9dbc3; -[SCPostRegAddFriendsBusinessLogic _emitPageEndEventWithExitAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9d9a4(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if ((*(byte *)(param_2 + (long)_DAT_1127157b8) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + (long)_DAT_1127157b8) = 1;
  func_0x00010bd55ed4();
  lVar13 = (long)(param_1 - *(double *)(param_2 + (long)_DAT_112715770));
  lVar14 = (long)(param_1 - *(double *)(param_2 + (long)_DAT_1127157b4));
  if (*(double *)(param_2 + (long)_DAT_112715770) <= 0.0) {
    lVar13 = 0;
  }
  if (*(double *)(param_2 + (long)_DAT_1127157b4) <= 0.0) {
    lVar14 = -1;
  }
  lVar15 = (long)_DAT_112715750;
  lVar2 = *(long *)(param_2 + lVar15);
  func_0x00010c29eb80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_2 + lVar15);
  func_0x00010c29ed00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar5 = *(ulong *)(param_2 + (long)_DAT_11271574c);
  func_0x00010c0f1140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b1980;
  _objc_alloc();
  uVar7 = param_2;
  func_0x00010be43c40();
  uVar8 = uVar5;
  func_0x00010c10ab40();
  uVar1 = *(undefined1 *)(param_2 + (long)_DAT_11271577c);
  func_0x00010c10a940();
  uVar9 = uVar5;
  func_0x00010bf05da0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c2936c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a8a0();
  uVar11 = uVar5;
  func_0x00010c15f480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011020(puVar6,param_3,param_4,lVar13,uVar7 & 0xffffffff,lVar14,uVar8 & 0xffffffff,
                      lVar15 + lVar3,uVar1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(param_2 + (long)_DAT_112715710);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abbc0();
  _objc_release(uVar12);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104e9dbc4; end: 104e9dc1b; -[SCPostRegAddFriendsBusinessLogic _autoScrollIfNeeded:hasSelected:] */

void FUN_104e9dbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010bf00d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010beda2c0(param_1,param_2,param_3);
  }
  else {
    func_0x00010bdd1900();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e9dc1c; end: 104e9dc9f; -[SCPostRegAddFriendsBusinessLogic _updateLargestSelectedIndexIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104e9dc1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    bVar2 = false;
    *(undefined8 *)(param_1 + _DAT_112715700) = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_1;
    func_0x00010be63100(param_1,param_2,param_3);
    bVar2 = *(long *)(param_1 + _DAT_112715700) < lVar1;
    *(long *)(param_1 + _DAT_112715700) = lVar1;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 104e9dca0; end: 104e9de5f; -[SCPostRegAddFriendsBusinessLogic _autoScrollWithSelectedIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9dca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beda2c0();
  if ((int)lVar1 != 0) {
    lVar5 = (long)_DAT_112715788;
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c246d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    lVar2 = lVar1;
    func_0x00010bfece40();
    if (lVar2 != 0x7fffffffffffffff) {
      lVar2 = lVar1;
      func_0x00010c0dfd40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010c0840e0();
      func_0x00010bfed060();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c142240();
      lVar5 = *(long *)(param_1 + lVar5);
      func_0x00010c0deec0();
      if ((long)puVar4 < lVar5) {
        func_0x00010be9bec0(puStack_68[3],param_1);
      }
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    __Block_object_dispose(&uStack_70,8);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e9de60; end: 104e9deef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104e9de60(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(char *)(lVar2 + _DAT_11271576c) == '\x01') {
    lVar2 = param_3;
    func_0x00010c0840e0();
    if (lVar2 == 0) {
      bVar1 = false;
      goto LAB_104e9ded0;
    }
    lVar2 = *(long *)(param_2 + 0x20);
  }
  func_0x00010be16be0(lVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1;
  bVar1 = 0.0 <= (double)(long)*(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18);
LAB_104e9ded0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104e9def0; end: 104e9df53; -[SCPostRegAddFriendsBusinessLogic _newLargestSelectedIndex:] */

undefined8 FUN_104e9def0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c246d00(param_3,param_2,PTR_s_compare__1125ae690);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0840e0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104e9df54; end: 104e9e01b; -[SCPostRegAddFriendsBusinessLogic _findRemainderHeightForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104e9df54(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_112715788;
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bf33b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bfb68e0();
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c2a71e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar3,param_6,uVar2);
  _objc_release(uVar2);
  dVar5 = *(double *)(param_5 + _DAT_112715778);
  _objc_release(uVar1);
  return param_2 - dVar5;
}



/* Entry: 104e9e01c; end: 104e9e11b; -[SCPostRegAddFriendsBusinessLogic _scrollFromIndexPath:endIndexPath:remainderHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e01c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_112715788;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  _objc_retain(param_8);
  func_0x00010bf33b60(uVar2,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  dVar4 = param_2;
  func_0x00010bf33b60(uVar1,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bfb68e0(uVar1);
  param_2 = dVar4 - param_2;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar3));
  dVar5 = dVar4;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  param_1 = param_1 + dVar4 + param_2;
  if (dVar5 - param_4 <= param_1) {
    param_1 = dVar5 - param_4;
  }
  if (dVar4 < param_1) {
    func_0x00010c182300(0,*(undefined8 *)(param_5 + lVar3),param_6,1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e9e11c; end: 104e9e12b; -[SCPostRegAddFriendsBusinessLogic collectionViewGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e9e11c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112715784);
}



/* Entry: 104e9e12c; end: 104e9e137; -[SCPostRegAddFriendsBusinessLogic setCollectionViewGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e12c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104e9e138; end: 104e9e303; -[SCPostRegAddFriendsBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e138(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715784,0);
  _objc_storeStrong(param_1 + _DAT_112715754,0);
  _objc_storeStrong(param_1 + _DAT_112715750,0);
  _objc_storeStrong(param_1 + _DAT_112715788,0);
  _objc_storeStrong(param_1 + _DAT_112715734,0);
  _objc_storeStrong(param_1 + _DAT_112715738,0);
  _objc_storeStrong(param_1 + _DAT_1127157ac,0);
  _objc_storeStrong(param_1 + _DAT_112715730,0);
  _objc_storeStrong(param_1 + _DAT_1127157a8,0);
  _objc_storeStrong(param_1 + _DAT_112715758,0);
  _objc_storeStrong(param_1 + _DAT_112715764,0);
  _objc_storeStrong(param_1 + _DAT_112715744,0);
  _objc_storeStrong(param_1 + _DAT_11271578c,0);
  _objc_storeStrong(param_1 + _DAT_1127157a0,0);
  _objc_storeStrong(param_1 + _DAT_11271574c,0);
  _objc_storeStrong(param_1 + _DAT_11271572c,0);
  _objc_storeStrong(param_1 + _DAT_112715728,0);
  _objc_storeStrong(param_1 + _DAT_112715724,0);
  _objc_storeStrong(param_1 + _DAT_112715718,0);
  _objc_storeStrong(param_1 + _DAT_112715720,0);
  _objc_storeStrong(param_1 + _DAT_112715714,0);
  _objc_storeStrong(param_1 + _DAT_11271571c,0);
  _objc_storeStrong(param_1 + _DAT_112715710,0);
  _objc_storeStrong(param_1 + _DAT_112715780,0);
  _objc_storeStrong(param_1 + _DAT_11271570c,0);
  _objc_storeStrong(param_1 + _DAT_112715708,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715704);
  return;
}



/* Entry: 104e9e304; end: 104e9e4e7; -[SCPostRegAddFriendsViewController initWithScreen:styleHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e9e304(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e4b48;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    lVar7 = (long)_DAT_1127157bc;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(long *)((long)puVar2 + lVar7) = param_3;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_1127157c0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127157c4) = 0;
    func_0x00010c20eaa0(puVar2);
    puVar6 = (undefined1 *)puVar2;
    func_0x00010bfdf5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8460();
    _objc_release(puVar6);
    puVar6 = (undefined1 *)puVar2;
    func_0x00010bfdf5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar6);
    func_0x00010c21e060(puVar2);
    func_0x00010be3a720(puVar2);
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___UITraitUserInterfaceStyle_1126b1988;
      _objc_opt_self();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1266a0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar2;
  }
  ___stack_chk_fail();
  func_0x00010be39840();
  puVar6 = *(undefined1 **)(param_3 + _DAT_1127157c8);
  _objc_retain(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 104e9e4e8; end: 104e9e51f; -[SCPostRegAddFriendsViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e4e8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be39840();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127157c8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e9e520; end: 104e9e563; -[SCPostRegAddFriendsViewController dealloc] */

void FUN_104e9e520(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8bbe0();
  puStack_28 = PTR_PTR_1126e4b48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e9e564; end: 104e9e6b3; -[SCPostRegAddFriendsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e564(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e4b48;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c25fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010bec1580(param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  puVar1 = PTR_PTR_1126b1990;
  func_0x00010c29cac0(PTR_PTR_1126b1990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e9e6b4; end: 104e9e75b; -[SCPostRegAddFriendsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e6b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4b48;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar1 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  puVar2 = PTR_PTR_1126b1990;
  func_0x00010c29c7c0(in_d3,PTR_PTR_1126b1990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 104e9e75c; end: 104e9e80b; -[SCPostRegAddFriendsViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e75c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e9e80c; end: 104e9e853;  */

void FUN_104e9e80c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e9e854; end: 104e9e8fb; -[SCPostRegAddFriendsViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010bea55e0(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c07e3a0(param_3);
  func_0x00010bea79c0(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010bea2be0(param_1,param_2,uVar1);
  func_0x00010bea3060(param_1,param_2,param_3);
  uVar1 = param_3;
  func_0x00010c07e3e0();
  if ((int)uVar1 == 0) {
    func_0x00010be03660(param_1);
  }
  else {
    func_0x00010bebaf40(param_1);
  }
  uVar1 = param_3;
  func_0x00010bf72700();
  *(char *)(param_1 + _DAT_1127157cc) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e9e8fc; end: 104e9e9a3; -[SCPostRegAddFriendsViewController _initCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e8fc(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8c38;
  func_0x000105173f4c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127157c8;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined ***)(param_2 + lVar3) = ppuVar1;
  _objc_release(uVar2);
  func_0x00010bf69140(*(undefined8 *)(param_2 + _DAT_1127157c0));
  func_0x00010c181f80(0,0,param_1 + 48.0,0,*(undefined8 *)(param_2 + lVar3));
  func_0x00010befa220(*(undefined8 *)(param_2 + lVar3),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110db8c58,1,0);
  *(undefined1 *)(param_2 + _DAT_1127157d0) = 1;
  return;
}



/* Entry: 104e9e9a4; end: 104e9e9f3; -[SCPostRegAddFriendsViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9e9a4(long param_1)

{
  func_0x00010be3a040();
  func_0x00010be3a060(param_1);
  if (*(char *)(param_1 + _DAT_1127157c4) == '\x01') {
    func_0x00010bdc78a0();
  }
  else {
    func_0x00010bdc7360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc7470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addLoadingIndicator_11254f6b8);
  return;
}



/* Entry: 104e9e9f4; end: 104e9eadb; -[SCPostRegAddFriendsViewController _initNewStyleSkipButton] */

void FUN_104e9e9f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db8818);
  func_0x00010c1c3ae0(0,puVar1);
  puVar2 = puVar1;
  func_0x00010c165e00(puVar1,param_2,0);
  func_0x000108b9a84c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010c216380(puVar1,param_2,0xc0,0);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__skipButtonPressed_1125268c8,0x40);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e9eadc; end: 104e9eb97; -[SCPostRegAddFriendsViewController _initNewStyleTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9eadc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010b2d0b44();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_1127157c4) == '\x01') {
    func_0x00010b2d0b74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104e9eb98; end: 104e9ef0b; -[SCPostRegAddFriendsViewController _addLegacyContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9eb98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  byte bStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1998;
  _objc_alloc();
  lVar10 = (long)_DAT_1127157c0;
  func_0x00010c04ed60();
  lVar12 = (long)_DAT_1127157d4;
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c160fc0(uVar7,param_2,&PTR____CFConstantStringClassReference_110db8c78);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar12),param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar12),param_2,param_1,
                      PTR_s__continueButtonPressed_112525e08,0x40);
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  dVar13 = 15.0;
  func_0x00010c107060(0x402e000000000000,*(undefined8 *)(param_1 + lVar12));
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  dVar14 = dVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(param_1 + lVar10));
  uVar7 = uVar2;
  func_0x00010bf493c0(-dVar14,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127157d8;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = uVar7;
  _objc_release(uVar8);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar10),param_2,0);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127157dc;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = uVar7;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uVar2);
  puStack_a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  lStack_98 = lVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf49420(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_90 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf49420(dVar13);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)(param_1 + lVar11);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  lVar12 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_104e9ef0c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aec40;
  uStack_100 = uVar2;
  uStack_f8 = uVar5;
  uStack_f0 = uVar7;
  uStack_e8 = uVar8;
  lStack_e0 = lVar11;
  lStack_d8 = lVar10;
  lStack_d0 = lVar3;
  lStack_c8 = lVar9;
  lStack_c0 = lVar4;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127157e0;
  uVar7 = *(undefined8 *)(lVar12 + lVar11);
  *(undefined **)(lVar12 + lVar11) = puVar6;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(lVar12 + lVar11);
  func_0x00010c160fc0(uVar7,param_2,&PTR____CFConstantStringClassReference_110db8c78);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar12 + lVar11),param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(lVar12 + lVar11),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(lVar12 + lVar11),param_2,lVar12,
                      PTR_s__continueButtonPressed_112525e08,0x40);
  lVar9 = lVar12;
  func_0x00010c29bf00(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  uVar2 = *(undefined8 *)(lVar12 + lVar11);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  func_0x00010c29bf00(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(lVar12 + _DAT_1127157c0));
  uVar7 = uVar2;
  func_0x00010bf493c0(-dVar13,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127157d8;
  uVar8 = *(undefined8 *)(lVar12 + lVar10);
  *(undefined8 *)(lVar12 + lVar10) = uVar7;
  _objc_release(uVar8);
  func_0x00010c162480(*(undefined8 *)(lVar12 + lVar10),param_2,0);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(lVar12 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  uStack_130 = uVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar9;
  func_0x00010bf493a0(uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127157dc;
  uVar2 = *(undefined8 *)(lVar12 + lVar9);
  *(undefined8 *)(lVar12 + lVar9) = uVar7;
  _objc_release(uVar2);
  puStack_148 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_120 = *(undefined8 *)(lVar12 + lVar9);
  uVar2 = *(undefined8 *)(lVar12 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  uStack_140 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4038000000000000,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar12 + lVar11);
  uStack_118 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar12;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf493c0(0xc038000000000000,uVar8,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_120,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_148,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0x1cf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(*(undefined8 *)(lVar12 + lVar11),param_2,0xd4,0);
  func_0x00010c16e480(*(undefined8 *)(lVar12 + lVar11),param_2,0xa1,0);
  func_0x00010c1a9fc0(*(undefined8 *)(lVar12 + lVar11),param_2,puVar1,0);
  uVar2 = 0xd4;
  func_0x00010c1aab40(*(undefined8 *)(lVar12 + lVar11),param_2,0xd4,0);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_104e9f2e4;
  lStack_190 = lVar9;
  lStack_188 = lVar11;
  uStack_180 = uVar7;
  lStack_178 = lVar4;
  puStack_170 = puVar1;
  lStack_168 = lVar12;
  ppuStack_160 = &puStack_b0;
  _objc_retain(uVar2);
  uVar7 = uVar2;
  func_0x00010c06f5a0();
  if ((int)uVar7 == 0) {
    bStack_198 = 0;
  }
  else {
    uVar7 = uVar2;
    func_0x00010c076be0();
    bStack_198 = (byte)uVar7 ^ 1;
  }
  lVar9 = 0x24;
  if (puVar6[_DAT_1127157c4] == '\0') {
    lVar9 = 0x18;
  }
  uVar8 = *(undefined8 *)(puVar6 + *(int *)(&DAT_1127157bc + lVar9));
  uVar7 = uVar2;
  func_0x00010bf4fb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar8,param_2,uVar7,0);
  _objc_release(uVar7);
  puVar1 = puVar6;
  func_0x00010c29bf00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(puVar1);
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_104e9f410;
  puStack_1a8 = &UNK_110845ce0;
  puStack_1a0 = puVar6;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_1c0,0);
  _objc_release(uVar2);
  return;
}



/* Entry: 104e9ef0c; end: 104e9f2e3; -[SCPostRegAddFriendsViewController _addNewStyleContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9ef0c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  byte bStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127157e0;
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  *(undefined **)(param_2 + lVar9) = puVar1;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c160fc0(uVar6,param_3,&PTR____CFConstantStringClassReference_110db8c78);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_2 + lVar9),param_3,uVar6);
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar9),param_3,0);
  func_0x00010befbd60(*(undefined8 *)(param_2 + lVar9),param_3,param_2,
                      PTR_s__continueButtonPressed_112525e08,0x40);
  lVar8 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  uVar2 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(param_2 + _DAT_1127157c0));
  uVar6 = uVar2;
  func_0x00010bf493c0(-param_1,uVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127157d8;
  uVar7 = *(undefined8 *)(param_2 + lVar10);
  *(undefined8 *)(param_2 + lVar10) = uVar6;
  _objc_release(uVar7);
  func_0x00010c162480(*(undefined8 *)(param_2 + lVar10),param_3,0);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  uStack_90 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar8;
  func_0x00010bf493a0(uVar6,param_3,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_1127157dc;
  uVar2 = *(undefined8 *)(param_2 + lVar8);
  *(undefined8 *)(param_2 + lVar8) = uVar6;
  _objc_release(uVar2);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_80 = *(undefined8 *)(param_2 + lVar8);
  uVar2 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  uStack_a0 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4038000000000000,uVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  uStack_78 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493c0(0xc038000000000000,uVar7,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(uStack_a0);
  _objc_release(lStack_98);
  _objc_release(lStack_88);
  _objc_release(uStack_90);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_3,0x1cf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(*(undefined8 *)(param_2 + lVar9),param_3,0xd4,0);
  func_0x00010c16e480(*(undefined8 *)(param_2 + lVar9),param_3,0xa1,0);
  func_0x00010c1a9fc0(*(undefined8 *)(param_2 + lVar9),param_3,puVar1,0);
  uVar2 = 0xd4;
  func_0x00010c1aab40(*(undefined8 *)(param_2 + lVar9),param_3,0xd4,0);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_104e9f2e4;
  lStack_f0 = lVar8;
  lStack_e8 = lVar9;
  uStack_e0 = uVar6;
  lStack_d8 = lVar4;
  puStack_d0 = puVar1;
  lStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar2);
  uVar6 = uVar2;
  func_0x00010c06f5a0();
  if ((int)uVar6 == 0) {
    bStack_f8 = 0;
  }
  else {
    uVar6 = uVar2;
    func_0x00010c076be0();
    bStack_f8 = (byte)uVar6 ^ 1;
  }
  lVar8 = 0x24;
  if (puVar5[_DAT_1127157c4] == '\0') {
    lVar8 = 0x18;
  }
  uVar7 = *(undefined8 *)(puVar5 + *(int *)(&DAT_1127157bc + lVar8));
  uVar6 = uVar2;
  func_0x00010bf4fb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar7,param_3,uVar6,0);
  _objc_release(uVar6);
  puVar1 = puVar5;
  func_0x00010c29bf00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(puVar1);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_104e9f410;
  puStack_108 = &UNK_110845ce0;
  puStack_100 = puVar5;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_120,0);
  _objc_release(uVar2);
  return;
}



/* Entry: 104e9f2e4; end: 104e9f40f; -[SCPostRegAddFriendsViewController _setContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9f2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  byte bStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06f5a0();
  if ((int)uVar1 == 0) {
    bStack_48 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c076be0();
    bStack_48 = (byte)uVar1 ^ 1;
  }
  lVar2 = 0x24;
  if (*(char *)(param_1 + _DAT_1127157c4) == '\0') {
    lVar2 = 0x18;
  }
  uVar3 = *(undefined8 *)(param_1 + *(int *)(&DAT_1127157bc + lVar2));
  uVar1 = param_3;
  func_0x00010bf4fb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3,param_2,uVar1,0);
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e9f410;
  puStack_58 = &UNK_110845ce0;
  lStack_50 = param_1;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_70,0);
  _objc_release(param_3);
  return;
}



/* Entry: 104e9f410; end: 104e9f47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9f410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c162480(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127157d8),param_2,
                      *(undefined1 *)(param_1 + 0x28));
  func_0x00010c162480(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127157dc),param_2,
                      (*(byte *)(param_1 + 0x28) ^ 0xff) & 1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e9f480; end: 104e9f8f3; -[SCPostRegAddFriendsViewController _addLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9f480(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar19 = (long)_DAT_1127157e4;
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar2;
  _objc_release(uVar16);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar19));
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar8);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(lVar18);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar18 = (long)_DAT_1127157e8;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar2;
  _objc_release(uVar16);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar2);
  func_0x00010b2d0b2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar2);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar18));
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  func_0x00010beef8c0(puVar2);
  uVar13 = (uint)puVar14;
  _objc_release(puVar8);
  _objc_release(uVar16);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar17);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_1127157e8;
  uVar1 = (uint)*(undefined8 *)(lVar9 + lVar17);
  func_0x00010c074c20();
  if (uVar13 != uVar1) {
    return;
  }
  lVar18 = (long)_DAT_1127157e4;
  func_0x00010c1a7f60(*(undefined8 *)(lVar9 + lVar18));
  func_0x00010c1a7f60(*(undefined8 *)(lVar9 + lVar17));
  uVar16 = *(undefined8 *)(lVar9 + lVar18);
  if (((uVar13 ^ 1) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 104e9f8f4; end: 104e9f97f; -[SCPostRegAddFriendsViewController _setLoadingIndicatorVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9f8f4(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127157e8;
  uVar1 = (uint)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c074c20();
  if (param_3 != uVar1) {
    return;
  }
  lVar4 = (long)_DAT_1127157e4;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  if (((param_3 ^ 1) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 104e9f980; end: 104e9f9b7; -[SCPostRegAddFriendsViewController _setSkipButtonVisibility:] */

void FUN_104e9f980(undefined8 param_1)

{
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e9f9b8; end: 104e9f9c7; -[SCPostRegAddFriendsViewController _setCollectionViewVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9f9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127157c8),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 104e9f9c8; end: 104e9fa13; -[SCPostRegAddFriendsViewController _skipButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9f9c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  puVar1 = PTR_PTR_1126b1990;
  func_0x00010c269340(PTR_PTR_1126b1990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e9fa14; end: 104e9fa5f; -[SCPostRegAddFriendsViewController _continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9fa14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  puVar1 = PTR_PTR_1126b1990;
  func_0x00010c25ed20(PTR_PTR_1126b1990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e9fa60; end: 104e9fd0b; -[SCPostRegAddFriendsViewController _showSkipDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9fa60(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **unaff_x26;
  long lVar8;
  undefined **unaff_x28;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127157ec;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = auStack_90;
    _objc_initWeak(puVar1,param_1);
    puVar2 = PTR_PTR_1126aed70;
    func_0x00010b2d0cdc();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104e9fd0c;
    puStack_a0 = &UNK_1108482a8;
    unaff_x26 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000108b9a84c();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x104e9fd38;
    puStack_c8 = &UNK_1108482a8;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar1 = param_1;
    func_0x00010bebc700(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bebc6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar2;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    func_0x00010c18b5e0(puVar4);
    func_0x00010c10eda0(param_1);
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
    param_1 = auStack_90;
    _objc_destroyWeak();
    unaff_x28 = &puStack_e0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x20));
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e9fd0c; end: 104e9fd63;  */

void FUN_104e9fd0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e9fd64; end: 104e9fdaf; -[SCPostRegAddFriendsViewController _dismissSkipDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9fd64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127157ec;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf84b00(param_1,param_2,1,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104e9fdb0; end: 104e9fdfb; -[SCPostRegAddFriendsViewController _skipAlertSkipButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9fdb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  puVar1 = PTR_PTR_1126b1990;
  func_0x00010bf47fe0(PTR_PTR_1126b1990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e9fdfc; end: 104e9fe47; -[SCPostRegAddFriendsViewController _skipAlertGoBackButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9fdfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  puVar1 = PTR_PTR_1126b1990;
  func_0x00010c269060(PTR_PTR_1126b1990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e9fe48; end: 104e9fe4b; -[SCPostRegAddFriendsViewController _skipDialogTitle] */

void FUN_104e9fe48(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f62d58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f62d58,
                      &PTR____CFConstantStringClassReference_110f62b98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104e9fe4c; end: 104e9fe4f; -[SCPostRegAddFriendsViewController _skipDialogBody] */

void FUN_104e9fe4c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f62d78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f62d78,
                      &PTR____CFConstantStringClassReference_110f62b98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104e9fe50; end: 104e9ff1b; -[SCPostRegAddFriendsViewController observeValueForKeyPath:ofObject:change:context:] */

void FUN_104e9fe50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    func_0x00010be84160(param_1);
    func_0x00010be843a0(param_1);
    func_0x00010be8bbc0(param_1);
  }
  puStack_48 = PTR_PTR_1126e4b48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,param_4,
                      param_5,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e9ff1c; end: 104ea011f; -[SCPostRegAddFriendsViewController _publishMaxVisibleCellIndexIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e9ff1c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  
  lVar10 = (long)_DAT_1127157f0;
  if ((*(byte *)(param_5 + lVar10) & 1) != 0) {
    return;
  }
  lVar8 = (long)_DAT_1127157c8;
  uVar2 = *(ulong *)(param_5 + lVar8);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar7 = (long)_DAT_1127157cc;
  cVar1 = *(char *)(param_5 + lVar7);
  uVar2 = uVar3;
  func_0x00010bf529e0();
  if (cVar1 == '\x01') {
    if (uVar2 < 2) goto LAB_104ea00fc;
  }
  else if (uVar2 == 0) goto LAB_104ea00fc;
  uVar2 = uVar3;
  if ((*(byte *)(param_5 + lVar7) & 1) == 0) {
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dfd40(uVar3,param_6,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c08c980(uVar4,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar9 = *(undefined8 *)(param_5 + lVar8);
  uVar6 = uVar9;
  func_0x00010c2a71e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = param_4;
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar9,param_6,uVar6);
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar5);
  *(undefined1 *)(param_5 + lVar10) = 1;
  uVar6 = *(undefined8 *)(param_5 + _DAT_1127157bc);
  puVar5 = PTR_PTR_1126b1990;
  func_0x00010bf40820(PTR_PTR_1126b1990,param_6,(long)((dVar11 - param_2) / param_4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar6,param_6,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_104ea00fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104ea0120; end: 104ea01af; -[SCPostRegAddFriendsViewController _publishScrolledIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea0120(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127157f4;
  if (((*(byte *)(param_3 + lVar3) & 1) == 0) &&
     (func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_1127157c8)), 1.0 < param_2)) {
    *(undefined1 *)(param_3 + lVar3) = 1;
    uVar2 = *(undefined8 *)(param_3 + _DAT_1127157bc);
    puVar1 = PTR_PTR_1126b1990;
    func_0x00010bf7a4a0(PTR_PTR_1126b1990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104ea01b0; end: 104ea01df; -[SCPostRegAddFriendsViewController _removeContentOffsetObserverIfDone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea01b0(long param_1)

{
  if ((*(char *)(param_1 + _DAT_1127157f0) == '\x01') &&
     (*(char *)(param_1 + _DAT_1127157f4) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be8bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeContentOffsetObserverIfNe_112580898)
    ;
    return;
  }
  return;
}



/* Entry: 104ea01e0; end: 104ea0217; -[SCPostRegAddFriendsViewController _removeContentOffsetObserverIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea01e0(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127157d0) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_1127157d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127157c8),PTR_s_removeObserver_forKeyPath__112628f80,
               param_1,&PTR____CFConstantStringClassReference_110db8c58);
    return;
  }
  return;
}



/* Entry: 104ea0218; end: 104ea027b; -[SCPostRegAddFriendsViewController dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea0218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127157ec);
  *(undefined8 *)(param_1 + _DAT_1127157ec) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127157bc);
  puVar2 = PTR_PTR_1126b1990;
  func_0x00010c269060(PTR_PTR_1126b1990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ea027c; end: 104ea02db; -[SCPostRegAddFriendsViewController traitCollectionDidChange:] */

void FUN_104ea027c(undefined8 param_1)

{
  int iVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4b48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    func_0x00010bde8780(param_1);
  }
  return;
}



/* Entry: 104ea02dc; end: 104ea0353; -[SCPostRegAddFriendsViewController _continueButtonDarkModeUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea02dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c292b20();
  _objc_release(lVar3);
  uVar1 = 0xa1;
  if (lVar2 != 2) {
    uVar1 = 0xd4;
  }
  lVar3 = (long)_DAT_1127157e0;
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c16e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setBackgroundColor_forState__112639340,uVar1,0);
  return;
}



/* Entry: 104ea0354; end: 104ea0363; -[SCPostRegAddFriendsViewController collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ea0354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127157c8);
}



/* Entry: 104ea0364; end: 104ea0423; -[SCPostRegAddFriendsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea0364(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127157c8,0);
  _objc_storeStrong(param_1 + _DAT_1127157ec,0);
  _objc_storeStrong(param_1 + _DAT_1127157e8,0);
  _objc_storeStrong(param_1 + _DAT_1127157e4,0);
  _objc_storeStrong(param_1 + _DAT_1127157d8,0);
  _objc_storeStrong(param_1 + _DAT_1127157dc,0);
  _objc_storeStrong(param_1 + _DAT_1127157e0,0);
  _objc_storeStrong(param_1 + _DAT_1127157d4,0);
  _objc_storeStrong(param_1 + _DAT_1127157c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127157bc,0);
  return;
}



/* Entry: 104ea0424; end: 104ea04bf; -[SCPostRegAddFriendsWorkflow initWithRouter:delegate:] */

undefined1 *
FUN_104ea0424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4b50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea04c0; end: 104ea04cb; -[SCPostRegAddFriendsWorkflow beginWorkflow] */

void FUN_104ea04c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showPostRegAddFriendsPageWithDel_11266bef8,param_1);
  return;
}



/* Entry: 104ea04cc; end: 104ea04ff; -[SCPostRegAddFriendsWorkflow postRegAddFriendsSkipped:] */

void FUN_104ea04cc(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef8fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea0500; end: 104ea0533; -[SCPostRegAddFriendsWorkflow postRegAddFriendsContinued:] */

void FUN_104ea0500(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef8fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea0534; end: 104ea055f; -[SCPostRegAddFriendsWorkflow .cxx_destruct] */

void FUN_104ea0534(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ea0560; end: 104ea05b7; +[SCPostRegAddFriendsAction collectionViewDidAppearWithMaxVisibleCellsCount:] */

void FUN_104ea0560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea05b8; end: 104ea0603; +[SCPostRegAddFriendsAction confirmSkip] */

void FUN_104ea05b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea0604; end: 104ea064f; +[SCPostRegAddFriendsAction didScroll] */

void FUN_104ea0604(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea0650; end: 104ea069b; +[SCPostRegAddFriendsAction submit] */

void FUN_104ea0650(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea069c; end: 104ea06e7; +[SCPostRegAddFriendsAction tapGoBackButton] */

void FUN_104ea069c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea06e8; end: 104ea0733; +[SCPostRegAddFriendsAction tapSkipButton] */

void FUN_104ea06e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea0734; end: 104ea078f; +[SCPostRegAddFriendsAction viewDidAppearWithHeaderHeight:] */

void FUN_104ea0734(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea0790; end: 104ea07d7; +[SCPostRegAddFriendsAction viewDidLoad] */

void FUN_104ea0790(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1990;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea07d8; end: 104ea07fb; -[SCPostRegAddFriendsAction copyWithZone:] */

undefined8 FUN_104ea07d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ea07fc; end: 104ea087b; -[SCPostRegAddFriendsAction hash] */

void FUN_104ea07fc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar2 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_20 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e4b58;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea087c; end: 104ea08bf; -[SCPostRegAddFriendsAction internalInit] */

void FUN_104ea087c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4b58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea08c0; end: 104ea098b; -[SCPostRegAddFriendsAction isEqual:] */

bool FUN_104ea08c0(ulong param_1,undefined8 param_2,ulong param_3)

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
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 104ea098c; end: 104ea0b47; -[SCPostRegAddFriendsAction matchViewDidLoad:submit:tapSkipButton:tapGoBackButton:confirmSkip:collectionViewDidAppear:viewDidAppear:didScroll:] */

void FUN_104ea098c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        if (param_3 == 0) goto LAB_104ea0ad8;
        pcVar2 = *(code **)(param_3 + 0x10);
        lVar1 = param_3;
      }
      else {
        if ((lVar1 != 1) || (param_4 == 0)) goto LAB_104ea0ad8;
        pcVar2 = *(code **)(param_4 + 0x10);
        lVar1 = param_4;
      }
    }
    else if (lVar1 == 2) {
      if (param_5 == 0) goto LAB_104ea0ad8;
      pcVar2 = *(code **)(param_5 + 0x10);
      lVar1 = param_5;
    }
    else {
      if ((lVar1 != 3) || (param_6 == 0)) goto LAB_104ea0ad8;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 != 4) {
      if ((lVar1 == 5) && (param_8 != 0)) {
        (**(code **)(param_8 + 0x10))(param_8,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_104ea0ad8;
    }
    if (param_7 == 0) goto LAB_104ea0ad8;
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
  }
  else {
    if (lVar1 == 6) {
      if (param_9 != 0) {
        (**(code **)(param_9 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_9);
      }
      goto LAB_104ea0ad8;
    }
    if ((lVar1 != 7) || (param_10 == 0)) goto LAB_104ea0ad8;
    pcVar2 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
  }
  (*pcVar2)(lVar1);
LAB_104ea0ad8:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea0b48; end: 104ea0c07; -[SCPostRegAddFriendsViewModel initWithIsLoading:isContinueButtonVisible:continueButtonText:isSkipDialogVisible:isSkipButtonVisible:snapchatterSelected:didAutoAdd:] */

undefined1 *
FUN_104ea0b48(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e4b60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined1 *)((long)puVar1 + 0xc) = param_8;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea0c08; end: 104ea0c2b; -[SCPostRegAddFriendsViewModel copyWithZone:] */

undefined8 FUN_104ea0c08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ea0c2c; end: 104ea0ccb; -[SCPostRegAddFriendsViewModel hash] */

ulong * FUN_104ea0c2c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar9;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar7 = *(undefined4 *)(param_1 + 10);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar8 >> 0x30);
  uStack_48 = (ulong)uVar1 & 0xff;
  uStack_40 = uVar8 >> 0x10 & 0xff;
  uStack_38 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_30 = (ulong)uVar6;
  uStack_50 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (ulong *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104ea0da0;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar4 & 1) == 0) ||
        (((*(char *)((long)puVar3 + 8) != param_3[8] || (*(char *)((long)puVar3 + 9) != param_3[9]))
         || (*(char *)((long)puVar3 + 10) != param_3[10])))) ||
       (((*(char *)((long)puVar3 + 0xb) != param_3[0xb] ||
         (*(char *)((long)puVar3 + 0xc) != param_3[0xc])) ||
        (*(char *)((long)puVar3 + 0xd) != param_3[0xd])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_104ea0da0;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104ea0da0;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_104ea0da0:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 104ea0ccc; end: 104ea0dbb; -[SCPostRegAddFriendsViewModel isEqual:] */

long FUN_104ea0ccc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104ea0da0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
       (((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
         (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
        (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))))) {
      lVar3 = 0;
      goto LAB_104ea0da0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104ea0da0;
    }
  }
  lVar3 = 1;
LAB_104ea0da0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104ea0dbc; end: 104ea0dc3; -[SCPostRegAddFriendsViewModel isLoading] */

undefined1 FUN_104ea0dbc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104ea0dc4; end: 104ea0dcb; -[SCPostRegAddFriendsViewModel isContinueButtonVisible] */

undefined1 FUN_104ea0dc4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104ea0dcc; end: 104ea0dd3; -[SCPostRegAddFriendsViewModel continueButtonText] */

undefined8 FUN_104ea0dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ea0dd4; end: 104ea0ddb; -[SCPostRegAddFriendsViewModel isSkipDialogVisible] */

undefined1 FUN_104ea0dd4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104ea0ddc; end: 104ea0de3; -[SCPostRegAddFriendsViewModel isSkipButtonVisible] */

undefined1 FUN_104ea0ddc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104ea0de4; end: 104ea0deb; -[SCPostRegAddFriendsViewModel snapchatterSelected] */

undefined1 FUN_104ea0de4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 104ea0dec; end: 104ea0df3; -[SCPostRegAddFriendsViewModel didAutoAdd] */

undefined1 FUN_104ea0dec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 104ea0df4; end: 104ea0dff; -[SCPostRegAddFriendsViewModel .cxx_destruct] */

void FUN_104ea0df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104ea0e00; end: 104ea0e2b; +[SCGrapheneRegAddFriendsMetric selectFriend] */

void FUN_104ea0e00(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0e2c; end: 104ea0e57; +[SCGrapheneRegAddFriendsMetric deselectFriend] */

void FUN_104ea0e2c(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0e58; end: 104ea0e83; +[SCGrapheneRegAddFriendsMetric preselectedAdded] */

void FUN_104ea0e58(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0e84; end: 104ea0eaf; +[SCGrapheneRegAddFriendsMetric totalAdded] */

void FUN_104ea0e84(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0eb0; end: 104ea0edb; +[SCGrapheneRegAddFriendsMetric skipButtonTapped] */

void FUN_104ea0eb0(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0edc; end: 104ea0f07; +[SCGrapheneRegAddFriendsMetric skipDialogShown] */

void FUN_104ea0edc(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0f08; end: 104ea0f33; +[SCGrapheneRegAddFriendsMetric skipConfirmTapped] */

void FUN_104ea0f08(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0f34; end: 104ea0f5f; +[SCGrapheneRegAddFriendsMetric goBackTapped] */

void FUN_104ea0f34(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0f60; end: 104ea0f8b; +[SCGrapheneRegAddFriendsMetric earlyUploadSecondCall] */

void FUN_104ea0f60(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0f8c; end: 104ea0fb7; +[SCGrapheneRegAddFriendsMetric addFriendsPageShown] */

void FUN_104ea0f8c(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0fb8; end: 104ea0fe3; +[SCGrapheneRegAddFriendsMetric suggestionsReceived] */

void FUN_104ea0fb8(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea0fe4; end: 104ea100f; +[SCGrapheneRegAddFriendsMetric suggestionsImpressed] */

void FUN_104ea0fe4(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea1010; end: 104ea103b; +[SCGrapheneRegAddFriendsMetric addFriendsAutoSkipped] */

void FUN_104ea1010(void)

{
  _objc_alloc(PTR_PTR_1126b1948);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea103c; end: 104ea10db; -[SCGrapheneRegAddFriendsMetric description] */

void FUN_104ea103c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8cd8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db8cd8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e4b68;
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



/* Entry: 104ea10dc; end: 104ea1297; -[SCGrapheneRegistry regAddFriendsGraphene] */

void FUN_104ea10dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104ea1164;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b90f8 != -1) {
    func_0x00010002a2fc(0x1136b90f8,&puStack_48);
  }
  uVar1 = uRam00000001136b90f0;
  _objc_retain(uRam00000001136b90f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ea1298; end: 104ea1363; -[SCAddFriendsMySnapcodeImageProvider initWithUserSession:snapcodeScopeExposer:usernameProvider:] */

undefined1 *
FUN_104ea1298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4b70;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea1364; end: 104ea14cb; -[SCAddFriendsMySnapcodeImageProvider generateMySnapcodeImageWithCompletionQueue:completionHandler:] */

void FUN_104ea1364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_4);
  _objc_release(uVar5);
  uVar5 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar2 = PTR_PTR_1126b0870;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4065e00000000000,0x4065e00000000000);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b19a0;
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2942c0(puVar2,param_2,uVar5,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b19a8;
    _objc_alloc(PTR_PTR_1126b19a8);
    func_0x00010c0566a0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bdd8ba0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea14cc; end: 104ea1647; -[SCAddFriendsMySnapcodeImageProvider snapcodeDidLoadWithError:] */

void FUN_104ea14cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b19b0;
  if ((param_3 == 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c294420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58e20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe7c80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    _objc_release(uVar1);
    _objc_release(puVar3);
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010bddefc0(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_104ea1648;
      puStack_58 = &UNK_1108434b0;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010007380c(uVar1,&puStack_70);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar2);
  }
  else {
    func_0x00010bddefc0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ea1648; end: 104ea1673;  */

void FUN_104ea1648(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


