/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b094914; end: 10b0949a3; -[SCRootContainer onUIDidAppear:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_onUIDidAppear_appearance__112617718;
  puStack_38 = PTR_PTR_112705558;
  lStack_40 = param_1;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3,param_4);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11278c530));
  func_0x00010bf77840(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0949a4; end: 10b094ae3; -[SCRootContainer leafAskedToActivateButAlreadyActive:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0949a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141560();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar5 = (long)_DAT_11278c52c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      _objc_retain(param_4);
      func_0x00010bf84b00(uVar4);
      _objc_release(param_4);
      goto LAB_10b094ac4;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
LAB_10b094ac4:
  _objc_release(param_4);
  return;
}



/* Entry: 10b094ae4; end: 10b094afb;  */

void FUN_10b094ae4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b094af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10b094afc; end: 10b094c3f; -[SCRootContainer containerVC:viewWillDisappearAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094afc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 != param_1) && (puVar2 = puVar1, func_0x00010c06b700(), (int)puVar2 != 0)) {
    puVar2 = puVar1;
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c290d00();
    if (((ulong)puVar3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + _DAT_11278c524);
      func_0x00010c0817c0();
      _objc_release(puVar2);
      if ((uVar4 & 1) != 0) goto LAB_10b094c28;
      puVar2 = PTR_PTR_1126df5c0;
      _objc_alloc(PTR_PTR_1126df5c0);
      func_0x00010bff2e00();
      func_0x00010c2a5ec0(puVar1,param_2,puVar2);
      puVar3 = PTR_PTR_1126df5d0;
      uVar7 = *(undefined8 *)(param_1 + _DAT_11278c528);
      puVar5 = PTR_PTR_1126df5d8;
      _objc_alloc(PTR_PTR_1126df5d8);
      puVar6 = puVar1;
      func_0x00010c0f0be0(puVar1);
      func_0x00010c039600(puVar5,param_2,puVar6,0,0,puVar2,0,0);
      func_0x00010c2a7020(puVar3,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar7,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
LAB_10b094c28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b094c40; end: 10b094d83; -[SCRootContainer containerVC:viewDidDisappearAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094c40(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 != param_1) && (puVar2 = puVar1, func_0x00010c06b700(), (int)puVar2 != 0)) {
    puVar2 = puVar1;
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c290d00();
    if (((ulong)puVar3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + _DAT_11278c524);
      func_0x00010c0817c0();
      _objc_release(puVar2);
      if ((uVar4 & 1) != 0) goto LAB_10b094d6c;
      puVar2 = PTR_PTR_1126df5c0;
      _objc_alloc(PTR_PTR_1126df5c0);
      func_0x00010bff2e00();
      func_0x00010bf74aa0(puVar1,param_2,puVar2);
      puVar3 = PTR_PTR_1126df5d0;
      uVar7 = *(undefined8 *)(param_1 + _DAT_11278c528);
      puVar5 = PTR_PTR_1126df5d8;
      _objc_alloc(PTR_PTR_1126df5d8);
      puVar6 = puVar1;
      func_0x00010c0f0be0(puVar1);
      func_0x00010c039600(puVar5,param_2,puVar6,0,0,puVar2,0,0);
      func_0x00010bf7dac0(puVar3,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar7,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
LAB_10b094d6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b094d84; end: 10b094e0f; -[SCRootContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094d84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278c53c);
  _objc_storeStrong(param_1 + _DAT_11278c534,0);
  _objc_storeStrong(param_1 + _DAT_11278c524,0);
  _objc_storeStrong(param_1 + _DAT_11278c538,0);
  _objc_storeStrong(param_1 + _DAT_11278c528,0);
  _objc_storeStrong(param_1 + _DAT_11278c52c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c530,0);
  return;
}



/* Entry: 10b094e10; end: 10b094e17; -[SCRootContainerViewController pageViewName] */

undefined8 FUN_10b094e10(void)

{
  return 0xf7;
}



/* Entry: 10b094e18; end: 10b094e9b; -[SCRootContainerViewController viewDidLoad] */

void FUN_10b094e18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705560;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b094e9c; end: 10b095233; +[SCStackContainer modalContainerWithConfig:presenter:parentContainer:] */

void FUN_10b094e9c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe41a0();
  puVar1 = param_3;
  func_0x00010c10f3c0();
  if ((puVar1 != (undefined *)0x3) && ((puVar1 == (undefined *)0x2 || (puVar1 == (undefined *)0x1)))
     ) {
    func_0x00010be03c60();
  }
  puVar1 = param_3;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126df648;
    _objc_alloc_init();
  }
  puVar2 = param_3;
  func_0x00010bf800a0();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010bf809a0();
  }
  puVar2 = param_3;
  func_0x00010bf61a60();
  puVar6 = param_3;
  func_0x00010c10f3c0(param_3);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar6;
    func_0x00010b0a43e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010b0a4410(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010b0a43e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0a4410(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar2 == (undefined *)0x1) {
    puVar6 = PTR_PTR_1126df658;
    func_0x00010c0db140(PTR_PTR_1126df658);
    puVar2 = (undefined *)0x2;
    FUN_10b0a57c0(2,puVar6,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126df658;
    func_0x00010c0db140(PTR_PTR_1126df658);
    puVar3 = (undefined *)0x8;
    FUN_10b0a57c0(8,puVar6,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126df658;
    func_0x00010c0db140(PTR_PTR_1126df658);
    puVar4 = (undefined *)0x2;
    FUN_10b0a57c0(2,puVar6,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126df658;
    func_0x00010c0db140(PTR_PTR_1126df658);
    puVar6 = (undefined *)0x8;
    FUN_10b0a57c0(8,puVar5,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  puVar5 = PTR_PTR_1126df668;
  _objc_alloc();
  func_0x00010c00a120();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126df548;
  _objc_alloc(PTR_PTR_1126df548);
  puVar6 = puVar5;
  func_0x00010bf69f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf69380(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f3c0(param_3);
  puVar4 = puVar5;
  func_0x00010bf06920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf80f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0();
  func_0x00010c038ae0(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b095234; end: 10b09524f; +[SCStackContainer _dismissalDirectionForHorizontalBehavior:] */

undefined8 FUN_10b095234(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_3 != 1) {
    uVar1 = 2;
  }
  uVar2 = 3;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10b095250; end: 10b0953df; +[SCStackContainer navigationContainerWithConfig:presenter:parentContainer:] */

void FUN_10b095250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126df648;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar3 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126df548;
  _objc_alloc(PTR_PTR_1126df548);
  puVar5 = puVar4;
  FUN_10b0a5340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_10b0a53c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf8f6e0();
  uVar1 = 2;
  if ((int)uVar7 != 0) {
    uVar1 = 3;
  }
  uVar8 = uVar3;
  func_0x00010bf8f6e0();
  uVar7 = 0;
  if ((int)uVar8 == 0) {
    uVar7 = 2;
  }
  func_0x000107c2bd50();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000107c2bd54();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038ae0(puVar4,param_2,param_4,param_5,puVar2,puVar5,puVar6,1,uVar1,uVar7,uVar8,uVar9,
                      0,0,0,&PTR____CFConstantStringClassReference_110f59218);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0953e0; end: 10b095673; -[SCStackContainer initWithPresenter:parentContainer:dataSource:defaultPresentationStyle:defaultDismissalStyle:presentationDirection:dismissalDirection:horizontalDismissBehavior:appearanceStyle:disappearanceStyle:canUseGesturesToDismissContainer:page:pageInstanceId:defaultDeveloperName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b0953e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010bf66900();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_112705568;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithPresenter_parentContaine_1125ebcb0,param_3,param_4,
                      param_11,param_12,param_14,param_15,uVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278c544) = param_14;
    lVar6 = (long)_DAT_11278c548;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_15;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278c54c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278c550;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278c554;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278c558) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278c55c) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278c560) = param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278c564) = param_13;
    lVar6 = (long)_DAT_11278c568;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126df650;
    _objc_alloc();
    puVar4 = puVar1;
    func_0x00010bf66900(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf669e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278c56c);
    *(undefined **)((long)puVar1 + (long)_DAT_11278c56c) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b095674; end: 10b09568f; -[SCStackContainer setEmitNavigationEdgeTransitions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b095674(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278c570) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c194330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c56c),PTR_s_setEmitEdgeTransitions__112642ae8);
  return;
}



/* Entry: 10b095690; end: 10b09569f; -[SCStackContainer groupIsInteractivelyDismissable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b095690(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c564);
}



/* Entry: 10b0956a0; end: 10b0956af; -[SCStackContainer setGroupIsInteractivelyDismissable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0956a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278c564) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bea91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpDismissGestureIfNeeded_112587e10);
  return;
}



/* Entry: 10b0956b0; end: 10b09575b; -[SCStackContainer developerName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0956b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_developerName_112531d00;
  puStack_38 = PTR_PTR_112705568;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_developerName_112531d00);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_48 = PTR_PTR_112705568;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09575c; end: 10b09575f; -[SCStackContainer onUIDidAppear:appearance:] */

void FUN_10b09575c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpDismissGestureIfNeeded_112587e10);
  return;
}



/* Entry: 10b095760; end: 10b0957af; -[SCStackContainer canBecomeDismissalTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10b095760(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278c54c);
    func_0x00010c071780(uVar3);
    uVar1 = (uint)uVar3 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b0957b0; end: 10b09580f; -[SCStackContainer dismissalTarget] */

void FUN_10b0957b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf2c5c0();
  if ((int)uVar1 == 0) {
    func_0x00010c0f3b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf84f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(param_1);
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b095810; end: 10b0959cb; -[SCStackContainer _setUpDismissGestureIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b095810(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = param_1;
  func_0x00010c10fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2a0180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2a65e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c290d00();
    if ((int)uVar3 == 0) goto LAB_10b0959b8;
    uVar3 = param_1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
    _objc_opt_class(PTR__OBJC_CLASS___UIAlertController_1126aeb78);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      return;
    }
    func_0x00010c2a0180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c10f380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11278c54c);
    func_0x00010c071780();
    if ((iVar1 != 0) && (*(char *)(param_1 + (long)_DAT_11278c564) != '\x01')) {
      return;
    }
    puVar5 = PTR_PTR_1126da290;
    _objc_alloc_init();
    lVar7 = (long)_DAT_11278c574;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c1673a0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c2a0180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067900(uVar6);
  }
  _objc_release(uVar2);
  uVar2 = param_1;
LAB_10b0959b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0959cc; end: 10b095a77; -[SCStackContainer _completePresentationOf:completed:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0959cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((int)param_4 != 0) {
    lVar2 = (long)_DAT_11278c578;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c11c500(*(undefined8 *)(param_1 + _DAT_11278c54c));
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    func_0x00010c223d20(param_1);
    func_0x00010bea91a0(param_1);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b095a78; end: 10b095b2b; -[SCStackContainer _completeDismissalPresentationOf:completed:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b095a78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((int)param_4 == 0) {
    func_0x00010c11c500(*(undefined8 *)(param_1 + _DAT_11278c54c));
  }
  else {
    func_0x00010c223d20(param_1);
    func_0x00010bea91a0(param_1);
    param_1 = param_1 + _DAT_11278c57c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf753a0();
    _objc_release(param_1);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b095b2c; end: 10b095c2f; -[SCStackContainer panningTransitionCoordinator:wantsInteractionControllerForDirection:isEdgePan:] */

void FUN_10b095b2c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  func_0x00010bfc1940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  _objc_opt_respondsToSelector();
  _objc_release(uVar4);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0xfffffffffffffffe;
  }
  else {
    uVar2 = param_1;
    func_0x00010bfc1940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c23b980();
    _objc_release(uVar2);
  }
  uVar2 = 0x20;
  if (param_4 < 2) {
    if (param_4 == 0) goto LAB_10b095c1c;
    uVar3 = 8;
    if (param_5 == 0) {
      uVar3 = 2;
    }
    bVar1 = param_4 == 1;
  }
  else {
    uVar3 = 0x10;
    if (param_5 == 0) {
      uVar3 = 4;
    }
    uVar2 = 0x40;
    if (param_4 != 8) {
      uVar2 = 0x20;
    }
    bVar1 = param_4 == 2;
  }
  if (!bVar1) {
    uVar3 = uVar2;
  }
  if ((uVar3 & uVar4) != 0) {
    func_0x00010bf84b80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10b095c1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b095c30; end: 10b095c37; -[SCStackContainer presentViewController:] */

void FUN_10b095c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated__112621580,param_3,1);
  return;
}



/* Entry: 10b095c38; end: 10b095c3f; -[SCStackContainer presentViewController:animated:] */

void FUN_10b095c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated_c_112621588,param_3,param_4,0);
  return;
}



/* Entry: 10b095c40; end: 10b095e5b; -[SCStackContainer presentViewController:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b095c40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be92f40(param_1);
  lVar1 = param_1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278c578);
  *(long *)(param_1 + _DAT_11278c578) = lVar1;
  _objc_release(uVar3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10b095d54;
  puStack_68 = &UNK_110864938;
  uStack_48 = (undefined1)param_4;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_80);
  func_0x00010bef00e0(param_1,param_2,param_3,param_4,param_5,ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b095e5c; end: 10b095e6f;  */

void FUN_10b095e5c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completePresentationOf_complete_1125565b8,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b095e70; end: 10b09604f; -[SCStackContainer presentViewControllerInteractively:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b095e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278c578);
  *(long *)(param_1 + _DAT_11278c578) = lVar1;
  _objc_release(uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b095f78;
  puStack_50 = &UNK_110cb67a0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_68;
  _objc_retainBlock(ppuVar2);
  func_0x00010beefcc0(param_1,param_2,param_3,param_4,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b096050; end: 10b096063;  */

void FUN_10b096050(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completePresentationOf_complete_1125565b8,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b096064; end: 10b09606b; -[SCStackContainer dismissViewController] */

void FUN_10b096064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewControllerAnimated__1125bec60,1);
  return;
}



/* Entry: 10b09606c; end: 10b096073; -[SCStackContainer dismissViewControllerAnimated:] */

void FUN_10b09606c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3,0);
  return;
}



/* Entry: 10b096074; end: 10b09611f; -[SCStackContainer dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096074(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2a0180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278c54c);
  func_0x00010c1039e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03820(param_1,param_2,uVar2,lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b096120; end: 10b096337; -[SCStackContainer _dismissToViewController:fromViewController:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096120(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010be92f40(param_1);
  if (param_3 == 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar4 = (long)_DAT_11278c56c;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010c0e5a80(*(undefined8 *)(param_1 + lVar4));
    }
    func_0x00010c0f3b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10b096338;
    puStack_80 = &UNK_110cb67d0;
    _objc_copyWeak(auStack_70,auStack_58);
    lStack_68 = lVar3;
    uStack_60 = param_5;
    _objc_retain(param_6);
    uStack_78 = param_6;
    func_0x00010beeff40(param_1);
    _objc_release(param_1);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10b0963b8;
    puStack_c0 = &UNK_110864938;
    lStack_b8 = param_1;
    _objc_retain(param_3);
    lStack_b0 = param_3;
    uStack_a0 = param_5;
    _objc_retain(param_6);
    ppuVar1 = &puStack_d8;
    uStack_a8 = param_6;
    _objc_retainBlock(ppuVar1);
    func_0x00010bef00e0(param_1);
    _objc_release(ppuVar1);
    _objc_release(uStack_a8);
    _objc_release(lStack_b0);
  }
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10b096338; end: 10b0963b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096338(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      func_0x00010be8a5c0(lVar1);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c0e5a60(*(undefined8 *)(lVar1 + _DAT_11278c56c));
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0963b8; end: 10b0964bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0963b8(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10fa00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x38);
  if (bVar1 == 1) {
    lStack_58 = *(long *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(lStack_58 + _DAT_11278c554);
    uStack_50 = uVar3;
  }
  else {
    uVar5 = uVar2;
    func_0x000107c2bd4c();
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = *(long *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b0964c0;
  puStack_60 = &UNK_110866910;
  _objc_retain(uStack_50);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_48 = uVar4;
  func_0x00010c10ae80(uVar2,param_2,uVar3,uVar5,&puStack_78);
  if ((bVar1 & 1) == 0) {
    _objc_release(uVar5);
  }
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10b0964c0; end: 10b0964d3;  */

void FUN_10b0964c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeDismissalPresentationOf_112556488,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b0964d4; end: 10b0965df; -[SCStackContainer dismissToRootViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0964d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11278c54c;
  uVar3 = *(ulong *)(param_1 + lVar6);
  func_0x00010c071780();
  if ((uVar3 & 1) == 0) {
    do {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c1039e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,uVar4);
      _objc_release(uVar4);
      iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
      func_0x00010c071780();
    } while (iVar1 == 0);
  }
  lVar6 = param_1;
  func_0x00010c2a0180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c089820(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03820(param_1,param_2,puVar5,lVar6,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0965e0; end: 10b0966ef; -[SCStackContainer dismissMultipleViewControllers:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0965e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (0 < param_3) {
    lVar4 = (long)_DAT_11278c54c;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c1039e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar2);
      _objc_release(uVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  lVar4 = param_1;
  func_0x00010c2a0180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c089820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03820(param_1,param_2,puVar3,lVar4,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0966f0; end: 10b0966fb; -[SCStackContainer dismissViewControllerInteractively:] */

void FUN_10b0966f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerInteractive_1125bec88,2,param_3);
  return;
}



/* Entry: 10b0966fc; end: 10b096afb; -[SCStackContainer dismissViewControllerInteractivelyTowardsDirection:withCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0966fc(ulong param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  uVar5 = param_1;
  func_0x00010c10fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar2 & 1) != 0) {
    uVar5 = param_1;
    func_0x00010c10fa00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9140();
    _objc_release(uVar5);
  }
  lVar11 = (long)_DAT_11278c54c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c071780();
  if (iVar1 == 0) {
    lVar12 = (long)_DAT_11278c56c;
    lVar10 = *(long *)(param_1 + lVar12);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010bf529e0();
    _objc_release(lVar10);
    if (lVar8 != 0) {
      func_0x00010c0e5a80(*(undefined8 *)(param_1 + lVar12));
    }
    uVar5 = *(ulong *)(param_1 + lVar11);
    func_0x00010c1039e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10b096b7c;
    puStack_c0 = &UNK_110866910;
    uStack_b8 = param_1;
    _objc_retain();
    ppuVar6 = &puStack_d8;
    uStack_b0 = uVar5;
    ppuStack_a8 = param_4;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + (long)_DAT_11278c554);
    _objc_retain(uVar9);
    uVar7 = uVar9;
    if (*(long *)(param_1 + (long)_DAT_11278c560) == 0) {
      uVar7 = 1;
      if (param_3 == 2) {
        uVar7 = 2;
      }
      func_0x00010b0a4410(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
    }
    _objc_initWeak(auStack_68,param_1);
    func_0x00010c10fa00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_68);
    _objc_retain(ppuVar6);
    uVar2 = param_1;
    func_0x00010c10c880(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_e0);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar7);
    _objc_release(ppuStack_a8);
    uVar4 = uStack_b0;
  }
  else {
    if (*(long *)(param_1 + (long)_DAT_11278c558) != 3) {
      lVar10 = (long)_DAT_11278c56c;
      lVar8 = *(long *)(param_1 + lVar10);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      if (lVar11 != 0) {
        func_0x00010c0e5a80(*(undefined8 *)(param_1 + lVar10));
      }
      _objc_initWeak(auStack_68,param_1);
      func_0x00010c0f3b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10b096afc;
      puStack_88 = &UNK_11084f3d0;
      _objc_copyWeak(auStack_78,auStack_68);
      lStack_70 = lVar11;
      _objc_retain(param_4);
      uVar2 = param_1;
      ppuStack_80 = param_4;
      func_0x00010beefc80(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_68);
      goto LAB_10b096a9c;
    }
    func_0x00010c0f3b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126df658;
    func_0x00010c0db140(PTR_PTR_1126df658);
    uVar4 = 8;
    FUN_10b0a57c0(8,puVar3,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010beefca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_4;
    uVar5 = param_1;
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
  param_4 = ppuVar6;
LAB_10b096a9c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b096afc; end: 10b096b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096afc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      func_0x00010be8a5c0(lVar1);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c0e5a60(*(undefined8 *)(lVar1 + _DAT_11278c56c));
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b096b7c; end: 10b096b8f;  */

void FUN_10b096b7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeDismissalPresentationOf_112556488,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b096b90; end: 10b096c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096b90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = (long)_DAT_11278c56c;
    lVar2 = *(long *)(lVar1 + lVar4);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010c0e5a60(*(undefined8 *)(lVar1 + lVar4));
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b096c30; end: 10b096cb3; -[SCStackContainer navigationItemWithViewController:page:pageInstanceId:] */

void FUN_10b096c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df660;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c061800();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b096cb4; end: 10b096d37; -[SCStackContainer navigationItemWithLazyViewController:page:pageInstanceId:] */

void FUN_10b096cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df660;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021fe0();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b096d38; end: 10b096eeb; -[SCStackContainer pushNavigationItem:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096d38(long param_1,undefined8 param_2,ulong param_3,undefined1 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126df660;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    func_0x00010c0e5d60(*(undefined8 *)(param_1 + _DAT_11278c56c));
    _objc_initWeak(auStack_58,param_1);
    uVar3 = param_3;
    func_0x00010c29c100(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    uStack_60 = param_4;
    _objc_retain(param_5);
    func_0x00010c11c540(param_1);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b096eec; end: 10b096f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096eec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0e5d40(*(undefined8 *)(lVar1 + _DAT_11278c56c));
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b096f58; end: 10b09705b; -[SCStackContainer popNavigationItemAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b096f58(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  func_0x00010c0e5a80(*(undefined8 *)(param_1 + _DAT_11278c56c));
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010bf84b00(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b09705c; end: 10b0970cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09705c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0e5a60(*(undefined8 *)(lVar1 + _DAT_11278c56c));
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0970cc; end: 10b0971c7; -[SCStackContainer popToRootNavigationItemAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0970cc(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  func_0x00010c0e5ac0(*(undefined8 *)(param_1 + _DAT_11278c56c));
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010bf84760(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0971c8; end: 10b09722f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0971c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0e5aa0(*(undefined8 *)(lVar1 + _DAT_11278c56c));
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b097230; end: 10b097233; -[SCStackContainer topViewController] */

void FUN_10b097230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_visibleViewController_112685a88);
  return;
}



/* Entry: 10b097234; end: 10b097237; -[SCStackContainer pushViewController:] */

void FUN_10b097234(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentViewController__112621578);
  return;
}



/* Entry: 10b097238; end: 10b09723b; -[SCStackContainer pushViewController:animated:] */

void FUN_10b097238(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentViewController_animated__112621580);
  return;
}



/* Entry: 10b09723c; end: 10b09723f; -[SCStackContainer pushViewController:animated:completion:] */

void FUN_10b09723c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentViewController_animated_c_112621588);
  return;
}



/* Entry: 10b097240; end: 10b097243; -[SCStackContainer pushViewControllerInteractively:completion:] */

void FUN_10b097240(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentViewControllerInteractive_1126215c0);
  return;
}



/* Entry: 10b097244; end: 10b097247; -[SCStackContainer popViewController] */

void FUN_10b097244(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewController_1125bec50);
  return;
}



/* Entry: 10b097248; end: 10b09724b; -[SCStackContainer popViewControllerAnimated:] */

void FUN_10b097248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewControllerAnimated__1125bec60);
  return;
}



/* Entry: 10b09724c; end: 10b09724f; -[SCStackContainer popViewControllerAnimated:completion:] */

void FUN_10b09724c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68);
  return;
}



/* Entry: 10b097250; end: 10b097253; -[SCStackContainer popToRootViewControllerAnimated:completion:] */

void FUN_10b097250(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissToRootViewControllerAnima_1125beb80);
  return;
}



/* Entry: 10b097254; end: 10b097257; -[SCStackContainer popMultipleViewControllers:animated:completion:] */

void FUN_10b097254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissMultipleViewControllers_a_1125be938);
  return;
}



