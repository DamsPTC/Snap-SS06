/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10626ca4c; end: 10626ca87; -[SCOperaModerationView snapModerationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626ca4c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be43fe0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c067fc0(*(undefined8 *)(param_1 + (long)_DAT_11274438c));
  }
  return;
}



/* Entry: 10626ca88; end: 10626cea7; -[SCOperaModerationView updateSpotlightContentModerationStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626ca88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9290;
  _objc_alloc_init();
  lVar8 = (long)_DAT_11274437c;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c25a6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195aa0(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c25a6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195a80(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c195720(puVar1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c242220(param_1);
  func_0x00010c0df760(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2439e0(param_1);
  func_0x00010c0df760(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2059c0(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c243400(param_1);
  func_0x00010c0df760(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0(puVar1);
  _objc_release(puVar7);
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c25a6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c242080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf06600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144c0(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c25a6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c242080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb26c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  _CMTimeMake(auStack_80,1,600);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_88,auStack_68);
  func_0x00010be1aae0(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10626cea8; end: 10626cfa7;  */

void FUN_10626cea8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c204780(uVar1);
  }
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10626cfa8; end: 10626cfdb;  */

void FUN_10626cfa8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10626cfdc; end: 10626cfeb; -[SCOperaModerationView _setStatusLabelViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626cfdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744398),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 10626cfec; end: 10626d0b3; -[SCOperaModerationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626cfec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744394,0);
  _objc_destroyWeak(param_1 + _DAT_112744390);
  _objc_storeStrong(param_1 + _DAT_11274438c,0);
  _objc_storeStrong(param_1 + _DAT_112744388,0);
  _objc_destroyWeak(param_1 + _DAT_112744384);
  _objc_storeStrong(param_1 + _DAT_112744380,0);
  _objc_storeStrong(param_1 + _DAT_11274437c,0);
  _objc_storeStrong(param_1 + _DAT_112744378,0);
  _objc_storeStrong(param_1 + _DAT_112744374,0);
  _objc_storeStrong(param_1 + _DAT_112744398,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744370,0);
  return;
}



/* Entry: 10626d0b4; end: 10626d2d7; -[SCOperaModerationViewController initWithRuntime:composerCoreUIServices:contentModeration:contextSessionParams:blizzardLogger:webBrowsingScopeExposer:cofStore:moderationType:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10626d0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_68 = PTR_PTR_1126f0a18;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274439c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443a0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443a4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443a8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443ac;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443b0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443b4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443b8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127443bc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
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



/* Entry: 10626d2d8; end: 10626d37f; -[SCOperaModerationViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626d2d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0a18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c9298;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar2 = puVar1;
  func_0x00010c252d60();
  if ((int)puVar2 != 1) {
    func_0x00010bdc7740(param_1);
  }
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 10626d380; end: 10626d6df; -[SCOperaModerationViewController _addModerationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626d380(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126c92a0;
  _objc_alloc();
  func_0x00010c040ba0();
  func_0x00010c219b60();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  puStack_90 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  puStack_88 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010bf493c0(0x4020000000000000,puVar12,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  puStack_80 = puVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  func_0x00010bf493c0(0xc020000000000000,puVar16,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar20);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(puVar5);
  uVar22 = *(undefined8 *)(param_1 + _DAT_1127443a4);
  func_0x00010c28a2a0(puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar22);
  uVar21 = *(undefined8 *)(puVar2 + _DAT_1127443c0);
  *(undefined8 *)(puVar2 + _DAT_1127443c0) = uVar22;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar21);
  return;
}



/* Entry: 10626d6e0; end: 10626d717; -[SCOperaModerationViewController setBrowserUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626d6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127443c0);
  *(undefined8 *)(param_1 + _DAT_1127443c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10626d718; end: 10626d8ab; -[SCOperaModerationViewController requestOpenURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626d718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10626d8ac;
  puStack_60 = &UNK_110842308;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(puVar2,param_2,&puStack_78,0);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar4 = puVar2;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127443b0),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 10626d8ac; end: 10626d8b7;  */

void FUN_10626d8ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10626d8b8; end: 10626d8df; -[SCOperaModerationViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626d8b8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127443b0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10626d8e0; end: 10626d99f; -[SCOperaModerationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626d8e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127443bc,0);
  _objc_storeStrong(param_1 + _DAT_1127443b8,0);
  _objc_storeStrong(param_1 + _DAT_1127443b4,0);
  _objc_storeStrong(param_1 + _DAT_1127443c0,0);
  _objc_storeStrong(param_1 + _DAT_1127443b0,0);
  _objc_storeStrong(param_1 + _DAT_1127443ac,0);
  _objc_storeStrong(param_1 + _DAT_1127443a8,0);
  _objc_storeStrong(param_1 + _DAT_1127443a4,0);
  _objc_storeStrong(param_1 + _DAT_1127443a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274439c,0);
  return;
}



/* Entry: 10626d9a0; end: 10626dae3; -[SCContextPostStoryEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626d9a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c92a8;
  _objc_alloc(PTR_PTR_1126c92a8);
  lVar2 = param_1 + _DAT_1127443c4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar4 = (long)_DAT_1127443c8;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010beee760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0420(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0e9460();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73e80(lVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10626dae4; end: 10626db1b; -[SCContextPostStoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626dae4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127443c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127443c8);
  return;
}



/* Entry: 10626db1c; end: 10626db8f; -[SCContextPostStoryLogger initWithUserTrackedLogger:] */

undefined1 * FUN_10626db1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0a20;
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



/* Entry: 10626db90; end: 10626dc4b; -[SCContextPostStoryLogger logActionWithId:] */

void FUN_10626db90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2d10;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1833c0();
  _objc_release(param_3);
  func_0x00010c196b80(puVar1,param_2,5);
  func_0x00010c183220(puVar1,param_2,1);
  func_0x00010c1831e0(puVar1,param_2,1);
  func_0x00010c183200(puVar1,param_2,7);
  func_0x00010c162000(puVar1,param_2,&PTR____CFConstantStringClassReference_110e47698);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10626dc4c; end: 10626dc57; -[SCContextPostStoryLogger .cxx_destruct] */

