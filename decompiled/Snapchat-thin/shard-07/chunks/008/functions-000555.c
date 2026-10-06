/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a5317c; end: 105a531af;  */

void FUN_105a5317c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed44c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a531b0; end: 105a531eb; -[SCSpectaclesBrightnessSettingsManager _cancelBrightnessLevelUpdateBlock] */

void FUN_105a531b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a531ec; end: 105a53287; -[SCSpectaclesBrightnessSettingsManager _handleNewBrightnessLevel:] */

void FUN_105a531ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x00010c067fc0();
    lVar2 = param_3;
    func_0x00010c067fc0();
    if (lVar1 == lVar2) goto LAB_105a53274;
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR_PTR_1126c1950;
  _objc_alloc(PTR_PTR_1126c1950);
  func_0x00010bff96e0();
  func_0x00010c0d9840(uVar3,param_2,puVar4);
  _objc_release(puVar4);
LAB_105a53274:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a53288; end: 105a5331f; -[SCSpectaclesBrightnessSettingsManager _handleAutoBrightnessSettings:] */

void FUN_105a53288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (func_0x00010bf1f3c0(), (int)param_3 == (int)lVar1)) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126c1958;
  _objc_alloc(PTR_PTR_1126c1958);
  func_0x00010c00f9a0();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a53320; end: 105a5338b; -[SCSpectaclesBrightnessSettingsManager _handleBrightnessLevelError:] */

void FUN_105a53320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff96e0();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5338c; end: 105a533ff; -[SCSpectaclesBrightnessSettingsManager _handleAutoBrightnessSettingsError:] */

void FUN_105a5338c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1958;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00f9a0();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a53400; end: 105a5368f; -[SCSpectaclesBrightnessSettingsManager handleResponse:] */

void FUN_105a53400(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be0afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  _objc_release(uVar2);
  if (uVar3 == 0x2c) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105a53690;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    goto LAB_105a535cc;
  }
  uVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  _objc_release(uVar2);
  if (uVar3 == 0x48) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x105a5369c;
    puStack_78 = &UNK_110842e18;
    uStack_70 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    goto LAB_105a535cc;
  }
  uVar2 = param_3;
  func_0x00010bf21240();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27dd80();
    _objc_release(uVar2);
    if (uVar3 == 0x2e) goto LAB_105a53568;
    uVar2 = param_3;
    func_0x00010bfd4640();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27dd80();
      _objc_release(uVar2);
      if (uVar3 != 0x49) goto LAB_105a535cc;
    }
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x105a536f8;
    puStack_e8 = &UNK_110848ba8;
    _objc_retain(uVar1);
    uStack_e0 = uVar1;
    uStack_d8 = param_1;
    _objc_retain(param_3);
    uStack_d0 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_100);
    _objc_release(uStack_d0);
    uVar4 = uStack_e0;
  }
  else {
    _objc_release();
LAB_105a53568:
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105a536a4;
    puStack_b0 = &UNK_110848ba8;
    _objc_retain(uVar1);
    uStack_a8 = uVar1;
    uStack_a0 = param_1;
    _objc_retain(param_3);
    uStack_98 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_c8);
    _objc_release(uStack_98);
    uVar4 = uStack_a8;
  }
  _objc_release(uVar4);
LAB_105a535cc:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105a53690; end: 105a536a3;  */

void FUN_105a53690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_requestBrightnessLevelAsyncWithF_11262ad10,0);
  return;
}



/* Entry: 105a536a4; end: 105a53737;  */

void FUN_105a536a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be26950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__handleBrightnessLevelError__1125673f0);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf21240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2cd20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a53738; end: 105a5373f; -[SCSpectaclesBrightnessSettingsManager responseMonitorState] */

undefined8 FUN_105a53738(void)

{
  return 0;
}



/* Entry: 105a53740; end: 105a537bf; -[SCSpectaclesBrightnessSettingsManager _errorFromResponse:] */

