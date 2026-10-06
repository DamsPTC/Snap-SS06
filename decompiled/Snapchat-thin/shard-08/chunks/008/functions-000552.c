/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106682f04; end: 106682f5b; -[SCLensExplorerUserSettings registerUserTappedLensItem] */

void FUN_106682f04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110e59098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106682f5c; end: 106682fdb; -[SCLensExplorerUserSettings _resetOnboardingSettings] */

void FUN_106682f5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c69e8,
                      &PTR____CFConstantStringClassReference_110e59058);
  puVar1 = PTR____kCFBooleanFalse_11034ab60;
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,PTR____kCFBooleanFalse_11034ab60,
                      &PTR____CFConstantStringClassReference_110e59038);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110e59078);
  func_0x00010c1bb7a0(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010c1bb760(*(undefined8 *)(param_1 + 0x18),param_2,0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 106682fdc; end: 106682fff; -[SCLensExplorerUserSettings _retrieveOnboardingSettings] */

void FUN_106682fdc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be96da0();
  *(long *)(param_1 + 0x28) = lVar1;
  return;
}



/* Entry: 106683000; end: 1066830af; -[SCLensExplorerUserSettings _retrievefavoritesOnboardingSessionCount] */

void FUN_106683000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e59038);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e59058);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c092e40();
    if (lVar3 < lVar4) {
      func_0x00010c1bb7a0(*(undefined8 *)(param_1 + 0x18),param_2,lVar4);
    }
  }
  else {
    func_0x00010bf43940(param_1);
  }
  return;
}



/* Entry: 1066830b0; end: 1066830b7; -[SCLensExplorerUserSettings studySettingsProvider] */

undefined8 FUN_1066830b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1066830b8; end: 1066830ff; -[SCLensExplorerUserSettings .cxx_destruct] */

void FUN_1066830b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106683100; end: 10668314f; -[SCLensExplorerUserSettingsFavoritesOnboardingDisplayPolicy initWithFavoritesSectionsDisplayCount:onboardingWasCompleted:] */

void FUN_106683100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 106683150; end: 10668316f; -[SCLensExplorerUserSettingsFavoritesOnboardingDisplayPolicy shouldShowFavoritesOnboarding] */

bool FUN_106683150(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return false;
  }
  return *(long *)(param_1 + 8) < 8;
}



/* Entry: 106683170; end: 106683177; +[SCLensExplorerUserSettingsFavoritesOnboardingDisplayPolicy onboardingShowLimit] */

undefined8 FUN_106683170(void)

{
  return 8;
}



/* Entry: 106683178; end: 10668392b; -[SCGamesExplorerDeeplinkSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683178(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong in_stack_fffffffffffffec0;
  
  uVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11274d670;
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  *(ulong *)(param_1 + lVar25) = uVar4;
  _objc_release(uVar24);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar26 = param_1 + (long)_DAT_11274d68c;
  _objc_loadWeakRetained();
  lVar5 = lVar26;
  func_0x00010c160180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10668392c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126cc930;
  _objc_alloc();
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar7,param_2,0,puVar8,0x36);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126cc938;
  _objc_alloc();
  uVar1 = uVar2;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar5;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126cc940;
  _objc_opt_new();
  uVar16 = param_1;
  FUN_10668392c();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c25e1a0();
  puVar19 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar8,param_2,uVar6,uVar1,uVar3,uVar4,uVar9,uVar10,uVar11,uVar24,uVar12,
                      lVar26,uVar13,uVar14,in_stack_fffffffffffffec0 & 0xffffffffffffff00,puVar7,0,
                      puVar15,uVar18,1);
  _objc_release(puVar19);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar26);
  _objc_release(uVar12);
  _objc_release(uVar24);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_10668392c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf970e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar15 = PTR_PTR_1126b1b58;
  _objc_alloc();
  uVar24 = 8;
  if ((int)uVar4 == 0) {
    uVar24 = 9;
  }
  uVar1 = param_1;
  FUN_10668392c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c10f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a5a0(puVar15,param_2,uVar24,uVar4 & 0xffffffff,uVar3,0,0);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar19 = PTR_PTR_1126cc950;
  _objc_alloc();
  func_0x00010c043060();
  puVar20 = PTR_PTR_1126cc958;
  _objc_alloc();
  func_0x00010c03d980();
  puVar21 = PTR_PTR_1126cc960;
  _objc_alloc();
  lVar26 = lVar5;
  func_0x00010c0b37c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10668392c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_10668392c();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf970e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ce0(puVar21,param_2,puVar8,0,uVar6,lVar26,puVar15,puVar19,puVar20,puVar22,uVar3,
                      puVar23,uVar9,0x4000,2,0);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(puVar23);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar22);
  _objc_release(lVar26);
  func_0x00010c1bb880(puVar8,param_2,puVar21);
  uVar1 = param_1;
  FUN_10668392c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar21,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_10668392c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar21,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar26 = (long)_DAT_11274d674;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar26));
  puVar22 = PTR_PTR_1126cc968;
  _objc_alloc();
  uVar1 = param_1;
  FUN_10668392c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0409a0(puVar22,param_2,uVar3,puVar21);
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar22;
  _objc_release(uVar24);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11274d678);
  *(undefined **)(param_1 + (long)_DAT_11274d678) = puVar21;
  _objc_retain(puVar21);
  _objc_release(uVar24);
  uVar1 = param_1;
  func_0x000106683950(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  FUN_10668392c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cc60(puVar21,param_2,uVar1);
  _objc_release(puVar21);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10668392c; end: 106683973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668392c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d680);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106683974; end: 106683ae7; -[SCGamesExplorerDeeplinkSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683974(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = (long)_DAT_11274d674;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x000106683950(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d678;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f2498;
    plVar5 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar5,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d67c;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_retain();
    _objc_release(uVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106683ae8;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar4;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar5 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 106683ae8; end: 106683aef;  */

