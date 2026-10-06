/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c2f838; end: 104c2f83f;  */

void FUN_104c2f838(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(*param_1 + 0x28) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    param_2[4] = param_3[4];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  func_0x000104c346a4();
  FUN_104c2f87c();
  return;
}



/* Entry: 104c2f840; end: 104c2f87b;  */

void FUN_104c2f840(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    param_2[4] = param_3[4];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  func_0x000104c346a4();
  FUN_104c2f87c();
  return;
}



/* Entry: 104c2f87c; end: 104c2f887;  */

void FUN_104c2f87c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000104c342a8(*param_1,param_1[1]);
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  uVar4 = unaff_x19[3];
  uVar3 = unaff_x19[2];
  unaff_x20[4] = unaff_x19[4];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar4;
  unaff_x20[2] = uVar3;
  func_0x000104c347ec(1);
  return;
}



/* Entry: 104c2f888; end: 104c2f8b7;  */

void FUN_104c2f888(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000104c342a8();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  uVar4 = unaff_x19[3];
  uVar3 = unaff_x19[2];
  unaff_x20[4] = unaff_x19[4];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar4;
  unaff_x20[2] = uVar3;
  func_0x000104c347ec(1);
  return;
}



/* Entry: 104c2f8b8; end: 104c2f8bf;  */

void FUN_104c2f8b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x28) == 2) {
    func_0x000104c3451c(param_2,param_3);
    FUN_104c2f784();
    return;
  }
  func_0x000104c346a4();
  FUN_104c2f918();
  return;
}



/* Entry: 104c2f8c0; end: 104c2f8f3;  */

void FUN_104c2f8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x28) == 2) {
    func_0x000104c3451c(param_2,param_3);
    FUN_104c2f784();
    return;
  }
  func_0x000104c346a4();
  FUN_104c2f918();
  return;
}



/* Entry: 104c2f8f4; end: 104c2f917;  */

void FUN_104c2f8f4(void)

{
  func_0x000104c3451c();
  FUN_104c2f784();
  return;
}



/* Entry: 104c2f918; end: 104c2f923;  */

void FUN_104c2f918(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000104c342a8(*param_1,param_1[1]);
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x000104c347ec(2);
  return;
}



/* Entry: 104c2f924; end: 104c2f94f;  */

void FUN_104c2f924(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000104c342a8();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x000104c347ec(2);
  return;
}



/* Entry: 104c2f950; end: 104c2f957;  */

void FUN_104c2f950(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x28) == 3) {
    func_0x000104c3451c(param_2,param_3);
    FUN_104c33970();
    return;
  }
  func_0x000104c346a4();
  FUN_104c2f9b0();
  return;
}



/* Entry: 104c2f958; end: 104c2f98b;  */

void FUN_104c2f958(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x28) == 3) {
    func_0x000104c3451c(param_2,param_3);
    FUN_104c33970();
    return;
  }
  func_0x000104c346a4();
  FUN_104c2f9b0();
  return;
}



/* Entry: 104c2f98c; end: 104c2f9af;  */

void FUN_104c2f98c(void)

{
  func_0x000104c3451c();
  FUN_104c33970();
  return;
}



/* Entry: 104c2f9b0; end: 104c2f9bb;  */

void FUN_104c2f9b0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000104c342a8(*param_1,param_1[1]);
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x000104c347ec(3);
  return;
}



/* Entry: 104c2f9bc; end: 104c2f9e7;  */

void FUN_104c2f9bc(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000104c342a8();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x000104c347ec(3);
  return;
}



/* Entry: 104c2f9e8; end: 104c2f9ef;  */

undefined8 * FUN_104c2f9e8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 5) == 4) {
    uVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar2;
    FUN_104c2f98c(param_2 + 2,param_3 + 2);
    return param_2;
  }
  func_0x000104c346a4();
  FUN_104c2fa4c();
  return puVar1;
}



/* Entry: 104c2f9f0; end: 104c2fa23;  */

