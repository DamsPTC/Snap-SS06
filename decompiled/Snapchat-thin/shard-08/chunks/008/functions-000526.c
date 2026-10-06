/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065e4014; end: 1065e40a7; -[SCApplicationLogger logApplicationOpenForLogin] */

void FUN_1065e4014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + 0x39) = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1065e40a8;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_1;
  puStack_38 = puVar2;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_60);
  return;
}



/* Entry: 1065e40a8; end: 1065e40bf;  */

void FUN_1065e40a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be504d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logApplicationOpenWithType_appl_112571ad0,2,
             *(undefined8 *)(param_1 + 0x28),1,0);
  return;
}



/* Entry: 1065e40c0; end: 1065e4243; -[SCApplicationLogger logApplicationLogout:username:userId:] */

void FUN_1065e40c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  func_0x00010c21e620(param_3);
  func_0x00010c21e4c0(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  puStack_50 = puVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e4244; end: 1065e42b3;  */

void FUN_1065e4244(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    func_0x00010be57ce0(lVar1,param_2,*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065e42b4; end: 1065e439b; -[SCApplicationLogger logApplicationOpenWithNotificationId:pushTypeName:] */

void FUN_1065e42b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065e439c;
  puStack_68 = &UNK_11084d788;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  puStack_48 = puVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e439c; end: 1065e43ab;  */

void FUN_1065e439c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logApplicationOpenWithApplicati_112571ac8,
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1065e43ac; end: 1065e443b; -[SCApplicationLogger logNotificationWhileBackgroundedWithPushTypeName:] */

void FUN_1065e43ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1065e443c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e443c; end: 1065e444f;  */

void FUN_1065e443c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be50510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logApplicationReceivedPushTypeN_112571ae0,
             *(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110e33798);
  return;
}



/* Entry: 1065e4450; end: 1065e458f; -[SCApplicationLogger didAppOpenForDeepLinkFeature:linkId:referrer:deepLinkURL:shortLinkURL:shareId:] */

void FUN_1065e4450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065e4590;
  puStack_90 = &UNK_1108bad48;
  lStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_8;
  uStack_58 = param_3;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065e4590; end: 1065e45a7;  */

void FUN_1065e4590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didAppOpenForDeepLinkFeature_li_11255ca50,
             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 1065e45a8; end: 1065e4773; -[SCApplicationLogger logApplicationDeepLinkForURL:linkId:referrer:deepLinkSource:sourceContext:sourceType:appState:shortLinkURL:handlingResolution:handlingResolutionDetails:handlingLatencyMS:handlingId:handlingStage:shareId:referrerURL:] */

void FUN_1065e45a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_16);
  _objc_retain(param_17);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1065e4774;
  puStack_f0 = &UNK_11092ec28;
  uStack_90 = param_9;
  uStack_88 = param_11;
  uStack_c8 = param_10;
  uStack_c0 = param_12;
  uStack_78 = param_14;
  uStack_80 = param_13;
  uStack_70 = param_15;
  uStack_b8 = param_16;
  uStack_b0 = param_17;
  lStack_e8 = param_1;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_98 = param_8;
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_108);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e4774; end: 1065e47c7;  */

void FUN_1065e4774(long param_1,undefined8 param_2)

{
  func_0x00010be50400(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 1065e47c8; end: 1065e481f; -[SCApplicationLogger logAppLoginKitLoginSuccess] */

void FUN_1065e47c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1065e4820;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1065e4820; end: 1065e4827;  */

void FUN_1065e4820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be50370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logAppLoginKitLoginSuccess_112571a78);
  return;
}



/* Entry: 1065e4828; end: 1065e487f; -[SCApplicationLogger logAppLoginKitLoginAttempt] */

void FUN_1065e4828(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1065e4880;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1065e4880; end: 1065e4887;  */

void FUN_1065e4880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be50330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logAppLoginKitLoginAttempt_112571a68);
  return;
}



/* Entry: 1065e4888; end: 1065e48df; -[SCApplicationLogger logAppLoginKitLoginFailure:] */

void FUN_1065e4888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1065e48e0;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 1065e48e0; end: 1065e48eb;  */

void FUN_1065e48e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be50350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logAppLoginKitLoginFailure__112571a70,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065e48ec; end: 1065e494f; -[SCApplicationLogger setNotificationId:pushTypeName:] */

void FUN_1065e48ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065e4950; end: 1065e4abf; -[SCApplicationLogger _logResignActiveWithApplicationState:username:userId:isLoggingOut:] */

