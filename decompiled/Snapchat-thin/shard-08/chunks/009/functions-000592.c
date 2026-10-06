/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106731140; end: 1067311cb; -[SCLELayoutSectionHeader hash] */

undefined8 * FUN_106731140(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106731268:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106731274;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_106731274;
        }
        goto LAB_106731268;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106731274:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1067311cc; end: 10673128f; -[SCLELayoutSectionHeader isEqual:] */

long FUN_1067311cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106731268:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106731274;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_106731274;
        }
        goto LAB_106731268;
      }
    }
    lVar4 = 0;
  }
LAB_106731274:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106731290; end: 106731297; -[SCLELayoutSectionHeader elementKind] */

undefined8 FUN_106731290(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106731298; end: 10673129f; -[SCLELayoutSectionHeader height] */

undefined8 FUN_106731298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067312a0; end: 1067312ab; -[SCLELayoutSectionHeader .cxx_destruct] */

void FUN_1067312a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067312ac; end: 106731327; +[SCLPLensCollectionResponse descriptor] */

undefined * FUN_1067312ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3560,
                        &PTR____CFConstantStringClassReference_110e5a8b8,&PTR_DAT_11315ac50,
                        &PTR_s_id_p_11315aca8,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3ca8 = puVar1;
  }
  return puRam00000001136c3ca8;
}



/* Entry: 106731328; end: 1067313a3; +[SCLPCtaItem descriptor] */

undefined * FUN_106731328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af35b0,
                        &PTR____CFConstantStringClassReference_110e5a8d8,&PTR_DAT_11315ac50,
                        &PTR_s_lensId_11315ac68,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3cb0 = puVar1;
  }
  return puRam00000001136c3cb0;
}



/* Entry: 1067313a4; end: 10673141f; +[SCLensExplorerLensExplorerItem descriptor] */

undefined * FUN_1067313a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3650,
                        &PTR____CFConstantStringClassReference_110e5a8f8,&PTR_DAT_11315ad88,
                        &PTR_DAT_11315aea0,0xb,0x60,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3cb8 = puVar1;
  }
  return puRam00000001136c3cb8;
}



/* Entry: 106731420; end: 10673149b; +[SCLensExplorerImageSequence descriptor] */

undefined * FUN_106731420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af36a0,
                        &PTR____CFConstantStringClassReference_110e5a918,&PTR_DAT_11315ad88,
                        &PTR_DAT_11315ae40,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3cc0 = puVar1;
  }
  return puRam00000001136c3cc0;
}



/* Entry: 10673149c; end: 106731503; +[SCLensExplorerGetLensExplorerRequest descriptor] */

void FUN_10673149c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af36f0,
                        &PTR____CFConstantStringClassReference_110e5a938,&PTR_DAT_11315ad88,
                        &PTR_s_limit_11315ae00,2,0xc,0x1c);
    puRam00000001136c3cc8 = puVar1;
  }
  return;
}



/* Entry: 106731504; end: 10673156b; +[SCLensExplorerGetLensExplorerResponse descriptor] */

void FUN_106731504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3740,
                        &PTR____CFConstantStringClassReference_110e5a958,&PTR_DAT_11315ad88,
                        &PTR_DAT_11315ada0,1,0x10,0x1c);
    puRam00000001136c3cd0 = puVar1;
  }
  return;
}



/* Entry: 10673156c; end: 1067315d3; +[SCLensExplorerOrderedScheduledLenses descriptor] */

void FUN_10673156c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3790,
                        &PTR____CFConstantStringClassReference_110e5a978,&PTR_DAT_11315ad88,
                        &PTR_DAT_11315adc0,1,0x10,0x1c);
    puRam00000001136c3cd8 = puVar1;
  }
  return;
}



/* Entry: 1067315d4; end: 1067316b7; +[SCLensExplorerScheduledRanking descriptor] */

void FUN_1067315d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af37e0,
                        &PTR____CFConstantStringClassReference_110e5a998,&PTR_DAT_11315ad88,
                        &PTR_DAT_11315ade0,1,0x10,0x1c);
    puRam00000001136c3ce0 = puVar1;
  }
  return;
}



