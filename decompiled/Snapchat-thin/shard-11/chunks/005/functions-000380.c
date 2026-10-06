/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086e7918; end: 1086e7993;  */

undefined8 * FUN_1086e7918(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a65ca0;
  plVar2 = (long *)param_1[0xb];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_1086e7994(lVar1);
    func_0x0001086e94a8();
  }
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c289fc(param_1 + 7);
  func_0x000107c29298(param_1 + 5);
  func_0x000107c28cac(param_1 + 3);
  func_0x000107c292d4(param_1 + 1);
  return param_1;
}



/* Entry: 1086e7994; end: 1086e79d3;  */

void FUN_1086e7994(void)

{
  func_0x0001086e9584();
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1086e79d4; end: 1086e79db;  */

void FUN_1086e79d4(void)

{
  return;
}



/* Entry: 1086e79dc; end: 1086e79ff;  */

void FUN_1086e79dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a65d60;
  return;
}



/* Entry: 1086e7a00; end: 1086e7a1f;  */

void FUN_1086e7a00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a65d60;
  return;
}



/* Entry: 1086e7a20; end: 1086e7a3b;  */

void FUN_1086e7a20(void)

{
  func_0x0001086e9360();
  func_0x0001086e9358();
  return;
}



/* Entry: 1086e7a3c; end: 1086e7a63;  */

void FUN_1086e7a3c(undefined8 param_1)

{
  func_0x0001086e94b0();
  func_0x0001086e9418(param_1,&PTR_DAT_110a65dc0);
  func_0x0001086e92d0();
  return;
}



/* Entry: 1086e7a64; end: 1086e7aa3;  */

undefined ** FUN_1086e7a64(void)

{
  return &PTR_DAT_110a65dc0;
}



/* Entry: 1086e7aa4; end: 1086e7aef;  */

long FUN_1086e7aa4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001086e93a4();
    func_0x0001086e946c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1086e7af0; end: 1086e7af3;  */

void FUN_1086e7af0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65de0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086e7af4; end: 1086e7b07;  */

void FUN_1086e7af4(void)

{
  FUN_1086e7b30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e7b08; end: 1086e7b2f;  */

undefined8 FUN_1086e7b08(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  func_0x00010086aa78(param_1 + 0x48);
  param_1 = param_1 + 0x28;
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return unaff_x19;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return unaff_x19;
}



/* Entry: 1086e7b30; end: 1086e7b43;  */

void FUN_1086e7b30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e7b44; end: 1086e7b93;  */

void FUN_1086e7b44(long param_1)

{
  func_0x000107c328ec();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086e7b94; end: 1086e7ba7;  */

void FUN_1086e7b94(void)

{
  func_0x0001086e7b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e7ba8; end: 1086e7bef;  */

void FUN_1086e7ba8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_110a65e30;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c328dc();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1086e7bf0; end: 1086e7c37;  */

void FUN_1086e7bf0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110a65e30;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c328dc(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1086e7c38; end: 1086e7cc3;  */

void FUN_1086e7c38(long param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  
  uStack_50 = param_2[2];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_48 = param_2[3];
  uStack_40 = (undefined4)param_2[4];
  uStack_34 = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_3c = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
  uStack_38 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  FUN_1086f3e50(*(undefined8 *)(param_1 + 8),&uStack_60);
  func_0x000107c27914(&uStack_60);
  func_0x0001086e93c4();
  return;
}



/* Entry: 1086e7cc4; end: 1086e7ceb;  */

void FUN_1086e7cc4(undefined8 param_1)

{
  func_0x0001086e94b0();
  func_0x0001086e9418(param_1,&PTR_DAT_110a65e90);
  func_0x0001086e92d0();
  return;
}



/* Entry: 1086e7cec; end: 1086e7cf7;  */

undefined ** FUN_1086e7cec(void)

{
  return &PTR_DAT_110a65e90;
}



/* Entry: 1086e7cf8; end: 1086e7d23;  */

undefined8 * FUN_1086e7cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65eb0;
  FUN_1086e6710(param_1 + 1);
  return param_1;
}



/* Entry: 1086e7d24; end: 1086e7d37;  */

void FUN_1086e7d24(void)

{
  FUN_1086e7cf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e7d38; end: 1086e7d6f;  */

undefined8 FUN_1086e7d38(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm(0x38);
  FUN_1086e7eb0();
  return uVar1;
}



/* Entry: 1086e7d70; end: 1086e7d93;  */

long FUN_1086e7d70(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  param_2 = param_2 + 8;
  lVar1 = param_3;
  func_0x0001086e94bc(&PTR_FUN_110a65eb0,param_3,param_2);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c328dc();
    } while (extraout_w10 != 0);
  }
  FUN_1086e7f0c(param_3 + 0x18,param_2 + 0x10);
  return param_3;
}



/* Entry: 1086e7d94; end: 1086e7e7b;  */

void FUN_1086e7d94(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000100869f5c(&uStack_48,(param_2[1] - *param_2) / 0x38);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    func_0x000107c27994(auStack_80,lVar2);
    uStack_68 = *(undefined8 *)(lVar2 + 0x18);
    uStack_54 = *(undefined8 *)(lVar2 + 0x2c);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x24) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar2 + 0x20);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
    func_0x0001086e81c8(&uStack_48,auStack_80);
    func_0x0001086e9358();
  }
  func_0x00010086a70c(auStack_80,&uStack_48);
  func_0x00010086a66c(param_1 + 0x18,auStack_80);
  func_0x00010086aa78(auStack_80);
  func_0x00010086aa78(&uStack_48);
  return;
}



/* Entry: 1086e7e7c; end: 1086e7ea3;  */

void FUN_1086e7e7c(undefined8 param_1)

{
  func_0x0001086e94b0();
  func_0x0001086e9418(param_1,&PTR_DAT_110a65f20);
  func_0x0001086e92d0();
  return;
}



/* Entry: 1086e7ea4; end: 1086e7eaf;  */

undefined ** FUN_1086e7ea4(void)

{
  return &PTR_DAT_110a65f20;
}



/* Entry: 1086e7eb0; end: 1086e7f0b;  */

long FUN_1086e7eb0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x0001086e94bc(&PTR_FUN_110a65eb0);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c328dc();
    } while (extraout_w10 != 0);
  }
  FUN_1086e7f0c(param_2 + 0x18,param_3 + 0x10);
  return param_2;
}



/* Entry: 1086e7f0c; end: 1086e7f5b;  */

long FUN_1086e7f0c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    func_0x0001086e93a4();
    func_0x0001086e946c();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1086e7f5c; end: 1086e7f67;  */

void FUN_1086e7f5c(long *param_1,long param_2)

{
  func_0x0001086e9578();
  func_0x0001086e938c();
  FUN_1086e803c(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x38) * 0x38);
  func_0x0001086e9308();
  return;
}



/* Entry: 1086e7f68; end: 1086e7fab;  */

void FUN_1086e7f68(long *param_1,long param_2)

{
  func_0x0001086e938c();
  FUN_1086e803c(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x38) * 0x38);
  func_0x0001086e9308();
  return;
}



/* Entry: 1086e7fac; end: 1086e800b;  */

void FUN_1086e7fac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086e7fe8(param_4);
  }
  func_0x0001086e94e4(0x38);
  return;
}



/* Entry: 1086e800c; end: 1086e803b;  */

void FUN_1086e800c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001086e93f0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x38) {
    func_0x0001086e7a70(param_4,unaff_x22);
    param_4 = lStack_48 + 0x38;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_1086e80b0();
  FUN_1086e80e0(auStack_70);
  return;
}



/* Entry: 1086e803c; end: 1086e80af;  */

void FUN_1086e803c(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001086e93f0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x38) {
    func_0x0001086e7a70(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x38;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_1086e80b0();
  FUN_1086e80e0(auStack_60);
  return;
}



/* Entry: 1086e80b0; end: 1086e80df;  */

void FUN_1086e80b0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086e80e0; end: 1086e810f;  */

long FUN_1086e80e0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086e8110(param_1);
  }
  return param_1;
}



/* Entry: 1086e8110; end: 1086e812f;  */

