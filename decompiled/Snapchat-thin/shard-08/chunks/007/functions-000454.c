/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106479374; end: 10647951b;  */

void FUN_106479374(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1064794f8;
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_10647951c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be1e120(lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010beeec80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      uVar9 = *(undefined8 *)(lVar1 + 0x90);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeec80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf32060(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf31dc0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0480(uVar9,param_2,uVar7,uVar8,uVar6,lVar3);
      _objc_release(uVar6);
      _objc_release(uVar8);
      goto LAB_1064794e4;
    }
  }
  else {
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    lVar5 = lVar1 + 0x80;
    _objc_loadWeakRetained(lVar5);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106479960;
    puStack_60 = &UNK_1108450c8;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uStack_58 = uVar7;
    func_0x00010bfd0040(uVar8,param_2,lVar2,lVar3,lVar5,0,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar7 = uStack_58;
LAB_1064794e4:
    _objc_release(uVar7);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_1064794f8:
  _objc_release(lVar1);
  return;
}



/* Entry: 10647951c; end: 10647995f;  */

void FUN_10647951c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b5b00;
  _objc_opt_new(PTR_PTR_1126b5b00);
  puVar5 = param_1;
  func_0x00010beeec80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  if (puVar2 != (undefined *)0x0) {
    puVar5 = PTR_PTR_1126b6248;
    _objc_opt_new(PTR_PTR_1126b6248);
    puVar2 = param_1;
    func_0x00010bf31dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1619e0(puVar5,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bf32060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c067ec0();
    func_0x00010c179660(puVar5,param_2,puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010beeec80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161fe0(puVar5,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1c76a0(puVar1,param_2,puVar5);
    _objc_release(puVar5);
  }
  puVar5 = param_1;
  func_0x00010c0e9580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c28fbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      if (puVar2 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        goto LAB_106479930;
      }
    }
    else {
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126b5c20;
    _objc_opt_new(PTR_PTR_1126b5c20);
    puVar2 = param_1;
    func_0x00010bf9de40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1e0400(puVar5,param_2,puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c28fbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    func_0x00010c21d520(puVar5,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = puVar5;
      func_0x00010c28fbe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c28f340(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    func_0x00010c21b000(puVar1,param_2,puVar5);
  }
  else {
    puVar5 = param_1;
    func_0x00010c0e9580();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c2427e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c9678;
      _objc_opt_new(PTR_PTR_1126c9678);
      puVar3 = puVar5;
      func_0x00010c2923e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010c294420(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f760(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010bf85d80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18af40(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010bf1acc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170a80(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010bf1c0a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c171480(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010c21ef80(puVar1,param_2,puVar2);
    }
    else {
      puVar2 = PTR_PTR_1126c9670;
      _objc_opt_new(PTR_PTR_1126c9670);
      puVar3 = puVar5;
      func_0x00010c2923e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9240(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010c2427e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c242760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4140(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c1e5800(puVar1,param_2,puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_retain(puVar1);
  _objc_release(puVar5);
  puVar5 = puVar1;
LAB_106479930:
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106479960; end: 106479963;  */

void FUN_106479960(void)

{
  return;
}



/* Entry: 106479964; end: 1064799db; -[SCContextV2ActionsHandler isMusicPrivateWithAction:] */

undefined8 FUN_106479964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10647951c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2472a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07b240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1064799dc; end: 1064799df; -[SCContextV2ActionsHandler playStoryWithToken:baseView:onLoadFinished:] */

void FUN_1064799dc(void)

{
  return;
}



/* Entry: 1064799e0; end: 106479aff; -[SCContextV2ActionsHandler playUserStoryWithUsername:userId:baseView:] */

void FUN_1064799e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106479b00;
    puStack_58 = &UNK_110848218;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    lStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106479b00; end: 106479bdb;  */

void FUN_106479b00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b6028;
    func_0x00010c2942a0(PTR_PTR_1126b6028,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6030;
    _objc_alloc(PTR_PTR_1126b6030);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010b9688dc(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf16340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0509c0(puVar3,param_2,puVar2,uVar4,lVar5,lVar1);
    _objc_release(lVar5);
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x30),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106479bdc; end: 106479bdf; -[SCContextV2ActionsHandler presentRemoteDocumentModallyWithInfo:] */

void FUN_106479bdc(void)

{
  return;
}



/* Entry: 106479be0; end: 106479c23; -[SCContextV2ActionsHandler shouldCardsBeInitiallyCollapsed] */

undefined8 FUN_106479be0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf9c140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4e1a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106479c24; end: 106479c7f; -[SCContextV2ActionsHandler registerExpansionStateListenerWithCallback:] */

void FUN_106479c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf9c140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106479c80; end: 106479cb7; -[SCContextV2ActionsHandler wantsToExpandFromCollapsedState] */

void FUN_106479c80(undefined8 param_1)

{
  func_0x00010bf9c140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106479cb8; end: 106479cbb; -[SCContextV2ActionsHandler dismissModal:] */

void FUN_106479cb8(void)

{
  return;
}



/* Entry: 106479cbc; end: 106479daf; -[SCContextV2ActionsHandler itemInstanceViewFactory] */

void FUN_106479cbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_opt_class(PTR_PTR_1126b2f40);
  uVar2 = uVar1;
  func_0x00010c0b7ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106479db0; end: 106479e03;  */

void FUN_106479db0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b2f40;
    _objc_alloc(PTR_PTR_1126b2f40);
    func_0x00010bffa540();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106479e04; end: 106479e6f; -[SCContextV2ActionsHandler _getContextLoggingActionSource] */

void FUN_106479e04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c08bda0(uVar1);
  func_0x0001064bcdf4();
  puVar2 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  FUN_1064bce14(uVar3);
  func_0x00010bff0a60(puVar2,param_2,5,uVar4,uVar1,uVar3,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106479e70; end: 106479eeb; -[SCContextV2ActionsHandler setPresentingModalContent:source:] */

void FUN_106479e70(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (*(byte *)(param_1 + 0x68) != param_3) {
    *(char *)(param_1 + 0x68) = (char)param_3;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      func_0x00010bf4e1e0();
    }
    else {
      func_0x00010bf4e220();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106479eec; end: 106479f33; -[SCContextV2ActionsHandler contextStoryPlaybackScopeDidStart:] */

void FUN_106479eec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1e14e0(param_1,param_2,1,0);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106479f34; end: 106479faf; -[SCContextV2ActionsHandler contextStoryPlaybackScopeDidComplete:] */

void FUN_106479f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c1e14e0(param_1,param_2,0,0);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e200();
  _objc_release(lVar1);
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106479fb0; end: 106479fb7; -[SCContextV2ActionsHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106479fb0(void)

{
  return 0;
}



/* Entry: 106479fb8; end: 106479fc3; -[SCContextV2ActionsHandler pushToValdiMarshaller:] */

undefined8 FUN_106479fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc528;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000108ea4d48();
  func_0x000108ea4ce4();
  return param_3;
}



/* Entry: 106479fc4; end: 106479fcb; -[SCContextV2ActionsHandler getOverridePlaceholderIconTtlMs] */

undefined8 FUN_106479fc4(void)

{
  return 0;
}



/* Entry: 106479fcc; end: 106479fe3; -[SCContextV2ActionsHandler delegate] */

void FUN_106479fcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106479fe4; end: 106479ffb; -[SCContextV2ActionsHandler expansionStateDelegate] */

void FUN_106479fe4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106479ffc; end: 10647a007; -[SCContextV2ActionsHandler setExpansionStateDelegate:] */

void FUN_106479ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 10647a008; end: 10647a00f; -[SCContextV2ActionsHandler presentingModalContent] */

undefined1 FUN_10647a008(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 10647a010; end: 10647a027; -[SCContextV2ActionsHandler baseViewController] */

void FUN_10647a010(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10647a028; end: 10647a02f; -[SCContextV2ActionsHandler contextSessionParams] */

undefined8 FUN_10647a028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10647a030; end: 10647a037; -[SCContextV2ActionsHandler contextLogger] */

undefined8 FUN_10647a030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10647a038; end: 10647a03f; -[SCContextV2ActionsHandler suggestedFriendsService] */

undefined8 FUN_10647a038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10647a040; end: 10647a047; -[SCContextV2ActionsHandler gameLauncher] */

undefined8 FUN_10647a040(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10647a048; end: 10647a077; -[SCContextV2ActionsHandler setGameLauncher:] */

void FUN_10647a048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a078; end: 10647a07f; -[SCContextV2ActionsHandler actionHandler] */

undefined8 FUN_10647a078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10647a080; end: 10647a0af; -[SCContextV2ActionsHandler setActionHandler:] */

void FUN_10647a080(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10647a0b0; end: 10647a0b7; -[SCContextV2ActionsHandler myAstrologyUserInfo] */

undefined8 FUN_10647a0b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10647a0b8; end: 10647a0e7; -[SCContextV2ActionsHandler setMyAstrologyUserInfo:] */

void FUN_10647a0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a0e8; end: 10647a0ef; -[SCContextV2ActionsHandler musicFavoritesService] */

undefined8 FUN_10647a0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10647a0f0; end: 10647a11f; -[SCContextV2ActionsHandler setMusicFavoritesService:] */

void FUN_10647a0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a120; end: 10647a127; -[SCContextV2ActionsHandler musicNotificationPresenter] */

undefined8 FUN_10647a120(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10647a128; end: 10647a157; -[SCContextV2ActionsHandler setMusicNotificationPresenter:] */

void FUN_10647a128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a158; end: 10647a15f; -[SCContextV2ActionsHandler alertPresenter] */

undefined8 FUN_10647a158(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10647a160; end: 10647a18f; -[SCContextV2ActionsHandler setAlertPresenter:] */

void FUN_10647a160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a190; end: 10647a197; -[SCContextV2ActionsHandler musicFeatureSettings] */

undefined8 FUN_10647a190(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10647a198; end: 10647a1c7; -[SCContextV2ActionsHandler setMusicFeatureSettings:] */

void FUN_10647a198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a1c8; end: 10647a1cf; -[SCContextV2ActionsHandler placeCardV2Context] */

undefined8 FUN_10647a1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10647a1d0; end: 10647a1ff; -[SCContextV2ActionsHandler setPlaceCardV2Context:] */

void FUN_10647a1d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a200; end: 10647a22f; -[SCContextV2ActionsHandler setItemInstanceViewFactory:] */

void FUN_10647a200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a230; end: 10647a237; -[SCContextV2ActionsHandler mentionSigBottomButtonsEnabled] */

undefined8 FUN_10647a230(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10647a238; end: 10647a267; -[SCContextV2ActionsHandler setMentionSigBottomButtonsEnabled:] */

void FUN_10647a238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a268; end: 10647a26f; -[SCContextV2ActionsHandler storyPlayer] */

undefined8 FUN_10647a268(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10647a270; end: 10647a29f; -[SCContextV2ActionsHandler setStoryPlayer:] */

void FUN_10647a270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a2a0; end: 10647a2a7; -[SCContextV2ActionsHandler networkingClient] */

undefined8 FUN_10647a2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10647a2a8; end: 10647a2d7; -[SCContextV2ActionsHandler setNetworkingClient:] */

void FUN_10647a2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a2d8; end: 10647a2df; -[SCContextV2ActionsHandler allowRelatedStories] */

undefined8 FUN_10647a2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10647a2e0; end: 10647a30f; -[SCContextV2ActionsHandler setAllowRelatedStories:] */

void FUN_10647a2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10647a310; end: 10647a4db; -[SCContextV2ActionsHandler .cxx_destruct] */

void FUN_10647a310(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10647a4dc; end: 10647a7ff; -[SCContextActionMenuOperaDataSource initWithOperaEventAnnouncer:operaPageObservable:logger:filter:circumstanceEngine:operaNavigationStyle:boostCoordinator:delegate:contextExperimentService:currentUserId:valdiRuntimeProvider:snapProServices:] */

undefined8 *
FUN_10647a4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f1500;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_10);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = 1;
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x10) = 0;
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    func_0x00010beaaa60(puVar1);
    func_0x00010beb01c0(puVar1);
    func_0x00010beac920(puVar1);
    func_0x00010beaeae0(puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10647a800; end: 10647a863;  */

void FUN_10647a800(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_2;
    _objc_release(uVar1);
    func_0x00010be6f000(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10647a864; end: 10647aad3; -[SCContextActionMenuOperaDataSource _setupSubscribeListening] */

void FUN_10647a864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf1f3c0();
  if ((int)uVar1 == 0) goto LAB_10647aa84;
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar3;
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lVar8 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar8 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010c118b40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10647a98c;
    }
    lVar8 = 0;
  }
  else {
LAB_10647a98c:
    lVar8 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_initWeak(auStack_58,param_1);
  lVar4 = lVar8;
  func_0x00010bfa7b60(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e0ea0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar7 = lVar6;
  func_0x00010c25ff60(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar8);
LAB_10647aa84:
  _objc_release(uVar2);
  return;
}



/* Entry: 10647aad4; end: 10647ab1b;  */

void FUN_10647aad4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be314c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647ab1c; end: 10647ad23; -[SCContextActionMenuOperaDataSource _setupAttributionListening] */

void FUN_10647ab1c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c24afc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c118b40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010c24afc0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar4 = uVar5;
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 10647ad24; end: 10647adcb;  */

void FUN_10647ad24(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10647adcc; end: 10647ae3b;  */

void FUN_10647adcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf0ea40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be25f00(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647ae3c; end: 10647aeab; -[SCContextActionMenuOperaDataSource _handleAttributionUpdate:] */

void FUN_10647ae3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  *(bool *)(param_1 + 0x70) = lVar2 != 0;
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be6f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__pageChanged__1125795a0,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10647aeac; end: 10647c1eb; -[SCContextActionMenuOperaDataSource _pageChanged:] */

void FUN_10647aeac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  ulong uVar31;
  long lVar32;
  uint uStack_21c;
  uint uStack_218;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  cVar3 = *(char *)(param_1 + 0x70);
  uVar31 = *(ulong *)(param_1 + 0x78);
  cVar4 = *(char *)(param_1 + 0x80);
  uVar29 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(lVar2);
  _objc_retain(uVar31);
  _objc_retain(uVar29);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar9 = param_3;
  func_0x00010c06b7e0();
  uVar6 = (uint)uVar9;
  uVar9 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9a78;
  func_0x00010bef5400(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1f3c0();
  iVar7 = (int)uVar12;
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = uVar11;
  func_0x00010c08bda0();
  if (((uVar9 == 0x19) || (uVar9 = uVar11, func_0x00010c08bda0(), uVar9 == 0xe)) ||
     (uVar9 = uVar11, func_0x00010c08bda0(), uVar9 == 9)) {
    uStack_218 = uVar6 ^ 1;
  }
  else {
    uVar9 = uVar11;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c23a020();
    uStack_218 = (uint)uVar12 & (uVar6 ^ 1);
    _objc_release(uVar9);
  }
  uVar9 = uVar11;
  func_0x00010c08bda0();
  if ((uVar9 == 0x19) || (uVar9 = uVar11, func_0x00010c08bda0(), uVar9 == 0xe)) {
    uStack_21c = uVar6 ^ 1;
  }
  else {
    uVar9 = uVar11;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c23a020();
    uStack_21c = (uint)uVar12 & (uVar6 ^ 1);
    _objc_release(uVar9);
  }
  uVar9 = uVar11;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar12;
  func_0x00010c08fa60();
  uVar13 = uVar11;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  if (uVar28 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar9);
  if ((uVar1 != 0) && (uVar9 = uVar1, func_0x00010bf1f3c0(), (uVar9 & 1) == 0)) {
    uVar15 = 0x1c;
    FUN_106480874(0x1c,uVar6,iVar7,1,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar15);
  }
  uVar9 = uVar11;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c082620();
  _objc_release(uVar9);
  uVar9 = uVar11;
  func_0x00010c290fa0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar28;
  func_0x000108437e88();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar31;
  func_0x00010c0720c0();
  _objc_release(uVar13);
  _objc_release(uVar28);
  _objc_release(uVar9);
  if (((((int)uVar12 != 0) && (cVar3 != '\0')) && ((uVar16 & 1) == 0)) &&
     ((uVar9 = uVar11, func_0x00010c08bda0(), uVar9 != 0x21 &&
      (uVar9 = uVar11, func_0x00010c08bda0(), uVar9 != 0x1b)))) {
    uVar9 = uVar11;
    func_0x00010c08bda0();
    if (uVar9 == 0x12) {
      uVar9 = uVar11;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar9);
      if (uVar12 == 0) goto LAB_10647b294;
    }
    uVar15 = 0x26;
    FUN_106480874(0x26,uVar6,iVar7,1,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar15);
  }
LAB_10647b294:
  uVar9 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar28 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar10);
  uVar9 = uVar12;
  if ((uVar28 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar12);
  uVar12 = uVar9;
  func_0x00010bf1f3c0();
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126c3320;
  uVar9 = uVar11;
  func_0x00010c25a6e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0729e0();
  _objc_release(uVar28);
  _objc_release(uVar9);
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar28;
  func_0x00010bf1f3c0();
  if ((uVar13 & 1) == 0) {
    _objc_release(uVar28);
    _objc_release(uVar9);
    _objc_release(param_3);
LAB_10647b4b8:
    uVar9 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar28;
    if ((int)uVar12 != 0) {
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar28);
    }
    uVar12 = uVar9;
    if ((int)puVar10 != 0) {
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
    }
    _objc_retain(uVar12);
    uVar9 = uVar12;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (uVar9 != 0) {
      uVar28 = 0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(uVar12);
        }
        lVar32 = *(long *)(uVar28 * 8);
        uVar13 = param_3;
        func_0x00010c118b40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        uVar13 = param_3;
        func_0x00010c118b40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar13);
        func_0x00010c067fc0();
        if (lVar32 == 0x14) {
          uVar13 = uVar16;
          func_0x00010bf125a0(uVar16);
          uVar27 = (uint)uVar13 & (uint)(uVar17 == 0);
        }
        else {
          uVar27 = 1;
        }
        FUN_106480874(lVar32,uVar6,iVar7,uVar27,uVar14);
        _objc_retainAutoreleasedReturnValue();
        if (lVar32 != 0) {
          func_0x00010befa120(puVar8);
        }
        _objc_release(lVar32);
        _objc_release(uVar16);
        uVar28 = uVar28 + 1;
      } while (uVar9 != uVar28);
      uVar9 = uVar12;
      func_0x00010bf52a60();
    }
    _objc_release(uVar12);
    _objc_release(uVar12);
  }
  else {
    uVar13 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar13;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar13);
    _objc_release(uVar28);
    _objc_release(uVar9);
    _objc_release(param_3);
    if (uVar16 == 0) goto LAB_10647b4b8;
    uVar9 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar28;
    if ((int)uVar12 != 0) {
      func_0x00010bfaea20(uVar28);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar28);
    }
    uVar12 = uVar9;
    if ((int)puVar10 != 0) {
      func_0x00010bfaea20(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
    }
    func_0x00010befa160(puVar8);
    _objc_release(uVar12);
  }
  _objc_retain(uVar11);
  uVar9 = uVar11;
  func_0x00010c08bda0();
  if ((uVar9 & 0xfffffffffffffffe) == 0x12) {
    puStack_140 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x2020000000;
    uStack_130 = 0;
    puStack_160 = &uStack_168;
    uStack_168 = 0;
    uStack_158 = 0x2020000000;
    uStack_150 = 0;
    uVar9 = uVar11;
    func_0x00010c25a6e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar12;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = (code *)0x1064812c4;
    puStack_90 = &UNK_110924290;
    puStack_88 = &uStack_148;
    puStack_80 = &uStack_168;
    func_0x00010c0c1320();
    _objc_release(uVar28);
    _objc_release(uVar12);
    _objc_release(uVar9);
    if (*(char *)(puStack_140 + 3) == '\x01') {
      bVar5 = *(byte *)(puStack_160 + 3);
      __Block_object_dispose(&uStack_168,8);
      __Block_object_dispose(&uStack_148,8);
      _objc_release(uVar11);
      if ((bVar5 & 1) == 0) {
        puVar18 = puVar8;
        func_0x00010bfece40();
        uVar15 = 0x2c;
        FUN_106480874(0x2c,uVar6,iVar7,1,uVar14);
        _objc_retainAutoreleasedReturnValue();
        if (puVar18 == (undefined *)0x7fffffffffffffff) {
          func_0x00010befa120(puVar8);
        }
        else {
          func_0x00010c066b00(puVar8);
        }
        _objc_release(uVar15);
      }
    }
    else {
      __Block_object_dispose(&uStack_168,8);
      __Block_object_dispose(&uStack_148,8);
      _objc_release(uVar11);
    }
  }
  else {
    _objc_release(uVar11);
  }
  uVar9 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126bfe00;
  func_0x00010bef4720(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(uVar9);
  if (uVar6 != 0) {
    uVar9 = uVar12;
    func_0x00010c067fc0();
    if (uVar9 == 4) {
      _objc_retain(puVar8);
      _objc_retain(uVar14);
      puVar18 = puVar8;
      func_0x00010bfece40();
      if (puVar18 == (undefined *)0x7fffffffffffffff) {
        func_0x00010bf529e0(puVar8);
      }
      uVar15 = 0x36;
      FUN_106480874(0x36,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(puVar8);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(puVar8);
    }
    else if (uVar9 == 3) {
      _objc_retain(puVar8);
      _objc_retain(uVar14);
      puVar18 = puVar8;
      func_0x00010bfece40();
      if (puVar18 == (undefined *)0x7fffffffffffffff) {
        func_0x00010bf529e0(puVar8);
      }
      else {
        func_0x00010c12d3c0(puVar8);
      }
      uVar15 = 2;
      FUN_106480874(2,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      func_0x00010c066b00(puVar8);
      _objc_release(uVar15);
      _objc_release(puVar8);
    }
    else if (uVar9 == 2) {
      _objc_retain(puVar8);
      _objc_retain(uVar14);
      _objc_retain(uVar29);
      puVar18 = puVar8;
      func_0x00010bfed480(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d480(puVar8);
      puVar19 = (undefined *)0x2e;
      FUN_106480874(0x2e,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = 0x2f;
      puStack_a8 = puVar19;
      FUN_106480874(0x2f,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      pcVar20 = (code *)0x30;
      uStack_a0 = uVar15;
      FUN_106480874(0x30,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = (undefined *)0x31;
      pcStack_98 = pcVar20;
      FUN_106480874(0x31,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = (undefined8 *)0x32;
      puStack_90 = puVar21;
      FUN_106480874(0x32,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = (undefined8 *)0x33;
      puStack_88 = puVar22;
      FUN_106480874(0x33,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = 0x35;
      puStack_80 = puVar23;
      FUN_106480874(0x35,1,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar24;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar30;
      func_0x00010c0d3c80();
      _objc_release(puVar30);
      _objc_release(uVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(pcVar20);
      _objc_release(uVar15);
      _objc_release(puVar19);
      uVar15 = uVar29;
      func_0x00010bf1f440();
      if ((int)uVar15 != 0) {
        uVar15 = 0x34;
        FUN_106480874(0x34,1,iVar7,1,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066b00(puVar25);
        _objc_release(uVar15);
      }
      puVar30 = puVar8;
      func_0x00010bfece40();
      if (puVar30 == (undefined *)0x7fffffffffffffff) {
        func_0x00010bf529e0();
      }
      func_0x00010bf529e0();
      puVar30 = puVar25;
      func_0x00010bf529e0();
      if (puVar30 != (undefined *)0x0) {
        puVar30 = (undefined *)0x0;
        do {
          puVar19 = puVar25;
          func_0x00010c0dfd40(puVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066b00(puVar8);
          _objc_release(puVar19);
          puVar19 = puVar25;
          func_0x00010bf529e0();
          puVar30 = puVar30 + 1;
        } while (puVar30 < puVar19);
      }
      _objc_release(puVar25);
      _objc_release(puVar18);
      _objc_release(uVar29);
      _objc_release(uVar14);
      _objc_release(puVar8);
    }
  }
  if (lVar2 != 0) {
    lVar26 = lVar2;
    func_0x00010bf1f3c0();
    uVar15 = 0x18;
    if ((int)lVar26 != 0) {
      uVar15 = 0x19;
    }
    FUN_106480874(uVar15,uVar6,iVar7,1,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar15);
  }
  if (iVar7 != 0) {
    uVar15 = 0xd;
    FUN_106480874(0xd,uVar6,1,1,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar15);
  }
  uVar9 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2d20;
  func_0x00010c06bbc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar28;
  func_0x00010bf1f3c0();
  _objc_release(uVar28);
  _objc_release(puVar18);
  _objc_release(uVar9);
  if ((int)uVar13 != 0) {
    uVar15 = 0x2b;
    FUN_106480874(0x2b,uVar6,iVar7,1,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar15);
  }
  if (((ulong)puVar10 & 1) != 0) goto LAB_10647c008;
  uVar9 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar28;
  func_0x00010bf1f3c0();
  if ((uVar13 & 1) == 0) {
    _objc_release(uVar28);
LAB_10647bfc0:
    _objc_release(uVar9);
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc0000000;
    pcStack_98 = FUN_106481198;
    puStack_90 = &UNK_110924170;
    puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,(char)uStack_218);
    puVar10 = puVar8;
    func_0x00010bf04920();
    _objc_release(uVar28);
    _objc_release(uVar9);
    if (((ulong)puVar10 & 1) == 0) {
      if (uStack_21c != 0) {
        uVar15 = 6;
        FUN_106480874(6,uVar6,iVar7,1,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
        _objc_release(uVar15);
      }
      uVar9 = 0x20;
      if (uStack_218 == 0) {
        uVar9 = 5;
      }
      FUN_106480874(uVar9,uVar6,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8);
      goto LAB_10647bfc0;
    }
  }
  if (cVar4 != '\0') {
    uVar15 = 0x28;
    FUN_106480874(0x28,uVar6,iVar7,1,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar15);
  }
LAB_10647c008:
  uVar9 = uVar11;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010c07dd40();
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126b2340;
  if ((int)uVar28 == 0) {
    uVar9 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075040();
    _objc_release(uVar9);
    if ((((int)puVar10 != 0) &&
        (puVar10 = puVar8, func_0x00010bfece40(), puVar10 != (undefined *)0x7fffffffffffffff)) &&
       (uVar15 = uVar29, func_0x00010bf1f440(), (int)uVar15 != 0)) {
      uVar15 = 0x37;
      FUN_106480874(0x37,uVar6,iVar7,1,uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(puVar8);
      _objc_release(uVar15);
    }
    puVar10 = puVar8;
    func_0x00010bf51e00();
  }
  else {
    puVar18 = puVar8;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010bf51e00();
    _objc_release(puVar18);
  }
  _objc_release(uVar12);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(puVar8);
  _objc_release(uVar29);
  _objc_release(uVar31);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar8 = puVar10;
  func_0x00010c161b60(param_1);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_168,8);
  __Block_object_dispose(&uStack_148,8);
  __Unwind_Resume();
  _objc_retain(puVar8);
  if ((*(long *)(param_3 + 0x28) == 0) ||
     ((puVar8 != (undefined *)0x0 &&
      (puVar10 = puVar8, func_0x00010c071f40(), ((ulong)puVar10 & 1) == 0)))) {
    _objc_retain(puVar8);
    uVar29 = *(undefined8 *)(param_3 + 0x28);
    *(undefined **)(param_3 + 0x28) = puVar8;
    _objc_release(uVar29);
    func_0x00010be6f000(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10647c1ec; end: 10647c24f; -[SCContextActionMenuOperaDataSource _handleSubscribedUpdate:] */

void FUN_10647c1ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x28) == 0) ||
     ((param_3 != 0 && (uVar1 = param_3, func_0x00010c071f40(), (uVar1 & 1) == 0)))) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = param_3;
    _objc_release(uVar2);
    func_0x00010be6f000(param_1,param_2,*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10647c250; end: 10647c4bf; -[SCContextActionMenuOperaDataSource _setupFavoriteListening] */

void FUN_10647c250(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c06b7e0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf1f3c0();
  if (((int)uVar2 != 0) && ((uVar1 & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_1);
    lVar4 = lVar5;
    func_0x000107b2883c();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x000107b288cc(lVar5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c0e0480(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar5);
      _objc_copyWeak(auStack_70,auStack_68);
      uVar11 = uVar10;
      func_0x00010c25ff60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_70);
      _objc_release(lVar5);
    }
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar5);
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 10647c4c0; end: 10647c59b;  */

void FUN_10647c4c0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5b98;
  _objc_opt_class(PTR_PTR_1126b5b98);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9b320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b611854(uVar1,uVar4);
  _objc_release(uVar1);
  _objc_release(uVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be29560(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647c59c; end: 10647c5ff; -[SCContextActionMenuOperaDataSource _handleFavoritedUpdate:] */

void FUN_10647c59c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x30) == 0) ||
     ((param_3 != 0 && (uVar1 = param_3, func_0x00010c071f40(), (uVar1 & 1) == 0)))) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = param_3;
    _objc_release(uVar2);
    func_0x00010be6f000(param_1,param_2,*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10647c600; end: 10647c907; -[SCContextActionMenuOperaDataSource _setupPartnershipAdCodeListening] */

void FUN_10647c600(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined1 **)(param_1 + 8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR____CFConstantStringClassReference_110dcab38;
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c29d360();
  if (((puVar1 == (undefined1 *)0x7) ||
      (puVar1 = puVar2, func_0x00010c29d360(), puVar1 == (undefined1 *)0x67)) ||
     (puVar1 = puVar2, func_0x00010c29d360(), puVar1 == (undefined1 *)0x59)) {
    puVar1 = puVar2;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar3 == (undefined1 *)0x0) {
      puVar1 = puVar2;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c25b160();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
    }
    puVar1 = puVar3;
    func_0x00010c08fa60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar6 = *(long *)(param_1 + 0x90);
      func_0x00010c1176a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c1168c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_128 = 0;
      puStack_130 = (undefined *)0x0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(lVar8);
      ppuVar14 = &puStack_130;
      param_4 = auStack_f0;
      lVar7 = lVar8;
      func_0x00010bf52a60();
      if (lVar7 != 0) {
        lVar6 = *plStack_120;
        do {
          lVar15 = 0;
          do {
            if (*plStack_120 != lVar6) {
              _objc_enumerationMutation(lVar8);
            }
            lVar10 = *(long *)(lStack_128 + lVar15 * 8);
            func_0x00010bf25020();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar10);
            if (lVar11 != 0) {
              func_0x00010befa120(ppuVar9);
            }
            _objc_release(lVar11);
            lVar15 = lVar15 + 1;
          } while (lVar7 != lVar15);
          ppuVar14 = &puStack_130;
          param_4 = auStack_f0;
          lVar7 = lVar8;
          func_0x00010bf52a60();
        } while (lVar7 != 0);
      }
      _objc_release(lVar8);
      ppuVar12 = ppuVar9;
      func_0x00010bf529e0();
      if (ppuVar12 != (undefined **)0x0) {
        _objc_initWeak(auStack_138,param_1);
        _objc_retain();
        ppuVar14 = ppuVar9;
        param_4 = puVar3;
        func_0x00010be1da00(param_1);
        _objc_release(param_1);
        _objc_destroyWeak(auStack_138);
      }
      _objc_release(ppuVar9);
      _objc_release(lVar8);
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(ppuVar14);
  _objc_retain(param_4);
  uVar13 = *(undefined8 *)(puVar2 + 0x88);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(ppuVar14);
  func_0x00010bfc69a0(uVar13);
  _objc_release(uVar13);
  _objc_release(param_4);
  _objc_release(ppuVar14);
  _objc_release(param_4);
  _objc_release(ppuVar14);
  return;
}



/* Entry: 10647c908; end: 10647ca53; -[SCContextActionMenuOperaDataSource _getCanUseAdCodeWithProfileList:profileId:] */

void FUN_10647c908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10647c9d8;
  puStack_50 = &UNK_110868668;
  uStack_48 = param_3;
  uStack_40 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc69a0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10647ca54; end: 10647cabb; -[SCContextActionMenuOperaDataSource _handlePartnershipAdCodeUpdate:] */

void FUN_10647ca54(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  if (*(byte *)(param_1 + 0x80) != param_3) {
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_10647cabc;
    puStack_28 = &UNK_110845ce0;
    uStack_18 = (undefined1)param_3;
    lStack_20 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_40);
  }
  return;
}



/* Entry: 10647cabc; end: 10647cad3;  */

void FUN_10647cabc(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x80) = *(undefined1 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010be6f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__pageChanged__1125795a0,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return;
}



/* Entry: 10647cad4; end: 10647cc7b; -[SCContextActionMenuOperaDataSource setActionMenuItems:] */

void FUN_10647cad4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  if (uVar2 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar3 = uVar2;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_10647cc3c;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = param_3;
    _objc_release(uVar1);
    uVar3 = *(ulong *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uVar2 = uVar3;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x0001006372a4();
      _objc_release(uVar3);
    }
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10647cc7c;
    puStack_58 = &UNK_110924060;
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x000100504554(uVar2,&puStack_70);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(ulong *)(param_1 + 0xb0) = uVar3;
    _objc_release(uVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeea80();
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar2);
LAB_10647cc3c:
  _objc_release(param_3);
  return;
}



/* Entry: 10647cc7c; end: 10647ccdf;  */

void FUN_10647cc7c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beee420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10647cce0; end: 10647df8b; -[SCContextActionMenuOperaDataSource actionForOption:] */

void FUN_10647cce0(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined *puStack_860;
  undefined1 auStack_858 [8];
  undefined *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined *puStack_838;
  undefined1 auStack_830 [8];
  undefined *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined *puStack_810;
  undefined1 auStack_808 [8];
  undefined *puStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined *puStack_7e8;
  undefined1 auStack_7e0 [8];
  undefined *puStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined *puStack_7c0;
  undefined1 auStack_7b8 [8];
  undefined *puStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined *puStack_798;
  undefined1 auStack_790 [8];
  undefined *puStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined *puStack_770;
  undefined1 auStack_768 [8];
  undefined *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined *puStack_748;
  undefined1 auStack_740 [8];
  undefined *puStack_738;
  undefined8 uStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  undefined1 auStack_718 [8];
  undefined *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined1 auStack_6f0 [8];
  undefined *puStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined *puStack_6d0;
  undefined1 auStack_6c8 [8];
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined *puStack_6a8;
  undefined1 auStack_6a0 [8];
  undefined *puStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined *puStack_680;
  undefined1 auStack_678 [8];
  undefined *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined *puStack_658;
  undefined1 auStack_650 [8];
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *puStack_630;
  undefined1 auStack_628 [8];
  undefined *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  undefined1 auStack_600 [8];
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined *puStack_5e0;
  undefined1 auStack_5d8 [8];
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined1 auStack_5b0 [8];
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined *puStack_590;
  undefined1 auStack_588 [8];
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  undefined1 auStack_560 [8];
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined *puStack_540;
  undefined1 auStack_538 [8];
  undefined *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined1 auStack_510 [8];
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined1 auStack_4e8 [8];
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  undefined1 auStack_498 [8];
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined1 auStack_470 [8];
  undefined *puStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined *puStack_450;
  undefined1 auStack_448 [8];
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined1 auStack_420 [8];
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined1 auStack_3f8 [8];
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  ppuVar4 = param_3;
  func_0x000107b55a30(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c27dd80();
  ppuVar5 = (undefined **)0x0;
  ppuVar2 = ppuVar5;
  switch(ppuVar1) {
  case (undefined **)0x0:
    _objc_release(ppuVar4);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x10647e2b4;
    puStack_e0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_d8,auStack_58);
    ppuVar5 = &puStack_f8;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_d8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50978;
    goto code_r0x00010647dca8;
  case (undefined **)0x1:
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10647e334;
    puStack_108 = &UNK_1108434b0;
    ppuVar1 = &puStack_120;
    _objc_copyWeak(auStack_100,auStack_58);
    ppuVar5 = &puStack_120;
    break;
  case (undefined **)0x2:
  case (undefined **)0xe:
    _objc_release(ppuVar4);
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_10647e464;
    puStack_130 = &UNK_1108434b0;
    _objc_copyWeak(auStack_128,auStack_58);
    ppuVar5 = &puStack_148;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_128);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50998;
    goto code_r0x00010647dca8;
  case (undefined **)0x3:
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x10647e4e4;
    puStack_158 = &UNK_1108434b0;
    ppuVar1 = &puStack_170;
    _objc_copyWeak(auStack_150,auStack_58);
    ppuVar5 = &puStack_170;
    break;
  case (undefined **)0x4:
    puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_258 = 0xc2000000;
    uStack_250 = 0x10647e7e4;
    puStack_248 = &UNK_1108434b0;
    ppuVar1 = &puStack_260;
    _objc_copyWeak(auStack_240,auStack_58);
    ppuVar5 = &puStack_260;
    break;
  case (undefined **)0x5:
  case (undefined **)0xf:
  case (undefined **)0x20:
    ppuVar5 = param_3;
    func_0x00010c27dd80();
    _objc_release(ppuVar4);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50918;
    if (ppuVar5 == (undefined **)0x20) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e508f8;
    }
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10647df8c;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    ppuVar5 = &puStack_80;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_60);
    goto code_r0x00010647dca8;
  case (undefined **)0x6:
    _objc_release(ppuVar4);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10647e0e8;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_58);
    ppuVar5 = &puStack_a8;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_88);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50938;
    goto code_r0x00010647dca8;
  case (undefined **)0x7:
  case (undefined **)0x8:
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    uStack_228 = 0x10647e764;
    puStack_220 = &UNK_1108434b0;
    ppuVar1 = &puStack_238;
    _objc_copyWeak(auStack_218,auStack_58);
    ppuVar5 = &puStack_238;
    break;
  case (undefined **)0x9:
    puStack_468 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_460 = 0xc2000000;
    pcStack_458 = FUN_10647f074;
    puStack_450 = &UNK_1108434b0;
    ppuVar1 = &puStack_468;
    _objc_copyWeak(auStack_448,auStack_58);
    ppuVar5 = &puStack_468;
    break;
  case (undefined **)0xa:
    puStack_490 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_488 = 0xc2000000;
    uStack_480 = 0x10647f0f4;
    puStack_478 = &UNK_1108434b0;
    ppuVar1 = &puStack_490;
    _objc_copyWeak(auStack_470,auStack_58);
    ppuVar5 = &puStack_490;
    break;
  case (undefined **)0xb:
    ppuVar5 = (undefined **)0x0;
    goto code_r0x00010647dca8;
  case (undefined **)0xc:
  case (undefined **)0x10:
  case (undefined **)0x11:
  case (undefined **)0x12:
    goto code_r0x00010647dd30;
  case (undefined **)0xd:
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    uStack_200 = 0x10647e6e4;
    puStack_1f8 = &UNK_1108434b0;
    ppuVar1 = &puStack_210;
    _objc_copyWeak(auStack_1f0,auStack_58);
    ppuVar5 = &puStack_210;
    break;
  case (undefined **)0x13:
    puStack_4b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4b0 = 0xc2000000;
    uStack_4a8 = 0x10647f174;
    puStack_4a0 = &UNK_1108434b0;
    ppuVar1 = &puStack_4b8;
    _objc_copyWeak(auStack_498,auStack_58);
    ppuVar5 = &puStack_4b8;
    break;
  case (undefined **)0x14:
    puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_320 = 0xc2000000;
    uStack_318 = 0x10647ea64;
    puStack_310 = &UNK_1108434b0;
    ppuVar1 = &puStack_328;
    _objc_copyWeak(auStack_308,auStack_58);
    ppuVar5 = &puStack_328;
    break;
  case (undefined **)0x15:
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x10647e564;
    puStack_180 = &UNK_1108434b0;
    ppuVar1 = &puStack_198;
    _objc_copyWeak(auStack_178,auStack_58);
    ppuVar5 = &puStack_198;
    break;
  case (undefined **)0x16:
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x10647e5e4;
    puStack_1a8 = &UNK_1108434b0;
    ppuVar1 = &puStack_1c0;
    _objc_copyWeak(auStack_1a0,auStack_58);
    ppuVar5 = &puStack_1c0;
    break;
  case (undefined **)0x17:
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x10647e664;
    puStack_1d0 = &UNK_1108434b0;
    ppuVar1 = &puStack_1e8;
    _objc_copyWeak(auStack_1c8,auStack_58);
    ppuVar5 = &puStack_1e8;
    goto code_r0x00010647dc38;
  case (undefined **)0x18:
    puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_410 = 0xc2000000;
    pcStack_408 = FUN_10647ee14;
    puStack_400 = &UNK_1108434b0;
    ppuVar1 = &puStack_418;
    _objc_copyWeak(auStack_3f8,auStack_58);
    ppuVar5 = &puStack_418;
    break;
  case (undefined **)0x19:
    puStack_440 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_438 = 0xc2000000;
    uStack_430 = 0x10647ef44;
    puStack_428 = &UNK_1108434b0;
    ppuVar1 = &puStack_440;
    _objc_copyWeak(auStack_420,auStack_58);
    ppuVar5 = &puStack_440;
    break;
  case (undefined **)0x1a:
    puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_280 = 0xc2000000;
    uStack_278 = 0x10647e864;
    puStack_270 = &UNK_1108434b0;
    ppuVar1 = &puStack_288;
    _objc_copyWeak(auStack_268,auStack_58);
    ppuVar5 = &puStack_288;
    break;
  case (undefined **)0x1b:
    puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d0 = 0xc2000000;
    uStack_2c8 = 0x10647e964;
    puStack_2c0 = &UNK_1108434b0;
    ppuVar1 = &puStack_2d8;
    _objc_copyWeak(auStack_2b8,auStack_58);
    ppuVar5 = &puStack_2d8;
    break;
  case (undefined **)0x1c:
    puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_370 = 0xc2000000;
    pcStack_368 = FUN_10647eb64;
    puStack_360 = &UNK_1108434b0;
    ppuVar1 = &puStack_378;
    _objc_copyWeak(auStack_358,auStack_58);
    ppuVar5 = &puStack_378;
    break;
  case (undefined **)0x1d:
    puStack_4e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4d8 = 0xc2000000;
    uStack_4d0 = 0x10647f1f4;
    puStack_4c8 = &UNK_1108434b0;
    ppuVar1 = &puStack_4e0;
    _objc_copyWeak(auStack_4c0,auStack_58);
    ppuVar5 = &puStack_4e0;
    break;
  case (undefined **)0x1e:
    puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_398 = 0xc2000000;
    pcStack_390 = FUN_10647ec94;
    puStack_388 = &UNK_1108434b0;
    _objc_copyWeak(auStack_380,auStack_58);
    ppuVar5 = &puStack_3a0;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_380);
    goto code_r0x00010647dca8;
  case (undefined **)0x1f:
    puStack_508 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_500 = 0xc2000000;
    uStack_4f8 = 0x10647f274;
    puStack_4f0 = &UNK_1108434b0;
    ppuVar1 = &puStack_508;
    _objc_copyWeak(auStack_4e8,auStack_58);
    ppuVar5 = &puStack_508;
    break;
  case (undefined **)0x21:
    puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2f8 = 0xc2000000;
    uStack_2f0 = 0x10647e9e4;
    puStack_2e8 = &UNK_1108434b0;
    ppuVar1 = &puStack_300;
    _objc_copyWeak(auStack_2e0,auStack_58);
    ppuVar5 = &puStack_300;
    break;
  case (undefined **)0x22:
    puStack_530 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_528 = 0xc2000000;
    uStack_520 = 0x10647f2f4;
    puStack_518 = &UNK_1108434b0;
    ppuVar1 = &puStack_530;
    _objc_copyWeak(auStack_510,auStack_58);
    ppuVar5 = &puStack_530;
    break;
  case (undefined **)0x23:
    puStack_558 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_550 = 0xc2000000;
    uStack_548 = 0x10647f374;
    puStack_540 = &UNK_1108434b0;
    ppuVar1 = &puStack_558;
    _objc_copyWeak(auStack_538,auStack_58);
    ppuVar5 = &puStack_558;
    break;
  case (undefined **)0x24:
    puStack_580 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_578 = 0xc2000000;
    uStack_570 = 0x10647f3f4;
    puStack_568 = &UNK_1108434b0;
    ppuVar1 = &puStack_580;
    _objc_copyWeak(auStack_560,auStack_58);
    ppuVar5 = &puStack_580;
    break;
  case (undefined **)0x25:
    puStack_670 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_668 = 0xc2000000;
    uStack_660 = 0x10647f6ec;
    puStack_658 = &UNK_1108434b0;
    ppuVar1 = &puStack_670;
    _objc_copyWeak(auStack_650,auStack_58);
    ppuVar5 = &puStack_670;
    break;
  case (undefined **)0x26:
    puStack_3f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3e8 = 0xc2000000;
    uStack_3e0 = 0x10647ed94;
    puStack_3d8 = &UNK_1108434b0;
    ppuVar1 = &puStack_3f0;
    _objc_copyWeak(auStack_3d0,auStack_58);
    ppuVar5 = &puStack_3f0;
code_r0x00010647dc38:
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(ppuVar1 + 4);
    goto code_r0x00010647dca8;
  case (undefined **)0x27:
    _objc_release(ppuVar4);
    puStack_698 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_690 = 0xc2000000;
    uStack_688 = 0x10647f76c;
    puStack_680 = &UNK_1108434b0;
    _objc_copyWeak(auStack_678,auStack_58);
    ppuVar5 = &puStack_698;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_678);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50a18;
    goto code_r0x00010647dca8;
  case (undefined **)0x28:
    puStack_6c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_6b8 = 0xc2000000;
    uStack_6b0 = 0x10647f7ec;
    puStack_6a8 = &UNK_1108434b0;
    ppuVar1 = &puStack_6c0;
    _objc_copyWeak(auStack_6a0,auStack_58);
    ppuVar5 = &puStack_6c0;
    break;
  case (undefined **)0x29:
    puStack_3c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3c0 = 0xc2000000;
    uStack_3b8 = 0x10647ed14;
    puStack_3b0 = &UNK_1108434b0;
    ppuVar1 = &puStack_3c8;
    _objc_copyWeak(auStack_3a8,auStack_58);
    ppuVar5 = &puStack_3c8;
    break;
  case (undefined **)0x2a:
    puStack_6e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_6e0 = 0xc2000000;
    uStack_6d8 = 0x10647f86c;
    puStack_6d0 = &UNK_1108434b0;
    ppuVar1 = &puStack_6e8;
    _objc_copyWeak(auStack_6c8,auStack_58);
    ppuVar5 = &puStack_6e8;
    break;
  case (undefined **)0x2b:
    _objc_release(ppuVar4);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10647e234;
    puStack_b8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_b0,auStack_58);
    ppuVar5 = &puStack_d0;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_b0);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50958;
    goto code_r0x00010647dca8;
  case (undefined **)0x2c:
    _objc_release(ppuVar4);
    puStack_710 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_708 = 0xc2000000;
    uStack_700 = 0x10647f8ec;
    puStack_6f8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_6f0,auStack_58);
    ppuVar5 = &puStack_710;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_6f0);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50a38;
    goto code_r0x00010647dca8;
  case (undefined **)0x2d:
    puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_348 = 0xc2000000;
    uStack_340 = 0x10647eae4;
    puStack_338 = &UNK_1108434b0;
    ppuVar1 = &puStack_350;
    _objc_copyWeak(auStack_330,auStack_58);
    ppuVar5 = &puStack_350;
    break;
  case (undefined **)0x2e:
    _objc_release(ppuVar4);
    puStack_738 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_730 = 0xc2000000;
    pcStack_728 = FUN_10647f96c;
    puStack_720 = &UNK_1108434b0;
    _objc_copyWeak(auStack_718,auStack_58);
    ppuVar5 = &puStack_738;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_718);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50a58;
    goto code_r0x00010647dca8;
  case (undefined **)0x2f:
    _objc_release(ppuVar4);
    puStack_760 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_758 = 0xc2000000;
    uStack_750 = 0x10647fab8;
    puStack_748 = &UNK_1108434b0;
    _objc_copyWeak(auStack_740,auStack_58);
    ppuVar5 = &puStack_760;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_740);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50a78;
    goto code_r0x00010647dca8;
  case (undefined **)0x30:
    _objc_release(ppuVar4);
    puStack_788 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_780 = 0xc2000000;
    uStack_778 = 0x10647fc04;
    puStack_770 = &UNK_1108434b0;
    _objc_copyWeak(auStack_768,auStack_58);
    ppuVar5 = &puStack_788;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_768);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50a98;
    goto code_r0x00010647dca8;
  case (undefined **)0x31:
    _objc_release(ppuVar4);
    puStack_7b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_7a8 = 0xc2000000;
    uStack_7a0 = 0x10647fd50;
    puStack_798 = &UNK_1108434b0;
    _objc_copyWeak(auStack_790,auStack_58);
    ppuVar5 = &puStack_7b0;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_790);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50ab8;
    goto code_r0x00010647dca8;
  case (undefined **)0x32:
    _objc_release(ppuVar4);
    puStack_7d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_7d0 = 0xc2000000;
    uStack_7c8 = 0x10647fe9c;
    puStack_7c0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_7b8,auStack_58);
    ppuVar5 = &puStack_7d8;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_7b8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50ad8;
    goto code_r0x00010647dca8;
  case (undefined **)0x33:
    _objc_release(ppuVar4);
    puStack_800 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_7f8 = 0xc2000000;
    uStack_7f0 = 0x10647ffe8;
    puStack_7e8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_7e0,auStack_58);
    ppuVar5 = &puStack_800;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_7e0);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50af8;
    goto code_r0x00010647dca8;
  case (undefined **)0x34:
    _objc_release(ppuVar4);
    puStack_828 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_820 = 0xc2000000;
    uStack_818 = 0x106480134;
    puStack_810 = &UNK_1108434b0;
    _objc_copyWeak(auStack_808,auStack_58);
    ppuVar5 = &puStack_828;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_808);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50b18;
    goto code_r0x00010647dca8;
  case (undefined **)0x35:
    _objc_release(ppuVar4);
    puStack_850 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_848 = 0xc2000000;
    uStack_840 = 0x106480280;
    puStack_838 = &UNK_1108434b0;
    _objc_copyWeak(auStack_830,auStack_58);
    ppuVar5 = &puStack_850;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_830);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50b38;
    goto code_r0x00010647dca8;
  case (undefined **)0x36:
    _objc_release(ppuVar4);
    puStack_878 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_870 = 0xc2000000;
    uStack_868 = 0x1064803cc;
    puStack_860 = &UNK_1108434b0;
    _objc_copyWeak(auStack_858,auStack_58);
    ppuVar5 = &puStack_878;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_858);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50b58;
    goto code_r0x00010647dca8;
  case (undefined **)0x37:
    _objc_release(ppuVar4);
    puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2a8 = 0xc2000000;
    uStack_2a0 = 0x10647e8e4;
    puStack_298 = &UNK_1108434b0;
    _objc_copyWeak(auStack_290,auStack_58);
    ppuVar5 = &puStack_2b0;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_290);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e509b8;
    goto code_r0x00010647dca8;
  case (undefined **)0x38:
    puStack_5a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_5a0 = 0xc2000000;
    uStack_598 = 0x10647f474;
    puStack_590 = &UNK_1108434b0;
    ppuVar1 = &puStack_5a8;
    _objc_copyWeak(auStack_588,auStack_58);
    ppuVar5 = &puStack_5a8;
    break;
  case (undefined **)0x39:
    puStack_5d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_5c8 = 0xc2000000;
    uStack_5c0 = 0x10647f4f4;
    puStack_5b8 = &UNK_1108434b0;
    ppuVar1 = &puStack_5d0;
    _objc_copyWeak(auStack_5b0,auStack_58);
    ppuVar5 = &puStack_5d0;
    break;
  case (undefined **)0x3a:
    puStack_5f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_5f0 = 0xc2000000;
    uStack_5e8 = 0x10647f574;
    puStack_5e0 = &UNK_1108434b0;
    ppuVar1 = &puStack_5f8;
    _objc_copyWeak(auStack_5d8,auStack_58);
    ppuVar5 = &puStack_5f8;
    break;
  case (undefined **)0x3b:
    _objc_release(ppuVar4);
    puStack_620 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_618 = 0xc2000000;
    uStack_610 = 0x10647f5f4;
    puStack_608 = &UNK_1108434b0;
    _objc_copyWeak(auStack_600,auStack_58);
    ppuVar5 = &puStack_620;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_600);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e509d8;
    goto code_r0x00010647dca8;
  case (undefined **)0x3c:
    _objc_release(ppuVar4);
    puStack_648 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_640 = 0xc2000000;
    uStack_638 = 0x10647f670;
    puStack_630 = &UNK_1108434b0;
    _objc_copyWeak(auStack_628,auStack_58);
    ppuVar5 = &puStack_648;
    _objc_retainBlock(ppuVar5);
    _objc_destroyWeak(auStack_628);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e509f8;
  default:
    goto code_r0x00010647dca8;
  }
  _objc_retainBlock(ppuVar5);
  _objc_destroyWeak(ppuVar1 + 4);
code_r0x00010647dca8:
  func_0x00010bf926c0();
  ppuVar2 = (undefined **)PTR_PTR_1126cad30;
  _objc_alloc(PTR_PTR_1126cad30);
  ppuVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010bfe5480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0530a0(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(ppuVar5);
code_r0x00010647dd30:
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10647df8c; end: 10647e233;  */

void FUN_10647df8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar3 = *(long *)(lVar1 + 0x18);
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c15ffa0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2cf0;
      func_0x00010bf4f080(PTR_PTR_1126b2cf0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar2,param_2,uVar4,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    puVar5 = PTR_PTR_1126b5bf0;
    func_0x00010c22ab20(PTR_PTR_1126b5bf0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68,puVar5);
    _objc_release(puVar5);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    puVar5 = PTR_PTR_1126b2d30;
    func_0x00010c15c9e0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b5c68;
    func_0x00010c22a700(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f81c0(param_1,param_2,puVar5,puVar6,puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10647e234; end: 10647e333;  */

void FUN_10647e234(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010beec5e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010beec5e0(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f81a0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647e334; end: 10647e463;  */

void FUN_10647e334(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bf8c140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5bf0;
  func_0x00010c109f20();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR____kCFBooleanTrue_11034ab68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  func_0x00010c0f81c0(param_1,param_2,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bf6c820(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f81a0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647e464; end: 10647eb63;  */

void FUN_10647e464(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bf6c820(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f81a0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647eb64; end: 10647ec93;  */

void FUN_10647eb64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5bf0;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR____kCFBooleanTrue_11034ab68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  func_0x00010c0f81c0(param_1,param_2,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf82f20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bf82f00(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f81a0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647ec94; end: 10647ee13;  */

void FUN_10647ec94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf82f20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bf82f00(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f81a0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647ee14; end: 10647f073;  */

void FUN_10647ee14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bfa0ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5bf0;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR____kCFBooleanTrue_11034ab68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  func_0x00010c0f81c0(param_1,param_2,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uStack_68 = 0x10647ef44;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = lVar6 + 0x20;
  puStack_a0 = puVar5;
  puStack_98 = puVar4;
  puStack_90 = puVar3;
  puStack_88 = puVar2;
  puStack_80 = puVar1;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010c27fa80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5bf0;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR____kCFBooleanFalse_11034ab60;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b8 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,&puStack_b8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  func_0x00010c0f81c0(lVar6,param_2,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = lVar6 + 0x20;
  _objc_loadWeakRetained(lVar6);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf14c20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bf14c20(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f81a0(lVar6,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10647f074; end: 10647f96b;  */

void FUN_10647f074(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf14c20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010bf14c20(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f81a0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647f96c; end: 106480517;  */

/* WARNING: Possible PIC construction at 0x00010647fa44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010647fb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010647fcdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010647fe28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010647ff74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001064800c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010648020c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106480358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001064804a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010648035c) */
/* WARNING: Removing unreachable block (ram,0x0001064803c8) */
/* WARNING: Removing unreachable block (ram,0x0001064803ac) */
/* WARNING: Removing unreachable block (ram,0x000106480210) */
/* WARNING: Removing unreachable block (ram,0x00010648027c) */
/* WARNING: Removing unreachable block (ram,0x000106480260) */
/* WARNING: Removing unreachable block (ram,0x0001064800c4) */
/* WARNING: Removing unreachable block (ram,0x000106480130) */
/* WARNING: Removing unreachable block (ram,0x000106480114) */
/* WARNING: Removing unreachable block (ram,0x00010647ff78) */
/* WARNING: Removing unreachable block (ram,0x00010647ffe4) */
/* WARNING: Removing unreachable block (ram,0x00010647ffc8) */
/* WARNING: Removing unreachable block (ram,0x00010647fe2c) */
/* WARNING: Removing unreachable block (ram,0x00010647fe98) */
/* WARNING: Removing unreachable block (ram,0x00010647fe7c) */
/* WARNING: Removing unreachable block (ram,0x00010647fce0) */
/* WARNING: Removing unreachable block (ram,0x00010647fd4c) */
/* WARNING: Removing unreachable block (ram,0x00010647fd30) */
/* WARNING: Removing unreachable block (ram,0x00010647fb94) */
/* WARNING: Removing unreachable block (ram,0x00010647fc00) */
/* WARNING: Removing unreachable block (ram,0x00010647fbe4) */
/* WARNING: Removing unreachable block (ram,0x00010647fa48) */
/* WARNING: Removing unreachable block (ram,0x00010647fab4) */
/* WARNING: Removing unreachable block (ram,0x00010647fa98) */
/* WARNING: Removing unreachable block (ram,0x0001064804a8) */
/* WARNING: Removing unreachable block (ram,0x000106480514) */
/* WARNING: Removing unreachable block (ram,0x0001064804f8) */

void FUN_10647f96c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010c1323e0(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3c80();
                    /* WARNING: Could not recover jumptable at 0x00010c0f81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performActionWithOperaEvent_cont_11261ba90,puVar1,puVar2,puVar3);
  return;
}



/* Entry: 106480518; end: 10648051f; -[SCContextActionMenuOperaDataSource performActionWithOperaEvent:contextLoggingAction:] */

void FUN_106480518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performActionWithOperaEvent_cont_11261ba90,param_3,param_4,0);
  return;
}



/* Entry: 106480520; end: 10648070b; -[SCContextActionMenuOperaDataSource performActionWithOperaEvent:contextLoggingAction:operaEventParams:] */

void FUN_106480520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c0b3940(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_5;
  func_0x00010c0dff20(param_5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0xa0);
    _objc_release(puVar2);
    if (lVar3 != 0) {
      puVar2 = *(undefined **)(param_1 + 0xa0);
      func_0x00010bf51e00(puVar2);
      puVar1 = PTR_PTR_1126b2d20;
      func_0x00010c0b3940(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(param_5,param_2,puVar2,puVar1);
      goto LAB_1064805ec;
    }
  }
  else {
LAB_1064805ec:
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  func_0x00010c0eb7c0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,*(undefined8 *)(param_1 + 8),
                      param_5);
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0258);
  if ((int)uVar4 != 0) {
    puVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110eb0298);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf1f3c0();
    if (((ulong)puVar1 & 1) == 0) {
      _objc_release(puVar2);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x60);
      func_0x000108f4b260();
      _objc_release(puVar2);
      if (lVar3 != 0) goto LAB_1064806e0;
    }
  }
  puVar2 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf4eb20(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf4eae0(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf4eb00(uVar6);
  func_0x00010bff0a60(puVar2,param_2,5,uVar4,uVar5,uVar6,4);
  func_0x00010c0a0480(*(undefined8 *)(param_1 + 0x18),param_2,param_4,0,0,puVar2);
  _objc_release(puVar2);
LAB_1064806e0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648070c; end: 106480713; -[SCContextActionMenuOperaDataSource contextActionSource] */

undefined8 FUN_10648070c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106480714; end: 106480743; -[SCContextActionMenuOperaDataSource setContextActionSource:] */

void FUN_106480714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106480744; end: 10648075b; -[SCContextActionMenuOperaDataSource delegate] */

void FUN_106480744(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10648075c; end: 106480767; -[SCContextActionMenuOperaDataSource setDelegate:] */

void FUN_10648075c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106480768; end: 10648076f; -[SCContextActionMenuOperaDataSource actions] */

undefined8 FUN_106480768(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106480770; end: 106480873; -[SCContextActionMenuOperaDataSource .cxx_destruct] */

void FUN_106480770(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106480874; end: 106481047;  */

void FUN_106480874(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  puVar3 = (undefined *)0x0;
  switch(param_1) {
  case 0:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    if ((param_2 & 1) == 0) {
      func_0x00010723c838();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010723ca18();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  default:
    goto LAB_106481024;
  case 2:
  case 0xe:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    if ((param_2 & 1) == 0) {
      func_0x00010723c850();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010723ca48();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 3:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c868();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c7f0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c820();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xd:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
      func_0x00010723c880();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010723ca30();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 0x14:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c970();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x18:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c988();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x19:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c9a0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x1a:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c9d0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x1b:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723ca00();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x1c:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar1 = puVar3;
    func_0x00010649131c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480f40;
  case 0x1e:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c9b8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x20:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c808();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x21:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar1 = puVar3;
    func_0x00010723ca90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
code_r0x000106480f40:
    func_0x00010c056280(puVar3);
    _objc_release(puVar2);
    goto code_r0x00010648101c;
  case 0x22:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723caa8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x23:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cac0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x24:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cad8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x26:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723caf0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x27:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010b75e41c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x28:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cb08();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x29:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010b75e41c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2a:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cb20();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2b:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cb38();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2c:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cb50();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x2d:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cb68();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2e:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cb80();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x2f:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cb98();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x30:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cbb0();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x31:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cbc8();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x32:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cbe0();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x33:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cbf8();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x34:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cc10();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x35:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cc28();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106480fb0;
  case 0x36:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723cc40();
    _objc_retainAutoreleasedReturnValue();
code_r0x000106480fb0:
    func_0x00010c056260(puVar3);
    goto code_r0x00010648101c;
  case 0x37:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x00010723c9e8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0562c0(puVar3);
    goto code_r0x00010648101c;
  case 0x3b:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x000108f59284();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x3c:
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar1 = puVar3;
    func_0x000108f594c4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c056280(puVar3);
code_r0x00010648101c:
  _objc_release(puVar1);
LAB_106481024:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106481048; end: 106481067;  */

bool FUN_106481048(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 != 0x1a;
}



/* Entry: 106481068; end: 10648111f;  */

bool FUN_106481068(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if ((((lVar2 == 6) || (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 5)) ||
      (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 0x20)) ||
     (((lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 4 ||
       (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 0xf)) ||
      ((lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 0x22 ||
       (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 3)))))) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010c27dd80(param_2);
    bVar1 = lVar2 != 0x1a;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106481120; end: 106481197;  */

bool FUN_106481120(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067ec0(param_2);
  return (int)param_2 != 0x1a;
}



/* Entry: 106481198; end: 10648127b;  */

bool FUN_106481198(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x20);
  func_0x00010c27dd80(param_2);
  lVar1 = 0x20;
  if (cVar2 == '\0') {
    lVar1 = 5;
  }
  return param_2 == lVar1;
}



/* Entry: 10648127c; end: 10648129b;  */

bool FUN_10648127c(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 0x1a;
}



/* Entry: 10648129c; end: 1064812eb;  */

void FUN_10648129c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e50b78);
  return;
}



/* Entry: 1064812ec; end: 10648134f;  */

bool FUN_1064812ec(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if ((lVar2 == 0) || (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 0x27)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c27dd80(param_2);
    bVar1 = lVar2 == 2;
  }
  _objc_release(param_2);
  return bVar1;
}


