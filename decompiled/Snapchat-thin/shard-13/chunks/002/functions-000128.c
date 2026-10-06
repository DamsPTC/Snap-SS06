/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1b8a78; end: 10a1b8a8b;  */

void FUN_10a1b8a78(void)

{
  FUN_10a1b77fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b8a8c; end: 10a1b8a97;  */

undefined8 FUN_10a1b8a8c(void)

{
  return 8;
}



/* Entry: 10a1b8a98; end: 10a1b8aab;  */

void FUN_10a1b8a98(void)

{
  FUN_10a1b77fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b8aac; end: 10a1b8ab7;  */

undefined8 FUN_10a1b8aac(void)

{
  return 8;
}



/* Entry: 10a1b8ab8; end: 10a1b8acb;  */

void FUN_10a1b8ab8(void)

{
  FUN_10a1b77fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b8acc; end: 10a1b8ad3;  */

undefined8 FUN_10a1b8acc(void)

{
  return 0x10;
}



/* Entry: 10a1b8ad4; end: 10a1b8e47;  */

void FUN_10a1b8ad4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puRam00000001137ea8c0 = (undefined8 *)0x0;
  puRam00000001137ea8b8 = (undefined8 *)0x0;
  uRam00000001137ea8d0 = 0;
  puRam00000001137ea8c8 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x80;
  __Znwm();
  *puVar4 = FUN_10a1b8ec0;
  puVar4[1] = FUN_10a1b8f30;
  puVar7 = puVar4 + 0x10;
  uRam00000001137ea8d0 = 10;
  puRam00000001137ea8c8 = puVar7;
  puVar4[2] = FUN_10a1b8fa0;
  puVar4[3] = FUN_10a1b9044;
  puRam00000001137ea8c0 = puVar4 + 4;
  puRam00000001137ea8b8 = puVar4;
  if (puRam00000001137ea8c0 < puVar7) {
    puVar4[4] = FUN_10a1b90d4;
    puVar4 = puVar4 + 5;
  }
  else {
    lVar6 = (long)puRam00000001137ea8c0 - (long)puVar4;
    uVar1 = (lVar6 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_10a1b8e1c;
    uVar5 = (long)puVar7 - (long)puVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)puVar7 - (long)puVar4)) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_10a1b8e8c();
    puVar7 = (undefined8 *)(uVar5 + lVar6);
    puVar9 = (undefined8 *)(uVar5 + (long)param_2 * 8);
    puVar4 = puVar7 + 1;
    *puVar7 = FUN_10a1b90d4;
    puVar7 = (undefined8 *)
             ((long)puVar7 - ((long)puRam00000001137ea8c0 - (long)puRam00000001137ea8b8));
    param_2 = puRam00000001137ea8b8;
    _memcpy(puVar7);
    bVar2 = puRam00000001137ea8b8 != (undefined8 *)0x0;
    puRam00000001137ea8b8 = puVar7;
    puRam00000001137ea8c8 = puVar9;
    if (bVar2) {
      puRam00000001137ea8c0 = puVar4;
      __ZdlPv();
    }
  }
  if (uRam00000001137ea8d0 < 5) {
    uRam00000001137ea8d0 = 4;
  }
  if (puVar4 < puRam00000001137ea8c8) {
    puVar9 = puVar4 + 1;
    *puVar4 = 0x10a1b9174;
  }
  else {
    lVar6 = (long)puVar4 - (long)puRam00000001137ea8b8;
    uVar1 = (lVar6 >> 3) + 1;
    puRam00000001137ea8c0 = puVar4;
    if (uVar1 >> 0x3d != 0) goto LAB_10a1b8e1c;
    uVar5 = (long)puRam00000001137ea8c8 - (long)puRam00000001137ea8b8 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)puRam00000001137ea8c8 - (long)puRam00000001137ea8b8)) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_10a1b8e8c();
    puVar7 = (undefined8 *)(uVar5 + lVar6);
    puVar4 = (undefined8 *)(uVar5 + (long)param_2 * 8);
    puVar9 = puVar7 + 1;
    *puVar7 = 0x10a1b9174;
    puVar7 = (undefined8 *)
             ((long)puVar7 - ((long)puRam00000001137ea8c0 - (long)puRam00000001137ea8b8));
    param_2 = puRam00000001137ea8b8;
    _memcpy(puVar7);
    bVar2 = puRam00000001137ea8b8 != (undefined8 *)0x0;
    puRam00000001137ea8b8 = puVar7;
    puRam00000001137ea8c8 = puVar4;
    if (bVar2) {
      puRam00000001137ea8c0 = puVar9;
      __ZdlPv();
    }
  }
  if (uRam00000001137ea8d0 < 5) {
    uRam00000001137ea8d0 = 4;
  }
  if (puVar9 < puRam00000001137ea8c8) {
    puVar8 = puVar9 + 1;
    *puVar9 = 0x10a1b91fc;
  }
  else {
    lVar6 = (long)puVar9 - (long)puRam00000001137ea8b8;
    uVar1 = (lVar6 >> 3) + 1;
    puRam00000001137ea8c0 = puVar9;
    if (uVar1 >> 0x3d != 0) goto LAB_10a1b8e1c;
    uVar5 = (long)puRam00000001137ea8c8 - (long)puRam00000001137ea8b8 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)puRam00000001137ea8c8 - (long)puRam00000001137ea8b8)) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_10a1b8e8c();
    puVar7 = (undefined8 *)(uVar5 + lVar6);
    puVar4 = (undefined8 *)(uVar5 + (long)param_2 * 8);
    puVar8 = puVar7 + 1;
    *puVar7 = 0x10a1b91fc;
    puVar7 = (undefined8 *)
             ((long)puVar7 - ((long)puRam00000001137ea8c0 - (long)puRam00000001137ea8b8));
    param_2 = puRam00000001137ea8b8;
    _memcpy(puVar7);
    bVar2 = puRam00000001137ea8b8 != (undefined8 *)0x0;
    puRam00000001137ea8b8 = puVar7;
    puRam00000001137ea8c8 = puVar4;
    if (bVar2) {
      puRam00000001137ea8c0 = puVar8;
      __ZdlPv();
    }
  }
  if (uRam00000001137ea8d0 < 0xd) {
    uRam00000001137ea8d0 = 0xc;
  }
  if (puVar8 < puRam00000001137ea8c8) {
    puVar9 = puVar8 + 1;
    *puVar8 = FUN_10a1b9288;
  }
  else {
    lVar6 = (long)puVar8 - (long)puRam00000001137ea8b8;
    uVar1 = (lVar6 >> 3) + 1;
    puRam00000001137ea8c0 = puVar8;
    if (uVar1 >> 0x3d != 0) {
LAB_10a1b8e1c:
      FUN_10a1b8e78();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1b8e24);
      (*pcVar3)();
    }
    uVar5 = (long)puRam00000001137ea8c8 - (long)puRam00000001137ea8b8 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)puRam00000001137ea8c8 - (long)puRam00000001137ea8b8)) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_10a1b8e8c();
    puVar7 = (undefined8 *)(uVar5 + lVar6);
    puVar4 = (undefined8 *)(uVar5 + (long)param_2 * 8);
    puVar9 = puVar7 + 1;
    *puVar7 = FUN_10a1b9288;
    puVar7 = (undefined8 *)
             ((long)puVar7 - ((long)puRam00000001137ea8c0 - (long)puRam00000001137ea8b8));
    _memcpy(puVar7);
    bVar2 = puRam00000001137ea8b8 != (undefined8 *)0x0;
    puRam00000001137ea8b8 = puVar7;
    puRam00000001137ea8c8 = puVar4;
    if (bVar2) {
      puRam00000001137ea8c0 = puVar9;
      __ZdlPv();
    }
  }
  puRam00000001137ea8c0 = puVar9;
  if (uRam00000001137ea8d0 < 0xd) {
    uRam00000001137ea8d0 = 0xc;
  }
  return;
}



