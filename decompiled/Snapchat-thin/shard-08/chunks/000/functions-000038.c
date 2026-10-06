/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c53968; end: 105c539bb; -[SCAdLifestyleTopicsServiceImpl .cxx_destruct] */

void FUN_105c53968(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c539bc; end: 105c53b3b; -[SCAdSettingsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c539bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105c53b3c;
  puStack_68 = &UNK_110881fa0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112732cc4);
  puVar3 = PTR_PTR_1126c3660;
  _objc_alloc(PTR_PTR_1126c3660);
  func_0x00010bff2020();
  func_0x00010bf9d660(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105c53b3c; end: 105c53bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c53b3c(long param_1)

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
    lVar3 = param_1 + _DAT_112732ccc;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c293740(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105c53bc8; end: 105c53d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c53bc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c3658;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2 + _DAT_112732cd4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c273160(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar4 + _DAT_112732cd0;
    _objc_loadWeakRetained(lVar9);
  }
  lVar5 = lVar9;
  func_0x00010c291140(lVar9);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112732cd8;
    _objc_loadWeakRetained(lVar10);
  }
  lVar6 = lVar10;
  func_0x00010bef2520(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f420(puVar1,param_2,uVar8,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c53d48; end: 105c53d83; -[SCAdSettingsServicesEntryPoint end] */

void FUN_105c53d48(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec860;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c53d84; end: 105c53def; -[SCAdSettingsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c53d84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732cc4,0);
  _objc_destroyWeak(param_1 + _DAT_112732cd8);
  _objc_destroyWeak(param_1 + _DAT_112732cd4);
  _objc_destroyWeak(param_1 + _DAT_112732cd0);
  _objc_destroyWeak(param_1 + _DAT_112732ccc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732cc8);
  return;
}



/* Entry: 105c53df0; end: 105c53e57; +[AdTopicsPreference descriptor] */

void FUN_105c53df0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a93750,
                        &PTR____CFConstantStringClassReference_110e23d58,&PTR_DAT_11311fb20,
                        &PTR_DAT_11311fbb8,3,4,0x1c);
    puRam00000001136c1d58 = puVar1;
  }
  return;
}



/* Entry: 105c53e58; end: 105c53ebf; +[GetAdTopicsPreferenceRequest descriptor] */

void FUN_105c53e58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a937a0,
                        &PTR____CFConstantStringClassReference_110e23d78,&PTR_DAT_11311fb20,
                        &PTR_DAT_11311fb38,1,0x10,0x1c);
    puRam00000001136c1d60 = puVar1;
  }
  return;
}



/* Entry: 105c53ec0; end: 105c53f27; +[UpdateAdTopicsPreferenceRequest descriptor] */

void FUN_105c53ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a937f0,
                        &PTR____CFConstantStringClassReference_110e23d98,&PTR_DAT_11311fb20,
                        &PTR_DAT_11311fb78,2,0x18,0x1c);
    puRam00000001136c1d68 = puVar1;
  }
  return;
}



/* Entry: 105c53f28; end: 105c53f8f; +[GetAdTopicsPreferenceResponse descriptor] */

void FUN_105c53f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a93840,
                        &PTR____CFConstantStringClassReference_110e23db8,&PTR_DAT_11311fb20,
                        &PTR_DAT_11311fb58,1,0x10,0x1c);
    puRam00000001136c1d70 = puVar1;
  }
  return;
}



/* Entry: 105c53f90; end: 105c54073; +[UpdateAdTopicsPreferenceResponse descriptor] */

void FUN_105c53f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a93890,
                        &PTR____CFConstantStringClassReference_110e23dd8,&PTR_DAT_11311fb20,0,0,4,
                        0x1c);
    puRam00000001136c1d78 = puVar1;
  }
  return;
}



/* Entry: 105c54074; end: 105c5407f;  */

bool FUN_105c54074(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105c54080; end: 105c5410b; +[TargetingProxyRequest descriptor] */

undefined * FUN_105c54080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a93930,
                        &PTR____CFConstantStringClassReference_110e23e18,&PTR_DAT_11311fc30,
                        &PTR_s_request_11311fda8,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136c1d88 = puVar1;
  }
  return puRam00000001136c1d88;
}



/* Entry: 105c5410c; end: 105c54197; +[TargetingProxyResponse descriptor] */

undefined * FUN_105c5410c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a93980,
                        &PTR____CFConstantStringClassReference_110e23e38,&PTR_DAT_11311fc30,
                        &PTR_s_code_11311fc88,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c1d90 = puVar1;
  }
  return puRam00000001136c1d90;
}



