/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109202ff8; end: 10920307b; -[SCMapModalTrayController .cxx_destruct] */

void FUN_109202ff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10920307c; end: 1092030ff; -[SCMapTabletDemoTrayContainerViewController initWithChildViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10920307c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112783924;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109203100; end: 10920357f; -[SCMapTabletDemoTrayContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109203100(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_112701030;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar2);
  lVar21 = (long)_DAT_112783924;
  func_0x00010c2a6740(*(undefined8 *)(param_1 + lVar21));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar1);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar21));
  uVar3 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar21);
  uStack_90 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar21);
  uStack_88 = uVar11;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar21);
  uStack_80 = uVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar5;
  }
  ___stack_chk_fail();
  return 0x93;
}



/* Entry: 109203580; end: 109203587; -[SCMapTabletDemoTrayContainerViewController pageViewName] */

undefined8 FUN_109203580(void)

{
  return 0x93;
}



/* Entry: 109203588; end: 10920359b; -[SCMapTabletDemoTrayContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109203588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783924,0);
  return;
}



/* Entry: 10920359c; end: 1092036cf; -[SCMapTabletDemoTrayInteractionController initWithParentViewController:trayViewController:accessoryViewController:sizingDelegate:configuration:] */

undefined8 *
FUN_10920359c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_50 = PTR_PTR_112701038;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ddeb0;
    _objc_alloc();
    func_0x00010bffe0e0();
    uVar3 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  return puVar1;
}



/* Entry: 1092036d0; end: 1092036f7; -[SCMapTabletDemoTrayInteractionController interactionObservable] */

void FUN_1092036d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1092036f8; end: 1092036fb; -[SCMapTabletDemoTrayInteractionController hideAnimated:] */

void FUN_1092036f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hidePopover_11256b080);
  return;
}



/* Entry: 1092036fc; end: 1092036ff; -[SCMapTabletDemoTrayInteractionController show] */

void FUN_1092036fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showPopover_11258c318);
  return;
}



/* Entry: 109203700; end: 109203703; -[SCMapTabletDemoTrayInteractionController showWithPosition:] */

void FUN_109203700(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_show_11266b038);
  return;
}



/* Entry: 109203704; end: 109203707; -[SCMapTabletDemoTrayInteractionController resizeTrayAnimated:] */

void FUN_109203704(void)

{
  return;
}



/* Entry: 109203708; end: 10920370f; -[SCMapTabletDemoTrayInteractionController setTrayPosition:animated:] */

void FUN_109203708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTrayPosition_animated_interac_1126641f0,param_3,param_4,0);
  return;
}



/* Entry: 109203710; end: 109203723; -[SCMapTabletDemoTrayInteractionController setTrayPosition:animated:interactionMethod:] */

void FUN_109203710(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideAnimated__1125d5fd0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_show_11266b038);
  return;
}



/* Entry: 109203724; end: 10920372b; -[SCMapTabletDemoTrayInteractionController trayAccessoryHeight] */

undefined8 FUN_109203724(void)

{
  return 0;
}



/* Entry: 10920372c; end: 109203733; -[SCMapTabletDemoTrayInteractionController trayHeightForPosition:] */

undefined8 FUN_10920372c(void)

{
  return 0;
}



/* Entry: 109203734; end: 1092039bb; -[SCMapTabletDemoTrayInteractionController _showPopover] */

void FUN_109203734(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  puVar1 = PTR_PTR_1126dde90;
  func_0x00010c2a5be0(PTR_PTR_1126dde90,param_3,param_2,0x10,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c1c8b80(*(undefined8 *)(param_2 + 0x40),param_3,7);
  lVar2 = *(long *)(param_2 + 0x40);
  func_0x00010c103ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_2 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2072a0(lVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_2 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    dVar6 = param_1;
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_2 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c207040(param_1 + 30.0 + -0.5,dVar6 + 30.0 + -0.5,0x3ff0000000000000,
                        0x3ff0000000000000,lVar2);
    func_0x00010c1dac60(lVar2,param_3,0xf);
    func_0x00010c18b5e0(lVar2,param_3,param_2);
  }
  lVar3 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = lVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d96c0(lVar2,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1dfea0(0x4075e00000000000,0x4082c00000000000,*(undefined8 *)(param_2 + 0x40));
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c10eda0();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x18) = 0x10;
  uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x28);
  puVar1 = PTR_PTR_1126dde90;
  func_0x00010bf73720(PTR_PTR_1126dde90,param_3,*(long *)(lVar2 + 0x20),0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1092039bc; end: 109203a13;  */

void FUN_1092039bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0x10;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  puVar1 = PTR_PTR_1126dde90;
  func_0x00010bf73720(PTR_PTR_1126dde90,param_2,*(long *)(param_1 + 0x20),0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109203a14; end: 109203a57; -[SCMapTabletDemoTrayInteractionController _hidePopover] */

void FUN_109203a14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  *(undefined8 *)(param_1 + 0x18) = 2;
  return;
}



/* Entry: 109203a58; end: 109203aff; -[SCMapTabletDemoTrayInteractionController popoverPresentationControllerDidDismissPopover:] */

void FUN_109203a58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126dde90;
  func_0x00010c2a5be0(PTR_PTR_1126dde90,param_2,param_1,2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_109203b00;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  return;
}



/* Entry: 109203b00; end: 109203b4b;  */

void FUN_109203b00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  puVar1 = PTR_PTR_1126dde90;
  func_0x00010bf73720(PTR_PTR_1126dde90,param_2,*(long *)(param_1 + 0x20),2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109203b4c; end: 109203b53; -[SCMapTabletDemoTrayInteractionController possibleInteractivePositions] */

undefined8 FUN_109203b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109203b54; end: 109203b5b; -[SCMapTabletDemoTrayInteractionController trayViewController] */

undefined8 FUN_109203b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109203b5c; end: 109203b63; -[SCMapTabletDemoTrayInteractionController currentPosition] */

undefined8 FUN_109203b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109203b64; end: 109203bbf; -[SCMapTabletDemoTrayInteractionController .cxx_destruct] */

void FUN_109203b64(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 109203bc0; end: 109203bef;  */

void FUN_109203bc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf469d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4038000000000000,*(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0,
             PTR_PTR_1126b1f08,PTR_s_configurationWithPositions_botto_1125af418,param_1,0,1,0,0);
  return;
}



/* Entry: 109203bf0; end: 109203cef;  */

void FUN_109203bf0(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = 8;
  if ((param_1 & 0x10) != 0) {
    uVar1 = 0x10;
  }
  puVar2 = PTR_PTR_1126b1f08;
  _objc_alloc(PTR_PTR_1126b1f08);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037cc0(*(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0,0,0,puVar2,
                      param_2,param_1,uVar1,2,4,puVar3,puVar4,puVar5,&section_100000100);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109203cf0; end: 109203e47; +[SCMapTrayConfiguration configurationWithPositions:bottomInset:decelerationRate:gripperOverlapsContent:gripperHasDropShadowOnScroll:gripperBackgroundColorOverride:backgroundColorOverride:] */

void FUN_109203cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *in_x5;
  undefined *in_x6;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  if (in_x5 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  }
  else {
    _objc_retain(in_x5);
    puVar1 = in_x5;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  }
  PTR__OBJC_CLASS___UIColor_1126aea70 = puVar2;
  if (in_x6 == (undefined *)0x0) {
    func_0x00010c23ba80(puVar2,param_4,0x28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(in_x6);
    puVar2 = in_x6;
  }
  puVar3 = PTR_PTR_1126b1f08;
  _objc_alloc(PTR_PTR_1126b1f08);
  func_0x00010c037cc0(param_2,0x4038000000000000,param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_x6);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109203e48; end: 109204087; -[SCMapTrayInteractionControllerImpl initWithParentViewController:trayViewController:accessoryViewController:sizingDelegate:configuration:] */

undefined1 *
FUN_109203e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = &uStack_60;
  _objc_initWeak(auStack_48,param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_50,param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112701040;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) goto LAB_109204028;
  uVar3 = param_7;
  func_0x00010c1044e0();
  *(ulong *)((long)puVar2 + 0x110) = uVar3;
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)((long)puVar2 + 0x100);
  *(undefined8 *)((long)puVar2 + 0x100) = param_4;
  _objc_release(uVar4);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)((long)puVar2 + 0x20);
  *(undefined8 *)((long)puVar2 + 0x20) = param_5;
  _objc_release(uVar4);
  puVar5 = auStack_50;
  _objc_loadWeakRetained(puVar5);
  _objc_storeWeak((undefined1 *)((long)puVar2 + 8),puVar5);
  _objc_release(puVar5);
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
  *(ulong *)((long)puVar2 + 0x10) = param_7;
  _objc_release(uVar4);
  puVar5 = auStack_48;
  _objc_loadWeakRetained(puVar5);
  _objc_storeWeak((undefined1 *)((long)puVar2 + 0x18),puVar5);
  _objc_release(puVar5);
  *(undefined8 *)((long)puVar2 + 0xf0) = 0xbff0000000000000;
  puVar6 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)((long)puVar2 + 0xd0);
  *(undefined **)((long)puVar2 + 0xd0) = puVar6;
  _objc_release(uVar4);
  if (((uint)*(undefined8 *)((long)puVar2 + 0x110) >> 4 & 1) == 0) {
    if (((uint)*(undefined8 *)((long)puVar2 + 0x110) >> 3 & 1) != 0) {
      uVar4 = 8;
      goto LAB_109203f8c;
    }
  }
  else {
    uVar4 = 0x10;
LAB_109203f8c:
    *(undefined8 *)((long)puVar2 + 0x80) = uVar4;
  }
  func_0x00010bea66e0(puVar2);
  uVar3 = param_7;
  func_0x00010c104560();
  if ((*(ulong *)((long)puVar2 + 0x80) & uVar3) != 0) {
    uVar3 = param_7;
    func_0x00010c104560();
    *(ulong *)((long)puVar2 + 0x90) = uVar3;
  }
  uVar3 = param_7;
  func_0x00010c252080();
  *(ulong *)((long)puVar2 + 0x108) = uVar3;
  *(undefined8 *)((long)puVar2 + 0x78) = 1;
  func_0x00010c29bf00(*(undefined8 *)((long)puVar2 + 0x100));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = auStack_48;
  _objc_loadWeakRetained(puVar5);
  func_0x00010beb1360(puVar2);
  _objc_release(puVar5);
  func_0x00010bec5ac0(puVar2);
  func_0x00010beacca0(puVar2);
  func_0x00010beac700(puVar2);
  iVar1 = (int)*(undefined8 *)((long)puVar2 + 0x10);
  func_0x00010c22e180();
  if (iVar1 != 0) {
    func_0x00010be89520(puVar2);
  }
LAB_109204028:
  _objc_release(param_7);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  return (undefined1 *)puVar2;
}



/* Entry: 109204088; end: 1092041ef; -[SCMapTrayInteractionControllerImpl dealloc] */

void FUN_109204088(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1092041f0;
  puStack_70 = &UNK_1108475b0;
  uStack_68 = uVar3;
  uStack_60 = uVar2;
  uStack_58 = uVar5;
  uStack_50 = uVar4;
  uStack_48 = uVar6;
  _objc_retain(uVar6);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  func_0x000107c312cc("APPSTORE",&puStack_88);
  func_0x00010becad20(param_1);
  func_0x00010bdda4a0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_90 = PTR_PTR_112701040;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1092041f0; end: 109204253;  */

/* WARNING: Possible PIC construction at 0x000109204214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109204238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109204218) */
/* WARNING: Removing unreachable block (ram,0x00010920423c) */

void FUN_1092041f0(long param_1)

{
  func_0x00010c29bf00(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109204254; end: 1092042bb; -[SCMapTrayInteractionControllerImpl createSnapshotImage] */

void FUN_109204254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010bf20c00(uVar1);
  func_0x00010bf89ce0(uVar1,param_6,1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1092042bc; end: 1092043cf; -[SCMapTrayInteractionControllerImpl createSnapshotView] */

void FUN_1092042bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0);
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c245f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f800000);
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x40));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19f0e0(uVar2);
  puVar1 = PTR_PTR_1126b08d8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(uVar2);
  func_0x00010c23ba80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30a24(0x4024000000000000,0x3fbeb851e0000000,0,0xc010000000000000,puVar1,uVar2,puVar4
                     );
  _objc_release(uVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1092043d0; end: 1092043d7; -[SCMapTrayInteractionControllerImpl containerViewFrame] */

void FUN_1092043d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 1092043d8; end: 109204483; -[SCMapTrayInteractionControllerImpl setHidden:] */

void FUN_1092043d8(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x50));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(param_1 + 0x40),PTR_s_setAlpha__112637810);
    return;
  }
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 109204484; end: 109204493;  */

