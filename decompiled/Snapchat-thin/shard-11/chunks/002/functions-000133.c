/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108289cc4; end: 108289d0b;  */

void FUN_108289cc4(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010828a24c();
  FUN_108289238();
  func_0x00010828a1e8();
  *unaff_x19 = &PTR_FUN_110a34e40;
  return;
}



/* Entry: 108289d0c; end: 108289d63;  */

void FUN_108289d0c(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  ulong uStack_38;
  
  uStack_38 = 0;
  lVar1 = (long)param_2;
  func_0x00010828a210(lVar1);
  FUN_1082895a0(param_1,lVar1,2,param_3,&uStack_38);
  *param_4 = (int)(uStack_38 >> 1);
  return;
}



/* Entry: 108289d64; end: 108289df7;  */

void FUN_108289d64(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined4 *param_5
                  ,undefined4 *param_6)

{
  long lVar1;
  long lVar2;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  lVar1 = (long)param_2;
  func_0x00010828a210(lVar1);
  lVar2 = (long)param_3;
  func_0x00010828a210(lVar2);
  FUN_108289954(param_1,lVar1,lVar2,2,param_4,&uStack_48,&uStack_50);
  *param_5 = (int)(uStack_48 >> 1);
  *param_6 = (int)(uStack_50 >> 1);
  return;
}



/* Entry: 108289df8; end: 108289dfb;  */

undefined8 * FUN_108289df8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a34e00;
  FUN_1082892dc();
  FUN_108289e68(param_1 + 5);
  FUN_108289ea0(param_1 + 4);
  FUN_10828a0d0(param_1 + 2);
  return param_1;
}



/* Entry: 108289dfc; end: 108289e0f;  */

void FUN_108289dfc(void)

{
  FUN_108289364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108289e10; end: 108289e13;  */

undefined8 * FUN_108289e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a34e00;
  FUN_1082892dc();
  FUN_108289e68(param_1 + 5);
  FUN_108289ea0(param_1 + 4);
  FUN_10828a0d0(param_1 + 2);
  return param_1;
}



/* Entry: 108289e14; end: 108289e27;  */

void FUN_108289e14(void)

{
  FUN_108289364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108289e28; end: 108289e67;  */

void FUN_108289e28(void)

{
  return;
}



/* Entry: 108289e68; end: 108289e8f;  */

undefined8 * FUN_108289e68(undefined8 *param_1)

{
  FUN_108289e90(*param_1);
  return param_1;
}



/* Entry: 108289e90; end: 108289e9f;  */

void FUN_108289e90(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108289ea0; end: 108289ecb;  */

long * FUN_108289ea0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108289ecc();
  }
  return param_1;
}



/* Entry: 108289ecc; end: 108289ee3;  */

