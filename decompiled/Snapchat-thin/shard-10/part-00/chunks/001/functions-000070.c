/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107414ec4; end: 107415047;  */

void FUN_107414ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  double *param_5)

{
  bool bVar1;
  ulong uVar2;
  code *extraout_x8;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_160 [136];
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar7 = *param_5;
  lVar3 = *(long *)(param_4 + 8);
  dVar5 = dVar7;
  FUN_1074150c4(param_4 + 0x10,param_4 + 0x28);
  dVar4 = dVar7;
  dStack_58 = dVar5;
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_1074150c4(param_4 + 0x40,param_4 + 0x58);
  dStack_90 = (double)((ulong)dStack_90 & 0xffffffffffffff00);
  uStack_78 = 0;
  bVar1 = *(double *)(param_4 + 0x70) == 0.0;
  dStack_70 = dVar4;
  uStack_68 = param_2;
  uStack_60 = param_3;
  if (bVar1) {
    uVar6 = 0x400921fb54442d18;
    dVar5 = *(double *)(lVar3 + 0x78) + 3.141592653589793;
    ___sincos_stret();
    uStack_80 = 0x3ff0000000000000;
    dStack_90 = dVar5;
    uStack_88 = uVar6;
  }
  uStack_78 = bVar1;
  if (*(char *)(param_4 + 0xb8) == '\x01') {
    FUN_107413784(param_4 + 0x98);
    uVar2 = param_4 + 0x98;
    FUN_107414390(uVar2,param_4 + 0xc0);
    if ((uVar2 & 1) == 0) {
      dVar5 = 1.0 - dVar7;
      func_0x00010725aba0(dVar7 * *(double *)(param_4 + 0x98) + dVar5 * *(double *)(param_4 + 0xc0),
                          dVar7 * *(double *)(param_4 + 0xa0) + dVar5 * *(double *)(param_4 + 200),
                          dVar7 * *(double *)(param_4 + 0xa8) + dVar5 * *(double *)(param_4 + 0xd0),
                          dVar7 * *(double *)(param_4 + 0xb0) + dVar5 * *(double *)(param_4 + 0xd8),
                          auStack_160);
      FUN_107415e10(lVar3 + 8,auStack_160);
    }
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_98 = 0;
  func_0x00010785d0b4(auStack_d8,&dStack_70);
  func_0x00010785d208(auStack_d8,&dStack_58,&dStack_90);
  FUN_107416af0(lVar3 + 8,auStack_d8);
  if (*(long *)(param_4 + 0xf8) != 0) {
    auStack_188[0] = 0;
    uStack_168 = 0;
    FUN_1074177d4(auStack_160,lVar3 + 8,auStack_188);
    if (*(long *)(param_4 + 0xf8) == 0) {
      func_0x000104bfeb48();
      func_0x000107415880();
      func_0x000107415770();
      func_0x0001074156a0();
      return;
    }
    func_0x000107415a10();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 107415048; end: 10741506f;  */

void FUN_107415048(undefined8 param_1)

{
  func_0x000107415880();
  func_0x000107415770(param_1,&PTR_DAT_1109ae370);
  func_0x0001074156a0();
  return;
}



/* Entry: 107415070; end: 10741507b;  */

undefined ** FUN_107415070(void)

{
  return &PTR_DAT_1109ae370;
}



/* Entry: 10741507c; end: 1074150c3;  */

void FUN_10741507c(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x00010741575c();
  *param_1 = &PTR_SUB_1109ae310;
  _memcpy(param_1 + 1);
  FUN_107414dd4(param_1 + 0x1c,unaff_x19 + 0xd8);
  return;
}



/* Entry: 1074150c4; end: 107415123;  */

undefined8 FUN_1074150c4(double param_1,double *param_2,double *param_3)

{
  undefined8 auStack_40 [2];
  
  func_0x00010741575c();
  func_0x000107415854(param_1 * *param_3 + (1.0 - param_1) * *param_2,
                      param_1 * param_3[1] + (1.0 - param_1) * param_2[1],auStack_40);
  return auStack_40[0];
}



/* Entry: 107415124; end: 10741518b;  */

void FUN_107415124(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010741588c();
  *param_1 = *param_2;
  func_0x000107282f0c(param_1 + 8,param_2 + 8);
  func_0x000107282db4(param_1 + 0xb0,param_2 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
  return;
}



/* Entry: 10741518c; end: 1074151b7;  */

undefined8 * FUN_10741518c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ae390;
  FUN_10741379c(param_1 + 1);
  return param_1;
}



/* Entry: 1074151b8; end: 1074151cb;  */

void FUN_1074151b8(void)

{
  FUN_10741518c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074151cc; end: 107415203;  */

undefined8 FUN_1074151cc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x108;
  __Znwm(0x108);
  FUN_107415374();
  return uVar1;
}



/* Entry: 107415204; end: 107415227;  */

void FUN_107415204(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined1 *)(param_1 + 8);
  func_0x00010741588c();
  *param_2 = &PTR_FUN_1109ae390;
  *(undefined1 *)(param_2 + 1) = *puVar1;
  func_0x000107282f0c(param_2 + 2,puVar1 + 8);
  func_0x000107282db4(unaff_x19 + 0xb8,puVar1 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
  return;
}



/* Entry: 107415228; end: 10741533f;  */

bool FUN_107415228(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x100);
  dVar5 = 1.0;
  if ((*(char *)(param_1 + 8) != '\x01') ||
     (fVar4 = (((float)(*param_2 - puVar3[0x1cb]) / 1e+09) * 1e+09) / (float)(long)puVar3[0x1cc],
     dVar5 = (double)fVar4, 1.0 <= fVar4)) {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x70) == '\0') {
      puVar1 = (undefined8 *)&UNK_10de68948;
    }
    uStack_58 = puVar1[1];
    uStack_60 = *puVar1;
    uStack_48 = puVar1[3];
    uStack_50 = puVar1[2];
    uStack_38 = puVar1[5];
    uStack_40 = puVar1[4];
    FUN_1073b426c(dVar5,0x3f50624dd2f1a9fc,&uStack_60);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
  }
  FUN_1074153e8(uVar2);
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    FUN_1074181b4(puVar3 + 1,param_1 + 0xf0,param_1 + 0xd8);
  }
  if (dVar5 < 1.0) {
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN_1074153e8(dVar5);
    }
    func_0x000107415750(*puVar3);
    func_0x00010741570c();
  }
  return 1.0 <= dVar5;
}



/* Entry: 107415340; end: 107415367;  */

void FUN_107415340(undefined8 param_1)

{
  func_0x000107415880();
  func_0x000107415770(param_1,&PTR_DAT_1109ae400);
  func_0x0001074156a0();
  return;
}



/* Entry: 107415368; end: 107415373;  */

undefined ** FUN_107415368(void)

{
  return &PTR_DAT_1109ae400;
}



/* Entry: 107415374; end: 1074153e7;  */

void FUN_107415374(undefined8 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010741588c();
  *param_1 = &PTR_FUN_1109ae390;
  *(undefined1 *)(param_1 + 1) = *param_2;
  func_0x000107282f0c(param_1 + 2,param_2 + 8);
  func_0x000107282db4(unaff_x19 + 0xb8,param_2 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar1;
  return;
}



/* Entry: 1074153e8; end: 107415417;  */

void FUN_1074153e8(undefined1 *param_1,undefined1 *param_2)

{
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107415a10();
    (*extraout_x8)();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010741575c();
  *param_1 = *param_2;
  func_0x000107282f0c(param_1 + 8,param_2 + 8);
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xb0);
  return;
}



/* Entry: 107415418; end: 107415473;  */

void FUN_107415418(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010741575c();
  *param_1 = *param_2;
  func_0x000107282f0c(param_1 + 8,param_2 + 8);
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xb0);
  return;
}



/* Entry: 107415474; end: 107415487;  */

void FUN_107415474(void)

{
  func_0x000107415448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107415488; end: 1074154bf;  */

undefined8 FUN_107415488(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xc0;
  __Znwm(0xc0);
  FUN_10741557c();
  return uVar1;
}



/* Entry: 1074154c0; end: 1074154e3;  */

void FUN_1074154c0(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = (undefined1 *)(param_1 + 8);
  func_0x00010741575c();
  *param_2 = &PTR_SUB_1109ae420;
  *(undefined1 *)(param_2 + 1) = *puVar1;
  func_0x000107282f0c(param_2 + 2,puVar1 + 8);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xb0);
  return;
}



/* Entry: 1074154e4; end: 107415547;  */

void FUN_1074154e4(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_110 [114];
  undefined4 uStack_9e;
  undefined2 uStack_9a;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  func_0x00010741571c(auStack_110);
  uStack_9e = 0x1000100;
  uStack_9a = 0x100;
  func_0x000107415994(puVar1 + 1);
  if (*(long *)(param_1 + 0xb0) != 0) {
    func_0x000104c003e8(param_1 + 0x98);
  }
  func_0x000107415778(*puVar1,*(undefined1 *)(param_1 + 8));
  func_0x000107415768();
  return;
}



/* Entry: 107415548; end: 10741556f;  */

void FUN_107415548(undefined8 param_1)

{
  func_0x000107415880();
  func_0x000107415770(param_1,&PTR_DAT_1109ae480);
  func_0x0001074156a0();
  return;
}



/* Entry: 107415570; end: 10741557b;  */

undefined ** FUN_107415570(void)

{
  return &PTR_DAT_1109ae480;
}



/* Entry: 10741557c; end: 1074155bb;  */

void FUN_10741557c(undefined8 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010741575c();
  *param_1 = &PTR_SUB_1109ae420;
  *(undefined1 *)(param_1 + 1) = *param_2;
  func_0x000107282f0c(param_1 + 2,param_2 + 8);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xb0);
  return;
}



/* Entry: 1074155bc; end: 10741560f;  */

long FUN_1074155bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x000107415750(*(undefined8 *)(param_2 + 0x18));
    func_0x00010741570c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 107415610; end: 10741564f;  */

long FUN_107415610(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 == param_1) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return param_1;
    }
    uVar2 = 0x28;
  }
  func_0x000107415810(uVar2);
  return param_1;
}



/* Entry: 107415650; end: 107415a57;  */

void FUN_107415650(void)

{
  return;
}



/* Entry: 107415a58; end: 107415daf;  */

undefined8 * FUN_107415a58(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0xc066800000000000;
  *param_1 = 0xc056800000000000;
  param_1[3] = 0x4066800000000000;
  param_1[2] = 0x4056800000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0x4150000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0c152382d7365;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0xb) = param_3;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  param_1[0x10] = 0x3fe4978fa3269ee1;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  func_0x00010785cae4(param_1 + 0x19);
  param_1[0x2e] = ((double)param_1[0xf] * 512.0) / 6.283185307179586;
  param_1[0x2d] = ((double)param_1[0xf] * 512.0) / 360.0;
  func_0x000107418758();
  _bzero(param_1 + 0x70,0x480);
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)((long)param_1 + 0xa94) = 0;
  *(undefined4 *)(param_1 + 0x153) = 0x3f800000;
  param_1[0x1c7] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1c8] = 0;
  return param_1;
}



/* Entry: 107415db0; end: 107415e0f;  */

void FUN_107415db0(undefined8 param_1,int param_2)

