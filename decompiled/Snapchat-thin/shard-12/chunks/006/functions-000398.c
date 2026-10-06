/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109311974; end: 109311a57;  */

void FUN_109311974(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  plVar4 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    if ((int)param_3 < 2) goto LAB_1093119c8;
  }
  else {
    plVar4 = (long *)plVar4[-1];
    if ((int)param_3 < 2) {
LAB_1093119c8:
      uVar5 = 2;
      goto LAB_1093119e0;
    }
    if (0x3ffffffb < iVar2) {
      uVar5 = 0x7fffffff;
      goto LAB_1093119e0;
    }
  }
  uVar1 = iVar2 * 2 + 2;
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  uVar5 = (ulong)uVar1;
LAB_1093119e0:
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)(uVar5 * 4 + 8);
    __Znwm();
  }
  else {
    plVar3 = plVar4;
    func_0x00010b4d810c(plVar4,uVar5 * 4 + 0xf & 0x3fffffff8);
  }
  *plVar3 = (long)plVar4;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar3 + 1,*(undefined8 *)(param_1 + 8),(ulong)param_2 << 2);
    }
    FUN_109311a58(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar5;
  *(long **)(param_1 + 8) = plVar3 + 1;
  return;
}



/* Entry: 109311a58; end: 109311aaf;  */

void FUN_109311a58(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *extraout_x9;
  
  plVar5 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
  (*(code *)PTR___tlv_bootstrap_11340dac8)((long)*(int *)(param_1 + 4));
  if (ppuVar3[1] == (undefined *)*extraout_x9) {
    puVar4 = ppuVar3[2];
    uVar1 = extraout_x8 * 4 + 8;
    uVar6 = 0x3b - LZCOUNT(uVar1);
    bVar2 = puVar4[0x50];
    if (uVar6 < bVar2) {
      lVar7 = *(long *)(puVar4 + 0x58);
      *plVar5 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar5;
    }
    else {
      if (bVar2 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar5,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
        lVar7 = (ulong)(byte)puVar4[0x50] << 3;
      }
      uVar6 = uVar1 >> 3;
      if (0 < (long)((uVar1 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar5 + lVar7);
      }
      *(long **)(puVar4 + 0x58) = plVar5;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar4[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 109311ab0; end: 109311b97;  */

int * FUN_109311ab0(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    func_0x000107c282d8(param_1,0,iVar1);
    *param_1 = iVar1;
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      puVar2 = *(undefined4 **)(param_1 + 2);
      puVar3 = *(undefined4 **)(param_3 + 2);
      do {
        *puVar2 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
    }
  }
  return param_1;
}



/* Entry: 109311b98; end: 109311b9b;  */

void FUN_109311b98(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar3 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 8) goto LAB_109311bf0;
  }
  else {
    plVar3 = (long *)plVar3[-1];
    if ((int)param_3 < 8) {
LAB_109311bf0:
      uVar4 = 8;
      goto LAB_109311c08;
    }
    if (0x3ffffffb < iVar1) {
      uVar4 = 0x7fffffff;
      goto LAB_109311c08;
    }
  }
  uVar4 = iVar1 * 2 + 8;
  if ((int)uVar4 <= (int)param_3) {
    uVar4 = param_3;
  }
LAB_109311c08:
  if (plVar3 == (long *)0x0) {
    plVar2 = (long *)((ulong)uVar4 + 8);
    __Znwm();
  }
  else {
    plVar2 = plVar3;
    func_0x00010b4d810c(plVar3,uVar4 + 0xf & 0xfffffff8);
  }
  *plVar2 = (long)plVar3;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < param_2) {
      _memcpy(plVar2 + 1,*(undefined8 *)(param_1 + 8),param_2);
    }
    FUN_109311c80(param_1);
  }
  *(uint *)(param_1 + 4) = uVar4;
  *(long **)(param_1 + 8) = plVar2 + 1;
  return;
}



/* Entry: 109311b9c; end: 109311c7f;  */

void FUN_109311b9c(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar3 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 8) goto LAB_109311bf0;
  }
  else {
    plVar3 = (long *)plVar3[-1];
    if ((int)param_3 < 8) {
LAB_109311bf0:
      uVar4 = 8;
      goto LAB_109311c08;
    }
    if (0x3ffffffb < iVar1) {
      uVar4 = 0x7fffffff;
      goto LAB_109311c08;
    }
  }
  uVar4 = iVar1 * 2 + 8;
  if ((int)uVar4 <= (int)param_3) {
    uVar4 = param_3;
  }