void FUN_108289ecc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    func_0x000108289f10(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108289ee4; end: 108289f33;  */

void FUN_108289ee4(long param_1)

{
  if (param_1 != 0) {
    func_0x000108289f10(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108289f34; end: 108289f47;  */

void FUN_108289f34(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x10;
      lVar2 = lVar1 + lVar2 * 0x10;
      do {
        lVar2 = lVar2 + -0x10;
        FUN_108289e68(lVar2);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108289f48; end: 108289f93;  */

void FUN_108289f48(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x10;
      lVar1 = param_2 + lVar1 * 0x10;
      do {
        lVar1 = lVar1 + -0x10;
        FUN_108289e68(lVar1);
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 108289f94; end: 108289fc3;  */

void FUN_108289f94(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x10;
      lVar2 = lVar1 + lVar2 * 0x10;
      do {
        lVar2 = lVar2 + -0x10;
        FUN_108289e68(lVar2);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108289fc4; end: 10828a00f;  */

void FUN_108289fc4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - (int)param_1[1]) < (int)param_2) {
    plVar1 = param_1;
    FUN_10828a07c();
    if ((int)param_1[1] != 0) {
      _memcpy(plVar1,*param_1,(long)(int)param_1[1] << 4);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    param_2 = param_2 >> 4;
    if (0x7ffffffe < param_2) {
      param_2 = 0x7fffffff;
    }
    *param_1 = (long)plVar1;
    *(uint *)((long)param_1 + 0xc) = (int)param_2 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 10828a010; end: 10828a07b;  */

void FUN_10828a010(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 4);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10828a07c; end: 10828a0cf;  */

void FUN_10828a07c(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_1 + 8) ^ 0x7fffffff) < param_2) {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10828a0a0;
    func_0x00010bdb1a68();
  }
  else {
    param_1 = (ulong)(*(uint *)(param_1 + 8) + param_2);
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x18) = 0x7fffffff;
  *(undefined8 *)(puVar1 + -0x20) = 0x10;
  FUN_10840fe24(puVar1 + -0x20,param_1);
  return;
}



/* Entry: 10828a0d0; end: 10828a103;  */

undefined8 * FUN_10828a0d0(undefined8 *param_1)

{
  FUN_10828a104();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10828a104; end: 10828a13f;  */

void FUN_10828a104(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      FUN_10828a140(uVar2 + 8);
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10828a140; end: 10828a173;  */

long * FUN_10828a140(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10828a174; end: 10828a25f;  */

void FUN_10828a174(void)

{
  return;
}



/* Entry: 10828a260; end: 10828a2af;  */

undefined8 * FUN_10828a260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 10828a2b0; end: 10828a2cb;  */

undefined8 FUN_10828a2b0(void)

{
  return 0;
}



/* Entry: 10828a2cc; end: 10828a31b;  */

long FUN_10828a2cc(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010828a38c();
  }
  return param_1;
}



/* Entry: 10828a31c; end: 10828a34b;  */

long FUN_10828a31c(long param_1)

{
  FUN_10828a34c();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010828a38c();
  }
  return param_1;
}



/* Entry: 10828a34c; end: 10828a383;  */

void FUN_10828a34c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_1082764bc();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10828a384; end: 10828a453;  */

void FUN_10828a384(void)

{
  return;
}



/* Entry: 10828a454; end: 10828a4af;  */

void FUN_10828a454(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((uint)*(ulong *)(param_1 + 0x18) >> 10 & 1) == 0) {
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
  }
  FUN_10828a4b0(param_1);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x30) <= *(int *)(param_1 + 0x3c)) {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  iVar2 = iVar1;
  if (*(int *)(param_1 + 0x34) <= iVar1) {
    iVar2 = *(int *)(param_1 + 0x34);
  }
  *(int *)(param_1 + 0x30) = iVar1;
  *(int *)(param_1 + 0x34) = iVar2;
  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  FUN_108343270();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}



/* Entry: 10828a4b0; end: 10828a5c7;  */

void FUN_10828a4b0(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*(char *)(param_2 + 0x96) == '\x01') {
    *(undefined1 *)(param_1[2] + 99) = 1;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  if (*(int *)(param_2 + 0x50) == 1) {
    uVar2 = param_1[3] | 0x28000000;
  }
  else {
    if (*(int *)(param_2 + 0x50) != 0) goto LAB_10828a528;
    uVar2 = param_1[3] & 0xffffffffd7ffffff;
  }
  param_1[3] = uVar2;
LAB_10828a528:
  iVar1 = *(int *)(param_2 + 0x5c);
  if (*(int *)((long)param_1 + 0x3c) <= *(int *)(param_2 + 0x5c)) {
    iVar1 = *(int *)((long)param_1 + 0x3c);
  }
  *(int *)((long)param_1 + 0x3c) = iVar1;
  if (*(char *)(param_2 + 0x92) == '\x01') {
    param_1[3] = param_1[3] & 0xfffffffffffffffd;
  }
  if (8 < (int)param_1[8]) {
    FUN_10841076c(&UNK_10f481bf2);
    *(undefined4 *)(param_1 + 8) = 8;
  }
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x68);
  param_1[3] = param_1[3] & 0xffffff0000000000U |
               param_1[3] & 0x7fffffffffU | ((ulong)*(byte *)(param_2 + 0x8e) & 1) << 0x27;
  func_0x000108294ffc((long)param_1 + 0x6c,param_2 + 0x78);
  if (*(char *)(param_2 + 0x93) == '\x01') {
    param_1[3] = param_1[3] | 0x4000000000;
  }
  return;
}



/* Entry: 10828a5c8; end: 10828a5df;  */

long * FUN_10828a5c8(long *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010828a5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 10828a5e0; end: 10828a697;  */

long * FUN_10828a5e0(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    return (long *)0x0;
  }
  uVar3 = 0;
  uVar1 = param_2 + 0x20;
  FUN_10828a698(uVar1,param_4 + 0x20);
  if ((uVar1 & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x90);
    lStack_50 = 0;
    plVar2 = &lStack_50;
    func_0x000108219544(plVar2,param_3);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    uStack_58 = *(undefined8 *)(param_4 + 0x90);
    uStack_60 = 0;
    func_0x000108219544(&uStack_60,param_5);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10828a698; end: 10828a6af;  */

uint FUN_10828a698(uint param_1)

{
  FUN_1082834b8();
  return param_1 ^ 1;
}



/* Entry: 10828a6b0; end: 10828a78f;  */

void FUN_10828a6b0(long *param_1,int *param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  int param_6,undefined8 param_7)

{
  long *plVar1;
  
  if (((((int)param_7 == 0) ||
       (plVar1 = param_1, (**(code **)(*param_1 + 0x20))(param_1,param_3,param_7), (int)plVar1 != 0)
       ) && ((param_6 == 0 || ((*(byte *)(param_1 + 3) >> 1 & 1) != 0)))) &&
     (((0 < *param_2 && (0 < param_2[1])) && (param_4 != 0)))) {
    (**(code **)(*param_1 + 0x40))(param_1,param_3,param_5);
  }
  return;
}



/* Entry: 10828a790; end: 10828a817;  */

void FUN_10828a790(long *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  (**(code **)(*param_1 + 0xe0))();
  if (uVar2 < 0x24) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10828a818);
  (*pcVar1)();
}



/* Entry: 10828a818; end: 10828a91f;  */

long * FUN_10828a818(long *param_1,undefined1 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  func_0x00010828acfc();
  uStack_38 = extraout_x8;
  if ((int)param_2 == 0) {
    func_0x00010828acb0();
    goto LAB_10828a8d8;
  }
  (**(code **)(*param_1 + 200))(auStack_a8);
  param_2 = auStack_a8;
  uVar4 = 1;
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x20))();
  if (((ulong)plVar3 & 1) == 0) {
LAB_10828a8c0:
    func_0x00010828acb0();
  }
  else {
    func_0x00010828aca0();
    FUN_10828a920();
    if ((int)plVar3 == 0) goto LAB_10828a8c0;
    func_0x00010828aca0(*(undefined8 *)(*param_1 + 0x58));
    (*extraout_x8_00)();
    if ((int)plVar3 == 0) goto LAB_10828a8c0;
    if ((int)param_3 != 0) {
      func_0x00010828aca0(*(undefined8 *)(*param_1 + 0x38));
      (*extraout_x8_01)();
      if (((ulong)plVar3 & 1) == 0) goto LAB_10828a8c0;
    }
    param_2 = auStack_a8;
    FUN_108283324();
    plVar3 = unaff_x19;
  }
  func_0x00010828ac84();
  param_1 = plVar3;
  param_3 = uVar4;
  if ((bool)in_ZR) {
    func_0x00010828ac70();
    param_1 = plVar3;
    param_3 = uVar4;
  }
LAB_10828a8d8:
  func_0x00010828ace8(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010828ac84();
  if ((bool)in_ZR) {
    func_0x00010828ac70();
  }
  __Unwind_Resume();
  if ((int)param_2 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = param_3;
    func_0x00010828398c();
    iVar2 = (int)uVar4;
    if (iVar2 - 1U < 2) {
      iVar2 = 7;
    }
    else {
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010828a9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3);
        return param_1;
      }
      if (iVar2 != 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10828a9ac);
        (*pcVar1)();
      }
      iVar2 = 5;
    }
    plVar3 = (long *)(ulong)((int)param_2 == iVar2);
  }
  return plVar3;
}



/* Entry: 10828a920; end: 10828aa1f;  */

long * FUN_10828a920(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((int)param_2 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    uVar3 = param_3;
    func_0x00010828398c();
    iVar2 = (int)uVar3;
    if (iVar2 - 1U < 2) {
      iVar2 = 7;
    }
    else {
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010828a9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3);
        return param_1;
      }
      if (iVar2 != 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10828a9ac);
        (*pcVar1)();
      }
      iVar2 = 5;
    }
    plVar4 = (long *)(ulong)((int)param_2 == iVar2);
  }
  return plVar4;
}