undefined8 * FUN_104c2f9f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 5) == 4) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    FUN_104c2f98c(param_2 + 2,param_3 + 2);
    return param_2;
  }
  func_0x000104c346a4();
  FUN_104c2fa4c();
  return param_1;
}



/* Entry: 104c2fa24; end: 104c2fa4b;  */

undefined8 * FUN_104c2fa24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_104c2f98c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 104c2fa4c; end: 104c2fa57;  */

void FUN_104c2fa4c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000104c342a8(*param_1,param_1[1]);
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  uVar1 = unaff_x19[2];
  unaff_x20[3] = unaff_x19[3];
  unaff_x20[2] = uVar1;
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  func_0x000104c347ec(4);
  return;
}



/* Entry: 104c2fa58; end: 104c2fa8b;  */

void FUN_104c2fa58(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000104c342a8();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  uVar1 = unaff_x19[2];
  unaff_x20[3] = unaff_x19[3];
  unaff_x20[2] = uVar1;
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  func_0x000104c347ec(4);
  return;
}



/* Entry: 104c2fa8c; end: 104c2faab;  */

void FUN_104c2fa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104c2faac(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 104c2faac; end: 104c2fb47;  */

undefined1  [16]
FUN_104c2faac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_104c2fb48(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_104c2fbb0(alStack_60,param_1,param_3,param_4);
    FUN_104c2fc14(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    FUN_104c3022c(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 104c2fb48; end: 104c2fbaf;  */

long * FUN_104c2fb48(long *param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x000104c342bc();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x000104c34580(), (int)param_1 == 0) {
      param_1 = unaff_x22 + 4;
      func_0x000104c34590();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_104c2fba0;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_104c2fba0:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 104c2fbb0; end: 104c2fc13;  */

void FUN_104c2fbb0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x68;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 1;
  FUN_104c2fe00(lVar1 + 0x20,param_3);
  uVar2 = *param_4;
  *(undefined8 *)(lVar1 + 0x60) = param_4[1];
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  return;
}



/* Entry: 104c2fc14; end: 104c2fc43;  */

void FUN_104c2fc14(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000104c345f8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000104c3470c();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 104c2fc44; end: 104c2fcd3;  */

uint FUN_104c2fc44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000104c342bc();
  FUN_104c2fcd4(param_2);
  func_0x000104c2fcf0();
  uVar1 = unaff_x20;
  FUN_104c2fcd4();
  func_0x000104c2fcf0();
  func_0x00010006725c(uVar1,unaff_x20,param_2,unaff_x19);
  return (uint)uVar1 >> 7 & 1;
}



/* Entry: 104c2fcd4; end: 104c2fd0b;  */

void FUN_104c2fcd4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_104c2fd0c(param_1,&uStack_11);
  return;
}



/* Entry: 104c2fd0c; end: 104c2fdff;  */

undefined8 * FUN_104c2fd0c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((int)param_1[5] == 0) {
    plVar1 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    return plVar1;
  }
  if ((int)param_1[5] == 1) {
    return (undefined8 *)((long)param_1 + 2);
  }
  if ((int)param_1[5] == 2) {
    return (undefined8 *)(*param_1 + 2);
  }
  puVar2 = (undefined8 *)*param_1;
  if (((int)param_1[5] == 3) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    return (undefined8 *)*puVar2;
  }
  return puVar2;
}



/* Entry: 104c2fe00; end: 104c2fe37;  */

void FUN_104c2fe00(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8();
  FUN_104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  FUN_104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 104c2fe38; end: 104c2feaf;  */

long FUN_104c2fe38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_1;
    FUN_104c2fcd4();
    func_0x000104c2fcf0(param_1);
    func_0x0001001030f4(lVar1,lVar1 + param_1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 104c2feb0; end: 104c2fedb;  */

void FUN_104c2feb0(void)

{
  func_0x000104c34818();
  FUN_104c2fedc();
  return;
}



/* Entry: 104c2fedc; end: 104c2ff1f;  */

void FUN_104c2fedc(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001000d03a8();
  FUN_104c2f714();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != -1) {
    func_0x000104c3453c(&PTR_FUN_1107eb0e0);
    *(int *)(unaff_x19 + 0x28) = iVar1;
  }
  return;
}



/* Entry: 104c2ff20; end: 104c3022b;  */

void FUN_104c2ff20(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (*param_1);
  return;
}



/* Entry: 104c3022c; end: 104c3024f;  */

undefined8 FUN_104c3022c(undefined8 param_1)

{
  FUN_104c30250(param_1,0);
  return param_1;
}



/* Entry: 104c30250; end: 104c30267;  */

void FUN_104c30250(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000104c34614();
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 104c30268; end: 104c302d7;  */

void FUN_104c30268(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104c34614();
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 104c302d8; end: 104c3033b;  */

void FUN_104c302d8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  uVar2 = param_2;
  func_0x00010ade5be4();
  FUN_104c3033c();
  FUN_104c305d4(param_1,uVar2);
  uVar1 = param_3;
  if (0x50 < param_3) {
    uVar1 = 0x51;
  }
  puVar3 = (undefined2 *)*param_1 + 1;
  *(undefined2 *)*param_1 = (short)uVar1;
  if (param_3 != 0) {
    _memmove(puVar3,param_2,uVar1);
  }
  *(undefined1 *)((long)puVar3 + uVar1) = 0;
  return;
}



/* Entry: 104c3033c; end: 104c303f3;  */

long FUN_104c3033c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_48;
  long alStack_40 [2];
  
  alStack_40[0] = param_1;
  func_0x000104c347d4();
  __ZNSt3__119__shared_mutex_base4lockEv();
  if (*(long *)(param_1 + 0xf8) == *(long *)(param_1 + 0x100)) {
    uVar4 = 0;
    while( true ) {
      uVar1 = 0;
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar1 = *(long *)(param_1 + 0xb0) - 1;
      }
      if (uVar1 <= uVar4) break;
      lVar3 = param_1 + 0xb8;
      FUN_104c30580();
      lStack_48 = lVar3;
      FUN_104c303f4((long *)(param_1 + 0xf8),&lStack_48);
      uVar4 = uVar4 + 1;
    }
    lVar3 = param_1 + 0xb8;
    FUN_104c30580(lVar3);
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
    lVar3 = *plVar2;
    *(long **)(param_1 + 0x100) = plVar2;
  }
  FUN_104c305a0(alStack_40);
  return lVar3;
}



/* Entry: 104c303f4; end: 104c3042b;  */

undefined8 * FUN_104c303f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x000104c344bc();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_104c3042c();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 104c3042c; end: 104c304a3;  */

void FUN_104c3042c(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x000104c34188();
  lVar1 = (extraout_x8 >> 3) + 1;
  FUN_104c304a4();
  func_0x000104c34674();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_104c304f8();
  }
  *(undefined8 *)(param_1 + unaff_x21) = *unaff_x20;
  func_0x000104c343b0();
  FUN_104c304cc();
  func_0x000104c344d0();
  FUN_104c30530();
  return;
}



/* Entry: 104c304a4; end: 104c304cb;  */

undefined8 FUN_104c304a4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x000104c34854();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_104c304ec();
  func_0x000104c340f0();
  func_0x000104c34088();
  return param_1;
}