/* Entry: 10b097258; end: 10b09725b; -[SCStackContainer popViewControllerInteractively:] */

void FUN_10b097258(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewControllerInteractive_1125bec80);
  return;
}



/* Entry: 10b09725c; end: 10b097267; -[SCStackContainer attachUI:] */

void FUN_10b09725c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated_c_112621588,param_3,1,0);
  return;
}



/* Entry: 10b097268; end: 10b0972f7; -[SCStackContainer detachUI:] */

void FUN_10b097268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0972f8;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf84b00(param_1,param_2,1,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0972f8; end: 10b09730b;  */

void FUN_10b0972f8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b097304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b09730c; end: 10b097393; -[SCStackContainer page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b09730c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11278c56c);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 == 0) {
    uVar3 = (ulong)*(uint *)(param_1 + _DAT_11278c544);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c089820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f0be0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10b097394; end: 10b09742b; -[SCStackContainer pageInstanceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097394(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11278c56c);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_11278c548);
    _objc_retain(lVar3);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c089820(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f1360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b09742c; end: 10b09743b; -[SCStackContainer presentationControllerShouldDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b09742c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c564);
}



/* Entry: 10b09743c; end: 10b097483; -[SCStackContainer presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09743c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11278c54c);
  func_0x00010c071780();
  if (iVar1 != 0) {
    func_0x00010be8a5c0(param_1);
  }
  func_0x00010bf84aa0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b097484; end: 10b09748b; -[SCStackContainer _releaseVisibleViewController] */

void FUN_10b097484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisibleViewController__112666970,0);
  return;
}