/* Entry: 105c54198; end: 105c541ff; +[AdPreferences descriptor] */

void FUN_105c54198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a939d0,
                        &PTR____CFConstantStringClassReference_110e23e58,&PTR_DAT_11311fc30,
                        &PTR_DAT_11311fc48,2,0x18,0x1c);
    puRam00000001136c1d98 = puVar1;
  }
  return;
}



/* Entry: 105c54200; end: 105c5427b; +[AdPreferences_UserInterest descriptor] */

undefined * FUN_105c54200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a93a20,
                        &PTR____CFConstantStringClassReference_110e23e78,&PTR_DAT_11311fc30,
                        &PTR_s_id_p_11311fce8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c1da0 = puVar1;
  }
  return puRam00000001136c1da0;
}



/* Entry: 105c5427c; end: 105c542f7; +[AdPreferences_AdOptOuts descriptor] */

undefined * FUN_105c5427c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a93a70,
                        &PTR____CFConstantStringClassReference_110e23e98,&PTR_DAT_11311fc30,
                        &PTR_DAT_11311fd48,3,4,0x1c);
    func_0x00010c228780();
    puRam00000001136c1da8 = puVar1;
  }
  return puRam00000001136c1da8;
}



/* Entry: 105c542f8; end: 105c54393; -[SCDefaultLogoutInterceptorCoolDownService initWithFeatureSettingsService:maxPrompts:firstCoolDownCount:subsequentCoolDownCount:maxPromptsCoolDownCount:] */

undefined1 *
FUN_105c542f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ec868;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c54394; end: 105c5444b; -[SCDefaultLogoutInterceptorCoolDownService coolDown] */

undefined8 FUN_105c54394(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b49e0(uVar1);
  uVar2 = param_1;
  func_0x00010be3f400(param_1,param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010be17ea0(param_1,param_2,uVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0b49e0(lVar3);
    func_0x00010c1c0bc0(*(undefined8 *)(param_1 + 8),param_2,lVar3 + -1);
    uVar2 = param_1;
    func_0x00010be3f400(param_1,param_2,lVar3 + -1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0b4a00();
    uVar2 = lVar3 + 1;
    func_0x00010c1c0be0(*(undefined8 *)(param_1 + 8),param_2,uVar2);
    func_0x00010be92160(param_1,param_2,uVar2);
    if (*(ulong *)(param_1 + 0x10) <= uVar2) {
      func_0x00010c1c0be0(*(undefined8 *)(param_1 + 8),param_2,0);
    }
  }
  return 0;
}



/* Entry: 105c5444c; end: 105c544b3; -[SCDefaultLogoutInterceptorCoolDownService _reset:] */

void FUN_105c5444c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c077020();
  if (iVar1 != 0) {
    if (param_3 == *(long *)(param_1 + 0x10)) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      if (param_3 == 1) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1c0bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_setLogoutVerificationCoolDownCou_11264dd18,uVar3);
    return;
  }
  return;
}



/* Entry: 105c544b4; end: 105c544df; -[SCDefaultLogoutInterceptorCoolDownService _isCoolingDown:] */

undefined4 FUN_105c544b4(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c077020(uVar2);
  uVar1 = 0;
  if (-1 < param_3) {
    uVar1 = (undefined4)uVar2;
  }
  return uVar1;
}



/* Entry: 105c544e0; end: 105c544eb; -[SCDefaultLogoutInterceptorCoolDownService _fixNegativeCountIfNeeded:] */

void FUN_105c544e0(long param_1,undefined8 param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c0bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLogoutVerificationCoolDownCou_11264dd18,
             param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU));
  return;
}



/* Entry: 105c544ec; end: 105c544f7; -[SCDefaultLogoutInterceptorCoolDownService .cxx_destruct] */

void FUN_105c544ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c544f8; end: 105c545f7; -[SCLogoutInterceptorServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c544f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3668;
  _objc_alloc(PTR_PTR_1126c3668);
  func_0x00010c027b40();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112732cf0));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c545f8; end: 105c54637;  */