/* Entry: 1067316b8; end: 1067316c3;  */

bool FUN_1067316b8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1067316c4; end: 10673172b; +[SCLCLensCollectionRequest descriptor] */

void FUN_1067316c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3880,
                        &PTR____CFConstantStringClassReference_110e5a9d8,&PTR_DAT_11315b000,
                        &PTR_DAT_11315b018,4,0x20,0x1c);
    puRam00000001136c3cf0 = puVar1;
  }
  return;
}



/* Entry: 10673172c; end: 10673179f; -[UNISCLELensExplorerService initWithUnifiedGrpcService:] */

undefined1 * FUN_10673172c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2cb8;
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



/* Entry: 1067317a0; end: 106731883; -[UNISCLELensExplorerService lensExplorerWithRequest:callOptionsBuilder:handler:] */

void FUN_1067317a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd308;
  _objc_opt_class(PTR_PTR_1126cd308);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5a9f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106731884; end: 10673188f; -[UNISCLELensExplorerService .cxx_destruct] */

void FUN_106731884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106731890; end: 10673198f; -[SCLensSearchPresenter initWithSearchScopeExposer:lensPickerDelegate:searchType:disableScreenInsetPadding:useTransparentBackground:themeType:lensInfoCardEnabled:dismissBlock:] */

undefined1 *
FUN_106731890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f2cc0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 0x29) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined1 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_11;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106731990; end: 106731a0f; -[SCLensSearchPresenter presentLensSearchFromViewController:] */

