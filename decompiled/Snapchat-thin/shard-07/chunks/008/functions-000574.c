/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105aa3e18; end: 105aa3edf; -[SCSpectaclesOnboardingScrollView animateFirstPageDescriptionViewLabels] */

void FUN_105aa3e18(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105aa3ea4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105aa3ee0; end: 105aa3f77; -[SCSpectaclesOnboardingScrollView page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105aa3ee0(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  func_0x00010bf4cdc0();
  dVar2 = param_1;
  func_0x00010bfb68e0(param_2);
  _CGRectGetWidth();
  param_1 = param_1 / dVar2;
  dVar2 = 0.0;
  if ((((0x7fffffffffffffff < (ulong)param_1 ||
        0x3fe < (long)ABS(param_1) + 0xfff0000000000000U >> 0x35) &&
       0xffffffffffffe < (long)param_1 - 1U) && ABS(param_1) != 0.0) ||
     (lVar1 = *(long *)(param_2 + _DAT_11272e998) + -1, dVar2 = param_1, param_1 <= (double)lVar1))
  {
    lVar1 = (long)dVar2;
  }
  return lVar1;
}



/* Entry: 105aa3f78; end: 105aa3fe7; -[SCSpectaclesOnboardingScrollView percentBetweenPage] */

double FUN_105aa3f78(double param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf4cdc0();
  dVar2 = param_1;
  while( true ) {
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    if (dVar2 < param_1) break;
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    dVar2 = dVar2 - param_1;
  }
  dVar1 = 0.0;
  if (0.0 <= dVar2) {
    func_0x00010bfb68e0(0,param_2);
    _CGRectGetWidth();
    dVar1 = dVar2 / dVar1;
  }
  return dVar1;
}



/* Entry: 105aa3fe8; end: 105aa4053; -[SCSpectaclesOnboardingScrollView advancePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa3fe8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bfb68e0();
  func_0x00010bf4cdc0(param_5);
  dVar2 = param_3 * (double)*(long *)(param_5 + _DAT_11272e998);
  dVar1 = param_3 + param_1;
  if (dVar2 <= param_3 + param_1) {
    dVar1 = dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1521d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1,0,param_3,param_4,param_5,PTR_s_scrollRectToVisible_animated__112632290,1);
  return;
}



/* Entry: 105aa4054; end: 105aa4067; -[SCSpectaclesOnboardingScrollView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa4054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e99c,0);
  return;
}



/* Entry: 105aa4068; end: 105aa40e3; +[SCSpectaclesOnboardingThemeViewModelFactory onboardingThemeWithType:] */

void FUN_105aa4068(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((long)param_3 < 6) {
    if (param_3 < 6) {
      func_0x00010be46d40();
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_1;
    }
  }
  else if (param_3 == 6) {
    func_0x00010be63640();
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
  else if (param_3 == 7) {
    func_0x00010be636a0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
  else if (param_3 == 8) {
    func_0x00010bdde8c0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105aa40e4; end: 105aa4277; +[SCSpectaclesOnboardingThemeViewModelFactory _lagunaMalibuTheme] */

void FUN_105aa40e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126c1f20;
  _objc_alloc(PTR_PTR_1126c1f20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4037000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f2c0(puVar1,param_2,0,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9,0,0,0
                      ,0);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa4278; end: 105aa447b; +[SCSpectaclesOnboardingThemeViewModelFactory _newportCarbonOnboardingTheme] */

void FUN_105aa4278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar1 = PTR_PTR_1126c1f20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4037000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f2c0(puVar1,param_2,1,puVar2,puVar3,puVar4,puVar5,puVar6,0,puVar7,puVar8,puVar9,
                      puVar10,puVar11,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa447c; end: 105aa4663; +[SCSpectaclesOnboardingThemeViewModelFactory _newportMineralOnboardingTheme] */

void FUN_105aa447c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar1 = PTR_PTR_1126c1f20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106fcff7c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4037000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000106fcff7c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000106fcff7c();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f2c0(puVar1,param_2,1,puVar2,puVar3,puVar4,puVar5,puVar6,0,puVar7,puVar8,puVar9,
                      puVar10,puVar11,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa4664; end: 105aa4817; +[SCSpectaclesOnboardingThemeViewModelFactory _cheeriosOnboardingTheme] */

void FUN_105aa4664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126c1f20;
  _objc_alloc(PTR_PTR_1126c1f20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f2c0(puVar1,param_2,0,puVar2,puVar3,puVar5,puVar7,puVar8,0,puVar9,puVar11,0,0,0,0);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa4818; end: 105aa49ff; -[SCSpectaclesOnboardingViewController initWithFlow:delegate:onboardingSessionInfo:onDemandResourceUrl:analyticsLogger:showBackButton:playerProvider:onDemandResourceFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105aa4818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ebac8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e9a0) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e9a4) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272e9a8) = param_8;
    lVar5 = (long)_DAT_11272e9ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272e9b0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272e9b4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c26cfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e9b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e9b8) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11272e9bc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272e9c0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272e9c4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272e9c8,param_4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105aa4a00; end: 105aa505f; -[SCSpectaclesOnboardingViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa4a00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126ebac8;
  lStack_a8 = param_1;
  _objc_msgSendSuper2(&lStack_a8,PTR_s_loadView_112604be0);
  lVar11 = (long)_DAT_11272e9b8;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf4fee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar9);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar13,uVar14,uVar15);
  lVar9 = (long)_DAT_11272e9cc;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar3;
  _objc_release(uVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dada38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dada38,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf2fae0(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar9));
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar9));
  uVar2 = 0x4034000000000000;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c078ac0();
  if (iVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x403c000000000000);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar2);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar2);
    uVar2 = 0;
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar9));
  }
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105aa5060;
  puStack_b8 = &UNK_1108471b0;
  lStack_b0 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar9));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c1f28;
  _objc_alloc();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar11 = param_1;
  uVar12 = uVar2;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  func_0x00010bdfbb40(param_1);
  lVar10 = (long)_DAT_11272e9ac;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0f2660(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c015160(uVar2,uVar13,uVar14,uVar15,uVar12);
  lVar10 = (long)_DAT_11272e9d0;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar6;
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(lVar11);
  _objc_release(lVar9);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  puStack_f8 = puVar3;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105aa5260;
  puStack_e0 = &UNK_1108471b0;
  lStack_d8 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010c195460(puVar6);
  func_0x00010c178280(puVar6);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar10));
  if (*(char *)(param_1 + _DAT_11272e9a8) == '\x01') {
    puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11272e9d4;
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar8;
    _objc_release(uVar2);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar11));
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar11));
    _objc_release(puVar8);
    func_0x00010c198080(*(undefined8 *)(param_1 + lVar11));
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar11));
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    lVar9 = param_1;
    func_0x00010be37060(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar2);
    _objc_release(lVar9);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
    _objc_initWeak(auStack_100,param_1);
    puStack_128 = puVar3;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_105aa5338;
    puStack_110 = &UNK_1108434b0;
    _objc_copyWeak(auStack_108,auStack_100);
    ppuVar4 = &puStack_128;
    _objc_retainBlock(ppuVar4);
    func_0x00010bfd2f00(*(undefined8 *)(param_1 + lVar11));
    lVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f80();
    _objc_release(lVar9);
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar11));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_100);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 105aa5060; end: 105aa525f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5060(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
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
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e9cc),
             PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105aa5260; end: 105aa5337;  */