void FUN_109204484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 109204494; end: 1092044ab; -[SCMapTrayInteractionControllerImpl show] */

void FUN_109204494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTrayPosition_animated__1126641e8,
             0x10 - (*(ulong *)(param_1 + 0x110) & 8),1);
  return;
}



/* Entry: 1092044ac; end: 1092044c3; -[SCMapTrayInteractionControllerImpl showWithPosition:] */

void FUN_1092044ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 3U < 0xfffffffffffffffe) {
                    /* WARNING: Could not recover jumptable at 0x00010c219f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setTrayPosition_animated__1126641e8,param_3,1);
    return;
  }
  return;
}



/* Entry: 1092044c4; end: 1092044cf; -[SCMapTrayInteractionControllerImpl hideAnimated:] */

void FUN_1092044c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTrayPosition_animated__1126641e8,2,param_3);
  return;
}



/* Entry: 1092044d0; end: 1092044f7; -[SCMapTrayInteractionControllerImpl interactionObservable] */

void FUN_1092044d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1092044f8; end: 10920450f; -[SCMapTrayInteractionControllerImpl setTrayPosition:animated:] */

void FUN_1092044f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == *(long *)(param_1 + 0x108)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be61570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__moveTrayToPosition_animated_int_112575ef8,param_3,param_4,0);
  return;
}



/* Entry: 109204510; end: 109204523; -[SCMapTrayInteractionControllerImpl setTrayPosition:animated:interactionMethod:] */

void FUN_109204510(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + 0x108)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be61570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__moveTrayToPosition_animated_int_112575ef8);
  return;
}



/* Entry: 109204524; end: 10920453f; -[SCMapTrayInteractionControllerImpl resizeTrayAnimated:] */

void FUN_109204524(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x108) == 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be61570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__moveTrayToPosition_animated_int_112575ef8,*(long *)(param_1 + 0x108),
             param_3,0);
  return;
}



/* Entry: 109204540; end: 109204587; -[SCMapTrayInteractionControllerImpl trayHeightForPosition:] */

double FUN_109204540(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  func_0x00010bfe4620();
  func_0x00010be67380(param_3,param_4,param_5);
  param_2 = param_2 - param_1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  return param_2;
}



/* Entry: 109204588; end: 10920458f; -[SCMapTrayInteractionControllerImpl trayAccessoryHeight] */

void FUN_109204588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_estimatedHeight_1125c3f80);
  return;
}



/* Entry: 109204590; end: 109204597; -[SCMapTrayInteractionControllerImpl scrollView] */

void FUN_109204590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_scrollView_112632480);
  return;
}



/* Entry: 109204598; end: 1092045df; -[SCMapTrayInteractionControllerImpl hostSize] */

undefined1  [16] FUN_109204598(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010c27b3e0();
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1092045e0; end: 109204623; -[SCMapTrayInteractionControllerImpl autoSizingEnabled] */

undefined8 FUN_1092045e0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x100);
  _objc_opt_respondsToSelector(uVar1,PTR_s_autoSizingEnabled_1125a2100);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bf11d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_autoSizingEnabled_1125a2100);
    return uVar2;
  }
  return 0;
}



/* Entry: 109204624; end: 109204667; -[SCMapTrayInteractionControllerImpl autoSizingFullishEnabled] */

undefined8 FUN_109204624(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x100);
  _objc_opt_respondsToSelector(uVar1,PTR_s_autoSizingFullishEnabled_1125a2108);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bf11d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_autoSizingFullishEnabled_1125a2108);
    return uVar2;
  }
  return 1;
}



/* Entry: 109204668; end: 109204703; -[SCMapTrayInteractionControllerImpl _registerForKeyboardNotifications] */

