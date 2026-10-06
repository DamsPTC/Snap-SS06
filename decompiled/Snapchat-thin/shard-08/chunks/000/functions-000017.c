/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105becc4c; end: 105becca3; -[SCSearchableBusinessAccountSelectorViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105becc4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 2) {
    lVar2 = (long)_DAT_112731f20;
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf752e0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + lVar2,0);
    return;
  }
  return;
}



/* Entry: 105becca4; end: 105becd4f; -[SCSearchableBusinessAccountSelectorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105becca4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731f2c,0);
  _objc_storeStrong(param_1 + _DAT_112731f30,0);
  _objc_storeStrong(param_1 + _DAT_112731f34,0);
  _objc_storeStrong(param_1 + _DAT_112731f38,0);
  _objc_storeStrong(param_1 + _DAT_112731f28,0);
  _objc_destroyWeak(param_1 + _DAT_112731f20);
  _objc_storeStrong(param_1 + _DAT_112731f1c,0);
  _objc_storeStrong(param_1 + _DAT_112731f14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731f18,0);
  return;
}



/* Entry: 105becd50; end: 105becdaf; -[SCMemberRolesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105becd50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112731f3c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be124c0(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105becdb0; end: 105bece1b; -[SCMemberRolesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105becdb0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf83180(*(undefined8 *)(param_1 + _DAT_112731f40),param_2,1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112731f44));
  puStack_28 = PTR_PTR_1126ec4a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bece1c; end: 105becf1f; -[SCMemberRolesEntryPoint _fetchManagedProfiles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bece1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c0b8000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731f44);
  *(undefined8 *)(param_1 + _DAT_112731f44) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105becf20; end: 105bed03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105becf20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112731f60;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(uVar1);
    func_0x00010bf765c0(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105bed0b0;
    puStack_58 = &UNK_110841f80;
    uStack_50 = uVar1;
    lStack_48 = param_1;
    _objc_retain(uVar1);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105bed03c; end: 105bed08b;  */

uint FUN_105bed03c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf2d140();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c074e40(param_2);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105bed08c; end: 105bed0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed08c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112731f60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bed0b0; end: 105bed0ef;  */

void FUN_105bed0b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar1 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x00010c10cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_presentMemberRolesSelectorWithBu_112620e10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_presentMemberRolesSelectorWithSe_112620e18,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105bed0f0; end: 105bed28b; -[SCMemberRolesEntryPoint presentMemberRolesSelectorWithBusinessProfiles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed0f0(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126c3038;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112731f48;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112731f4c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112731f50;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1;
  FUN_105bed08c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290900();
  lVar8 = param_1;
  FUN_105bed08c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c159360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9ee0();
  _objc_release(param_3);
  lVar11 = (long)_DAT_112731f54;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c23a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd99999a0000000,param_1,PTR_s_showTrayWithController_trayHostD_11266c4a0,
             *(undefined8 *)(param_1 + lVar11),*(undefined8 *)(param_1 + lVar11));
  return;
}



