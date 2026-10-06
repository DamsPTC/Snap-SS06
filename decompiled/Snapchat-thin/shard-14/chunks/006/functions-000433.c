/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b56adfc; end: 10b56adff;  */

undefined8 FUN_10b56adfc(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b56adc0(param_1);
  return param_1;
}



/* Entry: 10b56ae00; end: 10b56ae13;  */

void FUN_10b56ae00(void)

{
  FUN_10b56ad94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56ae14; end: 10b56ae1f;  */

undefined ** FUN_10b56ae14(void)

{
  return &PTR_DAT_110d0a1b0;
}



/* Entry: 10b56ae20; end: 10b56af03;  */

long * FUN_10b56ae20(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000107c39dd4();
  if ((int)param_1[5] == 1) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x000107c39de8();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x34);
    func_0x000107c39ddc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b874();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b56af04; end: 10b56af33;  */

void FUN_10b56af04(void)

{
  FUN_10b575eb8();
  func_0x000107c39dcc();
  return;
}



/* Entry: 10b56af34; end: 10b56af9f;  */

void FUN_10b56af34(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010b56b9c8();
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      func_0x00010b56b6e0();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b575f78();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 != 0) {
    if ((int)unaff_x21[5] == iVar2) {
      if (iVar2 == 1) {
        func_0x00010b56b9b0();
        FUN_10b57102c();
      }
    }
    else {
      if ((int)unaff_x21[5] != 0) {
        param_1 = unaff_x21;
        FUN_10b56ad44();
      }
      *(int *)(unaff_x21 + 5) = iVar2;
      if (iVar2 == 1) {
        func_0x00010b56b714();
        unaff_x21[4] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b7c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56afa0; end: 10b56afdf;  */

void FUN_10b56afa0(void)

{
  func_0x00010b56ba34();
  FUN_10b569564();
  return;
}



/* Entry: 10b56afe0; end: 10b56b007;  */

void FUN_10b56afe0(void)

{
  long extraout_x8;
  
  func_0x00010b56ba28();
  if (extraout_x8 != 0) {
    func_0x00010b56b920();
  }
  return;
}



/* Entry: 10b56b008; end: 10b56b033;  */

long FUN_10b56b008(long param_1)

{
  FUN_10b56b034(param_1 + 0x20);
  FUN_10b56afe0(param_1 + 8);
  return param_1;
}



/* Entry: 10b56b034; end: 10b56b05b;  */

void FUN_10b56b034(void)

{
  long extraout_x8;
  
  func_0x00010b56ba28();
  if (extraout_x8 != 0) {
    func_0x00010b56b920();
  }
  return;
}



/* Entry: 10b56b05c; end: 10b56b307;  */

void FUN_10b56b05c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b56b910();
  }
  else {
    func_0x00010b56b918();
  }
  *puVar1 = &PTR_FUN_110d099f8;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b56b308; end: 10b56b32f;  */

void FUN_10b56b308(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b56b330; end: 10b56b36b;  */

long FUN_10b56b330(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c39e0c();
  if (param_1 == 0) {
    __Znwm(0x48);
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x000107c39e10();
  func_0x00010b573030();
  func_0x000107c39ea4(&PTR_DAT_110d0a758);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  FUN_10b571a54(unaff_x19 + 0x18,unaff_x20,unaff_x21 + 0x18);
  lVar1 = unaff_x21 + 0x30;
  func_0x00010b573308();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = unaff_x21 + 0x38;
  func_0x00010b573308();
  *(long *)(unaff_x19 + 0x38) = lVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c305c4(unaff_x20,*(undefined8 *)(unaff_x21 + 0x40));
  }
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
  return unaff_x19;
}



/* Entry: 10b56b36c; end: 10b56b3d7;  */

undefined8 * FUN_10b56b36c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b56b910();
  }
  else {
    func_0x00010b56b918();
  }
  *puVar1 = &PTR_FUN_110d099f8;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  func_0x00010b569584();
  return puVar1;
}



/* Entry: 10b56b3d8; end: 10b56b40b;  */

long FUN_10b56b3d8(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar2;
  
  func_0x000107c39e0c();
  if (param_1 == 0) {
    func_0x00010b56b8e8();
  }
  else {
    func_0x00010b56b8f0();
  }
  func_0x000107c39e10();
  func_0x000107c39e64();
  func_0x000107c39ea4(&PTR_FUN_110d0a7a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c305c4();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  return unaff_x19;
}



/* Entry: 10b56b40c; end: 10b56b4a7;  */

undefined8 * FUN_10b56b40c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000107c39e2c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b56b8e8();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010b56b8f0();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110d09b38;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b7f4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar3 = *(int *)(unaff_x20 + 0x28);
  *(int *)(param_1 + 5) = iVar3;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x19;
    func_0x00010b56b6e0();
    iVar3 = *(int *)(param_1 + 5);
  }
  param_1[3] = puVar2;
  if (iVar3 == 1) {
    func_0x00010b56b714();
    param_1[4] = unaff_x19;
  }
  return param_1;
}



/* Entry: 10b56b4a8; end: 10b56b50f;  */

long FUN_10b56b4a8(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c39e0c();
  if (param_1 == 0) {
    func_0x00010b56b8f8();
  }
  else {
    func_0x00010b56b900();
  }
  func_0x000107c39e10();
  func_0x00010b573030();
  func_0x000107c39ea4(&PTR_FUN_110d0ae38);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  FUN_10b571a9c(unaff_x19 + 0x10,unaff_x20,unaff_x21 + 0x10);
  lVar1 = unaff_x21 + 0x28;
  func_0x00010b573308();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return unaff_x19;
}



/* Entry: 10b56b510; end: 10b56b647;  */

undefined8 * FUN_10b56b510(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000107c39e2c();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    func_0x00010b56ba08();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110d09d68;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b7f4();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x0001053ab414(param_1 + 3);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_10b56b4a8();
  }
  param_1[6] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_10b56b40c();
  }
  param_1[7] = unaff_x19;
  return param_1;
}