void FUN_105a53740(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e191d8,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a537c0; end: 105a537c7; -[SCSpectaclesBrightnessSettingsManager brightnessLevelObservable] */

undefined8 FUN_105a537c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a537c8; end: 105a537cf; -[SCSpectaclesBrightnessSettingsManager autoBrightnessEnabledObservable] */

undefined8 FUN_105a537c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a537d0; end: 105a5382f; -[SCSpectaclesBrightnessSettingsManager .cxx_destruct] */

void FUN_105a537d0(long param_1)

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



/* Entry: 105a53830; end: 105a5397f; -[SCSpectaclesDeveloperModeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a53830(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272df74;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c263640();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272df78);
  puVar4 = PTR_PTR_1126c1960;
  _objc_alloc(PTR_PTR_1126c1960);
  func_0x00010c00bc60();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a53980; end: 105a539bf;  */

void FUN_105a53980(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdecf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a539c0; end: 105a53a3b; -[SCSpectaclesDeveloperModeEntryPoint _createDeveloperModeManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a539c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1968;
  _objc_alloc(PTR_PTR_1126c1968);
  param_1 = param_1 + _DAT_11272df74;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a53a3c; end: 105a53a77; -[SCSpectaclesDeveloperModeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a53a3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272df78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272df74);
  return;
}



/* Entry: 105a53a78; end: 105a53b2f; -[SCSpectaclesDeveloperModeManager initWithConnectionHub:] */

undefined1 * FUN_105a53a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb6e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a53b30; end: 105a53b73; -[SCSpectaclesDeveloperModeManager requestSettingsWithForceBoot:] */

void FUN_105a53b30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc4b80(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a53b74; end: 105a53bb7; -[SCSpectaclesDeveloperModeManager updateSettings:] */

void FUN_105a53b74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf8ffc0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a53bb8; end: 105a53bfb; -[SCSpectaclesDeveloperModeManager setAdbKey:] */

void FUN_105a53bb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c164f00(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a53bfc; end: 105a53c7b; -[SCSpectaclesDeveloperModeManager _errorFromResponse:] */

void FUN_105a53bfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e191f8,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a53c7c; end: 105a53e37; -[SCSpectaclesDeveloperModeManager handleResponse:] */

void FUN_105a53c7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be0afa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  if (lVar3 == 0x43) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (lVar1 == 0) {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c136620(param_1,param_2,0);
      goto LAB_105a53e18;
    }
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar4);
  }
  else {
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126af5d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 != 0x45) goto LAB_105a53e18;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010bf6fce0(param_3);
      func_0x00010c0df6e0(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar5);
      _objc_release(puVar5);
    }
    else {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar4);
    }
  }
  _objc_release(puVar4);
LAB_105a53e18:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a53e38; end: 105a53e3f; -[SCSpectaclesDeveloperModeManager responseMonitorState] */

undefined8 FUN_105a53e38(void)

{
  return 0;
}



/* Entry: 105a53e40; end: 105a53e47; -[SCSpectaclesDeveloperModeManager settingsResult] */

undefined8 FUN_105a53e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a53e48; end: 105a53e4f; -[SCSpectaclesDeveloperModeManager updateSettingsResult] */

undefined8 FUN_105a53e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a53e50; end: 105a53e8b; -[SCSpectaclesDeveloperModeManager .cxx_destruct] */