/* Entry: 105bed28c; end: 105bed453; -[SCMemberRolesEntryPoint presentMemberRolesSelectorWithSearchAndRecents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed28c(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126c3040;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112731f48;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112731f4c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112731f58;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112731f50;
  _objc_loadWeakRetained(lVar8);
  lVar9 = param_1;
  FUN_105bed08c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290900();
  lVar10 = param_1;
  FUN_105bed08c();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c159360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9f00();
  _objc_release(param_3);
  lVar13 = (long)_DAT_112731f5c;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
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
                    /* WARNING: Could not recover jumptable at 0x00010c23a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe99999a0000000,param_1,PTR_s_showTrayWithController_trayHostD_11266c4a0,
             *(undefined8 *)(param_1 + lVar13),*(undefined8 *)(param_1 + lVar13));
  return;
}



/* Entry: 105bed454; end: 105bed553; -[SCMemberRolesEntryPoint showTrayWithController:trayHostDelegate:heightPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed454(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0a08;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c055600();
  _objc_release(param_4);
  lVar3 = (long)_DAT_112731f40;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219e20(*(undefined8 *)(param_2 + lVar3),param_3,param_5);
  _objc_release(param_5);
  func_0x00010c167420(*(undefined8 *)(param_2 + lVar3),param_3,10);
  func_0x00010c16d3e0(*(undefined8 *)(param_2 + lVar3),param_3,1);
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  param_2 = param_2 + _DAT_112731f60;
  _objc_loadWeakRetained(param_2);
  lVar3 = param_2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c720(param_1,uVar2,param_3,lVar3,1,8);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bed554; end: 105bed6df; -[SCMemberRolesEntryPoint showPrivacyAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed554(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c3048;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105bed6e0;
  puStack_68 = &UNK_1108482a8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf58000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  puVar2 = PTR_PTR_1126b1c10;
  _objc_alloc();
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelAlert_110345e80);
  lVar4 = (long)_DAT_112731f68;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_new(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c10eda0(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105bed6e0; end: 105bed7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed6e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126c3048;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112731f50;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112731f58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18dd20(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bf83180(*(undefined8 *)(param_1 + _DAT_112731f40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bed7f4; end: 105bed847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed7f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731f64);
    *(undefined8 *)(param_1 + _DAT_112731f64) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bed848; end: 105bed85f; -[SCMemberRolesEntryPoint dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed848(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731f64);
  *(undefined8 *)(param_1 + _DAT_112731f64) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bed860; end: 105bed97f; -[SCMemberRolesEntryPoint didSelectViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112731f64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_3;
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126c3048;
  lVar7 = param_1 + _DAT_112731f50;
  _objc_loadWeakRetained(lVar7);
  lVar2 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112731f58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c233260(puVar6,param_2,param_3,lVar2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  if ((int)puVar6 == 0) {
    func_0x00010bf83180(*(undefined8 *)(param_1 + _DAT_112731f40),param_2,1);
  }
  else {
    func_0x00010c2393e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bed980; end: 105bed9e3; -[SCMemberRolesEntryPoint didDismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed980(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112731f60;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf74ae0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bed9e4; end: 105bed9f3; -[SCMemberRolesEntryPoint businessAccountController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bed9e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731f54);
}



/* Entry: 105bed9f4; end: 105beda33; -[SCMemberRolesEntryPoint setBusinessAccountController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bed9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731f54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105beda34; end: 105beda43; -[SCMemberRolesEntryPoint searchableViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105beda34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731f5c);
}



/* Entry: 105beda44; end: 105beda83; -[SCMemberRolesEntryPoint setSearchableViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105beda44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731f5c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105beda84; end: 105beda93; -[SCMemberRolesEntryPoint tray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105beda84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731f40);
}



/* Entry: 105beda94; end: 105bedad3; -[SCMemberRolesEntryPoint setTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105beda94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731f40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bedad4; end: 105bedae3; -[SCMemberRolesEntryPoint managedBusinessProfilesObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bedad4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731f44);
}



/* Entry: 105bedae4; end: 105bedb23; -[SCMemberRolesEntryPoint setManagedBusinessProfilesObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bedae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731f44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bedb24; end: 105bedb33; -[SCMemberRolesEntryPoint alertContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bedb24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731f68);
}



/* Entry: 105bedb34; end: 105bedb73; -[SCMemberRolesEntryPoint setAlertContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bedb34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731f68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bedb74; end: 105bedb83; -[SCMemberRolesEntryPoint selectedViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bedb74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731f64);
}



/* Entry: 105bedb84; end: 105bedbc3; -[SCMemberRolesEntryPoint setSelectedViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bedb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731f64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bedbc4; end: 105bedc8b; -[SCMemberRolesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bedbc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731f64,0);
  _objc_storeStrong(param_1 + _DAT_112731f68,0);
  _objc_storeStrong(param_1 + _DAT_112731f44,0);
  _objc_storeStrong(param_1 + _DAT_112731f40,0);
  _objc_storeStrong(param_1 + _DAT_112731f5c,0);
  _objc_storeStrong(param_1 + _DAT_112731f54,0);
  _objc_destroyWeak(param_1 + _DAT_112731f58);
  _objc_destroyWeak(param_1 + _DAT_112731f3c);
  _objc_destroyWeak(param_1 + _DAT_112731f50);
  _objc_destroyWeak(param_1 + _DAT_112731f48);
  _objc_destroyWeak(param_1 + _DAT_112731f4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112731f60);
  return;
}



/* Entry: 105bedc8c; end: 105bedf8b; +[SCMemberRolesEntryPointHelpers createPrivacyAlertWithActionBlock:cancelBlock:] */