/* Entry: 10b56b648; end: 10b56b6af;  */

undefined8 * FUN_10b56b648(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b56b910();
  }
  else {
    func_0x00010b56b918();
  }
  *puVar1 = &PTR_FUN_110d09a48;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_10b569b40();
  return puVar1;
}



/* Entry: 10b56b6b0; end: 10b56b747;  */

undefined8 * FUN_10b56b6b0(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c39e0c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c39e14();
  }
  else {
    func_0x00010b56b9fc();
  }
  func_0x000107c39e10();
  *param_1 = &PTR_DAT_110d0a578;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b56f7dc();
  return param_1;
}



/* Entry: 10b56b748; end: 10b56ba47;  */

void FUN_10b56b748(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b56ba48; end: 10b56bc1f;  */

void FUN_10b56ba48(void)

{
  undefined4 extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  long unaff_x19;
  
  func_0x00010b57315c();
  switch(extraout_w8) {
  case 1:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56c984();
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56d784();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56ce2c();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56cb80();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56cc34();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56c7e8();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56c734();
    }
    break;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56da30();
    }
    break;
  default:
    goto LAB_10b56bb9c;
  case 0x10:
  case 0x11:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c305cc();
    }
    break;
  case 0x12:
  case 0x13:
  case 0x14:
    func_0x00010b57329c();
    goto LAB_10b56bb9c;
  case 0x15:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b56bb9c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56cce8();
    }
  }
  __ZdlPv();
LAB_10b56bb9c:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56bc20; end: 10b56bc53;  */

long FUN_10b56bc20(long param_1)

{
  func_0x000107c39e78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b56ba48(param_1);
  }
  return param_1;
}



/* Entry: 10b56bc54; end: 10b56bc57;  */

long FUN_10b56bc54(long param_1)

{
  func_0x000107c39e78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b56ba48(param_1);
  }
  return param_1;
}



/* Entry: 10b56bc58; end: 10b56bc6b;  */

void FUN_10b56bc58(void)