void FUN_105a53e50(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a53e8c; end: 105a53fe3; -[SCSpectaclesDeviceSecurityEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a53e8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272df88;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be3f9a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272df8c);
  puVar4 = PTR_PTR_1126c1970;
  _objc_alloc(PTR_PTR_1126c1970);
  func_0x00010c00c3e0();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a53fe4; end: 105a54023;  */

void FUN_105a53fe4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdecfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a54024; end: 105a5410f; -[SCSpectaclesDeviceSecurityEntryPoint _createDeviceSecurityManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a54024(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c1978;
  _objc_alloc(PTR_PTR_1126c1978);
  lVar6 = (long)_DAT_11272df88;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf026c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002120(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a54110; end: 105a5418f; -[SCSpectaclesDeviceSecurityEntryPoint _isDeviceSecuritySupported:] */

ulong FUN_105a54110(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074bc0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfd38e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0776e0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105a54190; end: 105a541cb; -[SCSpectaclesDeviceSecurityEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a54190(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272df8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272df88);
  return;
}



/* Entry: 105a541cc; end: 105a54313; -[SCSpectaclesDeviceSecurityManager initWithConnectionHub:device:analyticsLogger:] */

undefined1 *
FUN_105a541cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb6f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 1;
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a54314; end: 105a5431b; -[SCSpectaclesDeviceSecurityManager _updateNewUserDeviceSecurityDataResult:] */

void FUN_105a54314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028);
  return;
}



/* Entry: 105a5431c; end: 105a5435f; -[SCSpectaclesDeviceSecurityManager requestUserDeviceSecurityData] */

void FUN_105a5431c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c136f40(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a54360; end: 105a543a3; -[SCSpectaclesDeviceSecurityManager setPhoneProximityEnabled:lagunaId:passcode:] */

void FUN_105a54360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1db2a0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a543a4; end: 105a54463; -[SCSpectaclesDeviceSecurityManager setLockOutEvent:lockOutTime:lagunaId:passcode:] */

void FUN_105a543a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1c0000(PTR_PTR_1126b6718,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a54464; end: 105a544b3; -[SCSpectaclesDeviceSecurityManager turnOnRequirePasscodeWithLagunaId:passcode:] */

void FUN_105a54464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1ec540(PTR_PTR_1126b6718,param_2,1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a544b4; end: 105a54503; -[SCSpectaclesDeviceSecurityManager turnOffRequirePasscodeWithLagunaId:currentPasscode:] */

void FUN_105a544b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1ec540(PTR_PTR_1126b6718,param_2,0,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a54504; end: 105a54547; -[SCSpectaclesDeviceSecurityManager changePasscode:newPasscode:] */

void FUN_105a54504(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf34f60(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a54548; end: 105a5458b; -[SCSpectaclesDeviceSecurityManager verifyPasscode:] */

void FUN_105a54548(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c298960(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5458c; end: 105a545cf; -[SCSpectaclesDeviceSecurityManager requestFactoryReset] */

void FUN_105a5458c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0f8740(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a545d0; end: 105a54bff; -[SCSpectaclesDeviceSecurityManager handleResponse:] */

void FUN_105a545d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c13bcc0(), lVar1 == 5)) goto LAB_105a54804;
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 4) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  if (lVar2 == 0x4a) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105a54c00;
    puStack_70 = &UNK_110848ba8;
    _objc_retain(puVar5);
    puStack_68 = puVar5;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(lStack_58);
    puVar6 = puStack_68;
LAB_105a547f4:
    _objc_release(puVar6);
  }
  else {
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    if (lVar2 == 0x4b) {
      _objc_release(lVar1);
LAB_105a5475c:
      lVar1 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      _objc_release(lVar1);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x105a54cbc;
      puStack_a0 = &UNK_110841f80;
      _objc_retain(puVar5);
      puStack_98 = puVar5;
      lStack_90 = param_1;
      func_0x0001000d76cc("APPSTORE",&puStack_b8);
      puVar6 = (undefined *)0x0;
      puVar4 = puStack_98;
LAB_105a547d8:
      _objc_release(puVar4);
      func_0x00010be52400(param_1);
      goto LAB_105a547f4;
    }
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0x4c) goto LAB_105a5475c;
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    if (lVar2 == 0x4d) {
      _objc_release(lVar1);
LAB_105a54888:
      lVar1 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c27dd80();
      _objc_release(lVar1);
      if (lVar2 == 0x4d) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = *(undefined **)(param_1 + 0x40);
        _objc_retain(puVar6);
      }
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x105a54d20;
      puStack_d0 = &UNK_110841f80;
      _objc_retain(puVar5);
      puStack_c8 = puVar5;
      lStack_c0 = param_1;
      func_0x0001000d76cc("APPSTORE",&puStack_e8);
      puVar4 = puStack_c8;
      goto LAB_105a547d8;
    }
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0x4e) goto LAB_105a54888;
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    if (lVar2 == 0x4f) {
      _objc_release(lVar1);
LAB_105a54984:
      lVar1 = param_3;
      func_0x00010c134680(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      _objc_release(lVar1);
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      uStack_108 = 0x105a54d84;
      puStack_100 = &UNK_110841f80;
      _objc_retain(puVar5);
      puStack_f8 = puVar5;
      lStack_f0 = param_1;
      func_0x0001000d76cc("APPSTORE",&puStack_118);
      puVar6 = (undefined *)0x0;
      puVar4 = puStack_f8;
      goto LAB_105a547d8;
    }
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0x50) goto LAB_105a54984;
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    if (lVar2 == 0x51) {
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      uStack_140 = 0x105a54de8;
      puStack_138 = &UNK_110848ba8;
      _objc_retain(puVar5);
      puStack_130 = puVar5;
      _objc_retain(param_3);
      lStack_128 = param_3;
      lStack_120 = param_1;
      func_0x0001000d76cc("APPSTORE",&puStack_150);
      _objc_release(lStack_128);
      puVar6 = (undefined *)0x0;
      puVar4 = puStack_130;
      goto LAB_105a547d8;
    }
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c1990;
    if (lVar2 == 0x54) {
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c2989c0(param_3);
        func_0x00010c13cee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2989c0();
      }
      else {
        func_0x00010bf992c0();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_105a54e7c;
      puStack_168 = &UNK_110841f80;
      lStack_160 = param_1;
      puStack_158 = puVar4;
      _objc_retain(puVar4);
      func_0x0001000d76cc("APPSTORE",&puStack_180);
      _objc_release(puStack_158);
      puVar6 = (undefined *)0x0;
      goto LAB_105a547d8;
    }
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    if (lVar2 == 0x40) {
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      uStack_1a0 = 0x105a54ea8;
      puStack_198 = &UNK_110841f80;
      _objc_retain(puVar5);
      puStack_190 = puVar5;
      lStack_188 = param_1;
      func_0x0001000d76cc("APPSTORE",&puStack_1b0);
      puVar6 = (undefined *)0x0;
      puVar4 = puStack_190;
      goto LAB_105a547d8;
    }
  }
  _objc_release(puVar5);
LAB_105a54804:
  _objc_release(param_3);
  return;
}



/* Entry: 105a54c00; end: 105a54e7b;  */

void FUN_105a54c00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c291be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50) = uVar1;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c1980;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c291be0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13cec0(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar2 = PTR_PTR_1126c1980;
    func_0x00010bf992e0(PTR_PTR_1126c1980,param_2,*(long *)(param_1 + 0x20),0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bedc280(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a54e7c; end: 105a54f07;  */

void FUN_105a54e7c(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),param_2,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c136f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_requestUserDeviceSecurityData_11262b5f0);
  return;
}



/* Entry: 105a54f08; end: 105a54f0f; -[SCSpectaclesDeviceSecurityManager responseMonitorState] */

undefined8 FUN_105a54f08(void)

{
  return 0;
}



/* Entry: 105a54f10; end: 105a54f23; -[SCSpectaclesDeviceSecurityManager setActionSource:] */

void FUN_105a54f10(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    *(ulong *)(param_1 + 0x48) = param_3 - 1;
  }
  return;
}



/* Entry: 105a54f24; end: 105a54f33; -[SCSpectaclesDeviceSecurityManager logPasscodeOptionPresentation] */

void FUN_105a54f24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logDeviceSecuritySettingsAction_1125722a0,10,0,0xffffffffffffffff);
  return;
}



/* Entry: 105a54f34; end: 105a54fab; -[SCSpectaclesDeviceSecurityManager _logDeviceSecuritySettingsAction:lockOutTime:failureReason:] */

void FUN_105a54f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a4e60(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x48),param_3,param_4,param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a54fac; end: 105a54fb3; -[SCSpectaclesDeviceSecurityManager deviceSecurityData] */

undefined8 FUN_105a54fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105a54fb4; end: 105a54fbb; -[SCSpectaclesDeviceSecurityManager deviceSecurityDataResult] */

undefined8 FUN_105a54fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a54fbc; end: 105a54fc3; -[SCSpectaclesDeviceSecurityManager setUserDevicePasswordDataResult] */

undefined8 FUN_105a54fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a54fc4; end: 105a54fcb; -[SCSpectaclesDeviceSecurityManager deviceSecurityVerifyPasscodeResult] */

undefined8 FUN_105a54fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a54fcc; end: 105a54fd3; -[SCSpectaclesDeviceSecurityManager factoryResetResult] */

undefined8 FUN_105a54fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a54fd4; end: 105a55053; -[SCSpectaclesDeviceSecurityManager .cxx_destruct] */

void FUN_105a54fd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a55054; end: 105a5510f; -[SCSpectaclesDeviceActionManager initWithConnectionHub:] */

undefined1 * FUN_105a55054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb6f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a55110; end: 105a55153; -[SCSpectaclesDeviceActionManager requestClearCache] */

void FUN_105a55110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf3ac20(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a55154; end: 105a55197; -[SCSpectaclesDeviceActionManager requestFactoryReset] */

void FUN_105a55154(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0f8740(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a55198; end: 105a55217; -[SCSpectaclesDeviceActionManager _errorFromResponse:] */

void FUN_105a55198(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e19238,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a55218; end: 105a5531f; -[SCSpectaclesDeviceActionManager handleResponse:] */

void FUN_105a55218(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be0afa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  if (lVar3 == 0x41) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    if (lVar3 != 0x40) goto LAB_105a55300;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  puVar4 = PTR_PTR_1126af5d0;
  if (lVar1 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
LAB_105a55300:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a55320; end: 105a55327; -[SCSpectaclesDeviceActionManager responseMonitorState] */

undefined8 FUN_105a55320(void)

{
  return 0;
}



/* Entry: 105a55328; end: 105a5532f; -[SCSpectaclesDeviceActionManager clearCacheResult] */

undefined8 FUN_105a55328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a55330; end: 105a55337; -[SCSpectaclesDeviceActionManager factoryResetResult] */

undefined8 FUN_105a55330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a55338; end: 105a55373; -[SCSpectaclesDeviceActionManager .cxx_destruct] */

void FUN_105a55338(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a55374; end: 105a555f7; -[SCSpectaclesDeviceSettingsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a55374(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
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
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105a555f8;
  puStack_88 = &UNK_1108cf6b8;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11272dfc4;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c263ae0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126ae720;
  if ((int)lVar4 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puStack_c8 = puVar8;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x105a55638;
    puStack_b0 = &UNK_1108cf6e8;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_a8);
  }
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar9;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2638a0();
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar8 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_d0,auStack_78);
    func_0x00010bf11fe0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_d0);
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272dfc8);
  puVar5 = PTR_PTR_1126c1998;
  _objc_alloc(PTR_PTR_1126c1998);
  func_0x00010c00c160();
  func_0x00010bf9d660(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105a555f8; end: 105a556b7;  */

void FUN_105a555f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdecf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a556b8; end: 105a55733; -[SCSpectaclesDeviceSettingsServicesEntryPoint _createDeviceActionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a556b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c19a0;
  _objc_alloc(PTR_PTR_1126c19a0);
  param_1 = param_1 + _DAT_11272dfc4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a55734; end: 105a557af; -[SCSpectaclesDeviceSettingsServicesEntryPoint _createQuickPreviewManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a55734(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c19a8;
  _objc_alloc(PTR_PTR_1126c19a8);
  param_1 = param_1 + _DAT_11272dfc4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a557b0; end: 105a5582b; -[SCSpectaclesDeviceSettingsServicesEntryPoint _createLocationSettingsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a557b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c19b0;
  _objc_alloc(PTR_PTR_1126c19b0);
  param_1 = param_1 + _DAT_11272dfc4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a5582c; end: 105a55867; -[SCSpectaclesDeviceSettingsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5582c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272dfc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272dfc4);
  return;
}



/* Entry: 105a55868; end: 105a5591f; -[SCSpectaclesLocationSettingsManager initWithConnectionHub:] */

undefined1 * FUN_105a55868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb700;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a55920; end: 105a55963; -[SCSpectaclesLocationSettingsManager requestSettingsWithForceBoot:] */

void FUN_105a55920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc7260(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a55964; end: 105a559a7; -[SCSpectaclesLocationSettingsManager updateSettings:] */

void FUN_105a55964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1bf9a0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a559a8; end: 105a55a27; -[SCSpectaclesLocationSettingsManager _errorFromResponse:] */

void FUN_105a559a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e19258,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a55a28; end: 105a55be3; -[SCSpectaclesLocationSettingsManager handleResponse:] */

void FUN_105a55a28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be0afa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  if (lVar3 == 0x28) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (lVar1 == 0) {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c136620(param_1,param_2,0);
      goto LAB_105a55bc4;
    }
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar4);
  }
  else {
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126af5d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 != 0x3d) goto LAB_105a55bc4;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010c09edc0(param_3);
      func_0x00010c0df6e0(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar5);
      _objc_release(puVar5);
    }
    else {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar4);
    }
  }
  _objc_release(puVar4);
LAB_105a55bc4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a55be4; end: 105a55beb; -[SCSpectaclesLocationSettingsManager responseMonitorState] */

undefined8 FUN_105a55be4(void)

{
  return 0;
}



/* Entry: 105a55bec; end: 105a55bf3; -[SCSpectaclesLocationSettingsManager settingsResult] */

undefined8 FUN_105a55bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a55bf4; end: 105a55bfb; -[SCSpectaclesLocationSettingsManager updateSettingsResult] */

undefined8 FUN_105a55bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a55bfc; end: 105a55c37; -[SCSpectaclesLocationSettingsManager .cxx_destruct] */

void FUN_105a55bfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a55c38; end: 105a55cef; -[SCSpectaclesQuickPreviewManager initWithConnectionHub:] */

undefined1 * FUN_105a55c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb708;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a55cf0; end: 105a55d33; -[SCSpectaclesQuickPreviewManager requestSettingsWithForceBoot:] */

void FUN_105a55cf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc94c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a55d34; end: 105a55d77; -[SCSpectaclesQuickPreviewManager updateSettings:] */

void FUN_105a55d34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1e6ae0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a55d78; end: 105a55df7; -[SCSpectaclesQuickPreviewManager _errorFromResponse:] */

void FUN_105a55d78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e19278,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a55df8; end: 105a55fb3; -[SCSpectaclesQuickPreviewManager handleResponse:] */

void FUN_105a55df8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be0afa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  if (lVar3 == 0x3e) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (lVar1 == 0) {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c136620(param_1,param_2,0);
      goto LAB_105a55f94;
    }
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar4);
  }
  else {
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126af5d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 != 0x3f) goto LAB_105a55f94;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010c11e7e0(param_3);
      func_0x00010c0df6e0(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar5);
      _objc_release(puVar5);
    }
    else {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar4);
    }
  }
  _objc_release(puVar4);
LAB_105a55f94:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a55fb4; end: 105a55fbb; -[SCSpectaclesQuickPreviewManager responseMonitorState] */

undefined8 FUN_105a55fb4(void)

{
  return 0;
}



/* Entry: 105a55fbc; end: 105a55fc3; -[SCSpectaclesQuickPreviewManager settingsResult] */

undefined8 FUN_105a55fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a55fc4; end: 105a55fcb; -[SCSpectaclesQuickPreviewManager updateSettingsResult] */

undefined8 FUN_105a55fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a55fcc; end: 105a56007; -[SCSpectaclesQuickPreviewManager .cxx_destruct] */

void FUN_105a55fcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a56008; end: 105a5616f; -[SCSpectaclesFlightManager initWithConnectionHub:devicePreferences:flightSettingsLogger:] */

undefined1 *
FUN_105a56008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb710;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    func_0x00010be1f220(puVar1);
    func_0x00010bea4be0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a56170; end: 105a561b3; -[SCSpectaclesFlightManager requestAbortFlight] */

void FUN_105a56170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010beec520(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a561b4; end: 105a561f7; -[SCSpectaclesFlightManager getFlightStatus] */

void FUN_105a561b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010bfc5a20(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a561f8; end: 105a5623b; -[SCSpectaclesFlightManager getFlightMode] */

void FUN_105a561f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010bfc59e0(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5623c; end: 105a562a7; -[SCSpectaclesFlightManager customFlightMode] */

void FUN_105a5623c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfb2a40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a562a8; end: 105a5630b;  */

void FUN_105a562a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0e00e0(param_2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb29c0();
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a5630c; end: 105a5634f; -[SCSpectaclesFlightManager fetchAllFlightSettings] */

void FUN_105a5630c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010bfc2280(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a56350; end: 105a563a7; -[SCSpectaclesFlightManager _flightPathforFlightModeFromSettings:] */

long FUN_105a56350(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 5) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb29c0();
    _objc_release(lVar1);
    return lVar2;
  }
  return param_3;
}



/* Entry: 105a563a8; end: 105a563ab; -[SCSpectaclesFlightManager _assertValidFlightPath:forFlightMode:] */

void FUN_105a563a8(void)

{
  return;
}



/* Entry: 105a563ac; end: 105a564f3; -[SCSpectaclesFlightManager _getFlightModeSettingsFromStorage] */

void FUN_105a563ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0dff20(puVar1,param_2,&PTR____CFConstantStringClassReference_110e192b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010bf97ce0(puVar2);
  if ((puVar2 == (undefined *)0x0) || (*(char *)(puStack_48 + 3) == '\x01')) {
    puVar1 = PTR_PTR_1126c19c8;
    func_0x00010bf6a3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar4);
  func_0x00010be83fc0(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puVar1);
  return;
}



/* Entry: 105a564f4; end: 105a5659b;  */

void FUN_105a564f4(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR_PTR_1126c19c0;
    _objc_opt_class(PTR_PTR_1126c19c0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) goto LAB_105a56584;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *param_4 = 1;
LAB_105a56584:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