{
  long unaff_x19;
  double dVar1;
  
  func_0x000107418810();
  func_0x000107418764();
  if (param_2 != 0) {
    dVar1 = (double)NEON_fminnm(param_1,0x3ff921fb54442d18);
    if (dVar1 <= 0.3141592653589793) {
      dVar1 = 0.3141592653589793;
    }
    if (*(double *)(unaff_x19 + 0x80) != dVar1) {
      *(double *)(unaff_x19 + 0x80) = dVar1;
      FUN_107417780();
      func_0x000107418758();
    }
  }
  return;
}



/* Entry: 107415e10; end: 107415e8f;  */

void FUN_107415e10(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107418828();
  uVar1 = param_1 + 0xa8;
  FUN_107414390();
  if ((uVar1 & 1) == 0) {
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    uVar4 = unaff_x20[2];
    *(undefined8 *)(unaff_x19 + 0xc0) = unaff_x20[3];
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
    func_0x000107418758();
  }
  return;
}



/* Entry: 107415e90; end: 107415f8b;  */

void FUN_107415e90(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = (uint)(param_2 >> 0x20) & 1;
  fVar4 = (float)NEON_fminnm((float)param_2,0x3f800000);
  fVar3 = (float)param_2;
  if ((param_2 & 0x100000000) != 0) {
    fVar3 = fVar4;
  }
  bVar1 = *(byte *)(param_1 + 0xa94);
  if (bVar1 == uVar2 && bVar1 != 0) {
    if (*(float *)(param_1 + 0xa90) == fVar3) {
      return;
    }
  }
  else if (bVar1 == uVar2) {
    return;
  }
  *(float *)(param_1 + 0xa90) = fVar3;
  *(char *)(param_1 + 0xa94) = (char)uVar2;
  *(undefined1 *)(param_1 + 0x178) = 1;
  return;
}



/* Entry: 107415f8c; end: 10741600b;  */

void FUN_107415f8c(long param_1,long param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_d3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  
  dVar5 = *(double *)(param_2 + 0x78);
  iVar1 = *(int *)(param_2 + 0x58);
  dVar6 = 0.0;
  if (*(char *)(param_2 + 0xa94) == '\x01') {
    dVar6 = (double)*(float *)(param_2 + 0xa90);
  }
  _log2(dVar5);
  dVar5 = dVar5 * 512.0;
  dVar7 = *(double *)(param_2 + 0x150);
  dVar2 = 3.141592653589793 - dVar7 * 6.283185307179586;
  dVar4 = 1.0 - dVar6;
  _exp();
  _atan();
  func_0x00010785d34c();
  dVar2 = (1.0 - dVar6) * dVar2 * 57.29577951308232;
  uVar3 = 0x3f91df46a2529d39;
  func_0x00010785d32c();
  dVar6 = dVar2;
  func_0x0001078788e4(param_2 + 200);
  dStack_70 = dVar6;
  uStack_68 = uVar3;
  dStack_60 = dVar4;
  uStack_58 = in_d3;
  func_0x000107878b80(param_1,&dStack_70);
  func_0x000107876e00(-(*(double *)(param_2 + 0x148) * dVar5),-(dVar7 * dVar5),
                      -(*(double *)(param_2 + 0x158) * dVar5),param_1);
  if (iVar1 != 1) {
    *(double *)(param_1 + 8) = -*(double *)(param_1 + 8);
    *(double *)(param_1 + 0x28) = -*(double *)(param_1 + 0x28);
    *(double *)(param_1 + 0x48) = -*(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x68) = -*(double *)(param_1 + 0x68);
  }
  dVar5 = dVar5 / (dVar2 * 6.283185307179586 * 6378137.0);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x48) * dVar5;
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) * dVar5;
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) * dVar5;
  *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) * dVar5;
  return;
}



/* Entry: 10741600c; end: 10741607b;  */

void FUN_10741600c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a0 [128];
  
  func_0x000107415eec(param_2,param_1,param_3,param_4);
  FUN_10741607c(param_2,auStack_a0,(int)(*(float *)(param_2 + 0xa4) * 0.1),0);
  func_0x000107877034(param_1,auStack_a0,param_1);
  return;
}



/* Entry: 10741607c; end: 1074163bf;  */

void FUN_10741607c(undefined8 param_1,double param_2,long param_3,long param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  
  if (*(int *)(param_3 + 0x4c) == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x50) == 0) {
    return;
  }
  dVar6 = (double)(ulong)(uint)*(float *)(param_3 + 0xa4);
  dVar10 = (double)*(float *)(param_3 + 0xa4);
  lVar3 = param_3;
  FUN_1074163c0();
  func_0x00010785f1f4();
  auStack_f0[0] = 0;
  lVar3 = lVar3 + 0x9f0;
  func_0x00010724e2c8(lVar3,auStack_f0);
  dVar9 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x50));
  dVar5 = param_2 + dVar9 * 0.5;
  if ((int)lVar3 == 0) {
    dVar9 = dVar5 / (dVar9 * 1.5);
    func_0x0001074188a0();
    _tan();
    dVar5 = dVar9 * dVar5;
  }
  else {
    dVar12 = dVar5 / dVar10;
    func_0x0001074188a0();
    _tan();
    dVar12 = dVar12 * dVar5;
    func_0x0001074188a0();
    dVar9 = (dVar5 / -1.0471975511965976) * 0.05 + 0.98;
    dVar5 = 0.5;
    if (0.5 <= dVar9) {
      dVar5 = dVar9;
    }
    if (dVar12 <= dVar5) {
      dVar5 = dVar12;
    }
  }
  FUN_107416458(param_3);
  uVar11 = *(undefined8 *)(param_3 + 0x78);
  uVar7 = uVar11;
  _log2(uVar11);
  dVar9 = 0.0;
  if (*(char *)(param_3 + 0xa94) == '\x01') {
    dVar9 = (double)*(float *)(param_3 + 0xa90);
  }
  func_0x00010785cc84(auStack_f0,uVar11,uVar7,1.0 - dVar9,param_3 + 200,
                      *(int *)(param_3 + 0x58) == 1,1);
  fVar4 = (float)uVar11;
  func_0x00010741653c(param_3);
  dVar12 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x4c));
  dVar9 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x50));
  func_0x000107876cd0((double)fVar4,dVar12 / dVar9,(double)param_5,(dVar10 / (1.0 - dVar5)) * 1.01,
                      auStack_170);
  func_0x000107418790(param_3 + 0x990,auStack_170);
  if ((*(byte *)(param_3 + 0xa0) & 1) == 0) {
    *(double *)(param_3 + 0x9d0) = (dVar6 * -2.0) / dVar12;
    *(double *)(param_3 + 0x9d8) = (param_2 + param_2) / dVar9;
  }
  dVar6 = 1.5707963267948966;
  switch(*(undefined1 *)(param_3 + 0x48)) {
  case 0:
    goto code_r0x000107416280;
  case 1:
    break;
  case 2:
    dVar6 = 3.141592653589793;
    break;
  case 3:
    dVar6 = -1.5707963267948966;
    break;
  default:
    dVar6 = 0.0;
  }
  dVar6 = -dVar6;
  func_0x000107876f78(param_3 + 0x990,param_3 + 0x990);
code_r0x000107416280:
  func_0x000107877034(param_4,param_3 + 0x990,auStack_f0);
  if (*(char *)(param_3 + 0xa0) == '\x01') {
    *(undefined8 *)(param_4 + 0x58) = 0;
    func_0x000107418808(param_3);
    uVar7 = *(undefined8 *)(param_3 + 0x78);
    _log2(uVar7);
    func_0x000107246334(dVar6,uVar7,0,0x4039800000000000);
    *(double *)(param_4 + 0x40) = *(double *)(param_3 + 0x90) * (1.0 / dVar6);
    *(double *)(param_4 + 0x48) = (1.0 / dVar6) * *(double *)(param_3 + 0x98);
  }
  if (param_6 != 0) {
    dVar6 = *(double *)(param_3 + 0x70);
    dVar10 = *(double *)(param_3 + 0x78) * 512.0;
    dVar5 = *(double *)(param_3 + 0x60) + dVar10 * -0.5;
    dVar9 = *(double *)(param_3 + 0x68) + dVar10 * -0.5;
    uVar1 = *(uint *)(param_3 + 0x4c);
    uVar2 = *(uint *)(param_3 + 0x50);
    ___sincos_stret();
    _modf(auStack_178);
    dVar12 = (double)((float)(uVar1 & 1) / 2.0);
    dVar13 = (double)((float)(uVar2 & 1) / 2.0);
    fVar14 = (float)((dVar10 * dVar12 - dVar5) + dVar13 * dVar6);
    _modf(auStack_180);
    fVar8 = (float)((dVar10 * dVar13 - dVar9) + dVar12 * dVar6);
    fVar4 = fVar14 + -1.0;
    if (fVar14 <= 0.5) {
      fVar4 = fVar14;
    }
    fVar14 = fVar8 + -1.0;
    if (fVar8 <= 0.5) {
      fVar14 = fVar8;
    }
    func_0x000107876e00((double)fVar4,(double)fVar14,0,param_4);
  }
  return;
}



/* Entry: 1074163c0; end: 1074163db;  */

double FUN_1074163c0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3fe0000000000000,8);
  return (*(double *)(param_1 + 0xb0) - *(double *)(param_1 + 0xc0)) * auVar1._8_8_;
}



/* Entry: 1074163dc; end: 107416457;  */

double FUN_1074163dc(double param_1,long param_2)

{
  long unaff_x19;
  double dVar1;
  double dVar2;
  undefined1 uStack_31;
  
  func_0x000107418810();
  uStack_31 = 0;
  param_2 = param_2 + 0x9b0;
  func_0x00010724e2c8(param_2,&uStack_31);
  if ((int)param_2 == 0) {
    dVar2 = *(double *)(unaff_x19 + 0x88);
    if (*(char *)(unaff_x19 + 0xa94) == '\x01') {
      func_0x0001074188c8();
      param_1 = param_1 + -5.0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      dVar1 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
      dVar2 = dVar2 * dVar1;
    }
  }
  else {
    dVar2 = *(double *)(unaff_x19 + 0x88);
  }
  return dVar2;
}



/* Entry: 107416458; end: 1074165ef;  */

void FUN_107416458(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = param_3;
  FUN_1074165f0();
  if ((int)lVar1 != 0) {
    dVar2 = (double)func_0x000107418818();
    dVar2 = dVar2 * param_2;
    dVar3 = (double)*(float *)(param_3 + 0xa4);
    auVar5 = NEON_fmov(0x3fe0000000000000,8);
    dVar8 = -*(double *)(param_3 + 0x60) + auVar5._0_8_ * dVar2;
    dVar9 = -*(double *)(param_3 + 0x68) + auVar5._8_8_ * dVar2;
    dVar7 = dVar8;
    FUN_1074163dc(param_3);
    dVar6 = *(double *)(param_3 + 0x70);
    func_0x00010785ce48(param_3 + 200);
    dVar4 = (double)func_0x00010785cdbc(param_3 + 200);
    dVar4 = (dVar8 - dVar4 * dVar3) / dVar2;
    dVar6 = (dVar9 - dVar6 * dVar3) / dVar2;
    dVar7 = -(dVar7 * dVar3) / dVar2;
    dVar10 = 0.0;
    if (*(char *)(param_3 + 0xa94) == '\x01') {
      dVar10 = (double)*(float *)(param_3 + 0xa90);
    }
    *(double *)(param_3 + 0x150) = dVar6 + (dVar9 / dVar2 - dVar6) * dVar10;
    *(double *)(param_3 + 0x148) = dVar4 + (dVar8 / dVar2 - dVar4) * dVar10;
    *(double *)(param_3 + 0x158) = dVar7 + (dVar3 / dVar2 - dVar7) * dVar10;
  }
  return;
}