void FUN_105aa5260(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf1fec0();
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
  func_0x00010c29bf00(uVar5);
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



/* Entry: 105aa5338; end: 105aa53cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5338(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar4 = (long)_DAT_11272e9d4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_1;
  func_0x00010be37060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,lVar1,1);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa53d0; end: 105aa5547;  */

void FUN_105aa53d0(long param_1,long param_2)

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
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4036000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
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



/* Entry: 105aa5548; end: 105aa560b; -[SCSpectaclesOnboardingViewController viewWillAppear:] */

void FUN_105aa5548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc20(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126ebac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 105aa560c; end: 105aa570f; -[SCSpectaclesOnboardingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa560c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ebac8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  lVar6 = (long)_DAT_11272e9d8;
  if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272e9ac);
    func_0x00010c0f2660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0f1e60();
    *(undefined8 *)(param_1 + _DAT_11272e9a4) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11272e9b0);
    lVar4 = param_1;
    func_0x00010bdf6d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab660(uVar5);
    _objc_release(lVar4);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272e9b8);
    func_0x00010c078ac0();
    if (iVar1 != 0) {
      func_0x00010bf02e20(*(undefined8 *)(param_1 + _DAT_11272e9d0));
    }
    *(undefined1 *)(param_1 + lVar6) = 1;
  }
  return;
}



/* Entry: 105aa5710; end: 105aa57bb; -[SCSpectaclesOnboardingViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5710(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebac8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11272e9dc));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a080();
  _objc_release(puVar1);
  return;
}



/* Entry: 105aa57bc; end: 105aa5803; -[SCSpectaclesOnboardingViewController viewDidLoad] */

void FUN_105aa57bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebac8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be4ee20(param_1);
  return;
}



/* Entry: 105aa5804; end: 105aa5923; -[SCSpectaclesOnboardingViewController _loadVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5804(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_11272e9c4;
  if (*(long *)(param_1 + lVar4) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29a3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_40;
    _objc_copyWeak(puVar3,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105aa5924; end: 105aa598b;  */