void FUN_106683ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106683af0; end: 106683c17; -[SCGamesExplorerDeeplinkSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683af0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d690;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d670);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d694);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106683c18;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106683c18; end: 106683c7f;  */

void FUN_106683c18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106683c80; end: 106683c9f; -[SCGamesExplorerDeeplinkSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683c80(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106683ca0; end: 106683cb3; -[SCGamesExplorerDeeplinkSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d688,param_3);
  return;
}



/* Entry: 106683cb4; end: 106683cc3; -[SCGamesExplorerDeeplinkSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106683cb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d698);
}



/* Entry: 106683cc4; end: 106683d03; -[SCGamesExplorerDeeplinkSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d698;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106683d04; end: 106683d13; -[SCGamesExplorerDeeplinkSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106683d04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d69c);
}



/* Entry: 106683d14; end: 106683d53; -[SCGamesExplorerDeeplinkSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d69c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106683d54; end: 106683d63; -[SCGamesExplorerDeeplinkSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106683d54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6a0);
}



/* Entry: 106683d64; end: 106683da3; -[SCGamesExplorerDeeplinkSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106683da4; end: 106683db3; -[SCGamesExplorerDeeplinkSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106683da4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6a4);
}



/* Entry: 106683db4; end: 106683df3; -[SCGamesExplorerDeeplinkSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106683df4; end: 106683e03; -[SCGamesExplorerDeeplinkSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106683df4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6a8);
}



/* Entry: 106683e04; end: 106683e43; -[SCGamesExplorerDeeplinkSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106683e44; end: 106683e53; -[SCGamesExplorerDeeplinkSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106683e44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6ac);
}



/* Entry: 106683e54; end: 106683e93; -[SCGamesExplorerDeeplinkSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106683e94; end: 106683f9f; -[SCGamesExplorerDeeplinkSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683e94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d6ac,0);
  _objc_storeStrong(param_1 + _DAT_11274d6a8,0);
  _objc_storeStrong(param_1 + _DAT_11274d6a4,0);
  _objc_storeStrong(param_1 + _DAT_11274d6a0,0);
  _objc_storeStrong(param_1 + _DAT_11274d69c,0);
  _objc_storeStrong(param_1 + _DAT_11274d698,0);
  _objc_storeStrong(param_1 + _DAT_11274d694,0);
  _objc_destroyWeak(param_1 + _DAT_11274d690);
  _objc_destroyWeak(param_1 + _DAT_11274d68c);
  _objc_destroyWeak(param_1 + _DAT_11274d688);
  _objc_destroyWeak(param_1 + _DAT_11274d684);
  _objc_destroyWeak(param_1 + _DAT_11274d680);
  _objc_storeStrong(param_1 + _DAT_11274d67c,0);
  _objc_storeStrong(param_1 + _DAT_11274d674,0);
  _objc_storeStrong(param_1 + _DAT_11274d678,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d670,0);
  return;
}



/* Entry: 106683fa0; end: 1066846fb; -[SCGamesExplorerMainCameraSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106683fa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  ulong in_stack_fffffffffffffeb0;
  
  lVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11274d6b0;
  uVar23 = *(undefined8 *)(param_1 + lVar24);
  *(long *)(param_1 + lVar24) = lVar4;
  _objc_release(uVar23);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11274d6cc;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c160180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar23 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c11d2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cc930;
  _objc_alloc();
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar5,param_2,0,puVar6,0x36);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar1 = lVar3;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar3;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar3;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126cc940;
  _objc_opt_new();
  lVar15 = param_1;
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c25e1a0();
  puVar18 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar6,param_2,uVar23,lVar1,lVar4,lVar25,lVar7,lVar8,lVar9,uVar10,lVar24,
                      lVar11,lVar12,lVar13,in_stack_fffffffffffffeb0 & 0xffffffffffffff00,puVar5,0,
                      puVar14,lVar17,1);
  _objc_release(puVar18);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar24);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar25);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar14 = PTR_PTR_1126b1b58;
  _objc_alloc();
  lVar1 = param_1;
  FUN_1066846fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c10f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a5a0(puVar14,param_2,3,1,lVar4,0,0);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar18 = PTR_PTR_1126cc950;
  _objc_alloc();
  func_0x00010c043060();
  puVar19 = PTR_PTR_1126cc958;
  _objc_alloc();
  func_0x00010c03d980();
  puVar21 = PTR_PTR_1126cc960;
  _objc_alloc();
  lVar8 = lVar2;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar7;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf970e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ce0(puVar21,param_2,puVar6,0,uVar23,lVar8,puVar14,puVar18,puVar19,puVar20,lVar25,
                      puVar22,lVar1,0x4000,2,0);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(puVar22);
  _objc_release(lVar25);
  _objc_release(lVar7);
  _objc_release(puVar20);
  _objc_release(lVar8);
  func_0x00010c1bb880(puVar6,param_2,puVar21);
  lVar4 = param_1;
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar21,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar21,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar25 = (long)_DAT_11274d6b4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar25));
  puVar22 = PTR_PTR_1126cc968;
  _objc_alloc();
  lVar4 = param_1;
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0409a0(puVar22,param_2,lVar1,puVar21);
  uVar10 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar22;
  _objc_release(uVar10);
  _objc_release(lVar1);
  _objc_release(lVar4);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11274d6b8);
  *(undefined **)(param_1 + _DAT_11274d6b8) = puVar21;
  _objc_retain(puVar21);
  _objc_release(uVar10);
  lVar25 = param_1;
  func_0x000106684720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar25;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar25);
  FUN_1066846fc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cc60(puVar21,param_2,lVar1);
  _objc_release(puVar21);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(uVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1066846fc; end: 106684743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066846fc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d6c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106684744; end: 1066848b7; -[SCGamesExplorerMainCameraSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684744(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = (long)_DAT_11274d6b4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x000106684720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d6b8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24a0;
    plVar5 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar5,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d6bc;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_retain();
    _objc_release(uVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1066848b8;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar4;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar5 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 1066848b8; end: 1066848bf;  */

void FUN_1066848b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1066848c0; end: 1066849e7; -[SCGamesExplorerMainCameraSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066848c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d6d0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d6b0);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d6d4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066849e8;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066849e8; end: 106684a4f;  */

void FUN_1066849e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106684a50; end: 106684a6f; -[SCGamesExplorerMainCameraSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684a50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d6c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106684a70; end: 106684a83; -[SCGamesExplorerMainCameraSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684a70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d6c8,param_3);
  return;
}



/* Entry: 106684a84; end: 106684a93; -[SCGamesExplorerMainCameraSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106684a84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6d8);
}



/* Entry: 106684a94; end: 106684ad3; -[SCGamesExplorerMainCameraSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106684ad4; end: 106684ae3; -[SCGamesExplorerMainCameraSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106684ad4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6dc);
}



/* Entry: 106684ae4; end: 106684b23; -[SCGamesExplorerMainCameraSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106684b24; end: 106684b33; -[SCGamesExplorerMainCameraSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106684b24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6e0);
}



/* Entry: 106684b34; end: 106684b73; -[SCGamesExplorerMainCameraSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106684b74; end: 106684b83; -[SCGamesExplorerMainCameraSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106684b74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6e4);
}



/* Entry: 106684b84; end: 106684bc3; -[SCGamesExplorerMainCameraSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106684bc4; end: 106684bd3; -[SCGamesExplorerMainCameraSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106684bc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6e8);
}



/* Entry: 106684bd4; end: 106684c13; -[SCGamesExplorerMainCameraSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106684c14; end: 106684c23; -[SCGamesExplorerMainCameraSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106684c14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d6ec);
}



/* Entry: 106684c24; end: 106684c63; -[SCGamesExplorerMainCameraSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d6ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106684c64; end: 106684d6f; -[SCGamesExplorerMainCameraSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106684c64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d6ec,0);
  _objc_storeStrong(param_1 + _DAT_11274d6e8,0);
  _objc_storeStrong(param_1 + _DAT_11274d6e4,0);
  _objc_storeStrong(param_1 + _DAT_11274d6e0,0);
  _objc_storeStrong(param_1 + _DAT_11274d6dc,0);
  _objc_storeStrong(param_1 + _DAT_11274d6d8,0);
  _objc_storeStrong(param_1 + _DAT_11274d6d4,0);
  _objc_destroyWeak(param_1 + _DAT_11274d6d0);
  _objc_destroyWeak(param_1 + _DAT_11274d6cc);
  _objc_destroyWeak(param_1 + _DAT_11274d6c8);
  _objc_destroyWeak(param_1 + _DAT_11274d6c4);
  _objc_destroyWeak(param_1 + _DAT_11274d6c0);
  _objc_storeStrong(param_1 + _DAT_11274d6bc,0);
  _objc_storeStrong(param_1 + _DAT_11274d6b4,0);
  _objc_storeStrong(param_1 + _DAT_11274d6b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d6b0,0);
  return;
}



/* Entry: 106684d70; end: 106684df3; -[SCGamesExplorerRenderedLensSelectionInstaller initWithRouterDelegate:router:] */

undefined8
FUN_106684d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc978;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c0409c0(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106684df4; end: 106684f9f; -[SCGamesExplorerRenderedLensSelectionInstaller initWithRouterDelegate:router:selector:] */

undefined8 *
FUN_106684df4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f24a8;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puVar4 = PTR_DAT_1126a5598;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010010fab4(param_3,puVar4);
    lVar1 = param_3;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_3);
    puVar6 = (undefined8 *)0x0;
    if (lVar1 == 0) goto LAB_106684f48;
    puVar4 = PTR_PTR_1126cc980;
    _objc_opt_new();
    uVar5 = puVar2[2];
    puVar2[2] = puVar4;
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,param_4);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    func_0x00010c067980(param_3);
    _objc_storeWeak(puVar2 + 1,param_3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(param_3);
  }
  _objc_retain(puVar2);
  puVar6 = puVar2;
