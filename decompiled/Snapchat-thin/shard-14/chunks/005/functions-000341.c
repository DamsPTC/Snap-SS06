/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2d3220; end: 10b2d3227; -[SCNClientSwitchboardClientSwitchboardConfig routeTag] */

undefined8 FUN_10b2d3220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b2d3228; end: 10b2d322f; -[SCNClientSwitchboardClientSwitchboardConfig retryConfig] */

undefined8 FUN_10b2d3228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b2d3230; end: 10b2d3237; -[SCNClientSwitchboardClientSwitchboardConfig headers] */

undefined8 FUN_10b2d3230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b2d3238; end: 10b2d323f; -[SCNClientSwitchboardClientSwitchboardConfig inAppSessionRetry] */

undefined1 FUN_10b2d3238(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b2d3240; end: 10b2d3247; -[SCNClientSwitchboardClientSwitchboardConfig compressConfig] */

undefined8 FUN_10b2d3240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b2d3248; end: 10b2d324f; -[SCNClientSwitchboardClientSwitchboardConfig timeoutConfig] */

undefined8 FUN_10b2d3248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b2d3250; end: 10b2d3257; -[SCNClientSwitchboardClientSwitchboardConfig enableDistributedTracing] */

undefined1 FUN_10b2d3250(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b2d3258; end: 10b2d32b3; -[SCNClientSwitchboardClientSwitchboardConfig .cxx_destruct] */

void FUN_10b2d3258(long param_1)

{
  FUN_10b2d32b4(param_1 + 0x48);
  FUN_10b2d32b4(param_1 + 0x40);
  FUN_10b2d32b4(param_1 + 0x38);
  FUN_10b2d32b4(param_1 + 0x30);
  FUN_10b2d32b4(param_1 + 0x28);
  FUN_10b2d32b4(param_1 + 0x20);
  FUN_10b2d32b4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b2d32b4; end: 10b2d32c3;  */

void FUN_10b2d32b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b2d32c4; end: 10b2d3383; -[SCNClientSwitchboardTimeoutConfig initWithGrpcTimeoutInMs:readTimeoutInMs:] */

undefined1 *
FUN_10b2d32c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127063b8;
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



/* Entry: 10b2d3384; end: 10b2d338b; -[SCNClientSwitchboardTimeoutConfig grpcTimeoutInMs] */

undefined8 FUN_10b2d3384(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2d338c; end: 10b2d3393; -[SCNClientSwitchboardTimeoutConfig readTimeoutInMs] */

undefined8 FUN_10b2d338c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2d3394; end: 10b2d33c3; -[SCNClientSwitchboardTimeoutConfig .cxx_destruct] */

void FUN_10b2d3394(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d33c4; end: 10b2d3447;  */

undefined8 FUN_10b2d33c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__19to_stringEi(auStack_58,1);
  func_0x000107c2c4fc(param_1,&uStack_40,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000107c35624();
  return param_1;
}



/* Entry: 10b2d3448; end: 10b2d344f;  */

undefined8 * FUN_10b2d3448(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd19c8;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d3450; end: 10b2d3463;  */

void FUN_10b2d3450(void)

{
  FUN_10b2d35b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d3464; end: 10b2d348b;  */

void FUN_10b2d3464(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 != *(char *)(param_2 + 0x48)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        func_0x000107c2ab24(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      return;
    }
    func_0x00010028afe4();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c3561c();
    func_0x00010b2d34e8();
    *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
    return;
  }
  return;
}



/* Entry: 10b2d348c; end: 10b2d3523;  */

void FUN_10b2d348c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3561c();
  func_0x00010b2d34e8();
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  return;
}



/* Entry: 10b2d3524; end: 10b2d3537;  */

void FUN_10b2d3524(void)

{
  func_0x000107c2c514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d3538; end: 10b2d353f;  */

undefined8 FUN_10b2d3538(void)

{
  return 0xffffffff;
}



/* Entry: 10b2d3540; end: 10b2d3593;  */

long * FUN_10b2d3540(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c2c518(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2d3594; end: 10b2d35b7;  */

void FUN_10b2d3594(long param_1)

{
  if (*(char *)(param_1 + 0x120) == '\x01') {
    func_0x000107c2c03c();
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  return;
}



/* Entry: 10b2d35b8; end: 10b2d362b;  */

undefined8 * FUN_10b2d35b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd1910;
  func_0x00010bcceaec(param_1[0x22]);
  func_0x00010563d08c(param_1 + 0x22);
  FUN_10b2d3540(param_1 + 0x1c);
  FUN_10b2d3540(param_1 + 0x17);
  FUN_10b2d3540(param_1 + 0x12);
  FUN_10b2d3540(param_1 + 0xd);
  FUN_10b2d3540(param_1 + 8);
  FUN_10b2d3540(param_1 + 3);
  func_0x000107c27d08(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d362c; end: 10b2d362f;  */

void FUN_10b2d362c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d3630; end: 10b2d3643;  */

void FUN_10b2d3630(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d3644; end: 10b2d367b;  */

long FUN_10b2d3644(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cd1a48);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b2d367c; end: 10b2d36d7;  */

void FUN_10b2d367c(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 8) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  return;
}



/* Entry: 10b2d36d8; end: 10b2d372f; -[SCNNativeNetworkApiCancelIdCppProxy initWithCpp:] */

undefined1 * FUN_10b2d36d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127063c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000105300e54((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2d3730; end: 10b2d373f; -[SCNNativeNetworkApiCancelIdCppProxy cancel] */

void FUN_10b2d3730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b2d373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b2d3740; end: 10b2d383b;  */

void FUN_10b2d3740(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e01c8;
    _objc_opt_class(PTR_PTR_1126e01c8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110cd1ac8;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10b2d3940);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10b2d3b68(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10b2d3c74();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b2d383c; end: 10b2d38ab;  */

void FUN_10b2d383c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cd1a70,&PTR_DAT_110cd1a80,0);
    if (lVar1 == 0) {
      FUN_10b2d3b90(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b2d38ac; end: 10b2d38ff; -[SCNNativeNetworkApiCancelIdCppProxy .cxx_destruct] */

void FUN_10b2d38ac(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd1b98;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000105301d8c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d3900; end: 10b2d393f; -[SCNNativeNetworkApiCancelIdCppProxy .cxx_construct] */

undefined8 * FUN_10b2d3900(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b2d3c74();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b2d3940; end: 10b2d3a33;  */

void FUN_10b2d3940(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cd1b08;
  puVar1[3] = &PTR_DAT_110cd1b80;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10b2d3c74();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cd1b58;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b2d3b68(&uStack_50);
  return;
}



/* Entry: 10b2d3a34; end: 10b2d3a37;  */

void FUN_10b2d3a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1b08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d3a38; end: 10b2d3a4b;  */

void FUN_10b2d3a38(void)

{
  FUN_10b2d3b58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d3a4c; end: 10b2d3a57;  */

long FUN_10b2d3a4c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd1ac8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b2d3a58; end: 10b2d3ac3;  */

void FUN_10b2d3a58(void)

{
  func_0x00010b2d3ca0();
  return;
}



/* Entry: 10b2d3ac4; end: 10b2d3b57;  */

long FUN_10b2d3ac4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd1ac8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b2d3b58; end: 10b2d3b67;  */

void FUN_10b2d3b58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1b08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d3b68; end: 10b2d3b8f;  */

long FUN_10b2d3b68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b2d3b90; end: 10b2d3c03;  */

void FUN_10b2d3b90(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cd1b98;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b2d3c74();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b2d3c04);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d3cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d3c04; end: 10b2d3c73;  */

void FUN_10b2d3c04(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e01c8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b2d3c74();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000105301d8c(&uStack_30);
  return;
}



/* Entry: 10b2d3c74; end: 10b2d3cb7;  */

void FUN_10b2d3c74(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b2d3cb8; end: 10b2d3def;  */

void FUN_10b2d3cb8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  char cStack_58;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf98940();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28124();
  uVar2 = param_2;
  func_0x00010c069360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c28124();
  func_0x00010bf98d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_70);
  *param_1 = uVar1 & 0xffffffffff;
  param_1[1] = uVar3 & 0xffffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (cStack_58 == '\x01') {
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[4] = uStack_60;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x000107c279a4(&uStack_70);
  _objc_release(param_2);
  _objc_release(uVar2);
  func_0x00010b2d3df8();
  func_0x00010b2d3df0();
  return;
}



/* Entry: 10b2d3df0; end: 10b2d3dff;  */

void FUN_10b2d3df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b2d3e00; end: 10b2d3e77; -[SCNNativeNetworkApiNativeNetworkApiCppProxy initWithCpp:] */

undefined1 * FUN_10b2d3e00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127063c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c35634();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27f2c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2d3e78; end: 10b2d3fcf; -[SCNNativeNetworkApiNativeNetworkApiCppProxy submit:callbackExecutor:callback:uploadDataProvider:] */

void FUN_10b2d3e78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [104];
  undefined1 auStack_50 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b2d42cc(auStack_b8,param_3);
  func_0x000107c31310(auStack_c8,param_4);
  FUN_10b2d4670(auStack_d8,param_5);
  func_0x000107c2ffbc(auStack_e8,param_6);
  (**(code **)(*plVar1 + 0x10))(auStack_50,plVar1,auStack_b8,auStack_c8,auStack_d8,auStack_e8);
  func_0x000107c27f50(auStack_e8);
  func_0x000105302c94(auStack_d8);
  func_0x000107c27e70(auStack_c8);
  func_0x0001053018c4(auStack_b8);
  FUN_10b2d383c(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d42b4();
  func_0x00010b2d42ac();
  _objc_release(param_5);
  func_0x000107c35638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b2d3fd0; end: 10b2d402b; -[SCNNativeNetworkApiNativeNetworkApiCppProxy .cxx_destruct] */

void FUN_10b2d3fd0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd1cd0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f2c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d402c; end: 10b2d406b; -[SCNNativeNetworkApiNativeNetworkApiCppProxy .cxx_construct] */

undefined8 * FUN_10b2d402c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c35634();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b2d406c; end: 10b2d406f;  */

void FUN_10b2d406c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1c40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d4070; end: 10b2d4083;  */

void FUN_10b2d4070(void)

{
  FUN_10b2d429c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d4084; end: 10b2d408f;  */

long FUN_10b2d4084(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd1c00;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b2d42ac();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b2d4090; end: 10b2d40cb;  */

void FUN_10b2d4090(void)

{
  func_0x00010b2d42c0();
  return;
}



/* Entry: 10b2d40cc; end: 10b2d420b;  */

void FUN_10b2d40cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_10b2d440c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc0d04(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b2d46c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b49971c(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010b2d42ac();
  func_0x000107c35638();
  FUN_10b2d3740(param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b2d420c; end: 10b2d429b;  */

long FUN_10b2d420c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd1c00;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b2d42ac();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b2d429c; end: 10b2d42cb;  */

void FUN_10b2d429c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1c40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d42cc; end: 10b2d440b;  */

void FUN_10b2d42cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_58);
  uVar1 = param_2;
  func_0x00010bfe4ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2ff88(auStack_78);
  uVar2 = param_2;
  func_0x00010c136d60(param_2);
  func_0x00010c135080(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b2d4900(auStack_a0);
  func_0x00010530182c(param_1,auStack_58,auStack_78,uVar2,auStack_a0);
  func_0x000107c279a4(auStack_a0);
  _objc_release(param_2);
  func_0x000107c27f3c(auStack_78);
  _objc_release(uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010b2d44dc();
  func_0x00010b2d44d4();
  return;
}



/* Entry: 10b2d440c; end: 10b2d44d3;  */

void FUN_10b2d440c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126e01d8;
  _objc_alloc(PTR_PTR_1126e01d8);
  lVar3 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x18;
  func_0x000107c2ff8c(lVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x38);
  param_1 = param_1 + 0x40;
  FUN_10b2d49e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a040(puVar2,param_2,lVar3,lVar4,(long)iVar1,param_1);
  func_0x00010b2d44e4();
  func_0x00010b2d44dc();
  func_0x00010b2d44d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2d44d4; end: 10b2d44ef;  */

void FUN_10b2d44d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b2d44f0; end: 10b2d4567; -[SCNNativeNetworkApiNativeNetworkRequestCallback initWithCpp:] */

undefined1 * FUN_10b2d44f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127063d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b2d48c0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105302c94(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2d4568; end: 10b2d461b; -[SCNNativeNetworkApiNativeNetworkRequestCallback onSucceeded:responseInfo:] */

void FUN_10b2d4568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_a0 [96];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c281c4(auStack_40,param_3);
  FUN_10b2d4a5c(auStack_a0,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40,auStack_a0);
  func_0x00010b2d48d0();
  func_0x000107c27d78(auStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10b2d461c; end: 10b2d466f; -[SCNNativeNetworkApiNativeNetworkRequestCallback onFailed:] */

void FUN_10b2d461c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b2d4a5c(auStack_80,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_80);
  func_0x00010b2d48d0();
  return;
}



/* Entry: 10b2d4670; end: 10b2d46bf;  */

void FUN_10b2d4670(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_10b2d48c0();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2d46c0; end: 10b2d46eb;  */

void FUN_10b2d46c0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b2d47dc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d46ec; end: 10b2d473f; -[SCNNativeNetworkApiNativeNetworkRequestCallback .cxx_destruct] */

void FUN_10b2d46ec(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd1ce0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000105302c94((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d4740; end: 10b2d47db; -[SCNNativeNetworkApiNativeNetworkRequestCallback .cxx_construct] */

undefined8 * FUN_10b2d4740(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b2d48c0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b2d47dc; end: 10b2d484f;  */

void FUN_10b2d47dc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cd1ce0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b2d48c0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b2d4850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d48e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d4850; end: 10b2d48bf;  */

void FUN_10b2d4850(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e01e0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b2d48c0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000105302c94(&uStack_30);
  return;
}



/* Entry: 10b2d48c0; end: 10b2d48ff;  */

void FUN_10b2d48c0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b2d4900; end: 10b2d49df;  */

void FUN_10b2d4900(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c135a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_50);
  uVar2 = param_2;
  func_0x00010c243980();
  func_0x00010bf0dd40();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (cStack_38 == '\x01') {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(int *)(param_1 + 4) = (int)uVar2;
  *(int *)((long)param_1 + 0x24) = (int)param_2;
  func_0x000107c279a4(&uStack_50);
  _objc_release(uVar1);
  FUN_10b2d4a54();
  return;
}



/* Entry: 10b2d49e0; end: 10b2d4a53;  */

void FUN_10b2d49e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126e01e8;
  _objc_alloc(PTR_PTR_1126e01e8);
  lVar2 = param_1;
  func_0x000107c27f68(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f0e0(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x20),
                      (long)*(int *)(param_1 + 0x24));
  FUN_10b2d4a54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d4a54; end: 10b2d4a5b;  */

void FUN_10b2d4a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b2d4a5c; end: 10b2d4b93;  */

void FUN_10b2d4a5c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c261740(param_2);
  uVar2 = param_2;
  func_0x00010bfe4dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c28124();
  uVar4 = param_2;
  func_0x00010c13b8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2c524(auStack_68);
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b2d4b94(auStack_a0);
  FUN_10b2d4c44(param_1,uVar1,uVar3 & 0xffffffffff,auStack_68,auStack_a0);
  func_0x00010b2d47ac(auStack_a0);
  _objc_release(param_2);
  func_0x000107c27f3c(auStack_68);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x000107c35640();
  return;
}



/* Entry: 10b2d4b94; end: 10b2d4c43;  */

void FUN_10b2d4b94(undefined8 *param_1,long param_2)

{
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    FUN_10b2d3cb8(&uStack_50,param_2);
    *param_1 = CONCAT35(uStack_4b,uStack_50);
    *(ulong *)((long)param_1 + 5) = CONCAT53(uStack_48,uStack_4b);
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    if (cStack_28 == '\x01') {
      param_1[3] = uStack_38;
      param_1[2] = uStack_40;
      param_1[4] = uStack_30;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x000107c279a4(&uStack_40);
  }
  func_0x000107c35640();
  return;
}



/* Entry: 10b2d4c44; end: 10b2d4c97;  */

undefined1 *
FUN_10b2d4c44(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x18) = param_4[1];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_10b2d4c98(param_1 + 0x28,param_5);
  return param_1;
}



/* Entry: 10b2d4c98; end: 10b2d4cc7;  */

undefined1 * FUN_10b2d4c98(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_10b2d4cc8();
  return param_1;
}



/* Entry: 10b2d4cc8; end: 10b2d4d2f;  */

void FUN_10b2d4cc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar1 = *param_2;
    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    if (*(char *)(param_2 + 5) == '\x01') {
      uVar2 = param_2[3];
      uVar1 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar2;
      param_1[2] = uVar1;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[2] = 0;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    return;
  }
  return;
}



/* Entry: 10b2d4d30; end: 10b2d4d7f; -[SCNNetworkApiNetworkApi readMoreBytes:] */

void FUN_10b2d4d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000107c35678(param_1,param_3);
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 10b2d4d80; end: 10b2d4e07; -[SCNNetworkApiNetworkApi update:rankingSignals:] */

void FUN_10b2d4d80(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x00010b2d52a8();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000107c35684();
  func_0x000107c2ffd8();
  (**(code **)(*plVar1 + 0x20))(plVar1);
  func_0x000107c35648();
  return;
}



/* Entry: 10b2d4e08; end: 10b2d4e57; -[SCNNetworkApiNetworkApi cancel:] */

void FUN_10b2d4e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000107c35678(param_1,param_3);
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 10b2d4e58; end: 10b2d4ea7; -[SCNNetworkApiNetworkApi startNetLog] */

void FUN_10b2d4e58(void)

{
  long extraout_x8;
  
  func_0x000107c35678();
  (**(code **)(extraout_x8 + 0x30))();
  return;
}



/* Entry: 10b2d4ea8; end: 10b2d4ef3; -[SCNNetworkApiNetworkApi stopNetLog] */

void FUN_10b2d4ea8(void)

{
  long extraout_x8;
  
  func_0x000107c35678();
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10b2d4ef4; end: 10b2d4f7b; -[SCNNetworkApiNetworkApi getNetworkQueueState] */

void FUN_10b2d4ef4(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_38 [24];
  
  func_0x000107c35678();
  (**(code **)(extraout_x8 + 0x40))(auStack_38);
  puVar1 = auStack_38;
  FUN_10b4989d8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b2d5180(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d4f7c; end: 10b2d5003; -[SCNNetworkApiNetworkApi getNetLogPathList] */

void FUN_10b2d4f7c(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_38 [24];
  
  func_0x000107c35678();
  (**(code **)(extraout_x8 + 0x48))(auStack_38);
  puVar1 = auStack_38;
  func_0x000107c2824c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c278a8(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d5004; end: 10b2d5087; -[SCNNetworkApiNetworkApi removeNetworkQualityEstimatorListener:] */

void FUN_10b2d5004(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107c3564c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c35684();
  func_0x000107c2ffac();
  func_0x000107c3566c(*(undefined8 *)(*plVar1 + 0x58));
  func_0x000107c2c54c(auStack_40);
  func_0x000107c35648();
  return;
}



/* Entry: 10b2d5088; end: 10b2d512b; -[SCNNetworkApiNetworkApi getEstimatedThroughputBps:hostname:] */

long * FUN_10b2d5088(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_50 [32];
  
  func_0x00010b2d52a8();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000107c35684();
  func_0x000107c27f64();
  (**(code **)(*plVar1 + 0x60))(plVar1);
  func_0x000107c279a4(auStack_50);
  func_0x000107c35648();
  return plVar1;
}



/* Entry: 10b2d512c; end: 10b2d517f; -[SCNNetworkApiNetworkApi .cxx_destruct] */

void FUN_10b2d512c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd1cf0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c548((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d5180; end: 10b2d51ef;  */

undefined8 FUN_10b2d5180(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b2d51b4(&uStack_28);
  return param_1;
}



/* Entry: 10b2d51f0; end: 10b2d51f7;  */

void FUN_10b2d51f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xe8;
    func_0x00010b2d5230();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b2d51f8; end: 10b2d526b;  */

void FUN_10b2d51f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0xe8;
    func_0x00010b2d5230();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b2d526c; end: 10b2d52f7;  */

void FUN_10b2d526c(void)

{
  return;
}



/* Entry: 10b2d52f8; end: 10b2d536f; -[SCNNetworkGuestModeRegistry initWithCpp:] */

undefined1 * FUN_10b2d52f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127063e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b2d55f8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27c50(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2d5370; end: 10b2d543f; +[SCNNetworkGuestModeRegistry getInstance] */

void FUN_10b2d5370(void)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  func_0x000107c2c8ac(&lStack_48);
  if (lStack_48 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110cd1d00;
    lStack_38 = lStack_48;
    lStack_30 = lStack_40;
    if (lStack_40 != 0) {
      do {
        FUN_10b2d55f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(&ppuStack_28,&lStack_38,FUN_10b2d5588);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b2d5610();
  }
  func_0x000107c27c50(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b2d5440; end: 10b2d5497; -[SCNNetworkGuestModeRegistry setGuestModeEnabled] */

void FUN_10b2d5440(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b2d5498; end: 10b2d54ef; -[SCNNetworkGuestModeRegistry checkIfGuestModeEnabled] */

void FUN_10b2d5498(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10b2d54f0; end: 10b2d5543; -[SCNNetworkGuestModeRegistry .cxx_destruct] */

void FUN_10b2d54f0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd1d00;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27c50((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d5544; end: 10b2d5587; -[SCNNetworkGuestModeRegistry .cxx_construct] */

undefined8 * FUN_10b2d5544(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b2d55f8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b2d5588; end: 10b2d55f7;  */

void FUN_10b2d5588(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e01f0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b2d55f8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27c50(&uStack_30);
  return;
}



/* Entry: 10b2d55f8; end: 10b2d562f;  */

void FUN_10b2d55f8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}


