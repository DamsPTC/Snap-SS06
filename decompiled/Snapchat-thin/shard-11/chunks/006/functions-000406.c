/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108761b14; end: 108761c3b;  */

void FUN_108761b14(long param_1)

{
  long alStack_240 [3];
  undefined1 auStack_228 [304];
  undefined1 auStack_f8 [64];
  byte bStack_b8;
  undefined1 auStack_58 [48];
  byte bStack_28;
  
  func_0x000107c29820(alStack_240);
  FUN_10885ef30(auStack_228,*(undefined8 *)(alStack_240[0] + 0x60),*(undefined8 *)(param_1 + 0x90));
  FUN_108663a10(auStack_58,auStack_228);
  FUN_108656820(auStack_228);
  func_0x0001087628b4();
  if ((bStack_28 & 1) != 0) {
    func_0x000108762844(alStack_240);
    func_0x000107c29f60(auStack_228,*(undefined8 *)(alStack_240[0] + 0x60),auStack_58,0);
    func_0x0001087628b4();
    if ((bStack_b8 & 1) == 0) {
      func_0x000107c278b8(alStack_240,&DAT_10f4bdff0);
      func_0x000107c27b9c(auStack_f8,alStack_240);
      func_0x000108762a10();
      func_0x000108762844(alStack_240);
      FUN_10885ff98(*(undefined8 *)(alStack_240[0] + 0x60),auStack_228);
      func_0x0001087628b4();
    }
    func_0x000107c287e4(auStack_228);
  }
  func_0x000108762980();
  return;
}



/* Entry: 108761c3c; end: 108761c3f;  */

undefined8 * FUN_108761c3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b598;
  func_0x00010866e4e8(param_1 + 0x57);
  func_0x00010086ab34(param_1 + 0x50);
  func_0x000107c287e4(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108761c40; end: 108761c53;  */

void FUN_108761c40(void)

{
  FUN_108762568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108761c54; end: 108761c5b;  */

undefined8 FUN_108761c54(void)

{
  return 0;
}



/* Entry: 108761c5c; end: 108761ccf;  */

long FUN_108761c5c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x0001087629a0();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  lVar1 = param_1;
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000108762968();
  func_0x0001087628a0(uStack_28);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010876292c();
  func_0x000107c27914();
  func_0x00010876284c();
  func_0x000107c297ac(lVar1 + 0x18);
  func_0x000100562400();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 108761cd0; end: 108761cf7;  */

undefined8 FUN_108761cd0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108761cf8; end: 108761cfb;  */

void FUN_108761cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108761cfc; end: 108761d0f;  */

void FUN_108761cfc(void)

{
  FUN_108762054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108761d10; end: 108761d1f;  */

void FUN_108761d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108761d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108761d20; end: 108761d7b;  */

long FUN_108761d20(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 108761d7c; end: 108761d9f;  */

void FUN_108761d7c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108761da0; end: 108761def;  */

void FUN_108761da0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [40];
  undefined4 uStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_1088f8d10(auStack_50,0,param_1);
  uStack_28 = 0;
  FUN_108760cfc(uVar1,auStack_50);
  FUN_108761df0(auStack_50);
  return;
}



/* Entry: 108761df0; end: 108761e43;  */

void FUN_108761df0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a6b660)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 108761e44; end: 108761e7f;  */

undefined8 FUN_108761e44(undefined8 param_1,undefined8 param_2)

{
  func_0x000108901ab8();
  FUN_1088f8d9c(param_2);
  return param_2;
}



/* Entry: 108761e80; end: 108761e93;  */

void FUN_108761e80(void)

{
  func_0x000108762020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108761e94; end: 108761eab;  */

void FUN_108761e94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 108761eac; end: 108761eeb;  */

void FUN_108761eac(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000108762a04();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x000108761ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 108761eec; end: 108761f8f;  */

void FUN_108761eec(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x000108762a04();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      func_0x0001087629f0(*(undefined8 *)(unaff_x20 + 0x98),param_4);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 108761f90; end: 108761f93;  */

undefined8 * FUN_108761f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b720;
  func_0x0001087629e8(param_1[8]);
  func_0x0001087629e8(param_1[2]);
  return param_1;
}



/* Entry: 108761f94; end: 108761fa7;  */

void FUN_108761f94(void)

{
  FUN_108761fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108761fa8; end: 108761fe3;  */

void FUN_108761fa8(void)

{
  return;
}



/* Entry: 108761fe4; end: 108762053;  */

undefined8 * FUN_108761fe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b720;
  func_0x0001087629e8(param_1[8]);
  func_0x0001087629e8(param_1[2]);
  return param_1;
}



/* Entry: 108762054; end: 108762063;  */

void FUN_108762054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108762064; end: 1087620fb;  */

void FUN_108762064(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [72];
  undefined4 auStack_50 [10];
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_98,param_3);
  FUN_10875bbdc(auStack_98,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  auStack_50[0] = param_1;
  FUN_108770c94();
  uStack_28 = 1;
  FUN_108760cfc(uVar2,auStack_50);
  FUN_108761df0(auStack_50);
  func_0x000107c29564(auStack_98);
  return;
}



/* Entry: 1087620fc; end: 10876211b;  */

void FUN_1087620fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108761cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876211c; end: 108762133;  */

void FUN_10876211c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108762134; end: 1087621bf;  */

void FUN_108762134(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_10876220c(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1087621c0; end: 10876220b;  */

long * FUN_1087621c0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10872cab8();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 10876220c; end: 10876229f;  */

void FUN_10876220c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    FUN_1087622d0(param_4,lVar1);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  FUN_1087622a0(param_1,param_2,param_3);
  FUN_10872c9d4(&uStack_60);
  return;
}



/* Entry: 1087622a0; end: 1087622cf;  */

void FUN_1087622a0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_1088ff424();
  }
  return;
}



/* Entry: 1087622d0; end: 1087622db;  */

undefined8 * FUN_1087622d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a8e3d8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_108762318(param_1,param_2);
  return param_1;
}



/* Entry: 1087622dc; end: 108762317;  */

undefined8 * FUN_1087622dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a8e3d8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_108762318(param_1,param_3);
  return param_1;
}



/* Entry: 108762318; end: 10876237b;  */

long FUN_108762318(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1088ff62c(param_1);
    }
    else {
      FUN_1088ff5fc(param_1);
    }
  }
  return param_1;
}