LAB_106684f48:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  return puVar6;
}



/* Entry: 106684fa0; end: 106685023;  */

long FUN_106684fa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c07ab40(), (int)lVar2 == 0)) {
    lVar2 = 3;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c158fa0();
    if (2 < lVar2 - 1U) {
      lVar2 = 0;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 106685024; end: 106685077; -[SCGamesExplorerRenderedLensSelectionInstaller invalidate] */

void FUN_106685024(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e020();
    _objc_release(lVar1);
  }
  _objc_storeWeak(param_1 + 8,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106685078; end: 1066850bb; -[SCGamesExplorerRenderedLensSelectionInstaller dealloc] */

void FUN_106685078(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00();
  puStack_28 = PTR_PTR_1126f24a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1066850bc; end: 1066850e7; -[SCGamesExplorerRenderedLensSelectionInstaller .cxx_destruct] */

void FUN_1066850bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066850e8; end: 10668585f; -[SCGamesExplorerSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066850e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong in_stack_fffffffffffffec0;
  
  lVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11274d6f8;
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  *(long *)(param_1 + lVar25) = lVar26;
  _objc_release(uVar24);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11d2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126cc930;
  _objc_alloc();
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar4,param_2,0,puVar5,0x36);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar1 = lVar2;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar2;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106685884();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c160180();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126cc940;
  _objc_opt_new();
  lVar16 = param_1;
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c25e1a0();
  puVar19 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar5,param_2,uVar24,lVar1,lVar3,lVar26,lVar6,lVar7,lVar8,uVar9,lVar25,lVar12
                      ,lVar13,lVar14,in_stack_fffffffffffffec0 & 0xffffffffffffff00,puVar4,0,puVar15
                      ,lVar18,1);
  _objc_release(puVar19);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar26);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar15 = PTR_PTR_1126b1b58;
  _objc_alloc();
  lVar1 = param_1;
  FUN_106685860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c10f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a5a0(puVar15,param_2,3,1,lVar3,0,0);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar19 = PTR_PTR_1126cc950;
  _objc_alloc();
  func_0x00010c043060();
  puVar20 = PTR_PTR_1126cc958;
  _objc_alloc();
  func_0x00010c03d980();
  puVar21 = PTR_PTR_1126cc960;
  _objc_alloc();
  lVar1 = param_1;
  func_0x000106685884();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar1;
  func_0x00010c160180();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar25;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar6;
  func_0x00010bf970e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ce0(puVar21,param_2,puVar5,0,uVar24,lVar8,puVar15,puVar19,puVar20,puVar22,lVar3,
                      puVar23,lVar26,0x4000,2,0);
  _objc_release(lVar26);
  _objc_release(lVar6);
  _objc_release(puVar23);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(puVar22);
  _objc_release(lVar8);
  _objc_release(lVar25);
  _objc_release(lVar1);
  func_0x00010c1bb880(puVar5,param_2,puVar21);
  lVar3 = param_1;
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar21,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1;
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar21,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar26 = (long)_DAT_11274d6fc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar26));
  puVar23 = PTR_PTR_1126cc968;
  _objc_alloc();
  lVar3 = param_1;
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0409a0(puVar23,param_2,lVar1,puVar21);
  uVar9 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar23;
  _objc_release(uVar9);
  _objc_release(lVar1);
  _objc_release(lVar3);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274d700);
  *(undefined **)(param_1 + _DAT_11274d700) = puVar21;
  _objc_retain(puVar21);
  _objc_release(uVar9);
  lVar3 = param_1;
  func_0x0001066858a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar26);
  _objc_release(lVar1);
  _objc_release(lVar3);
  FUN_106685860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cc60(puVar21,param_2,lVar1);
  _objc_release(puVar21);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar24);
  return;
}