/* Entry: 104c304cc; end: 104c304eb;  */

void FUN_104c304cc(void)

{
  func_0x000104c340f0();
  func_0x000104c34088();
  return;
}



/* Entry: 104c304ec; end: 104c304f7;  */

void FUN_104c304ec(void)

{
  func_0x000104c341c0();
  FUN_104c30518();
  return;
}



/* Entry: 104c304f8; end: 104c30517;  */

void FUN_104c304f8(void)

{
  FUN_104c30518();
  return;
}



/* Entry: 104c30518; end: 104c3052f;  */

long * FUN_104c30518(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  FUN_104bd35f4();
  FUN_104c3055c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c30530; end: 104c3055b;  */

long * FUN_104c30530(long *param_1)

{
  FUN_104c3055c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c3055c; end: 104c3057f;  */

void FUN_104c3055c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 104c30580; end: 104c3059f;  */

long * FUN_104c30580(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c30590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  FUN_104bfeb48();
  if ((char)plVar1[1] == '\x01') {
    __ZNSt3__119__shared_mutex_base6unlockEv(*plVar1);
  }
  return plVar1;
}



/* Entry: 104c305a0; end: 104c305d3;  */

undefined8 * FUN_104c305a0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__119__shared_mutex_base6unlockEv(*param_1);
  }
  return param_1;
}