void FUN_109204668(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109204704; end: 1092048d3; -[SCMapTrayInteractionControllerImpl _keyboardWillShow:] */

void FUN_109204704(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(uVar2);
  uVar3 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    func_0x00010bfe4620(param_2);
    lVar5 = param_2 + 8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c27b2e0();
    _objc_release(lVar5);
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x28));
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bee92c0(param_2);
  func_0x00010bf03440((double)param_1,0,puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1092048d4; end: 109204953;  */

void FUN_1092048d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeTranslation(auStack_50,0,-*(double *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 109204954; end: 109204a5f; -[SCMapTrayInteractionControllerImpl _keyboardWillHide:] */

void FUN_109204954(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,
                      *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = param_2;
  func_0x00010bee92c0(param_2,param_3,(long)(int)uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_109204a60;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_2;
  func_0x00010bf03440((double)param_1,0,puVar1,param_3,uVar2,&puStack_68,0);
  _objc_release(param_4);
  return;
}



/* Entry: 109204a60; end: 109204acf;  */

void FUN_109204a60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 109204ad0; end: 109204ae7; -[SCMapTrayInteractionControllerImpl _viewAnimationOpitonFromAnimationCurve:] */

long FUN_109204ad0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (param_3 - 1U) * 0x10000 + 0x10000;
  if (2 < param_3 - 1U) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 109204ae8; end: 109204b6f; -[SCMapTrayInteractionControllerImpl _setupEventHandling] */

void FUN_109204ae8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beac720(param_1,param_2,lVar1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f55d67c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(uVar3,param_2,param_1,puVar2,2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109204b70; end: 109204bd3; -[SCMapTrayInteractionControllerImpl _tearDownEventHandling] */

void FUN_109204b70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010becad40(param_1,param_2,*(undefined8 *)(param_1 + 0xd8));
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f55d67c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar2,param_2,param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109204bd4; end: 109204cc3; -[SCMapTrayInteractionControllerImpl _setupEventHandlingForScrollView:] */

void FUN_109204bd4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"contentOffset");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa220(param_3,param_2,param_1,puVar1,0,0);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"contentSize");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa220(param_3,param_2,param_1,puVar1,0,0);
    _objc_release(puVar1);
    if (*(long *)(param_1 + 0x50) != 0) {
      func_0x00010c18b5e0(param_3,param_2,param_1);
    }
    lVar2 = param_1;
    func_0x00010be41440();
    if ((int)lVar2 != 0) {
      func_0x00010beacca0(param_1);
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109204cc4; end: 109204d97; -[SCMapTrayInteractionControllerImpl _tearDownEventHandlingForScrollView:] */

void FUN_109204cc4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"contentOffset");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d580(param_3,param_2,param_1,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"contentSize");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d580(param_3,param_2,param_1,puVar1);
    _objc_release(puVar1);
    lVar2 = param_1;
    func_0x00010be41440();
    if ((int)lVar2 != 0) {
      func_0x00010c12c9c0(param_3,param_2,*(undefined8 *)(param_1 + 0x60));
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109204d98; end: 109204e53; -[SCMapTrayInteractionControllerImpl _isInvisibleTray] */

bool FUN_109204d98(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == puVar3) {
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010bfce3a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar4 == puVar5;
    _objc_release();
    _objc_release(puVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 109204e54; end: 109204f7f; -[SCMapTrayInteractionControllerImpl _setupGestureRecognizers] */

/* WARNING: Possible PIC construction at 0x000109204f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109204f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109204f0c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000109204f34) */

void FUN_109204e54(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c2bc0;
  _objc_alloc();
  func_0x00010c050900();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1ec5c0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c178280(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c18b5a0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c18b5c0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c1c3c20(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c1a60c0(*(undefined8 *)(param_1 + 0x60));
  lVar2 = param_1;
  func_0x00010be41440();
  if ((int)lVar2 != 0) {
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109204f80; end: 109204fe7; -[SCMapTrayInteractionControllerImpl _setupCollapsedTrayTapGesture] */

void FUN_109204f80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x68),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addGestureRecognizer__11259bdb8,
             *(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 109204fe8; end: 10920501f; -[SCMapTrayInteractionControllerImpl _removeCollapsedTrayTapGesture] */

void FUN_109204fe8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010c12c9c0(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 109205020; end: 1092055df; -[SCMapTrayInteractionControllerImpl _setupViewHierarchyInParentViewController:] */

void FUN_109205020(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uStack_108;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c2a6740(*(undefined8 *)(param_3 + 0x100));
  func_0x00010bef7700(param_5);
  func_0x00010bfe4620(param_3);
  func_0x00010bdc3ca0(param_3);
  param_2 = param_2 - param_1;
  uVar24 = 0x4059000000000000;
  dVar25 = param_2 + 100.0;
  func_0x00010bfe4620(param_3);
  uVar20 = uVar24;
  func_0x00010bfe4620(param_3);
  lVar2 = param_3;
  dVar22 = param_2;
  func_0x00010be41440();
  if ((int)lVar2 == 0) {
    ppuVar21 = &PTR__OBJC_CLASS___UIView_1126aec20;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfe4620(param_3);
    func_0x00010bfe4620(param_3);
  }
  else {
    ppuVar21 = &PTR_PTR_1126ddeb8;
    puVar3 = PTR_PTR_1126ddeb8;
    _objc_alloc();
    uVar20 = uVar24;
    dVar22 = param_2;
  }
  func_0x00010c013de0(0,uVar20,dVar22,dVar25);
  uVar20 = *(undefined8 *)(param_3 + 0x28);
  *(undefined **)(param_3 + 0x28) = puVar3;
  _objc_release(uVar20);
  puVar3 = *ppuVar21;
  _objc_alloc();
  func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c013de0();
  uVar20 = *(undefined8 *)(param_3 + 0x30);
  *(undefined **)(param_3 + 0x30) = puVar3;
  _objc_release(uVar20);
  _objc_initWeak(auStack_b8,param_3);
  puVar3 = PTR_PTR_1126ddec0;
  _objc_alloc();
  uVar23 = 0xc2000000;
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x00010c0555e0();
  uVar20 = *(undefined8 *)(param_3 + 0x58);
  *(undefined **)(param_3 + 0x58) = puVar3;
  _objc_release(uVar20);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c14c940(*(undefined8 *)(param_3 + 0x30));
  func_0x00010beace00(param_3);
  uVar24 = *(undefined8 *)(param_3 + 0x30);
  uVar20 = *(undefined8 *)(param_3 + 0x100);
  func_0x00010c29bf00(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(uVar24);
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_3 + 0x100);
  func_0x00010c29bf00(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar20);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar24 = *(undefined8 *)(param_3 + 0x100);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_3 + 0x10);
  func_0x00010bfce3e0();
  if (iVar1 == 0) {
    uStack_108 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_108 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x100);
  uStack_b0 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0x100);
  uStack_a8 = uVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c1408a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0x100);
  uStack_a0 = uVar12;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf1ff80(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_108);
  _objc_release(uVar20);
  _objc_release(uVar24);
  func_0x00010be67380(param_3);
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + 0x28));
  uVar20 = 0;
  func_0x00010c19f0e0(0,uVar23,dVar22,*(undefined8 *)(param_3 + 0x28));
  func_0x00010bf77e80(*(undefined8 *)(param_3 + 0x100));
  func_0x00010beb0c60(param_3);
  func_0x00010be27760(param_3);
  if (*(long *)(param_3 + 0x108) == 2) {
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + 0x28));
  }
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    uVar18 = param_5 + 8;
    _objc_loadWeakRetained();
    uVar19 = uVar18;
    _objc_opt_respondsToSelector();
    _objc_release(uVar18);
    if ((uVar19 & 1) != 0) {
      lVar2 = param_5 + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0ba2c0(uVar20);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1092055e0; end: 109205667;  */

void FUN_1092055e0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar1 = param_2 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_2 + 8;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c0ba2c0(param_1);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109205668; end: 109205927; -[SCMapTrayInteractionControllerImpl _styleViews] */

void FUN_109205668(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + 0x28));
    _objc_release(puVar3);
  }
  else {
    func_0x00010c16e440(*(undefined8 *)(param_2 + 0x28));
  }
  _objc_release(lVar2);
  func_0x00010bf525a0(*(undefined8 *)(param_2 + 0x10));
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  func_0x00010bf525a0(*(undefined8 *)(param_2 + 0x10));
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(uVar4);
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010bf144e0();
  if (lVar2 - 1U < 3) {
    func_0x00010beab040(param_2);
  }
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010bfce380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + 0x38));
    _objc_release(puVar3);
  }
  else {
    func_0x00010c16e440(*(undefined8 *)(param_2 + 0x38));
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010bf144e0();
  puVar5 = PTR_PTR_1126b08d8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar2 != 4) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar4);
    func_0x00010c23ba80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a24(0x4024000000000000,0x3fbeb851e0000000,0,0xc010000000000000,puVar5,uVar4,
                        puVar3);
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b08d8;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a24(0x4010000000000000,0x3fbeb851e0000000,0,0x4000000000000000,puVar3,uVar4,
                        puVar5);
    _objc_release(puVar5);
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
  func_0x00010c229ec0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beaac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupBackgroundShadow_1125884c8);
    return;
  }
  return;
}



/* Entry: 109205928; end: 109205db3; -[SCMapTrayInteractionControllerImpl _setupGripper] */

