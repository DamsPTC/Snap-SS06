/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10538b31c; end: 10538b32f;  */

void FUN_10538b31c(void)

{
  FUN_10538b580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538b330; end: 10538b33b;  */

long FUN_10538b330(long param_1)

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
    ppuStack_38 = &PTR_DAT_11087ef88;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10538b33c; end: 10538b37b;  */

void FUN_10538b33c(void)

{
  func_0x00010538b5ec();
  return;
}



/* Entry: 10538b37c; end: 10538b437;  */

void FUN_10538b37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7df8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc2940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010538b5e4();
  func_0x00010538b5bc();
  func_0x00010538b5f8();
  func_0x00010538b5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10538b438; end: 10538b4eb;  */

void FUN_10538b438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100101220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfca540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010538b5e4();
  func_0x00010538b5bc();
  func_0x00010538b5f8();
  func_0x00010538b5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10538b4ec; end: 10538b57f;  */

long FUN_10538b4ec(long param_1)

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
    ppuStack_38 = &PTR_DAT_11087ef88;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10538b580; end: 10538b58f;  */

void FUN_10538b580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087efc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538b590; end: 10538b5bb;  */

long FUN_10538b590(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10538b5bc; end: 10538b603;  */

void FUN_10538b5bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10538b604; end: 10538b713; -[SCNClientAttestationArgosEvent initWithMode:path:returnedHeader:latencyMs:requestId:tokenInCache:argosTokenType:signatureLatencyMs:] */

undefined1 *
FUN_10538b604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e7c98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10538b714; end: 10538b71b; -[SCNClientAttestationArgosEvent mode] */

undefined8 FUN_10538b714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10538b71c; end: 10538b723; -[SCNClientAttestationArgosEvent path] */

undefined8 FUN_10538b71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10538b724; end: 10538b72b; -[SCNClientAttestationArgosEvent returnedHeader] */

undefined8 FUN_10538b724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10538b72c; end: 10538b733; -[SCNClientAttestationArgosEvent latencyMs] */

undefined8 FUN_10538b72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10538b734; end: 10538b73b; -[SCNClientAttestationArgosEvent requestId] */

undefined8 FUN_10538b734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10538b73c; end: 10538b743; -[SCNClientAttestationArgosEvent tokenInCache] */

undefined1 FUN_10538b73c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10538b744; end: 10538b74b; -[SCNClientAttestationArgosEvent argosTokenType] */

undefined8 FUN_10538b744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10538b74c; end: 10538b753; -[SCNClientAttestationArgosEvent signatureLatencyMs] */

undefined8 FUN_10538b74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10538b754; end: 10538b783; -[SCNClientAttestationArgosEvent .cxx_destruct] */

void FUN_10538b754(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10538b784; end: 10538b7e7; -[SCNClientAttestationArgosTokenRefreshEvent initWithIsSuccessful:reason:latencyMs:payloadGenerationLatencyMs:] */

void FUN_10538b784(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7ca0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 10538b7e8; end: 10538b7ef; -[SCNClientAttestationArgosTokenRefreshEvent isSuccessful] */

undefined1 FUN_10538b7e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10538b7f0; end: 10538b7f7; -[SCNClientAttestationArgosTokenRefreshEvent reason] */

undefined8 FUN_10538b7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10538b7f8; end: 10538b7ff; -[SCNClientAttestationArgosTokenRefreshEvent latencyMs] */

undefined8 FUN_10538b7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10538b800; end: 10538b807; -[SCNClientAttestationArgosTokenRefreshEvent payloadGenerationLatencyMs] */

undefined8 FUN_10538b800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10538b808; end: 10538b8db; -[SCNClientAttestationConfiguration initWithGrpcParameters:tweaks:] */

undefined1 *
FUN_10538b808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7ca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10538b8dc; end: 10538b8e3; -[SCNClientAttestationConfiguration grpcParameters] */

undefined8 FUN_10538b8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10538b8e4; end: 10538b8eb; -[SCNClientAttestationConfiguration tweaks] */

undefined8 FUN_10538b8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10538b8ec; end: 10538b91b; -[SCNClientAttestationConfiguration .cxx_destruct] */

void FUN_10538b8ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10538b91c; end: 10538b99b;  */

void FUN_10538b91c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010538b9d0(auStack_60);
  func_0x00010538b99c(&uStack_50,param_2,param_3,param_4,param_5,auStack_60);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10538ce8c(&uStack_50);
  FUN_10538cc8c(auStack_60);
  return;
}



/* Entry: 10538b99c; end: 10538b9ef;  */

void FUN_10538b99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_11;
  
  FUN_10538ccb0(&uStack_11,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10538b9f0; end: 10538badf;  */

undefined8 *
FUN_10538b9f0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_11087f078;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010538d198();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[4] = param_4[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010538d198();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[6] = param_5[1];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010538d198();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 7,param_6);
  FUN_10538c760(param_1 + 10,param_7);
  uVar2 = *(undefined8 *)(param_7 + 0x60);
  uVar4 = *(undefined8 *)(param_7 + 0x78);
  uVar3 = *(undefined8 *)(param_7 + 0x70);
  param_1[0x17] = *(undefined8 *)(param_7 + 0x68);
  param_1[0x16] = uVar2;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  return param_1;
}



/* Entry: 10538bae0; end: 10538bd97;  */

undefined1 * FUN_10538bae0(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  long *plVar10;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_48;
  
  lVar4 = param_1;
  lVar8 = param_2;
  uVar9 = param_3;
  func_0x00010538d188();
  *(char *)(lVar4 + 0x98) = (char)uVar9;
  *(undefined4 *)(lVar4 + 0x70) = 1;
  *(long *)(lVar4 + 0xa0) = (long)*(int *)(lVar8 + 0x18);
  uStack_48 = extraout_x8;
  func_0x00010bcd5ac0(&uStack_b0,lVar8);
  FUN_10538e128(auStack_c8,&uStack_b0);
  puVar5 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
  FUN_105392dd0();
  func_0x00010002b838(auStack_e0,"argos_token");
  FUN_105392a58(puVar5,auStack_e0,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x00010002b838(&uStack_110,"x-snapchat-att-token");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_128,auStack_c8);
  uStack_a0 = uStack_100;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_90 = uStack_120;
  uStack_98 = uStack_128;
  uStack_88 = uStack_118;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  FUN_10530169c(auStack_f8,&uStack_b0,1);
  func_0x0001005acd08(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_128);
  puVar5 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  uVar2 = *(int *)(param_2 + 0x18) - 1;
  uVar3 = uVar2 == 1;
  if (uVar2 < 2) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 **)(param_1 + 0xc0) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (&uStack_b0,*(long **)(param_1 + 0x18),param_2,param_1 + 0x38);
    func_0x00010bcd5ac0(auStack_158,&uStack_b0);
    FUN_10538e128(auStack_140,auStack_158);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
    puVar6 = auStack_f8;
    FUN_10538bd98(puVar6,&PTR_s_x_snapchat_att_sign_11087f098,auStack_140);
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined1 **)(param_1 + 200) = puVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
    puVar5 = &uStack_b0;
    func_0x000100100fec();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 **)(param_1 + 0xb8) = puVar5;
  plVar10 = *(long **)(param_1 + 0x28);
  FUN_10538d2c8(&uStack_b0,param_1 + 0x50);
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_b0);
  FUN_10538c928(&uStack_b0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),auStack_f8,(uint)param_3 ^ 1);
  func_0x0001005ad2a8(auStack_f8);
  puVar6 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010538d154(uStack_48);
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  func_0x000100100fec(&uStack_b0);
  func_0x0001005ad2a8(auStack_f8);
  puVar6 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010538d168();
  uVar1 = *(ulong *)(puVar6 + 8);
  if (uVar1 < *(ulong *)(puVar6 + 0x10)) {
    FUN_10538c7bc();
    puVar7 = (undefined1 *)(uVar1 + 0x30);
  }
  else {
    puVar7 = puVar6;
    FUN_10538c7f0();
  }
  *(undefined1 **)(puVar6 + 8) = puVar7;
  return puVar7 + -0x30;
}