/* Entry: 10b09748c; end: 10b097543; -[SCStackContainer _resetInteractiveNavigationState] */

void FUN_10b09748c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf66900();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf668e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b5c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c10fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c10fa00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b097544; end: 10b097563; -[SCStackContainer delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097544(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c57c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b097564; end: 10b097577; -[SCStackContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097564(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c57c,param_3);
  return;
}



/* Entry: 10b097578; end: 10b097587; -[SCStackContainer emitNavigationEdgeTransitions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b097578(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c570);
}



/* Entry: 10b097588; end: 10b097633; -[SCStackContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097588(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278c57c);
  _objc_storeStrong(param_1 + _DAT_11278c548,0);
  _objc_storeStrong(param_1 + _DAT_11278c56c,0);
  _objc_storeStrong(param_1 + _DAT_11278c568,0);
  _objc_storeStrong(param_1 + _DAT_11278c578,0);
  _objc_storeStrong(param_1 + _DAT_11278c574,0);
  _objc_storeStrong(param_1 + _DAT_11278c554,0);
  _objc_storeStrong(param_1 + _DAT_11278c550,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c54c,0);
  return;
}



/* Entry: 10b097634; end: 10b097697; -[SCStackContainerDataSource init] */

undefined1 * FUN_10b097634(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705570;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b097698; end: 10b0976b7; -[SCStackContainerDataSource isEmpty] */

bool FUN_10b097698(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  return lVar1 == 0;
}



/* Entry: 10b0976b8; end: 10b0977b7; -[SCStackContainerDataSource popViewController] */

void FUN_10b0976b8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 8));
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_retain(uVar1);
    _objc_opt_class(puVar2);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    puVar2 = PTR_DAT_1126a5c00;
    if ((uVar3 & 1) != 0) {
      _objc_retain(uVar1);
      uVar4 = uVar1;
      func_0x000107c318f8(uVar1,puVar2);
      uVar3 = uVar1;
      if ((int)uVar4 == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar1);
      uVar4 = uVar3;
      func_0x00010bfed820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_retain(uVar4);
      _objc_release(uVar4);
      goto LAB_10b09779c;
    }
  }
  uVar4 = 0;