/* Entry: 10a1b8e48; end: 10a1b8e77;  */

long * FUN_10a1b8e48(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1b8e78; end: 10a1b8e8b;  */

void FUN_10a1b8e78(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3d == 0) {
    __Znwm((long)plVar1 << 3);
    return;
  }
  func_0x000109ffded8();
  if ((param_2 < 8) || (*plVar1 != 0xa1a0a0d474e5089)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xa8;
    __Znwm();
    FUN_10a1aa668();
  }
  *extraout_x8 = uVar2;
  return;
}



/* Entry: 10a1b8e8c; end: 10a1b8ebf;  */

void FUN_10a1b8e8c(long *param_1,ulong param_2)

{
  undefined8 *extraout_x8;
  undefined8 uVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  if ((param_2 < 8) || (*param_1 != 0xa1a0a0d474e5089)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xa8;
    __Znwm();
    FUN_10a1aa668();
  }
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 10a1b8ec0; end: 10a1b8f2f;  */

void FUN_10a1b8ec0(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 < 8) || (*param_2 != 0xa1a0a0d474e5089)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xa8;
    __Znwm();
    FUN_10a1aa668();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10a1b8f30; end: 10a1b8f9f;  */

void FUN_10a1b8f30(undefined8 *param_1,short *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 < 3) || (*param_2 != -0x2701 || (char)param_2[1] != -1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xa8;
    __Znwm();
    FUN_10a1a72b8();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10a1b8fa0; end: 10a1b9043;  */

void FUN_10a1b8fa0(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  if ((param_3 < 10) || (*param_2 != 0x4e41494441523f23 || (short)param_2[1] != 0x4543)) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0xa8;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    FUN_10a1aa5bc();
    *puVar1 = &PTR_FUN_110bab800;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1b9044; end: 10a1b90d3;  */

void FUN_10a1b9044(undefined8 *param_1,int *param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  if ((param_3 < 4) || (*param_2 != 0x1312f76)) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0xa8;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    FUN_10a1aa5bc();
    *puVar1 = &PTR_FUN_110bab838;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1b90d4; end: 10a1b9287;  */

void FUN_10a1b90d4(undefined8 *param_1,int *param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  if ((param_3 < 4) || (*param_2 != 0x3525650)) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0xc0;
    __Znwm();
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[2] = &UNK_1092bf430;
    puVar1[3] = &PTR_DAT_110ae93a8;
    *(undefined8 *)((long)puVar1 + 0x95) = 0;
    *(undefined8 *)((long)puVar1 + 0x8d) = 0;
    *puVar1 = &PTR_FUN_110bab870;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
    *(undefined1 *)((long)puVar1 + 0xb4) = 1;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1b9288; end: 10a1b92ff;  */

void FUN_10a1b9288(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 < 0xc) || (*param_2 != -0x44cfcddfa7abb455 || (int)param_2[1] != 0xa1a0a0d)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xa10;
    __Znwm();
    FUN_10a1a8050();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10a1b9300; end: 10a1b9317;  */

void FUN_10a1b9300(void)

{
  return;
}



/* Entry: 10a1b9318; end: 10a1b933f;  */

undefined8 FUN_10a1b9318(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_300 [264];
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [264];
  char cStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2[1] == param_1) {
    return *param_2;
  }
  puVar2 = &UNK_10f63ee14;
  FUN_10a00946c(&UNK_10f63ee14);
  func_0x000107c2b054(auStack_1c8,puVar2);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1e0,*param_3,param_3[1]);
  }
  else {
    uStack_1d8 = param_3[1];
    uStack_1e0 = *param_3;
    lStack_1d0 = param_3[2];
  }
  func_0x000107c2b054(auStack_1f8,param_4);
  FUN_10a1b95dc(auStack_1b0,auStack_1c8,param_2,&uStack_1e0,auStack_1f8);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  func_0x00010a0ec6dc(auStack_300,1);
  if (cStack_98 == '\x01') {
    _memcpy(auStack_1a0,auStack_300,0x104);
  }
  else {
    _memcpy(auStack_1a0,auStack_300,0x108);
    cStack_98 = '\x01';
  }
  puVar3 = (undefined8 *)0x170;
  ___cxa_allocate_exception();
  puVar4 = puVar3;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar4 = &PTR_FUN_110b99e98;
  _memcpy(puVar4 + 2,auStack_1a0,0x110);
  *puVar3 = &PTR_FUN_110bacb58;
  puVar3[0x26] = uStack_80;
  puVar3[0x25] = uStack_88;
  puVar3[0x24] = uStack_90;
  uStack_88 = 0;
  uStack_90 = 0;
  *(undefined4 *)(puVar3 + 0x27) = uStack_78;
  puVar3[0x2a] = uStack_60;
  puVar3[0x29] = uStack_68;
  puVar3[0x28] = uStack_70;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  puVar3[0x2d] = uStack_48;
  puVar3[0x2c] = uStack_50;
  puVar3[0x2b] = uStack_58;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  ___cxa_throw(puVar3,&PTR_DAT_110bacb30,FUN_10a1b9580);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b94e4);
  (*pcVar1)();
}



/* Entry: 10a1b9340; end: 10a1b957f;  */

void FUN_10a1b9340(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_2f0 [264];
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [264];
  char cStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c2b054(auStack_1b8,param_1);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1d0,*param_3,param_3[1]);
  }
  else {
    uStack_1c8 = param_3[1];
    uStack_1d0 = *param_3;
    lStack_1c0 = param_3[2];
  }
  func_0x000107c2b054(auStack_1e8,param_4);
  FUN_10a1b95dc(auStack_1a0,auStack_1b8,param_2,&uStack_1d0,auStack_1e8);
  if (cStack_1d1 < '\0') {
    __ZdlPv(auStack_1e8[0]);
  }
  if (lStack_1c0 < 0) {
    __ZdlPv(uStack_1d0);
  }
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  func_0x00010a0ec6dc(auStack_2f0,1);
  if (cStack_88 == '\x01') {
    _memcpy(auStack_190,auStack_2f0,0x104);
  }
  else {
    _memcpy(auStack_190,auStack_2f0,0x108);
    cStack_88 = '\x01';
  }
  puVar2 = (undefined8 *)0x170;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_190,0x110);
  *puVar2 = &PTR_FUN_110bacb58;
  puVar2[0x26] = uStack_70;
  puVar2[0x25] = uStack_78;
  puVar2[0x24] = uStack_80;
  uStack_78 = 0;
  uStack_80 = 0;
  *(undefined4 *)(puVar2 + 0x27) = uStack_68;
  puVar2[0x2a] = uStack_50;
  puVar2[0x29] = uStack_58;
  puVar2[0x28] = uStack_60;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  puVar2[0x2d] = uStack_38;
  puVar2[0x2c] = uStack_40;
  puVar2[0x2b] = uStack_48;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  ___cxa_throw(puVar2,&PTR_DAT_110bacb30,FUN_10a1b9580);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b94e4);
  (*pcVar1)();
}