LAB_109311c08:
  if (plVar3 == (long *)0x0) {
    plVar2 = (long *)((ulong)uVar4 + 8);
    __Znwm();
  }
  else {
    plVar2 = plVar3;
    func_0x00010b4d810c(plVar3,uVar4 + 0xf & 0xfffffff8);
  }
  *plVar2 = (long)plVar3;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < param_2) {
      _memcpy(plVar2 + 1,*(undefined8 *)(param_1 + 8),param_2);
    }
    FUN_109311c80(param_1);
  }
  *(uint *)(param_1 + 4) = uVar4;
  *(long **)(param_1 + 8) = plVar2 + 1;
  return;
}



/* Entry: 109311c80; end: 109311cd3;  */

void FUN_109311c80(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *extraout_x9;
  
  plVar5 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
  (*(code *)PTR___tlv_bootstrap_11340dac8)((long)*(int *)(param_1 + 4));
  if (ppuVar3[1] == (undefined *)*extraout_x9) {
    puVar4 = ppuVar3[2];
    uVar1 = extraout_x8 + 8;
    uVar6 = 0x3b - LZCOUNT(uVar1);
    bVar2 = puVar4[0x50];
    if (uVar6 < bVar2) {
      lVar7 = *(long *)(puVar4 + 0x58);
      *plVar5 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar5;
    }
    else {
      if (bVar2 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar5,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
        lVar7 = (ulong)(byte)puVar4[0x50] << 3;
      }
      uVar6 = uVar1 >> 3;
      if (0 < (long)((uVar1 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar5 + lVar7);
      }
      *(long **)(puVar4 + 0x58) = plVar5;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar4[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 109311cd4; end: 109311d07;  */

long * FUN_109311cd4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311d08; end: 109311d5b;  */

undefined8 * FUN_109311d08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_109312e24(param_1,param_3);
  return param_1;
}



/* Entry: 109311d5c; end: 109311da3;  */

long FUN_109311d5c(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x500580020,0);
  }
  return param_1;
}



/* Entry: 109311da4; end: 109311dd7;  */

long * FUN_109311da4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311dd8; end: 109311e0b;  */

long * FUN_109311dd8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311e0c; end: 109311e3f;  */

long * FUN_109311e0c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311e40; end: 109311e73;  */

long * FUN_109311e40(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311e74; end: 109311ea7;  */

long * FUN_109311e74(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311ea8; end: 109311edb;  */

long * FUN_109311ea8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311edc; end: 109311f0f;  */

long * FUN_109311edc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311f10; end: 109311f43;  */

long * FUN_109311f10(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311f44; end: 109311f77;  */

long * FUN_109311f44(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109311f78; end: 1093125d3;  */

void FUN_109311f78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110aeb338;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  return;
}



/* Entry: 1093125d4; end: 10931267b;  */

undefined8 * FUN_1093125d4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeb4c8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  puVar3 = (ulong *)(param_2 + 0x18);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[3] = puVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 0x28);
  puVar1[4] = uVar4;
  return puVar1;
}



/* Entry: 10931267c; end: 1093126bf;  */

undefined8 * FUN_10931267c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aefb90;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  func_0x000109340c8c();
  return puVar1;
}



/* Entry: 1093126c0; end: 10931276f;  */

undefined8 * FUN_1093126c0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aeb6a8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x000109312590(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000109312590(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  return puVar2;
}



/* Entry: 109312770; end: 109312847;  */

undefined8 * FUN_109312770(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeb388;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  puVar3 = (ulong *)(param_2 + 0x28);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[5] = puVar2;
  puVar1[6] = *(undefined8 *)(param_2 + 0x30);
  return puVar1;
}



/* Entry: 109312848; end: 1093128cf;  */

undefined8 * FUN_109312848(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x110;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x110);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeed18;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  FUN_1093118fc(puVar1 + 5,param_1,param_2 + 0x28);
  FUN_1093118fc(puVar1 + 7,param_1,param_2 + 0x38);
  FUN_1093118fc(puVar1 + 9,param_1,param_2 + 0x48);
  FUN_1093118fc(puVar1 + 0xb,param_1,param_2 + 0x58);
  FUN_1093118fc(puVar1 + 0xd,param_1,param_2 + 0x68);
  FUN_1093118fc(puVar1 + 0xf,param_1,param_2 + 0x78);
  FUN_1093118fc(puVar1 + 0x11,param_1,param_2 + 0x88);
  func_0x000109311b24(puVar1 + 0x13,param_1,param_2 + 0x98);
  FUN_1093118fc(puVar1 + 0x15,param_1,param_2 + 0xa8);
  FUN_1093118fc(puVar1 + 0x17,param_1,param_2 + 0xb8);
  FUN_1093118fc(puVar1 + 0x19,param_1,param_2 + 200);
  FUN_1093118fc(puVar1 + 0x1b,param_1,param_2 + 0xd8);
  FUN_1093118fc(puVar1 + 0x1d,param_1,param_2 + 0xe8);
  FUN_1093118fc(puVar1 + 0x1f,param_1,param_2 + 0xf8);
  puVar1[0x21] = *(undefined8 *)(param_2 + 0x108);
  return puVar1;
}



/* Entry: 1093128d0; end: 1093129a7;  */

undefined8 * FUN_1093128d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeb338;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  puVar3 = (ulong *)(param_2 + 0x28);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[5] = puVar2;
  puVar1[6] = *(undefined8 *)(param_2 + 0x30);
  return puVar1;
}



/* Entry: 1093129a8; end: 1093129eb;  */

undefined8 * FUN_1093129a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x68);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aef3e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  FUN_1093118fc(puVar1 + 5,param_1,param_2 + 0x28);
  puVar3 = (ulong *)(param_2 + 0x38);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[7] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x40);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[8] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x48);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[9] = puVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
  return puVar1;
}