void FUN_106731990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5f80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c038f40(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  func_0x00010c10cd40(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106731a10; end: 106731b3f; -[SCLensSearchPresenter presentLensSearchWithUIContainer:preselectedLensId:] */

void FUN_106731a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be9c9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd498;
  _objc_alloc(PTR_PTR_1126cd498);
  func_0x00010c00cba0();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126cd4a0;
  _objc_alloc(PTR_PTR_1126cd4a0);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c056880(puVar3,param_2,param_3,param_1,lVar4,*(undefined8 *)(param_1 + 0x18),puVar2);
  _objc_release(param_3);
  _objc_release(lVar4);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106731b40; end: 106731bf3; -[SCLensSearchPresenter dismissIfNeeded] */

void FUN_106731b40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c12e1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (*(long *)(param_1 + 0x40) != 0) {
      func_0x00010c2a4ae0(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106731be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106731bf4; end: 106731bf7; -[SCLensSearchPresenter searchWorkflowDidEnd] */

void FUN_106731bf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissIfNeeded_1125be868);
  return;
}



/* Entry: 106731bf8; end: 106731c27; -[SCLensSearchPresenter _searchThemeType] */

undefined ** FUN_106731bf8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6b68;
  if (*(long *)(param_1 + 0x30) != 1) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6b50;
  }
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6b80;
  if (*(long *)(param_1 + 0x30) != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 106731c28; end: 106731c67; -[SCLensSearchPresenter .cxx_destruct] */

void FUN_106731c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106731c68; end: 106731d7f;  */

void FUN_106731c68(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126cd4a8);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106731d80; end: 10673208b;  */

void FUN_106731d80(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar8;
  undefined4 uStack_28c;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d1;
  undefined **appuStack_1d0 [9];
  undefined1 auStack_188 [24];
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126cd4a8);
  if (param_1 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_160,param_1);
  }
  puVar2 = &uStack_1d1;
  FUN_106733b00(puVar2);
  _objc_retain(param_2);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1f0 = 0;
  lVar3 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x0001004c2bb4(&uStack_1f0,lVar3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x24 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_2);
        }
        unaff_x23 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        _objc_retain(unaff_x23);
        uStack_e0 = unaff_x23;
        func_0x0001004c2d3c(&uStack_1f0,&uStack_e0);
        _objc_release(uStack_e0);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x0001004c2e3c(appuStack_1d0,0xc,puVar2,&uStack_1f0);
  puStack_d8 = (undefined1 *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  uStack_c8 = 0;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  puVar4 = &uStack_160;
  pppuVar7 = appuStack_1d0;
  func_0x0001000e77a0(puVar4,pppuVar7,&puStack_d8,&uStack_120);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  plVar1 = plStack_168;
  appuStack_1d0[0] = &PTR_SUB_110862700;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_170;
  plStack_170 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_d8 = auStack_188;
  func_0x000100105004(&puStack_d8);
  puStack_d8 = (undefined1 *)&uStack_1f0;
  func_0x000100105004(&puStack_d8);
  func_0x0001000e76e0(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (puStack_d8 != (undefined1 *)0x0) {
      puStack_d0 = puStack_d8;
      __ZdlPv();
    }
    func_0x0001050048c0(appuStack_1d0);
    puStack_d8 = (undefined1 *)&uStack_1f0;
    func_0x000100105004(&puStack_d8);
    func_0x000104d96620(&uStack_160);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(lVar3);
    lVar8 = lVar3;
    func_0x000104bd46a0();
    pcStack_1f8 = FUN_10673208c;
    lStack_230 = unaff_x24;
    uStack_228 = unaff_x23;
    puStack_220 = puVar4;
    lStack_218 = lVar3;
    lStack_210 = param_2;
    lStack_208 = param_1;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar7);
    _objc_opt_class(PTR_PTR_1126cd4a8);
    if (lVar8 == 0) {
      uStack_240 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_270,lVar8);
    }
    lStack_288 = 0;
    lStack_280 = 0;
    uStack_278 = 0;
    uStack_28c = 0;
    puVar4 = &uStack_270;
    func_0x00010054c81c(puVar4,&lStack_288,&uStack_28c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_288 != 0) {
      lStack_280 = lStack_288;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_248);
    _objc_release(uStack_258);
    _objc_release(uStack_260);
    puVar6 = puVar4;
    func_0x00010c0e0500(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(pppuVar7);
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10673208c; end: 1067321eb;  */

void FUN_10673208c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126cd4a8);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_9c = 0;
  puVar1 = &uStack_80;
  func_0x00010054c81c(puVar1,&lStack_98,&uStack_9c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  puVar2 = puVar1;
  func_0x00010c0e0500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067321ec; end: 10673220b;  */

void FUN_1067321ec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10673220c; end: 10673231f; -[SCLensExplorerCacheStackLayout initWithLayoudId:useCardBackground:useFullWidth:root:layouts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10673220c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f2cc8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f12c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f12c) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274f130) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274f134) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f138);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f138) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f13c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f13c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106732320; end: 106732343; -[SCLensExplorerCacheStackLayout copyWithZone:] */

undefined8 FUN_106732320(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106732344; end: 1067323e7; -[SCLensExplorerCacheStackLayout hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106732344(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f12c);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + _DAT_11274f130);
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_11274f134);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274f138);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f13c);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1067324c8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1067324d4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + (long)_DAT_11274f130) == param_3[_DAT_11274f130] &&
        (*(char *)((long)puVar3 + (long)_DAT_11274f134) == param_3[_DAT_11274f134])))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274f12c);
      if ((lVar5 == *(long *)(param_3 + _DAT_11274f12c)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274f138);
        if ((lVar5 == *(long *)(param_3 + _DAT_11274f138)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11274f13c);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_11274f13c)) {
            func_0x00010c071ae0();
            goto LAB_1067324d4;
          }
          goto LAB_1067324c8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1067324d4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1067323e8; end: 1067324ef; -[SCLensExplorerCacheStackLayout isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1067323e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067324c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067324d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + (long)_DAT_11274f130) == *(char *)(param_3 + (long)_DAT_11274f130) &&
        (*(char *)(param_1 + (long)_DAT_11274f134) == *(char *)(param_3 + (long)_DAT_11274f134)))))
    {
      lVar3 = *(long *)(param_1 + (long)_DAT_11274f12c);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274f12c)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11274f138);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274f138)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11274f13c);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11274f13c)) {
            func_0x00010c071ae0();
            goto LAB_1067324d4;
          }
          goto LAB_1067324c8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1067324d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067324f0; end: 1067324ff; -[SCLensExplorerCacheStackLayout layoudId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067324f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f12c);
}