void FUN_1065e4950(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cbf70;
  _objc_alloc_init(PTR_PTR_1126cbf70);
  if (param_4 != 0) {
    func_0x00010c21e620(puVar1,param_2,param_4);
  }
  if (param_5 != 0) {
    func_0x00010c21e4c0(puVar1,param_2,param_5);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde320();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf681e0();
    func_0x00010c18aa00(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf68060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a920(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c1b25e0(puVar1,param_2,param_6);
  if (param_3 < 3) {
    func_0x00010c169980(puVar1,param_2,param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065e4ac0; end: 1065e4c0b; -[SCApplicationLogger _logApplicationClose] */

void FUN_1065e4ac0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126cbf78;
  func_0x00010bf04e80(PTR_PTR_1126cbf78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf078c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf5e5e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126cbf78;
    func_0x00010c160540(PTR_PTR_1126cbf78);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf078c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e4c0c; end: 1065e4ddb; -[SCApplicationLogger _logApplicationOpenWithApplicationState:notificationId:pushTypeName:] */

void FUN_1065e4c0c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dfe0();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126cbf80;
  _objc_alloc_init(PTR_PTR_1126cbf80);
  func_0x00010c1d5100();
  func_0x00010c1ce740(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1ce180(puVar1,param_2,param_4);
  _objc_release(param_4);
  lVar6 = param_1;
  func_0x00010be20520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf68280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18aaa0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126af390;
  func_0x00010bfbb8a0(PTR_PTR_1126af390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a95a0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  if (param_3 < 3) {
    func_0x00010c169980(puVar1,param_2,param_3);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    func_0x00010c0b2e60(uVar5,param_2,puVar1);
  }
  else {
    func_0x00010c0b2a00(uVar5,param_2,puVar1,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(uVar5);
  func_0x00010be50380(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e4ddc; end: 1065e4f4f; -[SCApplicationLogger _logAppOpenMetadataEvent] */

void FUN_1065e4ddc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126cbf88;
  _objc_opt_new();
  func_0x00010be3e6c0(param_1);
  func_0x00010c170620(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f440();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c0b2e60(uVar4);
    }
    else {
      func_0x00010c0b2a00(uVar4);
    }
    _objc_release(uVar4);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126cbf90;
    _objc_retain(puVar2);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfcab40(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 1065e4f50; end: 1065e4fef;  */

void FUN_1065e4f50(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x00010c1692a0(*(undefined8 *)(param_1 + 0x20));
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c0b2e60(uVar1);
  }
  else {
    func_0x00010c0b2a00(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065e4ff0; end: 1065e50eb; -[SCApplicationLogger _logApplicationReceivedPushTypeName:appState:] */

void FUN_1065e4ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cbf78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf05be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd8018,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf078c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e50ec; end: 1065e532b; -[SCApplicationLogger _logApplicationDeepLinkForURL:linkId:referrer:deepLinkSource:sourceContext:sourceType:appState:shortLinkURL:handlingResolution:handlingResolutionDetails:handlingLatencyMS:handlingId:handlingStage:shareId:referrerURL:] */

void FUN_1065e50ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cbf98;
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c206c40();
  func_0x00010c18aa00(puVar1,param_2,param_6);
  func_0x00010c18a920(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1e94a0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c182d40(puVar1,param_2,param_7);
  func_0x00010c165a20(puVar1,param_2,param_9);
  func_0x00010c1a5400(puVar1,param_2,param_11);
  func_0x00010c1a5420(puVar1,param_2,param_12);
  _objc_release(param_12);
  func_0x00010c1a53e0(puVar1,param_2,param_13);
  func_0x00010c1feca0(puVar1,param_2,param_16);
  _objc_release(param_16);
  func_0x00010c1a53c0(puVar1,param_2,param_14);
  func_0x00010c1a5440(puVar1,param_2,param_15);
  func_0x00010c1e94c0(puVar1,param_2,param_17);
  _objc_release(param_17);
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18aaa0();
  _objc_release(param_3);
  func_0x00010c1ffbc0(puVar2,param_2,param_10);
  _objc_release(param_10);
  puVar3 = PTR_PTR_1126af390;
  func_0x00010bfbb8a0(PTR_PTR_1126af390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a95a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e532c; end: 1065e5407; -[SCApplicationLogger _didAppOpenForDeepLinkFeature:linkId:referrer:deepLinkURL:shortLinkURL:shareId:] */

void FUN_1065e532c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7d9970(param_3);
  func_0x00010c2578e0(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065e5408; end: 1065e54cf; -[SCApplicationLogger _logAppLoginKitLoginSuccess] */

void FUN_1065e5408(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cbfa0;
  _objc_opt_new(PTR_PTR_1126cbfa0);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf681e0();
  func_0x00010c18aa00(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf68060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a920(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e54d0; end: 1065e5597; -[SCApplicationLogger _logAppLoginKitLoginAttempt] */

void FUN_1065e54d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cbfa8;
  _objc_opt_new(PTR_PTR_1126cbfa8);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf681e0();
  func_0x00010c18aa00(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf68060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a920(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e5598; end: 1065e5677; -[SCApplicationLogger _logAppLoginKitLoginFailure:] */

void FUN_1065e5598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cbfb0;
  _objc_opt_new(PTR_PTR_1126cbfb0);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf681e0();
  func_0x00010c18aa00(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf68060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a920(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c199e80(puVar1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e5678; end: 1065e576f; -[SCApplicationLogger _sourceTypeFromDeepLinkReferrer:] */

undefined8 FUN_1065e5678(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e56758);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e56778);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e56798);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e567b8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e567d8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e567f8);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e56818);
              uVar2 = 0xb5;
              if ((int)uVar1 == 0) {
                uVar2 = 8;
              }
            }
            else {
              uVar2 = 0x6e;
            }
          }
          else {
            uVar2 = 0x9a;
          }
        }
        else {
          uVar2 = 0x8e;
        }
      }
      else {
        uVar2 = 0x89;
      }
    }
    else {
      uVar2 = 0x88;
    }
  }
  else {
    uVar2 = 0x87;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1065e5770; end: 1065e57c7; -[SCApplicationLogger _isBitmojiAppInstalled] */

undefined8 FUN_1065e5770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110de2c18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2cf00(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1065e57c8; end: 1065e5893; -[SCApplicationLogger .cxx_destruct] */

void FUN_1065e57c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 1065e5894; end: 1065e5937; -[SCActiveUserApplicationLoggerEntryPoint end] */

void FUN_1065e5894(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x000100966c90();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c266da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162c00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f1fe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5938; end: 1065e59d3; -[SCActiveUserApplicationLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e5938(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b844);
  _objc_destroyWeak(param_1 + _DAT_11274b840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b83c);
  return;
}



/* Entry: 1065e59d4; end: 1065e59d7; -[SCApplicationLoggerEventObserverEntryPoint _didBecomeActive] */

void FUN_1065e59d4(void)

{
  return;
}



/* Entry: 1065e59d8; end: 1065e5a13; -[SCApplicationLoggerEventObserverEntryPoint _didEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e59d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b850);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065e5a14; end: 1065e5a4f; -[SCApplicationLoggerEventObserverEntryPoint _willResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e5a14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b850);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065e5a50; end: 1065e5aa7; -[SCApplicationLoggerEventObserverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e5a50(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b84c);
  _objc_destroyWeak(param_1 + _DAT_11274b854);
  _objc_storeStrong(param_1 + _DAT_11274b850,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b848,0);
  return;
}



/* Entry: 1065e5aa8; end: 1065e5aab; -[SCApplicationLoggerWithUserLifecycleObserver onAppDidEnterBackground] */

void FUN_1065e5aa8(void)

{
  return;
}



/* Entry: 1065e5aac; end: 1065e5aaf; -[SCApplicationLoggerWithUserLifecycleObserver onAppWillEnterForeground] */

void FUN_1065e5aac(void)

{
  return;
}



/* Entry: 1065e5ab0; end: 1065e5ab3; -[SCApplicationLoggerWithUserLifecycleObserver onAppWillTerminate] */

void FUN_1065e5ab0(void)

{
  return;
}



/* Entry: 1065e5ab4; end: 1065e5ab7; -[SCApplicationLoggerWithUserLifecycleObserver onUserLoggedIn] */

void FUN_1065e5ab4(void)

{
  return;
}



/* Entry: 1065e5ab8; end: 1065e5abb; -[SCApplicationLoggerWithUserLifecycleObserver onUserRegistered] */

void FUN_1065e5ab8(void)

{
  return;
}



/* Entry: 1065e5abc; end: 1065e5abf; -[SCApplicationLoggerWithUserLifecycleObserver onAppWillResignActive] */

void FUN_1065e5abc(void)

{
  return;
}



/* Entry: 1065e5ac0; end: 1065e5acb; -[SCApplicationLoggerWithUserLifecycleObserver .cxx_destruct] */

void FUN_1065e5ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065e5acc; end: 1065e5b5f; -[SCUserApplicationLoggerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e5acc(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b85c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f2e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b860);
  *(undefined8 *)(param_1 + _DAT_11274b860) = 0;
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f2000;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5b60; end: 1065e5bc3; -[SCUserApplicationLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e5b60(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b86c);
  _objc_destroyWeak(param_1 + _DAT_11274b868);
  _objc_destroyWeak(param_1 + _DAT_11274b864);
  _objc_storeStrong(param_1 + _DAT_11274b85c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b860,0);
  return;
}



/* Entry: 1065e5bc4; end: 1065e5bef; +[SCGrapheneApplicationMetric appClose] */

void FUN_1065e5bc4(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5bf0; end: 1065e5c1b; +[SCGrapheneApplicationMetric appNotification] */

void FUN_1065e5bf0(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5c1c; end: 1065e5c47; +[SCGrapheneApplicationMetric unexpectedLoggerTypeInAppLogger] */

void FUN_1065e5c1c(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5c48; end: 1065e5c73; +[SCGrapheneApplicationMetric unexpectedEventTypeInAppLogger] */

void FUN_1065e5c48(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5c74; end: 1065e5c9f; +[SCGrapheneApplicationMetric deviceInfoProviderNotAvailableInAppLogger] */

void FUN_1065e5c74(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5ca0; end: 1065e5ccb; +[SCGrapheneApplicationMetric appOpenDeeplink] */

void FUN_1065e5ca0(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5ccc; end: 1065e5cf7; +[SCGrapheneApplicationMetric sessionTimeSpentMillis] */

void FUN_1065e5ccc(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5cf8; end: 1065e5d23; +[SCGrapheneApplicationMetric aaoDeepLinkDiagnosis] */

void FUN_1065e5cf8(void)

{
  _objc_alloc(PTR_PTR_1126cbf78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e5d24; end: 1065e5dc3; -[SCGrapheneApplicationMetric description] */

void FUN_1065e5d24(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e56858;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e56858,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f2008;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1065e5dc4; end: 1065e5e6b; -[SCAIRemixOperaPlugin initWithAIRemixScopeExposer:] */

undefined1 * FUN_1065e5dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2010;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065e5e6c; end: 1065e5e6f; -[SCAIRemixOperaPlugin setPlaylistItemController:] */

void FUN_1065e5e6c(void)

{
  return;
}



/* Entry: 1065e5e70; end: 1065e5e7b; -[SCAIRemixOperaPlugin setOperaControlling:] */

void FUN_1065e5e70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1065e5e7c; end: 1065e5f0f; -[SCAIRemixOperaPlugin registeredEventsForOperaSession] */

void FUN_1065e5e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar4 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010befee40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2d30;
  _objc_retain(ppuVar4);
  func_0x00010befee40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)ppuVar4;
  func_0x00010c0720c0(ppuVar4,param_2,puVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010be79d20(puVar1,param_2,uVar5,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1065e5f10; end: 1065e5fbb; -[SCAIRemixOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_1065e5f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2d30;
  _objc_retain(param_3);
  func_0x00010befee40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be79d20(param_1,param_2,param_4,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065e5fbc; end: 1065e619b; -[SCAIRemixOperaPlugin _presentAIRemixWithPage:params:] */

void FUN_1065e5fbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c22b5a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c22b600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = lVar4;
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        _objc_initWeak(auStack_58,param_1);
        lVar1 = lVar4;
        func_0x00010bfb1920(lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_4);
        func_0x00010c297260(lVar1);
        _objc_release(lVar1);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e619c; end: 1065e626b;  */

void FUN_1065e619c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1065e626c;
    puStack_58 = &UNK_11084c4a0;
    lStack_50 = lVar1;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = param_2;
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uStack_40 = uVar2;
    uStack_38 = uVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_38);
    _objc_release(lStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1065e626c; end: 1065e627b;  */

void FUN_1065e626c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchAIRemixWithImage_page_par_11256f6a8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1065e627c; end: 1065e683f; -[SCAIRemixOperaPlugin _launchAIRemixWithImage:page:params:] */

void FUN_1065e627c(long param_1,undefined8 param_2,long param_3,undefined *param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_4 != (undefined *)0x0)) {
    puVar1 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    puVar1 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    puVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b23b0;
    _objc_opt_class(PTR_PTR_1126b23b0);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    if (puVar1 != (undefined *)0x0 && puVar3 != (undefined *)0x0) {
      puVar5 = puVar2;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25b160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010853a0e0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c08bda0();
      switch(puVar5) {
      case (undefined *)0x9:
      case (undefined *)0x1b:
      case (undefined *)0x21:
        break;
      case (undefined *)0xa:
        break;
      default:
        break;
      case (undefined *)0xf:
        break;
      case (undefined *)0x10:
        break;
      case (undefined *)0x14:
        break;
      case (undefined *)0x15:
        break;
      case (undefined *)0x19:
      case (undefined *)0x23:
        break;
      case (undefined *)0x1a:
        break;
      case (undefined *)0x1d:
        break;
      case (undefined *)0x1f:
      }
      puVar5 = puVar4;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2d20;
      func_0x00010c1298c0(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_5;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      _objc_release(puVar6);
      puVar6 = puVar5;
      if ((int)uVar8 != 0) {
        puVar6 = PTR_PTR_1126b23b8;
        func_0x00010c258f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      puVar5 = PTR_PTR_1126cbfc0;
      _objc_alloc(PTR_PTR_1126cbfc0);
      func_0x00010c1298a0(puVar4);
      puVar9 = puVar4;
      func_0x00010c247b80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247de0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15ffa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021b40(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar9);
      uVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
      _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
      uVar10 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar2);
      uVar7 = uVar8;
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar8);
      if (uVar7 == 0) {
        lVar11 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar11);
        lVar12 = lVar11;
        func_0x00010c27f040();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c27f020();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_78,lVar13);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
      }
      else {
        _objc_initWeak(auStack_78,uVar8);
      }
      puVar2 = PTR_PTR_1126aeaf8;
      _objc_alloc(PTR_PTR_1126aeaf8);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1065e6840;
      puStack_88 = &UNK_110849680;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_copyWeak(auStack_a8,auStack_78);
      func_0x00010c0311a0(puVar2);
      puVar4 = PTR_PTR_1126cbfc8;
      _objc_alloc(PTR_PTR_1126cbfc8);
      func_0x00010c01bfe0();
      lVar11 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar11);
      lVar12 = lVar11;
      func_0x00010c29e000();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6200(lVar12);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e6840; end: 1065e68ab;  */

void FUN_1065e6840(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1c8b80(param_2);
  func_0x00010c1c8c00(param_2);
  func_0x00010c10eda0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065e68ac; end: 1065e693f;  */

void FUN_1065e68ac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 == 0) || (uVar3 = uVar2, func_0x00010c06d1a0(), (uVar3 & 1) != 0)) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    func_0x00010bf84b00(uVar1);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065e6940; end: 1065e6ac3; -[SCAIRemixOperaPlugin aiRemixScopeDidComplete] */

void FUN_1065e6940(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0cfb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1065e6a30;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1065e6ac4; end: 1065e6afb; -[SCAIRemixOperaPlugin .cxx_destruct] */

void FUN_1065e6ac4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065e6afc; end: 1065e6c83; -[SCRemixExternalMediaItemProvider initWithIsVideo:shouldMuteVideo:contentModel:performer:contentDelivery:bufferedContentFetcher:snapVideoFilterFactory:previewURLVideoProvider:shareableMediaItemsProviding:] */

undefined1 *
FUN_1065e6afc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f2018;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_11);
    *(undefined1 *)((long)puVar1 + 0x38) = param_3;
    *(undefined1 *)((long)puVar1 + 0x39) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1065e6c84; end: 1065e6cc7; -[SCRemixExternalMediaItemProvider dealloc] */

void FUN_1065e6c84(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddefc0();
  puStack_28 = PTR_PTR_1126f2018;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1065e6cc8; end: 1065e76bb; -[SCRemixExternalMediaItemProvider getExternalMediaItem] */

void FUN_1065e6cc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x38) != '\x01') {
    puVar6 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained();
    puVar7 = puVar6;
    func_0x00010c22b600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c6978;
    puVar8 = puVar7;
    FUN_1065efadc(puVar7,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe95c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release();
    goto LAB_1065e75c4;
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_1065e76bc;
  uStack_120 = 0x1065e76cc;
  uStack_118 = 0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1065e76bc;
  uStack_150 = 0x1065e76cc;
  uStack_148 = 0;
  lVar16 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar16);
  lVar9 = lVar16;
  func_0x00010c22b620();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1065e76d4;
  puStack_190 = &UNK_11092ec58;
  _objc_retain(puVar7);
  puStack_180 = &uStack_140;
  puStack_178 = &uStack_170;
  puStack_188 = puVar7;
  func_0x00010bf97e80(lVar9);
  _objc_release(lVar9);
  _objc_release(lVar16);
  puVar6 = puVar7;
  func_0x00010bf51e00(puVar7);
  puVar1 = puVar6;
  FUN_1065efadc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126c6978;
  puVar3 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_1065f0140(puVar3,puVar1,uVar18,uVar4,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29be60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  if (puStack_168[5] == 0) {
    lVar16 = *(long *)(param_1 + 0x40);
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar9 = *(long *)(param_1 + 0x40);
    if (lVar16 == 0) {
      func_0x00010bf4bee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 == 0) {
        param_1 = param_1 + 0x30;
        _objc_loadWeakRetained();
        lVar11 = param_1;
        func_0x00010c22b620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        _objc_retain(lVar11);
        lVar16 = lVar11;
        func_0x00010bf52a60();
        lVar9 = lRam0000000000000000;
        while (lVar16 != 0) {
          lVar19 = 0;
          do {
            if (lRam0000000000000000 != lVar9) {
              _objc_enumerationMutation(lVar11);
            }
            uVar17 = *(ulong *)(lVar19 * 8);
            uVar10 = uVar17;
            func_0x00010c0c6c20();
            if (uVar10 == 1) {
              uVar10 = uVar17;
              func_0x00010c29bb40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (uVar10 == 0) {
                func_0x00010c2991a0();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
                _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
                uVar15 = uVar17;
                _objc_opt_isKindOfClass(uVar17,puVar8);
                uVar10 = uVar17;
                if ((uVar15 & 1) == 0) {
                  uVar10 = 0;
                }
                _objc_retain(uVar10);
                _objc_release(uVar17);
                uVar17 = uVar10;
                func_0x00010bdc2b80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar10);
              }
              else {
                func_0x00010c29bb40();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(lVar11);
              if (uVar17 == 0) goto LAB_1065e74e4;
              func_0x00010bf43d60(puVar2);
              goto LAB_1065e756c;
            }
            lVar19 = lVar19 + 1;
          } while (lVar16 != lVar19);
          lVar16 = lVar11;
          func_0x00010bf52a60();
        }
        _objc_release(lVar11);
LAB_1065e74e4:
        puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
        uStack_110 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_108 = &PTR____CFConstantStringClassReference_110e569f8;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        func_0x00010bf43ca0(puVar2);
        _objc_release(puVar8);
        uVar17 = 0;
LAB_1065e756c:
        _objc_release(lVar11);
        _objc_release(uVar17);
      }
      else {
        _objc_initWeak(auStack_1b0,param_1);
        puVar3 = PTR_PTR_1126b1378;
        lVar16 = puStack_138[5];
        if (lVar16 == 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010bf4bf00(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c46a0();
          puVar8 = PTR_PTR_1126b1060;
          _objc_alloc(PTR_PTR_1126b1060);
          func_0x00010c032f60();
          func_0x00010c291560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(uVar4);
          lVar11 = *(long *)(param_1 + 0x40);
          func_0x00010bf4bf00();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar11;
          func_0x00010bf93ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar16;
          func_0x00010c08fa60();
          if (lVar9 == 0) {
LAB_1065e7360:
            uStack_2f8 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010bf4bee0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 != 0) goto LAB_1065e7378;
          }
          else {
            lStack_300 = *(long *)(param_1 + 0x40);
            func_0x00010bf4bf00();
            _objc_retainAutoreleasedReturnValue();
            lStack_308 = lStack_300;
            func_0x00010bf93de0();
            _objc_retainAutoreleasedReturnValue();
            lVar19 = lStack_308;
            func_0x00010c08fa60();
            if (lVar19 == 0) goto LAB_1065e7360;
            uVar12 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010bf4bee0();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010bf4bf00();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar13;
            func_0x00010bf93ec0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010bf4bf00(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar14;
            func_0x00010bf93de0();
            _objc_retainAutoreleasedReturnValue();
            uStack_2f8 = uVar12;
            func_0x00010c2ad2a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar18);
            _objc_release(uVar14);
            _objc_release(uVar4);
            _objc_release(uVar13);
            _objc_release(uVar12);
LAB_1065e7378:
            _objc_release(lStack_308);
            _objc_release(lStack_300);
          }
          _objc_release(lVar16);
          _objc_release(lVar11);
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar12;
          func_0x00010bfa6dc0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar4;
          func_0x00010bf49960();
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_268,auStack_1b0);
          _objc_retain(puVar2);
          func_0x00010c26d0c0(uVar18);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar18);
          _objc_release(uVar4);
          _objc_release(uVar12);
          _objc_release(puVar2);
          _objc_destroyWeak(auStack_268);
          _objc_release(uStack_2f8);
          _objc_release(puVar3);
        }
        else {
          puStack_260 = puVar8;
          uStack_258 = 0xc2000000;
          pcStack_250 = FUN_1065e79f4;
          puStack_248 = &UNK_11092ec88;
          _objc_copyWeak(auStack_230,auStack_1b0);
          puStack_238 = &uStack_170;
          _objc_retain(puVar2);
          puStack_240 = puVar2;
          func_0x00010c297260(lVar16);
          _objc_release(puStack_240);
          _objc_destroyWeak(auStack_230);
        }
        _objc_destroyWeak(auStack_1b0);
      }
    }
    else {
      func_0x00010bf4d380();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_1b0,param_1);
      uVar4 = *(undefined8 *)(param_1 + 8);
      puStack_228 = puVar8;
      uStack_220 = 0xc2000000;
      uStack_218 = 0x1065e79b4;
      puStack_210 = &UNK_110843420;
      _objc_copyWeak(auStack_1f0,auStack_1b0);
      _objc_retain(lVar9);
      puStack_1f8 = &uStack_170;
      lStack_208 = lVar9;
      _objc_retain(puVar2);
      puStack_200 = puVar2;
      func_0x00010c0f7fc0(uVar4);
      _objc_release(puStack_200);
      _objc_release(lStack_208);
      _objc_destroyWeak(auStack_1f0);
      _objc_destroyWeak(auStack_1b0);
      _objc_release(lVar9);
    }
  }
  else {
    _objc_initWeak(auStack_1b0,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_1e8 = puVar8;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_1065e7978;
    puStack_1d0 = &UNK_110851b50;
    _objc_copyWeak(auStack_1b8,auStack_1b0);
    puStack_1c0 = &uStack_170;
    _objc_retain(puVar2);
    puStack_1c8 = puVar2;
    func_0x00010c0f7fc0(uVar4);
    _objc_release(puStack_1c8);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_1b0);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_188);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release();
LAB_1065e75c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_170,8);
  lVar16 = 8;
  __Block_object_dispose(&uStack_140);
  __Unwind_Resume();
  *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = 0;
  return;
}



/* Entry: 1065e76bc; end: 1065e76d3;  */

void FUN_1065e76bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065e76d4; end: 1065e7977;  */

void FUN_1065e76d4(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c6c20();
  puVar2 = PTR_PTR_1126ae558;
  if ((param_3 == 0) || (uVar1 != 0)) {
    uVar1 = param_2;
    func_0x00010c0c6c20();
    if (uVar1 != 1) goto LAB_1065e77b0;
    uVar1 = param_2;
    func_0x00010c29bb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) goto LAB_1065e77b0;
    uVar1 = param_2;
    func_0x00010c29bb60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar7 = *(ulong *)(lVar6 + 0x28);
    *(ulong *)(lVar6 + 0x28) = uVar1;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = param_2;
    func_0x00010bfe6ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8);
    _objc_release(puVar2);
  }
  _objc_release(uVar7);
LAB_1065e77b0:
  uVar1 = param_2;
  func_0x00010c0c6c20();
  if (uVar1 == 1) {
    uVar1 = param_2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126ae558;
    if (uVar1 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8);
      _objc_release(puVar2);
      _objc_release(uVar1);
    }
  }
  uVar1 = param_2;
  func_0x00010c0c6c20();
  if ((uVar1 == 1) && (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0)) {
    uVar1 = param_2;
    func_0x00010c29bb40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar3 = param_2;
      func_0x00010c2991a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      uVar7 = uVar3;
      if ((uVar4 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar3);
      uVar3 = uVar7;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
    }
    else {
      _objc_retain(uVar1);
      uVar3 = uVar1;
    }
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010c072e60();
    if ((int)uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0f5800(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bfacbe0();
      _objc_release(uVar1);
      _objc_release(puVar2);
      if ((int)puVar5 != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        _objc_retain(uVar3);
        uVar8 = *(undefined8 *)(lVar6 + 0x28);
        *(ulong *)(lVar6 + 0x28) = uVar3;
        _objc_release(uVar8);
      }
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065e7978; end: 1065e79f3;  */

void FUN_1065e7978(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be607e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065e79f4; end: 1065e7b8f;  */

long FUN_1065e79f4(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_2 == 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
      if (param_3 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
      else {
        _objc_retain(param_3);
        puVar2 = param_3;
      }
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      puVar2 = (undefined *)(param_1 + 0x30);
      _objc_loadWeakRetained();
      func_0x00010be607e0();
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9a3e0();
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  lVar4 = lVar3;
  func_0x00010bfc1d60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010c13ca20(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9a3e0(param_2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(param_2);
  return 0;
}



/* Entry: 1065e7b90; end: 1065e7c2f;  */

undefined8 FUN_1065e7b90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c13ca20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9a3e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return 0;
}



/* Entry: 1065e7c30; end: 1065e7d8f; -[SCRemixExternalMediaItemProvider _downloadStreamingVideoWithContentResult:fallbackVideoURL:fileURLPromise:] */

void FUN_1065e7c30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c13e420(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e7d90; end: 1065e7de3;  */

void FUN_1065e7d90(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9a3e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065e7de4; end: 1065e7de7; -[SCRemixExternalMediaItemProvider _cleanUp] */

void FUN_1065e7de4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeFileAtTempFileURL_1125809e8);
  return;
}



/* Entry: 1065e7de8; end: 1065e7ec3; -[SCRemixExternalMediaItemProvider _removeFileAtTempFileURL] */

void FUN_1065e7de8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    _objc_retain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1065e7e80;
    puStack_30 = &UNK_110842e18;
    lStack_28 = lVar2;
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
    _objc_release(lStack_28);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1065e7ec4; end: 1065e7f9b; -[SCRemixExternalMediaItemProvider _mirrorLocalVideoURL:fileURLPromise:] */

void FUN_1065e7ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  FUN_1065e7f9c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c099760();
  if ((((ulong)puVar3 & 1) != 0) ||
     (puVar3 = puVar2, func_0x00010bf52020(puVar2,param_2,param_3,uVar1,0), uVar4 = param_3,
     (int)puVar3 != 0)) {
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    _objc_release(uVar4);
    uVar4 = uVar1;
  }
  func_0x00010bf43d60(param_4,param_2,uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065e7f9c; end: 1065e8053;  */

void FUN_1065e7f9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar1,param_2,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2c60(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc2ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065e8054; end: 1065e81d7; -[SCRemixExternalMediaItemProvider _saveVideoData:fallbackVideoURL:fileURLPromise:] */

void FUN_1065e8054(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010bf43ca0(param_5);
      _objc_release(puVar3);
    }
    else {
      func_0x00010be607e0(param_1);
    }
  }
  else {
    FUN_1065e7f9c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar1;
    _objc_release(uVar5);
    func_0x00010c14e060(param_3);
    func_0x00010bf43d60(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_destroyWeak(param_3 + 0x30);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1065e81d8; end: 1065e824b; -[SCRemixExternalMediaItemProvider .cxx_destruct] */

void FUN_1065e81d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065e824c; end: 1065e82bf; -[SCRemixOperaDirectorModeMediaProvider initWithMedia:] */

undefined1 * FUN_1065e824c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2020;
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



/* Entry: 1065e82c0; end: 1065e82e7; -[SCRemixOperaDirectorModeMediaProvider assets] */

void FUN_1065e82c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065e82e8; end: 1065e82ef; -[SCRemixOperaDirectorModeMediaProvider shouldDisableRecovery] */

undefined8 FUN_1065e82e8(void)

{
  return 1;
}



/* Entry: 1065e82f0; end: 1065e82fb; -[SCRemixOperaDirectorModeMediaProvider .cxx_destruct] */

void FUN_1065e82f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065e82fc; end: 1065e874f; -[SCRemixOperaPlugin initWithUserSession:circumstanceEngine:contentDelivery:bufferedContentFetcher:snapVideoFilterFactory:previewURLVideoProvider:snapchattersDataFetcher:groupsDataFetcher:userInfoServices:contextExperimentService:directorModeLaunchServices:directorModeScopeServices:blizzardLogger:creativeToolsABProvider:remixScopeExposer:remixScopeServices:chatCameraScopeExposer:chatCameraScopeServices:mediaImportEditorScopeExposer:] */

undefined8 *
FUN_1065e82fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f2028;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[3];
    puVar1[3] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[4];
    puVar1[4] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[5];
    puVar1[5] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[6];
    puVar1[6] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1065e8750; end: 1065e8753; -[SCRemixOperaPlugin setPlaylistItemController:] */

void FUN_1065e8750(void)

{
  return;
}



/* Entry: 1065e8754; end: 1065e875f; -[SCRemixOperaPlugin setOperaControlling:] */

void FUN_1065e8754(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1065e8760; end: 1065e87f3; -[SCRemixOperaPlugin registeredEventsForOperaSession] */

void FUN_1065e8760(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong in_x4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar11 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c129540();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar12);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126b2d30;
  _objc_retain(ppuVar11);
  func_0x00010c129540(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)ppuVar11;
  func_0x00010c0720c0();
  _objc_release(ppuVar11);
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    puVar2 = puVar1 + 0x38;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x000107dd9cf0(uVar12,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if ((uVar8 & 1) == 0) {
      puVar2 = PTR_PTR_1126b2d20;
      func_0x00010c0b3940(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b6038;
      _objc_opt_class(PTR_PTR_1126b6038);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar2);
      uVar8 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar9);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_1065e8a4c;
      puStack_b0 = &UNK_110848ba8;
      puStack_a8 = puVar1;
      _objc_retain(uVar12);
      uStack_a0 = uVar12;
      _objc_retain(in_x4);
      ppuVar11 = &puStack_c8;
      uStack_98 = in_x4;
      _objc_retainBlock();
      uVar9 = uVar8;
      func_0x00010bf4eae0();
      _objc_release(uVar8);
      if ((uVar9 == 2) && (*(long *)(puVar1 + 0xa0) != 0)) {
        func_0x00010be83340(puVar1);
      }
      else {
        (*(code *)ppuVar11[2])(ppuVar11);
      }
      _objc_release(ppuVar11);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
    }
  }
  _objc_release(in_x4);
  _objc_release(uVar12);
  return;
}



/* Entry: 1065e87f4; end: 1065e8a4b; -[SCRemixOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_1065e87f4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2d30;
  _objc_retain(param_3);
  func_0x00010c129540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x000107dd9cf0(param_4,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((uVar8 & 1) == 0) {
      puVar1 = PTR_PTR_1126b2d20;
      func_0x00010c0b3940(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b6038;
      _objc_opt_class(PTR_PTR_1126b6038);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar1);
      uVar8 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar9);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1065e8a4c;
      puStack_80 = &UNK_110848ba8;
      lStack_78 = param_1;
      _objc_retain(param_4);
      uStack_70 = param_4;
      _objc_retain(param_5);
      ppuVar11 = &puStack_98;
      uStack_68 = param_5;
      _objc_retainBlock();
      uVar9 = uVar8;
      func_0x00010bf4eae0();
      _objc_release(uVar8);
      if ((uVar9 == 2) && (*(long *)(param_1 + 0xa0) != 0)) {
        func_0x00010be83340(param_1);
      }
      else {
        (*(code *)ppuVar11[2])(ppuVar11);
      }
      _objc_release(ppuVar11);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065e8a4c; end: 1065e8a5b;  */

void FUN_1065e8a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentRemixWithSnapUsingPage_p_11257d1e0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1065e8a5c; end: 1065e8c23; -[SCRemixOperaPlugin _promptUserForRemixSelectionWithPage:params:] */

void FUN_1065e8a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126cbfd0;
  _objc_alloc();
  func_0x00010c01a380(0x406d600000000000);
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar1;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c18b5e0(uVar6,param_2,param_1);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x0001065ec3f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126b10a8;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  puVar3 = puVar1;
  func_0x0001065ec37c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar1,param_2,uVar6,puVar3,PTR____NSArray0__struct_11034ab48,puVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar6);
  _objc_release(puVar3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10af80();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065e8c24; end: 1065e8c5b; -[SCRemixOperaPlugin didSelectRemixOperaPromptChoiceType:] */

void FUN_1065e8c24(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010be579e0(param_1,param_2,param_3 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010be48210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__launchRemixWithPage_params_type_11256fa20,*(undefined8 *)(param_1 + 200)
             ,*(undefined8 *)(param_1 + 0xd0),param_3 != 0);
  return;
}



/* Entry: 1065e8c5c; end: 1065e8cdf; -[SCRemixOperaPlugin _launchRemixWithPage:params:type:] */

void FUN_1065e8c5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf82fe0(*(undefined8 *)(param_1 + 0x90));
  if (param_5 == 1) {
    func_0x00010be7e0a0(param_1,param_2,param_3,param_4);
  }
  else if (param_5 == 0) {
    func_0x00010be7e100(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065e8ce0; end: 1065e8ce7; -[SCRemixOperaPlugin _dimissRootActionSheet] */

void FUN_1065e8ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_dismissActionSheet_1125be5a0);
  return;
}