/* Entry: 1093129ec; end: 109312ae3;  */

undefined8 * FUN_1093129ec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeb518;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  puVar3 = (ulong *)(param_2 + 0x28);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[5] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x30);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[6] = puVar2;
  puVar1[7] = *(undefined8 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 109312ae4; end: 109312bef;  */

undefined8 * FUN_109312ae4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x60);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aeb608;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  func_0x000109311b24(puVar2 + 3,param_1,param_2 + 0x18);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = param_1;
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(puVar2 + 5,param_2 + 0x28);
  }
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = param_1;
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(puVar2 + 8,param_2 + 0x40);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  *(undefined2 *)((long)puVar2 + 0x5c) = *(undefined2 *)(param_2 + 0x5c);
  *(undefined4 *)(puVar2 + 0xb) = uVar1;
  return puVar2;
}



/* Entry: 109312bf0; end: 109312cdf;  */

undefined8 * FUN_109312bf0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeb428;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_1093118fc(puVar1 + 2,param_1,param_2 + 0x10);
  FUN_1093118fc(puVar1 + 4,param_1,param_2 + 0x20);
  FUN_109311ab0(puVar1 + 6,param_1,param_2 + 0x30);
  puVar1[8] = 0;
  return puVar1;
}



/* Entry: 109312ce0; end: 109312d23;  */

undefined8 * FUN_109312ce0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x140;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x140);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aeef98;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(puVar2 + 3,param_2 + 0x18);
  }
  FUN_109311ab0(puVar2 + 6,param_1,param_2 + 0x30);
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_1;
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(puVar2 + 9,param_2 + 0x48);
  }
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = param_1;
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(puVar2 + 0xc,param_2 + 0x60);
  }
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = param_1;
  if (*(int *)(param_2 + 0x80) != 0) {
    func_0x000107c303c4(puVar2 + 0xf,param_2 + 0x78);
  }
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = param_1;
  if (*(int *)(param_2 + 0x98) != 0) {
    func_0x000107c303c4(puVar2 + 0x12,param_2 + 0x90);
  }
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = param_1;
  if (*(int *)(param_2 + 0xb0) != 0) {
    func_0x000107c303c4(puVar2 + 0x15,param_2 + 0xa8);
  }
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = param_1;
  if (*(int *)(param_2 + 200) != 0) {
    func_0x000107c303c4(puVar2 + 0x18,param_2 + 0xc0);
  }
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = param_1;
  if (*(int *)(param_2 + 0xe0) != 0) {
    func_0x000107c303c4(puVar2 + 0x1b,param_2 + 0xd8);
  }
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = param_1;
  if (*(int *)(param_2 + 0xf8) != 0) {
    func_0x000107c303c4(puVar2 + 0x1e,param_2 + 0xf0);
  }
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10933b860(param_1,*(undefined8 *)(param_2 + 0x108));
  }
  puVar2[0x21] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10933b860(param_1,*(undefined8 *)(param_2 + 0x110));
  }
  puVar2[0x22] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10932fda4(param_1,*(undefined8 *)(param_2 + 0x118));
  }
  puVar2[0x23] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10932fda4(param_1,*(undefined8 *)(param_2 + 0x120));
  }
  puVar2[0x24] = puVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10932fda4(param_1,*(undefined8 *)(param_2 + 0x128));
  }
  puVar2[0x25] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x130);
  *(undefined4 *)(puVar2 + 0x27) = *(undefined4 *)(param_2 + 0x138);
  puVar2[0x26] = uVar4;
  return puVar2;
}



/* Entry: 109312d24; end: 109312e23;  */