/* Entry: 1074165f0; end: 10741663f;  */

bool FUN_1074165f0(long param_1)

{
  if (((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x50) != 0)) &&
     (*(double *)(param_1 + 0x28) <= *(double *)(param_1 + 0x78))) {
    return *(double *)(param_1 + 0x78) <= *(double *)(param_1 + 0x30);
  }
  return false;
}



/* Entry: 107416640; end: 1074167ab;  */

void FUN_107416640(double param_1,double param_2,double param_3,long param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_80;
  double dStack_78;
  undefined1 auStack_70 [16];
  
  func_0x00010785cba0(param_4 + 200);
  dVar2 = param_1;
  dVar5 = param_2;
  dVar6 = param_3;
  func_0x00010785cdbc(param_4 + 200);
  func_0x00010785cdd4(param_4 + 200,&uStack_80,&dStack_78);
  dVar3 = (double)NEON_fminnm(*(undefined8 *)(param_4 + 0x40),uStack_80);
  dVar7 = *(double *)(param_4 + 0x38);
  if (*(double *)(param_4 + 0x38) <= dVar3) {
    dVar7 = dVar3;
  }
  fVar1 = *(float *)(param_4 + 0xa4);
  dVar3 = dVar7;
  _cos();
  dVar3 = (double)fVar1 / ((param_3 / dVar3) * 512.0);
  _log2();
  _exp2();
  dVar4 = (double)NEON_fminnm(*(undefined8 *)(param_4 + 0x30),dVar3);
  dVar3 = *(double *)(param_4 + 0x28);
  if (*(double *)(param_4 + 0x28) <= dVar4) {
    dVar3 = dVar4;
  }
  dVar5 = (param_2 + (-param_3 / dVar6) * dVar5) * -6.283185307179586 + 3.141592653589793;
  _exp(dVar5);
  _atan();
  func_0x0001074188d0((dVar5 * 2.0 + -1.5707963267948966) * 57.29577951308232,
                      (param_1 + (-param_3 / dVar6) * dVar2) * 360.0 + -180.0,auStack_70);
  _log2(dVar3);
  func_0x000107418890();
  if (*(double *)(param_4 + 0x70) != dStack_78) {
    *(double *)(param_4 + 0x70) = dStack_78;
    func_0x000107418758();
  }
  if (*(double *)(param_4 + 0x88) != dVar7) {
    *(double *)(param_4 + 0x88) = dVar7;
    func_0x000107418758();
  }
  return;
}



/* Entry: 1074167ac; end: 1074168f7;  */

void FUN_1074167ac(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  dVar4 = param_1;
  func_0x00010786ecb0();
  lVar1 = param_3;
  FUN_107417d68();
  if ((int)lVar1 != 0) {
    uVar2 = NEON_fminnm(dVar4,0x4054000000000000);
    func_0x0001074188d0(uVar2,param_2,&dStack_60);
    dVar5 = 0.0;
    if (*(char *)(param_3 + 0xa94) == '\x01') {
      dVar5 = (double)*(float *)(param_3 + 0xa90);
    }
    func_0x0001074188d0(dVar4 + dVar5 * (dStack_60 - dVar4),param_2,&dStack_70);
    param_2 = dStack_68;
    dVar4 = dStack_70;
  }
  _exp2();
  dVar3 = (double)NEON_fminnm(*(undefined8 *)(param_3 + 0x30),param_1);
  dVar5 = *(double *)(param_3 + 0x28);
  if (*(double *)(param_3 + 0x28) <= dVar3) {
    dVar5 = dVar3;
  }
  dVar3 = (dVar5 * 512.0) / 360.0;
  dVar6 = (dVar5 * 512.0) / 6.283185307179586;
  *(double *)(param_3 + 0x168) = dVar3;
  *(double *)(param_3 + 0x170) = dVar6;
  dVar4 = dVar4 * 0.017453292519943295;
  _sin();
  dVar4 = (double)NEON_fminnm(dVar4,0x3feffffffffffff7);
  if (dVar4 <= -0.999999999999999) {
    dVar4 = -0.999999999999999;
  }
  dVar4 = (dVar4 + 1.0) / (1.0 - dVar4);
  _log();
  dStack_58 = dVar4 * dVar6 * 0.5;
  dStack_60 = -(param_2 * dVar3);
  FUN_10741825c(dVar5,param_3,&dStack_60);
  return;
}



/* Entry: 1074168f8; end: 10741693f;  */

void FUN_1074168f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_107416458();
  func_0x00010785cba0(param_5 + 200);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 1;
  uVar1 = *(undefined8 *)(param_5 + 200);
  uVar3 = *(undefined8 *)(param_5 + 0xe0);
  uVar2 = *(undefined8 *)(param_5 + 0xd8);
  param_1[5] = *(undefined8 *)(param_5 + 0xd0);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 107416940; end: 1074169df;  */

bool FUN_107416940(undefined8 param_1,double *param_2)

{
  bool bVar1;
  long unaff_x19;
  double dVar2;
  double dVar3;
  
  bVar1 = true;
  if ((!NAN(*param_2)) && (bVar1 = true, !NAN(param_2[1]))) {
    bVar1 = false;
  }
  if (!bVar1) {
    dVar2 = param_2[2];
    bVar1 = NAN(dVar2);
    if (!bVar1) {
      func_0x0001074188e4();
      _exp2();
      dVar3 = dVar2 * 512.0;
      FUN_1074169e0();
      _exp2();
      NEON_fminnm((double)*(float *)(unaff_x19 + 0xa4) / (dVar2 * 512.0),param_2[2]);
      dVar2 = *param_2;
      *(double *)(unaff_x19 + 0x150) = param_2[1];
      *(double *)(unaff_x19 + 0x148) = dVar2;
      *(double *)(unaff_x19 + 0x158) = (double)*(float *)(unaff_x19 + 0xa4) / dVar3;
    }
    return !bVar1;
  }
  return false;
}



/* Entry: 1074169e0; end: 107416a1b;  */

void FUN_1074169e0(long param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x60);
  uStack_28 = *(undefined8 *)(param_1 + 0x68);
  FUN_10741793c(param_1,&uStack_18,&uStack_20,&uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__log2_11034c530)(uStack_18);
  return;
}



/* Entry: 107416a1c; end: 107416aef;  */

char FUN_107416a1c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  long unaff_x19;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  undefined8 uStack_28;
  
  uVar11 = 0xffffffffffffffff;
  uVar1 = NEON_umaxv(ZEXT216(0),4);
  uVar3 = (undefined1)uVar1;
  uVar4 = (undefined1)(uVar1 >> 8);
  uVar5 = (undefined1)(uVar1 >> 0x10);
  uVar6 = (undefined1)(uVar1 >> 0x18);
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  if ((uVar1 & 1) == 0) {
    func_0x000107418828();
    func_0x000107878938(param_6);
    bVar2 = false;
    if (!NAN((double)CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,
                                                  CONCAT12(uVar5,CONCAT11(uVar4,uVar3))))))))) {
      bVar2 = (double)CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,
                                                  CONCAT12(uVar5,CONCAT11(uVar4,uVar3))))))) == 0.0;
    }
    if (!bVar2) {
      func_0x0001078788fc();
      uStack_40 = CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,
                                                  CONCAT12(uVar5,CONCAT11(uVar4,uVar3)))))));
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0xbff0000000000000;
      uStack_38 = uVar11;
      dStack_30 = param_3;
      uStack_28 = param_4;
      func_0x000107418858();
      uStack_58 = CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,
                                                  CONCAT12(uVar5,CONCAT11(uVar4,uVar3)))))));
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uStack_98 = 0xbff0000000000000;
      uStack_a0 = 0;
      uStack_90 = 0;
      uStack_50 = uVar11;
      dStack_48 = param_3;
      func_0x000107418858();
      uStack_70 = CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,
                                                  CONCAT12(uVar5,CONCAT11(uVar4,uVar3)))))));
      if (0.0 <= param_3) {
        uStack_68 = uVar11;
        dStack_60 = param_3;
        func_0x00010785cf48(&uStack_a0,&uStack_58,&uStack_70);
        if (cStack_80 != '\x01') {
          return cStack_80;
        }
        func_0x00010785cf34(unaff_x19 + 200,&uStack_a0);
        return '\x01';
      }
    }
  }
  return '\0';
}



/* Entry: 107416af0; end: 107416bf7;  */

void FUN_107416af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lVar4;
  
  func_0x000107418828();
  FUN_1074165f0();
  if (param_4 == 0) {
    return;
  }
  if (((*(byte *)(unaff_x20 + 0x18) & 1) == 0) && ((*(byte *)(unaff_x20 + 0x40) & 1) == 0)) {
    return;
  }
  func_0x0001074187a0();
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    iVar1 = (int)unaff_x20 + 0x20;
    FUN_10741748c();
    FUN_107418650();
    if (iVar1 == 0) goto LAB_107416b70;
    puVar3 = (undefined8 *)(unaff_x20 + 0x20);
    FUN_10741748c();
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    uStack_38 = puVar3[3];
    param_1 = puVar3[2];
    lVar4 = unaff_x19;
    uStack_40 = param_1;
    FUN_107416a1c();
    uVar2 = (uint)lVar4;
  }
  else {
LAB_107416b70:
    uVar2 = 0;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x0001074174bc();
    func_0x00010785cba0(unaff_x19 + 200);
    uStack_50 = param_1;
    uStack_48 = param_2;
    uStack_40 = param_3;
    func_0x0001074174a4(unaff_x20,&uStack_50);
    if ((int)unaff_x20 == 0) goto joined_r0x000107416bf0;
    func_0x0001074174bc();
    FUN_107416940();
    uVar2 = uVar2 | (uint)unaff_x19;
  }
  uVar2 = uVar2 & 1;
joined_r0x000107416bf0:
  if (uVar2 != 0) {
    FUN_107416640();
    func_0x000107418758();
  }
  return;
}



/* Entry: 107416bf8; end: 10741748b;  */