void FUN_105c545f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5ada0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c54638; end: 105c546db; -[SCLogoutInterceptorServicesEntryPoint _createCoolDownService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c54638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c3670;
  _objc_alloc(PTR_PTR_1126c3670);
  param_1 = param_1 + _DAT_112732cf4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011e80(puVar1,param_2,lVar3,1,7,10,0x78);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c546dc; end: 105c547ff; -[SCLogoutInterceptorServicesEntryPoint _logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c546dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126af498;
  _objc_alloc(PTR_PTR_1126af498);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112732d08;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c293fc0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112732d24;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bfcdfa0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112732d0c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bf70800(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f280(puVar1,param_2,lVar2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c54800; end: 105c54f8b; -[SCLogoutInterceptorServicesEntryPoint _logoutInterceptorsCheck] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c54800(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3678;
  _objc_alloc();
  lVar20 = (long)_DAT_112732cf8;
  lVar3 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar23 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c2923e0(lVar23);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112732cfc;
  lVar4 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar4);
  lVar25 = lVar4;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar26;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112732d00;
  lVar6 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c08d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112732d04;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c1e0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar4);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar3);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010befa120();
  lVar5 = param_1;
  func_0x00010bdec820();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c3680;
  _objc_alloc();
  lVar23 = (long)_DAT_112732d08;
  lVar3 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112732d0c;
  lVar4 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar4);
  lVar25 = lVar4;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar26;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027400();
  _objc_release(lVar7);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar12 = PTR_PTR_1126c3688;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112732d14;
  _objc_loadWeakRetained(lVar3);
  lVar25 = (long)_DAT_112732cf4;
  lVar4 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar4);
  lVar7 = lVar4;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar6);
  lVar13 = lVar6;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112732d18;
  lVar8 = param_1 + lVar26;
  _objc_loadWeakRetained(lVar8);
  lVar14 = lVar8;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c460();
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar15 = PTR_PTR_1126c3680;
  _objc_alloc();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar7 = lVar23;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar6 = lVar24;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027400();
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar24);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar23);
  puVar16 = PTR_PTR_1126c3690;
  _objc_alloc();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar8 = lVar25;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar4 = lVar21;
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar3 = lVar26;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f480();
  _objc_release(lVar3);
  _objc_release(lVar26);
  _objc_release(lVar4);
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar25);
  func_0x00010befa120(puVar10);
  func_0x00010befa120(puVar10);
  puVar17 = PTR_PTR_1126c3698;
  _objc_alloc();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar6 = lVar20;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c08d7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b740(puVar17);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar20);
  func_0x00010befa120(puVar10);
  puVar18 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  puVar19 = PTR_PTR_1126c36a0;
  _objc_alloc(PTR_PTR_1126c36a0);
  func_0x00010c027b20();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar5);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 105c54f8c; end: 105c54fcb;  */

void FUN_105c54f8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c54fcc; end: 105c5509f; -[SCLogoutInterceptorServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c54fcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732d1c,0);
  _objc_destroyWeak(param_1 + _DAT_112732d14);
  _objc_storeStrong(param_1 + _DAT_112732d10,0);
  _objc_storeStrong(param_1 + _DAT_112732cf0,0);
  _objc_destroyWeak(param_1 + _DAT_112732d0c);
  _objc_destroyWeak(param_1 + _DAT_112732d18);
  _objc_destroyWeak(param_1 + _DAT_112732cfc);
  _objc_destroyWeak(param_1 + _DAT_112732cf4);
  _objc_destroyWeak(param_1 + _DAT_112732d00);
  _objc_destroyWeak(param_1 + _DAT_112732d24);
  _objc_destroyWeak(param_1 + _DAT_112732d08);
  _objc_destroyWeak(param_1 + _DAT_112732cf8);
  _objc_destroyWeak(param_1 + _DAT_112732d04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732d20);
  return;
}



/* Entry: 105c550a0; end: 105c55197; -[SCLogoutConfirmationLogoutInterceptor initWithUserId:oneTapLoginRegistryLogger:oneTapLoginRegistry:] */

undefined1 *
FUN_105c550a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ec870;
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
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c06fd40();
    *(char *)((long)puVar1 + 0x20) = (char)uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c55198; end: 105c5545f; -[SCLogoutConfirmationLogoutInterceptor interceptLogoutWithCompletionBlock:uiContainer:navigationUIContainer:] */