/* Entry: 10828aa20; end: 10828aa4b;  */

undefined2 FUN_10828aa20(void)

{
  undefined2 uStack_12;
  
  FUN_108266014(&uStack_12,&UNK_10f481c3b);
  return uStack_12;
}



/* Entry: 10828aa4c; end: 10828aa6b;  */

long * FUN_10828aa4c(long *param_1,undefined8 param_2,int param_3)

{
  if ((((uint)param_1[3] >> 7 & 1) != 0) && ((param_3 == 0 || (((uint)param_1[3] >> 0xe & 1) != 0)))
     ) {
                    /* WARNING: Could not recover jumptable at 0x00010828aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf0))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 10828aa6c; end: 10828aae7;  */

long * FUN_10828aa6c(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((char)param_2[1] == '\x01') {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x30))(param_1,(long)param_2 + *(long *)(*param_2 + -0x18) + 0x20);
    iVar1 = (int)plVar2;
    if (*(int *)((long)param_1 + 0x44) <= (int)plVar2) {
      iVar1 = *(int *)((long)param_1 + 0x44);
    }
    if (1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010828aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10828aae8; end: 10828ac6f;  */

/* WARNING: Possible PIC construction at 0x00010828ac08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010828ac48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010828ac4c) */

void FUN_10828aae8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  uint *unaff_x19;
  uint uVar5;
  undefined4 uStack_d8;
  char cStack_d4;
  undefined8 *apuStack_d0 [10];
  undefined1 uStack_80;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  func_0x00010828acfc();
  uStack_68 = extraout_x8;
  do {
    plVar4 = param_1;
    FUN_10828a818(&uStack_d8,param_1,param_2,1);
    uVar3 = cStack_d4 == '\x01';
    uVar5 = (uint)param_2;
    if (((bool)uVar3) &&
       (plVar4 = param_1, (**(code **)(*param_1 + 0x40))(param_1,&uStack_d8,param_3),
       (int)plVar4 != 0)) {
      *unaff_x19 = uVar5;
      func_0x00010828acc8();
      bVar2 = false;
    }
    else {
      uVar3 = uVar5 == 0x13;
      if (uVar5 < 0x14) {
        uVar1 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar1 & 0xa0e1e) == 0) {
          if ((uVar1 & 0x45000) == 0) {
            uVar3 = uVar5 == 0x10;
            if (!(bool)uVar3) goto LAB_10828abc8;
            bVar2 = true;
            param_2 = 0x11;
          }
          else {
            bVar2 = true;
            param_2 = 7;
            uVar3 = 0;
          }
        }
        else {
          bVar2 = true;
          param_2 = 5;
          uVar3 = 0;
        }
      }
      else {
LAB_10828abc8:
        param_2 = 0;
        bVar2 = true;
      }
    }
    func_0x00010828ac84();
    if ((bool)uVar3) {
      func_0x00010828ac90();
    }
    if (!bVar2) goto LAB_10828ac0c;
  } while ((int)param_2 != 0);
  uStack_d8 = 4;
  cStack_d4 = '\0';
  uStack_80 = 0;
  uStack_6c = 0;
  *unaff_x19 = 0;
  func_0x00010828acc8();
  func_0x00010828ac84();
  if (!(bool)uVar3) {
LAB_10828ac0c:
    func_0x00010828ace8(uStack_68);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010828ac84();
    if (!(bool)uVar3) {
      __Unwind_Resume(plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010828ac80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  return;
}



/* Entry: 10828ac70; end: 10828ad0f;  */

void FUN_10828ac70(void)

{
  undefined8 *in_stack_00000010;
  
                    /* WARNING: Could not recover jumptable at 0x00010828ac80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000010)(&stack0x00000010);
  return;
}



/* Entry: 10828ad10; end: 10828adb7;  */

undefined4 * FUN_10828ad10(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cStack_31;
  
  cStack_31 = cRam0000000113826af8;
  if (cRam0000000113826af8 == '\0') {
    iVar1 = 0x13826af8;
    FUN_10825bc50(0x113826af8,&cStack_31,1,0,0);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)0x28;
      __Znwm();
      *puVar2 = 8;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      puVar2[6] = 1;
      *(undefined1 *)(puVar2 + 7) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      cRam0000000113826af8 = 2;
      puRam0000000113826b00 = puVar2;
      return puVar2;
    }
  }
  do {
  } while (cRam0000000113826af8 != '\x02');
  return puRam0000000113826b00;
}



/* Entry: 10828adb8; end: 10828ae5b;  */

undefined8 *
FUN_10828adb8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *param_4;
  *param_4 = 0;
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  FUN_108343afc();
  FUN_10828b0a8(&uStack_38);
  uVar1 = uStack_38;
  uStack_38 = 0;
  func_0x00010828b088(param_1 + 1,uVar1);
  FUN_10827f5a4(&uStack_38);
  return param_1;
}



/* Entry: 10828ae5c; end: 10828ae77;  */

undefined4 FUN_10828ae5c(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df13390 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10828ae78);
  (*pcVar1)();
}



