/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b7f950; end: 106b7f9c7; -[SCPasswordStrengthResponse hash] */

undefined8 * FUN_106b7f950(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106b7fa58:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b7fa64;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106b7fa64;
        }
        goto LAB_106b7fa58;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106b7fa64:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106b7f9c8; end: 106b7fa7f; -[SCPasswordStrengthResponse isEqual:] */

long FUN_106b7f9c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b7fa58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7fa64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106b7fa64;
        }
        goto LAB_106b7fa58;
      }
    }
    lVar3 = 0;
  }
LAB_106b7fa64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7fa80; end: 106b7fa87; -[SCPasswordStrengthResponse strength] */

undefined8 FUN_106b7fa80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b7fa88; end: 106b7fa8f; -[SCPasswordStrengthResponse savable] */

undefined1 FUN_106b7fa88(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b7fa90; end: 106b7fa97; -[SCPasswordStrengthResponse message] */

undefined8 FUN_106b7fa90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b7fa98; end: 106b7fac7; -[SCPasswordStrengthResponse .cxx_destruct] */

void FUN_106b7fa98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b7fac8; end: 106b7fad3; +[SCCAccountRecoveryChallengePickerPage componentPath] */

undefined ** FUN_106b7fac8(void)

{
  return &PTR____CFConstantStringClassReference_110e76238;
}



/* Entry: 106b7fad4; end: 106b7fb07; -[SCCAccountRecoveryChallengePickerPage initWithViewModel:componentContext:runtime:] */

void FUN_106b7fad4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5388;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106b7fb08; end: 106b7fb57; -[SCCAccountRecoveryChallengePickerPage setViewModel:] */

void FUN_106b7fb08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b7fb58; end: 106b7fb9b; -[SCCAccountRecoveryChallengePickerPage viewModel] */

void FUN_106b7fb58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b7fb9c; end: 106b7fba3; -[SCCAccountRecoveryChallengePage__Enum init] */

void FUN_106b7fb9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 106b7fba4; end: 106b7fbab; -[SCCAccountRecoveryChallengeType__Enum init] */

void FUN_106b7fba4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 106b7fbac; end: 106b7fbcb; -[SCCAccountRecoverChallengeResponse initWithType:output:] */

void FUN_106b7fbac(void)

{
  FUN_106b7fe08(PTR_PTR_1126f5390);
  return;
}



/* Entry: 106b7fbcc; end: 106b7fbe7; +[SCCAccountRecoverChallengeResponse valdiMarshallableObjectDescriptor] */

void FUN_106b7fbcc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110962f30;
  param_1[1] = &PTR_DAT_110962f78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b7fbe8; end: 106b7fc07; -[SCCAccountRecoveryChallengeOption initWithType:hint:] */

void FUN_106b7fbe8(void)

{
  FUN_106b7fe08(PTR_PTR_1126f5398);
  return;
}



/* Entry: 106b7fc08; end: 106b7fc23; +[SCCAccountRecoveryChallengeOption valdiMarshallableObjectDescriptor] */

void FUN_106b7fc08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110962f88;
  param_1[1] = &PTR_DAT_110962fd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b7fc24; end: 106b7fcc3; -[SCCAccountRecoveryChallengePickerContext initWithNavigator:options:processChallengeResponse:] */

undefined8 *
FUN_106b7fc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126f53a0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106b7fcc4; end: 106b7fce7; +[SCCAccountRecoveryChallengePickerContext valdiMarshallableObjectDescriptor] */

void FUN_106b7fcc4(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110963010;
  param_1[1] = &PTR_s_SCValdiINavigator_1109630a0;
  param_1[2] = &PTR_s_oi_v_110962fe0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b7fce8; end: 106b7fd0b;  */

undefined8 FUN_106b7fce8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 106b7fd0c; end: 106b7fd8b;  */

void FUN_106b7fd0c(undefined8 param_1)

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
  pcStack_38 = FUN_106b7fdd8;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106b7fd8c; end: 106b7fdc3; -[SCCAccountRecoveryChallengeResponseError initWithReadableString:] */

void FUN_106b7fd8c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f53a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106b7fdc4; end: 106b7fdd7; +[SCCAccountRecoveryChallengeResponseError valdiMarshallableObjectDescriptor] */

void FUN_106b7fdc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109630d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b7fdd8; end: 106b7fe07;  */

void FUN_106b7fdd8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106b7fe08; end: 106b7fe33;  */

void FUN_106b7fe08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000000 = param_4;
  uStack0000000000000008 = param_5;
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)
            (&stack0x00000010,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106b7fe34; end: 106b7fecf; -[SCInAppSupportScope initWithUiContainer:delegate:] */

undefined1 *
FUN_106b7fe34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f53b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b7fed0; end: 106b7fed7; -[SCInAppSupportScope uiContainer] */

undefined8 FUN_106b7fed0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b7fed8; end: 106b7feef; -[SCInAppSupportScope delegate] */

void FUN_106b7fed8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7fef0; end: 106b7ff1b; -[SCInAppSupportScope .cxx_destruct] */

void FUN_106b7fef0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b7ff1c; end: 106b7ffb3;  */

void FUN_106b7ff1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110e76258,0x8c,0);
  return;
}