void FUN_105c55198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_3;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105c55460;
    puStack_a0 = &UNK_110857fd0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    lStack_98 = param_1;
    uStack_88 = param_3;
    _objc_retain(param_4);
    uStack_90 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_b8);
    _objc_release(uStack_90);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
  }
  else {
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x105c5581c;
    puStack_d0 = &UNK_110848708;
    _objc_retain(param_3);
    uStack_c8 = param_3;
    _objc_copyWeak(auStack_c0,auStack_78);
    ppuVar2 = &puStack_e8;
    _objc_retainBlock();
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x105c5588c;
    puStack_100 = &UNK_110848708;
    _objc_retain(param_3);
    uStack_f8 = param_3;
    _objc_copyWeak(auStack_f0,auStack_78);
    ppuVar3 = &puStack_118;
    _objc_retainBlock();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x105c558fc;
    puStack_140 = &UNK_1108451b8;
    _objc_retain(ppuVar2);
    ppuStack_128 = ppuVar2;
    _objc_retain(ppuVar3);
    lStack_138 = param_1;
    ppuStack_120 = ppuVar3;
    _objc_retain(param_4);
    uStack_130 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_158);
    _objc_release(uStack_130);
    _objc_release(ppuStack_120);
    _objc_release(ppuStack_128);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_f0);
    _objc_release(uStack_f8);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_c8);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d80();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c55460; end: 105c556f3;  */