void FUN_105bedc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  func_0x000105bee3f8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  uStack_a0 = uVar1;
  func_0x000105bee410();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  uStack_98 = uVar2;
  func_0x000105bee428();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  uStack_90 = uVar3;
  func_0x000105bee440();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e21578;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e21598;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e215b8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dbcff8;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126aed70;
  puVar7 = puVar6;
  func_0x000105bee3c8();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105bedf8c;
  puStack_e0 = &UNK_11084e500;
  uStack_d8 = param_3;
  _objc_retain(param_3);
  func_0x00010beff4c0(puVar8,param_2,puVar7,&puStack_f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar9 = PTR_PTR_1126aed70;
  func_0x000105bee3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar10;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x105bedf98;
  puStack_108 = &UNK_11084e500;
  uStack_100 = param_4;
  _objc_retain(param_4);
  func_0x00010beff4c0(puVar9,param_2,puVar7,&puStack_120);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar10 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = puVar10;
  func_0x000105bee398();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x000105bee3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar8;
  puStack_c8 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0(puVar10,param_2,0,puVar7,puVar11,0,puVar12,puVar5,puVar6,0);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(uStack_100);
  _objc_release(puVar8);
  _objc_release(uStack_d8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105bedf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar5 + 0x20) + 0x10))();
  return;
}



/* Entry: 105bedf8c; end: 105bedfa3;  */

void FUN_105bedf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105bedf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105bedfa4; end: 105bedfdb; +[SCMemberRolesEntryPointHelpers storageKeyNameForUserId:] */

void FUN_105bedfa4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 105bedfdc; end: 105bee0bf; +[SCMemberRolesEntryPointHelpers businessIdForViewModel:] */