/* Entry: 10828ae78; end: 10828aeef;  */

undefined8 FUN_10828ae78(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w10;
  
  FUN_10828ae5c((int)param_2[1]);
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010828b098();
      uVar1 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  FUN_10828adb8(param_1);
  func_0x00010828b050(uVar1);
  return param_1;
}



/* Entry: 10828aef0; end: 10828af37;  */

void FUN_10828aef0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long lVar5;
  int extraout_w10;
  
  uVar4 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010828b098();
      uVar4 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  *param_1 = uVar4;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lVar5;
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10828af38; end: 10828afdf;  */

long FUN_10828af38(long param_1,long param_2)

{
  func_0x0001081fa8b4();
  func_0x00010828af74(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



/* Entry: 10828afe0; end: 10828b03f;  */

void FUN_10828afe0(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *extraout_x8;
  int *piVar4;
  int extraout_w10;
  
  piVar4 = (int *)0x0;
  if (*param_1 != 0) {
    do {
      func_0x00010828b098();
      piVar4 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  FUN_10828adb8();
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828b040; end: 10828b0a7;  */

bool FUN_10828b040(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    lVar1 = *param_1 + 0xc;
    func_0x000108343fdc(lVar1,&UNK_10df1cb34);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10828b0a8; end: 10828b103;  */

void FUN_10828b0a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_84 [100];
  
  FUN_108344004(auStack_84,param_2,param_3,param_4,param_5);
  iVar1 = (int)auStack_84;
  FUN_10828b104();
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_10828b138(param_1,auStack_84);
  }
  return;
}



/* Entry: 10828b104; end: 10828b137;  */

uint FUN_10828b104(byte *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 1);
  uVar3 = NEON_ushl((ulong)CONCAT16((char)((uint)uVar2 >> 0x18),
                                    (uint6)CONCAT14((char)((uint)uVar2 >> 0x10),
                                                    (uint)CONCAT12((char)((uint)uVar2 >> 8),
                                                                   (ushort)(byte)uVar2))),
                    0x4000300020001,2);
  uVar1 = (uint)uVar3 | (uint)((ulong)uVar3 >> 0x20);
  return (uVar1 | uVar1 >> 0x10) & 0xff | (uint)*param_1;
}



/* Entry: 10828b138; end: 10828b187;  */

void FUN_10828b138(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a34fc0;
  _memcpy((long)puVar1 + 0xc,param_2,100);
  *param_1 = puVar1;
  return;
}



/* Entry: 10828b188; end: 10828b1a3;  */

void FUN_10828b188(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_84 [100];
  
  FUN_108344004(auStack_84,*param_2,*(undefined4 *)((long)param_2 + 0x14),*param_3,
                *(undefined4 *)((long)param_3 + 0x14));
  iVar1 = (int)auStack_84;
  FUN_10828b104();
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_10828b138(param_1,auStack_84);
  }
  return;
}



/* Entry: 10828b1a4; end: 10828b20b;  */

ulong FUN_10828b1a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1 + 0xc;
    FUN_10828b104(uVar2);
    if (*(char *)(param_1 + 0xd) == '\x01') {
      lVar1 = param_1 + 0x14;
      func_0x000108407f28(lVar1);
      uVar2 = (ulong)((uint)uVar2 | (int)lVar1 << 8);
    }
    if (*(char *)(param_1 + 0xf) == '\x01') {
      param_1 = param_1 + 0x30;
      func_0x000108407f28(param_1);
      uVar2 = (ulong)((uint)uVar2 | (int)param_1 << 0x10);
    }
  }
  return uVar2;
}