ulong FUN_107416bf8(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_670 [128];
  double dStack_5f0;
  double dStack_5e8;
  double dStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  double dStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_4d0 [192];
  undefined1 auStack_410 [192];
  undefined1 auStack_350 [488];
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  undefined8 uStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  
  if (((*(char *)(param_1 + 0x178) != '\x01') || (*(int *)(param_1 + 0x4c) == 0)) ||
     (*(int *)(param_1 + 0x50) == 0)) {
    return param_1;
  }
  FUN_10741607c(param_1,param_1 + 0x180,1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  func_0x000107418790(&dStack_110,param_1 + 0x180);
  dStack_110 = dStack_110 * 512.0;
  dStack_108 = dStack_108 * 512.0;
  dStack_100 = dStack_100 * 512.0;
  dStack_f8 = dStack_f8 * 512.0;
  dVar19 = dStack_f0 * 512.0;
  dStack_e8 = dStack_e8 * 512.0;
  dStack_e0 = dStack_e0 * 512.0;
  dStack_d8 = dStack_d8 * 512.0;
  dStack_f0 = dVar19;
  FUN_107417d9c(&dStack_5f0,uVar1,uVar2);
  func_0x000107877034(&dStack_110,&dStack_5f0,&dStack_110);
  func_0x000107418790(param_1 + 0x280,&dStack_110);
  lVar5 = param_1 + 0x200;
  func_0x0001078769cc(lVar5,param_1 + 0x180);
  if ((int)lVar5 == 0) {
    dVar11 = (double)func_0x000107418818();
    uVar12 = _log2();
    func_0x0001074188f0();
    func_0x00010785c1dc(&dStack_5f0,dVar11 * dVar19,uVar12,param_1 + 0x200);
    _memcpy(param_1 + 0x380,&dStack_5f0,0x60);
    func_0x000107418870(param_1 + 0x4a0,auStack_4d0);
    func_0x000107418870(param_1 + 0x560,auStack_410);
    func_0x000107418870(param_1 + 0x3e0,&uStack_590);
    _memcpy(param_1 + 0x620,auStack_350,0x1e0);
    lVar5 = param_1 + 0x300;
    func_0x0001078769cc(lVar5,param_1 + 0x280);
    if ((int)lVar5 == 0) {
      dVar19 = 0.0;
      dVar11 = 0.0;
      if (*(char *)(param_1 + 0xa94) == '\x01') {
        dVar11 = (double)*(float *)(param_1 + 0xa90);
      }
      uVar13 = func_0x0001074188f0(*(undefined8 *)(param_1 + 0x78),dVar11);
      func_0x00010785cc84(&dStack_5f0,uVar13,uVar12,1.0 - dVar11,param_1 + 200);
      func_0x000107418790(param_1 + 0x800,&dStack_5f0);
      if (*(char *)(param_1 + 0xa94) == '\x01') {
        dVar19 = (double)*(float *)(param_1 + 0xa90);
      }
      uVar13 = func_0x0001074188f0(*(undefined8 *)(param_1 + 0x78));
      func_0x00010785cc84(auStack_670,uVar13,uVar12,1.0 - dVar19,param_1 + 200);
      func_0x0001078773f4(param_1 + 0x880,auStack_670);
      dVar11 = 0.0;
      if (*(char *)(param_1 + 0xa94) == '\x01') {
        dVar11 = (double)*(float *)(param_1 + 0xa90);
      }
      uVar13 = func_0x0001074188f0(*(undefined8 *)(param_1 + 0x78),dVar11);
      func_0x00010785cc54(&dStack_5f0,uVar13,uVar12,1.0 - dVar11,param_1 + 200);
      func_0x000107418790(param_1 + 0x8c8,&dStack_5f0);
      uVar6 = param_1 + 0x948;
      func_0x0001078773f4(uVar6,param_1 + 0x8c8);
      *(undefined8 *)(param_1 + 0xaa0) = 0x3ff0000000000000;
      dVar11 = 0.0;
      *(undefined8 *)(param_1 + 0xab0) = 0;
      *(undefined8 *)(param_1 + 0xaa8) = 0;
      *(undefined8 *)(param_1 + 0xac0) = 0;
      *(undefined8 *)(param_1 + 0xab8) = 0;
      *(undefined8 *)(param_1 + 0xac8) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xad8) = 0;
      *(undefined8 *)(param_1 + 0xad0) = 0;
      *(undefined8 *)(param_1 + 0xae8) = 0;
      *(undefined8 *)(param_1 + 0xae0) = 0;
      *(undefined8 *)(param_1 + 0xaf0) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xb00) = 0;
      *(undefined8 *)(param_1 + 0xaf8) = 0;
      *(undefined8 *)(param_1 + 0xb10) = 0;
      *(undefined8 *)(param_1 + 0xb08) = 0;
      auVar18 = NEON_fmov(0x3ff0000000000000,8);
      uVar13 = auVar18._8_8_;
      *(undefined8 *)(param_1 + 0xb20) = uVar13;
      uVar12 = auVar18._0_8_;
      *(undefined8 *)(param_1 + 0xb18) = uVar12;
      *(undefined8 *)(param_1 + 0xb30) = 0;
      *(undefined8 *)(param_1 + 0xb28) = 0;
      *(undefined8 *)(param_1 + 0xb40) = 0;
      *(undefined8 *)(param_1 + 0xb38) = 0;
      *(undefined8 *)(param_1 + 0xb48) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xb58) = 0;
      *(undefined8 *)(param_1 + 0xb50) = 0;
      *(undefined8 *)(param_1 + 0xb68) = 0;
      *(undefined8 *)(param_1 + 0xb60) = 0;
      *(undefined8 *)(param_1 + 0xb70) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xb80) = 0;
      *(undefined8 *)(param_1 + 0xb78) = 0;
      *(undefined8 *)(param_1 + 0xb90) = 0;
      *(undefined8 *)(param_1 + 0xb88) = 0;
      *(undefined8 *)(param_1 + 0xba0) = uVar13;
      *(undefined8 *)(param_1 + 0xb98) = uVar12;
      *(undefined8 *)(param_1 + 3000) = 0;
      *(undefined8 *)(param_1 + 0xbb0) = 0;
      *(undefined8 *)(param_1 + 0xba8) = 0;
      *(undefined8 *)(param_1 + 0xbc0) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xbd8) = 0;
      *(undefined8 *)(param_1 + 0xbd0) = 0;
      *(undefined8 *)(param_1 + 0xbc8) = 0;
      *(undefined8 *)(param_1 + 0xbe8) = uVar13;
      *(undefined8 *)(param_1 + 0xbe0) = uVar12;
      *(undefined8 *)(param_1 + 0xbf8) = 0;
      *(undefined8 *)(param_1 + 0xbf0) = 0;
      *(undefined8 *)(param_1 + 0xc08) = 0;
      *(undefined8 *)(param_1 + 0xc00) = 0;
      *(undefined8 *)(param_1 + 0xc10) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xc20) = 0;
      *(undefined8 *)(param_1 + 0xc18) = 0;
      *(undefined8 *)(param_1 + 0xc30) = 0;
      *(undefined8 *)(param_1 + 0xc28) = 0;
      *(undefined8 *)(param_1 + 0xc38) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xc48) = 0;
      *(undefined8 *)(param_1 + 0xc40) = 0;
      *(undefined8 *)(param_1 + 0xc58) = 0;
      *(undefined8 *)(param_1 + 0xc50) = 0;
      *(undefined8 *)(param_1 + 0xc68) = uVar13;
      *(undefined8 *)(param_1 + 0xc60) = uVar12;
      *(undefined8 *)(param_1 + 0xc78) = 0;
      *(undefined8 *)(param_1 + 0xc70) = 0;
      *(undefined8 *)(param_1 + 0xc80) = 0;
      *(undefined8 *)(param_1 + 0xc88) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xca0) = 0;
      *(undefined8 *)(param_1 + 0xc98) = 0;
      *(undefined8 *)(param_1 + 0xc90) = 0;
      *(undefined8 *)(param_1 + 0xcb0) = uVar13;
      *(undefined8 *)(param_1 + 0xca8) = uVar12;
      *(undefined8 *)(param_1 + 0xcc0) = 0;
      *(undefined8 *)(param_1 + 0xcb8) = 0;
      *(undefined8 *)(param_1 + 0xcd0) = 0;
      *(undefined8 *)(param_1 + 0xcc8) = 0;
      *(undefined8 *)(param_1 + 0xcd8) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xce8) = 0;
      *(undefined8 *)(param_1 + 0xce0) = 0;
      *(undefined8 *)(param_1 + 0xcf8) = 0;
      *(undefined8 *)(param_1 + 0xcf0) = 0;
      *(undefined8 *)(param_1 + 0xd00) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xd10) = 0;
      *(undefined8 *)(param_1 + 0xd08) = 0;
      *(undefined8 *)(param_1 + 0xd20) = 0;
      *(undefined8 *)(param_1 + 0xd18) = 0;
      *(undefined8 *)(param_1 + 0xd30) = uVar13;
      *(undefined8 *)(param_1 + 0xd28) = uVar12;
      *(undefined8 *)(param_1 + 0xd40) = 0;
      *(undefined8 *)(param_1 + 0xd38) = 0;
      *(undefined8 *)(param_1 + 0xd50) = 0;
      *(undefined8 *)(param_1 + 0xd48) = 0;
      *(undefined8 *)(param_1 + 0xd58) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xd68) = 0;
      *(undefined8 *)(param_1 + 0xd60) = 0;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      *(undefined8 *)(param_1 + 0xd70) = 0;
      *(undefined8 *)(param_1 + 0xd80) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xd90) = 0;
      *(undefined8 *)(param_1 + 0xd88) = 0;
      *(undefined8 *)(param_1 + 0xda0) = 0;
      *(undefined8 *)(param_1 + 0xd98) = 0;
      *(undefined8 *)(param_1 + 0xda8) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0xe38) = 0;
      *(undefined8 *)(param_1 + 0xe30) = 0;
      if (*(char *)(param_1 + 0xa94) == '\x01') {
        dVar14 = (double)func_0x000107418818();
        dVar20 = (double)*(float *)(param_1 + 0xa98);
        dVar22 = ((dVar14 * dVar11) / 3.141592653589793) * dVar20;
        dVar15 = (double)FUN_1074163c0(param_1);
        fVar9 = *(float *)(param_1 + 0xa4);
        *(undefined8 *)(param_1 + 0xb20) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xb30) = 0;
        *(undefined8 *)(param_1 + 0xb28) = 0;
        *(undefined8 *)(param_1 + 0xb40) = 0;
        *(undefined8 *)(param_1 + 0xb38) = 0;
        *(undefined8 *)(param_1 + 0xb48) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xb58) = 0;
        *(undefined8 *)(param_1 + 0xb50) = 0;
        *(undefined8 *)(param_1 + 0xb68) = 0;
        *(undefined8 *)(param_1 + 0xb60) = 0;
        *(undefined8 *)(param_1 + 0xb70) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xb80) = 0;
        *(undefined8 *)(param_1 + 0xb78) = 0;
        *(undefined8 *)(param_1 + 0xb90) = 0;
        *(undefined8 *)(param_1 + 0xb88) = 0;
        *(undefined8 *)(param_1 + 0xb98) = 0x3ff0000000000000;
        fVar10 = (float)func_0x0001074187d0();
        dVar14 = (double)fVar10 * -0.5;
        dVar11 = (double)FUN_1074163dc(param_1);
        func_0x000107418884(dVar14 * (dVar11 / *(double *)(param_1 + 0x40)));
        dVar11 = 0.0;
        func_0x000107876e00(0,0,-(dVar22 + (double)fVar9),param_1 + 0xb20);
        func_0x000107876f78(-*(double *)(param_1 + 0x70),param_1 + 0xb20,param_1 + 0xb20);
        dVar16 = (double)func_0x00010785cb24(param_1 + 200);
        dVar21 = 0.017453292519943295;
        func_0x000107418884(dVar16 * 0.017453292519943295);
        func_0x00010785cb24(param_1 + 200);
        func_0x000107876ec0(dVar21 * -0.017453292519943295,param_1 + 0xb20,param_1 + 0xb20);
        func_0x0001078773f4(param_1 + 0xba0,param_1 + 0xb20);
        _memcpy(param_1 + 0xc68,param_1 + 0xba0,0x48);
        func_0x00010787690c(param_1 + 0xc68);
        func_0x000107877000(dVar22,dVar22,dVar22,param_1 + 0xb20);
        dVar21 = (double)fVar9 * 0.1;
        dStack_110 = 0.0;
        dStack_108 = 0.0;
        dStack_100 = 0.0;
        dStack_f8 = 1.0;
        func_0x000107877358(&dStack_5f0,&dStack_110,param_1 + 0xb20);
        dStack_100 = -dStack_5e0;
        dStack_110 = -dStack_5f0;
        dStack_108 = -dStack_5e8;
        dVar16 = (double)FUN_1074186d8(&dStack_110,&dStack_110);
        dVar16 = SQRT(dVar16);
        if (dVar22 <= dVar16) {
          dVar19 = (double)_acos(dVar22 / dVar16);
          dStack_128 = dStack_110;
          dStack_130 = -dStack_108;
          if (dStack_108 == 0.0 && dStack_110 == 0.0) {
            dStack_130 = 0.0;
            dStack_128 = dStack_100;
          }
          dVar11 = 0.0;
          if (dStack_108 == 0.0 && dStack_110 == 0.0) {
            dVar11 = -dStack_108;
          }
          dStack_120 = dVar11;
          dVar14 = (double)FUN_1074185b8(&dStack_130);
          dVar3 = dStack_100;
          dVar19 = -dVar19;
          dVar11 = -(dStack_110 * dVar11);
          dVar23 = dVar11 + dStack_108 * dVar14;
          dVar14 = 0.0;
          for (iVar8 = 0; iVar8 != 2; iVar8 = iVar8 + 1) {
            dVar17 = (double)___sincos_stret();
            dVar17 = dStack_5e0 + (dVar22 * (dVar23 * dVar17 + dVar3 * dVar11)) / dVar16;
            if (dVar14 <= dVar17) {
              dVar17 = dVar14;
            }
            dVar14 = dVar17;
          }
          dVar11 = -dVar14;
        }
        func_0x0001074187d0();
        func_0x000107418834();
        func_0x000107876cd0(&dStack_5f0);
        func_0x000107418790(param_1 + 0xaa0,&dStack_5f0);
        if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
          *(double *)(param_1 + 0xae0) = (dVar15 * -2.0) / dVar19;
          *(double *)(param_1 + 0xae8) = (dVar20 + dVar20) / dVar14;
        }
        func_0x0001078769cc(param_1 + 0xdb0,param_1 + 0xaa0);
        func_0x000107877034(param_1 + 0xaa0,param_1 + 0xaa0,param_1 + 0xb20);
        func_0x0001078769cc(param_1 + 0xcb0,param_1 + 0xaa0);
        *(undefined8 *)(param_1 + 0xa10) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xa20) = 0;
        *(undefined8 *)(param_1 + 0xa18) = 0;
        *(undefined8 *)(param_1 + 0xa30) = 0;
        *(undefined8 *)(param_1 + 0xa28) = 0;
        *(undefined8 *)(param_1 + 0xa38) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xa48) = 0;
        *(undefined8 *)(param_1 + 0xa40) = 0;
        *(undefined8 *)(param_1 + 0xa58) = 0;
        *(undefined8 *)(param_1 + 0xa50) = 0;
        *(undefined8 *)(param_1 + 0xa60) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xa70) = 0;
        *(undefined8 *)(param_1 + 0xa68) = 0;
        *(undefined8 *)(param_1 + 0xa80) = 0;
        *(undefined8 *)(param_1 + 0xa78) = 0;
        *(undefined8 *)(param_1 + 0xa88) = 0x3ff0000000000000;
        func_0x000107877440(param_1 + 0xa10,param_1 + 0xba0);
        fVar9 = (float)func_0x0001074187d0();
        dVar14 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x4c));
        dVar22 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x50));
        dStack_5c8 = (double)func_0x0001074188d8((double)fVar9 + (double)fVar9);
        dStack_5c8 = 1.0 / dStack_5c8;
        dVar16 = dStack_5c8 / (dVar14 / dVar22);
        dStack_5e0 = 0.0;
        dStack_5e8 = 0.0;
        uStack_5d0 = 0;
        uStack_5d8 = 0;
        uStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_590 = 0;
        uStack_588 = 0;
        uStack_598 = 0xbff0000000000000;
        uStack_5a0 = 0xbff1af286bca1af2;
        uStack_578 = 0;
        uStack_580 = 0xbfcaf286bca1af28;
        dStack_5f0 = dVar16;
        func_0x000107877034(param_1 + 0xa10,&dStack_5f0,param_1 + 0xa10);
        func_0x0001074187d0();
        func_0x000107418834();
        func_0x000107876cd0(&dStack_110);
        if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
          dStack_d0 = (dVar15 * -2.0) / dVar19;
          dVar16 = (dVar20 + dVar20) / (dVar14 / dVar22);
          dStack_c8 = dVar16;
        }
        func_0x000107877034(&dStack_110,&dStack_110,param_1 + 0xb20);
        func_0x0001078769cc(param_1 + 0xd30,&dStack_110);
        *(undefined8 *)(param_1 + 0xbe8) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xbf8) = 0;
        *(undefined8 *)(param_1 + 0xbf0) = 0;
        *(undefined8 *)(param_1 + 0xc08) = 0;
        *(undefined8 *)(param_1 + 0xc00) = 0;
        *(undefined8 *)(param_1 + 0xc10) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xc20) = 0;
        *(undefined8 *)(param_1 + 0xc18) = 0;
        *(undefined8 *)(param_1 + 0xc30) = 0;
        *(undefined8 *)(param_1 + 0xc28) = 0;
        *(undefined8 *)(param_1 + 0xc38) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xc48) = 0;
        *(undefined8 *)(param_1 + 0xc40) = 0;
        *(undefined8 *)(param_1 + 0xc58) = 0;
        *(undefined8 *)(param_1 + 0xc50) = 0;
        *(undefined8 *)(param_1 + 0xc60) = 0x3ff0000000000000;
        func_0x0001078769cc(param_1 + 0xbe8,param_1 + 0xb20);
        dStack_130 = (double)func_0x0001078772cc(param_1 + 0xb20,3);
        dStack_130 = -dStack_130;
        dVar16 = -dVar16;
        dVar21 = -dVar21;
        dStack_128 = dVar16;
        dStack_120 = dVar21;
        dStack_150 = (double)FUN_1074185b8(&dStack_130);
        dVar19 = dVar11 * dStack_150;
        dVar14 = dVar11 * dVar16;
        dVar11 = dVar11 * dVar21;
        uStack_138 = 0;
        dStack_148 = dVar16;
        dStack_140 = dVar21;
        func_0x0001074187b8();
        func_0x0001074188fc();
        dVar22 = (double)FUN_1074185b8(&dStack_150);
        uStack_138 = 0x3ff0000000000000;
        dStack_168 = dVar22;
        dStack_160 = dVar16;
        dStack_158 = dVar21;
        dStack_150 = -dVar19;
        dStack_148 = -dVar14;
        dStack_140 = -dVar11;
        func_0x0001074187b8();
        func_0x0001074188fc();
        *(float *)(param_1 + 0xe30) = (float)dVar22;
        *(float *)(param_1 + 0xe34) = (float)dVar16;
        *(float *)(param_1 + 0xe38) = (float)dVar21;
        dVar19 = (double)FUN_1074186d8(&dStack_150,&dStack_168);
        *(float *)(param_1 + 0xe3c) = -(float)dVar19;
        uVar6 = param_1 + 0xaa0;
        dVar11 = 0.0;
        dVar19 = (double)FUN_1074185bc(0,0,0,uVar6,*(undefined8 *)(param_1 + 0x4c),1);
        *(double *)(param_1 + 0xe40) = dVar15 + dVar19;
        *(double *)(param_1 + 0xe48) = dVar20 + dVar11;
      }
      *(undefined1 *)(param_1 + 0x178) = 0;
      return uVar6;
    }
    uVar6 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
  }
  else {
    uVar6 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
  }
  uVar7 = uVar6;
  ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(uVar6);
  __Unwind_Resume();
  if ((*(byte *)(uVar7 + 0x20) & 1) != 0) {
    return uVar7;
  }
  func_0x000104bdc2c8();
  uVar4 = (uint)uVar7;
  func_0x0001074186a8();
  return (ulong)(uVar4 ^ 1);
}