LAB_10b09779c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b0977b8; end: 10b09782b; -[SCStackContainerDataSource pushViewController:] */

void FUN_10b0977b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5c00);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010bf6ad40(param_3);
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09782c; end: 10b097837; -[SCStackContainerDataSource .cxx_destruct] */

void FUN_10b09782c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b097838; end: 10b097843; +[SCStandardContainerFactory modalContainerWithConfig:presenter:parentContainer:] */

void FUN_10b097838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cfa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df548,PTR_s_modalContainerWithConfig_present_1126118a0);
  return;
}



/* Entry: 10b097844; end: 10b09784f; +[SCStandardContainerFactory operaContainerWithConfig:presenter:parentContainer:] */

void FUN_10b097844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ea330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df600,PTR_s_operaDeckContainerWithConfig_pre_1126182e0);
  return;
}



/* Entry: 10b097850; end: 10b097873; +[SCStandardContainerFactory navigationContainerWithConfig:presenter:parentContainer:] */

void FUN_10b097850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df548,PTR_s_navigationContainerWithConfig_pr_1126133b0);
  return;
}



/* Entry: 10b097874; end: 10b0978cb; -[SCTabBarContainer dismissalTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097874(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11278c5c0);
  if (lVar1 == 0) {
    _objc_retain(param_1);
  }
  else {
    func_0x00010c0dfd40(lVar1,param_2,*(undefined8 *)(param_1 + _DAT_11278c5b0));
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0978cc; end: 10b0978db; -[SCTabBarContainer selectedIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0978cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5b0);
}



/* Entry: 10b0978dc; end: 10b09793b; -[SCTabBarContainer _completePresentationOf:atIndex:completed:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0978dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  _objc_retain(param_6);
  if ((int)param_5 != 0) {
    *(undefined8 *)(param_1 + _DAT_11278c5b0) = param_4;
  }
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10b09793c; end: 10b09795b; -[SCTabBarContainer setSelectedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09793c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11278c5b0) == param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewControllerAtIndex_ani_1126215a0,param_3,0);
  return;
}



/* Entry: 10b09795c; end: 10b097963; -[SCTabBarContainer presentViewControllerAtIndex:] */