/* Entry: 106b7ffb4; end: 106b80007;  */

void FUN_106b7ffb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e76318,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b80008; end: 106b8000f;  */

undefined8 FUN_106b80008(void)

{
  return 0;
}



/* Entry: 106b80010; end: 106b8008b;  */

undefined * FUN_106b80010(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6b80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e76338,
                        &UNK_10dde7218,&UNK_10dde724c,5,FUN_106b8008c,0);
    do {
      if (puRam00000001136c6b80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6b80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6b80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6b80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6b80;
}



/* Entry: 106b8008c; end: 106b80097;  */

bool FUN_106b8008c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106b80098; end: 106b800ff; +[SCUserChallengePbUserChallengePrompt descriptor] */

void FUN_106b80098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b420,
                        &PTR____CFConstantStringClassReference_110e76358,&PTR_DAT_113174b10,
                        &PTR_DAT_113174b48,2,0x10,0x1c);
    puRam00000001136c6b88 = puVar1;
  }
  return;
}



/* Entry: 106b80100; end: 106b80167; +[SCUserChallengePbUserChallenges descriptor] */

void FUN_106b80100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b470,
                        &PTR____CFConstantStringClassReference_110e76378,&PTR_DAT_113174b10,
                        &PTR_DAT_113174b28,1,0x10,0x1c);
    puRam00000001136c6b90 = puVar1;
  }
  return;
}



/* Entry: 106b80168; end: 106b801cf; +[SCUserChallengePbBirthdate descriptor] */

void FUN_106b80168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6b98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b4c0,
                        &PTR____CFConstantStringClassReference_110e76398,&PTR_DAT_113174b10,
                        &PTR_s_day_113174b88,3,0x10,0x1c);
    puRam00000001136c6b98 = puVar1;
  }
  return;
}



/* Entry: 106b801d0; end: 106b8025b; +[SCUserChallengePbUserChallengeAnswer descriptor] */

undefined * FUN_106b801d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b510,
                        &PTR____CFConstantStringClassReference_110e763b8,&PTR_DAT_113174b10,
                        &PTR_DAT_113174be8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c6ba0 = puVar1;
  }
  return puRam00000001136c6ba0;
}



/* Entry: 106b8025c; end: 106b802d7;  */