/* Entry: 10538bd98; end: 10538bdd3;  */

long FUN_10538bd98(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10538c7bc();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_10538c7f0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 10538bdd4; end: 10538be97;  */

void FUN_10538bdd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 auStack_a8 [96];
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  FUN_105392dd0();
  func_0x00010002b838(auStack_48,"empty");
  FUN_105392a58(lVar1,auStack_48,1);
  puVar2 = auStack_48;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  *(undefined4 *)(param_1 + 0x70) = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined1 **)(param_1 + 0xb8) = puVar2;
  plVar3 = *(long **)(param_1 + 0x28);
  FUN_10538d2c8(auStack_a8,param_1 + 0x50);
  (**(code **)(*plVar3 + 0x10))(plVar3,auStack_a8);
  func_0x00010538d1d0();
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_2);
  return;
}



/* Entry: 10538be98; end: 10538bf3b;  */

void FUN_10538be98(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 *puStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  func_0x00010538d188();
  uStack_28 = extraout_x8;
  func_0x0001005acf78(&uStack_50);
  uStack_b8 = uStack_48;
  uStack_c0 = uStack_50;
  uStack_b0 = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_a8 = 1;
  uStack_a0 = 0;
  uStack_60 = 0;
  FUN_10538bf3c(*(undefined8 *)(param_1 + 8),&uStack_c0);
  func_0x00010538c954(&uStack_c0);
  func_0x0001005ad2a8(&uStack_50);
  func_0x00010538d154(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010538d1d8();
  func_0x00010538c954();
  puVar2 = &uStack_50;
  func_0x0001005ad2a8();
  func_0x00010538d168();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_10538ceb0(3);
  }
  else {
    func_0x000100469850();
    puStack_f0 = puVar2 + 3;
    uStack_e8 = 1;
    __ZNSt3__15mutex4lockEv();
    lVar3 = param_1;
    func_0x0001005ee0f0();
    if ((int)lVar3 == 0) {
      FUN_10538cf14(param_1 + 0x90);
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      func_0x0001000df5a0(&puStack_f0);
      return;
    }
  }
  FUN_10538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10538bfc4);
  (*pcVar1)();
}



/* Entry: 10538bf3c; end: 10538bfcf;  */

void FUN_10538bf3c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_1 == 0) {
    FUN_10538ceb0(3);
  }
  else {
    func_0x000100469850();
    lStack_30 = param_1 + 0x18;
    uStack_28 = 1;
    __ZNSt3__15mutex4lockEv();
    lVar2 = unaff_x19;
    func_0x0001005ee0f0();
    if ((int)lVar2 == 0) {
      FUN_10538cf14(unaff_x19 + 0x90);
      *(uint *)(unaff_x19 + 0x88) = *(uint *)(unaff_x19 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(unaff_x19 + 0x58);
      func_0x0001000df5a0(&lStack_30);
      return;
    }
  }
  FUN_10538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10538bfc4);
  (*pcVar1)();
}