void FUN_10b09795c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewControllerAtIndex_ani_1126215a0,param_3,1);
  return;
}



/* Entry: 10b097964; end: 10b09797f; -[SCTabBarContainer presentViewControllerAtIndex:animated:] */

void FUN_10b097964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewControllerAtIndex_ani_1126215a8,param_3,param_4,0);
  return;
}



/* Entry: 10b097980; end: 10b097a47;  */

void FUN_10b097980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10fa00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b097a48;
  puStack_58 = &UNK_1109414c0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x00010c10ae80(uVar4,param_2,uVar1,uVar3,&puStack_70);
  _objc_release(uVar4);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10b097a48; end: 10b097a5b;  */

void FUN_10b097a48(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completePresentationOf_atIndex__1125565b0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),param_2,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b097a5c; end: 10b097a63; -[SCTabBarContainer presentViewControllerAtIndexInteractively:] */

void FUN_10b097a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewControllerAtIndexInte_1126215b8,param_3,0);
  return;
}



/* Entry: 10b097a64; end: 10b097cc3; -[SCTabBarContainer presentViewControllerAtIndexInteractively:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097a64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11278c5b0;
  lVar6 = (long)_DAT_11278c5c0;
  if ((*(long *)(param_1 + lVar5) != -1) && (*(long *)(param_1 + lVar6) == 0)) {
    func_0x00010bf6ad60(*(undefined8 *)(param_1 + _DAT_11278c5bc));
  }
  lVar2 = *(long *)(param_1 + lVar6);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_11278c5bc);
    func_0x00010c29c140(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dfd40(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfed820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + lVar5);
  if (*(long *)(param_1 + lVar5) == -1) {
    *(long *)(param_1 + lVar5) = param_3;
    lVar2 = param_3;
  }
  lVar5 = param_1;
  func_0x00010c10f6c0(param_1,param_2,lVar2,param_3,1,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b097cc4;
  puStack_88 = &UNK_1109414c0;
  lStack_80 = param_1;
  _objc_retain(lVar3);
  lStack_78 = lVar3;
  lStack_68 = param_3;
  _objc_retain(param_4);
  ppuVar4 = &puStack_a0;
  uStack_70 = param_4;
  _objc_retainBlock();
  lVar6 = *(long *)(param_1 + lVar6);
  if (lVar6 == 0) {
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10b097d6c;
    puStack_c8 = &UNK_110cb6800;
    lStack_c0 = param_1;
    _objc_retain(lVar3);
    lStack_b8 = lVar3;
    _objc_retain(lVar5);
    lStack_b0 = lVar5;
    _objc_retain(ppuVar4);
    ppuStack_a8 = ppuVar4;
    func_0x00010beefcc0(param_1,param_2,lVar3,ppuVar4,&puStack_e0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuStack_a8);
    _objc_release(lStack_b0);
    lVar6 = lStack_b8;
  }
  else {
    func_0x00010c0dfd40(lVar6,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef840(param_1,param_2,lVar6,ppuVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar6);
  _objc_release(ppuVar4);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b097cc4; end: 10b097d57;  */

void FUN_10b097cc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bde3040(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b097d58; end: 10b097d6b;  */

void FUN_10b097d58(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b097d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b097d6c; end: 10b097dbf;  */

void FUN_10b097d6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10fa00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c10c880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b097dc0; end: 10b097e3f; -[SCTabBarContainer onUIDidAppear:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097dc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf84f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0c3780(param_1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_11278c5b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10b097e40; end: 10b097e5b; -[SCTabBarContainer panningTransitionCoordinator:wantsInteractionControllerForDirection:isEdgePan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097e40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 1;
  if (param_4 != 1) {
    lVar1 = -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10ee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewControllerAtIndexInte_1126215b0,
             *(long *)(param_1 + _DAT_11278c5b0) + lVar1);
  return;
}



/* Entry: 10b097e5c; end: 10b097e7b; -[SCTabBarContainer selectedTabBarItemContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c5c0),PTR_s_objectAtIndexedSubscript__112615968,
             *(undefined8 *)(param_1 + _DAT_11278c5b0));
  return;
}



/* Entry: 10b097e7c; end: 10b097e8b; -[SCTabBarContainer defaultPanTransitionOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b097e7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5c4);
}