void FUN_10626dc4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10626dc58; end: 10626e35b; -[SCContextSpotlightActionsViewController initWithActions:performer:viewLogger:subscriptionActionsParams:subscriptionSessionProvider:circumstanceEngine:complianceEngine:notificationPool:spotlightLogger:operaEventAnnouncer:spotlightRepliesViewCountManager:userPreferences:isDSAEligible:isAd:isAdSpotlightFavoriteAnimationEnabled:hideMoreAction:hideAvatarSubscribeButton:featureSettingsService:upsellTriggerManager:storiesConfigProvider:profileImageProvider:soundEntryParamsObservable:snapProUserProfileIdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10626dc58(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined1 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126f0a28;
  puVar1 = &uStack_78;
  uStack_78 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127443d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127443d0) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    lVar5 = (long)_DAT_1127443d4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127443d8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127443d8) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443dc;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443e0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443e4;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443e8;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443ec;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_20;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443f0;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443f4;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443f8;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127443fc;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744400;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744404) = param_17;
    lVar5 = (long)_DAT_112744408;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = param_9;
    func_0x000108f4b260();
    *(bool *)((long)puVar1 + (long)_DAT_11274440c) = lVar5 != 0;
    func_0x00010be66ec0(puVar1);
    puVar2 = PTR_PTR_1126c9168;
    _objc_alloc();
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c01c5c0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744410);
    *(undefined **)((long)puVar1 + (long)_DAT_112744410) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744414) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744418) = param_16._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274441c) = param_16._2_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744420) = param_16._3_1_;
    lVar5 = (long)_DAT_112744424;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744428;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_19;
    _objc_release(uVar3);
    uVar3 = param_20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24afe0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f320();
    *(char *)((long)puVar1 + (long)_DAT_11274442c) = (char)uVar4;
    _objc_release(puVar2);
    _objc_release(uVar3);
    uVar3 = param_20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b12d0;
    func_0x00010c24af40(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067e20();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744430) = uVar4;
    _objc_release(puVar2);
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744434;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_21;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744438;
    _objc_retain(param_22);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_22;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11274443c;
    _objc_retain(param_23);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_23;
    _objc_release(uVar3);
    uVar3 = param_20;
    func_0x000108f4b1a4();
    *(char *)((long)puVar1 + (long)_DAT_112744440) = (char)uVar3;
    uVar3 = param_20;
    func_0x000108f4b124();
    *(char *)((long)puVar1 + (long)_DAT_112744444) = (char)uVar3;
    uVar3 = param_20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24c6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar3);
    dVar7 = (double)param_1;
    *(double *)((long)puVar1 + (long)_DAT_112744448) = dVar7;
    _objc_release(puVar2);
    fVar6 = SUB84(dVar7,0);
    _objc_release(uVar3);
    uVar3 = param_20;
    func_0x00010c269d40(param_20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24c6c0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar3);
    dVar7 = (double)fVar6;
    *(double *)((long)puVar1 + (long)_DAT_11274444c) = dVar7;
    _objc_release(puVar2);
    fVar6 = SUB84(dVar7,0);
    _objc_release(uVar3);
    uVar3 = param_20;
    func_0x00010c269d40(param_20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24ad60(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar3);
    dVar7 = (double)fVar6;
    *(double *)((long)puVar1 + (long)_DAT_112744450) = dVar7;
    _objc_release(puVar2);
    fVar6 = SUB84(dVar7,0);
    _objc_release(uVar3);
    uVar3 = param_20;
    func_0x00010c269d40(param_20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24ad40(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar3);
    *(double *)((long)puVar1 + (long)_DAT_112744454) = (double)fVar6;
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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
  return puVar1;
}



/* Entry: 10626e35c; end: 10626e417; -[SCContextSpotlightActionsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626e35c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126c92b0;
  if ((0.0 < *(double *)(param_1 + _DAT_112744448)) || (0.0 < *(double *)(param_1 + _DAT_11274444c))
     ) {
    dVar4 = -(*(double *)(param_1 + _DAT_11274444c) + 7.0);
    dVar5 = -(*(double *)(param_1 + _DAT_112744448) + 7.0);
    _objc_alloc();
  }
  else {
    _objc_alloc();
    dVar4 = -7.0;
    dVar5 = -7.0;
  }
  func_0x00010c01a8a0(dVar4,dVar5,0xc01c000000000000,0xc01c000000000000);
  lVar3 = (long)_DAT_112744458;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10626e418; end: 10626e8d7; -[SCContextSpotlightActionsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626e418(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
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
  long lStack_88;
  undefined *puStack_80;
  
  puStack_80 = PTR_PTR_1126f0a28;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb14e0(param_1);
  _objc_initWeak(auStack_90,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127443d0);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10626e8d8;
  puStack_a0 = &UNK_1109191d0;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112744438);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar3;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x10626e920;
  puStack_c8 = &UNK_110919200;
  _objc_copyWeak(auStack_c0,auStack_90);
  uVar4 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar1);
  lVar6 = (long)_DAT_112744428;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c28f000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar3;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x10626e968;
  puStack_f0 = &UNK_110842a38;
  _objc_copyWeak(auStack_e8,auStack_90);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c139be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar3;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x10626e9a8;
  puStack_118 = &UNK_110914d18;
  _objc_copyWeak(auStack_110,auStack_90);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfb3620(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_138,auStack_90);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c92b8;
  func_0x00010c0e9de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  return;
}



/* Entry: 10626e8d8; end: 10626ea1b;  */

void FUN_10626e8d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed46a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10626ea1c; end: 10626ea83; -[SCContextSpotlightActionsViewController viewWillDisappear:] */

void FUN_10626ea1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  return;
}