void FUN_109205928(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x38),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = uVar13;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08e400(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1408a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar13);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x40),param_2,
                      &PTR____CFConstantStringClassReference_110f2cc18);
  lVar12 = *(long *)(param_1 + 0x10);
  func_0x00010bfce3a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x40),param_2,lVar12);
  }
  _objc_release(lVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4008000000000000);
  _objc_release(uVar13);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x40),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493c0(0x4018000000000000,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_a8 = uVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf34860(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf49420(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bed8ea0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  func_0x00010c00ee20();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c29bf00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(uVar14,param_2,puVar11,uVar13);
  _objc_release(uVar13);
  func_0x00010c14c940(puVar11);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109205db4; end: 109205e4b; -[SCMapTrayInteractionControllerImpl _setupBlurEffectWithStyle:] */

void FUN_109205db4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  func_0x00010c00ee20();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(uVar4,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  func_0x00010c14c940(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109205e4c; end: 109205f2b; -[SCMapTrayInteractionControllerImpl _setupBackgroundShadow] */

void FUN_109205e4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x48),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 0x48));
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109205f2c; end: 109206317; -[SCMapTrayInteractionControllerImpl _setupTrayBottomShadow] */

void FUN_109205f2c(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_3 + 0x10);
  func_0x00010c23a9c0();
  if (((int)puVar2 != 0) && (*(long *)(param_3 + 0x50) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfe4620(param_3);
    func_0x00010c013de0(0,0,param_1,0x4014000000000000);
    uVar20 = *(undefined8 *)(param_3 + 0x50);
    *(undefined **)(param_3 + 0x50) = puVar2;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)(param_3 + 0x50));
    lVar3 = *(long *)(param_3 + 0x10);
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_3 + 0x50));
      _objc_release(puVar2);
    }
    else {
      func_0x00010c16e440(*(undefined8 *)(param_3 + 0x50));
    }
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x50));
    func_0x00010bf199c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar20 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar20);
    _objc_release(puVar2);
    lVar3 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3 + 0x18;
    _objc_loadWeakRetained();
    lVar6 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3 + 0x18;
    _objc_loadWeakRetained();
    lVar9 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3 + 0x18;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    param_6 = 3;
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar21);
    _objc_release(uVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(uVar8);
    _objc_release(uVar20);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(uVar5);
    puVar21 = PTR_PTR_1126b08d8;
    uVar20 = *(undefined8 *)(param_3 + 0x50);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0.10000000149011612;
    param_1 = 5.0;
    param_5 = puVar2;
    func_0x000107c30a24(0x4014000000000000,0x3fb99999a0000000,
                        *(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar21,uVar20);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfe4620();
  dVar22 = param_1;
  func_0x00010be67380(puVar2);
  dVar23 = param_2 - dVar22;
  dVar25 = dVar23;
  if (dVar23 <= 0.0) {
    dVar25 = 0.0;
  }
  if ((param_5 != (undefined *)0x2) && (dVar23 = 50.0, dVar25 < 50.0)) {
    *(undefined **)(puVar2 + 0x78) = param_5;
    puVar2[0xf8] = 1;
    return;
  }
  if (param_5 != (undefined *)0x2) {
    func_0x00010bdc5c00(puVar2);
  }
  *(undefined8 *)(puVar2 + 0x78) = 1;
  lVar19 = *(long *)(puVar2 + 200);
  if (lVar19 != 0) {
    (**(code **)(lVar19 + 0x10))(lVar19,0);
  }
  func_0x00010be67380(puVar2);
  dVar24 = dVar23;
  func_0x00010be67380(puVar2);
  if (dVar23 == dVar24) {
    bVar1 = false;
    uVar20 = 0;
    goto LAB_109206560;
  }
  puVar2[0xc3] = 0;
  puVar21 = *(undefined **)(puVar2 + 0x108);
  if (puVar21 == param_5) {
LAB_109206464:
    if (puVar21 == param_5) {
      uVar17 = *(ulong *)(puVar2 + 0x100);
      _objc_opt_respondsToSelector(uVar17,PTR_s_handleMovingBackToCurrentPositio_1125d1fd8);
      if ((uVar17 & 1) != 0) {
        func_0x00010bfd18c0(*(undefined8 *)(puVar2 + 0x100));
      }
    }
  }
  else {
    uVar17 = *(ulong *)(puVar2 + 0x100);
    _objc_opt_respondsToSelector(uVar17,PTR_s_prepareForChangeFromPosition_toP_11261ff50);
    if ((uVar17 & 1) == 0) goto LAB_109206464;
    func_0x00010c1094c0(*(undefined8 *)(puVar2 + 0x100));
  }
  uVar20 = *(undefined8 *)(puVar2 + 0xd0);
  puVar18 = PTR_PTR_1126dde90;
  func_0x00010c2a5be0(PTR_PTR_1126dde90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar20);
  _objc_release(puVar18);
  lVar19 = *(long *)(puVar2 + 0x108);
  *(undefined **)(puVar2 + 0x108) = param_5;
  if ((puVar21 != param_5) && (puVar21 == (undefined *)0x2)) {
    func_0x00010be27760(puVar2);
  }
  func_0x00010c1a7f60(*(undefined8 *)(puVar2 + 0x28));
  puVar21 = puVar2;
  func_0x00010c152980(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(puVar21);
  if (param_5 == (undefined *)0x4) {
    func_0x00010beab8c0();
  }
  else {
    func_0x00010be8bb00(puVar2);
  }
  bVar1 = lVar19 == 2;
  uVar20 = 1;
LAB_109206560:
                    /* WARNING: Could not recover jumptable at 0x00010be25a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,dVar25,dVar22,puVar2,PTR_s__handleAnimationToPosition_wasHi_112567020,
             param_5,bVar1,param_6,uVar20);
  return;
}



/* Entry: 109206318; end: 10920657f; -[SCMapTrayInteractionControllerImpl _moveTrayToPosition:animated:interactionMethod:] */

void FUN_109206318(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  func_0x00010bfe4620();
  dVar7 = param_1;
  func_0x00010be67380(param_3);
  dVar8 = param_2 - dVar7;
  dVar10 = dVar8;
  if (dVar8 <= 0.0) {
    dVar10 = 0.0;
  }
  if ((param_5 != 2) && (dVar8 = 50.0, dVar10 < 50.0)) {
    *(long *)(param_3 + 0x78) = param_5;
    *(undefined1 *)(param_3 + 0xf8) = 1;
    return;
  }
  if (param_5 != 2) {
    func_0x00010bdc5c00(param_3);
  }
  *(undefined8 *)(param_3 + 0x78) = 1;
  lVar2 = *(long *)(param_3 + 200);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
  }
  func_0x00010be67380(param_3);
  dVar9 = dVar8;
  func_0x00010be67380(param_3);
  if (dVar8 == dVar9) {
    bVar1 = false;
    uVar5 = 0;
    goto LAB_109206560;
  }
  *(undefined1 *)(param_3 + 0xc3) = 0;
  lVar2 = *(long *)(param_3 + 0x108);
  if (lVar2 == param_5) {
LAB_109206464:
    if (lVar2 == param_5) {
      uVar3 = *(ulong *)(param_3 + 0x100);
      _objc_opt_respondsToSelector(uVar3,PTR_s_handleMovingBackToCurrentPositio_1125d1fd8);
      if ((uVar3 & 1) != 0) {
        func_0x00010bfd18c0(*(undefined8 *)(param_3 + 0x100));
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_3 + 0x100);
    _objc_opt_respondsToSelector(uVar3,PTR_s_prepareForChangeFromPosition_toP_11261ff50);
    if ((uVar3 & 1) == 0) goto LAB_109206464;
    func_0x00010c1094c0(*(undefined8 *)(param_3 + 0x100));
  }
  uVar5 = *(undefined8 *)(param_3 + 0xd0);
  puVar4 = PTR_PTR_1126dde90;
  func_0x00010c2a5be0(PTR_PTR_1126dde90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  lVar6 = *(long *)(param_3 + 0x108);
  *(long *)(param_3 + 0x108) = param_5;
  if ((lVar2 != param_5) && (lVar2 == 2)) {
    func_0x00010be27760(param_3);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + 0x28));
  lVar2 = param_3;
  func_0x00010c152980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar2);
  if (param_5 == 4) {
    func_0x00010beab8c0();
  }
  else {
    func_0x00010be8bb00(param_3);
  }
  bVar1 = lVar6 == 2;
  uVar5 = 1;
LAB_109206560:
                    /* WARNING: Could not recover jumptable at 0x00010be25a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,dVar10,dVar7,param_3,PTR_s__handleAnimationToPosition_wasHi_112567020,
             param_5,bVar1,param_6,uVar5);
  return;
}



/* Entry: 109206580; end: 1092068eb; -[SCMapTrayInteractionControllerImpl _addAccessoryViewController] */

void FUN_109206580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7,int param_8,int param_9,
                  undefined1 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined **ppuVar20;
  ulong uVar21;
  long lVar22;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined1 uStack_150;
  undefined1 auStack_148 [8];
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_5 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_5 + 0x20);
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      _objc_release();
      if (lVar3 == 0) {
        lVar2 = param_5 + 0x18;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bef7700();
        _objc_release(lVar2);
        lVar2 = param_5 + 0x18;
        _objc_loadWeakRetained(lVar2);
        lVar3 = lVar2;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c29bf00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar3);
        _objc_release(uVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        uVar4 = *(undefined8 *)(param_5 + 0x20);
        lVar2 = param_5 + 0x18;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf77e80(uVar4);
        _objc_release(lVar2);
        uVar4 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c29bf00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c219b60();
        _objc_release(uVar4);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        lVar2 = *(long *)(param_5 + 0x20);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_5 + 0x18;
        _objc_loadWeakRetained();
        lVar6 = lVar3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar5;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_5 + 0x18;
        _objc_loadWeakRetained();
        lVar11 = lVar10;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar4;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_5 + 0x30);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar15;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        param_8 = 3;
        puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        param_7 = puVar18;
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar18);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(uVar4);
        _objc_release(uVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(lVar5);
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  uVar21 = lVar2 + 8;
  _objc_loadWeakRetained();
  uVar19 = uVar21;
  _objc_opt_respondsToSelector();
  _objc_release(uVar21);
  if ((uVar19 & 1) == 0) {
    lVar22 = 0;
  }
  else {
    lVar3 = lVar2 + 8;
    _objc_loadWeakRetained();
    lVar22 = lVar3;
    func_0x00010c0ba280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_initWeak(auStack_148,lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_109206b90;
  puStack_168 = &UNK_110ae1918;
  _objc_copyWeak(auStack_160,auStack_148);
  ppuVar20 = &puStack_180;
  puStack_158 = param_7;
  uStack_150 = param_10;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(lVar2 + 200);
  *(undefined ***)(lVar2 + 200) = ppuVar20;
  _objc_release(uVar4);
  puStack_1c8 = puVar1;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_109206c70;
  puStack_1b0 = &UNK_110ad6190;
  lStack_1a8 = lVar2;
  uStack_198 = param_4;
  uStack_190 = param_1;
  uStack_188 = param_2;
  _objc_retain(lVar22);
  ppuVar20 = &puStack_1c8;
  lStack_1a0 = lVar22;
  _objc_retainBlock();
  if (param_9 == 0) {
    (*(code *)ppuVar20[2])(ppuVar20);
    (**(code **)(*(long *)(lVar2 + 200) + 0x10))(*(long *)(lVar2 + 200),1);
  }
  else if (param_7 == (undefined *)0x2) {
    func_0x00010bf03440(0x3fc999999999999a,0);
  }
  else {
    func_0x00010bf03460(0x3fe0000000000000,0,0x3fe6666660000000,0x3fe0000000000000,
                        PTR__OBJC_CLASS___UIView_1126aec20);
  }
  if (param_8 != 0) {
    uVar21 = *(ulong *)(lVar2 + 0x20);
    if ((uVar21 != 0) &&
       (_objc_opt_respondsToSelector(uVar21,PTR_s_handleTrayWillMoveToInitialPosit_1125d2590),
       (uVar21 & 1) != 0)) {
      func_0x00010bfd2fa0(*(undefined8 *)(lVar2 + 0x20));
    }
    lVar3 = lVar2;
    func_0x00010c152980(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    func_0x00010bee2980(lVar2);
    _objc_release(lVar3);
  }
  if (param_7 == (undefined *)0x2) {
    func_0x00010c1a7f60(*(undefined8 *)(lVar2 + 0x48));
    func_0x00010c1a7f60(*(undefined8 *)(lVar2 + 0x50));
  }
  _objc_release(ppuVar20);
  _objc_release(lStack_1a0);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_148);
  _objc_release(lVar22);
  return;
}



/* Entry: 1092068ec; end: 109206b8f; -[SCMapTrayInteractionControllerImpl _handleAnimationToPosition:wasHidden:animated:hostSize:trayHeight:trayY:trayPositionChanged:] */

void FUN_1092068ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,int param_8,int param_9,
                  undefined1 param_10)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [8];
  
  uVar5 = param_5 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar2 & 1) == 0) {
    lVar7 = 0;
  }
  else {
    lVar3 = param_5 + 8;
    _objc_loadWeakRetained();
    lVar7 = lVar3;
    func_0x00010c0ba280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_initWeak(auStack_88,param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_109206b90;
  puStack_a8 = &UNK_110ae1918;
  _objc_copyWeak(auStack_a0,auStack_88);
  ppuVar4 = &puStack_c0;
  lStack_98 = param_7;
  uStack_90 = param_10;
  _objc_retainBlock();
  uVar6 = *(undefined8 *)(param_5 + 200);
  *(undefined ***)(param_5 + 200) = ppuVar4;
  _objc_release(uVar6);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_109206c70;
  puStack_f0 = &UNK_110ad6190;
  lStack_e8 = param_5;
  uStack_d8 = param_4;
  uStack_d0 = param_1;
  uStack_c8 = param_2;
  _objc_retain(lVar7);
  ppuVar4 = &puStack_108;
  lStack_e0 = lVar7;
  _objc_retainBlock();
  if (param_9 == 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
    (**(code **)(*(long *)(param_5 + 200) + 0x10))(*(long *)(param_5 + 200),1);
  }
  else if (param_7 == 2) {
    func_0x00010bf03440(0x3fc999999999999a,0);
  }
  else {
    func_0x00010bf03460(0x3fe0000000000000,0,0x3fe6666660000000,0x3fe0000000000000,
                        PTR__OBJC_CLASS___UIView_1126aec20);
  }
  if (param_8 != 0) {
    uVar5 = *(ulong *)(param_5 + 0x20);
    if ((uVar5 != 0) &&
       (_objc_opt_respondsToSelector(uVar5,PTR_s_handleTrayWillMoveToInitialPosit_1125d2590),
       (uVar5 & 1) != 0)) {
      func_0x00010bfd2fa0(*(undefined8 *)(param_5 + 0x20));
    }
    lVar3 = param_5;
    func_0x00010c152980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    func_0x00010bee2980(param_5);
    _objc_release(lVar3);
  }
  if (param_7 == 2) {
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + 0x48));
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + 0x50));
  }
  _objc_release(ppuVar4);
  _objc_release(lStack_e0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar7);
  return;
}