/* Entry: 10828b20c; end: 10828b2d7;  */

undefined8 FUN_10828b20c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = (int)param_1 + 0xc;
  FUN_10828b104();
  iVar2 = (int)param_2 + 0xc;
  FUN_10828b104();
  if (iVar1 == iVar2) {
    if (*(char *)(param_1 + 0xd) == '\x01') {
      lVar3 = param_1 + 0x14;
      _memcmp(lVar3,param_2 + 0x14,0x1c);
      if ((int)lVar3 != 0) goto LAB_10828b2b4;
    }
    if (*(char *)(param_1 + 0xe) == '\x01') {
      lVar3 = param_1 + 0x4c;
      _memcmp(lVar3,param_2 + 0x4c,0x24);
      if ((int)lVar3 != 0) goto LAB_10828b2b4;
    }
    if (*(char *)(param_1 + 0xf) == '\x01') {
      param_1 = param_1 + 0x30;
      _memcmp(param_1,param_2 + 0x30,0x1c);
      if ((int)param_1 != 0) goto LAB_10828b2b4;
    }
    uVar4 = 1;
  }
  else {
LAB_10828b2b4:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10828b2d8; end: 10828b30b;  */

ulong FUN_10828b2d8(long param_1,ulong *param_2)

{
  ulong uStack_20;
  ulong uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  FUN_1083441a4(param_1 + 0xc,&uStack_20);
  return uStack_20 & 0xffffffff;
}



/* Entry: 10828b30c; end: 10828b3ef;  */

undefined8 * FUN_10828b30c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if (*param_2 == 0) {
    uVar2 = 7;
  }
  else {
    uVar2 = *(uint *)(*param_2 + 0x30) & 7;
  }
  *(undefined4 *)(param_1 + 1) = 0x19;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = uVar2;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110a34f58;
  uVar3 = *param_3;
  *param_3 = 0;
  param_1[8] = uVar3;
  lStack_38 = *param_2;
  *param_2 = 0;
  FUN_108296280(param_1,&lStack_38,1);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    FUN_10828bc30();
  }
  return param_1;
}



/* Entry: 10828b3f0; end: 10828b41f;  */

undefined8 * FUN_10828b3f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 10828b420; end: 10828b48f;  */

undefined8 * FUN_10828b420(undefined8 *param_1,long param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = &PTR_DAT_110a35070;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_108296328();
  return param_1;
}



/* Entry: 10828b490; end: 10828b503;  */

void FUN_10828b490(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x48;
  FUN_1082a37b0();
  FUN_10828b420();
  *puVar4 = &PTR_FUN_110a34f58;
  lVar5 = *(long *)(param_2 + 0x40);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[8] = lVar5;
  *param_1 = puVar4;
  return;
}



/* Entry: 10828b504; end: 10828b50f;  */