void FUN_1086e8110(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086e8130; end: 1086e818b;  */

void FUN_1086e8130(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086e818c; end: 1086e8193;  */

void FUN_1086e818c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086e938c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086e8194; end: 1086e8227;  */

void FUN_1086e8194(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086e938c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086e8228; end: 1086e8293;  */

undefined8 FUN_1086e8228(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001086e95bc();
  FUN_1086e8294();
  func_0x0001086e9448();
  FUN_1086e7fac();
  func_0x0001086e7a70(uStack_48);
  func_0x0001086e9514();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001086e9490();
  return uVar1;
}



/* Entry: 1086e8294; end: 1086e82eb;  */

long * FUN_1086e8294(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x492492492492492 < param_2) {
    FUN_1086e7f5c();
    if (param_2 < (long *)0x492492492492493) {
      plVar2 = param_1 + 2;
      func_0x0001086e7fe8();
      *param_1 = (long)plVar2;
      param_1[1] = (long)plVar2;
      param_1[2] = (long)(plVar2 + (long)param_2 * 7);
    }
    else {
      FUN_1086e7f5c();
      plVar2 = param_1 + 2;
      FUN_1086e836c();
      param_1[1] = (long)plVar2;
    }
    return plVar2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x38;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x249249249249248 < uVar1) {
    plVar2 = (long *)0x492492492492492;
  }
  return plVar2;
}



/* Entry: 1086e82ec; end: 1086e8337;  */

void FUN_1086e82ec(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1 + 2;
    func_0x0001086e7fe8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
  }
  else {
    FUN_1086e7f5c();
    plVar1 = param_1 + 2;
    FUN_1086e836c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1086e8338; end: 1086e836b;  */

void FUN_1086e8338(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1086e836c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1086e836c; end: 1086e837f;  */

void FUN_1086e836c(void)

{
  FUN_1086e8380();
  return;
}



/* Entry: 1086e8380; end: 1086e8407;  */

long FUN_1086e8380(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1086d48a8(param_4,param_2);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  FUN_1086e80e0(&uStack_60);
  return param_4;
}



/* Entry: 1086e8408; end: 1086e846f;  */

long FUN_1086e8408(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001086e9398(uVar1);
  return param_1;
}



/* Entry: 1086e8470; end: 1086e8483;  */

void FUN_1086e8470(void)

{
  func_0x0001086e8444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e8484; end: 1086e84b7;  */

undefined8 FUN_1086e8484(undefined8 param_1)

{
  func_0x0001086e9464();
  FUN_1086e8598();
  return param_1;
}



/* Entry: 1086e84b8; end: 1086e84db;  */

long FUN_1086e84b8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_3;
  func_0x0001086e94bc(&PTR_SUB_110a65f40);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c328dc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(param_3 + 0x18,param_2 + 0x18);
  func_0x0001086e94fc();
  *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_3;
}



/* Entry: 1086e84dc; end: 1086e8563;  */

void FUN_1086e84dc(long param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  long alStack_30 [2];
  
  uStack_50 = *param_2;
  uStack_48 = (undefined4)param_2[1];
  uStack_3c = *(undefined8 *)((long)param_2 + 0x14);
  uStack_44 = (undefined4)*(undefined8 *)((long)param_2 + 0xc);
  uStack_40 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  FUN_1086e861c(alStack_30,param_1 + 8);
  if (alStack_30[0] == 0) {
    if (uStack_3c._4_4_ == 0) {
      FUN_1086d44b0(&uStack_50);
    }
  }
  else {
    FUN_1086e6cb0(alStack_30[0],param_1 + 0x18,&uStack_50,param_1 + 0x30,
                  *(undefined4 *)(param_1 + 0x68));
  }
  func_0x000107c29308(alStack_30);
  return;
}



/* Entry: 1086e8564; end: 1086e858b;  */

void FUN_1086e8564(undefined8 param_1)

{
  func_0x0001086e94b0();
  func_0x0001086e9418(param_1,&PTR_DAT_110a65fa0);
  func_0x0001086e92d0();
  return;
}



/* Entry: 1086e858c; end: 1086e8597;  */

undefined ** FUN_1086e858c(void)

{
  return &PTR_DAT_110a65fa0;
}



/* Entry: 1086e8598; end: 1086e861b;  */

long FUN_1086e8598(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x0001086e94bc(&PTR_SUB_110a65f40);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c328dc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(param_2 + 0x18,param_3 + 0x10);
  func_0x0001086e94fc();
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x60);
  return param_2;
}



/* Entry: 1086e861c; end: 1086e8683;  */

void FUN_1086e861c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1086e8684; end: 1086e8697;  */

void FUN_1086e8684(void)

{
  func_0x0001086e8658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e8698; end: 1086e86cb;  */

undefined8 FUN_1086e8698(undefined8 param_1)

{
  func_0x0001086e9464();
  FUN_1086e8c3c();
  return param_1;
}



/* Entry: 1086e86cc; end: 1086e86ef;  */

long FUN_1086e86cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_3;
  func_0x0001086e94bc(&PTR_SUB_110a65fc0);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c328dc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c279ac(param_3 + 0x18,param_2 + 0x18);
  func_0x0001086e94fc();
  *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_3;
}



/* Entry: 1086e86f0; end: 1086e8c07;  */

void FUN_1086e86f0(long param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar8;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long *plStack_c0;
  long **pplStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  ulong uStack_88;
  float fStack_80;
  long alStack_70 [2];
  
  uVar13 = *param_2;
  FUN_1086e861c(alStack_70,param_1 + 8);
  if (alStack_70[0] != 0) {
    if ((uVar13 >> 0x20 & 1) == 0) {
      uStack_98 = 0;
      lStack_a0 = 0;
      uStack_88 = 0;
      plStack_90 = (long *)0x0;
      fStack_80 = 1.0;
      uVar1 = param_3[1];
      for (uVar13 = *param_3; uVar13 != uVar1; uVar13 = uVar13 + 0x38) {
        uVar8 = uVar13;
        FUN_108848654();
        uVar7 = uStack_98;
        if (uStack_98 != 0) {
          uVar16 = uStack_98 - 1;
          uVar15 = (uint)uStack_98;
          if ((uStack_98 & uVar16) == 0) {
            unaff_x23 = uVar15 - 1 & uVar8;
          }
          else {
            unaff_x23 = uVar8;
            if (uStack_98 <= uVar8) {
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = (uint)uVar8 / uVar15;
              }
              unaff_x23 = (ulong)((uint)uVar8 - uVar14 * uVar15);
            }
          }
          plVar12 = *(long **)(lStack_a0 + unaff_x23 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_1086e87f8;
                uVar6 = plVar12[1];
                if (uVar6 != uVar8) break;
                plVar10 = plVar12 + 2;
                func_0x000107c28078(plVar10,uVar13);
                if (((ulong)plVar10 & 1) != 0) goto LAB_1086e8a64;
              }
              if ((uVar7 & uVar16) == 0) {
                uVar6 = uVar6 & uVar16;
              }
              else if (uVar7 <= uVar6) {
                uVar11 = 0;
                if (uVar7 != 0) {
                  uVar11 = uVar6 / uVar7;
                }
                uVar6 = uVar6 - uVar11 * uVar7;
              }
            } while (uVar6 == unaff_x23);
          }
        }
LAB_1086e87f8:
        plVar12 = (long *)0x48;
        __Znwm();
        uStack_b0 = 0;
        *plVar12 = 0;
        plVar12[1] = uVar8;
        plStack_c0 = plVar12;
        pplStack_b8 = &plStack_90;
        func_0x000107c27994(plVar12 + 2,uVar13);
        *(undefined4 *)(plVar12 + 5) = 0;
        *(undefined4 *)(plVar12 + 8) = 0;
        uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
        if ((uVar7 == 0) || (fStack_80 * (float)uVar7 < (float)(uStack_88 + 1))) {
          bVar4 = uVar7 == 3;
          func_0x0001086e9474(uVar7 << 1);
          if (bVar4) {
            unaff_x23 = 2;
          }
          else if ((unaff_x23 & extraout_x8) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          uVar16 = uStack_98;
          if (uStack_98 < unaff_x23) {
LAB_1086e8890:
            if (unaff_x23 >> 0x3d != 0) {
              func_0x000104bd35f4();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1086e8bc4);
              (*pcVar3)();
            }
            lVar5 = unaff_x23 << 3;
            __Znwm(lVar5);
            FUN_1086e8cc0(&lStack_a0,lVar5);
            for (uVar7 = 0; unaff_x23 != uVar7; uVar7 = uVar7 + 1) {
              *(undefined8 *)(lStack_a0 + uVar7 * 8) = 0;
            }
            uVar7 = unaff_x23;
            uStack_98 = unaff_x23;
            if (plStack_90 != (long *)0x0) {
              func_0x0001086e95e4();
              func_0x0001086e95d0();
              lVar5 = extraout_x8_00;
              uVar16 = extraout_x9;
              plVar10 = extraout_x10;
              uVar6 = extraout_x11;
              while (plVar9 = plVar10, plVar10 = (long *)*plVar9, plVar10 != (long *)0x0) {
                uVar11 = plVar10[1];
                if ((unaff_x23 & uVar16) == 0) {
                  uVar11 = uVar11 & uVar16;
                }
                else if (unaff_x23 <= uVar11) {
                  uVar2 = 0;
                  if (unaff_x23 != 0) {
                    uVar2 = uVar11 / unaff_x23;
                  }
                  uVar11 = uVar11 - uVar2 * unaff_x23;
                }
                if (uVar11 != uVar6) {
                  if (*(long *)(lVar5 + uVar11 * 8) == 0) {
                    *(long **)(lVar5 + uVar11 * 8) = plVar9;
                    uVar6 = uVar11;
                  }
                  else {
                    func_0x0001086e9428();
                    lVar5 = extraout_x8_01;
                    uVar16 = extraout_x9_00;
                    plVar10 = extraout_x10_00;
                    uVar6 = extraout_x11_00;
                  }
                }
              }
            }
          }
          else {
            uVar7 = uStack_98;
            if (unaff_x23 < uStack_98) {
              uVar7 = (ulong)((float)uStack_88 / fStack_80);
              if ((uStack_98 < 3) || ((uStack_98 & uStack_98 - 1) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if (1 < uVar7) {
                uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
              }
              if (unaff_x23 <= uVar7) {
                unaff_x23 = uVar7;
              }
              uVar7 = uStack_98;
              if (unaff_x23 < uVar16) {
                if (unaff_x23 != 0) goto LAB_1086e8890;
                FUN_1086e8cc0(&lStack_a0,0);
                uStack_98 = 0;
                uVar7 = 0;
              }
            }
          }
          if ((uVar7 & uVar7 - 1) == 0) {
            unaff_x23 = (int)uVar7 - 1 & uVar8;
          }
          else {
            unaff_x23 = uVar8;
            if (uVar7 <= uVar8) {
              uVar16 = 0;
              if (uVar7 != 0) {
                uVar16 = uVar8 / uVar7;
              }
              unaff_x23 = uVar8 - uVar16 * uVar7;
            }
          }
        }
        plVar10 = *(long **)(lStack_a0 + unaff_x23 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar12 = (long)plStack_90;
          *(long ***)(lStack_a0 + unaff_x23 * 8) = &plStack_90;
          plStack_90 = plVar12;
          if (*plVar12 != 0) {
            uVar8 = *(ulong *)(*plVar12 + 8);
            if ((uVar7 & uVar7 - 1) == 0) {
              uVar8 = uVar8 & uVar7 - 1;
            }
            else if (uVar7 <= uVar8) {
              uVar16 = 0;
              if (uVar7 != 0) {
                uVar16 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar16 * uVar7;
            }
            *(long **)(lStack_a0 + uVar8 * 8) = plVar12;
          }
        }
        else {
          *plVar12 = *plVar10;
          *plVar10 = (long)plVar12;
        }
        plStack_c0 = (long *)0x0;
        uStack_88 = uStack_88 + 1;
        FUN_1086e8cd8(&plStack_c0);
LAB_1086e8a64:
        lVar17 = *(long *)(uVar13 + 0x20);
        lVar5 = *(long *)(uVar13 + 0x18);
        uVar18 = *(undefined8 *)(uVar13 + 0x24);
        *(undefined8 *)((long)plVar12 + 0x3c) = *(undefined8 *)(uVar13 + 0x2c);
        *(undefined8 *)((long)plVar12 + 0x34) = uVar18;
        plVar12[6] = lVar17;
        plVar12[5] = lVar5;
      }
      uVar1 = *(ulong *)(param_1 + 0x20);
      for (uVar13 = *(ulong *)(param_1 + 0x18); uVar7 = uStack_98, uVar13 != uVar1;
          uVar13 = uVar13 + 0x18) {
        if ((uStack_98 != 0) && (uStack_88 != 0)) {
          uVar8 = uVar13;
          FUN_108848654();
          uVar16 = uVar7 - 1;
          if ((uVar7 & uVar16) == 0) {
            uVar6 = uVar8 & uVar16;
          }
          else {
            uVar6 = uVar8;
            if (uVar7 <= uVar8) {
              uVar15 = 0;
              uVar14 = (uint)uVar7;
              if (uVar14 != 0) {
                uVar15 = (uint)uVar8 / uVar14;
              }
              uVar6 = (ulong)((uint)uVar8 - uVar15 * uVar14);
            }
          }
          plVar12 = *(long **)(lStack_a0 + uVar6 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_1086e8b58;
                uVar11 = plVar12[1];
                if (uVar11 != uVar8) break;
                uVar11 = (ulong)(plVar12 + 2);
                func_0x000107c28078(uVar11,uVar13);
                if ((uVar11 & 1) != 0) {
                  func_0x0001086e93b8(alStack_70[0]);
                  goto LAB_1086e8b70;
                }
              }
              if ((uVar7 & uVar16) == 0) {
                uVar11 = uVar11 & uVar16;
              }
              else if (uVar7 <= uVar11) {
                uVar2 = 0;
                if (uVar7 != 0) {
                  uVar2 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar2 * uVar7;
              }
            } while (uVar11 == uVar6);
          }
        }
LAB_1086e8b58:
        plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffff00000000);
        uStack_a8 = 0;
        func_0x0001086e93b8(alStack_70[0]);
LAB_1086e8b70:
      }
      FUN_1086e8d18(&lStack_a0);
    }
    else {
      lVar17 = *(long *)(param_1 + 0x20);
      for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != lVar17; lVar5 = lVar5 + 0x18) {
        lStack_a0 = CONCAT44(lStack_a0._4_4_,(int)uVar13);
        uStack_88 = uStack_88 & 0xffffffff00000000;
        func_0x0001086e93b8(alStack_70[0]);
      }
    }
  }
  func_0x000107c29308(alStack_70);
  return;
}