ulong * FUN_109312d24(ulong *param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  ulong uStack_48;
  uint *puStack_40;
  uint uStack_38;
  
  uVar3 = *param_2;
  *param_1 = (ulong)uVar3;
  if (uVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar4 = (long *)((ulong)uVar3 << 3);
    __Znam();
    param_1[1] = (ulong)plVar4;
    uStack_38 = param_2[3];
    puStack_40 = param_2;
    if (uStack_38 == param_2[1]) {
      uStack_38 = 0;
      uStack_48 = 0;
    }
    else {
      uStack_48 = *(ulong *)(*(long *)(param_2 + 4) + (ulong)uStack_38 * 8);
      if ((uStack_48 & 1) != 0) {
        uStack_48 = *(ulong *)(**(long **)(uStack_48 - 1) + 0x20);
      }
    }
    while (uStack_48 != 0) {
      *plVar4 = uStack_48 + 8;
      func_0x000107c27d54(&uStack_48);
      plVar4 = plVar4 + 1;
    }
    uVar2 = *param_1;
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT(uVar2) * -2 + 0x7e;
    }
    func_0x000105991c74(param_1[1],param_1[1] + uVar2 * 8,&uStack_48,lVar1,1);
  }
  return param_1;
}



/* Entry: 109312e24; end: 109312ec7;  */

void FUN_109312e24(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_68;
  long lStack_60;
  uint uStack_58;
  ulong auStack_50 [4];
  
  uStack_58 = *(uint *)(param_2 + 0xc);
  if (uStack_58 != *(uint *)(param_2 + 4)) {
    uStack_68 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uStack_58 * 8);
    lStack_60 = param_2;
    if ((uStack_68 & 1) != 0) {
      uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
    }
    do {
      uVar1 = uStack_68;
      FUN_109312ec8(auStack_50,param_1,uStack_68 + 8);
      uVar2 = auStack_50[0];
      if (uVar1 != auStack_50[0]) {
        FUN_10930b0d4(auStack_50[0] + 0x20);
        FUN_10930b470(uVar2 + 0x20,uVar1 + 0x20);
      }
      func_0x000107c27d54(&uStack_68);
    } while (uStack_68 != 0);
  }
  return;
}



/* Entry: 109312ec8; end: 109312fd3;  */

void FUN_109312ec8(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  piVar2 = param_2;
  func_0x000107c27d5c(param_2,puVar3,uVar1,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = param_2;
    func_0x000107c27d60(param_2,*param_2 + 1);
    if ((int)piVar2 != 0) {
      uVar1 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      func_0x000107c27d5c(param_2,puVar3,uVar1,0);
    }
    piVar2 = param_2;
    func_0x000107c27d64(param_2,0x58);
    func_0x000107c2821c(piVar2 + 2,*(undefined8 *)(param_2 + 6),param_3);
    uVar5 = *(undefined8 *)(param_2 + 6);
    *(undefined ***)(piVar2 + 8) = &PTR_FUN_110aeb6f8;
    *(undefined8 *)(piVar2 + 10) = uVar5;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x14] = 0;
    func_0x000107c27d68(param_2,puVar3,piVar2);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar2;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)puVar3;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 109312fd4; end: 1093130e3;  */

undefined8 * FUN_109312fd4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x90;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x90);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeb3d8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(puVar1 + 6,param_2 + 0x30);
  }
  puVar3 = (ulong *)(param_2 + 0x48);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[9] = puVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  uVar10 = *(undefined8 *)(param_2 + 0x88);
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  puVar1[0xf] = *(undefined8 *)(param_2 + 0x78);
  puVar1[0xe] = uVar8;
  puVar1[0x11] = uVar10;
  puVar1[0x10] = uVar9;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  return puVar1;
}



/* Entry: 1093130e4; end: 10931323b;  */