/* Entry: 10538bfd0; end: 10538c06b;  */

undefined8 *
FUN_10538bfd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
             undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  undefined8 *puStack_168;
  long *plStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 auStack_d8 [3];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [80];
  undefined8 auStack_68 [8];
  undefined8 uStack_28;
  
  func_0x00010538d188();
  uStack_28 = extraout_x8;
  FUN_1052a0760(auStack_68);
  auStack_d8[0]._0_1_ = 0;
  uStack_c0 = 0;
  FUN_1052b8c70(auStack_b8,auStack_68);
  puVar6 = auStack_d8;
  FUN_10538bf3c(*(undefined8 *)(param_1 + 8));
  func_0x00010538c954(auStack_d8);
  puVar4 = auStack_68;
  FUN_1052a03ac();
  func_0x00010538d154(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010538c954(auStack_d8);
    puVar4 = auStack_68;
    FUN_1052a03ac();
    func_0x00010538d168();
    puVar5 = (undefined8 *)0x1f0;
    __Znwm();
    plVar9 = puVar5 + 1;
    *plVar9 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_11087f238;
    plVar8 = puVar5 + 3;
    FUN_10539041c(plVar8,puVar6,param_4,param_5,param_6,param_3);
    lVar7 = puVar5[5];
    if ((lVar7 == 0) || (*(long *)(lVar7 + 8) == -1)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = puVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_150 = puVar5[4];
      puVar5[4] = plVar8;
      puVar5[5] = puVar5;
      plStack_180 = plVar8;
      puStack_178 = puVar5;
      plStack_160 = plVar8;
      puStack_158 = puVar5;
      lStack_148 = lVar7;
      FUN_10538cfec(&uStack_150);
      func_0x00010538d010(&plStack_160);
    }
    plStack_180 = (long *)0x0;
    puStack_178 = (undefined8 *)0x0;
    plStack_170 = plVar8;
    puStack_168 = puVar5;
    *puVar4 = &PTR_FUN_11087f0b0;
    lVar7 = puVar6[1];
    uVar10 = *puVar6;
    puVar4[2] = puVar6[1];
    puVar4[1] = uVar10;
    if (lVar7 != 0) {
      do {
        func_0x00010538d198();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined1 *)(puVar4 + 0x1b) = 0;
    if (*(char *)(param_3 + 0xc0) == '\x01') {
      func_0x00010046985c(puVar4 + 3,param_3);
      *(undefined1 *)(puVar4 + 0x1b) = 1;
    }
    *(undefined1 *)(puVar4 + 0x1c) = 0;
    *(undefined1 *)(puVar4 + 0x21) = 0;
    if (*(char *)(param_3 + 0xf0) == '\x01') {
      FUN_10538adbc(puVar4 + 0x1c,param_3 + 200);
      *(undefined1 *)(puVar4 + 0x21) = 1;
    }
    puVar4[0x22] = plVar8;
    puVar4[0x23] = puVar5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = param_5[1];
    uVar10 = *param_5;
    puVar4[0x25] = param_5[1];
    puVar4[0x24] = uVar10;
    if (lVar7 != 0) {
      do {
        func_0x00010538d198();
      } while (extraout_w10_00 != 0);
      plVar8 = (long *)puVar4[0x22];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x00010538d034(&plStack_170);
    func_0x00010538d010(&plStack_180);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10538c06c; end: 10538c2b3;  */

undefined8 *
FUN_10538c06c(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar4 = (undefined8 *)0x1f0;
  __Znwm();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_11087f238;
  plVar6 = puVar4 + 3;
  FUN_10539041c(plVar6,param_2,param_4,param_5,param_6,param_3);
  lVar5 = puVar4[5];
  if ((lVar5 == 0) || (*(long *)(lVar5 + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = puVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_70 = puVar4[4];
    puVar4[4] = plVar6;
    puVar4[5] = puVar4;
    plStack_a0 = plVar6;
    puStack_98 = puVar4;
    plStack_80 = plVar6;
    puStack_78 = puVar4;
    lStack_68 = lVar5;
    FUN_10538cfec(&uStack_70);
    func_0x00010538d010(&plStack_80);
  }
  plStack_a0 = (long *)0x0;
  puStack_98 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_11087f0b0;
  lVar5 = param_2[1];
  uVar8 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar8;
  plStack_90 = plVar6;
  puStack_88 = puVar4;
  if (lVar5 != 0) {
    do {
      func_0x00010538d198();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if (*(char *)(param_3 + 0xc0) == '\x01') {
    func_0x00010046985c(param_1 + 3,param_3);
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  if (*(char *)(param_3 + 0xf0) == '\x01') {
    FUN_10538adbc(param_1 + 0x1c,param_3 + 200);
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  param_1[0x22] = plVar6;
  param_1[0x23] = puVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = param_5[1];
  uVar8 = *param_5;
  param_1[0x25] = param_5[1];
  param_1[0x24] = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x00010538d198();
    } while (extraout_w10_00 != 0);
    plVar6 = (long *)param_1[0x22];
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
  func_0x00010538d034(&plStack_90);
  func_0x00010538d010(&plStack_a0);
  return param_1;
}



/* Entry: 10538c2b4; end: 10538c60f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10538c2b4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  uint auStack_178 [2];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [48];
  uint *puStack_118;
  undefined1 *puStack_110;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  char cStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long alStack_70 [3];
  undefined1 uStack_58;
  
  puVar4 = auStack_178;
  FUN_10538d210();
  __ZNSt3__16chrono12steady_clock3nowEv();
  auStack_178[0] = param_7;
  puStack_118 = puVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_170,param_4);
  puVar5 = auStack_148;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5,param_6);
  if ((param_7 & 0xfffffffe) != 2) {
    auStack_178[0] = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar9 = *(long **)(param_2 + 0x120);
    puStack_110 = puVar5;
    FUN_10538d2c8(&puStack_f8,auStack_178);
    (**(code **)(*plVar9 + 0x10))(plVar9,&puStack_f8);
    func_0x00010538c928(&puStack_f8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
LAB_10538c500:
    func_0x00010538d1d0();
    return;
  }
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  plVar9 = puVar6 + 1;
  *plVar9 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_11087f288;
  puVar11 = puVar6 + 3;
  *puVar11 = &PTR_FUN_11087f108;
  puVar6[4] = 0;
  puVar7 = (undefined8 *)0xf8;
  __Znwm();
  puVar7[2] = 0;
  puVar7[3] = 0x32aaaba7;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0x3cb0b1bb;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  *(undefined8 *)((long)puVar7 + 0x84) = 0;
  *(undefined8 *)((long)puVar7 + 0x7c) = 0;
  *puVar7 = &PTR_DAT_11087f2d8;
  puVar7[1] = 0;
  puVar6[4] = puVar7;
  lVar8 = 0xd0;
  puStack_80 = puVar11;
  puStack_78 = puVar6;
  __Znwm();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_f8 = puVar11;
  puStack_f0 = puVar6;
  FUN_10538b9f0(lVar8,puVar11,puVar6,param_2 + 8,param_2 + 0x120,param_4,auStack_178);
  func_0x000105389b48(&puStack_f8);
  lVar10 = puVar6[4];
  if (lVar10 == 0) {
    FUN_10538ceb0(3);
  }
  else {
    lStack_88 = lVar10;
    func_0x0001003b79d8(lVar10);
    lStack_90 = lVar8;
    (**(code **)(**(long **)(param_2 + 0x110) + 0x18))(*(long **)(param_2 + 0x110),&lStack_90);
    lVar8 = lStack_90;
    lStack_90 = 0;
    if (lVar8 != 0) {
      func_0x00010538d170();
    }
    lStack_88 = 0;
    alStack_70[2] = lVar10 + 0x18;
    uStack_58 = 1;
    alStack_70[0] = lVar10;
    __ZNSt3__15mutex4lockEv();
    __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(lVar10,alStack_70 + 2);
    lVar8 = *(long *)(lVar10 + 0x10);
    alStack_70[1] = 0;
    __ZNSt13exception_ptrD1Ev(alStack_70 + 1);
    if (lVar8 == 0) {
      FUN_10538cf14(&puStack_f8,lVar10 + 0x90);
      func_0x0001000df5a0(alStack_70 + 2);
      func_0x00010538d0f8(alStack_70);
      if (cStack_98 == '\x01') {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      else {
        func_0x0001005acf78(param_1,&puStack_f8);
      }
      func_0x00010538c954(&puStack_f8);
      func_0x00010538cf78(&lStack_88);
      func_0x00010538d0d4(&puStack_80);
      goto LAB_10538c500;
    }
    __ZNSt13exception_ptrC1ERKS_();
    __ZSt17rethrow_exceptionSt13exception_ptr();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10538c53c);
  (*pcVar3)();
}



/* Entry: 10538c610; end: 10538c717;  */

void FUN_10538c610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long unaff_x19;
  long lStack_c8;
  undefined4 auStack_c0 [2];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  undefined4 *puStack_60;
  
  func_0x000100469850();
  puVar1 = auStack_c0;
  FUN_10538d210();
  __ZNSt3__16chrono12steady_clock3nowEv();
  auStack_c0[0] = 2;
  puStack_60 = puVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_90,param_3);
  lVar2 = 0xd0;
  __Znwm();
  FUN_10538b9f0();
  lStack_c8 = lVar2;
  (**(code **)(**(long **)(unaff_x19 + 0x110) + 0x18))(*(long **)(unaff_x19 + 0x110),&lStack_c8);
  lVar2 = lStack_c8;
  lStack_c8 = 0;
  if (lVar2 != 0) {
    func_0x00010538d170();
  }
  FUN_10538c928(auStack_c0);
  return;
}



/* Entry: 10538c718; end: 10538c71b;  */

undefined8 * FUN_10538c718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f078;
  FUN_10538c928(param_1 + 10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 7);
  func_0x000105389b00(param_1 + 5);
  func_0x000105389adc(param_1 + 3);
  func_0x000105389b48(param_1 + 1);
  return param_1;
}



/* Entry: 10538c71c; end: 10538c72f;  */

void FUN_10538c71c(void)

{
  func_0x00010538c98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538c730; end: 10538c733;  */

undefined8 * FUN_10538c730(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_11087f108;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    func_0x0001005ee0f0();
    plVar6 = (long *)param_1[1];
    if (((uVar4 & 1) == 0) && (0 < plVar6[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_48,4,uVar4);
      FUN_10538cac0(auStack_28,auStack_48);
      __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar6,auStack_28);
      __ZNSt13exception_ptrD1Ev(auStack_28);
      __ZNSt3__112future_errorD1Ev(auStack_48);
      plVar6 = (long *)param_1[1];
    }
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}



/* Entry: 10538c734; end: 10538c747;  */

void FUN_10538c734(void)

{
  FUN_10538c9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538c748; end: 10538c74b;  */

undefined8 * FUN_10538c748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f0b0;
  func_0x000105389b00(param_1 + 0x24);
  func_0x00010538d034(param_1 + 0x22);
  func_0x000105389960(param_1 + 3);
  func_0x000105389adc(param_1 + 1);
  return param_1;
}



/* Entry: 10538c74c; end: 10538c75f;  */

void FUN_10538c74c(void)

{
  func_0x00010538cb4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538c760; end: 10538c7bb;  */

void FUN_10538c760(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100469850();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  return;
}



/* Entry: 10538c7bc; end: 10538c7ef;  */

void FUN_10538c7bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10538c8a0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 10538c7f0; end: 10538c89f;  */

long FUN_10538c7f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x0001005ac980(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  func_0x0001005aca14(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_10538c8a0(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x30;
  func_0x0001005acb9c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001005acc98(auStack_58);
  return lVar2;
}



/* Entry: 10538c8a0; end: 10538c927;  */

undefined8 * FUN_10538c8a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010002b838(&uStack_38,*param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_50,param_3);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[4] = uStack_48;
  param_1[3] = uStack_50;
  param_1[5] = uStack_40;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return param_1;
}



/* Entry: 10538c928; end: 10538c9df;  */

long FUN_10538c928(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10538c9e0; end: 10538ca97;  */

undefined8 * FUN_10538c9e0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_11087f108;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    func_0x0001005ee0f0();
    plVar6 = (long *)param_1[1];
    if (((uVar4 & 1) == 0) && (0 < plVar6[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_48,4,uVar4);
      FUN_10538cac0(auStack_28,auStack_48);
      __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar6,auStack_28);
      __ZNSt13exception_ptrD1Ev(auStack_28);
      __ZNSt3__112future_errorD1Ev(auStack_48);
      plVar6 = (long *)param_1[1];
    }
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}



/* Entry: 10538ca98; end: 10538cabf;  */

undefined1  [16] FUN_10538ca98(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  __ZNSt3__115future_categoryEv();
  auVar2._0_8_ = param_1 & 0xffffffff;
  auVar2._8_8_ = uVar1;
  return auVar2;
}



/* Entry: 10538cac0; end: 10538cb17;  */

void FUN_10538cac0(void)

{
  code *pcVar1;
  
  ___cxa_allocate_exception(0x20);
  FUN_10538cb18();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10538cafc);
  (*pcVar1)();
}



/* Entry: 10538cb18; end: 10538cb97;  */

void FUN_10538cb18(long *param_1,long param_2)

{
  long lVar1;
  
  __ZNSt11logic_errorC2ERKS_();
  *param_1 = (long)(PTR___ZTVNSt3__112future_errorE_110346af8 + 0x10);
  lVar1 = *(long *)(param_2 + 0x10);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[2] = lVar1;
  return;
}



/* Entry: 10538cb98; end: 10538cc0b;  */

undefined1 * FUN_10538cb98(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010538d188();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10538cc0c();
  *puStack_30 = &PTR_FUN_11087f198;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_11087f590;
  func_0x00010538d1ec();
  func_0x00010538cc7c();
  func_0x00010538d154(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10538cc34();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10538cc0c; end: 10538cc33;  */

long FUN_10538cc0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10538cc34();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10538cc34; end: 10538cc4f;  */

void FUN_10538cc34(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11087f198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538cc50; end: 10538cc53;  */

void FUN_10538cc50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538cc54; end: 10538cc67;  */

void FUN_10538cc54(void)

{
  func_0x00010538cc70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538cc68; end: 10538cc8b;  */

void FUN_10538cc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010538d184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10538cc8c; end: 10538ccaf;  */

void FUN_10538cc8c(long param_1)

{
  func_0x00010538d1c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10538ccb0; end: 10538cd43;  */

long FUN_10538ccb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010538d188();
  uStack_48 = extraout_x8;
  FUN_10538cd44(auStack_60,1);
  FUN_10538cd9c(lStack_50,param_2,param_3,param_4,param_5,param_6);
  func_0x00010538d1ec();
  func_0x00010538ce7c();
  func_0x00010538d154(uStack_48);
  if ((bool)in_ZR) {
    return lStack_50;
  }
  ___stack_chk_fail();
  func_0x00010538d1d8();
  func_0x00010538ce7c();
  lVar1 = lStack_50;
  func_0x00010538d168();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10538cd6c();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10538cd44; end: 10538cd6b;  */

long FUN_10538cd44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10538cd6c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10538cd6c; end: 10538cd9b;  */

undefined8 * FUN_10538cd6c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xc7ce0c7ce0c7cf) {
    puVar1 = (undefined8 *)(param_2 * 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087f1e8;
  FUN_10538cdfc(param_1 + 3);
  return param_1;
}



/* Entry: 10538cd9c; end: 10538cddb;  */

undefined8 * FUN_10538cd9c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087f1e8;
  FUN_10538cdfc(param_1 + 3);
  return param_1;
}



/* Entry: 10538cddc; end: 10538cddf;  */

void FUN_10538cddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f1e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538cde0; end: 10538cdf3;  */

void FUN_10538cde0(void)

{
  FUN_10538ce70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538cdf4; end: 10538cdfb;  */

void FUN_10538cdf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010538d184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10538cdfc; end: 10538ce4b;  */

undefined8 FUN_10538cdfc(undefined8 param_1)

{
  undefined8 *in_x5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = in_x5[1];
  uStack_30 = *in_x5;
  *in_x5 = 0;
  in_x5[1] = 0;
  FUN_10538c06c();
  FUN_10538ce4c(&uStack_30);
  return param_1;
}



/* Entry: 10538ce4c; end: 10538ce6f;  */

void FUN_10538ce4c(long param_1)

{
  func_0x00010538d1c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10538ce70; end: 10538ce8b;  */

void FUN_10538ce70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f1e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538ce8c; end: 10538ceaf;  */

void FUN_10538ce8c(long param_1)

{
  func_0x00010538d1c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10538ceb0; end: 10538cf13;  */

undefined8 * FUN_10538ceb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x20;
  ___cxa_allocate_exception();
  FUN_10538ca98(param_1);
  __ZNSt3__112future_errorC1ENS_10error_codeE(puVar1,param_1,param_2);
  puVar2 = (undefined8 *)PTR___ZTINSt3__112future_errorE_110346a00;
  ___cxa_throw(puVar1,PTR___ZTINSt3__112future_errorE_110346a00,
               PTR___ZNSt3__112future_errorD1Ev_1103463c0);
  ___cxa_free_exception();
  func_0x00010538d1a8();
  *(undefined1 *)puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  if (*(char *)(puVar2 + 3) == '\x01') {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar3 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar3;
    puVar1[2] = puVar2[2];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  FUN_1052a07e8(puVar1 + 4,puVar2 + 4);
  return puVar1;
}



/* Entry: 10538cf14; end: 10538cfbf;  */

undefined8 * FUN_10538cf14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  FUN_1052a07e8(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10538cfc0; end: 10538cfc3;  */

void FUN_10538cfc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f238;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538cfc4; end: 10538cfd7;  */

void FUN_10538cfc4(void)

{
  func_0x00010538cfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538cfd8; end: 10538cfeb;  */

void FUN_10538cfd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010538d184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10538cfec; end: 10538d057;  */

void FUN_10538cfec(long param_1)

{
  func_0x00010538d1c4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10538d058; end: 10538d05b;  */

void FUN_10538d058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f288;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538d05c; end: 10538d06f;  */

void FUN_10538d05c(void)

{
  FUN_10538d0c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538d070; end: 10538d07b;  */

void FUN_10538d070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010538d184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10538d07c; end: 10538d08f;  */

void FUN_10538d07c(void)

{
  func_0x0001005f1a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538d090; end: 10538d0c7;  */

void FUN_10538d090(long *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    func_0x00010538c954(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010538d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10538d0c8; end: 10538d0d3;  */

void FUN_10538d0c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f288;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538d0d4; end: 10538d11b;  */

void FUN_10538d0d4(long param_1)

{
  func_0x00010538d1c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10538d11c; end: 10538d20f;  */

void FUN_10538d11c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010538d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10538d210; end: 10538d2c7;  */

undefined4 * FUN_10538d210(undefined4 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010002b838(&uStack_38,"");
  func_0x00010002b838(&uStack_50,"");
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_30;
  *(undefined8 *)(param_1 + 2) = uStack_38;
  *(undefined8 *)(param_1 + 6) = uStack_28;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = uStack_48;
  *(undefined8 *)(param_1 + 0xc) = uStack_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_40;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  return param_1;
}



/* Entry: 10538d2c8; end: 10538d303;  */

void FUN_10538d2c8(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(long *)(param_2 + 0x1a) - *(long *)(param_2 + 0x18);
  if (uVar1 != 0 && *(long *)(param_2 + 0x18) <= *(long *)(param_2 + 0x1a)) {
    *(ulong *)(param_2 + 10) = uVar1 / 1000000;
  }
  uVar1 = *(long *)(param_2 + 0x1e) - *(long *)(param_2 + 0x1c);
  if (uVar1 != 0 && *(long *)(param_2 + 0x1c) <= *(long *)(param_2 + 0x1e)) {
    *(ulong *)(param_2 + 0x16) = uVar1 / 1000000;
  }
  func_0x000100469850();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return;
}



/* Entry: 10538d304; end: 10538d493;  */

void FUN_10538d304(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_128 [24];
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined1 uStack_78;
  undefined1 auStack_70 [56];
  byte bStack_38;
  
  auStack_70[0] = 0;
  bStack_38 = 0;
  auStack_b0[0] = 0;
  uStack_78 = 0;
  uVar3 = *(uint *)(param_3 + 0x10);
  if (((uVar3 & 1) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_3 + 0x30) + 0x20),
     uVar1 < 6 && (1 << (ulong)(uVar1 & 0x1f) & 0x34U) != 0)) {
    func_0x00010538e05c();
    FUN_10538d548(auStack_70,&uStack_f0);
    func_0x00010538e068();
    uVar3 = *(uint *)(param_3 + 0x10);
  }
  if (((uVar3 >> 1 & 1) != 0) &&
     (iVar2 = *(int *)(*(long *)(param_3 + 0x38) + 0x20), iVar2 == 6 || iVar2 == 1)) {
    func_0x00010538e05c();
    FUN_10538d548(auStack_b0,&uStack_f0);
    func_0x00010538e068();
  }
  if ((bStack_38 & 1) == 0) {
    func_0x00010002b838(&uStack_108,&UNK_10dd986ec);
    uStack_e0 = uStack_f8;
    auStack_128[0] = 0;
    uStack_110 = 0;
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_d8 = 1;
    uStack_d0 = 0;
    uStack_b8 = 0;
    func_0x0001001148fc(auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
    (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),&uStack_f0);
    FUN_1052a03ac(&uStack_f0);
  }
  else {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),auStack_70,auStack_b0);
  }
  FUN_10538de3c(auStack_b0);
  FUN_10538de3c(auStack_70);
  return;
}



/* Entry: 10538d494; end: 10538d547;  */

void FUN_10538d494(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_3 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar2[1];
    puVar2 = (undefined8 *)*puVar2;
  }
  func_0x00010069648c(&uStack_50,puVar2,(long)puVar2 + lVar1);
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_60 = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_105390164(param_1,&uStack_70,*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x20),
                param_2 + 0x10);
  func_0x000100100fec(&uStack_70);
  func_0x000100100fec(&uStack_50);
  return;
}



/* Entry: 10538d548; end: 10538d57b;  */

long FUN_10538d548(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_105390228();
  }
  else {
    func_0x00010538ddf8();
  }
  return param_1;
}



/* Entry: 10538d57c; end: 10538d667;  */

void FUN_10538d57c(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010002b838(&uStack_88,&UNK_10dd98711);
  iVar1 = *param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_c8,param_3 + 2);
  uStack_60 = uStack_78;
  uStack_40 = uStack_b8;
  uStack_48 = uStack_c0;
  uStack_50 = uStack_c8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  uStack_98 = 1;
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_38 = 1;
  lStack_58 = (long)iVar1;
  func_0x0001001148fc(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),&uStack_70);
  FUN_1052a03ac(&uStack_70);
  return;
}



/* Entry: 10538d668; end: 10538d6a7;  */

void FUN_10538d668(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    func_0x0001004b5d48(param_2,lVar2,lVar2 + 0x18);
  }
  return;
}



/* Entry: 10538d6a8; end: 10538db93;  */

undefined8 *
FUN_10538d6a8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
             undefined8 *param_5,long *param_6)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar7;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 uVar8;
  undefined8 *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_230;
  undefined8 uStack_228;
  char cStack_218;
  undefined *puStack_170;
  undefined1 auStack_168 [16];
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined1 uStack_118;
  undefined1 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_11087f3a0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = param_5[1];
  uVar8 = *param_5;
  puVar7 = param_1 + 3;
  param_1[4] = param_5[1];
  *puVar7 = uVar8;
  if (lVar6 != 0) {
    do {
      func_0x00010538e038();
    } while (extraout_w10 != 0);
  }
  lVar6 = param_4[1];
  uVar8 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar8;
  if (lVar6 != 0) {
    do {
      func_0x00010538e038();
    } while (extraout_w10_00 != 0);
  }
  if (*param_6 == 0) {
    unaff_x26 = (undefined8 *)0x38;
    __Znwm();
    unaff_x26[1] = 0;
    unaff_x26[2] = 0;
    unaff_x26[3] = &PTR_FUN_11087f370;
    *unaff_x26 = &PTR_FUN_11087f450;
    unaff_x27 = unaff_x26 + 4;
    *unaff_x27 = 0;
    unaff_x26[5] = 0;
    unaff_x26[6] = 0;
    FUN_1053928d8(&uStack_230,param_3 + 200);
    if (cStack_218 == '\x01') {
      ppuVar3 = (undefined **)(unaff_x26 + 6);
      ppuStack_128 = (undefined **)0x0;
      lVar6 = 1;
      ppuStack_120 = ppuVar3;
      func_0x0001004a1c6c();
      ppuStack_128 = ppuVar3 + lVar6 * 6;
      ppuStack_140 = ppuVar3;
      ppuStack_138 = ppuVar3;
      ppuStack_130 = ppuVar3;
      func_0x00010002b838(&ppuStack_2f0,"x-snap-route-tag");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&puStack_158,&uStack_230);
      ppuVar3[2] = puStack_2e0;
      ppuVar3[1] = puStack_2e8;
      *ppuVar3 = (undefined *)ppuStack_2f0;
      puStack_2e8 = (undefined *)0x0;
      puStack_2e0 = (undefined *)0x0;
      ppuStack_2f0 = (undefined **)0x0;
      ppuVar3[4] = puStack_150;
      ppuVar3[3] = puStack_158;
      ppuVar3[5] = puStack_148;
      puStack_158 = (undefined *)0x0;
      puStack_150 = (undefined *)0x0;
      puStack_148 = (undefined *)0x0;
      func_0x00010538e048();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_2f0);
      ppuStack_130 = ppuStack_130 + 6;
      func_0x0001004a1d78(unaff_x27,&ppuStack_140);
      unaff_x27 = (undefined8 *)unaff_x26[5];
      func_0x0001004a1f08(&ppuStack_140);
      unaff_x26[5] = unaff_x27;
    }
    func_0x0001001148fc(&uStack_230);
    ppuStack_138 = (undefined **)param_6[1];
    ppuStack_140 = (undefined **)*param_6;
    *param_6 = (long)(unaff_x26 + 3);
    param_6[1] = (long)unaff_x26;
    func_0x000100561d44(&ppuStack_140);
    puStack_2f8 = param_1 + 1;
  }
  func_0x0001004896c8(auStack_168,param_2);
  func_0x00010055c758(&puStack_170);
  puVar1 = puStack_170;
  ppuStack_140 = &PTR_DAT_11087f540;
  ppuStack_138 = (undefined **)((ulong)ppuStack_138 & 0xffffffffffffff00);
  ppuStack_120 = (undefined **)((ulong)ppuStack_120 & 0xffffffffffffff00);
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 2;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  func_0x00010002b838(&puStack_158,"gcp.api.snapchat.com");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_a8,&puStack_158);
  func_0x00010538e048();
  uStack_b0 = 1000;
  func_0x000100469730(&ppuStack_2f0,&ppuStack_140);
  func_0x00010046e280(&ppuStack_140);
  uVar2 = *(char *)(param_3 + 0xc0) == '\x01';
  if ((bool)uVar2) {
    func_0x00010046985c(&uStack_230,param_3);
  }
  else {
    func_0x00010076a4ac(&uStack_230,&ppuStack_2f0);
  }
  func_0x00010046a3b4(puVar1,&uStack_230);
  func_0x000100469c34(&uStack_230);
  func_0x000100469c34(&ppuStack_2f0);
  param_3 = param_3 + 200;
  FUN_10539287c();
  param_1[5] = param_3;
  func_0x00010055d588(&ppuStack_140,1);
  puStack_158 = puStack_170;
  ppuStack_130[2] = (undefined *)0x0;
  *ppuStack_130 = (undefined *)&PTR_DAT_1107e9bc8;
  ppuStack_130[1] = (undefined *)0x0;
  puStack_170 = (undefined *)0x0;
  func_0x00010055d67c(ppuStack_130 + 3,puVar7,auStack_168,param_6,&puStack_158,0,0,0);
  func_0x00010055f5a0(&puStack_158);
  ppuVar3 = ppuStack_130;
  ppuStack_130 = (undefined **)0x0;
  func_0x000100561d68(&ppuStack_2f0,ppuVar3 + 3);
  func_0x000100561e6c(&ppuStack_140);
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_11087f4a0;
  ppuStack_138 = (undefined **)puStack_2e8;
  ppuStack_140 = ppuStack_2f0;
  ppuStack_2f0 = (undefined **)0x0;
  puStack_2e8 = (undefined *)0x0;
  FUN_105393e98(puVar4 + 3,&ppuStack_140);
  func_0x000100561f40(&ppuStack_140);
  uStack_230 = 0;
  uStack_228 = 0;
  ppuStack_138 = (undefined **)param_1[2];
  ppuStack_140 = (undefined **)param_1[1];
  param_1[1] = puVar4 + 3;
  param_1[2] = puVar4;
  func_0x00010538df24(&ppuStack_140);
  func_0x00010538df24(&uStack_230);
  func_0x000100561f40(&ppuStack_2f0);
  func_0x00010055f5a0(&puStack_170);
  puVar5 = auStack_168;
  func_0x00010048b4e8(puVar5);
  func_0x000100489a50(uStack_70);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_2f0);
    func_0x0001004a1f08(&ppuStack_140);
    func_0x0001001148fc(&uStack_230);
    func_0x0001004a21bc(unaff_x27);
    __ZNSt3__119__shared_weak_countD2Ev(unaff_x26);
    __ZdlPv();
    do {
      FUN_10538ce4c(param_1 + 6);
      func_0x000100450be4(puVar7);
      func_0x00010538df24(puStack_2f8);
      __Unwind_Resume(puVar5);
      func_0x00010538e02c();
      func_0x00010048b4e8(auStack_168);
    } while( true );
  }
  return param_1;
}



/* Entry: 10538db94; end: 10538ddaf;  */

void FUN_10538db94(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int extraout_w10;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined1 auStack_280 [176];
  undefined1 auStack_1d0 [184];
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 auStack_80 [40];
  undefined1 uStack_58;
  
  ppuStack_108 = &PTR_FUN_11087fac8;
  uStack_100 = 0;
  uStack_e4 = 0;
  puStack_f8 = &DAT_11383d918;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x0001005f7044(auStack_1d0,*param_2,param_2[1]);
  func_0x0001006ad9d4(&puStack_f8,0);
  func_0x000100066230();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_11087f4f0;
  puVar6 = puVar3 + 3;
  *puVar6 = &PTR_FUN_11087f320;
  uVar4 = *param_3;
  *param_3 = 0;
  puVar3[4] = uVar4;
  puVar3[6] = uVar9;
  puVar3[5] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x00010538e038();
    } while (extraout_w10 != 0);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  auStack_80[0] = 0;
  uStack_58 = 0;
  auStack_a0[0] = 0;
  uStack_88 = 0;
  auStack_c0[0] = 0;
  uStack_a8 = 0;
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  puStack_118 = puVar6;
  puStack_110 = puVar3;
  func_0x000100626f38(auStack_280,0,0,auStack_80,0x101,auStack_a0,auStack_c0,0,auStack_e0);
  func_0x0001001148fc(auStack_e0);
  func_0x0001001148fc(auStack_c0);
  func_0x0001001148fc(auStack_a0);
  func_0x00010062706c(auStack_80);
  func_0x0001006271e0(auStack_1d0,auStack_280);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_290 = puVar6;
  puStack_288 = puVar3;
  FUN_105393ecc(uVar4,&ppuStack_108,auStack_1d0,&puStack_290);
  func_0x00010538dffc(&puStack_290);
  func_0x000100609698(auStack_1d0);
  func_0x000100627b64(auStack_280);
  func_0x00010538dfd4(&puStack_118);
  FUN_105392f40(&ppuStack_108);
  return;
}



/* Entry: 10538ddb0; end: 10538ddb3;  */

undefined8 * FUN_10538ddb0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11087f320;
  FUN_10538ce4c(param_1 + 2);
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10538ddb4; end: 10538ddc7;  */

void FUN_10538ddb4(void)

{
  FUN_10538de70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538ddc8; end: 10538ddcb;  */

undefined8 * FUN_10538ddc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f370;
  func_0x0001004a21bc(param_1 + 1);
  return param_1;
}



/* Entry: 10538ddcc; end: 10538dddf;  */

void FUN_10538ddcc(void)

{
  func_0x00010538deb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