undefined8 FUN_10828b504(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = *(long *)(param_2 + 0x40);
  if (lVar5 == lVar6) {
    return 1;
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (lVar6 == 0) {
    return 0;
  }
  iVar1 = (int)lVar5 + 0xc;
  FUN_10828b104();
  iVar2 = (int)lVar6 + 0xc;
  FUN_10828b104();
  if (iVar1 == iVar2) {
    if (*(char *)(lVar5 + 0xd) == '\x01') {
      lVar3 = lVar5 + 0x14;
      _memcmp(lVar3,lVar6 + 0x14,0x1c);
      if ((int)lVar3 != 0) goto LAB_10828b2b4;
    }
    if (*(char *)(lVar5 + 0xe) == '\x01') {
      lVar3 = lVar5 + 0x4c;
      _memcmp(lVar3,lVar6 + 0x4c,0x24);
      if ((int)lVar3 != 0) goto LAB_10828b2b4;
    }
    if (*(char *)(lVar5 + 0xf) == '\x01') {
      lVar5 = lVar5 + 0x30;
      _memcmp(lVar5,lVar6 + 0x30,0x1c);
      if ((int)lVar5 != 0) goto LAB_10828b2b4;
    }
    uVar4 = 1;
  }
  else {
LAB_10828b2b4:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10828b510; end: 10828b623;  */

void FUN_10828b510(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_10828b1a4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010828b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,uVar1,"unknown",7);
  return;
}



/* Entry: 10828b624; end: 10828b64f;  */

ulong FUN_10828b624(undefined8 param_1,long *param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x20))();
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*param_3;
}



/* Entry: 10828b650; end: 10828b6b7;  */

void FUN_10828b650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x00010828bcb0();
  FUN_10828b0a8(auStack_30,param_2,param_3,param_4,param_5);
  func_0x00010828bc90();
  func_0x00010828bc70();
  if (lStack_28 != 0) {
    func_0x00010828bc30();
  }
  return;
}



/* Entry: 10828b6b8; end: 10828b763;  */

void FUN_10828b6b8(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*param_3 == 0) {
    lVar1 = *param_2;
    *param_2 = 0;
    *param_1 = lVar1;
  }
  else {
    lVar1 = 0x48;
    FUN_1082a37b0();
    lVar2 = *param_2;
    *param_2 = 0;
    *param_3 = 0;
    FUN_10828b30c();
    *param_1 = lVar1;
    func_0x00010828bc70();
    if (lVar2 != 0) {
      func_0x00010828bc30();
    }
  }
  return;
}



/* Entry: 10828b764; end: 10828b7c3;  */

void FUN_10828b764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x00010828bcb0();
  FUN_10828b188(auStack_30,param_2,param_3);
  func_0x00010828bc90();
  func_0x00010828bc70();
  if (lStack_28 != 0) {
    func_0x00010828bc30();
  }
  return;
}



/* Entry: 10828b7c4; end: 10828b7c7;  */

undefined8 * FUN_10828b7c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a34f58;
  FUN_10827f5a4(param_1 + 8);
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 10828b7c8; end: 10828b7db;  */

void FUN_10828b7c8(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b81c();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 10828b7dc; end: 10828b7ef;  */

undefined * FUN_10828b7dc(void)

{
  return &UNK_10f481cf1;
}



/* Entry: 10828b7f0; end: 10828b81b;  */

void FUN_10828b7f0(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f481c40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10828b81c);
  (*pcVar1)();
}



/* Entry: 10828b81c; end: 10828b84b;  */

undefined8 * FUN_10828b81c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a34f58;
  FUN_10827f5a4(param_1 + 8);
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 10828b84c; end: 10828b853;  */

void FUN_10828b84c(void)

{
  return;
}



/* Entry: 10828b854; end: 10828b893;  */

undefined8 * FUN_10828b854(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 10828b894; end: 10828b897;  */

undefined8 * FUN_10828b894(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 10828b898; end: 10828b8ab;  */

void FUN_10828b898(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828b8ac; end: 10828b987;  */

void FUN_10828b8ac(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar1 = (long *)*param_2;
  FUN_10828ba0c(param_1 + 0x20,param_2[1],*(undefined8 *)(param_2[3] + 0x40),2);
  FUN_10828bad0(&lStack_38,param_1,0,param_2,0,0);
  uStack_40 = 0x1138270b0;
  FUN_1082dcb88((long)plVar1 + *(long *)(*plVar1 + -0x18),&uStack_40,lStack_38 + 8,param_1 + 0x20);
  FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f481d01);
  FUN_1083a3ca0(uStack_40);
  FUN_1083a3ca0(lStack_38);
  return;
}



/* Entry: 10828b988; end: 10828b99f;  */

void FUN_10828b988(long param_1,long *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x40);
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x20),7,lVar1 + 0x14);
  }
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined4 *)(param_1 + 0x24),lVar1 + 0x4c);
  }
  if (*(char *)(param_1 + 0x2f) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010828bc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x28),7,lVar1 + 0x30);
    return;
  }
  return;
}



/* Entry: 10828b9a0; end: 10828b9d3;  */

undefined8 * FUN_10828b9a0(undefined8 *param_1)