undefined8 * FUN_1093130e4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x170;
    __Znwm();
  }
  else {
    puVar4 = param_1;
    func_0x00010b4d80e0(param_1,0x170);
  }
  puVar4[1] = param_1;
  *puVar4 = &PTR_FUN_110aeb798;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar4 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar4 + 0x1c) = 0;
  *(undefined8 *)((long)puVar4 + 0x14) = 0;
  *(undefined4 *)((long)puVar4 + 0x24) = 0;
  puVar4[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar4 + 3,param_2 + 0x18);
  }
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(puVar4 + 6,param_2 + 0x30);
  }
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = param_1;
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(puVar4 + 9,param_2 + 0x48);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = param_1;
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(puVar4 + 0xc,param_2 + 0x60);
  }
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = param_1;
  if (*(int *)(param_2 + 0x80) != 0) {
    func_0x000107c303c4(puVar4 + 0xf,param_2 + 0x78);
  }
  FUN_109311d08(puVar4 + 0x12,param_1,param_2 + 0x90);
  puVar5 = (ulong *)(param_2 + 0xb0);
  puVar2 = (ulong *)*puVar5;
  if ((*puVar5 & 3) != 0) {
    func_0x000107c30244(puVar5,param_1);
    puVar2 = puVar5;
  }
  puVar4[0x16] = puVar2;
  uVar1 = *(uint *)(puVar4 + 2);
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10931267c(param_1,*(undefined8 *)(param_2 + 0xb8));
  }
  puVar4[0x17] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1093126c0(param_1,*(undefined8 *)(param_2 + 0xc0));
  }
  puVar4[0x18] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_109312770(param_1,*(undefined8 *)(param_2 + 200));
  }
  puVar4[0x19] = puVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x000109312848(param_1,*(undefined8 *)(param_2 + 0xd0));
  }
  puVar4[0x1a] = puVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010931288c(param_1,*(undefined8 *)(param_2 + 0xd8));
  }
  puVar4[0x1b] = puVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1093125d4(param_1,*(undefined8 *)(param_2 + 0xe0));
  }
  puVar4[0x1c] = puVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10931267c(param_1,*(undefined8 *)(param_2 + 0xe8));
  }
  puVar4[0x1d] = puVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1093128d0(param_1,*(undefined8 *)(param_2 + 0xf0));
  }
  puVar4[0x1e] = puVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1093129a8(param_1,*(undefined8 *)(param_2 + 0xf8));
  }
  puVar4[0x1f] = puVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1093129ec(param_1,*(undefined8 *)(param_2 + 0x100));
  }
  puVar4[0x20] = puVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1093126c0(param_1,*(undefined8 *)(param_2 + 0x108));
  }
  puVar4[0x21] = puVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010931288c(param_1,*(undefined8 *)(param_2 + 0x110));
  }
  puVar4[0x22] = puVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_109312ae4(param_1,*(undefined8 *)(param_2 + 0x118));
  }
  puVar4[0x23] = puVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_109312bf0(param_1,*(undefined8 *)(param_2 + 0x120));
  }
  puVar4[0x24] = puVar3;
  if ((uVar1 >> 0xf & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109312ce0(param_1,*(undefined8 *)(param_2 + 0x128));
  }
  puVar4[0x25] = param_1;
  uVar7 = *(undefined8 *)(param_2 + 0x138);
  uVar6 = *(undefined8 *)(param_2 + 0x130);
  uVar9 = *(undefined8 *)(param_2 + 0x148);
  uVar8 = *(undefined8 *)(param_2 + 0x140);
  uVar11 = *(undefined8 *)(param_2 + 0x158);
  uVar10 = *(undefined8 *)(param_2 + 0x150);
  uVar12 = *(undefined8 *)(param_2 + 0x15c);
  *(undefined8 *)((long)puVar4 + 0x164) = *(undefined8 *)(param_2 + 0x164);
  *(undefined8 *)((long)puVar4 + 0x15c) = uVar12;
  puVar4[0x29] = uVar9;
  puVar4[0x28] = uVar8;
  puVar4[0x2b] = uVar11;
  puVar4[0x2a] = uVar10;
  puVar4[0x27] = uVar7;
  puVar4[0x26] = uVar6;
  return puVar4;
}



/* Entry: 10931323c; end: 10931323f;  */

long FUN_10931323c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) == 1) {
      func_0x000107c30258(param_1 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return param_1;
}



/* Entry: 109313240; end: 109313253;  */

void FUN_109313240(void)

{
  func_0x0001093131f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109313254; end: 10931325f;  */

undefined ** FUN_109313254(void)

{
  return &PTR_DAT_110aed3c8;
}



/* Entry: 109313260; end: 1093132bf;  */

void FUN_109313260(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 0xf) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    func_0x000107c30258(param_1 + 0x28);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1093132c0; end: 1093134a3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093132c0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  ulong uStack_48;
  long lVar8;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
  }
  else {
    plVar1 = param_2;
    if (*(int *)(param_1 + 0x30) == 1) {
      plVar1 = param_3;
      func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,param_2);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x18),plVar1);
    plVar1 = plVar2;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    plVar2 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x1c),plVar1);
    plVar1 = plVar2;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    plVar2 = param_3;
    func_0x0001088b96ec(param_3,*(undefined4 *)(param_1 + 0x20),plVar1);
    plVar1 = plVar2;
  }
  plVar2 = plVar1;
  if ((uVar4 >> 3 & 1) != 0) {
    plVar2 = param_3;
    func_0x0001089f53c8(param_3,*(undefined4 *)(param_1 + 0x24),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      lVar8 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar8 < (int)uVar4) {
        do {
          iVar7 = (int)lVar8;
          _memcpy(plVar2,lVar3,(long)iVar7);
          uVar4 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar7;
          plVar5 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar7);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar5 <= plVar1);
          lVar8 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar8 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar2,lVar3,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lVar3,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar4);
    }
  }
  return plVar2;
}



/* Entry: 1093134a4; end: 1093135db;  */