/* Entry: 10626ea84; end: 10626eb3f; -[SCContextSpotlightActionsViewController operaRegisteredEventsForViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626ea84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c29e700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lVar7 = (long)_DAT_112744458;
  func_0x00010c16e060(*(undefined8 *)(puVar1 + lVar7),param_2,1);
  lVar8 = (long)_DAT_112744454;
  func_0x00010c207380(*(undefined8 *)(puVar1 + lVar8),*(undefined8 *)(puVar1 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(puVar1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1b9b80(*(undefined8 *)(puVar1 + lVar8),0,0,0,*(undefined8 *)(puVar1 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  if ((puVar1[_DAT_11274440c] & 1) == 0) {
    puVar3 = PTR_PTR_1126c92c0;
    _objc_alloc();
    func_0x00010c035160();
    lVar8 = (long)_DAT_11274445c;
    uVar4 = *(undefined8 *)(puVar1 + lVar8);
    *(undefined **)(puVar1 + lVar8) = puVar3;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)(puVar1 + lVar8),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar8),param_2,puVar1[_DAT_112744404]);
    func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar8));
    func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar8),param_2,
                        &PTR____CFConstantStringClassReference_110e47738);
  }
  puVar3 = PTR_PTR_1126c92c8;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar8 = (long)_DAT_112744460;
  uVar4 = *(undefined8 *)(puVar1 + lVar8);
  *(undefined **)(puVar1 + lVar8) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar8),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar8));
  lVar12 = (long)_DAT_112744418;
  puVar3 = PTR_PTR_1126c92d0;
  _objc_alloc();
  func_0x00010c04eca0();
  lVar9 = (long)_DAT_112744464;
  uVar4 = *(undefined8 *)(puVar1 + lVar9);
  *(undefined **)(puVar1 + lVar9) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar9),param_2,1);
  uVar4 = *(undefined8 *)(puVar1 + lVar9);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar9));
  func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar9),param_2,
                      &PTR____CFConstantStringClassReference_110e47758);
  puVar3 = PTR_PTR_1126c92d8;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar10 = (long)_DAT_112744468;
  uVar4 = *(undefined8 *)(puVar1 + lVar10);
  *(undefined **)(puVar1 + lVar10) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar10),param_2,1);
  uVar4 = *(undefined8 *)(puVar1 + lVar10);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  if (((puVar1[lVar12] & 1) == 0) && (puVar1[_DAT_112744444] == '\x01')) {
    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11274446c;
    uVar4 = *(undefined8 *)(puVar1 + lVar5);
    *(undefined **)(puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)(puVar1 + lVar5));
    func_0x00010c18b5e0(*(undefined8 *)(puVar1 + lVar5),param_2,puVar1);
    func_0x00010bef9040(*(undefined8 *)(puVar1 + lVar10),param_2,*(undefined8 *)(puVar1 + lVar5));
  }
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar10));
  uVar6 = *(undefined8 *)(puVar1 + lVar10);
  lVar5 = (long)_DAT_112744470;
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(puVar1 + lVar5);
  *(undefined8 *)(puVar1 + lVar5) = uVar6;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c92e0;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar5 = (long)_DAT_112744474;
  uVar4 = *(undefined8 *)(puVar1 + lVar5);
  *(undefined **)(puVar1 + lVar5) = puVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar1 + lVar5);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar5),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar5));
  puVar3 = PTR_PTR_1126c92e8;
  _objc_alloc();
  func_0x00010c04ebe0();
  lVar11 = (long)_DAT_112744478;
  uVar4 = *(undefined8 *)(puVar1 + lVar11);
  *(undefined **)(puVar1 + lVar11) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar11),param_2,1);
  uVar4 = *(undefined8 *)(puVar1 + lVar11);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  if ((puVar1[lVar12] & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar12 = (long)_DAT_11274447c;
    uVar4 = *(undefined8 *)(puVar1 + lVar12);
    *(undefined **)(puVar1 + lVar12) = puVar3;
    _objc_release(uVar4);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)(puVar1 + lVar12));
    func_0x00010c18b5e0(*(undefined8 *)(puVar1 + lVar12),param_2,puVar1);
    func_0x00010bef9040(*(undefined8 *)(puVar1 + lVar11),param_2,*(undefined8 *)(puVar1 + lVar12));
  }
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar11),param_2,
                      &PTR____CFConstantStringClassReference_110dfe358);
  uVar6 = *(undefined8 *)(puVar1 + lVar11);
  lVar12 = (long)_DAT_112744480;
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(puVar1 + lVar12);
  *(undefined8 *)(puVar1 + lVar12) = uVar6;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c92f0;
  _objc_alloc();
  func_0x00010c04eba0();
  lVar13 = (long)_DAT_112744484;
  uVar4 = *(undefined8 *)(puVar1 + lVar13);
  *(undefined **)(puVar1 + lVar13) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar13),param_2,1);
  uVar4 = *(undefined8 *)(puVar1 + lVar13);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar13));
  puVar3 = PTR_PTR_1126c92f0;
  _objc_alloc();
  func_0x00010c04eba0();
  lVar12 = (long)_DAT_112744488;
  uVar4 = *(undefined8 *)(puVar1 + lVar12);
  *(undefined **)(puVar1 + lVar12) = puVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar1 + lVar12);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar12));
  func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar12),param_2,
                      &PTR____CFConstantStringClassReference_110e47778);
  puVar3 = PTR_PTR_1126c92f8;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar14 = (long)_DAT_11274448c;
  uVar4 = *(undefined8 *)(puVar1 + lVar14);
  *(undefined **)(puVar1 + lVar14) = puVar3;
  _objc_release(uVar4);
  func_0x00010c21e900(*(undefined8 *)(puVar1 + lVar14),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(puVar1 + lVar14),param_2,
                      &PTR____CFConstantStringClassReference_110e47798);
  uVar4 = *(undefined8 *)(puVar1 + lVar14);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar14),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar7),param_2,*(undefined8 *)(puVar1 + lVar14));
  func_0x00010bee2760(puVar1);
  lVar7 = (long)_DAT_112744448;
  if (0.0 < *(double *)(puVar1 + lVar7)) {
    func_0x00010c211da0(*(undefined8 *)(puVar1 + _DAT_11274445c));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar8));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar9));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar10));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar5));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar11));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar13));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar12));
    func_0x00010c211da0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar14));
  }
  lVar7 = (long)_DAT_112744450;
  if (*(double *)(puVar1 + lVar7) != 0.0) {
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + _DAT_11274445c));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar8));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar9));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar10));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar5));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar11));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar13));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar12));
    func_0x00010c2165c0(*(undefined8 *)(puVar1 + lVar7),*(undefined8 *)(puVar1 + lVar14));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10626eb40; end: 10626f2ef; -[SCContextSpotlightActionsViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626eb40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  
  lVar6 = (long)_DAT_112744458;
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar6),param_2,1);
  lVar7 = (long)_DAT_112744454;
  func_0x00010c207380(*(undefined8 *)(param_1 + lVar7),*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1b9b80(*(undefined8 *)(param_1 + lVar7),0,0,0,*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  if ((*(byte *)(param_1 + _DAT_11274440c) & 1) == 0) {
    puVar2 = PTR_PTR_1126c92c0;
    _objc_alloc();
    func_0x00010c035160();
    lVar7 = (long)_DAT_11274445c;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,
                        *(undefined1 *)(param_1 + _DAT_112744404));
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7),param_2,
                        &PTR____CFConstantStringClassReference_110e47738);
  }
  puVar2 = PTR_PTR_1126c92c8;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar7 = (long)_DAT_112744460;
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar7));
  lVar11 = (long)_DAT_112744418;
  puVar2 = PTR_PTR_1126c92d0;
  _objc_alloc();
  func_0x00010c04eca0();
  lVar8 = (long)_DAT_112744464;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar8));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8),param_2,
                      &PTR____CFConstantStringClassReference_110e47758);
  puVar2 = PTR_PTR_1126c92d8;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar9 = (long)_DAT_112744468;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  if (((*(byte *)(param_1 + lVar11) & 1) == 0) && (*(char *)(param_1 + _DAT_112744444) == '\x01')) {
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11274446c;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar9),param_2,*(undefined8 *)(param_1 + lVar4));
  }
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar9));
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  lVar4 = (long)_DAT_112744470;
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar5;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c92e0;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar4 = (long)_DAT_112744474;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar4));
  puVar2 = PTR_PTR_1126c92e8;
  _objc_alloc();
  func_0x00010c04ebe0();
  lVar10 = (long)_DAT_112744478;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  if ((*(byte *)(param_1 + lVar11) & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar11 = (long)_DAT_11274447c;
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)(param_1 + lVar11));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar11),param_2,param_1);
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar10),param_2,*(undefined8 *)(param_1 + lVar11))
    ;
  }
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar10));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10),param_2,
                      &PTR____CFConstantStringClassReference_110dfe358);
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  lVar11 = (long)_DAT_112744480;
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = uVar5;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c92f0;
  _objc_alloc();
  func_0x00010c04eba0();
  lVar12 = (long)_DAT_112744484;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar12),param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar12));
  puVar2 = PTR_PTR_1126c92f0;
  _objc_alloc();
  func_0x00010c04eba0();
  lVar11 = (long)_DAT_112744488;
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11),param_2,
                      &PTR____CFConstantStringClassReference_110e47778);
  puVar2 = PTR_PTR_1126c92f8;
  _objc_alloc();
  func_0x00010c04ea80();
  lVar13 = (long)_DAT_11274448c;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar2;
  _objc_release(uVar3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar13),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar13),param_2,
                      &PTR____CFConstantStringClassReference_110e47798);
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar13),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar13));
  func_0x00010bee2760(param_1);
  lVar6 = (long)_DAT_112744448;
  if (0.0 < *(double *)(param_1 + lVar6)) {
    func_0x00010c211da0(*(undefined8 *)(param_1 + _DAT_11274445c));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar7));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar8));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar9));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar4));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar10));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar12));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar11));
    func_0x00010c211da0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar13));
  }
  lVar6 = (long)_DAT_112744450;
  if (*(double *)(param_1 + lVar6) != 0.0) {
    func_0x00010c2165c0(*(undefined8 *)(param_1 + _DAT_11274445c));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar7));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar8));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar9));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar4));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar10));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar12));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar11));
    func_0x00010c2165c0(*(undefined8 *)(param_1 + lVar6),*(undefined8 *)(param_1 + lVar13));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10626f2f0; end: 10626f463; -[SCContextSpotlightActionsViewController _updateTopTapTargetExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626f2f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined *unaff_x22;
  ulong unaff_x23;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_11274444c;
  lVar1 = param_1;
  lStack_158 = unaff_x19;
  if (0.0 < *(double *)(param_1 + lVar5)) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + _DAT_112744458);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      bVar7 = false;
      lVar6 = *plStack_130;
      do {
        unaff_x22 = PTR_s_setTapTargetExtensionTop__112662198;
        lVar8 = 0;
        do {
          if (*plStack_130 != lVar6) {
            _objc_enumerationMutation(unaff_x20);
          }
          unaff_x23 = *(ulong *)(lStack_138 + lVar8 * 8);
          uVar2 = unaff_x23;
          _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
          if ((uVar2 & 1) != 0) {
            uVar9 = 0;
            if (bVar7) {
LAB_10626f3e4:
              bVar7 = true;
            }
            else {
              uVar2 = unaff_x23;
              func_0x00010c074c20();
              if ((uVar2 & 1) == 0) {
                uVar9 = *(undefined8 *)(param_1 + lVar5);
                goto LAB_10626f3e4;
              }
              bVar7 = false;
            }
            func_0x00010c211dc0(uVar9,unaff_x23);
          }
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (lVar1 != 0);
    }
    lVar1 = unaff_x20;
    _objc_release();
    lStack_158 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10626f464;
  if ((*(byte *)(lVar1 + _DAT_11274440c) & 1) == 0) {
    lStack_180 = lVar5;
    uStack_178 = unaff_x23;
    puStack_170 = unaff_x22;
    uStack_168 = unaff_x21;
    lStack_160 = unaff_x20;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_188,lVar1);
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112744408);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_190,auStack_188);
    uVar9 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
  }
  return;
}



/* Entry: 10626f464; end: 10626f5a3; -[SCContextSpotlightActionsViewController _observeSubscriptionActionsParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626f464(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + _DAT_11274440c) & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744408);
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
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10626f5a4; end: 10626f5eb;  */