{
  FUN_10b56bc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56bc6c; end: 10b56bc9f;  */

long FUN_10b56bc6c(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b56d784();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b56d784();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b56bca0; end: 10b56bccf;  */

void FUN_10b56bca0(long param_1)

{
  ulong *puVar1;
  
  FUN_10b56ba48();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b56bcd0; end: 10b56beb3;  */

long * FUN_10b56bcd0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  int iVar3;
  
  func_0x000107c39e6c();
  switch(*(undefined4 *)((long)param_1 + 0x1c)) {
  case 1:
    func_0x00010b5732c0();
    param_1 = (long *)0x1;
    break;
  case 2:
    func_0x00010b5732c0();
    param_1 = (long *)0x2;
    break;
  case 3:
    func_0x00010b5732c0();
    param_1 = (long *)0x3;
    break;
  case 4:
    func_0x00010b5732c0();
    param_1 = (long *)0x4;
    break;
  case 5:
    func_0x00010b5732c0();
    param_1 = (long *)0x5;
    break;
  case 6:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    param_1 = (long *)0x6;
    break;
  case 7:
    func_0x00010b573580();
    param_1 = (long *)0x7;
    break;
  case 8:
    func_0x00010b573580();
    param_1 = (long *)0x8;
    break;
  case 9:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x2c);
    param_1 = (long *)0x9;
    break;
  case 10:
    func_0x00010b573580();
    param_1 = (long *)0xa;
    break;
  case 0xb:
    func_0x00010b57336c();
    param_1 = (long *)0xb;
    break;
  case 0xc:
    func_0x00010b57336c();
    param_1 = (long *)0xc;
    break;
  default:
    goto LAB_10b56be00;
  case 0xe:
    func_0x00010b57336c();
    param_1 = (long *)0xe;
    break;
  case 0xf:
    func_0x00010b57336c();
    param_1 = (long *)0xf;
    break;
  case 0x10:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x20);
    param_1 = (long *)0x10;
    break;
  case 0x11:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x20);
    param_1 = (long *)0x11;
    break;
  case 0x12:
    func_0x000107c39e90(*(undefined8 *)(unaff_x20 + 0x10));
    param_4 = (long *)&UNK_10f77b617;
    func_0x000107c39e84();
    goto code_r0x00010b56be8c;
  case 0x13:
    func_0x000107c39e90(*(undefined8 *)(unaff_x20 + 0x10));
    param_4 = (long *)&UNK_10f77b64a;
    func_0x000107c39e84();
    goto code_r0x00010b56be8c;
  case 0x14:
    func_0x000107c39e90(*(undefined8 *)(unaff_x20 + 0x10));
    param_4 = (long *)&UNK_10f77b680;
    func_0x000107c39e84();
code_r0x00010b56be8c:
    func_0x000107c39e68();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
    goto LAB_10b56be00;
  case 0x15:
    func_0x00010b573580();
    param_1 = (long *)0x15;
  }
  func_0x00010b572f74();
  unaff_x21 = param_1;
LAB_10b56be00:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5732d8();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar2 = (int)param_3;
    param_3 = (ulong)(uint)(iVar2 - iVar3);
    if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar3);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar2);
}



/* Entry: 10b56beb4; end: 10b56bfaf;  */

void FUN_10b56beb4(long param_1)

{
  int iVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  iVar1 = 0;
  iVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b56cb00();
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b569484();
    goto code_r0x00010b56bf04;
  case 6:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b56cf28();
    break;
  case 7:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b56cc04();
    break;
  case 8:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b56ccb8();
    break;
  case 9:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10b56c908();
    break;
  case 10:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b56c7b8();
    break;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10b56bfb0();
code_r0x00010b56bf04:
    iVar2 = iVar2 + 1;
  default:
    goto LAB_10b56bf88;
  case 0x10:
  case 0x11:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000107c30598();
    goto code_r0x00010b56bf1c;
  case 0x12:
  case 0x13:
  case 0x14:
    func_0x00010b5730a4();
code_r0x00010b56bf1c:
    iVar2 = iVar1 + 2;
    goto LAB_10b56bf88;
  case 0x15:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b56cd6c();
    func_0x00010b572d34();
    iVar2 = iVar2 + extraout_w8 + 2;
    goto LAB_10b56bf88;
  }
  func_0x00010b572d34();
  func_0x00010b57345c();
LAB_10b56bf88:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}



/* Entry: 10b56bfb0; end: 10b56bfcb;  */

long FUN_10b56bfb0(long param_1)

{
  long extraout_x8;
  
  FUN_10b56db14();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b56bfcc; end: 10b56c5cf;  */

void FUN_10b56bfcc(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b56c304;
  func_0x00010b57331c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_10b56ba48();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  bVar2 = iVar1 + -1 == 0x14;
  switch(iVar1 + -1) {
  case 0:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573534();
      func_0x00010b56c320();
      goto LAB_10b56c304;
    }
    func_0x00010b573058();
    func_0x00010b572268();
    break;
  case 1:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573450();
code_r0x00010b56c218:
      func_0x00010b56c3ac();
      goto LAB_10b56c304;
    }
    goto code_r0x00010b56c224;
  case 2:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573450();
      goto code_r0x00010b56c218;
    }
    goto code_r0x00010b56c224;
  case 3:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573450();
      goto code_r0x00010b56c218;
    }
    goto code_r0x00010b56c224;
  case 4:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573450();
      goto code_r0x00010b56c218;
    }