/* Entry: 109206b90; end: 109206c6f;  */

void FUN_109206b90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((*(char *)(param_1 + 0x30) == '\x01' && lVar1 != 0) &&
     (lVar4 = *(long *)(lVar1 + 0x108), lVar4 == *(long *)(param_1 + 0x28))) {
    if (lVar4 == 2) {
      func_0x00010c1a7f60(*(undefined8 *)(lVar1 + 0x28),param_2,1);
      func_0x00010c12c8e0(*(undefined8 *)(lVar1 + 0x20));
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar2);
      func_0x00010bf77e80(*(undefined8 *)(lVar1 + 0x20),param_2,0);
      lVar4 = *(long *)(param_1 + 0x28);
    }
    uVar2 = *(undefined8 *)(lVar1 + 0xd0);
    puVar3 = PTR_PTR_1126dde90;
    func_0x00010bf73720(PTR_PTR_1126dde90,param_2,lVar1,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(lVar1 + 200);
    *(undefined8 *)(lVar1 + 200) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109206c70; end: 109206d6f;  */

void FUN_109206c70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_60 = uVar7;
  uStack_58 = uVar3;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  uStack_40 = uVar2;
  uStack_38 = uVar4;
  func_0x00010c219960();
  _objc_release(uVar1);
  uStack_60 = uVar7;
  uStack_58 = uVar3;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  uStack_40 = uVar2;
  uStack_38 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,&uStack_60);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = uVar7;
  uStack_58 = uVar3;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  uStack_40 = uVar2;
  uStack_38 = uVar4;
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  func_0x00010c19f0e0(0,uVar1,uVar7,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  return;
}



/* Entry: 109206d70; end: 109206e2f; -[SCMapTrayInteractionControllerImpl _updateTrayBottomShadowForOffset:] */

void FUN_109206d70(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  
  if (*(long *)(param_5 + 0x50) != 0) {
    lVar1 = param_5;
    dVar2 = param_2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4d5e0();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c152980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befda00();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c152980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_5 + 0x50),PTR_s_setHidden__1126479f8,
               (dVar2 + param_3) - param_4 <= param_2 && 0.0 < param_2);
    return;
  }
  return;
}



/* Entry: 109206e30; end: 109206ecb; -[SCMapTrayInteractionControllerImpl _updateGripperForOffset:] */