undefined * FUN_106b8025c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6ba8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e763d8,
                        &UNK_10dde7260,&UNK_10dde7368,0xc,FUN_106b802d8,0);
    do {
      if (puRam00000001136c6ba8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6ba8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6ba8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6ba8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6ba8;
}



/* Entry: 106b802d8; end: 106b802ef;  */

uint FUN_106b802d8(uint param_1)

{
  return (uint)(param_1 < 0xe) & 0x3cffU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106b802f0; end: 106b8036b;  */

undefined * FUN_106b802f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6bb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e763f8,
                        &UNK_10dde7398,&UNK_10dde7484,0xd,FUN_106b8036c,0);
    do {
      if (puRam00000001136c6bb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6bb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6bb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6bb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6bb0;
}



/* Entry: 106b8036c; end: 106b80383;  */

uint FUN_106b8036c(uint param_1)

{
  return (uint)(param_1 < 0xe) & 0x3dffU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106b80384; end: 106b803eb; +[SCJanusAccountRecoveryRequestCodeRequest descriptor] */

void FUN_106b80384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6bb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b5b0,
                        &PTR____CFConstantStringClassReference_110e76418,
                        &PTR_s_snapchat_janus_api_113174c58,&PTR_s_username_113174ef0,9,0x40,0x1c);
    puRam00000001136c6bb8 = puVar1;
  }
  return;
}



/* Entry: 106b803ec; end: 106b80477; +[SCJanusAccountRecoveryRequestCodeResponse descriptor] */

undefined * FUN_106b803ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6bc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b600,
                        &PTR____CFConstantStringClassReference_110e76438,
                        &PTR_s_snapchat_janus_api_113174c58,&PTR_s_statusCode_113174d50,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6bc0 = puVar1;
  }
  return puRam00000001136c6bc0;
}



/* Entry: 106b80478; end: 106b804af;  */

undefined * FUN_106b80478(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126d0bb8;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b804b0; end: 106b8052b; +[SCJanusAccountRecoveryRequestCodeResponse_SuccessData descriptor] */

undefined * FUN_106b804b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b650,
                        &PTR____CFConstantStringClassReference_110ddab58,
                        &PTR_s_snapchat_janus_api_113174c58,&PTR_DAT_113174c90,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c6bc8 = puVar1;
  }
  return puRam00000001136c6bc8;
}



/* Entry: 106b8052c; end: 106b80593; +[SCJanusAccountRecoveryVerifyCodeRequest descriptor] */

void FUN_106b8052c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6bd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b6a0,
                        &PTR____CFConstantStringClassReference_110e76458,
                        &PTR_s_snapchat_janus_api_113174c58,&PTR_DAT_113174e50,5,0x30,0x1c);
    puRam00000001136c6bd0 = puVar1;
  }
  return;
}



/* Entry: 106b80594; end: 106b8061f; +[SCJanusAccountRecoveryVerifyCodeResponse descriptor] */

undefined * FUN_106b80594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6bd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b6f0,
                        &PTR____CFConstantStringClassReference_110e76478,
                        &PTR_s_snapchat_janus_api_113174c58,&PTR_s_statusCode_113174dd0,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c6bd8 = puVar1;
  }
  return puRam00000001136c6bd8;
}



/* Entry: 106b80620; end: 106b80657;  */

undefined * FUN_106b80620(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126d0bc0;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 106b80658; end: 106b806d3; +[SCJanusAccountRecoveryVerifyCodeResponse_SuccessData descriptor] */

undefined * FUN_106b80658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6be0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b740,
                        &PTR____CFConstantStringClassReference_110ddab58,
                        &PTR_s_snapchat_janus_api_113174c58,&PTR_s_humanReadableMessage_113174cf0,3,
                        0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c6be0 = puVar1;
  }
  return puRam00000001136c6be0;
}



/* Entry: 106b806d4; end: 106b8073b; +[SCJanusAccountRecoveryErrorData descriptor] */

void FUN_106b806d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6be8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b790,
                        &PTR____CFConstantStringClassReference_110e76498,
                        &PTR_s_snapchat_janus_api_113174c58,&PTR_s_humanReadableMessage_113174c70,1,
                        0x10,0x1c);
    puRam00000001136c6be8 = puVar1;
  }
  return;
}



/* Entry: 106b8073c; end: 106b8081f; +[SCTelephonyRequestHeader descriptor] */

void FUN_106b8073c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6bf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b830,
                        &PTR____CFConstantStringClassReference_110e764b8,
                        &PTR_s_snapchat_janus_api_113175010,&PTR_DAT_113175028,7,0x38,0x1c);
    puRam00000001136c6bf0 = puVar1;
  }
  return;
}