void FUN_105bedfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105bee0c0;
  uStack_30 = 0x105bee0d0;
  uStack_28 = 0;
  func_0x00010c0bed20(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bee0c0; end: 105bee0d7;  */

void FUN_105bee0c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bee0d8; end: 105bee10f;  */

void FUN_105bee0d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bee110; end: 105bee113;  */

void FUN_105bee110(void)

{
  return;
}



/* Entry: 105bee114; end: 105bee203; +[SCMemberRolesEntryPointHelpers shouldShowAlertWithViewModel:currentUserId:preferences:] */

uint FUN_105bee114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c257140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = param_5;
  func_0x00010c0dff20(param_5,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_opt_class();
  func_0x00010bf24ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x00010bf4b900(uVar2,param_2,param_1);
    uVar4 = (uint)uVar3 ^ 1;
  }
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bee204; end: 105bee337; +[SCMemberRolesEntryPointHelpers setDidShowAlertWithViewModel:currentUserId:preferences:] */

void FUN_105bee204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c257140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = param_5;
  func_0x00010c0dff20(param_5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x00010bf00560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  _objc_opt_class(param_1);
  func_0x00010bf24ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010befa120(puVar3,param_2,param_1);
  func_0x00010c1d0560(param_5,param_2,puVar3,uVar1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105bee338; end: 105bee457;  */

void FUN_105bee338(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e215d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e215d8,
                      &PTR____CFConstantStringClassReference_110e215f8,0);
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



/* Entry: 105bee458; end: 105bee4d7;  */

void FUN_105bee458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c3058;
  _objc_alloc(PTR_PTR_1126c3058);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3060;
  _objc_opt_new(PTR_PTR_1126c3060);
  func_0x00010c012c80(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bee4d8; end: 105bee5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bee4d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c3068;
    _objc_alloc(PTR_PTR_1126c3068);
    lVar1 = param_1 + _DAT_112731f80;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112731f88;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0ddba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002fc0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105bee5b0; end: 105bee5e3;  */

void FUN_105bee5b0(void)

{
  _objc_alloc(PTR_PTR_1126c3078);
  func_0x00010c059ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bee5e4; end: 105bee663;  */

void FUN_105bee5e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126c3080;
  _objc_alloc(PTR_PTR_1126c3080);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4760(puVar4,param_2,uVar1,uVar3,uVar2,uVar5,*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105bee664; end: 105bee6eb;  */

void FUN_105bee664(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c3090;
    _objc_alloc(PTR_PTR_1126c3090);
    func_0x00010bff9160();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bee6ec; end: 105bee78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bee6ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c30a0;
    _objc_alloc(PTR_PTR_1126c30a0);
    lVar1 = param_1 + _DAT_112731f7c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e120(0x4143c68000000000,puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bee78c; end: 105bee7bb;  */

void FUN_105bee78c(void)

{
  _objc_alloc(PTR_PTR_1126c30a8);
  func_0x00010c0059e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bee7bc; end: 105bee857; -[SCLensAssetsDeliveryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bee7bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731f74,0);
  _objc_destroyWeak(param_1 + _DAT_112731f90);
  _objc_destroyWeak(param_1 + _DAT_112731f8c);
  _objc_destroyWeak(param_1 + _DAT_112731f88);
  _objc_destroyWeak(param_1 + _DAT_112731f70);
  _objc_destroyWeak(param_1 + _DAT_112731f84);
  _objc_destroyWeak(param_1 + _DAT_112731f80);
  _objc_destroyWeak(param_1 + _DAT_112731f6c);
  _objc_destroyWeak(param_1 + _DAT_112731f7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112731f78);
  return;
}



/* Entry: 105bee858; end: 105bee88f; -[SCSendingLensRemoteAssetsUploadEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bee858(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731f98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112731f94);
  return;
}



/* Entry: 105bee890; end: 105bee8d7; -[SCLensRemoteAssetLogger assetDownloadStartedWithType:] */

void FUN_105bee890(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c3070;
  func_0x00010bdcfa20(PTR_PTR_1126c3070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b71fe00(uVar2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bee8d8; end: 105bee9b3; -[SCLensRemoteAssetLogger assetDownloadFinishedWithDuration:assetSize:type:source:assetId:requestingLensId:mediaId:fetchType:statusCode:] */

void FUN_105bee8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be505c0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (param_6 == 0) {
    func_0x00010be505a0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,
                        param_11);
  }
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105bee9b4; end: 105beeb63; -[SCLensRemoteAssetLogger _logAssetDownloadToBlizzardWithDuration:assetSize:type:assetId:requestingLensId:mediaId:fetchType:statusCode:] */

void FUN_105bee9b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c30b8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010c16a880();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126c3070;
  func_0x00010bdd4cc0(PTR_PTR_1126c3070,param_3,param_5);
  func_0x00010c16a960(puVar1,param_3,puVar2);
  func_0x00010c191400(param_1,puVar1);
  puVar2 = PTR_PTR_1126c3070;
  func_0x00010be4ada0(PTR_PTR_1126c3070,param_3,param_9);
  func_0x00010c19b580(puVar1,param_3,puVar2);
  func_0x00010c1c4880(puVar1,param_3,param_8);
  _objc_release(param_8);
  func_0x00010c202cc0(puVar1,param_3,param_4);
  func_0x00010c1ec460(puVar1,param_3,param_7);
  _objc_release(param_7);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e4c0(puVar1,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c20a3c0(puVar1,param_3,param_10);
  func_0x00010c20f900(puVar1,param_3,param_10 == 200);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105beeb64; end: 105beec2b; -[SCLensRemoteAssetLogger _logAssetDownloadToGrapheneWithDuration:assetSize:type:source:] */

void FUN_105beeb64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1d3b8;
  if (param_6 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de3db8;
  if (param_6 != 1) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = PTR_PTR_1126c3070;
  func_0x00010bdcfa20(PTR_PTR_1126c3070,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b71fbac(*(undefined8 *)(param_2 + 0x10),ppuVar2,puVar3,1);
  func_0x00010b71f8c8(param_1,*(undefined8 *)(param_2 + 0x10),ppuVar2,puVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  puVar4 = PTR_PTR_1126c3070;
  func_0x00010bebc4e0(PTR_PTR_1126c3070);
  func_0x00010b71f95c(uVar5,ppuVar2,puVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105beec2c; end: 105beec37; -[SCLensRemoteAssetLogger assetUploadStarted] */

void FUN_105beec2c(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59f68,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 105beec38; end: 105beeccb; -[SCLensRemoteAssetLogger assetUploadFinishedWithDuration:assetSize:type:] */

void FUN_105beec38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3070;
  func_0x00010bdcfa20(PTR_PTR_1126c3070,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7207bc(*(undefined8 *)(param_2 + 0x10),puVar1,1);
  func_0x00010b7205dc(param_1,*(undefined8 *)(param_2 + 0x10),puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = PTR_PTR_1126c3070;
  func_0x00010bebc4e0(PTR_PTR_1126c3070);
  func_0x00010b720648(uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105beeccc; end: 105beed13; -[SCLensRemoteAssetLogger uploadAssetMissedWithType:] */

void FUN_105beeccc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c3070;
  func_0x00010bdcfa20(PTR_PTR_1126c3070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b72289c(uVar2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105beed14; end: 105beede3; -[SCLensRemoteAssetLogger assetLensResourceLookupFinishedWithDuration:success:type:] */

void FUN_105beed14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3070;
  func_0x00010bdcfa20(PTR_PTR_1126c3070,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b720238(uVar3,puVar2,puVar1,1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7201a4(param_1,uVar3,puVar2,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105beede4; end: 105beee0b; +[SCLensRemoteAssetLogger _assetTypeToString:] */

undefined ** FUN_105beede4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return (undefined **)(&PTR_PTR_1108dc7e8)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e21778;
}



/* Entry: 105beee0c; end: 105beee17; +[SCLensRemoteAssetLogger _sizeInKB:] */

long FUN_105beee0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (long)((double)param_3 / 1024.0);
}



/* Entry: 105beee18; end: 105beee27; +[SCLensRemoteAssetLogger _blizzardLensRemoteAssetTypeFromLensRemoteAssetType:] */

ulong FUN_105beee18(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 1;
  if (5 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 105beee28; end: 105beee47; +[SCLensRemoteAssetLogger _lensFetchTypeFromLensRemoteAssetFetchType:] */

undefined8 FUN_105beee28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    return *(undefined8 *)(&UNK_10ddcaea8 + param_3 * 8);
  }
  return 2;
}



/* Entry: 105beee48; end: 105beee9b; -[SCLensRemoteAssetLogger .cxx_destruct] */

void FUN_105beee48(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105beee9c; end: 105beef8f; -[SCLensRemoteAssetsUploadManager initWithAssetsUploadOperationManager:assetsStore:uploadInfoProvider:encryptor:circumstanceEngine:] */

undefined8
FUN_105beee9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010bff4780(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105beef90; end: 105bef0e3; -[SCLensRemoteAssetsUploadManager initWithAssetsUploadOperationManager:assetsStore:uploadInfoProvider:encryptor:performer:circumstanceEngine:] */

undefined1 *
FUN_105beef90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ec4b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bef0e4; end: 105bef24f; -[SCLensRemoteAssetsUploadManager registerAssetUploadWithInfo:startImmediately:removeOriginalAsset:preEnqueueingBlock:] */

void FUN_105bef0e4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = 0;
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  uStack_5f = param_5;
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bef250; end: 105bef293;  */

void FUN_105bef250(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bef294; end: 105bef3b7; -[SCLensRemoteAssetsUploadManager sendingUploadAssetInfoForBatchId:] */

void FUN_105bef294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bef3b8; end: 105bef4a3;  */

void FUN_105bef3b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bee5b80(lVar2);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  return;
}



/* Entry: 105bef4a4; end: 105bef553;  */

void FUN_105bef4a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010bee5960(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bef554; end: 105bef677; -[SCLensRemoteAssetsUploadManager assetsUploadOperationForBatchId:] */

void FUN_105bef554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bef678; end: 105bef77b;  */

void FUN_105bef678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105bef718;
  puStack_48 = &UNK_1108dc878;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar4;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x00010bee5b80(lVar3,param_2,uVar1,uVar4,&puStack_60);
  _objc_release(lVar3);
  _objc_release(uStack_40);
  return;
}



/* Entry: 105bef77c; end: 105bef89f; -[SCLensRemoteAssetsUploadManager removeAssetsUploadOperationForBatchId:] */

void FUN_105bef77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bef8a0; end: 105bef8d7;  */

void FUN_105bef8a0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8dd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bef8d8; end: 105bef9fb; -[SCLensRemoteAssetsUploadManager stopOwningAssetsUploadForBatchId:] */

void FUN_105bef8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bef9fc; end: 105befa33;  */

void FUN_105bef9fc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec35a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105befa34; end: 105befbeb; -[SCLensRemoteAssetsUploadManager _registerAssetUploadWithInfo:startImmediately:removeOriginalAsset:traceToken:promise:preEnqueueingBlock:] */

void FUN_105befa34(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lStack_68 = 0;
  lVar2 = param_1;
  func_0x00010be094a0(param_1,param_2,param_3,param_5,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x00010bec3d40(param_1,param_2,lVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar4 = param_3;
      func_0x00010bf0af60(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105befbec;
      puStack_98 = &UNK_1108dc8a8;
      uStack_78 = param_6;
      _objc_retain(param_7);
      uStack_90 = param_7;
      _objc_retain(param_8);
      uStack_80 = param_8;
      _objc_retain(param_3);
      uStack_88 = param_3;
      uStack_70 = param_4;
      func_0x00010be89780(param_1,param_2,uVar4,param_6,&puStack_b0);
      _objc_release(uVar4);
      _objc_release(uStack_88);
      _objc_release(uStack_80);
      _objc_release(uStack_90);
    }
    else {
      func_0x00010bf43ca0(param_7,param_2,lVar3);
    }
    _objc_release(lVar3);
  }
  else {
    func_0x00010bf43ca0(param_7,param_2,lVar1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 105befbec; end: 105befccb;  */

void FUN_105befbec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf0b260(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf8cda0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28e9a0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf96360(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105befccc; end: 105befe27; -[SCLensRemoteAssetsUploadManager _removeUploadOperationForBatchId:traceToken:promise:] */

void FUN_105befccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105befda4;
  puStack_50 = &UNK_11088cdd0;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c12eee0(uVar1,param_2,param_3,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105befe28; end: 105befef7; -[SCLensRemoteAssetsUploadManager _stopOwningAssetsUploadForBatchId:traceToken:promise:] */

void FUN_105befe28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105befef8;
  puStack_48 = &UNK_1108420a0;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c256560(uVar1,param_2,param_3,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105befef8; end: 105beff63;  */

void FUN_105befef8(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c3080;
    func_0x00010be0b360(PTR_PTR_1126c3080,param_2,3,&PTR____CFConstantStringClassReference_110e21878
                        ,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 105beff64; end: 105bf00ff; -[SCLensRemoteAssetsUploadManager _encryptAssetWithInfo:removeOriginalAsset:error:] */

void FUN_105beff64(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar8 = &uStack_60;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf457a0();
  lVar6 = *(long *)(param_1 + 8);
  lVar1 = param_3;
  func_0x00010bf0b4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf93ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf93e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar5 == 1) {
    uStack_58 = 0;
    puVar8 = &uStack_58;
    func_0x00010bf09540(lVar6,param_2,lVar1,lVar2,lVar3,param_4,&uStack_58);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_60 = 0;
    func_0x00010bf93840(lVar6,param_2,lVar1,lVar2,lVar3,param_4,&uStack_60);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = *puVar8;
  _objc_retain(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar5 = lVar6;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    if (param_5 == (undefined8 *)0x0) {
      lVar5 = 0;
    }
    else {
      puVar4 = PTR_PTR_1126c3080;
      func_0x00010be0b360(PTR_PTR_1126c3080,param_2,4,
                          &PTR____CFConstantStringClassReference_110e21898,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      lVar5 = 0;
      *param_5 = puVar4;
    }
  }
  else {
    _objc_retain(lVar6);
    lVar5 = lVar6;
  }
  _objc_release(lVar6);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105bf0100; end: 105bf0287; -[SCLensRemoteAssetsUploadManager _uploadOperationForBatchId:traceToken:completion:] */

void FUN_105bf0100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x105bf01e0;
    puStack_50 = &UNK_1108dc8d8;
    uStack_38 = param_4;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_retain(param_5);
    lStack_40 = param_5;
    func_0x00010c28e3c0(uVar1,param_2,param_3,&puStack_68);
    _objc_release(uVar1);
    _objc_release(lStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf0288; end: 105bf03fb; -[SCLensRemoteAssetsUploadManager _registerIfNeededUploadOperationForBatchId:traceToken:completion:] */

void FUN_105bf0288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x105bf0368;
    puStack_50 = &UNK_1108dc908;
    uStack_38 = param_4;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_retain(param_5);
    lStack_40 = param_5;
    func_0x00010c1267c0(uVar1,param_2,param_3,&puStack_68);
    _objc_release(uVar1);
    _objc_release(lStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf03fc; end: 105bf0567; -[SCLensRemoteAssetsUploadManager _uploadInfoWithUploadOperation:batchId:traceToken:] */

void FUN_105bf03fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105bf0568;
  puStack_70 = &UNK_1108dc938;
  uStack_60 = param_5;
  _objc_retain(param_3);
  uStack_90 = param_5;
  uStack_68 = param_3;
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010c15e0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105bf0568; end: 105bf05db;  */

void FUN_105bf0568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bf05dc; end: 105bf0623; -[SCLensRemoteAssetsUploadManager _onRequestBatchIdForFutureUseWithBatchId:traceToken:] */

void FUN_105bf05dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bec4240(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105bf0624; end: 105bf06d3; -[SCLensRemoteAssetsUploadManager _storeUploadOperationForBatchId:traceToken:] */

void FUN_105bf0624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105bf06d4;
  puStack_48 = &UNK_11087ec20;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c257d80(uVar1,param_2,param_3,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf06d4; end: 105bf06d7;  */

void FUN_105bf06d4(void)

{
  return;
}



/* Entry: 105bf06d8; end: 105bf085f; -[SCLensRemoteAssetsUploadManager _storeAssetSynchronouslyWithAssetData:forAssetUploadInfo:] */

void FUN_105bf06d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf0b260(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec3d60(0x40f5180000000000,param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar1 = param_4;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf0af60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf8cda0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e218f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126c3080;
    func_0x00010be0b360(PTR_PTR_1126c3080,param_2,5,&PTR____CFConstantStringClassReference_110e21918
                        ,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105bf0860; end: 105bf09cb; -[SCLensRemoteAssetsUploadManager _storeAssetSynchronouslyWithAssetData:forId:withExpirationTimeInterval:] */

void FUN_105bf0860(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = 0;
  _dispatch_semaphore_create();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105bf09cc;
  uStack_60 = 0x105bf09dc;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c2574a0(param_1,uVar2);
  _objc_release(uVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105bf09cc; end: 105bf09e3;  */

void FUN_105bf09cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bf09e4; end: 105bf0a3f;  */

void FUN_105bf09e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bf0a40; end: 105bf0b4b; +[SCLensRemoteAssetsUploadManager _errorWithStatusCode:description:subError:] */

void FUN_105bf0a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105bf0b4c;
  puStack_58 = &UNK_1108dc998;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = (undefined1 *)ppuVar1;
  (**(code **)((long)ppuVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e21818,param_3,puVar2
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bf0b4c; end: 105bf0bfb;  */

void FUN_105bf0b4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = &uStack_40;
    puVar3 = &uStack_48;
    uVar4 = 1;
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  }
  else {
    uStack_28 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    puVar2 = &uStack_28;
    puVar3 = &uStack_38;
    uVar4 = 2;
    uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    lStack_20 = *(long *)(param_1 + 0x20);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2,puVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105bf0bfc; end: 105bf0c5b; -[SCLensRemoteAssetsUploadManager .cxx_destruct] */

void FUN_105bf0bfc(long param_1)

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



/* Entry: 105bf0c5c; end: 105bf0d2f; -[SCLensRemoteAssetsUploadOperationManager initWithUploadOperationStore:assetsUploader:assetsStore:logger:] */

undefined8
FUN_105bf0c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c059bc0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105bf0d30; end: 105bf0ebb; -[SCLensRemoteAssetsUploadOperationManager initWithUploadOperationStore:assetsUploader:assetsStore:logger:performer:] */

undefined1 *
FUN_105bf0d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ec4c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c0ba140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf0ebc; end: 105bf0fc3; -[SCLensRemoteAssetsUploadOperationManager registerIfNeededUploadOperationForBatchId:completion:] */

void FUN_105bf0ebc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = 0;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf0fc4; end: 105bf0ff7;  */

void FUN_105bf0fc4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