/* Entry: 10a1b9580; end: 10a1b95db;  */

void FUN_10a1b9580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bacb58;
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    __ZdlPv(param_1[0x24]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)(param_1);
  return;
}



/* Entry: 10a1b95dc; end: 10a1b970b;  */

undefined8 *
FUN_10a1b95dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  FUN_10a1b970c(auStack_58,param_2,param_3,param_4,param_5);
  FUN_10a002a94(param_1,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *param_1 = &PTR_FUN_110bacb58;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x27) = 3;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x26] = param_2[2];
  param_1[0x25] = uVar2;
  param_1[0x24] = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  *(int *)(param_1 + 0x27) = (int)param_3;
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[0x2a] = param_4[2];
  param_1[0x29] = uVar2;
  param_1[0x28] = uVar1;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[0x2d] = param_5[2];
  param_1[0x2c] = uVar2;
  param_1[0x2b] = uVar1;
  *(undefined1 *)((long)param_5 + 0x17) = 0;
  *(undefined1 *)param_5 = 0;
  return param_1;
}



/* Entry: 10a1b970c; end: 10a1b9ab3;  */

void FUN_10a1b970c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  long alStack_1a8 [2];
  char cStack_191;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 **ppuStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  FUN_109fed7e0(&ppuStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_150,param_3);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppuStack_170,&UNK_10f642bdc,param_2);
  pppuVar2 = &ppuStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar2,&DAT_10f68f57e,1);
  ppuVar5 = pppuVar2[1];
  ppuVar4 = *pppuVar2;
  param_1[2] = pppuVar2[2];
  param_1[1] = ppuVar5;
  *param_1 = ppuVar4;
  pppuVar2[1] = (undefined8 **)0x0;
  pppuVar2[2] = (undefined8 **)0x0;
  *pppuVar2 = (undefined8 **)0x0;
  if (uStack_160._7_1_ < '\0') {
    __ZdlPv(ppuStack_170);
  }
  func_0x00010a002480(alStack_1a8,&ppuStack_148,&uStack_41);
  plVar3 = alStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar3,0,&UNK_10f5af290,6);
  lStack_188 = plVar3[1];
  lStack_190 = *plVar3;
  lStack_180 = plVar3[2];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  plVar3 = &lStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar3,&DAT_10f68f57e,1);
  uStack_168 = plVar3[1];
  ppuStack_170 = (undefined8 **)*plVar3;
  uStack_160 = plVar3[2];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  uVar1 = uStack_168;
  pppuVar2 = (undefined8 ***)ppuStack_170;
  if (-1 < (long)uStack_160) {
    uVar1 = uStack_160 >> 0x38;
    pppuVar2 = &ppuStack_170;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uVar1);
  if ((long)uStack_160 < 0) {
    __ZdlPv(ppuStack_170);
  }
  if (lStack_180 < 0) {
    __ZdlPv(lStack_190);
  }
  if (cStack_191 < '\0') {
    __ZdlPv(alStack_1a8[0]);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&lStack_190,&UNK_10f642be9,param_4);
  plVar3 = &lStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar3,&DAT_10f68f57e,1);
  uStack_168 = plVar3[1];
  ppuStack_170 = (undefined8 **)*plVar3;
  uStack_160 = plVar3[2];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  uVar1 = uStack_168;
  pppuVar2 = (undefined8 ***)ppuStack_170;
  if (-1 < (long)uStack_160) {
    uVar1 = uStack_160 >> 0x38;
    pppuVar2 = &ppuStack_170;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uVar1);
  if ((long)uStack_160 < 0) {
    __ZdlPv(ppuStack_170);
  }
  if (lStack_180 < 0) {
    __ZdlPv(lStack_190);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&lStack_190,&UNK_10f642bfa,param_5);
  plVar3 = &lStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar3,&DAT_10f68f57e,1);
  uStack_168 = plVar3[1];
  ppuStack_170 = (undefined8 **)*plVar3;
  uStack_160 = plVar3[2];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  uVar1 = uStack_168;
  pppuVar2 = (undefined8 ***)ppuStack_170;
  if (-1 < (long)uStack_160) {
    uVar1 = uStack_160 >> 0x38;
    pppuVar2 = &ppuStack_170;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uVar1);
  if ((long)uStack_160 < 0) {
    __ZdlPv(ppuStack_170);
  }
  if (lStack_180 < 0) {
    __ZdlPv(lStack_190);
  }
  appuStack_e0[0] = &PTR_DAT_11088d708;
  ppuStack_150 = &PTR_DAT_11088d6e0;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 10a1b9ab4; end: 10a1b9b13;  */