/* Entry: 10876237c; end: 1087623a7;  */

long * FUN_10876237c(long *param_1)

{
  FUN_1087623a8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087623a8; end: 1087623af;  */

void FUN_1087623a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    FUN_1088ff424();
  }
  return;
}



/* Entry: 1087623b0; end: 1087623e7;  */

void FUN_1087623b0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    FUN_1088ff424();
  }
  return;
}



/* Entry: 1087623e8; end: 108762413;  */

void FUN_1087623e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_108762414(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 108762414; end: 10876245f;  */

undefined1  [16]
FUN_108762414(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_108762460(param_4,*param_2);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108762460; end: 10876249b;  */

long FUN_108762460(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10876249c();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    FUN_1087624d0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x28;
}



/* Entry: 10876249c; end: 1087624cf;  */

void FUN_10876249c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10872c9c8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x28;
  return;
}



/* Entry: 1087624d0; end: 108762567;  */

long FUN_1087624d0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10872c978(param_1,(param_1[1] - *param_1) / 0x28 + 1);
  FUN_1087621c0(auStack_58,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
  FUN_10872c9c8(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x28;
  func_0x000108762a20();
  lVar2 = param_1[1];
  func_0x000108762978();
  return lVar2;
}



/* Entry: 108762568; end: 10876262b;  */

undefined8 * FUN_108762568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b598;
  func_0x00010866e4e8(param_1 + 0x57);
  func_0x00010086ab34(param_1 + 0x50);
  func_0x000107c287e4(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876262c; end: 10876263f;  */

void FUN_10876262c(void)

{
  func_0x000108762600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108762640; end: 108762667;  */

void FUN_108762640(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_SUB_110a6b780;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000108762878();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 108762668; end: 108762693;  */

void FUN_108762668(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110a6b780;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000108762878();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 108762694; end: 10876279f;  */

void FUN_108762694(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined8 uStack_224;
  long alStack_210 [3];
  undefined1 auStack_1f8 [464];
  char cStack_28;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_228 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  uStack_238 = param_2[3];
  uStack_230 = (undefined4)param_2[4];
  uStack_22c = (undefined4)((ulong)param_2[4] >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  uStack_224._4_4_ = (int)((ulong)uVar3 >> 0x20);
  uStack_224 = uVar3;
  if (uStack_224._4_4_ == 1) {
    func_0x000108762844(alStack_210);
    func_0x000107c29f64(auStack_1f8,*(undefined8 *)(alStack_210[0] + 0x60),lVar2 + 0xb0,2);
    func_0x000107c297b0(alStack_210);
    if (cStack_28 == '\x01') {
      alStack_210[0] = 0;
      alStack_210[1] = 0;
      alStack_210[2] = 0;
      func_0x000108762a18();
      func_0x00010867b9fc(alStack_210);
    }
    func_0x000108762970();
    func_0x000107c288c8(auStack_1f8);
  }
  else {
    puVar1 = &uStack_238;
    FUN_1086d44b0();
    FUN_10875ebcc(lVar2,*(undefined4 *)puVar1);
  }
  func_0x000108762968();
  return;
}



/* Entry: 1087627a0; end: 1087627d7;  */

long FUN_1087627a0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6b7e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087627d8; end: 108762a57;  */

undefined ** FUN_1087627d8(void)

{
  return &PTR_DAT_110a6b7e0;
}



/* Entry: 108762a58; end: 108762c33;  */

undefined1 * FUN_108762a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_108 [24];
  undefined8 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [40];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = 0;
  lStack_58 = 0;
  ppuStack_70 = &PTR_FUN_110a609a8;
  uStack_68 = 0;
  uStack_50 = 600;
  pppuVar3 = &ppuStack_70;
  func_0x000108765994(pppuVar3,0x1b4);
  func_0x000107c2884c(auStack_98,pppuVar3);
  func_0x000107c2882c(&ppuStack_70);
  lVar4 = param_1 + 0x20;
  FUN_108764278(lVar4,param_2);
  if (lVar4 == 0) {
    FUN_108762d14(param_1 + 0x20,param_2);
    FUN_108762d38();
    func_0x000108765910(auStack_c8);
    func_0x000108764668(&uStack_b0,param_1);
    lVar4 = 0x38;
    lStack_a0 = param_1;
    __Znwm();
    func_0x0001087659a4();
    func_0x000107c27994();
    *(undefined8 *)(lVar4 + 0x28) = uStack_a8;
    *(undefined8 *)(lVar4 + 0x20) = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    *(long *)(lVar4 + 0x30) = lStack_a0;
    lStack_58 = lVar4;
    func_0x000108762d74(auStack_c8);
    func_0x000108765984(*param_4,&ppuStack_70);
    FUN_108762ca4(auStack_98,0x4801b9);
    func_0x000108765900();
    func_0x00010865f8f8(&ppuStack_70);
  }
  else {
    FUN_108762d38(lVar4 + 0x28,param_3);
    FUN_108762ca4(auStack_98,0x4801b8);
    func_0x000108765900();
    lVar4 = param_1;
  }
  puVar5 = auStack_98;
  func_0x000107c2882c();
  uVar1 = uStack_48 <= *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_48;
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  __ZdlPv(lVar4);
  func_0x000108762d74(auStack_c8);
  func_0x000107c2882c(auStack_98);
  func_0x000108765674();
  pcStack_d8 = FUN_108762c34;
  puStack_f0 = param_4;
  puStack_e8 = puVar5;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000108765af8();
  if (!(bool)uVar1 || (bool)uVar2) {
    func_0x000108765ad8();
  }
  func_0x000107c278b8(auStack_108);
  func_0x000108765a74();
  func_0x0001087656d0();
  return puVar5;
}



/* Entry: 108762c34; end: 108762ca3;  */

void FUN_108762c34(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x000108765af8();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108765ad8();
  }
  func_0x000107c278b8(auStack_38);
  func_0x000108765a74();
  func_0x0001087656d0();
  return;
}



/* Entry: 108762ca4; end: 108762d13;  */

void FUN_108762ca4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x000108765af8();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108765ad8();
  }
  func_0x000107c278b8(auStack_38);
  func_0x000108765a74();
  func_0x0001087656d0();
  return;
}



/* Entry: 108762d14; end: 108762d37;  */

long FUN_108762d14(long param_1)

{
  func_0x0001087659f0();
  FUN_10876431c();
  return param_1 + 0x28;
}



/* Entry: 108762d38; end: 108762d93;  */

long FUN_108762d38(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1087638c8();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_1087638f8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 108762d94; end: 108762ee7;  */

void FUN_108762d94(void)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  
  func_0x000108765748();
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 600;
  pppuVar2 = &ppuStack_90;
  func_0x000108765994(pppuVar2,0x1b5);
  func_0x000107c2884c(auStack_68,pppuVar2);
  func_0x000107c2882c(&ppuStack_90);
  lVar3 = unaff_x22 + 0x48;
  FUN_108764940();
  if (lVar3 == 0) {
    FUN_108762ee8(unaff_x22 + 0x48);
    FUN_108762f0c();
    func_0x000108764668(&ppuStack_90);
    FUN_108762fb0(auStack_98);
    FUN_108762f50();
    func_0x000108765bd8();
    if (unaff_x20 != 0) {
      func_0x000108765668();
    }
    func_0x000107c297b8(&ppuStack_90);
    uVar1 = 0x4801b9;
  }
  else {
    FUN_108762f0c(lVar3 + 0x28);
    uVar1 = 0x4801b8;
  }
  FUN_108762ca4(auStack_68,uVar1);
  func_0x000108765900();
  func_0x000107c2882c(auStack_68);
  return;
}



/* Entry: 108762ee8; end: 108762f0b;  */

long FUN_108762ee8(long param_1)

{
  func_0x0001087659f0();
  FUN_108763f2c();
  return param_1 + 0x28;
}



/* Entry: 108762f0c; end: 108762f4f;  */

undefined8 * FUN_108762f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  
  func_0x000107c332dc();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    uVar2 = *param_2;
    *param_2 = 0;
    puVar1 = param_1 + 1;
    *param_1 = uVar2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_108763c04();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 108762f50; end: 108762faf;  */

void FUN_108762f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (code *)*param_1;
  uStack_28 = *param_2;
  *param_2 = 0;
  puVar1 = &uStack_28;
  (*pcVar2)(puVar1,param_1);
  func_0x000108765bd8();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000108765668();
  }
  return;
}



/* Entry: 108762fb0; end: 108762ff7;  */

void FUN_108762fb0(undefined8 *param_1,undefined8 param_2)

{
  func_0x000108765a60();
  FUN_1087649e4();
  *param_1 = param_2;
  return;
}



/* Entry: 108762ff8; end: 10876321f;  */

void FUN_108762ff8(void)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  
  ppuVar3 = &puStack_c0;
  func_0x000108765748();
  func_0x0001087658bc();
  puVar1 = &uStack_80;
  func_0x000108765994(puVar1,0x1b6);
  func_0x000107c2884c(auStack_a8,puVar1);
  func_0x000107c2882c(&uStack_80);
  puVar1 = unaff_x22 + 0xe;
  FUN_108764d18();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_108763220(unaff_x22 + 0xe);
    func_0x0001087659b4();
    if ((bool)in_CY) {
      FUN_108763d6c(0,((long)unaff_x26 - lRam0000000000000000 >> 4) + 1);
      func_0x000108765ccc(puRam0000000000000008);
      FUN_108763dc0(&uStack_80);
      func_0x000108765a90();
      func_0x000108765c44();
      FUN_108763d94();
      puVar1 = puRam0000000000000008;
      func_0x000108765a20();
      puVar2 = puStack_70;
    }
    else {
      puVar2 = unaff_x26;
      func_0x000108765a90();
      puVar1 = unaff_x26 + 2;
    }
    puRam0000000000000008 = puVar1;
    func_0x000108765a28();
    func_0x000108765a60();
    *puVar2 = &PTR_FUN_110a6b938;
    func_0x000107c27994(puVar2 + 1);
    puVar2[5] = lStack_78;
    puVar2[4] = uStack_80;
    if (lStack_78 != 0) {
      do {
        func_0x000108765880();
      } while (extraout_w10 != 0);
    }
    puStack_c0 = puVar2;
    func_0x000108765984(*unaff_x20);
    func_0x000108765bcc();
    if (ppuVar3 != (undefined8 **)0x0) {
      func_0x00010876571c();
    }
    func_0x00010876595c();
  }
  else {
    func_0x000108765a90(&puStack_c0);
    func_0x000108765ac4();
    if ((bool)in_CY) {
      func_0x000108765cd8();
      FUN_108763d6c();
      func_0x000108765ccc(puVar1[6]);
      FUN_108763dc0(&uStack_80);
      func_0x00010876592c();
      FUN_108763d94();
      func_0x000108765a20();
    }
    else {
      unaff_x22[1] = uStack_b8;
      *unaff_x22 = puStack_c0;
      puStack_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
    }
    func_0x000108765c88();
    func_0x000108764cf4();
  }
  func_0x000108765a14();
  func_0x000108765900();
  func_0x000107c2882c(auStack_a8);
  return;
}