/* Entry: 10741748c; end: 1074174d3;  */

ulong FUN_10741748c(ulong param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  uVar1 = (uint)param_1;
  func_0x0001074186a8();
  return (ulong)(uVar1 ^ 1);
}



/* Entry: 1074174d4; end: 10741767b;  */

void FUN_1074174d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107281b70();
  if ((((((((int)lVar1 != 0) && (*(double *)(param_1 + 0x28) == *(double *)(param_2 + 0x28))) &&
         (*(double *)(param_1 + 0x30) == *(double *)(param_2 + 0x30))) &&
        (((*(double *)(param_1 + 0x40) == *(double *)(param_2 + 0x40) &&
          (*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c))) &&
         ((*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50) &&
          ((*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54) &&
           (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))))))))) &&
       ((*(char *)(param_1 + 0x5c) == *(char *)(param_2 + 0x5c) &&
        (((*(char *)(param_1 + 0x5d) == *(char *)(param_2 + 0x5d) &&
          (*(char *)(param_1 + 0x5e) == *(char *)(param_2 + 0x5e))) &&
         (*(char *)(param_1 + 0x5f) == *(char *)(param_2 + 0x5f))))))) &&
      (((*(double *)(param_1 + 0x60) == *(double *)(param_2 + 0x60) &&
        (*(double *)(param_1 + 0x68) == *(double *)(param_2 + 0x68))) &&
       (((*(double *)(param_1 + 0x70) == *(double *)(param_2 + 0x70) &&
         ((*(double *)(param_1 + 0x78) == *(double *)(param_2 + 0x78) &&
          (*(double *)(param_1 + 0x80) == *(double *)(param_2 + 0x80))))) &&
        (*(double *)(param_1 + 0x88) == *(double *)(param_2 + 0x88))))))) &&
     (((*(double *)(param_1 + 0x90) == *(double *)(param_2 + 0x90) &&
       (*(double *)(param_1 + 0x98) == *(double *)(param_2 + 0x98))) &&
      (*(char *)(param_1 + 0xa0) == *(char *)(param_2 + 0xa0))))) {
    FUN_107414390(param_1 + 0xa8,param_2 + 0xa8);
  }
  return;
}



/* Entry: 10741767c; end: 107417693;  */

uint FUN_10741767c(uint param_1)

{
  FUN_1074174d4();
  return param_1 ^ 1;
}



/* Entry: 107417694; end: 1074176fb;  */

undefined8 FUN_107417694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [4];
  
  func_0x000107418750();
  uStack_68 = 0x3ff0000000000000;
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107877358(auStack_60,&uStack_80,unaff_x19 + 0x800);
  return auStack_60[0];
}



/* Entry: 1074176fc; end: 10741776b;  */

undefined8 FUN_1074176fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_107416bf8();
  func_0x00010787680c(auStack_50,&uStack_38,param_4 + 0x880);
  return auStack_50[0];
}



/* Entry: 10741776c; end: 10741777f;  */

double FUN_10741776c(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + 0x78);
  dVar2 = 3.141592653589793 - *(double *)(param_1 + 0x150) * 6.283185307179586;
  _exp(dVar2);
  _atan();
  func_0x00010785d34c();
  func_0x00010785d32c(dVar2 * 57.29577951308232,0x3f91df46a2529d39);
  return dVar1 * 512.0 * *(double *)(param_1 + 0x148);
}



/* Entry: 107417780; end: 1074177d3;  */

void FUN_107417780(int param_1)

{
  long unaff_x19;
  double dVar1;
  double dVar2;
  
  func_0x000107418810();
  func_0x000107418764();
  dVar2 = ((double)*(uint *)(unaff_x19 + 0x50) / 2.0) / 0.3333333333333333;
  if (param_1 != 0) {
    dVar1 = *(double *)(unaff_x19 + 0x80);
    func_0x0001074188d8();
    dVar2 = dVar2 * (0.3333333333333333 / dVar1);
  }
  *(float *)(unaff_x19 + 0xa4) = (float)dVar2;
  return;
}