void FUN_10a1b9ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bacb58;
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    __ZdlPv(param_1[0x24]);
  }
  __ZNSt13runtime_errorD2Ev(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b9b14; end: 10a1b9b77;  */

undefined8 * FUN_10a1b9b14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bacac8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a1b9b78; end: 10a1b9b7b;  */

void FUN_10a1b9b78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1b9b7c; end: 10a1b9b8f;  */

void FUN_10a1b9b7c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b9b90; end: 10a1b9ba7;  */

void FUN_10a1b9b90(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1b9ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a1b9ba8; end: 10a1b9bdf;  */

undefined8 FUN_10a1b9ba8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bacb18);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a1b9be0; end: 10a1b9be3;  */

void FUN_10a1b9be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b9be4; end: 10a1b9cff;  */

void FUN_10a1b9be4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a1b9d04(auStack_258,&UNK_10f642c08,param_1,param_2);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110bac380;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  appuStack_150[0] = &PTR_FUN_110bac358;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bac358;
  ___cxa_throw(puVar2,&PTR_DAT_110bac330,FUN_10a1b9d00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b9cd0);
  (*pcVar1)();
}



/* Entry: 10a1b9d00; end: 10a1b9d03;  */

void FUN_10a1b9d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1b9d04; end: 10a1b9e3f;  */