void FUN_109206e30(undefined8 param_1,double param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  iVar1 = (int)*(undefined8 *)(param_3 + 0x10);
  func_0x00010c2862c0();
  if (iVar1 != 0) {
    param_2 = param_2 / 18.0;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    dVar3 = 1.0;
    if (param_2 <= 1.0) {
      dVar3 = param_2;
    }
    func_0x00010c1677c0(dVar3,*(undefined8 *)(param_3 + 0x38));
    iVar1 = (int)*(undefined8 *)(param_3 + 0x10);
    func_0x00010bfce3c0();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800((float)dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 109206ecc; end: 10920700b; -[SCMapTrayInteractionControllerImpl _updateTrayVerticalTransform:] */

void FUN_109206ecc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _CGAffineTransformMakeTranslation(&uStack_80,0,param_1);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  dStack_a0 = (double)uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(param_2 + 0x28));
  _CGAffineTransformMakeTranslation(&uStack_e0,0,param_1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  dStack_a0 = dStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  func_0x00010c219960();
  _objc_release(uVar1);
  dVar5 = dStack_d0;
  func_0x00010bfe4620(param_2);
  dVar6 = dVar5;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x28));
  uVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    dVar5 = dVar5 - dVar6;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    lVar4 = param_2 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0ba2a0(dVar5);
    _objc_release(lVar4);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(uVar1);
  return;
}



/* Entry: 10920700c; end: 10920718b; -[SCMapTrayInteractionControllerImpl _absoluteOffsetForPosition:] */

double FUN_10920700c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double unaff_d9;
  
  func_0x00010bfe4620();
  if (7 < param_5) {
    if (param_5 == 8) {
      uVar1 = param_3 + 8;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        param_3 = param_3 + 8;
        _objc_loadWeakRetained(param_3);
        func_0x00010c27b300();
        _objc_release(param_3);
        return param_2 - param_1 * param_2;
      }
      dVar3 = -0.5;
    }
    else {
      if (param_5 != 0x10) {
        return unaff_d9;
      }
      uVar1 = param_3 + 8;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        param_3 = param_3 + 8;
        _objc_loadWeakRetained(param_3);
        func_0x00010c27b2e0();
        _objc_release(param_3);
        return param_1;
      }
      dVar3 = -0.8500000238418579;
    }
    return param_2 + dVar3 * param_2;
  }
  if (param_5 - 1U < 2) {
    dVar3 = 50.0;
  }
  else {
    if (param_5 != 4) {
      return unaff_d9;
    }
    uVar1 = param_3 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      param_3 = param_3 + 8;
      _objc_loadWeakRetained(param_3);
      func_0x00010c27b1a0();
      _objc_release(param_3);
      return param_2 - param_1;
    }
    dVar3 = -100.0;
  }
  return param_2 + dVar3;
}



/* Entry: 10920718c; end: 109207223; -[SCMapTrayInteractionControllerImpl _offsetForPosition:] */

double FUN_10920718c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bdc3ca0();
  dVar2 = param_1;
  dVar3 = param_1;
  if (((*(byte *)(param_3 + 0xe0) & 1) != 0) ||
     ((param_5 == 0x10 && (lVar1 = param_3, func_0x00010bf11d80(), (int)lVar1 != 0)))) {
    func_0x00010bfe4620(param_3);
    lVar1 = param_3;
    dVar3 = param_2;
    func_0x00010c152980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4d5e0();
    func_0x00010bf201c0(*(undefined8 *)(param_3 + 0x10));
    dVar3 = (param_2 - dVar3) - dVar2;
    _objc_release(lVar1);
    if (dVar3 <= param_1) {
      dVar3 = param_1;
    }
  }
  return dVar3;
}



/* Entry: 109207224; end: 109207273; -[SCMapTrayInteractionControllerImpl _getNeighboringPositionForPosition:yVelocity:] */

ulong FUN_109207224(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_4;
  while( true ) {
    bVar1 = true;
    bVar2 = false;
    if (uVar3 == 2) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 0.0;
        bVar2 = false;
      }
    }
    if ((bVar1 == bVar2) || (param_1 < 0.0 && uVar3 == 0x10)) break;
    uVar4 = uVar3 >> 1;
    uVar3 = uVar3 << 1;
    if (0.0 <= param_1) {
      uVar3 = uVar4;
    }
    if ((*(ulong *)(param_2 + 0x110) & uVar3) != 0) {
      return uVar3;
    }
  }
  return param_4;
}



/* Entry: 109207274; end: 1092073bb; -[SCMapTrayInteractionControllerImpl _getNearestPositionToTrayY:] */

ulong FUN_109207274(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(ulong *)(param_2 + 0x108);
  dVar9 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111183908;
  func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111183908,param_3,&uStack_130,auStack_e8,
                      0x10);
  if (ppuVar1 != (undefined **)0x0) {
    lVar7 = *plStack_120;
    dVar10 = 1.79769313486232e+308;
    do {
      ppuVar8 = (undefined **)0x0;
      uVar3 = uVar6;
      dVar11 = dVar10;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183908);
        }
        uVar2 = *(ulong *)(lStack_128 + (long)ppuVar8 * 8);
        func_0x00010c2827c0();
        if ((uVar2 == *(ulong *)(param_2 + 0x108)) ||
           (uVar6 = uVar3, dVar10 = dVar11, (*(ulong *)(param_2 + 0x110) & uVar2) != 0)) {
          func_0x00010bdc3ca0(param_2,param_3,uVar2);
          dVar9 = ABS(param_1 - dVar9);
          uVar6 = uVar2;
          dVar10 = dVar9;
          if (dVar11 <= dVar9) {
            uVar6 = uVar3;
            dVar10 = dVar11;
          }
        }
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        uVar3 = uVar6;
        dVar11 = dVar10;
      } while (ppuVar1 != ppuVar8);
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111183908;
      func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111183908,param_3,&uStack_130,
                          auStack_e8,0x10);
    } while (ppuVar1 != (undefined **)0x0);
  }
  uVar3 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar4 = (uint)*(undefined8 *)(uVar3 + 0x110);
    if ((uVar4 >> 1 & 1) == 0) {
      if ((uVar4 >> 2 & 1) == 0) {
        if ((uVar4 >> 3 & 1) == 0) {
          if ((uVar4 >> 4 & 1) == 0) {
            return uVar3;
          }
          uVar5 = 0x10;
        }
        else {
          uVar5 = 8;
        }
      }
      else {
        uVar5 = 4;
      }
    }
    else {
      uVar5 = 2;
    }
    *(undefined8 *)(uVar3 + 0x88) = uVar5;
    return uVar3;
  }
  return uVar6;
}



/* Entry: 1092073bc; end: 1092073f3; -[SCMapTrayInteractionControllerImpl _setPositionForMinTrayHeight] */

void FUN_1092073bc(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x110);
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 >> 4 & 1) == 0) {
          return;
        }
        uVar2 = 0x10;
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 2;
  }
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  return;
}



/* Entry: 1092073f4; end: 1092074cf; -[SCMapTrayInteractionControllerImpl _setupAutoSizeTimer] */

void FUN_1092073f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bdda4a0();
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c150360(0x3fa999999999999a);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1092074d0; end: 109207503;  */

void FUN_1092074d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be261e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109207504; end: 10920754b; -[SCMapTrayInteractionControllerImpl _handleAutoSizeTimerFire] */

void FUN_109207504(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 == 1) {
      lVar1 = *(long *)(param_1 + 0x108);
    }
    func_0x00010be61560(param_1,param_2,lVar1,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdda4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelAutoSizeTimer_1125542c8);
  return;
}



/* Entry: 10920754c; end: 109207577; -[SCMapTrayInteractionControllerImpl _cancelAutoSizeTimer] */

void FUN_10920754c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0xe8));
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109207578; end: 109207aa7; -[SCMapTrayInteractionControllerImpl _panGestureUpdated:] */