ulong FUN_1093134a4(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + uVar3;
    }
  }
  if (*(int *)(param_1 + 0x30) == 2) {
    uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar3;
  }
  else if (*(int *)(param_1 + 0x30) == 1) {
    uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar4 + 0x17);
    uVar4 = *(ulong *)(uVar4 + 8);
    if (-1 < (char)bVar2) {
      uVar4 = (ulong)bVar2;
    }
    uVar3 = uVar3 + uVar4 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    uVar3 = lVar5 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 1093135dc; end: 10931371b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093135dc(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0xf) != 0) {
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar2 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    if (iVar4 != iVar3) {
      if (iVar4 == 1) {
        func_0x000107c30258(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x30) = iVar3;
    }
    if (iVar3 == 2) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    else if (iVar3 == 1) {
      if (iVar4 != 1) {
        *(undefined **)(param_1 + 0x28) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x30) != 1) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x28,puVar1,uVar5);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10931371c; end: 1093137e3;  */

long FUN_10931371c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109313750(param_1);
  return param_1;
}



/* Entry: 1093137e4; end: 1093137e7;  */

long FUN_1093137e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109313750(param_1);
  return param_1;
}



/* Entry: 1093137e8; end: 1093137fb;  */

void FUN_1093137e8(void)

{
  FUN_10931371c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093137fc; end: 109313807;  */

undefined ** FUN_1093137fc(void)

{
  return &PTR_DAT_110aed400;
}



/* Entry: 109313808; end: 1093138bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109313808(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1093138bc; end: 109313acf;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093138bc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    plVar1 = (long *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    plVar1 = (long *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 6 & 1) != 0) {
    plVar1 = (long *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar7 = *(long *)(uVar5 + 8);
      uVar3 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar7 = uVar5 + 8;
    }
    uVar2 = (uint)uVar3;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar9 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar9 < (int)uVar2) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(plVar1,lVar7,(long)iVar8);
          uVar2 = (int)uVar3 - iVar8;
          uVar3 = (ulong)uVar2;
          lVar7 = lVar7 + iVar8;
          plVar4 = (long *)*param_3;
          plVar6 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar1 + (long)((int)plVar6 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar6;
          } while (plVar4 <= plVar6);
          lVar9 = (long)plVar4 + (0x10 - (long)plVar1);
        } while ((int)lVar9 < (int)uVar2);
      }
      _memcpy(plVar1,lVar7,(long)(int)uVar2);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
    else {
      _memcpy(plVar1,lVar7,uVar3 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109313ad0; end: 109313c7f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_109313ad0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_1093134a4();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x48);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109313c80; end: 109313c83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109313c80(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar3;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109313c84; end: 109313e3b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109313c84(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar3;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109313e3c; end: 109314063;  */

long FUN_109313e3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109313e70(param_1);
  return param_1;
}



/* Entry: 109314064; end: 109314067;  */

long FUN_109314064(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109313e70(param_1);
  return param_1;
}



/* Entry: 109314068; end: 10931407b;  */

void FUN_109314068(void)