void FUN_10a1b9d04(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined8 uVar2;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  pppuVar1 = &ppuStack_150;
  FUN_109fed7e0(&ppuStack_150);
  FUN_10a002568(&ppuStack_150,&UNK_10f642c0f,0x10);
  uVar2 = param_2;
  _strlen(param_2);
  FUN_10a002568(pppuVar1,param_2,uVar2);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
  func_0x00010a002480(param_1,&ppuStack_148,&uStack_41);
  appuStack_e0[0] = &PTR_DAT_11088d708;
  ppuStack_150 = &PTR_DAT_11088d6e0;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 10a1b9e40; end: 10a1b9e53;  */

void FUN_10a1b9e40(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b9e54; end: 10a1b9e57;  */

void FUN_10a1b9e54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1b9e58; end: 10a1b9e6b;  */

void FUN_10a1b9e58(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b9e6c; end: 10a1b9f87;  */

void FUN_10a1b9e6c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a1b9d04(auStack_258,&UNK_10f642c2f,param_1,param_2);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110bac380;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  appuStack_150[0] = &PTR_FUN_110bac3c0;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bac3c0;
  ___cxa_throw(puVar2,&PTR_DAT_110bac398,FUN_10a1b9f88);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b9f58);
  (*pcVar1)();
}



/* Entry: 10a1b9f88; end: 10a1b9f8b;  */

void FUN_10a1b9f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1b9f8c; end: 10a1b9f9f;  */

void FUN_10a1b9f8c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b9fa0; end: 10a1ba0bb;  */

void FUN_10a1b9fa0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a1b9d04(auStack_258,&UNK_10f642c3c,param_1,param_2);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110bac380;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  appuStack_150[0] = &PTR_FUN_110bac400;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bac400;
  ___cxa_throw(puVar2,&PTR_DAT_110bac3d8,FUN_10a1ba0bc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ba08c);
  (*pcVar1)();
}