void FUN_105aa5924(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33000();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa598c; end: 105aa5a8f; -[SCSpectaclesOnboardingViewController _handleVideo:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa598c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11272e9b8);
    func_0x00010c078ac0();
    _objc_initWeak(auStack_48,param_1);
    uVar1 = 0x3f000000;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105aa5a90;
    puStack_60 = &UNK_110841fb0;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100c749e0(uVar1,"APPSTORE",&puStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105aa5a90; end: 105aa5ae7;  */

void FUN_105aa5a90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be97640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aa5ae8; end: 105aa5aef; -[SCSpectaclesOnboardingViewController modalPresentationStyle] */

undefined8 FUN_105aa5ae8(void)

{
  return 0;
}



/* Entry: 105aa5af0; end: 105aa5af7; -[SCSpectaclesOnboardingViewController prefersStatusBarHidden] */

undefined8 FUN_105aa5af0(void)

{
  return 1;
}



/* Entry: 105aa5af8; end: 105aa5b03; -[SCSpectaclesOnboardingViewController supportedInterfaceOrientations] */

undefined8 FUN_105aa5af8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105aa5b04; end: 105aa5b5f; -[SCSpectaclesOnboardingViewController appEnteredForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5b04(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc20(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e9dc),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 105aa5b60; end: 105aa5b9b; -[SCSpectaclesOnboardingViewController _determineMetric:forHeight:] */

undefined8
FUN_105aa5b60(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  double *pdVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  do {
    pdVar1 = (double *)(&UNK_10ddca6f0 + lVar2);
    if (param_1 <= *pdVar1) {
      param_3 = *(undefined8 *)(param_6 + lVar2);
      break;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if (param_1 <= *pdVar1) {
    uVar3 = param_3;
  }
  return uVar3;
}



/* Entry: 105aa5b9c; end: 105aa5bd7; -[SCSpectaclesOnboardingViewController _imageForBackButtonInState:] */

void FUN_105aa5b9c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 2) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e1b638);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aa5bd8; end: 105aa5c2b; -[SCSpectaclesOnboardingViewController _backButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5bd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be02f80();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e9b0);
  func_0x00010bdf6d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab620(uVar1,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa5c2c; end: 105aa5c7f; -[SCSpectaclesOnboardingViewController _onboardingVideoFinishedPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be02f80();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e9b0);
  func_0x00010bdf6d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab620(uVar1,param_2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa5c80; end: 105aa5ce3; -[SCSpectaclesOnboardingViewController _dismissOnboardingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5c80(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_11272e9c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249360();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aa5ce4; end: 105aa5d37; -[SCSpectaclesOnboardingViewController doneButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5ce4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be02f80();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e9b0);
  func_0x00010bdf6d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab620(uVar1,param_2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa5d38; end: 105aa5dc7; -[SCSpectaclesOnboardingViewController learnMoreButtonTapped] */

void FUN_105aa5d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e1b5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  func_0x00010c057840();
  func_0x00010c18b5e0();
  func_0x00010c1c8b80(puVar2,param_2,0);
  func_0x00010c10eda0(param_1,param_2,puVar2,1,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aa5dc8; end: 105aa5e73; -[SCSpectaclesOnboardingViewController didEndAnimatingDescriptionLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5dc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11272e9b8);
  func_0x00010c078ac0();
  if (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272e9cc);
    _objc_retain(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105aa5e74;
    puStack_30 = &UNK_110842e18;
    uStack_28 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf03400(0x3fe0000000000000,puVar1,param_2,&puStack_48);
    _objc_release(uStack_28);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 105aa5e74; end: 105aa5e7f;  */

void FUN_105aa5e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105aa5e80; end: 105aa5ea3; -[SCSpectaclesOnboardingViewController setScrollInProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5e80(long param_1,undefined8 param_2,int param_3)

{
  *(char *)(param_1 + _DAT_11272e9e0) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11272e9dc),PTR_s_pause_11261b0e8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e9dc),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 105aa5ea4; end: 105aa5eab; -[SCSpectaclesOnboardingViewController scrollViewWillBeginDragging:] */

void FUN_105aa5ea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setScrollInProgress__11265b908,1);
  return;
}



/* Entry: 105aa5eac; end: 105aa5ee7; -[SCSpectaclesOnboardingViewController scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5eac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1f7b80(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e9d0);
  func_0x00010c0f0be0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be2d910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePageChangedTo__112568fe0,uVar1);
  return;
}



/* Entry: 105aa5ee8; end: 105aa5f23; -[SCSpectaclesOnboardingViewController scrollViewDidEndScrollingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5ee8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1f7b80(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e9d0);
  func_0x00010c0f0be0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be2d910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePageChangedTo__112568fe0,uVar1);
  return;
}



/* Entry: 105aa5f24; end: 105aa5fe3; -[SCSpectaclesOnboardingViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5f24(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_6);
  func_0x00010bf4cdc0(param_6);
  if (0.0 <= param_1) {
    func_0x00010bf4cdc0(param_6);
    dVar2 = param_1;
    func_0x00010bf4d5e0(param_6);
    func_0x00010bf20c00(param_6);
    if (param_1 <= dVar2 - param_3) {
      lVar1 = *(long *)(param_4 + _DAT_11272e9dc);
      func_0x00010c252d60();
      if (lVar1 == 1) {
        func_0x00010bdc9560(param_4);
      }
      else {
        func_0x00010beda480(param_4);
      }
      goto LAB_105aa5f8c;
    }
  }
  func_0x00010c1f7b80(param_4,param_5,0);
LAB_105aa5f8c:
  func_0x00010bedc2a0(param_4);
  *(undefined1 *)(param_4 + _DAT_11272e9e4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105aa5fe4; end: 105aa609b; -[SCSpectaclesOnboardingViewController handleScrollViewTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa5fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11272e9e4;
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    lVar5 = (long)_DAT_11272e9d0;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c0f0be0();
    lVar2 = *(long *)(param_1 + _DAT_11272e9ac);
    func_0x00010c0f2660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != lVar3 + -1) {
      func_0x00010c1f7b80(param_1,param_2,1);
      func_0x00010befe300(*(undefined8 *)(param_1 + lVar5));
      *(undefined1 *)(param_1 + lVar4) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aa609c; end: 105aa62ef; -[SCSpectaclesOnboardingViewController _handlePageChangedTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa609c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  
  lVar9 = (long)_DAT_11272e9ac;
  uVar1 = *(ulong *)(param_2 + lVar9);
  func_0x00010c0f2660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_4 < uVar4) {
    lVar2 = *(long *)(param_2 + lVar9);
    func_0x00010c29aa40();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_68,param_2);
      uVar3 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010c0f2660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c250f20();
      if (*(long *)(param_2 + _DAT_11272e9dc) == 0) {
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uVar4 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_98);
        uVar4 = uStack_90 & 0xffffffff;
      }
      _CMTimeMakeWithSeconds(auStack_80,param_1,uVar4);
      _objc_copyWeak(auStack_a0,auStack_68);
      func_0x00010be9d220(param_2);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_68);
    }
    lVar5 = *(long *)(param_2 + lVar9);
    func_0x00010c0f2660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0f1e60();
    lVar10 = (long)_DAT_11272e9a4;
    lVar11 = *(long *)(param_2 + lVar10);
    _objc_release(lVar2);
    _objc_release(lVar5);
    if (lVar6 != lVar11) {
      uVar7 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010c0f2660();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c0f1e60();
      *(undefined8 *)(param_2 + lVar10) = uVar3;
      _objc_release(uVar8);
      _objc_release(uVar7);
      uVar8 = *(undefined8 *)(param_2 + _DAT_11272e9b0);
      func_0x00010bdf6d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ab640(uVar8);
      _objc_release(param_2);
    }
  }
  return;
}



/* Entry: 105aa62f0; end: 105aa637f;  */

void FUN_105aa62f0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105aa6380;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105aa6380; end: 105aa63bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa6380(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0fe360(*(undefined8 *)(param_1 + _DAT_11272e9dc));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa63bc; end: 105aa66cb; -[SCSpectaclesOnboardingViewController _rollFilm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa63bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11272e9c0);
  func_0x00010c101100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11272e9dc;
  uVar5 = *(undefined8 *)(param_2 + lVar7);
  *(undefined8 *)(param_2 + lVar7) = uVar1;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x00010c100c80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11272e9e8;
  uVar1 = *(undefined8 *)(param_2 + lVar6);
  *(undefined **)(param_2 + lVar6) = puVar2;
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11272e9ac);
  func_0x00010c26cfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c078ac0();
  _objc_release(uVar5);
  lVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar4 = param_2;
  if ((int)uVar1 == 0) {
    _CGRectGetHeight();
    func_0x00010bdfbb40(param_2);
    dVar8 = param_1;
    _objc_release(lVar3);
    lVar3 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar10 = dVar8;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar10 = dVar10 * 0.8666666746139526 + 0.5;
    uVar1 = *(undefined8 *)(param_2 + lVar6);
    dVar9 = param_1;
  }
  else {
    _CGRectGetWidth();
    dVar10 = param_1;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar10 = dVar10 * 1.7777777910232544;
    uVar1 = *(undefined8 *)(param_2 + lVar6);
    dVar9 = 0.0;
    dVar8 = param_1;
  }
  func_0x00010c19f0e0(0,dVar9,dVar8,dVar10,uVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c161660(*(undefined8 *)(param_2 + lVar7));
  lVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11272e9cc);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f60(lVar4);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1f7b80(param_2);
  _objc_initWeak(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_2 + lVar7);
  _CMTimeMakeWithSeconds(auStack_80,0x3f91111111111111,1000000000);
  _objc_copyWeak(auStack_88,auStack_68);
  func_0x00010befa7a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  return;
}



/* Entry: 105aa66cc; end: 105aa671b;  */

void FUN_105aa66cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be331a0();
  _objc_release(param_1);
  return;
}



/* Entry: 105aa671c; end: 105aa683b; -[SCSpectaclesOnboardingViewController _handleVideoTransitionWithTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa671c(ulong param_1,undefined8 param_2,double *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010c1520c0();
    if ((uVar1 & 1) == 0) {
      lVar6 = (long)_DAT_11272e9ac;
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0f2660(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11272e9d0);
      func_0x00010c0f0be0(uVar3);
      uVar4 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      dStack_68 = param_3[1];
      dVar7 = *param_3;
      dStack_60 = param_3[2];
      dStack_70 = dVar7;
      _CMTimeGetSeconds(&dStack_70);
      dVar8 = dVar7;
      func_0x00010bf95780(uVar4);
      if (dVar8 <= dVar7) {
        lVar5 = *(long *)(param_1 + lVar6);
        func_0x00010c29aa40();
        if (lVar5 == 0) {
          func_0x00010c250f20(uVar4);
          _CMTimeMakeWithSeconds(&dStack_70,*(undefined4 *)(param_3 + 1));
          func_0x00010be9d220(param_1,param_2,&dStack_70,0);
        }
        else {
          lVar6 = *(long *)(param_1 + lVar6);
          func_0x00010c29aa40();
          if (lVar6 == 1) {
            func_0x00010c0f5b20(*(undefined8 *)(param_1 + (long)_DAT_11272e9dc));
          }
        }
      }
      _objc_release(uVar4);
    }
  }
  return;
}



/* Entry: 105aa683c; end: 105aa698b; -[SCSpectaclesOnboardingViewController _adjustVideoWhileScrubbing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa683c(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = (long)_DAT_11272e9d0;
  uVar1 = *(ulong *)(param_2 + lVar6);
  func_0x00010c0f0be0();
  lVar7 = (long)_DAT_11272e9ac;
  lVar2 = *(long *)(param_2 + lVar7);
  func_0x00010c0f2660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (uVar1 < lVar4 - 1U) {
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c0f2660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_2 + lVar6);
    func_0x00010c0f0be0(lVar4);
    uVar5 = uVar3;
    func_0x00010c0dfd40(uVar3,param_3,lVar4 + 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c0f7cc0(*(undefined8 *)(param_2 + lVar6));
    if (0.0 < param_1) {
      dVar8 = param_1;
      func_0x00010c0cdc20(uVar5);
      dVar9 = dVar8;
      func_0x00010c250f20(uVar5);
      dVar10 = dVar9;
      func_0x00010c0cdc20(uVar5);
      if (*(long *)(param_2 + _DAT_11272e9dc) == 0) {
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uVar1 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_90);
        uVar1 = uStack_88 & 0xffffffff;
      }
      _CMTimeMakeWithSeconds(auStack_78,dVar8 + param_1 * (dVar9 - dVar10),uVar1);
      func_0x00010be9d220(param_2,param_3,auStack_78,0);
    }
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 105aa698c; end: 105aa6a63; -[SCSpectaclesOnboardingViewController _seekPlayTime:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa698c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e9dc);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105aa6a64;
  puStack_40 = &UNK_110842508;
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_90 = uStack_b0;
  uStack_88 = uStack_a8;
  uStack_80 = uStack_a0;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c157300(uVar1,param_2,&uStack_70,&uStack_90,&uStack_b0,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105aa6a64; end: 105aa6a77;  */

void FUN_105aa6a64(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105aa6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105aa6a78; end: 105aa6b53; -[SCSpectaclesOnboardingViewController _updateLastPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa6a78(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11272e9d0;
  func_0x00010c0f7cc0(*(undefined8 *)(param_2 + lVar5));
  uVar1 = *(ulong *)(param_2 + lVar5);
  func_0x00010c0f0be0();
  lVar6 = (long)_DAT_11272e9ac;
  lVar2 = *(long *)(param_2 + lVar6);
  func_0x00010c0f2660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (uVar1 < lVar5 - 1U) {
    if (0.5 < param_1) {
      uVar1 = uVar1 + 1;
    }
    if ((-1 < (long)uVar1) && (lVar5 = (long)_DAT_11272e9a0, *(ulong *)(param_2 + lVar5) != uVar1))
    {
      uVar3 = *(ulong *)(param_2 + lVar6);
      func_0x00010c0f2660();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      if (uVar1 < uVar4) {
        *(ulong *)(param_2 + lVar5) = uVar1;
      }
    }
  }
  return;
}



/* Entry: 105aa6b54; end: 105aa6c6f; -[SCSpectaclesOnboardingViewController _updateNextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa6b54(double param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  lVar8 = (long)_DAT_11272e9d0;
  uVar2 = *(ulong *)(param_2 + lVar8);
  func_0x00010c0f0be0();
  lVar7 = (long)_DAT_11272e9ac;
  lVar3 = *(long *)(param_2 + lVar7);
  func_0x00010c0f2660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  dVar9 = 0.0;
  if (uVar2 < lVar4 - 1U) {
    uVar5 = *(ulong *)(param_2 + lVar7);
    func_0x00010c0f2660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf529e0();
    if (uVar6 < 2) {
      _objc_release(uVar5);
      dVar9 = 1.0;
    }
    else {
      lVar3 = *(long *)(param_2 + lVar7);
      func_0x00010c0f2660();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(uVar5);
      dVar9 = 1.0;
      if (uVar2 == lVar4 - 2U) {
        iVar1 = (int)*(undefined8 *)(param_2 + _DAT_11272e9b8);
        func_0x00010c078ac0();
        if (iVar1 != 0) {
          func_0x00010c0f7cc0(*(undefined8 *)(param_2 + lVar8));
          dVar9 = 1.0 - param_1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar9,*(undefined8 *)(param_2 + _DAT_11272e9cc),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105aa6c70; end: 105aa6dfb; -[SCSpectaclesOnboardingViewController _currentOnboardingSessionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa6c70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c1ee8;
  _objc_alloc();
  lVar11 = (long)_DAT_11272e9b4;
  uVar2 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0e8140();
  uVar12 = *(undefined8 *)(param_2 + _DAT_11272e9a4);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0f3480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar3,param_3,uVar4);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bf70720(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfb0d20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfd38e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bf700a0(uVar8);
  uVar9 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0f3420();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0f3480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031a60(param_1,puVar1,param_3,uVar2,uVar12,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa6dfc; end: 105aa6e07; -[SCSpectaclesOnboardingViewController dismissInformationSettingsView:] */

void FUN_105aa6dfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105aa6e08; end: 105aa6e17; -[SCSpectaclesOnboardingViewController scrollInProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105aa6e08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272e9e0);
}



/* Entry: 105aa6e18; end: 105aa6f03; -[SCSpectaclesOnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa6e18(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e9c8);
  _objc_storeStrong(param_1 + _DAT_11272e9b0,0);
  _objc_storeStrong(param_1 + _DAT_11272e9b4,0);
  _objc_storeStrong(param_1 + _DAT_11272e9c4,0);
  _objc_storeStrong(param_1 + _DAT_11272e9c0,0);
  _objc_storeStrong(param_1 + _DAT_11272e9bc,0);
  _objc_storeStrong(param_1 + _DAT_11272e9b8,0);
  _objc_storeStrong(param_1 + _DAT_11272e9ac,0);
  _objc_storeStrong(param_1 + _DAT_11272e9e8,0);
  _objc_storeStrong(param_1 + _DAT_11272e9dc,0);
  _objc_storeStrong(param_1 + _DAT_11272e9cc,0);
  _objc_storeStrong(param_1 + _DAT_11272e9d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e9d0,0);
  return;
}



/* Entry: 105aa6f04; end: 105aa6f0f; -[SCFeatureSettingsService hasSeenLagunaOnboarding] */

void FUN_105aa6f04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e1b658);
  return;
}



/* Entry: 105aa6f10; end: 105aa6f1b; -[SCFeatureSettingsService seenLagunaOnboardingServerParam] */

undefined ** FUN_105aa6f10(void)

{
  return &PTR____CFConstantStringClassReference_110e1b658;
}



/* Entry: 105aa6f1c; end: 105aa6f2b; -[SCFeatureSettingsService setSeenLagunaOnboarding:] */

void FUN_105aa6f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e1b658,param_3);
  return;
}



/* Entry: 105aa6f2c; end: 105aa6f33; -[SCFeatureSettingsService laguna_onboarding_tooltip_client_value:] */

undefined * FUN_105aa6f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105aa6f34; end: 105aa6f3b; -[SCFeatureSettingsService laguna_onboarding_tooltip_server_value:] */

void FUN_105aa6f34(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105aa6f3c; end: 105aa6f4b; -[SCFeatureSettingsService seenLagunaOnboarding] */

void FUN_105aa6f3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e1b658,0);
  return;
}



/* Entry: 105aa6f4c; end: 105aa6f57; -[SCFeatureSettingsService hasSeenPsychomantisOnboarding] */

void FUN_105aa6f4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e1b678);
  return;
}



/* Entry: 105aa6f58; end: 105aa6f63; -[SCFeatureSettingsService seenPsychomantisOnboardingServerParam] */

undefined ** FUN_105aa6f58(void)

{
  return &PTR____CFConstantStringClassReference_110e1b678;
}



/* Entry: 105aa6f64; end: 105aa6f73; -[SCFeatureSettingsService setSeenPsychomantisOnboarding:] */

void FUN_105aa6f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e1b678,param_3);
  return;
}