void FUN_105c55460(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126aed70;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  FUN_105c584f4();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c556f4;
  puStack_90 = &UNK_110853c30;
  _objc_copyWeak(auStack_80,param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  uStack_88 = uVar10;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105c5850c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x38;
  _objc_copyWeak(auStack_b0,lVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000105c58524();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4);
  puVar5 = puVar4;
  func_0x00010c29bf00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211780();
  _objc_release(puVar5);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_release(uStack_88);
  puVar7 = auStack_80;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(lVar9);
  puVar8 = puVar7 + 0x28;
  _objc_loadWeakRetained(puVar8);
  func_0x00010be274c0();
  _objc_release(puVar8);
  func_0x00010bf84b00(lVar9);
  _objc_release(lVar9);
  lVar9 = *(long *)(puVar7 + 0x20);
  puVar2 = PTR_PTR_1126c36a8;
  func_0x00010c068fa0(PTR_PTR_1126c36a8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(lVar9,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c556f4; end: 105c5596b;  */

void FUN_105c556f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be274c0();
  _objc_release(lVar2);
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c36a8;
  func_0x00010c068fa0(PTR_PTR_1126c36a8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c5596c; end: 105c559a3; -[SCLogoutConfirmationLogoutInterceptor _handleConfirmLogout] */

void FUN_105c5596c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c559a4; end: 105c559db; -[SCLogoutConfirmationLogoutInterceptor _handleCancelLogout] */

void FUN_105c559a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c559dc; end: 105c55a13; -[SCLogoutConfirmationLogoutInterceptor _handleDismissLogoutAlert] */

void FUN_105c559dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c55a14; end: 105c55ad3; -[SCLogoutConfirmationLogoutInterceptor dialogDidDismiss:] */

void FUN_105c55a14(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126c36a8;
    func_0x00010c068fa0(PTR_PTR_1126c36a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
    _objc_release(puVar1);
  }
  lVar4 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c268120();
  _objc_release(lVar4);
  if (lVar2 == 1) {
    func_0x00010be26e00(param_1);
  }
  else if (lVar2 == 0) {
    func_0x00010be28860(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c55ad4; end: 105c55b1b; -[SCLogoutConfirmationLogoutInterceptor .cxx_destruct] */

void FUN_105c55ad4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c55b1c; end: 105c55cff; -[SCOneTapLoginLogoutInterceptor initWithUserId:username:oneTapLoginRegistryLogger:oneTapLoginRegistry:circumstanceEngine:] */

undefined8 *
FUN_105c55b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ec878;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar3 = puVar1[5];
    func_0x00010c0b84a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf04a80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126c36b0;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    uVar2 = puVar1[6];
    puVar1[6] = puVar6;
    _objc_release(uVar2);
    _objc_release(0);
    _objc_release(uVar5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c55d00; end: 105c55fbf; -[SCOneTapLoginLogoutInterceptor interceptLogoutWithCompletionBlock:uiContainer:navigationUIContainer:] */

void FUN_105c55d00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined1 auStack_f8 [8];
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06fd40();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar5 = param_3;
    _objc_retainBlock();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar5;
    _objc_release(uVar8);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105c55fc0;
    puStack_a0 = &UNK_110848378;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_4);
    ppuVar6 = &puStack_b8;
    uStack_98 = param_4;
    _objc_retainBlock();
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x105c55ff4;
    puStack_d0 = &UNK_110848708;
    _objc_copyWeak(auStack_c0,auStack_80);
    _objc_retain(param_3);
    ppuVar7 = &puStack_e8;
    lStack_c8 = param_3;
    _objc_retainBlock();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c2571e0();
    puStack_130 = puVar4;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105c5605c;
    puStack_118 = &UNK_1108e0388;
    _objc_retain(ppuVar6);
    ppuStack_108 = ppuVar6;
    _objc_retain(ppuVar7);
    ppuStack_100 = ppuVar7;
    _objc_copyWeak(auStack_f8,auStack_80);
    uStack_f0 = iVar1 == 3;
    _objc_retain(param_4);
    uStack_110 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_130);
    _objc_release(uStack_110);
    _objc_destroyWeak(auStack_f8);
    _objc_release(ppuStack_100);
    _objc_release(ppuStack_108);
    _objc_release(ppuVar7);
    _objc_release(lStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(ppuVar6);
    _objc_release(uStack_98);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    puVar4 = PTR_PTR_1126c36a8;
    func_0x00010c0db8c0(PTR_PTR_1126c36a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar4);
    _objc_release(puVar4);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c55fc0; end: 105c5605b;  */

void FUN_105c55fc0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6cc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c5605c; end: 105c560eb;  */

void FUN_105c5605c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  FUN_105c59610(uVar2,uVar3,lVar1,*(undefined1 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = uVar2;
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211780();
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c560ec; end: 105c5638f; -[SCOneTapLoginLogoutInterceptor _oneTapLoginOptInAlertConfirmed:uiContainer:] */

void FUN_105c560ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
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
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ebd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab7e0();
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126c36a8;
    func_0x00010c068fa0(PTR_PTR_1126c36a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar6);
    _objc_release(puVar6);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105c56390;
    puStack_90 = &UNK_110848708;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    ppuVar3 = &puStack_a8;
    lStack_88 = param_3;
    _objc_retainBlock();
    puStack_d8 = puVar6;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x105c563f8;
    puStack_c0 = &UNK_110848708;
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(param_3);
    ppuVar4 = &puStack_d8;
    lStack_b8 = param_3;
    _objc_retainBlock();
    puStack_120 = puVar6;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_105c56460;
    puStack_108 = &UNK_110861a58;
    _objc_retain(lVar2);
    lStack_100 = lVar2;
    _objc_retain(ppuVar3);
    ppuStack_f0 = ppuVar3;
    _objc_retain(ppuVar4);
    ppuStack_e8 = ppuVar4;
    _objc_copyWeak(auStack_e0,auStack_78);
    _objc_retain(param_4);
    uStack_f8 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_120);
    _objc_release(uStack_f8);
    _objc_destroyWeak(auStack_e0);
    _objc_release(ppuStack_e8);
    _objc_release(ppuStack_f0);
    _objc_release(lStack_100);
    _objc_release(ppuVar4);
    _objc_release(lStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(ppuVar3);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c56390; end: 105c5645f;  */

void FUN_105c56390(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be6cc00();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c36a8;
  func_0x00010c068fa0(PTR_PTR_1126c36a8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c56460; end: 105c564fb;  */

void FUN_105c56460(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  FUN_105c59bd4(uVar4,uVar3,uVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar3 = uVar4;
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211780();
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105c564fc; end: 105c5655b; -[SCOneTapLoginLogoutInterceptor _oneTapLoginOptInAlertDeclined] */

void FUN_105c564fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ebf40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c5655c; end: 105c565eb; -[SCOneTapLoginLogoutInterceptor _oneTapLoginMaxAccountAlertConfirmed] */

void FUN_105c5655c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab7e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab7e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ebd80();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c565ec; end: 105c56623; -[SCOneTapLoginLogoutInterceptor _oneTapLoginMaxAccountAlertDeclined] */

void FUN_105c565ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c56624; end: 105c56707; -[SCOneTapLoginLogoutInterceptor dialogDidDismiss:] */

void FUN_105c56624(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126c36a8;
    func_0x00010c068fa0(PTR_PTR_1126c36a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar2);
  }
  lVar4 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c268120();
  _objc_release(lVar4);
  if (lVar3 == 0) {
    func_0x00010be6cc60(param_1);
  }
  else {
    lVar4 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c268120();
    _objc_release(lVar4);
    if (lVar3 == 1) {
      func_0x00010be6cc20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c56708; end: 105c56773; -[SCOneTapLoginLogoutInterceptor .cxx_destruct] */

void FUN_105c56708(long param_1)

{
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



/* Entry: 105c56774; end: 105c56817; -[SCRecursiveLogoutInterceptorsCheck initWithLogoutInterceptors:performer:] */

undefined1 *
FUN_105c56774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec880;
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



/* Entry: 105c56818; end: 105c56953; -[SCRecursiveLogoutInterceptorsCheck checkLogoutInterceptorsWithCompletionBlock:uiContainer:navigationUIContainer:] */

void FUN_105c56818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105c568fc;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c56954; end: 105c56b57; -[SCRecursiveLogoutInterceptorsCheck _interceptWithCompletion:uiContainer:navigationUIContainer:mutableCopyOfInterceptors:] */

void FUN_105c56954(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_6;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
    goto LAB_105c56b00;
  }
  lVar2 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3c0(param_6);
  puVar1 = PTR_DAT_1126a50d0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010010fab4(lVar2,puVar1);
    _objc_release(lVar2);
    if (((int)lVar3 == 0) || (lVar2 == 0)) goto LAB_105c56a28;
    func_0x00010be3d360(param_1);
  }
  else {
LAB_105c56a28:
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c068ea0(lVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar2);
LAB_105c56b00:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c56b58; end: 105c56baf;  */

void FUN_105c56b58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3d380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c56bb0; end: 105c56ce7; -[SCRecursiveLogoutInterceptorsCheck _interceptionCompletedWithCompletion:uiContainer:navigationUIContainer:mutableCopyOfInterceptors:result:] */

void FUN_105c56bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105c56ce8;
  puStack_88 = &UNK_110866740;
  uStack_80 = param_7;
  lStack_78 = param_1;
  uStack_70 = param_6;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_7);
  return;
}



/* Entry: 105c56ce8; end: 105c56ddf;  */

void FUN_105c56ce8(long param_1,undefined8 param_2)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_78 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105c56de0;
  puStack_58 = &UNK_11084aa78;
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105c56dfc;
  puStack_80 = &UNK_110847180;
  puStack_48 = puStack_78;
  puStack_38 = puStack_78;
  func_0x00010c0be700(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_70,&puStack_98);
  if ((*(byte *)(puStack_38 + 3) & 1) == 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
  }
  else {
    func_0x00010be3d360(*(undefined8 *)(param_1 + 0x28));
  }
  __Block_object_dispose(&uStack_40,8);
  return;
}



/* Entry: 105c56de0; end: 105c56e0b;  */

void FUN_105c56de0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105c56e0c; end: 105c56e3b; -[SCRecursiveLogoutInterceptorsCheck .cxx_destruct] */

void FUN_105c56e0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c56e3c; end: 105c56fb7; -[SCEmailVerificationLogoutInterceptor initWithEmailSettingsScopeExposer:featureSettingsService:logger:emailInfoProvider:preferences:coolDownService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c56e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar4 = param_1;
  func_0x00010bdc9a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be0d280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be8d240();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126ec888;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFeatureSettingsService_l_11252ce00,param_4,param_5,uVar4,
                      param_7,param_8,uVar1,uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112732d64);
  *(undefined8 *)((long)puVar3 + (long)_DAT_112732d64) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112732d68);
  *(undefined8 *)((long)puVar3 + (long)_DAT_112732d68) = param_3;
  _objc_release(uVar4);
  _objc_release(param_6);
  return puVar3;
}



/* Entry: 105c56fb8; end: 105c570d7; -[SCEmailVerificationLogoutInterceptor interceptLogoutWithCompletionBlock:uiContainer:navigationUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c56fb8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732d64);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071720();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puStack_58 = PTR_PTR_1126ec888;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_interceptLogoutWithCompletionBlo_1125f7db8,param_3,param_4,
                        param_5);
  }
  else {
    puVar4 = PTR_PTR_1126c36a8;
    func_0x00010c0db8c0(PTR_PTR_1126c36a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c570d8; end: 105c5715f; -[SCEmailVerificationLogoutInterceptor _alert] */

void FUN_105c570d8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c57160;
  puStack_38 = &UNK_1108e03e8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c57160; end: 105c571df;  */

void FUN_105c57160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  FUN_105c592c4(param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c571e0; end: 105c572af; -[SCEmailVerificationLogoutInterceptor _exposeScopeHandler] */

void FUN_105c571e0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105c57268;
  puStack_38 = &UNK_1108dfce8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c572b0; end: 105c5731f; -[SCEmailVerificationLogoutInterceptor _exposeEmailSettingsScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c572b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae610;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0582c0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112732d68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c57320; end: 105c573d3; -[SCEmailVerificationLogoutInterceptor _removeScopeHandler] */

void FUN_105c57320(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105c573a8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c573d4; end: 105c573fb; -[SCEmailVerificationLogoutInterceptor _removeEmailSettingsScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c573d4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112732d68));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105c573fc; end: 105c5743b; -[SCEmailVerificationLogoutInterceptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c573fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732d68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732d64,0);
  return;
}



/* Entry: 105c5743c; end: 105c575ef; -[SCPhoneVerificationLogoutInterceptor initWithMobileSettingsScopeExposer:mobileSettingsScopeServices:featureSettingsService:logger:phoneNumberProvider:preferences:coolDownService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c5743c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar4 = param_1;
  func_0x00010bdc9a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be0d280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be8d240();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126ec890;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFeatureSettingsService_l_11252ce00,param_5,param_6,uVar4,
                      param_8,param_9,uVar1,uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112732d6c);
  *(undefined8 *)((long)puVar3 + (long)_DAT_112732d6c) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112732d70);
  *(undefined8 *)((long)puVar3 + (long)_DAT_112732d70) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112732d74);
  *(undefined8 *)((long)puVar3 + (long)_DAT_112732d74) = param_4;
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_7);
  return puVar3;
}



/* Entry: 105c575f0; end: 105c5771b; -[SCPhoneVerificationLogoutInterceptor interceptLogoutWithCompletionBlock:uiContainer:navigationUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c575f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + _DAT_112732d6c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puStack_58 = PTR_PTR_1126ec890;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_interceptLogoutWithCompletionBlo_1125f7db8,param_3,param_4,
                        param_5);
  }
  else {
    puVar4 = PTR_PTR_1126c36a8;
    func_0x00010c0db8c0(PTR_PTR_1126c36a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c5771c; end: 105c577a3; -[SCPhoneVerificationLogoutInterceptor _alert] */

void FUN_105c5771c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c577a4;
  puStack_38 = &UNK_1108e03e8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c577a4; end: 105c57823;  */

void FUN_105c577a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  FUN_105c58ff0(param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c57824; end: 105c578f3; -[SCPhoneVerificationLogoutInterceptor _exposeScopeHandler] */

void FUN_105c57824(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105c578ac;
  puStack_38 = &UNK_1108dfce8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c578f4; end: 105c5794f; -[SCPhoneVerificationLogoutInterceptor _exposeMobileSettingsScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c578f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732d74);
  func_0x00010bf24220(uVar1,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112732d70),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c57950; end: 105c57a03; -[SCPhoneVerificationLogoutInterceptor _removeScopeHandler] */

void FUN_105c57950(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105c579d8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c57a04; end: 105c57a2b; -[SCPhoneVerificationLogoutInterceptor _removeMobileSettingsScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c57a04(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112732d70));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105c57a2c; end: 105c57a7b; -[SCPhoneVerificationLogoutInterceptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c57a2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732d74,0);
  _objc_storeStrong(param_1 + _DAT_112732d70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732d6c,0);
  return;
}



/* Entry: 105c57a7c; end: 105c57ac7; -[SCPreferences setVerificationSessionID:] */

void FUN_105c57a7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1d0640(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e23f38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c57ac8; end: 105c57b77; -[SCPreferences verificationSessionID] */

void FUN_105c57ac8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e23f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c220c80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c57b78; end: 105c57d2b; -[SCVerificationLogoutInterceptor initWithFeatureSettingsService:logger:alert:preferences:coolDownService:exposeScopeHandler:removeScopeHandler:] */

undefined1 *
FUN_105c57b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ec898;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2983e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c57d2c; end: 105c57e2b; -[SCVerificationLogoutInterceptor interceptLogoutWithCompletionBlock:uiContainer:navigationUIContainer:] */

void FUN_105c57d2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_5;
  _objc_release(uVar2);
  uVar3 = uRam00000001136c1db0;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar3 = uRam00000001136c1db0;
    uRam00000001136c1db0 = uVar5;
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010bf51a00();
    if (iVar1 == 0) {
      func_0x00010be5a700(param_1);
      func_0x00010be83360(param_1);
      goto LAB_105c57e04;
    }
  }
  puVar4 = PTR_PTR_1126c36a8;
  func_0x00010c0db8c0(PTR_PTR_1126c36a8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar4);
  _objc_release(puVar4);
LAB_105c57e04:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c57e2c; end: 105c57ea3; -[SCVerificationLogoutInterceptor _showAlertInContainer:confirmCallback:declineCallback:] */

void FUN_105c57e2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_3);
  (*pcVar2)(lVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c57ea4; end: 105c57f0b; -[SCVerificationLogoutInterceptor _verificationAlertDeclinedWithCompletionBlock:] */

void FUN_105c57ea4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0b2f20(uVar2);
  puVar1 = PTR_PTR_1126c36a8;
  func_0x00010c068fa0(PTR_PTR_1126c36a8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c57f0c; end: 105c57fcf; -[SCVerificationLogoutInterceptor _verificationAlertConfirmedWithCompletionBlock:] */

void FUN_105c57f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  func_0x00010c0b2f40(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c57fd0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c57fd0; end: 105c57ffb;  */

void FUN_105c57fd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c57ffc; end: 105c58017; -[SCVerificationLogoutInterceptor _exposeVerificationScopeHelper] */

void FUN_105c57ffc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c58010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



/* Entry: 105c58018; end: 105c5821b; -[SCVerificationLogoutInterceptor _promptWithCompletionBlock:uiContainer:] */

void FUN_105c58018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar5);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105c5821c;
  puStack_80 = &UNK_110848708;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  ppuVar3 = &puStack_98;
  uStack_78 = param_3;
  _objc_retainBlock();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105c58250;
  puStack_b0 = &UNK_110848708;
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_3);
  ppuVar4 = &puStack_c8;
  uStack_a8 = param_3;
  _objc_retainBlock();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x105c58284;
  puStack_f0 = &UNK_110861918;
  _objc_copyWeak(auStack_d0,auStack_68);
  _objc_retain(param_4);
  uStack_e8 = param_4;
  _objc_retain(ppuVar3);
  ppuStack_e0 = ppuVar3;
  _objc_retain(ppuVar4);
  ppuStack_d8 = ppuVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_108);
  _objc_release(ppuStack_d8);
  _objc_release(ppuStack_e0);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(ppuVar4);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c5821c; end: 105c582bb;  */

void FUN_105c5821c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee82c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c582bc; end: 105c582ef; -[SCVerificationLogoutInterceptor _logVerificationAtLogoutPageView] */

void FUN_105c582bc(long param_1)

{
  func_0x00010c0b4a00(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1ab220(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c0b2f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logVerificationAtLogoutPageView_11260a5e8);
  return;
}



/* Entry: 105c582f0; end: 105c58377; -[SCVerificationLogoutInterceptor emailSettingsDidComplete] */

void FUN_105c582f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c36a8;
    func_0x00010c068fa0(PTR_PTR_1126c36a8,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c58364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c58378; end: 105c583ff; -[SCVerificationLogoutInterceptor mobileSettingsDidComplete] */

void FUN_105c58378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c36a8;
    func_0x00010c068fa0(PTR_PTR_1126c36a8,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c583ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c58400; end: 105c5846f; -[SCVerificationLogoutInterceptor dialogDidDismiss:] */

void FUN_105c58400(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c36a8;
    func_0x00010c068fa0(PTR_PTR_1126c36a8,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logVerificationAtLogoutPageSkip_11260a5d8);
  return;
}



/* Entry: 105c58470; end: 105c584f3; -[SCVerificationLogoutInterceptor .cxx_destruct] */

void FUN_105c58470(long param_1)

{
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



/* Entry: 105c584f4; end: 105c5853b;  */

void FUN_105c584f4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf018;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daf018,
                      &PTR____CFConstantStringClassReference_110e23f58,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105c5853c; end: 105c58593; +[SCLogoutInterceptionResult interceptedWithShallContinueToLogout:] */

void FUN_105c5853c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c36a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c58594; end: 105c585ef; +[SCLogoutInterceptionResult notInterceptedWithShallContinueToLogout:] */

void FUN_105c58594(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c36a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x11] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c585f0; end: 105c58613; -[SCLogoutInterceptionResult copyWithZone:] */

undefined8 FUN_105c585f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c58614; end: 105c58677; -[SCLogoutInterceptionResult hash] */

void FUN_105c58614(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x11);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126ec8a0;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c58678; end: 105c586bb; -[SCLogoutInterceptionResult internalInit] */

void FUN_105c58678(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ec8a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c586bc; end: 105c58763; -[SCLogoutInterceptionResult isEqual:] */

bool FUN_105c586bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}


