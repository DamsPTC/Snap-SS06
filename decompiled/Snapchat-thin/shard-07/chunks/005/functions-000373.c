/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056c90d4; end: 1056c913b; +[SCAuthUserSessionValidationRequest descriptor] */

void FUN_1056c90d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58330,
                        &PTR____CFConstantStringClassReference_110df6538,&PTR_DAT_1130f3248,
                        &PTR_s_refreshToken_1130f3260,3,0x20,0x1c);
    puRam00000001136bd708 = puVar1;
  }
  return;
}



/* Entry: 1056c913c; end: 1056c91f3;  */

void FUN_1056c913c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1108a8b00;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1056c91f4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1056c9478(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1056c91f4; end: 1056c92f3;  */

void FUN_1056c91f4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_1108a8b40;
  puVar4[3] = &PTR_DAT_1108a8bb8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_1108a8b90;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1056c9478(&uStack_50);
  return;
}



/* Entry: 1056c92f4; end: 1056c92f7;  */

void FUN_1056c92f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8b40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056c92f8; end: 1056c930b;  */

void FUN_1056c92f8(void)

{
  FUN_1056c9468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056c930c; end: 1056c9317;  */

long FUN_1056c930c(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108a8b00;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x0001056c94b0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1056c9318; end: 1056c9357;  */

void FUN_1056c9318(void)

{
  FUN_1056c94a4();
  return;
}



/* Entry: 1056c9358; end: 1056c93d7;  */

void FUN_1056c9358(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1056c9920(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0e60c0(uVar2);
  func_0x0001056c94b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1056c93d8; end: 1056c9467;  */

long FUN_1056c93d8(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108a8b00;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x0001056c94b0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1056c9468; end: 1056c9477;  */

void FUN_1056c9468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8b40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056c9478; end: 1056c94a3;  */

long FUN_1056c9478(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056c94a4; end: 1056c94b7;  */

long FUN_1056c94a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108a8b00;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x0001056c94b0();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1056c94b8; end: 1056c952f; -[SCNUserSessionValidationUserSessionValidationService initWithCpp:] */

undefined1 * FUN_1056c94b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e9ac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1056c98e0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1056c9890(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056c9530; end: 1056c968f; +[SCNUserSessionValidationUserSessionValidationService create:baseUrl:] */

void FUN_1056c9530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int extraout_w10;
  undefined ***pppuVar1;
  long lStack_68;
  long lStack_60;
  undefined **appuStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010b10d504(appuStack_50,param_3);
  func_0x0001000fbca4(&lStack_68,param_4);
  FUN_1056cb3b4(&lStack_40,appuStack_50,&lStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_68);
  func_0x0001052a9ef8(appuStack_50);
  if (lStack_40 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_50[0] = &PTR_DAT_1108a8bd0;
    lStack_68 = lStack_40;
    lStack_60 = lStack_38;
    if (lStack_38 != 0) {
      do {
        FUN_1056c98e0();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_50;
    func_0x00010015c218(pppuVar1,&lStack_68,FUN_1056c981c);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_68);
  }
  FUN_1056c9890(&lStack_40);
  func_0x0001056c98fc();
  func_0x0001056c9904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 1056c9690; end: 1056c9787; -[SCNUserSessionValidationUserSessionValidationService validate:listener:maxRetries:] */

void FUN_1056c9690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010029a6ec(auStack_48,param_3);
  FUN_1056c913c(auStack_58,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,auStack_58,param_5);
  func_0x0001056c98b8(auStack_58);
  func_0x000100100fec(auStack_48);
  func_0x0001056c98fc();
  func_0x0001056c9904();
  return;
}



/* Entry: 1056c9788; end: 1056c97db; -[SCNUserSessionValidationUserSessionValidationService .cxx_destruct] */

void FUN_1056c9788(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a8bd0;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1056c9890((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1056c97dc; end: 1056c981b; -[SCNUserSessionValidationUserSessionValidationService .cxx_construct] */

undefined8 * FUN_1056c97dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1056c98e0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1056c981c; end: 1056c988f;  */

void FUN_1056c981c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bd100;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1056c98e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1056c9890(&uStack_30);
  return;
}



/* Entry: 1056c9890; end: 1056c98df;  */

long FUN_1056c9890(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056c98e0; end: 1056c991f;  */

void FUN_1056c98e0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1056c9920; end: 1056c9993;  */

void FUN_1056c9920(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = PTR_PTR_1126bd108;
  _objc_alloc(PTR_PTR_1126bd108);
  uVar1 = *param_1;
  puVar3 = param_1 + 2;
  func_0x0001001011a4(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c400(puVar2,param_2,uVar1,puVar3,*(undefined8 *)(param_1 + 8));
  FUN_1056c9994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056c9994; end: 1056c999f;  */

void FUN_1056c9994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1056c99a0; end: 1056c9a5b; -[SCNUserSessionValidationValidationResponse initWithStatusCode:body:requestDurationMs:] */

undefined1 *
FUN_1056c99a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e9ad0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c9a5c; end: 1056c9a63; -[SCNUserSessionValidationValidationResponse statusCode] */

undefined4 FUN_1056c9a5c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1056c9a64; end: 1056c9a6b; -[SCNUserSessionValidationValidationResponse body] */

undefined8 FUN_1056c9a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056c9a6c; end: 1056c9a73; -[SCNUserSessionValidationValidationResponse requestDurationMs] */

undefined8 FUN_1056c9a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056c9a74; end: 1056c9a7f; -[SCNUserSessionValidationValidationResponse .cxx_destruct] */

void FUN_1056c9a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1056c9a80; end: 1056c9ac7;  */

undefined8 *
FUN_1056c9a80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_1108a8bf0;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1056c9f20(param_1 + 3,param_3);
  param_1[7] = param_4;
  return param_1;
}



/* Entry: 1056c9ac8; end: 1056c9bdb;  */

long * FUN_1056c9ac8(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long alStack_110 [9];
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  func_0x0001056ca254();
  uStack_48 = extraout_x8;
  if (*param_3 != 0) {
    func_0x0001056ca2d8();
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  lVar1 = *param_4;
  if (lVar1 != 0) {
    func_0x0001056ca2ec();
    (*extraout_x8_00)();
    if ((lVar1 != 0) && (param_2 != 0)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (&uStack_128,lVar1,param_2);
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x0001056ca1bc();
  func_0x0001056ca2d0(auStack_c8);
  func_0x0001056ca2a0();
  func_0x0001056ca268();
  func_0x0001056ca2f8(FUN_1056c9fbc);
  func_0x0001056ca03c();
  func_0x0001056ca2e4(*(undefined8 *)(*unaff_x19 + 0x10));
  func_0x0001056ca1ac();
  plVar2 = alStack_110;
  FUN_1056c9bdc();
  func_0x0001056ca2b0();
  func_0x0001056ca2b8();
  func_0x0001056ca298();
  func_0x0001056ca20c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056ca298();
    func_0x0001056ca240();
    func_0x0001056ca248();
    plVar3 = (long *)plVar2[3];
    if (plVar3 == plVar2) {
      lVar1 = 0x20;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return plVar2;
      }
      lVar1 = 0x28;
    }
    (**(code **)(*plVar3 + lVar1))();
    return plVar2;
  }
  return (long *)0x1;
}



/* Entry: 1056c9bdc; end: 1056c9bf7;  */

void FUN_1056c9bdc(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x0001056ca248();
  plVar1 = (long *)unaff_x19[3];
  if (plVar1 == unaff_x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 1056c9bf8; end: 1056c9d57;  */

long * FUN_1056c9bf8(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long alStack_110 [9];
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  func_0x0001056ca254();
  uStack_48 = extraout_x8;
  if (*param_3 != 0) {
    func_0x0001056ca2d8();
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uVar1 = (char)param_4[2] == '\x01';
  if ((((!(bool)uVar1) || (plVar2 = (long *)*param_4, plVar2 == (long *)0x0)) ||
      ((**(code **)(*plVar2 + 0x10))(), plVar2 == (long *)0x0)) || (lVar3 = *param_4, lVar3 == 0))
  goto LAB_1056c9cb8;
  func_0x0001056ca2ec();
  (*extraout_x8_00)();
  if (lVar3 == 0) goto LAB_1056c9cb8;
  plVar2 = (long *)*param_4;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
LAB_1056c9ca8:
    lVar3 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    lVar3 = *param_4;
    if (lVar3 == 0) goto LAB_1056c9ca8;
    func_0x0001056ca2ec();
    (*extraout_x8_01)();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
            (&uStack_128,plVar2,lVar3);
LAB_1056c9cb8:
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x0001056ca1bc();
  func_0x0001056ca2d0(auStack_c8);
  func_0x0001056ca2a0();
  func_0x0001056ca268();
  func_0x0001056ca2f8(FUN_1056ca078);
  FUN_1056ca0a8();
  func_0x0001056ca2e4(*(undefined8 *)(*unaff_x19 + 0x10));
  func_0x0001056ca1ac();
  plVar2 = alStack_110;
  FUN_1056c9d58();
  func_0x0001056ca2b0();
  func_0x0001056ca2b8();
  func_0x0001056ca298();
  func_0x0001056ca20c(uStack_48);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001056ca298();
  func_0x0001056ca240();
  func_0x0001056ca248();
  plVar4 = (long *)plVar2[3];
  if (plVar4 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) {
      return plVar2;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar4 + lVar3))();
  return plVar2;
}



/* Entry: 1056c9d58; end: 1056c9d73;  */

void FUN_1056c9d58(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x0001056ca248();
  plVar1 = (long *)unaff_x19[3];
  if (plVar1 == unaff_x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 1056c9d74; end: 1056c9eaf;  */

long * FUN_1056c9d74(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar2;
  long lVar3;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 auStack_100 [32];
  undefined4 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  code *pcStack_98;
  undefined1 auStack_90 [88];
  undefined8 uStack_38;
  
  func_0x0001056ca254();
  uStack_38 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar3 = *(long *)(unaff_x19 + 0x38);
  func_0x00010002b838(&lStack_140,"");
  uStack_110 = uStack_130;
  uStack_128 = 0;
  uStack_118 = uStack_138;
  lStack_120 = lStack_140;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lVar3 = (param_1 - lVar3) / 1000000;
  lStack_108 = lVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_140);
  func_0x0001056ca2d0(auStack_b8);
  plVar2 = *(long **)(unaff_x19 + 8);
  FUN_1056c9f20(auStack_100,auStack_b8);
  uStack_c8 = uStack_110;
  uStack_e0 = 0;
  uStack_d0 = uStack_118;
  lStack_d8 = lStack_120;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  pcStack_98 = FUN_1056ca0e4;
  lStack_c0 = lVar3;
  FUN_1056ca114(auStack_90,auStack_100);
  func_0x0001056ca2e4(*(undefined8 *)(*plVar2 + 0x10));
  func_0x0001056ca288();
  FUN_1056c9eb0(auStack_100);
  FUN_1056c9f78(auStack_b8);
  plVar2 = &lStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001056ca20c(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001056ca288();
  FUN_1056c9eb0(auStack_100);
  FUN_1056c9f78(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_120);
  func_0x0001056ca240();
  func_0x0001056ca248();
  plVar1 = (long *)plVar2[3];
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return plVar2;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar1 + lVar3))();
  return plVar2;
}



/* Entry: 1056c9eb0; end: 1056c9ecb;  */

void FUN_1056c9eb0(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x0001056ca248();
  plVar1 = (long *)unaff_x19[3];
  if (plVar1 == unaff_x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 1056c9ecc; end: 1056c9ecf;  */

undefined8 * FUN_1056c9ecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8bf0;
  FUN_1056c9f78(param_1 + 3);
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1056c9ed0; end: 1056c9ee3;  */

void FUN_1056c9ed0(void)

{
  FUN_1056c9ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056c9ee4; end: 1056c9f1f;  */

undefined8 * FUN_1056c9ee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8bf0;
  FUN_1056c9f78(param_1 + 3);
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1056c9f20; end: 1056c9f77;  */

long FUN_1056c9f20(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x0001056ca2ec(*(undefined8 *)(param_2 + 0x18));
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1056c9f78; end: 1056c9fbb;  */

long * FUN_1056c9f78(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1056c9fbc; end: 1056c9feb;  */

void FUN_1056c9fbc(void)

{
  func_0x0001056ca180();
  func_0x0001056ca234();
  func_0x0001056ca220();
  return;
}



/* Entry: 1056c9fec; end: 1056ca00b;  */

long * FUN_1056c9fec(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001056c9ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  if ((char)plVar1[5] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar1 + 1);
  }
  return plVar1;
}



/* Entry: 1056ca00c; end: 1056ca067;  */

long FUN_1056ca00c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  }
  return param_1;
}



/* Entry: 1056ca068; end: 1056ca077;  */

void FUN_1056ca068(long param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x0001056ca248(param_1 + 8);
  plVar1 = (long *)unaff_x19[3];
  if (plVar1 == unaff_x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 1056ca078; end: 1056ca0a7;  */

void FUN_1056ca078(void)

{
  func_0x0001056ca180();
  func_0x0001056ca234();
  func_0x0001056ca220();
  return;
}



/* Entry: 1056ca0a8; end: 1056ca0d3;  */

void FUN_1056ca0a8(void)

{
  func_0x0001056ca2c0(&PTR_FUN_1108a8c48);
  func_0x0001056ca150();
  return;
}



/* Entry: 1056ca0d4; end: 1056ca0e3;  */

void FUN_1056ca0d4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x0001056ca248(param_1 + 8);
  plVar1 = (long *)unaff_x19[3];
  if (plVar1 == unaff_x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 1056ca0e4; end: 1056ca113;  */

void FUN_1056ca0e4(void)

{
  func_0x0001056ca180();
  func_0x0001056ca234();
  func_0x0001056ca220();
  return;
}



/* Entry: 1056ca114; end: 1056ca13f;  */

void FUN_1056ca114(void)

{
  func_0x0001056ca2c0(&PTR_FUN_1108a8c60);
  func_0x0001056ca150();
  return;
}



/* Entry: 1056ca140; end: 1056ca30b;  */

void FUN_1056ca140(long param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x0001056ca248(param_1 + 8);
  plVar1 = (long *)unaff_x19[3];
  if (plVar1 == unaff_x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 1056ca30c; end: 1056ca457;  */

void FUN_1056ca30c(long param_1,long *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong *puVar14;
  undefined8 **ppuVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  ulong *extraout_x11;
  ulong *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auStack_360 [16];
  undefined1 uStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined1 auStack_328 [24];
  undefined1 uStack_310;
  undefined1 auStack_308 [24];
  undefined1 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 uStack_258;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 auStack_230 [32];
  long lStack_210;
  int iStack_208;
  int iStack_204;
  long alStack_1f8 [3];
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_168;
  long alStack_158 [3];
  long *plStack_140;
  undefined8 uStack_138;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long alStack_68 [4];
  undefined8 uStack_48;
  
  plVar11 = &lStack_c0;
  lVar8 = param_1;
  func_0x0001056cb370();
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = *(ulong *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001056cb338();
    } while (extraout_w10 != 0);
  }
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = *(ulong *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x0001056cb338();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_a8,param_1 + 0x28);
  lStack_b8 = param_2[1];
  lStack_c0 = *param_2;
  lStack_b0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1056c9f20(alStack_68,param_3);
  puVar14 = &uStack_90;
  puVar16 = auStack_a8;
  plVar20 = alStack_68;
  iVar13 = 1;
  FUN_1056ca458(&uStack_80,puVar14,puVar16);
  FUN_1056c9f78(alStack_68);
  func_0x000100100fec(&lStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x000100450be4(&uStack_90);
  func_0x0001052a9ef8();
  func_0x0001056cb348(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1056c9f78(alStack_68);
  func_0x000100100fec(&lStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x000100450be4(&uStack_90);
  puVar9 = &uStack_80;
  func_0x0001052a9ef8();
  func_0x0001056cb380();
  plVar17 = plVar11;
  func_0x0001056cb370();
  uStack_138 = extraout_x8_00;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (&uStack_298,*plVar17,plVar17[1] - *plVar17);
  puVar10 = (undefined8 *)0x50;
  __Znwm();
  plVar17 = puVar10 + 1;
  *plVar17 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_1108a8ce8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_1d8,puVar16);
  uVar6 = uStack_288;
  uVar5 = uStack_290;
  uVar4 = uStack_298;
  puVar21 = puVar10 + 3;
  *puVar21 = &PTR_DAT_1108a8d38;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_298 = 0;
  puVar10[5] = uStack_1d0;
  puVar10[4] = uStack_1d8;
  puVar10[6] = uStack_1c8;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puVar10[8] = uVar5;
  puVar10[7] = uVar4;
  puVar10[9] = uVar6;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_280 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_280);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1d8);
  plStack_1e0 = (long *)0x0;
  uVar7 = iVar13 == param_4;
  puStack_2a8 = puVar21;
  puStack_2a0 = puVar10;
  if (iVar13 < param_4) {
    uStack_278 = puVar9[1];
    uStack_280 = *puVar9;
    if (puVar9[1] != 0) {
      do {
        func_0x0001056cb338();
      } while (extraout_w10_01 != 0);
    }
    puVar18 = &uStack_280;
    uStack_268 = puVar14[1];
    uStack_270 = *puVar14;
    if (puVar14[1] != 0) {
      do {
        func_0x0001056cb338();
        puVar18 = extraout_x11;
      } while (extraout_w10_02 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar18 + 4,puVar16);
    lStack_240 = plVar11[1];
    lStack_248 = *plVar11;
    lStack_238 = plVar11[2];
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = 0;
    FUN_1056c9f20(auStack_230,plVar20);
    lStack_210 = lVar8;
    iStack_208 = param_4;
    iStack_204 = iVar13;
    func_0x0001056cae64(&uStack_1d8,&uStack_280);
    plVar11 = (long *)0x88;
    __Znwm();
    *plVar11 = (long)&PTR_SUB_1108a8e98;
    func_0x0001056cae64(plVar11 + 1,&uStack_1d8);
    uVar7 = plStack_1e0 == alStack_1f8;
    if ((bool)uVar7) {
      plStack_140 = plVar11;
      (**(code **)(*plStack_1e0 + 0x18))(plStack_1e0,alStack_158);
      (**(code **)(*plStack_1e0 + 0x20))();
      plStack_1e0 = plStack_140;
      plStack_140 = alStack_158;
    }
    else {
      plStack_140 = plStack_1e0;
      plStack_1e0 = plVar11;
    }
    FUN_1056c9f78(alStack_158);
    FUN_1056ca978(&uStack_1d8);
    FUN_1056ca978(&uStack_280);
  }
  else {
    plVar11 = (long *)plVar20[3];
    if (plVar11 != (long *)0x0) {
      uVar7 = plVar11 == plVar20;
      if ((bool)uVar7) {
        plStack_1e0 = alStack_1f8;
        (**(code **)(*plVar11 + 0x18))(plVar11,alStack_1f8);
      }
      else {
        plStack_1e0 = plVar11;
        plVar20[3] = 0;
      }
    }
  }
  uVar19 = puVar14[1];
  uVar23 = puVar14[1];
  uVar22 = *puVar14;
  puVar12 = (undefined8 *)0x58;
  __Znwm();
  plVar11 = puVar12 + 1;
  *plVar11 = 0;
  puVar12[2] = 0;
  *puVar12 = &PTR_DAT_1108a8f28;
  uStack_280 = uVar22;
  uStack_278 = uVar23;
  if (uVar19 != 0) {
    do {
      func_0x0001056cb338();
    } while (extraout_w10_03 != 0);
  }
  puVar1 = puVar12 + 3;
  FUN_1056c9f20(&uStack_1d8,alStack_1f8);
  FUN_1056c9a80(puVar1,&uStack_280,&uStack_1d8,lVar8);
  FUN_1056c9f78(&uStack_1d8);
  func_0x000100450be4(&uStack_280);
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2e8 = 0;
  auStack_308[0] = 0;
  uStack_2f0 = 0;
  auStack_328[0] = 0;
  uStack_310 = 0;
  uStack_1d8 = CONCAT35(uStack_1d8._5_3_,5);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,4);
  uStack_1c8 = 500;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  puStack_2b8 = puVar1;
  puStack_2b0 = puVar12;
  func_0x0001001148fc(auStack_328);
  func_0x0001001148fc(auStack_308);
  func_0x0001000e30f4(&uStack_2d0);
  func_0x0001000e30f4(&uStack_2e8);
  plVar20 = (long *)*puVar9;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_338 = puVar21;
  puStack_330 = puVar10;
  func_0x000100060b18(alStack_158,&PTR_DAT_1108a8ca0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_280 = uStack_280 & 0xffffffffffffff00;
  uStack_258 = 0;
  auStack_360[0] = 0;
  uStack_350 = 0;
  ppuVar15 = &puStack_338;
  puStack_348 = puVar1;
  puStack_340 = puVar12;
  (**(code **)(*plVar20 + 0x10))
            (plVar20,ppuVar15,alStack_158,&puStack_348,&uStack_1d8,&uStack_280,0,auStack_360);
  iVar13 = (int)ppuVar15;
  FUN_1052b818c(auStack_360);
  func_0x00010062706c(&uStack_280);
  FUN_1052b81ac(&puStack_348);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_158);
  FUN_1052ac684(&puStack_338);
  func_0x00010529fe04(&uStack_1d8);
  FUN_1056cb310(&puStack_2b8);
  FUN_1056c9f78(alStack_1f8);
  func_0x0001056cae3c(&puStack_2a8);
  puVar10 = &uStack_298;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
  func_0x0001056cb348(uStack_138);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    if (iVar13 != 0) {
      func_0x000104bd46a0(puVar10);
      FUN_1056ca978(&uStack_1d8);
      FUN_1056ca978(&uStack_280);
      FUN_1056c9f78(alStack_1f8);
      func_0x0001056cae3c(&puStack_2a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_298);
    }
    do {
      __Unwind_Resume(puVar10);
    } while( true );
  }
  return;
}



/* Entry: 1056ca458; end: 1056ca977;  */

void FUN_1056ca458(ulong *param_1,ulong *param_2,undefined8 param_3,long *param_4,long *param_5,
                  undefined8 param_6,int param_7,int param_8)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong *extraout_x11;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_2a0 [16];
  undefined1 uStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined1 auStack_268 [24];
  undefined1 uStack_250;
  undefined1 auStack_248 [24];
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 uStack_198;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [32];
  undefined8 uStack_150;
  int iStack_148;
  int iStack_144;
  long alStack_138 [3];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_a8;
  long alStack_98 [3];
  long *plStack_80;
  undefined8 uStack_78;
  
  plVar13 = param_4;
  func_0x0001056cb370();
  uStack_78 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (&uStack_1d8,*plVar13,plVar13[1] - *plVar13);
  puVar8 = (undefined8 *)0x50;
  __Znwm();
  plVar13 = puVar8 + 1;
  *plVar13 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_1108a8ce8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_118,param_3);
  uVar6 = uStack_1c8;
  uVar5 = uStack_1d0;
  uVar4 = uStack_1d8;
  puVar17 = puVar8 + 3;
  *puVar17 = &PTR_DAT_1108a8d38;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1d8 = 0;
  puVar8[5] = uStack_110;
  puVar8[4] = uStack_118;
  puVar8[6] = uStack_108;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  puVar8[8] = uVar5;
  puVar8[7] = uVar4;
  puVar8[9] = uVar6;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
  plStack_120 = (long *)0x0;
  uVar7 = param_8 == param_7;
  puStack_1e8 = puVar17;
  puStack_1e0 = puVar8;
  if (param_8 < param_7) {
    uStack_1b8 = param_1[1];
    uStack_1c0 = *param_1;
    if (param_1[1] != 0) {
      do {
        func_0x0001056cb338();
      } while (extraout_w10 != 0);
    }
    puVar14 = &uStack_1c0;
    uStack_1a8 = param_2[1];
    uStack_1b0 = *param_2;
    if (param_2[1] != 0) {
      do {
        func_0x0001056cb338();
        puVar14 = extraout_x11;
      } while (extraout_w10_00 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar14 + 4,param_3);
    lStack_180 = param_4[1];
    lStack_188 = *param_4;
    lStack_178 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    FUN_1056c9f20(auStack_170,param_5);
    uStack_150 = param_6;
    iStack_148 = param_7;
    iStack_144 = param_8;
    func_0x0001056cae64(&uStack_118,&uStack_1c0);
    plVar9 = (long *)0x88;
    __Znwm();
    *plVar9 = (long)&PTR_SUB_1108a8e98;
    func_0x0001056cae64(plVar9 + 1,&uStack_118);
    uVar7 = plStack_120 == alStack_138;
    if ((bool)uVar7) {
      plStack_80 = plVar9;
      (**(code **)(*plStack_120 + 0x18))(plStack_120,alStack_98);
      (**(code **)(*plStack_120 + 0x20))();
      plStack_120 = plStack_80;
      plStack_80 = alStack_98;
    }
    else {
      plStack_80 = plStack_120;
      plStack_120 = plVar9;
    }
    FUN_1056c9f78(alStack_98);
    FUN_1056ca978(&uStack_118);
    FUN_1056ca978(&uStack_1c0);
  }
  else {
    plVar9 = (long *)param_5[3];
    if (plVar9 != (long *)0x0) {
      uVar7 = plVar9 == param_5;
      if ((bool)uVar7) {
        plStack_120 = alStack_138;
        (**(code **)(*plVar9 + 0x18))(plVar9,alStack_138);
      }
      else {
        param_5[3] = 0;
        plStack_120 = plVar9;
      }
    }
  }
  uVar15 = param_2[1];
  uVar19 = param_2[1];
  uVar18 = *param_2;
  puVar10 = (undefined8 *)0x58;
  __Znwm();
  plVar9 = puVar10 + 1;
  *plVar9 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_DAT_1108a8f28;
  uStack_1c0 = uVar18;
  uStack_1b8 = uVar19;
  if (uVar15 != 0) {
    do {
      func_0x0001056cb338();
    } while (extraout_w10_01 != 0);
  }
  puVar1 = puVar10 + 3;
  FUN_1056c9f20(&uStack_118,alStack_138);
  FUN_1056c9a80(puVar1,&uStack_1c0,&uStack_118,param_6);
  FUN_1056c9f78(&uStack_118);
  func_0x000100450be4(&uStack_1c0);
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_228 = 0;
  auStack_248[0] = 0;
  uStack_230 = 0;
  auStack_268[0] = 0;
  uStack_250 = 0;
  uStack_118 = CONCAT35(uStack_118._5_3_,5);
  uStack_110 = CONCAT44(uStack_110._4_4_,4);
  uStack_108 = 500;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  puStack_1f8 = puVar1;
  puStack_1f0 = puVar10;
  func_0x0001001148fc(auStack_268);
  func_0x0001001148fc(auStack_248);
  func_0x0001000e30f4(&uStack_210);
  func_0x0001000e30f4(&uStack_228);
  plVar16 = (long *)*param_1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_278 = puVar17;
  puStack_270 = puVar8;
  func_0x000100060b18(alStack_98,&PTR_DAT_1108a8ca0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
  uStack_198 = 0;
  auStack_2a0[0] = 0;
  uStack_290 = 0;
  ppuVar12 = &puStack_278;
  puStack_288 = puVar1;
  puStack_280 = puVar10;
  (**(code **)(*plVar16 + 0x10))
            (plVar16,ppuVar12,alStack_98,&puStack_288,&uStack_118,&uStack_1c0,0,auStack_2a0);
  iVar11 = (int)ppuVar12;
  FUN_1052b818c(auStack_2a0);
  func_0x00010062706c(&uStack_1c0);
  FUN_1052b81ac(&puStack_288);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_98);
  FUN_1052ac684(&puStack_278);
  func_0x00010529fe04(&uStack_118);
  FUN_1056cb310(&puStack_1f8);
  FUN_1056c9f78(alStack_138);
  func_0x0001056cae3c(&puStack_1e8);
  puVar8 = &uStack_1d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
  func_0x0001056cb348(uStack_78);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    if (iVar11 != 0) {
      func_0x000104bd46a0(puVar8);
      FUN_1056ca978(&uStack_118);
      FUN_1056ca978(&uStack_1c0);
      FUN_1056c9f78(alStack_138);
      func_0x0001056cae3c(&puStack_1e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1d8);
    }
    do {
      __Unwind_Resume(puVar8);
    } while( true );
  }
  return;
}



/* Entry: 1056ca978; end: 1056ca9b7;  */

long FUN_1056ca978(long param_1)

{
  FUN_1056c9f78(param_1 + 0x50);
  func_0x000100100fec(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x000100450be4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056ca9b8; end: 1056ca9bb;  */

undefined8 * FUN_1056ca9b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8c88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  func_0x000100450be4(param_1 + 3);
  func_0x0001052a9ef8(param_1 + 1);
  return param_1;
}



/* Entry: 1056ca9bc; end: 1056ca9cf;  */

void FUN_1056ca9bc(void)

{
  FUN_1056ca9d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056ca9d0; end: 1056caa13;  */

undefined8 * FUN_1056ca9d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8c88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  func_0x000100450be4(param_1 + 3);
  func_0x0001052a9ef8(param_1 + 1);
  return param_1;
}



/* Entry: 1056caa14; end: 1056caa17;  */

void FUN_1056caa14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8ce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056caa18; end: 1056caa2b;  */

void FUN_1056caa18(void)

{
  func_0x0001056cae30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056caa2c; end: 1056caa37;  */

void FUN_1056caa2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056cb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1056caa38; end: 1056caa4b;  */

void FUN_1056caa38(void)

{
  FUN_1056cacfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056caa4c; end: 1056caaa3;  */

void FUN_1056caa4c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000100060b18(auStack_38,&PTR_DAT_1108a8dd8);
  func_0x0001056cad38(param_1,param_2 + 8,auStack_38);
  func_0x0001056cb390();
  return;
}



/* Entry: 1056caaa4; end: 1056caab3;  */

undefined8 FUN_1056caaa4(void)

{
  return 0;
}



/* Entry: 1056caab4; end: 1056cab67;  */

void FUN_1056caab4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x0001056cb370();
  uStack_28 = extraout_x8;
  func_0x00010002b838(auStack_58,"Content-Type");
  func_0x00010002b838(auStack_40,"application/x-protobuf");
  func_0x000104bd4884(auStack_80,auStack_58,1);
  func_0x000100626ea4(param_1,auStack_80);
  func_0x00010028ad98(auStack_80);
  func_0x0001002aa0bc();
  func_0x0001056cb348(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = auStack_58;
  func_0x0001002aa0bc(puVar1);
  func_0x0001056cb380();
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_1108a8df8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_c8,puVar1 + 0x20)
  ;
  puVar2[3] = &PTR_DAT_1108a8e48;
  puVar2[5] = uStack_c0;
  puVar2[4] = uStack_c8;
  puVar2[6] = uStack_b8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x0001056cb390();
  *extraout_x8_00 = puVar2 + 3;
  extraout_x8_00[1] = puVar2;
  return;
}



/* Entry: 1056cab68; end: 1056cac07;  */

void FUN_1056cab68(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1108a8df8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_48,param_2 + 0x20);
  puVar1[3] = &PTR_DAT_1108a8e48;
  puVar1[5] = uStack_40;
  puVar1[4] = uStack_48;
  puVar1[6] = uStack_38;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001056cb390();
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1056cac08; end: 1056cac63;  */

void FUN_1056cac08(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = (long)*(char *)(param_2 + 0x37);
  if (lVar2 < 0) {
    lVar1 = *(long *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar1 = param_2 + 0x20;
  }
  func_0x00010bd48000(&uStack_30,lVar1,lVar2);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x0001000ff1ac(&uStack_30);
  return;
}



/* Entry: 1056cac64; end: 1056cac8b;  */

void FUN_1056cac64(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1056cac8c; end: 1056cacf3;  */

void FUN_1056cac8c(undefined8 param_1)

{
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  undefined1 auStack_30 [24];
  undefined1 uStack_18;
  
  auStack_30[0] = 0;
  uStack_18 = 0;
  auStack_50[0] = 0;
  uStack_38 = 0;
  auStack_70[0] = 0;
  uStack_58 = 0;
  FUN_1052b933c(param_1,auStack_30,auStack_50,auStack_70,0,0,0);
  func_0x0001001148fc(auStack_70);
  func_0x0001001148fc(auStack_50);
  func_0x0001001148fc(auStack_30);
  return;
}



/* Entry: 1056cacf4; end: 1056cacfb;  */

void FUN_1056cacf4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1056cacfc; end: 1056cad7b;  */

undefined8 * FUN_1056cacfc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a8d38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1056cad7c; end: 1056cad9b;  */

void FUN_1056cad7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm_1103462e0)
            (param_1,param_2,puVar2,uVar1);
  return;
}



/* Entry: 1056cad9c; end: 1056cadaf;  */

void FUN_1056cad9c(void)

{
  FUN_1056cae24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cadb0; end: 1056cadbb;  */

void FUN_1056cadb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056cb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1056cadbc; end: 1056cadcf;  */

void FUN_1056cadbc(void)

{
  FUN_1056cadf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cadd0; end: 1056cadf7;  */

undefined8 FUN_1056cadd0(void)

{
  return 1;
}



/* Entry: 1056cadf8; end: 1056cae23;  */

undefined8 * FUN_1056cadf8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a8e48;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1056cae24; end: 1056cae3b;  */

void FUN_1056cae24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a8df8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056cae3c; end: 1056caf13;  */

long FUN_1056cae3c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056caf14; end: 1056caf27;  */

void FUN_1056caf14(void)

{
  func_0x0001056caee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056caf28; end: 1056caf6b;  */

undefined8 FUN_1056caf28(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  __Znwm(0x88);
  FUN_1056cb164();
  return uVar1;
}



/* Entry: 1056caf6c; end: 1056caf97;  */

undefined8 * FUN_1056caf6c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  *param_2 = &PTR_SUB_1108a8e98;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1056cb338();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1056cb338();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 5,param_1 + 0x28);
  func_0x00010054f8dc(param_2 + 8,param_1 + 0x40);
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 != (long *)0x0) {
    if (plVar1 == (long *)(param_1 + 0x58)) {
      param_2[0xe] = param_2 + 0xb;
      (**(code **)(**(long **)(param_1 + 0x70) + 0x18))();
      goto LAB_1056cb220;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  param_2[0xe] = plVar1;
LAB_1056cb220:
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  param_2[0x10] = *(undefined8 *)(param_1 + 0x80);
  param_2[0xf] = uVar3;
  return param_2;
}



/* Entry: 1056caf98; end: 1056cb11f;  */

int * FUN_1056caf98(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int aiStack_e0 [10];
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_58 [6];
  undefined8 uStack_28;
  
  piVar3 = aiStack_e0;
  piVar4 = aiStack_e0;
  func_0x0001056cb370();
  uStack_28 = extraout_x8;
  FUN_1056cb278(aiStack_e0);
  uVar2 = cStack_b8 == '\x01' && aiStack_e0[0] == 0;
  if ((bool)uVar2) {
    uStack_68 = *(undefined8 *)(param_1 + 0x10);
    uStack_70 = *(undefined8 *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        func_0x0001056cb338();
      } while (extraout_w10 != 0);
    }
    uStack_78 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = *(undefined8 *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) != 0) {
      do {
        func_0x0001056cb338();
      } while (extraout_w10_00 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_98,param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x48);
    uStack_b0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_1056c9f20(auStack_58,param_1 + 0x58);
    puVar5 = &uStack_80;
    FUN_1056ca458(&uStack_70,puVar5,auStack_98,&uStack_b0,auStack_58,*(undefined8 *)(param_1 + 0x78)
                  ,*(undefined4 *)(param_1 + 0x80),*(int *)(param_1 + 0x84) + 1);
    FUN_1056c9f78(auStack_58);
    func_0x000100100fec(&uStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x000100450be4(&uStack_80);
    func_0x0001052a9ef8(&uStack_70);
  }
  else {
    FUN_1056cb278(auStack_58,aiStack_e0);
    puVar5 = auStack_58;
    FUN_1056c9fec(param_1 + 0x58);
    FUN_1056ca00c(auStack_58);
  }
  FUN_1056ca00c();
  func_0x0001056cb348(uStack_28);
  if ((bool)uVar2) {
    return piVar3;
  }
  ___stack_chk_fail();
  FUN_1056c9f78(auStack_58);
  func_0x000100100fec(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000100450be4(&uStack_80);
  func_0x0001052a9ef8(&uStack_70);
  FUN_1056ca00c(aiStack_e0);
  func_0x0001056cb380();
  func_0x0001004a5364(puVar5,&PTR_DAT_1108a8f08);
  puVar1 = (undefined1 *)((long)piVar4 + 8);
  if ((int)puVar5 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return (int *)puVar1;
}



/* Entry: 1056cb120; end: 1056cb157;  */

long FUN_1056cb120(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a8f08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1056cb158; end: 1056cb163;  */

undefined ** FUN_1056cb158(void)

{
  return &PTR_DAT_1108a8f08;
}



/* Entry: 1056cb164; end: 1056cb277;  */

undefined8 * FUN_1056cb164(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  *param_1 = &PTR_SUB_1108a8e98;
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1056cb338();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1056cb338();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 5,param_2 + 4);
  func_0x00010054f8dc(param_1 + 8,param_2 + 7);
  plVar1 = (long *)param_2[0xd];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2 + 10) {
      param_1[0xe] = param_1 + 0xb;
      (**(code **)(*(long *)param_2[0xd] + 0x18))();
      goto LAB_1056cb220;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  param_1[0xe] = plVar1;
LAB_1056cb220:
  uVar3 = param_2[0xe];
  param_1[0x10] = param_2[0xf];
  param_1[0xf] = uVar3;
  return param_1;
}



/* Entry: 1056cb278; end: 1056cb2a3;  */

undefined1 * FUN_1056cb278(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_1056cb2a4();
  return param_1;
}



/* Entry: 1056cb2a4; end: 1056cb2e7;  */

void FUN_1056cb2a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_1 = *param_2;
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}



/* Entry: 1056cb2e8; end: 1056cb2fb;  */

void FUN_1056cb2e8(void)

{
  func_0x0001056cb304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cb2fc; end: 1056cb30f;  */

void FUN_1056cb2fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056cb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1056cb310; end: 1056cb337;  */

long FUN_1056cb310(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056cb338; end: 1056cb3b3;  */

void FUN_1056cb338(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1056cb3b4; end: 1056cb45b;  */

void FUN_1056cb3b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_40 [16];
  
  func_0x00010002b838(&uStack_60,&UNK_10f2e8866);
  func_0x00010044fc54(auStack_40,&uStack_60,0,4,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  FUN_1056cb45c(&uStack_60,param_2,auStack_40,param_3);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_1056cb864(&uStack_60);
  func_0x0001056cba08();
  return;
}



/* Entry: 1056cb45c; end: 1056cb487;  */

void FUN_1056cb45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1056cb5cc(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1056cb488; end: 1056cb587;  */

undefined8 * FUN_1056cb488(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [3];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010054f8dc(auStack_70);
  uStack_80 = *param_3;
  lStack_78 = param_3[1];
  if (lStack_78 == 0) {
    lStack_48 = 0;
  }
  else {
    plVar1 = (long *)(lStack_78 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lStack_48 = lStack_78;
    } while (cVar2 != '\0');
  }
  pppuStack_40 = &ppuStack_58;
  ppuStack_58 = &PTR_SUB_1108a9018;
  uStack_50 = uStack_80;
  FUN_1056ca30c(param_1 + 8,auStack_70,&ppuStack_58,param_4);
  FUN_1056c9f78(&ppuStack_58);
  func_0x0001056c98b8(&uStack_80);
  puVar4 = auStack_70;
  func_0x000100100fec();
  func_0x0001056cba2c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1056c9f78(&ppuStack_58);
    func_0x0001056c98b8(&uStack_80);
    puVar4 = auStack_70;
    func_0x000100100fec();
    func_0x0001056cba00();
    *puVar4 = &PTR_FUN_1108a8f78;
    FUN_1056ca9d0(puVar4 + 1);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1056cb588; end: 1056cb58b;  */

undefined8 * FUN_1056cb588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8f78;
  FUN_1056ca9d0(param_1 + 1);
  return param_1;
}



/* Entry: 1056cb58c; end: 1056cb59f;  */

void FUN_1056cb58c(void)

{
  FUN_1056cb5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cb5a0; end: 1056cb5cb;  */

undefined8 * FUN_1056cb5a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8f78;
  FUN_1056ca9d0(param_1 + 1);
  return param_1;
}



/* Entry: 1056cb5cc; end: 1056cb66f;  */

undefined1 *
FUN_1056cb5cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1056cb670(auStack_50,1);
  FUN_1056cb6c4(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001056cb854();
  func_0x0001056cba2c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001056cba20();
  func_0x0001056cb854();
  func_0x0001056cba00();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_1056cb698();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1056cb670; end: 1056cb697;  */

long FUN_1056cb670(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1056cb698();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1056cb698; end: 1056cb6c3;  */

undefined8 * FUN_1056cb698(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a8fc8;
  FUN_1056cb730(param_1 + 3);
  return param_1;
}



/* Entry: 1056cb6c4; end: 1056cb707;  */

undefined8 * FUN_1056cb6c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a8fc8;
  FUN_1056cb730(param_1 + 3);
  return param_1;
}



/* Entry: 1056cb708; end: 1056cb70b;  */

void FUN_1056cb708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