/* Entry: 105aa6f74; end: 105aa6f7b; -[SCFeatureSettingsService psychomantis_onboarding_tooltip_client_value:] */

undefined * FUN_105aa6f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105aa6f7c; end: 105aa6f83; -[SCFeatureSettingsService psychomantis_onboarding_tooltip_server_value:] */

void FUN_105aa6f7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105aa6f84; end: 105aa6f93; -[SCFeatureSettingsService seenPsychomantisOnboarding] */

void FUN_105aa6f84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e1b678,0);
  return;
}



/* Entry: 105aa6f94; end: 105aa6f9f; -[SCFeatureSettingsService hasSeenMalibuOnboarding] */

void FUN_105aa6f94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e1b698);
  return;
}



/* Entry: 105aa6fa0; end: 105aa6fab; -[SCFeatureSettingsService seenMalibuOnboardingServerParam] */

undefined ** FUN_105aa6fa0(void)

{
  return &PTR____CFConstantStringClassReference_110e1b698;
}



/* Entry: 105aa6fac; end: 105aa6fbb; -[SCFeatureSettingsService setSeenMalibuOnboarding:] */

void FUN_105aa6fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e1b698,param_3);
  return;
}



/* Entry: 105aa6fbc; end: 105aa6fc3; -[SCFeatureSettingsService malibu_onboarding_tooltip_client_value:] */

