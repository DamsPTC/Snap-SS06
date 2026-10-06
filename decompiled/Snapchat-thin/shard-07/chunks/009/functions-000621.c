/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ba21fc; end: 105ba2267; -[SCFriendsFeedViewController overscrollWithContentOffset:overscrollPercent:] */

void FUN_105ba21fc(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_2;
  dVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010c267f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,param_1 - dVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba2268; end: 105ba23e3; -[SCFriendsFeedViewController didConfirmEnterChatWithSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba2268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273106c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105ba232c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105ba23e4; end: 105ba243b; -[SCFriendsFeedViewController didDismissNFMOnboardingScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba23e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273106c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ba243c; end: 105ba253b; -[SCFriendsFeedViewController didSelectSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba243c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273106c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112730fb4);
  func_0x00010c0d66a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273127c);
  func_0x00010bf22f40(uVar4,param_2,param_1,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112731278),param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ba253c; end: 105ba2593; -[SCFriendsFeedViewController settingsScopeWantsDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba253c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731278);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba2594; end: 105ba25eb; -[SCFriendsFeedViewController settingsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba2594(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731278;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ba25ec; end: 105ba25ef; -[SCFriendsFeedViewController didTapOnLensButton] */

void FUN_105ba25ec(void)

{
  return;
}



/* Entry: 105ba25f0; end: 105ba2647; -[SCFriendsFeedViewController lensReplyCameraDidCloseWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba25f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731438;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_11273104c));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ba2648; end: 105ba266b; -[SCFriendsFeedViewController shouldPopToRootViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105ba2648(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273137c);
  func_0x00010c07ab40(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105ba266c; end: 105ba2807; -[SCFriendsFeedViewController additionalS2RDebugOutput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105ba266c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112731204;
  puVar1 = *(undefined **)(param_1 + lVar9);
  func_0x00010c29dba0(puVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105bb2244();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + lVar9);
  func_0x00010c29dba0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105bb2244();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 105ba2808; end: 105ba280f; -[SCFriendsFeedViewController viewControllerToQueryForPolicy] */

undefined8 FUN_105ba2808(void)

{
  return 0;
}



/* Entry: 105ba2810; end: 105ba286f; -[SCFriendsFeedViewController _shouldFooterBeShorter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105ba2810(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010052a7e0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127310f8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27e360();
  _objc_release(uVar2);
  return ((uint)lVar1 ^ 1) & (uint)uVar3;
}



/* Entry: 105ba2870; end: 105ba2e93; -[SCFriendsFeedViewController configureHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba2870(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_b8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  func_0x00010c20eaa0(param_6);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  if (380.0 < param_3) {
    puVar1 = *(undefined **)(param_4 + _DAT_112730fe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf1f3c0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b0aeedc();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105ba2944;
    }
  }
  func_0x00010b0aeef4();
  _objc_retainAutoreleasedReturnValue();
LAB_105ba2944:
  func_0x00010c216240(param_6);
  _objc_release(puVar1);
  lVar3 = *(long *)(param_4 + _DAT_112730fe4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    puStack_b8 = (undefined *)0x0;
  }
  else {
    puStack_b8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216600(param_6);
  func_0x00010c1dee80(param_6);
  if (lVar4 == 2) {
    lVar3 = param_4;
    func_0x00010be0eca0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2162a0(param_6);
    _objc_release(lVar3);
    _objc_initWeak(auStack_88,param_4);
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c216680(param_6);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    func_0x00010c2162a0(param_6);
    func_0x00010c216680(param_6);
  }
  lVar5 = *(long *)(param_4 + _DAT_112730fb0);
  func_0x00010bfdf340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c116640(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0();
    func_0x00010c213a60(lVar5);
    func_0x00010c188e60(lVar5);
    func_0x00010befa120(puVar2);
    lVar6 = lVar3;
    func_0x00010bfb9ce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      func_0x00010c20eaa0(lVar6);
      func_0x00010c213a60(lVar6);
      func_0x00010c188e60(lVar6);
    }
    uVar7 = *(ulong *)(param_4 + _DAT_112730fec);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    if ((uVar8 & 1) == 0) {
      lVar9 = lVar3;
      func_0x00010c153540();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 != 0) {
        func_0x00010c20eaa0(lVar9);
        func_0x00010c213a60(lVar9);
        func_0x00010c188e60(lVar9);
        puVar12 = puVar1;
        if (lVar4 != 2) {
          puVar12 = puVar2;
        }
        func_0x00010befa120(puVar12);
        _objc_release(lVar9);
      }
    }
    uVar10 = *(undefined8 *)(param_4 + _DAT_112730ff0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf1f3c0();
    _objc_release(uVar10);
    if ((int)uVar11 != 0) {
      lVar9 = lVar3;
      func_0x00010c0dbda0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20eaa0();
      func_0x00010c213a60(lVar9);
      func_0x00010c188e60(lVar9);
      func_0x00010befa120(puVar1);
      _objc_release(lVar9);
    }
    if (lVar6 != 0) {
      func_0x00010bf62e00(param_4);
      func_0x00010befa120(puVar1);
    }
    if (lVar4 != 2) {
      puVar12 = PTR_PTR_1126c2d70;
      _objc_alloc_init(PTR_PTR_1126c2d70);
      func_0x00010c20eaa0();
      func_0x00010c213a60(puVar12);
      func_0x00010c188e60(puVar12);
      puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126c2d78;
      _objc_alloc();
      func_0x00010c01ae60();
      func_0x00010c160fc0();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d5fe0(puVar12);
      _objc_release(puVar15);
      func_0x00010befa120(puVar1);
      _objc_release(puVar13);
      _objc_release(puVar14);
      _objc_release(puVar12);
    }
    puVar12 = PTR_PTR_1126b6550;
    _objc_alloc(PTR_PTR_1126b6550);
    func_0x00010bff9fe0();
    func_0x00010c188540(param_6);
    _objc_release(puVar12);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b6550;
  _objc_alloc();
  func_0x00010bff9fe0();
  func_0x00010c2194c0(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(puStack_b8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar2 + 0x20);
    _objc_destroyWeak(auStack_88);
    __Unwind_Resume(param_6);
    param_6 = param_6 + 0x20;
    _objc_loadWeakRetained(param_6);
    func_0x00010bf7cf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_6);
    return;
  }
  return;
}



/* Entry: 105ba2e94; end: 105ba2ebf;  */

void FUN_105ba2e94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ba2ec0; end: 105ba2ed7; -[SCFriendsFeedViewController _feedManagementTitleAffordance] */

void FUN_105ba2ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,
             PTR_s_imageTemplateFromIconType_size__1125d7d18,0x2c2);
  return;
}



/* Entry: 105ba2ed8; end: 105ba304b; -[SCFriendsFeedViewController customizeAddFriendsItemIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba2ed8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_105ba3034;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34,0x6a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + _DAT_112730fe4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  if (lVar4 - 1U < 2) {
    func_0x00010c20eaa0(param_3,param_2,0);
    func_0x00010c213a60(param_3,param_2,2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188e60(param_3,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c1882a0(param_3,param_2,puVar1);
    puVar5 = puVar2;
LAB_105ba301c:
    func_0x00010c188e80(param_3,param_2,puVar5);
  }
  else {
    if (lVar4 == 0) {
      func_0x00010c20eaa0(param_3,param_2,4);
LAB_105ba3000:
      func_0x00010c1882a0(param_3,param_2,puVar1);
      func_0x00010c188e60(param_3,param_2,puVar2);
      puVar5 = (undefined *)0x0;
      goto LAB_105ba301c;
    }
    if (lVar4 == 3) {
      func_0x00010c20eaa0(param_3,param_2,4);
      func_0x00010c213a60(param_3,param_2,2);
      goto LAB_105ba3000;
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_105ba3034:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ba304c; end: 105ba30b3; -[SCFriendsFeedViewController _profileIsBeingPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba304c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730fb4);
  func_0x00010c0d6760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07b420();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105ba30b4; end: 105ba3107; -[SCFriendsFeedViewController _storiesCarouselIsPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_105ba30b4(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127311a0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_112731368);
  }
  _objc_release();
  return bVar2 & 1;
}



/* Entry: 105ba3108; end: 105ba31bb; -[SCFriendsFeedViewController _replyStateForCell:] */

ulong FUN_105ba3108(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bfa3900();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5088);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c1409a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_105b62a84();
    _objc_release(uVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105ba31bc; end: 105ba32f7; -[SCFriendsFeedViewController _setupSubscriptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba31bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127312b0);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010beaea40(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ba32f8; end: 105ba339f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba32f8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    uVar3 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)(param_1 + _DAT_112731478) = (char)uVar3;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ba33a0; end: 105ba35a7; -[SCFriendsFeedViewController _setupPageSubscriptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba33a0(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112730edc);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105ba35a8;
  puStack_78 = &UNK_11085f420;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112730ed8);
  func_0x00010bf5f7c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105ba35a8; end: 105ba3653;  */

void FUN_105ba35a8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1a00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ba3654; end: 105ba36b7;  */

void FUN_105ba3654(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0d8d80();
  if ((int)uVar1 == 6) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c110220(param_2);
    func_0x00010beddd60(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ba36b8; end: 105ba36bb;  */

void FUN_105ba36b8(void)

{
  return;
}



/* Entry: 105ba36bc; end: 105ba3777;  */

void FUN_105ba36bc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c02c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}


