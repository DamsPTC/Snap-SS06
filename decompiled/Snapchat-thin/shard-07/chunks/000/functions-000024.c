/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10506d2e0; end: 10506d317; -[SCProfile3DeeplinkHandler bugsAndSuggestionsScopeDidDismiss] */

void FUN_10506d2e0(undefined8 param_1)

{
  func_0x00010bf21f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d318; end: 10506d39f; -[SCProfile3DeeplinkHandler mobileSettingsDidComplete] */

void FUN_10506d318(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0fb1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c0fb1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10506d3a0; end: 10506d427; -[SCProfile3DeeplinkHandler impalaProfileDidComplete] */

void FUN_10506d3a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c116de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c116de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10506d428; end: 10506d51f; -[SCProfile3DeeplinkHandler impalaProfileNeedsRemoval] */

void FUN_10506d428(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c116de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf6f440(lVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10506d520; end: 10506d54b;  */

void FUN_10506d520(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfea060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d54c; end: 10506ddb3; -[SCProfile3DeeplinkHandler performSettingsDeeplinkWithPayload:hostingNav:] */

void FUN_10506d54c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  func_0x00010c228080();
  puVar5 = param_1;
  switch(param_3) {
  case 0:
    puVar3 = param_1;
    func_0x00010bf35380();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar4 = PTR_PTR_1126aeb00;
    _objc_alloc(PTR_PTR_1126aeb00);
    func_0x00010c00afc0();
    func_0x00010bf35380(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    puVar3 = param_1;
    func_0x00010c0f5580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar3 = param_1;
    func_0x00010c0f55c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf24220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0f5580(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    puVar3 = param_1;
    func_0x00010bf1b3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar4 = PTR_PTR_1126b4550;
    _objc_alloc(PTR_PTR_1126b4550);
    goto code_r0x00010506db24;
  case 3:
    puVar3 = param_1;
    func_0x00010bf1b3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar4 = PTR_PTR_1126b4550;
    _objc_alloc(PTR_PTR_1126b4550);
code_r0x00010506db24:
    func_0x00010c058340();
    puVar3 = param_1;
    func_0x00010bf1b3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170ce0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    func_0x00010bf1b3e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ae00();
    goto code_r0x00010506dd2c;
  case 4:
    puVar3 = param_1;
    func_0x00010bf4a4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar3 = param_1;
    func_0x00010bf4a540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf24220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bf4a4e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      break;
    }
    goto code_r0x00010506dd88;
  case 5:
    puVar3 = param_1;
    func_0x00010c1601e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar3 = param_1;
    func_0x00010c160220(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf24220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1601e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    puVar3 = param_1;
    func_0x00010bf21f20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_10506dd98;
    puVar3 = param_1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1f440();
    _objc_release(puVar3);
    if ((int)puVar4 == 0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b4558;
      _objc_alloc(PTR_PTR_1126b4558);
      func_0x00010c056fe0();
      func_0x00010bf21f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      break;
    }
    goto code_r0x00010506dd90;
  default:
    goto LAB_10506dd98;
  case 8:
    puVar3 = param_1;
    func_0x00010c0fb1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c10e240(param_1,param_2,param_4);
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar3 = param_1;
    func_0x00010c0fb1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf24220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0fb1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    puVar5 = PTR_PTR_1126aeae0;
    func_0x00010beed6c0(PTR_PTR_1126aeae0,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e80;
    func_0x00010c27c3a0(PTR_PTR_1126b3e80,param_2,puVar5,1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e260(param_1,param_2,param_4,puVar4);
    goto code_r0x00010506dd88;
  case 0xb:
    puVar3 = param_1;
    func_0x00010c228220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_10506dd98;
    func_0x00010c0d6d00(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_10506dd98;
    puVar3 = param_1;
    func_0x00010c2282a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf22f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c228220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf9d620();
code_r0x00010506dd2c:
  _objc_release(param_1);
code_r0x00010506dd88:
  _objc_release(puVar4);
code_r0x00010506dd90:
  _objc_release(puVar5);
LAB_10506dd98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10506ddb4; end: 10506ddbb; -[SCProfile3DeeplinkHandler circumstanceEngine] */

undefined8 FUN_10506ddb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10506ddbc; end: 10506ddeb; -[SCProfile3DeeplinkHandler setCircumstanceEngine:] */

void FUN_10506ddbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506ddec; end: 10506de03; -[SCProfile3DeeplinkHandler userSession] */

void FUN_10506ddec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506de04; end: 10506de0f; -[SCProfile3DeeplinkHandler setUserSession:] */

void FUN_10506de04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10506de10; end: 10506de27; -[SCProfile3DeeplinkHandler settingsScopeExposer] */

void FUN_10506de10(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506de28; end: 10506de33; -[SCProfile3DeeplinkHandler setSettingsScopeExposer:] */

void FUN_10506de28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10506de34; end: 10506de3b; -[SCProfile3DeeplinkHandler settingsScopeServices] */

undefined8 FUN_10506de34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10506de3c; end: 10506de6b; -[SCProfile3DeeplinkHandler setSettingsScopeServices:] */

void FUN_10506de3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506de6c; end: 10506de83; -[SCProfile3DeeplinkHandler changeUsernameScopeExposer] */

void FUN_10506de6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506de84; end: 10506de8f; -[SCProfile3DeeplinkHandler setChangeUsernameScopeExposer:] */

void FUN_10506de84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10506de90; end: 10506dea7; -[SCProfile3DeeplinkHandler passwordSettingsScopeExposer] */

void FUN_10506de90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506dea8; end: 10506deb3; -[SCProfile3DeeplinkHandler setPasswordSettingsScopeExposer:] */

void FUN_10506dea8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10506deb4; end: 10506debb; -[SCProfile3DeeplinkHandler passwordSettingsScopeServices] */

undefined8 FUN_10506deb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10506debc; end: 10506deeb; -[SCProfile3DeeplinkHandler setPasswordSettingsScopeServices:] */

void FUN_10506debc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506deec; end: 10506df03; -[SCProfile3DeeplinkHandler bitmojiExtensionSettingsFactoryServices] */

void FUN_10506deec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506df04; end: 10506df0f; -[SCProfile3DeeplinkHandler setBitmojiExtensionSettingsFactoryServices:] */

void FUN_10506df04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10506df10; end: 10506df17; -[SCProfile3DeeplinkHandler bitmojiExtensionSettingsPresenter] */

undefined8 FUN_10506df10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10506df18; end: 10506df47; -[SCProfile3DeeplinkHandler setBitmojiExtensionSettingsPresenter:] */

void FUN_10506df18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506df48; end: 10506df5f; -[SCProfile3DeeplinkHandler contactSupportScopeExposer] */

void FUN_10506df48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506df60; end: 10506df6b; -[SCProfile3DeeplinkHandler setContactSupportScopeExposer:] */

void FUN_10506df60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10506df6c; end: 10506df83; -[SCProfile3DeeplinkHandler contactSupportScopeServices] */

void FUN_10506df6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506df84; end: 10506df8f; -[SCProfile3DeeplinkHandler setContactSupportScopeServices:] */

void FUN_10506df84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10506df90; end: 10506dfa7; -[SCProfile3DeeplinkHandler sessionManagementScopeExposer] */

void FUN_10506df90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506dfa8; end: 10506dfb3; -[SCProfile3DeeplinkHandler setSessionManagementScopeExposer:] */

void FUN_10506dfa8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 10506dfb4; end: 10506dfcb; -[SCProfile3DeeplinkHandler sessionManagementScopeServices] */

void FUN_10506dfb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506dfcc; end: 10506dfd7; -[SCProfile3DeeplinkHandler setSessionManagementScopeServices:] */

void FUN_10506dfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10506dfd8; end: 10506dfef; -[SCProfile3DeeplinkHandler bugsAndSuggestionsScopeExposer] */

void FUN_10506dfd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506dff0; end: 10506dffb; -[SCProfile3DeeplinkHandler setBugsAndSuggestionsScopeExposer:] */

void FUN_10506dff0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 10506dffc; end: 10506e013; -[SCProfile3DeeplinkHandler phoneSettingsScopeExposer] */

void FUN_10506dffc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506e014; end: 10506e01f; -[SCProfile3DeeplinkHandler setPhoneSettingsScopeExposer:] */

void FUN_10506e014(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 10506e020; end: 10506e037; -[SCProfile3DeeplinkHandler phoneSettingsScopeServices] */

void FUN_10506e020(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506e038; end: 10506e043; -[SCProfile3DeeplinkHandler setPhoneSettingsScopeServices:] */

void FUN_10506e038(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 10506e044; end: 10506e05b; -[SCProfile3DeeplinkHandler profileManagementScopeExposer] */

void FUN_10506e044(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506e05c; end: 10506e067; -[SCProfile3DeeplinkHandler setProfileManagementScopeExposer:] */

void FUN_10506e05c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 10506e068; end: 10506e117; -[SCProfile3DeeplinkHandler .cxx_destruct] */

void FUN_10506e068(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10506e118; end: 10506e1bb; -[SCCharmsServices initWithCharmsDataCoordinator:charmsBlizzardLogger:] */

undefined1 *
FUN_10506e118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5d28;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10506e1bc; end: 10506e1c3; -[SCCharmsServices charmsDataCoordinator] */

undefined8 FUN_10506e1bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10506e1c4; end: 10506e1cb; -[SCCharmsServices charmsBlizzardLogger] */

undefined8 FUN_10506e1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10506e1cc; end: 10506e1fb; -[SCCharmsServices .cxx_destruct] */

void FUN_10506e1cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10506e1fc; end: 10506e26f; -[SCSnapchattersLabelInfoProvider initWithFriendScoreProvider:] */

undefined1 * FUN_10506e1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5d30;
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



/* Entry: 10506e270; end: 10506e4bf; -[SCSnapchattersLabelInfoProvider loadItem:completion:failure:callbackQueue:] */

undefined8
FUN_10506e270(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_6);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010bfb8aa0(uVar4);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 10506e4c0; end: 10506e4c7; -[SCSnapchattersLabelInfoProvider loadItem:itemRemoteDownloader:completion:failure:callbackQueue:] */

undefined8 FUN_10506e4c0(void)

{
  return 0;
}



/* Entry: 10506e4c8; end: 10506e4cb; -[SCSnapchattersLabelInfoProvider resetCache] */

void FUN_10506e4c8(void)

{
  return;
}



/* Entry: 10506e4cc; end: 10506e4cf; -[SCSnapchattersLabelInfoProvider recordConsumptionOfTrackingId:] */

void FUN_10506e4cc(void)

{
  return;
}



/* Entry: 10506e4d0; end: 10506e4db; -[SCSnapchattersLabelInfoProvider .cxx_destruct] */

void FUN_10506e4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10506e4dc; end: 10506e7b7; +[SCChatMediaSaver saveMediasToCameraRollFromViewModels:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:snapSaver:watermarkProfile:watermarkGenerator:withCompletion:] */

void FUN_10506e4dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))(param_10,0);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar2 != (undefined *)0x2) {
      puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if (puVar2 != (undefined *)0x1) {
        uStack_80 = 0;
        uStack_70 = 0x2020000000;
        uStack_68 = 1;
        uVar5 = 0;
        puStack_78 = &uStack_80;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0xc2000000;
        pcStack_d8 = FUN_10506e7b8;
        puStack_d0 = &UNK_110864818;
        _objc_retain(param_3);
        lStack_c8 = param_3;
        puStack_90 = &uStack_80;
        uStack_88 = param_1;
        _objc_retain(param_5);
        uStack_c0 = param_5;
        _objc_retain(param_6);
        uStack_b8 = param_6;
        _objc_retain(param_8);
        uStack_b0 = param_8;
        _objc_retain(param_7);
        uStack_a8 = param_7;
        _objc_retain(param_9);
        uStack_a0 = param_9;
        _objc_retain(param_10);
        lStack_98 = param_10;
        func_0x00010007380c(uVar5,&puStack_e8);
        _objc_release(uVar5);
        _objc_release(lStack_98);
        _objc_release(uStack_a0);
        _objc_release(uStack_a8);
        _objc_release(uStack_b0);
        _objc_release(uStack_b8);
        _objc_release(uStack_c0);
        _objc_release(lStack_c8);
        __Block_object_dispose(&uStack_80,8);
        goto LAB_10506e740;
      }
    }
    uVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110db74f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db74f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110db7518;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7518,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1184e0(uVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(uVar5);
  }
LAB_10506e740:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10506e7b8; end: 10506eb17;  */

void FUN_10506e7b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar5 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar11 = 0;
      lVar2 = lVar5;
      do {
        if (*plStack_140 != lVar10) {
          lVar2 = lVar6;
          _objc_enumerationMutation();
        }
        lVar7 = *(long *)(lStack_148 + lVar11 * 8);
        _dispatch_group_create();
        _dispatch_group_enter();
        puStack_180 = puVar1;
        uStack_178 = 0xc2000000;
        pcStack_170 = FUN_10506eb18;
        puStack_168 = &UNK_1108646c8;
        uStack_158 = *(undefined8 *)(param_1 + 0x58);
        _objc_retain(lVar2);
        ppuVar3 = &puStack_180;
        lStack_160 = lVar2;
        _objc_retainBlock();
        lVar4 = lVar7;
        func_0x00010c14b7a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == 0) {
          puStack_248 = puVar1;
          uStack_240 = 0xc2000000;
          pcStack_238 = FUN_10506edc4;
          puStack_230 = &UNK_1108647b8;
          uStack_1f0 = *(undefined8 *)(param_1 + 0x60);
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          lStack_228 = lVar7;
          _objc_retain(uVar8);
          uVar9 = *(undefined8 *)(param_1 + 0x48);
          uStack_220 = uVar8;
          _objc_retain(uVar9);
          uVar8 = *(undefined8 *)(param_1 + 0x40);
          uStack_218 = uVar9;
          _objc_retain(uVar8);
          uStack_1f8 = *(undefined8 *)(param_1 + 0x58);
          uStack_210 = uVar8;
          ppuStack_200 = ppuVar3;
          _objc_retain(lVar2);
          lStack_208 = lVar2;
          _objc_retain(ppuVar3);
          func_0x00010bfa78c0(lVar7);
          _objc_release(lStack_208);
          _objc_release(ppuStack_200);
          _objc_release(uStack_210);
          _objc_release(uStack_218);
          uVar8 = uStack_220;
        }
        else {
          puStack_1e8 = puVar1;
          uStack_1e0 = 0xc2000000;
          pcStack_1d8 = FUN_10506eb30;
          puStack_1d0 = &UNK_110864728;
          uStack_188 = *(undefined8 *)(param_1 + 0x60);
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          lStack_1c8 = lVar7;
          _objc_retain(uVar8);
          uVar9 = *(undefined8 *)(param_1 + 0x30);
          uStack_1c0 = uVar8;
          _objc_retain(uVar9);
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          uStack_1b8 = uVar9;
          _objc_retain(uVar8);
          uVar9 = *(undefined8 *)(param_1 + 0x40);
          uStack_1b0 = uVar8;
          _objc_retain(uVar9);
          uStack_190 = *(undefined8 *)(param_1 + 0x58);
          uStack_1a8 = uVar9;
          ppuStack_198 = ppuVar3;
          _objc_retain(lVar2);
          lStack_1a0 = lVar2;
          _objc_retain(ppuVar3);
          func_0x00010bfab4a0(lVar7);
          _objc_release(lStack_1a0);
          _objc_release(ppuStack_198);
          _objc_release(uStack_1a8);
          _objc_release(uStack_1b0);
          _objc_release(uStack_1b8);
          uVar8 = uStack_1c0;
        }
        _objc_release(uVar8);
        _objc_release(ppuVar3);
        _dispatch_group_wait(lVar2,0xffffffffffffffff);
        _objc_release(lStack_160);
        _objc_release();
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar6);
  puStack_278 = puVar1;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_10506f1cc;
  puStack_260 = &UNK_1108647e8;
  lVar5 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar5);
  uStack_250 = *(undefined8 *)(param_1 + 0x58);
  ppuVar3 = &puStack_278;
  lStack_258 = lVar5;
  func_0x0001000d76cc("APPSTORE");
  lVar5 = lStack_258;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar3 != (undefined **)0x0) {
    *(undefined1 *)(*(long *)(*(long *)(lVar5 + 0x28) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar5 + 0x20));
  return;
}



/* Entry: 10506eb18; end: 10506eb2f;  */

void FUN_10506eb18(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10506eb30; end: 10506ed0b;  */

void FUN_10506eb30(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06e8e0();
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c14b7a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14af80(uVar2);
      goto LAB_10506ec0c;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bee8c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224ac0();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  func_0x00010bfae700(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
LAB_10506ec0c:
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10506ed0c; end: 10506edc3;  */

void FUN_10506ed0c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 10506edc4; end: 10506ef73;  */

void FUN_10506edc4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x40));
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e8e0();
  lVar2 = param_2;
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    func_0x00010be8e0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10aa20(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c2a2a40(*(undefined8 *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar4);
    _objc_retain(lVar2);
    func_0x00010bfc0720(uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(lVar2);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ae40();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10506ef74; end: 10506f077;  */

void FUN_10506ef74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10506f078; end: 10506f0d7;  */

void FUN_10506f078(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ae40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506f0d8; end: 10506f1cb;  */

void FUN_10506f0d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ae40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506f1cc; end: 10506f1ef;  */

void FUN_10506f1cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010506f1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
    return;
  }
  return;
}



/* Entry: 10506f1f0; end: 10506f35b; +[SCChatMediaSaver _videoFilterForViewModel:withOverlayImage:filterFactory:previewURLVideoProvider:] */

void FUN_10506f1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06e8e0();
  uVar3 = 5;
  if ((int)uVar1 == 0) {
    uVar3 = 1;
  }
  uVar1 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010bf58fc0(uVar1,param_2,uVar3,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c14b7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c29af00(param_6,param_2,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c221d20(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c1d75e0(uVar2,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c16bc20(uVar2,param_2,1);
  func_0x00010c1a8660(uVar2,param_2,1);
  func_0x00010c1f5d00(uVar2,param_2,1);
  uVar3 = param_3;
  func_0x00010c06e8e0();
  _objc_release(param_3);
  if ((int)uVar3 != 0) {
    func_0x00010be79840(param_1,param_2,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10506f35c; end: 10506f3b7; +[SCChatMediaSaver _prepareVideoFilterForSpectacles:] */

void FUN_10506f35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 2;
  func_0x000109024c04(0x3f9999999999999a,2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207b40(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506f3b8; end: 10506f47b; +[SCChatMediaSaver _renderCirclePaddingForSpectacles:] */

void FUN_10506f3b8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4044000000000000;
  if (1728.0 <= param_2) {
    uVar3 = 0x4048000000000000;
  }
  func_0x00010c12fbe0(uVar3,puVar2,param_4,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10506f47c; end: 10506f847;  */

void FUN_10506f47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000030);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar2 = in_stack_00000060;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf37b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b4560;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(in_stack_00000028);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(in_stack_00000068);
  _objc_retain(param_9);
  _objc_retain(param_4);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000050);
  func_0x00010c14a980(puVar1);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(param_1);
  _objc_release(in_stack_00000078);
  _objc_release(param_5);
  _objc_release(in_stack_00000028);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(in_stack_00000068);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000078);
  _objc_release(param_5);
  _objc_release(in_stack_00000028);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(in_stack_00000068);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000050);
  _objc_release(uVar3);
  return;
}



/* Entry: 10506f848; end: 10506fc0b;  */

void FUN_10506f848(long param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar13;
  ulong unaff_x22;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined **unaff_x27;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [136];
  long lStack_68;
  
  puVar10 = PTR_PTR_1126afde0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    puVar10 = *(undefined **)(param_1 + 0x20);
    puVar11 = puVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto code_r0x00010506fc0c;
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dc3f18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3f18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aea00();
    _objc_release(uVar7);
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    lVar13 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar13);
    lVar8 = lVar13;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar15 = *plStack_160;
      do {
        lVar16 = 0;
        do {
          if (*plStack_160 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          uVar14 = *(undefined8 *)(lStack_168 + lVar16 * 8);
          uVar7 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c5180(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a39a0(uVar7);
          _objc_release(uVar14);
          _objc_release(uVar7);
          lVar16 = lVar16 + 1;
        } while (lVar8 != lVar16);
        lVar8 = lVar13;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar13);
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x48);
    func_0x00010c071ae0();
    bVar4 = *(long *)(param_1 + 0x78) == 0x24;
    lVar8 = 0x50;
    if (bVar4) {
      lVar8 = 0x58;
    }
    unaff_x21 = *(undefined8 *)(param_1 + lVar8);
    uVar2 = 0;
    if (!bVar4) {
      uVar2 = uVar5;
    }
    unaff_x22 = (ulong)uVar2;
    _objc_retain(unaff_x21);
    if ((uVar2 & 1) == 0) {
      unaff_x22 = *(ulong *)(param_1 + 0x60);
      uVar14 = *(undefined8 *)(param_1 + 0x68);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(unaff_x22);
      _objc_retain(uVar7);
      _objc_retain(uVar14);
      _objc_retain(unaff_x21);
      _objc_retain(uVar3);
      uVar9 = unaff_x22;
      func_0x00010beee460(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_f0,uVar9);
      _objc_release(uVar9);
      uVar9 = unaff_x22;
      func_0x00010beee460(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_10506fd2c;
      puStack_110 = &UNK_110864878;
      unaff_x27 = &puStack_128;
      _objc_copyWeak(auStack_f8,auStack_f0);
      _objc_retain(unaff_x21);
      uStack_108 = unaff_x21;
      _objc_retain(uVar3);
      uStack_100 = uVar3;
      func_0x00010bfaa1a0(uVar9);
      _objc_release(uVar9);
      _objc_release(uStack_100);
      _objc_release(uStack_108);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
      _objc_release(uVar3);
      _objc_release(unaff_x21);
      _objc_release(uVar14);
      _objc_release(uVar7);
      _objc_release(unaff_x22);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      (**(code **)(*(long *)(param_1 + 0x70) + 0x10))();
    }
    _objc_release(unaff_x21);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 6);
  _objc_destroyWeak(auStack_f0);
  unaff_x30 = FUN_10506fc0c;
  puVar11 = puVar10;
  __Unwind_Resume(puVar10);
  register0x00000008 = (BADSPACEBASE *)&uStack_170;
  unaff_x19 = puVar10;
  unaff_x20 = param_1;
  unaff_x29 = puVar1;
code_r0x00010506fc0c:
  puVar10 = PTR_PTR_1126afde0;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  _objc_retain();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar12 = puVar11;
  func_0x00010c269d40(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  func_0x00010c25f340(puVar12);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 10506fc0c; end: 10506fcaf;  */

void FUN_10506fc0c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar3 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c25f340(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10506fcb0; end: 10506fd2b;  */

void FUN_10506fcb0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),7);
  return;
}



/* Entry: 10506fd2c; end: 10506fdaf;  */

void FUN_10506fd2c(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    _objc_retain(param_3);
    _objc_retain(param_2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c15c800();
    _objc_release(param_3);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10506fdb0; end: 10507002f; -[SCFriendUnifiedProfileChatAttachmentSectionDataProvider initWithFriendUnifiedProfileDataSource:userSession:imageDownloader:labelInfoFetcher:snapchatterProvider:chatAttachmentDataStore:profileSavedAttachmentsFetcher:profileChatMessagesUpdateTracker:maxCellsCanRenderBeforeViewMore:friendmojiPresenter:grapheneServices:simpleContentFetcher:urlPreviewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10506fdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126e5d38;
  puVar3 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithUserSession_ownerId_conv_112527900,param_4,uVar1,uVar2,0,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                      param_14,param_15);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271b0d8;
    _objc_storeWeak((long)puVar3 + lVar4,param_3);
    _objc_retain();
    uVar1 = param_3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100bf119c();
    *(char *)((long)puVar3 + (long)_DAT_11271b0dc) = (char)uVar2;
    _objc_release(uVar1);
    _objc_release(param_3);
    lVar4 = (long)puVar3 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010befc780();
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105070030; end: 10507003f; -[SCFriendUnifiedProfileChatAttachmentSectionDataProvider shouldShowSectionWhenNoChatAttachments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105070030(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271b0dc);
}



/* Entry: 105070040; end: 105070047; -[SCFriendUnifiedProfileChatAttachmentSectionDataProvider senderSubtitleForSavedInfoAttachmentDataModel:] */

undefined8 FUN_105070040(void)

{
  return 0;
}



/* Entry: 105070048; end: 10507010f; -[SCFriendUnifiedProfileChatAttachmentSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105070048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418;
  puStack_38 = PTR_PTR_1126e5d38;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    lVar3 = param_1 + _DAT_11271b0d8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100bf119c();
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bedfe00(param_1);
  }
  return;
}



/* Entry: 105070110; end: 10507019b; -[SCFriendUnifiedProfileChatAttachmentSectionDataProvider _updateShouldShowSectionWhenNoChatAttachments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105070110(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11271b0dc) != param_3) {
    *(char *)(param_1 + _DAT_11271b0dc) = (char)param_3;
    func_0x00010c2890a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10507019c; end: 1050701a7;  */

void FUN_10507019c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSectionDataModel__11265beb0,0);
  return;
}



/* Entry: 1050701a8; end: 1050701b7; -[SCFriendUnifiedProfileChatAttachmentSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050701a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271b0d8);
  return;
}



/* Entry: 1050701b8; end: 105070403; -[SCGroupUnifiedProfileChatAttachmentSectionDataProvider initWithGroupUnifiedProfileDataSource:userSession:imageDownloader:labelInfoFetcher:snapchatterProvider:chatAttachmentDataStore:profileSavedAttachmentsFetcher:profileChatMessagesUpdateTracker:maxCellsCanRenderBeforeViewMore:friendmojiPresenter:grapheneServices:simpleContentFetcher:urlPreviewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1050701b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126e5d40;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithUserSession_ownerId_conv_112527900,param_4,uVar3,uVar1,1,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                      param_14,param_15);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271b0e0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11271b0e4,param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105070404; end: 10507040b; -[SCGroupUnifiedProfileChatAttachmentSectionDataProvider shouldShowSectionWhenNoChatAttachments] */

undefined8 FUN_105070404(void)

{
  return 1;
}



/* Entry: 10507040c; end: 10507053f; -[SCGroupUnifiedProfileChatAttachmentSectionDataProvider senderSubtitleForSavedInfoAttachmentDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10507040c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11271b0e4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf366c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000108ef3960(param_3,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271b0e0);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar6 = &PTR____CFConstantStringClassReference_110dc3f38;
  if ((int)uVar5 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dc3f58;
  }
  func_0x00010bcbeaa8(ppuVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105070540; end: 10507057b; -[SCGroupUnifiedProfileChatAttachmentSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105070540(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b0e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271b0e4);
  return;
}



/* Entry: 10507057c; end: 1050706ab; -[SCChatInfoAttachmentIconImageDownloader initWithSimpleContentFetcher:urlPreviewProvider:performer:] */

undefined1 *
FUN_10507057c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5d48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050706ac; end: 10507077b; -[SCChatInfoAttachmentIconImageDownloader initWithSimpleContentFetcher:urlPreviewProvider:] */

undefined8
FUN_1050706ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "com.snapchat.queue.unifiedprofile.savedattachment");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,0x17);
  func_0x00010c046920(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 10507077c; end: 105070963; -[SCChatInfoAttachmentIconImageDownloader loadItem:completion:failure:callbackQueue:] */

undefined8
FUN_10507077c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b4478;
  _objc_opt_class(PTR_PTR_1126b4478);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    FUN_105075d38();
    if (uVar3 == 3) {
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010c0f88c0(uVar4);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else if (uVar3 == 2) {
      func_0x00010bde2860(param_1);
    }
    else if (uVar3 == 1) {
      func_0x00010bde2fa0(param_1);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 105070964; end: 10507099b;  */

void FUN_105070964(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4d780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10507099c; end: 1050709a3; -[SCChatInfoAttachmentIconImageDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:] */

undefined8 FUN_10507099c(void)

{
  return 0;
}



/* Entry: 1050709a4; end: 105070a33; -[SCChatInfoAttachmentIconImageDownloader titleForUrlDataModel:] */

void FUN_1050709a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_105070a34(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be23a60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010c28f820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105070a34; end: 105070b57;  */

void FUN_105070a34(long param_1)

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
  
  _objc_retain();
  lVar1 = param_1;
  FUN_105075f18();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105071228;
    uStack_40 = 0x105071238;
    uStack_38 = 0;
    lVar2 = lVar1;
    func_0x00010bf4df40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0becc0();
    _objc_release(lVar2);
    uVar3 = puStack_58[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105070b58; end: 105070bef; -[SCChatInfoAttachmentIconImageDownloader failedToLoadUrlDataModel:] */

bool FUN_105070b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  FUN_105070a34(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be23a60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c28f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ed220();
    bVar1 = lVar3 != 2;
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105070bf0; end: 105070ceb; -[SCChatInfoAttachmentIconImageDownloader _completePhoneIconImageFetchingWithItem:completion:callbackQueue:] */

void FUN_105070bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_5);
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105070cec;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  puStack_40 = puVar1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010007380c(param_5,&puStack_68);
  _objc_release(param_5);
  _objc_release(puStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105070cec; end: 105070d03;  */

void FUN_105070cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105070d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),1);
  return;
}



/* Entry: 105070d04; end: 105070dff; -[SCChatInfoAttachmentIconImageDownloader _completeAddressIconImageFetchingWithItem:completion:callbackQueue:] */

void FUN_105070d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_5);
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105070e00;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  puStack_40 = puVar1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010007380c(param_5,&puStack_68);
  _objc_release(param_5);
  _objc_release(puStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105070e00; end: 105070e17;  */

void FUN_105070e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105070e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),1);
  return;
}



/* Entry: 105070e18; end: 10507111b; -[SCChatInfoAttachmentIconImageDownloader _loadIconImageWithDataModel:completion:failure:callbackQueue:] */

void FUN_105070e18(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  FUN_105070a34();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b4568;
    _objc_alloc(PTR_PTR_1126b4568);
    func_0x00010c000420();
    uVar4 = param_1;
    func_0x00010be23a60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar5 = param_1;
      func_0x00010be33ae0();
      func_0x00010bdc69a0(param_1);
      if ((uVar5 & 1) == 0) {
        _objc_initWeak(auStack_78,param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0x19;
        func_0x0001000819a8(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010bfa9620();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_10507111c;
        puStack_90 = &UNK_1108648d8;
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(lVar1);
        uVar9 = uVar8;
        lStack_88 = lVar1;
        func_0x00010bfb2660(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_b0,auStack_78);
        uVar10 = uVar9;
        func_0x00010c25ff60(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_b0);
        _objc_release(lStack_88);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
      }
    }
    else {
      func_0x00010bdcbae0(param_1);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf368a0();
      _objc_release(param_1);
    }
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10507111c; end: 105071227;  */

void FUN_10507111c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105071228;
  uStack_40 = 0x105071238;
  uStack_38 = 0;
  func_0x00010c0c0800(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be14f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105071228; end: 10507123f;  */

void FUN_105071228(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105071240; end: 1050712bf;  */

void FUN_105071240(long param_1,undefined8 param_2)

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



/* Entry: 1050712c0; end: 10507149b; -[SCChatInfoAttachmentIconImageDownloader _fetchThumbnailImageIfNeccesary:urlString:] */

void FUN_1050712c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_3;
  if (lVar2 == 0) {
    func_0x00010bfa0ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26e500();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b4570;
    _objc_alloc(PTR_PTR_1126b4570);
    func_0x00010c05a500();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar5 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10507149c; end: 105071597;  */

void FUN_10507149c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010be11a80(lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105071598; end: 10507160b;  */

void FUN_105071598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c05a500();
  _objc_release(param_2);
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10507160c; end: 1050717af; -[SCChatInfoAttachmentIconImageDownloader _fetchImage:completion:] */

void FUN_10507160c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105071718;
  puStack_40 = &UNK_110860410;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e600(uVar3,param_2,puVar2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}