/* Entry: 106b80820; end: 106b8082b;  */

bool FUN_106b80820(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106b8082c; end: 106b80893; +[SCJanusRegistrationHeader descriptor] */

void FUN_106b8082c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b8d0,
                        &PTR____CFConstantStringClassReference_110e764f8,
                        &PTR_s_snapchat_janus_api_113175108,&PTR_s_blizzardClientId_113175300,0x13,
                        0x98,0x1c);
    puRam00000001136c6c00 = puVar1;
  }
  return;
}



/* Entry: 106b80894; end: 106b808fb; +[SCJanusAppRegisterContext descriptor] */

void FUN_106b80894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b920,
                        &PTR____CFConstantStringClassReference_110e76518,
                        &PTR_s_snapchat_janus_api_113175108,&PTR_s_blizzardClientId_113175240,6,0x38
                        ,0x1c);
    puRam00000001136c6c08 = puVar1;
  }
  return;
}



/* Entry: 106b808fc; end: 106b80963; +[SCJanusAppRegisterBootstrapParams descriptor] */

void FUN_106b808fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b970,
                        &PTR____CFConstantStringClassReference_110e76538,
                        &PTR_s_snapchat_janus_api_113175108,&PTR_s_cofTags_1131751c0,4,0x28,0x1c);
    puRam00000001136c6c10 = puVar1;
  }
  return;
}



/* Entry: 106b80964; end: 106b809cb; +[SCJanusClientChallengePayload descriptor] */

void FUN_106b80964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1b9c0,
                        &PTR____CFConstantStringClassReference_110e76558,
                        &PTR_s_snapchat_janus_api_113175108,&PTR_DAT_113175180,2,0x10,0x1c);
    puRam00000001136c6c18 = puVar1;
  }
  return;
}



/* Entry: 106b809cc; end: 106b80a47; +[SCJanusClientChallengeRequested descriptor] */

undefined * FUN_106b809cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ba10,
                        &PTR____CFConstantStringClassReference_110e76578,
                        &PTR_s_snapchat_janus_api_113175108,&PTR_s_boltURL_113175120,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c6c20 = puVar1;
  }
  return puRam00000001136c6c20;
}



/* Entry: 106b80a48; end: 106b80aaf; +[SCJanusClientIntegrityChallengeData descriptor] */

void FUN_106b80a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1ba60,
                        &PTR____CFConstantStringClassReference_110e76598,
                        &PTR_s_snapchat_janus_api_113175108,&PTR_DAT_113175140,1,0x10,0x1c);
    puRam00000001136c6c28 = puVar1;
  }
  return;
}



/* Entry: 106b80ab0; end: 106b80b93; +[SCJanusGoogleAuthorizationPayload descriptor] */

void FUN_106b80ab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1bab0,
                        &PTR____CFConstantStringClassReference_110e765b8,
                        &PTR_s_snapchat_janus_api_113175108,&PTR_s_accessToken_113175160,1,0x10,0x1c
                       );
    puRam00000001136c6c30 = puVar1;
  }
  return;
}



/* Entry: 106b80b94; end: 106b80b9f;  */

bool FUN_106b80b94(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 106b80ba0; end: 106b80c1b;  */

undefined * FUN_106b80ba0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6c40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e765f8,
                        &UNK_10dde76ec,&UNK_10dde7764,3,FUN_106b80c1c,0);
    do {
      if (puRam00000001136c6c40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6c40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6c40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6c40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6c40;
}



/* Entry: 106b80c1c; end: 106b80c27;  */

bool FUN_106b80c1c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106b80c28; end: 106b80ca3;  */

undefined * FUN_106b80c28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6c48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e76618,
                        &UNK_10dde7770,&UNK_10dde77bc,3,FUN_106b80ca4,0);
    do {
      if (puRam00000001136c6c48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6c48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6c48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6c48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6c48;
}



/* Entry: 106b80ca4; end: 106b80caf;  */

bool FUN_106b80ca4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106b80cb0; end: 106b80d17; +[VendorAttestation descriptor] */

void FUN_106b80cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1bb50,
                        &PTR____CFConstantStringClassReference_110e76638,&PTR_DAT_113175560,
                        &PTR_DAT_113175578,0xf,0x68,0x1c);
    puRam00000001136c6c50 = puVar1;
  }
  return;
}