/* Entry: 106732500; end: 10673250f; -[SCLensExplorerCacheStackLayout useCardBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106732500(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274f130);
}



/* Entry: 106732510; end: 10673251f; -[SCLensExplorerCacheStackLayout useFullWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106732510(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274f134);
}



/* Entry: 106732520; end: 10673252f; -[SCLensExplorerCacheStackLayout root] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106732520(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f138);
}



/* Entry: 106732530; end: 10673253f; -[SCLensExplorerCacheStackLayout layouts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106732530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f13c);
}



/* Entry: 106732540; end: 10673258f; -[SCLensExplorerCacheStackLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106732540(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f13c,0);
  _objc_storeStrong(param_1 + _DAT_11274f138,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f12c,0);
  return;
}



/* Entry: 106732590; end: 10673265f; -[SCLensExplorerCacheGroupLayout initWithOrientation:alignment:edgeInsetMultipliers:itemSpacingMultiplier:layoutItems:] */

undefined1 *
FUN_106732590(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f2cd0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106732660; end: 106732683; -[SCLensExplorerCacheGroupLayout copyWithZone:] */

undefined8 FUN_106732660(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106732684; end: 10673272f; -[SCLensExplorerCacheGroupLayout hash] */

ulong * FUN_106732684(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(ulong *)(param_1 + 8) & 0xffffffff;
  uStack_48 = *(ulong *)(param_1 + 8) >> 0x20;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar7 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_38 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_106732800:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10673280c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(int *)((long)puVar4 + 8) == *(int *)(param_3 + 8) &&
        (*(int *)((long)puVar4 + 0xc) == *(int *)(param_3 + 0xc))))) {
      fVar10 = ABS(*(float *)((long)puVar4 + 0x10) - *(float *)(param_3 + 0x10));
      fVar9 = ABS(*(float *)((long)puVar4 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
        if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10673280c;
        }
        goto LAB_106732800;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10673280c:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 106732730; end: 106732827; -[SCLensExplorerCacheGroupLayout isEqual:] */

long FUN_106732730(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106732800:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10673280c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))))) {
      fVar6 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
      fVar5 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10673280c;
        }
        goto LAB_106732800;
      }
    }
    lVar4 = 0;
  }
LAB_10673280c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106732828; end: 10673282f; -[SCLensExplorerCacheGroupLayout orientation] */