undefined * FUN_105aa6fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105aa6fc4; end: 105aa6fcb; -[SCFeatureSettingsService malibu_onboarding_tooltip_server_value:] */

void FUN_105aa6fc4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105aa6fcc; end: 105aa6fdb; -[SCFeatureSettingsService seenMalibuOnboarding] */

void FUN_105aa6fcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e1b698,0);
  return;
}



/* Entry: 105aa6fdc; end: 105aa6fe7; -[SCFeatureSettingsService hasSeenNeptuneOnboarding] */

void FUN_105aa6fdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e1b6b8);
  return;
}



/* Entry: 105aa6fe8; end: 105aa6ff3; -[SCFeatureSettingsService seenNeptuneOnboardingServerParam] */

undefined ** FUN_105aa6fe8(void)

{
  return &PTR____CFConstantStringClassReference_110e1b6b8;
}



/* Entry: 105aa6ff4; end: 105aa7003; -[SCFeatureSettingsService setSeenNeptuneOnboarding:] */

void FUN_105aa6ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e1b6b8,param_3);
  return;
}



/* Entry: 105aa7004; end: 105aa700b; -[SCFeatureSettingsService neptune_onboarding_tooltip_client_value:] */

undefined * FUN_105aa7004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105aa700c; end: 105aa7013; -[SCFeatureSettingsService neptune_onboarding_tooltip_server_value:] */