/* Entry: 106b80d18; end: 106b80d23; +[SCCCosCreateCOSRegistrationChallengeResumingNetwork modulePath] */

undefined ** FUN_106b80d18(void)

{
  return &PTR____CFConstantStringClassReference_110e76658;
}



/* Entry: 106b80d24; end: 106b80d2b; +[SCCCosCreateCOSRegistrationChallengeResumingNetwork asyncStrictMode] */

undefined8 FUN_106b80d24(void)

{
  return 0;
}



/* Entry: 106b80d2c; end: 106b80da7; -[SCCCosCreateCOSRegistrationChallengeResumingNetwork createCOSRegistrationChallengeResumingNetworkWithUserAgentString:routeTag:] */

void FUN_106b80d2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x000106b814f8();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b81490();
  _objc_release(param_3);
  func_0x000106b814f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b80da8; end: 106b80f27; +[SCCCosCreateCOSRegistrationChallengeResumingNetwork invokeWithJSRuntimeProvider:userAgentString:routeTag:completionHandler:] */

void FUN_106b80da8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x000106b814f8();
  _objc_retain(param_6);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106b80ea0;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x000106b814f8();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  func_0x000106b814f0();
  _objc_release(param_5);
  func_0x000106b81490();
  _objc_release(param_3);
  return;
}



/* Entry: 106b80f28; end: 106b80f4b; +[SCCCosCreateCOSRegistrationChallengeResumingNetwork valdiMarshallableObjectDescriptor] */

void FUN_106b80f28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963100;
  param_1[1] = &PTR_DAT_110963130;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106b80f4c; end: 106b80f5f; +[SCCCOSNetworkChallengeResuming valdiMarshallableObjectDescriptor] */

void FUN_106b80f4c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110963140;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b80f60; end: 106b80f73; +[SCCCosCOSLoggingData valdiMarshallableObjectDescriptor] */

void FUN_106b80f60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_communicationChannel_110963170;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b80f74; end: 106b80faf; +[SCCCosICOSAndroidIntegrityProvider valdiMarshallableObjectDescriptor] */

void FUN_106b80f74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109632a8;
  param_1[1] = &PTR_DAT_1109632d8;
  param_1[2] = &PTR_DAT_110963278;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b80fb0; end: 106b80fff;  */

void FUN_106b80fb0(void)