code_r0x00010b56c224:
    func_0x00010b573058();
    FUN_10b56b330();
    break;
  case 5:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b56c46c();
      goto LAB_10b56c304;
    }
    func_0x00010b573058();
    func_0x00010b5722f0();
    break;
  case 6:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573510();
      func_0x00010b56c5d0();
      goto LAB_10b56c304;
    }
    func_0x00010b573058();
    FUN_10b572388();
    break;
  case 7:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573510();
      func_0x00010b56c5e0();
      goto LAB_10b56c304;
    }
    func_0x00010b573058();
    FUN_10b5723d8();
    break;
  case 8:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      FUN_10b56c600();
      goto LAB_10b56c304;
    }
    func_0x00010b573058();
    FUN_10b572478();
    break;
  case 9:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573510();
      FUN_10b56c63c();
      goto LAB_10b56c304;
    }
    func_0x00010b573058();
    FUN_10b5724e0();
    break;
  case 10:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b57351c();
code_r0x00010b56c128:
      FUN_10b56c64c();
      goto LAB_10b56c304;
    }
    goto code_r0x00010b56c134;
  case 0xb:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b57351c();
      goto code_r0x00010b56c128;
    }
    goto code_r0x00010b56c134;
  default:
    goto LAB_10b56c304;
  case 0xd:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b57351c();
      goto code_r0x00010b56c128;
    }
    goto code_r0x00010b56c134;
  case 0xe:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b57351c();
      goto code_r0x00010b56c128;
    }
code_r0x00010b56c134:
    func_0x00010b573058();
    FUN_10b572530();
    break;
  case 0xf:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
code_r0x00010b56c1d4:
      FUN_10b56c67c();
      goto LAB_10b56c304;
    }
    goto code_r0x00010b56c1e0;
  case 0x10:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      goto code_r0x00010b56c1d4;
    }
code_r0x00010b56c1e0:
    func_0x00010b573058();
    func_0x000107c305c4();
    break;
  case 0x11:
    if (unaff_w24 != iVar1) {
      func_0x00010b573420();
    }
    func_0x00010b57313c();
    goto code_r0x00010b56c2a8;
  case 0x12:
    if (unaff_w24 != iVar1) {
      func_0x00010b573420();
    }
    func_0x00010b57313c();
    goto code_r0x00010b56c2a8;
  case 0x13:
    func_0x00010b572fd4();
    if (!bVar2) {
      unaff_x21[2] = extraout_x8;
    }
    func_0x00010b5731f4();
code_r0x00010b56c2a8:
    func_0x00010b573120();
    goto LAB_10b56c304;
  case 0x14:
    if (unaff_w24 == iVar1) {
      func_0x00010b572e28();
      func_0x00010b573510();
      func_0x00010b56c5f0();
      goto LAB_10b56c304;
    }
    func_0x00010b573058();
    FUN_10b572428();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b56c304:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b572e9c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b56c5d0; end: 10b56c5ff;  */