undefined4 FUN_106732828(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106732830; end: 106732837; -[SCLensExplorerCacheGroupLayout alignment] */

undefined4 FUN_106732830(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106732838; end: 10673283f; -[SCLensExplorerCacheGroupLayout edgeInsetMultipliers] */

undefined8 FUN_106732838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106732840; end: 106732847; -[SCLensExplorerCacheGroupLayout itemSpacingMultiplier] */

undefined4 FUN_106732840(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106732848; end: 10673284f; -[SCLensExplorerCacheGroupLayout layoutItems] */

undefined8 FUN_106732848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106732850; end: 10673287f; -[SCLensExplorerCacheGroupLayout .cxx_destruct] */

void FUN_106732850(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106732880; end: 1067328df; -[SCLensExplorerCacheSpaceMultipliers initWithStart:end:top:bottom:] */

void FUN_106732880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f2cd8;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 0x14) = param_4;
  }
  return;
}



/* Entry: 1067328e0; end: 106732903; -[SCLensExplorerCacheSpaceMultipliers copyWithZone:] */

undefined8 FUN_1067328e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106732904; end: 1067329eb; -[SCLensExplorerCacheSpaceMultipliers hash] */

long * FUN_106732904(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_38 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_30 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_28 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_20 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  plVar2 = &lStack_38;
  func_0x000100505190(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if (((ulong)plVar3 & 1) != 0) {
        fVar7 = ABS(*(float *)(plVar2 + 1) - *(float *)(param_3 + 1));
        fVar6 = ABS(*(float *)(plVar2 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
          bVar1 = fVar7 < fVar6;
        }
        if (bVar1) {
          fVar7 = ABS(*(float *)((long)plVar2 + 0xc) - *(float *)((long)param_3 + 0xc));
          fVar6 = ABS(*(float *)((long)plVar2 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                  1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
            bVar1 = fVar7 < fVar6;
          }
          if (bVar1) {
            fVar7 = ABS(*(float *)(plVar2 + 2) - *(float *)(param_3 + 2));
            fVar6 = ABS(*(float *)(plVar2 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
              bVar1 = fVar7 < fVar6;
            }
            if (bVar1) {
              fVar6 = ABS(*(float *)((long)plVar2 + 0x14) + *(float *)((long)param_3 + 0x14)) *
                      1.1920929e-07;
              if (fVar6 <= 1.1754944e-38) {
                fVar6 = 1.1754944e-38;
              }
              plVar5 = (long *)(ulong)(ABS(*(float *)((long)plVar2 + 0x14) -
                                           *(float *)((long)param_3 + 0x14)) < fVar6);
              goto LAB_106732afc;
            }
          }
        }
      }
      plVar5 = (long *)0x0;
    }
  }
LAB_106732afc:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 1067329ec; end: 106732b17; -[SCLensExplorerCacheSpaceMultipliers isEqual:] */

bool FUN_1067329ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        fVar5 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
        fVar4 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
          bVar1 = fVar5 < fVar4;
        }
        if (bVar1) {
          fVar5 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
          fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
            bVar1 = fVar5 < fVar4;
          }
          if (bVar1) {
            fVar5 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
            fVar4 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
              bVar1 = fVar5 < fVar4;
            }
            if (bVar1) {
              fVar4 = ABS(*(float *)(param_1 + 0x14) + *(float *)(param_3 + 0x14)) * 1.1920929e-07;
              if (fVar4 <= 1.1754944e-38) {
                fVar4 = 1.1754944e-38;
              }
              bVar1 = ABS(*(float *)(param_1 + 0x14) - *(float *)(param_3 + 0x14)) < fVar4;
              goto LAB_106732afc;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_106732afc:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106732b18; end: 106732b1f; -[SCLensExplorerCacheSpaceMultipliers start] */

undefined4 FUN_106732b18(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106732b20; end: 106732b27; -[SCLensExplorerCacheSpaceMultipliers end] */

undefined4 FUN_106732b20(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106732b28; end: 106732b2f; -[SCLensExplorerCacheSpaceMultipliers top] */

undefined4 FUN_106732b28(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106732b30; end: 106732b37; -[SCLensExplorerCacheSpaceMultipliers bottom] */

undefined4 FUN_106732b30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 106732b38; end: 106732bd3; -[SCLensExplorerCacheLayoutItem initWithElementId:weight:aspectRation:itemType:] */

undefined1 *
FUN_106732b38(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f2ce0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106732bd4; end: 106732bf7; -[SCLensExplorerCacheLayoutItem copyWithZone:] */

undefined8 FUN_106732bd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106732bf8; end: 106732c8f; -[SCLensExplorerCacheLayoutItem hash] */

long * FUN_106732bf8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  float fVar7;
  float fVar8;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  plVar3 = &lStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_40 = (long)(int)*(undefined8 *)(param_1 + 8);
  lStack_38 = (long)(int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar5 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_30 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_28 = uVar2;
  func_0x000100505190(&lStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_106732d48:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106732d54;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)((long)plVar3 + 8) == *(int *)(param_3 + 8) &&
        (*(int *)((long)plVar3 + 0xc) == *(int *)(param_3 + 0xc))))) {
      fVar8 = ABS(*(float *)((long)plVar3 + 0x10) - *(float *)(param_3 + 0x10));
      fVar7 = ABS(*(float *)((long)plVar3 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar8) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar1 = fVar8 < fVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106732d54;
        }
        goto LAB_106732d48;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106732d54:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 106732c90; end: 106732d6f; -[SCLensExplorerCacheLayoutItem isEqual:] */

long FUN_106732c90(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106732d48:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106732d54;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))))) {
      fVar6 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
      fVar5 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106732d54;
        }
        goto LAB_106732d48;
      }
    }
    lVar4 = 0;
  }