/* Entry: 10a1ba0bc; end: 10a1ba0bf;  */

void FUN_10a1ba0bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1ba0c0; end: 10a1ba0d3;  */

void FUN_10a1ba0c0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba0d4; end: 10a1ba1ef;  */

void FUN_10a1ba0d4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a1b9d04(auStack_258,&UNK_10f642c45,param_1,param_2);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110bac380;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  appuStack_150[0] = &PTR_FUN_110bac440;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bac440;
  ___cxa_throw(puVar2,&PTR_DAT_110bac418,FUN_10a1ba1f0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ba1c0);
  (*pcVar1)();
}



/* Entry: 10a1ba1f0; end: 10a1ba1f3;  */

void FUN_10a1ba1f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1ba1f4; end: 10a1ba207;  */

void FUN_10a1ba1f4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba208; end: 10a1ba323;  */

void FUN_10a1ba208(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a1b9d04(auStack_258,&UNK_10f642c50,param_1,param_2);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110bac380;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  appuStack_150[0] = &PTR_FUN_110bac480;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bac480;
  ___cxa_throw(puVar2,&PTR_DAT_110bac458,FUN_10a1ba324);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ba2f4);
  (*pcVar1)();
}



/* Entry: 10a1ba324; end: 10a1ba327;  */