void FUN_109207578(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  double dVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_7);
  lVar3 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_7);
  dVar11 = param_1;
  dVar14 = param_2;
  _objc_release(lVar4);
  _objc_release(lVar3);
  *(double *)(param_5 + 0xa0) = param_2;
  uVar5 = param_5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_7);
  dVar13 = dVar14;
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_7;
  func_0x00010c252440();
  if (lVar3 == 1) {
    dVar14 = *(double *)PTR__CGAffineTransformIdentity_110347008;
    uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(uVar5);
    func_0x00010c219960(*(undefined8 *)(param_5 + 0x28));
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c29bf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar6);
    *(undefined8 *)(param_5 + 0xb0) = 0;
    *(undefined1 *)(param_5 + 0xc0) = 1;
    *(undefined2 *)(param_5 + 0xc2) = 0;
    *(undefined1 *)(param_5 + 0xc4) = 0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x28));
    *(double *)(param_5 + 0xb8) = dVar14;
    uVar7 = uVar5;
    func_0x00010c262ca0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar7);
    dVar14 = dVar14 + 30.0;
    uVar7 = uVar5;
    func_0x00010c262ca0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_7;
    func_0x00010c09ef00();
    iVar2 = (int)lVar3;
    _CGRectContainsPoint(uVar10);
    _objc_release(uVar7);
    func_0x00010bf4d5e0(uVar5);
    dVar11 = dVar14;
    func_0x00010bf4c7c0(uVar5);
    func_0x00010bfb68e0(uVar5);
    if (((iVar2 == 0) || ((*(byte *)(param_5 + 0xe0) & 1) != 0)) || (dVar14 + param_3 <= param_4)) {
      func_0x00010c1f7b20(uVar5);
      *(undefined1 *)(param_5 + 0xc1) = 1;
    }
    else {
      *(undefined1 *)(param_5 + 0xc1) = 0;
      func_0x00010bf4cdc0(uVar5);
      *(double *)(param_5 + 0xa8) = dVar11;
    }
    uVar7 = *(ulong *)(param_5 + 0x100);
    _objc_opt_respondsToSelector(uVar7,PTR_s_handleIsBeingPanned__1125d1ee8);
    if ((uVar7 & 1) != 0) {
      func_0x00010bfd1500(*(undefined8 *)(param_5 + 0x100));
    }
    goto LAB_109207a78;
  }
  lVar3 = param_7;
  func_0x00010c252440();
  if (lVar3 == 2) {
    *(undefined1 *)(param_5 + 0xc4) = 1;
    if ((*(byte *)(param_5 + 0xc2) & 1) == 0) {
      if (ABS(param_2) <= 10.0) {
        if (10.0 < ABS(param_1)) {
          func_0x00010c195460(*(undefined8 *)(param_5 + 0x60));
          func_0x00010c195460(*(undefined8 *)(param_5 + 0x60));
          goto LAB_109207a78;
        }
      }
      else {
        *(undefined1 *)(param_5 + 0xc2) = 1;
      }
    }
    uVar7 = uVar5;
    func_0x00010c07d3e0();
    if (((uVar7 & 1) == 0) && (*(char *)(param_5 + 0xc1) == '\x01')) {
      dVar14 = *(double *)(param_5 + 0x98);
      dVar11 = *(double *)(param_5 + 0xa0);
      dVar13 = dVar11 + *(double *)(param_5 + 0xb8);
      if (dVar13 < dVar14) {
        dVar11 = (dVar14 - *(double *)(param_5 + 0xb8)) -
                 (1.0 - 1.0 / (((dVar14 - dVar13) * 0.55) / 320.0 + 1.0)) * 320.0;
      }
      func_0x00010bee29e0(dVar11,param_5);
    }
    goto LAB_109207a78;
  }
  lVar3 = param_7;
  func_0x00010c252440();
  if ((lVar3 != 3) && (lVar3 = param_7, func_0x00010c252440(), lVar3 != 4)) goto LAB_109207a78;
  *(undefined1 *)(param_5 + 0xc0) = 0;
  uVar7 = *(ulong *)(param_5 + 0x108);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x28));
  uVar6 = *(undefined8 *)(param_5 + 0xd0);
  puVar8 = PTR_PTR_1126dde90;
  dVar12 = dVar13;
  func_0x00010c2a5be0(PTR_PTR_1126dde90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6);
  _objc_release(puVar8);
  if ((*(byte *)(param_5 + 0xc4) & 1) == 0) {
    dVar11 = ABS(dVar14);
    dVar12 = 200.0;
    if (dVar11 < 200.0) goto LAB_1092078d8;
LAB_1092078c0:
    uVar7 = param_5;
    func_0x00010be20b60();
    dVar11 = dVar14;
  }
  else {
LAB_1092078d8:
    if (*(char *)(param_5 + 0xc1) == '\x01') {
      uVar7 = param_5;
      dVar11 = dVar13;
      func_0x00010be20b40();
      func_0x00010be67380(param_5);
      dVar1 = dVar12;
      if (dVar11 < dVar13) {
        dVar12 = 200.0;
        dVar1 = 200.0;
        if (200.0 <= dVar14) goto LAB_1092078c0;
      }
      dVar12 = dVar1;
      if ((dVar13 < dVar11) && (dVar11 = -200.0, dVar14 <= -200.0)) goto LAB_1092078c0;
    }
  }
  uVar9 = *(ulong *)(param_5 + 0x100);
  _objc_opt_respondsToSelector(uVar9,PTR_s_handleIsBeingPanned__1125d1ee8);
  if ((uVar9 & 1) != 0) {
    func_0x00010bfd1500(*(undefined8 *)(param_5 + 0x100));
  }
  if (uVar7 == *(ulong *)(param_5 + 0x108)) {
    func_0x00010be67380(param_5);
    dVar12 = 1.1920928955078125e-07;
    if (1.1920928955078125e-07 <= ABS(dVar13 - dVar11)) goto LAB_10920799c;
    uVar7 = *(ulong *)(param_5 + 0x100);
    _objc_opt_respondsToSelector(uVar7,PTR_s_handleMovingBackToCurrentPositio_1125d1fd8);
    if ((uVar7 & 1) != 0) {
      func_0x00010bfd18c0(*(undefined8 *)(param_5 + 0x100));
    }
  }
  else {
LAB_10920799c:
    func_0x00010be61560(param_5);
    func_0x00010bf4cdc0(uVar5);
    *(double *)(param_5 + 0xa8) = dVar12;
    *(undefined1 *)(param_5 + 0xc3) = 1;
  }
  func_0x00010c1f7b20(uVar5);
  if (*(char *)(param_5 + 0xe0) == '\x01') {
    *(undefined1 *)(param_5 + 0xc3) = 0;
  }
LAB_109207a78:
  _objc_release(uVar5);
  _objc_release(param_7);
  return;
}



/* Entry: 109207aa8; end: 109207ae7; -[SCMapTrayInteractionControllerImpl _handleGripperTapped:] */

void FUN_109207aa8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x100);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleGripperAreaTapped_1125d1e70);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd1330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x100),PTR_s_handleGripperAreaTapped_1125d1e70);
    return;
  }
  return;
}



/* Entry: 109207ae8; end: 109207b2b; -[SCMapTrayInteractionControllerImpl _handleCollapsedTrayTapped:] */

void FUN_109207ae8(long param_1,undefined8 param_2)

{
  func_0x00010c219f00(param_1,param_2,0x10 - (*(ulong *)(param_1 + 0x110) & 8),1);
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010be8bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeCollapsedTrayTapGesture_112580860);
  return;
}



/* Entry: 109207b2c; end: 109207b33; -[SCMapTrayInteractionControllerImpl gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_109207b2c(void)

{
  return 1;
}



/* Entry: 109207b34; end: 109207b5b; -[SCMapTrayInteractionControllerImpl scrollViewDidEndDecelerating:] */

void FUN_109207b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf4cdc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bee2990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTrayBottomShadowForOffset_112596408);
  return;
}



/* Entry: 109207b5c; end: 109207e53; -[SCMapTrayInteractionControllerImpl _handleScrollViewScroll:userIsTracking:] */

void FUN_109207b5c(undefined8 param_1,double param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  
  if ((param_6 & 1) == 0) {
    if (param_2 < 0.0) {
      _CGAffineTransformMakeTranslation(&uStack_80,0,param_2);
      lVar4 = param_4;
      func_0x00010c152980(param_4);
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      dStack_88 = dStack_58;
      uStack_90 = uStack_60;
      func_0x00010c219960();
      _objc_release(lVar4);
      func_0x00010bee29e0(-param_2,param_4);
    }
    func_0x00010bed8ea0(param_1,param_2,param_4);
    return;
  }
  if ((*(byte *)(param_4 + 0xc1) & 1) != 0) {
    dVar7 = param_2;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + 0x28));
    if (dVar7 < *(double *)(param_4 + 0x98)) {
      *(undefined1 *)(param_4 + 0xc5) = 1;
      uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar5 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      dVar7 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      uStack_b0 = uVar5;
      uStack_a8 = uVar8;
      uStack_a0 = uVar9;
      uStack_98 = uVar11;
      uStack_90 = uVar6;
      dStack_88 = dVar7;
      func_0x00010c219960(*(undefined8 *)(param_4 + 0x28),param_5,&uStack_b0);
      uVar3 = *(undefined8 *)(param_4 + 0x20);
      func_0x00010c29bf00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = uVar5;
      uStack_a8 = uVar8;
      uStack_a0 = uVar9;
      uStack_98 = uVar11;
      uStack_90 = uVar6;
      dStack_88 = dVar7;
      func_0x00010c219960();
      _objc_release(uVar3);
      *(undefined1 *)(param_4 + 0xc5) = 0;
      uVar3 = *(undefined8 *)(param_4 + 0x98);
      func_0x00010bfb68e0(*(undefined8 *)(param_4 + 0x28));
      func_0x00010bfb68e0(*(undefined8 *)(param_4 + 0x28));
      func_0x00010c19f0e0(0,uVar3,param_3,*(undefined8 *)(param_4 + 0x28));
      *(undefined8 *)(param_4 + 0x108) = *(undefined8 *)(param_4 + 0x80);
      *(undefined1 *)(param_4 + 0xc1) = 0;
      if (1.1920928955078125e-07 < ABS(*(double *)(param_4 + 0xb8) - *(double *)(param_4 + 0x98))) {
        *(undefined8 *)(param_4 + 0xb0) = *(undefined8 *)(param_4 + 0xa0);
      }
      *(double *)(param_4 + 0xb8) = *(double *)(param_4 + 0x98);
    }
    goto LAB_109207d68;
  }
  dVar7 = param_2;
  if ((0.0 <= param_2) ||
     ((*(long *)(param_4 + 0x28) != 0 && (func_0x00010c27a460(&uStack_b0), dStack_88 != 0.0)))) {
    if (param_2 <= 0.0) goto LAB_109207d68;
    if (*(long *)(param_4 + 0x28) == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      dStack_88 = 0.0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uVar3 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_b0);
      if (dStack_88 != 0.0) goto LAB_109207d68;
      uVar3 = *(undefined8 *)(param_4 + 0x28);
    }
    func_0x00010bfb68e0(uVar3);
    if ((dVar7 <= *(double *)(param_4 + 0x98)) ||
       ((*(ulong *)(param_4 + 0x108) & *(ulong *)(param_4 + 0x90)) != 0)) goto LAB_109207d68;
  }
  *(undefined1 *)(param_4 + 0xc1) = 1;