/* Entry: 1086e8c08; end: 1086e8c2f;  */

void FUN_1086e8c08(undefined8 param_1)

{
  func_0x0001086e94b0();
  func_0x0001086e9418(param_1,&PTR_DAT_110a66030);
  func_0x0001086e92d0();
  return;
}



/* Entry: 1086e8c30; end: 1086e8c3b;  */

undefined ** FUN_1086e8c30(void)

{
  return &PTR_DAT_110a66030;
}



/* Entry: 1086e8c3c; end: 1086e8cbf;  */

long FUN_1086e8c3c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x0001086e94bc(&PTR_SUB_110a65fc0);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c328dc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c279ac(param_2 + 0x18,param_3 + 0x10);
  func_0x0001086e94fc();
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x60);
  return param_2;
}



/* Entry: 1086e8cc0; end: 1086e8cd7;  */

void FUN_1086e8cc0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086e8cd8; end: 1086e8d17;  */

long * FUN_1086e8cd8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    func_0x0001086e94a8();
  }
  return param_1;
}



/* Entry: 1086e8d18; end: 1086e8d67;  */

long * FUN_1086e8d18(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000107c27914(lVar1);
    func_0x0001086e94a8();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086e8d68; end: 1086e8da3;  */

long FUN_1086e8d68(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001086e9398(uVar1);
  return param_1;
}



/* Entry: 1086e8da4; end: 1086e8e6f;  */

long FUN_1086e8da4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x0001086e953c();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar6[1];
        if (plVar5 != plVar3) break;
        func_0x0001086e9520();
        if ((int)plVar4 != 0) {
          return (long)plVar6;
        }
      }
      if (((ulong)plVar8 & uVar9) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar9);
      }
      else if (plVar8 <= plVar5) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar8;
        }
        plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
      }
    } while (plVar5 == plVar10);
  }
  return 0;
}