void FUN_10a1ba324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1ba328; end: 10a1ba33b;  */

void FUN_10a1ba328(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba33c; end: 10a1ba533;  */

void FUN_10a1ba33c(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_260 [2];
  char cStack_249;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [56];
  undefined8 uStack_110;
  char cStack_f9;
  undefined **appuStack_e8 [21];
  char cStack_40;
  undefined1 uStack_31;
  
  FUN_109fed7e0(&ppuStack_158);
  FUN_10a002568(&ppuStack_158,&UNK_10f642c0f,0x10);
  FUN_10a002568();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x00010a002480(auStack_260,&ppuStack_150,&uStack_31);
  appuStack_e8[0] = &PTR_DAT_11088d708;
  ppuStack_158 = &PTR_DAT_11088d6e0;
  ppuStack_150 = &PTR_DAT_11088d7b0;
  if (cStack_f9 < '\0') {
    __ZdlPv(uStack_110);
  }
  ppuStack_150 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_148);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_158,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e8);
  FUN_10a002a94(&ppuStack_158,auStack_260);
  ppuStack_158 = &PTR_FUN_110bac380;
  if (cStack_249 < '\0') {
    __ZdlPv(auStack_260[0]);
  }
  ppuStack_158 = &PTR_FUN_110bac4c0;
  func_0x00010a0ec6dc(auStack_260,1);
  if (cStack_40 == '\x01') {
    _memcpy(auStack_148,auStack_260,0x104);
  }
  else {
    _memcpy(auStack_148,auStack_260,0x108);
    cStack_40 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_148,0x110);
  *puVar2 = &PTR_FUN_110bac4c0;
  ___cxa_throw(puVar2,&PTR_DAT_110bac498,FUN_10a1ba534);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ba4f4);
  (*pcVar1)();
}



/* Entry: 10a1ba534; end: 10a1ba537;  */

void FUN_10a1ba534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1ba538; end: 10a1ba54b;  */

void FUN_10a1ba538(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba54c; end: 10a1ba667;  */

void FUN_10a1ba54c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a1b9d04(auStack_258,&UNK_10f642c92,param_1,param_2);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110bac380;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  appuStack_150[0] = &PTR_FUN_110bac500;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bac500;
  ___cxa_throw(puVar2,&PTR_DAT_110bac4d8,FUN_10a1ba668);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ba638);
  (*pcVar1)();
}



/* Entry: 10a1ba668; end: 10a1ba66b;  */

void FUN_10a1ba668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1ba66c; end: 10a1ba67f;  */

void FUN_10a1ba66c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba680; end: 10a1ba71f;  */

long * FUN_10a1ba680(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1ba720; end: 10a1ba7eb;  */

void FUN_10a1ba720(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a1ba7f0(auStack_150,param_1);
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bacb98;
  ___cxa_throw(puVar2,&PTR_DAT_110bacb70,FUN_10a1ba7ec);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ba7d4);
  (*pcVar1)();
}



/* Entry: 10a1ba7ec; end: 10a1ba7ef;  */

void FUN_10a1ba7ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1ba7f0; end: 10a1ba86b;  */