{
  func_0x000106b814d4();
  func_0x000106b81498();
  func_0x000106b81468(FUN_106b8139c);
  func_0x000106b814bc();
  func_0x000106b81478();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b81000; end: 106b81013; +[SCCCosICOSAppleIntegrityProvider valdiMarshallableObjectDescriptor] */

void FUN_106b81000(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109632e8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b81014; end: 106b8102f; +[SCCCosICOSCommunicationInputStateReducer valdiMarshallableObjectDescriptor] */

void FUN_106b81014(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963330;
  param_1[1] = &PTR_DAT_110963360;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b81030; end: 106b81053; +[SCCCosICOSDataSource valdiMarshallableObjectDescriptor] */

void FUN_106b81030(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardClientId_1109633a8;
  param_1[1] = &PTR_DAT_110963570;
  param_1[2] = &PTR_DAT_110963378;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b81054; end: 106b81073;  */

ulong FUN_106b81054(code *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  (*param_1)(uVar1,param_2[1]);
  return uVar1 & 0xffffffff;
}



/* Entry: 106b81074; end: 106b810c3;  */

void FUN_106b81074(void)

{
  func_0x000106b814d4();
  func_0x000106b81498();
  func_0x000106b81468(0x106b813d0);
  func_0x000106b814bc();
  func_0x000106b81478();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b810c4; end: 106b810df; +[SCCCosICOSNativeBridge valdiMarshallableObjectDescriptor] */

void FUN_106b810c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963580;
  param_1[1] = &PTR_DAT_1109635c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b810e0; end: 106b81103; +[SCCCosICOSNativeLoggingCallbacks valdiMarshallableObjectDescriptor] */

void FUN_106b810e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963620;
  param_1[1] = &PTR_DAT_110963680;
  param_1[2] = &PTR_DAT_1109635f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b81104; end: 106b81133;  */

undefined8 FUN_106b81104(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
  return 0;
}



/* Entry: 106b81134; end: 106b81183;  */

void FUN_106b81134(void)

{
  func_0x000106b814d4();
  func_0x000106b81498();
  func_0x000106b81468(0x106b813f8);
  func_0x000106b814bc();
  func_0x000106b81478();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b81184; end: 106b8119f; +[SCCCosICOSOTPStateReducer valdiMarshallableObjectDescriptor] */

void FUN_106b81184(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963690;
  param_1[1] = &PTR_DAT_1109636c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b811a0; end: 106b811df; +[SCCCosICOSPasskeyCreator valdiMarshallableObjectDescriptor] */

void FUN_106b811a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963708;
  param_1[1] = &PTR_DAT_110963738;
  param_1[2] = &PTR_DAT_1109636d8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b811e0; end: 106b8122f;  */

void FUN_106b811e0(void)

{
  func_0x000106b814d4();
  func_0x000106b81498();
  func_0x000106b81468(0x106b81428);
  func_0x000106b814bc();
  func_0x000106b81478();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b81230; end: 106b8124b; +[SCCCosIPhoneNumberFormatter valdiMarshallableObjectDescriptor] */

void FUN_106b81230(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963748;
  param_1[1] = &PTR_DAT_110963850;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106b8124c; end: 106b81257; +[SCCCosCOSComponent componentPath] */

undefined ** FUN_106b8124c(void)

{
  return &PTR____CFConstantStringClassReference_110e76678;
}



/* Entry: 106b81258; end: 106b8127b; -[SCCCosCOSComponent initWithViewModel:componentContext:runtime:] */

void FUN_106b81258(void)

{
  func_0x000106b814a8(PTR_PTR_1126f53b8);
  return;
}



/* Entry: 106b8127c; end: 106b812b3; -[SCCCosCOSComponent setViewModel:] */

void FUN_106b8127c(void)

{
  func_0x000106b814c4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b814dc();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106b812b4; end: 106b812f3; -[SCCCosCOSComponent viewModel] */

void FUN_106b812b4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b812f4; end: 106b812ff; +[SCCCosCOSRegistrationPhoneInput componentPath] */

undefined ** FUN_106b812f4(void)

{
  return &PTR____CFConstantStringClassReference_110e76698;
}



/* Entry: 106b81300; end: 106b81323; -[SCCCosCOSRegistrationPhoneInput initWithViewModel:componentContext:runtime:] */

void FUN_106b81300(void)

{
  func_0x000106b814a8(PTR_PTR_1126f53c0);
  return;
}



/* Entry: 106b81324; end: 106b8135b; -[SCCCosCOSRegistrationPhoneInput setViewModel:] */

void FUN_106b81324(void)

{
  func_0x000106b814c4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b814dc();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106b8135c; end: 106b8139b; -[SCCCosCOSRegistrationPhoneInput viewModel] */

void FUN_106b8135c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b81490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b8139c; end: 106b8145b;  */

void FUN_106b8139c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106b8145c; end: 106b814ff;  */

void FUN_106b8145c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 106b81500; end: 106b81507; -[SCCCosCOSCommunicationInputActionType__Enum init] */

void FUN_106b81500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 106b81508; end: 106b8150f; -[SCCCosCOSCommunicationInputIntentType__Enum init] */

void FUN_106b81508(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 106b81510; end: 106b81517; -[SCCCosCOSIntegrityType__Enum init] */

void FUN_106b81510(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}