/* Entry: 1074177d4; end: 1074178c3;  */

void FUN_1074177d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107418808();
  puVar1 = (undefined1 *)(param_4 + 0xa8);
  puVar2 = (undefined8 *)(param_4 + 0xa9);
  if (param_5[0x20] != '\0') {
    puVar2 = (undefined8 *)(param_5 + 1);
    puVar1 = param_5;
  }
  uVar3 = *puVar1;
  uVar4 = *puVar2;
  *(undefined8 *)((long)param_1 + 0x21) = puVar2[1];
  *(undefined8 *)((long)param_1 + 0x19) = uVar4;
  uVar4 = *(undefined8 *)((long)puVar2 + 0xf);
  param_1[6] = *(undefined8 *)((long)puVar2 + 0x17);
  param_1[5] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x78);
  _log2();
  dVar5 = *(double *)(param_4 + 0x70);
  dVar6 = *(double *)(param_4 + 0x88);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = uVar3;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)((long)param_1 + 0x61) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[0xd] = dVar5 * -57.29577951308232;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)((long)param_1 + 0x71) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  param_1[0xf] = dVar6 * 57.29577951308232;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)((long)param_1 + 0x81) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  return;
}



/* Entry: 1074178c4; end: 1074178df;  */

int FUN_1074178c4(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x78);
  _log2(dVar1);
  return (int)dVar1;
}



/* Entry: 1074178e0; end: 10741793b;  */

void FUN_1074178e0(undefined8 param_1,int param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107418828();
  FUN_107412708();
  if (param_2 != 0) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20;
    uVar4 = unaff_x20[3];
    uVar3 = unaff_x20[2];
    *(undefined1 *)(unaff_x19 + 4) = *(undefined1 *)(unaff_x20 + 4);
    unaff_x19[1] = uVar2;
    *unaff_x19 = uVar1;
    unaff_x19[3] = uVar4;
    unaff_x19[2] = uVar3;
    func_0x000107418808();
    func_0x0001074188c8();
    func_0x000107418890();
  }
  return;
}



/* Entry: 10741793c; end: 107417a8f;  */

void FUN_10741793c(long param_1,double *param_2,double *param_3,double *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    dVar8 = *param_2;
    dVar7 = *param_3;
    bVar1 = *(byte *)(param_1 + 0x48) & 0xfd;
    lVar4 = 0x4c;
    if (bVar1 != 1) {
      lVar4 = 0x50;
    }
    uVar3 = *(uint *)(param_1 + lVar4);
    dVar9 = *param_4;
    *param_2 = dVar8;
    dVar5 = dVar8 * 512.0 - (double)uVar3;
    dVar6 = dVar5 * 0.5;
    dVar5 = -(dVar5 * 0.5);
    if (*param_4 <= dVar6) {
      dVar6 = *param_4;
    }
    if (dVar6 <= dVar5) {
      dVar6 = dVar5;
    }
    *param_4 = dVar6;
    if (iVar2 == 2) {
      lVar4 = 0x50;
      if (bVar1 != 1) {
        lVar4 = 0x4c;
      }
      dVar5 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + lVar4));
      dVar5 = *param_2 * 512.0 - dVar5;
      dVar6 = dVar5 * 0.5;
      dVar5 = -(dVar5 * 0.5);
      if (*param_3 <= dVar6) {
        dVar6 = *param_3;
      }
      if (dVar6 <= dVar5) {
        dVar6 = dVar5;
      }
      *param_3 = dVar6;
    }
    lVar4 = param_1;
    FUN_107417d68();
    if ((int)lVar4 != 0) {
      dVar6 = 0.0;
      if (*(char *)(param_1 + 0xa94) == '\x01') {
        dVar6 = (double)*(float *)(param_1 + 0xa90);
      }
      *param_2 = *param_2 + dVar6 * (dVar8 - *param_2);
      *param_3 = *param_3 + dVar6 * (dVar7 - *param_3);
      *param_4 = *param_4 + dVar6 * (dVar9 - *param_4);
    }
  }
  return;
}



/* Entry: 107417a90; end: 107417acb;  */

void FUN_107417a90(double param_1,long param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = param_1;
  FUN_1074169e0();
  if (dVar1 <= param_1) {
    uVar2 = 0x4039800000000000;
    func_0x0001074187f8();
    *(undefined8 *)(param_2 + 0x30) = uVar2;
  }
  return;
}



/* Entry: 107417acc; end: 107417af3;  */

void FUN_107417acc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  FUN_107417af4(param_1,param_2,&uStack_30);
  return;
}



/* Entry: 107417af4; end: 107417d67;  */

double FUN_107417af4(long param_1,undefined8 param_2,double *param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  double dStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_158;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar6 = 0;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    dVar4 = 0.0;
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar2 = param_1;
      FUN_107417d68();
      func_0x0001074188bc();
      dStack_158 = dVar4 * 0.001953125;
      dStack_150 = (double)CONCAT44(uVar7,uVar6) * 0.001953125;
      if ((int)lVar2 == 0) {
        uStack_140 = 0x3ff0000000000000;
        uStack_148 = 0;
        func_0x0001074187a0();
        func_0x00010741884c();
        dVar4 = *param_3 / param_3[3];
        NEON_ucvtf((ulong)*(uint *)(param_1 + 0x50));
      }
      else {
        uStack_c0 = 0x3ff0000000000000;
        uStack_c8 = 0;
        dStack_d8 = dStack_158;
        dStack_d0 = dStack_150;
        func_0x0001074187a0();
        func_0x00010741884c();
        dVar4 = *param_3 / param_3[3];
        uVar1 = NEON_ucvtf((ulong)*(uint *)(param_1 + 0x50));
        uVar6 = (undefined4)uVar1;
        uVar7 = (undefined4)((ulong)uVar1 >> 0x20);
        dVar5 = param_3[1] / param_3[3];
        func_0x000107259180(param_2);
        dVar5 = dVar5 * 0.017453292519943295;
        dVar12 = (double)CONCAT44(uVar7,uVar6) * 0.017453292519943295;
        ___sincos_stret();
        dVar11 = (double)CONCAT44(uVar7,uVar6);
        ___sincos_stret();
        func_0x0001074187a0();
        func_0x000107418790(&dStack_158,param_1 + 0xaa0);
        FUN_107417d9c(&dStack_1e0,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        func_0x000107877034(&dStack_158,&dStack_1e0,&dStack_158);
        uStack_1e8 = 0x3ff0000000000000;
        uStack_200 = dVar11 * dVar12;
        uStack_1f8 = dVar5;
        dStack_1f0 = dVar11 * (double)CONCAT44(uVar7,uVar6);
        func_0x000107877358(&dStack_1e0,&uStack_200,&dStack_158);
        NEON_ucvtf((ulong)*(uint *)(param_1 + 0x50));
        fStack_b4 = 0.0;
        if (*(char *)(param_1 + 0xa94) == '\x01') {
          fStack_b4 = *(float *)(param_1 + 0xa90);
        }
        fVar8 = (float)*param_3;
        uStack_78 = CONCAT44((float)param_3[3],(float)param_3[2]);
        uStack_80 = CONCAT44((float)param_3[1],fVar8);
        uVar6 = 0x3f800000;
        fStack_84 = 1.0 - fStack_b4;
        dVar11 = dStack_1c8;
        fVar3 = fStack_84;
        func_0x0001073b5d6c(&uStack_80,&fStack_84);
        uStack_200 = (double)CONCAT44(uVar6,fVar3);
        fVar10 = SUB84(dVar11,0);
        uStack_1f8 = (double)CONCAT44(fVar10,fVar8);
        fVar9 = SUB84(dStack_1c8,0);
        fVar8 = (float)dStack_1e0;
        uStack_a8 = CONCAT44((float)dStack_1c8,(float)dStack_1d0);
        uStack_b0 = CONCAT44((float)dStack_1d8,fVar8);
        func_0x0001073b5d6c(&uStack_b0,&fStack_b4);
        fVar3 = SUB84(dStack_1d0,0);
        fStack_94 = fVar3;
        fStack_90 = fVar8;
        fStack_8c = fVar9;
        fStack_88 = fVar10;
        func_0x0001073b5d3c(&uStack_200,&fStack_94);
        *param_3 = (double)fVar3;
        param_3[1] = (double)fVar8;
        param_3[2] = (double)fVar9;
        param_3[3] = (double)fVar10;
        dVar11 = 0.0;
        if (*(char *)(param_1 + 0xa94) == '\x01') {
          dVar11 = (double)*(float *)(param_1 + 0xa90);
        }
        dVar4 = dVar4 + dVar11 * (dStack_1e0 / dStack_1c8 - dVar4);
      }
    }
    return dVar4;
  }
  return 0.0;
}



/* Entry: 107417d68; end: 107417d9b;  */

bool FUN_107417d68(long param_1)

{
  float *pfVar1;
  
  if (*(char *)(param_1 + 0xa94) == '\x01') {
    pfVar1 = (float *)(param_1 + 0xa90);
    func_0x00010730ebcc();
    return 0.0 < *pfVar1;
  }
  return false;
}



/* Entry: 107417d9c; end: 107417dbf;  */

void FUN_107417d9c(double *param_1,uint param_2,uint param_3)

{
  *param_1 = (double)param_2 / 2.0;
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[3] = 0.0;
  param_1[5] = (double)param_3 * -0.5;
  param_1[7] = 0.0;
  param_1[6] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = ((double)param_2 / 2.0) * 1.0;
  param_1[0xd] = (double)param_3 * -0.5 * -1.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return;
}



/* Entry: 107417dc0; end: 107417eff;  */

void FUN_107417dc0(long param_1)

{
  FUN_107417acc();
  NEON_ucvtf((ulong)*(uint *)(param_1 + 0x50));
  return;
}



/* Entry: 107417f00; end: 107417fa3;  */

void FUN_107417f00(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_50 [16];
  
  lVar1 = param_3;
  FUN_107417d68();
  if ((int)lVar1 == 0) {
    func_0x0001074187d8();
    func_0x000107418774();
  }
  else {
    func_0x0001074187d8();
    func_0x000107418774();
    dVar2 = param_1;
    dVar3 = param_2;
    FUN_107417fa4(param_3,param_4,param_5);
    dVar4 = 0.0;
    if (*(char *)(param_3 + 0xa94) == '\x01') {
      dVar4 = (double)*(float *)(param_3 + 0xa90);
    }
    func_0x000107418898(param_1 + dVar4 * (dVar2 - param_1),param_2 + dVar4 * (dVar3 - param_2),
                        auStack_50);
  }
  return;
}



/* Entry: 107417fa4; end: 1074181b3;  */