/* Entry: 1086e8e70; end: 1086e8edb;  */

void FUN_1086e8e70(long param_1)

{
  long unaff_x19;
  
  func_0x0001086e938c();
  func_0x0001086e8e9c();
  FUN_108687424(param_1 + 0x78,unaff_x19 + 0x78);
  return;
}



/* Entry: 1086e8edc; end: 1086e8f07;  */

undefined1 * FUN_1086e8edc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x50] = 0;
  FUN_1086e8f08();
  return param_1;
}



/* Entry: 1086e8f08; end: 1086e8f1b;  */

void FUN_1086e8f08(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1086e7350();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



/* Entry: 1086e8f1c; end: 1086e8f37;  */

void FUN_1086e8f1c(long param_1)

{
  FUN_1086e7350();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 1086e8f38; end: 1086e8f4f;  */

void FUN_1086e8f38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086e8f50; end: 1086e9023;  */

long * FUN_1086e8f50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1086e7994(lVar1 + 0x10);
    }
    func_0x0001086e94a8();
  }
  return param_1;
}



/* Entry: 1086e9024; end: 1086e9027;  */

undefined8 * FUN_1086e9024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66050;
  func_0x0001086e7638(param_1 + 1);
  return param_1;
}



/* Entry: 1086e9028; end: 1086e903b;  */

void FUN_1086e9028(void)

{
  FUN_1086e9104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e903c; end: 1086e9073;  */

undefined8 FUN_1086e903c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm(0x20);
  FUN_1086e9130();
  return uVar1;
}



/* Entry: 1086e9074; end: 1086e9097;  */

undefined8 * FUN_1086e9074(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined4 **ppuStack_68;
  undefined4 **ppuStack_60;
  undefined1 uStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  
  *param_2 = &PTR_FUN_110a66050;
  puStack_80 = param_2 + 1;
  *puStack_80 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar5 = *(undefined4 **)(param_1 + 8);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  uStack_78 = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  if (lVar3 != 0) {
    func_0x0001086e8fb0(puStack_80,lVar3 / 0x50);
    puVar6 = (undefined4 *)param_2[2];
    puStack_70 = param_2 + 3;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_50 = puVar6;
    for (; puStack_48 = puVar6, puVar5 != puVar1; puVar5 = puVar5 + 0x14) {
      uVar2 = *puVar5;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar5 + 1);
      *puVar6 = uVar2;
      FUN_1086e9298(puVar6 + 2,puVar5 + 2);
      plVar4 = *(long **)(puVar5 + 0x10);
      if (plVar4 == (long *)0x0) {
LAB_1086e91e8:
        *(long **)(puVar6 + 0x10) = plVar4;
      }
      else {
        if ((long *)(puVar5 + 10) != plVar4) {
          (**(code **)(*plVar4 + 0x10))();
          goto LAB_1086e91e8;
        }
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 10;
        (**(code **)(**(long **)(puVar5 + 0x10) + 0x18))();
      }
      *(undefined1 *)(puVar6 + 0x12) = *(undefined1 *)(puVar5 + 0x12);
      puVar6 = puStack_48 + 0x14;
    }
    uStack_58 = 1;
    FUN_1086e7550(&puStack_70);
    param_2[2] = puVar6;
  }
  uStack_78 = 1;
  func_0x0001086e8ff8(&puStack_80);
  return param_2;
}



/* Entry: 1086e9098; end: 1086e90cf;  */

void FUN_1086e9098(long param_1)

{
  undefined1 auStack_60 [64];
  
  func_0x0001086e9360();
  FUN_1086f3d88(param_1 + 8,auStack_60);
  func_0x0001086e9358();
  return;
}



/* Entry: 1086e90d0; end: 1086e90f7;  */

void FUN_1086e90d0(undefined8 param_1)

{
  func_0x0001086e94b0();
  func_0x0001086e9418(param_1,&PTR_DAT_110a660b0);
  func_0x0001086e92d0();
  return;
}



/* Entry: 1086e90f8; end: 1086e9103;  */

undefined ** FUN_1086e90f8(void)

{
  return &PTR_DAT_110a660b0;
}



/* Entry: 1086e9104; end: 1086e912f;  */

undefined8 * FUN_1086e9104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66050;
  func_0x0001086e7638(param_1 + 1);
  return param_1;
}



/* Entry: 1086e9130; end: 1086e9297;  */

undefined8 * FUN_1086e9130(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined4 **ppuStack_68;
  undefined4 **ppuStack_60;
  undefined1 uStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  
  *param_1 = &PTR_FUN_110a66050;
  puStack_80 = param_1 + 1;
  *puStack_80 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  uStack_78 = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  if (lVar3 != 0) {
    func_0x0001086e8fb0(puStack_80,lVar3 / 0x50);
    puVar6 = (undefined4 *)param_1[2];
    puStack_70 = param_1 + 3;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_50 = puVar6;
    for (; puStack_48 = puVar6, puVar5 != puVar1; puVar5 = puVar5 + 0x14) {
      uVar2 = *puVar5;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar5 + 1);
      *puVar6 = uVar2;
      FUN_1086e9298(puVar6 + 2,puVar5 + 2);
      plVar4 = *(long **)(puVar5 + 0x10);
      if (plVar4 == (long *)0x0) {
LAB_1086e91e8:
        *(long **)(puVar6 + 0x10) = plVar4;
      }
      else {
        if ((long *)(puVar5 + 10) != plVar4) {
          (**(code **)(*plVar4 + 0x10))();
          goto LAB_1086e91e8;
        }
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 10;
        (**(code **)(**(long **)(puVar5 + 0x10) + 0x18))();
      }
      *(undefined1 *)(puVar6 + 0x12) = *(undefined1 *)(puVar5 + 0x12);
      puVar6 = puStack_48 + 0x14;
    }
    uStack_58 = 1;
    FUN_1086e7550(&puStack_70);
    param_1[2] = puVar6;
  }
  uStack_78 = 1;
  func_0x0001086e8ff8(&puStack_80);
  return param_1;
}



/* Entry: 1086e9298; end: 1086e92bb;  */

void FUN_1086e9298(long param_1,long param_2)

{
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1086e92bc; end: 1086e95f7;  */

void FUN_1086e92bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e92c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1086e95f8; end: 1086e9623;  */

long FUN_1086e95f8(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001086ebac4(param_1);
  }
  return param_1;
}



/* Entry: 1086e9624; end: 1086e9673;  */

bool FUN_1086e9624(long param_1,long param_2)

{
  int extraout_w8;
  
  func_0x0001086ebb80(*(undefined8 *)(param_2 + 0x78));
  if ((*(int *)(param_1 + 0x40) != 0xf) && (extraout_w8 != 5 || *(int *)(param_1 + 0x40) != 0x13)) {
    return false;
  }
  param_2 = param_2 + 200;
  FUN_108844954(param_2);
  return (int)param_2 == 4;
}



/* Entry: 1086e9674; end: 1086e96b7;  */

byte FUN_1086e9674(long param_1,long param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  int extraout_w8;
  
  func_0x0001086ebb80(*(undefined8 *)(param_2 + 0x78));
  bVar2 = *(int *)(param_1 + 0x40) != 6;
  ppuVar1 = *(undefined ***)(param_1 + 0x38);
  if (bVar2) {
    ppuVar1 = &PTR_PTR_113286cd8;
  }
  return (!bVar2 && extraout_w8 - 3U < 2) & *(byte *)(ppuVar1 + 2);
}



/* Entry: 1086e96b8; end: 1086e96eb;  */