LAB_109207d68:
  if (*(char *)(param_4 + 0xc1) == '\x01') {
    *(undefined1 *)(param_4 + 0xc5) = 1;
    dVar12 = *(double *)(param_4 + 0xa0);
    dVar7 = ABS(*(double *)(param_4 + 0xb8) - *(double *)(param_4 + 0x98));
    param_2 = *(double *)(param_4 + 0xa8);
    dVar10 = 1.1920928955078125e-07;
    if (dVar7 < 1.1920928955078125e-07) {
      dVar7 = param_2 + *(double *)(param_4 + 0xb0);
      dVar12 = dVar12 - dVar7;
      param_2 = 0.0;
    }
    iVar2 = (int)*(undefined8 *)(param_4 + 0x10);
    func_0x00010c078d20();
    dVar13 = dVar12;
    if (iVar2 != 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_4 + 0x28));
      func_0x00010be67380(param_4,param_5,*(undefined8 *)(param_4 + 0x88));
      bVar1 = false;
      if ((dVar7 < dVar12 + dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar7))) {
        bVar1 = dVar10 == dVar7;
      }
      dVar13 = 0.0;
      if (!bVar1) {
        dVar13 = dVar12;
      }
    }
    lVar4 = param_4;
    func_0x00010c152980(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(param_1,param_2);
    _objc_release(lVar4);
    *(undefined1 *)(param_4 + 0xc5) = 0;
    func_0x00010bee29e0(dVar13,param_4);
  }
  func_0x00010bed8ea0(param_1,param_2,param_4);
  func_0x00010bee2980(param_1,param_2,param_4);
  return;
}



/* Entry: 109207e54; end: 109207fc7; -[SCMapTrayInteractionControllerImpl _handleContentSizeChanged] */

void FUN_109207e54(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = param_5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  dVar4 = *(double *)(param_5 + 0xf0);
  if (dVar4 == param_2) goto LAB_109207f7c;
  dVar8 = param_2;
  func_0x00010bfe4620(param_5);
  dVar7 = dVar8;
  func_0x00010bdc3ca0(param_5,param_6,*(undefined8 *)(param_5 + 0x80));
  dVar8 = dVar8 - dVar4;
  func_0x00010bf4c7c0(lVar1);
  lVar2 = param_5;
  dVar5 = dVar4;
  func_0x00010bf11d60();
  func_0x00010bf201c0(*(undefined8 *)(param_5 + 0x10));
  if (dVar8 <= param_2) {
    *(undefined1 *)(param_5 + 0xe0) = 0;
    lVar3 = param_5;
    func_0x00010be41440();
    dVar6 = 0.0;
    if ((int)lVar3 == 0) {
      dVar6 = 100.0;
    }
    dVar8 = (param_2 - dVar8) + dVar5;
    if (dVar5 + dVar6 <= dVar8) {
      dVar8 = dVar5 + dVar6;
    }
  }
  else {
    *(char *)(param_5 + 0xe0) = (char)lVar2;
    dVar8 = dVar5;
  }
  func_0x00010c181f80(dVar4,dVar7,dVar8,param_4,lVar1);
  func_0x00010be67380(param_5,param_6,*(undefined8 *)(param_5 + 0x80));
  *(double *)(param_5 + 0x98) = dVar4;
  if ((int)lVar2 != 0) {
    if (*(char *)(param_5 + 0xf8) == '\x01') {
      *(undefined1 *)(param_5 + 0xf8) = 0;
    }
    else if (*(double *)(param_5 + 0xf0) <= param_2) {
      if (((*(double *)(param_5 + 0xf0) < param_2) && (*(long *)(param_5 + 200) != 0)) &&
         (*(long *)(param_5 + 0xe8) == 0)) {
        func_0x00010be61560(param_5,param_6,*(undefined8 *)(param_5 + 0x108),1,0);
      }
      goto LAB_109207f78;
    }
    func_0x00010beaab40(param_5);
  }
LAB_109207f78:
  *(double *)(param_5 + 0xf0) = param_2;
LAB_109207f7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109207fc8; end: 1092081cf; -[SCMapTrayInteractionControllerImpl observeValueForKeyPath:ofObject:change:context:] */

void FUN_109207fc8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  if (param_6 == uVar1) {
    if ((*(byte *)(param_3 + 0xc5) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,"contentOffset");
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_5;
      func_0x00010c0720c0(param_5,param_4,puVar2);
      _objc_release(puVar2);
      if ((int)uVar5 != 0) {
        uVar3 = uVar1;
        func_0x00010c081660();
        if (((uVar3 & 1) == 0) && (*(char *)(param_3 + 0xc3) == '\x01')) {
          *(undefined1 *)(param_3 + 0xc3) = 0;
          *(undefined1 *)(param_3 + 0xc5) = 1;
          uVar5 = *(undefined8 *)(param_3 + 0xa8);
          func_0x00010c182300(0,uVar5,uVar1,param_4,0);
          func_0x00010bed8ea0(0,uVar5,param_3);
          *(undefined1 *)(param_3 + 0xc5) = 0;
          goto LAB_1092081ac;
        }
        goto LAB_109208078;
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,"contentSize");
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0720c0(param_5,param_4,puVar2);
    if ((int)uVar5 == 0) {
      _objc_release(puVar2);
    }
    else {
      if (*(long *)(param_3 + 0x108) == 2) {
        lVar4 = *(long *)(param_3 + 0x78);
        _objc_release(puVar2);
        if (lVar4 == 1) goto LAB_1092081ac;
      }
      else {
        _objc_release(puVar2);
      }
      func_0x00010be27760(param_3);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,&UNK_10f55d67c);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0720c0(param_5,param_4,puVar2);
    _objc_release(puVar2);
    if ((int)uVar5 == 0) goto LAB_1092081ac;
    if (*(long *)(param_3 + 0xd8) != 0) {
      func_0x00010becad40(param_3);
    }
    func_0x00010beac720(param_3,param_4,uVar1);
LAB_109208078:
    func_0x00010bf4cdc0(uVar1);
    uVar3 = uVar1;
    func_0x00010c081660(uVar1);
    func_0x00010be2faa0(param_1,param_2,param_3,param_4,uVar3);
  }
LAB_1092081ac:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1092081d0; end: 1092081d7; -[SCMapTrayInteractionControllerImpl trayViewController] */

undefined8 FUN_1092081d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1092081d8; end: 1092081df; -[SCMapTrayInteractionControllerImpl currentPosition] */

undefined8 FUN_1092081d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1092081e0; end: 1092081e7; -[SCMapTrayInteractionControllerImpl possibleInteractivePositions] */

undefined8 FUN_1092081e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1092081e8; end: 1092082db; -[SCMapTrayInteractionControllerImpl .cxx_destruct] */

void FUN_1092081e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1092082dc; end: 1092083ef; -[SCMapTrayObserver initWithTrayView:heightChanged:] */

undefined1 *
FUN_1092082dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112701048;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1092083f0; end: 1092084e7; -[SCMapTrayObserver tick:] */

void FUN_1092083f0(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [40];
  double dStack_58;
  
  lVar1 = param_5;
  func_0x00010c27b720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    func_0x00010c08cdc0(lVar2);
    func_0x00010bfb68e0(lVar1);
    func_0x00010c27a460(auStack_80,lVar1);
    func_0x00010bf20c00(lVar2);
    lVar3 = param_5;
    func_0x00010bfe06c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      param_4 = param_4 - (param_2 + dStack_58);
      if (param_4 <= 0.0) {
        param_4 = 0.0;
      }
      func_0x00010bfe06c0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_4);
      _objc_release(param_5);
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}