void FUN_10626f5a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf47a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10626f5ec; end: 10626ffff; -[SCContextSpotlightActionsViewController _updateButtonsWithActionParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626f5ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + (long)_DAT_112744490);
  *(ulong *)(param_1 + (long)_DAT_112744490) = uVar3;
  _objc_release(uVar14);
  uVar3 = param_3;
  func_0x00010c0d21c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + (long)_DAT_112744494);
  *(ulong *)(param_1 + (long)_DAT_112744494) = uVar3;
  _objc_release(uVar14);
  uVar3 = param_3;
  func_0x00010c07f4e0();
  *(char *)(param_1 + (long)_DAT_112744498) = (char)uVar3;
  lVar17 = (long)_DAT_1127443e4;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1f460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if (((int)uVar14 == 0) || (uVar3 = param_3, func_0x00010c07f3e0(), (int)uVar3 == 0)) {
    bVar13 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c07f4e0();
    bVar13 = (byte)uVar3 ^ 1;
  }
  *(byte *)(param_1 + (long)_DAT_11274449c) = bVar13;
  func_0x00010bea5500(param_1);
  uVar3 = param_3;
  func_0x00010c07f4e0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010c0d21c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if (uVar6 != 0) {
      func_0x00010c24b580(param_3);
      uVar3 = param_3;
      func_0x00010c0d21c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5520(param_1);
      _objc_release(uVar3);
    }
  }
  uVar3 = param_3;
  func_0x00010bf1f900();
  lVar18 = (long)_DAT_112744464;
  if (uVar3 == 0xffffffffffffffff) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar18));
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar18));
    func_0x00010bf1f900(param_3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar18));
    func_0x00010bf1f900(param_3);
    func_0x00010c1731a0(param_1);
  }
  uVar3 = param_3;
  func_0x00010c07c500();
  if ((int)uVar3 != 0) {
    func_0x00010c07c4a0(param_3);
  }
  lVar20 = (long)_DAT_112744484;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c07dd20(param_3);
  lVar19 = (long)_DAT_112744478;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c077f40();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_112744488));
  uVar3 = *(ulong *)(param_1 + lVar17);
  func_0x000108f4b46c(uVar3,*(undefined8 *)(param_1 + (long)_DAT_1127443e8));
  if ((uVar3 & 1) == 0) {
    func_0x00010c07f500(param_3);
  }
  lVar17 = (long)_DAT_112744468;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar17));
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar6 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074c20(*(undefined8 *)(param_1 + lVar17));
    func_0x00010c07dd20(param_3);
    func_0x00010beef520(uVar3);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0800c0();
  if ((uVar3 & 1) == 0) {
    puVar16 = (ulong *)(param_1 + (long)_DAT_112744460);
    func_0x00010c1a7f60(*puVar16);
  }
  else {
    uVar3 = param_3;
    func_0x00010c25fae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    puVar16 = (ulong *)(param_1 + (long)_DAT_112744460);
    func_0x00010c1a7f60(*puVar16);
    _objc_release(uVar3);
  }
  uVar3 = *puVar16;
  func_0x00010c074c20();
  puVar4 = PTR_PTR_1126b10c8;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((uVar3 & 1) == 0) {
    uVar15 = *puVar16;
    uVar3 = param_3;
    func_0x00010c25fae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c067ec0();
    func_0x00010c22d8c0((double)(int)uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar15);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c22a980();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
LAB_10626faa0:
    if (*(char *)(param_1 + (long)_DAT_11274442c) == '\x01') {
      uVar3 = *(ulong *)(param_1 + lVar19);
      func_0x00010c074c20();
      if ((uVar3 & 1) == 0) {
        uVar14 = *(undefined8 *)(param_1 + lVar19);
        func_0x00010c216460(uVar14);
        uVar2 = *(undefined8 *)(param_1 + lVar19);
        func_0x00010723c928();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10626fadc;
      }
    }
  }
  else {
    uVar6 = param_3;
    func_0x00010c22a980();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010c067ec0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b10c8;
    if ((int)uVar15 < 1) goto LAB_10626faa0;
    uVar3 = param_3;
    func_0x00010c22a980(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c067ec0();
    func_0x00010c22d8c0((double)(int)uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + (long)_DAT_1127444a0);
    *(undefined **)(param_1 + (long)_DAT_1127444a0) = puVar5;
    _objc_release(uVar14);
    _objc_release(uVar3);
    uVar14 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c216240(uVar14);
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010723c898();
    _objc_retainAutoreleasedReturnValue();
LAB_10626fadc:
    func_0x00010c216240(uVar2);
    _objc_release(uVar14);
  }
  lVar19 = (long)_DAT_11274443c;
  uVar6 = *(ulong *)(param_1 + lVar19);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c073920();
  _objc_release(uVar6);
  uVar6 = *(ulong *)(param_1 + lVar18);
  func_0x00010c074c20();
  if ((uVar6 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar18);
    func_0x00010c082800();
    if (iVar1 != 0) {
      uVar6 = param_3;
      func_0x00010c07f3e0();
      if ((int)uVar6 == 0) {
        if ((uVar3 & 1) != 0) goto LAB_10626fc60;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + lVar19);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar2;
        func_0x00010c0824a0();
        _objc_release(uVar2);
        if ((((uint)uVar14 | (uint)uVar3) & 1) != 0) goto LAB_10626fc60;
      }
      uVar3 = param_3;
      func_0x00010bf1f680();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c067ec0();
      _objc_release(uVar3);
      ppuVar7 = (undefined **)PTR_PTR_1126b10c8;
      if ((int)uVar6 < 1) {
        if (*(char *)(param_1 + (long)_DAT_11274442c) == '\x01') {
          ppuVar7 = *(undefined ***)(param_1 + lVar18);
          func_0x00010c216460(ppuVar7);
          func_0x00010723c8b0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
        }
      }
      else {
        uVar3 = param_3;
        func_0x00010bf1f680(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c067ec0();
        func_0x00010c22d8c0((double)(int)uVar6,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      uVar14 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c216240(uVar14);
      uVar2 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010723c898();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(uVar2);
      _objc_release(uVar14);
      _objc_release(ppuVar7);
    }
  }
LAB_10626fc60:
  uVar3 = param_3;
  func_0x00010c24b580();
  ppuVar7 = (undefined **)PTR_PTR_1126b10c8;
  if (uVar3 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar3 = param_3;
    func_0x00010c24b580(param_3);
    func_0x00010c22d8c0((double)uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar6 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef580();
    _objc_release(uVar3);
  }
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar6 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf1f680();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    FUN_106270000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c123100(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    FUN_106270000();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c22a980(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    FUN_106270000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef540(uVar3);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c24b580();
  if (uVar3 == 0) {
    func_0x00010bdcdda0(param_1);
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c216240(uVar14);
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010723c898();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar2);
    _objc_release(uVar14);
  }
  func_0x00010beafe40(param_1);
  lVar17 = (long)_DAT_112744474;
  if ((*(long *)(param_1 + lVar17) != 0) && (uVar3 = param_3, func_0x00010c123140(), uVar3 != 0)) {
    func_0x00010c123140(param_3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar17));
    func_0x00010c123140(param_3);
    func_0x00010c1e8c80(param_1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar17));
    uVar3 = param_3;
    func_0x00010c123100();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c067ec0();
    _objc_release(uVar3);
    ppuVar12 = (undefined **)PTR_PTR_1126b10c8;
    if ((int)uVar6 < 1) {
      if (*(char *)(param_1 + (long)_DAT_11274442c) == '\x01') {
        ppuVar12 = *(undefined ***)(param_1 + lVar17);
        func_0x00010c216460(ppuVar12);
        func_0x00010723c940();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar12 = &PTR____CFConstantStringClassReference_110daafd8;
      }
    }
    else {
      uVar3 = param_3;
      func_0x00010c123100(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c067ec0();
      func_0x00010c22d8c0((double)(int)uVar6,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    func_0x00010c216240(*(undefined8 *)(param_1 + lVar17));
    _objc_release(ppuVar12);
  }
  uVar14 = *(undefined8 *)(param_1 + (long)_DAT_1127443dc);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e560(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar14);
  func_0x00010bee2760(param_1);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106270000; end: 10627006f;  */

void FUN_106270000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c067ec0();
  ppuVar2 = (undefined **)PTR_PTR_1126b10c8;
  if ((int)uVar1 < 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar1 = param_1;
    func_0x00010c067ec0(param_1);
    func_0x00010c22d8c0((double)(int)uVar1,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106270070; end: 1062700d7; -[SCContextSpotlightActionsViewController setBoosted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270070(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744464;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07d660();
  if ((int)param_3 == iVar1) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c074c20();
    if (iVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1af9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsBoosted_animated__112649890,param_3,0);
  return;
}



/* Entry: 1062700d8; end: 10627010f; -[SCContextSpotlightActionsViewController setIsBoosted:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062700d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1fade0(*(undefined8 *)(param_1 + _DAT_112744464));
                    /* WARNING: Could not recover jumptable at 0x00010be649f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__notifyHorizontalActionBarAction_112576c18,param_4);
  return;
}



/* Entry: 106270110; end: 10627039b; -[SCContextSpotlightActionsViewController configureWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127443e0);
  uVar1 = param_3;
  func_0x00010c260880(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0b3760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ff00(uVar6,param_2,uVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_1127444a4;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = uVar6;
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c25fd60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0e9620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127444a8);
  *(undefined8 *)(param_1 + _DAT_1127444a8) = uVar5;
  _objc_release(uVar6);
  uVar5 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127444ac);
  *(undefined8 *)(param_1 + _DAT_1127444ac) = uVar5;
  _objc_release(uVar6);
  lVar7 = param_1;
  func_0x00010bdf6120(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127444b0);
  *(long *)(param_1 + _DAT_1127444b0) = lVar7;
  _objc_release(uVar5);
  if (((*(long *)(param_1 + lVar8) == 0) && (*(char *)(param_1 + _DAT_112744418) != '\x01')) ||
     (*(char *)(param_1 + _DAT_112744404) == '\x01')) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274445c),param_2,1);
  }
  else {
    uVar5 = param_3;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127444b4);
    *(undefined8 *)(param_1 + _DAT_1127444b4) = uVar5;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11274445c;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,0);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0e1100(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a120(*(undefined8 *)(param_1 + lVar7),param_2,uVar5);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf5b360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf1aae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf1c040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd6300(uVar1);
    uVar3 = uVar1;
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea8160(param_1,param_2,uVar5,uVar6,uVar4,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  func_0x00010bee2760(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10627039c; end: 106270403; -[SCContextSpotlightActionsViewController setRecommended:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627039c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744474;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07d660();
  if (param_3 != iVar1) {
    func_0x00010c1fade0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010be649f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__notifyHorizontalActionBarAction_112576c18,0);
    return;
  }
  return;
}



/* Entry: 106270404; end: 1062704c7; -[SCContextSpotlightActionsViewController _notifyHorizontalActionBarActionStatesAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270404(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d660(*(undefined8 *)(param_1 + (long)_DAT_112744464));
    func_0x00010c07d660(*(undefined8 *)(param_1 + (long)_DAT_112744474));
    func_0x00010beef560(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1062704c8; end: 10627063b; -[SCContextSpotlightActionsViewController _creatorUserIdFromParams:] */

void FUN_1062704c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10627063c;
  uStack_40 = 0x10627064c;
  uStack_38 = 0;
  lVar1 = param_3;
  func_0x00010c25fd60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    func_0x00010c260880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0040();
  }
  else {
    func_0x00010c25fd60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_58[5];
    puStack_58[5] = lVar2;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10627063c; end: 106270653;  */

void FUN_10627063c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106270654; end: 106270693;  */

void FUN_106270654(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106270694; end: 106270697;  */

void FUN_106270694(void)

{
  return;
}



/* Entry: 106270698; end: 10627071b; -[SCContextSpotlightActionsViewController _upsellShareButtonWithTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270698(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010be3f6e0();
  if ((int)lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_112744478);
    func_0x00010c07dba0();
    if ((uVar2 & 1) == 0) {
      if (param_3 != 0) {
LAB_1062706e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0f8ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s_performShareButtonHighlightWithT_11261be18,param_3);
        return;
      }
      lVar3 = (long)_DAT_112744464;
      uVar2 = *(ulong *)(param_1 + lVar3);
      func_0x00010c074c20();
      if ((uVar2 & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
        func_0x00010c07d660();
        if (iVar1 != 0) goto LAB_1062706e0;
      }
    }
  }
  return;
}



/* Entry: 10627071c; end: 10627078b; -[SCContextSpotlightActionsViewController performShareButtonHighlightWithTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627071c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744478);
  func_0x00010c2516e0();
  if (iVar1 != 0) {
    lVar2 = (long)_DAT_112744428;
    func_0x00010c1b4480(*(undefined8 *)(param_1 + lVar2));
    if (param_3 == 0) {
      func_0x00010bfec7e0(*(undefined8 *)(param_1 + lVar2));
    }
                    /* WARNING: Could not recover jumptable at 0x00010be5a370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logUpsellShareImpressionIfNeces_112574278)
    ;
    return;
  }
  return;
}



/* Entry: 10627078c; end: 1062707e3; -[SCContextSpotlightActionsViewController _pulseShareButtonFromCompleteWatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627078c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be3f6e0();
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_112744478;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c07dba0();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + lVar2);
      func_0x00010c074c20();
      if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f8ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s_performShareButtonHighlightWithT_11261be18,0);
        return;
      }
    }
  }
  return;
}



/* Entry: 1062707e4; end: 106270a1b; -[SCContextSpotlightActionsViewController _setupSpotlightRepliesWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062707e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112744468;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = param_3;
    func_0x00010c07f4e0();
    if ((((uVar1 & 1) != 0) || (*(char *)(param_1 + _DAT_11274449c) == '\x01')) &&
       (lVar2 = *(long *)(param_1 + _DAT_1127444b8), lVar2 != 0)) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106270a1c;
      puStack_58 = &UNK_110917d80;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c25ff60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_50);
    }
    uVar1 = param_3;
    func_0x00010c07f4e0();
    if ((int)uVar1 == 0) {
      if ((*(byte *)(param_1 + _DAT_1127444bc) & 1) == 0) {
        func_0x00010c24b580(param_3);
        func_0x00010c201740(*(undefined8 *)(param_1 + lVar5));
      }
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + _DAT_112744490);
      uVar1 = param_3;
      func_0x00010c0d21c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      if (iVar4 == 0) {
        _objc_release(uVar1);
      }
      else {
        lVar5 = (long)_DAT_1127443fc;
        lVar2 = *(long *)(param_1 + lVar5);
        _objc_release(uVar1);
        if (lVar2 != 0) {
          uVar3 = *(undefined8 *)(param_1 + lVar5);
          _objc_copyWeak(auStack_78,auStack_48);
          func_0x00010bfa9c40(uVar3);
          _objc_destroyWeak(auStack_78);
        }
      }
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106270a1c; end: 106270a63;  */

void FUN_106270a1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedace0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106270a64; end: 106270b1f;  */

void FUN_106270a64(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_106270b20;
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



/* Entry: 106270b20; end: 106270b53;  */

void FUN_106270b20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106270b54; end: 106270bcb; -[SCContextSpotlightActionsViewController _setLiveReplyCountInRepliesCountManagerWithLiveReplyCount:snapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270b54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0fd8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c03e3a0();
  _objc_release(param_4);
  func_0x00010c1eae40(*(undefined8 *)(param_1 + _DAT_1127443fc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106270bcc; end: 106270c0b; -[SCContextSpotlightActionsViewController _dismissSpotlightRepliesBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270bcc(long param_1,undefined8 param_2)

{
  func_0x00010c201740(*(undefined8 *)(param_1 + _DAT_112744468),param_2,0);
  *(undefined1 *)(param_1 + _DAT_1127444bc) = 1;
  return;
}



/* Entry: 106270c0c; end: 106270d87; -[SCContextSpotlightActionsViewController _updateLiveRepliesCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270c0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112744468;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c074c20();
  if (((uVar1 & 1) == 0) &&
     (((*(byte *)(param_1 + (long)_DAT_112744498) & 1) != 0 ||
      (*(char *)(param_1 + (long)_DAT_11274449c) == '\x01')))) {
    uVar1 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if (((int)uVar2 != 0) && (uVar1 = param_3, func_0x00010c29c640(), uVar1 == 1)) {
      uVar1 = param_3;
      func_0x00010c131780();
      ppuVar3 = (undefined **)PTR_PTR_1126b10c8;
      if ((int)uVar1 == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        uVar1 = param_3;
        func_0x00010c131780(param_3);
        func_0x00010c22d8c0((double)(uVar1 & 0xffffffff),ppuVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        uVar1 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef580();
        _objc_release(uVar1);
      }
      uVar1 = param_3;
      func_0x00010c131780();
      if ((int)uVar1 == 0) {
        func_0x00010bdcdda0(param_1);
      }
      else {
        func_0x00010c216240(*(undefined8 *)(param_1 + lVar4));
      }
      _objc_release(ppuVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106270d88; end: 106270e23; -[SCContextSpotlightActionsViewController _applyCommentButtonEmptyStateTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270d88(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744468;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c074c20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744430);
  FUN_1062ca32c(uVar2,*(undefined1 *)(param_1 + _DAT_11274442c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c216460(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106270e24; end: 106270e63; -[SCContextSpotlightActionsViewController _setSpotlightRepliesCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127444c0);
  *(undefined8 *)(param_1 + _DAT_1127444c0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beba4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showPendingRepliesTooltipIfNece_11258c2d8);
  return;
}



/* Entry: 106270e64; end: 106270f33; -[SCContextSpotlightActionsViewController _showPendingRepliesTooltipIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270e64(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (((*(long *)(param_1 + _DAT_112744490) != 0) &&
      (lVar5 = param_1, func_0x00010be3f6e0(), (int)lVar5 != 0)) &&
     (*(char *)(param_1 + _DAT_112744498) == '\x01')) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127444c0);
    func_0x00010c131780();
    if ((iVar1 != 0) && (lVar5 = (long)_DAT_1127444c4, (*(byte *)(param_1 + lVar5) & 1) == 0)) {
      lVar2 = param_1 + _DAT_1127444c8;
      _objc_loadWeakRetained();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112744468);
      func_0x00010c131d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c238f40(lVar2,param_2,uVar3);
      *(char *)(param_1 + lVar5) = (char)lVar4;
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 106270f34; end: 106270f9f; -[SCContextSpotlightActionsViewController _setLiveRepliesCountObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270f34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127443fc);
  if (lVar1 != 0) {
    func_0x00010c09aa60(lVar1,param_2,*(undefined8 *)(param_1 + _DAT_112744494),
                        PTR___dispatch_main_q_11034be20);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127444b8);
    *(long *)(param_1 + _DAT_1127444b8) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106270fa0; end: 106271003; -[SCContextSpotlightActionsViewController _isCurrentlyVisibleView] */

/* WARNING: Possible PIC construction at 0x000106270fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106270fcc) */
/* WARNING: Removing unreachable block (ram,0x000106270fe0) */
/* WARNING: Removing unreachable block (ram,0x000106270fd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106270fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127444cc),PTR_s_isEqualToString__1125fa240,
             *(undefined8 *)(param_1 + _DAT_112744490));
  return;
}



/* Entry: 106271004; end: 1062711af; -[SCContextSpotlightActionsViewController _setSubscribeButtonIcon:bitmojiAvatarId:bitmojiSelfieId:hasDefaultIcon:userId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271004(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  int param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  if (((param_6 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) ||
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744434);
    puVar2 = auStack_78;
    _objc_copyWeak(puVar2,auStack_48);
    func_0x00010bfa97c0(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744434);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1062711b0;
    puStack_58 = &UNK_110856cc0;
    puVar2 = auStack_50;
    _objc_copyWeak(puVar2,auStack_48);
    func_0x00010bfa5500(uVar3);
  }
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062711b0; end: 106271247;  */

void FUN_1062711b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106271248; end: 106271337; -[SCContextSpotlightActionsViewController _didOpenSpotlightRepliesNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271248(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c92b8;
  func_0x00010c131860(PTR_PTR_1126c92b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if ((uVar1 != 0) && (func_0x00010c0720c0(), (int)uVar3 != 0)) {
    lVar5 = param_1 + _DAT_1127444c8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bfe2520();
    _objc_release(lVar5);
    func_0x00010be036e0(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106271338; end: 1062713db; -[SCContextSpotlightActionsViewController _logUpsellShareImpressionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271338(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar2 = param_1;
  func_0x00010be3f6e0();
  if ((int)lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744478);
    func_0x00010c07dba0();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127443f4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c9300;
      func_0x00010c28efe0(PTR_PTR_1126c9300);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a81a0(uVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f415f8,0x5c
                          ,0);
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 1062713dc; end: 10627149b; -[SCContextSpotlightActionsViewController _showDSAModalIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062713dc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112744464);
  func_0x00010c07d660();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744474);
    func_0x00010c07d660();
    if (iVar1 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + _DAT_112744414) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744424);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf8acc0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      param_1 = param_1 + _DAT_1127444c8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c236ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10627149c; end: 1062714e3; -[SCContextSpotlightActionsViewController _applicationDidForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627149c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be3f6e0();
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_112744478;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c07dba0();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar2),PTR_s_resumeUpsellPulseAnimation_11262d0c8);
      return;
    }
  }
  return;
}



/* Entry: 1062714e4; end: 1062714f7; -[SCContextSpotlightActionsViewController _resetUpsellShareButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062714e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b4490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744428),PTR_s_setIsShareUpsold__11264ab48,0);
  return;
}



/* Entry: 1062714f8; end: 1062715d7; -[SCContextSpotlightActionsViewController _didFetchSubsButtonThumbnailWithImage:shouldResizeToCircle:] */

void FUN_1062714f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1062715d8;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1062715d8; end: 106271637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062715d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(lVar1 + _DAT_11274445c),param_2,1);
      func_0x00010bee2760(lVar1);
    }
    else {
      func_0x00010c1e40c0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106271638; end: 10627173f; -[SCContextSpotlightActionsViewController _configureSoundActionButtonWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271638(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127444d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274448c),param_2,1);
  }
  else {
    func_0x00010c1887e0(0,*(undefined8 *)(param_1 + _DAT_112744458),param_2,
                        *(undefined8 *)(param_1 + _DAT_112744488));
    lVar3 = (long)_DAT_11274448c;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
    lVar2 = param_3;
    func_0x00010bf53900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      lVar2 = param_3;
      func_0x00010bf53900(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206980(uVar1,param_2,lVar2);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106271740; end: 1062717f7; -[SCContextSpotlightActionsViewController _didReceiveUpsellType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271740(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 3) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010becfdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerQuickShareUpsell_112591910);
      return;
    }
    uVar1 = 0;
  }
  else {
    if (param_3 == 3) {
      param_1 = param_1 + _DAT_1127444c8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2371a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    if (param_3 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010be84870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__pulseShareButtonFromCompleteWat_11257ebb8);
      return;
    }
    if (param_3 != 6) {
      return;
    }
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__upsellShareButtonWithTrigger__1125971b8,uVar1);
  return;
}



/* Entry: 1062717f8; end: 106271807; -[SCContextSpotlightActionsViewController _didReceiveResetUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062717f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744478),PTR_s_resetUpsell_11262c110);
  return;
}



/* Entry: 106271808; end: 1062718ab; -[SCContextSpotlightActionsViewController _didReceiveFocusOnShareButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271808(long param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  double dStack_38;
  
  func_0x00010bf1f3c0();
  dVar1 = 1.0;
  dStack_38 = 0.5;
  if (param_3 == 0) {
    dStack_38 = 1.0;
  }
  func_0x00010bf01b40(*(undefined8 *)(param_1 + _DAT_112744464));
  if (dVar1 != dStack_38) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1062718ac;
    puStack_48 = &UNK_110848c48;
    lStack_40 = param_1;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_60);
  }
  return;
}



/* Entry: 1062718ac; end: 10627196b;  */

/* WARNING: Possible PIC construction at 0x0001062718d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062718fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106271924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010627194c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106271928) */
/* WARNING: Removing unreachable block (ram,0x000106271900) */
/* WARNING: Removing unreachable block (ram,0x0001062718d8) */
/* WARNING: Removing unreachable block (ram,0x000106271950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062718ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274445c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10627196c; end: 106271a77; -[SCContextSpotlightActionsViewController didSelectFavorite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627196c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112744464;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c07d660();
  func_0x00010c1af9a0(param_1,param_2,(uint)uVar1 ^ 1,1);
  puVar3 = PTR_PTR_1126b5b00;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c07d660(uVar2);
  func_0x00010bfa0f00(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1,param_2,puVar3,8,5);
  _objc_release(puVar3);
  func_0x00010beb89a0(param_1);
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + _DAT_112744440) & 1) == 0)) {
    puVar3 = PTR_PTR_1126c9308;
    func_0x00010c2320c0(PTR_PTR_1126c9308,param_2,*(undefined8 *)(param_1 + _DAT_1127443e4),
                        *(undefined8 *)(param_1 + _DAT_112744400));
    if ((int)puVar3 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106271a78; end: 106271ac3; -[SCContextSpotlightActionsViewController didSelectReply] */

void FUN_106271a78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010bf35d80(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1,param_2,puVar1,8,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106271ac4; end: 106271b5f; -[SCContextSpotlightActionsViewController didTapReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271ac4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010bf42020(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  lVar2 = param_1 + _DAT_1127444c8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfe2520();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be036f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSpotlightRepliesBadge_11255e758);
  return;
}



/* Entry: 106271b60; end: 106271c9b; -[SCContextSpotlightActionsViewController didSelectShare] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271b60(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126b5b00;
  lVar4 = (long)_DAT_112744478;
  func_0x00010c07dba0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c22a740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar2);
  func_0x00010c123ba0(*(undefined8 *)(param_1 + _DAT_112744428));
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c07dba0();
  if (iVar1 != 0) {
    uVar3 = 0;
    _dispatch_time(0,500000000);
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106271c9c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010058c530(uVar3,PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106271c9c; end: 106271cc7;  */

void FUN_106271c9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be94340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106271cc8; end: 106271daf; -[SCContextSpotlightActionsViewController didLongPressComment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271cc8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112744444) == '\x01') {
    uVar1 = *(ulong *)(param_1 + _DAT_112744468);
    func_0x00010c074c20();
    if (((uVar1 & 1) == 0) && (lVar2 = param_3, func_0x00010c252440(), lVar2 == 1)) {
      puVar3 = PTR_PTR_1126b5b00;
      func_0x00010c11e400(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8080(param_1,param_2,puVar3,8,4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar3);
      param_1 = param_1 + _DAT_1127444c8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfe2520();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106271db0; end: 106271e6b; -[SCContextSpotlightActionsViewController didLongPressShare:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271db0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + _DAT_112744440) == '\x01') && (func_0x00010c252440(), param_3 == 1)) {
    puVar1 = PTR_PTR_1126b5b00;
    func_0x00010c11e900(PTR_PTR_1126b5b00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8080(param_1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    lVar2 = (long)_DAT_112744428;
    func_0x00010c123ba0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c123bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_recordUserTriggeredQuickShare_112626910);
    return;
  }
  return;
}



/* Entry: 106271e6c; end: 106271f17; -[SCContextSpotlightActionsViewController didSelectMore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271e6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010bf32200(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1,param_2,puVar1,6,5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127443f8);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106271f18; end: 106271f83; -[SCContextSpotlightActionsViewController didSelectOpenPublicProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106271f18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127444a8);
  func_0x00010bf51e00(uVar2);
  func_0x00010beef500(lVar1,param_2,param_1,uVar2,8,5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106271f84; end: 106271fff; -[SCContextSpotlightActionsViewController performAction:contextMenuType:actionType:] */

void FUN_106271f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be94340(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106272000; end: 1062721a7; -[SCContextSpotlightActionsViewController toggleSubscription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106272000(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  lVar10 = (long)_DAT_1127444d8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar10));
  lVar8 = (long)_DAT_11274445c;
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    lVar9 = (long)_DAT_1127444a4;
    if (*(long *)(param_1 + lVar9) != 0) {
      uVar2 = *(ulong *)(param_1 + lVar8);
      func_0x00010c07d660();
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      if ((uVar2 & 1) == 0) {
        func_0x00010c25fd00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2829e0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = auStack_48;
      _objc_initWeak(puVar4,param_1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0e0ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      uVar6 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar3);
    }
  }
  return;
}



/* Entry: 1062721a8; end: 1062721e3;  */

void FUN_1062721a8(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010be7eda0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062721e4; end: 10627229b; -[SCContextSpotlightActionsViewController _presentSubscriptionToast] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062721e4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11274445c;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c07d660();
  if (((uVar1 & 1) == 0) && (lVar4 = (long)_DAT_1127444b0, *(long *)(param_1 + lVar4) != 0)) {
    puVar2 = PTR_PTR_1126c2120;
    _objc_opt_new(PTR_PTR_1126c2120);
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127444b4);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c116960(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b004f8(uVar5,uVar6,uVar3,puVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10627229c; end: 1062723b3; -[SCContextSpotlightActionsViewController didSelectRecommend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627229c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112744474;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c07d660();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_1127444ac);
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107dd9cf0(uVar1,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c07d660(uVar5);
  func_0x00010c1fade0(uVar5);
  func_0x00010be649e0(param_1);
  puVar4 = PTR_PTR_1126b5b00;
  func_0x00010c07d660(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1230e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010beb89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDSAModalIfNecessary_11258bc10);
  return;
}



/* Entry: 1062723b4; end: 10627242b; -[SCContextSpotlightActionsViewController didSelectSoundActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062723b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127444d4);
  func_0x00010c246fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1,param_2,uVar1,8,5);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10627242c; end: 1062725ab; -[SCContextSpotlightActionsViewController operaViewDidSendEvent:page:params:] */

void FUN_10627242c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c29e700(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010bdcd840(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1062725ac;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062725ac; end: 10627260f;  */

void FUN_1062725ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c284d20();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beba4c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106272610; end: 10627274b; -[SCContextSpotlightActionsViewController updateCurrentlyPlayingStoryID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106272610(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c9310;
  _objc_retain(param_3);
  func_0x00010c259500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127444dc);
  *(undefined **)(param_1 + _DAT_1127444dc) = puVar1;
  _objc_release(uVar5);
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d21c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127444d0);
  *(ulong *)(param_1 + _DAT_1127444d0) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127444cc);
  *(ulong *)(param_1 + _DAT_1127444cc) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10627274c; end: 1062727d7; -[SCContextSpotlightActionsViewController _triggerQuickShareUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627274c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010c11e920(PTR_PTR_1126b5b00,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8080(param_1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744428),PTR_s_setDidUpsellQuickShare__112641200,1);
  return;
}



/* Entry: 1062727d8; end: 1062729bf; -[SCContextSpotlightActionsViewController didTapAvatarSubsButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1062727d8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_1127443f8;
  uVar5 = *(undefined8 *)(param_3 + lVar7);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c288220(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5320;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_70,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar5,param_4,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_3[_DAT_112744418] == '\x01') {
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    puVar1 = PTR_PTR_1126b6160;
    func_0x00010c1169e0(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + _DAT_1127444ac);
    puVar2 = PTR_PTR_1126b6168;
    func_0x00010c269180();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    puStack_88 = puVar2;
    func_0x00010c297180(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_80,&puStack_88,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar6,param_4,puVar1,uVar5,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_3 = puVar1;
  }
  else {
    func_0x00010bf7acc0(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 1062729c0; end: 1062729c7; -[SCContextSpotlightActionsViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1062729c0(void)

{
  return 0;
}



/* Entry: 1062729c8; end: 1062729fb; -[SCContextSpotlightActionsViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1062729c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x74;
  if (param_3 != *(long *)(param_1 + _DAT_11274446c)) {
    lVar1 = 0x70;
  }
  return (*(byte *)(param_1 + *(int *)(&DAT_1127443d0 + lVar1)) ^ 0xff) & 1;
}



/* Entry: 1062729fc; end: 106272a03; -[SCContextSpotlightActionsViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_1062729fc(void)

{
  return 1;
}



/* Entry: 106272a04; end: 106272a23; -[SCContextSpotlightActionsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106272a04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127444c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106272a24; end: 106272a37; -[SCContextSpotlightActionsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106272a24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127444c8,param_3);
  return;
}



/* Entry: 106272a38; end: 106272a47; -[SCContextSpotlightActionsViewController quickShareAnchorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106272a38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744480);
}



/* Entry: 106272a48; end: 106272a57; -[SCContextSpotlightActionsViewController quickCommentAnchorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106272a48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744470);
}



/* Entry: 106272a58; end: 106272db3; -[SCContextSpotlightActionsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106272a58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744470,0);
  _objc_storeStrong(param_1 + _DAT_112744480,0);
  _objc_destroyWeak(param_1 + _DAT_1127444c8);
  _objc_storeStrong(param_1 + _DAT_11274446c,0);
  _objc_storeStrong(param_1 + _DAT_11274447c,0);
  _objc_storeStrong(param_1 + _DAT_11274443c,0);
  _objc_storeStrong(param_1 + _DAT_1127444d4,0);
  _objc_storeStrong(param_1 + _DAT_112744438,0);
  _objc_storeStrong(param_1 + _DAT_112744434,0);
  _objc_storeStrong(param_1 + _DAT_11274448c,0);
  _objc_storeStrong(param_1 + _DAT_1127444b0,0);
  _objc_storeStrong(param_1 + _DAT_112744474,0);
  _objc_storeStrong(param_1 + _DAT_1127444a0,0);
  _objc_storeStrong(param_1 + _DAT_112744428,0);
  _objc_storeStrong(param_1 + _DAT_112744424,0);
  _objc_storeStrong(param_1 + _DAT_112744410,0);
  _objc_storeStrong(param_1 + _DAT_1127444c0,0);
  _objc_storeStrong(param_1 + _DAT_1127444e0,0);
  _objc_storeStrong(param_1 + _DAT_1127444e4,0);
  _objc_storeStrong(param_1 + _DAT_1127444a8,0);
  _objc_storeStrong(param_1 + _DAT_1127444cc,0);
  _objc_storeStrong(param_1 + _DAT_112744400,0);
  _objc_storeStrong(param_1 + _DAT_1127444d0,0);
  _objc_storeStrong(param_1 + _DAT_112744494,0);
  _objc_storeStrong(param_1 + _DAT_112744408,0);
  _objc_storeStrong(param_1 + _DAT_1127444b8,0);
  _objc_storeStrong(param_1 + _DAT_1127443fc,0);
  _objc_storeStrong(param_1 + _DAT_1127443f8,0);
  _objc_storeStrong(param_1 + _DAT_1127444b4,0);
  _objc_storeStrong(param_1 + _DAT_112744490,0);
  _objc_storeStrong(param_1 + _DAT_1127444dc,0);
  _objc_storeStrong(param_1 + _DAT_1127443f4,0);
  _objc_storeStrong(param_1 + _DAT_1127443f0,0);
  _objc_storeStrong(param_1 + _DAT_1127443ec,0);
  _objc_storeStrong(param_1 + _DAT_1127443e8,0);
  _objc_storeStrong(param_1 + _DAT_1127443e4,0);
  _objc_storeStrong(param_1 + _DAT_1127444a4,0);
  _objc_storeStrong(param_1 + _DAT_1127444d8,0);
  _objc_storeStrong(param_1 + _DAT_1127444ac,0);
  _objc_storeStrong(param_1 + _DAT_1127443e0,0);
  _objc_storeStrong(param_1 + _DAT_1127443d4,0);
  _objc_storeStrong(param_1 + _DAT_1127443dc,0);
  _objc_storeStrong(param_1 + _DAT_1127443d0,0);
  _objc_storeStrong(param_1 + _DAT_112744468,0);
  _objc_storeStrong(param_1 + _DAT_112744488,0);
  _objc_storeStrong(param_1 + _DAT_112744478,0);
  _objc_storeStrong(param_1 + _DAT_112744484,0);
  _objc_storeStrong(param_1 + _DAT_112744464,0);
  _objc_storeStrong(param_1 + _DAT_112744460,0);
  _objc_storeStrong(param_1 + _DAT_11274445c,0);
  _objc_storeStrong(param_1 + _DAT_112744458,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127443d8,0);
  return;
}



/* Entry: 106272db4; end: 106272e37; -[SCContextSpotlightBloopsHeaderViewController initWithContextSessionParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106272db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0a30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127444e8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106272e38; end: 106272e7f; -[SCContextSpotlightBloopsHeaderViewController viewDidLoad] */

void FUN_106272e38(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bee2a80(param_1);
  return;
}



/* Entry: 106272e80; end: 106273523; -[SCContextSpotlightBloopsHeaderViewController _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106272e80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  long lVar37;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106273524;
  uStack_b8 = 0x106273534;
  lStack_b0 = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127444e8);
  func_0x00010bfa29a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010bf4ab60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3);
  _objc_release(lVar37);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0e8b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar3);
  uVar2 = puStack_d0[5];
  func_0x00010c0e8c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0e8b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar3);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf4ab60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c0e8b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3);
  _objc_release(lVar37);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = param_1;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar37;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  lStack_a8 = lVar6;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  lStack_a0 = lVar11;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  lStack_98 = lVar16;
  func_0x00010c0e8b20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar18;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  lStack_90 = lVar21;
  func_0x00010c0e8b20();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar23;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  lStack_88 = lVar26;
  func_0x00010c0e8b20();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar28;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  lStack_80 = lVar31;
  func_0x00010c0e8b20();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar33;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar35;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(param_1);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_d8,8);
  lVar3 = lStack_b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar37 = 8;
  __Block_object_dispose(&uStack_d8);
  __Unwind_Resume();
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar37 + 0x28);
  *(undefined8 *)(lVar37 + 0x28) = 0;
  return;
}


