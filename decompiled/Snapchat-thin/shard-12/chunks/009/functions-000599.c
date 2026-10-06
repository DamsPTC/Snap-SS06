/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c0fef0; end: 109c0ffaf;  */

undefined8 * FUN_109c0fef0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b2b948;
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
  puVar3 = (ulong *)(param_2 + 0x20);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[4] = puVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 109c0ffb0; end: 109c10147;  */

undefined8 * FUN_109c0ffb0(undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar4 = (uint *)(param_1 + 1);
  puVar4[0] = 0;
  puVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar4 != param_2) {
    uVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar3 = *param_2;
    }
    *puVar4 = uVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  puVar5 = param_1 + 8;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 1;
  if (param_4 == 0) {
    param_1[8] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar1 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    func_0x000107c31940(auStack_58,&UNK_10f5a33fd);
    FUN_109c10148(iVar1 << 2,auStack_58,puVar5);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar6 = *puVar5;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar2 = &UNK_10f5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    _memcpy(uVar6,param_3,
            -((ulong)puVar2 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)puVar2 & 0xffffffff) << 2);
  }
  return param_1;
}



/* Entry: 109c10148; end: 109c1038f;  */

void FUN_109c10148(int param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  func_0x000104c4f768(&ppuStack_98,uVar2 + 0xf,&uStack_51);
  pppuVar3 = (undefined8 ***)ppuStack_98;
  if (-1 < (char)bStack_81) {
    pppuVar3 = &ppuStack_98;
  }
  if (uVar2 != 0) {
    plVar4 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar4 = param_2;
    }
    _memmove(pppuVar3,plVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  *puVar1 = 0x6e656d656c65203a;
  *(undefined8 *)((long)puVar1 + 7) = 0x746e756f6320746e;
  *(undefined1 *)((long)puVar1 + 0xf) = 0;
  uStack_60 = uStack_90;
  ppuStack_68 = ppuStack_98;
  if (-1 < (char)bStack_81) {
    uStack_60 = (ulong)bStack_81;
    ppuStack_68 = &ppuStack_98;
  }
  puStack_80 = &UNK_10f5a3624;
  uStack_78 = 0x13;
  lStack_70 = CONCAT44(lStack_70._4_4_,param_1);
  FUN_109c13710(&puStack_80,0);
  if ((char)bStack_81 < '\0') {
    __ZdlPv(ppuStack_98);
  }
  lVar5 = (long)param_1 + 0x10;
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  func_0x000104c4f768(&ppuStack_98,uVar2 + 0x11,&uStack_51);
  pppuVar3 = (undefined8 ***)ppuStack_98;
  if (-1 < (char)bStack_81) {
    pppuVar3 = &ppuStack_98;
  }
  if (uVar2 != 0) {
    plVar4 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar4 = param_2;
    }
    _memmove(pppuVar3,plVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  puVar1[1] = 0x7a6973206e6f6974;
  *puVar1 = 0x61636f6c6c61203a;
  *(undefined2 *)(puVar1 + 2) = 0x65;
  uStack_60 = uStack_90;
  ppuStack_68 = ppuStack_98;
  if (-1 < (char)bStack_81) {
    uStack_60 = (ulong)bStack_81;
    ppuStack_68 = &ppuStack_98;
  }
  puStack_80 = &UNK_10f5a3624;
  uStack_78 = 0x13;
  lStack_70 = lVar5;
  FUN_109c14174(&puStack_80,0x7fffffff);
  if ((char)bStack_81 < '\0') {
    __ZdlPv(ppuStack_98);
  }
  __Znam();
  *param_3 = lVar5;
  return;
}



/* Entry: 109c10390; end: 109c10527;  */

undefined8 * FUN_109c10390(undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar4 = (uint *)(param_1 + 1);
  puVar4[0] = 0;
  puVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar4 != param_2) {
    uVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar3 = *param_2;
    }
    *puVar4 = uVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  puVar5 = param_1 + 8;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 5;
  if (param_4 == 0) {
    param_1[8] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar1 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    func_0x000107c31940(auStack_58,&UNK_10f5a33fd);
    FUN_109c10148(iVar1 << 3,auStack_58,puVar5);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar6 = *puVar5;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar2 = &UNK_10f5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    _memcpy(uVar6,param_3,
            -((ulong)puVar2 >> 0x1f & 1) & 0xfffffff800000000 | ((ulong)puVar2 & 0xffffffff) << 3);
  }
  return param_1;
}



/* Entry: 109c10528; end: 109c106c3;  */

undefined8 * FUN_109c10528(undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar4 = (uint *)(param_1 + 1);
  puVar4[0] = 0;
  puVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar4 != param_2) {
    uVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar3 = *param_2;
    }
    *puVar4 = uVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  puVar5 = param_1 + 8;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 4;
  if (param_4 == 0) {
    param_1[8] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar1 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    func_0x000107c31940(auStack_58,&UNK_10f5a33fd);
    FUN_109c10148(iVar1 << 2,auStack_58,puVar5);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar6 = *puVar5;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar2 = &UNK_10f5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    _memcpy(uVar6,param_3,
            -((ulong)puVar2 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)puVar2 & 0xffffffff) << 2);
  }
  return param_1;
}



/* Entry: 109c106c4; end: 109c1085f;  */

undefined8 * FUN_109c106c4(undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar4 = (uint *)(param_1 + 1);
  puVar4[0] = 0;
  puVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar4 != param_2) {
    uVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar3 = *param_2;
    }
    *puVar4 = uVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  puVar5 = param_1 + 8;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 6;
  if (param_4 == 0) {
    param_1[8] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar2 = &UNK_10f5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    func_0x000107c31940(auStack_58,&UNK_10f5a33fd);
    FUN_109c10148(puVar2,auStack_58,puVar5);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar6 = *puVar5;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar1 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    _memcpy(uVar6,param_3,(long)iVar1);
  }
  return param_1;
}



/* Entry: 109c10860; end: 109c109fb;  */

undefined8 * FUN_109c10860(undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar4 = (uint *)(param_1 + 1);
  puVar4[0] = 0;
  puVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar4 != param_2) {
    uVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar3 = *param_2;
    }
    *puVar4 = uVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  puVar5 = param_1 + 8;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 2;
  if (param_4 == 0) {
    param_1[8] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar2 = &UNK_10f5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    func_0x000107c31940(auStack_58,&UNK_10f5a33fd);
    FUN_109c10148(puVar2,auStack_58,puVar5);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar6 = *puVar5;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar1 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    _memcpy(uVar6,param_3,(long)iVar1);
  }
  return param_1;
}



/* Entry: 109c109fc; end: 109c10b97;  */

undefined8 * FUN_109c109fc(undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar4 = (uint *)(param_1 + 1);
  puVar4[0] = 0;
  puVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar4 != param_2) {
    uVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar3 = *param_2;
    }
    *puVar4 = uVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  puVar5 = param_1 + 8;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 7;
  if (param_4 == 0) {
    param_1[8] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar1 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    func_0x000107c31940(auStack_58,&UNK_10f5a33fd);
    FUN_109c10148(iVar1 << 1,auStack_58,puVar5);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar6 = *puVar5;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar2 = &UNK_10f5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    _memcpy(uVar6,param_3,
            -((ulong)puVar2 >> 0x1f & 1) & 0xfffffffe00000000 | ((ulong)puVar2 & 0xffffffff) << 1);
  }
  return param_1;
}



/* Entry: 109c10b98; end: 109c10d33;  */

undefined8 * FUN_109c10b98(undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar4 = (uint *)(param_1 + 1);
  puVar4[0] = 0;
  puVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar4 != param_2) {
    uVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar3 = *param_2;
    }
    *puVar4 = uVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  puVar5 = param_1 + 8;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 3;
  if (param_4 == 0) {
    param_1[8] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    iVar1 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    func_0x000107c31940(auStack_58,&UNK_10f5a33fd);
    FUN_109c10148(iVar1 << 1,auStack_58,puVar5);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar6 = *puVar5;
    uVar3 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar3) {
      uVar3 = 5;
    }
    puVar2 = &UNK_10f5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar3);
    _memcpy(uVar6,param_3,
            -((ulong)puVar2 >> 0x1f & 1) & 0xfffffffe00000000 | ((ulong)puVar2 & 0xffffffff) << 1);
  }
  return param_1;
}



/* Entry: 109c10d34; end: 109c10e9b;  */

long FUN_109c10d34(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char cStack_31;
  
  if (param_2 != param_1) {
    if ((*(char *)(param_1 + 0x38) == '\x01') && (*(long *)(param_1 + 0x40) != 0)) {
      __ZdaPv();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    uVar4 = 0;
    if (*(int *)(param_2 + 8) != 0) {
      _memmove(param_1 + 0xc,param_2 + 0xc,(long)*(int *)(param_2 + 8) << 2);
      uVar4 = *(undefined4 *)(param_2 + 8);
    }
    *(undefined4 *)(param_1 + 8) = uVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x20,param_2 + 0x20);
    bVar2 = *(byte *)(param_2 + 0x48);
    *(byte *)(param_1 + 0x48) = bVar2;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uStack_48 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_1 + 0xc,uVar1);
    if ((ulong)bVar2 < 9) {
      uStack_44 = *(undefined4 *)(&UNK_10e0393c4 + (ulong)bVar2 * 4);
    }
    else {
      uStack_44 = 4;
    }
    puVar3 = &UNK_10f5a359d;
    FUN_109c60fbc(&UNK_10f5a359d,0xc,&uStack_48,2);
    func_0x000107c31940(&uStack_48,&UNK_10f5a34f9);
    FUN_109c10148(puVar3,&uStack_48,param_1 + 0x40);
    if (cStack_31 < '\0') {
      __ZdlPv(CONCAT44(uStack_44,uStack_48));
    }
    FUN_109c11af8(param_1,param_2);
  }
  return param_1;
}



/* Entry: 109c10e9c; end: 109c10ef3;  */

undefined8 * FUN_109c10e9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2bd90;
  if ((*(char *)(param_1 + 7) == '\x01') && (param_1[8] != 0)) {
    __ZdaPv();
    param_1[8] = 0;
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 109c10ef4; end: 109c10f73;  */

undefined8 * FUN_109c10ef4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b2bd90;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  FUN_109c10d34(param_1,param_2);
  return param_1;
}



/* Entry: 109c10f74; end: 109c10f77;  */

undefined8 * FUN_109c10f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2bd90;
  if ((*(char *)(param_1 + 7) == '\x01') && (param_1[8] != 0)) {
    __ZdaPv();
    param_1[8] = 0;
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 109c10f78; end: 109c1106b;  */

undefined8 * FUN_109c10f78(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_110b2bd90;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  if (param_2 != param_1) {
    uVar1 = 0;
    if (*(int *)(param_2 + 1) != 0) {
      _memmove((long)param_1 + 0xc,(long)param_2 + 0xc,(long)*(int *)(param_2 + 1) << 2);
      uVar1 = *(undefined4 *)(param_2 + 1);
    }
    *(undefined4 *)(param_1 + 1) = uVar1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 4,param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  return param_1;
}



/* Entry: 109c1106c; end: 109c111df;  */

undefined8 * FUN_109c1106c(undefined8 *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char cStack_31;
  
  *param_1 = &PTR_FUN_110b2bd90;
  piVar4 = (int *)(param_1 + 1);
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (piVar4 != param_2) {
    iVar3 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)*param_2 << 2);
      iVar3 = *param_2;
    }
    *piVar4 = iVar3;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(char *)(param_1 + 9) = (char)param_3;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  uVar1 = *(uint *)(param_1 + 1) & ((int)*(uint *)(param_1 + 1) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  uStack_48 = 0xf5a3554;
  FUN_109c60fbc(&UNK_10f5a3554,0x1a,(long)param_1 + 0xc,uVar1);
  if (param_3 < 9) {
    uStack_44 = *(undefined4 *)(&UNK_10e0393c4 + (ulong)param_3 * 4);
  }
  else {
    uStack_44 = 4;
  }
  puVar2 = &UNK_10f5a359d;
  FUN_109c60fbc(&UNK_10f5a359d,0xc,&uStack_48,2);
  func_0x000107c31940(&uStack_48,&UNK_10f5a343c);
  FUN_109c10148(puVar2,&uStack_48,param_1 + 8);
  if (cStack_31 < '\0') {
    __ZdlPv(CONCAT44(uStack_44,uStack_48));
  }
  return param_1;
}



/* Entry: 109c111e0; end: 109c11767;  */

undefined8 *
FUN_109c111e0(undefined8 *param_1,uint *param_2,long param_3,ulong param_4,long *param_5)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  long *plVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 *puStack_1a0;
  undefined6 uStack_198;
  undefined2 uStack_192;
  int iStack_190;
  undefined2 uStack_18c;
  undefined1 uStack_18a;
  char cStack_189;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  *param_1 = &PTR_FUN_110b2bd90;
  puVar14 = (uint *)(param_1 + 1);
  puVar14[0] = 0;
  puVar14[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar14 != param_2) {
    uVar9 = 0;
    if (*param_2 != 0) {
      _memmove((long)param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar9 = *param_2;
    }
    *puVar14 = uVar9;
  }
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  plVar15 = param_1 + 8;
  *plVar15 = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  uVar9 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar9) {
    uVar9 = 5;
  }
  puVar6 = &UNK_10f5a3554;
  FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar9);
  iStack_190 = (int)param_5[1] - (int)*param_5;
  puStack_1a0 = (undefined8 *)&UNK_10f5a346a;
  uStack_198 = 0x16;
  uStack_192 = 0;
  puStack_188 = &UNK_10f5a3481;
  uStack_180 = 0xe;
  FUN_109c11768(&puStack_1a0,puVar6,&UNK_10f5a3490,8);
  iVar16 = (int)puVar6;
  if (0 < iVar16) {
    if (param_4 == 0) {
      func_0x000107c31940(&ppuStack_70,&UNK_10f5a3672);
      uStack_198 = 0x726566667542;
      puStack_1a0 = (undefined8 **)0x3a3a726566667542;
      uStack_192 = 0x4b28;
      iStack_190 = 0x4e41454d;
      uStack_18c = 0x2953;
      uStack_18a = 0;
      cStack_189 = 0x16;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&puStack_1a0,": ",2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&puStack_1a0,&UNK_10f5a3499,7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&puStack_1a0,": ",2);
      uVar10 = uStack_68;
      pppuVar8 = (undefined8 ***)ppuStack_70;
      if (-1 < (long)uStack_60) {
        uVar10 = uStack_60 >> 0x38;
        pppuVar8 = &ppuStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&puStack_1a0,pppuVar8,uVar10);
      FUN_109c61b6c(&puStack_1a0);
LAB_109c11600:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109c11604);
      (*pcVar5)();
    }
    pbVar4 = (byte *)*param_5;
    for (lVar3 = param_5[1] - *param_5; lVar3 != 0; lVar3 = lVar3 + -1) {
      bVar2 = *pbVar4;
      if (param_4 <= bVar2) {
        uStack_128 = 0x726566667542;
        uStack_130 = 0x3a3a726566667542;
        uStack_122 = 0x4b28;
        uStack_120 = 0x29534e41454d;
        uStack_11a = 0x1600;
        puVar7 = &uStack_130;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,": ",2);
        uStack_108 = puVar7[1];
        uStack_110 = *puVar7;
        uStack_100 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        uStack_131 = 5;
        uStack_148 = 0x65646e69;
        uStack_144 = 0x78;
        puVar7 = &uStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,&uStack_148,5);
        uStack_e8 = puVar7[1];
        uStack_f0 = *puVar7;
        uStack_e0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7 = &uStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,&UNK_10f5a3684,0x10);
        uStack_c8 = puVar7[1];
        uStack_d0 = *puVar7;
        uStack_c0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        __ZNSt3__19to_stringEm(&ppuStack_160,(ulong)bVar2);
        if (-1 < (char)bStack_149) {
          uStack_158 = (ulong)bStack_149;
          ppuStack_160 = &ppuStack_160;
        }
        puVar7 = &uStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,ppuStack_160,uStack_158);
        uStack_a8 = puVar7[1];
        uStack_b0 = *puVar7;
        uStack_a0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7 = &uStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,&UNK_10f48d8a9,4);
        uStack_88 = puVar7[1];
        uStack_90 = *puVar7;
        uStack_80 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        __ZNSt3__19to_stringEm(&ppuStack_178,param_4);
        if (-1 < (char)bStack_161) {
          uStack_170 = (ulong)bStack_161;
          ppuStack_178 = &ppuStack_178;
        }
        puVar7 = &uStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,ppuStack_178,uStack_170);
        uStack_68 = puVar7[1];
        ppuStack_70 = (undefined8 **)*puVar7;
        uStack_60 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        pppuVar8 = &ppuStack_70;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar8,&DAT_10f684600,1);
        puStack_1a0 = *pppuVar8;
        ppuVar11 = pppuVar8[2];
        iStack_190 = (int)ppuVar11;
        uStack_18c = (undefined2)((ulong)ppuVar11 >> 0x20);
        uStack_18a = (undefined1)((ulong)ppuVar11 >> 0x30);
        cStack_189 = (char)((ulong)ppuVar11 >> 0x38);
        uStack_198 = SUB86(pppuVar8[1],0);
        uStack_192 = (undefined2)((ulong)pppuVar8[1] >> 0x30);
        pppuVar8[1] = (undefined8 **)0x0;
        pppuVar8[2] = (undefined8 **)0x0;
        *pppuVar8 = (undefined8 **)0x0;
        FUN_109c61b6c(&puStack_1a0);
        goto LAB_109c11600;
      }
      pbVar4 = pbVar4 + 1;
    }
  }
  func_0x000107c31940(&puStack_1a0,&UNK_10f5a34a1);
  FUN_109c10148(iVar16 << 2,&puStack_1a0,plVar15);
  if (cStack_189 < '\0') {
    __ZdlPv(puStack_1a0);
  }
  if (0 < iVar16) {
    uVar10 = 0;
    lVar12 = *plVar15;
    lVar3 = *param_5;
    lVar1 = param_5[1];
    do {
      if (uVar10 < (ulong)(lVar1 - lVar3)) {
        uVar13 = (ulong)*(byte *)(lVar3 + uVar10);
      }
      else {
        uVar13 = 0;
      }
      uVar17 = 0;
      if (uVar13 < param_4) {
        uVar17 = *(undefined4 *)(param_3 + uVar13 * 4);
      }
      *(undefined4 *)(lVar12 + uVar10 * 4) = uVar17;
      uVar10 = uVar10 + 1;
    } while (((ulong)puVar6 & 0xffffffff) != uVar10);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



/* Entry: 109c11768; end: 109c11ae3;  */

/* WARNING: Removing unreachable block (ram,0x000109c11968) */
/* WARNING: Removing unreachable block (ram,0x000109c11958) */
/* WARNING: Removing unreachable block (ram,0x000109c11988) */

long FUN_109c11768(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *****pppppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 *****pppppuStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (*(int *)(param_1 + 0x10) == (int)param_2) {
    return param_1;
  }
  __ZNSt3__19to_stringEi(auStack_128);
  puVar4 = auStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar4,0,&DAT_10f68e8ec,1);
  uStack_108 = puVar4[1];
  uStack_110 = *puVar4;
  lStack_100 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f5a366c,5);
  uStack_e8 = puVar4[1];
  uStack_f0 = *puVar4;
  lStack_e0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109c11a08);
    (*pcVar3)();
  }
  if (param_4 < 0x17) {
    uStack_130 = CONCAT17((char)param_4,(undefined7)uStack_130);
    ppppppuVar5 = &pppppuStack_140;
    if (param_4 == 0) goto LAB_109c11860;
  }
  else {
    ppppppuVar2 = (undefined8 ******)0x19;
    if ((param_4 | 7) != 0x17) {
      ppppppuVar2 = (undefined8 ******)((param_4 | 7) + 1);
    }
    ppppppuVar5 = ppppppuVar2;
    __Znwm();
    uStack_130 = (ulong)ppppppuVar2 | 0x8000000000000000;
    pppppuStack_140 = ppppppuVar5;
    uStack_138 = param_4;
  }
  _memmove(ppppppuVar5,param_3,param_4);
LAB_109c11860:
  *(undefined1 *)((long)ppppppuVar5 + param_4) = 0;
  uVar1 = uStack_138;
  ppppppuVar2 = (undefined8 ******)pppppuStack_140;
  if (-1 < (long)uStack_130) {
    uVar1 = uStack_130 >> 0x38;
    ppppppuVar2 = &pppppuStack_140;
  }
  puVar4 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppppppuVar2,uVar1);
  uStack_c8 = puVar4[1];
  uStack_d0 = *puVar4;
  lStack_c0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f466b5a,2);
  uStack_a8 = puVar4[1];
  uStack_b0 = *puVar4;
  uStack_a0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__19to_stringEi(&pppppuStack_158,param_2);
  ppppppuVar2 = (undefined8 ******)pppppuStack_158;
  if (-1 < (char)bStack_141) {
    uStack_150 = (ulong)bStack_141;
    ppppppuVar2 = &pppppuStack_158;
  }
  puVar4 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppppppuVar2,uStack_150);
  uStack_88 = puVar4[1];
  uStack_90 = *puVar4;
  uStack_80 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f684600,1);
  uStack_68 = puVar4[1];
  uStack_70 = *puVar4;
  uStack_60 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_109c14014(param_1,&uStack_70);
  if ((char)bStack_141 < '\0') {
    __ZdlPv(pppppuStack_158);
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if ((long)uStack_130 < 0) {
    __ZdlPv(pppppuStack_140);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  return param_1;
}



/* Entry: 109c11ae4; end: 109c11af7;  */

void FUN_109c11ae4(void)

{
  FUN_109c10e9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c11af8; end: 109c11c4b;  */

void FUN_109c11af8(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar5 = 0xf5a3554;
  iVar4 = iVar5;
  FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_1 + 0xc,uVar1);
  uVar1 = *(uint *)(param_2 + 8) & ((int)*(uint *)(param_2 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 0xc,uVar1);
  if (iVar4 == iVar5) {
    bVar3 = *(char *)(param_1 + 0x48) == *(char *)(param_2 + 0x48);
  }
  else {
    bVar3 = false;
  }
  uStack_68 = &UNK_10f5a356f;
  uStack_60 = 0x14;
  puStack_50 = &UNK_10f5a3584;
  uStack_48 = 0x18;
  uStack_58 = bVar3;
  FUN_10959b640(&uStack_68);
  if (bVar3) {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = *(undefined8 *)(param_2 + 0x40);
    bVar2 = *(byte *)(param_2 + 0x48);
    uVar1 = *(uint *)(param_2 + 8) & ((int)*(uint *)(param_2 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uVar6 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 0xc,uVar1);
    if ((ulong)bVar2 < 9) {
      uVar7 = *(undefined4 *)(&UNK_10e0393c4 + (ulong)bVar2 * 4);
    }
    else {
      uVar7 = 4;
    }
    uStack_68 = (undefined *)CONCAT44(uVar7,uVar6);
    iVar5 = 0xf5a359d;
    FUN_109c60fbc(&UNK_10f5a359d,0xc,&uStack_68,2);
    _memcpy(uVar8,uVar9,(long)iVar5);
  }
  return;
}



/* Entry: 109c11c4c; end: 109c11d2b;  */

void FUN_109c11c4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_110b2bd90;
  piVar2 = (int *)(param_1 + 1);
  piVar2[0] = 0;
  piVar2[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 1);
    if (iVar1 != 0) {
      _memcpy((long)param_1 + 0xc,(long)param_2 + 0xc,(long)iVar1 << 2);
    }
    *piVar2 = iVar1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 4,param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 109c11d2c; end: 109c11f87;  */

void FUN_109c11d2c(long param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  uint *puVar8;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char cStack_61;
  
  plVar7 = (long *)(param_1 + 0x40);
  if (*plVar7 != 0) {
    puVar8 = (uint *)(param_1 + 8);
    bVar1 = *(byte *)(param_1 + 0x48);
    uVar6 = *puVar8 & ((int)*puVar8 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar6) {
      uVar6 = 5;
    }
    uStack_78 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_1 + 0xc,uVar6);
    if ((ulong)bVar1 < 9) {
      uStack_74 = *(undefined4 *)(&UNK_10e0393c4 + (ulong)bVar1 * 4);
    }
    else {
      uStack_74 = 4;
    }
    iVar3 = 0xf5a359d;
    FUN_109c60fbc(&UNK_10f5a359d,0xc,&uStack_78,2);
    uVar6 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar6) {
      uVar6 = 5;
    }
    uVar2 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar6);
    uStack_78 = uVar2;
    if (param_3 < 9) {
      uStack_74 = *(undefined4 *)(&UNK_10e0393c4 + (ulong)param_3 * 4);
    }
    else {
      uStack_74 = 4;
    }
    iVar4 = 0xf5a359d;
    FUN_109c60fbc(&UNK_10f5a359d,0xc,&uStack_78,2);
    if (iVar3 == iVar4) {
      if (puVar8 != param_2) {
        uVar6 = 0;
        if (*param_2 != 0) {
          _memmove(param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
          uVar6 = *param_2;
        }
        *puVar8 = uVar6;
      }
      *(char *)(param_1 + 0x48) = (char)param_3;
      return;
    }
  }
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*plVar7 != 0)) {
    __ZdaPv();
    *plVar7 = 0;
  }
  puVar8 = (uint *)(param_1 + 8);
  if (puVar8 == param_2) {
    uVar6 = *puVar8;
  }
  else {
    uVar6 = 0;
    if (*param_2 != 0) {
      _memmove(param_1 + 0xc,param_2 + 1,(long)(int)*param_2 << 2);
      uVar6 = *param_2;
    }
    *puVar8 = uVar6;
  }
  *(char *)(param_1 + 0x48) = (char)param_3;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar6) {
    uVar6 = 5;
  }
  uVar2 = 0xf5a3554;
  FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_1 + 0xc,uVar6);
  uStack_78 = uVar2;
  if (param_3 < 9) {
    uStack_74 = *(undefined4 *)(&UNK_10e0393c4 + (ulong)param_3 * 4);
  }
  else {
    uStack_74 = 4;
  }
  puVar5 = &UNK_10f5a359d;
  FUN_109c60fbc(&UNK_10f5a359d,0xc,&uStack_78,2);
  func_0x000107c31940(&uStack_78,&UNK_10f5a3526);
  FUN_109c10148(puVar5,&uStack_78,plVar7);
  if (cStack_61 < '\0') {
    __ZdlPv(CONCAT44(uStack_74,uStack_78));
  }
  return;
}



/* Entry: 109c11f88; end: 109c124b3;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_109c11f88(ulong *param_1,ulong **param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *extraout_x8;
  uint *puVar13;
  ushort *puVar14;
  ulong *puVar15;
  float *pfVar16;
  byte *pbVar17;
  uint *extraout_x8_00;
  long lVar18;
  ulong *puVar19;
  undefined2 *puVar20;
  float *pfVar21;
  byte bVar22;
  ushort uVar23;
  undefined1 *puVar24;
  ulong *puVar25;
  undefined2 *puVar26;
  undefined *puVar27;
  uint *puVar28;
  ulong *puVar29;
  long lVar30;
  ulong *unaff_x19;
  ulong unaff_x20;
  uint *puVar31;
  uint *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar32;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar33;
  long unaff_x26;
  uint *unaff_x27;
  uint *unaff_x28;
  undefined1 **ppuVar34;
  code *pcVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_238 [88];
  undefined *puStack_1e0;
  ulong **ppuStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  ulong uStack_1c0;
  ulong *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 auStack_190 [8];
  long lStack_188;
  ulong uStack_180;
  uint *puStack_178;
  ulong *apuStack_170 [2];
  long lStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  long lStack_148;
  long lStack_138;
  uint *puStack_130;
  uint *puStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  uint *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong *puStack_c8;
  uint *puStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  uint *puStack_a8;
  ulong *apuStack_a0 [2];
  long lStack_90;
  ulong *puStack_88;
  uint *puStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_1;
  if ((*(uint *)((long)param_1 + 0x3c) != 0) && (unaff_x19 = param_1, (uint)param_1[1] == 4)) {
    puVar31 = (uint *)((long)param_1 + 0xc);
    uVar4 = *puVar31;
    unaff_x21 = (uint *)(ulong)uVar4;
    puStack_c8 = param_1 + 2;
    uVar8 = (uint)*puStack_c8;
    unaff_x22 = (ulong)uVar8;
    unaff_x24 = (long)(int)uVar8;
    puVar15 = (ulong *)&UNK_10f5a3554;
    param_2 = (ulong **)0x1a;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,puVar31,4);
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (int)puVar15 / (int)uVar4;
    }
    uVar10 = (ulong)uVar1;
    bVar22 = (byte)param_1[9];
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = (int)uVar1 / (int)uVar8;
    }
    uStack_b0 = (ulong)uVar2;
    puStack_c0 = puVar31;
    puStack_a8 = unaff_x21;
    if (bVar22 < 4) {
      if (bVar22 == 1) {
        if (0 < (int)uVar4) {
          unaff_x26 = 0;
          unaff_x27 = (uint *)0x0;
          unaff_x28 = (uint *)(long)(int)uVar2;
          lStack_b8 = (long)(int)uVar1;
          unaff_x25 = unaff_x24 * 4;
          do {
            iVar9 = (int)uStack_b0;
            unaff_x21 = (uint *)(ulong)(0 < iVar9);
            unaff_x23 = param_1[8];
            puStack_88 = (ulong *)(unaff_x23 + (long)unaff_x27 * lStack_b8 * 4);
            param_2 = &puStack_88;
            puStack_80 = unaff_x28;
            lStack_78 = unaff_x24;
            FUN_109c14490(apuStack_a0);
            if (0 < iVar9) {
              puVar31 = (uint *)0x0;
              puVar13 = (uint *)(unaff_x23 + unaff_x26);
              puVar15 = apuStack_a0[0];
              do {
                puVar28 = puVar13;
                puVar6 = puVar15;
                lVar18 = unaff_x24;
                if (0 < (int)uVar8) {
                  do {
                    *puVar28 = (uint)*puVar6;
                    puVar6 = (ulong *)((long)puVar6 + lStack_90 * 4);
                    lVar18 = lVar18 + -1;
                    puVar28 = puVar28 + 1;
                  } while (lVar18 != 0);
                }
                puVar31 = (uint *)((long)puVar31 + 1);
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar13 = puVar13 + unaff_x24;
              } while (puVar31 != unaff_x28);
            }
            puVar15 = apuStack_a0[0];
            _free();
            unaff_x27 = (uint *)((long)unaff_x27 + 1);
            unaff_x26 = unaff_x26 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
          } while (unaff_x27 != puStack_a8);
        }
      }
      else {
        if (bVar22 == 2) goto LAB_109c121f8;
        if (bVar22 == 3) goto LAB_109c1212c;
      }
    }
    else if (bVar22 < 6) {
      if (bVar22 == 4) {
        if (0 < (int)uVar4) {
          unaff_x26 = 0;
          unaff_x27 = (uint *)0x0;
          unaff_x28 = (uint *)(long)(int)uVar2;
          lStack_b8 = (long)(int)uVar1;
          do {
            iVar9 = (int)uStack_b0;
            unaff_x23 = (ulong)(0 < iVar9);
            unaff_x25 = param_1[8];
            puStack_88 = (ulong *)(unaff_x25 + (long)unaff_x27 * lStack_b8 * 4);
            param_2 = &puStack_88;
            puStack_80 = unaff_x28;
            lStack_78 = unaff_x24;
            FUN_109c13c04(apuStack_a0);
            if (0 < iVar9) {
              puVar31 = (uint *)0x0;
              puVar13 = (uint *)(unaff_x25 + unaff_x26);
              puVar15 = apuStack_a0[0];
              do {
                puVar28 = puVar13;
                puVar6 = puVar15;
                lVar18 = unaff_x24;
                if (0 < (int)uVar8) {
                  do {
                    *puVar28 = (uint)*puVar6;
                    puVar6 = (ulong *)((long)puVar6 + lStack_90 * 4);
                    lVar18 = lVar18 + -1;
                    puVar28 = puVar28 + 1;
                  } while (lVar18 != 0);
                }
                puVar31 = (uint *)((long)puVar31 + 1);
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar13 = puVar13 + unaff_x24;
              } while (puVar31 != unaff_x28);
            }
            puVar15 = apuStack_a0[0];
            _free();
            unaff_x27 = (uint *)((long)unaff_x27 + 1);
            unaff_x26 = unaff_x26 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
            unaff_x21 = (uint *)(unaff_x24 * 4);
          } while (unaff_x27 != puStack_a8);
        }
      }
      else if ((bVar22 == 5) && (0 < (int)uVar4)) {
        unaff_x26 = 0;
        unaff_x27 = (uint *)0x0;
        unaff_x28 = (uint *)(long)(int)uVar2;
        lStack_b8 = (long)(int)uVar1;
        do {
          iVar9 = (int)uStack_b0;
          unaff_x23 = (ulong)(0 < iVar9);
          unaff_x25 = param_1[8];
          puStack_88 = (ulong *)(unaff_x25 + (long)unaff_x27 * lStack_b8 * 8);
          param_2 = &puStack_88;
          puStack_80 = unaff_x28;
          lStack_78 = unaff_x24;
          FUN_109c13d40(apuStack_a0);
          if (0 < iVar9) {
            puVar31 = (uint *)0x0;
            puVar6 = (ulong *)(unaff_x25 + unaff_x26);
            puVar15 = apuStack_a0[0];
            do {
              puVar19 = puVar6;
              puVar5 = puVar15;
              lVar18 = unaff_x24;
              if (0 < (int)uVar8) {
                do {
                  *puVar19 = *puVar5;
                  puVar5 = puVar5 + lStack_90;
                  lVar18 = lVar18 + -1;
                  puVar19 = puVar19 + 1;
                } while (lVar18 != 0);
              }
              puVar31 = (uint *)((long)puVar31 + 1);
              puVar15 = puVar15 + 1;
              puVar6 = puVar6 + unaff_x24;
            } while (puVar31 != unaff_x28);
          }
          puVar15 = apuStack_a0[0];
          _free();
          unaff_x27 = (uint *)((long)unaff_x27 + 1);
          unaff_x26 = unaff_x26 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3);
          unaff_x21 = (uint *)(unaff_x24 * 8);
        } while (unaff_x27 != puStack_a8);
      }
    }
    else if (bVar22 == 6) {
LAB_109c121f8:
      if (0 < (int)uVar4) {
        unaff_x26 = 0;
        unaff_x27 = (uint *)0x0;
        puVar31 = (uint *)(long)(int)uVar2;
        do {
          iVar9 = (int)uStack_b0;
          unaff_x25 = (ulong)(0 < iVar9);
          unaff_x23 = param_1[8];
          puStack_88 = (ulong *)(unaff_x23 + (long)unaff_x27 * (long)(int)uVar1);
          param_2 = &puStack_88;
          puStack_80 = puVar31;
          lStack_78 = unaff_x24;
          FUN_109c139a4(apuStack_a0);
          if (0 < iVar9) {
            puVar13 = (uint *)0x0;
            puVar3 = (undefined1 *)(unaff_x23 + unaff_x26);
            puVar15 = apuStack_a0[0];
            do {
              puVar24 = puVar3;
              puVar6 = puVar15;
              lVar18 = unaff_x24;
              if (0 < (int)uVar8) {
                do {
                  *puVar24 = (char)*puVar6;
                  puVar6 = (ulong *)((long)puVar6 + lStack_90);
                  lVar18 = lVar18 + -1;
                  puVar24 = puVar24 + 1;
                } while (lVar18 != 0);
              }
              puVar13 = (uint *)((long)puVar13 + 1);
              puVar15 = (ulong *)((long)puVar15 + 1);
              puVar3 = puVar3 + unaff_x24;
            } while (puVar13 != puVar31);
          }
          puVar15 = apuStack_a0[0];
          _free();
          unaff_x27 = (uint *)((long)unaff_x27 + 1);
          unaff_x26 = unaff_x26 + (int)uVar1;
          unaff_x21 = puVar31;
        } while (unaff_x27 != puStack_a8);
      }
    }
    else if (bVar22 == 7) {
LAB_109c1212c:
      if (0 < (int)uVar4) {
        unaff_x26 = 0;
        unaff_x27 = (uint *)0x0;
        unaff_x28 = (uint *)(long)(int)uVar2;
        lStack_b8 = (long)(int)uVar1;
        unaff_x25 = unaff_x24 * 2;
        do {
          iVar9 = (int)uStack_b0;
          unaff_x23 = param_1[8];
          puStack_88 = (ulong *)(unaff_x23 + (long)unaff_x27 * lStack_b8 * 2);
          param_2 = &puStack_88;
          puStack_80 = unaff_x28;
          lStack_78 = unaff_x24;
          FUN_109c13ad0(apuStack_a0);
          if (0 < iVar9) {
            puVar31 = (uint *)0x0;
            puVar20 = (undefined2 *)(unaff_x23 + unaff_x26);
            puVar15 = apuStack_a0[0];
            do {
              puVar26 = puVar20;
              puVar6 = puVar15;
              lVar18 = unaff_x24;
              if (0 < (int)uVar8) {
                do {
                  *puVar26 = (short)*puVar6;
                  puVar6 = (ulong *)((long)puVar6 + lStack_90 * 2);
                  lVar18 = lVar18 + -1;
                  puVar26 = puVar26 + 1;
                } while (lVar18 != 0);
              }
              puVar31 = (uint *)((long)puVar31 + 1);
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar20 = puVar20 + unaff_x24;
            } while (puVar31 != unaff_x28);
          }
          puVar15 = apuStack_a0[0];
          _free();
          unaff_x27 = (uint *)((long)unaff_x27 + 1);
          unaff_x26 = unaff_x26 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1);
          unaff_x21 = (uint *)(ulong)(0 < iVar9);
        } while (unaff_x27 != puStack_a8);
      }
    }
    unaff_x20 = (ulong)(int)(uint)param_1[1];
    if ((uint)param_1[1] != 2) {
      param_2 = (ulong **)((long)param_1 + 0x14);
      puVar15 = puStack_c8;
      _memmove(puStack_c8,param_2,unaff_x20 * 4 + -8);
    }
    puStack_c0[unaff_x20 - 1] = uVar8;
    *(uint *)((long)param_1 + 0x3c) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar15;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_d8 = FUN_109c124b4;
  ppuVar34 = &puStack_e0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar15;
  puVar5 = unaff_x19;
  puVar31 = unaff_x21;
  uVar10 = unaff_x22;
  uVar32 = unaff_x23;
  puStack_130 = unaff_x28;
  puStack_128 = unaff_x27;
  lStack_120 = unaff_x26;
  uStack_118 = unaff_x25;
  lStack_110 = unaff_x24;
  uStack_108 = unaff_x23;
  uStack_100 = unaff_x22;
  puStack_f8 = unaff_x21;
  uStack_f0 = unaff_x20;
  puStack_e8 = unaff_x19;
  puStack_e0 = &stack0xfffffffffffffff0;
  if ((*(uint *)((long)puVar15 + 0x3c) != 1) && (puVar5 = puVar15, (uint)puVar15[1] == 4)) {
    uVar8 = *(uint *)((long)puVar15 + 0xc);
    uVar10 = (ulong)uVar8;
    uVar4 = (uint)puVar15[3];
    puVar31 = (uint *)(ulong)uVar4;
    uVar32 = (ulong)(int)uVar4;
    puVar6 = (ulong *)&UNK_10f5a3554;
    param_2 = (ulong **)0x1a;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,(uint *)((long)puVar15 + 0xc),4);
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = (int)puVar6 / (int)uVar8;
    }
    uVar11 = (ulong)uVar1;
    bVar22 = (byte)puVar15[9];
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (int)uVar1 / (int)uVar4;
    }
    unaff_x20 = (ulong)uVar2;
    uStack_180 = uVar10;
    puStack_178 = puVar31;
    if (bVar22 < 4) {
      if (bVar22 == 1) {
        if (0 < (int)uVar8) {
          unaff_x24 = 0;
          uVar33 = 0;
          lStack_188 = (long)(int)uVar1;
          uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | unaff_x20 << 2;
          do {
            iVar9 = (int)puStack_178;
            puVar31 = (uint *)puVar15[8];
            puStack_158 = (ulong *)(puVar31 + uVar33 * lStack_188);
            param_2 = &puStack_158;
            uStack_150 = uVar32;
            lStack_148 = (long)(int)uVar2;
            FUN_109c14490(apuStack_170);
            if (0 < iVar9) {
              uVar12 = 0;
              puVar13 = (uint *)((long)puVar31 + unaff_x24);
              puVar6 = apuStack_170[0];
              do {
                puVar28 = puVar13;
                puVar19 = puVar6;
                lVar18 = (long)(int)uVar2;
                if (0 < (int)uVar2) {
                  do {
                    *puVar28 = (uint)*puVar19;
                    puVar19 = (ulong *)((long)puVar19 + lStack_160 * 4);
                    lVar18 = lVar18 + -1;
                    puVar28 = puVar28 + 1;
                  } while (lVar18 != 0);
                }
                uVar12 = uVar12 + 1;
                puVar6 = (ulong *)((long)puVar6 + 4);
                puVar13 = (uint *)((long)puVar13 + uVar10);
              } while (uVar12 != uVar32);
            }
            puVar6 = apuStack_170[0];
            _free();
            uVar33 = uVar33 + 1;
            unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2);
          } while (uVar33 != uStack_180);
        }
      }
      else {
        if (bVar22 == 2) goto LAB_109c1271c;
        if (bVar22 == 3) goto LAB_109c12650;
      }
    }
    else if (bVar22 < 6) {
      if (bVar22 == 4) {
        if (0 < (int)uVar8) {
          unaff_x24 = 0;
          uVar33 = 0;
          lStack_188 = (long)(int)uVar1;
          do {
            iVar9 = (int)puStack_178;
            puVar31 = (uint *)(ulong)(0 < iVar9);
            uVar10 = puVar15[8];
            puStack_158 = (ulong *)(uVar10 + uVar33 * lStack_188 * 4);
            param_2 = &puStack_158;
            uStack_150 = uVar32;
            lStack_148 = (long)(int)uVar2;
            FUN_109c13c04(apuStack_170);
            if (0 < iVar9) {
              uVar12 = 0;
              puVar13 = (uint *)(uVar10 + unaff_x24);
              puVar6 = apuStack_170[0];
              do {
                puVar28 = puVar13;
                puVar19 = puVar6;
                lVar18 = (long)(int)uVar2;
                if (0 < (int)uVar2) {
                  do {
                    *puVar28 = (uint)*puVar19;
                    puVar19 = (ulong *)((long)puVar19 + lStack_160 * 4);
                    lVar18 = lVar18 + -1;
                    puVar28 = puVar28 + 1;
                  } while (lVar18 != 0);
                }
                uVar12 = uVar12 + 1;
                puVar6 = (ulong *)((long)puVar6 + 4);
                puVar13 = (uint *)((long)puVar13 +
                                  (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | unaff_x20 << 2));
              } while (uVar12 != uVar32);
            }
            puVar6 = apuStack_170[0];
            _free();
            uVar33 = uVar33 + 1;
            unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2);
          } while (uVar33 != uStack_180);
        }
      }
      else if ((bVar22 == 5) && (0 < (int)uVar8)) {
        unaff_x24 = 0;
        uVar33 = 0;
        lStack_188 = (long)(int)uVar1;
        do {
          iVar9 = (int)puStack_178;
          puVar31 = (uint *)(ulong)(0 < iVar9);
          uVar10 = puVar15[8];
          puStack_158 = (ulong *)(uVar10 + uVar33 * lStack_188 * 8);
          param_2 = &puStack_158;
          uStack_150 = uVar32;
          lStack_148 = (long)(int)uVar2;
          FUN_109c13d40(apuStack_170);
          if (0 < iVar9) {
            uVar12 = 0;
            puVar19 = (ulong *)(uVar10 + unaff_x24);
            puVar6 = apuStack_170[0];
            do {
              puVar25 = puVar19;
              puVar29 = puVar6;
              lVar18 = (long)(int)uVar2;
              if (0 < (int)uVar2) {
                do {
                  *puVar25 = *puVar29;
                  puVar29 = puVar29 + lStack_160;
                  lVar18 = lVar18 + -1;
                  puVar25 = puVar25 + 1;
                } while (lVar18 != 0);
              }
              uVar12 = uVar12 + 1;
              puVar6 = puVar6 + 1;
              puVar19 = (ulong *)((long)puVar19 +
                                 (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | unaff_x20 << 3));
            } while (uVar12 != uVar32);
          }
          puVar6 = apuStack_170[0];
          _free();
          uVar33 = uVar33 + 1;
          unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
        } while (uVar33 != uStack_180);
      }
    }
    else if (bVar22 == 6) {
LAB_109c1271c:
      if (0 < (int)uVar8) {
        unaff_x24 = 0;
        uVar11 = 0;
        lVar18 = (long)(int)uVar2;
        uVar10 = (ulong)(int)uVar1;
        do {
          iVar9 = (int)puStack_178;
          puVar31 = (uint *)puVar15[8];
          puStack_158 = (ulong *)((long)puVar31 + uVar11 * uVar10);
          param_2 = &puStack_158;
          uStack_150 = uVar32;
          lStack_148 = lVar18;
          FUN_109c139a4(apuStack_170);
          if (0 < iVar9) {
            uVar33 = 0;
            puVar7 = (undefined *)((long)puVar31 + unaff_x24);
            puVar6 = apuStack_170[0];
            do {
              puVar27 = puVar7;
              puVar19 = puVar6;
              lVar30 = lVar18;
              if (0 < (int)uVar2) {
                do {
                  *puVar27 = (char)*puVar19;
                  puVar19 = (ulong *)((long)puVar19 + lStack_160);
                  lVar30 = lVar30 + -1;
                  puVar27 = puVar27 + 1;
                } while (lVar30 != 0);
              }
              uVar33 = uVar33 + 1;
              puVar6 = (ulong *)((long)puVar6 + 1);
              puVar7 = puVar7 + lVar18;
            } while (uVar33 != uVar32);
          }
          puVar6 = apuStack_170[0];
          _free();
          uVar11 = uVar11 + 1;
          unaff_x24 = unaff_x24 + uVar10;
        } while (uVar11 != uStack_180);
      }
    }
    else if (bVar22 == 7) {
LAB_109c12650:
      if (0 < (int)uVar8) {
        unaff_x24 = 0;
        uVar33 = 0;
        lStack_188 = (long)(int)uVar1;
        uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | unaff_x20 << 1;
        do {
          iVar9 = (int)puStack_178;
          puVar31 = (uint *)puVar15[8];
          puStack_158 = (ulong *)((long)puVar31 + uVar33 * lStack_188 * 2);
          param_2 = &puStack_158;
          uStack_150 = uVar32;
          lStack_148 = (long)(int)uVar2;
          FUN_109c13ad0(apuStack_170);
          if (0 < iVar9) {
            uVar12 = 0;
            puVar20 = (undefined2 *)((long)puVar31 + unaff_x24);
            puVar6 = apuStack_170[0];
            do {
              puVar26 = puVar20;
              puVar19 = puVar6;
              lVar18 = (long)(int)uVar2;
              if (0 < (int)uVar2) {
                do {
                  *puVar26 = (short)*puVar19;
                  puVar19 = (ulong *)((long)puVar19 + lStack_160 * 2);
                  lVar18 = lVar18 + -1;
                  puVar26 = puVar26 + 1;
                } while (lVar18 != 0);
              }
              uVar12 = uVar12 + 1;
              puVar6 = (ulong *)((long)puVar6 + 2);
              puVar20 = (undefined2 *)((long)puVar20 + uVar10);
            } while (uVar12 != uVar32);
          }
          puVar6 = apuStack_170[0];
          _free();
          uVar33 = uVar33 + 1;
          unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
        } while (uVar33 != uStack_180);
      }
    }
    if ((uint)puVar15[1] != 2) {
      puVar6 = (ulong *)((long)puVar15 + 0x14);
      param_2 = (ulong **)(puVar15 + 2);
      _memmove(puVar6,param_2,(long)(int)(uint)puVar15[1] * 4 + -8);
    }
    *(uint *)(puVar15 + 2) = (uint)puStack_178;
    *(uint *)((long)puVar15 + 0x3c) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar4 = (uint)puVar6;
  pcVar35 = FUN_109c129d4;
  __Unwind_Resume();
  if (8 < uVar4) {
    pcStack_198 = FUN_109c129d4;
    puVar7 = &UNK_10f5a35e0;
    ppuStack_1a0 = ppuVar34;
    func_0x000105688514();
    pcStack_1a8 = FUN_109c12a04;
    uVar4 = *(uint *)(puVar7 + 8) & ((int)*(uint *)(puVar7 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar4) {
      uVar4 = 5;
    }
    puVar31 = (uint *)&UNK_10f5a3554;
    uVar8 = 0x1a;
    uStack_1c0 = unaff_x20;
    puStack_1b8 = puVar5;
    puStack_1b0 = (undefined1 *)&ppuStack_1a0;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,puVar7 + 0xc,uVar4);
    bVar22 = puVar7[0x48];
    puVar13 = (uint *)(ulong)bVar22;
    iVar9 = (int)puVar31;
    if (bVar22 < 4) {
      if (bVar22 < 2) {
        pfVar16 = *(float **)(puVar7 + 0x40);
        lVar18 = (long)iVar9;
        bVar22 = *(byte *)(param_2 + 9);
        if (bVar22 < 4) {
          if (bVar22 == 1) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 2;
              pfVar21 = (float *)param_2[8];
              do {
                *pfVar21 = *pfVar16;
                lVar18 = lVar18 + -4;
                pfVar16 = pfVar16 + 1;
                pfVar21 = pfVar21 + 1;
              } while (lVar18 != 0);
            }
          }
          else if (bVar22 == 2) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 2;
              puVar15 = param_2[8];
              do {
                fVar37 = *pfVar16;
                fVar38 = 127.0;
                if (fVar37 <= 127.0) {
                  fVar38 = fVar37;
                }
                fVar36 = -128.0;
                if (-128.0 <= fVar37) {
                  fVar36 = fVar38;
                }
                *(char *)puVar15 = (char)(int)fVar36;
                lVar18 = lVar18 + -4;
                pfVar16 = pfVar16 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 3) && (iVar9 != 0)) {
            lVar18 = lVar18 << 2;
            puVar15 = param_2[8];
            do {
              fVar37 = *pfVar16;
              fVar38 = 32767.0;
              if (fVar37 <= 32767.0) {
                fVar38 = fVar37;
              }
              fVar36 = -32768.0;
              if (-32768.0 <= fVar37) {
                fVar36 = fVar38;
              }
              *(short *)puVar15 = (short)(int)fVar36;
              lVar18 = lVar18 + -4;
              pfVar16 = pfVar16 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 < 6) {
          if (bVar22 == 4) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 2;
              puVar15 = param_2[8];
              do {
                fVar37 = *pfVar16;
                fVar38 = 2.1474836e+09;
                if (fVar37 <= 2.1474836e+09) {
                  fVar38 = fVar37;
                }
                fVar36 = -2.1474836e+09;
                if (-2.1474836e+09 <= fVar37) {
                  fVar36 = fVar38;
                }
                *(int *)puVar15 = (int)fVar36;
                lVar18 = lVar18 + -4;
                pfVar16 = pfVar16 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 5) && (iVar9 != 0)) {
            lVar18 = lVar18 << 2;
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)*pfVar16;
              lVar18 = lVar18 + -4;
              pfVar16 = pfVar16 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 == 6) {
          if (iVar9 != 0) {
            lVar18 = lVar18 << 2;
            puVar15 = param_2[8];
            do {
              fVar37 = *pfVar16;
              fVar38 = 255.0;
              if (fVar37 <= 255.0) {
                fVar38 = fVar37;
              }
              fVar36 = 0.0;
              if (0.0 <= fVar37) {
                fVar36 = fVar38;
              }
              *(char *)puVar15 = (char)(int)fVar36;
              lVar18 = lVar18 + -4;
              pfVar16 = pfVar16 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 7) && (iVar9 != 0)) {
          lVar18 = lVar18 << 2;
          puVar15 = param_2[8];
          do {
            fVar37 = *pfVar16;
            fVar38 = 65535.0;
            if (fVar37 <= 65535.0) {
              fVar38 = fVar37;
            }
            fVar36 = 0.0;
            if (0.0 <= fVar37) {
              fVar36 = fVar38;
            }
            *(short *)puVar15 = (short)(int)fVar36;
            lVar18 = lVar18 + -4;
            pfVar16 = pfVar16 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar18 != 0);
        }
      }
      else if (bVar22 == 2) {
        pbVar17 = *(byte **)(puVar7 + 0x40);
        lVar18 = (long)iVar9;
        bVar22 = *(byte *)(param_2 + 9);
        if (bVar22 < 4) {
          if (bVar22 == 1) {
            if (iVar9 != 0) {
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(int)(char)*pbVar17;
                lVar18 = lVar18 + -1;
                pbVar17 = pbVar17 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar18 != 0);
            }
          }
          else if (bVar22 == 2) {
            if (iVar9 != 0) {
              puVar15 = param_2[8];
              do {
                *(byte *)puVar15 = *pbVar17;
                lVar18 = lVar18 + -1;
                pbVar17 = pbVar17 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 3) && (iVar9 != 0)) {
            puVar15 = param_2[8];
            do {
              *(short *)puVar15 = (short)(char)*pbVar17;
              lVar18 = lVar18 + -1;
              pbVar17 = pbVar17 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 < 6) {
          if (bVar22 == 4) {
            if (iVar9 != 0) {
              puVar15 = param_2[8];
              do {
                *(int *)puVar15 = (int)(char)*pbVar17;
                lVar18 = lVar18 + -1;
                pbVar17 = pbVar17 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 5) && (iVar9 != 0)) {
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)(char)*pbVar17;
              lVar18 = lVar18 + -1;
              pbVar17 = pbVar17 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 == 6) {
          if (iVar9 != 0) {
            puVar15 = param_2[8];
            do {
              *(byte *)puVar15 = *pbVar17 & ((char)*pbVar17 >> 0x1f ^ 0xffU);
              lVar18 = lVar18 + -1;
              pbVar17 = pbVar17 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 7) && (iVar9 != 0)) {
          puVar15 = param_2[8];
          do {
            *(short *)puVar15 = (short)(char)*pbVar17;
            lVar18 = lVar18 + -1;
            pbVar17 = pbVar17 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar18 != 0);
        }
      }
      else {
        if (bVar22 != 3) goto LAB_109c134a8;
        puVar14 = *(ushort **)(puVar7 + 0x40);
        lVar18 = (long)iVar9;
        bVar22 = *(byte *)(param_2 + 9);
        if (bVar22 < 4) {
          if (bVar22 == 1) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 1;
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(int)(short)*puVar14;
                lVar18 = lVar18 + -2;
                puVar14 = puVar14 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar18 != 0);
            }
          }
          else if (bVar22 == 2) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 1;
              puVar15 = param_2[8];
              do {
                uVar23 = *puVar14;
                if ((short)uVar23 < -0x7f) {
                  uVar23 = 0xff80;
                }
                if (0x7e < (short)uVar23) {
                  uVar23 = 0x7f;
                }
                *(char *)puVar15 = (char)uVar23;
                lVar18 = lVar18 + -2;
                puVar14 = puVar14 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 3) && (iVar9 != 0)) {
            lVar18 = lVar18 << 1;
            puVar15 = param_2[8];
            do {
              *(ushort *)puVar15 = *puVar14;
              lVar18 = lVar18 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 < 6) {
          if (bVar22 == 4) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 1;
              puVar15 = param_2[8];
              do {
                *(int *)puVar15 = (int)(short)*puVar14;
                lVar18 = lVar18 + -2;
                puVar14 = puVar14 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 5) && (iVar9 != 0)) {
            lVar18 = lVar18 << 1;
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)(short)*puVar14;
              lVar18 = lVar18 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 == 6) {
          if (iVar9 != 0) {
            lVar18 = lVar18 << 1;
            puVar15 = param_2[8];
            do {
              uVar23 = *puVar14 & ((short)*puVar14 >> 0x1f ^ 0xffffU);
              if (0xfe < (short)uVar23) {
                uVar23 = 0xff;
              }
              *(char *)puVar15 = (char)uVar23;
              lVar18 = lVar18 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 7) && (iVar9 != 0)) {
          lVar18 = lVar18 << 1;
          puVar15 = param_2[8];
          do {
            *(ushort *)puVar15 = *puVar14 & ((short)*puVar14 >> 0x1f ^ 0xffffU);
            lVar18 = lVar18 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar18 != 0);
        }
      }
    }
    else if (bVar22 < 6) {
      if (bVar22 == 4) {
        puVar13 = *(uint **)(puVar7 + 0x40);
        lVar18 = (long)iVar9;
        bVar22 = *(byte *)(param_2 + 9);
        if (bVar22 < 4) {
          if (bVar22 == 1) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 2;
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(int)*puVar13;
                lVar18 = lVar18 + -4;
                puVar13 = puVar13 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar18 != 0);
            }
          }
          else if (bVar22 == 2) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 2;
              puVar15 = param_2[8];
              do {
                uVar4 = *puVar13;
                if ((int)uVar4 < -0x7f) {
                  uVar4 = 0xffffff80;
                }
                if (0x7e < (int)uVar4) {
                  uVar4 = 0x7f;
                }
                *(char *)puVar15 = (char)uVar4;
                lVar18 = lVar18 + -4;
                puVar13 = puVar13 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 3) && (iVar9 != 0)) {
            lVar18 = lVar18 << 2;
            puVar15 = param_2[8];
            do {
              uVar4 = *puVar13;
              if ((int)uVar4 < -0x7fff) {
                uVar4 = 0xffff8000;
              }
              if (0x7ffe < (int)uVar4) {
                uVar4 = 0x7fff;
              }
              *(short *)puVar15 = (short)uVar4;
              lVar18 = lVar18 + -4;
              puVar13 = puVar13 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 < 6) {
          if (bVar22 == 4) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 2;
              puVar15 = param_2[8];
              do {
                *(uint *)puVar15 = *puVar13;
                lVar18 = lVar18 + -4;
                puVar13 = puVar13 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 5) && (iVar9 != 0)) {
            lVar18 = lVar18 << 2;
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)(int)*puVar13;
              lVar18 = lVar18 + -4;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 == 6) {
          if (iVar9 != 0) {
            lVar18 = lVar18 << 2;
            puVar15 = param_2[8];
            do {
              uVar4 = *puVar13 & ((int)*puVar13 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar4) {
                uVar4 = 0xff;
              }
              *(char *)puVar15 = (char)uVar4;
              lVar18 = lVar18 + -4;
              puVar13 = puVar13 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 7) && (iVar9 != 0)) {
          lVar18 = lVar18 << 2;
          puVar15 = param_2[8];
          do {
            uVar4 = *puVar13 & ((int)*puVar13 >> 0x1f ^ 0xffffffffU);
            if (0xfffe < (int)uVar4) {
              uVar4 = 0xffff;
            }
            *(short *)puVar15 = (short)uVar4;
            lVar18 = lVar18 + -4;
            puVar13 = puVar13 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar18 != 0);
        }
      }
      else {
        if (bVar22 != 5) goto LAB_109c134a8;
        puVar15 = *(ulong **)(puVar7 + 0x40);
        lVar18 = (long)iVar9;
        bVar22 = *(byte *)(param_2 + 9);
        if (bVar22 < 4) {
          if (bVar22 == 1) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 3;
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(long)*puVar15;
                lVar18 = lVar18 + -8;
                puVar15 = puVar15 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar18 != 0);
            }
          }
          else if (bVar22 == 2) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 3;
              puVar6 = param_2[8];
              do {
                uVar10 = *puVar15;
                if ((long)uVar10 < -0x7f) {
                  uVar10 = 0xffffffffffffff80;
                }
                if (0x7e < (long)uVar10) {
                  uVar10 = 0x7f;
                }
                *(char *)puVar6 = (char)uVar10;
                lVar18 = lVar18 + -8;
                puVar15 = puVar15 + 1;
                puVar6 = (ulong *)((long)puVar6 + 1);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 3) && (iVar9 != 0)) {
            lVar18 = lVar18 << 3;
            puVar6 = param_2[8];
            do {
              uVar10 = *puVar15;
              if ((long)uVar10 < -0x7fff) {
                uVar10 = 0xffffffffffff8000;
              }
              if (0x7ffe < (long)uVar10) {
                uVar10 = 0x7fff;
              }
              *(short *)puVar6 = (short)uVar10;
              lVar18 = lVar18 + -8;
              puVar15 = puVar15 + 1;
              puVar6 = (ulong *)((long)puVar6 + 2);
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 < 6) {
          if (bVar22 == 4) {
            if (iVar9 != 0) {
              lVar18 = lVar18 << 3;
              puVar6 = param_2[8];
              do {
                uVar10 = *puVar15;
                if ((long)uVar10 < -0x7fffffff) {
                  uVar10 = 0xffffffff80000000;
                }
                if (0x7ffffffe < (long)uVar10) {
                  uVar10 = 0x7fffffff;
                }
                *(int *)puVar6 = (int)uVar10;
                lVar18 = lVar18 + -8;
                puVar15 = puVar15 + 1;
                puVar6 = (ulong *)((long)puVar6 + 4);
              } while (lVar18 != 0);
            }
          }
          else if ((bVar22 == 5) && (iVar9 != 0)) {
            lVar18 = lVar18 << 3;
            puVar6 = param_2[8];
            do {
              *puVar6 = *puVar15;
              lVar18 = lVar18 + -8;
              puVar15 = puVar15 + 1;
              puVar6 = puVar6 + 1;
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 == 6) {
          if (iVar9 != 0) {
            lVar18 = lVar18 << 3;
            puVar6 = param_2[8];
            do {
              uVar10 = *puVar15 & ((long)*puVar15 >> 0x3f ^ 0xffffffffffffffffU);
              if (0xfe < (long)uVar10) {
                uVar10 = 0xff;
              }
              *(char *)puVar6 = (char)uVar10;
              lVar18 = lVar18 + -8;
              puVar15 = puVar15 + 1;
              puVar6 = (ulong *)((long)puVar6 + 1);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 7) && (iVar9 != 0)) {
          lVar18 = lVar18 << 3;
          puVar6 = param_2[8];
          do {
            uVar10 = *puVar15 & ((long)*puVar15 >> 0x3f ^ 0xffffffffffffffffU);
            if (0xfffe < (long)uVar10) {
              uVar10 = 0xffff;
            }
            *(short *)puVar6 = (short)uVar10;
            lVar18 = lVar18 + -8;
            puVar15 = puVar15 + 1;
            puVar6 = (ulong *)((long)puVar6 + 2);
          } while (lVar18 != 0);
        }
      }
    }
    else if (bVar22 == 6) {
      pbVar17 = *(byte **)(puVar7 + 0x40);
      lVar18 = (long)iVar9;
      bVar22 = *(byte *)(param_2 + 9);
      if (bVar22 < 4) {
        if (bVar22 == 1) {
          if (iVar9 != 0) {
            pfVar16 = (float *)param_2[8];
            do {
              *pfVar16 = (float)*pbVar17;
              lVar18 = lVar18 + -1;
              pbVar17 = pbVar17 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 == 2) {
          if (iVar9 != 0) {
            puVar15 = param_2[8];
            do {
              bVar22 = *pbVar17;
              if (0x7e < bVar22) {
                bVar22 = 0x7f;
              }
              *(byte *)puVar15 = bVar22;
              lVar18 = lVar18 + -1;
              pbVar17 = pbVar17 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 3) && (iVar9 != 0)) {
          puVar15 = param_2[8];
          do {
            *(ushort *)puVar15 = (ushort)*pbVar17;
            lVar18 = lVar18 + -1;
            pbVar17 = pbVar17 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar18 != 0);
        }
      }
      else if (bVar22 < 6) {
        if (bVar22 == 4) {
          if (iVar9 != 0) {
            puVar15 = param_2[8];
            do {
              *(uint *)puVar15 = (uint)*pbVar17;
              lVar18 = lVar18 + -1;
              pbVar17 = pbVar17 + 1;
              puVar15 = (ulong *)((long)puVar15 + 4);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 5) && (iVar9 != 0)) {
          puVar15 = param_2[8];
          do {
            *puVar15 = (ulong)*pbVar17;
            lVar18 = lVar18 + -1;
            pbVar17 = pbVar17 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar18 != 0);
        }
      }
      else if (bVar22 == 6) {
        if (iVar9 != 0) {
          puVar15 = param_2[8];
          do {
            *(byte *)puVar15 = *pbVar17;
            lVar18 = lVar18 + -1;
            pbVar17 = pbVar17 + 1;
            puVar15 = (ulong *)((long)puVar15 + 1);
          } while (lVar18 != 0);
        }
      }
      else if ((bVar22 == 7) && (iVar9 != 0)) {
        puVar15 = param_2[8];
        do {
          *(ushort *)puVar15 = (ushort)*pbVar17;
          lVar18 = lVar18 + -1;
          pbVar17 = pbVar17 + 1;
          puVar15 = (ulong *)((long)puVar15 + 2);
        } while (lVar18 != 0);
      }
    }
    else {
      if (bVar22 != 7) {
        if (bVar22 == 8) {
          FUN_109c13e7c(8);
          puVar13 = extraout_x8_00;
        }
LAB_109c134a8:
        FUN_109c13e7c();
        pcStack_1c8 = FUN_109c134b0;
        if ((byte)puVar13[0x12] != uVar8) {
          puStack_1e0 = puVar7;
          ppuStack_1d8 = param_2;
          ppuStack_1d0 = &puStack_1b0;
          FUN_109c13518(auStack_238,puVar13);
          FUN_109c10d34(puVar13,auStack_238);
          FUN_109c10e9c(auStack_238);
        }
        return (ulong *)puVar13;
      }
      puVar14 = *(ushort **)(puVar7 + 0x40);
      lVar18 = (long)iVar9;
      bVar22 = *(byte *)(param_2 + 9);
      if (bVar22 < 4) {
        if (bVar22 == 1) {
          if (iVar9 != 0) {
            lVar18 = lVar18 << 1;
            pfVar16 = (float *)param_2[8];
            do {
              *pfVar16 = (float)*puVar14;
              lVar18 = lVar18 + -2;
              puVar14 = puVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar18 != 0);
          }
        }
        else if (bVar22 == 2) {
          if (iVar9 != 0) {
            lVar18 = lVar18 << 1;
            puVar15 = param_2[8];
            do {
              uVar23 = *puVar14;
              if (0x7e < uVar23) {
                uVar23 = 0x7f;
              }
              *(char *)puVar15 = (char)uVar23;
              lVar18 = lVar18 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 3) && (iVar9 != 0)) {
          lVar18 = lVar18 << 1;
          puVar15 = param_2[8];
          do {
            uVar23 = *puVar14;
            if (0x7ffe < uVar23) {
              uVar23 = 0x7fff;
            }
            *(ushort *)puVar15 = uVar23;
            lVar18 = lVar18 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar18 != 0);
        }
      }
      else if (bVar22 < 6) {
        if (bVar22 == 4) {
          if (iVar9 != 0) {
            lVar18 = lVar18 << 1;
            puVar15 = param_2[8];
            do {
              *(uint *)puVar15 = (uint)*puVar14;
              lVar18 = lVar18 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 4);
            } while (lVar18 != 0);
          }
        }
        else if ((bVar22 == 5) && (iVar9 != 0)) {
          lVar18 = lVar18 << 1;
          puVar15 = param_2[8];
          do {
            *puVar15 = (ulong)*puVar14;
            lVar18 = lVar18 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar18 != 0);
        }
      }
      else if (bVar22 == 6) {
        if (iVar9 != 0) {
          lVar18 = lVar18 << 1;
          puVar15 = param_2[8];
          do {
            uVar23 = *puVar14;
            if (0xfe < uVar23) {
              uVar23 = 0xff;
            }
            *(char *)puVar15 = (char)uVar23;
            lVar18 = lVar18 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = (ulong *)((long)puVar15 + 1);
          } while (lVar18 != 0);
        }
      }
      else if ((bVar22 == 7) && (iVar9 != 0)) {
        lVar18 = lVar18 << 1;
        puVar15 = param_2[8];
        do {
          *(ushort *)puVar15 = *puVar14;
          lVar18 = lVar18 + -2;
          puVar14 = puVar14 + 1;
          puVar15 = (ulong *)((long)puVar15 + 2);
        } while (lVar18 != 0);
      }
    }
    return (ulong *)puVar31;
  }
  puVar3 = auStack_190;
  puVar15 = extraout_x8;
  puVar13 = (uint *)(&PTR_DAT_110b2bdb0)[uVar4];
  while( true ) {
    puVar28 = puVar13;
    puVar6 = puVar15;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = uVar32;
    *(ulong *)(puVar3 + -0x30) = uVar10;
    *(uint **)(puVar3 + -0x28) = puVar31;
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(ulong **)(puVar3 + -0x18) = puVar5;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar34;
    *(code **)(puVar3 + -8) = pcVar35;
    puVar31 = puVar28;
    func_0x000107c613d0();
    if (puVar31 < (uint *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(ulong *)(puVar3 + -0x60) = unaff_x20;
    *(ulong **)(puVar3 + -0x58) = puVar6;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = &UNK_10002d57c;
    ppuVar34 = (undefined1 **)(puVar3 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return (ulong *)puVar31;
    }
    puVar31 = (uint *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar31 == 0) {
      return (ulong *)puVar31;
    }
    pcVar35 = (code *)&UNK_10002d5bc;
    puVar3 = puVar3 + -0x60;
    puVar15 = (ulong *)0x1132dfae8;
    puVar13 = (uint *)&UNK_10f5738ce;
    puVar5 = puVar6;
    puVar31 = puVar28;
  }
  if (puVar31 < (uint *)0x17) {
    *(char *)((long)puVar6 + 0x17) = (char)puVar31;
    puVar5 = puVar6;
    if (puVar31 == (uint *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar15 = (ulong *)0x19;
    if (((ulong)puVar31 | 7) != 0x17) {
      puVar15 = (ulong *)(((ulong)puVar31 | 7) + 1);
    }
    puVar5 = puVar15;
    func_0x000107c60e20();
    puVar6[1] = (ulong)puVar31;
    puVar6[2] = (ulong)puVar15 | 0x8000000000000000;
    *puVar6 = (ulong)puVar5;
  }
  func_0x000107c610b8(puVar5,puVar28,puVar31);
code_r0x00010002d55c:
  *(undefined1 *)((long)puVar5 + (long)puVar31) = 0;
  return puVar6;
}



/* Entry: 109c124b4; end: 109c129d3;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_109c124b4(ulong *param_1,ulong **param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong *extraout_x8;
  undefined8 *puVar13;
  ushort *puVar14;
  ulong *puVar15;
  float *pfVar16;
  uint *puVar17;
  byte *pbVar18;
  undefined8 *extraout_x8_00;
  undefined2 *puVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  float *pfVar22;
  byte bVar23;
  ushort uVar24;
  ulong *puVar25;
  undefined2 *puVar26;
  undefined *puVar27;
  undefined4 *puVar28;
  long lVar29;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  ulong uVar30;
  long unaff_x23;
  long unaff_x24;
  ulong uVar31;
  undefined1 *puVar32;
  code *pcVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_168 [88];
  undefined *puStack_110;
  ulong **ppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  ulong *apuStack_a0 [2];
  long lStack_90;
  ulong *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  
  puVar32 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_1;
  if ((*(int *)((long)param_1 + 0x3c) != 1) && (unaff_x19 = param_1, (int)param_1[1] == 4)) {
    uVar8 = *(uint *)((long)param_1 + 0xc);
    unaff_x22 = (ulong)uVar8;
    uVar4 = (uint)param_1[3];
    unaff_x21 = (undefined8 *)(ulong)uVar4;
    unaff_x23 = (long)(int)uVar4;
    puVar15 = (ulong *)&UNK_10f5a3554;
    param_2 = (ulong **)0x1a;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,(uint *)((long)param_1 + 0xc),4);
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = (int)puVar15 / (int)uVar8;
    }
    uVar10 = (ulong)uVar1;
    bVar23 = (byte)param_1[9];
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (int)uVar1 / (int)uVar4;
    }
    unaff_x20 = (ulong)uVar2;
    uStack_b0 = unaff_x22;
    puStack_a8 = unaff_x21;
    if (bVar23 < 4) {
      if (bVar23 == 1) {
        if (0 < (int)uVar8) {
          unaff_x24 = 0;
          uVar31 = 0;
          lStack_b8 = (long)(int)uVar1;
          uVar30 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | unaff_x20 << 2;
          do {
            iVar9 = (int)puStack_a8;
            unaff_x21 = (undefined8 *)param_1[8];
            puStack_88 = (ulong *)((long)unaff_x21 + uVar31 * lStack_b8 * 4);
            param_2 = &puStack_88;
            lStack_80 = unaff_x23;
            lStack_78 = (long)(int)uVar2;
            FUN_109c14490(apuStack_a0);
            if (0 < iVar9) {
              lVar11 = 0;
              puVar20 = (undefined4 *)((long)unaff_x21 + unaff_x24);
              puVar15 = apuStack_a0[0];
              do {
                puVar28 = puVar20;
                puVar21 = puVar15;
                lVar12 = (long)(int)uVar2;
                if (0 < (int)uVar2) {
                  do {
                    *puVar28 = (int)*puVar21;
                    puVar21 = (ulong *)((long)puVar21 + lStack_90 * 4);
                    lVar12 = lVar12 + -1;
                    puVar28 = puVar28 + 1;
                  } while (lVar12 != 0);
                }
                lVar11 = lVar11 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar20 = (undefined4 *)((long)puVar20 + uVar30);
              } while (lVar11 != unaff_x23);
            }
            puVar15 = apuStack_a0[0];
            _free();
            uVar31 = uVar31 + 1;
            unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
            unaff_x22 = uVar30;
          } while (uVar31 != uStack_b0);
        }
      }
      else {
        if (bVar23 == 2) goto LAB_109c1271c;
        if (bVar23 == 3) goto LAB_109c12650;
      }
    }
    else if (bVar23 < 6) {
      if (bVar23 == 4) {
        if (0 < (int)uVar8) {
          unaff_x24 = 0;
          uVar31 = 0;
          lStack_b8 = (long)(int)uVar1;
          do {
            iVar9 = (int)puStack_a8;
            unaff_x21 = (undefined8 *)(ulong)(0 < iVar9);
            unaff_x22 = param_1[8];
            puStack_88 = (ulong *)(unaff_x22 + uVar31 * lStack_b8 * 4);
            param_2 = &puStack_88;
            lStack_80 = unaff_x23;
            lStack_78 = (long)(int)uVar2;
            FUN_109c13c04(apuStack_a0);
            if (0 < iVar9) {
              lVar11 = 0;
              puVar20 = (undefined4 *)(unaff_x22 + unaff_x24);
              puVar15 = apuStack_a0[0];
              do {
                puVar28 = puVar20;
                puVar21 = puVar15;
                lVar12 = (long)(int)uVar2;
                if (0 < (int)uVar2) {
                  do {
                    *puVar28 = (int)*puVar21;
                    puVar21 = (ulong *)((long)puVar21 + lStack_90 * 4);
                    lVar12 = lVar12 + -1;
                    puVar28 = puVar28 + 1;
                  } while (lVar12 != 0);
                }
                lVar11 = lVar11 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar20 = (undefined4 *)
                          ((long)puVar20 +
                          (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | unaff_x20 << 2));
              } while (lVar11 != unaff_x23);
            }
            puVar15 = apuStack_a0[0];
            _free();
            uVar31 = uVar31 + 1;
            unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
          } while (uVar31 != uStack_b0);
        }
      }
      else if ((bVar23 == 5) && (0 < (int)uVar8)) {
        unaff_x24 = 0;
        uVar31 = 0;
        lStack_b8 = (long)(int)uVar1;
        do {
          iVar9 = (int)puStack_a8;
          unaff_x21 = (undefined8 *)(ulong)(0 < iVar9);
          unaff_x22 = param_1[8];
          puStack_88 = (ulong *)(unaff_x22 + uVar31 * lStack_b8 * 8);
          param_2 = &puStack_88;
          lStack_80 = unaff_x23;
          lStack_78 = (long)(int)uVar2;
          FUN_109c13d40(apuStack_a0);
          if (0 < iVar9) {
            lVar11 = 0;
            puVar21 = (ulong *)(unaff_x22 + unaff_x24);
            puVar15 = apuStack_a0[0];
            do {
              puVar25 = puVar21;
              puVar5 = puVar15;
              lVar12 = (long)(int)uVar2;
              if (0 < (int)uVar2) {
                do {
                  *puVar25 = *puVar5;
                  puVar5 = puVar5 + lStack_90;
                  lVar12 = lVar12 + -1;
                  puVar25 = puVar25 + 1;
                } while (lVar12 != 0);
              }
              lVar11 = lVar11 + 1;
              puVar15 = puVar15 + 1;
              puVar21 = (ulong *)((long)puVar21 +
                                 (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | unaff_x20 << 3));
            } while (lVar11 != unaff_x23);
          }
          puVar15 = apuStack_a0[0];
          _free();
          uVar31 = uVar31 + 1;
          unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3);
        } while (uVar31 != uStack_b0);
      }
    }
    else if (bVar23 == 6) {
LAB_109c1271c:
      if (0 < (int)uVar8) {
        unaff_x24 = 0;
        uVar10 = 0;
        lVar11 = (long)(int)uVar2;
        uVar31 = (ulong)(int)uVar1;
        do {
          iVar9 = (int)puStack_a8;
          unaff_x21 = (undefined8 *)param_1[8];
          puStack_88 = (ulong *)((long)unaff_x21 + uVar10 * uVar31);
          param_2 = &puStack_88;
          lStack_80 = unaff_x23;
          lStack_78 = lVar11;
          FUN_109c139a4(apuStack_a0);
          if (0 < iVar9) {
            lVar12 = 0;
            puVar6 = (undefined *)((long)unaff_x21 + unaff_x24);
            puVar15 = apuStack_a0[0];
            do {
              puVar27 = puVar6;
              puVar21 = puVar15;
              lVar29 = lVar11;
              if (0 < (int)uVar2) {
                do {
                  *puVar27 = (char)*puVar21;
                  puVar21 = (ulong *)((long)puVar21 + lStack_90);
                  lVar29 = lVar29 + -1;
                  puVar27 = puVar27 + 1;
                } while (lVar29 != 0);
              }
              lVar12 = lVar12 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
              puVar6 = puVar6 + lVar11;
            } while (lVar12 != unaff_x23);
          }
          puVar15 = apuStack_a0[0];
          _free();
          uVar10 = uVar10 + 1;
          unaff_x24 = unaff_x24 + uVar31;
          unaff_x22 = uVar31;
        } while (uVar10 != uStack_b0);
      }
    }
    else if (bVar23 == 7) {
LAB_109c12650:
      if (0 < (int)uVar8) {
        unaff_x24 = 0;
        uVar31 = 0;
        lStack_b8 = (long)(int)uVar1;
        uVar30 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | unaff_x20 << 1;
        do {
          iVar9 = (int)puStack_a8;
          unaff_x21 = (undefined8 *)param_1[8];
          puStack_88 = (ulong *)((long)unaff_x21 + uVar31 * lStack_b8 * 2);
          param_2 = &puStack_88;
          lStack_80 = unaff_x23;
          lStack_78 = (long)(int)uVar2;
          FUN_109c13ad0(apuStack_a0);
          if (0 < iVar9) {
            lVar11 = 0;
            puVar19 = (undefined2 *)((long)unaff_x21 + unaff_x24);
            puVar15 = apuStack_a0[0];
            do {
              puVar26 = puVar19;
              puVar21 = puVar15;
              lVar12 = (long)(int)uVar2;
              if (0 < (int)uVar2) {
                do {
                  *puVar26 = (short)*puVar21;
                  puVar21 = (ulong *)((long)puVar21 + lStack_90 * 2);
                  lVar12 = lVar12 + -1;
                  puVar26 = puVar26 + 1;
                } while (lVar12 != 0);
              }
              lVar11 = lVar11 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar19 = (undefined2 *)((long)puVar19 + uVar30);
            } while (lVar11 != unaff_x23);
          }
          puVar15 = apuStack_a0[0];
          _free();
          uVar31 = uVar31 + 1;
          unaff_x24 = unaff_x24 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1);
          unaff_x22 = uVar30;
        } while (uVar31 != uStack_b0);
      }
    }
    if ((int)param_1[1] != 2) {
      puVar15 = (ulong *)((long)param_1 + 0x14);
      param_2 = (ulong **)(param_1 + 2);
      _memmove(puVar15,param_2,(long)(int)param_1[1] * 4 + -8);
    }
    *(int *)(param_1 + 2) = (int)puStack_a8;
    *(undefined4 *)((long)param_1 + 0x3c) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar15;
  }
  ___stack_chk_fail();
  uVar4 = (uint)puVar15;
  pcVar33 = FUN_109c129d4;
  __Unwind_Resume();
  if (8 < uVar4) {
    pcStack_c8 = FUN_109c129d4;
    puVar6 = &UNK_10f5a35e0;
    puStack_d0 = puVar32;
    func_0x000105688514();
    pcStack_d8 = FUN_109c12a04;
    uVar4 = *(uint *)(puVar6 + 8) & ((int)*(uint *)(puVar6 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar4) {
      uVar4 = 5;
    }
    puVar7 = (undefined8 *)&UNK_10f5a3554;
    uVar8 = 0x1a;
    uStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    puStack_e0 = (undefined1 *)&puStack_d0;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,puVar6 + 0xc,uVar4);
    bVar23 = puVar6[0x48];
    puVar13 = (undefined8 *)(ulong)bVar23;
    iVar9 = (int)puVar7;
    if (bVar23 < 4) {
      if (bVar23 < 2) {
        pfVar16 = *(float **)(puVar6 + 0x40);
        lVar11 = (long)iVar9;
        bVar23 = *(byte *)(param_2 + 9);
        if (bVar23 < 4) {
          if (bVar23 == 1) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 2;
              pfVar22 = (float *)param_2[8];
              do {
                *pfVar22 = *pfVar16;
                lVar11 = lVar11 + -4;
                pfVar16 = pfVar16 + 1;
                pfVar22 = pfVar22 + 1;
              } while (lVar11 != 0);
            }
          }
          else if (bVar23 == 2) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 2;
              puVar15 = param_2[8];
              do {
                fVar35 = *pfVar16;
                fVar36 = 127.0;
                if (fVar35 <= 127.0) {
                  fVar36 = fVar35;
                }
                fVar34 = -128.0;
                if (-128.0 <= fVar35) {
                  fVar34 = fVar36;
                }
                *(char *)puVar15 = (char)(int)fVar34;
                lVar11 = lVar11 + -4;
                pfVar16 = pfVar16 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 3) && (iVar9 != 0)) {
            lVar11 = lVar11 << 2;
            puVar15 = param_2[8];
            do {
              fVar35 = *pfVar16;
              fVar36 = 32767.0;
              if (fVar35 <= 32767.0) {
                fVar36 = fVar35;
              }
              fVar34 = -32768.0;
              if (-32768.0 <= fVar35) {
                fVar34 = fVar36;
              }
              *(short *)puVar15 = (short)(int)fVar34;
              lVar11 = lVar11 + -4;
              pfVar16 = pfVar16 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 < 6) {
          if (bVar23 == 4) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 2;
              puVar15 = param_2[8];
              do {
                fVar35 = *pfVar16;
                fVar36 = 2.1474836e+09;
                if (fVar35 <= 2.1474836e+09) {
                  fVar36 = fVar35;
                }
                fVar34 = -2.1474836e+09;
                if (-2.1474836e+09 <= fVar35) {
                  fVar34 = fVar36;
                }
                *(int *)puVar15 = (int)fVar34;
                lVar11 = lVar11 + -4;
                pfVar16 = pfVar16 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 5) && (iVar9 != 0)) {
            lVar11 = lVar11 << 2;
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)*pfVar16;
              lVar11 = lVar11 + -4;
              pfVar16 = pfVar16 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 6) {
          if (iVar9 != 0) {
            lVar11 = lVar11 << 2;
            puVar15 = param_2[8];
            do {
              fVar35 = *pfVar16;
              fVar36 = 255.0;
              if (fVar35 <= 255.0) {
                fVar36 = fVar35;
              }
              fVar34 = 0.0;
              if (0.0 <= fVar35) {
                fVar34 = fVar36;
              }
              *(char *)puVar15 = (char)(int)fVar34;
              lVar11 = lVar11 + -4;
              pfVar16 = pfVar16 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 7) && (iVar9 != 0)) {
          lVar11 = lVar11 << 2;
          puVar15 = param_2[8];
          do {
            fVar35 = *pfVar16;
            fVar36 = 65535.0;
            if (fVar35 <= 65535.0) {
              fVar36 = fVar35;
            }
            fVar34 = 0.0;
            if (0.0 <= fVar35) {
              fVar34 = fVar36;
            }
            *(short *)puVar15 = (short)(int)fVar34;
            lVar11 = lVar11 + -4;
            pfVar16 = pfVar16 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 2) {
        pbVar18 = *(byte **)(puVar6 + 0x40);
        lVar11 = (long)iVar9;
        bVar23 = *(byte *)(param_2 + 9);
        if (bVar23 < 4) {
          if (bVar23 == 1) {
            if (iVar9 != 0) {
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(int)(char)*pbVar18;
                lVar11 = lVar11 + -1;
                pbVar18 = pbVar18 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar11 != 0);
            }
          }
          else if (bVar23 == 2) {
            if (iVar9 != 0) {
              puVar15 = param_2[8];
              do {
                *(byte *)puVar15 = *pbVar18;
                lVar11 = lVar11 + -1;
                pbVar18 = pbVar18 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 3) && (iVar9 != 0)) {
            puVar15 = param_2[8];
            do {
              *(short *)puVar15 = (short)(char)*pbVar18;
              lVar11 = lVar11 + -1;
              pbVar18 = pbVar18 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 < 6) {
          if (bVar23 == 4) {
            if (iVar9 != 0) {
              puVar15 = param_2[8];
              do {
                *(int *)puVar15 = (int)(char)*pbVar18;
                lVar11 = lVar11 + -1;
                pbVar18 = pbVar18 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 5) && (iVar9 != 0)) {
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)(char)*pbVar18;
              lVar11 = lVar11 + -1;
              pbVar18 = pbVar18 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 6) {
          if (iVar9 != 0) {
            puVar15 = param_2[8];
            do {
              *(byte *)puVar15 = *pbVar18 & ((char)*pbVar18 >> 0x1f ^ 0xffU);
              lVar11 = lVar11 + -1;
              pbVar18 = pbVar18 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 7) && (iVar9 != 0)) {
          puVar15 = param_2[8];
          do {
            *(short *)puVar15 = (short)(char)*pbVar18;
            lVar11 = lVar11 + -1;
            pbVar18 = pbVar18 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar11 != 0);
        }
      }
      else {
        if (bVar23 != 3) goto LAB_109c134a8;
        puVar14 = *(ushort **)(puVar6 + 0x40);
        lVar11 = (long)iVar9;
        bVar23 = *(byte *)(param_2 + 9);
        if (bVar23 < 4) {
          if (bVar23 == 1) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 1;
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(int)(short)*puVar14;
                lVar11 = lVar11 + -2;
                puVar14 = puVar14 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar11 != 0);
            }
          }
          else if (bVar23 == 2) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 1;
              puVar15 = param_2[8];
              do {
                uVar24 = *puVar14;
                if ((short)uVar24 < -0x7f) {
                  uVar24 = 0xff80;
                }
                if (0x7e < (short)uVar24) {
                  uVar24 = 0x7f;
                }
                *(char *)puVar15 = (char)uVar24;
                lVar11 = lVar11 + -2;
                puVar14 = puVar14 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 3) && (iVar9 != 0)) {
            lVar11 = lVar11 << 1;
            puVar15 = param_2[8];
            do {
              *(ushort *)puVar15 = *puVar14;
              lVar11 = lVar11 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 < 6) {
          if (bVar23 == 4) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 1;
              puVar15 = param_2[8];
              do {
                *(int *)puVar15 = (int)(short)*puVar14;
                lVar11 = lVar11 + -2;
                puVar14 = puVar14 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 5) && (iVar9 != 0)) {
            lVar11 = lVar11 << 1;
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)(short)*puVar14;
              lVar11 = lVar11 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 6) {
          if (iVar9 != 0) {
            lVar11 = lVar11 << 1;
            puVar15 = param_2[8];
            do {
              uVar24 = *puVar14 & ((short)*puVar14 >> 0x1f ^ 0xffffU);
              if (0xfe < (short)uVar24) {
                uVar24 = 0xff;
              }
              *(char *)puVar15 = (char)uVar24;
              lVar11 = lVar11 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 7) && (iVar9 != 0)) {
          lVar11 = lVar11 << 1;
          puVar15 = param_2[8];
          do {
            *(ushort *)puVar15 = *puVar14 & ((short)*puVar14 >> 0x1f ^ 0xffffU);
            lVar11 = lVar11 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar11 != 0);
        }
      }
    }
    else if (bVar23 < 6) {
      if (bVar23 == 4) {
        puVar17 = *(uint **)(puVar6 + 0x40);
        lVar11 = (long)iVar9;
        bVar23 = *(byte *)(param_2 + 9);
        if (bVar23 < 4) {
          if (bVar23 == 1) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 2;
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(int)*puVar17;
                lVar11 = lVar11 + -4;
                puVar17 = puVar17 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar11 != 0);
            }
          }
          else if (bVar23 == 2) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 2;
              puVar15 = param_2[8];
              do {
                uVar4 = *puVar17;
                if ((int)uVar4 < -0x7f) {
                  uVar4 = 0xffffff80;
                }
                if (0x7e < (int)uVar4) {
                  uVar4 = 0x7f;
                }
                *(char *)puVar15 = (char)uVar4;
                lVar11 = lVar11 + -4;
                puVar17 = puVar17 + 1;
                puVar15 = (ulong *)((long)puVar15 + 1);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 3) && (iVar9 != 0)) {
            lVar11 = lVar11 << 2;
            puVar15 = param_2[8];
            do {
              uVar4 = *puVar17;
              if ((int)uVar4 < -0x7fff) {
                uVar4 = 0xffff8000;
              }
              if (0x7ffe < (int)uVar4) {
                uVar4 = 0x7fff;
              }
              *(short *)puVar15 = (short)uVar4;
              lVar11 = lVar11 + -4;
              puVar17 = puVar17 + 1;
              puVar15 = (ulong *)((long)puVar15 + 2);
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 < 6) {
          if (bVar23 == 4) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 2;
              puVar15 = param_2[8];
              do {
                *(uint *)puVar15 = *puVar17;
                lVar11 = lVar11 + -4;
                puVar17 = puVar17 + 1;
                puVar15 = (ulong *)((long)puVar15 + 4);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 5) && (iVar9 != 0)) {
            lVar11 = lVar11 << 2;
            puVar15 = param_2[8];
            do {
              *puVar15 = (long)(int)*puVar17;
              lVar11 = lVar11 + -4;
              puVar17 = puVar17 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 6) {
          if (iVar9 != 0) {
            lVar11 = lVar11 << 2;
            puVar15 = param_2[8];
            do {
              uVar4 = *puVar17 & ((int)*puVar17 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar4) {
                uVar4 = 0xff;
              }
              *(char *)puVar15 = (char)uVar4;
              lVar11 = lVar11 + -4;
              puVar17 = puVar17 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 7) && (iVar9 != 0)) {
          lVar11 = lVar11 << 2;
          puVar15 = param_2[8];
          do {
            uVar4 = *puVar17 & ((int)*puVar17 >> 0x1f ^ 0xffffffffU);
            if (0xfffe < (int)uVar4) {
              uVar4 = 0xffff;
            }
            *(short *)puVar15 = (short)uVar4;
            lVar11 = lVar11 + -4;
            puVar17 = puVar17 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar11 != 0);
        }
      }
      else {
        if (bVar23 != 5) goto LAB_109c134a8;
        puVar15 = *(ulong **)(puVar6 + 0x40);
        lVar11 = (long)iVar9;
        bVar23 = *(byte *)(param_2 + 9);
        if (bVar23 < 4) {
          if (bVar23 == 1) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 3;
              pfVar16 = (float *)param_2[8];
              do {
                *pfVar16 = (float)(long)*puVar15;
                lVar11 = lVar11 + -8;
                puVar15 = puVar15 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar11 != 0);
            }
          }
          else if (bVar23 == 2) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 3;
              puVar21 = param_2[8];
              do {
                uVar10 = *puVar15;
                if ((long)uVar10 < -0x7f) {
                  uVar10 = 0xffffffffffffff80;
                }
                if (0x7e < (long)uVar10) {
                  uVar10 = 0x7f;
                }
                *(char *)puVar21 = (char)uVar10;
                lVar11 = lVar11 + -8;
                puVar15 = puVar15 + 1;
                puVar21 = (ulong *)((long)puVar21 + 1);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 3) && (iVar9 != 0)) {
            lVar11 = lVar11 << 3;
            puVar21 = param_2[8];
            do {
              uVar10 = *puVar15;
              if ((long)uVar10 < -0x7fff) {
                uVar10 = 0xffffffffffff8000;
              }
              if (0x7ffe < (long)uVar10) {
                uVar10 = 0x7fff;
              }
              *(short *)puVar21 = (short)uVar10;
              lVar11 = lVar11 + -8;
              puVar15 = puVar15 + 1;
              puVar21 = (ulong *)((long)puVar21 + 2);
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 < 6) {
          if (bVar23 == 4) {
            if (iVar9 != 0) {
              lVar11 = lVar11 << 3;
              puVar21 = param_2[8];
              do {
                uVar10 = *puVar15;
                if ((long)uVar10 < -0x7fffffff) {
                  uVar10 = 0xffffffff80000000;
                }
                if (0x7ffffffe < (long)uVar10) {
                  uVar10 = 0x7fffffff;
                }
                *(int *)puVar21 = (int)uVar10;
                lVar11 = lVar11 + -8;
                puVar15 = puVar15 + 1;
                puVar21 = (ulong *)((long)puVar21 + 4);
              } while (lVar11 != 0);
            }
          }
          else if ((bVar23 == 5) && (iVar9 != 0)) {
            lVar11 = lVar11 << 3;
            puVar21 = param_2[8];
            do {
              *puVar21 = *puVar15;
              lVar11 = lVar11 + -8;
              puVar15 = puVar15 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 6) {
          if (iVar9 != 0) {
            lVar11 = lVar11 << 3;
            puVar21 = param_2[8];
            do {
              uVar10 = *puVar15 & ((long)*puVar15 >> 0x3f ^ 0xffffffffffffffffU);
              if (0xfe < (long)uVar10) {
                uVar10 = 0xff;
              }
              *(char *)puVar21 = (char)uVar10;
              lVar11 = lVar11 + -8;
              puVar15 = puVar15 + 1;
              puVar21 = (ulong *)((long)puVar21 + 1);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 7) && (iVar9 != 0)) {
          lVar11 = lVar11 << 3;
          puVar21 = param_2[8];
          do {
            uVar10 = *puVar15 & ((long)*puVar15 >> 0x3f ^ 0xffffffffffffffffU);
            if (0xfffe < (long)uVar10) {
              uVar10 = 0xffff;
            }
            *(short *)puVar21 = (short)uVar10;
            lVar11 = lVar11 + -8;
            puVar15 = puVar15 + 1;
            puVar21 = (ulong *)((long)puVar21 + 2);
          } while (lVar11 != 0);
        }
      }
    }
    else if (bVar23 == 6) {
      pbVar18 = *(byte **)(puVar6 + 0x40);
      lVar11 = (long)iVar9;
      bVar23 = *(byte *)(param_2 + 9);
      if (bVar23 < 4) {
        if (bVar23 == 1) {
          if (iVar9 != 0) {
            pfVar16 = (float *)param_2[8];
            do {
              *pfVar16 = (float)*pbVar18;
              lVar11 = lVar11 + -1;
              pbVar18 = pbVar18 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 2) {
          if (iVar9 != 0) {
            puVar15 = param_2[8];
            do {
              bVar23 = *pbVar18;
              if (0x7e < bVar23) {
                bVar23 = 0x7f;
              }
              *(byte *)puVar15 = bVar23;
              lVar11 = lVar11 + -1;
              pbVar18 = pbVar18 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 3) && (iVar9 != 0)) {
          puVar15 = param_2[8];
          do {
            *(ushort *)puVar15 = (ushort)*pbVar18;
            lVar11 = lVar11 + -1;
            pbVar18 = pbVar18 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 < 6) {
        if (bVar23 == 4) {
          if (iVar9 != 0) {
            puVar15 = param_2[8];
            do {
              *(uint *)puVar15 = (uint)*pbVar18;
              lVar11 = lVar11 + -1;
              pbVar18 = pbVar18 + 1;
              puVar15 = (ulong *)((long)puVar15 + 4);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 5) && (iVar9 != 0)) {
          puVar15 = param_2[8];
          do {
            *puVar15 = (ulong)*pbVar18;
            lVar11 = lVar11 + -1;
            pbVar18 = pbVar18 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 6) {
        if (iVar9 != 0) {
          puVar15 = param_2[8];
          do {
            *(byte *)puVar15 = *pbVar18;
            lVar11 = lVar11 + -1;
            pbVar18 = pbVar18 + 1;
            puVar15 = (ulong *)((long)puVar15 + 1);
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 7) && (iVar9 != 0)) {
        puVar15 = param_2[8];
        do {
          *(ushort *)puVar15 = (ushort)*pbVar18;
          lVar11 = lVar11 + -1;
          pbVar18 = pbVar18 + 1;
          puVar15 = (ulong *)((long)puVar15 + 2);
        } while (lVar11 != 0);
      }
    }
    else {
      if (bVar23 != 7) {
        if (bVar23 == 8) {
          FUN_109c13e7c(8);
          puVar13 = extraout_x8_00;
        }
LAB_109c134a8:
        FUN_109c13e7c();
        pcStack_f8 = FUN_109c134b0;
        if (*(byte *)(puVar13 + 9) != uVar8) {
          puStack_110 = puVar6;
          ppuStack_108 = param_2;
          ppuStack_100 = &puStack_e0;
          FUN_109c13518(auStack_168,puVar13);
          FUN_109c10d34(puVar13,auStack_168);
          FUN_109c10e9c(auStack_168);
        }
        return puVar13;
      }
      puVar14 = *(ushort **)(puVar6 + 0x40);
      lVar11 = (long)iVar9;
      bVar23 = *(byte *)(param_2 + 9);
      if (bVar23 < 4) {
        if (bVar23 == 1) {
          if (iVar9 != 0) {
            lVar11 = lVar11 << 1;
            pfVar16 = (float *)param_2[8];
            do {
              *pfVar16 = (float)*puVar14;
              lVar11 = lVar11 + -2;
              puVar14 = puVar14 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 2) {
          if (iVar9 != 0) {
            lVar11 = lVar11 << 1;
            puVar15 = param_2[8];
            do {
              uVar24 = *puVar14;
              if (0x7e < uVar24) {
                uVar24 = 0x7f;
              }
              *(char *)puVar15 = (char)uVar24;
              lVar11 = lVar11 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 1);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 3) && (iVar9 != 0)) {
          lVar11 = lVar11 << 1;
          puVar15 = param_2[8];
          do {
            uVar24 = *puVar14;
            if (0x7ffe < uVar24) {
              uVar24 = 0x7fff;
            }
            *(ushort *)puVar15 = uVar24;
            lVar11 = lVar11 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = (ulong *)((long)puVar15 + 2);
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 < 6) {
        if (bVar23 == 4) {
          if (iVar9 != 0) {
            lVar11 = lVar11 << 1;
            puVar15 = param_2[8];
            do {
              *(uint *)puVar15 = (uint)*puVar14;
              lVar11 = lVar11 + -2;
              puVar14 = puVar14 + 1;
              puVar15 = (ulong *)((long)puVar15 + 4);
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 5) && (iVar9 != 0)) {
          lVar11 = lVar11 << 1;
          puVar15 = param_2[8];
          do {
            *puVar15 = (ulong)*puVar14;
            lVar11 = lVar11 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 6) {
        if (iVar9 != 0) {
          lVar11 = lVar11 << 1;
          puVar15 = param_2[8];
          do {
            uVar24 = *puVar14;
            if (0xfe < uVar24) {
              uVar24 = 0xff;
            }
            *(char *)puVar15 = (char)uVar24;
            lVar11 = lVar11 + -2;
            puVar14 = puVar14 + 1;
            puVar15 = (ulong *)((long)puVar15 + 1);
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 7) && (iVar9 != 0)) {
        lVar11 = lVar11 << 1;
        puVar15 = param_2[8];
        do {
          *(ushort *)puVar15 = *puVar14;
          lVar11 = lVar11 + -2;
          puVar14 = puVar14 + 1;
          puVar15 = (ulong *)((long)puVar15 + 2);
        } while (lVar11 != 0);
      }
    }
    return puVar7;
  }
  puVar3 = auStack_c0;
  puVar15 = extraout_x8;
  puVar7 = (undefined8 *)(&PTR_DAT_110b2bdb0)[uVar4];
  while( true ) {
    puVar13 = puVar7;
    puVar21 = puVar15;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar3 + -0x28) = unaff_x21;
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(ulong **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar32;
    *(code **)(puVar3 + -8) = pcVar33;
    puVar7 = puVar13;
    func_0x000107c613d0();
    if (puVar7 < (undefined8 *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(ulong *)(puVar3 + -0x60) = unaff_x20;
    *(ulong **)(puVar3 + -0x58) = puVar21;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = &UNK_10002d57c;
    puVar32 = puVar3 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar7;
    }
    puVar7 = (undefined8 *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar7 == 0) {
      return puVar7;
    }
    pcVar33 = (code *)&UNK_10002d5bc;
    puVar3 = puVar3 + -0x60;
    puVar15 = (ulong *)0x1132dfae8;
    puVar7 = (undefined8 *)&UNK_10f5738ce;
    unaff_x19 = puVar21;
    unaff_x21 = puVar13;
  }
  if (puVar7 < (undefined8 *)0x17) {
    *(char *)((long)puVar21 + 0x17) = (char)puVar7;
    puVar5 = puVar21;
    if (puVar7 == (undefined8 *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar15 = (ulong *)0x19;
    if (((ulong)puVar7 | 7) != 0x17) {
      puVar15 = (ulong *)(((ulong)puVar7 | 7) + 1);
    }
    puVar5 = puVar15;
    func_0x000107c60e20();
    puVar21[1] = (ulong)puVar7;
    puVar21[2] = (ulong)puVar15 | 0x8000000000000000;
    *puVar21 = (ulong)puVar5;
  }
  func_0x000107c610b8(puVar5,puVar13,puVar7);
code_r0x00010002d55c:
  *(undefined1 *)((long)puVar5 + (long)puVar7) = 0;
  return puVar21;
}



/* Entry: 109c129d4; end: 109c12a03;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_109c129d4(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  ushort *puVar10;
  float *pfVar11;
  uint *puVar12;
  byte *pbVar13;
  ulong *extraout_x8;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  undefined2 *puVar17;
  ushort *puVar18;
  short *psVar19;
  float *pfVar20;
  int *piVar21;
  uint *puVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  byte bVar25;
  ushort uVar26;
  ulong uVar27;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_a8 [88];
  undefined *puStack_50;
  long lStack_48;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (8 < param_2) {
    puVar6 = &UNK_10f5a35e0;
    func_0x000105688514();
    pcStack_18 = FUN_109c12a04;
    uVar1 = *(uint *)(puVar6 + 8) & ((int)*(uint *)(puVar6 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    puVar7 = (ulong *)&UNK_10f5a3554;
    uVar8 = 0x1a;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,puVar6 + 0xc,uVar1);
    bVar25 = puVar6[0x48];
    puVar9 = (ulong *)(ulong)bVar25;
    iVar4 = (int)puVar7;
    if (bVar25 < 4) {
      if (bVar25 < 2) {
        pfVar11 = *(float **)(puVar6 + 0x40);
        lVar14 = (long)iVar4;
        bVar25 = *(byte *)(param_3 + 0x48);
        if (bVar25 < 4) {
          if (bVar25 == 1) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 2;
              pfVar20 = *(float **)(param_3 + 0x40);
              do {
                *pfVar20 = *pfVar11;
                lVar14 = lVar14 + -4;
                pfVar11 = pfVar11 + 1;
                pfVar20 = pfVar20 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (bVar25 == 2) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 2;
              puVar3 = *(undefined1 **)(param_3 + 0x40);
              do {
                fVar29 = *pfVar11;
                fVar30 = 127.0;
                if (fVar29 <= 127.0) {
                  fVar30 = fVar29;
                }
                fVar28 = -128.0;
                if (-128.0 <= fVar29) {
                  fVar28 = fVar30;
                }
                *puVar3 = (char)(int)fVar28;
                lVar14 = lVar14 + -4;
                pfVar11 = pfVar11 + 1;
                puVar3 = puVar3 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 3) && (iVar4 != 0)) {
            lVar14 = lVar14 << 2;
            puVar17 = *(undefined2 **)(param_3 + 0x40);
            do {
              fVar29 = *pfVar11;
              fVar30 = 32767.0;
              if (fVar29 <= 32767.0) {
                fVar30 = fVar29;
              }
              fVar28 = -32768.0;
              if (-32768.0 <= fVar29) {
                fVar28 = fVar30;
              }
              *puVar17 = (short)(int)fVar28;
              lVar14 = lVar14 + -4;
              pfVar11 = pfVar11 + 1;
              puVar17 = puVar17 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 < 6) {
          if (bVar25 == 4) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 2;
              piVar21 = *(int **)(param_3 + 0x40);
              do {
                fVar29 = *pfVar11;
                fVar30 = 2.1474836e+09;
                if (fVar29 <= 2.1474836e+09) {
                  fVar30 = fVar29;
                }
                fVar28 = -2.1474836e+09;
                if (-2.1474836e+09 <= fVar29) {
                  fVar28 = fVar30;
                }
                *piVar21 = (int)fVar28;
                lVar14 = lVar14 + -4;
                pfVar11 = pfVar11 + 1;
                piVar21 = piVar21 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 5) && (iVar4 != 0)) {
            lVar14 = lVar14 << 2;
            plVar15 = *(long **)(param_3 + 0x40);
            do {
              *plVar15 = (long)*pfVar11;
              lVar14 = lVar14 + -4;
              pfVar11 = pfVar11 + 1;
              plVar15 = plVar15 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 == 6) {
          if (iVar4 != 0) {
            lVar14 = lVar14 << 2;
            puVar3 = *(undefined1 **)(param_3 + 0x40);
            do {
              fVar29 = *pfVar11;
              fVar30 = 255.0;
              if (fVar29 <= 255.0) {
                fVar30 = fVar29;
              }
              fVar28 = 0.0;
              if (0.0 <= fVar29) {
                fVar28 = fVar30;
              }
              *puVar3 = (char)(int)fVar28;
              lVar14 = lVar14 + -4;
              pfVar11 = pfVar11 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 7) && (iVar4 != 0)) {
          lVar14 = lVar14 << 2;
          puVar17 = *(undefined2 **)(param_3 + 0x40);
          do {
            fVar29 = *pfVar11;
            fVar30 = 65535.0;
            if (fVar29 <= 65535.0) {
              fVar30 = fVar29;
            }
            fVar28 = 0.0;
            if (0.0 <= fVar29) {
              fVar28 = fVar30;
            }
            *puVar17 = (short)(int)fVar28;
            lVar14 = lVar14 + -4;
            pfVar11 = pfVar11 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar14 != 0);
        }
      }
      else if (bVar25 == 2) {
        pbVar13 = *(byte **)(puVar6 + 0x40);
        lVar14 = (long)iVar4;
        bVar25 = *(byte *)(param_3 + 0x48);
        if (bVar25 < 4) {
          if (bVar25 == 1) {
            if (iVar4 != 0) {
              pfVar11 = *(float **)(param_3 + 0x40);
              do {
                *pfVar11 = (float)(int)(char)*pbVar13;
                lVar14 = lVar14 + -1;
                pbVar13 = pbVar13 + 1;
                pfVar11 = pfVar11 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (bVar25 == 2) {
            if (iVar4 != 0) {
              pbVar24 = *(byte **)(param_3 + 0x40);
              do {
                *pbVar24 = *pbVar13;
                lVar14 = lVar14 + -1;
                pbVar13 = pbVar13 + 1;
                pbVar24 = pbVar24 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 3) && (iVar4 != 0)) {
            psVar19 = *(short **)(param_3 + 0x40);
            do {
              *psVar19 = (short)(char)*pbVar13;
              lVar14 = lVar14 + -1;
              pbVar13 = pbVar13 + 1;
              psVar19 = psVar19 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 < 6) {
          if (bVar25 == 4) {
            if (iVar4 != 0) {
              piVar21 = *(int **)(param_3 + 0x40);
              do {
                *piVar21 = (int)(char)*pbVar13;
                lVar14 = lVar14 + -1;
                pbVar13 = pbVar13 + 1;
                piVar21 = piVar21 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 5) && (iVar4 != 0)) {
            plVar15 = *(long **)(param_3 + 0x40);
            do {
              *plVar15 = (long)(char)*pbVar13;
              lVar14 = lVar14 + -1;
              pbVar13 = pbVar13 + 1;
              plVar15 = plVar15 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 == 6) {
          if (iVar4 != 0) {
            pbVar24 = *(byte **)(param_3 + 0x40);
            do {
              *pbVar24 = *pbVar13 & ((char)*pbVar13 >> 0x1f ^ 0xffU);
              lVar14 = lVar14 + -1;
              pbVar13 = pbVar13 + 1;
              pbVar24 = pbVar24 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 7) && (iVar4 != 0)) {
          psVar19 = *(short **)(param_3 + 0x40);
          do {
            *psVar19 = (short)(char)*pbVar13;
            lVar14 = lVar14 + -1;
            pbVar13 = pbVar13 + 1;
            psVar19 = psVar19 + 1;
          } while (lVar14 != 0);
        }
      }
      else {
        if (bVar25 != 3) goto LAB_109c134a8;
        puVar10 = *(ushort **)(puVar6 + 0x40);
        lVar14 = (long)iVar4;
        bVar25 = *(byte *)(param_3 + 0x48);
        if (bVar25 < 4) {
          if (bVar25 == 1) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 1;
              pfVar11 = *(float **)(param_3 + 0x40);
              do {
                *pfVar11 = (float)(int)(short)*puVar10;
                lVar14 = lVar14 + -2;
                puVar10 = puVar10 + 1;
                pfVar11 = pfVar11 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (bVar25 == 2) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 1;
              puVar3 = *(undefined1 **)(param_3 + 0x40);
              do {
                uVar26 = *puVar10;
                if ((short)uVar26 < -0x7f) {
                  uVar26 = 0xff80;
                }
                if (0x7e < (short)uVar26) {
                  uVar26 = 0x7f;
                }
                *puVar3 = (char)uVar26;
                lVar14 = lVar14 + -2;
                puVar10 = puVar10 + 1;
                puVar3 = puVar3 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 3) && (iVar4 != 0)) {
            lVar14 = lVar14 << 1;
            puVar18 = *(ushort **)(param_3 + 0x40);
            do {
              *puVar18 = *puVar10;
              lVar14 = lVar14 + -2;
              puVar10 = puVar10 + 1;
              puVar18 = puVar18 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 < 6) {
          if (bVar25 == 4) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 1;
              piVar21 = *(int **)(param_3 + 0x40);
              do {
                *piVar21 = (int)(short)*puVar10;
                lVar14 = lVar14 + -2;
                puVar10 = puVar10 + 1;
                piVar21 = piVar21 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 5) && (iVar4 != 0)) {
            lVar14 = lVar14 << 1;
            plVar15 = *(long **)(param_3 + 0x40);
            do {
              *plVar15 = (long)(short)*puVar10;
              lVar14 = lVar14 + -2;
              puVar10 = puVar10 + 1;
              plVar15 = plVar15 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 == 6) {
          if (iVar4 != 0) {
            lVar14 = lVar14 << 1;
            puVar3 = *(undefined1 **)(param_3 + 0x40);
            do {
              uVar26 = *puVar10 & ((short)*puVar10 >> 0x1f ^ 0xffffU);
              if (0xfe < (short)uVar26) {
                uVar26 = 0xff;
              }
              *puVar3 = (char)uVar26;
              lVar14 = lVar14 + -2;
              puVar10 = puVar10 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 7) && (iVar4 != 0)) {
          lVar14 = lVar14 << 1;
          puVar18 = *(ushort **)(param_3 + 0x40);
          do {
            *puVar18 = *puVar10 & ((short)*puVar10 >> 0x1f ^ 0xffffU);
            lVar14 = lVar14 + -2;
            puVar10 = puVar10 + 1;
            puVar18 = puVar18 + 1;
          } while (lVar14 != 0);
        }
      }
    }
    else if (bVar25 < 6) {
      if (bVar25 == 4) {
        puVar12 = *(uint **)(puVar6 + 0x40);
        lVar14 = (long)iVar4;
        bVar25 = *(byte *)(param_3 + 0x48);
        if (bVar25 < 4) {
          if (bVar25 == 1) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 2;
              pfVar11 = *(float **)(param_3 + 0x40);
              do {
                *pfVar11 = (float)(int)*puVar12;
                lVar14 = lVar14 + -4;
                puVar12 = puVar12 + 1;
                pfVar11 = pfVar11 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (bVar25 == 2) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 2;
              puVar3 = *(undefined1 **)(param_3 + 0x40);
              do {
                uVar1 = *puVar12;
                if ((int)uVar1 < -0x7f) {
                  uVar1 = 0xffffff80;
                }
                if (0x7e < (int)uVar1) {
                  uVar1 = 0x7f;
                }
                *puVar3 = (char)uVar1;
                lVar14 = lVar14 + -4;
                puVar12 = puVar12 + 1;
                puVar3 = puVar3 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 3) && (iVar4 != 0)) {
            lVar14 = lVar14 << 2;
            puVar17 = *(undefined2 **)(param_3 + 0x40);
            do {
              uVar1 = *puVar12;
              if ((int)uVar1 < -0x7fff) {
                uVar1 = 0xffff8000;
              }
              if (0x7ffe < (int)uVar1) {
                uVar1 = 0x7fff;
              }
              *puVar17 = (short)uVar1;
              lVar14 = lVar14 + -4;
              puVar12 = puVar12 + 1;
              puVar17 = puVar17 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 < 6) {
          if (bVar25 == 4) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 2;
              puVar22 = *(uint **)(param_3 + 0x40);
              do {
                *puVar22 = *puVar12;
                lVar14 = lVar14 + -4;
                puVar12 = puVar12 + 1;
                puVar22 = puVar22 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 5) && (iVar4 != 0)) {
            lVar14 = lVar14 << 2;
            plVar15 = *(long **)(param_3 + 0x40);
            do {
              *plVar15 = (long)(int)*puVar12;
              lVar14 = lVar14 + -4;
              puVar12 = puVar12 + 1;
              plVar15 = plVar15 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 == 6) {
          if (iVar4 != 0) {
            lVar14 = lVar14 << 2;
            puVar3 = *(undefined1 **)(param_3 + 0x40);
            do {
              uVar1 = *puVar12 & ((int)*puVar12 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar1) {
                uVar1 = 0xff;
              }
              *puVar3 = (char)uVar1;
              lVar14 = lVar14 + -4;
              puVar12 = puVar12 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 7) && (iVar4 != 0)) {
          lVar14 = lVar14 << 2;
          puVar17 = *(undefined2 **)(param_3 + 0x40);
          do {
            uVar1 = *puVar12 & ((int)*puVar12 >> 0x1f ^ 0xffffffffU);
            if (0xfffe < (int)uVar1) {
              uVar1 = 0xffff;
            }
            *puVar17 = (short)uVar1;
            lVar14 = lVar14 + -4;
            puVar12 = puVar12 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar14 != 0);
        }
      }
      else {
        if (bVar25 != 5) goto LAB_109c134a8;
        puVar9 = *(ulong **)(puVar6 + 0x40);
        lVar14 = (long)iVar4;
        bVar25 = *(byte *)(param_3 + 0x48);
        if (bVar25 < 4) {
          if (bVar25 == 1) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 3;
              pfVar11 = *(float **)(param_3 + 0x40);
              do {
                *pfVar11 = (float)(long)*puVar9;
                lVar14 = lVar14 + -8;
                puVar9 = puVar9 + 1;
                pfVar11 = pfVar11 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (bVar25 == 2) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 3;
              puVar3 = *(undefined1 **)(param_3 + 0x40);
              do {
                uVar27 = *puVar9;
                if ((long)uVar27 < -0x7f) {
                  uVar27 = 0xffffffffffffff80;
                }
                if (0x7e < (long)uVar27) {
                  uVar27 = 0x7f;
                }
                *puVar3 = (char)uVar27;
                lVar14 = lVar14 + -8;
                puVar9 = puVar9 + 1;
                puVar3 = puVar3 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 3) && (iVar4 != 0)) {
            lVar14 = lVar14 << 3;
            puVar17 = *(undefined2 **)(param_3 + 0x40);
            do {
              uVar27 = *puVar9;
              if ((long)uVar27 < -0x7fff) {
                uVar27 = 0xffffffffffff8000;
              }
              if (0x7ffe < (long)uVar27) {
                uVar27 = 0x7fff;
              }
              *puVar17 = (short)uVar27;
              lVar14 = lVar14 + -8;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 < 6) {
          if (bVar25 == 4) {
            if (iVar4 != 0) {
              lVar14 = lVar14 << 3;
              puVar23 = *(undefined4 **)(param_3 + 0x40);
              do {
                uVar27 = *puVar9;
                if ((long)uVar27 < -0x7fffffff) {
                  uVar27 = 0xffffffff80000000;
                }
                if (0x7ffffffe < (long)uVar27) {
                  uVar27 = 0x7fffffff;
                }
                *puVar23 = (int)uVar27;
                lVar14 = lVar14 + -8;
                puVar9 = puVar9 + 1;
                puVar23 = puVar23 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((bVar25 == 5) && (iVar4 != 0)) {
            lVar14 = lVar14 << 3;
            puVar16 = *(ulong **)(param_3 + 0x40);
            do {
              *puVar16 = *puVar9;
              lVar14 = lVar14 + -8;
              puVar9 = puVar9 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 == 6) {
          if (iVar4 != 0) {
            lVar14 = lVar14 << 3;
            puVar3 = *(undefined1 **)(param_3 + 0x40);
            do {
              uVar27 = *puVar9 & ((long)*puVar9 >> 0x3f ^ 0xffffffffffffffffU);
              if (0xfe < (long)uVar27) {
                uVar27 = 0xff;
              }
              *puVar3 = (char)uVar27;
              lVar14 = lVar14 + -8;
              puVar9 = puVar9 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 7) && (iVar4 != 0)) {
          lVar14 = lVar14 << 3;
          puVar17 = *(undefined2 **)(param_3 + 0x40);
          do {
            uVar27 = *puVar9 & ((long)*puVar9 >> 0x3f ^ 0xffffffffffffffffU);
            if (0xfffe < (long)uVar27) {
              uVar27 = 0xffff;
            }
            *puVar17 = (short)uVar27;
            lVar14 = lVar14 + -8;
            puVar9 = puVar9 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar14 != 0);
        }
      }
    }
    else if (bVar25 == 6) {
      pbVar13 = *(byte **)(puVar6 + 0x40);
      lVar14 = (long)iVar4;
      bVar25 = *(byte *)(param_3 + 0x48);
      if (bVar25 < 4) {
        if (bVar25 == 1) {
          if (iVar4 != 0) {
            pfVar11 = *(float **)(param_3 + 0x40);
            do {
              *pfVar11 = (float)*pbVar13;
              lVar14 = lVar14 + -1;
              pbVar13 = pbVar13 + 1;
              pfVar11 = pfVar11 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 == 2) {
          if (iVar4 != 0) {
            pbVar24 = *(byte **)(param_3 + 0x40);
            do {
              bVar25 = *pbVar13;
              if (0x7e < bVar25) {
                bVar25 = 0x7f;
              }
              *pbVar24 = bVar25;
              lVar14 = lVar14 + -1;
              pbVar13 = pbVar13 + 1;
              pbVar24 = pbVar24 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 3) && (iVar4 != 0)) {
          puVar10 = *(ushort **)(param_3 + 0x40);
          do {
            *puVar10 = (ushort)*pbVar13;
            lVar14 = lVar14 + -1;
            pbVar13 = pbVar13 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar14 != 0);
        }
      }
      else if (bVar25 < 6) {
        if (bVar25 == 4) {
          if (iVar4 != 0) {
            puVar12 = *(uint **)(param_3 + 0x40);
            do {
              *puVar12 = (uint)*pbVar13;
              lVar14 = lVar14 + -1;
              pbVar13 = pbVar13 + 1;
              puVar12 = puVar12 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 5) && (iVar4 != 0)) {
          puVar9 = *(ulong **)(param_3 + 0x40);
          do {
            *puVar9 = (ulong)*pbVar13;
            lVar14 = lVar14 + -1;
            pbVar13 = pbVar13 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar14 != 0);
        }
      }
      else if (bVar25 == 6) {
        if (iVar4 != 0) {
          pbVar24 = *(byte **)(param_3 + 0x40);
          do {
            *pbVar24 = *pbVar13;
            lVar14 = lVar14 + -1;
            pbVar13 = pbVar13 + 1;
            pbVar24 = pbVar24 + 1;
          } while (lVar14 != 0);
        }
      }
      else if ((bVar25 == 7) && (iVar4 != 0)) {
        puVar10 = *(ushort **)(param_3 + 0x40);
        do {
          *puVar10 = (ushort)*pbVar13;
          lVar14 = lVar14 + -1;
          pbVar13 = pbVar13 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar14 != 0);
      }
    }
    else {
      if (bVar25 != 7) {
        if (bVar25 == 8) {
          FUN_109c13e7c(8);
          puVar9 = extraout_x8;
        }
LAB_109c134a8:
        FUN_109c13e7c();
        pcStack_38 = FUN_109c134b0;
        if ((byte)puVar9[9] != uVar8) {
          puStack_50 = puVar6;
          lStack_48 = param_3;
          ppuStack_40 = &puStack_20;
          FUN_109c13518(auStack_a8,puVar9);
          FUN_109c10d34(puVar9,auStack_a8);
          FUN_109c10e9c(auStack_a8);
        }
        return puVar9;
      }
      puVar10 = *(ushort **)(puVar6 + 0x40);
      lVar14 = (long)iVar4;
      bVar25 = *(byte *)(param_3 + 0x48);
      if (bVar25 < 4) {
        if (bVar25 == 1) {
          if (iVar4 != 0) {
            lVar14 = lVar14 << 1;
            pfVar11 = *(float **)(param_3 + 0x40);
            do {
              *pfVar11 = (float)*puVar10;
              lVar14 = lVar14 + -2;
              puVar10 = puVar10 + 1;
              pfVar11 = pfVar11 + 1;
            } while (lVar14 != 0);
          }
        }
        else if (bVar25 == 2) {
          if (iVar4 != 0) {
            lVar14 = lVar14 << 1;
            puVar3 = *(undefined1 **)(param_3 + 0x40);
            do {
              uVar26 = *puVar10;
              if (0x7e < uVar26) {
                uVar26 = 0x7f;
              }
              *puVar3 = (char)uVar26;
              lVar14 = lVar14 + -2;
              puVar10 = puVar10 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 3) && (iVar4 != 0)) {
          lVar14 = lVar14 << 1;
          puVar18 = *(ushort **)(param_3 + 0x40);
          do {
            uVar26 = *puVar10;
            if (0x7ffe < uVar26) {
              uVar26 = 0x7fff;
            }
            *puVar18 = uVar26;
            lVar14 = lVar14 + -2;
            puVar10 = puVar10 + 1;
            puVar18 = puVar18 + 1;
          } while (lVar14 != 0);
        }
      }
      else if (bVar25 < 6) {
        if (bVar25 == 4) {
          if (iVar4 != 0) {
            lVar14 = lVar14 << 1;
            puVar12 = *(uint **)(param_3 + 0x40);
            do {
              *puVar12 = (uint)*puVar10;
              lVar14 = lVar14 + -2;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((bVar25 == 5) && (iVar4 != 0)) {
          lVar14 = lVar14 << 1;
          puVar9 = *(ulong **)(param_3 + 0x40);
          do {
            *puVar9 = (ulong)*puVar10;
            lVar14 = lVar14 + -2;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar14 != 0);
        }
      }
      else if (bVar25 == 6) {
        if (iVar4 != 0) {
          lVar14 = lVar14 << 1;
          puVar3 = *(undefined1 **)(param_3 + 0x40);
          do {
            uVar26 = *puVar10;
            if (0xfe < uVar26) {
              uVar26 = 0xff;
            }
            *puVar3 = (char)uVar26;
            lVar14 = lVar14 + -2;
            puVar10 = puVar10 + 1;
            puVar3 = puVar3 + 1;
          } while (lVar14 != 0);
        }
      }
      else if ((bVar25 == 7) && (iVar4 != 0)) {
        lVar14 = lVar14 << 1;
        puVar18 = *(ushort **)(param_3 + 0x40);
        do {
          *puVar18 = *puVar10;
          lVar14 = lVar14 + -2;
          puVar10 = puVar10 + 1;
          puVar18 = puVar18 + 1;
        } while (lVar14 != 0);
      }
    }
    return puVar7;
  }
  puVar3 = (undefined1 *)register0x00000008;
  puVar7 = (ulong *)(&PTR_DAT_110b2bdb0)[param_2];
  while( true ) {
    puVar16 = puVar7;
    puVar9 = param_1;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(ulong **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(ulong **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    puVar7 = puVar16;
    func_0x000107c613d0();
    if (puVar7 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)(puVar3 + -0x60) = unaff_x20;
    *(ulong **)(puVar3 + -0x58) = puVar9;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = &UNK_10002d57c;
    unaff_x29 = puVar3 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar7;
    }
    puVar7 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar7 == 0) {
      return puVar7;
    }
    unaff_x30 = &UNK_10002d5bc;
    puVar3 = puVar3 + -0x60;
    param_1 = (ulong *)0x1132dfae8;
    puVar7 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar9;
    unaff_x21 = puVar16;
  }
  if (puVar7 < (ulong *)0x17) {
    *(char *)((long)puVar9 + 0x17) = (char)puVar7;
    puVar5 = puVar9;
    if (puVar7 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar7 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar7 | 7) + 1);
    }
    puVar5 = puVar2;
    func_0x000107c60e20();
    puVar9[1] = (ulong)puVar7;
    puVar9[2] = (ulong)puVar2 | 0x8000000000000000;
    *puVar9 = (ulong)puVar5;
  }
  func_0x000107c610b8(puVar5,puVar16,puVar7);
code_r0x00010002d55c:
  *(undefined1 *)((long)puVar5 + (long)puVar7) = 0;
  return puVar9;
}



/* Entry: 109c12a04; end: 109c134af;  */

undefined * FUN_109c12a04(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  ushort *puVar6;
  ulong *puVar7;
  float *pfVar8;
  uint *puVar9;
  byte *pbVar10;
  undefined *extraout_x8;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  undefined2 *puVar14;
  ushort *puVar15;
  short *psVar16;
  float *pfVar17;
  int *piVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  byte bVar23;
  ushort uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_98 [88];
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar3 = &UNK_10f5a3554;
  uVar4 = 0x1a;
  FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_1 + 0xc,uVar1);
  bVar23 = *(byte *)(param_1 + 0x48);
  puVar5 = (undefined *)(ulong)bVar23;
  iVar2 = (int)puVar3;
  if (bVar23 < 4) {
    if (bVar23 < 2) {
      pfVar8 = *(float **)(param_1 + 0x40);
      lVar11 = (long)iVar2;
      bVar23 = *(byte *)(param_2 + 0x48);
      if (bVar23 < 4) {
        if (bVar23 == 1) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 2;
            pfVar17 = *(float **)(param_2 + 0x40);
            do {
              *pfVar17 = *pfVar8;
              lVar11 = lVar11 + -4;
              pfVar8 = pfVar8 + 1;
              pfVar17 = pfVar17 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 2) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 2;
            puVar21 = *(undefined1 **)(param_2 + 0x40);
            do {
              fVar27 = *pfVar8;
              fVar28 = 127.0;
              if (fVar27 <= 127.0) {
                fVar28 = fVar27;
              }
              fVar26 = -128.0;
              if (-128.0 <= fVar27) {
                fVar26 = fVar28;
              }
              *puVar21 = (char)(int)fVar26;
              lVar11 = lVar11 + -4;
              pfVar8 = pfVar8 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 3) && (iVar2 != 0)) {
          lVar11 = lVar11 << 2;
          puVar14 = *(undefined2 **)(param_2 + 0x40);
          do {
            fVar27 = *pfVar8;
            fVar28 = 32767.0;
            if (fVar27 <= 32767.0) {
              fVar28 = fVar27;
            }
            fVar26 = -32768.0;
            if (-32768.0 <= fVar27) {
              fVar26 = fVar28;
            }
            *puVar14 = (short)(int)fVar26;
            lVar11 = lVar11 + -4;
            pfVar8 = pfVar8 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 < 6) {
        if (bVar23 == 4) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 2;
            piVar18 = *(int **)(param_2 + 0x40);
            do {
              fVar27 = *pfVar8;
              fVar28 = 2.1474836e+09;
              if (fVar27 <= 2.1474836e+09) {
                fVar28 = fVar27;
              }
              fVar26 = -2.1474836e+09;
              if (-2.1474836e+09 <= fVar27) {
                fVar26 = fVar28;
              }
              *piVar18 = (int)fVar26;
              lVar11 = lVar11 + -4;
              pfVar8 = pfVar8 + 1;
              piVar18 = piVar18 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 5) && (iVar2 != 0)) {
          lVar11 = lVar11 << 2;
          plVar12 = *(long **)(param_2 + 0x40);
          do {
            *plVar12 = (long)*pfVar8;
            lVar11 = lVar11 + -4;
            pfVar8 = pfVar8 + 1;
            plVar12 = plVar12 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 6) {
        if (iVar2 != 0) {
          lVar11 = lVar11 << 2;
          puVar21 = *(undefined1 **)(param_2 + 0x40);
          do {
            fVar27 = *pfVar8;
            fVar28 = 255.0;
            if (fVar27 <= 255.0) {
              fVar28 = fVar27;
            }
            fVar26 = 0.0;
            if (0.0 <= fVar27) {
              fVar26 = fVar28;
            }
            *puVar21 = (char)(int)fVar26;
            lVar11 = lVar11 + -4;
            pfVar8 = pfVar8 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 7) && (iVar2 != 0)) {
        lVar11 = lVar11 << 2;
        puVar14 = *(undefined2 **)(param_2 + 0x40);
        do {
          fVar27 = *pfVar8;
          fVar28 = 65535.0;
          if (fVar27 <= 65535.0) {
            fVar28 = fVar27;
          }
          fVar26 = 0.0;
          if (0.0 <= fVar27) {
            fVar26 = fVar28;
          }
          *puVar14 = (short)(int)fVar26;
          lVar11 = lVar11 + -4;
          pfVar8 = pfVar8 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar11 != 0);
      }
    }
    else if (bVar23 == 2) {
      pbVar10 = *(byte **)(param_1 + 0x40);
      lVar11 = (long)iVar2;
      bVar23 = *(byte *)(param_2 + 0x48);
      if (bVar23 < 4) {
        if (bVar23 == 1) {
          if (iVar2 != 0) {
            pfVar8 = *(float **)(param_2 + 0x40);
            do {
              *pfVar8 = (float)(int)(char)*pbVar10;
              lVar11 = lVar11 + -1;
              pbVar10 = pbVar10 + 1;
              pfVar8 = pfVar8 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 2) {
          if (iVar2 != 0) {
            pbVar22 = *(byte **)(param_2 + 0x40);
            do {
              *pbVar22 = *pbVar10;
              lVar11 = lVar11 + -1;
              pbVar10 = pbVar10 + 1;
              pbVar22 = pbVar22 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 3) && (iVar2 != 0)) {
          psVar16 = *(short **)(param_2 + 0x40);
          do {
            *psVar16 = (short)(char)*pbVar10;
            lVar11 = lVar11 + -1;
            pbVar10 = pbVar10 + 1;
            psVar16 = psVar16 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 < 6) {
        if (bVar23 == 4) {
          if (iVar2 != 0) {
            piVar18 = *(int **)(param_2 + 0x40);
            do {
              *piVar18 = (int)(char)*pbVar10;
              lVar11 = lVar11 + -1;
              pbVar10 = pbVar10 + 1;
              piVar18 = piVar18 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 5) && (iVar2 != 0)) {
          plVar12 = *(long **)(param_2 + 0x40);
          do {
            *plVar12 = (long)(char)*pbVar10;
            lVar11 = lVar11 + -1;
            pbVar10 = pbVar10 + 1;
            plVar12 = plVar12 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 6) {
        if (iVar2 != 0) {
          pbVar22 = *(byte **)(param_2 + 0x40);
          do {
            *pbVar22 = *pbVar10 & ((char)*pbVar10 >> 0x1f ^ 0xffU);
            lVar11 = lVar11 + -1;
            pbVar10 = pbVar10 + 1;
            pbVar22 = pbVar22 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 7) && (iVar2 != 0)) {
        psVar16 = *(short **)(param_2 + 0x40);
        do {
          *psVar16 = (short)(char)*pbVar10;
          lVar11 = lVar11 + -1;
          pbVar10 = pbVar10 + 1;
          psVar16 = psVar16 + 1;
        } while (lVar11 != 0);
      }
    }
    else {
      if (bVar23 != 3) goto LAB_109c134a8;
      puVar6 = *(ushort **)(param_1 + 0x40);
      lVar11 = (long)iVar2;
      bVar23 = *(byte *)(param_2 + 0x48);
      if (bVar23 < 4) {
        if (bVar23 == 1) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 1;
            pfVar8 = *(float **)(param_2 + 0x40);
            do {
              *pfVar8 = (float)(int)(short)*puVar6;
              lVar11 = lVar11 + -2;
              puVar6 = puVar6 + 1;
              pfVar8 = pfVar8 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 2) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 1;
            puVar21 = *(undefined1 **)(param_2 + 0x40);
            do {
              uVar24 = *puVar6;
              if ((short)uVar24 < -0x7f) {
                uVar24 = 0xff80;
              }
              if (0x7e < (short)uVar24) {
                uVar24 = 0x7f;
              }
              *puVar21 = (char)uVar24;
              lVar11 = lVar11 + -2;
              puVar6 = puVar6 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 3) && (iVar2 != 0)) {
          lVar11 = lVar11 << 1;
          puVar15 = *(ushort **)(param_2 + 0x40);
          do {
            *puVar15 = *puVar6;
            lVar11 = lVar11 + -2;
            puVar6 = puVar6 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 < 6) {
        if (bVar23 == 4) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 1;
            piVar18 = *(int **)(param_2 + 0x40);
            do {
              *piVar18 = (int)(short)*puVar6;
              lVar11 = lVar11 + -2;
              puVar6 = puVar6 + 1;
              piVar18 = piVar18 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 5) && (iVar2 != 0)) {
          lVar11 = lVar11 << 1;
          plVar12 = *(long **)(param_2 + 0x40);
          do {
            *plVar12 = (long)(short)*puVar6;
            lVar11 = lVar11 + -2;
            puVar6 = puVar6 + 1;
            plVar12 = plVar12 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 6) {
        if (iVar2 != 0) {
          lVar11 = lVar11 << 1;
          puVar21 = *(undefined1 **)(param_2 + 0x40);
          do {
            uVar24 = *puVar6 & ((short)*puVar6 >> 0x1f ^ 0xffffU);
            if (0xfe < (short)uVar24) {
              uVar24 = 0xff;
            }
            *puVar21 = (char)uVar24;
            lVar11 = lVar11 + -2;
            puVar6 = puVar6 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 7) && (iVar2 != 0)) {
        lVar11 = lVar11 << 1;
        puVar15 = *(ushort **)(param_2 + 0x40);
        do {
          *puVar15 = *puVar6 & ((short)*puVar6 >> 0x1f ^ 0xffffU);
          lVar11 = lVar11 + -2;
          puVar6 = puVar6 + 1;
          puVar15 = puVar15 + 1;
        } while (lVar11 != 0);
      }
    }
  }
  else if (bVar23 < 6) {
    if (bVar23 == 4) {
      puVar9 = *(uint **)(param_1 + 0x40);
      lVar11 = (long)iVar2;
      bVar23 = *(byte *)(param_2 + 0x48);
      if (bVar23 < 4) {
        if (bVar23 == 1) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 2;
            pfVar8 = *(float **)(param_2 + 0x40);
            do {
              *pfVar8 = (float)(int)*puVar9;
              lVar11 = lVar11 + -4;
              puVar9 = puVar9 + 1;
              pfVar8 = pfVar8 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 2) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 2;
            puVar21 = *(undefined1 **)(param_2 + 0x40);
            do {
              uVar1 = *puVar9;
              if ((int)uVar1 < -0x7f) {
                uVar1 = 0xffffff80;
              }
              if (0x7e < (int)uVar1) {
                uVar1 = 0x7f;
              }
              *puVar21 = (char)uVar1;
              lVar11 = lVar11 + -4;
              puVar9 = puVar9 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 3) && (iVar2 != 0)) {
          lVar11 = lVar11 << 2;
          puVar14 = *(undefined2 **)(param_2 + 0x40);
          do {
            uVar1 = *puVar9;
            if ((int)uVar1 < -0x7fff) {
              uVar1 = 0xffff8000;
            }
            if (0x7ffe < (int)uVar1) {
              uVar1 = 0x7fff;
            }
            *puVar14 = (short)uVar1;
            lVar11 = lVar11 + -4;
            puVar9 = puVar9 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 < 6) {
        if (bVar23 == 4) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 2;
            puVar19 = *(uint **)(param_2 + 0x40);
            do {
              *puVar19 = *puVar9;
              lVar11 = lVar11 + -4;
              puVar9 = puVar9 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 5) && (iVar2 != 0)) {
          lVar11 = lVar11 << 2;
          plVar12 = *(long **)(param_2 + 0x40);
          do {
            *plVar12 = (long)(int)*puVar9;
            lVar11 = lVar11 + -4;
            puVar9 = puVar9 + 1;
            plVar12 = plVar12 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 6) {
        if (iVar2 != 0) {
          lVar11 = lVar11 << 2;
          puVar21 = *(undefined1 **)(param_2 + 0x40);
          do {
            uVar1 = *puVar9 & ((int)*puVar9 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar1) {
              uVar1 = 0xff;
            }
            *puVar21 = (char)uVar1;
            lVar11 = lVar11 + -4;
            puVar9 = puVar9 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 7) && (iVar2 != 0)) {
        lVar11 = lVar11 << 2;
        puVar14 = *(undefined2 **)(param_2 + 0x40);
        do {
          uVar1 = *puVar9 & ((int)*puVar9 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          *puVar14 = (short)uVar1;
          lVar11 = lVar11 + -4;
          puVar9 = puVar9 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar11 != 0);
      }
    }
    else {
      if (bVar23 != 5) goto LAB_109c134a8;
      puVar7 = *(ulong **)(param_1 + 0x40);
      lVar11 = (long)iVar2;
      bVar23 = *(byte *)(param_2 + 0x48);
      if (bVar23 < 4) {
        if (bVar23 == 1) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 3;
            pfVar8 = *(float **)(param_2 + 0x40);
            do {
              *pfVar8 = (float)(long)*puVar7;
              lVar11 = lVar11 + -8;
              puVar7 = puVar7 + 1;
              pfVar8 = pfVar8 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (bVar23 == 2) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 3;
            puVar21 = *(undefined1 **)(param_2 + 0x40);
            do {
              uVar25 = *puVar7;
              if ((long)uVar25 < -0x7f) {
                uVar25 = 0xffffffffffffff80;
              }
              if (0x7e < (long)uVar25) {
                uVar25 = 0x7f;
              }
              *puVar21 = (char)uVar25;
              lVar11 = lVar11 + -8;
              puVar7 = puVar7 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 3) && (iVar2 != 0)) {
          lVar11 = lVar11 << 3;
          puVar14 = *(undefined2 **)(param_2 + 0x40);
          do {
            uVar25 = *puVar7;
            if ((long)uVar25 < -0x7fff) {
              uVar25 = 0xffffffffffff8000;
            }
            if (0x7ffe < (long)uVar25) {
              uVar25 = 0x7fff;
            }
            *puVar14 = (short)uVar25;
            lVar11 = lVar11 + -8;
            puVar7 = puVar7 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 < 6) {
        if (bVar23 == 4) {
          if (iVar2 != 0) {
            lVar11 = lVar11 << 3;
            puVar20 = *(undefined4 **)(param_2 + 0x40);
            do {
              uVar25 = *puVar7;
              if ((long)uVar25 < -0x7fffffff) {
                uVar25 = 0xffffffff80000000;
              }
              if (0x7ffffffe < (long)uVar25) {
                uVar25 = 0x7fffffff;
              }
              *puVar20 = (int)uVar25;
              lVar11 = lVar11 + -8;
              puVar7 = puVar7 + 1;
              puVar20 = puVar20 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((bVar23 == 5) && (iVar2 != 0)) {
          lVar11 = lVar11 << 3;
          puVar13 = *(ulong **)(param_2 + 0x40);
          do {
            *puVar13 = *puVar7;
            lVar11 = lVar11 + -8;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 6) {
        if (iVar2 != 0) {
          lVar11 = lVar11 << 3;
          puVar21 = *(undefined1 **)(param_2 + 0x40);
          do {
            uVar25 = *puVar7 & ((long)*puVar7 >> 0x3f ^ 0xffffffffffffffffU);
            if (0xfe < (long)uVar25) {
              uVar25 = 0xff;
            }
            *puVar21 = (char)uVar25;
            lVar11 = lVar11 + -8;
            puVar7 = puVar7 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 7) && (iVar2 != 0)) {
        lVar11 = lVar11 << 3;
        puVar14 = *(undefined2 **)(param_2 + 0x40);
        do {
          uVar25 = *puVar7 & ((long)*puVar7 >> 0x3f ^ 0xffffffffffffffffU);
          if (0xfffe < (long)uVar25) {
            uVar25 = 0xffff;
          }
          *puVar14 = (short)uVar25;
          lVar11 = lVar11 + -8;
          puVar7 = puVar7 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar11 != 0);
      }
    }
  }
  else if (bVar23 == 6) {
    pbVar10 = *(byte **)(param_1 + 0x40);
    lVar11 = (long)iVar2;
    bVar23 = *(byte *)(param_2 + 0x48);
    if (bVar23 < 4) {
      if (bVar23 == 1) {
        if (iVar2 != 0) {
          pfVar8 = *(float **)(param_2 + 0x40);
          do {
            *pfVar8 = (float)*pbVar10;
            lVar11 = lVar11 + -1;
            pbVar10 = pbVar10 + 1;
            pfVar8 = pfVar8 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 2) {
        if (iVar2 != 0) {
          pbVar22 = *(byte **)(param_2 + 0x40);
          do {
            bVar23 = *pbVar10;
            if (0x7e < bVar23) {
              bVar23 = 0x7f;
            }
            *pbVar22 = bVar23;
            lVar11 = lVar11 + -1;
            pbVar10 = pbVar10 + 1;
            pbVar22 = pbVar22 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 3) && (iVar2 != 0)) {
        puVar6 = *(ushort **)(param_2 + 0x40);
        do {
          *puVar6 = (ushort)*pbVar10;
          lVar11 = lVar11 + -1;
          pbVar10 = pbVar10 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar11 != 0);
      }
    }
    else if (bVar23 < 6) {
      if (bVar23 == 4) {
        if (iVar2 != 0) {
          puVar9 = *(uint **)(param_2 + 0x40);
          do {
            *puVar9 = (uint)*pbVar10;
            lVar11 = lVar11 + -1;
            pbVar10 = pbVar10 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 5) && (iVar2 != 0)) {
        puVar7 = *(ulong **)(param_2 + 0x40);
        do {
          *puVar7 = (ulong)*pbVar10;
          lVar11 = lVar11 + -1;
          pbVar10 = pbVar10 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar11 != 0);
      }
    }
    else if (bVar23 == 6) {
      if (iVar2 != 0) {
        pbVar22 = *(byte **)(param_2 + 0x40);
        do {
          *pbVar22 = *pbVar10;
          lVar11 = lVar11 + -1;
          pbVar10 = pbVar10 + 1;
          pbVar22 = pbVar22 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((bVar23 == 7) && (iVar2 != 0)) {
      puVar6 = *(ushort **)(param_2 + 0x40);
      do {
        *puVar6 = (ushort)*pbVar10;
        lVar11 = lVar11 + -1;
        pbVar10 = pbVar10 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar11 != 0);
    }
  }
  else {
    if (bVar23 != 7) {
      if (bVar23 == 8) {
        FUN_109c13e7c(8);
        puVar5 = extraout_x8;
      }
LAB_109c134a8:
      FUN_109c13e7c();
      pcStack_28 = FUN_109c134b0;
      if ((byte)puVar5[0x48] != uVar4) {
        lStack_40 = param_1;
        lStack_38 = param_2;
        puStack_30 = &stack0xfffffffffffffff0;
        FUN_109c13518(auStack_98,puVar5);
        FUN_109c10d34(puVar5,auStack_98);
        FUN_109c10e9c(auStack_98);
      }
      return puVar5;
    }
    puVar6 = *(ushort **)(param_1 + 0x40);
    lVar11 = (long)iVar2;
    bVar23 = *(byte *)(param_2 + 0x48);
    if (bVar23 < 4) {
      if (bVar23 == 1) {
        if (iVar2 != 0) {
          lVar11 = lVar11 << 1;
          pfVar8 = *(float **)(param_2 + 0x40);
          do {
            *pfVar8 = (float)*puVar6;
            lVar11 = lVar11 + -2;
            puVar6 = puVar6 + 1;
            pfVar8 = pfVar8 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (bVar23 == 2) {
        if (iVar2 != 0) {
          lVar11 = lVar11 << 1;
          puVar21 = *(undefined1 **)(param_2 + 0x40);
          do {
            uVar24 = *puVar6;
            if (0x7e < uVar24) {
              uVar24 = 0x7f;
            }
            *puVar21 = (char)uVar24;
            lVar11 = lVar11 + -2;
            puVar6 = puVar6 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 3) && (iVar2 != 0)) {
        lVar11 = lVar11 << 1;
        puVar15 = *(ushort **)(param_2 + 0x40);
        do {
          uVar24 = *puVar6;
          if (0x7ffe < uVar24) {
            uVar24 = 0x7fff;
          }
          *puVar15 = uVar24;
          lVar11 = lVar11 + -2;
          puVar6 = puVar6 + 1;
          puVar15 = puVar15 + 1;
        } while (lVar11 != 0);
      }
    }
    else if (bVar23 < 6) {
      if (bVar23 == 4) {
        if (iVar2 != 0) {
          lVar11 = lVar11 << 1;
          puVar9 = *(uint **)(param_2 + 0x40);
          do {
            *puVar9 = (uint)*puVar6;
            lVar11 = lVar11 + -2;
            puVar6 = puVar6 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((bVar23 == 5) && (iVar2 != 0)) {
        lVar11 = lVar11 << 1;
        puVar7 = *(ulong **)(param_2 + 0x40);
        do {
          *puVar7 = (ulong)*puVar6;
          lVar11 = lVar11 + -2;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar11 != 0);
      }
    }
    else if (bVar23 == 6) {
      if (iVar2 != 0) {
        lVar11 = lVar11 << 1;
        puVar21 = *(undefined1 **)(param_2 + 0x40);
        do {
          uVar24 = *puVar6;
          if (0xfe < uVar24) {
            uVar24 = 0xff;
          }
          *puVar21 = (char)uVar24;
          lVar11 = lVar11 + -2;
          puVar6 = puVar6 + 1;
          puVar21 = puVar21 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((bVar23 == 7) && (iVar2 != 0)) {
      lVar11 = lVar11 << 1;
      puVar15 = *(ushort **)(param_2 + 0x40);
      do {
        *puVar15 = *puVar6;
        lVar11 = lVar11 + -2;
        puVar6 = puVar6 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar11 != 0);
    }
  }
  return puVar3;
}



/* Entry: 109c134b0; end: 109c13517;  */

long FUN_109c134b0(long param_1,uint param_2)

{
  undefined1 auStack_78 [88];
  
  if (*(byte *)(param_1 + 0x48) != param_2) {
    FUN_109c13518(auStack_78,param_1);
    FUN_109c10d34(param_1,auStack_78);
    FUN_109c10e9c(auStack_78);
  }
  return param_1;
}



/* Entry: 109c13518; end: 109c135b3;  */

undefined8 * FUN_109c13518(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  if ((uint)*(byte *)(param_2 + 9) == (uint)param_3) {
    *param_1 = &PTR_FUN_110b2bd90;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    func_0x000107c31940(param_1 + 4,&UNK_10f5a33f8);
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
    FUN_109c10d34(param_1,param_2);
    return param_1;
  }
  FUN_109c1106c(param_1,param_2 + 1,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  FUN_109c12a04(param_2,param_1);
  return param_2;
}



/* Entry: 109c135b4; end: 109c1370f;  */

long FUN_109c135b4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    iVar3 = 0xf5a3554;
    FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_1 + 0xc,uVar1);
    pfVar4 = *(float **)(param_1 + 0x40);
    lVar5 = (long)iVar3;
    iVar2 = *(int *)(param_1 + 0x50);
    if (*(char *)(param_1 + 0x48) == '\x05') {
      if (iVar3 != 0) {
        lVar5 = lVar5 << 3;
        do {
          *(long *)pfVar4 = *(long *)pfVar4 - (long)iVar2;
          lVar5 = lVar5 + -8;
          pfVar4 = pfVar4 + 2;
        } while (lVar5 != 0);
      }
    }
    else if (*(char *)(param_1 + 0x48) == '\x04') {
      if (iVar3 != 0) {
        lVar5 = lVar5 << 2;
        do {
          *pfVar4 = (float)((int)*pfVar4 - iVar2);
          lVar5 = lVar5 + -4;
          pfVar4 = pfVar4 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (iVar3 != 0) {
      lVar5 = lVar5 << 2;
      do {
        *pfVar4 = *pfVar4 - (float)iVar2;
        lVar5 = lVar5 + -4;
        pfVar4 = pfVar4 + 1;
      } while (lVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return param_1;
}



/* Entry: 109c13710; end: 109c138cb;  */

/* WARNING: Removing unreachable block (ram,0x000109c137f4) */

long FUN_109c13710(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 0x10) < (int)param_2) {
    __ZNSt3__19to_stringEi(auStack_98,param_2);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a360c,0xf);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    lStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f5a361c,7);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    lStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__19to_stringEi(&puStack_b0,*(undefined4 *)(param_1 + 0x10));
    ppuVar1 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuVar1 = &puStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuVar1,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c14014(param_1,&uStack_40);
    if ((char)bStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
  }
  return param_1;
}



/* Entry: 109c138cc; end: 109c139a3;  */

long FUN_109c138cc(ushort *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar2 = &UNK_10f5a3554;
  FUN_109c60fbc(&UNK_10f5a3554,0x1a,param_2 + 1,uVar1);
  lVar3 = 0x58;
  __Znwm();
  FUN_109c1106c();
  if (0 < (int)puVar2) {
    uVar5 = (ulong)puVar2 & 0xffffffff;
    piVar4 = *(int **)(lVar3 + 0x40);
    do {
      uVar6 = (ulong)(*param_1 >> 10);
      *piVar4 = *(int *)(&UNK_10e039244 + uVar6 * 4) +
                *(int *)(&UNK_10e037244 +
                        (ulong)((*param_1 & 0x3ff) + (uint)*(ushort *)(&UNK_10e039344 + uVar6 * 2))
                        * 4);
      uVar5 = uVar5 - 1;
      piVar4 = piVar4 + 1;
      param_1 = param_1 + 1;
    } while (uVar5 != 0);
  }
  return lVar3;
}



/* Entry: 109c139a4; end: 109c13acf;  */

ulong * FUN_109c139a4(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = param_2[1];
  uVar1 = param_2[2];
  if (uVar1 != 0 || uVar7 != 0) {
    lVar11 = *param_2;
    if (uVar1 != 0 && uVar7 != 0) {
      lVar8 = 0;
      if (uVar7 != 0) {
        lVar8 = 0x7fffffffffffffff / (long)uVar7;
      }
      if (lVar8 < (long)uVar1) goto LAB_109c13a98;
    }
    uVar10 = uVar7 * uVar1;
    if (uVar10 == 0) {
      uVar5 = 0;
      uVar4 = 0;
      param_1[1] = uVar1;
      param_1[2] = uVar7;
    }
    else if ((long)uVar10 < 1) {
      uVar4 = 0;
      param_1[1] = uVar1;
      param_1[2] = uVar7;
      uVar5 = -(-uVar10 & 0xfffffffffffffff0);
    }
    else {
      uVar4 = uVar10;
      _malloc();
      if (uVar4 == 0) {
LAB_109c13a98:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109c13abc);
        (*pcVar3)();
      }
      *param_1 = uVar4;
      param_1[1] = uVar1;
      uVar5 = uVar10 & 0x7ffffffffffffff0;
      param_1[2] = uVar7;
      if (0xf < uVar10) {
        uVar7 = 0;
        do {
          puVar2 = (undefined8 *)(lVar11 + uVar7);
          uVar12 = *puVar2;
          ((undefined8 *)(uVar4 + uVar7))[1] = puVar2[1];
          *(undefined8 *)(uVar4 + uVar7) = uVar12;
          uVar7 = uVar7 + 0x10;
        } while (uVar7 < uVar5);
      }
    }
    lVar8 = uVar10 - uVar5;
    if (lVar8 != 0 && (long)uVar5 <= (long)uVar10) {
      puVar6 = (undefined1 *)(uVar4 + uVar5);
      puVar9 = (undefined1 *)(lVar11 + uVar5);
      do {
        *puVar6 = *puVar9;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar8 != 0);
    }
  }
  return param_1;
}



/* Entry: 109c13ad0; end: 109c13c03;  */

long * FUN_109c13ad0(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = param_2[1];
  lVar1 = param_2[2];
  if (lVar1 != 0 || lVar7 != 0) {
    lVar10 = *param_2;
    if (lVar1 != 0 && lVar7 != 0) {
      lVar4 = 0;
      if (lVar7 != 0) {
        lVar4 = 0x7fffffffffffffff / lVar7;
      }
      if (lVar4 < lVar1) goto LAB_109c13bcc;
    }
    uVar11 = lVar7 * lVar1;
    if (uVar11 == 0) {
      uVar5 = 0;
      lVar4 = 0;
      param_1[1] = lVar1;
      param_1[2] = lVar7;
    }
    else if ((long)uVar11 < 1) {
      lVar4 = 0;
      param_1[1] = lVar1;
      param_1[2] = lVar7;
      uVar5 = -(-uVar11 & 0xfffffffffffffff8);
    }
    else {
      lVar4 = uVar11 * 2;
      _malloc();
      if (lVar4 == 0) {
LAB_109c13bcc:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109c13bf0);
        (*pcVar3)();
      }
      *param_1 = lVar4;
      param_1[1] = lVar1;
      uVar5 = uVar11 & 0x7ffffffffffffff8;
      param_1[2] = lVar7;
      if (7 < uVar11) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar10 + lVar7);
          uVar12 = *puVar2;
          ((undefined8 *)(lVar4 + lVar7))[1] = puVar2[1];
          *(undefined8 *)(lVar4 + lVar7) = uVar12;
          uVar8 = uVar8 + 8;
          lVar7 = lVar7 + 0x10;
        } while (uVar8 < uVar5);
      }
    }
    lVar7 = uVar11 - uVar5;
    if (lVar7 != 0 && (long)uVar5 <= (long)uVar11) {
      puVar6 = (undefined2 *)(lVar4 + uVar5 * 2);
      puVar9 = (undefined2 *)(lVar10 + uVar5 * 2);
      do {
        *puVar6 = *puVar9;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar7 != 0);
    }
  }
  return param_1;
}



/* Entry: 109c13c04; end: 109c13d3f;  */

long * FUN_109c13c04(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = param_2[1];
  lVar1 = param_2[2];
  if (lVar1 != 0 || lVar7 != 0) {
    lVar10 = *param_2;
    if (lVar1 != 0 && lVar7 != 0) {
      lVar4 = 0;
      if (lVar7 != 0) {
        lVar4 = 0x7fffffffffffffff / lVar7;
      }
      if (lVar4 < lVar1) goto LAB_109c13d08;
    }
    uVar11 = lVar7 * lVar1;
    if (uVar11 == 0) {
      uVar5 = 0;
      lVar4 = 0;
      param_1[1] = lVar1;
      param_1[2] = lVar7;
    }
    else if ((long)uVar11 < 1) {
      lVar4 = 0;
      param_1[1] = lVar1;
      param_1[2] = lVar7;
      uVar5 = -(-uVar11 & 0xfffffffffffffffc);
    }
    else {
      if (uVar11 >> 0x3e != 0) {
LAB_109c13d08:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109c13d2c);
        (*pcVar3)();
      }
      lVar4 = uVar11 * 4;
      _malloc();
      if (lVar4 == 0) goto LAB_109c13d08;
      *param_1 = lVar4;
      param_1[1] = lVar1;
      uVar5 = uVar11 & 0x3ffffffffffffffc;
      param_1[2] = lVar7;
      if (3 < uVar11) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar10 + lVar7);
          uVar12 = *puVar2;
          ((undefined8 *)(lVar4 + lVar7))[1] = puVar2[1];
          *(undefined8 *)(lVar4 + lVar7) = uVar12;
          uVar8 = uVar8 + 4;
          lVar7 = lVar7 + 0x10;
        } while (uVar8 < uVar5);
      }
    }
    lVar7 = uVar11 - uVar5;
    if (lVar7 != 0 && (long)uVar5 <= (long)uVar11) {
      puVar6 = (undefined4 *)(lVar4 + uVar5 * 4);
      puVar9 = (undefined4 *)(lVar10 + uVar5 * 4);
      do {
        *puVar6 = *puVar9;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar7 != 0);
    }
  }
  return param_1;
}



/* Entry: 109c13d40; end: 109c13e7b;  */

long * FUN_109c13d40(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = param_2[1];
  lVar1 = param_2[2];
  if (lVar1 != 0 || lVar6 != 0) {
    lVar9 = *param_2;
    if (lVar1 != 0 && lVar6 != 0) {
      lVar3 = 0;
      if (lVar6 != 0) {
        lVar3 = 0x7fffffffffffffff / lVar6;
      }
      if (lVar3 < lVar1) goto LAB_109c13e44;
    }
    uVar10 = lVar6 * lVar1;
    if (uVar10 == 0) {
      uVar4 = 0;
      lVar3 = 0;
      param_1[1] = lVar1;
      param_1[2] = lVar6;
    }
    else if ((long)uVar10 < 1) {
      lVar3 = 0;
      param_1[1] = lVar1;
      param_1[2] = lVar6;
      uVar4 = -(-uVar10 & 0xfffffffffffffffe);
    }
    else {
      if (uVar10 >> 0x3d != 0) {
LAB_109c13e44:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109c13e68);
        (*pcVar2)();
      }
      lVar3 = uVar10 * 8;
      _malloc();
      if (lVar3 == 0) goto LAB_109c13e44;
      *param_1 = lVar3;
      param_1[1] = lVar1;
      uVar4 = uVar10 & 0x1ffffffffffffffe;
      param_1[2] = lVar6;
      if (uVar10 != 1) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          puVar5 = (undefined8 *)(lVar9 + lVar6);
          uVar11 = *puVar5;
          ((undefined8 *)(lVar3 + lVar6))[1] = puVar5[1];
          *(undefined8 *)(lVar3 + lVar6) = uVar11;
          uVar7 = uVar7 + 2;
          lVar6 = lVar6 + 0x10;
        } while (uVar7 < uVar4);
      }
    }
    lVar6 = uVar10 - uVar4;
    if (lVar6 != 0 && (long)uVar4 <= (long)uVar10) {
      puVar5 = (undefined8 *)(lVar3 + uVar4 * 8);
      puVar8 = (undefined8 *)(lVar9 + uVar4 * 8);
      do {
        *puVar5 = *puVar8;
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar6 != 0);
    }
  }
  return param_1;
}



/* Entry: 109c13e7c; end: 109c14013;  */

void FUN_109c13e7c(uint param_1)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c31940(auStack_78,&UNK_10f55aaab);
  puVar3 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f5a35f2,0x19);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  lStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (param_1 < 9) {
    func_0x000107c31940(&puStack_90,(&PTR_DAT_110b2bdb0)[param_1]);
    ppuVar1 = (undefined1 **)puStack_90;
    if (-1 < (char)bStack_79) {
      uStack_88 = (ulong)bStack_79;
      ppuVar1 = &puStack_90;
    }
    puVar3 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar1,uStack_88);
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    plVar4 = (long *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
    *plVar4 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
    ___cxa_throw(plVar4,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
  }
  else {
    func_0x000105688514(&UNK_10f5a35e0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109c13fa4);
  (*pcVar2)();
}



/* Entry: 109c14014; end: 109c14053;  */

void FUN_109c14014(void)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  FUN_109c14054(auStack_38);
  FUN_109c61b6c(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c14038);
  (*pcVar1)();
}



/* Entry: 109c14054; end: 109c14173;  */

/* WARNING: Removing unreachable block (ram,0x000109c14258) */

ulong * FUN_109c14054(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  undefined1 **ppuVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong *puStack_70;
  ulong *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar5 = param_2[1];
  if (0x7ffffffffffffff7 < uVar5) {
    func_0x000104c4f6b8();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    puVar3 = param_2;
    __Unwind_Resume();
    pcStack_58 = FUN_109c14174;
    if ((long)param_3 < (long)puVar3[2]) {
      puStack_70 = param_2;
      puStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      __ZNSt3__19to_stringEx(auStack_e8,param_3);
      puVar4 = auStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar4,0,&UNK_10f5a365a,0x11);
      uStack_c8 = puVar4[1];
      uStack_d0 = *puVar4;
      lStack_c0 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar4 = &uStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar4,&UNK_10f5a361c,7);
      uStack_a8 = puVar4[1];
      uStack_b0 = *puVar4;
      lStack_a0 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      __ZNSt3__19to_stringEx(&puStack_100,puVar3[2]);
      ppuVar1 = (undefined1 **)puStack_100;
      if (-1 < (char)bStack_e9) {
        uStack_f8 = (ulong)bStack_e9;
        ppuVar1 = &puStack_100;
      }
      puVar4 = &uStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar4,ppuVar1,uStack_f8);
      uStack_88 = puVar4[1];
      uStack_90 = *puVar4;
      uStack_80 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      FUN_109c14330(puVar3,&uStack_90);
      if ((char)bStack_e9 < '\0') {
        __ZdlPv(puStack_100);
      }
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      if (lStack_c0 < 0) {
        __ZdlPv(uStack_d0);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(auStack_e8[0]);
      }
    }
    return puVar3;
  }
  uVar6 = *param_2;
  if (uVar5 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar5;
    puVar2 = param_1;
    if (uVar5 == 0) goto LAB_109c140dc;
  }
  else {
    puVar3 = (ulong *)0x19;
    if ((uVar5 | 7) != 0x17) {
      puVar3 = (ulong *)((uVar5 | 7) + 1);
    }
    puVar2 = puVar3;
    __Znwm();
    param_1[1] = uVar5;
    param_1[2] = (ulong)puVar3 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,uVar6,uVar5);
LAB_109c140dc:
  *(undefined1 *)((long)puVar2 + uVar5) = 0;
  if (param_2[4] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,": ",2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,param_2[3],param_2[4]);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,": ",2);
  uVar5 = param_3[1];
  puVar4 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar4 = param_3;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,puVar4,uVar5)
  ;
  return param_1;
}



/* Entry: 109c14174; end: 109c1432f;  */

/* WARNING: Removing unreachable block (ram,0x000109c14258) */

long FUN_109c14174(long param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2 < *(long *)(param_1 + 0x10)) {
    __ZNSt3__19to_stringEx(auStack_98,param_2);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a365a,0x11);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    lStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f5a361c,7);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    lStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__19to_stringEx(&puStack_b0,*(undefined8 *)(param_1 + 0x10));
    ppuVar1 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuVar1 = &puStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuVar1,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c14330(param_1,&uStack_40);
    if ((char)bStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
  }
  return param_1;
}



/* Entry: 109c14330; end: 109c1436f;  */

void FUN_109c14330(void)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  FUN_109c14370(auStack_38);
  FUN_109c61b6c(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c14354);
  (*pcVar1)();
}



/* Entry: 109c14370; end: 109c1448f;  */

ulong * FUN_109c14370(ulong *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  uVar12 = param_2[1];
  if (0x7ffffffffffffff7 < uVar12) {
    func_0x000104c4f6b8();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    __Unwind_Resume();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    lVar8 = param_3[1];
    lVar2 = param_3[2];
    if (lVar2 != 0 || lVar8 != 0) {
      puVar11 = (undefined8 *)*param_3;
      if (lVar2 != 0 && lVar8 != 0) {
        lVar3 = 0;
        if (lVar8 != 0) {
          lVar3 = 0x7fffffffffffffff / lVar8;
        }
        if (lVar3 < lVar2) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109c1457c);
          (*pcVar5)();
        }
      }
      FUN_1093d98c8(param_2,lVar8 * lVar2);
      puVar7 = (undefined8 *)*param_2;
      uVar13 = param_2[2] * param_2[1];
      uVar12 = uVar13 + 3;
      if (-1 < (long)uVar13) {
        uVar12 = uVar13;
      }
      if (3 < (long)uVar13) {
        lVar8 = 0;
        puVar9 = puVar7;
        puVar10 = puVar11;
        do {
          uVar14 = *puVar10;
          puVar9[1] = puVar10[1];
          *puVar9 = uVar14;
          lVar8 = lVar8 + 4;
          puVar9 = puVar9 + 2;
          puVar10 = puVar10 + 2;
        } while (lVar8 < (long)(uVar12 & 0xfffffffffffffffc));
      }
      lVar8 = (long)uVar13 % 4;
      if (lVar8 != 0 && lVar8 < 0 == SBORROW8(uVar13,uVar12 & 0xfffffffffffffffc)) {
        puVar7 = puVar7 + ((long)uVar12 >> 2) * 2;
        puVar11 = puVar11 + ((long)uVar12 >> 2) * 2;
        do {
          *(undefined4 *)puVar7 = *(undefined4 *)puVar11;
          lVar8 = lVar8 + -1;
          puVar7 = (undefined8 *)((long)puVar7 + 4);
          puVar11 = (undefined8 *)((long)puVar11 + 4);
        } while (lVar8 != 0);
      }
    }
    return param_2;
  }
  uVar13 = *param_2;
  if (uVar12 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar12;
    puVar6 = param_1;
    if (uVar12 == 0) goto LAB_109c143f8;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((uVar12 | 7) != 0x17) {
      puVar1 = (ulong *)((uVar12 | 7) + 1);
    }
    puVar6 = puVar1;
    __Znwm();
    param_1[1] = uVar12;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  _memmove(puVar6,uVar13,uVar12);
LAB_109c143f8:
  *(undefined1 *)((long)puVar6 + uVar12) = 0;
  if (param_2[4] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,": ",2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,param_2[3],param_2[4]);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,": ",2);
  uVar12 = param_3[1];
  plVar4 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_3 + 0x17);
    plVar4 = param_3;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,plVar4,uVar12);
  return param_1;
}



/* Entry: 109c14490; end: 109c1458f;  */

long * FUN_109c14490(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = param_2[1];
  lVar2 = param_2[2];
  if (lVar2 != 0 || lVar7 != 0) {
    puVar10 = (undefined8 *)*param_2;
    if (lVar2 != 0 && lVar7 != 0) {
      lVar3 = 0;
      if (lVar7 != 0) {
        lVar3 = 0x7fffffffffffffff / lVar7;
      }
      if (lVar3 < lVar2) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109c1457c);
        (*pcVar4)();
      }
    }
    FUN_1093d98c8(param_1,lVar7 * lVar2);
    puVar5 = (undefined8 *)*param_1;
    uVar6 = param_1[2] * param_1[1];
    uVar1 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar1 = uVar6;
    }
    if (3 < (long)uVar6) {
      lVar7 = 0;
      puVar8 = puVar5;
      puVar9 = puVar10;
      do {
        uVar11 = *puVar9;
        puVar8[1] = puVar9[1];
        *puVar8 = uVar11;
        lVar7 = lVar7 + 4;
        puVar8 = puVar8 + 2;
        puVar9 = puVar9 + 2;
      } while (lVar7 < (long)(uVar1 & 0xfffffffffffffffc));
    }
    lVar7 = (long)uVar6 % 4;
    if (lVar7 != 0 && lVar7 < 0 == SBORROW8(uVar6,uVar1 & 0xfffffffffffffffc)) {
      puVar5 = puVar5 + ((long)uVar1 >> 2) * 2;
      puVar10 = puVar10 + ((long)uVar1 >> 2) * 2;
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar10;
        lVar7 = lVar7 + -1;
        puVar5 = (undefined8 *)((long)puVar5 + 4);
        puVar10 = (undefined8 *)((long)puVar10 + 4);
      } while (lVar7 != 0);
    }
  }
  return param_1;
}



/* Entry: 109c14590; end: 109c14617;  */

void FUN_109c14590(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_58 [56];
  
  if (param_3[1] - *param_3 != 0) {
    uVar1 = (param_3[1] - *param_3) + 1;
    if (uVar1 == 0) {
      FUN_109c14618(auStack_58,param_2,0x20);
      func_0x000109c1470c(auStack_58);
    }
    else {
      lVar2 = 0x1f;
      if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
        lVar2 = 0x20;
      }
      FUN_109c14618(auStack_58,param_2,lVar2 - LZCOUNT(uVar1));
      do {
        uVar3 = (uint)auStack_58;
        func_0x000109c1470c();
      } while (uVar1 <= uVar3);
    }
  }
  return;
}



/* Entry: 109c14618; end: 109c14833;  */

void FUN_109c14618(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar4 = param_3 / 0x1e;
  if (param_3 % 0x1e != 0) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = param_3 / uVar4;
  }
  param_1[2] = uVar5;
  param_1[3] = uVar4;
  uVar3 = -1 << (ulong)((uint)uVar5 & 0x1f) & 0x7ffffffe;
  if (0x1f < uVar5) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 5) = uVar3;
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar3 / uVar4;
  }
  if (uVar1 < (uVar3 ^ 0x7ffffffe)) {
    uVar4 = uVar4 + 1;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = param_3 / uVar4;
    }
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    if (uVar5 < 0x20) {
      *(uint *)(param_1 + 5) = -1 << (ulong)((uint)uVar5 & 0x1f) & 0x7ffffffe;
      goto LAB_109c14690;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[4] = uVar4 + (uVar5 * uVar4 - param_3);
  }
  else {
LAB_109c14690:
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = param_3 / uVar4;
    }
    param_1[4] = uVar4 + (uVar1 * uVar4 - param_3);
    if (uVar5 < 0x1f) {
      uVar2 = (uint)uVar5;
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = 0xffffffff >> (ulong)(-uVar2 & 0x1f);
      }
      *(uint *)((long)param_1 + 0x2c) =
           (0x3fffffffU >> (ulong)(uVar2 & 0x1f)) << (ulong)(uVar2 + 1 & 0x1f);
      *(uint *)(param_1 + 6) = uVar3;
      uVar3 = 0xffffffff >> (ulong)(~uVar2 & 0x1f);
      goto LAB_109c14704;
    }
  }
  uVar3 = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 6) = 0xffffffff >> (ulong)(-(int)uVar5 & 0x1f);
LAB_109c14704:
  *(uint *)((long)param_1 + 0x34) = uVar3;
  return;
}



/* Entry: 109c14834; end: 109c148ff;  */

long FUN_109c14834(long param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    __ZNSt3__19to_stringEi(auStack_58);
    puVar1 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar1,0,&UNK_10f5a3695,0x16);
    uStack_38 = puVar1[1];
    uStack_40 = *puVar1;
    lStack_30 = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    FUN_109c14014(param_1,&uStack_40);
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return param_1;
}



/* Entry: 109c14900; end: 109c14b03;  */

void FUN_109c14900(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  int aiStack_88 [6];
  
  plVar5 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar5 == plVar1) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = (long)FUN_109c180a4;
    param_1[2] = (long)&PTR_DAT_110950c70;
    return;
  }
  lVar8 = *plVar5;
  uVar7 = (ulong)aiStack_88 | 4;
  aiStack_88[0] = 0;
  aiStack_88[1] = 0;
  aiStack_88[2] = 0;
  aiStack_88[3] = 0;
  aiStack_88[4] = 0;
  aiStack_88[5] = 0;
  if ((int *)(lVar8 + 8U) != aiStack_88) {
    iVar6 = *(int *)(lVar8 + 8U);
    if (iVar6 != 0) {
      _memmove(uVar7,lVar8 + 0xc,(long)iVar6 << 2);
    }
    aiStack_88[0] = iVar6;
  }
  uVar3 = (long)plVar1 - (long)plVar5;
  iVar6 = (int)param_3;
  if (1 < (int)(uVar3 >> 4)) {
    iVar2 = *(int *)(uVar7 + (long)iVar6 * 4);
    lVar4 = (uVar3 >> 4 & 0x7fffffff) - 1;
    do {
      plVar5 = plVar5 + 2;
      iVar2 = *(int *)(*plVar5 + (long)iVar6 * 4 + 0xc) + iVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(int *)(uVar7 + (long)iVar6 * 4) = iVar2;
  }
  FUN_109c14b04(param_1,aiStack_88,param_4,*(undefined1 *)(lVar8 + 0x48));
  lVar8 = *param_1;
  if ((*(byte *)(lVar8 + 0x48) & 0xfe) == 2) {
    *(uint *)(lVar8 + 0x4c) =
         CONCAT13(in_register_00005003,
                  CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
    *(undefined4 *)(lVar8 + 0x50) = param_5;
  }
  lVar4 = *(long *)*param_2;
  if (iVar6 != -1) {
    if (iVar6 == 0) {
      if (*(char *)(lVar4 + 0x48) == '\x02') {
        func_0x000109c14cf4(param_2);
        return;
      }
      if (*(char *)(lVar4 + 0x48) != '\x01') {
        return;
      }
      FUN_109c14ba4(param_2);
      return;
    }
    if (*(int *)(lVar4 + 8) + -1 != iVar6) {
      if (*(char *)(lVar4 + 0x48) == '\x02') {
        func_0x000109c15350(param_2,lVar8,param_3);
        return;
      }
      if (*(char *)(lVar4 + 0x48) != '\x01') {
        return;
      }
      FUN_109c151b8(param_2,lVar8,param_3);
      return;
    }
  }
  if (*(char *)(lVar4 + 0x48) == '\x02') {
    FUN_109c14ffc(param_2);
  }
  else if (*(char *)(lVar4 + 0x48) == '\x01') {
    func_0x000109c14e5c(param_2);
  }
  return;
}



/* Entry: 109c14b04; end: 109c14ba3;  */

void FUN_109c14b04(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)*param_3 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)*param_3;
                    /* WARNING: Could not recover jumptable at 0x000109c14b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(param_1,puVar1,param_2,param_4);
    return;
  }
  uVar2 = 0x58;
  __Znwm();
  FUN_109c1106c();
  *param_1 = uVar2;
  param_1[1] = FUN_109c180b4;
  param_1[2] = &PTR_DAT_110b2c028;
  return;
}



/* Entry: 109c14ba4; end: 109c14ffb;  */

void FUN_109c14ba4(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  int iStack_78;
  undefined4 uStack_74;
  
  plVar9 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar9 != plVar1) {
    lVar8 = *(long *)(param_2 + 0x40);
    fVar10 = *(float *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x50);
    do {
      uVar3 = *(uint *)(*plVar9 + 8);
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      iVar5 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar9 + 0xc,uVar3);
      lVar7 = *plVar9;
      bVar4 = *(byte *)(lVar7 + 0x48);
      uVar3 = *(uint *)(lVar7 + 8) & ((int)*(uint *)(lVar7 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      iVar6 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar7 + 0xc,uVar3);
      iStack_78 = iVar6;
      if ((ulong)bVar4 < 9) {
        uStack_74 = *(undefined4 *)(&UNK_10e039a00 + (ulong)bVar4 * 4);
      }
      else {
        uStack_74 = 4;
      }
      iVar6 = 0xf57499d;
      FUN_109c60fbc(&UNK_10f57499d,0xc,&iStack_78,2);
      lVar7 = *plVar9;
      if ((*(char *)(lVar7 + 0x48) == '\x01') ||
         ((*(int *)(lVar7 + 0x50) == iVar2 && (ABS(*(float *)(lVar7 + 0x4c) - fVar10) < 1e-06)))) {
        _memcpy(lVar8,*(undefined8 *)(lVar7 + 0x40),(long)iVar6);
      }
      lVar8 = lVar8 + (long)iVar5 * 4;
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar1);
  }
  return;
}



/* Entry: 109c14ffc; end: 109c151b7;  */

void FUN_109c14ffc(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  
  iVar6 = *(int *)(*(long *)*param_1 + 8) + -1;
  uVar2 = *(uint *)(param_2 + 8);
  if ((int)uVar2 < *(int *)(*(long *)*param_1 + 8)) {
    lVar14 = -1;
  }
  else {
    lVar14 = (long)*(int *)(param_2 + (long)iVar6 * 4 + 0xc);
  }
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_2 + 0xc,uVar2);
  plVar16 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar16 != plVar1) {
    iVar11 = 0;
    lVar9 = *(long *)(param_2 + 0x40);
    fVar17 = *(float *)(param_2 + 0x4c);
    iVar3 = *(int *)(param_2 + 0x50);
    do {
      lVar10 = *plVar16 + 0xc;
      iVar5 = *(int *)(lVar10 + (long)iVar6 * 4);
      lVar12 = (long)iVar5;
      uVar2 = *(uint *)(*plVar16 + 8);
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      iVar8 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar10,uVar2);
      lVar10 = *plVar16;
      fVar18 = *(float *)(lVar10 + 0x4c);
      iVar4 = *(int *)(lVar10 + 0x50);
      if (*(char *)(lVar10 + 0x48) == '\x01') {
        bVar7 = true;
      }
      else if (iVar4 == iVar3) {
        bVar7 = ABS(fVar18 - fVar17) < 1e-06;
      }
      else {
        bVar7 = false;
      }
      iVar15 = 0;
      if (iVar5 != 0) {
        iVar15 = iVar8 / iVar5;
      }
      if (0 < iVar15) {
        lVar13 = *(long *)(lVar10 + 0x40);
        lVar10 = lVar9 + iVar11;
        do {
          if (bVar7) {
            _memcpy(lVar10,lVar13,lVar12);
          }
          else {
            FUN_109c15508(fVar18,fVar17,lVar13,lVar10,lVar12,iVar4,iVar3);
          }
          lVar10 = lVar10 + lVar14;
          lVar13 = lVar13 + lVar12;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      iVar11 = iVar5 + iVar11;
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar1);
  }
  return;
}



/* Entry: 109c151b8; end: 109c15507;  */

void FUN_109c151b8(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  
  lVar8 = *(long *)*param_1;
  iVar4 = 0xf5a36c2;
  puStack_98 = &UNK_10f5a36c2;
  uStack_90 = 0x22;
  pcStack_80 = "rank";
  uStack_78 = 4;
  uStack_88 = param_3;
  FUN_109c13710(&puStack_98,0);
  FUN_109c18138();
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)param_3) {
    param_3 = 5;
  }
  FUN_109c60fbc(&UNK_10f5a36c2,0x22,lVar8 + 0xc,param_3);
  uVar1 = *(uint *)(param_2 + 8) & ((int)*(uint *)(param_2 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_2 + 0xc,uVar1);
  if (0 < iVar4) {
    iVar7 = 0;
    fVar10 = *(float *)(param_2 + 0x4c);
    iVar3 = *(int *)(param_2 + 0x50);
    lVar8 = *(long *)(param_2 + 0x40);
    do {
      plVar2 = (long *)param_1[1];
      for (plVar9 = (long *)*param_1; plVar9 != plVar2; plVar9 = plVar9 + 2) {
        uVar1 = *(uint *)(*plVar9 + 8);
        uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar1) {
          uVar1 = 5;
        }
        iVar5 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar9 + 0xc,uVar1);
        lVar6 = *plVar9;
        uVar1 = 0;
        if (iVar4 != 0) {
          uVar1 = iVar5 / iVar4;
        }
        if ((*(char *)(lVar6 + 0x48) == '\x01') ||
           ((*(int *)(lVar6 + 0x50) == iVar3 && (ABS(*(float *)(lVar6 + 0x4c) - fVar10) < 1e-06))))
        {
          _memcpy(lVar8,*(long *)(lVar6 + 0x40) + (long)(int)(uVar1 * iVar7) * 4,
                  -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
        }
        lVar8 = lVar8 + (long)(int)uVar1 * 4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar4);
  }
  return;
}



/* Entry: 109c15508; end: 109c15793;  */

void FUN_109c15508(float param_1,float param_2,long param_3,long param_4,int param_5,int param_6,
                  int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uStack_44;
  
  dVar31 = (double)param_1 / (double)param_2;
  if (dVar31 == 0.0) {
    uVar22 = 0;
  }
  else {
    _frexp(&uStack_44);
    uVar22 = (ulong)(double)(long)(dVar31 * 2147483648.0);
    if (uVar22 == 0x80000000) {
      uStack_44 = uStack_44 + 1;
    }
    uVar24 = 0x40000000;
    if (uVar22 != 0x80000000) {
      uVar24 = uVar22 & 0xffffffff;
    }
    uVar1 = 0;
    if (-0x20 < (int)uStack_44) {
      uVar1 = uStack_44;
    }
    uVar22 = 0;
    if (-0x20 < (int)uStack_44) {
      uVar22 = uVar24;
    }
    uVar22 = uVar22 | (ulong)uVar1 << 0x20;
  }
  uVar24 = 0;
  uVar23 = (uint)(uVar22 >> 0x20);
  uVar1 = 0;
  if ((int)uVar23 < 1) {
    uVar1 = -uVar23;
  }
  iVar21 = (int)uVar22;
  if (0xf < param_5) {
    uVar24 = 0;
    iVar4 = -param_6;
    iVar2 = 1 << (ulong)(uVar23 & 0x1f);
    if ((int)uVar23 < 1) {
      iVar2 = 1;
    }
    iVar5 = -uVar1;
    uVar32 = (undefined1)iVar5;
    uVar33 = (undefined1)((uint)iVar5 >> 8);
    uVar34 = (undefined1)((uint)iVar5 >> 0x10);
    bVar35 = (byte)((uint)iVar5 >> 0x18);
    do {
      pcVar26 = (char *)(param_3 + uVar24);
      lVar30 = (long)iVar21;
      lVar27 = ((iVar4 + (short)*pcVar26) * iVar2) * lVar30 * 2;
      lVar28 = ((iVar4 + (short)pcVar26[1]) * iVar2) * lVar30 * 2;
      lVar29 = ((iVar4 + (short)pcVar26[2]) * iVar2) * lVar30 * 2;
      lVar30 = ((iVar4 + (short)pcVar26[3]) * iVar2) * lVar30 * 2;
      auVar42._4_4_ = (int)((ulong)lVar28 >> 0x20);
      auVar42._0_4_ = (int)((ulong)lVar27 >> 0x20);
      auVar42._8_4_ = (int)((ulong)lVar29 >> 0x20);
      auVar42._12_4_ = (int)((ulong)lVar30 >> 0x20);
      iVar17 = -(uint)((char)((byte)((ulong)lVar28 >> 0x38) & bVar35) < '\0');
      iVar18 = -(uint)((char)((byte)((ulong)lVar29 >> 0x38) & bVar35) < '\0');
      iVar19 = -(uint)((char)((byte)((ulong)lVar30 >> 0x38) & bVar35) < '\0');
      auVar13[4] = (char)iVar17;
      auVar13._0_4_ = -(uint)((char)((byte)((ulong)lVar27 >> 0x38) & bVar35) < '\0');
      auVar13[5] = (char)((uint)iVar17 >> 8);
      auVar13[6] = (char)((uint)iVar17 >> 0x10);
      auVar13[7] = (char)((uint)iVar17 >> 0x18);
      auVar13[8] = (char)iVar18;
      auVar13[9] = (char)((uint)iVar18 >> 8);
      auVar13[10] = (char)((uint)iVar18 >> 0x10);
      auVar13[0xb] = (char)((uint)iVar18 >> 0x18);
      auVar13[0xc] = (char)iVar19;
      auVar13[0xd] = (char)((uint)iVar19 >> 8);
      auVar13[0xe] = (char)((uint)iVar19 >> 0x10);
      auVar13[0xf] = (char)((uint)iVar19 >> 0x18);
      auVar43 = NEON_sqadd(auVar42,auVar13,4);
      auVar40[4] = uVar32;
      auVar40._0_4_ = iVar5;
      auVar40[5] = uVar33;
      auVar40[6] = uVar34;
      auVar40[7] = bVar35;
      auVar40[8] = uVar32;
      auVar40[9] = uVar33;
      auVar40[10] = uVar34;
      auVar40[0xb] = bVar35;
      auVar40[0xc] = uVar32;
      auVar40[0xd] = uVar33;
      auVar40[0xe] = uVar34;
      auVar40[0xf] = bVar35;
      auVar44 = NEON_srshl(auVar43,auVar40,4);
      lVar30 = (long)iVar21;
      lVar27 = ((iVar4 + (short)pcVar26[4]) * iVar2) * lVar30 * 2;
      lVar28 = ((iVar4 + (short)pcVar26[5]) * iVar2) * lVar30 * 2;
      lVar29 = ((iVar4 + (short)pcVar26[6]) * iVar2) * lVar30 * 2;
      lVar30 = ((iVar4 + (short)pcVar26[7]) * iVar2) * lVar30 * 2;
      auVar39._4_4_ = (int)((ulong)lVar28 >> 0x20);
      auVar39._0_4_ = (int)((ulong)lVar27 >> 0x20);
      auVar39._8_4_ = (int)((ulong)lVar29 >> 0x20);
      auVar39._12_4_ = (int)((ulong)lVar30 >> 0x20);
      iVar17 = -(uint)((char)((byte)((ulong)lVar28 >> 0x38) & bVar35) < '\0');
      iVar18 = -(uint)((char)((byte)((ulong)lVar29 >> 0x38) & bVar35) < '\0');
      iVar19 = -(uint)((char)((byte)((ulong)lVar30 >> 0x38) & bVar35) < '\0');
      auVar14[4] = (char)iVar17;
      auVar14._0_4_ = -(uint)((char)((byte)((ulong)lVar27 >> 0x38) & bVar35) < '\0');
      auVar14[5] = (char)((uint)iVar17 >> 8);
      auVar14[6] = (char)((uint)iVar17 >> 0x10);
      auVar14[7] = (char)((uint)iVar17 >> 0x18);
      auVar14[8] = (char)iVar18;
      auVar14[9] = (char)((uint)iVar18 >> 8);
      auVar14[10] = (char)((uint)iVar18 >> 0x10);
      auVar14[0xb] = (char)((uint)iVar18 >> 0x18);
      auVar14[0xc] = (char)iVar19;
      auVar14[0xd] = (char)((uint)iVar19 >> 8);
      auVar14[0xe] = (char)((uint)iVar19 >> 0x10);
      auVar14[0xf] = (char)((uint)iVar19 >> 0x18);
      auVar40 = NEON_sqadd(auVar39,auVar14,4);
      auVar43[4] = uVar32;
      auVar43._0_4_ = iVar5;
      auVar43[5] = uVar33;
      auVar43[6] = uVar34;
      auVar43[7] = bVar35;
      auVar43[8] = uVar32;
      auVar43[9] = uVar33;
      auVar43[10] = uVar34;
      auVar43[0xb] = bVar35;
      auVar43[0xc] = uVar32;
      auVar43[0xd] = uVar33;
      auVar43[0xe] = uVar34;
      auVar43[0xf] = bVar35;
      auVar43 = NEON_srshl(auVar40,auVar43,4);
      lVar30 = (long)iVar21;
      lVar27 = ((iVar4 + (short)pcVar26[8]) * iVar2) * lVar30 * 2;
      lVar28 = ((iVar4 + (short)pcVar26[9]) * iVar2) * lVar30 * 2;
      lVar29 = ((iVar4 + (short)pcVar26[10]) * iVar2) * lVar30 * 2;
      lVar30 = ((iVar4 + (short)pcVar26[0xb]) * iVar2) * lVar30 * 2;
      auVar47._4_4_ = (int)((ulong)lVar28 >> 0x20);
      auVar47._0_4_ = (int)((ulong)lVar27 >> 0x20);
      auVar47._8_4_ = (int)((ulong)lVar29 >> 0x20);
      auVar47._12_4_ = (int)((ulong)lVar30 >> 0x20);
      iVar17 = -(uint)((char)((byte)((ulong)lVar28 >> 0x38) & bVar35) < '\0');
      iVar18 = -(uint)((char)((byte)((ulong)lVar29 >> 0x38) & bVar35) < '\0');
      iVar19 = -(uint)((char)((byte)((ulong)lVar30 >> 0x38) & bVar35) < '\0');
      auVar15[4] = (char)iVar17;
      auVar15._0_4_ = -(uint)((char)((byte)((ulong)lVar27 >> 0x38) & bVar35) < '\0');
      auVar15[5] = (char)((uint)iVar17 >> 8);
      auVar15[6] = (char)((uint)iVar17 >> 0x10);
      auVar15[7] = (char)((uint)iVar17 >> 0x18);
      auVar15[8] = (char)iVar18;
      auVar15[9] = (char)((uint)iVar18 >> 8);
      auVar15[10] = (char)((uint)iVar18 >> 0x10);
      auVar15[0xb] = (char)((uint)iVar18 >> 0x18);
      auVar15[0xc] = (char)iVar19;
      auVar15[0xd] = (char)((uint)iVar19 >> 8);
      auVar15[0xe] = (char)((uint)iVar19 >> 0x10);
      auVar15[0xf] = (char)((uint)iVar19 >> 0x18);
      auVar40 = NEON_sqadd(auVar47,auVar15,4);
      auVar48[4] = uVar32;
      auVar48._0_4_ = iVar5;
      auVar48[5] = uVar33;
      auVar48[6] = uVar34;
      auVar48[7] = bVar35;
      auVar48[8] = uVar32;
      auVar48[9] = uVar33;
      auVar48[10] = uVar34;
      auVar48[0xb] = bVar35;
      auVar48[0xc] = uVar32;
      auVar48[0xd] = uVar33;
      auVar48[0xe] = uVar34;
      auVar48[0xf] = bVar35;
      auVar48 = NEON_srshl(auVar40,auVar48,4);
      lVar30 = (long)iVar21;
      lVar27 = ((iVar4 + (short)pcVar26[0xc]) * iVar2) * lVar30 * 2;
      lVar28 = ((iVar4 + (short)pcVar26[0xd]) * iVar2) * lVar30 * 2;
      lVar29 = ((iVar4 + (short)pcVar26[0xe]) * iVar2) * lVar30 * 2;
      lVar30 = ((iVar4 + (short)pcVar26[0xf]) * iVar2) * lVar30 * 2;
      auVar36._4_4_ = (int)((ulong)lVar28 >> 0x20);
      auVar36._0_4_ = (int)((ulong)lVar27 >> 0x20);
      auVar36._8_4_ = (int)((ulong)lVar29 >> 0x20);
      auVar36._12_4_ = (int)((ulong)lVar30 >> 0x20);
      iVar17 = -(uint)((char)((byte)((ulong)lVar28 >> 0x38) & bVar35) < '\0');
      iVar18 = -(uint)((char)((byte)((ulong)lVar29 >> 0x38) & bVar35) < '\0');
      iVar19 = -(uint)((char)((byte)((ulong)lVar30 >> 0x38) & bVar35) < '\0');
      auVar16[4] = (char)iVar17;
      auVar16._0_4_ = -(uint)((char)((byte)((ulong)lVar27 >> 0x38) & bVar35) < '\0');
      auVar16[5] = (char)((uint)iVar17 >> 8);
      auVar16[6] = (char)((uint)iVar17 >> 0x10);
      auVar16[7] = (char)((uint)iVar17 >> 0x18);
      auVar16[8] = (char)iVar18;
      auVar16[9] = (char)((uint)iVar18 >> 8);
      auVar16[10] = (char)((uint)iVar18 >> 0x10);
      auVar16[0xb] = (char)((uint)iVar18 >> 0x18);
      auVar16[0xc] = (char)iVar19;
      auVar16[0xd] = (char)((uint)iVar19 >> 8);
      auVar16[0xe] = (char)((uint)iVar19 >> 0x10);
      auVar16[0xf] = (char)((uint)iVar19 >> 0x18);
      auVar40 = NEON_sqadd(auVar36,auVar16,4);
      auVar50[4] = uVar32;
      auVar50._0_4_ = iVar5;
      auVar50[5] = uVar33;
      auVar50[6] = uVar34;
      auVar50[7] = bVar35;
      auVar50[8] = uVar32;
      auVar50[9] = uVar33;
      auVar50[10] = uVar34;
      auVar50[0xb] = bVar35;
      auVar50[0xc] = uVar32;
      auVar50[0xd] = uVar33;
      auVar50[0xe] = uVar34;
      auVar50[0xf] = bVar35;
      auVar40 = NEON_srshl(auVar40,auVar50,4);
      auVar45._0_4_ = auVar44._0_4_ + param_7;
      auVar45._4_4_ = auVar44._4_4_ + param_7;
      auVar45._8_4_ = auVar44._8_4_ + param_7;
      auVar45._12_4_ = auVar44._12_4_ + param_7;
      auVar41._0_4_ = auVar43._0_4_ + param_7;
      auVar41._4_4_ = auVar43._4_4_ + param_7;
      auVar41._8_4_ = auVar43._8_4_ + param_7;
      auVar41._12_4_ = auVar43._12_4_ + param_7;
      auVar49._0_4_ = auVar48._0_4_ + param_7;
      auVar49._4_4_ = auVar48._4_4_ + param_7;
      auVar49._8_4_ = auVar48._8_4_ + param_7;
      auVar49._12_4_ = auVar48._12_4_ + param_7;
      auVar37._0_4_ = auVar40._0_4_ + param_7;
      auVar37._4_4_ = auVar40._4_4_ + param_7;
      auVar37._8_4_ = auVar40._8_4_ + param_7;
      auVar37._12_4_ = auVar40._12_4_ + param_7;
      auVar44._8_4_ = 0x7f;
      auVar44._0_8_ = 0x7f0000007f;
      auVar44._12_4_ = 0x7f;
      auVar40 = NEON_smin(auVar45,auVar44,4);
      auVar9._8_4_ = 0xffffff80;
      auVar9._0_8_ = 0xffffff80ffffff80;
      auVar9._12_4_ = 0xffffff80;
      auVar48 = NEON_smax(auVar40,auVar9,4);
      auVar6._8_4_ = 0x7f;
      auVar6._0_8_ = 0x7f0000007f;
      auVar6._12_4_ = 0x7f;
      auVar40 = NEON_smin(auVar41,auVar6,4);
      auVar10._8_4_ = 0xffffff80;
      auVar10._0_8_ = 0xffffff80ffffff80;
      auVar10._12_4_ = 0xffffff80;
      auVar43 = NEON_smax(auVar40,auVar10,4);
      auVar7._8_4_ = 0x7f;
      auVar7._0_8_ = 0x7f0000007f;
      auVar7._12_4_ = 0x7f;
      auVar40 = NEON_smin(auVar49,auVar7,4);
      auVar11._8_4_ = 0xffffff80;
      auVar11._0_8_ = 0xffffff80ffffff80;
      auVar11._12_4_ = 0xffffff80;
      auVar50 = NEON_smax(auVar40,auVar11,4);
      auVar8._8_4_ = 0x7f;
      auVar8._0_8_ = 0x7f0000007f;
      auVar8._12_4_ = 0x7f;
      auVar40 = NEON_smin(auVar37,auVar8,4);
      auVar12._8_4_ = 0xffffff80;
      auVar12._0_8_ = 0xffffff80ffffff80;
      auVar12._12_4_ = 0xffffff80;
      auVar40 = NEON_smax(auVar40,auVar12,4);
      auVar46._8_8_ = auVar48._8_8_;
      auVar46._0_8_ = NEON_sqxtn(auVar48._0_8_,auVar48,4);
      auVar51._8_8_ = auVar50._8_8_;
      auVar51._0_8_ = NEON_sqxtn(auVar50._0_8_,auVar50,4);
      auVar43 = NEON_sqxtn2(auVar46,auVar43,4);
      auVar48 = NEON_sqxtn2(auVar51,auVar40,4);
      auVar38._8_8_ = auVar40._8_8_;
      auVar38._0_8_ = NEON_sqxtn(auVar40._0_8_,auVar43,2);
      auVar40 = NEON_sqxtn2(auVar38,auVar48,2);
      ((undefined8 *)(param_4 + uVar24))[1] = auVar40._8_8_;
      *(undefined8 *)(param_4 + uVar24) = auVar40._0_8_;
      uVar24 = uVar24 + 0x10;
    } while (uVar24 <= param_5 - 0x10);
  }
  if ((int)uVar24 != param_5) {
    pcVar26 = (char *)(param_3 + (uVar24 & 0xffffffff));
    uVar3 = ~(uint)(-1L << ((ulong)uVar1 & 0x3f));
    lVar30 = (long)param_5 - (uVar24 & 0xffffffff);
    puVar25 = (undefined1 *)(param_4 + (uVar24 & 0xffffffff));
    do {
      iVar2 = *pcVar26 - param_6 << (ulong)(uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU) & 0x1f);
      if ((iVar21 == -0x80000000) && (iVar2 == -0x80000000)) {
        uVar20 = 0x7fffffff;
      }
      else {
        lVar27 = 0x40000000;
        if (0x7fffffffffffffff < (ulong)((long)iVar21 * (long)iVar2)) {
          lVar27 = -0x3fffffff;
        }
        uVar24 = lVar27 + (long)iVar21 * (long)iVar2;
        uVar22 = uVar24 + 0x7fffffff;
        if (-1 < (long)uVar24) {
          uVar22 = uVar24;
        }
        uVar20 = (uint)(uVar22 >> 0x1f);
      }
      iVar2 = ((int)uVar20 >> (uVar1 & 0x1f)) + param_7;
      if (((int)uVar3 >> 1) - ((int)uVar20 >> 0x1f) < (int)(uVar20 & uVar3)) {
        iVar2 = iVar2 + 1;
      }
      if (iVar2 < -0x7f) {
        iVar2 = -0x80;
      }
      if (0x7e < iVar2) {
        iVar2 = 0x7f;
      }
      *puVar25 = (char)iVar2;
      pcVar26 = pcVar26 + 1;
      lVar30 = lVar30 + -1;
      puVar25 = puVar25 + 1;
    } while (lVar30 != 0);
  }
  return;
}



/* Entry: 109c15794; end: 109c15b3f;  */

void FUN_109c15794(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 uVar8;
  int *piVar9;
  code *pcVar10;
  long **pplVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long *extraout_x8;
  ulong uVar16;
  float *pfVar17;
  float *pfVar18;
  undefined2 *puVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  undefined4 uVar31;
  long lVar32;
  ulong uVar33;
  undefined8 uVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  uint *puVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  float fVar44;
  int iStack_348;
  int iStack_344;
  int iStack_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  long lStack_328;
  ulong uStack_320;
  int iStack_318;
  int iStack_314;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  int iStack_2e8;
  uint uStack_2e4;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int iStack_278;
  int iStack_274;
  ulong uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  uint uStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  uint uStack_210;
  int iStack_20c;
  uint uStack_208;
  int iStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined1 uStack_109;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 *puStack_d8;
  undefined8 *puStack_d0;
  long alStack_a0 [2];
  long lStack_90;
  long alStack_88 [2];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar39 = (uint *)(param_1 + 8);
  uVar14 = *puVar39;
  if ((int)uVar14 < 1) {
    iVar41 = -1;
    uVar28 = 0xffffffff;
LAB_109c15820:
    iVar21 = -1;
LAB_109c15824:
    iVar22 = -1;
  }
  else {
    uVar28 = *(uint *)(param_1 + 0xc);
    if (uVar14 == 1) {
      iVar41 = -1;
      goto LAB_109c15820;
    }
    iVar41 = *(int *)(param_1 + 0x10);
    if (uVar14 < 3) goto LAB_109c15820;
    iVar21 = *(int *)(param_1 + 0x14);
    if (uVar14 == 3) goto LAB_109c15824;
    iVar22 = *(int *)(param_1 + 0x18);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uVar12 = param_3[1];
  lVar13 = (long)(uVar12 - *param_3) >> 2;
  iStack_110 = iVar22;
  FUN_109285684(&lStack_128,*param_3,uVar12,lVar13);
  FUN_10923b3a0(&lStack_128,&iStack_110);
  FUN_109c182f4(param_4,lStack_120 - lStack_128 >> 2);
  FUN_10925b8c4(&lStack_140,lStack_120 - lStack_128 >> 2);
  pplVar11 = (long **)(lStack_120 - lStack_128 >> 2);
  FUN_10925b8c4(&lStack_158);
  iVar41 = iVar41 * iVar21;
  if (0 < (int)((ulong)(lStack_120 - lStack_128) >> 2)) {
    lVar42 = 0;
    lVar43 = 0;
    iVar21 = 0;
    do {
      lVar24 = lStack_158;
      iVar21 = *(int *)(lStack_128 + lVar43 * 4) - iVar21;
      *(int *)(lStack_158 + lVar43 * 4) = iVar21;
      *(int *)(lStack_140 + lVar43 * 4) = iVar21 * iVar41;
      uStack_108 = 0;
      lStack_100 = 0;
      lStack_f8 = 0;
      if (puVar39 != (uint *)&uStack_108) {
        uVar14 = *puVar39;
        if (uVar14 != 0) {
          _memcpy((long)&uStack_108 + 4,param_1 + 0xc,(long)(int)uVar14 << 2);
        }
        uStack_108 = CONCAT44(uStack_108._4_4_,uVar14);
      }
      lStack_f8 = CONCAT44(lStack_f8._4_4_,*(undefined4 *)(lVar24 + lVar43 * 4));
      uVar12 = 1;
      FUN_109c14b04(&plStack_e8,&uStack_108,param_5);
      pplVar11 = &plStack_e8;
      func_0x000109c18360(*param_4 + lVar42);
      FUN_109c180ec(&plStack_e8);
      *(undefined4 *)(*(long *)(*param_4 + lVar42) + 0x3c) = 0;
      iVar21 = *(int *)(lStack_128 + lVar43 * 4);
      lVar43 = lVar43 + 1;
      lVar42 = lVar42 + 0x10;
    } while (lVar43 < (int)((ulong)(lStack_120 - lStack_128) >> 2));
  }
  if (0 < (int)uVar28) {
    uVar36 = 0;
    lVar24 = *(long *)(param_1 + 0x40);
    lVar43 = lStack_128;
    lVar42 = lStack_120;
    do {
      if (0 < (int)((ulong)(lVar42 - lVar43) >> 2)) {
        lVar40 = 0;
        lVar32 = 0;
        iVar21 = 0;
        lVar37 = (long)iStack_110;
        do {
          plStack_e8 = alStack_a0;
          lStack_100 = (long)*(int *)(lStack_158 + lVar32 * 4);
          uStack_108 = *(long *)(*(long *)(*param_4 + lVar40) + 0x40) +
                       uVar36 * (long)*(int *)(lStack_140 + lVar32 * 4) * 4;
          alStack_88[0] = lVar24 + uVar36 * (long)(iVar41 * iVar22) * 4 + (long)iVar21 * 4;
          lStack_f8 = (long)iVar41;
          plStack_e0 = alStack_88;
          puStack_d8 = &uStack_109;
          puStack_d0 = &uStack_108;
          alStack_a0[0] = uStack_108;
          lStack_90 = lStack_100;
          lStack_78 = lVar37;
          FUN_109c18744(&plStack_e8);
          iVar21 = *(int *)(lStack_128 + lVar32 * 4);
          lVar32 = lVar32 + 1;
          lVar40 = lVar40 + 0x10;
          lVar43 = lStack_128;
          lVar42 = lStack_120;
        } while (lVar32 < (int)((ulong)(lStack_120 - lStack_128) >> 2));
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar28);
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  lVar43 = lStack_128;
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  __Unwind_Resume();
  if ((*(int *)(lVar43 + 0x3c) != 0) && (*(int *)(lVar43 + 0x3c) != 2 || *(int *)(lVar43 + 8) != 4))
  {
LAB_109c15b78:
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[8] = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[7] = 0;
    extraout_x8[6] = 0;
    extraout_x8[1] = (long)FUN_109c180a4;
    extraout_x8[2] = (long)&PTR_DAT_110950c70;
    return;
  }
  cVar3 = *(char *)(lVar43 + 0x48);
  iVar41 = (int)uVar12;
  if (cVar3 != '\x03') {
    if (cVar3 != '\x02') {
      if (cVar3 != '\x01') goto LAB_109c15b78;
      uStack_308._4_4_ = *(int *)pplVar11;
      iStack_314 = *(int *)((long)pplVar11 + 4);
      iStack_274 = *(int *)(pplVar11 + 1);
      uStack_308._0_4_ = *(int *)((long)pplVar11 + 0xc);
      uVar14 = *(uint *)(lVar43 + 8);
      if ((int)uVar14 < 1) {
        uVar28 = 0xffffffff;
      }
      else {
        uVar28 = *(uint *)(lVar43 + 0xc);
        if (uVar14 != 1) {
          iStack_318 = *(int *)(lVar43 + 0x10);
          if (uVar14 < 3) {
            iVar21 = -1;
          }
          else {
            iVar21 = *(int *)(lVar43 + 0x14);
            if (uVar14 != 3) {
              uStack_310 = (ulong)*(uint *)(lVar43 + 0x18);
              goto LAB_109c15c54;
            }
          }
          uStack_310 = 0xffffffff;
          goto LAB_109c15c54;
        }
      }
      iVar21 = -1;
      iStack_318 = -1;
      uStack_310 = 0xffffffff;
LAB_109c15c54:
      iVar22 = iStack_314 + uStack_308._4_4_ + iStack_318;
      iVar35 = (int)uStack_308 + iStack_274 + iVar21;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      if ((uint *)(lVar43 + 8) != (uint *)&uStack_200) {
        if (uVar14 != 0) {
          _memcpy((ulong)&uStack_200 | 4,lVar43 + 0xc,(long)(int)uVar14 << 2);
        }
        uStack_200 = (ulong)uVar14;
      }
      uStack_200 = CONCAT44(uVar28,(uint)uStack_200);
      uStack_1f8 = CONCAT44(iVar35,iVar22);
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uStack_310);
      FUN_109c14b04(extraout_x8,&uStack_200,lVar13,*(undefined1 *)(lVar43 + 0x48));
      if (((((-1 < uStack_308._4_4_) && (-1 < iStack_314)) && (-1 < iStack_274)) &&
          ((-1 < (int)uStack_308 && (0 < iVar22)))) && (0 < iVar35)) {
        lVar13 = *extraout_x8;
        uStack_270 = *(long *)(lVar13 + 0x40);
        uStack_2d0 = uStack_270;
        if (uStack_270 != 0) {
          iStack_21c = *(int *)(lVar43 + 0x50);
          uStack_240 = CONCAT44(iStack_318,(undefined4)uStack_240);
          iVar27 = (int)uStack_310;
          uStack_238 = CONCAT44(iVar27,iVar21);
          uStack_230 = uStack_308._4_4_;
          iStack_22c = iStack_314;
          iStack_228 = iStack_274;
          iStack_224 = (int)uStack_308;
          uStack_210 = iVar27 * iVar21;
          uStack_300 = (ulong)uStack_210;
          iStack_20c = uStack_210 * 4;
          uStack_208 = iVar27 * iVar35;
          uStack_320 = (ulong)uStack_208;
          iStack_204 = iVar27 << 2;
          if (0 < (int)uVar28) {
            uStack_298 = 0;
            uVar14 = uStack_210 * iStack_318;
            uVar26 = uStack_208 * iVar22;
            lStack_328 = (long)(int)uVar14;
            uStack_2d8 = (long)(int)uVar26;
            uStack_2e0 = (ulong)uVar28;
            uStack_2b8 = (ulong)(uStack_208 * uStack_308._4_4_);
            uVar28 = iVar27 * iStack_274;
            uStack_248 = (ulong)uVar28;
            uStack_250 = (ulong)(uint)(iVar27 * (int)uStack_308);
            iStack_32c = uStack_308._4_4_ + -1;
            iStack_330 = iStack_318 + -2;
            uVar4 = uStack_208 * iStack_314;
            iVar21 = iVar22 - iStack_314;
            iStack_338 = iStack_274 * 2;
            iStack_334 = iStack_318 + -1;
            iStack_33c = iStack_338 + -1;
            iStack_340 = iVar35 - (int)uStack_308;
            iStack_344 = iStack_340 + -2;
            iStack_348 = iStack_340 + -1;
            fVar44 = (float)iStack_21c;
            uStack_258 = (ulong)iStack_20c;
            uStack_260 = CONCAT44(uVar28 + uStack_210,iVar27 * (iVar35 - iStack_274));
            lVar42 = (long)iStack_204;
            lStack_268 = (long)(int)uStack_210;
            uStack_2e4 = (uint)(iVar41 != 0 || (int)(uStack_208 * uStack_308._4_4_) < 1);
            uStack_2f0 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar26 << 2;
            uStack_2f8 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2;
            lVar13 = *(long *)(lVar43 + 0x40);
            uVar36 = uStack_2b8 + 1;
            uStack_288 = (long)(int)uVar28 + 1;
            uStack_2a0 = uStack_270 +
                         (long)(iVar27 * (iStack_274 + iVar35 * (iStack_318 + uStack_308._4_4_))) *
                         4;
            uStack_290 = (long)(iVar27 * (int)uStack_308) + 1;
            uVar25 = -(ulong)(uStack_208 >> 0x1f) & 0xfffffffc00000000 | uStack_320 << 2;
            uVar20 = uStack_310 & 0xffffffff;
            uVar7 = uStack_310 >> 0x1f;
            uStack_2a8 = uStack_270 + (long)(int)uVar28 * 4;
            uStack_2c0 = CONCAT44(iVar41,(int)uStack_2c0);
            uVar33 = lVar13;
            iVar27 = iStack_318;
            iStack_278 = iVar22;
            iStack_220 = iVar41;
            iStack_218 = iVar22;
            iStack_214 = iVar35;
            do {
              pfVar18 = (float *)(uStack_2d0 + uStack_298 * uStack_2d8 * 4);
              uVar16 = uVar36;
              pfVar17 = pfVar18;
              if ((uStack_2e4 & 1) == 0) {
                do {
                  *pfVar17 = fVar44;
                  uVar16 = uVar16 - 1;
                  pfVar17 = pfVar17 + 1;
                } while (1 < uVar16);
              }
              uVar14 = (uint)uStack_2b8;
              iVar41 = (int)uVar12;
              if (0 < iVar27) {
                lVar24 = 0;
                iVar22 = 0;
                lVar32 = uStack_298 * lStack_328;
                uVar16 = uStack_2b8;
                do {
                  lVar40 = lVar13 + lVar32 * 4 + lVar24 * 4;
                  iVar35 = (int)uVar16;
                  iVar23 = (int)uStack_248;
                  if (iVar41 == 0) {
                    if (0 < iVar23) {
                      pfVar17 = pfVar18 + iVar35;
                      uVar16 = uStack_288;
                      do {
                        *pfVar17 = fVar44;
                        uVar16 = uVar16 - 1;
                        pfVar17 = pfVar17 + 1;
                      } while (1 < uVar16);
                    }
                    _memcpy(pfVar18 + (iVar35 + iVar23),lVar40,uStack_258);
                    iVar35 = iVar35 + uStack_260._4_4_;
                    if (0 < (int)uStack_250) {
                      pfVar17 = pfVar18 + iVar35;
                      uVar16 = uStack_290;
                      do {
                        *pfVar17 = fVar44;
                        uVar16 = uVar16 - 1;
                        pfVar17 = pfVar17 + 1;
                      } while (1 < uVar16);
                    }
                  }
                  else {
                    _memcpy(pfVar18 + (iVar35 + iVar23),lVar40,uStack_258);
                    iVar35 = iVar35 + uStack_260._4_4_;
                  }
                  uVar14 = iVar35 + (int)uStack_250;
                  uVar16 = (ulong)uVar14;
                  lVar24 = lVar24 + lStack_268;
                  iVar22 = iVar22 + 1;
                } while (iVar22 != iVar27);
              }
              lVar24 = uStack_258;
              if (iVar41 == 0) {
                if (0 < (int)uVar4) {
                  pfVar18 = pfVar18 + (int)uVar14;
                  uVar16 = (ulong)uVar4 + 1;
                  do {
                    *pfVar18 = fVar44;
                    uVar16 = uVar16 - 1;
                    pfVar18 = pfVar18 + 1;
                  } while (1 < uVar16);
                }
              }
              else {
                iVar22 = iStack_32c;
                if (iVar41 == 3) {
                  iVar22 = 0;
                }
                iVar35 = -1;
                if (iVar41 == 3) {
                  iVar35 = 0;
                }
                iVar27 = -1;
                iVar23 = uStack_308._4_4_;
                if (iVar41 != 1) {
                  iVar27 = iVar35;
                  iVar23 = iVar22;
                }
                uStack_2c8 = pfVar18;
                uStack_2b0 = uVar33;
                if (uStack_308._4_4_ != 0) {
                  uVar14 = iVar27 * (int)uStack_300;
                  lVar32 = uVar33 + (long)(iVar23 * (int)uStack_300) * 4;
                  uVar12 = uStack_2a8;
                  iVar22 = uStack_308._4_4_;
                  do {
                    _memcpy(uVar12,lVar32,lVar24);
                    uVar12 = uVar12 + uVar25;
                    lVar32 = lVar32 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar14 << 2);
                    iVar22 = iVar22 + -1;
                  } while (iVar22 != 0);
                }
                iVar35 = iStack_278;
                uVar12 = uStack_2b0;
                iVar22 = -1;
                if (iVar41 == 3) {
                  iVar22 = 0;
                }
                piVar9 = &iStack_330;
                if (iVar41 != 1) {
                  piVar9 = &iStack_334;
                }
                iVar27 = -1;
                if (iVar41 != 1) {
                  iVar27 = iVar22;
                }
                if (iStack_314 != 0) {
                  uVar14 = *piVar9 * (int)uStack_300;
                  uVar28 = iVar27 * (int)uStack_300;
                  uVar33 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2;
                  lVar32 = uStack_2a0;
                  iVar41 = iVar21;
                  do {
                    _memcpy(lVar32,uVar12 + uVar33,lVar24);
                    iVar41 = iVar41 + 1;
                    lVar32 = lVar32 + uVar25;
                    uVar33 = uVar33 + (-(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar28 << 2);
                  } while (iVar41 < iVar35);
                }
                iVar41 = 0;
                iVar22 = 0;
                iVar27 = iStack_33c;
                if (uStack_2c0._4_4_ == 3) {
                  iVar27 = iStack_274;
                }
                iVar23 = -1;
                if (uStack_2c0._4_4_ == 3) {
                  iVar23 = 0;
                }
                iVar29 = -1;
                iVar38 = iStack_338;
                if (uStack_2c0._4_4_ != 1) {
                  iVar29 = iVar23;
                  iVar38 = iVar27;
                }
                iVar38 = iVar38 * (int)uStack_310;
                iVar27 = (int)uStack_248 * iVar29;
                uStack_280 = CONCAT44(iVar27,(undefined4)uStack_280);
                iVar15 = (int)uStack_320;
                uVar14 = iVar29 * (int)uStack_310;
                iVar23 = iStack_274;
                do {
                  iVar29 = iVar23;
                  if (iVar23 != 0) {
                    lVar24 = uStack_270 + (long)iVar38 * 4;
                    iVar38 = uStack_280._4_4_ + iVar38;
                    lVar32 = uStack_270 + (long)iVar22 * 4;
                    iVar22 = (int)uStack_248 + iVar22;
                    do {
                      _memcpy(lVar32,lVar24,lVar42);
                      lVar24 = lVar24 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar14 << 2);
                      lVar32 = lVar32 + (-(uVar7 & 1) & 0xfffffffc00000000 | uVar20 << 2);
                      iVar23 = iVar23 + -1;
                      iVar35 = iStack_278;
                      iVar29 = iStack_274;
                    } while (iVar23 != 0);
                  }
                  iVar23 = iVar29;
                  iVar22 = (int)uStack_260 + iVar22;
                  iVar38 = (iVar15 - iVar27) + iVar38;
                  iVar41 = iVar41 + 1;
                } while (iVar41 != iVar35);
                uVar12 = (ulong)uStack_2c0._4_4_;
                uVar31 = 0xffffffff;
                if (uStack_2c0._4_4_ == 3) {
                  uVar31 = 0;
                }
                piVar9 = &iStack_344;
                if (uStack_2c0._4_4_ != 1) {
                  piVar9 = &iStack_348;
                }
                uVar1 = 0xffffffff;
                if (uStack_2c0._4_4_ != 1) {
                  uVar1 = uVar31;
                }
                FUN_109c188dc((long)&uStack_240 + 4,uStack_2c8,uStack_2c8,iStack_340,*piVar9,uVar1,
                              (int)uStack_308);
                uVar33 = uStack_2b0;
                iVar27 = iStack_318;
              }
              uStack_298 = uStack_298 + 1;
              uStack_2a8 = uStack_2a8 + uStack_2f0;
              uVar33 = uVar33 + uStack_2f8;
              uStack_2a0 = uStack_2a0 + uStack_2f0;
              uStack_270 = uStack_270 + uStack_2f0;
            } while (uStack_298 != uStack_2e0);
            lVar13 = *extraout_x8;
            iStack_21c = *(int *)(lVar43 + 0x50);
          }
          *(undefined4 *)(lVar13 + 0x3c) = 0;
          *(undefined4 *)(lVar13 + 0x4c) = *(undefined4 *)(lVar43 + 0x4c);
          *(int *)(lVar13 + 0x50) = iStack_21c;
          return;
        }
      }
      func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x109c16228);
      (*pcVar10)();
    }
    iVar21 = *(int *)pplVar11;
    iVar22 = *(int *)((long)pplVar11 + 4);
    iStack_218 = *(int *)(pplVar11 + 1);
    uStack_2b8._4_4_ = *(int *)((long)pplVar11 + 0xc);
    uVar14 = *(uint *)(lVar43 + 8);
    if ((int)uVar14 < 1) {
      uVar28 = 0xffffffff;
    }
    else {
      uVar28 = *(uint *)(lVar43 + 0xc);
      if (uVar14 != 1) {
        iStack_278 = *(int *)(lVar43 + 0x10);
        if (uVar14 < 3) {
          iVar35 = -1;
        }
        else {
          iVar35 = *(int *)(lVar43 + 0x14);
          if (uVar14 != 3) {
            iVar27 = *(int *)(lVar43 + 0x18);
            goto LAB_109c162d0;
          }
        }
        iVar27 = -1;
        goto LAB_109c162d0;
      }
    }
    iVar35 = -1;
    iStack_278 = -1;
    iVar27 = -1;
LAB_109c162d0:
    uStack_2b8._0_4_ = iVar22 + iVar21 + iStack_278;
    iVar23 = uStack_2b8._4_4_ + iStack_218 + iVar35;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,iStack_218);
    iStack_274 = iVar41;
    if ((uint *)(lVar43 + 8) != (uint *)&uStack_1f0) {
      if (uVar14 != 0) {
        _memcpy((ulong)&uStack_1f0 | 4,lVar43 + 0xc,(long)(int)uVar14 << 2);
        iStack_218 = (int)uStack_2c0;
      }
      uStack_1f0 = (ulong)uVar14;
    }
    iVar41 = (int)uStack_2b8;
    uStack_1f0 = CONCAT44(uVar28,(uint)uStack_1f0);
    uStack_1e8 = CONCAT44(iVar23,(int)uStack_2b8);
    FUN_109c14b04(&uStack_1f0,lVar13,*(undefined1 *)(lVar43 + 0x48));
    if (((-1 < iVar21) && (-1 < iVar22)) &&
       ((-1 < iStack_218 && (((-1 < (int)uStack_2b8._4_4_ && (0 < iVar41)) && (0 < iVar23)))))) {
      lVar13 = *extraout_x8;
      uStack_280 = *(long *)(lVar13 + 0x40);
      if (uStack_280 != 0) {
        iStack_20c = *(undefined4 *)(lVar43 + 0x50);
        iStack_22c = iStack_278;
        iStack_214 = uStack_2b8._4_4_;
        uStack_210 = iStack_274;
        uStack_2c0 = CONCAT44(iStack_20c,(int)uStack_2c0);
        uStack_208 = iVar41;
        uVar14 = iVar27 * iVar35;
        uStack_2b0 = (ulong)uVar14;
        iVar38 = iVar27 * iVar23;
        uStack_200 = CONCAT44(uVar14,uVar14);
        uStack_1f8 = CONCAT44(iVar27,iVar38);
        if (0 < (int)uVar28) {
          uStack_270 = 0;
          lVar13 = *(long *)(lVar43 + 0x40);
          uStack_290 = (ulong)(int)(uVar14 * iStack_278);
          uStack_298 = (ulong)(iVar38 * iVar41);
          uStack_240 = (ulong)(uint)(iVar38 * iVar21);
          iVar29 = iVar27 * iStack_218;
          iVar15 = iVar27 * uStack_2b8._4_4_;
          uVar26 = (uint)(iStack_274 == 0);
          uStack_2a0._4_4_ = 0;
          if (0 < iVar38 * iVar21) {
            uStack_2a0._4_4_ = uVar26;
          }
          uStack_248 = (ulong)iVar29;
          uStack_230 = 0;
          if (0 < iVar29) {
            uStack_230 = uVar26;
          }
          uStack_250 = (ulong)iVar15;
          lVar42 = (long)(int)uVar14;
          uVar4 = 0;
          if (0 < iVar15) {
            uVar4 = uVar26;
          }
          uStack_238 = CONCAT44(uVar4,iVar29 + uVar14 + iVar15);
          iStack_2e8 = iVar41 - iVar22;
          iVar41 = iVar23 - uStack_2b8._4_4_;
          uStack_2e4 = iVar41 - 1;
          uStack_2d8 = CONCAT44(iVar41,(undefined4)uStack_2d8);
          uStack_2d0 = CONCAT44(iStack_278 + -2,iStack_278 + -1);
          uStack_2f0 = CONCAT44(iStack_218 * 2,iVar41 + -2);
          uStack_2f8 = CONCAT44(iStack_218 * 2 + -1,(undefined4)uStack_2f8);
          uStack_288 = CONCAT44(iVar21,(undefined4)uStack_288);
          iVar41 = iStack_218 + iVar21 * iVar23;
          uStack_258 = CONCAT44(iVar27 * (iVar41 + iVar35),(int)uStack_258);
          uStack_2a8 = (ulong)uVar28;
          uStack_260 = uStack_280 + iVar29;
          uStack_2c8 = (float *)CONCAT44(iVar22,iVar21 + -1);
          uStack_2e0 = (ulong)(uint)(iVar38 * iVar22);
          lStack_268 = uStack_280 + iVar27 * (iStack_218 + iVar23 * (iStack_278 + iVar21));
          iVar29 = iStack_278;
          iVar15 = iStack_274;
          uStack_308 = extraout_x8;
          uStack_300 = lVar43;
          iStack_228 = iVar35;
          iStack_224 = iVar27;
          iStack_220 = iVar21;
          iStack_21c = iVar22;
          iStack_204 = iVar23;
          uVar31 = iStack_20c;
          do {
            lVar43 = uStack_280 + uStack_270 * uStack_298;
            if (uStack_2a0._4_4_ != 0) {
              _memset(lVar43,uVar31,uStack_240);
            }
            uVar12 = uStack_240;
            if (0 < iVar29) {
              iVar21 = 0;
              lVar24 = lVar13;
              do {
                if (uStack_230 != 0) {
                  _memset(lVar43 + ((int)uStack_240 + iVar21),uVar31,uStack_248);
                }
                _memcpy(lVar43 + (iVar27 * iVar41 + iVar21),lVar24,lVar42);
                if (uStack_238._4_4_ != 0) {
                  _memset(lVar43 + (uStack_258._4_4_ + iVar21),uVar31,uStack_250);
                }
                lVar24 = lVar24 + lVar42;
                iVar21 = iVar21 + (int)uStack_238;
                iVar29 = iVar29 + -1;
              } while (iVar29 != 0);
              uVar12 = (ulong)(uint)((int)uStack_240 + iVar21);
              iVar29 = iStack_278;
            }
            if (iVar15 == 0) {
              if (0 < (int)uStack_2e0) {
                _memset(lVar43 + (int)uVar12,uVar31,uStack_2e0);
              }
            }
            else {
              iVar21 = (int)uStack_2c8;
              if (iVar15 == 3) {
                iVar21 = 0;
              }
              iVar22 = -1;
              if (iVar15 == 3) {
                iVar22 = 0;
              }
              iVar35 = -1;
              iVar23 = uStack_288._4_4_;
              if (iVar15 != 1) {
                iVar35 = iVar22;
                iVar23 = iVar21;
              }
              if (uStack_288._4_4_ != 0) {
                iVar22 = (int)uStack_2b0;
                lVar24 = (long)(iVar23 * iVar22);
                lVar32 = uStack_260;
                iVar21 = uStack_288._4_4_;
                do {
                  _memcpy(lVar32,lVar13 + lVar24,lVar42);
                  lVar24 = lVar24 + iVar35 * iVar22;
                  lVar32 = lVar32 + iVar38;
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
              }
              iVar22 = (int)uStack_2b8;
              iVar21 = -1;
              if (iStack_274 == 3) {
                iVar21 = 0;
              }
              piVar9 = (int *)((long)&uStack_2d0 + 4);
              if (iStack_274 != 1) {
                piVar9 = (int *)&uStack_2d0;
              }
              iVar35 = -1;
              if (iStack_274 != 1) {
                iVar35 = iVar21;
              }
              if (uStack_2c8._4_4_ != 0) {
                iVar23 = (int)uStack_2b0;
                lVar24 = (long)(*piVar9 * iVar23);
                lVar32 = lStack_268;
                iVar21 = iStack_2e8;
                do {
                  _memcpy(lVar32,lVar13 + lVar24,lVar42);
                  lVar24 = lVar24 + iVar35 * iVar23;
                  iVar21 = iVar21 + 1;
                  lVar32 = lVar32 + iVar38;
                } while (iVar21 < iVar22);
              }
              iVar15 = iStack_274;
              iVar29 = iStack_278;
              uVar31 = uStack_2c0._4_4_;
              if (iStack_274 == 3) {
                func_0x000109c1899c(&iStack_22c,lVar43,lVar43,0,uStack_2c0 & 0xffffffff,0,
                                    uStack_2c0 & 0xffffffff);
                uVar34 = 0;
                uVar12 = (ulong)uStack_2e4;
                iVar29 = iStack_278;
              }
              else {
                uVar34 = 0xffffffff;
                if (iStack_274 == 1) {
                  func_0x000109c1899c(&iStack_22c,lVar43,lVar43,0,uStack_2f0._4_4_,0xffffffff,
                                      uStack_2c0 & 0xffffffff);
                  uVar12 = uStack_2f0 & 0xffffffff;
                }
                else {
                  func_0x000109c1899c(&iStack_22c,lVar43,lVar43,0,uStack_2f8._4_4_,0xffffffff,
                                      uStack_2c0 & 0xffffffff);
                  uVar12 = (ulong)uStack_2e4;
                }
              }
              func_0x000109c1899c(&iStack_22c,lVar43,lVar43,uStack_2d8._4_4_,uVar12,uVar34,
                                  uStack_2b8._4_4_);
            }
            uStack_270 = uStack_270 + 1;
            lVar13 = lVar13 + uStack_290;
            uStack_260 = uStack_260 + uStack_298;
            lStack_268 = lStack_268 + uStack_298;
          } while (uStack_270 != uStack_2a8);
          lVar13 = *uStack_308;
          iStack_20c = *(undefined4 *)(uStack_300 + 0x50);
          lVar43 = uStack_300;
        }
        *(undefined4 *)(lVar13 + 0x3c) = 0;
        *(undefined4 *)(lVar13 + 0x4c) = *(undefined4 *)(lVar43 + 0x4c);
        *(int *)(lVar13 + 0x50) = iStack_20c;
        return;
      }
    }
    func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109c167dc);
    (*pcVar10)();
  }
  uStack_300._4_4_ = *(int *)pplVar11;
  iStack_318 = *(int *)((long)pplVar11 + 4);
  iStack_274 = *(int *)(pplVar11 + 1);
  iStack_314 = *(int *)((long)pplVar11 + 0xc);
  uVar14 = *(uint *)(lVar43 + 8);
  if ((int)uVar14 < 1) {
    uVar28 = 0xffffffff;
LAB_109c1685c:
    iVar21 = -1;
    uStack_248._4_4_ = -1;
  }
  else {
    uVar28 = *(uint *)(lVar43 + 0xc);
    if (uVar14 == 1) goto LAB_109c1685c;
    uStack_248._4_4_ = *(int *)(lVar43 + 0x10);
    if (uVar14 < 3) {
      iVar21 = -1;
    }
    else {
      iVar21 = *(int *)(lVar43 + 0x14);
      if (uVar14 != 3) {
        uStack_310 = (ulong)*(uint *)(lVar43 + 0x18);
        goto LAB_109c16864;
      }
    }
  }
  uStack_310 = 0xffffffff;
LAB_109c16864:
  iVar22 = iStack_318 + uStack_300._4_4_ + uStack_248._4_4_;
  iVar35 = iStack_314 + iStack_274 + iVar21;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  if ((uint *)(lVar43 + 8) != (uint *)&uStack_1f0) {
    if (uVar14 != 0) {
      _memcpy((ulong)&uStack_1f0 | 4,lVar43 + 0xc,(long)(int)uVar14 << 2);
    }
    uStack_1f0 = (ulong)uVar14;
  }
  uStack_1f0 = CONCAT44(uVar28,(uint)uStack_1f0);
  uStack_1e8 = CONCAT44(iVar35,iVar22);
  FUN_109c14b04(extraout_x8,&uStack_1f0,lVar13,*(undefined1 *)(lVar43 + 0x48));
  if ((((-1 < uStack_300._4_4_) && (-1 < iStack_318)) &&
      ((-1 < iStack_274 && ((-1 < iStack_314 && (0 < iVar22)))))) && (0 < iVar35)) {
    lVar13 = *extraout_x8;
    uStack_270 = *(long *)(lVar13 + 0x40);
    uStack_2d0 = uStack_270;
    if (uStack_270 != 0) {
      uVar31 = *(undefined4 *)(lVar43 + 0x50);
      iStack_22c = uStack_248._4_4_;
      iStack_224 = (int)uStack_310;
      iStack_220 = uStack_300._4_4_;
      iStack_21c = iStack_318;
      iStack_218 = iStack_274;
      iStack_214 = iStack_314;
      uVar14 = iStack_224 * iVar21;
      uStack_308 = (long *)(ulong)uVar14;
      uVar26 = iStack_224 * iVar35;
      uStack_320 = (ulong)uVar26;
      uStack_200 = CONCAT44(uVar14 * 2,uVar14);
      iVar27 = iStack_224 << 1;
      uStack_1f8 = CONCAT44(iVar27,uVar26);
      if (0 < (int)uVar28) {
        uStack_2a0 = 0;
        uVar4 = uVar14 * uStack_248._4_4_;
        uVar5 = uVar26 * iVar22;
        lStack_328 = (long)(int)uVar4;
        uStack_2d8 = (long)(int)uVar5;
        uStack_2e0 = (ulong)uVar28;
        uStack_2c0 = (ulong)(uVar26 * uStack_300._4_4_);
        uVar28 = iStack_224 * iStack_274;
        uStack_238 = (ulong)uVar28;
        uStack_240 = (ulong)(uint)(iStack_224 * iStack_314);
        iStack_32c = uStack_300._4_4_ + -1;
        uVar6 = uVar26 * iStack_318;
        iStack_330 = uStack_248._4_4_ + -2;
        iVar23 = iVar22 - iStack_318;
        iStack_338 = iStack_274 * 2;
        iStack_334 = uStack_248._4_4_ + -1;
        iStack_33c = iStack_338 + -1;
        iStack_340 = iVar35 - iStack_314;
        iStack_344 = iStack_340 + -2;
        iStack_348 = iStack_340 + -1;
        uStack_250 = (ulong)(int)(uVar14 * 2);
        uStack_260 = CONCAT44(uVar28 + uVar14,iStack_224 * (iVar35 - iStack_274));
        lStack_268 = (long)(int)uVar14;
        uStack_2e4 = (uint)(iVar41 != 0 || (int)(uVar26 * uStack_300._4_4_) < 1);
        uStack_2f0 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
        uStack_2f8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
        lVar13 = *(long *)(lVar43 + 0x40);
        uVar36 = uStack_2c0 + 1;
        uStack_288 = (long)(int)uVar28 + 1;
        uStack_2a8 = uStack_270 +
                     (long)(iStack_224 *
                           (iStack_274 + iVar35 * (uStack_248._4_4_ + uStack_300._4_4_))) * 2;
        uStack_290 = (long)(iStack_224 * iStack_314) + 1;
        uVar20 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffe00000000 | uStack_320 << 1;
        uVar7 = uStack_310 & 0xffffffff;
        uVar33 = uStack_310 >> 0x1f;
        uStack_2b0 = uStack_270 + (long)(int)uVar28 * 2;
        uStack_2b8 = CONCAT44(iVar41,(int)uStack_2b8);
        uStack_298 = lVar13;
        iVar38 = uStack_248._4_4_;
        iStack_278 = iVar22;
        iStack_228 = iVar21;
        uStack_210 = iVar41;
        iStack_20c = uVar31;
        uStack_208 = iVar22;
        iStack_204 = iVar35;
        do {
          pfVar18 = (float *)(uStack_2d0 + uStack_2a0 * uStack_2d8 * 2);
          uVar8 = (undefined2)uVar31;
          uVar25 = uVar36;
          pfVar17 = pfVar18;
          if ((uStack_2e4 & 1) == 0) {
            do {
              *(undefined2 *)pfVar17 = uVar8;
              uVar25 = uVar25 - 1;
              pfVar17 = (float *)((long)pfVar17 + 2);
            } while (1 < uVar25);
          }
          uVar14 = (uint)uStack_2c0;
          iVar41 = (int)uVar12;
          if (0 < iVar38) {
            lVar42 = 0;
            iVar21 = 0;
            lVar24 = uStack_2a0 * lStack_328;
            uVar25 = uStack_2c0;
            do {
              lVar32 = lVar13 + lVar24 * 2 + lVar42 * 2;
              iVar22 = (int)uVar25;
              iVar35 = (int)uStack_238;
              if (iVar41 == 0) {
                if (0 < iVar35) {
                  puVar19 = (undefined2 *)((long)pfVar18 + (long)iVar22 * 2);
                  uVar25 = uStack_288;
                  do {
                    *puVar19 = uVar8;
                    uVar25 = uVar25 - 1;
                    puVar19 = puVar19 + 1;
                  } while (1 < uVar25);
                }
                _memcpy((undefined2 *)((long)pfVar18 + (long)(iVar22 + iVar35) * 2),lVar32,
                        uStack_250);
                iVar22 = iVar22 + uStack_260._4_4_;
                if (0 < (int)uStack_240) {
                  puVar19 = (undefined2 *)((long)pfVar18 + (long)iVar22 * 2);
                  uVar25 = uStack_290;
                  do {
                    *puVar19 = uVar8;
                    uVar25 = uVar25 - 1;
                    puVar19 = puVar19 + 1;
                  } while (1 < uVar25);
                }
              }
              else {
                _memcpy((undefined2 *)((long)pfVar18 + (long)(iVar22 + iVar35) * 2),lVar32,
                        uStack_250);
                iVar22 = iVar22 + uStack_260._4_4_;
              }
              uVar14 = iVar22 + (int)uStack_240;
              uVar25 = (ulong)uVar14;
              lVar42 = lVar42 + lStack_268;
              iVar21 = iVar21 + 1;
              iVar38 = uStack_248._4_4_;
            } while (iVar21 != uStack_248._4_4_);
          }
          uVar25 = uStack_250;
          if (iVar41 == 0) {
            if (0 < (int)uVar6) {
              puVar19 = (undefined2 *)((long)pfVar18 + (long)(int)uVar14 * 2);
              uVar25 = (ulong)uVar6 + 1;
              do {
                *puVar19 = uVar8;
                uVar25 = uVar25 - 1;
                puVar19 = puVar19 + 1;
              } while (1 < uVar25);
            }
          }
          else {
            iVar21 = iStack_32c;
            if (iVar41 == 3) {
              iVar21 = 0;
            }
            iVar22 = -1;
            if (iVar41 == 3) {
              iVar22 = 0;
            }
            iVar35 = -1;
            iVar38 = uStack_300._4_4_;
            if (iVar41 != 1) {
              iVar35 = iVar22;
              iVar38 = iVar21;
            }
            uStack_2c8 = pfVar18;
            if (uStack_300._4_4_ != 0) {
              uVar14 = iVar35 * (int)uStack_308;
              lVar42 = uStack_298 + (long)(iVar38 * (int)uStack_308) * 2;
              uVar12 = uStack_2b0;
              iVar41 = uStack_300._4_4_;
              do {
                _memcpy(uVar12,lVar42,uVar25);
                uVar12 = uVar12 + uVar20;
                lVar42 = lVar42 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 |
                                  (ulong)uVar14 << 1);
                iVar41 = iVar41 + -1;
              } while (iVar41 != 0);
            }
            iVar21 = iStack_278;
            uVar12 = uStack_298;
            iVar41 = -1;
            if (uStack_2b8._4_4_ == 3) {
              iVar41 = 0;
            }
            piVar9 = &iStack_330;
            if (uStack_2b8._4_4_ != 1) {
              piVar9 = &iStack_334;
            }
            iVar22 = -1;
            if (uStack_2b8._4_4_ != 1) {
              iVar22 = iVar41;
            }
            if (iStack_318 != 0) {
              uVar14 = *piVar9 * (int)uStack_308;
              uVar28 = iVar22 * (int)uStack_308;
              uVar30 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
              uStack_258 = -(ulong)(uVar28 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar28 << 1;
              uVar16 = uStack_2a8;
              iVar41 = iVar23;
              do {
                _memcpy(uVar16,uVar12 + uVar30,uVar25);
                iVar41 = iVar41 + 1;
                uVar16 = uVar16 + uVar20;
                uVar30 = uVar30 + uStack_258;
              } while (iVar41 < iVar21);
            }
            iVar41 = 0;
            iVar22 = 0;
            iVar35 = iStack_33c;
            if (uStack_2b8._4_4_ == 3) {
              iVar35 = iStack_274;
            }
            iVar38 = -1;
            if (uStack_2b8._4_4_ == 3) {
              iVar38 = 0;
            }
            iVar15 = -1;
            iVar29 = iStack_338;
            if (uStack_2b8._4_4_ != 1) {
              iVar15 = iVar38;
              iVar29 = iVar35;
            }
            iVar29 = iVar29 * (int)uStack_310;
            iVar35 = (int)uStack_238 * iVar15;
            uStack_280 = CONCAT44(iVar35,(undefined4)uStack_280);
            uStack_258 = CONCAT44(uStack_258._4_4_,(int)uStack_320 - iVar35);
            uVar14 = iVar15 * (int)uStack_310;
            iVar35 = iStack_274;
            do {
              iVar38 = iVar35;
              if (iVar35 != 0) {
                lVar42 = uStack_270 + (long)iVar29 * 2;
                iVar29 = uStack_280._4_4_ + iVar29;
                lVar24 = uStack_270 + (long)iVar22 * 2;
                iVar22 = (int)uStack_238 + iVar22;
                do {
                  _memcpy(lVar24,lVar42,(long)iVar27);
                  lVar42 = lVar42 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 |
                                    (ulong)uVar14 << 1);
                  lVar24 = lVar24 + (-(uVar33 & 1) & 0xfffffffe00000000 | uVar7 << 1);
                  iVar35 = iVar35 + -1;
                  iVar21 = iStack_278;
                  iVar38 = iStack_274;
                } while (iVar35 != 0);
              }
              iVar35 = iVar38;
              iVar22 = (int)uStack_260 + iVar22;
              iVar29 = (int)uStack_258 + iVar29;
              iVar41 = iVar41 + 1;
            } while (iVar41 != iVar21);
            uVar12 = (ulong)uStack_2b8._4_4_;
            uVar1 = 0xffffffff;
            if (uStack_2b8._4_4_ == 3) {
              uVar1 = 0;
            }
            piVar9 = &iStack_344;
            if (uStack_2b8._4_4_ != 1) {
              piVar9 = &iStack_348;
            }
            uVar2 = 0xffffffff;
            if (uStack_2b8._4_4_ != 1) {
              uVar2 = uVar1;
            }
            func_0x000109c18a5c(&iStack_22c,uStack_2c8,uStack_2c8,iStack_340,*piVar9,uVar2,
                                iStack_314);
            iVar38 = uStack_248._4_4_;
          }
          uStack_2a0 = uStack_2a0 + 1;
          uStack_2b0 = uStack_2b0 + uStack_2f0;
          uStack_298 = uStack_298 + uStack_2f8;
          uStack_2a8 = uStack_2a8 + uStack_2f0;
          uStack_270 = uStack_270 + uStack_2f0;
        } while (uStack_2a0 != uStack_2e0);
        lVar13 = *extraout_x8;
        uVar31 = *(undefined4 *)(lVar43 + 0x50);
      }
      *(undefined4 *)(lVar13 + 0x3c) = 0;
      *(undefined4 *)(lVar13 + 0x4c) = *(undefined4 *)(lVar43 + 0x4c);
      *(undefined4 *)(lVar13 + 0x50) = uVar31;
      return;
    }
  }
  func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109c16e7c);
  (*pcVar10)();
}



/* Entry: 109c15b40; end: 109c15ba7;  */

void FUN_109c15b40(long *param_1,long param_2,int *param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 uVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  undefined2 *puVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  long lVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  float fVar40;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  long lStack_1b8;
  ulong uStack_1b0;
  int iStack_1a8;
  int iStack_1a4;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int iStack_178;
  uint uStack_174;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int iStack_108;
  int iStack_104;
  ulong uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  uint uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((*(int *)(param_2 + 0x3c) != 0) &&
     (*(int *)(param_2 + 0x3c) != 2 || *(int *)(param_2 + 8) != 4)) {
LAB_109c15b78:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = (long)FUN_109c180a4;
    param_1[2] = (long)&PTR_DAT_110950c70;
    return;
  }
  cVar3 = *(char *)(param_2 + 0x48);
  if (cVar3 != '\x03') {
    if (cVar3 != '\x02') {
      if (cVar3 != '\x01') goto LAB_109c15b78;
      uStack_198._4_4_ = *param_3;
      iStack_1a4 = param_3[1];
      iStack_104 = param_3[2];
      uStack_198._0_4_ = param_3[3];
      uVar11 = *(uint *)(param_2 + 8);
      if ((int)uVar11 < 1) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar26 = *(uint *)(param_2 + 0xc);
        if (uVar11 != 1) {
          iStack_1a8 = *(int *)(param_2 + 0x10);
          if (uVar11 < 3) {
            iVar29 = -1;
          }
          else {
            iVar29 = *(int *)(param_2 + 0x14);
            if (uVar11 != 3) {
              uStack_1a0 = (ulong)*(uint *)(param_2 + 0x18);
              goto LAB_109c15c54;
            }
          }
          uStack_1a0 = 0xffffffff;
          goto LAB_109c15c54;
        }
      }
      iVar29 = -1;
      iStack_1a8 = -1;
      uStack_1a0 = 0xffffffff;
LAB_109c15c54:
      iVar21 = iStack_1a4 + uStack_198._4_4_ + iStack_1a8;
      iVar34 = (int)uStack_198 + iStack_104 + iVar29;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      if ((uint *)(param_2 + 8) != (uint *)&uStack_90) {
        if (uVar11 != 0) {
          _memcpy((ulong)&uStack_90 | 4,param_2 + 0xc,(long)(int)uVar11 << 2);
        }
        uStack_90 = (ulong)uVar11;
      }
      uStack_90 = CONCAT44(uVar26,(uint)uStack_90);
      uStack_88 = CONCAT44(iVar34,iVar21);
      uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_1a0);
      FUN_109c14b04(param_1,&uStack_90,param_5,*(undefined1 *)(param_2 + 0x48));
      if (((((-1 < uStack_198._4_4_) && (-1 < iStack_1a4)) && (-1 < iStack_104)) &&
          ((-1 < (int)uStack_198 && (0 < iVar21)))) && (0 < iVar34)) {
        lVar19 = *param_1;
        uStack_100 = *(long *)(lVar19 + 0x40);
        uStack_160 = uStack_100;
        if (uStack_100 != 0) {
          iStack_ac = *(int *)(param_2 + 0x50);
          uStack_d0 = CONCAT44(iStack_1a8,(undefined4)uStack_d0);
          iVar25 = (int)uStack_1a0;
          uStack_c8 = CONCAT44(iVar25,iVar29);
          uStack_c0 = uStack_198._4_4_;
          iStack_bc = iStack_1a4;
          iStack_b8 = iStack_104;
          iStack_b4 = (int)uStack_198;
          uStack_a0 = iVar25 * iVar29;
          uStack_190 = (ulong)uStack_a0;
          iStack_9c = uStack_a0 * 4;
          uStack_98 = iVar25 * iVar34;
          uStack_1b0 = (ulong)uStack_98;
          iStack_94 = iVar25 << 2;
          if (0 < (int)uVar26) {
            uStack_128 = 0;
            uVar11 = uStack_a0 * iStack_1a8;
            uVar24 = uStack_98 * iVar21;
            lStack_1b8 = (long)(int)uVar11;
            uStack_168 = (long)(int)uVar24;
            uStack_170 = (ulong)uVar26;
            uStack_148 = (ulong)(uStack_98 * uStack_198._4_4_);
            uVar26 = iVar25 * iStack_104;
            uStack_d8 = (ulong)uVar26;
            uStack_e0 = (ulong)(uint)(iVar25 * (int)uStack_198);
            iStack_1bc = uStack_198._4_4_ + -1;
            iStack_1c0 = iStack_1a8 + -2;
            uVar4 = uStack_98 * iStack_1a4;
            iVar29 = iVar21 - iStack_1a4;
            iStack_1c8 = iStack_104 * 2;
            iStack_1c4 = iStack_1a8 + -1;
            iStack_1cc = iStack_1c8 + -1;
            iStack_1d0 = iVar34 - (int)uStack_198;
            iStack_1d4 = iStack_1d0 + -2;
            iStack_1d8 = iStack_1d0 + -1;
            fVar40 = (float)iStack_ac;
            uStack_e8 = (ulong)iStack_9c;
            uStack_f0 = CONCAT44(uVar26 + uStack_a0,iVar25 * (iVar34 - iStack_104));
            lVar37 = (long)iStack_94;
            lStack_f8 = (long)(int)uStack_a0;
            uStack_174 = (uint)(param_4 != 0 || (int)(uStack_98 * uStack_198._4_4_) < 1);
            uStack_180 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2;
            uStack_188 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2;
            lVar19 = *(long *)(param_2 + 0x40);
            uVar17 = uStack_148 + 1;
            uStack_118 = (long)(int)uVar26 + 1;
            uStack_130 = uStack_100 +
                         (long)(iVar25 * (iStack_104 + iVar34 * (iStack_1a8 + uStack_198._4_4_))) *
                         4;
            uStack_120 = (long)(iVar25 * (int)uStack_198) + 1;
            uVar23 = -(ulong)(uStack_98 >> 0x1f) & 0xfffffffc00000000 | uStack_1b0 << 2;
            uVar20 = uStack_1a0 & 0xffffffff;
            uVar7 = uStack_1a0 >> 0x1f;
            uStack_138 = uStack_100 + (long)(int)uVar26 * 4;
            uStack_150 = CONCAT44(param_4,(int)uStack_150);
            uVar36 = lVar19;
            iVar25 = iStack_1a8;
            iStack_108 = iVar21;
            iStack_b0 = param_4;
            iStack_a8 = iVar21;
            iStack_a4 = iVar34;
            do {
              pfVar16 = (float *)(uStack_160 + uStack_128 * uStack_168 * 4);
              uVar13 = uVar17;
              pfVar15 = pfVar16;
              if ((uStack_174 & 1) == 0) {
                do {
                  *pfVar15 = fVar40;
                  uVar13 = uVar13 - 1;
                  pfVar15 = pfVar15 + 1;
                } while (1 < uVar13);
              }
              uVar11 = (uint)uStack_148;
              if (0 < iVar25) {
                lVar38 = 0;
                iVar21 = 0;
                lVar14 = uStack_128 * lStack_1b8;
                uVar13 = uStack_148;
                do {
                  lVar32 = lVar19 + lVar14 * 4 + lVar38 * 4;
                  iVar34 = (int)uVar13;
                  iVar22 = (int)uStack_d8;
                  if (param_4 == 0) {
                    if (0 < iVar22) {
                      pfVar15 = pfVar16 + iVar34;
                      uVar13 = uStack_118;
                      do {
                        *pfVar15 = fVar40;
                        uVar13 = uVar13 - 1;
                        pfVar15 = pfVar15 + 1;
                      } while (1 < uVar13);
                    }
                    _memcpy(pfVar16 + (iVar34 + iVar22),lVar32,uStack_e8);
                    iVar34 = iVar34 + uStack_f0._4_4_;
                    if (0 < (int)uStack_e0) {
                      pfVar15 = pfVar16 + iVar34;
                      uVar13 = uStack_120;
                      do {
                        *pfVar15 = fVar40;
                        uVar13 = uVar13 - 1;
                        pfVar15 = pfVar15 + 1;
                      } while (1 < uVar13);
                    }
                  }
                  else {
                    _memcpy(pfVar16 + (iVar34 + iVar22),lVar32,uStack_e8);
                    iVar34 = iVar34 + uStack_f0._4_4_;
                  }
                  uVar11 = iVar34 + (int)uStack_e0;
                  uVar13 = (ulong)uVar11;
                  lVar38 = lVar38 + lStack_f8;
                  iVar21 = iVar21 + 1;
                } while (iVar21 != iVar25);
              }
              lVar38 = uStack_e8;
              if (param_4 == 0) {
                if (0 < (int)uVar4) {
                  pfVar16 = pfVar16 + (int)uVar11;
                  uVar13 = (ulong)uVar4 + 1;
                  do {
                    *pfVar16 = fVar40;
                    uVar13 = uVar13 - 1;
                    pfVar16 = pfVar16 + 1;
                  } while (1 < uVar13);
                }
              }
              else {
                iVar21 = iStack_1bc;
                if (param_4 == 3) {
                  iVar21 = 0;
                }
                iVar34 = -1;
                if (param_4 == 3) {
                  iVar34 = 0;
                }
                iVar25 = -1;
                iVar22 = uStack_198._4_4_;
                if (param_4 != 1) {
                  iVar25 = iVar34;
                  iVar22 = iVar21;
                }
                uStack_158 = pfVar16;
                uStack_140 = uVar36;
                if (uStack_198._4_4_ != 0) {
                  uVar11 = iVar25 * (int)uStack_190;
                  lVar14 = uVar36 + (long)(iVar22 * (int)uStack_190) * 4;
                  uVar36 = uStack_138;
                  iVar21 = uStack_198._4_4_;
                  do {
                    _memcpy(uVar36,lVar14,lVar38);
                    uVar36 = uVar36 + uVar23;
                    lVar14 = lVar14 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar11 << 2);
                    iVar21 = iVar21 + -1;
                  } while (iVar21 != 0);
                }
                iVar34 = iStack_108;
                uVar36 = uStack_140;
                iVar21 = -1;
                if (param_4 == 3) {
                  iVar21 = 0;
                }
                piVar9 = &iStack_1c0;
                if (param_4 != 1) {
                  piVar9 = &iStack_1c4;
                }
                iVar25 = -1;
                if (param_4 != 1) {
                  iVar25 = iVar21;
                }
                if (iStack_1a4 != 0) {
                  uVar11 = *piVar9 * (int)uStack_190;
                  uVar26 = iVar25 * (int)uStack_190;
                  uVar13 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2;
                  lVar14 = uStack_130;
                  iVar21 = iVar29;
                  do {
                    _memcpy(lVar14,uVar36 + uVar13,lVar38);
                    iVar21 = iVar21 + 1;
                    lVar14 = lVar14 + uVar23;
                    uVar13 = uVar13 + (-(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar26 << 2);
                  } while (iVar21 < iVar34);
                }
                iVar21 = 0;
                iVar25 = 0;
                iVar22 = iStack_1cc;
                if (uStack_150._4_4_ == 3) {
                  iVar22 = iStack_104;
                }
                iVar30 = -1;
                if (uStack_150._4_4_ == 3) {
                  iVar30 = 0;
                }
                iVar27 = -1;
                iVar35 = iStack_1c8;
                if (uStack_150._4_4_ != 1) {
                  iVar27 = iVar30;
                  iVar35 = iVar22;
                }
                iVar35 = iVar35 * (int)uStack_1a0;
                iVar22 = (int)uStack_d8 * iVar27;
                uStack_110 = CONCAT44(iVar22,(undefined4)uStack_110);
                iVar12 = (int)uStack_1b0;
                uVar11 = iVar27 * (int)uStack_1a0;
                iVar30 = iStack_104;
                do {
                  iVar27 = iVar30;
                  if (iVar30 != 0) {
                    lVar38 = uStack_100 + (long)iVar35 * 4;
                    iVar35 = uStack_110._4_4_ + iVar35;
                    lVar14 = uStack_100 + (long)iVar25 * 4;
                    iVar25 = (int)uStack_d8 + iVar25;
                    do {
                      _memcpy(lVar14,lVar38,lVar37);
                      lVar38 = lVar38 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar11 << 2);
                      lVar14 = lVar14 + (-(uVar7 & 1) & 0xfffffffc00000000 | uVar20 << 2);
                      iVar30 = iVar30 + -1;
                      iVar34 = iStack_108;
                      iVar27 = iStack_104;
                    } while (iVar30 != 0);
                  }
                  iVar30 = iVar27;
                  iVar25 = (int)uStack_f0 + iVar25;
                  iVar35 = (iVar12 - iVar22) + iVar35;
                  iVar21 = iVar21 + 1;
                } while (iVar21 != iVar34);
                param_4 = uStack_150._4_4_;
                uVar31 = 0xffffffff;
                if (uStack_150._4_4_ == 3) {
                  uVar31 = 0;
                }
                piVar9 = &iStack_1d4;
                if (uStack_150._4_4_ != 1) {
                  piVar9 = &iStack_1d8;
                }
                uVar1 = 0xffffffff;
                if (uStack_150._4_4_ != 1) {
                  uVar1 = uVar31;
                }
                FUN_109c188dc((long)&uStack_d0 + 4,uStack_158,uStack_158,iStack_1d0,*piVar9,uVar1,
                              (int)uStack_198);
                uVar36 = uStack_140;
                iVar25 = iStack_1a8;
              }
              uStack_128 = uStack_128 + 1;
              uStack_138 = uStack_138 + uStack_180;
              uVar36 = uVar36 + uStack_188;
              uStack_130 = uStack_130 + uStack_180;
              uStack_100 = uStack_100 + uStack_180;
            } while (uStack_128 != uStack_170);
            lVar19 = *param_1;
            iStack_ac = *(int *)(param_2 + 0x50);
          }
          *(undefined4 *)(lVar19 + 0x3c) = 0;
          *(undefined4 *)(lVar19 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
          *(int *)(lVar19 + 0x50) = iStack_ac;
          return;
        }
      }
      func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x109c16228);
      (*pcVar10)();
    }
    iVar29 = *param_3;
    iVar21 = param_3[1];
    iStack_a8 = param_3[2];
    uStack_148._4_4_ = param_3[3];
    uVar11 = *(uint *)(param_2 + 8);
    if ((int)uVar11 < 1) {
      uVar26 = 0xffffffff;
    }
    else {
      uVar26 = *(uint *)(param_2 + 0xc);
      if (uVar11 != 1) {
        iStack_108 = *(int *)(param_2 + 0x10);
        if (uVar11 < 3) {
          iVar34 = -1;
        }
        else {
          iVar34 = *(int *)(param_2 + 0x14);
          if (uVar11 != 3) {
            iVar25 = *(int *)(param_2 + 0x18);
            goto LAB_109c162d0;
          }
        }
        iVar25 = -1;
        goto LAB_109c162d0;
      }
    }
    iVar34 = -1;
    iStack_108 = -1;
    iVar25 = -1;
LAB_109c162d0:
    uStack_148._0_4_ = iVar21 + iVar29 + iStack_108;
    iVar22 = uStack_148._4_4_ + iStack_a8 + iVar34;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,iStack_a8);
    iStack_104 = param_4;
    if ((uint *)(param_2 + 8) != (uint *)&uStack_80) {
      if (uVar11 != 0) {
        _memcpy((ulong)&uStack_80 | 4,param_2 + 0xc,(long)(int)uVar11 << 2);
        iStack_a8 = (int)uStack_150;
      }
      uStack_80 = (ulong)uVar11;
    }
    iVar30 = (int)uStack_148;
    uStack_80 = CONCAT44(uVar26,(uint)uStack_80);
    uStack_78 = CONCAT44(iVar22,(int)uStack_148);
    FUN_109c14b04(&uStack_80,param_5,*(undefined1 *)(param_2 + 0x48));
    if (((-1 < iVar29) && (-1 < iVar21)) &&
       ((-1 < iStack_a8 && (((-1 < uStack_148._4_4_ && (0 < iVar30)) && (0 < iVar22)))))) {
      lVar19 = *param_1;
      uStack_110 = *(long *)(lVar19 + 0x40);
      if (uStack_110 != 0) {
        iStack_9c = *(undefined4 *)(param_2 + 0x50);
        iStack_bc = iStack_108;
        iStack_a4 = uStack_148._4_4_;
        uStack_a0 = iStack_104;
        uStack_150 = CONCAT44(iStack_9c,(int)uStack_150);
        uStack_98 = iVar30;
        uVar11 = iVar25 * iVar34;
        uStack_140 = (ulong)uVar11;
        iVar35 = iVar25 * iVar22;
        uStack_90 = CONCAT44(uVar11,uVar11);
        uStack_88 = CONCAT44(iVar25,iVar35);
        uStack_190 = param_2;
        if (0 < (int)uVar26) {
          uStack_100 = 0;
          lVar19 = *(long *)(param_2 + 0x40);
          uStack_120 = (ulong)(int)(uVar11 * iStack_108);
          uStack_128 = (ulong)(iVar35 * iVar30);
          uStack_d0 = (ulong)(uint)(iVar35 * iVar29);
          iVar27 = iVar25 * iStack_a8;
          iVar12 = iVar25 * uStack_148._4_4_;
          uVar24 = (uint)(iStack_104 == 0);
          uStack_130._4_4_ = 0;
          if (0 < iVar35 * iVar29) {
            uStack_130._4_4_ = uVar24;
          }
          uStack_d8 = (ulong)iVar27;
          uStack_c0 = 0;
          if (0 < iVar27) {
            uStack_c0 = uVar24;
          }
          uStack_e0 = (ulong)iVar12;
          lVar37 = (long)(int)uVar11;
          uVar4 = 0;
          if (0 < iVar12) {
            uVar4 = uVar24;
          }
          uStack_c8 = CONCAT44(uVar4,iVar27 + uVar11 + iVar12);
          iStack_178 = iVar30 - iVar21;
          iVar30 = iVar22 - uStack_148._4_4_;
          uStack_174 = iVar30 - 1;
          uStack_168 = CONCAT44(iVar30,(undefined4)uStack_168);
          uStack_160 = CONCAT44(iStack_108 + -2,iStack_108 + -1);
          uStack_180 = CONCAT44(iStack_a8 * 2,iVar30 + -2);
          uStack_188 = CONCAT44(iStack_a8 * 2 + -1,(undefined4)uStack_188);
          uStack_118 = CONCAT44(iVar29,(undefined4)uStack_118);
          iVar30 = iStack_a8 + iVar29 * iVar22;
          uStack_e8 = CONCAT44(iVar25 * (iVar30 + iVar34),(int)uStack_e8);
          uStack_138 = (ulong)uVar26;
          uStack_f0 = uStack_110 + iVar27;
          uStack_158 = (float *)CONCAT44(iVar21,iVar29 + -1);
          uStack_170 = (ulong)(uint)(iVar35 * iVar21);
          lStack_f8 = uStack_110 + iVar25 * (iStack_a8 + iVar22 * (iStack_108 + iVar29));
          iVar27 = iStack_108;
          iVar12 = iStack_104;
          uStack_198 = param_1;
          iStack_b8 = iVar34;
          iStack_b4 = iVar25;
          iStack_b0 = iVar29;
          iStack_ac = iVar21;
          iStack_94 = iVar22;
          uVar31 = iStack_9c;
          do {
            lVar38 = uStack_110 + uStack_100 * uStack_128;
            if (uStack_130._4_4_ != 0) {
              _memset(lVar38,uVar31,uStack_d0);
            }
            uVar17 = uStack_d0;
            if (0 < iVar27) {
              iVar29 = 0;
              lVar14 = lVar19;
              do {
                if (uStack_c0 != 0) {
                  _memset(lVar38 + ((int)uStack_d0 + iVar29),uVar31,uStack_d8);
                }
                _memcpy(lVar38 + (iVar25 * iVar30 + iVar29),lVar14,lVar37);
                if (uStack_c8._4_4_ != 0) {
                  _memset(lVar38 + (uStack_e8._4_4_ + iVar29),uVar31,uStack_e0);
                }
                lVar14 = lVar14 + lVar37;
                iVar29 = iVar29 + (int)uStack_c8;
                iVar27 = iVar27 + -1;
              } while (iVar27 != 0);
              uVar17 = (ulong)(uint)((int)uStack_d0 + iVar29);
              iVar27 = iStack_108;
            }
            if (iVar12 == 0) {
              if (0 < (int)uStack_170) {
                _memset(lVar38 + (int)uVar17,uVar31,uStack_170);
              }
            }
            else {
              iVar29 = (int)uStack_158;
              if (iVar12 == 3) {
                iVar29 = 0;
              }
              iVar21 = -1;
              if (iVar12 == 3) {
                iVar21 = 0;
              }
              iVar34 = -1;
              iVar22 = uStack_118._4_4_;
              if (iVar12 != 1) {
                iVar34 = iVar21;
                iVar22 = iVar29;
              }
              if (uStack_118._4_4_ != 0) {
                iVar21 = (int)uStack_140;
                lVar14 = (long)(iVar22 * iVar21);
                lVar32 = uStack_f0;
                iVar29 = uStack_118._4_4_;
                do {
                  _memcpy(lVar32,lVar19 + lVar14,lVar37);
                  lVar14 = lVar14 + iVar34 * iVar21;
                  lVar32 = lVar32 + iVar35;
                  iVar29 = iVar29 + -1;
                } while (iVar29 != 0);
              }
              iVar21 = (int)uStack_148;
              iVar29 = -1;
              if (iStack_104 == 3) {
                iVar29 = 0;
              }
              piVar9 = (int *)((long)&uStack_160 + 4);
              if (iStack_104 != 1) {
                piVar9 = (int *)&uStack_160;
              }
              iVar34 = -1;
              if (iStack_104 != 1) {
                iVar34 = iVar29;
              }
              if (uStack_158._4_4_ != 0) {
                iVar22 = (int)uStack_140;
                lVar14 = (long)(*piVar9 * iVar22);
                lVar32 = lStack_f8;
                iVar29 = iStack_178;
                do {
                  _memcpy(lVar32,lVar19 + lVar14,lVar37);
                  lVar14 = lVar14 + iVar34 * iVar22;
                  iVar29 = iVar29 + 1;
                  lVar32 = lVar32 + iVar35;
                } while (iVar29 < iVar21);
              }
              iVar12 = iStack_104;
              iVar27 = iStack_108;
              uVar31 = uStack_150._4_4_;
              if (iStack_104 == 3) {
                func_0x000109c1899c(&iStack_bc,lVar38,lVar38,0,uStack_150 & 0xffffffff,0,
                                    uStack_150 & 0xffffffff);
                uVar33 = 0;
                uVar17 = (ulong)uStack_174;
                iVar27 = iStack_108;
              }
              else {
                uVar33 = 0xffffffff;
                if (iStack_104 == 1) {
                  func_0x000109c1899c(&iStack_bc,lVar38,lVar38,0,uStack_180._4_4_,0xffffffff,
                                      uStack_150 & 0xffffffff);
                  uVar17 = uStack_180 & 0xffffffff;
                }
                else {
                  func_0x000109c1899c(&iStack_bc,lVar38,lVar38,0,uStack_188._4_4_,0xffffffff,
                                      uStack_150 & 0xffffffff);
                  uVar17 = (ulong)uStack_174;
                }
              }
              func_0x000109c1899c(&iStack_bc,lVar38,lVar38,uStack_168._4_4_,uVar17,uVar33,
                                  uStack_148._4_4_);
            }
            uStack_100 = uStack_100 + 1;
            lVar19 = lVar19 + uStack_120;
            uStack_f0 = uStack_f0 + uStack_128;
            lStack_f8 = lStack_f8 + uStack_128;
          } while (uStack_100 != uStack_138);
          lVar19 = *uStack_198;
          iStack_9c = *(undefined4 *)(uStack_190 + 0x50);
        }
        *(undefined4 *)(lVar19 + 0x3c) = 0;
        *(undefined4 *)(lVar19 + 0x4c) = *(undefined4 *)(uStack_190 + 0x4c);
        *(int *)(lVar19 + 0x50) = iStack_9c;
        return;
      }
    }
    func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109c167dc);
    (*pcVar10)();
  }
  uStack_190._4_4_ = *param_3;
  iStack_1a8 = param_3[1];
  iStack_104 = param_3[2];
  iStack_1a4 = param_3[3];
  uVar11 = *(uint *)(param_2 + 8);
  if ((int)uVar11 < 1) {
    uVar26 = 0xffffffff;
LAB_109c1685c:
    iVar29 = -1;
    uStack_d8._4_4_ = -1;
  }
  else {
    uVar26 = *(uint *)(param_2 + 0xc);
    if (uVar11 == 1) goto LAB_109c1685c;
    uStack_d8._4_4_ = *(int *)(param_2 + 0x10);
    if (uVar11 < 3) {
      iVar29 = -1;
    }
    else {
      iVar29 = *(int *)(param_2 + 0x14);
      if (uVar11 != 3) {
        uStack_1a0 = (ulong)*(uint *)(param_2 + 0x18);
        goto LAB_109c16864;
      }
    }
  }
  uStack_1a0 = 0xffffffff;
LAB_109c16864:
  iVar21 = iStack_1a8 + uStack_190._4_4_ + uStack_d8._4_4_;
  iVar34 = iStack_1a4 + iStack_104 + iVar29;
  uStack_80 = 0;
  uStack_78 = 0;
  if ((uint *)(param_2 + 8) != (uint *)&uStack_80) {
    if (uVar11 != 0) {
      _memcpy((ulong)&uStack_80 | 4,param_2 + 0xc,(long)(int)uVar11 << 2);
    }
    uStack_80 = (ulong)uVar11;
  }
  uStack_80 = CONCAT44(uVar26,(uint)uStack_80);
  uStack_78 = CONCAT44(iVar34,iVar21);
  FUN_109c14b04(param_1,&uStack_80,param_5,*(undefined1 *)(param_2 + 0x48));
  if ((((-1 < uStack_190._4_4_) && (-1 < iStack_1a8)) &&
      ((-1 < iStack_104 && ((-1 < iStack_1a4 && (0 < iVar21)))))) && (0 < iVar34)) {
    lVar19 = *param_1;
    uStack_100 = *(long *)(lVar19 + 0x40);
    uStack_160 = uStack_100;
    if (uStack_100 != 0) {
      uVar31 = *(undefined4 *)(param_2 + 0x50);
      iStack_bc = uStack_d8._4_4_;
      iStack_b4 = (int)uStack_1a0;
      iStack_b0 = uStack_190._4_4_;
      iStack_ac = iStack_1a8;
      iStack_a8 = iStack_104;
      iStack_a4 = iStack_1a4;
      uVar11 = iStack_b4 * iVar29;
      uStack_198 = (long *)(ulong)uVar11;
      uVar24 = iStack_b4 * iVar34;
      uStack_1b0 = (ulong)uVar24;
      uStack_90 = CONCAT44(uVar11 * 2,uVar11);
      iVar25 = iStack_b4 << 1;
      uStack_88 = CONCAT44(iVar25,uVar24);
      if (0 < (int)uVar26) {
        uStack_130 = 0;
        uVar4 = uVar11 * uStack_d8._4_4_;
        uVar5 = uVar24 * iVar21;
        lStack_1b8 = (long)(int)uVar4;
        uStack_168 = (long)(int)uVar5;
        uStack_170 = (ulong)uVar26;
        uStack_150 = (ulong)(uVar24 * uStack_190._4_4_);
        uVar26 = iStack_b4 * iStack_104;
        uStack_c8 = (ulong)uVar26;
        uStack_d0 = (ulong)(uint)(iStack_b4 * iStack_1a4);
        iStack_1bc = uStack_190._4_4_ + -1;
        uVar6 = uVar24 * iStack_1a8;
        iStack_1c0 = uStack_d8._4_4_ + -2;
        iVar22 = iVar21 - iStack_1a8;
        iStack_1c8 = iStack_104 * 2;
        iStack_1c4 = uStack_d8._4_4_ + -1;
        iStack_1cc = iStack_1c8 + -1;
        iStack_1d0 = iVar34 - iStack_1a4;
        iStack_1d4 = iStack_1d0 + -2;
        iStack_1d8 = iStack_1d0 + -1;
        uStack_e0 = (ulong)(int)(uVar11 * 2);
        uStack_f0 = CONCAT44(uVar26 + uVar11,iStack_b4 * (iVar34 - iStack_104));
        lStack_f8 = (long)(int)uVar11;
        uStack_174 = (uint)(param_4 != 0 || (int)(uVar24 * uStack_190._4_4_) < 1);
        uStack_180 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
        uStack_188 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
        lVar19 = *(long *)(param_2 + 0x40);
        uVar17 = uStack_150 + 1;
        uStack_118 = (long)(int)uVar26 + 1;
        uStack_138 = uStack_100 +
                     (long)(iStack_b4 * (iStack_104 + iVar34 * (uStack_d8._4_4_ + uStack_190._4_4_))
                           ) * 2;
        uStack_120 = (long)(iStack_b4 * iStack_1a4) + 1;
        uVar20 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffe00000000 | uStack_1b0 << 1;
        uVar7 = uStack_1a0 & 0xffffffff;
        uVar36 = uStack_1a0 >> 0x1f;
        uStack_140 = uStack_100 + (long)(int)uVar26 * 2;
        uStack_148 = CONCAT44(param_4,(int)uStack_148);
        uStack_128 = lVar19;
        iVar30 = uStack_d8._4_4_;
        iStack_108 = iVar21;
        iStack_b8 = iVar29;
        uStack_a0 = param_4;
        iStack_9c = uVar31;
        uStack_98 = iVar21;
        iStack_94 = iVar34;
        do {
          pfVar16 = (float *)(uStack_160 + uStack_130 * uStack_168 * 2);
          uVar8 = (undefined2)uVar31;
          uVar23 = uVar17;
          pfVar15 = pfVar16;
          if ((uStack_174 & 1) == 0) {
            do {
              *(undefined2 *)pfVar15 = uVar8;
              uVar23 = uVar23 - 1;
              pfVar15 = (float *)((long)pfVar15 + 2);
            } while (1 < uVar23);
          }
          uVar11 = (uint)uStack_150;
          if (0 < iVar30) {
            lVar37 = 0;
            iVar29 = 0;
            lVar38 = uStack_130 * lStack_1b8;
            uVar23 = uStack_150;
            do {
              lVar14 = lVar19 + lVar38 * 2 + lVar37 * 2;
              iVar21 = (int)uVar23;
              iVar34 = (int)uStack_c8;
              if (param_4 == 0) {
                if (0 < iVar34) {
                  puVar18 = (undefined2 *)((long)pfVar16 + (long)iVar21 * 2);
                  uVar23 = uStack_118;
                  do {
                    *puVar18 = uVar8;
                    uVar23 = uVar23 - 1;
                    puVar18 = puVar18 + 1;
                  } while (1 < uVar23);
                }
                _memcpy((undefined2 *)((long)pfVar16 + (long)(iVar21 + iVar34) * 2),lVar14,uStack_e0
                       );
                iVar21 = iVar21 + uStack_f0._4_4_;
                if (0 < (int)uStack_d0) {
                  puVar18 = (undefined2 *)((long)pfVar16 + (long)iVar21 * 2);
                  uVar23 = uStack_120;
                  do {
                    *puVar18 = uVar8;
                    uVar23 = uVar23 - 1;
                    puVar18 = puVar18 + 1;
                  } while (1 < uVar23);
                }
              }
              else {
                _memcpy((undefined2 *)((long)pfVar16 + (long)(iVar21 + iVar34) * 2),lVar14,uStack_e0
                       );
                iVar21 = iVar21 + uStack_f0._4_4_;
              }
              uVar11 = iVar21 + (int)uStack_d0;
              uVar23 = (ulong)uVar11;
              lVar37 = lVar37 + lStack_f8;
              iVar29 = iVar29 + 1;
              iVar30 = uStack_d8._4_4_;
            } while (iVar29 != uStack_d8._4_4_);
          }
          uVar23 = uStack_e0;
          if (param_4 == 0) {
            if (0 < (int)uVar6) {
              puVar18 = (undefined2 *)((long)pfVar16 + (long)(int)uVar11 * 2);
              uVar23 = (ulong)uVar6 + 1;
              do {
                *puVar18 = uVar8;
                uVar23 = uVar23 - 1;
                puVar18 = puVar18 + 1;
              } while (1 < uVar23);
            }
          }
          else {
            iVar29 = iStack_1bc;
            if (param_4 == 3) {
              iVar29 = 0;
            }
            iVar21 = -1;
            if (param_4 == 3) {
              iVar21 = 0;
            }
            iVar34 = -1;
            iVar30 = uStack_190._4_4_;
            if (param_4 != 1) {
              iVar34 = iVar21;
              iVar30 = iVar29;
            }
            uStack_158 = pfVar16;
            if (uStack_190._4_4_ != 0) {
              uVar11 = iVar34 * (int)uStack_198;
              lVar37 = uStack_128 + (long)(iVar30 * (int)uStack_198) * 2;
              uVar13 = uStack_140;
              iVar29 = uStack_190._4_4_;
              do {
                _memcpy(uVar13,lVar37,uVar23);
                uVar13 = uVar13 + uVar20;
                lVar37 = lVar37 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 |
                                  (ulong)uVar11 << 1);
                iVar29 = iVar29 + -1;
              } while (iVar29 != 0);
            }
            iVar21 = iStack_108;
            uVar13 = uStack_128;
            iVar29 = -1;
            if (uStack_148._4_4_ == 3) {
              iVar29 = 0;
            }
            piVar9 = &iStack_1c0;
            if (uStack_148._4_4_ != 1) {
              piVar9 = &iStack_1c4;
            }
            iVar34 = -1;
            if (uStack_148._4_4_ != 1) {
              iVar34 = iVar29;
            }
            if (iStack_1a8 != 0) {
              uVar11 = *piVar9 * (int)uStack_198;
              uVar26 = iVar34 * (int)uStack_198;
              uVar28 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1;
              uStack_e8 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar26 << 1;
              uVar39 = uStack_138;
              iVar29 = iVar22;
              do {
                _memcpy(uVar39,uVar13 + uVar28,uVar23);
                iVar29 = iVar29 + 1;
                uVar39 = uVar39 + uVar20;
                uVar28 = uVar28 + uStack_e8;
              } while (iVar29 < iVar21);
            }
            iVar29 = 0;
            iVar34 = 0;
            iVar30 = iStack_1cc;
            if (uStack_148._4_4_ == 3) {
              iVar30 = iStack_104;
            }
            iVar35 = -1;
            if (uStack_148._4_4_ == 3) {
              iVar35 = 0;
            }
            iVar12 = -1;
            iVar27 = iStack_1c8;
            if (uStack_148._4_4_ != 1) {
              iVar12 = iVar35;
              iVar27 = iVar30;
            }
            iVar27 = iVar27 * (int)uStack_1a0;
            iVar30 = (int)uStack_c8 * iVar12;
            uStack_110 = CONCAT44(iVar30,(undefined4)uStack_110);
            uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)uStack_1b0 - iVar30);
            uVar11 = iVar12 * (int)uStack_1a0;
            iVar30 = iStack_104;
            do {
              iVar35 = iVar30;
              if (iVar30 != 0) {
                lVar37 = uStack_100 + (long)iVar27 * 2;
                iVar27 = uStack_110._4_4_ + iVar27;
                lVar38 = uStack_100 + (long)iVar34 * 2;
                iVar34 = (int)uStack_c8 + iVar34;
                do {
                  _memcpy(lVar38,lVar37,(long)iVar25);
                  lVar37 = lVar37 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 |
                                    (ulong)uVar11 << 1);
                  lVar38 = lVar38 + (-(uVar36 & 1) & 0xfffffffe00000000 | uVar7 << 1);
                  iVar30 = iVar30 + -1;
                  iVar21 = iStack_108;
                  iVar35 = iStack_104;
                } while (iVar30 != 0);
              }
              iVar30 = iVar35;
              iVar34 = (int)uStack_f0 + iVar34;
              iVar27 = (int)uStack_e8 + iVar27;
              iVar29 = iVar29 + 1;
            } while (iVar29 != iVar21);
            param_4 = uStack_148._4_4_;
            uVar1 = 0xffffffff;
            if (uStack_148._4_4_ == 3) {
              uVar1 = 0;
            }
            piVar9 = &iStack_1d4;
            if (uStack_148._4_4_ != 1) {
              piVar9 = &iStack_1d8;
            }
            uVar2 = 0xffffffff;
            if (uStack_148._4_4_ != 1) {
              uVar2 = uVar1;
            }
            func_0x000109c18a5c(&iStack_bc,uStack_158,uStack_158,iStack_1d0,*piVar9,uVar2,iStack_1a4
                               );
            iVar30 = uStack_d8._4_4_;
          }
          uStack_130 = uStack_130 + 1;
          uStack_140 = uStack_140 + uStack_180;
          uStack_128 = uStack_128 + uStack_188;
          uStack_138 = uStack_138 + uStack_180;
          uStack_100 = uStack_100 + uStack_180;
        } while (uStack_130 != uStack_170);
        lVar19 = *param_1;
        uVar31 = *(undefined4 *)(param_2 + 0x50);
      }
      *(undefined4 *)(lVar19 + 0x3c) = 0;
      *(undefined4 *)(lVar19 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(lVar19 + 0x50) = uVar31;
      return;
    }
  }
  func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109c16e7c);
  (*pcVar10)();
}



/* Entry: 109c15ba8; end: 109c1623b;  */

void FUN_109c15ba8(long *param_1,long param_2,int *param_3,int param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  code *pcVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  long lStack_1b8;
  ulong uStack_1b0;
  int iStack_1a8;
  int iStack_1a4;
  ulong uStack_1a0;
  int iStack_198;
  int iStack_194;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  uint uStack_174;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  float *pfStack_158;
  int iStack_14c;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  long lStack_100;
  long lStack_f8;
  int iStack_f0;
  int iStack_ec;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  uint uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  iStack_194 = *param_3;
  iStack_1a4 = param_3[1];
  iStack_104 = param_3[2];
  iStack_198 = param_3[3];
  uVar13 = *(uint *)(param_2 + 8);
  if ((int)uVar13 < 1) {
    uVar20 = 0xffffffff;
  }
  else {
    uVar20 = *(uint *)(param_2 + 0xc);
    if (uVar13 != 1) {
      iStack_1a8 = *(int *)(param_2 + 0x10);
      if (uVar13 < 3) {
        iVar21 = -1;
      }
      else {
        iVar21 = *(int *)(param_2 + 0x14);
        if (uVar13 != 3) {
          uStack_1a0 = (ulong)*(uint *)(param_2 + 0x18);
          goto LAB_109c15c54;
        }
      }
      uStack_1a0 = 0xffffffff;
      goto LAB_109c15c54;
    }
  }
  iVar21 = -1;
  iStack_1a8 = -1;
  uStack_1a0 = 0xffffffff;
LAB_109c15c54:
  iVar24 = iStack_1a4 + iStack_194 + iStack_1a8;
  iVar25 = iStack_198 + iStack_104 + iVar21;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if ((uint *)(param_2 + 8) != (uint *)&uStack_90) {
    if (uVar13 != 0) {
      _memcpy((ulong)&uStack_90 | 4,param_2 + 0xc,(long)(int)uVar13 << 2);
    }
    uStack_90 = (ulong)uVar13;
  }
  uStack_90 = CONCAT44(uVar20,(uint)uStack_90);
  uStack_88 = CONCAT44(iVar25,iVar24);
  uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_1a0);
  FUN_109c14b04(param_1,&uStack_90,param_5,*(undefined1 *)(param_2 + 0x48));
  if ((((-1 < iStack_194) && (-1 < iStack_1a4)) && (-1 < iStack_104)) &&
     (((-1 < iStack_198 && (0 < iVar24)) && (0 < iVar25)))) {
    lVar18 = *param_1;
    lStack_160 = *(long *)(lVar18 + 0x40);
    if (lStack_160 != 0) {
      iStack_ac = *(int *)(param_2 + 0x50);
      iStack_cc = iStack_1a8;
      iStack_c4 = (int)uStack_1a0;
      iStack_c0 = iStack_194;
      iStack_bc = iStack_1a4;
      iStack_b8 = iStack_104;
      iStack_b4 = iStack_198;
      uStack_a0 = iStack_c4 * iVar21;
      uStack_190 = (ulong)uStack_a0;
      iStack_9c = uStack_a0 * 4;
      uStack_98 = iStack_c4 * iVar25;
      uStack_1b0 = (ulong)uStack_98;
      iStack_94 = iStack_c4 << 2;
      if (0 < (int)uVar20) {
        uStack_128 = 0;
        uVar13 = uStack_a0 * iStack_1a8;
        uVar6 = uStack_98 * iVar24;
        lStack_1b8 = (long)(int)uVar13;
        lStack_168 = (long)(int)uVar6;
        uStack_170 = (ulong)uVar20;
        uStack_148 = (ulong)(uStack_98 * iStack_194);
        uVar20 = iStack_c4 * iStack_104;
        uStack_d8 = (ulong)uVar20;
        uStack_e0 = (ulong)(uint)(iStack_c4 * iStack_198);
        iStack_1bc = iStack_194 + -1;
        iStack_1c0 = iStack_1a8 + -2;
        uVar7 = uStack_98 * iStack_1a4;
        iVar9 = iVar24 - iStack_1a4;
        iStack_1c8 = iStack_104 * 2;
        iStack_1c4 = iStack_1a8 + -1;
        iStack_1cc = iStack_1c8 + -1;
        iStack_1d0 = iVar25 - iStack_198;
        iStack_1d4 = iStack_1d0 + -2;
        iStack_1d8 = iStack_1d0 + -1;
        fVar30 = (float)iStack_ac;
        iStack_ec = uVar20 + uStack_a0;
        lStack_e8 = (long)iStack_9c;
        iStack_f0 = iStack_c4 * (iVar25 - iStack_104);
        lVar28 = (long)iStack_94;
        lStack_f8 = (long)(int)uStack_a0;
        uStack_174 = (uint)(param_4 != 0 || (int)(uStack_98 * iStack_194) < 1);
        uStack_180 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        uStack_188 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
        lVar27 = *(long *)(param_2 + 0x40);
        uVar1 = uStack_148 + 1;
        uStack_118 = (long)(int)uVar20 + 1;
        lStack_130 = lStack_160 +
                     (long)(iStack_c4 * (iStack_104 + iVar25 * (iStack_1a8 + iStack_194))) * 4;
        uStack_120 = (long)(iStack_c4 * iStack_198) + 1;
        uVar19 = -(ulong)(uStack_98 >> 0x1f) & 0xfffffffc00000000 | uStack_1b0 << 2;
        uVar10 = uStack_1a0 & 0xffffffff;
        uVar8 = uStack_1a0 >> 0x1f;
        lStack_138 = lStack_160 + (long)(int)uVar20 * 4;
        lVar18 = lVar27;
        iVar22 = iStack_1a8;
        iStack_14c = param_4;
        iStack_108 = iVar24;
        lStack_100 = lStack_160;
        iStack_c8 = iVar21;
        iStack_b0 = param_4;
        iStack_a8 = iVar24;
        iStack_a4 = iVar25;
        do {
          pfVar17 = (float *)(lStack_160 + uStack_128 * lStack_168 * 4);
          uVar14 = uVar1;
          pfVar16 = pfVar17;
          if ((uStack_174 & 1) == 0) {
            do {
              *pfVar16 = fVar30;
              uVar14 = uVar14 - 1;
              pfVar16 = pfVar16 + 1;
            } while (1 < uVar14);
          }
          uVar13 = (uint)uStack_148;
          if (0 < iVar22) {
            lVar29 = 0;
            iVar21 = 0;
            lVar15 = uStack_128 * lStack_1b8;
            uVar14 = uStack_148;
            do {
              lVar2 = lVar27 + lVar15 * 4 + lVar29 * 4;
              iVar24 = (int)uVar14;
              iVar25 = (int)uStack_d8;
              if (param_4 == 0) {
                if (0 < iVar25) {
                  pfVar16 = pfVar17 + iVar24;
                  uVar14 = uStack_118;
                  do {
                    *pfVar16 = fVar30;
                    uVar14 = uVar14 - 1;
                    pfVar16 = pfVar16 + 1;
                  } while (1 < uVar14);
                }
                _memcpy(pfVar17 + (iVar24 + iVar25),lVar2,lStack_e8);
                iVar24 = iVar24 + iStack_ec;
                if (0 < (int)uStack_e0) {
                  pfVar16 = pfVar17 + iVar24;
                  uVar14 = uStack_120;
                  do {
                    *pfVar16 = fVar30;
                    uVar14 = uVar14 - 1;
                    pfVar16 = pfVar16 + 1;
                  } while (1 < uVar14);
                }
              }
              else {
                _memcpy(pfVar17 + (iVar24 + iVar25),lVar2,lStack_e8);
                iVar24 = iVar24 + iStack_ec;
              }
              uVar13 = iVar24 + (int)uStack_e0;
              uVar14 = (ulong)uVar13;
              lVar29 = lVar29 + lStack_f8;
              iVar21 = iVar21 + 1;
            } while (iVar21 != iVar22);
          }
          lVar29 = lStack_e8;
          if (param_4 == 0) {
            if (0 < (int)uVar7) {
              pfVar17 = pfVar17 + (int)uVar13;
              uVar14 = (ulong)uVar7 + 1;
              do {
                *pfVar17 = fVar30;
                uVar14 = uVar14 - 1;
                pfVar17 = pfVar17 + 1;
              } while (1 < uVar14);
            }
          }
          else {
            iVar21 = iStack_1bc;
            if (param_4 == 3) {
              iVar21 = 0;
            }
            iVar24 = -1;
            if (param_4 == 3) {
              iVar24 = 0;
            }
            iVar25 = -1;
            iVar22 = iStack_194;
            if (param_4 != 1) {
              iVar25 = iVar24;
              iVar22 = iVar21;
            }
            pfStack_158 = pfVar17;
            lStack_140 = lVar18;
            if (iStack_194 != 0) {
              uVar13 = iVar25 * (int)uStack_190;
              lVar18 = lVar18 + (long)(iVar22 * (int)uStack_190) * 4;
              lVar15 = lStack_138;
              iVar21 = iStack_194;
              do {
                _memcpy(lVar15,lVar18,lVar29);
                lVar15 = lVar15 + uVar19;
                lVar18 = lVar18 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)uVar13 << 2);
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            iVar24 = iStack_108;
            lVar18 = lStack_140;
            iVar21 = -1;
            if (param_4 == 3) {
              iVar21 = 0;
            }
            piVar11 = &iStack_1c0;
            if (param_4 != 1) {
              piVar11 = &iStack_1c4;
            }
            iVar25 = -1;
            if (param_4 != 1) {
              iVar25 = iVar21;
            }
            if (iStack_1a4 != 0) {
              uVar13 = *piVar11 * (int)uStack_190;
              uVar20 = iVar25 * (int)uStack_190;
              uVar14 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
              lVar15 = lStack_130;
              iVar21 = iVar9;
              do {
                _memcpy(lVar15,lVar18 + uVar14,lVar29);
                iVar21 = iVar21 + 1;
                lVar15 = lVar15 + uVar19;
                uVar14 = uVar14 + (-(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)uVar20 << 2);
              } while (iVar21 < iVar24);
            }
            iVar21 = 0;
            iVar25 = 0;
            iVar22 = iStack_1cc;
            if (iStack_14c == 3) {
              iVar22 = iStack_104;
            }
            iVar23 = -1;
            if (iStack_14c == 3) {
              iVar23 = 0;
            }
            iVar3 = -1;
            iVar26 = iStack_1c8;
            if (iStack_14c != 1) {
              iVar3 = iVar23;
              iVar26 = iVar22;
            }
            iVar26 = iVar26 * (int)uStack_1a0;
            iStack_10c = (int)uStack_d8 * iVar3;
            iVar22 = (int)uStack_1b0 - iStack_10c;
            uVar13 = iVar3 * (int)uStack_1a0;
            iVar23 = iStack_104;
            do {
              iVar3 = iVar23;
              if (iVar23 != 0) {
                lVar18 = lStack_100 + (long)iVar26 * 4;
                iVar26 = iStack_10c + iVar26;
                lVar29 = lStack_100 + (long)iVar25 * 4;
                iVar25 = (int)uStack_d8 + iVar25;
                do {
                  _memcpy(lVar29,lVar18,lVar28);
                  lVar18 = lVar18 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar13 << 2);
                  lVar29 = lVar29 + (-(uVar8 & 1) & 0xfffffffc00000000 | uVar10 << 2);
                  iVar23 = iVar23 + -1;
                  iVar24 = iStack_108;
                  iVar3 = iStack_104;
                } while (iVar23 != 0);
              }
              iVar23 = iVar3;
              param_4 = iStack_14c;
              iVar25 = iStack_f0 + iVar25;
              iVar26 = iVar22 + iVar26;
              iVar21 = iVar21 + 1;
            } while (iVar21 != iVar24);
            uVar4 = 0xffffffff;
            if (iStack_14c == 3) {
              uVar4 = 0;
            }
            piVar11 = &iStack_1d4;
            if (iStack_14c != 1) {
              piVar11 = &iStack_1d8;
            }
            uVar5 = 0xffffffff;
            if (iStack_14c != 1) {
              uVar5 = uVar4;
            }
            FUN_109c188dc(&iStack_cc,pfStack_158,pfStack_158,iStack_1d0,*piVar11,uVar5,iStack_198);
            lVar18 = lStack_140;
            iVar22 = iStack_1a8;
          }
          uStack_128 = uStack_128 + 1;
          lStack_138 = lStack_138 + uStack_180;
          lVar18 = lVar18 + uStack_188;
          lStack_130 = lStack_130 + uStack_180;
          lStack_100 = lStack_100 + uStack_180;
        } while (uStack_128 != uStack_170);
        lVar18 = *param_1;
        iStack_ac = *(int *)(param_2 + 0x50);
      }
      *(undefined4 *)(lVar18 + 0x3c) = 0;
      *(undefined4 *)(lVar18 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(int *)(lVar18 + 0x50) = iStack_ac;
      return;
    }
  }
  func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109c16228);
  (*pcVar12)();
}



/* Entry: 109c1623c; end: 109c167ef;  */

void FUN_109c1623c(long *param_1,long param_2,int *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  ulong uStack_140;
  ulong uStack_138;
  uint uStack_12c;
  long lStack_128;
  long lStack_120;
  int iStack_114;
  long lStack_110;
  int iStack_108;
  int iStack_104;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  int iStack_e4;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  int iStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  iVar22 = *param_3;
  iVar2 = param_3[1];
  iStack_150 = param_3[2];
  iStack_144 = param_3[3];
  uVar14 = *(uint *)(param_2 + 8);
  if ((int)uVar14 < 1) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = *(uint *)(param_2 + 0xc);
    if (uVar14 != 1) {
      iStack_108 = *(int *)(param_2 + 0x10);
      if (uVar14 < 3) {
        iVar12 = -1;
      }
      else {
        iVar12 = *(int *)(param_2 + 0x14);
        if (uVar14 != 3) {
          iVar17 = *(int *)(param_2 + 0x18);
          goto LAB_109c162d0;
        }
      }
      iVar17 = -1;
      goto LAB_109c162d0;
    }
  }
  iVar12 = -1;
  iStack_108 = -1;
  iVar17 = -1;
LAB_109c162d0:
  iStack_148 = iVar2 + iVar22 + iStack_108;
  iVar1 = iStack_144 + iStack_150 + iVar12;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  iStack_104 = param_4;
  if ((uint *)(param_2 + 8) != (uint *)&uStack_80) {
    if (uVar14 != 0) {
      _memcpy((ulong)&uStack_80 | 4,param_2 + 0xc,(long)(int)uVar14 << 2);
    }
    uStack_80 = (ulong)uVar14;
  }
  iVar8 = iStack_148;
  iVar7 = iStack_150;
  uStack_80 = CONCAT44(uVar15,(uint)uStack_80);
  uStack_78 = CONCAT44(iVar1,iStack_148);
  uStack_70 = CONCAT44(uStack_70._4_4_,iVar17);
  FUN_109c14b04(&uStack_80,param_5,*(undefined1 *)(param_2 + 0x48));
  if ((((-1 < iVar22) && (-1 < iVar2)) && (-1 < iVar7)) &&
     (((-1 < iStack_144 && (0 < iVar8)) && (0 < iVar1)))) {
    lVar11 = *param_1;
    lStack_110 = *(long *)(lVar11 + 0x40);
    if (lStack_110 != 0) {
      uStack_14c = *(undefined4 *)(param_2 + 0x50);
      iStack_bc = iStack_108;
      iStack_a4 = iStack_144;
      iStack_a0 = iStack_104;
      iStack_98 = iVar8;
      uStack_90 = iVar17 * iVar12;
      uStack_140 = (ulong)uStack_90;
      iStack_88 = iVar17 * iVar1;
      if (0 < (int)uVar15) {
        uStack_100 = 0;
        lVar11 = *(long *)(param_2 + 0x40);
        lStack_120 = (long)(int)(uStack_90 * iStack_108);
        lStack_128 = (long)(iStack_88 * iVar8);
        uStack_d0 = (ulong)(uint)(iStack_88 * iVar22);
        iVar4 = iVar17 * iVar7;
        iStack_c8 = iVar17 * iStack_144;
        uVar14 = (uint)(iStack_104 == 0);
        uStack_12c = 0;
        if (0 < iStack_88 * iVar22) {
          uStack_12c = uVar14;
        }
        lStack_d8 = (long)iVar4;
        uStack_c0 = 0;
        if (0 < iVar4) {
          uStack_c0 = uVar14;
        }
        lStack_e0 = (long)iStack_c8;
        lVar25 = (long)(int)uStack_90;
        uStack_c4 = 0;
        if (0 < iStack_c8) {
          uStack_c4 = uVar14;
        }
        iStack_c8 = iVar4 + uStack_90 + iStack_c8;
        iStack_158 = iVar22 + -1;
        iStack_15c = iStack_108 + -2;
        iVar5 = iVar1 - iStack_144;
        iStack_160 = iStack_108 + -1;
        lVar24 = (long)iStack_88;
        iVar3 = iVar7 + iVar22 * iVar1;
        iStack_e4 = iVar17 * (iVar3 + iVar12);
        uStack_138 = (ulong)uVar15;
        lStack_f0 = lStack_110 + iVar4;
        iVar4 = iStack_88 * iVar2;
        lStack_f8 = lStack_110 + iVar17 * (iVar7 + iVar1 * (iStack_108 + iVar22));
        iVar13 = iStack_108;
        iVar20 = iStack_104;
        iStack_154 = iVar2;
        iStack_114 = iVar22;
        iStack_b8 = iVar12;
        iStack_b4 = iVar17;
        iStack_b0 = iVar22;
        iStack_ac = iVar2;
        iStack_a8 = iVar7;
        uStack_9c = uStack_14c;
        iStack_94 = iVar1;
        uStack_8c = uStack_90;
        iStack_84 = iVar17;
        uVar23 = uStack_14c;
        do {
          lVar21 = lStack_110 + uStack_100 * lStack_128;
          if (uStack_12c != 0) {
            _memset(lVar21,uVar23,uStack_d0);
          }
          uVar10 = uStack_d0;
          if (0 < iVar13) {
            iVar22 = 0;
            lVar16 = lVar11;
            do {
              if (uStack_c0 != 0) {
                _memset(lVar21 + ((int)uStack_d0 + iVar22),uVar23,lStack_d8);
              }
              _memcpy(lVar21 + (iVar17 * iVar3 + iVar22),lVar16,lVar25);
              if (uStack_c4 != 0) {
                _memset(lVar21 + (iStack_e4 + iVar22),uVar23,lStack_e0);
              }
              lVar16 = lVar16 + lVar25;
              iVar22 = iVar22 + iStack_c8;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            uVar10 = (ulong)(uint)((int)uStack_d0 + iVar22);
            iVar13 = iStack_108;
          }
          if (iVar20 == 0) {
            if (0 < iVar4) {
              _memset(lVar21 + (int)uVar10,uVar23,iVar4);
            }
          }
          else {
            iVar22 = iStack_158;
            if (iVar20 == 3) {
              iVar22 = 0;
            }
            iVar12 = -1;
            if (iVar20 == 3) {
              iVar12 = 0;
            }
            iVar1 = -1;
            iVar13 = iStack_114;
            if (iVar20 != 1) {
              iVar1 = iVar12;
              iVar13 = iVar22;
            }
            if (iStack_114 != 0) {
              iVar12 = (int)uStack_140;
              lVar16 = (long)(iVar13 * iVar12);
              lVar18 = lStack_f0;
              iVar22 = iStack_114;
              do {
                _memcpy(lVar18,lVar11 + lVar16,lVar25);
                lVar16 = lVar16 + iVar1 * iVar12;
                lVar18 = lVar18 + lVar24;
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
            }
            iVar12 = iStack_148;
            iVar22 = -1;
            if (iStack_104 == 3) {
              iVar22 = 0;
            }
            piVar6 = &iStack_15c;
            if (iStack_104 != 1) {
              piVar6 = &iStack_160;
            }
            iVar1 = -1;
            if (iStack_104 != 1) {
              iVar1 = iVar22;
            }
            if (iStack_154 != 0) {
              iVar13 = (int)uStack_140;
              lVar16 = (long)(*piVar6 * iVar13);
              lVar18 = lStack_f8;
              iVar22 = iVar8 - iVar2;
              do {
                _memcpy(lVar18,lVar11 + lVar16,lVar25);
                lVar16 = lVar16 + iVar1 * iVar13;
                iVar22 = iVar22 + 1;
                lVar18 = lVar18 + lVar24;
              } while (iVar22 < iVar12);
            }
            iVar20 = iStack_104;
            iVar13 = iStack_108;
            uVar23 = uStack_14c;
            iVar22 = iVar5 + -1;
            if (iStack_104 == 3) {
              func_0x000109c1899c(&iStack_bc,lVar21,lVar21,0,iStack_150,0,iStack_150);
              uVar19 = 0;
              iVar13 = iStack_108;
            }
            else {
              uVar19 = 0xffffffff;
              if (iStack_104 == 1) {
                func_0x000109c1899c(&iStack_bc,lVar21,lVar21,0,iVar7 * 2,0xffffffff,iStack_150);
                iVar22 = iVar5 + -2;
              }
              else {
                func_0x000109c1899c(&iStack_bc,lVar21,lVar21,0,iVar7 * 2 + -1,0xffffffff,iStack_150)
                ;
              }
            }
            func_0x000109c1899c(&iStack_bc,lVar21,lVar21,iVar5,iVar22,uVar19,iStack_144);
          }
          uStack_100 = uStack_100 + 1;
          lVar11 = lVar11 + lStack_120;
          lStack_f0 = lStack_f0 + lStack_128;
          lStack_f8 = lStack_f8 + lStack_128;
        } while (uStack_100 != uStack_138);
        lVar11 = *param_1;
        uStack_14c = *(undefined4 *)(param_2 + 0x50);
      }
      *(undefined4 *)(lVar11 + 0x3c) = 0;
      *(undefined4 *)(lVar11 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(lVar11 + 0x50) = uStack_14c;
      return;
    }
  }
  func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109c167dc);
  (*pcVar9)();
}



/* Entry: 109c167f0; end: 109c16e8f;  */

void FUN_109c167f0(long *param_1,long param_2,int *param_3,int param_4,undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 uVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  long lStack_1b8;
  ulong uStack_1b0;
  int iStack_1a8;
  int iStack_1a4;
  ulong uStack_1a0;
  ulong uStack_198;
  int iStack_18c;
  ulong uStack_188;
  ulong uStack_180;
  uint uStack_174;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  undefined2 *puStack_158;
  ulong uStack_150;
  int iStack_144;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  long lStack_100;
  long lStack_f8;
  int iStack_f0;
  int iStack_ec;
  ulong uStack_e8;
  long lStack_e0;
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  iStack_18c = *param_3;
  iStack_1a8 = param_3[1];
  iStack_104 = param_3[2];
  iStack_1a4 = param_3[3];
  uVar15 = *(uint *)(param_2 + 8);
  if ((int)uVar15 < 1) {
    uVar23 = 0xffffffff;
LAB_109c1685c:
    iVar26 = -1;
    iStack_d4 = -1;
  }
  else {
    uVar23 = *(uint *)(param_2 + 0xc);
    if (uVar15 == 1) goto LAB_109c1685c;
    iStack_d4 = *(int *)(param_2 + 0x10);
    if (uVar15 < 3) {
      iVar26 = -1;
    }
    else {
      iVar26 = *(int *)(param_2 + 0x14);
      if (uVar15 != 3) {
        uStack_1a0 = (ulong)*(uint *)(param_2 + 0x18);
        goto LAB_109c16864;
      }
    }
  }
  uStack_1a0 = 0xffffffff;
LAB_109c16864:
  iVar24 = iStack_1a8 + iStack_18c + iStack_d4;
  iVar25 = iStack_1a4 + iStack_104 + iVar26;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar14 = (undefined4)uStack_1a0;
  if ((uint *)(param_2 + 8) != (uint *)&uStack_80) {
    if (uVar15 != 0) {
      _memcpy((ulong)&uStack_80 | 4,param_2 + 0xc,(long)(int)uVar15 << 2);
      uVar14 = (undefined4)uStack_1a0;
    }
    uStack_80 = (ulong)uVar15;
  }
  uStack_80 = CONCAT44(uVar23,(uint)uStack_80);
  uStack_78 = CONCAT44(iVar25,iVar24);
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar14);
  FUN_109c14b04(param_1,&uStack_80,param_5,*(undefined1 *)(param_2 + 0x48));
  if ((((-1 < iStack_18c) && (-1 < iStack_1a8)) && (-1 < iStack_104)) &&
     (((-1 < iStack_1a4 && (0 < iVar24)) && (0 < iVar25)))) {
    lVar16 = *param_1;
    lStack_160 = *(long *)(lVar16 + 0x40);
    if (lStack_160 != 0) {
      uVar14 = *(undefined4 *)(param_2 + 0x50);
      iStack_bc = iStack_d4;
      iStack_b4 = (int)uStack_1a0;
      iStack_b0 = iStack_18c;
      iStack_ac = iStack_1a8;
      iStack_a8 = iStack_104;
      iStack_a4 = iStack_1a4;
      uStack_90 = iStack_b4 * iVar26;
      uStack_198 = (ulong)uStack_90;
      iStack_8c = uStack_90 * 2;
      uStack_88 = iStack_b4 * iVar25;
      uStack_1b0 = (ulong)uStack_88;
      iStack_84 = iStack_b4 << 1;
      if (0 < (int)uVar23) {
        uStack_130 = 0;
        uVar15 = uStack_90 * iStack_d4;
        uVar6 = uStack_88 * iVar24;
        lStack_1b8 = (long)(int)uVar15;
        lStack_168 = (long)(int)uVar6;
        uStack_170 = (ulong)uVar23;
        uStack_150 = (ulong)(uStack_88 * iStack_18c);
        uVar23 = iStack_b4 * iStack_104;
        uStack_c8 = (ulong)uVar23;
        uStack_d0 = (ulong)(uint)(iStack_b4 * iStack_1a4);
        iStack_1bc = iStack_18c + -1;
        uVar7 = uStack_88 * iStack_1a8;
        iStack_1c0 = iStack_d4 + -2;
        iVar10 = iVar24 - iStack_1a8;
        iStack_1c8 = iStack_104 * 2;
        iStack_1c4 = iStack_d4 + -1;
        iStack_1cc = iStack_1c8 + -1;
        iStack_1d0 = iVar25 - iStack_1a4;
        iStack_1d4 = iStack_1d0 + -2;
        iStack_1d8 = iStack_1d0 + -1;
        iStack_ec = uVar23 + uStack_90;
        lStack_e0 = (long)iStack_8c;
        iStack_f0 = iStack_b4 * (iVar25 - iStack_104);
        lVar28 = (long)iStack_84;
        lStack_f8 = (long)(int)uStack_90;
        uStack_174 = (uint)(param_4 != 0 || (int)(uStack_88 * iStack_18c) < 1);
        uStack_180 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
        uStack_188 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
        lVar16 = *(long *)(param_2 + 0x40);
        uVar1 = uStack_150 + 1;
        uStack_118 = (long)(int)uVar23 + 1;
        lStack_138 = lStack_160 +
                     (long)(iStack_b4 * (iStack_104 + iVar25 * (iStack_d4 + iStack_18c))) * 2;
        uStack_120 = (long)(iStack_b4 * iStack_1a4) + 1;
        uVar21 = -(ulong)(uStack_88 >> 0x1f) & 0xfffffffe00000000 | uStack_1b0 << 1;
        uVar11 = uStack_1a0 & 0xffffffff;
        uVar8 = uStack_1a0 >> 0x1f;
        lStack_140 = lStack_160 + (long)(int)uVar23 * 2;
        lStack_128 = lVar16;
        iVar22 = iStack_d4;
        iStack_144 = param_4;
        iStack_108 = iVar24;
        lStack_100 = lStack_160;
        iStack_b8 = iVar26;
        iStack_a0 = param_4;
        uStack_9c = uVar14;
        iStack_98 = iVar24;
        iStack_94 = iVar25;
        do {
          puVar20 = (undefined2 *)(lStack_160 + uStack_130 * lStack_168 * 2);
          uVar9 = (undefined2)uVar14;
          uVar17 = uVar1;
          puVar19 = puVar20;
          if ((uStack_174 & 1) == 0) {
            do {
              *puVar19 = uVar9;
              uVar17 = uVar17 - 1;
              puVar19 = puVar19 + 1;
            } while (1 < uVar17);
          }
          uVar15 = (uint)uStack_150;
          if (0 < iVar22) {
            lVar29 = 0;
            iVar26 = 0;
            lVar18 = uStack_130 * lStack_1b8;
            uVar17 = uStack_150;
            do {
              lVar30 = lVar16 + lVar18 * 2 + lVar29 * 2;
              iVar24 = (int)uVar17;
              iVar25 = (int)uStack_c8;
              if (param_4 == 0) {
                if (0 < iVar25) {
                  puVar19 = puVar20 + iVar24;
                  uVar17 = uStack_118;
                  do {
                    *puVar19 = uVar9;
                    uVar17 = uVar17 - 1;
                    puVar19 = puVar19 + 1;
                  } while (1 < uVar17);
                }
                _memcpy(puVar20 + (iVar24 + iVar25),lVar30,lStack_e0);
                iVar24 = iVar24 + iStack_ec;
                if (0 < (int)uStack_d0) {
                  puVar19 = puVar20 + iVar24;
                  uVar17 = uStack_120;
                  do {
                    *puVar19 = uVar9;
                    uVar17 = uVar17 - 1;
                    puVar19 = puVar19 + 1;
                  } while (1 < uVar17);
                }
              }
              else {
                _memcpy(puVar20 + (iVar24 + iVar25),lVar30,lStack_e0);
                iVar24 = iVar24 + iStack_ec;
              }
              uVar15 = iVar24 + (int)uStack_d0;
              uVar17 = (ulong)uVar15;
              lVar29 = lVar29 + lStack_f8;
              iVar26 = iVar26 + 1;
              iVar22 = iStack_d4;
            } while (iVar26 != iStack_d4);
          }
          lVar29 = lStack_e0;
          if (param_4 == 0) {
            if (0 < (int)uVar7) {
              puVar20 = puVar20 + (int)uVar15;
              uVar17 = (ulong)uVar7 + 1;
              do {
                *puVar20 = uVar9;
                uVar17 = uVar17 - 1;
                puVar20 = puVar20 + 1;
              } while (1 < uVar17);
            }
          }
          else {
            iVar26 = iStack_1bc;
            if (param_4 == 3) {
              iVar26 = 0;
            }
            iVar24 = -1;
            if (param_4 == 3) {
              iVar24 = 0;
            }
            iVar25 = -1;
            iVar22 = iStack_18c;
            if (param_4 != 1) {
              iVar25 = iVar24;
              iVar22 = iVar26;
            }
            puStack_158 = puVar20;
            if (iStack_18c != 0) {
              uVar15 = iVar25 * (int)uStack_198;
              lVar18 = lStack_128 + (long)(iVar22 * (int)uStack_198) * 2;
              lVar30 = lStack_140;
              iVar26 = iStack_18c;
              do {
                _memcpy(lVar30,lVar18,lVar29);
                lVar30 = lVar30 + uVar21;
                lVar18 = lVar18 + (-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 |
                                  (ulong)uVar15 << 1);
                iVar26 = iVar26 + -1;
              } while (iVar26 != 0);
            }
            iVar24 = iStack_108;
            lVar18 = lStack_128;
            iVar26 = -1;
            if (iStack_144 == 3) {
              iVar26 = 0;
            }
            piVar12 = &iStack_1c0;
            if (iStack_144 != 1) {
              piVar12 = &iStack_1c4;
            }
            iVar25 = -1;
            if (iStack_144 != 1) {
              iVar25 = iVar26;
            }
            if (iStack_1a8 != 0) {
              uVar15 = *piVar12 * (int)uStack_198;
              uVar23 = iVar25 * (int)uStack_198;
              uVar17 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
              uStack_e8 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar23 << 1;
              lVar30 = lStack_138;
              iVar26 = iVar10;
              do {
                _memcpy(lVar30,lVar18 + uVar17,lVar29);
                iVar26 = iVar26 + 1;
                lVar30 = lVar30 + uVar21;
                uVar17 = uVar17 + uStack_e8;
              } while (iVar26 < iVar24);
            }
            iVar26 = 0;
            iVar25 = 0;
            iVar22 = iStack_1cc;
            if (iStack_144 == 3) {
              iVar22 = iStack_104;
            }
            iVar2 = -1;
            if (iStack_144 == 3) {
              iVar2 = 0;
            }
            iVar3 = -1;
            iVar27 = iStack_1c8;
            if (iStack_144 != 1) {
              iVar3 = iVar2;
              iVar27 = iVar22;
            }
            iVar27 = iVar27 * (int)uStack_1a0;
            iStack_10c = (int)uStack_c8 * iVar3;
            uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)uStack_1b0 - iStack_10c);
            uVar15 = iVar3 * (int)uStack_1a0;
            iVar22 = iStack_104;
            do {
              iVar2 = iVar22;
              if (iVar22 != 0) {
                lVar29 = lStack_100 + (long)iVar27 * 2;
                iVar27 = iStack_10c + iVar27;
                lVar18 = lStack_100 + (long)iVar25 * 2;
                iVar25 = (int)uStack_c8 + iVar25;
                do {
                  _memcpy(lVar18,lVar29,lVar28);
                  lVar29 = lVar29 + (-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 |
                                    (ulong)uVar15 << 1);
                  lVar18 = lVar18 + (-(uVar8 & 1) & 0xfffffffe00000000 | uVar11 << 1);
                  iVar22 = iVar22 + -1;
                  iVar24 = iStack_108;
                  iVar2 = iStack_104;
                } while (iVar22 != 0);
              }
              iVar22 = iVar2;
              param_4 = iStack_144;
              iVar25 = iStack_f0 + iVar25;
              iVar27 = (int)uStack_e8 + iVar27;
              iVar26 = iVar26 + 1;
            } while (iVar26 != iVar24);
            uVar4 = 0xffffffff;
            if (iStack_144 == 3) {
              uVar4 = 0;
            }
            piVar12 = &iStack_1d4;
            if (iStack_144 != 1) {
              piVar12 = &iStack_1d8;
            }
            uVar5 = 0xffffffff;
            if (iStack_144 != 1) {
              uVar5 = uVar4;
            }
            func_0x000109c18a5c(&iStack_bc,puStack_158,puStack_158,iStack_1d0,*piVar12,uVar5,
                                iStack_1a4);
            iVar22 = iStack_d4;
          }
          uStack_130 = uStack_130 + 1;
          lStack_140 = lStack_140 + uStack_180;
          lStack_128 = lStack_128 + uStack_188;
          lStack_138 = lStack_138 + uStack_180;
          lStack_100 = lStack_100 + uStack_180;
        } while (uStack_130 != uStack_170);
        lVar16 = *param_1;
        uVar14 = *(undefined4 *)(param_2 + 0x50);
      }
      *(undefined4 *)(lVar16 + 0x3c) = 0;
      *(undefined4 *)(lVar16 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(lVar16 + 0x50) = uVar14;
      return;
    }
  }
  func_0x000105688514(&UNK_10f5a36e5);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109c16e7c);
  (*pcVar13)();
}



/* Entry: 109c16e90; end: 109c17273;  */

void FUN_109c16e90(long *param_1,long param_2,uint *param_3,uint *param_4,int *param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long *extraout_x8;
  int iVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  ulong uVar30;
  undefined4 *puVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  undefined4 *puVar35;
  ulong uVar36;
  long *plVar37;
  undefined4 *puVar38;
  undefined4 uStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  long *plStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long lStack_110;
  ulong *puStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  long *plStack_e8;
  undefined1 auStack_d9 [9];
  ulong *puStack_d0;
  long *plStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong auStack_98 [2];
  ulong uStack_88;
  ulong auStack_80 [2];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(uint *)(param_2 + 8);
  if ((int)uVar6 < 1) {
    uVar26 = 0xffffffff;
LAB_109c16ef0:
    uVar27 = 0xffffffff;
    uVar28 = 0xffffffff;
  }
  else {
    uVar26 = (ulong)*(uint *)(param_2 + 0xc);
    if (uVar6 == 1) goto LAB_109c16ef0;
    uVar28 = (ulong)*(uint *)(param_2 + 0x10);
    if (uVar6 < 3) {
      uVar27 = 0xffffffff;
    }
    else {
      uVar27 = (ulong)*(uint *)(param_2 + 0x14);
      if (uVar6 != 3) {
        uVar30 = (ulong)*(uint *)(param_2 + 0x18);
        goto LAB_109c16ef8;
      }
    }
  }
  uVar30 = 0xffffffff;
LAB_109c16ef8:
  uVar7 = *param_3;
  puVar25 = (ulong *)(ulong)uVar7;
  uVar8 = param_3[4];
  uVar32 = (ulong)uVar8;
  uVar9 = *param_4;
  uVar34 = (ulong)uVar9;
  uVar6 = param_4[4];
  uVar36 = (ulong)uVar6;
  piVar18 = (int *)0x1;
  piVar19 = param_5;
  FUN_109c14b04(param_1);
  lVar21 = *param_1;
  plVar37 = param_1;
  if (0 < (int)uVar26) {
    if ((int)uVar9 < 4) {
      uVar6 = 0xffffffff;
    }
    iVar22 = (int)uVar28 * (int)uVar27;
    uVar9 = iVar22 * (int)uVar30;
    uVar27 = (ulong)iVar22;
    plVar37 = (long *)(param_2 + 0x40);
    if ((int)uVar7 < 4) {
      uVar8 = 0xffffffff;
    }
    param_2 = (long)(int)uVar30;
    uVar28 = (ulong)(int)uVar6;
    uVar30 = *plVar37 + (long)(int)uVar8 * 4;
    uVar32 = -(ulong)(uVar6 * iVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar6 * iVar22) << 2;
    uVar34 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
    uVar36 = *(ulong *)(lVar21 + 0x40);
    plVar37 = (long *)auStack_d9;
    puVar25 = &uStack_b8;
    plStack_e8 = param_1;
    do {
      auStack_d9._1_8_ = auStack_98;
      puStack_d0 = auStack_80;
      param_4 = (uint *)(auStack_d9 + 1);
      plStack_c8 = plVar37;
      puStack_c0 = puVar25;
      uStack_b8 = uVar36;
      uStack_b0 = uVar28;
      uStack_a8 = uVar27;
      auStack_98[0] = uVar36;
      uStack_88 = uVar28;
      auStack_80[0] = uVar30;
      lStack_70 = param_2;
      FUN_109c18744();
      uVar36 = uVar36 + uVar32;
      uVar30 = uVar30 + uVar34;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
    lVar21 = *plStack_e8;
    uVar26 = 0;
  }
  *(undefined4 *)(lVar21 + 0x3c) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_f8 = 0x109c17024;
  iVar16 = *piVar18 - *param_5;
  iVar22 = -iVar16;
  if (-1 < iVar16) {
    iVar22 = iVar16;
  }
  iVar1 = *piVar19;
  iVar3 = piVar19[1];
  iVar16 = -iVar1;
  if (-1 < iVar1) {
    iVar16 = iVar1;
  }
  iStack_164 = 0;
  if (iVar16 != 0) {
    iStack_164 = (iVar16 + iVar22 + -1) / iVar16;
  }
  iVar16 = piVar18[1] - param_5[1];
  iVar22 = -iVar16;
  if (-1 < iVar16) {
    iVar22 = iVar16;
  }
  iVar16 = -iVar3;
  if (-1 < iVar3) {
    iVar16 = iVar3;
  }
  iStack_160 = 0;
  if (iVar16 != 0) {
    iStack_160 = (iVar16 + iVar22 + -1) / iVar16;
  }
  iVar16 = piVar18[2] - param_5[2];
  iVar22 = -iVar16;
  if (-1 < iVar16) {
    iVar22 = iVar16;
  }
  iVar1 = piVar19[2];
  iVar3 = piVar19[3];
  iVar16 = -iVar1;
  if (-1 < iVar1) {
    iVar16 = iVar1;
  }
  iStack_15c = 0;
  if (iVar16 != 0) {
    iStack_15c = (iVar16 + iVar22 + -1) / iVar16;
  }
  iVar16 = piVar18[3] - param_5[3];
  iVar22 = -iVar16;
  if (-1 < iVar16) {
    iVar22 = iVar16;
  }
  iVar16 = -iVar3;
  if (-1 < iVar3) {
    iVar16 = iVar3;
  }
  uStack_168 = 4;
  iStack_158 = 0;
  if (iVar16 != 0) {
    iStack_158 = (iVar16 + iVar22 + -1) / iVar16;
  }
  uStack_154 = 0;
  plStack_150 = plVar37;
  uStack_148 = uVar36;
  uStack_140 = uVar34;
  uStack_138 = uVar32;
  uStack_130 = uVar30;
  uStack_128 = uVar28;
  uStack_120 = uVar27;
  uStack_118 = uVar26;
  lStack_110 = param_2;
  puStack_108 = puVar25;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_109c14b04(&uStack_168,param_6,1);
  iVar10 = *piVar18;
  iVar16 = *param_5;
  iVar3 = param_5[1];
  iVar1 = *piVar19;
  iVar4 = piVar19[1];
  iVar22 = iVar16;
LAB_109c1711c:
  if (iVar1 < 1) {
    if (iVar22 <= iVar10) goto LAB_109c17244;
  }
  else if (iVar10 <= iVar22) {
LAB_109c17244:
    *(uint *)(*extraout_x8 + 0x3c) = param_4[0xf];
    return;
  }
  iVar11 = piVar18[1];
  lVar23 = *(long *)(param_4 + 0x10);
  uVar6 = param_4[5];
  uVar8 = param_4[6];
  lVar24 = *extraout_x8;
  uVar7 = param_4[2];
  iVar2 = piVar19[2];
  iVar5 = piVar19[3];
  iVar17 = param_5[3] + uVar8 * (param_5[2] + uVar6 * (iVar3 + param_4[4] * iVar22));
  iVar14 = 0;
  lVar21 = (long)iVar3;
  if (iVar1 != 0) {
    iVar14 = (iVar22 - iVar16) / iVar1;
  }
  do {
    if (iVar4 < 1) {
      if (lVar21 <= iVar11) break;
    }
    else if (iVar11 <= lVar21) break;
    iVar12 = *(int *)(lVar24 + 0x14);
    uVar9 = param_4[6];
    if ((int)uVar7 < 4) {
      uVar9 = 0xffffffff;
    }
    if (0 < iVar12) {
      lVar20 = 0;
      puVar29 = (undefined4 *)(lVar23 + (long)iVar17 * 4);
      iVar13 = *(int *)(lVar24 + 0x18);
      iVar15 = 0;
      if (iVar4 != 0) {
        iVar15 = ((int)lVar21 - iVar3) / iVar4;
      }
      puVar35 = (undefined4 *)
                (*(long *)(lVar24 + 0x40) +
                (long)(iVar12 * iVar13 * (iVar15 + *(int *)(lVar24 + 0x10) * iVar14)) * 4);
      do {
        puVar31 = puVar29;
        lVar33 = (long)iVar13;
        puVar38 = puVar35;
        if (0 < iVar13) {
          do {
            *puVar38 = *puVar31;
            puVar31 = puVar31 + iVar5;
            lVar33 = lVar33 + -1;
            puVar38 = puVar38 + 1;
          } while (lVar33 != 0);
        }
        lVar20 = lVar20 + 1;
        puVar29 = puVar29 + (int)(uVar9 * iVar2);
        puVar35 = puVar35 + iVar13;
      } while (lVar20 != iVar12);
    }
    iVar17 = iVar17 + iVar4 * uVar6 * uVar8;
    lVar21 = lVar21 + iVar4;
  } while( true );
  iVar22 = iVar22 + iVar1;
  goto LAB_109c1711c;
}



/* Entry: 109c17274; end: 109c17a87;  */

void FUN_109c17274(long *param_1,long param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,undefined4 param_11,
                  undefined8 param_12)

{
  code **ppcVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *extraout_x8;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iStack_220;
  int iStack_218;
  int iStack_208;
  uint uStack_1f8;
  int iStack_1f4;
  undefined8 uStack_1c8;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  char cStack_128;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  
  uVar16 = CONCAT44(param_9,param_5);
  bVar3 = *(byte *)(param_2 + 0x48);
  iStack_d8 = param_8;
  iStack_d4 = param_4;
  iStack_98 = param_8;
  iStack_94 = param_4;
  if (bVar3 < 3) {
    if (bVar3 == 1) {
      uVar2 = *(uint *)(param_2 + 8);
      if ((int)uVar2 < 1) {
        iVar23 = -1;
      }
      else {
        iVar23 = *(int *)(param_2 + 0xc);
        if (3 < uVar2) {
          iVar19 = *(int *)(param_2 + 0x18);
          goto LAB_109c1776c;
        }
      }
      iVar19 = -1;
LAB_109c1776c:
      iVar25 = *(int *)(param_2 + 0x14);
      pcStack_e8 = FUN_109c18b1c;
      ppuStack_e0 = &PTR_FUN_110b2bf98;
      iStack_f4 = param_4 * param_3 * iVar19;
      iStack_cc = param_8 * (param_4 + -1) + 1;
      iStack_f8 = param_10 * param_9;
      iStack_c8 = iVar19 << 2;
      iStack_c4 = iVar19 * param_8;
      pcStack_a8 = (code *)0x109c18bb0;
      ppuStack_a0 = &PTR_DAT_110b2bfb0;
      uVar6 = iVar19 * param_4;
      if ((int)uVar2 < 3) {
        iVar25 = -1;
      }
      iStack_8c = uVar6 * 4;
      lVar22 = 0x40;
      ppcVar1 = &pcStack_a8;
      if (param_8 != 1) {
        lVar22 = 0;
        ppcVar1 = &pcStack_e8;
      }
      uStack_f0 = 0;
      uStack_100 = 3;
      iStack_fc = iVar23;
      iStack_d0 = iVar19;
      iStack_90 = iVar19;
      FUN_109c14b04(param_1,&uStack_100,param_12,1);
      lVar14 = *param_1;
      if (0 < iVar23) {
        iStack_120 = 0;
        iVar13 = param_7 * (param_3 + -1);
        uVar2 = iVar19 * param_7 * iVar25;
        lVar17 = *(long *)(param_2 + 0x40);
        lVar14 = *(long *)(lVar14 + 0x40);
        do {
          if (0 < param_9) {
            iStack_11c = 0;
            iVar19 = 0;
            do {
              if (0 < param_10) {
                iVar20 = 0;
                iVar25 = 0;
                do {
                  if (-1 < iVar13) {
                    iVar27 = 0;
                    lVar15 = lVar17 + (long)(*(int *)(param_2 + 0x18) *
                                            (iVar20 + *(int *)(param_2 + 0x14) *
                                                      (iStack_11c +
                                                      iStack_120 * *(int *)(param_2 + 0x10)))) * 4;
                    do {
                      (**(code **)((long)&pcStack_e8 + lVar22))(lVar15,lVar14,ppcVar1);
                      iVar27 = iVar27 + param_7;
                      lVar15 = lVar15 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar2 << 2);
                      lVar14 = lVar14 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar6 << 2);
                    } while (iVar27 <= iVar13);
                  }
                  iVar25 = iVar25 + 1;
                  iVar20 = iVar20 + param_6;
                } while (iVar25 != param_10);
              }
              iVar19 = iVar19 + 1;
              iStack_11c = iStack_11c + param_5;
            } while (iVar19 != param_9);
          }
          iStack_120 = iStack_120 + 1;
        } while (iStack_120 != iVar23);
        lVar14 = *param_1;
      }
      *(undefined4 *)(lVar14 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(param_2 + 0x50);
      lVar22 = 0x48;
      do {
        (*(code *)**(undefined8 **)((long)&pcStack_e8 + lVar22))((long)&pcStack_e8 + lVar22);
        lVar22 = lVar22 + -0x40;
      } while (lVar22 != -0x38);
      return;
    }
    if (bVar3 != 2) {
LAB_109c17990:
      lVar14 = 0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      lVar22 = lVar14;
      puVar9 = PTR___ZTISt13runtime_error_110346a40;
      puVar10 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
      ___cxa_throw();
      iVar23 = (int)puVar9;
      iVar19 = (int)puVar10;
      ___cxa_free_exception(lVar14);
      __Unwind_Resume();
      if (*(int *)(lVar22 + 0x3c) == 0) {
        if ((int)*(uint *)(lVar22 + 8) < 1) {
          iVar25 = -1;
        }
        else {
          iVar25 = *(int *)(lVar22 + 0xc);
          if (2 < *(uint *)(lVar22 + 8)) {
            iVar13 = *(int *)(lVar22 + 0x14);
            goto LAB_109c17b38;
          }
        }
        iVar13 = -1;
LAB_109c17b38:
        uStack_1c8 = (long *)CONCAT44(iVar25,4);
        iStack_1c0 = iStack_13c;
        iVar20 = 0;
        if (iVar19 * iVar23 != 0) {
          iVar20 = iVar13 / (iVar19 * iVar23);
        }
        iStack_1b4 = 0;
        iStack_1b8 = iVar20;
        FUN_109c14b04(extraout_x8,&uStack_1c8,uVar16,1);
        lVar14 = *extraout_x8;
        uVar16 = *(undefined8 *)(lVar14 + 0x40);
        bVar3 = *(byte *)(lVar14 + 0x48);
        uVar2 = *(uint *)(lVar14 + 8) & ((int)*(uint *)(lVar14 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar2) {
          uVar2 = 5;
        }
        uStack_1b0 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar14 + 0xc,uVar2);
        if (bVar3 < 9) {
          uStack_1ac = *(undefined4 *)(&UNK_10e039a00 + (ulong)bVar3 * 4);
        }
        else {
          uStack_1ac = 4;
        }
        iVar13 = 0xf57499d;
        FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_1b0,2);
        _bzero(uVar16,(long)iVar13);
        if (cStack_128 == '\0') {
          iStack_218 = 0;
          iVar13 = 0;
        }
        else {
          iVar13 = (iVar23 + (param_9 + -1) * param_5) - iStack_13c;
          iStack_218 = (iVar19 + (iStack_140 + -1) * param_6) - iStack_138;
        }
        if (0 < iVar25) {
          iVar27 = 0;
          lVar17 = *(long *)(*extraout_x8 + 0x40);
          lVar14 = *(long *)(lVar22 + 0x40);
          do {
            if (0 < param_9) {
              iStack_220 = 0;
              iVar26 = 0;
              iStack_208 = iVar13 - param_7;
              do {
                if (0 < iStack_140) {
                  iStack_1f4 = 0;
                  iVar21 = iStack_220;
                  uStack_1f8 = iStack_218 - param_8;
                  do {
                    if (0 < iVar23) {
                      iVar28 = -iVar20 * (uStack_1f8 & (int)uStack_1f8 >> 0x1f);
                      uVar2 = (iStack_1f4 * param_6 - param_8) + iStack_218;
                      iVar8 = uVar2 + iVar19;
                      uVar6 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
                      iVar29 = iVar8;
                      if (iStack_138 <= iVar8) {
                        iVar29 = iStack_138;
                      }
                      uVar7 = iVar29 - uVar6;
                      iVar24 = iVar23;
                      iVar29 = iStack_208;
                      do {
                        if ((((-1 < iVar29) && (iVar29 < iStack_13c)) && ((int)uVar2 < iStack_138))
                           && (-1 < iVar8)) {
                          lVar15 = *extraout_x8;
                          lVar15 = lVar17 + (long)(int)((uVar6 + (iVar29 + iVar27 * *(int *)(lVar15 
                                                  + 0x10)) * *(int *)(lVar15 + 0x14)) *
                                                  *(int *)(lVar15 + 0x18)) * 4;
                          _vDSP_vadd(lVar14 + (long)(iVar28 + *(int *)(lVar22 + 0x14) *
                                                              (iVar21 + iVar27 * *(int *)(lVar22 + 
                                                  0x10))) * 4,1,lVar15,1,lVar15,1,
                                     (long)(int)((uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) *
                                                iVar20));
                        }
                        iVar28 = iVar28 + iVar20 * iVar19;
                        iVar29 = iVar29 + 1;
                        iVar24 = iVar24 + -1;
                      } while (iVar24 != 0);
                    }
                    iStack_1f4 = iStack_1f4 + 1;
                    iVar21 = iVar21 + 1;
                    uStack_1f8 = uStack_1f8 + param_6;
                  } while (iStack_1f4 != iStack_140);
                }
                iVar26 = iVar26 + 1;
                iStack_220 = iStack_220 + iStack_140;
                iStack_208 = iStack_208 + param_5;
              } while (iVar26 != param_9);
            }
            iVar27 = iVar27 + 1;
          } while (iVar27 != iVar25);
        }
        return;
      }
      if (*(int *)(lVar22 + 8) < 1) {
        iVar25 = -1;
      }
      else {
        iVar25 = *(int *)(lVar22 + 0xc);
        if (*(int *)(lVar22 + 8) != 1) {
          iVar13 = *(int *)(lVar22 + 0x10);
          goto LAB_109c17ea0;
        }
      }
      iVar13 = -1;
LAB_109c17ea0:
      iStack_1c0 = 4;
      iVar20 = 0;
      if (iVar19 * iVar23 != 0) {
        iVar20 = iVar13 / (iVar19 * iVar23);
      }
      iStack_1b4 = iStack_13c;
      uStack_1ac = 0;
      uStack_1c8 = extraout_x8;
      iStack_1bc = iVar25;
      iStack_1b8 = iVar20;
      FUN_109c14b04(extraout_x8,&iStack_1c0,uVar16,1);
      lVar14 = *extraout_x8;
      uVar16 = *(undefined8 *)(lVar14 + 0x40);
      bVar3 = *(byte *)(lVar14 + 0x48);
      uVar2 = *(uint *)(lVar14 + 8) & ((int)*(uint *)(lVar14 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      uStack_1a8 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar14 + 0xc,uVar2);
      if (bVar3 < 9) {
        uStack_1a4 = *(undefined4 *)(&UNK_10e039a00 + (ulong)bVar3 * 4);
      }
      else {
        uStack_1a4 = 4;
      }
      iVar13 = 0xf57499d;
      FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_1a8,2);
      _bzero(uVar16,(long)iVar13);
      if (0 < iVar25) {
        iVar13 = 0;
        lVar14 = *uStack_1c8;
        lVar17 = *(long *)(lVar14 + 0x40);
        pfVar18 = *(float **)(lVar22 + 0x40);
        do {
          if (0 < iVar20) {
            iVar27 = 0;
            do {
              if (0 < iVar23) {
                iVar26 = 0;
                iVar21 = -param_7;
                do {
                  if (0 < iVar19) {
                    iVar8 = 0;
                    iVar28 = -param_8;
                    do {
                      if (0 < param_9) {
                        iVar29 = 0;
                        iVar24 = iVar21;
                        do {
                          iVar4 = (iVar26 - param_7) + iVar29 * param_5;
                          iVar12 = iStack_140;
                          iVar11 = iVar28;
                          if (0 < iStack_140) {
                            do {
                              if (((-1 < iVar4) && (iVar4 < iStack_13c)) &&
                                 ((-1 < iVar11 && (iVar11 < iStack_138)))) {
                                iVar5 = iVar11 + *(int *)(lVar14 + 0x18) *
                                                 (iVar24 + *(int *)(lVar14 + 0x14) *
                                                           (iVar27 + iVar13 * *(int *)(lVar14 + 0x10
                                                                                      )));
                                *(float *)(lVar17 + (long)iVar5 * 4) =
                                     *pfVar18 + *(float *)(lVar17 + (long)iVar5 * 4);
                              }
                              pfVar18 = pfVar18 + 1;
                              iVar11 = iVar11 + param_6;
                              iVar12 = iVar12 + -1;
                            } while (iVar12 != 0);
                          }
                          iVar29 = iVar29 + 1;
                          iVar24 = iVar24 + param_5;
                        } while (iVar29 != param_9);
                      }
                      iVar8 = iVar8 + 1;
                      iVar28 = iVar28 + 1;
                    } while (iVar8 != iVar19);
                  }
                  iVar26 = iVar26 + 1;
                  iVar21 = iVar21 + 1;
                } while (iVar26 != iVar23);
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != iVar20);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar25);
      }
      return;
    }
LAB_109c17310:
    uVar2 = *(uint *)(param_2 + 8);
    if ((int)uVar2 < 1) {
      iVar23 = -1;
    }
    else {
      iVar23 = *(int *)(param_2 + 0xc);
      if (3 < uVar2) {
        iVar19 = *(int *)(param_2 + 0x18);
        goto LAB_109c17568;
      }
    }
    iVar19 = -1;
LAB_109c17568:
    iVar25 = *(int *)(param_2 + 0x14);
    pcStack_e8 = FUN_109c18ca4;
    ppuStack_e0 = &PTR_FUN_110b2bff8;
    iStack_f4 = param_4 * param_3 * iVar19;
    iStack_cc = param_8 * (param_4 + -1) + 1;
    iStack_c4 = iVar19 * param_8;
    iStack_f8 = param_10 * param_9;
    pcStack_a8 = (code *)0x109c18d38;
    ppuStack_a0 = &PTR_DAT_110b2c010;
    if ((int)uVar2 < 3) {
      iVar25 = -1;
    }
    lVar22 = 0x40;
    ppcVar1 = &pcStack_a8;
    if (param_8 != 1) {
      lVar22 = 0;
      ppcVar1 = &pcStack_e8;
    }
    uStack_f0 = 0;
    uStack_100 = 3;
    iStack_fc = iVar23;
    iStack_d0 = iVar19;
    iStack_c8 = iVar19;
    iStack_90 = iVar19;
    iStack_8c = iVar19 * param_4;
    FUN_109c14b04(param_1,&uStack_100,param_12,bVar3);
    lVar14 = *param_1;
    if (0 < iVar23) {
      iStack_120 = 0;
      iVar13 = param_7 * (param_3 + -1);
      lVar17 = *(long *)(param_2 + 0x40);
      lVar14 = *(long *)(lVar14 + 0x40);
      do {
        if (0 < param_9) {
          iVar20 = 0;
          do {
            if (0 < param_10) {
              iVar27 = 0;
              do {
                if (-1 < iVar13) {
                  iVar26 = 0;
                  lVar15 = lVar17 + (iVar27 * param_6 +
                                    (iVar20 * param_5 + *(int *)(param_2 + 0x10) * iStack_120) *
                                    *(int *)(param_2 + 0x14)) * *(int *)(param_2 + 0x18);
                  do {
                    (**(code **)((long)&pcStack_e8 + lVar22))(lVar15,lVar14,ppcVar1);
                    lVar15 = lVar15 + iVar19 * param_7 * iVar25;
                    lVar14 = lVar14 + iVar19 * param_4;
                    iVar26 = iVar26 + param_7;
                  } while (iVar26 <= iVar13);
                }
                iVar27 = iVar27 + 1;
              } while (iVar27 != param_10);
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 != param_9);
        }
        iStack_120 = iStack_120 + 1;
      } while (iStack_120 != iVar23);
      lVar14 = *param_1;
    }
    *(undefined4 *)(lVar14 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    lVar22 = 0x48;
    do {
      (*(code *)**(undefined8 **)((long)&pcStack_e8 + lVar22))((long)&pcStack_e8 + lVar22);
      lVar22 = lVar22 + -0x40;
    } while (lVar22 != -0x38);
    return;
  }
  if (bVar3 != 3) {
    if (bVar3 == 6) goto LAB_109c17310;
    if (bVar3 != 7) goto LAB_109c17990;
  }
  uVar2 = *(uint *)(param_2 + 8);
  if ((int)uVar2 < 1) {
    iVar23 = -1;
  }
  else {
    iVar23 = *(int *)(param_2 + 0xc);
    if (3 < uVar2) {
      iVar19 = *(int *)(param_2 + 0x18);
      goto LAB_109c17358;
    }
  }
  iVar19 = -1;
LAB_109c17358:
  iVar25 = *(int *)(param_2 + 0x14);
  pcStack_e8 = FUN_109c18be0;
  ppuStack_e0 = &PTR_FUN_110b2bfc8;
  iStack_f4 = param_4 * param_3 * iVar19;
  iStack_cc = param_8 * (param_4 + -1) + 1;
  iStack_f8 = param_10 * param_9;
  iStack_c8 = iVar19 << 1;
  iStack_c4 = iVar19 * param_8;
  pcStack_a8 = (code *)0x109c18c74;
  ppuStack_a0 = &PTR_DAT_110b2bfe0;
  uVar6 = iVar19 * param_4;
  if ((int)uVar2 < 3) {
    iVar25 = -1;
  }
  iStack_8c = uVar6 * 2;
  lVar22 = 0x40;
  ppcVar1 = &pcStack_a8;
  if (param_8 != 1) {
    lVar22 = 0;
    ppcVar1 = &pcStack_e8;
  }
  uStack_f0 = 0;
  uStack_100 = 3;
  iStack_fc = iVar23;
  iStack_d0 = iVar19;
  iStack_90 = iVar19;
  FUN_109c14b04(param_1,&uStack_100,param_12,bVar3);
  lVar14 = *param_1;
  if (0 < iVar23) {
    iStack_120 = 0;
    iVar13 = param_7 * (param_3 + -1);
    uVar2 = iVar19 * param_7 * iVar25;
    lVar17 = *(long *)(param_2 + 0x40);
    lVar14 = *(long *)(lVar14 + 0x40);
    do {
      if (0 < param_9) {
        iStack_11c = 0;
        iVar19 = 0;
        do {
          if (0 < param_10) {
            iVar20 = 0;
            iVar25 = 0;
            do {
              if (-1 < iVar13) {
                iVar27 = 0;
                lVar15 = lVar17 + (long)(*(int *)(param_2 + 0x18) *
                                        (iVar20 + *(int *)(param_2 + 0x14) *
                                                  (iStack_11c +
                                                  iStack_120 * *(int *)(param_2 + 0x10)))) * 2;
                do {
                  (**(code **)((long)&pcStack_e8 + lVar22))(lVar15,lVar14,ppcVar1);
                  iVar27 = iVar27 + param_7;
                  lVar15 = lVar15 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 |
                                    (ulong)uVar2 << 1);
                  lVar14 = lVar14 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 |
                                    (ulong)uVar6 << 1);
                } while (iVar27 <= iVar13);
              }
              iVar25 = iVar25 + 1;
              iVar20 = iVar20 + param_6;
            } while (iVar25 != param_10);
          }
          iVar19 = iVar19 + 1;
          iStack_11c = iStack_11c + param_5;
        } while (iVar19 != param_9);
      }
      iStack_120 = iStack_120 + 1;
    } while (iStack_120 != iVar23);
    lVar14 = *param_1;
  }
  *(undefined4 *)(lVar14 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  lVar22 = 0x48;
  do {
    (*(code *)**(undefined8 **)((long)&pcStack_e8 + lVar22))((long)&pcStack_e8 + lVar22);
    lVar22 = lVar22 + -0x40;
  } while (lVar22 != -0x38);
  return;
}



/* Entry: 109c17a88; end: 109c17ac3;  */

void FUN_109c17a88(long *param_1,long param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                  undefined4 param_13,undefined8 param_14,char param_15)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iStack_e0;
  int iStack_d8;
  int iStack_c8;
  uint uStack_b8;
  int iStack_b4;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(int *)(param_2 + 0x3c) == 0) {
    if ((int)*(uint *)(param_2 + 8) < 1) {
      iVar20 = -1;
    }
    else {
      iVar20 = *(int *)(param_2 + 0xc);
      if (2 < *(uint *)(param_2 + 8)) {
        iVar11 = *(int *)(param_2 + 0x14);
        goto LAB_109c17b38;
      }
    }
    iVar11 = -1;
LAB_109c17b38:
    uStack_88 = (long *)CONCAT44(iVar20,4);
    iStack_80 = param_11;
    iStack_7c = param_12;
    iVar6 = 0;
    if (param_4 * param_3 != 0) {
      iVar6 = iVar11 / (param_4 * param_3);
    }
    iStack_74 = 0;
    iStack_78 = iVar6;
    FUN_109c14b04(param_1,&uStack_88,param_14,1);
    lVar13 = *param_1;
    uVar15 = *(undefined8 *)(lVar13 + 0x40);
    bVar3 = *(byte *)(lVar13 + 0x48);
    uVar2 = *(uint *)(lVar13 + 8) & ((int)*(uint *)(lVar13 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    iStack_70 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar2);
    if (bVar3 < 9) {
      uStack_6c = *(undefined4 *)(&UNK_10e039a00 + (ulong)bVar3 * 4);
    }
    else {
      uStack_6c = 4;
    }
    iVar11 = 0xf57499d;
    FUN_109c60fbc(&UNK_10f57499d,0xc,&iStack_70,2);
    _bzero(uVar15,(long)iVar11);
    if (param_15 == '\0') {
      iStack_d8 = 0;
      iVar11 = 0;
    }
    else {
      iVar11 = (param_3 + (param_9 + -1) * param_5) - param_11;
      iStack_d8 = (param_4 + (param_10 + -1) * param_6) - param_12;
    }
    if (0 < iVar20) {
      iVar19 = 0;
      lVar16 = *(long *)(*param_1 + 0x40);
      lVar13 = *(long *)(param_2 + 0x40);
      do {
        if (0 < param_9) {
          iStack_e0 = 0;
          iVar14 = 0;
          iStack_c8 = iVar11 - param_7;
          do {
            if (0 < param_10) {
              iStack_b4 = 0;
              iVar18 = iStack_e0;
              uStack_b8 = iStack_d8 - param_8;
              do {
                if (0 < param_3) {
                  iVar22 = -iVar6 * (uStack_b8 & (int)uStack_b8 >> 0x1f);
                  uVar2 = (iStack_b4 * param_6 - param_8) + iStack_d8;
                  iVar8 = uVar2 + param_4;
                  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
                  iVar23 = iVar8;
                  if (param_12 <= iVar8) {
                    iVar23 = param_12;
                  }
                  uVar7 = iVar23 - uVar1;
                  iVar21 = param_3;
                  iVar23 = iStack_c8;
                  do {
                    if ((((-1 < iVar23) && (iVar23 < param_11)) && ((int)uVar2 < param_12)) &&
                       (-1 < iVar8)) {
                      lVar12 = *param_1;
                      lVar12 = lVar16 + (long)(int)((uVar1 + (iVar23 + iVar19 * *(int *)(lVar12 + 
                                                  0x10)) * *(int *)(lVar12 + 0x14)) *
                                                  *(int *)(lVar12 + 0x18)) * 4;
                      _vDSP_vadd(lVar13 + (long)(iVar22 + *(int *)(param_2 + 0x14) *
                                                          (iVar18 + iVar19 * *(int *)(param_2 + 0x10
                                                                                     ))) * 4,1,
                                 lVar12,1,lVar12,1,
                                 (long)(int)((uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) * iVar6));
                    }
                    iVar22 = iVar22 + iVar6 * param_4;
                    iVar23 = iVar23 + 1;
                    iVar21 = iVar21 + -1;
                  } while (iVar21 != 0);
                }
                iStack_b4 = iStack_b4 + 1;
                iVar18 = iVar18 + 1;
                uStack_b8 = uStack_b8 + param_6;
              } while (iStack_b4 != param_10);
            }
            iVar14 = iVar14 + 1;
            iStack_e0 = iStack_e0 + param_10;
            iStack_c8 = iStack_c8 + param_5;
          } while (iVar14 != param_9);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != iVar20);
    }
    return;
  }
  if (*(int *)(param_2 + 8) < 1) {
    iVar20 = -1;
  }
  else {
    iVar20 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_2 + 8) != 1) {
      iVar11 = *(int *)(param_2 + 0x10);
      goto LAB_109c17ea0;
    }
  }
  iVar11 = -1;
LAB_109c17ea0:
  iStack_80 = 4;
  iVar6 = 0;
  if (param_4 * param_3 != 0) {
    iVar6 = iVar11 / (param_4 * param_3);
  }
  iStack_74 = param_11;
  iStack_70 = param_12;
  uStack_6c = 0;
  uStack_88 = param_1;
  iStack_7c = iVar20;
  iStack_78 = iVar6;
  FUN_109c14b04(param_1,&iStack_80,param_14,1);
  lVar13 = *param_1;
  uVar15 = *(undefined8 *)(lVar13 + 0x40);
  bVar3 = *(byte *)(lVar13 + 0x48);
  uVar2 = *(uint *)(lVar13 + 8) & ((int)*(uint *)(lVar13 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  uStack_68 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar2);
  if (bVar3 < 9) {
    uStack_64 = *(undefined4 *)(&UNK_10e039a00 + (ulong)bVar3 * 4);
  }
  else {
    uStack_64 = 4;
  }
  iVar11 = 0xf57499d;
  FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_68,2);
  _bzero(uVar15,(long)iVar11);
  if (0 < iVar20) {
    iVar11 = 0;
    lVar13 = *uStack_88;
    lVar16 = *(long *)(lVar13 + 0x40);
    pfVar17 = *(float **)(param_2 + 0x40);
    do {
      if (0 < iVar6) {
        iVar19 = 0;
        do {
          if (0 < param_3) {
            iVar14 = 0;
            iVar18 = -param_7;
            do {
              if (0 < param_4) {
                iVar8 = 0;
                iVar22 = -param_8;
                do {
                  if (0 < param_9) {
                    iVar23 = 0;
                    iVar21 = iVar18;
                    do {
                      iVar4 = (iVar14 - param_7) + iVar23 * param_5;
                      iVar10 = param_10;
                      iVar9 = iVar22;
                      if (0 < param_10) {
                        do {
                          if (((-1 < iVar4) && (iVar4 < param_11)) &&
                             ((-1 < iVar9 && (iVar9 < param_12)))) {
                            iVar5 = iVar9 + *(int *)(lVar13 + 0x18) *
                                            (iVar21 + *(int *)(lVar13 + 0x14) *
                                                      (iVar19 + iVar11 * *(int *)(lVar13 + 0x10)));
                            *(float *)(lVar16 + (long)iVar5 * 4) =
                                 *pfVar17 + *(float *)(lVar16 + (long)iVar5 * 4);
                          }
                          pfVar17 = pfVar17 + 1;
                          iVar9 = iVar9 + param_6;
                          iVar10 = iVar10 + -1;
                        } while (iVar10 != 0);
                      }
                      iVar23 = iVar23 + 1;
                      iVar21 = iVar21 + param_5;
                    } while (iVar23 != param_9);
                  }
                  iVar8 = iVar8 + 1;
                  iVar22 = iVar22 + 1;
                } while (iVar8 != param_4);
              }
              iVar14 = iVar14 + 1;
              iVar18 = iVar18 + 1;
            } while (iVar14 != param_3);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != iVar6);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar20);
  }
  return;
}



/* Entry: 109c17ac4; end: 109c17e2b;  */

void FUN_109c17ac4(long *param_1,long param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                  undefined4 param_13,undefined8 param_14,char param_15)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  int iStack_e0;
  int iStack_d8;
  int iStack_c8;
  uint uStack_b8;
  int iStack_b4;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  if ((int)*(uint *)(param_2 + 8) < 1) {
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)(param_2 + 0xc);
    if (2 < *(uint *)(param_2 + 8)) {
      iVar7 = *(int *)(param_2 + 0x14);
      goto LAB_109c17b38;
    }
  }
  iVar7 = -1;
LAB_109c17b38:
  uStack_88 = 4;
  iStack_80 = param_11;
  iStack_7c = param_12;
  iVar5 = 0;
  if (param_4 * param_3 != 0) {
    iVar5 = iVar7 / (param_4 * param_3);
  }
  uStack_74 = 0;
  iStack_84 = iVar14;
  iStack_78 = iVar5;
  FUN_109c14b04(param_1,&uStack_88,param_14,1);
  lVar8 = *param_1;
  uVar18 = *(undefined8 *)(lVar8 + 0x40);
  bVar4 = *(byte *)(lVar8 + 0x48);
  uVar2 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  uStack_70 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar2);
  if (bVar4 < 9) {
    uStack_6c = *(undefined4 *)(&UNK_10e039a00 + (ulong)bVar4 * 4);
  }
  else {
    uStack_6c = 4;
  }
  iVar7 = 0xf57499d;
  FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_70,2);
  _bzero(uVar18,(long)iVar7);
  if (param_15 == '\0') {
    iStack_d8 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = (param_3 + (param_9 + -1) * param_5) - param_11;
    iStack_d8 = (param_4 + (param_10 + -1) * param_6) - param_12;
  }
  if (0 < iVar14) {
    iVar13 = 0;
    lVar11 = *(long *)(*param_1 + 0x40);
    lVar8 = *(long *)(param_2 + 0x40);
    do {
      if (0 < param_9) {
        iStack_e0 = 0;
        iVar10 = 0;
        iStack_c8 = iVar7 - param_7;
        do {
          if (0 < param_10) {
            iStack_b4 = 0;
            iVar12 = iStack_e0;
            uStack_b8 = iStack_d8 - param_8;
            do {
              if (0 < param_3) {
                iVar16 = -iVar5 * (uStack_b8 & (int)uStack_b8 >> 0x1f);
                uVar2 = (iStack_b4 * param_6 - param_8) + iStack_d8;
                iVar1 = uVar2 + param_4;
                uVar3 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
                iVar17 = iVar1;
                if (param_12 <= iVar1) {
                  iVar17 = param_12;
                }
                uVar6 = iVar17 - uVar3;
                iVar15 = param_3;
                iVar17 = iStack_c8;
                do {
                  if ((((-1 < iVar17) && (iVar17 < param_11)) && ((int)uVar2 < param_12)) &&
                     (-1 < iVar1)) {
                    lVar9 = *param_1;
                    lVar9 = lVar11 + (long)(int)((uVar3 + (iVar17 + iVar13 * *(int *)(lVar9 + 0x10))
                                                          * *(int *)(lVar9 + 0x14)) *
                                                *(int *)(lVar9 + 0x18)) * 4;
                    _vDSP_vadd(lVar8 + (long)(iVar16 + *(int *)(param_2 + 0x14) *
                                                       (iVar12 + iVar13 * *(int *)(param_2 + 0x10)))
                                       * 4,1,lVar9,1,lVar9,1,
                               (long)(int)((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * iVar5));
                  }
                  iVar16 = iVar16 + iVar5 * param_4;
                  iVar17 = iVar17 + 1;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
              iStack_b4 = iStack_b4 + 1;
              iVar12 = iVar12 + 1;
              uStack_b8 = uStack_b8 + param_6;
            } while (iStack_b4 != param_10);
          }
          iVar10 = iVar10 + 1;
          iStack_e0 = iStack_e0 + param_10;
          iStack_c8 = iStack_c8 + param_5;
        } while (iVar10 != param_9);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar14);
  }
  return;
}



/* Entry: 109c17e2c; end: 109c180a3;  */

void FUN_109c17e2c(long *param_1,long param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                  undefined4 param_13,undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(int *)(param_2 + 8) < 1) {
    iVar16 = -1;
  }
  else {
    iVar16 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_2 + 8) != 1) {
      iVar13 = *(int *)(param_2 + 0x10);
      goto LAB_109c17ea0;
    }
  }
  iVar13 = -1;
LAB_109c17ea0:
  uStack_80 = 4;
  iVar6 = 0;
  if (param_4 * param_3 != 0) {
    iVar6 = iVar13 / (param_4 * param_3);
  }
  iStack_74 = param_11;
  iStack_70 = param_12;
  uStack_6c = 0;
  iStack_7c = iVar16;
  iStack_78 = iVar6;
  FUN_109c14b04(param_1,&uStack_80,param_14,1);
  lVar14 = *param_1;
  uVar15 = *(undefined8 *)(lVar14 + 0x40);
  bVar3 = *(byte *)(lVar14 + 0x48);
  uVar2 = *(uint *)(lVar14 + 8) & ((int)*(uint *)(lVar14 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  uStack_68 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar14 + 0xc,uVar2);
  if (bVar3 < 9) {
    uStack_64 = *(undefined4 *)(&UNK_10e039a00 + (ulong)bVar3 * 4);
  }
  else {
    uStack_64 = 4;
  }
  iVar13 = 0xf57499d;
  FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_68,2);
  _bzero(uVar15,(long)iVar13);
  if (0 < iVar16) {
    iVar13 = 0;
    lVar14 = *param_1;
    lVar17 = *(long *)(lVar14 + 0x40);
    pfVar18 = *(float **)(param_2 + 0x40);
    do {
      if (0 < iVar6) {
        iVar19 = 0;
        do {
          if (0 < param_3) {
            iVar20 = 0;
            iVar1 = -param_7;
            do {
              if (0 < param_4) {
                iVar7 = 0;
                iVar8 = -param_8;
                do {
                  if (0 < param_9) {
                    iVar9 = 0;
                    iVar10 = iVar1;
                    do {
                      iVar4 = (iVar20 - param_7) + iVar9 * param_5;
                      iVar12 = param_10;
                      iVar11 = iVar8;
                      if (0 < param_10) {
                        do {
                          if ((((-1 < iVar4) && (iVar4 < param_11)) && (-1 < iVar11)) &&
                             (iVar11 < param_12)) {
                            iVar5 = iVar11 + *(int *)(lVar14 + 0x18) *
                                             (iVar10 + *(int *)(lVar14 + 0x14) *
                                                       (iVar19 + iVar13 * *(int *)(lVar14 + 0x10)));
                            *(float *)(lVar17 + (long)iVar5 * 4) =
                                 *pfVar18 + *(float *)(lVar17 + (long)iVar5 * 4);
                          }
                          pfVar18 = pfVar18 + 1;
                          iVar11 = iVar11 + param_6;
                          iVar12 = iVar12 + -1;
                        } while (iVar12 != 0);
                      }
                      iVar9 = iVar9 + 1;
                      iVar10 = iVar10 + param_5;
                    } while (iVar9 != param_9);
                  }
                  iVar7 = iVar7 + 1;
                  iVar8 = iVar8 + 1;
                } while (iVar7 != param_4);
              }
              iVar20 = iVar20 + 1;
              iVar1 = iVar1 + 1;
            } while (iVar20 != param_3);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != iVar6);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar16);
  }
  return;
}



/* Entry: 109c180a4; end: 109c180b3;  */

void FUN_109c180a4(undefined8 param_1,long *param_2)

{
  func_0x000105277f8c();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109c180c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))();
    return;
  }
  return;
}



/* Entry: 109c180b4; end: 109c180eb;  */

void FUN_109c180b4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109c180c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 109c180ec; end: 109c18137;  */

long * FUN_109c180ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 109c18138; end: 109c182f3;  */

/* WARNING: Removing unreachable block (ram,0x000109c1821c) */

long FUN_109c18138(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((int)param_2 < *(int *)(param_1 + 0x10)) {
    __ZNSt3__19to_stringEi(auStack_98,param_2);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a365a,0x11);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    lStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f5a361c,7);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    lStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__19to_stringEi(&puStack_b0,*(undefined4 *)(param_1 + 0x10));
    ppuVar1 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuVar1 = &puStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuVar1,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c14014(param_1,&uStack_40);
    if ((char)bStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
  }
  return param_1;
}



/* Entry: 109c182f4; end: 109c183d7;  */

/* WARNING: Possible PIC construction at 0x000109c184bc: Changing call to branch */

undefined1  [16] FUN_109c182f4(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  uVar3 = param_1[1];
  uVar7 = (long)(uVar3 - *param_1) >> 4;
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar7 = *param_1 + param_2 * 0x10;
      while (uVar3 != uVar7) {
        uVar3 = uVar3 - 0x10;
        FUN_10959b818();
      }
      param_1[1] = uVar7;
    }
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = uVar3;
    return auVar11;
  }
  param_2 = param_2 - uVar7;
  puVar2 = (ulong *)auStack_70;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar5 = (ulong *)param_1[1];
  if ((ulong)((long)(param_1[2] - (long)puVar5) >> 4) < param_2) {
    lVar8 = (long)puVar5 - *param_1;
    uVar3 = param_2 + (lVar8 >> 4);
    if (uVar3 >> 0x3c == 0) {
      uVar6 = param_1[2] - *param_1;
      uVar7 = (long)uVar6 >> 3;
      if (uVar7 <= uVar3) {
        uVar7 = uVar3;
      }
      if (0x7fffffffffffffef < uVar6) {
        uVar7 = 0xfffffffffffffff;
      }
      puStack_48 = param_1;
      if (uVar7 == 0) {
        puVar5 = (ulong *)0x0;
      }
      else {
        puVar5 = param_1;
        FUN_109c184f0();
      }
      lVar8 = (long)puVar5 + lVar8;
      _bzero(lVar8,param_2 * 0x10);
      lVar1 = param_2 * 0x10;
      uVar3 = *param_1;
      param_2 = lVar8 - (param_1[1] - uVar3);
      _memcpy(param_2);
      uStack_58 = *param_1;
      *param_1 = param_2;
      param_1[1] = lVar8 + lVar1;
      uStack_50 = param_1[2];
      param_1[2] = (ulong)(puVar5 + uVar7 * 2);
      uStack_68 = uStack_58;
      uStack_60 = uStack_58;
      puVar5 = &uStack_68;
      uVar10 = 0x109c184c0;
    }
    else {
      uVar3 = param_2;
      FUN_109c184dc();
      pcStack_78 = FUN_109c184dc;
      puVar5 = (ulong *)&DAT_10f62a4d8;
      ppuStack_80 = ppuVar9;
      func_0x000104c4f6cc();
      puVar2 = &uStack_a0;
      pcStack_88 = FUN_109c184f0;
      ppuVar9 = &puStack_90;
      uStack_a0 = param_2;
      puStack_98 = param_1;
      if (uVar3 >> 0x3c == 0) {
        lVar8 = uVar3 << 4;
        puStack_90 = (undefined1 *)&ppuStack_80;
        __Znwm(lVar8);
        auVar13._8_8_ = uVar3;
        auVar13._0_8_ = lVar8;
        return auVar13;
      }
      uVar10 = 0x109c18524;
      puStack_90 = (undefined1 *)&ppuStack_80;
      func_0x000104c4f740();
    }
    *(ulong *)((long)puVar2 + -0x20) = param_2;
    *(ulong **)((long)puVar2 + -0x18) = param_1;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar9;
    *(undefined8 *)((long)puVar2 + -8) = uVar10;
    uVar7 = puVar5[1];
    uVar6 = puVar5[2];
    while (uVar6 != uVar7) {
      puVar5[2] = uVar6 - 0x10;
      FUN_10959b818();
      uVar6 = puVar5[2];
    }
    if (*puVar5 != 0) {
      __ZdlPv();
    }
    auVar14._8_8_ = uVar3;
    auVar14._0_8_ = puVar5;
    return auVar14;
  }
  lVar8 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    lVar8 = param_2 * 0x10;
    puVar4 = puVar5;
    _bzero(puVar5,lVar8);
    puVar5 = puVar5 + param_2 * 2;
  }
  param_1[1] = (ulong)puVar5;
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 109c183d8; end: 109c184db;  */

/* WARNING: Possible PIC construction at 0x000109c184bc: Changing call to branch */

undefined1  [16] FUN_109c183d8(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  puVar2 = (ulong *)auStack_70;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (ulong *)param_1[1];
  if (param_2 <= (ulong)((long)(param_1[2] - (long)puVar4) >> 4)) {
    lVar8 = 0;
    puVar3 = param_1;
    if (param_2 != 0) {
      lVar8 = param_2 << 4;
      puVar3 = puVar4;
      _bzero(puVar4,lVar8);
      puVar4 = puVar4 + param_2 * 2;
    }
    param_1[1] = (ulong)puVar4;
    auVar11._8_8_ = lVar8;
    auVar11._0_8_ = puVar3;
    return auVar11;
  }
  lVar8 = (long)puVar4 - *param_1;
  uVar5 = param_2 + (lVar8 >> 4);
  if (uVar5 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    puStack_48 = param_1;
    if (uVar7 == 0) {
      puVar4 = (ulong *)0x0;
    }
    else {
      puVar4 = param_1;
      FUN_109c184f0();
    }
    lVar8 = (long)puVar4 + lVar8;
    _bzero(lVar8,param_2 << 4);
    lVar1 = param_2 * 0x10;
    uVar5 = *param_1;
    param_2 = lVar8 - (param_1[1] - uVar5);
    _memcpy(param_2);
    uStack_58 = *param_1;
    *param_1 = param_2;
    param_1[1] = lVar8 + lVar1;
    uStack_50 = param_1[2];
    param_1[2] = (ulong)(puVar4 + uVar7 * 2);
    uStack_68 = uStack_58;
    uStack_60 = uStack_58;
    puVar4 = &uStack_68;
    uVar10 = 0x109c184c0;
  }
  else {
    uVar5 = param_2;
    FUN_109c184dc();
    pcStack_78 = FUN_109c184dc;
    puVar4 = (ulong *)&DAT_10f62a4d8;
    ppuStack_80 = ppuVar9;
    func_0x000104c4f6cc();
    puVar2 = &uStack_a0;
    pcStack_88 = FUN_109c184f0;
    ppuVar9 = &puStack_90;
    uStack_a0 = param_2;
    puStack_98 = param_1;
    if (uVar5 >> 0x3c == 0) {
      lVar8 = uVar5 << 4;
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm(lVar8);
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = lVar8;
      return auVar12;
    }
    uVar10 = 0x109c18524;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000104c4f740();
  }
  *(ulong *)((long)puVar2 + -0x20) = param_2;
  *(ulong **)((long)puVar2 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar9;
  *(undefined8 *)((long)puVar2 + -8) = uVar10;
  uVar7 = puVar4[1];
  uVar6 = puVar4[2];
  while (uVar6 != uVar7) {
    puVar4[2] = uVar6 - 0x10;
    FUN_10959b818();
    uVar6 = puVar4[2];
  }
  if (*puVar4 != 0) {
    __ZdlPv();
  }
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = puVar4;
  return auVar13;
}



/* Entry: 109c184dc; end: 109c184ef;  */

undefined1  [16] FUN_109c184dc(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10959b818();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109c184f0; end: 109c1856f;  */

undefined1  [16] FUN_109c184f0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10959b818();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109c18570; end: 109c18657;  */

undefined8 ** FUN_109c18570(undefined8 **param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)*param_2;
  *param_1 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    param_1[1] = (undefined8 *)0x0;
    ppuVar2 = param_1;
  }
  else {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
    uVar3 = param_2[1];
    (**(code **)(param_2[2] + 0x10))(apuStack_80);
    *puVar1 = &PTR_FUN_110b2be08;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar4;
    puVar1[4] = uVar3;
    (*(code *)apuStack_80[0][2])(puVar1 + 5,apuStack_80);
    param_1[1] = puVar1;
    ppuVar2 = apuStack_80;
    (*(code *)*apuStack_80[0])();
  }
  *param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  *ppuVar2 = &PTR_FUN_110b2be08;
  (*(code *)*ppuVar2[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(ppuVar2);
  return ppuVar2;
}



/* Entry: 109c18658; end: 109c186cb;  */

void FUN_109c18658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2be08;
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109c186cc; end: 109c18707;  */

void FUN_109c186cc(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000109c18700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 109c18708; end: 109c18743;  */

long FUN_109c18708(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b2bf60);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109c18744; end: 109c188db;  */

void FUN_109c18744(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c188dc; end: 109c18b1b;  */

void FUN_109c188dc(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (0 < iVar2) {
    iVar3 = 0;
    iVar1 = *(int *)(param_1 + 8);
    param_4 = iVar1 * param_4;
    param_5 = iVar1 * param_5;
    do {
      iVar4 = param_7;
      if (0 < param_7) {
        do {
          _memcpy(param_3 + (long)param_4 * 4,param_2 + (long)param_5 * 4,
                  (long)*(int *)(param_1 + 0x38));
          iVar1 = *(int *)(param_1 + 8);
          param_4 = iVar1 + param_4;
          param_5 = param_5 + iVar1 * param_6;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar2 = *(int *)(param_1 + 0x24);
      }
      param_4 = (param_4 - iVar1 * param_7) + *(int *)(param_1 + 0x34);
      param_5 = (param_5 - param_7 * param_6 * iVar1) + *(int *)(param_1 + 0x34);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}



/* Entry: 109c18b1c; end: 109c18b8b;  */

void FUN_109c18b1c(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_3 + 0x1c)) {
    iVar1 = 0;
    do {
      _memcpy(param_2,param_1,(long)*(int *)(param_3 + 0x20));
      param_2 = param_2 + (long)*(int *)(param_3 + 0x18) * 4;
      param_1 = param_1 + (long)*(int *)(param_3 + 0x24) * 4;
      iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    } while (iVar1 < *(int *)(param_3 + 0x1c));
  }
  return;
}



/* Entry: 109c18b8c; end: 109c18bdf;  */

void FUN_109c18b8c(void)

{
  return;
}



/* Entry: 109c18be0; end: 109c18c4f;  */

void FUN_109c18be0(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_3 + 0x1c)) {
    iVar1 = 0;
    do {
      _memcpy(param_2,param_1,(long)*(int *)(param_3 + 0x20));
      param_2 = param_2 + (long)*(int *)(param_3 + 0x18) * 2;
      param_1 = param_1 + (long)*(int *)(param_3 + 0x24) * 2;
      iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    } while (iVar1 < *(int *)(param_3 + 0x1c));
  }
  return;
}



/* Entry: 109c18c50; end: 109c18ca3;  */

void FUN_109c18c50(void)

{
  return;
}



/* Entry: 109c18ca4; end: 109c18d13;  */

void FUN_109c18ca4(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_3 + 0x1c)) {
    iVar1 = 0;
    do {
      _memcpy(param_2,param_1,(long)*(int *)(param_3 + 0x20));
      param_2 = param_2 + *(int *)(param_3 + 0x18);
      param_1 = param_1 + *(int *)(param_3 + 0x24);
      iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    } while (iVar1 < *(int *)(param_3 + 0x1c));
  }
  return;
}



/* Entry: 109c18d14; end: 109c18d67;  */

void FUN_109c18d14(void)

{
  return;
}



/* Entry: 109c18d68; end: 109c18e0b;  */

void FUN_109c18d68(long param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  pfVar4 = *(float **)(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  if (iVar2 != 0) {
    lVar5 = (long)iVar2 << 2;
    pfVar3 = *(float **)(param_1 + 0x40);
    do {
      fVar6 = *pfVar4;
      fVar7 = fVar6 * 0.707107;
      _erff();
      *pfVar3 = fVar6 * 0.5 * (fVar7 + 1.0);
      lVar5 = lVar5 + -4;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109c18e0c; end: 109c18ecf;  */

void FUN_109c18e0c(long param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  pfVar4 = *(float **)(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  if (iVar2 != 0) {
    lVar5 = (long)iVar2 << 2;
    pfVar3 = *(float **)(param_1 + 0x40);
    do {
      fVar7 = *pfVar4;
      fVar6 = fVar7;
      _powf(fVar7,0x40400000);
      fVar6 = (fVar7 + fVar6 * 0.044715) * 0.797885;
      _tanhf();
      *pfVar3 = fVar7 * 0.5 * (fVar6 + 1.0);
      lVar5 = lVar5 + -4;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109c18ed0; end: 109c18fcb;  */

void FUN_109c18ed0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_80 [9];
  long lStack_38;
  
  plVar3 = alStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  FUN_109c1a514(alStack_80,param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(alStack_80[0] + 0x40);
  uVar7 = 0x3fd9db23;
  FUN_109c18fcc();
  FUN_109c19038(alStack_80[0]);
  _vDSP_vmul(uVar5,1,uVar6,1,uVar5,1,(long)iVar2);
  FUN_109c180ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = (undefined1 *)plVar3;
  __Unwind_Resume();
  pcStack_88 = FUN_109c18fcc;
  uVar1 = *(uint *)(puVar4 + 8) & ((int)*(uint *)(puVar4 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  uStack_a4 = uVar7;
  uStack_a0 = uVar5;
  puStack_98 = (undefined1 *)plVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar4 + 0xc,uVar1);
  _vDSP_vsmul(*(undefined8 *)(puVar4 + 0x40),1,&uStack_a4,*(undefined8 *)(puVar4 + 0x40),1,
              (long)iVar2);
  return;
}



/* Entry: 109c18fcc; end: 109c19037;  */

void FUN_109c18fcc(undefined4 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_24;
  
  uVar1 = *(uint *)(param_2 + 8) & ((int)*(uint *)(param_2 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  uStack_24 = param_1;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_2 + 0xc,uVar1);
  _vDSP_vsmul(*(undefined8 *)(param_2 + 0x40),1,&uStack_24,*(undefined8 *)(param_2 + 0x40),1,
              (long)iVar2);
  return;
}



/* Entry: 109c19038; end: 109c190fb;  */

void FUN_109c19038(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  uStack_3c = 0x3f800000;
  _vDSP_vneg(uVar3,1,uVar3,1,(long)iVar2);
  iStack_38 = iVar2;
  _vvexpf(uVar3,uVar3,&iStack_38);
  _vDSP_vsadd(uVar3,1,&uStack_3c,uVar3,1,(long)iVar2);
  iStack_34 = iVar2;
  _vvrecf(uVar3,uVar3,&iStack_34);
  return;
}



/* Entry: 109c190fc; end: 109c19137;  */

long FUN_109c190fc(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  FUN_109c1959c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109c19138; end: 109c1913b;  */

long FUN_109c19138(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  FUN_109c1959c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109c1913c; end: 109c1914f;  */

void FUN_109c1913c(void)

{
  FUN_109c190fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c19150; end: 109c19527;  */

void FUN_109c19150(long *param_1,long param_2,uint *param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined8 uStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[8] = 0;
  plVar18 = param_1 + 2;
  param_1[3] = 0;
  *plVar18 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = (long)FUN_109c180a4;
  *plVar18 = (long)&PTR_DAT_110950c70;
  uVar9 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar9) {
    uVar9 = 5;
  }
  uVar5 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_3 + 1,uVar9);
  if (param_4 < 9) {
    uVar8 = *(undefined4 *)(&UNK_10e039a9c + (ulong)param_4 * 4);
  }
  else {
    uVar8 = 4;
  }
  uStack_78 = (long *)CONCAT44(uVar8,uVar5);
  iVar6 = 0xf57499d;
  FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_78,2);
  __ZNSt3__15mutex4lockEv(param_2 + 0x40);
  uVar10 = *(ulong *)(param_2 + 0x20);
  if (uVar10 != 0) {
    plVar7 = (long *)(param_2 + 0x18);
    uVar11 = (ulong)iVar6;
    uVar12 = uVar10 - 1;
    if ((uVar10 & uVar12) == 0) {
      uVar13 = uVar12 & uVar11;
    }
    else {
      uVar13 = uVar11;
      if (uVar10 <= uVar11) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar11 / uVar10;
        }
        uVar13 = uVar11 - uVar13 * uVar10;
      }
    }
    puVar14 = *(undefined8 **)(*plVar7 + uVar13 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar14; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        uVar15 = plVar20[1];
        if (uVar15 == uVar11) {
          if ((int)plVar20[2] == iVar6) {
            FUN_109c19528(param_1,plVar20 + 3);
            uVar11 = *(ulong *)(param_2 + 0x20);
            uVar10 = plVar20[1];
            uVar12 = uVar11 - 1;
            if ((uVar11 & uVar12) == 0) {
              uVar10 = uVar12 & uVar10;
            }
            else if (uVar11 <= uVar10) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar13 * uVar11;
            }
            plVar4 = *(long **)(*plVar7 + uVar10 * 8);
            do {
              plVar17 = plVar4;
              plVar4 = (long *)*plVar17;
            } while ((long *)*plVar17 != plVar20);
            if (plVar17 == (long *)(param_2 + 0x28)) {
LAB_109c193fc:
              if (*plVar20 != 0) {
                uVar13 = *(ulong *)(*plVar20 + 8);
                if ((uVar11 & uVar12) == 0) {
                  uVar13 = uVar13 & uVar12;
                }
                else if (uVar11 <= uVar13) {
                  uVar15 = 0;
                  if (uVar11 != 0) {
                    uVar15 = uVar13 / uVar11;
                  }
                  uVar13 = uVar13 - uVar15 * uVar11;
                }
                if (uVar13 == uVar10) goto LAB_109c19434;
              }
              *(undefined8 *)(*plVar7 + uVar10 * 8) = 0;
            }
            else {
              uVar13 = plVar17[1];
              if ((uVar11 & uVar12) == 0) {
                uVar13 = uVar13 & uVar12;
              }
              else if (uVar11 <= uVar13) {
                uVar15 = 0;
                if (uVar11 != 0) {
                  uVar15 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar15 * uVar11;
              }
              if (uVar13 != uVar10) goto LAB_109c193fc;
            }
LAB_109c19434:
            lVar16 = *plVar20;
            if (lVar16 != 0) {
              uVar13 = *(ulong *)(lVar16 + 8);
              if ((uVar11 & uVar12) == 0) {
                uVar13 = uVar13 & uVar12;
              }
              else if (uVar11 <= uVar13) {
                uVar12 = 0;
                if (uVar11 != 0) {
                  uVar12 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar12 * uVar11;
              }
              if (uVar13 != uVar10) {
                *(long **)(*plVar7 + uVar13 * 8) = plVar17;
                lVar16 = *plVar20;
              }
            }
            *plVar17 = lVar16;
            *plVar20 = 0;
            *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -1;
            uStack_68 = 1;
            uStack_67 = 0;
            uStack_63 = 0;
            uStack_78 = plVar20;
            plStack_70 = plVar7;
            func_0x000109c19620(&uStack_78);
            __ZNSt3__15mutex6unlockEv(param_2 + 0x40);
            lVar19 = *param_1;
            *(char *)(lVar19 + 0x48) = (char)param_4;
            lVar16 = lVar19;
            if ((uint *)(lVar19 + 8) != param_3) {
              if (*param_3 == 0) {
                uVar9 = 0;
              }
              else {
                _memmove(lVar19 + 0xc,param_3 + 1,(long)(int)*param_3 << 2);
                uVar9 = *param_3;
                lVar16 = *param_1;
              }
              *(uint *)(lVar19 + 8) = uVar9;
            }
            *(undefined8 *)(lVar16 + 0x4c) = 0x3f800000;
            goto LAB_109c19300;
          }
        }
        else {
          if ((uVar10 & uVar12) == 0) {
            uVar15 = uVar15 & uVar12;
          }
          else if (uVar10 <= uVar15) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar3 * uVar10;
          }
          if (uVar15 != uVar13) break;
        }
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x40);
  plVar7 = (long *)0x58;
  __Znwm();
  FUN_109c1106c();
  uStack_78 = plVar7;
  FUN_109c19528(param_1,&uStack_78);
  plVar7 = uStack_78;
  uStack_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
LAB_109c19300:
  lVar19 = *(long *)(param_2 + 0x10);
  lVar16 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    plVar7 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[1] = (long)FUN_109c19678;
  (**(code **)param_1[2])(plVar18);
  param_1[2] = (long)&PTR_FUN_110b2c0c8;
  param_1[4] = lVar19;
  param_1[3] = lVar16;
  return;
}



/* Entry: 109c19528; end: 109c19597;  */

long * FUN_109c19528(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  param_1[1] = (long)FUN_109c180b4;
  plVar3 = param_1 + 2;
  (**(code **)*plVar3)(plVar3);
  *plVar3 = (long)&PTR_DAT_110b2c028;
  return param_1;
}



/* Entry: 109c19598; end: 109c1959b;  */

void FUN_109c19598(void)

{
  return;
}



/* Entry: 109c1959c; end: 109c19677;  */

long * FUN_109c1959c(long *param_1)

{
  long lVar1;
  
  func_0x000109c195d4(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c19678; end: 109c19bcf;  */

void FUN_109c19678(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  bool bVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plStack_70 = *(long **)(param_2 + 0x18);
  if ((plStack_70 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_70 == (long *)0x0)) {
    plStack_70 = (long *)0x0;
  }
  else {
    lVar25 = *(long *)(param_2 + 0x10);
    if (lVar25 != 0) {
      __ZNSt3__15mutex4lockEv(lVar25 + 0x40);
      bVar3 = *(byte *)(param_1 + 9);
      uVar2 = *(uint *)(param_1 + 1) & ((int)*(uint *)(param_1 + 1) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar2) {
        uVar2 = 5;
      }
      uVar9 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)param_1 + 0xc,uVar2);
      if (bVar3 < 9) {
        uVar14 = *(undefined4 *)(&UNK_10e039a9c + (ulong)bVar3 * 4);
      }
      else {
        uVar14 = 4;
      }
      uStack_68 = (long *)CONCAT44(uVar14,uVar9);
      iVar10 = 0xf57499d;
      FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_68,2);
      plVar11 = (long *)0x20;
      __Znwm();
      plVar1 = (long *)(lVar25 + 0x18);
      uStack_58 = 1;
      *(int *)(plVar11 + 2) = iVar10;
      plVar11[3] = (long)param_1;
      uVar24 = (ulong)iVar10;
      *plVar11 = 0;
      plVar11[1] = uVar24;
      uVar26 = *(ulong *)(lVar25 + 0x20);
      fVar27 = (float)(*(long *)(lVar25 + 0x30) + 1);
      plStack_60 = plVar1;
      if ((uVar26 == 0) || (*(float *)(lVar25 + 0x38) * (float)uVar26 < fVar27)) {
        uVar15 = 1;
        if (2 < uVar26) {
          uVar15 = (ulong)((uVar26 & uVar26 - 1) != 0);
        }
        uVar15 = uVar15 | uVar26 << 1;
        uVar17 = (ulong)(fVar27 / *(float *)(lVar25 + 0x38));
        if (uVar15 <= uVar17) {
          uVar15 = uVar17;
        }
        uStack_68 = plVar11;
        if (uVar15 - 1 == 0) {
          uVar15 = 2;
        }
        else if ((uVar15 & uVar15 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar26 = *(ulong *)(lVar25 + 0x20);
        }
        if (uVar26 < uVar15) {
LAB_109c19808:
          if (uVar15 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x109c19b84);
            (*pcVar6)();
          }
          lVar12 = uVar15 << 3;
          __Znwm();
          lVar13 = *plVar1;
          *plVar1 = lVar12;
          if (lVar13 != 0) {
            __ZdlPv();
          }
          uVar26 = 0;
          *(ulong *)(lVar25 + 0x20) = uVar15;
          do {
            *(undefined8 *)(*plVar1 + uVar26 * 8) = 0;
            uVar26 = uVar26 + 1;
          } while (uVar15 != uVar26);
          plVar16 = *(long **)(lVar25 + 0x28);
          uVar26 = uVar15;
          if (plVar16 != (long *)0x0) {
            uVar17 = plVar16[1];
            uVar18 = uVar15 - 1;
            if ((uVar15 & uVar18) == 0) {
              uVar17 = uVar17 & uVar18;
            }
            else if (uVar15 <= uVar17) {
              uVar20 = 0;
              if (uVar15 != 0) {
                uVar20 = uVar17 / uVar15;
              }
              uVar17 = uVar17 - uVar20 * uVar15;
            }
            *(long **)(*plVar1 + uVar17 * 8) = (long *)(lVar25 + 0x28);
            while (plVar19 = plVar16, plVar16 = (long *)*plVar19, plVar16 != (long *)0x0) {
              uVar20 = plVar16[1];
              if ((uVar15 & uVar18) == 0) {
                uVar20 = uVar20 & uVar18;
              }
              else if (uVar15 <= uVar20) {
                uVar5 = 0;
                if (uVar15 != 0) {
                  uVar5 = uVar20 / uVar15;
                }
                uVar20 = uVar20 - uVar5 * uVar15;
              }
              if (uVar20 != uVar17) {
                lVar12 = *plVar1;
                plVar23 = plVar16;
                if (*(long *)(lVar12 + uVar20 * 8) == 0) {
                  *(long **)(lVar12 + uVar20 * 8) = plVar19;
                  uVar17 = uVar20;
                }
                else {
                  do {
                    plVar22 = plVar23;
                    plVar23 = (long *)*plVar22;
                    if (plVar23 == (long *)0x0) break;
                  } while (*(int *)(plVar16 + 2) == *(int *)(plVar23 + 2));
                  *plVar19 = (long)plVar23;
                  *plVar22 = **(long **)(lVar12 + uVar20 * 8);
                  **(long **)(lVar12 + uVar20 * 8) = (long)plVar16;
                  plVar16 = plVar19;
                }
              }
            }
          }
        }
        else if (uVar15 < uVar26) {
          uVar17 = (ulong)((float)*(ulong *)(lVar25 + 0x30) / *(float *)(lVar25 + 0x38));
          if ((uVar26 < 3) || ((uVar26 & uVar26 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar17) {
            uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
          }
          if (uVar15 <= uVar17) {
            uVar15 = uVar17;
          }
          if (uVar15 < uVar26) {
            if (uVar15 != 0) goto LAB_109c19808;
            lVar12 = *plVar1;
            *plVar1 = 0;
            if (lVar12 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(lVar25 + 0x20) = 0;
            uVar26 = 0;
          }
          else {
            uVar26 = *(ulong *)(lVar25 + 0x20);
          }
        }
      }
      uVar15 = uVar26 - 1;
      if ((uVar26 & uVar15) == 0) {
        uVar17 = uVar15 & uVar24;
      }
      else {
        uVar17 = uVar24;
        if (uVar26 <= uVar24) {
          uVar17 = 0;
          if (uVar26 != 0) {
            uVar17 = uVar24 / uVar26;
          }
          uVar17 = uVar24 - uVar17 * uVar26;
        }
      }
      lVar12 = *plVar1;
      plVar16 = *(long **)(lVar12 + uVar17 * 8);
      if (plVar16 == (long *)0x0) {
        plVar19 = (long *)0x0;
      }
      else {
        bVar21 = false;
        bVar3 = 0;
        do {
          plVar19 = plVar16;
          plVar16 = (long *)*plVar19;
          if (plVar16 == (long *)0x0) break;
          uVar18 = plVar16[1];
          if ((uVar26 & uVar15) == 0) {
            uVar20 = uVar18 & uVar15;
          }
          else {
            uVar20 = uVar18;
            if (uVar26 <= uVar18) {
              uVar20 = 0;
              if (uVar26 != 0) {
                uVar20 = uVar18 / uVar26;
              }
              uVar20 = uVar18 - uVar20 * uVar26;
            }
          }
          if (uVar20 != uVar17) break;
          if (uVar18 == uVar24) {
            bVar7 = (int)plVar16[2] == (int)plVar11[2];
          }
          else {
            bVar7 = false;
          }
          bVar8 = bVar7 != bVar21;
          bVar7 = (bool)(bVar3 & bVar8);
          bVar21 = (bool)(bVar21 | bVar8);
          bVar3 = bVar3 | bVar8;
        } while (!bVar7);
      }
      uVar24 = plVar11[1];
      if ((uVar26 & uVar15) == 0) {
        uVar24 = uVar24 & uVar15;
        if (plVar19 != (long *)0x0) goto LAB_109c19a40;
LAB_109c19a7c:
        plVar16 = (long *)(lVar25 + 0x28);
        *plVar11 = *plVar16;
        *plVar16 = (long)plVar11;
        *(long **)(lVar12 + uVar24 * 8) = plVar16;
        if (*plVar11 != 0) {
          uVar17 = *(ulong *)(*plVar11 + 8);
          if ((uVar26 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar26 <= uVar17) {
            uVar24 = 0;
            if (uVar26 != 0) {
              uVar24 = uVar17 / uVar26;
            }
            uVar17 = uVar17 - uVar24 * uVar26;
          }
LAB_109c19acc:
          *(long **)(*plVar1 + uVar17 * 8) = plVar11;
        }
      }
      else {
        if (uVar26 <= uVar24) {
          uVar17 = 0;
          if (uVar26 != 0) {
            uVar17 = uVar24 / uVar26;
          }
          uVar24 = uVar24 - uVar17 * uVar26;
        }
        if (plVar19 == (long *)0x0) goto LAB_109c19a7c;
LAB_109c19a40:
        *plVar11 = *plVar19;
        *plVar19 = (long)plVar11;
        if (*plVar11 != 0) {
          uVar17 = *(ulong *)(*plVar11 + 8);
          if ((uVar26 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar26 <= uVar17) {
            uVar15 = 0;
            if (uVar26 != 0) {
              uVar15 = uVar17 / uVar26;
            }
            uVar17 = uVar17 - uVar15 * uVar26;
          }
          if (uVar17 == uVar24) goto LAB_109c19ad4;
          goto LAB_109c19acc;
        }
      }
LAB_109c19ad4:
      *(long *)(lVar25 + 0x30) = *(long *)(lVar25 + 0x30) + 1;
      uStack_68 = (long *)0x0;
      func_0x000109c19620(&uStack_68);
      __ZNSt3__15mutex6unlockEv(lVar25 + 0x40);
      goto LAB_109c19af4;
    }
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (plStack_70 == (long *)0x0) {
    return;
  }
LAB_109c19af4:
  plVar1 = plStack_70 + 1;
  do {
    lVar25 = *plVar1;
    cVar4 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar21) {
      *plVar1 = lVar25 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar25 == 0) {
    (**(code **)(*plStack_70 + 0x10))(plStack_70);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
  }
  return;
}



/* Entry: 109c19bd0; end: 109c19c27;  */

long FUN_109c19bd0(long param_1)

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



/* Entry: 109c19c28; end: 109c19c87;  */

void FUN_109c19c28(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109c19c88; end: 109c19dfb;  */

void FUN_109c19c88(long *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar4 = &UNK_10f5a382f;
  FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
  FUN_109c61528(&UNK_10f5a3811,0x1d,param_5 << 2,puVar4,4);
  lVar5 = 0x58;
  __Znwm();
  FUN_109c1106c();
  uVar6 = (ulong)(int)puVar4;
  *param_1 = lVar5;
  param_1[1] = (long)FUN_109c180b4;
  param_1[2] = (long)&PTR_DAT_110b2c028;
  if (param_5 < (ulong)(long)(int)puVar4) {
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    bVar2 = *(byte *)(lVar5 + 0x48);
    uVar1 = *(uint *)(lVar5 + 8) & ((int)*(uint *)(lVar5 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uStack_48 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar5 + 0xc,uVar1);
    if (bVar2 < 9) {
      uStack_44 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
    }
    else {
      uStack_44 = 4;
    }
    iVar3 = 0xf5a384a;
    FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
    _bzero(uVar7,(long)iVar3);
    uVar6 = param_5;
  }
  if (uVar6 != 0) {
    _memmove(*(undefined8 *)(lVar5 + 0x40),param_4,uVar6 << 2);
  }
  return;
}



/* Entry: 109c19dfc; end: 109c19fab;  */

void FUN_109c19dfc(long *param_1,undefined8 param_2,uint *param_3,ushort *param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar4 = &UNK_10f5a382f;
  FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
  FUN_109c61528(&UNK_10f5a3811,0x1d,param_5 << 1,puVar4,2);
  lVar5 = 0x58;
  __Znwm();
  FUN_109c1106c();
  uVar6 = (ulong)(int)puVar4;
  *param_1 = lVar5;
  param_1[1] = (long)FUN_109c180b4;
  param_1[2] = (long)&PTR_DAT_110b2c028;
  if (param_5 < (ulong)(long)(int)puVar4) {
    uVar9 = *(undefined8 *)(lVar5 + 0x40);
    bVar2 = *(byte *)(lVar5 + 0x48);
    uVar1 = *(uint *)(lVar5 + 8) & ((int)*(uint *)(lVar5 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uStack_48 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar5 + 0xc,uVar1);
    if (bVar2 < 9) {
      uStack_44 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
    }
    else {
      uStack_44 = 4;
    }
    iVar3 = 0xf5a384a;
    FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
    _bzero(uVar9,(long)iVar3);
    uVar6 = param_5;
  }
  if (uVar6 != 0) {
    lVar8 = uVar6 << 1;
    piVar7 = *(int **)(lVar5 + 0x40);
    do {
      uVar6 = (ulong)(*param_4 >> 10);
      *piVar7 = *(int *)(&UNK_10e039244 + uVar6 * 4) +
                *(int *)(&UNK_10e037244 +
                        (ulong)((*param_4 & 0x3ff) + (uint)*(ushort *)(&UNK_10e039344 + uVar6 * 2))
                        * 4);
      lVar8 = lVar8 + -2;
      piVar7 = piVar7 + 1;
      param_4 = param_4 + 1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 109c19fac; end: 109c1a11f;  */

void FUN_109c19fac(long *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar4 = &UNK_10f5a382f;
  FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
  FUN_109c61528(&UNK_10f5a3811,0x1d,param_5,puVar4,1);
  lVar5 = 0x58;
  __Znwm();
  FUN_109c1106c();
  uVar6 = (ulong)(int)puVar4;
  *param_1 = lVar5;
  param_1[1] = (long)FUN_109c180b4;
  param_1[2] = (long)&PTR_DAT_110b2c028;
  if (param_5 < (ulong)(long)(int)puVar4) {
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    bVar2 = *(byte *)(lVar5 + 0x48);
    uVar1 = *(uint *)(lVar5 + 8) & ((int)*(uint *)(lVar5 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uStack_48 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar5 + 0xc,uVar1);
    if (bVar2 < 9) {
      uStack_44 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
    }
    else {
      uStack_44 = 4;
    }
    iVar3 = 0xf5a384a;
    FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
    _bzero(uVar7,(long)iVar3);
    uVar6 = param_5;
  }
  if (uVar6 != 0) {
    _memmove(*(undefined8 *)(lVar5 + 0x40),param_4,uVar6);
  }
  return;
}



/* Entry: 109c1a120; end: 109c1a293;  */

void FUN_109c1a120(long *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar4 = &UNK_10f5a382f;
  FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
  FUN_109c61528(&UNK_10f5a3811,0x1d,param_5 << 2,puVar4,4);
  lVar5 = 0x58;
  __Znwm();
  FUN_109c1106c();
  uVar6 = (ulong)(int)puVar4;
  *param_1 = lVar5;
  param_1[1] = (long)FUN_109c180b4;
  param_1[2] = (long)&PTR_DAT_110b2c028;
  if (param_5 < (ulong)(long)(int)puVar4) {
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    bVar2 = *(byte *)(lVar5 + 0x48);
    uVar1 = *(uint *)(lVar5 + 8) & ((int)*(uint *)(lVar5 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uStack_48 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar5 + 0xc,uVar1);
    if (bVar2 < 9) {
      uStack_44 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
    }
    else {
      uStack_44 = 4;
    }
    iVar3 = 0xf5a384a;
    FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
    _bzero(uVar7,(long)iVar3);
    uVar6 = param_5;
  }
  if (uVar6 != 0) {
    _memmove(*(undefined8 *)(lVar5 + 0x40),param_4,uVar6 << 2);
  }
  return;
}



/* Entry: 109c1a294; end: 109c1a447;  */

undefined8 * FUN_109c1a294(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_109c1c428(&uStack_50,0x3200000);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  FUN_109c1c428(&uStack_50,0x500000);
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  plVar4 = (long *)0x98;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110b2c058;
  *plVar4 = (long)&PTR_FUN_110b2c1b0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  *(undefined4 *)(plVar4 + 10) = 0x3f800000;
  plVar4[0xb] = 0x32aaaba7;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x12] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[4] = (long)plVar7;
  plVar4[5] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = plVar7;
  param_1[5] = plVar4;
  param_1[0x12] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  FUN_109c60f3c();
  return param_1;
}