undefined8 * FUN_10a1ba7f0(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f642c9a);
  FUN_10a002a94(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110bacb98;
  return param_1;
}



/* Entry: 10a1ba86c; end: 10a1ba87f;  */

void FUN_10a1ba86c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba880; end: 10a1ba883;  */

void FUN_10a1ba880(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1ba884; end: 10a1ba897;  */

void FUN_10a1ba884(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba898; end: 10a1ba89b;  */

void FUN_10a1ba898(void)

{
  return;
}



/* Entry: 10a1ba89c; end: 10a1ba8d3;  */

undefined8 FUN_10a1ba89c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bac568);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a1ba8d4; end: 10a1ba8d7;  */

void FUN_10a1ba8d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba8d8; end: 10a1ba95f;  */

void FUN_10a1ba8d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2c6c(puVar2,param_2,param_3,param_4 & 1,param_5);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a1ba960; end: 10a1ba96f;  */

void FUN_10a1ba960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac588;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1ba970; end: 10a1ba98f;  */

void FUN_10a1ba970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac588;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba990; end: 10a1ba9af;  */

void FUN_10a1ba990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1ba998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1ba9b0; end: 10a1ba9cf;  */

void FUN_10a1ba9b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bac5d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ba9d0; end: 10a1ba9ef;  */

void FUN_10a1ba9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1ba9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1ba9f0; end: 10a1baa0f;  */

void FUN_10a1ba9f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bac628;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1baa10; end: 10a1baa2f;  */

void FUN_10a1baa10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1baa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1baa30; end: 10a1baa4f;  */

void FUN_10a1baa30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bac678;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1baa50; end: 10a1baa6f;  */

void FUN_10a1baa50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1baa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1baa70; end: 10a1baa8f;  */

void FUN_10a1baa70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bac6c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1baa90; end: 10a1baa9f;  */

void FUN_10a1baa90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1baa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1baaa0; end: 10a1baaf7;  */

long FUN_10a1baaa0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1baaf8; end: 10a1bab07;  */

void FUN_10a1baaf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bab08; end: 10a1bab27;  */

void FUN_10a1bab08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac718;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bab28; end: 10a1bab37;  */

void FUN_10a1bab28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1bab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1bab38; end: 10a1bab8f;  */

long FUN_10a1bab38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1bab90; end: 10a1bab9f;  */

void FUN_10a1bab90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac768;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1baba0; end: 10a1babbf;  */

void FUN_10a1baba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac768;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1babc0; end: 10a1babcf;  */

void FUN_10a1babc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1babc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1babd0; end: 10a1bac27;  */

long FUN_10a1babd0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1bac28; end: 10a1bac37;  */

void FUN_10a1bac28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac7b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bac38; end: 10a1bac57;  */

void FUN_10a1bac38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac7b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bac58; end: 10a1bac67;  */

void FUN_10a1bac58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1bac60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1bac68; end: 10a1bacbf;  */

long FUN_10a1bac68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1bacc0; end: 10a1baccf;  */

void FUN_10a1bacc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac808;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bacd0; end: 10a1bacef;  */

void FUN_10a1bacd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac808;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bacf0; end: 10a1bacff;  */

void FUN_10a1bacf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1bacf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1bad00; end: 10a1bad57;  */

long FUN_10a1bad00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1bad58; end: 10a1bad67;  */

void FUN_10a1bad58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac858;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bad68; end: 10a1bad87;  */

void FUN_10a1bad68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac858;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bad88; end: 10a1bad97;  */

void FUN_10a1bad88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1bad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1bad98; end: 10a1badef;  */

long FUN_10a1bad98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1badf0; end: 10a1badff;  */

void FUN_10a1badf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac8a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bae00; end: 10a1bae1f;  */

void FUN_10a1bae00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac8a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bae20; end: 10a1bae2f;  */

void FUN_10a1bae20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1bae28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1bae30; end: 10a1bae87;  */

long FUN_10a1bae30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}


