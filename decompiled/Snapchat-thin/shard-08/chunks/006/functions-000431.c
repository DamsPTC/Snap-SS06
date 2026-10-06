/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063f34bc; end: 1063f3637; -[SCPublisherAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f34bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75ea0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_1127470f0;
  uVar5 = *(ulong *)(param_1 + lVar6);
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar5,param_2,uVar3);
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar4);
    lVar1 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bdf2760(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
    lVar6 = lVar2;
    func_0x00010643e47c();
    if ((int)lVar6 != 0) {
      lVar6 = (long)_DAT_1127470f4;
      _objc_retain(lVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(long *)(param_1 + lVar6) = lVar2;
      _objc_release(uVar3);
      func_0x00010be77da0(param_1,param_2,lVar2,param_3,param_5);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f3638; end: 1063f3ae3; -[SCPublisherAdDataSource startViewingPlaylistItem:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f3638(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar7 = param_2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010bf63e80(puVar7,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar7);
  puVar7 = puVar2;
  func_0x00010643e47c();
  if ((int)puVar7 != 0) {
    puVar7 = param_4;
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be813a0(param_2,param_3,puVar7,puVar2);
    _objc_release(puVar7);
    lVar13 = (long)_DAT_1127470f4;
    _objc_retain(puVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    *(undefined **)(param_2 + lVar13) = puVar2;
    _objc_release(uVar3);
  }
  puVar7 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  puVar12 = puVar1;
  func_0x00010c0720c0(puVar7,param_3,puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    _objc_release(puVar1);
    _objc_release(puVar7);
LAB_1063f38f4:
    lVar13 = (long)_DAT_1127470f8;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    *(undefined **)(param_2 + lVar13) = param_4;
    _objc_release(uVar3);
LAB_1063f3918:
    lVar13 = (long)_DAT_1127470fc;
    func_0x00010c069d00(*(undefined8 *)(param_2 + lVar13));
    puVar7 = *(undefined **)(param_2 + lVar13);
    *(undefined8 *)(param_2 + lVar13) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + _DAT_1127470d4);
    puVar4 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf4b900(uVar3,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar7);
    if ((int)uVar3 == 0) goto LAB_1063f38f4;
    uVar3 = *(undefined8 *)(param_2 + _DAT_1127470e0);
    puVar7 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_3,puVar7);
    _objc_release(puVar7);
    puVar7 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010be914c0(param_2,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127600(puVar1,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar7);
    lVar13 = (long)_DAT_1127470f8;
    uVar5 = *(ulong *)(param_2 + lVar13);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0(uVar5,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126b2340;
    if ((uVar6 & 1) != 0) {
      puVar1 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010c076c60(puVar7,param_3,puVar1);
      _objc_release(puVar1);
      if (((ulong)puVar7 & 1) != 0) goto LAB_1063f392c;
      goto LAB_1063f3918;
    }
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    *(undefined **)(param_2 + lVar13) = param_4;
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126b2340;
    puVar1 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c076c60(puVar7,param_3,puVar1);
    _objc_release(puVar1);
    if ((int)puVar7 == 0) goto LAB_1063f392c;
    lVar13 = (long)_DAT_1127470fc;
    func_0x00010c069d00(*(undefined8 *)(param_2 + lVar13));
    puVar4 = PTR_PTR_1126bc890;
    puVar1 = PTR_PTR_1126afec0;
    puVar7 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11b2c0();
    func_0x00010c0cd480(puVar1);
    puVar1 = PTR_s__removeAdItem__112530788;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e02998;
    puVar10 = param_4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar10;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_80,&ppuStack_88,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_2;
    func_0x00010c1503c0(param_1,puVar4,param_3,param_2,puVar1,puVar11,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    *(undefined **)(param_2 + lVar13) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
LAB_1063f392c:
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x00010c0e00e0(puVar12,param_3,&PTR____CFConstantStringClassReference_110e02998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8b3e0(param_4,param_3,puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar12);
    return;
  }
  return;
}



/* Entry: 1063f3ae4; end: 1063f3b2f; -[SCPublisherAdDataSource _removeAdItem:] */

void FUN_1063f3ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8b3e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f3b30; end: 1063f3bd3; -[SCPublisherAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f3b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127470fc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127470d4);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be914c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127600();
    _objc_release(lVar2);
    func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_1127470e0),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f3bd4; end: 1063f3c2b; -[SCPublisherAdDataSource stopViewingPlaylistItemGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f3bd4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127470f0);
  *(undefined8 *)(param_1 + _DAT_1127470f0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127470f4);
  *(undefined8 *)(param_1 + _DAT_1127470f4) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127470fc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063f3c2c; end: 1063f3c2f; -[SCPublisherAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

void FUN_1063f3c2c(void)

{
  return;
}



/* Entry: 1063f3c30; end: 1063f3c33; -[SCPublisherAdDataSource startViewingPlaylistChapterId:currentItem:] */

void FUN_1063f3c30(void)

{
  return;
}



/* Entry: 1063f3c34; end: 1063f3c3b; -[SCPublisherAdDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1063f3c34(void)

{
  return 1;
}



/* Entry: 1063f3c3c; end: 1063f3daf; -[SCPublisherAdDataSource dataModelFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f3c3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_1127470d0);
    lVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      lVar2 = 0;
      goto LAB_1063f3d88;
    }
    lVar3 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    lVar2 = lVar3;
    FUN_10640b154(lVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
  }
  _objc_release(lVar3);
LAB_1063f3d88:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063f3db0; end: 1063f41e7; -[SCPublisherAdDataSource extraPagePropertiesForDataModel:] */

void FUN_1063f3db0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ca218;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    uVar5 = param_1;
    func_0x00010bef4820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c082160();
    _objc_release(uVar7);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b9250;
    if ((int)uVar8 != 0) {
      func_0x00010bef60a0();
      func_0x00010bef4240();
      uVar5 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29d360();
      uVar13 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf89440();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44a40();
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar5 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c282860();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bf4e6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_1;
      func_0x00010c29d360();
      uVar17 = 1;
      FUN_106449e40(0,1,uVar6,uVar8,uVar11,uVar13,uVar15,0,0,uVar16,(int)puVar3 == 4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar2);
      _objc_release(uVar17);
      _objc_release(param_1);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063f41e8; end: 1063f49b3; -[SCPublisherAdDataSource pageDataForDataModel:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f41e8(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar11 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain(uVar11);
  uVar3 = uVar11;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127470d0);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x0001080724a4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar8 == 0) {
    bVar1 = true;
  }
  else {
    lVar7 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258fe0(param_1);
    lVar9 = lVar7;
    func_0x00010c09c2e0();
    _objc_release(lVar7);
    bVar1 = lVar9 != 7;
  }
  lVar7 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (bVar1) {
    func_0x00010bef4240(param_1);
    uVar10 = uVar3;
    func_0x00010640abd4(uVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0d3c80();
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11);
    _objc_release(puVar2);
    if (param_4 != 0) {
      puVar2 = PTR_PTR_1126b23e0;
      _objc_alloc(PTR_PTR_1126b23e0);
      func_0x00010c033240();
      (**(code **)(param_4 + 0x10))(param_4,puVar2);
      _objc_release(puVar2);
    }
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1063f456c;
    puStack_90 = &UNK_110921158;
    _objc_retain(param_4);
    uStack_68 = param_4;
    _objc_retain(uVar5);
    uStack_88 = uVar5;
    _objc_retain(uVar6);
    uStack_80 = uVar6;
    _objc_retain(lVar9);
    lStack_78 = lVar9;
    _objc_retain(uVar3);
    puStack_b0 = PTR_PTR_1126f1210;
    lStack_b8 = param_1;
    uStack_70 = uVar3;
    _objc_msgSendSuper2(&lStack_b8,PTR_s_pageDataForDataModel_completion__112619db8,lVar9,
                        &puStack_a8);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    uVar11 = uStack_68;
  }
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063f49b4; end: 1063f4b77; -[SCPublisherAdDataSource isInsertedAdItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063f49b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_1127470d4);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0720c0(lVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar2);
    if ((int)lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bfce400(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf63e80(lVar2,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      FUN_10643e240(lVar6);
      lVar2 = lVar6;
      func_0x00010643e29c();
      lVar5 = lVar6;
      FUN_10643eef0();
      lVar7 = lVar6;
      FUN_10643e30c();
      if (((((int)lVar5 == 0) || ((int)lVar2 != 0)) || ((int)lVar7 != 0)) &&
         (lVar2 = lVar6, func_0x00010643e47c(), (int)lVar2 != 0)) {
        lVar2 = lVar3;
        func_0x00010bfce400(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be813a0(param_1,param_2,lVar2,lVar6);
        _objc_release(lVar2);
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      _objc_release(lVar6);
    }
    _objc_release(lVar3);
  }
  else {
    uVar8 = 1;
  }
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 1063f4b78; end: 1063f4c27; -[SCPublisherAdDataSource isNofillUnskippableAdItemId:] */

undefined8 FUN_1063f4b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bef52c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c082160();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1063f4c28; end: 1063f4cc7; -[SCPublisherAdDataSource adProductTypeForItem:] */

undefined8 FUN_1063f4c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010bef4240(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1063f4cc8; end: 1063f4d73; -[SCPublisherAdDataSource adSnapViewLogParametersForSkippedAdItemId:aroundItem:pageLeft:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f4cc8(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126f1210;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_adSnapViewLogParametersForSkippe_11259aef8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10643ed50(*(undefined8 *)(param_1 + _DAT_1127470f4),puVar2);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063f4d74; end: 1063f4ea3; -[SCPublisherAdDataSource adViewContextForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f4d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_s_adViewContextForGroupId__11259b230;
  plVar2 = &lStack_60;
  puStack_58 = PTR_PTR_1126f1210;
  lStack_60 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)plVar2;
  func_0x00010c0d3c80();
  _objc_release(plVar2);
  lVar7 = *(long *)(param_1 + _DAT_1127470f4);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c075a20();
  _objc_release(param_3);
  FUN_10643e708(lVar7,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  lVar4 = lVar7;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010bef7f60(puVar3);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063f4ea4; end: 1063f4ff3; -[SCPublisherAdDataSource adViewContextForItem:] */

void FUN_1063f4ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar6 = PTR_s_adViewContextForItem__11259b238;
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f1210;
  uStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar6,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = param_1;
  func_0x00010bef4b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bef4840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010bf66720(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063f4ff4; end: 1063f507f; -[SCPublisherAdDataSource editionEntrySnapIndexForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063f4ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127470dc);
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1063f5080; end: 1063f5153; -[SCPublisherAdDataSource isAdContentLoopingForDataModel:] */

bool FUN_1063f5080(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010bef4240(lVar4);
  _objc_release(lVar4);
  _objc_release(param_3);
  return lVar5 == 7;
}



/* Entry: 1063f5154; end: 1063f520f; -[SCPublisherAdDataSource mediaLoadContexts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1063f5154(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b19f8;
  puStack_48 = puVar2;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  iVar1 = (int)*(undefined8 *)(puVar2 + _DAT_1127470f4);
  func_0x00010643e29c();
  puVar2 = (undefined *)0x7;
  if (iVar1 != 0) {
    puVar2 = (undefined *)0x8;
  }
  return puVar2;
}



/* Entry: 1063f5210; end: 1063f523b; -[SCPublisherAdDataSource adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063f5210(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127470f4);
  func_0x00010643e29c();
  uVar1 = 7;
  if (iVar2 != 0) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 1063f523c; end: 1063f53af; -[SCPublisherAdDataSource adOrganicSignals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f523c(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_1127470f4;
  puVar3 = *(undefined **)(param_1 + lVar6);
  puVar5 = puVar3;
  if (puVar3 != (undefined *)0x0) {
    puVar5 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    _objc_opt_isKindOfClass(puVar3,puVar5);
    puVar5 = PTR_PTR_1126bdd28;
    if (((ulong)puVar3 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      param_1 = puVar3;
    }
    else {
      puVar4 = *(undefined **)(param_1 + lVar6);
      _objc_retain(puVar4);
      _objc_opt_class(puVar5);
      puVar3 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar5);
      param_1 = puVar4;
      if (((ulong)puVar3 & 1) == 0) {
        param_1 = (undefined *)0x0;
      }
      _objc_retain(param_1);
      _objc_release(puVar4);
      puVar5 = param_1;
      func_0x00010bef3720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bef3aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      _objc_release(puVar5);
      if (puVar4 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar3 = param_1;
        func_0x00010bef3720();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bef3aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      _objc_release(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    puVar3 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    FUN_10640d6b8(puVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063f53b0; end: 1063f545b; -[SCPublisherAdDataSource upcomingStoriesContext] */

void FUN_1063f53b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_10640d6b8(uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063f545c; end: 1063f5523; -[SCPublisherAdDataSource resetInsertionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f545c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1210;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_resetInsertionData_11262bd80);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470d0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470d4));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470d8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470dc));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470e0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470e4));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470e8));
  lVar2 = (long)_DAT_1127470fc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470ec));
  return;
}



/* Entry: 1063f5524; end: 1063f552b; -[SCPublisherAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1063f5524(void)

{
  return 1;
}



/* Entry: 1063f552c; end: 1063f5533; -[SCPublisherAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_1063f552c(void)

{
  return 0;
}



/* Entry: 1063f5534; end: 1063f56af; -[SCPublisherAdDataSource unviewedAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f5534(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
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
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar9 = *(ulong *)(param_1 + _DAT_1127470e0);
        func_0x00010bfe5ec0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar8);
        if ((uVar9 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar4 = (undefined1 *)puVar7;
  func_0x00010bf529e0();
  if (puVar4 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)puVar7;
    func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_1109211a8);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010050471c(puVar7,&PTR___NSConcreteGlobalBlock_1109211c8,
                        &PTR___NSConcreteGlobalBlock_110921208);
    uVar8 = *(undefined8 *)(lVar3 + _DAT_1127470e8);
    puVar6 = puVar4;
    func_0x00010c0dfd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010be5b480(lVar3);
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1063f56b0; end: 1063f5797; -[SCPublisherAdDataSource makeBatchAdRequests:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f56b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109211a8);
    lVar2 = param_3;
    func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1109211c8,
                        &PTR___NSConcreteGlobalBlock_110921208);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127470e8);
    lVar3 = lVar1;
    func_0x00010c0dfd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010be5b480(param_1);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f5798; end: 1063f57af;  */

void FUN_1063f5798(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef47d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adRequestClientId_11259ab98);
  return;
}



/* Entry: 1063f57b0; end: 1063f594b; -[SCPublisherAdDataSource makeMediaRequest:] */

void FUN_1063f57b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0c5660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bef3c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfa8580(uVar1);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1063f594c; end: 1063f598f;  */

void FUN_1063f594c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063f5990; end: 1063f5b3f; -[SCPublisherAdDataSource _adItemForItemId:group:] */

void FUN_1063f5990(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
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
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_f0;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        puVar8 = *(undefined1 **)(lStack_128 + lVar10 * 8);
        puVar2 = puVar8;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        if (((ulong)puVar3 & 1) == 0) {
          _objc_release(puVar2);
        }
        else {
          puVar3 = puVar8;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126c9a78;
          func_0x00010c1015e0(PTR_PTR_1126c9a78);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          puVar6 = (undefined8 *)puVar4;
          func_0x00010c0720c0(puVar3,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if (((ulong)puVar5 & 1) != 0) {
            _objc_retain(puVar8);
            goto LAB_1063f5af0;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar7 = auStack_f0;
      lVar1 = param_4;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar7,0x10);
    } while (lVar1 != 0);
  }
  puVar8 = (undefined1 *)0x0;
LAB_1063f5af0:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    puVar2 = puVar7;
    func_0x00010bfecd60(puVar7,param_2,puVar6);
    puVar8 = (undefined1 *)0x0;
    if ((puVar2 != (undefined1 *)0x0) && (puVar2 != (undefined1 *)0x7fffffffffffffff)) {
      puVar2 = puVar7;
      func_0x00010c084fc0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1063f5b40; end: 1063f5bcf; -[SCPublisherAdDataSource _previousItemInGroupForItem:group:] */

void FUN_1063f5b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfecd60(param_4,param_2,param_3);
  lVar2 = 0;
  if ((lVar1 != 0) && (lVar1 != 0x7fffffffffffffff)) {
    lVar1 = param_4;
    func_0x00010c084fc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063f5bd0; end: 1063f5e17; -[SCPublisherAdDataSource _prepareAdForPublisher:group:entryItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f5bd0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010bfceb40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10643e4c8(param_3,param_5,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127470dc);
    uVar2 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8);
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar4 = param_1;
    func_0x00010be82f40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    puVar6 = puVar4;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    }
    puVar7 = param_1;
    func_0x00010bfceb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(uVar2);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    func_0x00010be85660(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f5e18; end: 1063f6057; -[SCPublisherAdDataSource _processGroupAfterDeltaFetch:publisherDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f5e18(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  FUN_10643e5f0(param_4,*(undefined8 *)(param_1 + _DAT_1127470f4));
  if ((int)uVar1 == 0) goto LAB_1063f602c;
  puVar2 = param_1;
  func_0x00010bfceb40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar5 = param_1;
  func_0x00010be82f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  if (puVar3 == puVar5) {
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  else {
    if (puVar5 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar6 = puVar3;
      func_0x00010c071ae0();
      _objc_release(puVar5);
      _objc_release(puVar3);
      if (((ulong)puVar6 & 1) != 0) goto LAB_1063f600c;
    }
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puStack_68 = puVar5;
    if (puVar6 == (undefined *)0x0) {
      puStack_68 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
    }
    puVar7 = param_1;
    func_0x00010bfceb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(uVar1);
    _objc_release(puVar7);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puStack_68);
    }
    uVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf2760(param_1);
    _objc_release(uVar1);
    func_0x00010be85660(param_1);
  }
LAB_1063f600c:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
LAB_1063f602c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f6058; end: 1063f656f; -[SCPublisherAdDataSource _progressGroup:publisherDataModel:newAdRequestClientIds:newAdRequestClientIdToPlacementMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f6058(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *unaff_x24;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_170 = param_5;
  _objc_retain(param_5);
  uStack_178 = param_6;
  _objc_retain(param_6);
  puVar10 = param_1;
  func_0x00010bfceb40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  puStack_140 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  puVar5 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar2;
  _objc_release(puVar1);
  _objc_release(puVar10);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126bdd28;
  puStack_158 = puVar3;
  _objc_retain(param_4);
  _objc_opt_class(puVar4);
  puVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar4);
  puVar4 = param_4;
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  puStack_138 = param_4;
  _objc_release(param_4);
  if (puVar4 != (undefined *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x24 = puStack_138;
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = &uStack_130;
    puVar11 = auStack_f0;
    puVar3 = unaff_x24;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      puVar10 = (undefined8 *)0x0;
      lVar9 = *plStack_120;
      param_4 = puStack_158;
      puStack_180 = puVar4;
      puStack_168 = unaff_x24;
      lStack_148 = lVar9;
      do {
        puVar11 = (undefined *)0x0;
        puStack_150 = puVar3;
        do {
          puVar1 = puVar10;
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(unaff_x24);
          }
          puVar10 = *(undefined8 **)(lStack_128 + (long)puVar11 * 8);
          puVar5 = puVar10;
          func_0x00010bef60a0();
          if (puVar5 != (undefined8 *)0x0) {
            puVar5 = puVar1;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            param_3 = puVar5;
            func_0x00010c08fa60();
            _objc_release(puVar5);
            if (param_3 != (undefined8 *)0x0) {
              param_3 = puVar10;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(param_4);
              func_0x00010c1d0640(*(undefined8 *)((long)param_1 + (long)_DAT_1127470e4));
              func_0x00010c1d0640(*(undefined8 *)((long)param_1 + (long)_DAT_1127470e8));
              puVar5 = param_1;
              func_0x00010bdc5500();
              _objc_retainAutoreleasedReturnValue();
              if (puVar5 != (undefined8 *)0x0) {
                puVar2 = puStack_160;
                func_0x00010bf4b900();
                if (((ulong)puVar2 & 1) == 0) {
                  func_0x00010befa120(uStack_170);
                  puVar2 = puVar10;
                  func_0x00010c26a3a0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar2;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(puVar2);
                  puVar2 = puVar10;
                  func_0x00010c26a3a0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar6 == (undefined8 *)0x0) {
                    puVar6 = puVar2;
                    func_0x00010bf529e0();
                    _objc_release(puVar2);
                    param_4 = puStack_158;
                    if (puVar6 == (undefined8 *)0x0) goto LAB_1063f63a0;
                    puVar2 = puVar10;
                    func_0x00010c26a3a0(puVar10);
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = puVar2;
                    func_0x00010bf51e00();
                    func_0x00010c1d0640(uStack_178);
                  }
                  else {
                    puVar6 = puVar2;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar6;
                    func_0x00010bf51e00();
                    func_0x00010c1d0640(uStack_178);
                    _objc_release(puVar7);
                    param_4 = puStack_158;
                  }
                  _objc_release(puVar6);
                  _objc_release(puVar2);
                }
LAB_1063f63a0:
                func_0x00010c1d0640(*(undefined8 *)((long)param_1 + (long)_DAT_1127470d0));
                puVar4 = puStack_138;
                func_0x00010bfd5020();
                if (((ulong)puVar4 & 1) == 0) {
                  puVar2 = puVar1;
                  func_0x00010bfe5ec0(puVar1);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = *(undefined8 *)((long)param_1 + (long)_DAT_1127470d8);
                  puVar6 = puVar5;
                  func_0x00010be36bc0(puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(uVar8);
                }
                else {
                  puVar2 = param_1;
                  func_0x00010be80080(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar2;
                  func_0x00010be36bc0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = *(undefined8 *)((long)param_1 + (long)_DAT_1127470d8);
                  puVar7 = puVar5;
                  func_0x00010be36bc0(puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  param_4 = puStack_158;
                  func_0x00010c1d0640(uVar8);
                  _objc_release(puVar7);
                }
                _objc_release(puVar6);
                _objc_release(puVar2);
                func_0x00010befa120(*(undefined8 *)((long)param_1 + (long)_DAT_1127470d4));
                unaff_x24 = puStack_168;
                puVar3 = puStack_150;
              }
              _objc_release(puVar5);
              _objc_release(param_3);
              lVar9 = lStack_148;
            }
          }
          _objc_retain(puVar10);
          _objc_release(puVar1);
          puVar11 = puVar11 + 1;
        } while (puVar3 != puVar11);
        puVar5 = &uStack_130;
        puVar11 = auStack_f0;
        puVar3 = unaff_x24;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
      _objc_release(puVar10);
      puVar4 = puStack_180;
    }
    _objc_release(unaff_x24);
  }
  _objc_release(puVar4);
  _objc_release(puStack_160);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(puStack_138);
  puVar10 = puStack_140;
  _objc_release(puStack_140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_158);
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1063f6570;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = param_4;
  puStack_1b0 = param_3;
  puStack_1a8 = puVar1;
  puStack_1a0 = param_1;
  puStack_198 = puVar4;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar11);
  puVar1 = puVar5;
  func_0x00010bf529e0();
  if (puVar1 != (undefined8 *)0x0) {
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_1063f66a4;
    puStack_1d0 = &UNK_110921228;
    _objc_retain(puVar11);
    puVar2 = puVar5;
    puStack_1c8 = puVar11;
    func_0x000100504554(puVar5,&puStack_1e8);
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar7 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar4);
    puVar1 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar6);
    func_0x00010be914c0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c11de20(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(puStack_1c8);
  }
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1063f6570; end: 1063f66a3; -[SCPublisherAdDataSource _queueAdRequests:adRequestClientIdToTargetingMap:publisherDataModel:] */

void FUN_1063f6570(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1063f66a4;
    puStack_50 = &UNK_110921228;
    _objc_retain(param_4);
    uVar2 = param_3;
    uStack_48 = param_4;
    func_0x000100504554(param_3,&puStack_68);
    uVar3 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010be914c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c11de20(param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f66a4; end: 1063f6727;  */

void FUN_1063f66a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca580;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1cc0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063f6728; end: 1063f6eeb; -[SCPublisherAdDataSource _makeAdRequests:adRequestClientIdToTargetingMap:publisherDataModel:] */

void FUN_1063f6728(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [8];
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  uint uStack_24c;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_230 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010643e29c();
  uVar2 = param_5;
  func_0x00010643e240();
  uVar3 = param_5;
  lStack_240 = uVar2;
  FUN_1064415c4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  uStack_238 = uVar3;
  func_0x00010643e37c();
  lStack_248 = uVar2;
  lStack_1e0 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  uStack_270 = param_5;
  FUN_106449d0c();
  uStack_24c = (uint)lVar6;
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  uStack_268 = 7;
  if ((int)uVar1 != 0) {
    uStack_268 = 8;
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puStack_228 = puVar7;
  _objc_retain(param_3);
  lStack_260 = param_3;
  func_0x00010bf52a60();
  lStack_220 = param_3;
  if (param_3 != 0) {
    lStack_258 = *plStack_170;
    lStack_220 = param_3;
    do {
      puStack_1e8 = (undefined *)0x0;
      do {
        if (*plStack_170 != lStack_258) {
          _objc_enumerationMutation(lStack_260);
        }
        uVar1 = uStack_230;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lStack_1e0;
        lStack_218 = uVar1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        lStack_1f0 = lVar4;
        func_0x00010c29d360();
        lVar5 = lStack_1e0;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        lStack_1f8 = lVar5;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        puStack_200 = (undefined *)lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lStack_208 = lVar5;
        func_0x0001084c0d90(lVar4,lVar5);
        lVar5 = lStack_1e0;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        puStack_210 = (undefined *)lVar5;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lStack_1e0;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lStack_1e0;
        func_0x00010bef4240();
        lVar11 = lStack_1e0;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010c263080();
        _objc_retainAutoreleasedReturnValue();
        uStack_290 = CONCAT62(uStack_290._2_6_,0x100);
        uVar15 = (ulong)uStack_24c;
        lStack_2b0 = lVar4;
        lStack_2a8 = lVar6;
        lStack_2a0 = lVar9;
        lStack_298 = lVar10;
        lStack_288 = lVar14;
        FUN_1063f8270(uVar15,0,0,0,lStack_248,lStack_240,uStack_238,lStack_218);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(puStack_210);
        _objc_release(lStack_208);
        _objc_release(puStack_200);
        _objc_release(lStack_1f8);
        _objc_release(lStack_1f0);
        _objc_release(lStack_218);
        func_0x00010befa120(puStack_228);
        _objc_release(uVar15);
        puStack_1e8 = (undefined *)((long)puStack_1e8 + 1);
      } while ((undefined *)lStack_220 != puStack_1e8);
      lVar4 = lStack_260;
      func_0x00010bf52a60();
      lStack_220 = lVar4;
    } while (lVar4 != 0);
  }
  _objc_release(lStack_260);
  _objc_initWeak(auStack_188,lStack_1e0);
  puVar7 = PTR_PTR_1126ca530;
  _objc_alloc();
  lVar4 = lStack_260;
  func_0x00010bf51e00(lStack_260);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1063f6eec;
  puStack_198 = &UNK_110842c58;
  _objc_copyWeak(auStack_190,auStack_188);
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1063f6fdc;
  puStack_1c0 = &UNK_110842c58;
  _objc_copyWeak(auStack_1b8,auStack_188);
  func_0x00010c037fa0();
  puStack_1e8 = puVar7;
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126bdc50;
  func_0x00010bef4c80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_1e0;
  puStack_200 = puVar7;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar4;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puStack_228;
  lStack_208 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_1e0;
  puStack_210 = puVar7;
  func_0x00010befe100();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_1e0;
  lStack_218 = lVar4;
  func_0x00010bef4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_1e0;
  lStack_220 = lVar5;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_1e0;
  lStack_240 = lVar4;
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_1e0;
  lStack_248 = lVar5;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29d360();
  lVar6 = lStack_1e0;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x0001084c0d90();
  lVar10 = lStack_1e0;
  func_0x00010c0ea180();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0d6c60();
  uVar1 = 1;
  if (lVar11 == 1) {
    uVar1 = 2;
  }
  lVar11 = lStack_1e0;
  func_0x00010bf21060();
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar7;
  func_0x00010bf17be0();
  _objc_release(puVar7);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1063f7fa0;
  puStack_120 = &UNK_1108951c0;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dffd18;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110e4d7b8;
  ppuVar17 = &puStack_138;
  puStack_108 = puVar16;
  func_0x00010bf51e00();
  _objc_release(ppuStack_110);
  _objc_release(ppuStack_118);
  lStack_298 = 0;
  lStack_2a8 = lStack_248;
  lStack_2b0 = lStack_240;
  lStack_2a0 = lVar5;
  uStack_290 = uVar1;
  lStack_288 = lVar11;
  ppuStack_280 = ppuVar17;
  func_0x00010bef66c0(lStack_208);
  _objc_release(ppuVar17);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lStack_248);
  _objc_release(lStack_240);
  _objc_release(lStack_220);
  _objc_release(lStack_218);
  _objc_release(puStack_210);
  _objc_release(lStack_208);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(puStack_200);
  _objc_release(puStack_1e8);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puStack_228);
  _objc_release(uStack_238);
  _objc_release(uStack_270);
  _objc_release(uStack_230);
  lVar5 = lStack_260;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  lVar8 = lVar5;
  __Unwind_Resume(lVar5);
  pcStack_2b8 = FUN_1063f6eec;
  lStack_2e0 = lVar6;
  lStack_2d8 = lVar11;
  lStack_2d0 = lVar4;
  lStack_2c8 = lVar5;
  puStack_2c0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar12);
  puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_308 = 0xc2000000;
  pcStack_300 = FUN_1063f6fa8;
  puStack_2f8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_2e8,lVar8 + 0x20);
  _objc_retain(lVar12);
  lStack_2f0 = lVar12;
  func_0x0001000d76cc("APPSTORE",&puStack_310);
  _objc_release(lStack_2f0);
  _objc_destroyWeak(auStack_2e8);
  _objc_release(lVar12);
  return;
}



/* Entry: 1063f6eec; end: 1063f6fa7;  */

void FUN_1063f6eec(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1063f6fa8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1063f6fa8; end: 1063f6fdb;  */

void FUN_1063f6fa8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be315c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063f6fdc; end: 1063f7097;  */

void FUN_1063f6fdc(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1063f7098;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1063f7098; end: 1063f70cb;  */

void FUN_1063f7098(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063f70cc; end: 1063f7243; -[SCPublisherAdDataSource _handleSuccessAdResponseList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f70cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uStack_190;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar17 = auStack_d8;
  uVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar18 = *(undefined8 *)(uVar19 * 8);
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be315a0(param_1);
      _objc_release(uVar18);
      uVar19 = uVar19 + 1;
    } while (uVar2 != uVar19);
    puVar17 = auStack_d8;
    uVar2 = param_3;
    func_0x00010bf52a60();
  }
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010bef6420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c107da0();
  _objc_release(uVar3);
  _objc_release(uVar18);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar2);
  _objc_retain(puVar17);
  puVar4 = puVar17;
  func_0x00010c08fa60();
  if (puVar4 == (undefined1 *)0x0) goto LAB_1063f738c;
  if ((uVar2 != 0) && (uVar19 = uVar2, func_0x00010c082b20(), (int)uVar19 != 0)) {
    uVar19 = uVar2;
    func_0x00010bef60a0();
    if (uVar19 == 7) {
      func_0x00010be89040(param_3);
      puVar5 = *(undefined **)(param_3 + (long)_DAT_1127470d8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x00010c0ecd80(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = param_3;
        func_0x00010c23e600(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        _objc_release(uVar19);
        goto LAB_1063f7328;
      }
    }
    else {
      uVar19 = uVar2;
      func_0x00010bef60a0();
      if ((uVar19 == 5) || (uVar19 = uVar2, func_0x00010bef60a0(), uVar19 == 0x16)) {
        puVar5 = PTR_PTR_1126b8ca0;
        func_0x00010bef60a0(uVar2);
        func_0x00010c25d240(puVar5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1063f7378;
      }
      puVar5 = *(undefined **)(param_3 + (long)_DAT_1127470d0);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfecde0();
      _objc_release(puVar7);
      if ((undefined *)0x7ffffffffffffffd < puVar8 + -1) {
        uVar19 = 0;
        if (-1 < (long)(puVar8 + 1)) {
          uStack_190 = 0;
          goto LAB_1063f75bc;
        }
        uVar20 = 0;
LAB_1063f7770:
        uVar10 = param_3;
        func_0x00010bf6d940(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        FUN_1063fd368(uVar19,uVar20,uVar12);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_3;
        func_0x00010bef4840(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar2;
        func_0x00010bfe5ec0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(puVar7);
        uVar10 = param_3;
        func_0x00010bf6d940(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bef2fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a04c0();
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        func_0x00010be89040(param_3);
        func_0x00010be914c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c125c00();
        _objc_release(param_3);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(puVar6);
        _objc_release(puVar5);
        goto LAB_1063f738c;
      }
      puVar7 = puVar6;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      if (puVar8 + -1 < puVar9) {
        puVar7 = puVar6;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        uVar20 = param_3;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar20;
        func_0x00010bf63e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        uVar20 = param_3;
        func_0x00010bef4240();
        uVar10 = param_3;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bef2fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_3;
        func_0x00010bf6d940(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001063fcf48(uVar20,uVar2,uVar19,0,uVar12,0,uVar15);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(puVar9);
        uStack_190 = uVar20 & 0xffffffff ^ 1;
      }
      else {
        uStack_190 = 0;
        uVar19 = 0;
      }
LAB_1063f75bc:
      puVar7 = puVar6;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      if (puVar8 + 1 < puVar9) {
        puVar7 = puVar6;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        uVar10 = param_3;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar10;
        func_0x00010bf63e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        uVar10 = param_3;
        func_0x00010bef4240();
        uVar11 = param_3;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bef2fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_3;
        func_0x00010bf6d940(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001063fcf48(uVar10,uVar2,uVar20,0,uVar13,1,uVar16);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(puVar8);
        if ((((uint)uStack_190 | (uint)uVar10 ^ 0xffffffff) & 1) == 0) goto LAB_1063f7770;
      }
      else {
        uVar20 = 0;
        if ((uStack_190 & 1) == 0) goto LAB_1063f7770;
      }
      _objc_release(uVar20);
      _objc_release(uVar19);
LAB_1063f7328:
      _objc_release(puVar6);
    }
LAB_1063f7378:
    _objc_release(puVar5);
  }
  func_0x00010be8b3e0(param_3);
LAB_1063f738c:
  _objc_release(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063f7244; end: 1063f78fb; -[SCPublisherAdDataSource _handleSuccessAdResponse:playlistItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f7244(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_1063f738c;
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c082b20(), (int)lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010bef60a0();
    if (lVar1 == 7) {
      func_0x00010be89040(param_1);
      puVar2 = *(undefined **)(param_1 + (long)_DAT_1127470d8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x00010c0ecd80(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = param_1;
        func_0x00010c23e600(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        _objc_release(uVar15);
        goto LAB_1063f7328;
      }
    }
    else {
      lVar1 = param_3;
      func_0x00010bef60a0();
      if ((lVar1 == 5) || (lVar1 = param_3, func_0x00010bef60a0(), lVar1 == 0x16)) {
        puVar2 = PTR_PTR_1126b8ca0;
        func_0x00010bef60a0(param_3);
        func_0x00010c25d240(puVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1063f7378;
      }
      puVar2 = *(undefined **)(param_1 + (long)_DAT_1127470d0);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfecde0();
      _objc_release(puVar4);
      if ((undefined *)0x7ffffffffffffffd < puVar5 + -1) {
        uVar15 = 0;
        if (-1 < (long)(puVar5 + 1)) {
          uStack_70 = 0;
          goto LAB_1063f75bc;
        }
        uVar14 = 0;
LAB_1063f7770:
        uVar7 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        FUN_1063fd368(uVar15,uVar14,uVar9);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1;
        func_0x00010bef4840(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar7);
        _objc_release(lVar1);
        _objc_release(uVar7);
        _objc_release(puVar4);
        uVar7 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bef2fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a04c0();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        func_0x00010be89040(param_1);
        func_0x00010be914c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c125c00();
        _objc_release(param_1);
        _objc_release(uVar14);
        _objc_release(uVar15);
        _objc_release(puVar3);
        _objc_release(puVar2);
        goto LAB_1063f738c;
      }
      puVar4 = puVar3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf529e0();
      _objc_release(puVar4);
      if (puVar5 + -1 < puVar6) {
        puVar4 = puVar3;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar14 = param_1;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010bf63e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        uVar14 = param_1;
        func_0x00010bef4240();
        uVar7 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bef2fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001063fcf48(uVar14,param_3,uVar15,0,uVar9,0,uVar12);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(puVar6);
        uStack_70 = uVar14 & 0xffffffff ^ 1;
      }
      else {
        uStack_70 = 0;
        uVar15 = 0;
      }
LAB_1063f75bc:
      puVar4 = puVar3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf529e0();
      _objc_release(puVar4);
      if (puVar5 + 1 < puVar6) {
        puVar4 = puVar3;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar7 = param_1;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar7;
        func_0x00010bf63e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar7 = param_1;
        func_0x00010bef4240();
        uVar8 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bef2fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001063fcf48(uVar7,param_3,uVar14,0,uVar10,1,uVar13);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar5);
        if ((((uint)uStack_70 | (uint)uVar7 ^ 0xffffffff) & 1) == 0) goto LAB_1063f7770;
      }
      else {
        uVar14 = 0;
        if ((uStack_70 & 1) == 0) goto LAB_1063f7770;
      }
      _objc_release(uVar14);
      _objc_release(uVar15);
LAB_1063f7328:
      _objc_release(puVar3);
    }
LAB_1063f7378:
    _objc_release(puVar2);
  }
  func_0x00010be8b3e0(param_1);
LAB_1063f738c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f78fc; end: 1063f79ff; -[SCPublisherAdDataSource _registerAdResponse:playlistItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f78fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar1);
  uVar2 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c067280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_4);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127470d4);
  uVar2 = uVar3;
  func_0x00010c280580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1063f7a00; end: 1063f7b23; -[SCPublisherAdDataSource _handleErrorAdResponseList:] */

void FUN_1063f7a00(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = *(undefined8 *)(lVar5 * 8);
      func_0x00010bfe5ec0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be28f40(param_1);
      _objc_release(uVar4);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be8b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1063f7b24; end: 1063f7b2b; -[SCPublisherAdDataSource _handleErrorAdResponse:playlistItemId:] */

void FUN_1063f7b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAdPlaylistItem__112580698,param_4);
  return;
}



/* Entry: 1063f7b2c; end: 1063f7b9b; -[SCPublisherAdDataSource _handleMediaFetchResult:playlistItemId:] */

void FUN_1063f7b2c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be8b3e0(param_1,param_2,param_4);
  }
  else {
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400();
    _objc_release(param_4);
    param_4 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063f7b9c; end: 1063f7ceb; -[SCPublisherAdDataSource _removeAdPlaylistItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f7b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be914c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126f80();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127470e4);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  FUN_10643e418(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112747100);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000107cb5994(uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1063f7cec; end: 1063f7d93; -[SCPublisherAdDataSource _requestManagerForAdRequestClientId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f7cec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_1127470d0);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127470ec);
    func_0x00010c0e00e0(uVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063f7d94; end: 1063f7e9f; -[SCPublisherAdDataSource _createRequestManagerForPlaylistGroupIdIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f7d94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar6 = (long)_DAT_1127470ec;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c11b4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar5 = PTR_PTR_1126ca588;
      func_0x00010c135d20(PTR_PTR_1126ca588,param_2,param_1,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar6),param_2,puVar5,param_3);
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f7ea0; end: 1063f7f9f; -[SCPublisherAdDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f7ea0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747100,0);
  _objc_storeStrong(param_1 + _DAT_1127470ec,0);
  _objc_storeStrong(param_1 + _DAT_1127470e8,0);
  _objc_storeStrong(param_1 + _DAT_1127470e4,0);
  _objc_storeStrong(param_1 + _DAT_1127470cc,0);
  _objc_storeStrong(param_1 + _DAT_1127470e0,0);
  _objc_storeStrong(param_1 + _DAT_1127470fc,0);
  _objc_storeStrong(param_1 + _DAT_1127470dc,0);
  _objc_storeStrong(param_1 + _DAT_1127470d8,0);
  _objc_storeStrong(param_1 + _DAT_1127470d4,0);
  _objc_storeStrong(param_1 + _DAT_1127470f8,0);
  _objc_storeStrong(param_1 + _DAT_1127470d0,0);
  _objc_storeStrong(param_1 + _DAT_1127470f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127470f0,0);
  return;
}



/* Entry: 1063f7fa0; end: 1063f8047;  */

void FUN_1063f7fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4d798);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94200();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063f8048; end: 1063f80e3; -[PublisherAdSlot initWithRequest:requestStatus:viewStatus:adSlotIdx:] */

undefined1 *
FUN_1063f8048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f1218;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063f80e4; end: 1063f8107; -[PublisherAdSlot copyWithZone:] */

undefined8 FUN_1063f80e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1063f8108; end: 1063f8183; -[PublisherAdSlot hash] */

undefined8 * FUN_1063f8108(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = &uStack_48;
  uStack_48 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1063f8228;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((puVar2[2] != param_3[2] || (puVar2[3] != param_3[3])) || (puVar2[4] != param_3[4])))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1063f8228;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1063f8228;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1063f8228:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1063f8184; end: 1063f8243; -[PublisherAdSlot isEqual:] */

long FUN_1063f8184(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1063f8228;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_1063f8228;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1063f8228;
    }
  }
  lVar3 = 1;
LAB_1063f8228:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1063f8244; end: 1063f824b; -[PublisherAdSlot request] */

undefined8 FUN_1063f8244(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1063f824c; end: 1063f8253; -[PublisherAdSlot requestStatus] */

undefined8 FUN_1063f824c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1063f8254; end: 1063f825b; -[PublisherAdSlot viewStatus] */

undefined8 FUN_1063f8254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1063f825c; end: 1063f8263; -[PublisherAdSlot adSlotIdx] */

undefined8 FUN_1063f825c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1063f8264; end: 1063f826f; -[PublisherAdSlot .cxx_destruct] */

void FUN_1063f8264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063f8270; end: 1063f8def;  */

void FUN_1063f8270(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_ffffffffffffff38;
  
  _objc_retain(param_15);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)(ulong)param_1;
    func_0x0001063f8430(puVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                        param_11,param_12,
                        CONCAT71(CONCAT61((int6)((ulong)in_stack_ffffffffffffff38 >> 0x10),
                                          param_13._1_1_),(undefined1)param_13),param_15);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126ca590;
    func_0x00010c26a3c0(PTR_PTR_1126ca590);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063f8df0; end: 1063f8f53;  */

double FUN_1063f8df0(double param_1,ulong param_2,uint param_3,long param_4,long param_5,int param_6
                    )

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 - 5 < 2) {
    if (param_3 == 0) {
      func_0x00010bf39640(param_4);
      dVar3 = param_1;
      goto LAB_1063f8ec8;
    }
  }
  else {
    dVar3 = 0.0;
    if (0x15 < param_2) goto LAB_1063f8ec8;
    if ((1L << (param_2 & 0x3f) & 0x202180U) == 0) {
      if (param_2 == 2) {
        if (param_6 != 0) {
          lVar1 = param_4;
          func_0x00010bfbc2e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          if ((param_3 & 1) == 0) {
            func_0x00010bef40a0();
          }
          else {
            func_0x00010bef4000();
          }
          _objc_release(lVar1);
          dVar3 = (double)lVar2;
          goto LAB_1063f8ec8;
        }
        if (param_3 == 0) {
          func_0x00010c293c20(param_4);
          dVar3 = param_1;
          goto LAB_1063f8ec8;
        }
      }
      else {
        if (param_2 != 0x11) goto LAB_1063f8ec8;
        if (param_3 == 0) {
          func_0x00010c11a600(param_4);
          dVar3 = param_1;
          goto LAB_1063f8ec8;
        }
      }
    }
    else if (param_3 == 0) {
      func_0x00010c11b3e0(param_4);
      dVar3 = param_1;
      goto LAB_1063f8ec8;
    }
  }
  lVar1 = param_5;
  func_0x00010c067f60(param_5);
  dVar3 = (double)lVar1;
LAB_1063f8ec8:
  _objc_release(param_5);
  _objc_release(param_4);
  return dVar3;
}



/* Entry: 1063f8f54; end: 1063f9be3;  */

undefined *
FUN_1063f8f54(double param_1,double param_2,undefined **param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13,
             undefined8 param_14,undefined4 param_15,undefined4 param_16,undefined8 param_17,
             char param_18,undefined4 param_19,undefined8 param_20,long param_21,undefined4 param_22
             ,undefined4 param_23,undefined8 param_24)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  double dVar24;
  undefined *puStack_188;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_24);
  lVar2 = param_12;
  func_0x00010bf1f480();
  if ((int)lVar2 == 0) {
    puVar3 = PTR_PTR_1126ca5a0;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(param_3);
    ppuVar4 = param_3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (ppuVar4 != (undefined **)0x0) {
      ppuVar23 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010befa120(puVar22);
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar4 != ppuVar23);
      ppuVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar5 = PTR_PTR_1126ca5a8;
    _objc_alloc();
    puVar6 = puVar22;
    func_0x00010bf51e00(puVar22);
    func_0x00010bff1880();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c2b0020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar3 = puVar7;
    func_0x00010c2a8060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar6 = puVar3;
    func_0x00010c2b6200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2b3160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    FUN_1063f9be4(param_11,param_5,param_13,param_12);
    puVar6 = puVar3;
    func_0x00010c2b0120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf90d40(PTR_PTR_1126b8c98);
    puVar3 = puVar6;
    func_0x00010c2acfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0703c0(param_11);
    puVar6 = puVar3;
    func_0x00010c2b0580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2a7820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c2a7a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2bc060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar21 = param_6;
    func_0x00010c107cc0(param_6);
    FUN_1063f8df0(param_5,1,param_11,param_12,uVar21);
    puVar6 = puVar3;
    func_0x00010c2adde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar21 = param_6;
    func_0x00010c107cc0(param_6);
    uVar18 = 0;
    FUN_1063f8df0(param_5,0,param_11,param_12,uVar21);
    puVar3 = puVar6;
    func_0x00010c2b48c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar2 = param_12;
    func_0x00010c067f60(param_12);
    puVar6 = puVar3;
    func_0x00010c2a9100((double)lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2acce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar21 = param_17;
    func_0x00010c149400(param_17);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2b76e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar21);
    puVar3 = puVar6;
    func_0x00010c2a98e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c2b65c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2b9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar19 = 10;
    lVar2 = param_12;
    func_0x00010c067f60();
    if (0 < lVar2) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c2bc8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar6);
      puVar3 = puVar7;
      func_0x00010c2bca20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    func_0x00010c0ec0c0(param_12);
    puVar6 = puVar3;
    func_0x00010c2acfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2bc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c2ace20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar21 = param_11;
    func_0x0001084c1810(param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_11;
    func_0x0001084c18c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c2b36c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c2b36e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2b4f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    dVar24 = -1.0;
    if (0.0 < param_1) {
      _CACurrentMediaTime();
      dVar24 = dVar24 - param_1;
      func_0x00010c155420(PTR_PTR_1126afec0);
    }
    puStack_188 = puVar3;
    func_0x00010c2bb1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (param_18 != '\0') {
      uVar9 = param_20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x000107f49238();
      _objc_release(uVar10);
      _objc_release(uVar9);
      if ((int)uVar11 != 0) {
        puVar3 = puStack_188;
        func_0x00010c2b8bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_188);
        uVar9 = param_20;
        func_0x00010c269d40(param_20);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51c80();
        puVar6 = puVar3;
        func_0x00010c2b30a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(uVar10);
        _objc_release(uVar9);
        uVar9 = param_20;
        func_0x00010c269d40(param_20);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        dVar24 = param_2;
        func_0x00010bf51c80();
        puVar3 = puVar6;
        func_0x00010c2b30c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(uVar10);
        _objc_release(uVar9);
        uVar9 = param_20;
        func_0x00010c269d40(param_20);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe4080();
        puVar6 = puVar3;
        func_0x00010c2b3040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(uVar10);
        _objc_release(uVar9);
        puVar3 = PTR_PTR_1126afec0;
        uVar9 = param_20;
        func_0x00010c269d40(param_20);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c155420(puVar3);
        puStack_188 = puVar6;
        func_0x00010c2b3060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
      }
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110e4ced8;
    lVar2 = param_12;
    func_0x00010bf1f480();
    if ((param_21 != 0) && ((int)lVar2 != 0)) {
      ppuVar23 = (undefined **)PTR_PTR_1126ca318;
      _objc_alloc();
      lVar2 = param_21;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb66c0();
      lVar12 = param_21;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb66a0();
      uVar19 = (ulong)dVar24;
      lVar13 = param_21;
      func_0x00010c269d40(param_21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb65e0();
      lVar14 = param_21;
      func_0x00010c269d40(param_21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb65a0();
      lVar15 = param_21;
      func_0x00010c269d40(param_21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb6660();
      lVar16 = param_21;
      func_0x00010c269d40(param_21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb6620();
      func_0x00010c013dc0();
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar2);
      puVar3 = puStack_188;
      ppuVar4 = ppuVar23;
      func_0x00010c2a7b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_188);
      _objc_release(ppuVar23);
      puStack_188 = puVar3;
    }
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(puVar5);
    _objc_release(puVar22);
  }
  else {
    if (param_18 == '\0') {
      uVar21 = 0;
    }
    else {
      uVar21 = param_20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar21;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      uVar21 = uVar8;
      func_0x000107f49238();
      if ((int)uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        _objc_retain(uVar8);
        uVar21 = uVar8;
      }
      _objc_release(uVar8);
    }
    puStack_188 = PTR_PTR_1126ca590;
    ppuVar4 = param_3;
    uVar19 = param_4;
    func_0x00010c23cb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
  }
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_188);
    return puStack_188;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar19);
  _objc_retain(param_3);
  _objc_retain(uVar19);
  uVar17 = uVar19;
  func_0x00010c0ec0c0();
  if ((int)uVar17 == 0) {
LAB_1063f9dbc:
    _objc_release(uVar19);
    _objc_release(param_3);
  }
  else {
    switch(uVar18) {
    case 0:
    case 7:
      break;
    default:
      _objc_release(uVar19);
      _objc_release(param_3);
      goto LAB_1063f9d0c;
    case 2:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      ppuVar23 = param_3;
      func_0x00010bf7faa0();
      if (((ulong)ppuVar23 & 1) != 0) goto LAB_1063f9dbc;
      ppuVar23 = param_3;
      func_0x00010bf7fbc0();
      _objc_release(uVar19);
      _objc_release(param_3);
      if (((ulong)ppuVar23 & 1) == 0) goto LAB_1063f9d0c;
      goto LAB_1063f9dcc;
    case 8:
    case 0xd:
      break;
    case 0x11:
      break;
    case 0x15:
    }
    uVar17 = uVar19;
    func_0x00010c0ec0c0();
    _objc_release(uVar19);
    _objc_release(param_3);
    if ((uVar17 & 1) != 0) {
LAB_1063f9d0c:
      _objc_retain(param_3);
      _objc_retain(uVar19);
      if ((long)ppuVar4 - 0x14U < 2) {
LAB_1063f9d38:
        if ((uVar18 != 4) &&
           ((ppuVar4 = param_3, func_0x00010bf7fa80(), ((ulong)ppuVar4 & 1) != 0 ||
            (((puVar3 = PTR_PTR_1126b8ca8, func_0x00010bf91c20(), (int)puVar3 != 0 &&
              (uVar17 = uVar19, func_0x00010bf1f480(), uVar18 == 5)) && ((int)uVar17 != 0))))))
        goto LAB_1063f9dbc;
LAB_1063f9d40:
        _objc_release(uVar19);
        _objc_release(param_3);
      }
      else {
        if (ppuVar4 != (undefined **)0x1c) {
          if (ppuVar4 == (undefined **)0x1) goto LAB_1063f9d38;
          goto LAB_1063f9d40;
        }
        ppuVar4 = param_3;
        func_0x00010bf91f60();
        _objc_release(uVar19);
        _objc_release(param_3);
        if ((int)ppuVar4 == 0) goto LAB_1063f9dcc;
      }
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010c269fe0();
      puVar22 = (undefined *)0x0;
      if ((long)puVar3 < 5) {
        if ((long)puVar3 < 3) {
          if (puVar3 == (undefined *)0x1) {
            bVar1 = uVar18 == 2;
          }
          else {
            if (puVar3 != (undefined *)0x2) goto LAB_1063f9dd0;
            bVar1 = uVar18 == 5;
          }
        }
        else if (puVar3 == (undefined *)0x3) {
          bVar1 = uVar18 == 7;
        }
        else {
          if (puVar3 != (undefined *)0x4) goto LAB_1063f9dd0;
          bVar1 = uVar18 == 8;
        }
      }
      else if ((long)puVar3 < 7) {
        if (puVar3 == (undefined *)0x5) {
          bVar1 = uVar18 == 0xd;
        }
        else {
          if (puVar3 != (undefined *)0x6) goto LAB_1063f9dd0;
          bVar1 = uVar18 == 0x10;
        }
      }
      else if (puVar3 == (undefined *)0x7) {
        bVar1 = uVar18 == 6;
      }
      else if (puVar3 == (undefined *)0x8) {
        bVar1 = uVar18 == 0x11;
      }
      else {
        if (puVar3 != (undefined *)0x9) goto LAB_1063f9dd0;
        bVar1 = uVar18 == 0x15;
      }
      puVar22 = (undefined *)(ulong)!bVar1;
      goto LAB_1063f9dd0;
    }
  }
LAB_1063f9dcc:
  puVar22 = (undefined *)0x1;
LAB_1063f9dd0:
  _objc_release(uVar19);
  _objc_release(param_3);
  return puVar22;
}



/* Entry: 1063f9be4; end: 1063f9ea7;  */

bool FUN_1063f9be4(ulong param_1,long param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0ec0c0();
  if ((int)uVar2 == 0) {
LAB_1063f9dbc:
    _objc_release(param_4);
    _objc_release(param_1);
  }
  else {
    switch(param_2) {
    case 0:
    case 7:
      break;
    default:
      _objc_release(param_4);
      _objc_release(param_1);
      goto LAB_1063f9d0c;
    case 2:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      uVar2 = param_1;
      func_0x00010bf7faa0();
      if ((uVar2 & 1) != 0) goto LAB_1063f9dbc;
      uVar2 = param_1;
      func_0x00010bf7fbc0();
      _objc_release(param_4);
      _objc_release(param_1);
      if ((uVar2 & 1) == 0) goto LAB_1063f9d0c;
      goto LAB_1063f9dcc;
    case 8:
    case 0xd:
      break;
    case 0x11:
      break;
    case 0x15:
    }
    uVar2 = param_4;
    func_0x00010c0ec0c0();
    _objc_release(param_4);
    _objc_release(param_1);
    if ((uVar2 & 1) != 0) {
LAB_1063f9d0c:
      _objc_retain(param_1);
      _objc_retain(param_4);
      if (param_3 - 0x14U < 2) {
LAB_1063f9d38:
        if ((param_2 != 4) &&
           ((uVar2 = param_1, func_0x00010bf7fa80(), (uVar2 & 1) != 0 ||
            (((puVar3 = PTR_PTR_1126b8ca8, func_0x00010bf91c20(), (int)puVar3 != 0 &&
              (uVar2 = param_4, func_0x00010bf1f480(), param_2 == 5)) && ((int)uVar2 != 0))))))
        goto LAB_1063f9dbc;
LAB_1063f9d40:
        _objc_release(param_4);
        _objc_release(param_1);
      }
      else {
        if (param_3 != 0x1c) {
          if (param_3 == 1) goto LAB_1063f9d38;
          goto LAB_1063f9d40;
        }
        uVar2 = param_1;
        func_0x00010bf91f60();
        _objc_release(param_4);
        _objc_release(param_1);
        if ((int)uVar2 == 0) goto LAB_1063f9dcc;
      }
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010c269fe0();
      bVar1 = false;
      if ((long)puVar3 < 5) {
        if ((long)puVar3 < 3) {
          if (puVar3 == (undefined *)0x1) {
            bVar1 = param_2 == 2;
          }
          else {
            if (puVar3 != (undefined *)0x2) goto LAB_1063f9dd0;
            bVar1 = param_2 == 5;
          }
        }
        else if (puVar3 == (undefined *)0x3) {
          bVar1 = param_2 == 7;
        }
        else {
          if (puVar3 != (undefined *)0x4) goto LAB_1063f9dd0;
          bVar1 = param_2 == 8;
        }
      }
      else if ((long)puVar3 < 7) {
        if (puVar3 == (undefined *)0x5) {
          bVar1 = param_2 == 0xd;
        }
        else {
          if (puVar3 != (undefined *)0x6) goto LAB_1063f9dd0;
          bVar1 = param_2 == 0x10;
        }
      }
      else if (puVar3 == (undefined *)0x7) {
        bVar1 = param_2 == 6;
      }
      else if (puVar3 == (undefined *)0x8) {
        bVar1 = param_2 == 0x11;
      }
      else {
        if (puVar3 != (undefined *)0x9) goto LAB_1063f9dd0;
        bVar1 = param_2 == 0x15;
      }
      bVar1 = !bVar1;
      goto LAB_1063f9dd0;
    }
  }
LAB_1063f9dcc:
  bVar1 = true;
LAB_1063f9dd0:
  _objc_release(param_4);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1063f9ea8; end: 1063f9f47;  */

undefined *
FUN_1063f9ea8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_4;
  func_0x00010bf1f480();
  if ((int)uVar1 == 0) {
    puVar2 = param_1;
    FUN_1063f9be4(param_1,param_2,param_3,param_4);
  }
  else {
    puVar2 = PTR_PTR_1126ca590;
    func_0x00010c070ac0(PTR_PTR_1126ca590);
  }
  _objc_release(param_4);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1063f9f48; end: 1063fa06b;  */

void FUN_1063f9f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_2;
    func_0x00010c263080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
    func_0x0001063f8430(0,&PTR____CFConstantStringClassReference_110dc3a38,
                        &PTR____CFConstantStringClassReference_110e4c958,1,0,0,0,param_1,param_2,
                        param_3,2,0x101);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar3 = PTR_PTR_1126ca590;
    func_0x00010c26a480(PTR_PTR_1126ca590);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063fa06c; end: 1063fa1ab;  */

void FUN_1063fa06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010c263080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
    func_0x0001063f8430(0,&PTR____CFConstantStringClassReference_110dc3a38,param_1,1,0,0,0,param_2,
                        param_3,param_4,param_5,0x101);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar3 = PTR_PTR_1126ca590;
    func_0x00010c26a3e0(PTR_PTR_1126ca590);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063fa1ac; end: 1063fa36f;  */

void FUN_1063fa1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_2;
    func_0x00010c263080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
    func_0x0001063f8430(0,param_7,&PTR____CFConstantStringClassReference_110db3b58,param_4,0,param_8
                        ,0,param_1,param_2,param_3,param_5,0x101);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar4 = param_9;
    func_0x00010bf529e0();
    puVar5 = puVar3;
    if (lVar4 == 0) {
      _objc_retain(puVar3);
    }
    else {
      func_0x00010c2aad60(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
  }
  else {
    puVar5 = PTR_PTR_1126ca590;
    func_0x00010c26a440(PTR_PTR_1126ca590);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063fa370; end: 1063fa50b;  */

void FUN_1063fa370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_2;
    func_0x00010c263080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
    func_0x0001063f8430(0,param_4,&PTR____CFConstantStringClassReference_110e4dd98,param_5,0,0,0,
                        param_1,param_2,param_3,0x15,0x101);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar4 = param_6;
    func_0x00010bf529e0();
    puVar5 = puVar3;
    if (lVar4 == 0) {
      _objc_retain(puVar3);
    }
    else {
      func_0x00010c2aad60(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
  }
  else {
    puVar5 = PTR_PTR_1126ca590;
    func_0x00010c26a400(PTR_PTR_1126ca590);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063fa50c; end: 1063fa807;  */

void FUN_1063fa50c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126b8ca0;
    func_0x00010c25d240(PTR_PTR_1126b8ca0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b8ca0;
    func_0x00010c25d240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    uVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f480();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126b8ca0;
      func_0x00010c25d240(PTR_PTR_1126b8ca0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126b8ca0;
    func_0x00010c25d240(PTR_PTR_1126b8ca0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(puVar3);
    uVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f480();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126b8ca0;
      func_0x00010c25d240(PTR_PTR_1126b8ca0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(puVar3);
    }
    uVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f480();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126b8ca0;
      func_0x00010c25d240(PTR_PTR_1126b8ca0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(puVar3);
    }
    uVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f480();
    _objc_release(uVar1);
    puVar3 = puVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x0;
    func_0x0001063f8430(0,&PTR____CFConstantStringClassReference_110dc3a38,
                        &PTR____CFConstantStringClassReference_110e4ddb8,1,0,0,0,4,param_1,param_2,
                        0x16,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    puVar5 = PTR_PTR_1126ca590;
    func_0x00010c26a460(PTR_PTR_1126ca590);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063fa808; end: 1063fa913;  */

void FUN_1063fa808(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010c263080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
    func_0x0001063f8430(0,&PTR____CFConstantStringClassReference_110dc3a38,
                        &PTR____CFConstantStringClassReference_110e4ddd8,1,0,0,0,0x21,param_1,
                        param_2,0x17,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar3 = PTR_PTR_1126ca590;
    func_0x00010c26a420(PTR_PTR_1126ca590);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063fa914; end: 1063faab3; -[SCAdChatFeedDataSource initWithDependencies:pendingDisplayAdData:clearConversationActionHandler:messagingExperimentService:friendsFeedLifecyleListener:applicationLifecycleEvents:userId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1063fa914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f1220;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithDependencies_pendingDisp_1125e0768,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112747114;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112747118;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274711c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747120);
    *(undefined **)((long)puVar1 + (long)_DAT_112747120) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112747124;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c24aa60();
    *(bool *)((long)puVar1 + (long)_DAT_112747128) = lVar4 != 0;
    _objc_release(lVar5);
    func_0x00010bea8e00(puVar1);
    func_0x00010be4c740(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1063faab4; end: 1063fabd7; -[SCAdChatFeedDataSource setPlaylistItemController:] */

void FUN_1063faab4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setPlaylistItemController__1126551a0);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9be80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125bc0(uVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1063fabd8; end: 1063fac6f;  */

void FUN_1063fabd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar5;
  func_0x00010bef4120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be12540(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063fac70; end: 1063fac77;  */

void FUN_1063fac70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_uniqueIdentifier_11267db88);
  return;
}



/* Entry: 1063fac78; end: 1063fad33; -[SCAdChatFeedDataSource mediaLoadContexts] */

void FUN_1063fac78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar7 = ppuVar6;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar7;
  func_0x00010bf529e0();
  _objc_release(ppuVar7);
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
    do {
      func_0x00010be12560(puVar1,param_2,ppuVar6,ppuVar7,0);
      ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      ppuVar4 = ppuVar6;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf529e0();
      _objc_release(ppuVar4);
    } while (ppuVar7 < ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 1063fad34; end: 1063faddf; -[SCAdChatFeedDataSource _fetchMedia:] */

void FUN_1063fad34(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      func_0x00010be12560(param_1,param_2,param_3,uVar3,0);
      uVar3 = uVar3 + 1;
      uVar1 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar3 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063fade0; end: 1063fb077; -[SCAdChatFeedDataSource _fetchMedia:index:videoFetchCompletionBlock:] */

void FUN_1063fade0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x0001084c506c(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0c5660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb3da0(param_1);
  func_0x00010bef4240(param_1);
  _objc_retain(uVar2);
  _objc_retain(uVar5);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfa87a0(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1063fb078; end: 1063fb0ef;  */

void FUN_1063fb078(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf20fa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c1a0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063fb0f0; end: 1063fb10b; -[SCAdChatFeedDataSource _shouldForceFullDownload] */

bool FUN_1063fb0f0(long param_1)

{
  func_0x00010bef4240();
  return param_1 != 0x16;
}



/* Entry: 1063fb10c; end: 1063fb387; -[SCAdChatFeedDataSource pageDataForDataModel:completion:] */

void FUN_1063fb10c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf925a0();
  uVar3 = uVar1;
  func_0x0001084c4f90(uVar1,uVar6,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bef3680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c242040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c4d40();
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((int)uVar6 == 0) {
    if (param_4 != 0) {
      puVar2 = PTR_PTR_1126b23e0;
      _objc_alloc(PTR_PTR_1126b23e0);
      uVar11 = uVar1;
      func_0x00010c280580(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      uVar12 = uVar11;
      func_0x00010640abd4(uVar11,param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033240(puVar2);
      (**(code **)(param_4 + 0x10))(param_4,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar12);
      _objc_release(uVar11);
    }
  }
  else {
    puStack_68 = PTR_PTR_1126f1220;
    uStack_70 = param_1;
    _objc_msgSendSuper2(&uStack_70,PTR_s_pageDataForDataModel_completion__112619db8,param_3,param_4)
    ;
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063fb388; end: 1063fb3f7; -[SCAdChatFeedDataSource adProductType] */

undefined8 FUN_1063fb388(long param_1)

{
  long lVar1;
  
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29d360();
  _objc_release(param_1);
  if (lVar1 < 0x1e) {
    if (lVar1 == 0xb) {
      return 0x16;
    }
    if (lVar1 == 0x1c) {
      return 0xf;
    }
  }
  else {
    if (lVar1 == 0x1e) {
      return 0x16;
    }
    if (lVar1 == 0x27) {
      return 0xf;
    }
  }
  return 10;
}



/* Entry: 1063fb3f8; end: 1063fb4af; -[SCAdChatFeedDataSource hideAdWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063fb3f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d360();
  _objc_release(lVar1);
  if (lVar2 == 0x1e) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112747114);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b440();
    _objc_release(uVar3);
  }
  func_0x00010c0ea260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063fb4b0; end: 1063fb787; -[SCAdChatFeedDataSource _handleMediaFetchResult:adSnap:profileInfo:videoFetchCompletionBlock:] */

void FUN_1063fb4b0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c280580(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  if (param_6 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = param_1;
    func_0x00010bef3680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c5940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bef2520(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf925a0();
    uVar11 = param_4;
    func_0x0001084c4f90(param_4,uVar6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x00010c0c5660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb3da0(param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_6);
    func_0x00010c10a220(uVar2);
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1063fb788; end: 1063fb7db;  */

void FUN_1063fb788(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063fb7dc; end: 1063fb853; -[SCAdChatFeedDataSource _didFinishPreparingAdMediaWithDataModel:videoFetchCompletionBlock:] */

void FUN_1063fb7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c275100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063fb854; end: 1063fb94f; -[SCAdChatFeedDataSource _setUpApplicationLifecycleEventHandling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063fb854(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112747118);
  func_0x00010bf75dc0(uVar1);
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



/* Entry: 1063fb950; end: 1063fb97b;  */

void FUN_1063fb950(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063fb97c; end: 1063fba4b; -[SCAdChatFeedDataSource _appDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063fb97c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d360();
  if ((lVar2 == 0x1e) && ((*(byte *)(param_1 + _DAT_112747128) & 1) == 0)) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c29d360();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0xb) {
      return;
    }
  }
  func_0x00010c0ea260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063fba4c; end: 1063fbb93; -[SCAdChatFeedDataSource _listenToFeedLifecycleUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063fba4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + _DAT_112747128) == '\x01') {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112747124);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29d340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
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
  }
  return;
}



/* Entry: 1063fbb94; end: 1063fbc43;  */

void FUN_1063fbb94(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1560(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1063fbc44; end: 1063fbc6f;  */

void FUN_1063fbc44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063fbc70; end: 1063fbcff; -[SCAdChatFeedDataSource _onFeedDidFullyDisappear] */

void FUN_1063fbc70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d360();
  _objc_release(lVar1);
  if (lVar2 == 0x1e) {
    func_0x00010c0ea260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82f40();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1063fbd00; end: 1063fbd6f; -[SCAdChatFeedDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063fbd00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747120,0);
  _objc_storeStrong(param_1 + _DAT_11274711c,0);
  _objc_storeStrong(param_1 + _DAT_112747124,0);
  _objc_storeStrong(param_1 + _DAT_112747118,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747114,0);
  return;
}



/* Entry: 1063fbd70; end: 1063fbe1b; -[SCAdCrossInventoryRuleTracker init] */

undefined1 * FUN_1063fbd70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ca510;
    _objc_alloc();
    func_0x00010c0293c0(0x43e0000000000000);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    func_0x00010be92140(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1063fbe1c; end: 1063fbf6f; -[SCAdCrossInventoryRuleTracker registeredEventsForOperaSession] */

void FUN_1063fbe1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  ulong in_x4;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_88 = puVar1;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_80 = puVar2;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_78 = puVar3;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9400;
  puStack_70 = puVar4;
  func_0x00010c157400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_68 = puVar5;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_88;
  uVar13 = 6;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(uVar13);
  _objc_retain(in_x4);
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained();
  uVar15 = uVar13;
  func_0x00010be36bc0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9a78;
  func_0x00010c101520(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((int)ppuVar8 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(puVar1 + 0x20));
    func_0x00010c12adc0(*(undefined8 *)(puVar1 + 0x28));
  }
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((((uint)puVar6 | (uint)ppuVar8 ^ 0xffffffff) & 1) == 0) {
    uVar14 = *(ulong *)(puVar1 + 0x20);
    puVar4 = puVar2;
    func_0x00010be36bc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar4);
    if ((uVar14 & 1) == 0) {
      puVar4 = puVar2;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        uVar15 = *(undefined8 *)(puVar1 + 0x20);
        puVar4 = puVar2;
        func_0x00010be36bc0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar15);
        _objc_release(puVar4);
      }
      func_0x00010be38980(puVar1);
    }
  }
  puVar4 = puVar1;
  func_0x00010bec2160();
  if ((int)puVar4 != 0) {
    if ((uint)puVar7 == 0) {
      func_0x00010bec1820(puVar1);
      uVar14 = *(ulong *)(puVar1 + 0x28);
      puVar4 = puVar3;
      func_0x00010be36bc0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar4);
      if ((uVar14 & 1) == 0) {
        puVar4 = puVar3;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 != (undefined *)0x0) {
          uVar15 = *(undefined8 *)(puVar1 + 0x28);
          puVar4 = puVar3;
          func_0x00010be36bc0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar15);
          _objc_release(puVar4);
        }
        func_0x00010be38920(puVar1);
      }
    }
    else {
      func_0x00010bec3900();
      func_0x00010be92140(puVar1);
      puVar4 = puVar1 + 0x38;
      _objc_loadWeakRetained();
      puVar5 = puVar4;
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ca218;
      _objc_retain(puVar5);
      _objc_opt_class(puVar4);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar4);
      puVar4 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar5);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar4 != (undefined *)0x0) {
        func_0x00010bef4240(puVar5);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(puVar1 + 0x30);
        *(undefined **)(puVar1 + 0x30) = puVar6;
        _objc_release(uVar15);
      }
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
  }
  puVar4 = PTR_PTR_1126c9400;
  func_0x00010c157400(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((((uint)puVar7 | (uint)ppuVar8 ^ 0xffffffff) & 1) == 0) {
    puVar4 = PTR_PTR_1126c9408;
    func_0x00010c157060(PTR_PTR_1126c9408);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar10 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar4);
    uVar14 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar14 = 0;
    }
    _objc_retain(uVar14);
    _objc_release(uVar9);
    uVar9 = uVar14;
    func_0x00010c067ec0();
    _objc_release(uVar14);
    if ((int)uVar9 == 1) {
      puVar4 = PTR_PTR_1126c9408;
      func_0x00010c157360(PTR_PTR_1126c9408);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar4);
      uVar14 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar14 = 0;
      }
      _objc_retain(uVar14);
      _objc_release(uVar9);
      uVar9 = uVar14;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      if (uVar9 != 0) {
        puVar4 = puVar3;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar14 = *(ulong *)(puVar1 + 0x28);
        func_0x00010bf4b900();
        if ((uVar14 & 1) == 0) {
          if (puVar5 != (undefined *)0x0) {
            func_0x00010befa120(*(undefined8 *)(puVar1 + 0x28));
          }
          func_0x00010be38920(puVar1);
        }
        _objc_release(puVar5);
      }
      _objc_release(uVar9);
    }
  }
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar12;
  func_0x00010c0720c0();
  if (((ulong)ppuVar8 & 1) == 0) {
    _objc_release(puVar4);
  }
  else {
    puVar5 = puVar1;
    func_0x00010c0ea260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c27dd80();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar11 == (undefined *)0x2) {
      func_0x00010bec3900(puVar1);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(in_x4);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 1063fbf70; end: 1063fc587; -[SCAdCrossInventoryRuleTracker operaViewDidSendEvent:page:params:] */

void FUN_1063fbf70(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar11 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a78;
  func_0x00010c101520(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((int)uVar10 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  }
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((((uint)lVar5 | (uint)uVar10 ^ 0xffffffff) & 1) == 0) {
    uVar10 = *(ulong *)(param_1 + 0x20);
    lVar3 = lVar1;
    func_0x00010be36bc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar3);
    if ((uVar10 & 1) == 0) {
      lVar3 = lVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = lVar1;
        func_0x00010be36bc0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar11);
        _objc_release(lVar3);
      }
      func_0x00010be38980(param_1);
    }
  }
  lVar3 = param_1;
  func_0x00010bec2160();
  if ((int)lVar3 != 0) {
    if ((uint)lVar6 == 0) {
      func_0x00010bec1820(param_1);
      uVar10 = *(ulong *)(param_1 + 0x28);
      lVar3 = lVar2;
      func_0x00010be36bc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(lVar3);
      if ((uVar10 & 1) == 0) {
        lVar3 = lVar2;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          lVar3 = lVar2;
          func_0x00010be36bc0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar11);
          _objc_release(lVar3);
        }
        func_0x00010be38920(param_1);
      }
    }
    else {
      func_0x00010bec3900();
      func_0x00010be92140(param_1);
      uVar10 = param_1 + 0x38;
      _objc_loadWeakRetained();
      uVar7 = uVar10;
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar4 = PTR_PTR_1126ca218;
      _objc_retain(uVar7);
      _objc_opt_class(puVar4);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      uVar10 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar7);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (uVar10 != 0) {
        func_0x00010bef4240(uVar7);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        *(undefined **)(param_1 + 0x30) = puVar4;
        _objc_release(uVar11);
      }
      _objc_release(uVar10);
      _objc_release(uVar7);
    }
  }
  puVar4 = PTR_PTR_1126c9400;
  func_0x00010c157400(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((((uint)lVar6 | (uint)uVar10 ^ 0xffffffff) & 1) == 0) {
    puVar4 = PTR_PTR_1126c9408;
    func_0x00010c157060(PTR_PTR_1126c9408);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar4);
    uVar10 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar7);
    uVar7 = uVar10;
    func_0x00010c067ec0();
    _objc_release(uVar10);
    if ((int)uVar7 == 1) {
      puVar4 = PTR_PTR_1126c9408;
      func_0x00010c157360(PTR_PTR_1126c9408);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      uVar10 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar7);
      uVar7 = uVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      if (uVar7 != 0) {
        lVar3 = lVar2;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar10 = *(ulong *)(param_1 + 0x28);
        func_0x00010bf4b900();
        if ((uVar10 & 1) == 0) {
          if (lVar5 != 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
          }
          func_0x00010be38920(param_1);
        }
        _objc_release(lVar5);
      }
      _objc_release(uVar7);
    }
  }
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  if ((uVar10 & 1) == 0) {
    _objc_release(puVar4);
  }
  else {
    lVar3 = param_1;
    func_0x00010c0ea260();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c27dd80();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(puVar4);
    if (lVar9 == 2) {
      func_0x00010bec3900(param_1);
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