{
  FUN_10828b9d4();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10828b9d4; end: 10828ba0b;  */

void FUN_10828b9d4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      func_0x00010826dca8();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10828ba0c; end: 10828bacf;  */

void FUN_10828ba0c(undefined4 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    uVar2 = *(undefined1 *)(param_3 + 0x10);
    uVar1 = *(uint *)(param_3 + 0xc);
    param_1[3] = uVar1;
    *(undefined1 *)(param_1 + 4) = uVar2;
    puVar5 = param_1;
    if ((uVar1 >> 8 & 0xff) == 1) {
      func_0x00010828bc3c();
      *param_1 = (int)puVar5;
      puVar5 = (undefined4 *)(param_3 + 0x14);
      func_0x000108407f28();
      param_1[5] = (int)puVar5;
    }
    uVar3 = SUB84(puVar5,0);
    if (*(char *)((long)param_1 + 0xe) == '\x01') {
      func_0x00010828bb5c(param_2,0,param_4,0x12,&UNK_10f481d12,0);
      uVar3 = (undefined4)param_2;
      param_1[1] = uVar3;
    }
    if (*(char *)((long)param_1 + 0xf) == '\x01') {
      func_0x00010828bc3c();
      param_1[2] = uVar3;
      iVar4 = (int)param_3 + 0x30;
      func_0x000108407f28();
      param_1[6] = iVar4;
    }
  }
  return;
}



/* Entry: 10828bad0; end: 10828bae7;  */

/* WARNING: Removing unreachable block (ram,0x000108297c18) */

long FUN_10828bad0(long param_1,long param_2,uint param_3,undefined8 *param_4,undefined8 param_5,
                  long param_6)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  lVar2 = param_4[4];
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_4[3] + 0x20))) {
    lVar3 = *(long *)(*(long *)(param_4[3] + 0x18) + (ulong)param_3 * 8);
    if (lVar3 == 0) {
      lVar3 = lVar2;
      func_0x0001083a3dfc(param_1);
      if (lVar3 != 0) {
        _strlen(lVar2);
      }
      FUN_1083a322c(&stack0xffffffffffffffd8,lVar2);
      func_0x0001083a3cec();
      return unaff_x19;
    }
    if ((int)param_3 < *(int *)(param_2 + 0x18)) {
      func_0x000108298b5c();
      if ((*(byte *)(lVar3 + 0x30) >> 5 & 1) != 0) {
        func_0x000108298c5c(param_4[3]);
        func_0x000108298a30();
      }
      func_0x000108298c28(*param_4);
      FUN_1082db500();
      if ((int)param_2 != 0) {
        if (param_6 == 0) {
          func_0x000108298a30();
        }
        else {
          FUN_1083a3a90(param_1,&UNK_10f482cdf);
          param_2 = param_1;
        }
      }
      func_0x000108298b3c();
      return param_2;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108297d08);
  (*pcVar1)();
}



/* Entry: 10828bae8; end: 10828bb1b;  */

void FUN_10828bae8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010828bb68();
  FUN_1083a3ab4(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 10828bb1c; end: 10828bb8b;  */

void FUN_10828bb1c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010828bb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



/* Entry: 10828bb8c; end: 10828bc2f;  */

void FUN_10828bb8c(undefined4 *param_1,long *param_2,long param_3)

{
  if (*(char *)((long)param_1 + 0xd) == '\x01') {
    (**(code **)(*param_2 + 0x28))(param_2,*param_1,7,param_3 + 0x14);
  }
  if (*(char *)((long)param_1 + 0xe) == '\x01') {
    (**(code **)(*param_2 + 0x98))(param_2,param_1[1],param_3 + 0x4c);
  }
  if (*(char *)((long)param_1 + 0xf) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010828bc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,param_1[2],7,param_3 + 0x30);
    return;
  }
  return;
}



/* Entry: 10828bc30; end: 10828bcc3;  */

void FUN_10828bc30(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010828bc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10828bcc4; end: 10828bd7f;  */

undefined8 * FUN_10828bcc4(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_110a35100;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  _memcpy(param_1 + 2,param_3,0xa0);
  do {
    iVar3 = iRam0000000113254d20;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113254d20,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113254d20 = iRam0000000113254d20 + 1;
    }
  } while ((cVar1 != '\0') || (iVar3 == 0));
  *(int *)(param_1 + 0x16) = iVar3;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}



/* Entry: 10828bd80; end: 10828bd83;  */

undefined8 * FUN_10828bd80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35100;
  FUN_10828c550(param_1 + 0x1a);
  FUN_10828c4f8(param_1 + 0x19);
  FUN_10828c240(param_1 + 0x18);
  FUN_10826b6c8(param_1 + 0x17);
  return param_1;
}



/* Entry: 10828bd84; end: 10828bd97;  */

void FUN_10828bd84(void)