void FUN_1086e96b8(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  func_0x0001086ebc80();
  param_2 = param_2 + 0x50;
  FUN_108653db8();
  FUN_108655060();
  func_0x0001086ebcec();
  func_0x0001086ebc04();
  if (*(int *)(param_2 + 0xe0) < 1) {
    return;
  }
  lVar4 = 0;
  iVar3 = *(int *)(param_2 + 0xe0);
  uVar5 = *(ulong *)(param_2 + 0xd8);
  puVar2 = (ulong *)(param_2 + 0xd8);
  if ((uVar5 & 1) != 0) {
    puVar2 = (ulong *)(uVar5 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < iVar3);
  *(undefined4 *)(param_2 + 0xe0) = 0;
  return;
}



/* Entry: 1086e96ec; end: 1086e97df;  */

void FUN_1086e96ec(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 auStack_3a0 [448];
  undefined1 auStack_1e0 [424];
  char cStack_38;
  
  if (((*(int *)(param_1 + 0x40) == 6) && (*(char *)(param_2 + 0x120) == '\x01')) &&
     (*(char *)(param_2 + 300) == '\x01' && *(int *)(param_2 + 0x128) == 1)) {
    FUN_108862e68(auStack_3a0,param_3,param_2,*(undefined8 *)(param_2 + 0x118));
    func_0x000107c28998(auStack_1e0,auStack_3a0);
    func_0x000107c28948(auStack_3a0);
    if (cStack_38 == '\x01') {
      ppuVar1 = *(undefined ***)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x40) != 6) {
        ppuVar1 = &PTR_PTR_113286cd8;
      }
      if ((*(byte *)(ppuVar1 + 2) >> 3 & 1) != 0) {
        FUN_1086e96b8(ppuVar1[6],auStack_1e0);
        (**(code **)(*param_3 + 0x10))(param_3,auStack_1e0);
      }
    }
    func_0x000107c288dc(auStack_1e0);
  }
  return;
}



/* Entry: 1086e97e0; end: 1086e981b;  */

bool FUN_1086e97e0(long param_1)

{
  if (*(int *)(param_1 + 0x40) == 0x11) {
    return (bool)(*(byte *)(*(long *)(param_1 + 0x38) + 0x10) & 1);
  }
  if (*(int *)(param_1 + 0x40) == 0x10) {
    return *(int *)(*(long *)(param_1 + 0x38) + 0x20) == 1;
  }
  return false;
}



/* Entry: 1086e981c; end: 1086ea1bb;  */