/* Entry: 106685860; end: 1066858cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685860(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d708);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066858cc; end: 106685a3f; -[SCGamesExplorerSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066858cc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = (long)_DAT_11274d6fc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x0001066858a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d700;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24b0;
    plVar5 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar5,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d704;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_retain();
    _objc_release(uVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106685a40;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar4;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar5 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 106685a40; end: 106685a47;  */

void FUN_106685a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106685a48; end: 106685b6f; -[SCGamesExplorerSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685a48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d718;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d6f8);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d71c);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106685b70;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106685b70; end: 106685bd7;  */

void FUN_106685b70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106685bd8; end: 106685bf7; -[SCGamesExplorerSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685bd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106685bf8; end: 106685c0b; -[SCGamesExplorerSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d710,param_3);
  return;
}



/* Entry: 106685c0c; end: 106685c1b; -[SCGamesExplorerSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106685c0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d720);
}



/* Entry: 106685c1c; end: 106685c5b; -[SCGamesExplorerSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d720;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106685c5c; end: 106685c6b; -[SCGamesExplorerSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106685c5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d724);
}



/* Entry: 106685c6c; end: 106685cab; -[SCGamesExplorerSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d724;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106685cac; end: 106685cbb; -[SCGamesExplorerSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106685cac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d728);
}



/* Entry: 106685cbc; end: 106685cfb; -[SCGamesExplorerSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d728;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106685cfc; end: 106685d0b; -[SCGamesExplorerSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106685cfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d72c);
}



/* Entry: 106685d0c; end: 106685d4b; -[SCGamesExplorerSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d72c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106685d4c; end: 106685d5b; -[SCGamesExplorerSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106685d4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d730);
}



/* Entry: 106685d5c; end: 106685d9b; -[SCGamesExplorerSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d730;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106685d9c; end: 106685dab; -[SCGamesExplorerSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106685d9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d734);
}



/* Entry: 106685dac; end: 106685deb; -[SCGamesExplorerSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d734;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106685dec; end: 106685ef7; -[SCGamesExplorerSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685dec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d734,0);
  _objc_storeStrong(param_1 + _DAT_11274d730,0);
  _objc_storeStrong(param_1 + _DAT_11274d72c,0);
  _objc_storeStrong(param_1 + _DAT_11274d728,0);
  _objc_storeStrong(param_1 + _DAT_11274d724,0);
  _objc_storeStrong(param_1 + _DAT_11274d720,0);
  _objc_storeStrong(param_1 + _DAT_11274d71c,0);
  _objc_destroyWeak(param_1 + _DAT_11274d718);
  _objc_destroyWeak(param_1 + _DAT_11274d714);
  _objc_destroyWeak(param_1 + _DAT_11274d710);
  _objc_destroyWeak(param_1 + _DAT_11274d70c);
  _objc_destroyWeak(param_1 + _DAT_11274d708);
  _objc_storeStrong(param_1 + _DAT_11274d704,0);
  _objc_storeStrong(param_1 + _DAT_11274d6fc,0);
  _objc_storeStrong(param_1 + _DAT_11274d700,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d6f8,0);
  return;
}



/* Entry: 106685ef8; end: 106686867; -[SCLensExplorerARBarSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106685ef8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar25 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar25;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11274d738;
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  *(long *)(param_1 + lVar26) = lVar3;
  _objc_release(uVar23);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar25);
  lVar24 = (long)_DAT_11274d73c;
  lVar25 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar4 = lVar25;
  func_0x00010bf64240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1;
  FUN_106686868();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c4c0();
  _objc_release(lVar25);
  uVar5 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  FUN_106686868(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2afc0();
  func_0x00010be73c40(param_1);
  _objc_release(lVar25);
  puVar6 = PTR_PTR_1126cc930;
  _objc_alloc();
  lVar25 = param_1;
  FUN_106686868(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar25;
  func_0x00010bf9e0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c159a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar25);
  puVar7 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar1 = lVar4;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar4;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010668688c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126cc940;
  _objc_opt_new();
  lVar16 = param_1;
  FUN_106686868();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25e1a0();
  puVar18 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11274d75c;
  _objc_loadWeakRetained();
  lVar19 = lVar25;
  func_0x00010bf15320();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  FUN_106686868();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c084a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0();
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar25);
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar26);
  _objc_release(uVar23);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1066868b0;
  uStack_78 = 0x1066868c0;
  uStack_70 = 0;
  lVar25 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar25);
  lVar1 = lVar25;
  func_0x00010c10f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcf60();
  _objc_release(lVar1);
  _objc_release(lVar25);
  puVar22 = PTR_PTR_1126b1b58;
  _objc_alloc();
  lVar25 = param_1 + lVar24;
  _objc_loadWeakRetained();
  func_0x00010bf2afc0();
  lVar1 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a5a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar25);
  puVar18 = PTR_PTR_1126cc950;
  _objc_alloc();
  func_0x00010c043060();
  puVar15 = PTR_PTR_1126cc960;
  _objc_alloc();
  lVar25 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar11 = lVar25;
  func_0x00010c0d6600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11274d750;
  _objc_loadWeakRetained();
  lVar26 = lVar1;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010be88640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar17 = lVar2;
  func_0x00010bf9e0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar17;
  func_0x00010c159400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar14 = lVar3;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar13 = lVar8;
  func_0x00010bf9e0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar13;
  func_0x00010c15fb60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar24;
  _objc_loadWeakRetained();
  func_0x00010bf2afc0();
  func_0x00010be9c9e0();
  func_0x00010c023ce0();
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(uVar23);
  _objc_release(lVar26);
  _objc_release(lVar1);
  _objc_release(lVar11);
  _objc_release(lVar25);
  func_0x00010c1bb880(puVar7);
  lVar25 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar1 = lVar25;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar15);
  _objc_release(lVar1);
  _objc_release(lVar25);
  lVar25 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar25);
  lVar1 = lVar25;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar15);
  _objc_release(lVar1);
  _objc_release(lVar25);
  lVar25 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar25);
  lVar1 = lVar25;
  func_0x00010c0f1e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d87e0(puVar15);
  _objc_release(lVar1);
  _objc_release(lVar25);
  lVar25 = (long)_DAT_11274d740;
  _objc_retain(puVar15);
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar15;
  _objc_release(uVar23);
  lVar25 = param_1 + _DAT_11274d748;
  _objc_loadWeakRetained();
  lVar2 = lVar25;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar25);
  param_1 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar25 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cc60(puVar15);
  _objc_release(lVar25);
  _objc_release(param_1);
  _objc_release(puVar15);
  _objc_release(puVar18);
  _objc_release(puVar22);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  return;
}



/* Entry: 106686868; end: 1066868af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686868(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d73c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066868b0; end: 1066868c7;  */