{
  func_0x00010828bd34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828bd98; end: 10828be2f;  */

void FUN_10828bd98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x00010828be10(param_1 + 0xb8);
  FUN_10828be30(&uStack_28,param_1 + 0xb0);
  uVar1 = uStack_28;
  uStack_28 = 0;
  FUN_10828c264(param_1 + 0xc0,uVar1);
  FUN_10828c240(&uStack_28);
  FUN_10828be70(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  FUN_10828c51c(param_1 + 200,uVar1);
  FUN_10828c4f8(&uStack_28);
  FUN_10828bea8(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 10828be30; end: 10828be6f;  */

void FUN_10828be30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_10831a370();
  *param_1 = uVar1;
  return;
}



/* Entry: 10828be70; end: 10828bea7;  */

void FUN_10828be70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a50;
  __Znwm();
  FUN_1082b45e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 10828bea8; end: 10828bec7;  */

void FUN_10828bea8(void)

{
  func_0x00010828c5d8();
  func_0x00010828c5ac();
  return;
}



/* Entry: 10828bec8; end: 10828beeb;  */

undefined4 FUN_10828bec8(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df13514 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10828bee4);
  (*pcVar1)();
}



/* Entry: 10828beec; end: 10828bfaf;  */

long * FUN_10828beec(long *param_1,long param_2,undefined1 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_148 [112];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [4];
  byte bStack_a4;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10828bec8(param_3);
  plVar5 = *(long **)(param_2 + 0xb8);
  FUN_10828a818(auStack_a8,plVar5,param_3,param_4);
  if ((bStack_a4 & 1) == 0) {
    *(undefined4 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  else {
    param_3 = auStack_a8;
    FUN_108283324(param_1,param_3);
    plVar5 = param_1;
  }
  func_0x00010828c638();
  if ((bool)in_ZR) {
    func_0x00010828c5bc();
  }
  func_0x00010828c624(uStack_38);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  func_0x00010828c638();
  if ((bool)in_ZR) {
    func_0x00010828c5bc();
  }
  func_0x00010828c5ec();
  pcStack_b8 = FUN_10828bfb0;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = plVar6[0x17];
  uStack_d0 = param_4;
  plStack_c8 = plVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10828bec8(param_3);
  FUN_10828a818(auStack_148,lVar7,param_3,1);
  plVar6 = (long *)plVar6[0x17];
  (**(code **)(*plVar6 + 0x30))(plVar6,auStack_148);
  plVar5 = plVar6;
  func_0x00010828c638();
  if ((bool)in_ZR) {
    func_0x00010828c5bc();
  }
  func_0x00010828c624(uStack_d8);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  func_0x00010828c638();
  if ((bool)in_ZR) {
    func_0x00010828c5bc();
  }
  func_0x00010828c5ec();
  pbVar1 = (byte *)(plVar6 + 0x1b);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    return plVar6;
  }
  func_0x00010831b89c(plVar6[0x18]);
  plVar6 = plVar5 + 3;
  FUN_10831b54c(plVar6);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[6] = 0;
  *(undefined1 *)plVar5 = 0;
  return plVar6;
}



/* Entry: 10828bfb0; end: 10828c057;  */

long * FUN_10828bfb0(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [112];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  FUN_10828bec8(param_2);
  FUN_10828a818(auStack_98,uVar7,param_2,1);
  plVar5 = *(long **)(param_1 + 0xb8);
  (**(code **)(*plVar5 + 0x30))(plVar5,auStack_98);
  plVar6 = plVar5;
  func_0x00010828c638();
  if ((bool)in_ZR) {
    func_0x00010828c5bc();
  }
  func_0x00010828c624(uStack_28);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = plVar6;
  func_0x00010828c638();
  if ((bool)in_ZR) {
    func_0x00010828c5bc();
  }
  func_0x00010828c5ec();
  pbVar1 = (byte *)(plVar5 + 0x1b);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    return plVar5;
  }
  func_0x00010831b89c(plVar5[0x18]);
  plVar5 = plVar6 + 3;
  FUN_10831b54c(plVar5);
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[6] = 0;
  *(undefined1 *)plVar6 = 0;
  return plVar5;
}



/* Entry: 10828c058; end: 10828c07b;  */

void FUN_10828c058(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *unaff_x19;
  
  pbVar1 = (byte *)(param_1 + 0xd8);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    return;
  }
  func_0x00010831b89c(*(undefined8 *)(param_1 + 0xc0));
  FUN_10831b54c(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *unaff_x19 = 0;
  return;
}



/* Entry: 10828c07c; end: 10828c0b7;  */

void FUN_10828c07c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe0;
  __Znwm();
  FUN_10828bcc4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10828c0b8; end: 10828c11b;  */

void FUN_10828c0b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  uStack_28 = *param_2;
  *param_2 = 0;
  uStack_30 = *param_3;
  *param_3 = 0;
  FUN_10828bd98(uVar1,&uStack_28,&uStack_30);
  FUN_10828c550(&uStack_30);
  FUN_10826b6c8(&uStack_28);
  return;
}