void FUN_1086e981c(ulong param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int iVar11;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 *puVar12;
  undefined **extraout_x8;
  undefined **extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long lVar14;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined **extraout_x8_05;
  undefined **ppuVar15;
  long extraout_x8_06;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined **extraout_x9_01;
  long *extraout_x9_02;
  undefined **ppuVar16;
  undefined **extraout_x9_03;
  undefined **extraout_x9_04;
  undefined **extraout_x9_05;
  undefined **extraout_x9_06;
  undefined **extraout_x9_07;
  ulong *extraout_x9_08;
  undefined **extraout_x9_09;
  long *extraout_x9_10;
  long *plVar17;
  undefined *puVar18;
  long lVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  uVar13 = param_1;
  FUN_1086e97e0();
  ppuVar6 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar6 = *(undefined ***)(param_1 + 0x18);
  }
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 4:
    func_0x0001086ebbfc();
    FUN_1086ea1bc();
    break;
  case 5:
    func_0x0001086ebbfc();
    func_0x0001086ea21c();
    break;
  case 6:
    func_0x0001086ebbfc();
    func_0x0001086ea254();
    func_0x0001086ebc6c();
    ppuVar6 = extraout_x9_01;
    if (extraout_w8_00 != 6) {
      ppuVar6 = &PTR_PTR_113286d58;
    }
    if (((ulong)ppuVar6[2] & 1) != 0) {
      func_0x0001086ebc50();
      FUN_108655060();
      func_0x0001086ebcec();
    }
    func_0x0001086ebbfc();
    FUN_1086eac18(uVar13 + 0xd8);
    break;
  case 7:
    func_0x0001086ebbfc();
    FUN_1086ea28c();
    break;
  case 8:
    ppuVar16 = &PTR_PTR_113280c30;
    if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
      ppuVar16 = *(undefined ***)(param_2 + 0x78);
    }
    func_0x000107c29dec();
    if (((ulong)ppuVar16 & 1) == 0) {
      ppuVar16 = &PTR_PTR_113280c30;
      if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
        ppuVar16 = *(undefined ***)(param_2 + 0x78);
      }
      FUN_10884269c(param_2 + 0x50,*(undefined4 *)(ppuVar16 + 0x15),ppuVar6);
      if (*(char *)(param_2 + 0x120) == '\x01') {
        *(undefined1 *)(param_2 + 0x120) = 0;
      }
      if (*(char *)(param_2 + 300) == '\x01') {
        *(undefined1 *)(param_2 + 300) = 0;
      }
    }
    break;
  case 0xb:
    func_0x0001086ebbfc();
    func_0x0001086ea310();
    break;
  case 0xc:
    func_0x0001086ebbfc();
    func_0x0001086ea348();
    break;
  case 0xd:
    func_0x0001086ebbfc();
    func_0x0001086ebc6c();
    FUN_1086ea380();
    break;
  case 0xf:
    func_0x0001086ebd1c();
    func_0x0001086ebc58();
    if (*(int *)(extraout_x8_01 + 0x1c) == 3) {
      FUN_1086ea460(*(undefined8 *)(extraout_x8_01 + 0x10),param_2);
    }
    break;
  case 0x10:
    func_0x0001086ebd1c();
    ppuVar6 = &PTR_PTR_113286d98;
    ppuVar16 = ppuVar6;
    if (extraout_x8 != (undefined **)0x0) {
      ppuVar16 = extraout_x8;
    }
    if (((ulong)ppuVar16[2] & 1) != 0) {
      func_0x0001086ebbfc();
      func_0x0001086ebc6c();
      bVar5 = extraout_w8_01 == 0x10;
      ppuVar16 = extraout_x9_03;
      if (!bVar5) {
        ppuVar16 = &PTR_PTR_113286d10;
      }
      func_0x0001086ebce0(ppuVar16);
      if (!bVar5) {
        ppuVar6 = extraout_x8_00;
      }
      func_0x0001086ebcc4(ppuVar6);
      FUN_1086ea4e8();
    }
    break;
  case 0x11:
    if (((int)uVar13 == 0) || ((*(byte *)(*(long *)(param_1 + 0x38) + 0x10) & 1) == 0)) {
      func_0x0001086ebbfc();
      FUN_1086ea6dc();
    }
    else {
      func_0x0001086ebbfc();
      uVar10 = uVar13;
      func_0x0001086ebc6c();
      bVar5 = extraout_w8_06 == 0x11;
      ppuVar16 = extraout_x9_09;
      if (!bVar5) {
        ppuVar16 = &PTR_PTR_113286d38;
      }
      func_0x0001086ebce0(ppuVar16);
      ppuVar16 = &PTR_PTR_11326ae28;
      if (!bVar5) {
        ppuVar16 = extraout_x8_05;
      }
      plVar8 = (long *)(uVar10 + 0xc0);
      func_0x0001086ebc0c(*plVar8);
      plVar17 = plVar8;
      if (!bVar5) {
        plVar17 = extraout_x9_10;
      }
      plVar1 = plVar17 + *(int *)(uVar10 + 200);
      for (lVar19 = (long)*(int *)(uVar10 + 200) << 3; plVar22 = plVar1, lVar19 != 0;
          lVar19 = lVar19 + -8) {
        lVar14 = *plVar17;
        ppuVar15 = *(undefined ***)(lVar14 + 0x18);
        ppuVar2 = &PTR_PTR_11326cb58;
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar2 = ppuVar15;
        }
        ppuVar15 = ppuVar6;
        func_0x000107c287e8(ppuVar6,ppuVar2);
        if ((int)ppuVar15 != 0) {
          ppuVar15 = *(undefined ***)(lVar14 + 0x20);
          ppuVar2 = &PTR_PTR_11326ae28;
          if (ppuVar15 != (undefined **)0x0) {
            ppuVar2 = ppuVar15;
          }
          ppuVar15 = ppuVar16;
          FUN_1086ead74(ppuVar16,ppuVar2);
          plVar22 = plVar17;
          if (((ulong)ppuVar15 & 1) != 0) break;
        }
        plVar17 = plVar17 + 1;
      }
      func_0x0001086ebbec(*(undefined8 *)(uVar13 + 0xc0));
      if (plVar22 != (long *)(extraout_x8_06 + (long)*(int *)(uVar13 + 200) * 8)) {
        FUN_1086eacd4(plVar8,plVar22);
      }
    }
    break;
  case 0x12:
    func_0x0001086ebbfc();
    bVar5 = *(int *)(param_1 + 0x40) == 0x12;
    ppuVar6 = *(undefined ***)(param_1 + 0x38);
    if (!bVar5) {
      ppuVar6 = &PTR_PTR_113286db8;
    }
    plVar8 = (long *)(uVar13 + 0xd8);
    uVar10 = uVar13;
    func_0x0001086ebc0c(*plVar8);
    plVar17 = plVar8;
    if (!bVar5) {
      plVar17 = extraout_x9_02;
    }
    plVar1 = plVar17 + *(int *)(uVar10 + 0xe0);
    lVar19 = (long)*(int *)(uVar10 + 0xe0) << 3;
    while ((plVar22 = plVar1, lVar19 != 0 &&
           (func_0x0001086ebc34(*(undefined8 *)(*plVar17 + 0x30)), plVar22 = plVar17,
           (uVar10 & 1) == 0))) {
      plVar17 = plVar17 + 1;
      lVar19 = lVar19 + -8;
    }
    func_0x0001086ebbec(*(undefined8 *)(uVar13 + 0xd8));
    uVar4 = plVar22 == (long *)(extraout_x8_02 + (long)*(int *)(uVar13 + 0xe0) * 8);
    if ((bool)uVar4) {
      func_0x0001086eae18(plVar8);
      func_0x0001086eae08();
      func_0x0001086ebd44();
code_r0x0001086ea09c:
      func_0x000107c303b4(plVar8 + 3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    }
    else {
      lVar19 = *plVar22;
      puVar20 = (ulong *)(lVar19 + 0x18);
      func_0x0001086ebc0c(*puVar20);
      if (!(bool)uVar4) {
        puVar20 = extraout_x9_08;
      }
      for (lVar14 = (long)*(int *)(lVar19 + 0x20) << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
        uVar13 = *puVar20;
        func_0x000107c278d0(uVar13,(ulong)ppuVar6[2] & 0xfffffffffffffffc);
        if ((uVar13 & 1) != 0) break;
        puVar20 = puVar20 + 1;
      }
      func_0x0001086ebbec(*(undefined8 *)(lVar19 + 0x18));
      func_0x0001086ebd80();
      if ((bool)uVar4) {
        plVar8 = (long *)*plVar22;
        goto code_r0x0001086ea09c;
      }
    }
    *(undefined1 *)(param_2 + 0x140) = 0;
    break;
  case 0x13:
    func_0x0001086ebb80(*(undefined8 *)(param_2 + 0x78));
    if (extraout_w8 == 5) {
      lVar19 = *(long *)(param_1 + 0x38);
      uVar4 = *(undefined ***)(lVar19 + 0x30) == (undefined **)0x0;
      ppuVar6 = &PTR_PTR_113280230;
      if (!(bool)uVar4) {
        ppuVar6 = *(undefined ***)(lVar19 + 0x30);
      }
      lVar14 = param_2 + 0x50;
      FUN_108667a24();
      func_0x000108655070();
      func_0x0001086eba74();
      FUN_1086eae94(lVar14 + 0x10,ppuVar6 + 2);
      lVar14 = lVar14 + 0x28;
      func_0x0001086eaea4(lVar14,ppuVar6 + 5);
      func_0x0001086ebbfc();
      plVar17 = (long *)(lVar19 + 0x18);
      func_0x0001086ebc0c(*plVar17);
      if (!(bool)uVar4) {
        plVar17 = extraout_x9;
      }
      plVar8 = plVar17 + *(int *)(lVar19 + 0x20);
      for (; uVar4 = plVar17 == plVar8, !(bool)uVar4; plVar17 = plVar17 + 1) {
        lVar19 = *plVar17;
        func_0x0001086ebc0c(*(undefined8 *)(lVar14 + 0xd8));
        plVar1 = (long *)(lVar14 + 0xd8);
        if (!(bool)uVar4) {
          plVar1 = extraout_x9_00;
        }
        plVar22 = plVar1 + *(int *)(lVar14 + 0xe0);
        for (lVar23 = (long)*(int *)(lVar14 + 0xe0) << 3; plVar21 = plVar22, lVar23 != 0;
            lVar23 = lVar23 + -8) {
          ppuVar6 = &PTR_PTR_11326cb58;
          if (*(undefined ***)(*plVar1 + 0x30) != (undefined **)0x0) {
            ppuVar6 = *(undefined ***)(*plVar1 + 0x30);
          }
          uVar4 = *(undefined ***)(lVar19 + 0x30) == (undefined **)0x0;
          ppuVar16 = &PTR_PTR_11326cb58;
          if (!(bool)uVar4) {
            ppuVar16 = *(undefined ***)(lVar19 + 0x30);
          }
          func_0x000107c287e8(ppuVar6,ppuVar16);
          plVar21 = plVar1;
          if (((ulong)ppuVar6 & 1) != 0) break;
          plVar1 = plVar1 + 1;
        }
        func_0x0001086ebbec(*(undefined8 *)(lVar14 + 0xd8));
        func_0x0001086ebd80();
        if (!(bool)uVar4) {
          lVar23 = *plVar21;
          puVar20 = (ulong *)(lVar23 + 0x18);
          puVar9 = (ulong *)(lVar19 + 0x18);
          if (*(int *)(lVar23 + 0x20) != 1 || *(int *)(lVar19 + 0x20) != 1) {
            if ((*puVar9 & 1) != 0) {
              puVar9 = (ulong *)(*puVar9 + 7);
            }
            FUN_1086eaf4c(auStack_88,puVar9,puVar9 + *(int *)(lVar19 + 0x20));
            uVar13 = (ulong)(*(int *)(lVar23 + 0x20) - 1);
            iVar11 = 0;
            do {
              lVar19 = (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 8;
              while( true ) {
                if ((int)uVar13 < iVar11) {
                  if (*(int *)(lVar23 + 0x20) == 0) {
                    func_0x0001086ebd68();
                  }
                  FUN_1086af8b0(auStack_88);
                  goto code_r0x0001086e9af0;
                }
                puVar9 = puVar20;
                if ((*puVar20 & 1) != 0) {
                  puVar9 = (ulong *)(*puVar20 + lVar19 + -1);
                }
                puVar12 = (undefined8 *)*puVar9;
                lStack_90 = (long)*(char *)((long)puVar12 + 0x17);
                puStack_98 = puVar12;
                if (lStack_90 < 0) {
                  puStack_98 = (undefined8 *)*puVar12;
                  lStack_90 = puVar12[1];
                }
                puVar7 = auStack_88;
                FUN_1086eb2ac(puVar7,&puStack_98);
                if (puVar7 == (undefined1 *)0x0) break;
                FUN_1086eb3a0(puVar20);
                uVar13 = (ulong)((int)uVar13 - 1);
                lVar19 = lVar19 + -8;
              }
              func_0x0001053a9198(puVar20,iVar11,uVar13);
              iVar11 = iVar11 + 1;
            } while( true );
          }
          if ((*puVar20 & 1) != 0) {
            puVar20 = (ulong *)(*puVar20 + 7);
          }
          uVar13 = *puVar20;
          if ((*puVar9 & 1) != 0) {
            puVar9 = (ulong *)(*puVar9 + 7);
          }
          func_0x000107c278d0(uVar13,*puVar9);
          if ((int)uVar13 != 0) {
            func_0x0001086ebd68();
          }
        }
code_r0x0001086e9af0:
      }
    }
    break;
  case 0x14:
    func_0x0001086ebc50();
    FUN_1086eb3c8();
    func_0x0001086ebc6c();
    func_0x0001086ebd8c();
    break;
  case 0x15:
    ppuVar16 = *(undefined ***)(*(long *)(param_1 + 0x38) + 0x18);
    ppuVar6 = &PTR_PTR_113386730;
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar6 = ppuVar16;
    }
    puVar18 = ppuVar6[8];
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20);
    func_0x0001086ebc50();
    FUN_1086eb3c8();
    func_0x0001086eb44c();
    lVar19 = uVar13 + 0x10;
    FUN_1086eb4c4();
    lVar14 = lVar19;
    FUN_1086eb480();
    *(undefined **)(lVar14 + 0x10) = puVar18;
    *(undefined4 *)(lVar19 + 0x20) = uVar3;
    break;
  case 0x16:
    func_0x0001086ebc50();
    iVar11 = *(int *)(uVar13 + 0xc0);
    func_0x0001086ebc50();
    if (iVar11 == 0xe) {
      func_0x0001086eb578();
    }
    else {
      if (*(int *)(uVar13 + 0xc0) != 0xd) break;
      func_0x0001086ebc50();
      func_0x0001086eb608();
    }
    *(undefined4 *)(uVar13 + 0x10) = 2;
    break;
  case 0x17:
    func_0x0001086ebc50();
    func_0x0001086ebc6c();
    ppuVar6 = extraout_x9_04;
    if (extraout_w8_02 != 0x17) {
      ppuVar6 = &PTR_PTR_113286ca0;
    }
    uVar10 = *(ulong *)(uVar13 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    lVar19 = uVar13 + 0x60;
    func_0x000107c30248(lVar19,(ulong)ppuVar6[3] & 0xfffffffffffffffc,uVar10);
    func_0x0001086ebc6c();
    ppuVar6 = extraout_x9_05;
    if (extraout_w8_03 != 0x17) {
      ppuVar6 = &PTR_PTR_113286ca0;
    }
    ppuVar16 = extraout_x9_05;
    iVar11 = extraout_w8_03;
    if (((ulong)ppuVar6[2] & 1) != 0) {
      func_0x0001086ebc50();
      FUN_108655060();
      func_0x0001086ebcec();
      func_0x0001086ebc6c();
      ppuVar16 = extraout_x9_06;
      iVar11 = extraout_w8_04;
    }
    if (iVar11 != 0x17) {
      ppuVar16 = &PTR_PTR_113286ca0;
    }
    if ((*(byte *)(ppuVar16 + 2) >> 1 & 1) != 0) {
      puVar18 = ppuVar16[5];
      func_0x0001086ebbfc();
      lVar19 = lVar19 + 0x60;
      FUN_1086e95f8(lVar19,puVar18 + 0x10);
    }
    func_0x0001086ebbfc();
    *(undefined1 *)(lVar19 + 0x141) = 1;
    func_0x0001086ebc6c();
    ppuVar6 = extraout_x9_07;
    if (extraout_w8_05 != 0x17) {
      ppuVar6 = &PTR_PTR_113286ca0;
    }
    if ((*(byte *)(ppuVar6 + 2) >> 2 & 1) != 0) {
      func_0x0001086ebbfc();
      *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | 4;
      uVar13 = *(ulong *)(lVar19 + 0x118);
      if (uVar13 == 0) {
        uVar13 = *(ulong *)(lVar19 + 8);
        if ((uVar13 & 1) != 0) {
          func_0x0001086ebc18();
        }
        func_0x0001086d1018();
        *(ulong *)(lVar19 + 0x118) = uVar13;
      }
      FUN_108927a18();
      func_0x0001086ebbfc();
      *(undefined1 *)(uVar13 + 0x141) = 0;
    }
    break;
  case 0x18:
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) | 0x40;
    uVar13 = *(ulong *)(param_2 + 0x98);
    if (uVar13 == 0) {
      uVar13 = *(ulong *)(param_2 + 0x58);
      if ((uVar13 & 1) != 0) {
        func_0x0001086ebc18();
      }
      func_0x0001086eb690();
      *(ulong *)(param_2 + 0x98) = uVar13;
    }
    *(undefined1 *)(uVar13 + 0x1c) = 1;
    break;
  case 0x19:
    func_0x0001086ebbfc();
    *(undefined1 *)(uVar13 + 0x142) = 1;
    break;
  case 0x1a:
    func_0x0001086ebc50();
    FUN_1086ea75c();
    break;
  case 0x1b:
    lVar19 = *(long *)(param_1 + 0x38);
    plVar17 = (long *)(param_2 + 0x50);
    FUN_1086eb714();
    if (*(int *)((long)plVar17 + 0x34) == 4) {
code_r0x0001086ea014:
      FUN_1086eb724(plVar17,lVar19);
    }
    else {
      if (*(int *)((long)plVar17 + 0x34) == 5) {
        plVar8 = plVar17;
        plVar17 = (long *)plVar17[5];
      }
      else {
        if ((*(int *)((long)plVar17 + 0x24) == 1) || (*(int *)((long)plVar17 + 0x24) != 2))
        goto code_r0x0001086ea014;
        FUN_10891a790(plVar17);
        *(undefined4 *)((long)plVar17 + 0x34) = 5;
        plVar8 = (long *)plVar17[1];
        if (((ulong)plVar8 & 1) != 0) {
          func_0x0001086ebc18();
        }
        func_0x0001086eb8b4();
        plVar17[5] = (long)plVar8;
        plVar17 = plVar8;
      }
      uVar13 = 0;
      puVar20 = (ulong *)(plVar17 + 2);
      while ((int)uVar13 < (int)plVar17[3]) {
        puVar9 = puVar20;
        if ((*puVar20 & 1) != 0) {
          puVar9 = (ulong *)(*puVar20 + uVar13 * 8 + 7);
        }
        func_0x0001086ebc34(*(undefined8 *)(*puVar9 + 0x18));
        if ((int)plVar8 == 0) {
          uVar13 = (ulong)((int)uVar13 + 1);
        }
        else {
          func_0x0001053a9198(puVar20,uVar13,(int)plVar17[3] + -1);
          lVar14 = (long)(int)plVar17[3] + -1;
          *(int *)(plVar17 + 3) = (int)lVar14;
          puVar9 = puVar20;
          if ((plVar17[2] & 1U) != 0) {
            puVar9 = (ulong *)(plVar17[2] + lVar14 * 8 + 7);
          }
          plVar8 = (long *)*puVar9;
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      if ((*(byte *)(lVar19 + 0x10) & 1) != 0) {
        func_0x000107c303b0(puVar20,0x1086eb8e8);
        puVar9 = puVar20;
        func_0x0001086ebc8c();
        if (puVar9 == (ulong *)0x0) {
          uVar13 = puVar20[1];
          if ((uVar13 & 1) != 0) {
            func_0x0001086ebc18();
          }
          func_0x000107c287e0();
          puVar20[3] = uVar13;
        }
        func_0x0001086ebd44();
        func_0x0001086ebd74(*(undefined8 *)(lVar19 + 0x18));
        *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(extraout_x8_03 + 0x10);
      }
    }
  }
  func_0x0001086ebd04(*(undefined8 *)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0xe8) = extraout_x8_04;
  return;
}



