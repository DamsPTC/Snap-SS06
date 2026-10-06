/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c5f7cc; end: 105c5f9e3; -[SCComposerAppInfosStore openAppWithAppInfo:callback:] */

void FUN_105c5f7cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_3;
    func_0x00010bf06760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f520(param_1,param_2,lVar1,1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf06760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f500(param_1,param_2,lVar1,1);
    _objc_release(lVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105c5f8f8;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(lVar1,param_2,&puStack_60);
    _objc_release(lVar1);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c5f9e4; end: 105c5f9f3;  */

void FUN_105c5f9e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105c5f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 105c5f9f4; end: 105c5f9fb; -[SCComposerAppInfosStore shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105c5f9f4(void)

{
  return 0;
}



/* Entry: 105c5f9fc; end: 105c5fa07; -[SCComposerAppInfosStore pushToValdiMarshaller:] */

undefined8 FUN_105c5f9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3758;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  FUN_105c60fac();
  return param_3;
}



/* Entry: 105c5fa08; end: 105c5fa9f; -[SCComposerAppInfosStore _reportClickEventWithAppName:isOpen:] */

void FUN_105c5fa08(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3720;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c168e60();
  _objc_release(param_3);
  if (param_4 == 0) {
    func_0x00010c17c960(puVar1,param_2,1);
  }
  else {
    func_0x00010c17c9a0();
  }
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



/* Entry: 105c5faa0; end: 105c5fb9f; -[SCComposerAppInfosStore _reportClickEventToGrapheneWithAppName:isOpen:] */

void FUN_105c5faa0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b17f0;
  _objc_retain(param_3);
  func_0x00010bf08d60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6d98;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e24778;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db2d38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c5fba0; end: 105c5fc6f; -[SCComposerAppInfosStore _canOpenApp:callback:] */

void FUN_105c5fba0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105c5fc70;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(lVar1,param_2,&puStack_60);
    _objc_release(lVar1);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c5fc70; end: 105c5fd23;  */

void FUN_105c5fc70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf06780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2cf00(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c1ada80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000105c5fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105c5fd24; end: 105c5fedf; -[SCComposerAppInfosStore _getAppInstallationStatus:completion:] */

void FUN_105c5fd24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_3);
      }
      _objc_retain(puVar1);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010bdd9c00(param_1);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(puVar1);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010befa120(*(undefined8 *)(param_3 + 0x20));
  lVar2 = *(long *)(param_3 + 0x20);
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_3 + 0x28);
  func_0x00010bf529e0();
  if (lVar2 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000105c5ff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))
              (*(long *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 105c5fee0; end: 105c5ff3f;  */

void FUN_105c5fee0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000105c5ff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 105c5ff40; end: 105c5ffd7; -[SCComposerAppInfosStore _installAppInfo:callback:] */

void FUN_105c5ff40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c5ffd8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c5ffd8; end: 105c60073;  */

void FUN_105c5ffd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf06740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1,param_2,puVar3,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c60074; end: 105c600a3; -[SCComposerAppInfosStore .cxx_destruct] */

void FUN_105c60074(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c600a4; end: 105c60343; -[SCAppsFromSnapScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c600a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112732e48;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  func_0x00010be8f780(param_1);
  lVar10 = param_1 + _DAT_112732e3c;
  _objc_loadWeakRetained();
  lVar3 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  func_0x00010be8f7a0(param_1);
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3730;
  _objc_alloc(PTR_PTR_1126c3730);
  lVar10 = param_1 + _DAT_112732e40;
  _objc_loadWeakRetained(lVar10);
  lVar6 = lVar10;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112732e44;
  lVar7 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0006c0(puVar5);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105c60344; end: 105c603cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60344(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112732e38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf3f680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c603cc; end: 105c603fb;  */

void FUN_105c603cc(void)

{
  _objc_alloc(PTR_PTR_1126c3728);
  func_0x00010c027300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c603fc; end: 105c604b7; -[SCAppsFromSnapScopeEntryPoint _reportEnterEventToGraphene:] */

void FUN_105c603fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b17f0;
  _objc_retain(param_3);
  func_0x00010bf08d60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bfb94e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c604b8; end: 105c60533; -[SCAppsFromSnapScopeEntryPoint _reportEnterEventWithLogger:] */

void FUN_105c604b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3738;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c196800();
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b2e60(uVar2,param_2,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c60534; end: 105c6058f; -[SCAppsFromSnapScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60534(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732e40);
  _objc_destroyWeak(param_1 + _DAT_112732e48);
  _objc_destroyWeak(param_1 + _DAT_112732e38);
  _objc_destroyWeak(param_1 + _DAT_112732e3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732e44);
  return;
}



/* Entry: 105c60590; end: 105c60863; -[SCAppsFromSnapPageComposerViewController initWithComposerCOFStore:appsInfoStore:valdiRuntimeProvider:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c60590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126ec950;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112732e4c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_112732e50;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112732e54,param_6);
    puVar3 = PTR_PTR_1126c3740;
    _objc_opt_new(PTR_PTR_1126c3740);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17df40(puVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168c00(puVar3);
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c1d1a00(puVar3);
    puVar4 = PTR_PTR_1126c3748;
    _objc_opt_new(PTR_PTR_1126c3748);
    puVar5 = PTR_PTR_1126c3750;
    _objc_alloc();
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732e58);
    *(undefined **)((long)puVar1 + (long)_DAT_112732e58) = puVar5;
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112732e5c;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = uVar2;
    _objc_release(uVar7);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c60864; end: 105c6088f;  */

void FUN_105c60864(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c60890; end: 105c608ef; -[SCAppsFromSnapPageComposerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60890(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112732e54;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf08d80();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126ec950;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c608f0; end: 105c608f3; -[SCAppsFromSnapPageComposerViewController preferredStatusBarStyle] */

undefined8 FUN_105c608f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105c608f4; end: 105c609a3; -[SCAppsFromSnapPageComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c608f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112732e58;
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + _DAT_112732e5c);
  uStack_40 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_105c609a4;
  puStack_68 = PTR_PTR_1126ec950;
  puStack_70 = puVar2;
  uStack_60 = uVar4;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_70,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(puVar2 + _DAT_112732e60) = puVar3;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 105c609a4; end: 105c60a53; -[SCAppsFromSnapPageComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c609a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec950;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_112732e60) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 105c60a54; end: 105c60ac7; -[SCAppsFromSnapPageComposerViewController viewWillAppear:] */

void FUN_105c60a54(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c60ac8; end: 105c60adf; -[SCAppsFromSnapPageComposerViewController _refreshAppInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732e58),PTR_s_emitRefreshAppInfos__1125c11b0,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 105c60ae0; end: 105c60b5f; -[SCAppsFromSnapPageComposerViewController _quitAppsFromSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_112732e54;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf08dc0();
  _objc_release(lVar1);
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c60b60; end: 105c60bd7; -[SCAppsFromSnapPageComposerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105c60b60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_112732e58);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 105c60bd8; end: 105c60bdb; -[SCAppsFromSnapPageComposerViewController cardToExpandTransition] */

void FUN_105c60bd8(void)

{
  return;
}



/* Entry: 105c60bdc; end: 105c60c2f; -[SCAppsFromSnapPageComposerViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60bdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c60c30; end: 105c60c33; -[SCAppsFromSnapPageComposerViewController cardTransitionDidUpdateProgress:] */

void FUN_105c60c30(void)

{
  return;
}



/* Entry: 105c60c34; end: 105c60cc7; -[SCAppsFromSnapPageComposerViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60c34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    puVar1 = (undefined *)(param_1 + _DAT_112732e54);
    _objc_loadWeakRetained(puVar1);
    func_0x00010bf08d80();
  }
  else {
    if (param_4 != 0) goto LAB_105c60cb4;
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ec0(param_1);
    func_0x00010c14dc60(puVar1,param_2,param_1);
  }
  _objc_release(puVar1);
LAB_105c60cb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c60cc8; end: 105c60ccf; -[SCAppsFromSnapPageComposerViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_105c60cc8(void)

{
  return 1;
}



/* Entry: 105c60cd0; end: 105c60cd7; -[SCAppsFromSnapPageComposerViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_105c60cd0(void)

{
  return 0;
}



/* Entry: 105c60cd8; end: 105c60d43; -[SCAppsFromSnapPageComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c60cd8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732e54);
  _objc_storeStrong(param_1 + _DAT_112732e5c,0);
  _objc_storeStrong(param_1 + _DAT_112732e58,0);
  _objc_storeStrong(param_1 + _DAT_112732e50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732e4c,0);
  return;
}



/* Entry: 105c60d44; end: 105c60d6f; +[SCCAppInfosStoring valdiMarshallableObjectDescriptor] */

void FUN_105c60d44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e0a38;
  param_1[1] = &PTR_DAT_1108e0a98;
  param_1[2] = &PTR_DAT_1108e0a08;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105c60d70; end: 105c60d9b;  */

undefined8 FUN_105c60d70(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1,param_2[2]);
  return 0;
}



/* Entry: 105c60d9c; end: 105c60e17;  */

void FUN_105c60d9c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c60f7c;
  puStack_30 = &UNK_1108e0aa8;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  FUN_105c60fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c60e18; end: 105c60e73;  */

undefined8 FUN_105c60e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3758;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_105c60fac();
  return param_1;
}



/* Entry: 105c60e74; end: 105c60e7f; +[SCComposerAppsFromSnapView componentPath] */

undefined ** FUN_105c60e74(void)

{
  return &PTR____CFConstantStringClassReference_110e247b8;
}



/* Entry: 105c60e80; end: 105c60eb3; -[SCComposerAppsFromSnapView initWithViewModel:componentContext:runtime:] */

void FUN_105c60e80(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec958;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c60eb4; end: 105c60ef3; -[SCComposerAppsFromSnapView setViewModel:] */

void FUN_105c60eb4(void)

{
  undefined8 unaff_x20;
  
  func_0x000105c60fb4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000105c60fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 105c60ef4; end: 105c60f33; -[SCComposerAppsFromSnapView viewModel] */

void FUN_105c60ef4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_105c60fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c60f34; end: 105c60f7b; -[SCComposerAppsFromSnapView emitRefreshAppInfos:] */

void FUN_105c60f34(void)

{
  undefined8 unaff_x20;
  
  func_0x000105c60fb4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f89c0();
  func_0x000105c60fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 105c60f7c; end: 105c60fab;  */

void FUN_105c60f7c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c60fac; end: 105c60fc3;  */

void FUN_105c60fac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c60fc4; end: 105c6101b; -[SCComposerAppInfoViewModel initWithAppIconUrl2x:app_icon_url_3x:app_intro_icon_url_2x:app_intro_icon_url_3x:app_name:app_prefix_url_for_ios:app_package_name_for_android:app_description:background_image_url_2x:background_image_url_3x:app_install_link_ios:app_install_link_android:installed:] */

void FUN_105c60fc4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec960;
  uStack_20 = param_1;
  func_0x000105c611e8(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105c6101c; end: 105c6102b; +[SCComposerAppInfoViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c6101c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108e0ad8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c6102c; end: 105c610df; -[SCComposerAppsFromSnapContext initWithCofStore:appInfoStore:onClickHeaderDismiss:hasStatusBar:] */

undefined8 *
FUN_105c6102c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_48 = PTR_PTR_1126ec968;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000105c611e8(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105c610e0; end: 105c61177; -[SCComposerAppsFromSnapContext initWithCofStore:appInfoStore:onClickHeaderDismiss:] */

undefined8 *
FUN_105c610e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ec968;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000105c611e8(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105c61178; end: 105c61197; +[SCComposerAppsFromSnapContext valdiMarshallableObjectDescriptor] */

void FUN_105c61178(undefined8 *param_1)

{
  *param_1 = &PTR_s_cofStore_1108e0c28;
  param_1[1] = &PTR_s_SCComposerCOFStoring_1108e0ca0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c61198; end: 105c611cb; -[SCComposerAppsFromSnapViewModel init] */

void FUN_105c61198(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec970;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105c611cc; end: 105c6127f; +[SCComposerAppsFromSnapViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c611cc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddcc810;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c61280; end: 105c6169b; -[SCCContactSyncSettingsContextInteractor initWinitWithAlertPresenter:urlActionHandler:friendingConfigsProvider:friendingConfigsMutator:contactPermissionEventsLogger:contactPermissionInfoProvider:contactPermissionManager:applicationLifecycleEvents:snapchattersDataMutator:contactsSyncSettingsInteractorDelegate:circumstanceEngine:shouldRemoveUserLevelPermission:] */

undefined8 *
FUN_105c61280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  puStack_70 = PTR_PTR_1126ec978;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3760;
    _objc_alloc();
    func_0x00010c002400();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xf) = param_14;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = puVar1[10];
    func_0x00010be3f1a0(puVar1);
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = puVar1[0xb];
    func_0x00010be3f180(puVar1);
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = param_10;
    func_0x00010bf72840(param_10);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar5 = puVar1;
    func_0x00010bdef0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar5;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c6169c; end: 105c616c7;  */

void FUN_105c6169c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be927a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c616c8; end: 105c616cf; -[SCCContactSyncSettingsContextInteractor contactSyncSettingsContext] */

void FUN_105c616c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_target_112678178);
  return;
}



/* Entry: 105c616d0; end: 105c616d3; -[SCCContactSyncSettingsContextInteractor dialogDidDismiss:] */

void FUN_105c616d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be927b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetContactSyncToggle_112582388);
  return;
}



/* Entry: 105c616d4; end: 105c6178b; -[SCCContactSyncSettingsContextInteractor _createLazyContext] */

void FUN_105c616d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c6178c; end: 105c617cb;  */

void FUN_105c6178c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c617cc; end: 105c61a8b; -[SCCContactSyncSettingsContextInteractor _createContactSyncSettingsContext] */

void FUN_105c617cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126c3768;
  _objc_alloc_init(PTR_PTR_1126c3768);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar1);
  _objc_release(uVar2);
  func_0x00010c21d360(puVar1);
  _objc_initWeak(auStack_78,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105c61a8c;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1d2060(puVar1);
  puStack_c8 = puVar3;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105c61ab8;
  puStack_b0 = &UNK_110849200;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c21c4c0(puVar1);
  puStack_f0 = puVar3;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105c61aec;
  puStack_d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010c1d33a0(puVar1);
  puStack_118 = puVar3;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x105c61b18;
  puStack_100 = &UNK_1108434b0;
  _objc_copyWeak(auStack_f8,auStack_78);
  func_0x00010c18b7e0(puVar1);
  _objc_copyWeak(auStack_120,auStack_78);
  func_0x00010c1e4d80(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200d00(puVar1);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181620(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1814e0(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c61a8c; end: 105c61b6f;  */

void FUN_105c61a8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c61b70; end: 105c61b9b; -[SCCContactSyncSettingsContextInteractor _dismiss] */

void FUN_105c61b70(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c61b9c; end: 105c61beb; -[SCCContactSyncSettingsContextInteractor _resetContactSyncToggle] */

void FUN_105c61b9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010be3f1a0();
  func_0x00010c0df6e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c61bec; end: 105c61c8f; -[SCCContactSyncSettingsContextInteractor _isContactSyncEnabled] */

undefined8 FUN_105c61bec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c06f320();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfcdc40();
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd45e0();
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105c61c90; end: 105c61d07; -[SCCContactSyncSettingsContextInteractor _isContactPermissionGranted] */

undefined8 FUN_105c61c90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcdc40();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd45e0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105c61d08; end: 105c61d13; -[SCCContactSyncSettingsContextInteractor _changeContactSyncEnabledTo:] */

void FUN_105c61d08(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be08ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableContactSync_11255fc50);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be01c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disableContactSync_11255e0a0);
  return;
}



/* Entry: 105c61d14; end: 105c61de3; -[SCCContactSyncSettingsContextInteractor _enableContactSync] */

void FUN_105c61d14(undefined8 param_1)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bed5dc0(param_1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c61de4; end: 105c61e17;  */

void FUN_105c61de4(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be08c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105c61e18; end: 105c61e27; -[SCCContactSyncSettingsContextInteractor _disableContactSync] */

void FUN_105c61e18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateContactBookSyncEnabled_co_112593118,0,0,0);
  return;
}



/* Entry: 105c61e28; end: 105c61e2b; -[SCCContactSyncSettingsContextInteractor _tryToPromptGotoOSSettings] */

void FUN_105c61e28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableContactSync_11255fc50);
  return;
}



/* Entry: 105c61e2c; end: 105c61f4f; -[SCCContactSyncSettingsContextInteractor _updateContactBookSyncEnabled:completionQueue:completionHandler:] */

void FUN_105c61e2c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_5);
  func_0x00010c284880(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105c61f50; end: 105c61fa7;  */

void FUN_105c61f50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5de0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c61fa8; end: 105c62073; -[SCCContactSyncSettingsContextInteractor _updateContactBookSyncEnabledSucceed:completionHandler:error:] */

void FUN_105c61fa8(long param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (lVar1 = param_1, func_0x00010be3f1c0(), (int)lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1970;
    func_0x00010bfa5d40(PTR_PTR_1126b1970);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd28e0(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_5 == 0,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c62074; end: 105c6209f; -[SCCContactSyncSettingsContextInteractor _showAllContacts] */

void FUN_105c62074(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c235ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c620a0; end: 105c62237; -[SCCContactSyncSettingsContextInteractor _deleteAllContacts] */

void FUN_105c620a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bed5dc0(param_1,param_2,0,0,0);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1970;
  func_0x00010bf6b260(PTR_PTR_1126b1970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfd28e0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd780;
  func_0x00010bfab700(PTR_PTR_1126bd780);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2940(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c62238; end: 105c622c3;  */

void FUN_105c62238(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x78) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd45e0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d6e0();
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c622c4; end: 105c62363; -[SCCContactSyncSettingsContextInteractor _enableInteractiveContactSyncToggle] */

void FUN_105c622c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010be24540();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6380();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be28dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleEnabledIsContactSyncEnabl_112567d10)
    ;
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd45e0();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be28df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleEnabledIsContactSyncEnabl_112567d18);
  return;
}



/* Entry: 105c62364; end: 105c623ef; -[SCCContactSyncSettingsContextInteractor _grantUserLevelContactPermissionAndLog] */

void FUN_105c62364(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdc40();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bb20();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf4a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_contactPermissionRequestViewPerm_1125b01f0,0);
  return;
}



/* Entry: 105c623f0; end: 105c624d3; -[SCCContactSyncSettingsContextInteractor _handleEnabledIsContactSyncEnabled] */

void FUN_105c623f0(long param_1)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010c27cf00(param_1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c624d4; end: 105c624ff;  */

void FUN_105c624d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be927a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c62500; end: 105c625cb; -[SCCContactSyncSettingsContextInteractor _handleEnabledIsContactSyncEnabledWhenDeviceLevelContactPermissionNeverPrompt] */

void FUN_105c62500(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c134860(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c625cc; end: 105c625ff;  */

void FUN_105c625cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c62600; end: 105c62623; -[SCCContactSyncSettingsContextInteractor _requestDeviceLevelContactPermissionCompletedAndResetContactSyncToggleWithPermissionStatus:] */

void FUN_105c62600(undefined8 param_1)

{
  func_0x00010be90ea0();
                    /* WARNING: Could not recover jumptable at 0x00010be927b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetContactSyncToggle_112582388);
  return;
}



/* Entry: 105c62624; end: 105c6263b; -[SCCContactSyncSettingsContextInteractor _requestDeviceLevelContactPermissionCompletedWithPermissionStatus:] */

void FUN_105c62624(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf4a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_contactPermissionRequestViewPerm_1125b01f0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf4a110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_contactPermissionRequestViewPerm_1125b01e8,1);
  return;
}



/* Entry: 105c6263c; end: 105c62653; -[SCCContactSyncSettingsContextInteractor _isContactSyncImmediatelyEnabledAfterToggleOn] */

void FUN_105c6263c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e248d8,1,0);
  return;
}



/* Entry: 105c62654; end: 105c6270f; -[SCCContactSyncSettingsContextInteractor .cxx_destruct] */

void FUN_105c62654(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105c62710; end: 105c627d3; -[SCContactSyncSettingsUrlActionHandler initWithWebBrowsingScopeExposer:webBrowsingUIContainer:webBrowsingDelegate:] */

undefined1 *
FUN_105c62710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c627d4; end: 105c627d7; -[SCContactSyncSettingsUrlActionHandler shareUrlWithUrl:] */

void FUN_105c627d4(void)

{
  return;
}



/* Entry: 105c627d8; end: 105c629b3; -[SCContactSyncSettingsUrlActionHandler openUrlWithUrl:sourceType:] */

void FUN_105c627d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar5 = puVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105c629b4;
    puStack_60 = &UNK_110842308;
    puVar6 = puVar2;
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar5,param_2,&puStack_78,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    puVar6 = puVar5;
    func_0x00010bf22ba0(puVar5,param_2,puVar3,puVar4,uVar7,lVar1,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puStack_58);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c629b4; end: 105c629cb;  */

void FUN_105c629b4(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105c629cc; end: 105c629cf; -[SCContactSyncSettingsUrlActionHandler sendUrlWithUrl:] */

void FUN_105c629cc(void)

{
  return;
}



/* Entry: 105c629d0; end: 105c629d7; -[SCContactSyncSettingsUrlActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105c629d0(void)

{
  return 0;
}



/* Entry: 105c629d8; end: 105c629e3; -[SCContactSyncSettingsUrlActionHandler pushToValdiMarshaller:] */

void FUN_105c629d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 105c629e4; end: 105c62a1b; -[SCContactSyncSettingsUrlActionHandler .cxx_destruct] */

void FUN_105c629e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c62a1c; end: 105c62a8f; -[SCContactSyncToggleContactPermissionRequestLogger initWithContactPermissionEventsLogger:] */

undefined1 * FUN_105c62a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec988;
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



/* Entry: 105c62a90; end: 105c62b0f; -[SCContactSyncToggleContactPermissionRequestLogger contactPermissionRequestViewPermissionGrantedWithIsDeviceLevel:] */

void FUN_105c62a90(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3a80();
  _objc_release(uVar1);
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c62b10; end: 105c62b8f; -[SCContactSyncToggleContactPermissionRequestLogger contactPermissionRequestViewPermissionDeniedWithIsDeviceLevel:] */

void FUN_105c62b10(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3a60();
  _objc_release(uVar1);
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c62b90; end: 105c62b9b; -[SCContactSyncToggleContactPermissionRequestLogger .cxx_destruct] */

void FUN_105c62b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c62b9c; end: 105c62c9b; -[SCManageContactsSettingsComposerViewController initWithValdiRuntimeProvider:contactSyncSettingsContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c62b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec990;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126c3770;
    _objc_alloc();
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732eb0);
    *(undefined **)((long)puVar1 + (long)_DAT_112732eb0) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