/* Entry: 108763220; end: 10876345f;  */

long * FUN_108763220(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar5;
  long *extraout_x10;
  long *plVar6;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  
  func_0x000108765d20();
  func_0x0001087656dc();
  func_0x000108765ca8();
  if (unaff_x24 != 0) {
    unaff_x23 = (long *)(unaff_x24 - 1);
    in_NG = (long)(unaff_x24 & (ulong)unaff_x23) < 0;
    in_ZR = (unaff_x24 & (ulong)unaff_x23) == 0;
    bVar2 = false;
    if ((bool)in_ZR) {
      func_0x0001087658e0();
    }
    else {
      func_0x000108765b90();
      if (bVar2) {
        func_0x000108765b78();
      }
    }
    func_0x000108765b6c();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_1087632b0;
          func_0x000108765b48();
          if (!(bool)in_ZR) break;
          func_0x000108765a48();
          if ((param_1 & 1) != 0) goto LAB_10876343c;
        }
        if ((unaff_x24 & (ulong)unaff_x23) == 0) {
          uVar5 = extraout_x8 & (ulong)unaff_x23;
        }
        else {
          uVar5 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108765b30();
            uVar5 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
        in_ZR = uVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1087632b0:
  func_0x0001087656c4();
  func_0x00010876567c();
  func_0x000108765910();
  func_0x0001087654f0();
  if ((unaff_x24 != 0) && (func_0x000108765798(), !(bool)in_NG)) goto LAB_1087633fc;
  func_0x000108765610();
  uVar3 = 2 < unaff_x24;
  in_ZR = unaff_x24 == 3;
  func_0x0001087655d8();
  if ((bool)in_ZR) {
    param_2 = 2;
  }
  else {
    in_ZR = (param_2 & extraout_x8_01) == 0;
    uVar3 = 0;
    if (!(bool)in_ZR) {
      func_0x00010876598c();
      param_2 = param_1;
    }
  }
  func_0x000108765b9c();
  if (!(bool)uVar3 || (bool)in_ZR) {
    if (!(bool)uVar3) {
      func_0x0001087655f4();
      if (((bool)uVar3) && (func_0x000108765bf0(), extraout_x8_04 == 0)) {
        func_0x000108765558();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010876584c();
      if ((bool)uVar3) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (param_2 != 0) goto LAB_108763300;
        func_0x000108765be4();
        FUN_108764bfc();
        func_0x000108765bc0();
      }
    }
  }
  else {
LAB_108763300:
    if (param_2 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108763450);
      (*pcVar1)();
    }
    __Znwm(param_2 << 3);
    FUN_108764bfc();
    func_0x0001087658a0();
    uVar5 = extraout_x9;
    while (in_ZR = param_2 == uVar5, !(bool)in_ZR) {
      func_0x000108765cc0();
      uVar5 = extraout_x9_00;
    }
    unaff_x24 = param_2;
    if (*unaff_x23 != 0) {
      func_0x0001087656a4();
      func_0x000108765690();
      plVar6 = extraout_x10;
      while (*plVar6 != 0) {
        func_0x000108765c7c();
        lVar4 = extraout_x8_02;
        plVar6 = extraout_x12;
        uVar5 = extraout_x11;
        if ((bool)in_ZR) {
          uVar7 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar7 = extraout_x13;
          if (param_2 <= extraout_x13) {
            func_0x000108765c70();
            lVar4 = extraout_x8_03;
            uVar5 = extraout_x11_00;
            plVar6 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        in_ZR = uVar7 == uVar5;
        if (!(bool)in_ZR) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            func_0x000108765c2c();
            plVar6 = extraout_x12_01;
          }
          else {
            func_0x000108765578();
            plVar6 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x000108765bfc();
  if ((bool)in_ZR) {
    func_0x0001087658e0();
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x000108765bb4();
    }
  }
LAB_1087633fc:
  func_0x000108765b60();
  if (extraout_x9_02 == 0) {
    func_0x000108765628();
    if (extraout_x9_03 != 0) {
      func_0x00010876582c();
      lVar4 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar5 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x000108765b84();
          lVar4 = extraout_x8_06;
          uVar5 = extraout_x9_05;
        }
      }
      *(long **)(lVar4 + uVar5 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010876583c();
  }
  func_0x000108765640();
  FUN_108764c14();
LAB_10876343c:
  return unaff_x20 + 5;
}



/* Entry: 108763460; end: 108763687;  */

void FUN_108763460(void)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  
  ppuVar3 = &puStack_c0;
  func_0x000108765748();
  func_0x0001087658bc();
  puVar1 = &uStack_80;
  func_0x000108765994(puVar1,0x1b7);
  func_0x000107c2884c(auStack_a8,puVar1);
  func_0x000107c2882c(&uStack_80);
  puVar1 = unaff_x22 + 0x13;
  FUN_108765180();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_108763688(unaff_x22 + 0x13);
    func_0x0001087659b4();
    if ((bool)in_CY) {
      FUN_108763e4c(0,((long)unaff_x26 - lRam0000000000000000 >> 4) + 1);
      func_0x000108765ccc(puRam0000000000000008);
      FUN_108763ea0(&uStack_80);
      func_0x000108765a88();
      func_0x000108765c44();
      FUN_108763e74();
      puVar1 = puRam0000000000000008;
      func_0x000108765a34();
      puVar2 = puStack_70;
    }
    else {
      puVar2 = unaff_x26;
      func_0x000108765a88();
      puVar1 = unaff_x26 + 2;
    }
    puRam0000000000000008 = puVar1;
    func_0x000108765a28();
    func_0x000108765a60();
    *puVar2 = &PTR_FUN_110a6b9f0;
    func_0x000107c27994(puVar2 + 1);
    puVar2[5] = lStack_78;
    puVar2[4] = uStack_80;
    if (lStack_78 != 0) {
      do {
        func_0x000108765880();
      } while (extraout_w10 != 0);
    }
    puStack_c0 = puVar2;
    func_0x000108765984(*unaff_x20);
    func_0x000108765bcc();
    if (ppuVar3 != (undefined8 **)0x0) {
      func_0x00010876571c();
    }
    func_0x00010876595c();
  }
  else {
    func_0x000108765a88(&puStack_c0);
    func_0x000108765ac4();
    if ((bool)in_CY) {
      func_0x000108765cd8();
      FUN_108763e4c();
      func_0x000108765ccc(puVar1[6]);
      FUN_108763ea0(&uStack_80);
      func_0x00010876592c();
      FUN_108763e74();
      func_0x000108765a34();
    }
    else {
      unaff_x22[1] = uStack_b8;
      *unaff_x22 = puStack_c0;
      puStack_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
    }
    func_0x000108765c88();
    func_0x00010876515c();
  }
  func_0x000108765a14();
  func_0x000108765900();
  func_0x000107c2882c(auStack_a8);
  return;
}



/* Entry: 108763688; end: 1087638c7;  */

long * FUN_108763688(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar5;
  long *extraout_x10;
  long *plVar6;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  
  func_0x000108765d20();
  func_0x0001087656dc();
  func_0x000108765ca8();
  if (unaff_x24 != 0) {
    unaff_x23 = (long *)(unaff_x24 - 1);
    in_NG = (long)(unaff_x24 & (ulong)unaff_x23) < 0;
    in_ZR = (unaff_x24 & (ulong)unaff_x23) == 0;
    bVar2 = false;
    if ((bool)in_ZR) {
      func_0x0001087658e0();
    }
    else {
      func_0x000108765b90();
      if (bVar2) {
        func_0x000108765b78();
      }
    }
    func_0x000108765b6c();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_108763718;
          func_0x000108765b48();
          if (!(bool)in_ZR) break;
          func_0x000108765a48();
          if ((param_1 & 1) != 0) goto LAB_1087638a4;
        }
        if ((unaff_x24 & (ulong)unaff_x23) == 0) {
          uVar5 = extraout_x8 & (ulong)unaff_x23;
        }
        else {
          uVar5 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108765b30();
            uVar5 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
        in_ZR = uVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_108763718:
  func_0x0001087656c4();
  func_0x00010876567c();
  func_0x000108765910();
  func_0x0001087654f0();
  if ((unaff_x24 != 0) && (func_0x000108765798(), !(bool)in_NG)) goto LAB_108763864;
  func_0x000108765610();
  uVar3 = 2 < unaff_x24;
  in_ZR = unaff_x24 == 3;
  func_0x0001087655d8();
  if ((bool)in_ZR) {
    param_2 = 2;
  }
  else {
    in_ZR = (param_2 & extraout_x8_01) == 0;
    uVar3 = 0;
    if (!(bool)in_ZR) {
      func_0x00010876598c();
      param_2 = param_1;
    }
  }
  func_0x000108765b9c();
  if (!(bool)uVar3 || (bool)in_ZR) {
    if (!(bool)uVar3) {
      func_0x0001087655f4();
      if (((bool)uVar3) && (func_0x000108765bf0(), extraout_x8_04 == 0)) {
        func_0x000108765558();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010876584c();
      if ((bool)uVar3) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (param_2 != 0) goto LAB_108763768;
        func_0x000108765be4();
        FUN_108765064();
        func_0x000108765bc0();
      }
    }
  }
  else {
LAB_108763768:
    if (param_2 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087638b8);
      (*pcVar1)();
    }
    __Znwm(param_2 << 3);
    FUN_108765064();
    func_0x0001087658a0();
    uVar5 = extraout_x9;
    while (in_ZR = param_2 == uVar5, !(bool)in_ZR) {
      func_0x000108765cc0();
      uVar5 = extraout_x9_00;
    }
    unaff_x24 = param_2;
    if (*unaff_x23 != 0) {
      func_0x0001087656a4();
      func_0x000108765690();
      plVar6 = extraout_x10;
      while (*plVar6 != 0) {
        func_0x000108765c7c();
        lVar4 = extraout_x8_02;
        plVar6 = extraout_x12;
        uVar5 = extraout_x11;
        if ((bool)in_ZR) {
          uVar7 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar7 = extraout_x13;
          if (param_2 <= extraout_x13) {
            func_0x000108765c70();
            lVar4 = extraout_x8_03;
            uVar5 = extraout_x11_00;
            plVar6 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        in_ZR = uVar7 == uVar5;
        if (!(bool)in_ZR) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            func_0x000108765c2c();
            plVar6 = extraout_x12_01;
          }
          else {
            func_0x000108765578();
            plVar6 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x000108765bfc();
  if ((bool)in_ZR) {
    func_0x0001087658e0();
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x000108765bb4();
    }
  }
LAB_108763864:
  func_0x000108765b60();
  if (extraout_x9_02 == 0) {
    func_0x000108765628();
    if (extraout_x9_03 != 0) {
      func_0x00010876582c();
      lVar4 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar5 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x000108765b84();
          lVar4 = extraout_x8_06;
          uVar5 = extraout_x9_05;
        }
      }
      *(long **)(lVar4 + uVar5 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010876583c();
  }
  func_0x000108765640();
  FUN_10876507c();
LAB_1087638a4:
  return unaff_x20 + 5;
}



/* Entry: 1087638c8; end: 1087638f7;  */

void FUN_1087638c8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108765b3c();
  func_0x00010867a334();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 1087638f8; end: 10876398b;  */

long FUN_1087638f8(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000108765920();
  FUN_10876398c();
  FUN_108763a10(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  func_0x00010867a334(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  FUN_1087639cc();
  lVar1 = unaff_x19[1];
  func_0x000108763b9c(auStack_48);
  return lVar1;
}



/* Entry: 10876398c; end: 1087639cb;  */

long * FUN_10876398c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_108763a04();
  func_0x00010876578c();
  plVar1 = param_1 + 2;
  FUN_108763a98(plVar1,*param_1,param_1[1],param_2[1] + (*param_1 - param_1[1]));
  func_0x000108765514();
  return plVar1;
}



/* Entry: 1087639cc; end: 108763a03;  */

void FUN_1087639cc(long *param_1,long param_2)

{
  func_0x00010876578c();
  FUN_108763a98(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000108765514();
  return;
}



/* Entry: 108763a04; end: 108763a0f;  */

long * FUN_108763a04(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000108765728();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108763a58();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 108763a10; end: 108763a7b;  */

long * FUN_108763a10(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108763a58();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 108763a7c; end: 108763a97;  */

void FUN_108763a7c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = param_4;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar2 = param_2; uVar2 != param_3; uVar2 = uVar2 + 0x20) {
    uVar1 = *(ulong *)(uVar2 + 0x18);
    if (uVar1 == 0) {
      *(undefined8 *)(lStack_48 + 0x18) = 0;
    }
    else if (uVar2 == uVar1) {
      *(long *)(lStack_48 + 0x18) = lStack_48;
      (**(code **)(**(long **)(uVar2 + 0x18) + 0x18))(*(long **)(uVar2 + 0x18),lStack_48);
    }
    else {
      *(ulong *)(lStack_48 + 0x18) = uVar1;
      *(undefined8 *)(uVar2 + 0x18) = 0;
    }
    lStack_48 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x00010865f8f8(param_2);
  }
  FUN_108763b58(&uStack_70);
  return;
}



/* Entry: 108763a98; end: 108763b57;  */

void FUN_108763a98(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  lStack_38 = param_4;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar2 = param_2; lVar2 != param_3; lVar2 = lVar2 + 0x20) {
    lVar1 = *(long *)(lVar2 + 0x18);
    if (lVar1 == 0) {
      *(undefined8 *)(lStack_38 + 0x18) = 0;
    }
    else if (lVar2 == lVar1) {
      *(long *)(lStack_38 + 0x18) = lStack_38;
      (**(code **)(**(long **)(lVar2 + 0x18) + 0x18))(*(long **)(lVar2 + 0x18),lStack_38);
    }
    else {
      *(long *)(lStack_38 + 0x18) = lVar1;
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    lStack_38 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x00010865f8f8(param_2);
  }
  FUN_108763b58(&uStack_60);
  return;
}



/* Entry: 108763b58; end: 108763bc7;  */

long FUN_108763b58(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x00010865f8f8();
    }
  }
  return param_1;
}



/* Entry: 108763bc8; end: 108763bcf;  */

void FUN_108763bc8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x00010865f8f8();
  }
  return;
}



/* Entry: 108763bd0; end: 108763c03;  */

void FUN_108763bd0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x00010865f8f8();
  }
  return;
}



/* Entry: 108763c04; end: 108763cef;  */

long * FUN_108763c04(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar3 = (long *)*param_1;
  lVar8 = param_1[1] - (long)plVar3;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    lVar9 = *plStack_58;
    uVar6 = lVar9 - (long)plVar3;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      unaff_x20 = param_1;
      if (uVar7 >> 0x3d != 0) goto LAB_108763cec;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + lVar8);
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    _memcpy(puVar2 + -(lVar8 >> 3),plVar3,lVar8);
    *param_1 = (long)(puVar2 + -(lVar8 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar4 + uVar7 * 8;
    plStack_78 = plVar3;
    plStack_70 = plVar3;
    plStack_68 = plVar3;
    lStack_60 = lVar9;
    FUN_108763cfc(&plStack_78);
    return puVar2 + 1;
  }
  FUN_108763cf0();
LAB_108763cec:
  func_0x000104bd35f4();
  func_0x000108765728();
  func_0x000108765b3c();
  while (unaff_x20 != (long *)plVar3[2]) {
    plVar3[2] = (long)((long *)plVar3[2] + -1);
    func_0x000108763d40();
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 108763cf0; end: 108763cfb;  */

void FUN_108763cf0(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108765728();
  func_0x000108765b3c();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -8;
    func_0x000108763d40();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108763cfc; end: 108763d6b;  */

void FUN_108763cfc(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108765b3c();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -8;
    func_0x000108763d40();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108763d6c; end: 108763d93;  */

undefined8 FUN_108763d6c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000108765cf8();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_108763db4();
  func_0x000108765760();
  func_0x000108765514();
  return param_1;
}



/* Entry: 108763d94; end: 108763db3;  */

void FUN_108763d94(void)

{
  func_0x000108765760();
  func_0x000108765514();
  return;
}



/* Entry: 108763db4; end: 108763dbf;  */

void FUN_108763db4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108765728();
  func_0x000108765920();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x000108765b3c();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x10;
        func_0x000108764cf4();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    __Znwm(unaff_x20 << 4);
  }
  func_0x0001087659d8();
  return;
}



/* Entry: 108763dc0; end: 108763e07;  */

void FUN_108763dc0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108765920();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x000108765b3c();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x10;
        func_0x000108764cf4();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    __Znwm(unaff_x20 << 4);
  }
  func_0x0001087659d8();
  return;
}



/* Entry: 108763e08; end: 108763e4b;  */

void FUN_108763e08(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108765b3c();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x10;
    func_0x000108764cf4();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108763e4c; end: 108763e73;  */

undefined8 FUN_108763e4c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000108765cf8();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_108763e94();
  func_0x000108765760();
  func_0x000108765514();
  return param_1;
}



/* Entry: 108763e74; end: 108763e93;  */

void FUN_108763e74(void)

{
  func_0x000108765760();
  func_0x000108765514();
  return;
}



/* Entry: 108763e94; end: 108763e9f;  */

void FUN_108763e94(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108765728();
  func_0x000108765920();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x000108765b3c();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x10;
        func_0x00010876515c();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    __Znwm(unaff_x20 << 4);
  }
  func_0x0001087659d8();
  return;
}