/* Entry: 1086ea1bc; end: 1086ea21b;  */

void FUN_1086ea1bc(long param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x18;
  FUN_1086eac2c();
  if ((uVar1 & 1) == 0) {
    FUN_10866ea00(param_1 + 0x18);
    func_0x0001088bf408();
  }
  else if (param_4 == 0) {
    return;
  }
  if ((param_3 != 0) || (*(long *)(param_1 + 0x128) == 0)) {
    *(long *)(param_1 + 0x128) = param_3;
  }
  return;
}



/* Entry: 1086ea21c; end: 1086ea28b;  */

void FUN_1086ea21c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086ebc80();
  uVar2 = param_1 + 0x30;
  FUN_1086eac2c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = unaff_x20 + 0x30;
  FUN_10866ea00();
  if (unaff_x19 == lVar1) {
    return;
  }
  FUN_1088bf358();
  uVar2 = *(ulong *)(unaff_x19 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(lVar1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(lVar1 + 0x10,uVar2,uVar3);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1086ea28c; end: 1086ea30f;  */

ulong FUN_1086ea28c(ulong param_1,long param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long *extraout_x9;
  long *extraout_x9_00;
  long unaff_x20;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 0x48);
  func_0x0001086ebc0c(*plVar2);
  plVar3 = plVar2;
  if (!(bool)in_ZR) {
    plVar3 = extraout_x9;
  }
  while( true ) {
    func_0x0001086ebc0c();
    plVar1 = plVar2;
    if (!(bool)in_ZR) {
      plVar1 = extraout_x9_00;
    }
    func_0x0001086ebd80(plVar1);
    if ((bool)in_ZR) break;
    param_1 = *(ulong *)(*plVar3 + 0x10) & 0xfffffffffffffffc;
    func_0x000107c278d0(param_1,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if ((int)param_1 != 0) {
      func_0x000107c324c0(*plVar2,plVar2,plVar3,plVar3 + 1);
      func_0x0001086b09a4();
      FUN_1086af2c8();
      func_0x0001086b006c();
      return extraout_x8 + ((unaff_x20 << 0x1d) >> 0x1d);
    }
    plVar3 = plVar3 + 1;
  }
  return param_1;
}



/* Entry: 1086ea310; end: 1086ea37f;  */

void FUN_1086ea310(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086ebc80();
  uVar2 = param_1 + 0x78;
  FUN_1086eac2c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = unaff_x20 + 0x78;
  FUN_10866ea00();
  if (unaff_x19 == lVar1) {
    return;
  }
  FUN_1088bf358();
  uVar2 = *(ulong *)(unaff_x19 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(lVar1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(lVar1 + 0x10,uVar2,uVar3);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1086ea380; end: 1086ea45f;  */

void FUN_1086ea380(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long *extraout_x9;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)(param_1 + 0xf0);
  uVar3 = param_1;
  func_0x0001086ebc0c(*plVar4);
  plVar2 = plVar4;
  if (!(bool)in_ZR) {
    plVar2 = extraout_x9;
  }
  plVar1 = plVar2 + *(int *)(param_1 + 0xf8);
  lVar6 = (long)*(int *)(param_1 + 0xf8) << 3;
  while ((plVar5 = plVar1, lVar6 != 0 &&
         (func_0x0001086ebc34(*(undefined8 *)(*plVar2 + 0x18)), plVar5 = plVar2, (uVar3 & 1) == 0)))
  {
    plVar2 = plVar2 + 1;
    lVar6 = lVar6 + -8;
  }
  func_0x0001086ebbec(*(undefined8 *)(param_1 + 0xf0));
  if (plVar5 == (long *)(extraout_x8 + (long)*(int *)(param_1 + 0xf8) * 8)) {
    func_0x000107c303b0(plVar4,FUN_1086eac88);
    plVar2 = plVar4;
    func_0x0001086ebc8c();
    if (plVar2 == (long *)0x0) {
      uVar3 = plVar4[1];
      if ((uVar3 & 1) != 0) {
        func_0x0001086ebc18();
      }
      func_0x000107c287e0();
      plVar4[3] = uVar3;
    }
    func_0x0001086ebd44();
  }
  else {
    plVar4 = (long *)*plVar5;
  }
  *(undefined4 *)(plVar4 + 4) = param_3;
  return;
}



/* Entry: 1086ea460; end: 1086ea4e7;  */

void FUN_1086ea460(long param_1,long param_2)

{
  ulong uVar1;
  
  param_2 = param_2 + 0x50;
  FUN_108653db8();
  FUN_108655060();
  func_0x0001086565dc();
  if (param_2 != param_1) {
    FUN_1086eacc0(param_2 + 0x10);
    if (*(int *)(param_1 + 0x18) != 0) {
      func_0x000107c303c4(param_2 + 0x10,param_1 + 0x10);
    }
  }
  uVar1 = *(ulong *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c30250(param_2 + 0x38,uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return;
}



/* Entry: 1086ea4e8; end: 1086ea6db;  */

void FUN_1086ea4e8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  uint param_6)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **extraout_x8;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  plVar6 = (long *)(param_1 + 0xc0);
  func_0x0001086ebc0c(*plVar6);
  plVar8 = plVar6;
  if (!(bool)in_ZR) {
    plVar8 = extraout_x9;
  }
  if ((param_6 & 1) == 0) {
    while( true ) {
      func_0x0001086ebc0c();
      plVar3 = plVar6;
      if (!(bool)in_ZR) {
        plVar3 = extraout_x9_00;
      }
      in_ZR = plVar8 == plVar3 + *(int *)(param_1 + 200);
      if ((bool)in_ZR) break;
      func_0x0001086ebce0(*plVar8);
      ppuVar1 = &PTR_PTR_11326cb58;
      if (!(bool)in_ZR) {
        ppuVar1 = extraout_x8;
      }
      uVar4 = param_2;
      func_0x000107c287e8(param_2,ppuVar1);
      if ((int)uVar4 == 0) {
        plVar8 = plVar8 + 1;
      }
      else {
        plVar3 = plVar6;
        FUN_1086eacd4(plVar6,plVar8);
        plVar8 = plVar3;
      }
    }
  }
  else {
    plVar3 = plVar8 + *(int *)(param_1 + 200);
    for (lVar10 = (long)*(int *)(param_1 + 200) << 3; plVar9 = plVar3, lVar10 != 0;
        lVar10 = lVar10 + -8) {
      lVar7 = *plVar8;
      ppuVar5 = *(undefined ***)(lVar7 + 0x18);
      in_ZR = ppuVar5 == (undefined **)0x0;
      ppuVar1 = &PTR_PTR_11326cb58;
      if (!(bool)in_ZR) {
        ppuVar1 = ppuVar5;
      }
      uVar4 = param_2;
      func_0x000107c287e8(param_2,ppuVar1);
      if ((int)uVar4 != 0) {
        ppuVar5 = *(undefined ***)(lVar7 + 0x20);
        in_ZR = ppuVar5 == (undefined **)0x0;
        ppuVar1 = &PTR_PTR_11326ae28;
        if (!(bool)in_ZR) {
          ppuVar1 = ppuVar5;
        }
        uVar2 = param_3;
        FUN_1086ead74(param_3,ppuVar1);
        plVar9 = plVar8;
        if ((uVar2 & 1) != 0) break;
      }
      plVar8 = plVar8 + 1;
    }
    func_0x0001086ebc0c(*(undefined8 *)(param_1 + 0xc0));
    plVar8 = plVar6;
    if (!(bool)in_ZR) {
      plVar8 = extraout_x9_01;
    }
    if (plVar9 != plVar8 + *(int *)(param_1 + 200)) {
      FUN_1086eacd4(plVar6,plVar9);
    }
  }
  ppuStack_90 = &PTR_FUN_110a958c0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_80._0_4_ = 1;
  uStack_80._4_4_ = 0;
  uVar4 = 0;
  func_0x000107c287e0();
  uStack_78 = uVar4;
  func_0x0001088bf408();
  uStack_80 = CONCAT44(uStack_80._4_4_,(undefined4)uStack_80) | 2;
  if (uStack_70 == 0) {
    uVar2 = uStack_88;
    if ((uStack_88 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086ab0dc();
    uStack_70 = uVar2;
  }
  FUN_1088b85b0();
  if ((param_5 & 1) != 0) {
    uStack_68 = param_4;
  }
  func_0x000107c303b0(plVar6,FUN_1086eadcc);
  FUN_108921988();
  FUN_108921724(&ppuStack_90);
  return;
}



/* Entry: 1086ea6dc; end: 1086ea75b;  */

void FUN_1086ea6dc(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x9;
  int unaff_w19;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  func_0x0001086ebc80();
  puVar3 = (undefined8 *)(param_1 + 0xc0);
  func_0x0001086ebc0c(*puVar3);
  puVar4 = puVar3;
  if (!(bool)in_ZR) {
    puVar4 = extraout_x9;
  }
  while( true ) {
    func_0x0001086ebbec();
    func_0x0001086ebd80();
    if ((bool)in_ZR) break;
    func_0x0001086ebce0(*puVar4);
    iVar1 = unaff_w19;
    func_0x000107c287e8();
    if (iVar1 == 0) {
      puVar4 = puVar4 + 1;
    }
    else {
      puVar2 = puVar3;
      FUN_1086eacd4(puVar3,puVar4);
      puVar4 = puVar2;
    }
  }
  return;
}



/* Entry: 1086ea75c; end: 1086ea7df;  */

void FUN_1086ea75c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong uVar4;
  
  func_0x0001086ebc80();
  if (*(int *)(param_1 + 0xc0) == 0x15) {
    uVar4 = *(ulong *)(unaff_x20 + 0xb8);
  }
  else {
    func_0x00010890c604();
    *(undefined4 *)(unaff_x20 + 0xc0) = 0x15;
    uVar4 = *(ulong *)(unaff_x20 + 8);
    if ((uVar4 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086eb6e0();
    *(ulong *)(unaff_x20 + 0xb8) = uVar4;
  }
  uVar2 = uVar4 + 0x10;
  FUN_1086eac2c();
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = uVar4 + 0x10;
  FUN_10866ea00();
  if (unaff_x19 == lVar1) {
    return;
  }
  FUN_1088bf358();
  uVar4 = *(ulong *)(unaff_x19 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(lVar1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(lVar1 + 0x10,uVar4,uVar2);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}