undefined1  [16] FUN_107417fa4(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 auStack_90 [16];
  double dStack_80;
  double dStack_78;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  undefined8 uStack_48;
  
  dVar1 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x4c));
  dStack_60 = (*param_2 / dVar1) * 2.0 + -1.0;
  dVar1 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x50));
  dStack_58 = -((param_2[1] / dVar1) * 2.0) - -1.0;
  if (*(int *)(param_1 + 0x58) != 1) {
    dStack_58 = (param_2[1] / dVar1) * 2.0 + -1.0;
  }
  auVar5 = NEON_fmov(0x3ff0000000000000,8);
  uStack_48 = auVar5._8_8_;
  dStack_50 = auVar5._0_8_;
  FUN_107416bf8();
  func_0x000107877358(&dStack_b0,&dStack_60,param_1 + 0xcb0);
  dStack_80 = 0.0;
  dStack_78 = 0.0;
  dStack_70 = 0.0;
  uStack_68 = 0x3ff0000000000000;
  func_0x0001074188a8();
  func_0x000107877358(&dStack_60,&dStack_80,param_1 + 0xbe8);
  dVar4 = dStack_50;
  dVar3 = dStack_58;
  dVar1 = dStack_60;
  dStack_70 = dStack_a0 / dStack_98 - dStack_50;
  dVar6 = dStack_b0 / dStack_98 - dStack_60;
  dStack_78 = dStack_a8 / dStack_98 - dStack_58;
  dStack_80 = dVar6;
  dStack_60 = (double)FUN_1074185b8(&dStack_80);
  dStack_70 = -dVar4;
  dStack_80 = -dVar1;
  dStack_78 = -dVar3;
  dStack_58 = dVar6;
  dStack_50 = dStack_98;
  dVar6 = (double)FUN_1074186d8(&dStack_80,&dStack_60);
  dVar2 = (double)FUN_1074186d8(&dStack_80,&dStack_80);
  dVar2 = dVar2 - dVar6 * dVar6;
  if (dVar2 <= 1.0) {
    dVar7 = SQRT(1.0 - dVar2);
    dVar2 = dVar6 - dVar7;
    if (dVar2 < 0.0) {
      dVar2 = dVar6 + dVar7;
    }
    dVar6 = dVar1 + dVar2 * dStack_60;
    dVar7 = dVar3 + dVar2 * dStack_58;
    dVar1 = dVar4 + dVar2 * dStack_50;
  }
  else {
    dStack_c0 = dVar4 + dVar6 * dStack_50;
    dVar7 = dVar1 + dStack_60 * dVar6;
    dStack_c8 = dVar3 + dStack_58 * dVar6;
    dStack_d0 = dVar7;
    dVar6 = (double)FUN_1074185b8(&dStack_d0);
  }
  dVar3 = (double)_acos(dVar7);
  dVar4 = (double)_atan2(dVar6,dVar1);
  dVar1 = dVar4 + -6.283185307179586;
  if (dVar4 <= 3.141592653589793) {
    dVar1 = dVar4;
  }
  func_0x000107418898(90.0 - dVar3 * 57.29577951308232,dVar1 * 57.29577951308232,auStack_90);
  return auStack_90;
}



/* Entry: 1074181b4; end: 10741825b;  */

void FUN_1074181b4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dStack_70;
  double dStack_68;
  undefined8 uStack_60;
  double dStack_58;
  
  func_0x000107418808();
  func_0x0001074187a8();
  dVar1 = param_1;
  dVar4 = param_2;
  func_0x0001074188bc();
  dVar2 = dVar1;
  dVar5 = dVar4;
  FUN_107417f00(param_3,param_5,0);
  func_0x0001074187a8();
  dStack_70 = (param_1 + dVar1) - dVar2;
  dVar5 = (param_2 + dVar4) - dVar5;
  uVar3 = *(undefined8 *)(param_3 + 0x78);
  dStack_68 = dVar5;
  func_0x000107282130(&dStack_70,0);
  uStack_60 = uVar3;
  dStack_58 = dVar5;
  func_0x0001074188c8();
  func_0x000107418890();
  return;
}



/* Entry: 10741825c; end: 107418387;  */

void FUN_10741825c(double param_1,long param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_28;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  dStack_28 = param_1;
  FUN_10741793c(param_2,&dStack_28,&uStack_40,(ulong)&uStack_40 | 8);
  *(double *)(param_2 + 0x78) = dStack_28;
  *(undefined8 *)(param_2 + 0x68) = uStack_38;
  *(undefined8 *)(param_2 + 0x60) = uStack_40;
  *(double *)(param_2 + 0x170) = (dStack_28 * 512.0) / 6.283185307179586;
  *(double *)(param_2 + 0x168) = (dStack_28 * 512.0) / 360.0;
  func_0x000107418758();
  return;
}



/* Entry: 107418388; end: 1074183c3;  */

bool FUN_107418388(long param_1)

{
  float *pfVar1;
  
  if (*(char *)(param_1 + 0xa94) == '\x01') {
    pfVar1 = (float *)(param_1 + 0xa90);
    func_0x00010730ebcc();
    return *pfVar1 < 1.0;
  }
  return true;
}



/* Entry: 1074183c4; end: 10741848b;  */

double FUN_1074183c4(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_2[1] + param_2[3] * param_1[1];
  dVar1 = 0.0;
  if ((dVar2 != 0.0) && (dVar2 != 1.0)) {
    dVar1 = (*param_2 + param_2[2] * *param_1) * 3.141592653589793 * 2.0 + 3.141592653589793;
    dVar2 = dVar2 * -3.141592653589793 * 2.0 + 3.141592653589793;
    _exp(dVar2);
    _atan();
    dVar3 = -1.5707963267948966;
    ___sincos_stret(dVar2 * 2.0 + -1.5707963267948966);
    ___sincos_stret(dVar1);
    dVar1 = dVar1 * (double)(float)dVar3;
  }
  return dVar1;
}



/* Entry: 10741848c; end: 1074184cb;  */

double FUN_10741848c(double param_1)

{
  double dVar1;
  
  dVar1 = param_1;
  FUN_1074183c4();
  return ((double)SUB84(param_1,0) * 1.5696101377226164e-07 + 1.0) * dVar1;
}



/* Entry: 1074184cc; end: 1074185b7;  */

undefined8 FUN_1074184cc(long param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [4];
  
  uStack_50 = param_2[2];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = 0x3ff0000000000000;
  FUN_107416bf8();
  func_0x000107877358(auStack_40,&uStack_60,param_1 + 0xb20);
  return auStack_40[0];
}



/* Entry: 1074185b8; end: 1074185bb;  */

double FUN_1074185b8(double param_1,double *param_2)

{
  FUN_1074186d8(param_2,param_2);
  return (1.0 / SQRT(param_1)) * *param_2;
}



/* Entry: 1074185bc; end: 10741864f;  */

double FUN_1074185bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    uint param_5)

{
  double dStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  double dStack_38;
  
  dStack_38 = 1.0;
  dStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000107877358(&dStack_50,&dStack_50,param_4);
  return ((dStack_50 / dStack_38) * 0.5 + 0.5) * (double)param_5;
}



/* Entry: 107418650; end: 107418667;  */

uint FUN_107418650(uint param_1)

{
  FUN_107418668();
  return param_1 ^ 1;
}



/* Entry: 107418668; end: 1074186d7;  */

bool FUN_107418668(double *param_1,double *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Entry: 1074186d8; end: 1074186f3;  */

double FUN_1074186d8(double param_1,double param_2,double param_3)

{
  FUN_1074186f4();
  return param_3 + param_1 + param_2;
}



/* Entry: 1074186f4; end: 107418713;  */

double FUN_1074186f4(double *param_1,double *param_2)

{
  return *param_1 * *param_2;
}



/* Entry: 107418714; end: 107418747;  */

double FUN_107418714(double param_1,double *param_2)

{
  FUN_1074186d8(param_2,param_2);
  return (1.0 / SQRT(param_1)) * *param_2;
}



/* Entry: 107418748; end: 10741895b;  */

void FUN_107418748(void)

{
  return;
}



/* Entry: 10741895c; end: 1074189fb;  */

undefined8 FUN_10741895c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113822b08 & 1) == 0) {
    iVar1 = 0x13822b08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1074189fc(auStack_68);
      puVar2 = auStack_68;
      func_0x00010028f4b0();
      puRam0000000113822b00 = puVar2;
      func_0x000100164334(auStack_68);
      ___cxa_guard_release(0x113822b08);
    }
  }
  return 0x113822b00;
}



/* Entry: 1074189fc; end: 10741a98b;  */

/* WARNING: Possible PIC construction at 0x000107418a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107418a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107418a48) */
/* WARNING: Removing unreachable block (ram,0x000107418a6c) */
/* WARNING: Removing unreachable block (ram,0x00010741a8c8) */
/* WARNING: Removing unreachable block (ram,0x00010741a8d8) */
/* WARNING: Removing unreachable block (ram,0x00010741a918) */
/* WARNING: Removing unreachable block (ram,0x00010741a92c) */
/* WARNING: Removing unreachable block (ram,0x00010741a93c) */
/* WARNING: Removing unreachable block (ram,0x00010741a974) */
/* WARNING: Removing unreachable block (ram,0x00010741a900) */

void FUN_1074189fc(void)

{
  undefined *puVar1;
  undefined1 auStack_25e8 [9648];
  undefined8 uStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f4106ce;
  func_0x00010002b82c(auStack_25e8,&UNK_10f4106ce);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10741a98c; end: 10741a9db;  */

void FUN_10741a98c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10741a9dc; end: 10741aa3b;  */

undefined8 * FUN_10741a9dc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  FUN_10741aa3c();
  if ((int)puVar2 == 0) {
    if (*(int *)(param_1 + 3) == 1) {
      func_0x00010741aa7c();
      puVar2 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar2 = param_1;
      }
    }
    else {
      puVar2 = (undefined8 *)&UNK_10f412af4;
    }
    return puVar2;
  }
  uVar1 = (int)puVar2 - 1;
  if (399 < uVar1) {
    return (undefined8 *)&UNK_10f412af4;
  }
  return (undefined8 *)(&PTR_DAT_1109ae490)[uVar1];
}



/* Entry: 10741aa3c; end: 10741aa97;  */

undefined4 FUN_10741aa3c(undefined4 *param_1)

{
  if (param_1[6] != 0) {
    return 0;
  }
  func_0x00010741aa64();
  return *param_1;
}



/* Entry: 10741aa98; end: 10741abbf;  */

long FUN_10741aa98(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_50;
  undefined1 *puStack_48;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  *(undefined4 *)(lVar1 + 0x38) = param_3;
  plVar4 = (long *)(lVar1 + 0x40);
  *plVar4 = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  lVar6 = *param_4;
  *(long *)(lVar1 + 0x48) = param_4[1];
  *plVar4 = lVar6;
  *(long *)(lVar1 + 0x50) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  puVar5 = (undefined8 *)(lVar1 + 0x58);
  *puVar5 = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  puVar3 = (undefined1 *)((*(long *)(lVar1 + 0x48) - *plVar4) / 0x38);
  FUN_10741b144(puVar5);
  lVar6 = *(long *)(param_1 + 0x48);
  for (lVar1 = *(long *)(param_1 + 0x40); lVar1 != lVar6; lVar1 = lVar1 + 0x38) {
    lVar2 = lVar1;
    func_0x000107264c5c();
    plVar4 = &lStack_50;
    lStack_50 = lVar2;
    puStack_48 = puVar3;
    func_0x000107264c84(puVar5);
    puVar3 = (undefined1 *)plVar4;
  }
  lVar1 = param_1;
  func_0x000107264c5c();
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined **)(param_1 + 0x78) = &UNK_10f414f02;
  *(undefined8 *)(param_1 + 0x80) = 7;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(long *)(param_1 + 0x98) = lVar1;
  *(undefined1 **)(param_1 + 0xa0) = puVar3;
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 4;
  *(char **)(param_1 + 0xb8) = "ks/LocalAuthentication.framework/LocalAuthentication";
  return param_1;
}