void FUN_105aa700c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105aa7014; end: 105aa7023; -[SCFeatureSettingsService seenNeptuneOnboarding] */

void FUN_105aa7014(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e1b6b8,0);
  return;
}



/* Entry: 105aa7024; end: 105aa702f; -[SCFeatureSettingsService hasSeenNewportOnboarding] */

void FUN_105aa7024(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e1b6d8);
  return;
}



/* Entry: 105aa7030; end: 105aa703b; -[SCFeatureSettingsService seenNewportOnboardingServerParam] */

undefined ** FUN_105aa7030(void)

{
  return &PTR____CFConstantStringClassReference_110e1b6d8;
}



/* Entry: 105aa703c; end: 105aa704b; -[SCFeatureSettingsService setSeenNewportOnboarding:] */

void FUN_105aa703c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e1b6d8,param_3);
  return;
}



/* Entry: 105aa704c; end: 105aa7053; -[SCFeatureSettingsService newport_onboarding_tooltip_client_value:] */

undefined * FUN_105aa704c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105aa7054; end: 105aa705b; -[SCFeatureSettingsService newport_onboarding_tooltip_server_value:] */

void FUN_105aa7054(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105aa705c; end: 105aa706b; -[SCFeatureSettingsService seenNewportOnboarding] */

void FUN_105aa705c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e1b6d8,0);
  return;
}