/* Entry: 104c305d4; end: 104c3063b;  */

void FUN_104c305d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1107eb1b0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = unaff_x19;
  *(undefined8 **)(unaff_x20 + 8) = puVar1;
  return;
}



/* Entry: 104c3063c; end: 104c3065f;  */

void FUN_104c3063c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010ade5be4();
  FUN_104c306d0(param_1,&uStack_18);
  return;
}



/* Entry: 104c30660; end: 104c30663;  */

void FUN_104c30660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c30664; end: 104c30677;  */

void FUN_104c30664(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c30678; end: 104c30693;  */

void FUN_104c30678(long param_1)

{
  FUN_104c3063c((undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 104c30694; end: 104c306cb;  */

long FUN_104c30694(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1107eb1f0);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c306cc; end: 104c306cf;  */

void FUN_104c306cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c306d0; end: 104c3073f;  */

void FUN_104c306d0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000104c342bc();
  uStack_28 = 1;
  uStack_30 = param_1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  if ((ulong)(*(long *)(unaff_x20 + 0x100) - *(long *)(unaff_x20 + 0xf8) >> 3) <
      *(ulong *)(unaff_x20 + 0xa8)) {
    FUN_104c303f4();
  }
  else {
    FUN_104c30740(unaff_x20 + 0xd8);
  }
  FUN_104c305a0(&uStack_30);
  return;
}



/* Entry: 104c30740; end: 104c3077f;  */

void FUN_104c30740(long param_1)

{
  long *plVar1;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c30750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  FUN_104bfeb48();
  uStack_18 = 0x104c30760;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_104c30780(&uStack_21,plVar1);
  return;
}



/* Entry: 104c30780; end: 104c307eb;  */

long FUN_104c30780(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000100060994();
  uStack_28 = extraout_x8;
  FUN_104c307ec(auStack_40,1);
  FUN_104c30840();
  func_0x000104c34370();
  func_0x000104c308b0();
  func_0x000100060b40(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x000104c345e0();
  func_0x000104c308b0();
  lVar1 = lStack_30;
  func_0x000104c342c8();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_104c30814();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 104c307ec; end: 104c30813;  */

long FUN_104c307ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104c30814();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104c30814; end: 104c3083f;  */

undefined8 * FUN_104c30814(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  FUN_104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107eb210;
  param_1[1] = 0;
  func_0x000100060b18(param_1 + 3);
  return param_1;
}



/* Entry: 104c30840; end: 104c3087f;  */

undefined8 * FUN_104c30840(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107eb210;
  param_1[1] = 0;
  func_0x000100060b18(param_1 + 3);
  return param_1;
}



/* Entry: 104c30880; end: 104c30883;  */

void FUN_104c30880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb210;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c30884; end: 104c30897;  */

void FUN_104c30884(void)

{
  func_0x000104c308a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c30898; end: 104c308bf;  */

void FUN_104c30898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 104c308c0; end: 104c308f7;  */

undefined8 FUN_104c308c0(undefined8 param_1)

{
  func_0x000104c34804();
  FUN_104c308f8();
  return param_1;
}



/* Entry: 104c308f8; end: 104c3093f;  */

void FUN_104c308f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  func_0x000104c34344();
  while (unaff_x21 != param_3) {
    FUN_104c30940();
    func_0x00010002c7d4();
  }
  return;
}



/* Entry: 104c30940; end: 104c30947;  */

undefined1  [16] FUN_104c30940(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_104c309d8(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_104c30af8(alStack_58,param_1,param_3);
    FUN_104c2fc14(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    FUN_104c3022c(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 104c30948; end: 104c309d7;  */

undefined1  [16]
FUN_104c30948(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_104c309d8(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_104c30af8(alStack_58,param_1,param_4);
    FUN_104c2fc14(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    FUN_104c3022c(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 104c309d8; end: 104c30af7;  */

long * FUN_104c309d8(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x22;
  
  if ((param_2 == param_1 + 1) ||
     (uVar2 = param_5, FUN_104c2fc44(param_5,param_2 + 4), (int)uVar2 != 0)) {
    plVar3 = param_2;
    if (param_2 != (long *)*param_1) {
      func_0x00010002c810();
      iVar1 = (int)plVar3 + 0x20;
      func_0x000104c34590();
      if (iVar1 == 0) goto FUN_104c2fb48;
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
      param_4 = param_2;
    }
    else {
      *param_3 = (long)plVar3;
      param_4 = (long *)((long)plVar3 + 8);
    }
  }
  else {
    iVar1 = (int)param_2 + 0x20;
    func_0x000104c34590();
    if (iVar1 == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
    }
    else {
      param_4 = param_2;
      FUN_104c30b68(param_2,1);
      if ((param_1 + 1 != param_4) &&
         (uVar2 = param_5, FUN_104c2fc44(param_5,param_4 + 4), (int)uVar2 == 0)) {
FUN_104c2fb48:
        func_0x000104c342bc(param_1,param_3,param_5);
        lVar4 = *(long *)(unaff_x20 + 8);
        plVar3 = (long *)(unaff_x20 + 8);
        while (plVar5 = plVar3, lVar4 != 0) {
          while (func_0x000104c34580(), (int)param_1 == 0) {
            param_1 = unaff_x22 + 4;
            func_0x000104c34590();
            plVar5 = unaff_x22;
            if (((int)param_1 == 0) || (plVar3 = unaff_x22 + 1, *plVar3 == 0)) goto LAB_104c2fba0;
          }
          plVar3 = unaff_x22;
          lVar4 = *unaff_x22;
        }
LAB_104c2fba0:
        *unaff_x19 = plVar5;
        return plVar3;
      }
      if (param_2[1] == 0) {
        *param_3 = (long)param_2;
        param_4 = param_2 + 1;
      }
      else {
        *param_3 = (long)param_4;
      }
    }
  }
  return param_4;
}



/* Entry: 104c30af8; end: 104c30b3f;  */

void FUN_104c30af8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x68;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 1;
  lVar1 = lVar1 + 0x20;
  FUN_104c2fe00();
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  return;
}



/* Entry: 104c30b40; end: 104c30b67;  */

undefined8 * FUN_104c30b40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x00010002c810();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 104c30b68; end: 104c30b8b;  */

undefined8 FUN_104c30b68(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_104c30b8c(&uStack_18);
  return uStack_18;
}



/* Entry: 104c30b8c; end: 104c30c7b;  */

void FUN_104c30b8c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000104c342bc();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_104c30b40();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x000104c30bd0();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 104c30c7c; end: 104c30f3b;  */

undefined1  [16] FUN_104c30c7c(long param_1,long ***param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 uStack_68;
  
  lVar3 = param_1;
  ppplVar6 = param_2;
  func_0x000100060994();
  uStack_68 = extraout_x8;
  func_0x000104c2f64c();
  uVar13 = 0;
  uVar11 = 0;
  uVar12 = 0;
  puVar9 = (undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *puVar9 = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0x100000000001;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  puVar8 = (undefined8 *)(lVar3 + 0x40);
  *puVar8 = (undefined8 *)(lVar3 + 0x48);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  puVar10 = (undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *puVar10 = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  ppuStack_b8 = *param_2;
  lStack_b0 = (long)ppuStack_b8 + (long)param_2[1];
  uStack_a8 = 99;
  while( true ) {
    pppuVar4 = &ppuStack_b8;
    FUN_104c2f230();
    if ((int)pppuVar4 == 0) break;
    in_ZR = uStack_a8._4_4_ + -1 == 0xe;
    switch(uStack_a8._4_4_ + -1) {
    case 0:
      func_0x000104c34500();
      func_0x000104c3476c(&pplStack_a0);
      ppplVar6 = &pplStack_a0;
      func_0x000104c2f1f0(param_1);
      FUN_104c2f714(&pplStack_a0);
      uVar12 = 1;
      break;
    case 1:
      func_0x000104c34500();
      ppplVar7 = &pplStack_a0;
      pplStack_a0 = (long **)pppuVar4;
      pppuStack_98 = ppplVar6;
      func_0x000104c30f8c(puVar9);
      ppplVar6 = ppplVar7;
      break;
    case 2:
      func_0x000104c34500();
      uStack_c0 = *(undefined8 *)(param_1 + 0x50);
      puVar5 = puVar8;
      pplStack_a0 = (long **)pppuVar4;
      pppuStack_98 = ppplVar6;
      FUN_104c30f3c(puVar8,&pplStack_a0,&uStack_c0);
      pplStack_a0 = (long **)(puVar5 + 4);
      ppplVar6 = &pplStack_a0;
      func_0x000104c30f54(puVar10);
      break;
    case 3:
      func_0x000104c34500();
      ppplVar7 = &pplStack_a0;
      pplStack_a0 = (long **)pppuVar4;
      pppuStack_98 = ppplVar6;
      func_0x000104c30f8c(lVar3 + 0x70);
      ppplVar6 = ppplVar7;
      break;
    case 4:
      uVar2 = SUB84(&ppuStack_b8,0);
      FUN_104c2f380();
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      uVar11 = 1;
      break;
    default:
      FUN_104c2f2fc(&ppuStack_b8);
      break;
    case 0xe:
      uVar2 = SUB84(&ppuStack_b8,0);
      FUN_104c2f380();
      *(undefined4 *)(param_1 + 0x38) = uVar2;
      uVar13 = 1;
    }
  }
  if ((uVar13 & uVar12 & uVar11) != 0) {
    func_0x000100060b40(uStack_68);
    if ((bool)in_ZR) {
      auVar14._8_8_ = ppplVar6;
      auVar14._0_8_ = param_1;
      return auVar14;
    }
    ___stack_chk_fail();
    ___cxa_free_exception(uVar11);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_a0);
    FUN_104c314c4(puVar9);
    FUN_104c314c4(lVar3 + 0x70);
    FUN_104c314fc(puVar10);
    FUN_104c31534(puVar8);
    func_0x000104c345d8();
    __Unwind_Resume(pppuVar4);
    FUN_104c30fc8();
    auVar15._8_8_ = (ulong)ppplVar6 & 0xff;
    auVar15._0_8_ = pppuVar4;
    return auVar15;
  }
  ppplVar6 = &pplStack_a0;
  func_0x00010002b838(ppplVar6,"missing required field:");
  if (uVar13 == 0) {
    func_0x000104c34764();
  }
  if (uVar11 == 0) {
    func_0x000104c34764();
  }
  if (uVar12 == 0) {
    func_0x000104c34764();
  }
  func_0x000104c3444c();
  __ZNSt13runtime_errorC1EPKc();
  func_0x000104c3420c();
  ___cxa_throw(ppplVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104c30ec0);
  (*pcVar1)();
}



/* Entry: 104c30f3c; end: 104c30f53;  */

void FUN_104c30f3c(void)

{
  FUN_104c30fc8();
  return;
}



/* Entry: 104c30f54; end: 104c30fc7;  */

undefined8 * FUN_104c30f54(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x000104c344bc();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_104c31200();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 104c30fc8; end: 104c30fdf;  */

void FUN_104c30fc8(void)

{
  FUN_104c30fe0();
  return;
}



/* Entry: 104c30fe0; end: 104c31067;  */

undefined1  [16] FUN_104c30fe0(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_104c31068(alStack_38);
  plVar2 = param_1;
  FUN_104c310c4(param_1,&uStack_40,alStack_38[0] + 0x20);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x000104c3112c(param_1,uStack_40,plVar2,alStack_38[0]);
    lVar3 = alStack_38[0];
    alStack_38[0] = 0;
  }
  func_0x000104c31188(alStack_38);
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 104c31068; end: 104c310c3;  */

void FUN_104c31068(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x000104c3115c(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 104c310c4; end: 104c3112b;  */

long * FUN_104c310c4(long *param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x000104c342bc();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x000104c34580(), (int)param_1 == 0) {
      param_1 = unaff_x22 + 4;
      func_0x000104c34590();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_104c3111c;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_104c3111c:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 104c3112c; end: 104c311ab;  */

void FUN_104c3112c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000104c345f8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000104c3470c();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 104c311ac; end: 104c311c3;  */

void FUN_104c311ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000104c34614();
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 104c311c4; end: 104c311ff;  */

void FUN_104c311c4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104c34614();
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 104c31200; end: 104c3127b;  */

void FUN_104c31200(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x000104c34188();
  lVar1 = (extraout_x8 >> 3) + 1;
  FUN_104c3127c();
  func_0x000104c34674();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_104c312d0();
  }
  *(undefined8 *)(param_1 + unaff_x21) = *unaff_x20;
  func_0x000104c343b0();
  FUN_104c312a4();
  func_0x000104c344d0();
  FUN_104c31308();
  return;
}



/* Entry: 104c3127c; end: 104c312a3;  */

undefined8 FUN_104c3127c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x000104c34854();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_104c312c4();
  func_0x000104c340f0();
  func_0x000104c34088();
  return param_1;
}



/* Entry: 104c312a4; end: 104c312c3;  */

void FUN_104c312a4(void)

{
  func_0x000104c340f0();
  func_0x000104c34088();
  return;
}



/* Entry: 104c312c4; end: 104c312cf;  */

void FUN_104c312c4(void)

{
  func_0x000104c341c0();
  FUN_104c312f0();
  return;
}



/* Entry: 104c312d0; end: 104c312ef;  */

void FUN_104c312d0(void)

{
  FUN_104c312f0();
  return;
}



/* Entry: 104c312f0; end: 104c31307;  */

long * FUN_104c312f0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  FUN_104bd35f4();
  FUN_104c31334();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c31308; end: 104c31333;  */

long * FUN_104c31308(long *param_1)

{
  FUN_104c31334();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c31334; end: 104c31357;  */

void FUN_104c31334(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 104c31358; end: 104c313b3;  */

void FUN_104c31358(void)

{
  func_0x000104c34188();
  FUN_104c313b4();
  func_0x000104c34298();
  func_0x000104c345c4();
  FUN_104c31408();
  func_0x000104c3454c();
  func_0x000104c343b0();
  FUN_104c313dc();
  func_0x000104c344d0();
  FUN_104c31474();
  return;
}



/* Entry: 104c313b4; end: 104c313db;  */

undefined8 FUN_104c313b4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000104c3482c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_104c313fc();
  func_0x000104c340f0();
  func_0x000104c34088();
  return param_1;
}



/* Entry: 104c313dc; end: 104c313fb;  */

void FUN_104c313dc(void)

{
  func_0x000104c340f0();
  func_0x000104c34088();
  return;
}



/* Entry: 104c313fc; end: 104c31407;  */

void FUN_104c313fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c341c0();
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c31438(param_4);
  }
  func_0x000104c3465c();
  return;
}



/* Entry: 104c31408; end: 104c31457;  */

void FUN_104c31408(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c31438(param_4);
  }
  func_0x000104c3465c();
  return;
}



/* Entry: 104c31458; end: 104c31473;  */

long * FUN_104c31458(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  FUN_104bd35f4();
  FUN_104c314a0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c31474; end: 104c3149f;  */

long * FUN_104c31474(long *param_1)

{
  FUN_104c314a0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c314a0; end: 104c314c3;  */

void FUN_104c314a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 104c314c4; end: 104c314e7;  */

void FUN_104c314c4(void)

{
  func_0x000104c34268();
  FUN_104c314e8();
  return;
}