/* Entry: 10741abc0; end: 10741ac2b;  */

undefined8 FUN_10741abc0(void)

{
  int iVar1;
  
  if ((bRam0000000113822bf0 & 1) == 0) {
    iVar1 = 0x13822bf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10741ac2c(0x113822b10);
      ___cxa_guard_release(0x113822bf0);
    }
  }
  return 0x113822b10;
}



/* Entry: 10741ac2c; end: 10741ae9f;  */

long * FUN_10741ac2c(long param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  long lVar12;
  ulong unaff_x26;
  long unaff_x27;
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined4 uStack_19c;
  undefined1 auStack_198 [56];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_48;
  
  func_0x00010741b934();
  uStack_48 = extraout_x8;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined **)(param_1 + 0xa8) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  func_0x00010741b968();
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x00010741b9d8();
  func_0x00010726e078(&uStack_80);
  func_0x00010741b960();
  func_0x000100060964(&uStack_80,&UNK_10f414f22);
  func_0x00010741b968();
  func_0x000100060964(auStack_b8,&DAT_10f34b835);
  func_0x000107284aa4(auStack_108,auStack_f0,2);
  func_0x00010741b9d8();
  func_0x00010741b950();
  lVar12 = 0x38;
  do {
    func_0x000104c2f714(auStack_f0 + lVar12);
    lVar12 = lVar12 + -0x38;
    uVar2 = lVar12 == -0x38;
  } while (!(bool)uVar2);
  func_0x00010741b958();
  func_0x00010741b968();
  func_0x00010741b980();
  func_0x00010741b970();
  FUN_10741aea0();
  func_0x00010741b950();
  func_0x00010741b958();
  func_0x00010741b960();
  func_0x00010741b968();
  func_0x00010741b980();
  func_0x00010741b970();
  puVar7 = auStack_f0;
  puVar11 = auStack_108;
  uVar10 = 2;
  FUN_10741aea0();
  func_0x00010741b950();
  func_0x00010741b958();
  func_0x00010741b960();
  func_0x00010741b918(uStack_48);
  if ((bool)uVar2) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010741b950();
  func_0x00010741b958();
  func_0x000104c2f714(auStack_f0);
  lVar12 = unaff_x19[0x19];
  if (lVar12 != 0) {
    lVar3 = unaff_x19[0x1a];
    while (uVar2 = lVar3 == lVar12, !(bool)uVar2) {
      lVar3 = lVar3 + -8;
      func_0x00010741b37c();
    }
    unaff_x19[0x1a] = lVar12;
    __ZdlPv(unaff_x19[0x19]);
  }
  uVar9 = (undefined4)uVar10;
  lVar12 = unaff_x19[0x17];
  if (lVar12 != 0) {
    pcVar1 = (char *)unaff_x19[0x15];
    lVar3 = unaff_x19[0x16];
    for (; lVar12 != 0; lVar12 = lVar12 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010741b354(lVar3);
      }
      uVar9 = (undefined4)uVar10;
      lVar3 = lVar3 + 0x40;
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(unaff_x19[0x15] + -8);
  }
  func_0x000107276ba4();
  __Unwind_Resume();
  func_0x00010741b934();
  uStack_1a8 = 1;
  uStack_19c = uVar9;
  uStack_158 = extraout_x8_00;
  __ZNSt3__119__shared_mutex_base4lockEv();
  plVar4 = unaff_x19 + 0x15;
  puVar8 = puVar7;
  FUN_10741afb8();
  if (plVar4 != (long *)0x0) {
    FUN_10741b1c4(unaff_x19 + 0x19,puVar8 + 0x38);
    FUN_10741afec(unaff_x19 + 0x15,plVar4,puVar8);
  }
  FUN_10741b02c(&uStack_1b8,puVar7,&uStack_19c,puVar11);
  func_0x000104c2fe00(auStack_198,puVar7);
  uStack_160 = uStack_1b8;
  uStack_1b8 = 0;
  puVar7 = auStack_198;
  FUN_10741b488(auStack_1d0,unaff_x19 + 0x15,puVar7);
  func_0x00010741b354(auStack_198);
  func_0x00010741b37c(&uStack_1b8);
  plVar4 = &lStack_1b0;
  func_0x000104c305a0();
  func_0x00010741b918(uStack_158);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010741b354(auStack_198);
    func_0x00010741b37c(&uStack_1b8);
    plVar5 = &lStack_1b0;
    func_0x000104c305a0();
    func_0x00010741b948();
    plVar6 = plVar5;
    func_0x00010741b9e4(*plVar5);
    func_0x00010741b8ec(plVar5,puVar7,plVar6);
    do {
      func_0x00010741b9b8();
      for (; unaff_x26 != 0; unaff_x26 = unaff_x26 - 1 & unaff_x26) {
        func_0x00010741b9a0();
        func_0x000104c32db4();
        if ((int)plVar5 != 0) {
          return (long *)(*plVar4 + unaff_x27);
        }
      }
      func_0x00010741b990();
    } while ((extraout_x8_01 & 1) == 0);
    return (long *)0x0;
  }
  return plVar4;
}



/* Entry: 10741aea0; end: 10741afb7;  */

long * FUN_10741aea0(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  ulong unaff_x26;
  long unaff_x27;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_8c;
  undefined1 auStack_88 [56];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_8c = param_3;
  func_0x00010741b934();
  uStack_98 = 1;
  lStack_a0 = param_1;
  uStack_48 = extraout_x8;
  __ZNSt3__119__shared_mutex_base4lockEv();
  lVar1 = unaff_x19 + 0xa8;
  lVar5 = param_2;
  FUN_10741afb8();
  if (lVar1 != 0) {
    FUN_10741b1c4(unaff_x19 + 200,lVar5 + 0x38);
    FUN_10741afec(unaff_x19 + 0xa8,lVar1,lVar5);
  }
  FUN_10741b02c(&uStack_a8,param_2,&uStack_8c,param_4);
  func_0x000104c2fe00(auStack_88,param_2);
  uStack_50 = uStack_a8;
  uStack_a8 = 0;
  puVar6 = auStack_88;
  FUN_10741b488(auStack_c0,unaff_x19 + 0xa8,puVar6);
  func_0x00010741b354(auStack_88);
  func_0x00010741b37c(&uStack_a8);
  plVar2 = &lStack_a0;
  func_0x000104c305a0();
  func_0x00010741b918(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010741b354(auStack_88);
    func_0x00010741b37c(&uStack_a8);
    plVar3 = &lStack_a0;
    func_0x000104c305a0();
    func_0x00010741b948();
    plVar4 = plVar3;
    func_0x00010741b9e4(*plVar3);
    func_0x00010741b8ec(plVar3,puVar6,plVar4);
    do {
      func_0x00010741b9b8();
      for (; unaff_x26 != 0; unaff_x26 = unaff_x26 - 1 & unaff_x26) {
        func_0x00010741b9a0();
        func_0x000104c32db4();
        if ((int)plVar3 != 0) {
          return (long *)(*plVar2 + unaff_x27);
        }
      }
      func_0x00010741b990();
    } while ((extraout_x8_00 & 1) == 0);
    return (long *)0x0;
  }
  return plVar2;
}



/* Entry: 10741afb8; end: 10741afeb;  */

long FUN_10741afb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong extraout_x8;
  long *unaff_x19;
  ulong unaff_x26;
  long unaff_x27;
  
  puVar1 = param_1;
  func_0x00010741b9e4(*param_1);
  func_0x00010741b8ec(param_1,param_2,puVar1);
  do {
    func_0x00010741b9b8();
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 - 1 & unaff_x26) {
      func_0x00010741b9a0();
      func_0x000104c32db4();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x27;
      }
    }
    func_0x00010741b990();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 10741afec; end: 10741b02b;  */

void FUN_10741afec(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010741b354(param_3);
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10741b02c; end: 10741b093;  */

void FUN_10741b02c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xc0;
  __Znwm();
  FUN_10741aa98();
  *param_1 = uVar1;
  return;
}



/* Entry: 10741b094; end: 10741b103;  */

undefined8 FUN_10741b094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 1;
  lStack_40 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_3;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  param_1 = param_1 + 0xa8;
  puVar1 = &uStack_30;
  FUN_10741b104();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = puVar1[7];
  }
  func_0x000100100f40(&lStack_40);
  return uVar2;
}



/* Entry: 10741b104; end: 10741b143;  */

long FUN_10741b104(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong extraout_x8;
  long *unaff_x19;
  ulong unaff_x26;
  long unaff_x27;
  
  Hint_Prefetch(*param_1,0,2,0);
  lVar1 = *param_2;
  func_0x0001001030f4(lVar1,lVar1 + param_2[1]);
  func_0x00010741b8ec(param_1,param_2,lVar1);
  do {
    func_0x00010741b9b8();
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 - 1 & unaff_x26) {
      func_0x00010741b9a0();
      func_0x000107278530();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x27;
      }
    }
    func_0x00010741b990();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 10741b144; end: 10741b1c3;  */

long * FUN_10741b144(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long alStack_48 [5];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000104bfe418();
      plVar1 = alStack_48;
      func_0x00010014afc4();
      func_0x00010741b948();
      puVar2 = (undefined8 *)plVar1[1];
      if (puVar2 < (undefined8 *)plVar1[2]) {
        uVar4 = *param_2;
        *param_2 = 0;
        plVar3 = puVar2 + 1;
        *puVar2 = uVar4;
      }
      else {
        plVar3 = plVar1;
        FUN_10741b20c();
      }
      plVar1[1] = (long)plVar3;
      return plVar3 + -1;
    }
    func_0x00010014ae4c(alStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x000107264d8c(param_1,alStack_48);
    param_1 = alStack_48;
    func_0x00010014afc4(param_1);
  }
  return param_1;
}



/* Entry: 10741b1c4; end: 10741b20b;  */

undefined8 * FUN_10741b1c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_10741b20c();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10741b20c; end: 10741b2f7;  */

long * FUN_10741b20c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar8 = *param_1;
  lVar9 = param_1[1] - lVar8;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    lVar10 = *plStack_58;
    uVar6 = lVar10 - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10741b2f4;
      lVar3 = uVar7 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar9);
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    _memcpy(puVar2 + -(lVar9 >> 3),lVar8,lVar9);
    *param_1 = (long)(puVar2 + -(lVar9 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar3 + uVar7 * 8;
    lStack_78 = lVar8;
    lStack_70 = lVar8;
    lStack_68 = lVar8;
    lStack_60 = lVar10;
    FUN_10741b30c(&lStack_78);
    return puVar2 + 1;
  }
  FUN_10741b2f8();
LAB_10741b2f4:
  func_0x000104bd35f4();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar8 = plVar4[1];
  while (lVar8 != plVar4[2]) {
    plVar4[2] = plVar4[2] + -8;
    func_0x00010741b37c();
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 10741b2f8; end: 10741b30b;  */

long * FUN_10741b2f8(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -8;
    func_0x00010741b37c();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10741b30c; end: 10741b39f;  */

long * FUN_10741b30c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010741b37c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10741b3a0; end: 10741b3b7;  */

void FUN_10741b3a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10741b3d4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10741b3b8; end: 10741b3d3;  */

void FUN_10741b3b8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10741b3d4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10741b3d4; end: 10741b403;  */

long FUN_10741b3d4(long param_1)

{
  func_0x000107264ef0(param_1 + 0x58);
  func_0x00010726e078(param_1 + 0x40);
  func_0x00010741b9d0();
  return param_1;
}