{
  FUN_109313e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931407c; end: 109314087;  */

undefined ** FUN_10931407c(void)

{
  return &PTR_DAT_110aed438;
}



/* Entry: 109314088; end: 1093142b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109314088(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x50));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x90));
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xb0));
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xb8));
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xc0));
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xd0));
    }
  }
  if ((uVar1 & 0x1f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xd8));
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xe0));
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xe8));
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xf0));
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0xf8));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1093142b4; end: 1093147db;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093142b4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    plVar1 = (long *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 5 & 1) != 0) {
    plVar1 = (long *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 6 & 1) != 0) {
    plVar1 = (long *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 7 & 1) != 0) {
    plVar1 = (long *)0x8;
    func_0x000107c303cc(8,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 8 & 1) != 0) {
    plVar1 = (long *)0x9;
    func_0x000107c303cc(9,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 9 & 1) != 0) {
    plVar1 = (long *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 10 & 1) != 0) {
    plVar1 = (long *)0xb;
    func_0x000107c303cc(0xb,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0xb & 1) != 0) {
    plVar1 = (long *)0xe;
    func_0x000107c303cc(0xe,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0xc & 1) != 0) {
    plVar1 = (long *)0xf;
    func_0x000107c303cc(0xf,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0xd & 1) != 0) {
    plVar1 = (long *)0x10;
    func_0x000107c303cc(0x10,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0xe & 1) != 0) {
    plVar1 = (long *)0x11;
    func_0x000107c303cc(0x11,*(long *)(param_1 + 0x88),
                        *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0xf & 1) != 0) {
    plVar1 = (long *)0x13;
    func_0x000107c303cc(0x13,*(long *)(param_1 + 0x90),
                        *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x10 & 1) != 0) {
    plVar1 = (long *)0x14;
    func_0x000107c303cc(0x14,*(long *)(param_1 + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x11 & 1) != 0) {
    plVar1 = (long *)0x15;
    func_0x000107c303cc(0x15,*(long *)(param_1 + 0xa0),
                        *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x12 & 1) != 0) {
    plVar1 = (long *)0x16;
    func_0x000107c303cc(0x16,*(long *)(param_1 + 0xa8),
                        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x13 & 1) != 0) {
    plVar1 = (long *)0x17;
    func_0x000107c303cc(0x17,*(long *)(param_1 + 0xb0),
                        *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x14 & 1) != 0) {
    plVar1 = (long *)0x18;
    func_0x000107c303cc(0x18,*(long *)(param_1 + 0xb8),
                        *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x15 & 1) != 0) {
    plVar1 = (long *)0x19;
    func_0x000107c303cc(0x19,*(long *)(param_1 + 0xc0),
                        *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x16 & 1) != 0) {
    plVar1 = (long *)0x1a;
    func_0x000107c303cc(0x1a,*(long *)(param_1 + 200),
                        *(undefined4 *)(*(long *)(param_1 + 200) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x17 & 1) != 0) {
    plVar1 = (long *)0x1b;
    func_0x000107c303cc(0x1b,*(long *)(param_1 + 0xd0),
                        *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x18 & 1) != 0) {
    plVar1 = (long *)0x1c;
    func_0x000107c303cc(0x1c,*(long *)(param_1 + 0xd8),
                        *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x19 & 1) != 0) {
    plVar1 = (long *)0x1d;
    func_0x000107c303cc(0x1d,*(long *)(param_1 + 0xe0),
                        *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x1a & 1) != 0) {
    plVar1 = (long *)0x1e;
    func_0x000107c303cc(0x1e,*(long *)(param_1 + 0xe8),
                        *(undefined4 *)(*(long *)(param_1 + 0xe8) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar6 >> 0x1b & 1) != 0) {
    plVar1 = (long *)0x1f;
    func_0x000107c303cc(0x1f,*(long *)(param_1 + 0xf0),
                        *(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar6 >> 0x1c & 1) != 0) {
    plVar1 = (long *)0x20;
    func_0x000107c303cc(0x20,*(long *)(param_1 + 0xf8),
                        *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar5 = *(long *)(uVar2 + 8);
      uVar7 = (ulong)*(uint *)(uVar2 + 0x10);
    }
    else {
      lVar5 = uVar2 + 8;
    }
    uVar6 = (uint)uVar7;
    if (*param_3 - (long)plVar1 < (long)(int)uVar6) {
      lVar9 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar9 < (int)uVar6) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(plVar1,lVar5,(long)iVar8);
          uVar6 = (int)uVar7 - iVar8;
          uVar7 = (ulong)uVar6;
          lVar5 = lVar5 + iVar8;
          plVar3 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar3 <= plVar4);
          lVar9 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar9 < (int)uVar6);
      }
      _memcpy(plVar1,lVar5,(long)(int)uVar6);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar6);
    }
    else {
      _memcpy(plVar1,lVar5,uVar7 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar6);
    }
  }
  return plVar1;
}



/* Entry: 1093147dc; end: 109314dc3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1093147dc(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_1093134a4();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x48);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x60);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x68);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x78);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x80);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x88);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x90);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x98);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xa0);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xa8);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xb0);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xb8);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xc0);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 200);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xd0);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((uVar1 & 0x1f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xd8);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xe0);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xe8);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xf0);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xf8);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109314dc4; end: 109314dc7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109314dc4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xb0));
        *(ulong *)(param_1 + 0xb0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xc0));
        *(ulong *)(param_1 + 0xc0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 200));
        *(ulong *)(param_1 + 200) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  if ((uVar1 & 0x1f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xd8));
        *(ulong *)(param_1 + 0xd8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xe8));
        *(ulong *)(param_1 + 0xe8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xf0));
        *(ulong *)(param_1 + 0xf0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xf8));
        *(ulong *)(param_1 + 0xf8) = uVar3;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 109314dc8; end: 109315353;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109314dc8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xb0));
        *(ulong *)(param_1 + 0xb0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xc0));
        *(ulong *)(param_1 + 0xc0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 200));
        *(ulong *)(param_1 + 200) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  if ((uVar1 & 0x1f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xd8));
        *(ulong *)(param_1 + 0xd8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xe8));
        *(ulong *)(param_1 + 0xe8) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xf0));
        *(ulong *)(param_1 + 0xf0) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0xf8));
        *(ulong *)(param_1 + 0xf8) = uVar3;
      }
      else {
        FUN_1093135dc();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 109315354; end: 109315387;  */

long FUN_109315354(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109315388; end: 10931538b;  */

long FUN_109315388(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931538c; end: 10931539f;  */

void FUN_10931538c(void)

{
  FUN_109315354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093153a0; end: 1093153fb;  */

undefined ** FUN_1093153a0(void)

{
  return &PTR_DAT_110aed470;
}



/* Entry: 1093153fc; end: 1093155c7;  */

long * FUN_1093153fc(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uStack_48;
  undefined1 *puVar9;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    plVar5 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar5;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    plVar5 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = plVar5;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar3 = uVar7 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      puVar9 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar9 < (int)uVar4) {
        do {
          iVar8 = (int)puVar9;
          _memcpy(param_2,lVar3,(long)iVar8);
          uVar4 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar8;
          plVar6 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar6 <= plVar5);
          puVar9 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar9 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(param_2,lVar3,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar3,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar4);
    }
  }
  return param_2;
}



/* Entry: 1093155c8; end: 10931567b;  */

long FUN_1093155c8(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 & 4) != 0) {
      lVar3 = lVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10931567c; end: 109315737;  */

void FUN_10931567c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109315738; end: 10931576b;  */

long FUN_109315738(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10932e234(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931576c; end: 10931576f;  */

long FUN_10931576c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10932e234(param_1 + 0x18);
  return param_1;
}



/* Entry: 109315770; end: 109315783;  */

void FUN_109315770(void)

{
  FUN_109315738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109315784; end: 10931578f;  */

undefined ** FUN_109315784(void)

{
  return &PTR_DAT_110aed4b0;
}



/* Entry: 109315790; end: 1093157eb;  */

void FUN_109315790(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1093157ec; end: 109315b4f;  */

byte * FUN_1093157ec(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    uVar5 = *(ulong *)(param_1 + 0x30);
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar5) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    uVar5 = *(ulong *)(param_1 + 0x38);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar5) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 != 0) {
    iVar10 = 0;
    pbVar4 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar10 * 8 + 7);
      }
      param_2 = (byte *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar4,param_3);
      iVar10 = iVar10 + 1;
      pbVar4 = param_2;
    } while (iVar11 != iVar10);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar9 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar4;
          _memcpy(param_2,lVar9,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar9 = lVar9 + iVar11;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar11;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar2 + (long)((int)pbVar8 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109315b50; end: 109315b53;  */

void FUN_109315b50(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 109315b54; end: 109315c13;  */

void FUN_109315b54(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 109315c14; end: 109315c17;  */

long FUN_109315c14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10930c5bc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109315c18; end: 109315c2b;  */

void FUN_109315c18(void)

{
  func_0x000109315bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109315c2c; end: 109315c37;  */

undefined ** FUN_109315c2c(void)

{
  return &PTR_DAT_110aed4f0;
}



/* Entry: 109315c38; end: 109315c7f;  */

void FUN_109315c38(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10930c794(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 109315c80; end: 109315dcb;  */

long * FUN_109315c80(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109315dcc; end: 109315e3f;  */

void FUN_109315dcc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010930d804();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 109315e40; end: 109315e43;  */

void FUN_109315e40(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_1093130e4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10930dfb8(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 109315e44; end: 109315edb;  */

void FUN_109315e44(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_1093130e4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10930dfb8(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 109315edc; end: 109315f27;  */

void FUN_109315edc(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 109315f28; end: 109315f7f;  */

long FUN_109315f28(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109315f80; end: 109315fa3;  */

undefined ** FUN_109315f80(void)

{
  return &PTR_DAT_110aed530;
}



/* Entry: 109315fa4; end: 109316183;  */

long * FUN_109315fa4(long param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uStack_48;
  undefined1 *puVar9;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)param_2 = 0x10;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar3 = uVar7 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      puVar9 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar9 < (int)uVar4) {
        do {
          iVar8 = (int)puVar9;
          _memcpy(param_2,lVar3,(long)iVar8);
          uVar4 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar8;
          plVar6 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar6 <= plVar5);
          puVar9 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar9 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(param_2,lVar3,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar3,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar4);
    }
  }
  return param_2;
}



/* Entry: 109316184; end: 109316203;  */

ulong FUN_109316184(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = 0;
  if ((uVar2 & 3) != 0) {
    uVar1 = (uVar2 & 1) * 2 + (uVar2 & 2);
  }
  uVar3 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 109316204; end: 10931625b;  */

long FUN_109316204(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931625c; end: 10931627f;  */

undefined ** FUN_10931625c(void)

{
  return &PTR_DAT_110aed578;
}



/* Entry: 109316280; end: 1093163c3;  */

long * FUN_109316280(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 1093163c4; end: 10931641b;  */

ulong FUN_1093163c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 10931641c; end: 109316467;  */

long FUN_10931641c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109316468; end: 10931646b;  */

long FUN_109316468(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10931646c; end: 10931647f;  */

void FUN_10931646c(void)

{
  FUN_10931641c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109316480; end: 10931648b;  */

undefined ** FUN_109316480(void)

{
  return &PTR_DAT_110aed5c0;
}



/* Entry: 10931648c; end: 1093164eb;  */

void FUN_10931648c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1093164ec; end: 10931667b;  */

long * FUN_1093164ec(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
    param_2 = plVar1;
  }
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 10931667c; end: 10931675b;  */

long FUN_10931667c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_1093134a4();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_1093134a4();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10931675c; end: 10931675f;  */

void FUN_10931675c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10932fce4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}