/* Entry: 105aa706c; end: 105aa7077; -[SCFeatureSettingsService hasSeenCheeriosOnboarding] */

void FUN_105aa706c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e1b6f8);
  return;
}



/* Entry: 105aa7078; end: 105aa7083; -[SCFeatureSettingsService seenCheeriosOnboardingServerParam] */

undefined ** FUN_105aa7078(void)

{
  return &PTR____CFConstantStringClassReference_110e1b6f8;
}



/* Entry: 105aa7084; end: 105aa7093; -[SCFeatureSettingsService setSeenCheeriosOnboarding:] */

void FUN_105aa7084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e1b6f8,param_3);
  return;
}



/* Entry: 105aa7094; end: 105aa709b; -[SCFeatureSettingsService cheerios_onboarding_tooltip_client_value:] */

undefined * FUN_105aa7094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105aa709c; end: 105aa70a3; -[SCFeatureSettingsService cheerios_onboarding_tooltip_server_value:] */

void FUN_105aa709c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105aa70a4; end: 105aa70b3; -[SCFeatureSettingsService seenCheeriosOnboarding] */

void FUN_105aa70a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e1b6f8,0);
  return;
}



/* Entry: 105aa70b4; end: 105aa790f; -[SCSpectaclesPostPairingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa70b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_148 = (long)_DAT_11272e9f4;
  lVar23 = param_1 + lStack_148;
  lStack_138 = param_1;
  _objc_loadWeakRetained();
  lVar21 = lVar23;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar21);
  _objc_release(lVar23);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  lStack_140 = lVar2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar23 = *plStack_120;
    do {
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar23) {
          _objc_enumerationMutation(lStack_140);
        }
        uVar20 = *(undefined8 *)(lStack_128 + lVar21 * 8);
        uVar16 = uVar20;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lStack_138 + _DAT_11272e9ec;
        _objc_loadWeakRetained(lVar1);
        lVar3 = lVar1;
        func_0x00010c104a40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf70720();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar16;
        func_0x00010c0720c0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar1);
        _objc_release(uVar16);
        if ((int)uVar5 != 0) {
          lVar23 = (long)_DAT_11272e9f8;
          _objc_retain(uVar20);
          uVar16 = *(undefined8 *)(lStack_138 + lVar23);
          *(undefined8 *)(lStack_138 + lVar23) = uVar20;
          _objc_release(uVar16);
          goto LAB_105aa7274;
        }
        lVar21 = lVar21 + 1;
      } while (lVar2 != lVar21);
      lVar2 = lStack_140;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_105aa7274:
  _objc_release(lStack_140);
  lVar21 = lStack_138;
  lVar23 = lStack_138 + lStack_148;
  _objc_loadWeakRetained();
  lVar1 = lVar23;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar23);
  lVar23 = lVar21 + _DAT_11272e9ec;
  lStack_168 = lVar23;
  _objc_loadWeakRetained();
  lVar1 = lVar23;
  func_0x00010c104a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  puVar6 = PTR_PTR_1126c1ee8;
  _objc_alloc();
  lVar23 = lVar1;
  func_0x00010bf70720(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb0d20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfd38e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf700a0(lVar1);
  lVar4 = lVar1;
  func_0x00010c0f3420();
  _objc_retainAutoreleasedReturnValue();
  lStack_160 = lVar1;
  func_0x00010c0f3480();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = (undefined *)lVar4;
  lStack_1d8 = lVar1;
  func_0x00010c031a60(0);
  puStack_150 = puVar6;
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar23);
  lStack_170 = (long)_DAT_11272e9f8;
  uVar22 = *(ulong *)(lVar21 + lStack_170);
  _objc_retain(uVar22);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar7 = uVar22;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2a54c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar9 == 0) {
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    uVar10 = uVar22;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c2a54c0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf48700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    if (uVar13 == 0) {
      func_0x00010befa120(puVar6);
    }
  }
  uVar7 = uVar22;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf70f40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar9 == 0) {
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    uVar10 = uVar22;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf70f40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf70f00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c137520();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar14 & 1) == 0) {
      func_0x00010befa120(puVar6);
    }
  }
  uVar7 = uVar22;
  func_0x00010c263a60();
  if ((int)uVar7 != 0) {
    func_0x00010befa120(puVar6);
  }
  uVar7 = uVar22;
  func_0x00010c2638a0();
  if ((int)uVar7 != 0) {
    uVar7 = uVar22;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c078aa0();
    _objc_release(uVar7);
    if ((uVar8 & 1) == 0) {
      func_0x00010befa120(puVar6);
    }
  }
  func_0x00010befa120(puVar6);
  _objc_release(uVar22);
  puVar15 = puVar6;
  func_0x00010bf51e00();
  puStack_158 = puVar15;
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c1f30;
  _objc_alloc();
  lVar1 = lStack_138;
  lVar2 = lStack_170;
  lVar23 = lStack_138 + _DAT_11272e9fc;
  _objc_loadWeakRetained();
  lStack_178 = lVar23;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar1 + _DAT_11272ea00;
  lStack_198 = lVar23;
  _objc_loadWeakRetained();
  lStack_180 = lVar21;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar1 + lVar2);
  lStack_1b8 = lVar21;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = uVar16;
  func_0x00010c0eddc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_190 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar1 + _DAT_11272ea04;
  _objc_loadWeakRetained();
  lStack_1a0 = lVar23;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b0 = lVar23;
  func_0x00010c087b20();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar1 + _DAT_11272ea08;
  _objc_loadWeakRetained();
  lVar4 = lVar21;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar1 + _DAT_11272ea0c;
  _objc_loadWeakRetained();
  lVar3 = lStack_198;
  lVar2 = lStack_1b8;
  puStack_1e0 = puStack_150;
  lStack_1d8 = lVar23;
  lStack_1d0 = lVar18;
  lStack_1c8 = lVar1;
  func_0x00010c00bfa0();
  puStack_1a8 = puVar6;
  _objc_release(lVar1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar4);
  _objc_release(lVar21);
  _objc_release(lVar23);
  _objc_release(lStack_1b0);
  _objc_release(lStack_1a0);
  _objc_release(uVar16);
  _objc_release(uStack_190);
  _objc_release(lStack_170);
  _objc_release(lVar2);
  _objc_release(lStack_188);
  _objc_release(lStack_180);
  _objc_release(lVar3);
  _objc_release(lStack_178);
  puVar15 = PTR_PTR_1126c1f38;
  _objc_alloc();
  puVar6 = puStack_1a8;
  func_0x00010c00aba0();
  puVar19 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc();
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  func_0x00010c1cb760(puVar19);
  lVar23 = lStack_168;
  _objc_loadWeakRetained();
  lVar21 = lVar23;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar21);
  _objc_release(lVar23);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(lStack_160);
  _objc_release(lStack_148);
  lVar1 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1e8 = FUN_105aa7910;
    lVar2 = lVar1 + _DAT_11272e9ec;
    lStack_210 = lVar21;
    lStack_208 = lVar23;
    puStack_200 = puVar19;
    puStack_1f8 = puVar15;
    puStack_1f0 = &stack0xfffffffffffffff0;
    _objc_loadWeakRetained(lVar2);
    lVar23 = lVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar23);
    _objc_release(lVar2);
    puStack_218 = PTR_PTR_1126ebad0;
    lStack_220 = lVar1;
    _objc_msgSendSuper2(&lStack_220,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 105aa7910; end: 105aa799b; -[SCSpectaclesPostPairingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa7910(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11272e9ec;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ebad0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aa799c; end: 105aa7a0f; -[SCSpectaclesPostPairingEntryPoint spectaclesPostPairingFlowControllerDidDealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa799c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e9ec;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249580(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa7a10; end: 105aa7ac3; -[SCSpectaclesPostPairingEntryPoint spectaclesPostPairingFlowControllerDidRequestDismiss:cancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa7a10(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e9f8);
  func_0x00010c0692a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104a20();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11272e9ec;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  if (param_4 == 0) {
    func_0x00010c249560(lVar3,param_2,param_1);
  }
  else {
    func_0x00010c249540();
  }
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105aa7ac4; end: 105aa7b4f; -[SCSpectaclesPostPairingEntryPoint spectaclesPairingScopeV2RequestsDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa7ac4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e9ec;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010c249540(lVar2,param_2,param_1);
  }
  else {
    func_0x00010c249560();
  }
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa7b50; end: 105aa7be3; -[SCSpectaclesPostPairingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa7b50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e9f0,0);
  _objc_destroyWeak(param_1 + _DAT_11272ea0c);
  _objc_destroyWeak(param_1 + _DAT_11272ea08);
  _objc_destroyWeak(param_1 + _DAT_11272ea00);
  _objc_destroyWeak(param_1 + _DAT_11272e9fc);
  _objc_destroyWeak(param_1 + _DAT_11272e9f4);
  _objc_destroyWeak(param_1 + _DAT_11272e9ec);
  _objc_destroyWeak(param_1 + _DAT_11272ea04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e9f8,0);
  return;
}