/* Entry: 108763ea0; end: 108763ee7;  */

void FUN_108763ea0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108765920();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x000108765b3c();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x10;
        func_0x00010876515c();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    __Znwm(unaff_x20 << 4);
  }
  func_0x0001087659d8();
  return;
}



/* Entry: 108763ee8; end: 108763f2b;  */

void FUN_108763ee8(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108765b3c();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x10;
    func_0x00010876515c();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108763f2c; end: 10876417f;  */

undefined1  [16] FUN_108763f2c(ulong param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x10;
  long *plVar7;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  func_0x000108765d20();
  func_0x0001087656dc();
  func_0x000108765ca8();
  if (unaff_x24 != 0) {
    uVar9 = unaff_x24 - 1;
    in_NG = (long)(unaff_x24 & uVar9) < 0;
    in_ZR = (unaff_x24 & uVar9) == 0;
    bVar2 = false;
    if ((bool)in_ZR) {
      func_0x0001087658e0();
    }
    else {
      func_0x000108765b90();
      if (bVar2) {
        func_0x000108765b78();
      }
    }
    func_0x000108765b6c();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_108763fc0;
          func_0x000108765b48();
          if (!(bool)in_ZR) break;
          func_0x000108765a54();
          if ((param_1 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10876415c;
          }
        }
        if ((unaff_x24 & uVar9) == 0) {
          uVar5 = extraout_x8 & uVar9;
        }
        else {
          uVar5 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108765b30();
            uVar5 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
        in_ZR = uVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_108763fc0:
  uVar9 = *param_4;
  func_0x0001087656c4();
  func_0x00010876567c();
  func_0x000108765910();
  func_0x0001087654f0();
  if ((unaff_x24 != 0) && (func_0x000108765798(), !(bool)in_NG)) goto LAB_108764118;
  func_0x000108765610();
  uVar3 = 2 < unaff_x24;
  in_ZR = unaff_x24 == 3;
  func_0x0001087655d8();
  if ((bool)in_ZR) {
    uVar9 = 2;
  }
  else {
    in_ZR = (uVar9 & extraout_x8_01) == 0;
    uVar3 = 0;
    if (!(bool)in_ZR) {
      func_0x00010876598c();
      uVar9 = param_1;
    }
  }
  func_0x000108765b9c();
  if (!(bool)uVar3 || (bool)in_ZR) {
    if (!(bool)uVar3) {
      func_0x0001087655f4();
      if (((bool)uVar3) && (func_0x000108765bf0(), extraout_x8_04 == 0)) {
        func_0x000108765558();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010876584c();
      if ((bool)uVar3) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (uVar9 != 0) goto LAB_108764014;
        func_0x000108765be4();
        FUN_108764180();
        func_0x000108765bc0();
      }
    }
  }
  else {
LAB_108764014:
    if (uVar9 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108764170);
      (*pcVar1)();
    }
    __Znwm(uVar9 << 3);
    FUN_108764180();
    func_0x0001087658a0();
    uVar5 = extraout_x9;
    while (in_ZR = uVar9 == uVar5, !(bool)in_ZR) {
      func_0x000108765cc0();
      uVar5 = extraout_x9_00;
    }
    unaff_x24 = uVar9;
    if (*param_2 != 0) {
      func_0x0001087656a4();
      func_0x000108765690();
      plVar7 = extraout_x10;
      while (*plVar7 != 0) {
        func_0x000108765c7c();
        lVar6 = extraout_x8_02;
        plVar7 = extraout_x12;
        uVar5 = extraout_x11;
        if ((bool)in_ZR) {
          uVar8 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar8 = extraout_x13;
          if (uVar9 <= extraout_x13) {
            func_0x000108765c70();
            lVar6 = extraout_x8_03;
            uVar5 = extraout_x11_00;
            plVar7 = extraout_x12_00;
            uVar8 = extraout_x13_00;
          }
        }
        in_ZR = uVar8 == uVar5;
        if (!(bool)in_ZR) {
          if (*(long *)(lVar6 + uVar8 * 8) == 0) {
            func_0x000108765c2c();
            plVar7 = extraout_x12_01;
          }
          else {
            func_0x000108765578();
            plVar7 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x000108765bfc();
  if ((bool)in_ZR) {
    func_0x0001087658e0();
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x000108765bb4();
    }
  }
LAB_108764118:
  func_0x000108765b60();
  if (extraout_x9_02 == 0) {
    func_0x000108765628();
    if (extraout_x9_03 != 0) {
      func_0x00010876582c();
      lVar6 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar9 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar9 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x000108765b84();
          lVar6 = extraout_x8_06;
          uVar9 = extraout_x9_05;
        }
      }
      *(long **)(lVar6 + uVar9 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010876583c();
  }
  func_0x000108765640();
  FUN_108764198();
  uVar4 = 1;
LAB_10876415c:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = unaff_x20;
  return auVar10;
}



/* Entry: 108764180; end: 108764197;  */

void FUN_108764180(long *param_1,long param_2)

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



/* Entry: 108764198; end: 10876423b;  */

void FUN_108764198(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001087657b8();
  if (unaff_x20 != 0) {
    func_0x000108765ba8();
    if ((bool)in_ZR) {
      func_0x0001087641cc(unaff_x20 + 0x10);
    }
    func_0x000108765908();
  }
  return;
}



/* Entry: 10876423c; end: 108764243;  */

void FUN_10876423c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000108763d40();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108764244; end: 108764277;  */

void FUN_108764244(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000108763d40();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108764278; end: 10876431b;  */

long FUN_108764278(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 != 0) && (func_0x000108765cb4(), extraout_x8 != 0)) {
    func_0x000108765734();
    func_0x0001087657ec();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x000108765b24();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000108765b18();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000108765b0c();
        if (!(bool)uVar1) break;
        func_0x0001087656b8();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar3 & unaff_x23) == 0) {
        uVar2 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar2 = extraout_x8_00;
        if (uVar3 <= extraout_x8_00) {
          func_0x000108765aec();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 10876431c; end: 10876456f;  */

undefined1  [16] FUN_10876431c(ulong param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x10;
  long *plVar7;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  func_0x000108765d20();
  func_0x0001087656dc();
  func_0x000108765ca8();
  if (unaff_x24 != 0) {
    uVar9 = unaff_x24 - 1;
    in_NG = (long)(unaff_x24 & uVar9) < 0;
    in_ZR = (unaff_x24 & uVar9) == 0;
    bVar2 = false;
    if ((bool)in_ZR) {
      func_0x0001087658e0();
    }
    else {
      func_0x000108765b90();
      if (bVar2) {
        func_0x000108765b78();
      }
    }
    func_0x000108765b6c();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_1087643b0;
          func_0x000108765b48();
          if (!(bool)in_ZR) break;
          func_0x000108765a54();
          if ((param_1 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10876454c;
          }
        }
        if ((unaff_x24 & uVar9) == 0) {
          uVar5 = extraout_x8 & uVar9;
        }
        else {
          uVar5 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108765b30();
            uVar5 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
        in_ZR = uVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1087643b0:
  uVar9 = *param_4;
  func_0x0001087656c4();
  func_0x00010876567c();
  func_0x000108765910();
  func_0x0001087654f0();
  if ((unaff_x24 != 0) && (func_0x000108765798(), !(bool)in_NG)) goto LAB_108764508;
  func_0x000108765610();
  uVar3 = 2 < unaff_x24;
  in_ZR = unaff_x24 == 3;
  func_0x0001087655d8();
  if ((bool)in_ZR) {
    uVar9 = 2;
  }
  else {
    in_ZR = (uVar9 & extraout_x8_01) == 0;
    uVar3 = 0;
    if (!(bool)in_ZR) {
      func_0x00010876598c();
      uVar9 = param_1;
    }
  }
  func_0x000108765b9c();
  if (!(bool)uVar3 || (bool)in_ZR) {
    if (!(bool)uVar3) {
      func_0x0001087655f4();
      if (((bool)uVar3) && (func_0x000108765bf0(), extraout_x8_04 == 0)) {
        func_0x000108765558();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010876584c();
      if ((bool)uVar3) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (uVar9 != 0) goto LAB_108764404;
        func_0x000108765be4();
        FUN_108764570();
        func_0x000108765bc0();
      }
    }
  }
  else {
LAB_108764404:
    if (uVar9 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108764560);
      (*pcVar1)();
    }
    __Znwm(uVar9 << 3);
    FUN_108764570();
    func_0x0001087658a0();
    uVar5 = extraout_x9;
    while (in_ZR = uVar9 == uVar5, !(bool)in_ZR) {
      func_0x000108765cc0();
      uVar5 = extraout_x9_00;
    }
    unaff_x24 = uVar9;
    if (*param_2 != 0) {
      func_0x0001087656a4();
      func_0x000108765690();
      plVar7 = extraout_x10;
      while (*plVar7 != 0) {
        func_0x000108765c7c();
        lVar6 = extraout_x8_02;
        plVar7 = extraout_x12;
        uVar5 = extraout_x11;
        if ((bool)in_ZR) {
          uVar8 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar8 = extraout_x13;
          if (uVar9 <= extraout_x13) {
            func_0x000108765c70();
            lVar6 = extraout_x8_03;
            uVar5 = extraout_x11_00;
            plVar7 = extraout_x12_00;
            uVar8 = extraout_x13_00;
          }
        }
        in_ZR = uVar8 == uVar5;
        if (!(bool)in_ZR) {
          if (*(long *)(lVar6 + uVar8 * 8) == 0) {
            func_0x000108765c2c();
            plVar7 = extraout_x12_01;
          }
          else {
            func_0x000108765578();
            plVar7 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x000108765bfc();
  if ((bool)in_ZR) {
    func_0x0001087658e0();
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x000108765bb4();
    }
  }
LAB_108764508:
  func_0x000108765b60();
  if (extraout_x9_02 == 0) {
    func_0x000108765628();
    if (extraout_x9_03 != 0) {
      func_0x00010876582c();
      lVar6 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar9 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar9 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x000108765b84();
          lVar6 = extraout_x8_06;
          uVar9 = extraout_x9_05;
        }
      }
      *(long **)(lVar6 + uVar9 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010876583c();
  }
  func_0x000108765640();
  FUN_108764588();
  uVar4 = 1;
LAB_10876454c:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = unaff_x20;
  return auVar10;
}



/* Entry: 108764570; end: 108764587;  */

void FUN_108764570(long *param_1,long param_2)

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



/* Entry: 108764588; end: 10876462b;  */

void FUN_108764588(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001087657b8();
  if (unaff_x20 != 0) {
    func_0x000108765ba8();
    if ((bool)in_ZR) {
      func_0x0001087645bc(unaff_x20 + 0x10);
    }
    func_0x000108765908();
  }
  return;
}



/* Entry: 10876462c; end: 108764633;  */

void FUN_10876462c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x00010865f8f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108764634; end: 1087646c7;  */

void FUN_108764634(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x00010865f8f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087646c8; end: 1087646db;  */

void FUN_1087646c8(void)

{
  func_0x0001087646a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087646dc; end: 10876471f;  */

undefined8 FUN_1087646dc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm(0x38);
  FUN_1087648f8();
  return uVar1;
}



/* Entry: 108764720; end: 108764743;  */

void FUN_108764720(long param_1,undefined8 param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000108765920(param_2,param_1 + 8);
  func_0x0001087659a4();
  func_0x000107c27994();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108765880();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}