void FUN_1066868b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066868c8; end: 106686937;  */

void FUN_1066868c8(long param_1,undefined8 param_2)

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



/* Entry: 106686938; end: 106686a9f; -[SCLensExplorerARBarSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686938(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11274d748;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010c136360(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d740;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24b8;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d744;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_retain();
    _objc_release(uVar5);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106686aa0;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar3;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar4 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 106686aa0; end: 106686aa7;  */

void FUN_106686aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106686aa8; end: 106686ac7; -[SCLensExplorerARBarSessionEntryPoint _pickedLensSourceForCameraSource:] */

undefined8 FUN_106686aa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x34;
  if (param_3 != 7) {
    uVar1 = 0x30;
  }
  uVar2 = 0x33;
  if (param_3 != 3) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106686ac8; end: 106686ad3; -[SCLensExplorerARBarSessionEntryPoint _searchTypeForCameraSource:] */

bool FUN_106686ac8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 3;
}



/* Entry: 106686ad4; end: 106686c1b; -[SCLensExplorerARBarSessionEntryPoint _refreshHandlerWithStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126cc988;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11274d758;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar2;
  func_0x00010c093ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024020(puVar1,param_2,lVar4,param_3);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126cc958;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d980(puVar8,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (puVar1 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar1 + _DAT_11274d754;
      _objc_loadWeakRetained();
    }
    puVar5 = puVar8;
    func_0x00010bf68700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    uVar6 = *(undefined8 *)(puVar1 + _DAT_11274d738);
    func_0x00010bf6d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126ae720;
    uVar6 = *(undefined8 *)(puVar1 + _DAT_11274d760);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106686d44;
    puStack_b0 = &UNK_110932a58;
    puStack_a8 = puVar5;
    uStack_a0 = uVar7;
    uStack_98 = uVar6;
    _objc_retain(uVar6);
    func_0x00010bf11fe0(puVar8,param_2,&puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106686c1c; end: 106686d43; -[SCLensExplorerARBarSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d754;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d738);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d760);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106686d44;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106686d44; end: 106686dab;  */

void FUN_106686d44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106686dac; end: 106686dcb; -[SCLensExplorerARBarSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686dac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d74c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106686dcc; end: 106686ddf; -[SCLensExplorerARBarSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d74c,param_3);
  return;
}



/* Entry: 106686de0; end: 106686def; -[SCLensExplorerARBarSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106686de0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d764);
}



/* Entry: 106686df0; end: 106686e2f; -[SCLensExplorerARBarSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d764;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106686e30; end: 106686e3f; -[SCLensExplorerARBarSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106686e30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d768);
}



/* Entry: 106686e40; end: 106686e7f; -[SCLensExplorerARBarSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d768;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106686e80; end: 106686e8f; -[SCLensExplorerARBarSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106686e80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d76c);
}



/* Entry: 106686e90; end: 106686ecf; -[SCLensExplorerARBarSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d76c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106686ed0; end: 106686edf; -[SCLensExplorerARBarSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106686ed0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d770);
}



/* Entry: 106686ee0; end: 106686f1f; -[SCLensExplorerARBarSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d770;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106686f20; end: 106686f2f; -[SCLensExplorerARBarSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106686f20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d774);
}