LAB_106732d54:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106732d70; end: 106732d77; -[SCLensExplorerCacheLayoutItem elementId] */

undefined4 FUN_106732d70(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106732d78; end: 106732d7f; -[SCLensExplorerCacheLayoutItem weight] */

undefined4 FUN_106732d78(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106732d80; end: 106732d87; -[SCLensExplorerCacheLayoutItem aspectRation] */

undefined4 FUN_106732d80(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106732d88; end: 106732d8f; -[SCLensExplorerCacheLayoutItem itemType] */

undefined8 FUN_106732d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106732d90; end: 106732d9b; -[SCLensExplorerCacheLayoutItem .cxx_destruct] */

void FUN_106732d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106732d9c; end: 106732e03; +[SCLensExplorerCacheLayoutItemType groupLayoutWithGroupLayout:] */

void FUN_106732d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd4b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106732e04; end: 106732e6f; +[SCLensExplorerCacheLayoutItemType imageLayoutWithImageLayout:] */

void FUN_106732e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd4b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106732e70; end: 106732edb; +[SCLensExplorerCacheLayoutItemType textLayoutWithTextLayout:] */

void FUN_106732e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd4b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106732edc; end: 106732eff; -[SCLensExplorerCacheLayoutItemType copyWithZone:] */

undefined8 FUN_106732edc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106732f00; end: 106732f83; -[SCLensExplorerCacheLayoutItemType hash] */

void FUN_106732f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f2ce8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106732f84; end: 106732fc7; -[SCLensExplorerCacheLayoutItemType internalInit] */

void FUN_106732f84(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2ce8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106732fc8; end: 106733097; -[SCLensExplorerCacheLayoutItemType isEqual:] */

long FUN_106732fc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106733070:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10673307c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10673307c;
          }
          goto LAB_106733070;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10673307c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106733098; end: 106733147; -[SCLensExplorerCacheLayoutItemType matchGroupLayout:imageLayout:textLayout:] */

void FUN_106733098(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 3) {
    if (param_5 == 0) goto LAB_106733124;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 2) {
    if (param_4 == 0) goto LAB_106733124;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 1) || (param_3 == 0)) goto LAB_106733124;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106733124:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106733148; end: 106733183; -[SCLensExplorerCacheLayoutItemType .cxx_destruct] */

void FUN_106733148(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106733184; end: 1067331a3; -[SCLensExplorerCacheLayoutItemType isSameSubtype:] */

bool FUN_106733184(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 1067331a4; end: 1067331ab; -[SCLensExplorerCacheLayoutItemType subtype] */

undefined8 FUN_1067331a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067331ac; end: 10673327f; -[SCLensExplorerCacheLayoutItemType asGroupLayout] */

void FUN_1067331ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106733280;
  uStack_30 = 0x106733290;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106733298;
  puStack_60 = &UNK_110937c20;
  puStack_48 = puStack_58;
  func_0x00010c0be220(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110937c70,
                      &PTR___NSConcreteGlobalBlock_110937cb0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106733280; end: 106733297;  */

void FUN_106733280(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106733298; end: 1067332cf;  */

void FUN_106733298(long param_1,undefined8 param_2)

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



/* Entry: 1067332d0; end: 1067332d7;  */

void FUN_1067332d0(void)

{
  return;
}



/* Entry: 1067332d8; end: 1067333ab; -[SCLensExplorerCacheLayoutItemType asImageLayout] */

void FUN_1067332d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106733280;
  uStack_30 = 0x106733290;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1067333b0;
  puStack_60 = &UNK_110937d10;
  puStack_48 = puStack_58;
  func_0x00010c0be220(param_1,param_2,&PTR___NSConcreteGlobalBlock_110937cf0,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110937d40);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067333ac; end: 1067333af;  */

void FUN_1067333ac(void)

{
  return;
}



/* Entry: 1067333b0; end: 1067333e7;  */

void FUN_1067333b0(long param_1,undefined8 param_2)

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



/* Entry: 1067333e8; end: 1067333eb;  */

void FUN_1067333e8(void)

{
  return;
}



/* Entry: 1067333ec; end: 1067334bf; -[SCLensExplorerCacheLayoutItemType asTextLayout] */

void FUN_1067333ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106733280;
  uStack_30 = 0x106733290;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1067334c8;
  puStack_60 = &UNK_110937da0;
  puStack_48 = puStack_58;
  func_0x00010c0be220(param_1,param_2,&PTR___NSConcreteGlobalBlock_110937d60,
                      &PTR___NSConcreteGlobalBlock_110937d80,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067334c0; end: 1067334c7;  */

void FUN_1067334c0(void)

{
  return;
}



/* Entry: 1067334c8; end: 1067334ff;  */

void FUN_1067334c8(long param_1,undefined8 param_2)

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



/* Entry: 106733500; end: 1067335c3; -[SCLensExplorerCacheImageLayout initWithSizeMultiplier:edgeInsetMultipliers:shapedBackground:tintColor:] */

undefined1 *
FUN_106733500(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2cf0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1067335c4; end: 1067335e7; -[SCLensExplorerCacheImageLayout copyWithZone:] */

undefined8 FUN_1067335c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067335e8; end: 10673368f; -[SCLensExplorerCacheImageLayout hash] */

long * FUN_1067335e8(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_48 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + 0xc);
  plVar4 = &lStack_48;
  uStack_38 = uVar3;
  func_0x000100505190(plVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_106733750:
    plVar8 = (long *)0x1;
  }
  else {
    plVar8 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10673375c;
    plVar8 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar8);
    if ((((ulong)plVar5 & 1) != 0) &&
       (*(int *)((long)plVar4 + 0xc) == *(int *)((long)param_3 + 0xc))) {
      fVar10 = ABS(*(float *)(plVar4 + 1) - *(float *)(param_3 + 1));
      fVar9 = ABS(*(float *)(plVar4 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if ((bVar1) &&
         ((lVar6 = plVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        plVar8 = (long *)plVar4[3];
        if (plVar8 != (long *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10673375c;
        }
        goto LAB_106733750;
      }
    }
    plVar8 = (long *)0x0;
  }
LAB_10673375c:
  _objc_release(param_3);
  return plVar8;
}



/* Entry: 106733690; end: 106733777; -[SCLensExplorerCacheImageLayout isEqual:] */

long FUN_106733690(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106733750:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10673375c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10673375c;
        }
        goto LAB_106733750;
      }
    }
    lVar4 = 0;
  }
LAB_10673375c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106733778; end: 10673377f; -[SCLensExplorerCacheImageLayout sizeMultiplier] */

undefined4 FUN_106733778(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106733780; end: 106733787; -[SCLensExplorerCacheImageLayout edgeInsetMultipliers] */

undefined8 FUN_106733780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106733788; end: 10673378f; -[SCLensExplorerCacheImageLayout shapedBackground] */

undefined8 FUN_106733788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106733790; end: 106733797; -[SCLensExplorerCacheImageLayout tintColor] */

undefined4 FUN_106733790(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106733798; end: 1067337c7; -[SCLensExplorerCacheImageLayout .cxx_destruct] */

void FUN_106733798(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067337c8; end: 106733813; -[SCLensExplorerCacheShapedBackground initWithShape:color:] */

void FUN_1067337c8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2cf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 106733814; end: 106733837; -[SCLensExplorerCacheShapedBackground copyWithZone:] */

undefined8 FUN_106733814(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106733838; end: 106733893; -[SCLensExplorerCacheShapedBackground hash] */

ulong * FUN_106733838(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(ulong *)(param_1 + 8) & 0xffffffff;
  uStack_28 = *(ulong *)(param_1 + 8) >> 0x20;
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(int *)((long)puVar1 + 8) != *(int *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(int *)((long)puVar1 + 0xc) == *(int *)(param_3 + 0xc));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}