void FUN_10b56c5d0(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56c600; end: 10b56c63b;  */

void FUN_10b56c600(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b569564();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56c63c; end: 10b56c64b;  */

void FUN_10b56c63c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56c64c; end: 10b56c67b;  */

void FUN_10b56c64c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b56d9ec();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56c67c; end: 10b56c733;  */

void FUN_10b56c67c(ulong *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b572e6c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010b5735a0();
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b573238();
    }
    func_0x00010b5734e8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) != iVar1) {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        func_0x000107c305d0();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (iVar1 == 3) {
      unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
    }
    else {
      bVar2 = iVar1 == 2;
      if (bVar2) {
        func_0x00010b572fd4();
        if (!bVar2) {
          unaff_x21[3] = extraout_x8_00;
        }
        func_0x00010b57317c();
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56c734; end: 10b56c757;  */

undefined8 FUN_10b56c734(undefined8 param_1)

{
  func_0x000107c39e78();
  return param_1;
}



/* Entry: 10b56c758; end: 10b56c76b;  */

void FUN_10b56c758(void)

{
  FUN_10b56c734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56c76c; end: 10b56c7e7;  */

undefined ** FUN_10b56c76c(void)

{
  return &PTR_DAT_110d0aec0;
}



/* Entry: 10b56c7e8; end: 10b56c813;  */

long FUN_10b56c7e8(long param_1)

{
  func_0x000107c39e78();
  FUN_10b56afe0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56c814; end: 10b56c827;  */

void FUN_10b56c814(void)

{
  FUN_10b56c7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56c828; end: 10b56c833;  */

undefined ** FUN_10b56c828(void)

{
  return &PTR_DAT_110d0af20;
}



/* Entry: 10b56c834; end: 10b56c867;  */

void FUN_10b56c834(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  FUN_10b56b308();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b56c868; end: 10b56c907;  */

long * FUN_10b56c868(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b572eac();
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b572ee4();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    func_0x00010b5732ec();
    func_0x000107c280b8();
    param_2 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b572d94();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x00010b572ffc(3);
    func_0x00010b573354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b56c908; end: 10b56c97f;  */

long FUN_10b56c908(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10b572d10();
  while (unaff_x22 != 0) {
    FUN_10b56946c(*unaff_x21);
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    unaff_x20 = unaff_x20 +
                (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b56c980; end: 10b56c983;  */

void FUN_10b56c980(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b569564();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56c984; end: 10b56c9c7;  */

long FUN_10b56c984(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b56d784();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b56d784();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b56c9c8; end: 10b56c9db;  */

void FUN_10b56c9c8(void)

{
  FUN_10b56c984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56c9dc; end: 10b56c9e7;  */

undefined ** FUN_10b56c9dc(void)

{
  return &PTR_DAT_110d0af70;
}



/* Entry: 10b56c9e8; end: 10b56ca87;  */

void FUN_10b56c9e8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b56ca38(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b56ca38(param_1[4]);
    }
  }
  func_0x00010b573474();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b56ca88; end: 10b56cb7b;  */

long * FUN_10b56ca88(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b572eac();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x00010b572ed8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x2;
    func_0x00010b572ffc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b56cb7c; end: 10b56cb7f;  */

void FUN_10b56cb7c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b573224();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b56c3ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b573224();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b56c3ac();
      }
    }
  }
  func_0x00010b572fc0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b572e9c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b56cb80; end: 10b56cba3;  */

undefined8 FUN_10b56cb80(undefined8 param_1)

{
  func_0x000107c39e78();
  return param_1;
}



/* Entry: 10b56cba4; end: 10b56cbb7;  */

void FUN_10b56cba4(void)

{
  FUN_10b56cb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56cbb8; end: 10b56cc33;  */

undefined ** FUN_10b56cbb8(void)

{
  return &PTR_DAT_110d0afc0;
}



/* Entry: 10b56cc34; end: 10b56cc57;  */

undefined8 FUN_10b56cc34(undefined8 param_1)

{
  func_0x000107c39e78();
  return param_1;
}



/* Entry: 10b56cc58; end: 10b56cc6b;  */

void FUN_10b56cc58(void)

{
  FUN_10b56cc34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56cc6c; end: 10b56cce7;  */

undefined ** FUN_10b56cc6c(void)

{
  return &PTR_DAT_110d0b008;
}



/* Entry: 10b56cce8; end: 10b56cd0b;  */

undefined8 FUN_10b56cce8(undefined8 param_1)

{
  func_0x000107c39e78();
  return param_1;
}



/* Entry: 10b56cd0c; end: 10b56cd1f;  */

void FUN_10b56cd0c(void)

{
  FUN_10b56cce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56cd20; end: 10b56cd9b;  */

undefined ** FUN_10b56cd20(void)

{
  return &PTR_DAT_110d0b058;
}



/* Entry: 10b56cd9c; end: 10b56ce2b;  */

void FUN_10b56cd9c(void)

{
  undefined4 extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b57315c();
  switch(extraout_w8) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b56cdec;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56fef4();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b56cdec;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b57011c();
    }
    break;
  default:
    goto LAB_10b56cdec;
  }
  __ZdlPv();
LAB_10b56cdec:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56ce2c; end: 10b56ce5f;  */

long FUN_10b56ce2c(long param_1)

{
  func_0x000107c39e78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b56cd9c(param_1);
  }
  return param_1;
}



/* Entry: 10b56ce60; end: 10b56ce73;  */

void FUN_10b56ce60(void)

{
  FUN_10b56ce2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56ce74; end: 10b56ce87;  */

long FUN_10b56ce74(long param_1)

{
  func_0x000107c39e78();
  func_0x000107c39eb0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b56f144();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b56ce88; end: 10b56cfab;  */

void FUN_10b56ce88(long param_1)

{
  ulong *puVar1;
  
  FUN_10b56cd9c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b56cfac; end: 10b56cfc7;  */

long FUN_10b56cfac(long param_1)

{
  long extraout_x8;
  
  FUN_10b570024();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b56cfc8; end: 10b56cfcb;  */

void FUN_10b56cfc8(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b56c5a8;
  func_0x00010b57331c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_10b56cd9c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (unaff_w24 != iVar1) {
code_r0x00010b56c59c:
      func_0x00010b573058();
      func_0x00010b572580();
      goto code_r0x00010b56c5a4;
    }
    func_0x00010b572dd4();
    break;
  case 2:
    if (unaff_w24 != iVar1) goto code_r0x00010b56c59c;
    func_0x00010b572dd4();
    break;
  case 3:
    if (unaff_w24 != iVar1) goto code_r0x00010b56c59c;
    func_0x00010b572dd4();
    break;
  case 4:
    if (unaff_w24 != iVar1) goto code_r0x00010b56c59c;
    func_0x00010b572dd4();
    break;
  case 5:
    if (unaff_w24 != iVar1) goto code_r0x00010b56c59c;
    func_0x00010b572dd4();
    break;
  case 6:
    if (unaff_w24 != iVar1) goto code_r0x00010b56c59c;
    func_0x00010b572dd4();
    break;
  case 7:
    if (unaff_w24 != iVar1) goto code_r0x00010b56c59c;
    func_0x00010b572dd4();
    break;
  case 8:
    if (unaff_w24 == iVar1) {
      func_0x00010b572ef0();
      func_0x00010b56d060();
      goto LAB_10b56c5a8;
    }
    func_0x00010b573058();
    func_0x00010b572600();
code_r0x00010b56c5a4:
    unaff_x21[2] = (ulong)param_1;
    goto LAB_10b56c5a8;
  case 9:
    if (unaff_w24 != iVar1) goto code_r0x00010b56c59c;
    func_0x00010b572dd4();
    break;
  default:
    goto LAB_10b56c5a8;
  }
  FUN_10b56cfcc();
LAB_10b56c5a8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56cfcc; end: 10b56d16f;  */

void FUN_10b56cfcc(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b572e6c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5735a0();
    puVar1 = unaff_x22;
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b573238();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_10b572be4();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b56f554();
    }
  }
  func_0x00010b572fc0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b572e9c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56d170; end: 10b56d183;  */

void FUN_10b56d170(void)

{
  func_0x000107c305cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56d184; end: 10b56d18f;  */

undefined ** FUN_10b56d184(void)

{
  return &PTR_DAT_110d0b0f8;
}



/* Entry: 10b56d190; end: 10b56d1c7;  */

void FUN_10b56d190(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x000107c3025c();
  func_0x000107c305d0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b56d1c8; end: 10b56d1df;  */

void FUN_10b56d1c8(ulong *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b572e6c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010b5735a0();
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b573238();
    }
    func_0x00010b5734e8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) != iVar1) {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        func_0x000107c305d0();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (iVar1 == 3) {
      unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
    }
    else {
      bVar2 = iVar1 == 2;
      if (bVar2) {
        func_0x00010b572fd4();
        if (!bVar2) {
          unaff_x21[3] = extraout_x8_00;
        }
        func_0x00010b57317c();
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56d1e0; end: 10b56d287;  */

void FUN_10b56d1e0(int param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int extraout_w8;
  uint extraout_w9;
  
  uVar2 = param_5;
  func_0x000107c28094(param_5,param_4);
  uVar3 = (ulong)(param_1 << 3 | 2);
  func_0x000107c280a8(uVar3,uVar2);
  uVar2 = param_2;
  func_0x000107c282a0(param_2);
  iVar1 = (int)uVar2;
  func_0x00010b57354c((int)param_3[3]);
  uVar4 = (ulong)(iVar1 + extraout_w8 + (extraout_w9 >> 6) + 2);
  func_0x000107c280a8(uVar4,uVar3);
  uVar5 = 1;
  func_0x0001059928f0(1,param_2,uVar4,param_5);
  uVar2 = param_5;
  func_0x000107c28094(param_5,uVar5);
  uVar3 = (ulong)*(uint *)(param_3 + 3);
  uVar5 = param_5;
  func_0x0001001a597c(param_5,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,uVar5);
  func_0x0001001a59d0(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x38))(param_3,uVar3,param_5);
  return;
}



/* Entry: 10b56d288; end: 10b56d2eb;  */

long FUN_10b56d288(int param_1,long param_2)

{
  long extraout_x8;
  ulong extraout_x9;
  
  func_0x000107c282a0();
  FUN_10b572744(param_2);
  func_0x00010b57354c(param_2 + (param_1 + 2));
  return extraout_x8 + (extraout_x9 >> 6 & 0x3ffffff);
}



/* Entry: 10b56d2ec; end: 10b56d31f;  */

void FUN_10b56d2ec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b56d320; end: 10b56d36b;  */

void FUN_10b56d320(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107c39e64();
  func_0x000107c39ea4(&PTR_FUN_110d0ac58);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  func_0x00010b573268();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5734d0();
  }
  func_0x00010b5733d0();
  return;
}



/* Entry: 10b56d36c; end: 10b56d397;  */

undefined8 FUN_10b56d36c(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56d398(param_1);
  return param_1;
}



/* Entry: 10b56d398; end: 10b56d3c7;  */

long FUN_10b56d398(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b56d784();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x000107c30320(param_1 + 0x18,0x500400020,0);
  }
  return param_1 + 0x18;
}



/* Entry: 10b56d3c8; end: 10b56d3cb;  */

undefined8 FUN_10b56d3c8(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56d398(param_1);
  return param_1;
}



/* Entry: 10b56d3cc; end: 10b56d3df;  */

void FUN_10b56d3cc(void)

{
  FUN_10b56d36c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56d3e0; end: 10b56d3eb;  */

undefined ** FUN_10b56d3e0(void)

{
  return &PTR_DAT_110d0b140;
}



/* Entry: 10b56d3ec; end: 10b56d42b;  */

void FUN_10b56d3ec(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b5735e4();
  FUN_10b572208();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x00010b56ca38(unaff_x19[7]);
  }
  func_0x00010b57358c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b56d42c; end: 10b56d593;  */

long FUN_10b56d42c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  long lStack_68;
  
  func_0x000107c39e6c();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_1 = 1;
    func_0x00010b572f74(1);
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    if ((*(int *)(unaff_x20 + 0x18) == 1) || ((*(byte *)(unaff_x19 + 0x3a) & 1) == 0)) {
      func_0x00010b5731cc();
      lVar2 = param_1;
      while (param_1 = lVar2, lStack_68 != 0) {
        func_0x00010b572f40();
        lVar2 = param_1;
        func_0x00010b572ebc();
        func_0x00010b57319c();
        unaff_x21 = param_1;
      }
    }
    else {
      func_0x00010b57322c();
      lVar1 = param_1;
      for (lVar2 = lStack_68 << 3; param_1 = lVar1, lVar2 != 0; lVar2 = lVar2 + -8) {
        func_0x00010b572f40();
        lVar1 = param_1;
        func_0x00010b572ebc();
        unaff_x21 = param_1;
      }
      func_0x00010b57321c();
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b572e44();
    func_0x00010b5730c0();
    func_0x00010b572e7c();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b572e44();
    func_0x00010b5730b0();
    func_0x00010b572e7c();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b572e44();
    func_0x00010b5733b0();
    func_0x00010b572e7c();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
    func_0x00010b5732d8();
    func_0x0001053930c4();
    unaff_x21 = param_1;
  }
  return unaff_x21;
}



/* Entry: 10b56d594; end: 10b56d633;  */

void FUN_10b56d594(long param_1)

{
  long lStack_38;
  
  func_0x00010b5731cc();
  while (lStack_38 != 0) {
    func_0x00010b573204();
    func_0x00010b57319c();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b569484(*(undefined8 *)(param_1 + 0x38));
    func_0x000107c39e94();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010b572f00(0xfffffff7);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010b572f00();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010b573044();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b573310();
  return;
}



/* Entry: 10b56d634; end: 10b56d637;  */

void FUN_10b56d634(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  func_0x00010b5734c4();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x38);
    if (param_1 == (ulong *)0x0) {
      func_0x00010b573224();
      *(ulong **)(unaff_x21 + 0x38) = param_1;
    }
    else {
      func_0x00010b56c3ac();
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  func_0x00010b572fc0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e9c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56d638; end: 10b56d6bf;  */

void FUN_10b56d638(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  func_0x00010b5734c4();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x38);
    if (param_1 == (ulong *)0x0) {
      func_0x00010b573224();
      *(ulong **)(unaff_x21 + 0x38) = param_1;
    }
    else {
      func_0x00010b56c3ac();
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  func_0x00010b572fc0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e9c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56d6c0; end: 10b56d6ef;  */

void FUN_10b56d6c0(ulong *param_1,ulong *param_2)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5731dc();
  FUN_10b56d3ec();
  func_0x00010b573540();
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  func_0x00010b5734c4();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x38);
    if (param_1 == (ulong *)0x0) {
      func_0x00010b573224();
      *(ulong **)(unaff_x21 + 0x38) = param_1;
    }
    else {
      func_0x00010b56c3ac();
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  func_0x00010b572fc0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e9c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56d6f0; end: 10b56d783;  */

void FUN_10b56d6f0(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b573030();
  func_0x000107c39ea4(&PTR_DAT_110d0a758);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  FUN_10b571a54(unaff_x19 + 0x18);
  lVar1 = unaff_x21 + 0x30;
  func_0x00010b573308();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = unaff_x21 + 0x38;
  func_0x00010b573308();
  *(long *)(unaff_x19 + 0x38) = lVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c305c4();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
  return;
}



/* Entry: 10b56d784; end: 10b56d7af;  */

undefined8 FUN_10b56d784(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56d7b0(param_1);
  return param_1;
}



/* Entry: 10b56d7b0; end: 10b56d7ef;  */

undefined8 FUN_10b56d7b0(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c305cc();
  }
  __ZdlPv();
  func_0x00010b573414(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return unaff_x19;
}



/* Entry: 10b56d7f0; end: 10b56d803;  */

void FUN_10b56d7f0(void)

{
  FUN_10b56d784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56d804; end: 10b56d80f;  */

undefined ** FUN_10b56d804(void)

{
  return &PTR_DAT_110d0b180;
}



/* Entry: 10b56d810; end: 10b56d927;  */

long * FUN_10b56d810(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  func_0x00010b572fb0();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x40);
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    param_1 = (long *)0x1;
    func_0x00010b572f8c();
    unaff_x20 = param_1;
  }
  iVar3 = *(int *)(unaff_x21 + 0x20);
  for (puVar4 = (undefined8 *)0x0; iVar3 != (int)puVar4;
      puVar4 = (undefined8 *)(ulong)((int)puVar4 + 1)) {
    func_0x00010b572e50();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    param_1 = (long *)0x3;
    func_0x00010b572f8c();
    unaff_x20 = param_1;
  }
  func_0x000107c39e90(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    param_2 = 0;
    if (puVar4[1] != 0) {
      puVar2 = (undefined8 *)*puVar4;
      goto LAB_10b56d898;
    }
  }
  else {
    puVar2 = puVar4;
    if ((int)param_2 != 0) {
LAB_10b56d898:
      param_4 = (long *)&UNK_10f77b72b;
      func_0x000107c39e84(puVar2);
      param_2 = 4;
      param_1 = unaff_x19;
      func_0x00010b572f18();
      unaff_x20 = param_1;
    }
  }
  func_0x000107c39e90(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    if (puVar4[1] == 0) goto LAB_10b56d8f4;
    puVar4 = (undefined8 *)*puVar4;
  }
  else if ((int)param_2 == 0) goto LAB_10b56d8f4;
  param_4 = (long *)&UNK_10f77b759;
  func_0x000107c39e84(puVar4);
  func_0x00010b572f18();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b56d8f4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5732cc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b56d928; end: 10b56d9cf;  */

void FUN_10b56d928(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010b572d6c();
  while (unaff_x22 != 0) {
    lVar1 = *unaff_x21;
    FUN_10b56d9d0();
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b573210(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x000107c39e94();
  }
  func_0x00010b573210(*(undefined8 *)(param_1 + 0x38));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x000107c39e94();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c30598(*(undefined8 *)(param_1 + 0x40));
    func_0x000107c39e94();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b573310();
  return;
}



/* Entry: 10b56d9d0; end: 10b56d9eb;  */

long FUN_10b56d9d0(long param_1)

{
  long extraout_x8;
  
  FUN_10b56ed90();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b56d9ec; end: 10b56d9ff;  */

void FUN_10b56d9ec(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b572db0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_10b56d9ec();
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x40);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107c305c4();
      *(ulong **)(unaff_x21 + 0x40) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b56c67c();
    }
  }
  func_0x00010b572fc0();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010b572e9c();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56da00; end: 10b56da2f;  */

void FUN_10b56da00(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5731dc();
  func_0x00010b56ca38();
  func_0x00010b573540();
  func_0x00010b572db0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_10b56d9ec();
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x40);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107c305c4();
      *(ulong **)(unaff_x21 + 0x40) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b56c67c();
    }
  }
  func_0x00010b572fc0();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010b572e9c();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56da30; end: 10b56da5b;  */

long FUN_10b56da30(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571a74(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56da5c; end: 10b56da6f;  */

void FUN_10b56da5c(void)

{
  FUN_10b56da30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


