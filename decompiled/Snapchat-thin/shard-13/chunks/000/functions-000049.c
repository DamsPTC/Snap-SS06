/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109eca8c0; end: 109ecab83;  */

long * FUN_109eca8c0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  FUN_109f658b0(plVar1,0x98);
  if (plVar1 != (long *)0x0) {
    plVar1[0x12] = 0;
    plVar1[0xf] = 0;
    plVar1[0xe] = 0;
    plVar1[0x11] = 0;
    plVar1[0x10] = 0;
    plVar1[0xb] = 0;
    plVar1[10] = 0;
    plVar1[0xd] = 0;
    plVar1[0xc] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[9] = 0;
    plVar1[8] = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
  }
  plVar2 = plVar1;
  FUN_109f65c2c(plVar1,param_3);
  plVar1[2] = param_2;
  plVar1[3] = (long)plVar2;
  plVar1[4] = plVar1[4] & 0xffffffffffe00000U | 0x40000;
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  *plVar1 = param_1 + 0x68;
  plVar1[1] = (long)puVar3;
  *puVar3 = plVar1;
  *(long **)(param_1 + 0x70) = plVar1;
  return plVar1;
}



/* Entry: 109ecab84; end: 109ecabf7;  */

bool FUN_109ecab84(long param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1 + (param_2 & 0xffffffff) * 0x30;
  cVar1 = (&UNK_110b78548)[(ulong)*(uint *)(param_1 + 0x28) * 0x68 + (param_2 & 0xffffffff)];
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x4c);
  }
  if (cVar1 == *(char *)(*(long *)(lVar2 + 0x68) + 0x1c)) {
    lVar2 = lVar2 + 0x70;
    _memcmp(lVar2,0x1132ff060,cVar1);
    return (int)lVar2 == 0;
  }
  return false;
}



/* Entry: 109ecabf8; end: 109ecad83;  */

undefined8 * FUN_109ecabf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar1 = param_1;
  FUN_109f658b0(param_1,0x88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 2) = 3;
  puVar5 = puVar1 + 8;
  *puVar5 = 0;
  puVar1[6] = puVar5;
  puVar1[7] = 0;
  puVar1[9] = puVar1 + 6;
  puVar1[0xd] = 0;
  puVar1[0xb] = puVar1 + 0xd;
  puVar1[0xc] = 0;
  puVar1[0xe] = puVar1 + 0xb;
  puVar1[0xf] = 0;
  *(undefined4 *)((long)puVar1 + 0x84) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 1;
  puVar2 = param_1;
  func_0x000109ecacd8();
  func_0x000109ecacd8();
  puVar2[3] = puVar1;
  param_1[3] = puVar1;
  puVar3 = (undefined8 *)puVar1[9];
  *puVar2 = puVar5;
  puVar2[1] = puVar3;
  *puVar3 = puVar2;
  puVar1[9] = puVar2;
  puVar1[10] = param_1;
  puVar2[9] = param_1;
  lVar4 = param_1[0xb];
  puVar3 = puVar2;
  (**(code **)(lVar4 + 0x10))(puVar2);
  FUN_109f66e48(lVar4,puVar3,puVar2,0);
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar2;
  }
  return puVar1;
}



/* Entry: 109ecad84; end: 109ecae1f;  */

undefined8 * FUN_109ecad84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1;
  FUN_109f658b0(param_1,0x88);
  *(undefined4 *)(puVar1 + 8) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 2) = 1;
  puVar1[7] = 0;
  puVar2 = param_1;
  func_0x000109ecacd8();
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *puVar2 = puVar1 + 0xb;
  puVar1[9] = puVar2;
  puVar2[1] = puVar1 + 9;
  puVar1[0xc] = puVar2;
  puVar2[3] = puVar1;
  func_0x000109ecacd8();
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *param_1 = puVar1 + 0xf;
  puVar1[0xd] = param_1;
  param_1[1] = puVar1 + 0xd;
  puVar1[0x10] = param_1;
  param_1[3] = puVar1;
  return puVar1;
}



/* Entry: 109ecae20; end: 109ecaef7;  */

undefined8 * FUN_109ecae20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = param_1;
  FUN_109f658b0(param_1,0x70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 2) = 2;
  *(undefined2 *)((long)puVar1 + 0x6d) = 0x101;
  func_0x000109ecacd8();
  puVar1[5] = 0;
  puVar1[6] = 0;
  *param_1 = puVar1 + 6;
  puVar1[4] = param_1;
  param_1[1] = puVar1 + 4;
  puVar1[7] = param_1;
  param_1[3] = puVar1;
  param_1[9] = param_1;
  lVar3 = param_1[0xb];
  puVar2 = param_1;
  (**(code **)(lVar3 + 0x10))();
  FUN_109f66e48(lVar3,puVar2,param_1,0);
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 8) = param_1;
  }
  puVar1[10] = 0;
  puVar1[8] = puVar1 + 10;
  puVar1[9] = 0;
  puVar1[0xb] = puVar1 + 8;
  return puVar1;
}



/* Entry: 109ecaef8; end: 109ecafe3;  */

void FUN_109ecaef8(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(byte)(&UNK_110b78540)[(ulong)param_2 * 0x68];
  param_1 = (undefined8 *)*param_1;
  FUN_109f66194(param_1,uVar2 * 0x30 + 0x50,8);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(uint *)(param_1 + 5) = param_2;
  if (uVar2 != 0) {
    puVar1 = param_1 + 0xe;
    do {
      puVar1[-1] = 0;
      puVar1[1] = 0xf0e0d0c0b0a0908;
      *puVar1 = 0x706050403020100;
      uVar2 = uVar2 - 1;
      puVar1 = puVar1 + 6;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109ecafe4; end: 109ecb047;  */

undefined8 * FUN_109ecafe4(undefined8 *param_1,ulong param_2)

{
  param_1 = (undefined8 *)*param_1;
  FUN_109f66194(param_1,(param_2 & 0xffffffff) * 8 + 0x48,8);
  *(undefined4 *)(param_1 + 3) = 5;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109ecb048();
  return param_1;
}



/* Entry: 109ecb048; end: 109ecb0a7;  */

void FUN_109ecb048(long param_1,long *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  long lVar2;
  
  *param_2 = param_1;
  param_2[1] = (long)(param_2 + 1);
  param_2[2] = (long)(param_2 + 1);
  *(undefined1 *)((long)param_2 + 0x1c) = param_3;
  *(undefined1 *)((long)param_2 + 0x1d) = param_4;
  *(undefined2 *)((long)param_2 + 0x1e) = 1;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    return;
  }
  for (; *(int *)(lVar2 + 0x10) != 3; lVar2 = *(long *)(lVar2 + 0x18)) {
  }
  iVar1 = *(int *)(lVar2 + 0x78);
  *(int *)(lVar2 + 0x78) = iVar1 + 1;
  *(int *)(param_2 + 3) = iVar1;
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
  return;
}



/* Entry: 109ecb0a8; end: 109ecb173;  */

void FUN_109ecb0a8(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(byte)(&UNK_110b67190)[(ulong)param_2 * 0x68];
  param_1 = (undefined8 *)*param_1;
  FUN_109f66194(param_1,uVar2 * 0x20 + 0x80,8);
  *(undefined4 *)(param_1 + 3) = 4;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(uint *)(param_1 + 5) = param_2;
  if (uVar2 != 0) {
    puVar1 = param_1 + 0x13;
    do {
      *puVar1 = 0;
      uVar2 = uVar2 - 1;
      puVar1 = puVar1 + 4;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109ecb174; end: 109ecb227;  */

undefined8 * FUN_109ecb174(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_109f6600c(puVar1,0x88,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  *(undefined4 *)(puVar1 + 3) = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(uint *)(puVar1 + 0xc) = param_2;
  lVar2 = *param_1;
  FUN_109f6600c(lVar2,((ulong)param_2 * 4 + (ulong)param_2) * 8,8);
  puVar1[0xb] = lVar2;
  if (param_2 != 0) {
    uVar3 = (ulong)param_2;
    puVar4 = (undefined8 *)(lVar2 + 0x18);
    do {
      *puVar4 = 0;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 5;
    } while (uVar3 != 0);
  }
  puVar1[0xf] = 0;
  *(undefined8 *)((long)puVar1 + 0x6d) = uRam00000001132ff070;
  return puVar1;
}



/* Entry: 109ecb228; end: 109ecb29b;  */

void FUN_109ecb228(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2 != (long *)0x0) && (param_2[3] != 0)) {
    lVar2 = param_2[1];
    plVar1 = (long *)param_2[2];
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if ((param_3 != (long *)0x0) && (param_3[3] != 0)) {
    lVar2 = param_3[1];
    plVar1 = (long *)param_3[2];
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  lVar2 = *param_3;
  lVar4 = param_3[3];
  lVar3 = param_3[2];
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  param_2[3] = lVar4;
  param_2[2] = lVar3;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  if (param_2[3] != 0) {
    plVar1 = (long *)(param_2[3] + 8);
    lVar2 = *plVar1;
    if (param_1 == 0) {
      param_1 = 1;
    }
    *param_2 = param_1;
    param_2[2] = (long)plVar1;
    param_2 = param_2 + 1;
    *param_2 = lVar2;
    *(long **)(lVar2 + 8) = param_2;
    *plVar1 = (long)param_2;
  }
  return;
}



/* Entry: 109ecb29c; end: 109ecb353;  */

void FUN_109ecb29c(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)param_2 * 0x28);
  if ((*(long *)(param_1 + 0x58) != 0) && (puVar4[3] != 0)) {
    lVar6 = puVar4[1];
    plVar2 = (long *)puVar4[2];
    *(long **)(lVar6 + 8) = plVar2;
    *plVar2 = lVar6;
  }
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  uVar1 = param_2 + 1;
  uVar5 = (ulong)uVar1;
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar1 < uVar3) {
    lVar6 = (uVar5 * 4 + (ulong)uVar1) * 8;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x58) + (ulong)param_2 * 0x28 + 0x20) =
           *(undefined4 *)(*(long *)(param_1 + 0x58) + lVar6 + 0x20);
      FUN_109ecb228(param_1);
      uVar5 = uVar5 + 1;
      uVar3 = *(uint *)(param_1 + 0x60);
      param_2 = param_2 + 1;
      lVar6 = lVar6 + 0x28;
    } while (uVar5 < uVar3);
  }
  *(uint *)(param_1 + 0x60) = uVar3 - 1;
  return;
}



/* Entry: 109ecb354; end: 109ecb403;  */

void FUN_109ecb354(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  lVar1 = 0;
  if ((char)*(byte *)(param_1 + -1) < '\0') {
    lVar1 = -((ulong)*(byte *)(param_1 + -1) & 0x7f);
  }
  lVar1 = param_1 + lVar1;
  if (*(byte *)(lVar1 + -2) < 0x10) {
    plVar2 = *(long **)((lVar1 + -4) - (ulong)*(ushort *)(lVar1 + -4));
  }
  else {
    plVar2 = (long *)0x0;
    if (*(long *)(lVar1 + -0x34) != 0) {
      plVar2 = (long *)(*(long *)(lVar1 + -0x34) + 0x30);
    }
  }
  FUN_109f6600c(plVar2,0x38,8);
  if (plVar2 != (long *)0x0) {
    plVar2[6] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
  }
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = param_3;
  plVar2[2] = param_2;
  plVar2[3] = param_1;
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  *plVar2 = param_1 + 0x38;
  plVar2[1] = (long)puVar3;
  *puVar3 = plVar2;
  *(long **)(param_1 + 0x40) = plVar2;
  return;
}



/* Entry: 109ecb404; end: 109ecb463;  */

void FUN_109ecb404(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (ulong)(param_3 + 1) + 0x80;
  if (param_2 != 1) {
    lVar1 = 0x80;
  }
  param_1 = (undefined8 *)*param_1;
  FUN_109f66194(param_1,lVar1,1);
  *(undefined4 *)(param_1 + 3) = 10;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(int *)(param_1 + 5) = param_2;
  if (param_2 == 1) {
    *(short *)(param_1 + 6) = (short)param_3;
  }
  return;
}



/* Entry: 109ecb464; end: 109ecb4ef;  */

undefined1  [16] FUN_109ecb464(ulong param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  while( true ) {
    uVar2 = param_1 & 0xffffffff00000000;
    iVar1 = (int)param_1;
    if (iVar1 != 2) break;
    puVar4 = (undefined8 *)param_2[1];
    if (puVar4 == (undefined8 *)0x0 || puVar4[1] == 0) {
      param_1 = 0;
      puVar4 = (undefined8 *)param_2[2];
    }
    else {
      param_1 = 3;
    }
    param_1 = param_1 | uVar2;
    param_2 = puVar4;
  }
  if (iVar1 != 3) {
    if (iVar1 == 1) {
      auVar5._0_8_ = uVar2 | 1;
      auVar5._8_8_ = param_2;
      return auVar5;
    }
    if ((undefined8 *)param_2[4] == param_2 + 6) {
      uVar2 = uVar2 + 1;
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = uVar2;
    return auVar6;
  }
  if (*(long *)*param_2 == 0) {
    param_2 = (undefined8 *)param_2[2];
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  auVar7._0_8_ = uVar3 | uVar2;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 109ecb4f0; end: 109ecb8df;  */

void FUN_109ecb4f0(int param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      if (param_1 != 1) goto LAB_109ecb59c;
      param_3[2] = (long)param_2;
      func_0x000109ecb5e0(param_3);
      plVar3 = param_2 + 7;
      puVar1 = (undefined8 *)*plVar3;
      *param_3 = (long)(param_2 + 6);
      goto LAB_109ecb590;
    }
    param_3[2] = (long)param_2;
    func_0x000109ecb5e0(param_3);
    param_2 = param_2 + 4;
    lVar2 = *param_2;
LAB_109ecb56c:
    *param_3 = lVar2;
    param_3[1] = (long)param_2;
    puVar1 = (undefined8 *)(lVar2 + 8);
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_109ecb59c;
      param_3[2] = param_2[2];
      func_0x000109ecb5e0(param_3);
      lVar2 = *param_2;
      goto LAB_109ecb56c;
    }
    param_3[2] = param_2[2];
    func_0x000109ecb5e0(param_3);
    *param_3 = (long)param_2;
    plVar3 = param_2 + 1;
    puVar1 = (undefined8 *)*plVar3;
LAB_109ecb590:
    param_3[1] = (long)puVar1;
    param_2 = plVar3;
  }
  *puVar1 = param_3;
  *param_2 = (long)param_3;
LAB_109ecb59c:
  if ((int)param_3[3] == 6) {
    FUN_109ef80a0(param_3[2]);
  }
  for (lVar2 = param_3[2]; *(int *)(lVar2 + 0x10) != 3; lVar2 = *(long *)(lVar2 + 0x18)) {
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf;
  return;
}



/* Entry: 109ecb8e0; end: 109ecb9bf;  */

undefined8 FUN_109ecb8e0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      if ((long *)param_3[2] == param_2) {
        lVar3 = *(long *)(param_3[1] + 8);
        goto joined_r0x000109ecb964;
      }
    }
    else if ((iVar5 == 1) && ((long *)param_3[2] == param_2)) {
      lVar3 = *(long *)*param_3;
joined_r0x000109ecb964:
      if (lVar3 == 0) goto LAB_109ecb9ac;
    }
LAB_109ecb98c:
    FUN_109ecb9c0(param_3);
    FUN_109ecb4f0(param_1,param_2,param_3);
    uVar2 = 1;
  }
  else {
    if (iVar5 == 3) {
      if (param_3 != param_2) {
        plVar4 = (long *)*param_2;
        lVar3 = *plVar4;
LAB_109ecb97c:
        plVar1 = (long *)0;
        if (lVar3 != 0) {
          plVar1 = plVar4;
        }
        if (plVar1 != param_3) goto LAB_109ecb98c;
      }
    }
    else {
      if (iVar5 != 2) goto LAB_109ecb98c;
      if (param_3 != param_2) {
        plVar4 = (long *)param_2[1];
        lVar3 = plVar4[1];
        goto LAB_109ecb97c;
      }
    }
LAB_109ecb9ac:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 109ecb9c0; end: 109ecbc57;  */

void FUN_109ecb9c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109ecb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e06c3ab)[*(uint *)(param_1 + 0x18)] * 4 + 0x109ecb9e8))();
  return;
}



/* Entry: 109ecbc58; end: 109ecbceb;  */

/* WARNING: Possible PIC construction at 0x000109ecbcd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecbc98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ecbc9c) */
/* WARNING: Removing unreachable block (ram,0x000109ecbca0) */
/* WARNING: Removing unreachable block (ram,0x000109ecbca8) */
/* WARNING: Removing unreachable block (ram,0x000109ecbccc) */
/* WARNING: Removing unreachable block (ram,0x000109ecbcb4) */
/* WARNING: Removing unreachable block (ram,0x000109ecbcc8) */

void FUN_109ecbc58(long *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x19;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined1 *unaff_x29;
  undefined8 uVar13;
  undefined8 unaff_x30;
  undefined8 uVar14;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar5 = param_1;
  if ((int)param_1[3] == 8) {
    lVar6 = *(long *)param_1[5];
    if (lVar6 != 0) {
      unaff_x30 = 0x109ecbc9c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      plVar5 = (long *)param_1[5];
      unaff_x19 = param_1;
      unaff_x20 = lVar6;
      unaff_x29 = puVar1;
    }
  }
  else if ((int)param_1[3] == 3) {
    unaff_x30 = 0x109ecbcd8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    plVar5 = (long *)param_1[0xb];
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar6 = 0;
  if ((char)*(byte *)((long)plVar5 + -1) < '\0') {
    lVar6 = -((ulong)*(byte *)((long)plVar5 + -1) & 0x7f);
  }
  plVar5 = (long *)((long)plVar5 + lVar6);
  *(byte *)((long)plVar5 + -1) = *(byte *)((long)plVar5 + -1) & 0xfe;
  if (0xf < *(byte *)((long)plVar5 + -2)) {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar5 = (long *)((long)plVar5 + -0x34);
    FUN_109f65aa4(plVar5);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
code_r0x000109f65ae0:
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x10) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar14;
    lVar6 = plVar5[1];
    while (lVar6 != 0) {
      plVar5[1] = *(long *)(lVar6 + 0x18);
      FUN_109f65ae0();
      lVar6 = plVar5[1];
    }
    if ((code *)plVar5[4] != (code *)0x0) {
      (*(code *)plVar5[4])(plVar5 + 6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar5);
    return;
  }
  puVar3 = (ushort *)((long)plVar5 + -4);
  plVar4 = (long *)((long)puVar3 - (ulong)*puVar3);
  if ((int)plVar4[7] == 1) {
    plVar7 = (long *)plVar4[6];
    if ((plVar7 == (long *)0x0 || plVar7 == plVar4 + 5) || ((long *)plVar7[1] != plVar4 + 5)) {
      plVar5 = (long *)plVar4[6];
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar4[5];
        *(long **)(lVar6 + 8) = plVar5;
        *plVar5 = lVar6;
        plVar4[5] = 0;
        plVar4[6] = 0;
      }
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar6 = plVar4[3];
      plVar5 = (long *)plVar4[4];
      *(long **)(lVar6 + 8) = plVar5;
      *plVar5 = lVar6;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar5 = plVar4 + -6;
      FUN_109f65aa4(plVar5);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000109f65ae0;
    }
  }
  uVar2 = *(uint *)((long)plVar4 + 0x3c);
  plVar7 = plVar4 + 5;
  if (uVar2 == 0) {
    lVar6 = *plVar4 + (ulong)*(byte *)((long)plVar5 + -2) * 0x20;
    plVar8 = *(long **)(lVar6 + 0x18);
    plVar4[5] = lVar6 + 0x10;
    plVar4[6] = (long)plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(lVar6 + 0x18) = plVar7;
  }
  else {
    lVar6 = *plVar4;
    while ((plVar8 = (long *)plVar4[6],
           plVar8 != (long *)(lVar6 + (ulong)*(byte *)((long)plVar5 + -2) * 0x20 + 0x10) &&
           (*(uint *)((long)plVar8 + 0x14) < uVar2))) {
      lVar9 = plVar4[5];
      *(long **)(lVar9 + 8) = plVar8;
      *plVar8 = lVar9;
      plVar4[5] = (long)plVar8;
      plVar4[6] = 0;
      plVar10 = (long *)plVar8[1];
      plVar4[6] = (long)plVar10;
      *plVar10 = (long)plVar7;
      plVar8[1] = (long)plVar7;
    }
  }
  *plVar5 = plVar4[2];
  plVar4[2] = (long)puVar3;
  plVar4[7] = CONCAT44((int)((ulong)plVar4[7] >> 0x20) + 1,(int)plVar4[7] + -1);
  return;
}



/* Entry: 109ecbcec; end: 109ecbd37;  */

void FUN_109ecbcec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 2 && plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    FUN_109ecbc58();
    plVar3 = (long *)*param_1;
  }
  return;
}



/* Entry: 109ecbd38; end: 109ecc0ab;  */

uint FUN_109ecbd38(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar2 = (uint *)0x18;
  _malloc();
  if (puVar2 != (uint *)0x0) {
    puVar2[2] = 8;
    puVar2[3] = 0x40;
    puVar2[0] = 0;
    puVar2[1] = 0;
    lVar3 = 0x40;
    _malloc();
    *(long *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      _free(puVar2);
      puVar2 = (uint *)0x0;
    }
  }
  func_0x000109ecbea0(puVar2,param_1);
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0 || plVar4[1] == 0) {
    uVar6 = 0;
    plVar4 = *(long **)(param_1 + 0x10);
  }
  else {
    uVar6 = 3;
  }
  FUN_109ecb9c0(param_1);
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &uStack_50;
  plStack_48 = (long *)&puStack_60;
  while (uVar1 = puVar2[1], *puVar2 != uVar1) {
    puVar2[1] = puVar2[2] + uVar1;
    if ((*(long *)(puVar2 + 4) == 0) ||
       (plVar5 = *(long **)(*(long *)(puVar2 + 4) + (ulong)(puVar2[3] - 1 & uVar1)),
       plVar5 == (long *)0x0)) break;
    func_0x000109ecbea0(puVar2,plVar5);
    if (((uVar6 & 0xfffffffe) == 2) && (plVar4 == plVar5)) {
      plVar4 = (long *)plVar5[1];
      if (plVar4 == (long *)0x0 || plVar4[1] == 0) {
        uVar6 = 0;
        plVar4 = (long *)plVar5[2];
      }
      else {
        uVar6 = 3;
      }
    }
    FUN_109ecb9c0(plVar5);
    *plVar5 = (long)&uStack_50;
    plVar5[1] = (long)plStack_48;
    *plStack_48 = (long)plVar5;
    plStack_48 = plVar5;
  }
  FUN_109ecbcec(&puStack_60);
  _free(*(undefined8 *)(puVar2 + 4));
  _free(puVar2);
  return uVar6;
}



/* Entry: 109ecc0ac; end: 109ecc127;  */

void FUN_109ecc0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109ecc0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e06c3c1)[*(uint *)(param_1 + 0x18)] * 4 + 0x109ecc0d0))(param_1,0)
  ;
  return;
}



/* Entry: 109ecc128; end: 109ecc173;  */

double FUN_109ecc128(double param_1,ulong param_2)

{
  double dStack_18;
  
  dStack_18 = param_1;
  if ((int)param_2 != 0x40) {
    if ((int)param_2 == 0x20) {
      dStack_18 = (double)(ulong)(uint)(float)param_1;
    }
    else {
      FUN_109f64b28();
      dStack_18 = (double)(param_2 & 0xffff);
    }
  }
  return dStack_18;
}



/* Entry: 109ecc174; end: 109ecc367;  */

ulong FUN_109ecc174(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(uVar4 + 0x18) != 8) {
      return *(ulong *)(uVar4 + 0x10);
    }
    return param_1[-1];
  }
  uVar4 = uVar4 & 0xfffffffffffffffe;
  if (*(int *)(uVar4 + 0x10) == 3) {
    return 0;
  }
  if (*(int *)(uVar4 + 0x10) != 0) {
    uVar2 = 0;
    if (*(long *)(*(ulong *)(uVar4 + 8) + 8) != 0) {
      uVar2 = *(ulong *)(uVar4 + 8);
    }
    return uVar2;
  }
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(uVar4 + 8);
    if (uVar2 == 0 || *(long *)(uVar2 + 8) == 0) {
      uVar2 = *(ulong *)(uVar4 + 0x18);
      iVar1 = *(int *)(uVar2 + 0x10);
      if (iVar1 != 3) {
        uVar3 = uVar2;
        FUN_109ecc4d4();
        if (uVar3 == uVar4) {
          if (*(long *)(*(ulong *)(uVar2 + 8) + 8) == 0) {
            return 0;
          }
          return *(ulong *)(uVar2 + 8);
        }
        if (iVar1 == 1) {
          if (*(long *)(uVar2 + 0x48) != uVar2 + 0x58) {
            return *(ulong *)(uVar2 + 0x60);
          }
        }
        else if (*(long *)(uVar2 + 0x20) != uVar2 + 0x30) {
          return *(ulong *)(uVar2 + 0x38);
        }
      }
      return 0;
    }
    iVar1 = *(int *)(uVar2 + 0x10);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        return uVar2;
      }
      if (*(long *)(uVar2 + 0x68) == uVar2 + 0x78) {
        return 0;
      }
      lVar5 = 0x80;
    }
    else if (iVar1 == 2) {
      if (*(long *)(uVar2 + 0x40) == uVar2 + 0x50) {
        if (*(long *)(uVar2 + 0x20) == uVar2 + 0x30) {
          return 0;
        }
        lVar5 = 0x38;
      }
      else {
        lVar5 = 0x58;
      }
    }
    else {
      lVar5 = 0x48;
    }
    return *(ulong *)(uVar2 + lVar5);
  }
  return 0;
}



/* Entry: 109ecc368; end: 109ecc3f7;  */

uint FUN_109ecc368(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == param_1 + 8) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      pbVar2 = (byte *)(lVar4 + -8);
      if ((*pbVar2 & 1) == 0) {
        func_0x000109ecc26c();
        uVar1 = (uint)pbVar2;
      }
      else {
        uVar1 = 1;
      }
      uVar3 = uVar1 | uVar3;
    } while (((-1 << (ulong)(*(byte *)(param_1 + 0x1c) & 0x1f) ^ uVar3 & 0xffff) != 0xffffffff) &&
            (lVar4 = *(long *)(lVar4 + 8), lVar4 != param_1 + 8));
  }
  return uVar3 & 0xffff;
}



/* Entry: 109ecc3f8; end: 109ecc433;  */

long * FUN_109ecc3f8(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar5 = (long *)*param_1;
  if (*plVar5 == 0) {
    if (*(int *)(param_1[3] + 0x10) == 3) {
      return (long *)0x0;
    }
  }
  else if ((int)plVar5[2] == 0) {
    return plVar5;
  }
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar5 = (long *)*param_1;
  if (*plVar5 != 0) {
    iVar1 = (int)plVar5[2];
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        return plVar5;
      }
      plVar6 = (long *)plVar5[9];
      plVar5 = plVar5 + 0xb;
    }
    else {
      if (iVar1 != 2) {
        return (long *)plVar5[6];
      }
      plVar6 = (long *)plVar5[4];
      plVar5 = plVar5 + 6;
    }
    plVar4 = (long *)0x0;
    if (plVar6 != plVar5) {
      plVar4 = plVar6;
    }
    return plVar4;
  }
  plVar5 = (long *)param_1[3];
  lVar2 = plVar5[2];
  if ((int)lVar2 != 3) {
    plVar6 = plVar5;
    func_0x000109ecc514();
    if (plVar6 == param_1) {
      plVar6 = (long *)*plVar5;
      bVar3 = *plVar6 == 0;
    }
    else {
      if ((int)lVar2 == 1) {
        plVar6 = (long *)plVar5[0xd];
        plVar5 = plVar5 + 0xf;
      }
      else {
        plVar6 = (long *)plVar5[8];
        plVar5 = plVar5 + 10;
      }
      bVar3 = plVar6 == plVar5;
    }
    if (!bVar3) {
      return plVar6;
    }
    return (long *)0x0;
  }
  return (long *)0x0;
}



/* Entry: 109ecc434; end: 109ecc4d3;  */

long * FUN_109ecc434(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar4 = (long *)*param_1;
  if (*plVar4 != 0) {
    iVar1 = (int)plVar4[2];
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        return plVar4;
      }
      plVar6 = (long *)plVar4[9];
      plVar4 = plVar4 + 0xb;
    }
    else {
      if (iVar1 != 2) {
        return (long *)plVar4[6];
      }
      plVar6 = (long *)plVar4[4];
      plVar4 = plVar4 + 6;
    }
    plVar5 = (long *)0x0;
    if (plVar6 != plVar4) {
      plVar5 = plVar6;
    }
    return plVar5;
  }
  plVar4 = (long *)param_1[3];
  lVar2 = plVar4[2];
  if ((int)lVar2 == 3) {
    return (long *)0x0;
  }
  plVar6 = plVar4;
  func_0x000109ecc514();
  if (plVar6 == param_1) {
    plVar6 = (long *)*plVar4;
    bVar3 = *plVar6 == 0;
  }
  else {
    if ((int)lVar2 == 1) {
      plVar6 = (long *)plVar4[0xd];
      plVar4 = plVar4 + 0xf;
    }
    else {
      plVar6 = (long *)plVar4[8];
      plVar4 = plVar4 + 10;
    }
    bVar3 = plVar6 == plVar4;
  }
  if (bVar3) {
    return (long *)0x0;
  }
  return plVar6;
}



/* Entry: 109ecc4d4; end: 109ecc587;  */

long FUN_109ecc4d4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      return param_1;
    }
    lVar3 = *(long *)(param_1 + 0x48);
    param_1 = param_1 + 0x58;
  }
  else {
    if (iVar1 != 2) {
      return *(long *)(param_1 + 0x30);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    param_1 = param_1 + 0x30;
  }
  lVar2 = 0;
  if (lVar3 != param_1) {
    lVar2 = lVar3;
  }
  return lVar2;
}



/* Entry: 109ecc588; end: 109ecc643;  */

long FUN_109ecc588(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0 || *(long *)(lVar2 + 8) == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    iVar1 = *(int *)(lVar2 + 0x10);
    if (iVar1 != 3) {
      lVar3 = lVar2;
      FUN_109ecc4d4();
      if (lVar3 == param_1) {
        if (*(long *)(*(long *)(lVar2 + 8) + 8) == 0) {
          return 0;
        }
        return *(long *)(lVar2 + 8);
      }
      if (iVar1 == 1) {
        if (*(long *)(lVar2 + 0x48) != lVar2 + 0x58) {
          return *(long *)(lVar2 + 0x60);
        }
      }
      else if (*(long *)(lVar2 + 0x20) != lVar2 + 0x30) {
        return *(long *)(lVar2 + 0x38);
      }
    }
    return 0;
  }
  iVar1 = *(int *)(lVar2 + 0x10);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      return lVar2;
    }
    if (*(long *)(lVar2 + 0x68) == lVar2 + 0x78) {
      return 0;
    }
    lVar3 = 0x80;
  }
  else if (iVar1 == 2) {
    if (*(long *)(lVar2 + 0x40) == lVar2 + 0x50) {
      if (*(long *)(lVar2 + 0x20) == lVar2 + 0x30) {
        return 0;
      }
      lVar3 = 0x38;
    }
    else {
      lVar3 = 0x58;
    }
  }
  else {
    lVar3 = 0x48;
  }
  return *(long *)(lVar2 + lVar3);
}



/* Entry: 109ecc644; end: 109ecc673;  */

long * FUN_109ecc644(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((int)param_1[2] == 3) {
    return (long *)0x0;
  }
  if ((int)param_1[2] != 0) {
    plVar4 = (long *)0x0;
    if (*(long *)*param_1 != 0) {
      plVar4 = (long *)*param_1;
    }
    return plVar4;
  }
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar4 = (long *)*param_1;
  if (*plVar4 != 0) {
    iVar1 = (int)plVar4[2];
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        return plVar4;
      }
      plVar6 = (long *)plVar4[9];
      plVar4 = plVar4 + 0xb;
    }
    else {
      if (iVar1 != 2) {
        return (long *)plVar4[6];
      }
      plVar6 = (long *)plVar4[4];
      plVar4 = plVar4 + 6;
    }
    plVar5 = (long *)0x0;
    if (plVar6 != plVar4) {
      plVar5 = plVar6;
    }
    return plVar5;
  }
  plVar4 = (long *)param_1[3];
  lVar2 = plVar4[2];
  if ((int)lVar2 == 3) {
    return (long *)0x0;
  }
  plVar6 = plVar4;
  func_0x000109ecc514();
  if (plVar6 == param_1) {
    plVar6 = (long *)*plVar4;
    bVar3 = *plVar6 == 0;
  }
  else {
    if ((int)lVar2 == 1) {
      plVar6 = (long *)plVar4[0xd];
      plVar4 = plVar4 + 0xf;
    }
    else {
      plVar6 = (long *)plVar4[8];
      plVar4 = plVar4 + 10;
    }
    bVar3 = plVar6 == plVar4;
  }
  if (bVar3) {
    return (long *)0x0;
  }
  return plVar6;
}



/* Entry: 109ecc674; end: 109ecc76b;  */

undefined8 * FUN_109ecc674(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  
  FUN_109f658b0(param_2,(ulong)*(uint *)(*(long *)(param_1 + 0x58) + 0x40) << 3);
  lVar1 = *(long *)(param_1 + 0x58);
  if (*(uint *)(lVar1 + 0x20) != 0) {
    lVar4 = (ulong)*(uint *)(lVar1 + 0x20) << 4;
    lVar3 = *(long *)(lVar1 + 8);
    do {
      lVar2 = lVar3 + 0x10;
      puVar5 = *(undefined **)(lVar3 + 8);
      if (puVar5 != (undefined *)0x0 && puVar5 != &UNK_10e47dcd0) {
        *param_2 = puVar5;
        lVar1 = *(long *)(param_1 + 0x58);
        lVar4 = *(long *)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x20) * 0x10;
        if (lVar2 != lVar4) {
          uVar6 = 1;
          goto LAB_109ecc704;
        }
        break;
      }
      lVar4 = lVar4 + -0x10;
      lVar3 = lVar2;
    } while (lVar4 != 0);
  }
  goto LAB_109ecc744;
  while (lVar3 != lVar4) {
LAB_109ecc704:
    lVar3 = lVar2 + 0x10;
    puVar5 = *(undefined **)(lVar2 + 8);
    lVar2 = lVar3;
    if (puVar5 != (undefined *)0x0 && puVar5 != &UNK_10e47dcd0) {
      param_2[uVar6] = puVar5;
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar1 = *(long *)(param_1 + 0x58);
      lVar4 = *(long *)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x20) * 0x10;
      if (lVar3 == lVar4) break;
      goto LAB_109ecc704;
    }
  }
LAB_109ecc744:
  _qsort(param_2,*(undefined4 *)(lVar1 + 0x40),8,FUN_109ecc76c);
  return param_2;
}



/* Entry: 109ecc76c; end: 109ecc783;  */

int FUN_109ecc76c(long *param_1,long *param_2)

{
  return *(int *)(*param_1 + 0x40) - *(int *)(*param_2 + 0x40);
}



/* Entry: 109ecc784; end: 109ecc7db;  */

void FUN_109ecc784(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 1;
        *(int *)(lVar1 + 0x40) = iVar2;
        FUN_109ecc3f8();
        iVar2 = iVar3;
      } while (lVar1 != 0);
    }
    *(int *)(*(long *)(param_1 + 0x50) + 0x40) = iVar3;
    *(int *)(param_1 + 0x7c) = iVar3;
  }
  return;
}



/* Entry: 109ecc7dc; end: 109ecc8fb;  */

void FUN_109ecc7dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  lVar1 = *(long *)(param_1 + 0x30);
  while( true ) {
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      return;
    }
    lVar2 = **(long **)(lVar1 + 0x20);
    if (lVar2 != 0) break;
    FUN_109ecc3f8();
  }
                    /* WARNING: Could not recover jumptable at 0x000109ecc848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e06c3cc)[*(uint *)(*(long **)(lVar1 + 0x20) + 3)] * 4 +
            0x109ecc824))(lVar2);
  return;
}



/* Entry: 109ecc8fc; end: 109ecc9d7;  */

int FUN_109ecc8fc(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      *(int *)(lVar4 + 0x88) = iVar5;
      plVar2 = *(long **)(lVar4 + 0x20);
      for (plVar3 = (long *)**(long **)(lVar4 + 0x20); plVar3 != (long *)0x0;
          plVar3 = (long *)*plVar3) {
        iVar5 = iVar5 + 1;
        *(int *)(plVar2 + 4) = iVar5;
        plVar2 = plVar3;
      }
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 2;
      *(int *)(lVar4 + 0x8c) = iVar1;
      FUN_109ecc434();
    } while (lVar4 != 0);
  }
  return iVar5;
}



/* Entry: 109ecc9d8; end: 109eccc7b;  */

byte FUN_109ecc9d8(long param_1,code *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long ****pppplVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  long *plVar9;
  long *plVar10;
  byte bVar11;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long **pplStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pplStack_88 = (long **)0x0;
  plStack_80 = (long *)0x0;
  uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uStack_78 = 0;
  plVar9 = *(long **)(param_1 + 0x30);
  if ((int)plVar9[2] == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = plVar9 + 1;
    plVar9 = (long *)0x0;
    if (((long *)*plVar2)[1] != 0) {
      plVar9 = (long *)*plVar2;
    }
    plVar2 = (long *)0x1;
  }
  bVar11 = 0;
  uVar4 = 3;
  lStack_68 = param_1;
LAB_109ecca54:
  do {
    while( true ) {
      iVar1 = (int)plVar2;
      if (1 < iVar1) break;
      if (iVar1 == 0) {
        if (plVar9 != (long *)0x0) {
          while (plVar10 = (long *)plVar9[4], plVar10 == plVar9 + 6 || plVar10 == (long *)0x0) {
            FUN_109ecc434();
            if (plVar9 == (long *)0x0) goto LAB_109eccc44;
          }
          goto LAB_109eccacc;
        }
        goto LAB_109eccc44;
      }
      FUN_109ecc434();
      plVar2 = (long *)0x0;
      if (plVar9 == (long *)0x0) {
LAB_109eccc44:
        if (bVar11 == 0) {
          uVar4 = 0xfffffff7;
        }
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & uVar4;
        return bVar11;
      }
    }
    if (iVar1 == 2) {
      plVar10 = plVar9;
      if (plVar9 == (long *)0x0) goto LAB_109eccc44;
    }
    else {
      plVar10 = (long *)*plVar9;
      if (*(long *)*plVar9 == 0) {
        plVar2 = (long *)0x1;
        plVar9 = (long *)plVar9[2];
        goto LAB_109ecca54;
      }
    }
LAB_109eccacc:
    plVar9 = plVar10;
    if ((param_2 == (code *)0x0) ||
       (plVar2 = plVar10, (*param_2)(plVar10,param_4), (int)plVar2 != 0)) {
      plVar2 = plVar10;
      FUN_109ecc0ac();
      if (plVar2 != (long *)0x0) {
        ppppplVar5 = (long *****)(plVar2 + 1);
        ppppplVar6 = (long *****)plVar2[2];
        if (ppppplVar6 == ppppplVar5) {
          ppppplVar7 = &pppplStack_98;
          pppplStack_98 = (long ****)ppppplVar7;
        }
        else {
          pppplStack_98 = *ppppplVar5;
          *ppppplVar6 = (long ****)&pppplStack_98;
          ppppplVar7 = (long *****)*ppppplVar5;
          pppplStack_90 = (long ****)ppppplVar6;
        }
        ppppplVar7[1] = (long ****)&pppplStack_98;
        plVar2[1] = (long)(plVar2 + 1);
        plVar2[2] = (long)ppppplVar5;
      }
      pplStack_88 = (long **)0x3;
      pppplVar3 = (long ****)&pplStack_88;
      plStack_80 = plVar10;
      (*param_3)(pppplVar3,plVar10,param_4);
      if (pppplVar3 < (long ****)0x3) {
        if (plVar2 != (long *)0x0) {
          ppppplVar5 = (long *****)(plVar2 + 1);
          if ((long *****)pppplStack_90 == &pppplStack_98) {
            *ppppplVar5 = (long ****)ppppplVar5;
            ppppplVar6 = ppppplVar5;
          }
          else {
            plVar2[1] = (long)pppplStack_98;
            plVar2[2] = (long)pppplStack_90;
            *pppplStack_90 = (long ***)ppppplVar5;
            ppppplVar6 = (long *****)pppplStack_98;
          }
          ppppplVar6[1] = (long ****)ppppplVar5;
        }
        plVar2 = (long *)0x3;
        if (pppplVar3 == (long ****)0x2) {
          FUN_109ecbd38();
          bVar11 = 1;
          plVar2 = plVar10;
          plVar10 = plVar9;
        }
        bVar11 = pppplVar3 == (long ****)0x1 | bVar11;
        plVar9 = plVar10;
      }
      else {
        if ((*pppplVar3)[2] != (long **)plVar10[2]) {
          uVar4 = 0;
        }
        if ((long *****)pppplStack_90 != &pppplStack_98) {
          ppppplVar5 = (long *****)pppplStack_90;
          do {
            pppplVar8 = *ppppplVar5;
            ppppplVar6 = (long *****)ppppplVar5[1];
            pppplVar8[1] = (long ***)ppppplVar6;
            *ppppplVar6 = pppplVar8;
            ppppplVar5[1] = pppplVar3 + 1;
            ppppplVar5[2] = pppplVar3;
            *ppppplVar5 = (long ****)0x0;
            pppplVar8 = (long ****)pppplVar3[1];
            *ppppplVar5 = pppplVar8;
            pppplVar8[1] = (long ***)ppppplVar5;
            pppplVar3[1] = (long ***)ppppplVar5;
            ppppplVar5 = ppppplVar6;
          } while (ppppplVar6 != &pppplStack_98);
        }
        if ((long *)plVar2[2] == plVar2 + 1) {
          FUN_109ecbd38();
          bVar11 = 1;
          plVar2 = plVar10;
        }
        else {
          bVar11 = 1;
          plVar2 = (long *)0x3;
          plVar9 = plVar10;
        }
      }
    }
    else {
      plVar2 = (long *)0x3;
    }
  } while( true );
}



/* Entry: 109eccc7c; end: 109eccd2f;  */

uint FUN_109eccc7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar4 = 0;
LAB_109ecccc4:
      return uVar4 & 1;
    }
    uVar2 = plVar5[6];
    if (uVar2 != 0) {
      FUN_109ecc9d8(uVar2,param_2,param_3,param_4);
      do {
        uVar4 = (uint)uVar2;
        plVar5 = (long *)*plVar5;
        plVar1 = (long *)*plVar5;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109ecccc4;
          lVar3 = plVar5[6];
          if (lVar3 != 0) break;
          plVar5 = plVar1;
          plVar1 = (long *)*plVar1;
        }
        FUN_109ecc9d8(lVar3,param_2,param_3,param_4);
        uVar2 = (ulong)((uint)lVar3 | uVar4);
      } while( true );
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109eccd30; end: 109ecd2fb;  */

undefined4 FUN_109eccd30(ulong param_1)

{
  return *(undefined4 *)(&UNK_10e06c4e8 + (param_1 & 0xffffffff) * 4);
}



/* Entry: 109ecd2fc; end: 109ecd62b;  */

void FUN_109ecd2fc(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 auStack_90 [16];
  undefined8 uStack_10;
  
  uStack_10 = 0;
  auStack_90[0xd] = 0;
  auStack_90[0xc] = 0;
  auStack_90[0xf] = 0;
  auStack_90[0xe] = 0;
  auStack_90[9] = 0;
  auStack_90[8] = 0;
  auStack_90[0xb] = 0;
  auStack_90[10] = 0;
  auStack_90[5] = 0;
  auStack_90[4] = 0;
  auStack_90[7] = 0;
  auStack_90[6] = 0;
  auStack_90[1] = 0;
  auStack_90[0] = 0;
  auStack_90[3] = 0;
  auStack_90[2] = 0;
  lStack_a8 = 0;
  uStack_98 = 0;
  plVar10 = (long *)param_2[3];
  lVar3 = *plVar10;
  if (*(int *)(lVar3 + 0x18) == 1) {
    for (lVar8 = *(long *)(lVar3 + 0x30); bVar1 = *(byte *)(lVar8 + 4), bVar1 == 0x13;
        lVar8 = *(long *)(lVar8 + 0x30)) {
    }
    uVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x28) == 1) {
        if ((bVar1 | 2) == 0xf) {
          if (uVar6 == 4) goto LAB_109ecd608;
          uVar9 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          uVar12 = *(undefined8 *)(lVar3 + 0x58);
          uVar14 = *(undefined8 *)(lVar3 + 0x70);
          uVar13 = *(undefined8 *)(lVar3 + 0x68);
          auStack_90[uVar9 * 4 + 1] = *(undefined8 *)(lVar3 + 0x60);
          auStack_90[uVar9 * 4] = uVar12;
          auStack_90[uVar9 * 4 + 3] = uVar14;
          auStack_90[uVar9 * 4 + 2] = uVar13;
        }
      }
      else if (*(int *)(lVar3 + 0x28) == 0) {
        uStack_98 = (ulong)uVar6;
        lStack_a8 = *(long *)(lVar3 + 0x38);
        uStack_a0 = CONCAT44(*(undefined4 *)(lStack_a8 + 0x38),
                             (uint)((ulong)*(undefined8 *)(lStack_a8 + 0x2c) >> 0x29)) &
                    0xffffffff0000001f;
        goto LAB_109ecd56c;
      }
      uVar12 = *(undefined8 *)(lVar3 + 0x38);
      uVar14 = *(undefined8 *)(lVar3 + 0x50);
      uVar13 = *(undefined8 *)(lVar3 + 0x48);
      param_2[1] = *(undefined8 *)(lVar3 + 0x40);
      *param_2 = uVar12;
      param_2[3] = uVar14;
      param_2[2] = uVar13;
      plVar10 = (long *)param_2[3];
      lVar3 = *plVar10;
    } while (*(int *)(lVar3 + 0x18) == 1);
    uStack_98 = (ulong)uVar6;
  }
  else {
    uStack_10._0_1_ = 0;
  }
  bVar1 = *(byte *)((long)plVar10 + 0x1c);
  uVar5 = (undefined1)uStack_10;
  do {
    iVar7 = *(int *)(lVar3 + 0x18);
    lVar8 = lVar3;
    if (iVar7 != 4) {
      lVar8 = 0;
    }
    if ((lVar3 == 0) || (iVar7 != 0)) {
LAB_109ecd45c:
      if ((lVar8 == 0) || (*(int *)(lVar3 + 0x28) != 0x241)) break;
      puVar4 = (undefined8 *)(lVar8 + 0x80);
      uVar5 = 1;
    }
    else {
      if (*(int *)(lVar3 + 0x28) == 0x154) {
        if (bVar1 != 0) {
          uVar9 = 0;
          do {
            if (uVar9 != *(byte *)(lVar3 + 0x70 + uVar9)) goto LAB_109ecd608;
            uVar9 = uVar9 + 1;
          } while (bVar1 != uVar9);
        }
      }
      else {
        if (5 < *(int *)(lVar3 + 0x28) - 0x1c4U) goto LAB_109ecd45c;
        if (bVar1 != 0) {
          uVar9 = 0;
          pbVar11 = (byte *)(lVar3 + 0x70);
          do {
            if ((uVar9 != *pbVar11) || (*(long *)(pbVar11 + -8) != *(long *)(lVar3 + 0x68)))
            goto LAB_109ecd608;
            uVar9 = uVar9 + 1;
            pbVar11 = pbVar11 + 0x30;
          } while (bVar1 != uVar9);
        }
      }
      puVar4 = (undefined8 *)(lVar3 + 0x50);
    }
    uVar12 = *puVar4;
    uVar14 = puVar4[3];
    uVar13 = puVar4[2];
    param_2[1] = puVar4[1];
    *param_2 = uVar12;
    param_2[3] = uVar14;
    param_2[2] = uVar13;
    lVar3 = *(long *)param_2[3];
  } while( true );
  uStack_10 = CONCAT71(uStack_10._1_7_,uVar5);
  if (iVar7 == 5) {
    uVar2 = (uint)*(undefined8 *)(lVar3 + 0x48);
    uVar6 = (*(byte *)(lVar3 + 0x45) & 0xaaaaaaaa) >> 1 |
            (*(byte *)(lVar3 + 0x45) & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uint)LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f) << 4) << 0x18);
    if (uVar6 < 5) {
      if (uVar6 == 0) {
        uVar2 = uVar2 & 1;
      }
      else if (uVar6 == 3) {
        uVar2 = uVar2 & 0xff;
      }
      else {
        uVar2 = uVar2 & 0xffff;
      }
    }
    uStack_a0 = (ulong)uVar2 << 0x20;
LAB_109ecd56c:
    param_1[0x11] = auStack_90[0xd];
    param_1[0x10] = auStack_90[0xc];
    param_1[0x13] = auStack_90[0xf];
    param_1[0x12] = auStack_90[0xe];
    param_1[0x14] = uStack_10;
    param_1[9] = auStack_90[5];
    param_1[8] = auStack_90[4];
    param_1[0xb] = auStack_90[7];
    param_1[10] = auStack_90[6];
    param_1[0xd] = auStack_90[9];
    param_1[0xc] = auStack_90[8];
    param_1[0xf] = auStack_90[0xb];
    param_1[0xe] = auStack_90[10];
    param_1[5] = auStack_90[1];
    param_1[4] = auStack_90[0];
    param_1[7] = auStack_90[3];
    param_1[6] = auStack_90[2];
LAB_109ecd594:
    param_1[1] = lStack_a8;
    *param_1 = 1;
    param_1[3] = uStack_98;
    param_1[2] = uStack_a0;
  }
  else {
    if ((lVar3 != 0) && (iVar7 == 4)) {
      iVar7 = *(int *)(lVar3 + 0x28);
      if (iVar7 == 0x21a) {
        lVar3 = **(long **)(lVar3 + 0x98);
        if (lVar3 == 0 || *(int *)(lVar3 + 0x18) != 4) goto LAB_109ecd608;
        iVar7 = *(int *)(lVar3 + 0x28);
      }
      else if (iVar7 == 0x247) {
        uStack_a0 = *(ulong *)(lVar3 + 0x54);
        uVar13 = *(undefined8 *)(lVar3 + 0x88);
        uVar12 = *(undefined8 *)(lVar3 + 0x80);
        uVar15 = *(undefined8 *)(lVar3 + 0x98);
        uVar14 = *(undefined8 *)(lVar3 + 0x90);
        uVar19 = *(undefined8 *)(lVar3 + 0xa8);
        uVar18 = *(undefined8 *)(lVar3 + 0xa0);
        uVar17 = *(undefined8 *)(lVar3 + 0xb8);
        uVar16 = *(undefined8 *)(lVar3 + 0xb0);
        param_1[0x11] = auStack_90[0xd];
        param_1[0x10] = auStack_90[0xc];
        param_1[0x13] = auStack_90[0xf];
        param_1[0x12] = auStack_90[0xe];
        uStack_98 = 2;
        param_1[0x14] = uStack_10;
        param_1[5] = uVar13;
        param_1[4] = uVar12;
        param_1[7] = uVar15;
        param_1[6] = uVar14;
        param_1[9] = uVar19;
        param_1[8] = uVar18;
        param_1[0xb] = uVar17;
        param_1[10] = uVar16;
        param_1[0xd] = auStack_90[9];
        param_1[0xc] = auStack_90[8];
        param_1[0xf] = auStack_90[0xb];
        param_1[0xe] = auStack_90[10];
        goto LAB_109ecd594;
      }
      if (iVar7 == 0x2a2) {
        uStack_a0 = *(ulong *)(lVar3 + 0x54);
        uStack_98 = 1;
        uVar13 = *(undefined8 *)(lVar3 + 0x88);
        uVar12 = *(undefined8 *)(lVar3 + 0x80);
        uVar15 = *(undefined8 *)(lVar3 + 0x98);
        uVar14 = *(undefined8 *)(lVar3 + 0x90);
        param_1[9] = auStack_90[5];
        param_1[8] = auStack_90[4];
        param_1[0xb] = auStack_90[7];
        param_1[10] = auStack_90[6];
        param_1[0x14] = uStack_10;
        param_1[0x11] = auStack_90[0xd];
        param_1[0x10] = auStack_90[0xc];
        param_1[0x13] = auStack_90[0xf];
        param_1[0x12] = auStack_90[0xe];
        param_1[0xd] = auStack_90[9];
        param_1[0xc] = auStack_90[8];
        param_1[0xf] = auStack_90[0xb];
        param_1[0xe] = auStack_90[10];
        param_1[5] = uVar13;
        param_1[4] = uVar12;
        param_1[7] = uVar15;
        param_1[6] = uVar14;
        goto LAB_109ecd594;
      }
    }
LAB_109ecd608:
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109ecd62c; end: 109ecd78f;  */

long * FUN_109ecd62c(long param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  if (*param_2 == '\x01') {
    if (*(long **)(param_2 + 8) != (long *)0x0) {
      return *(long **)(param_2 + 8);
    }
    plVar4 = (long *)**(long **)(param_1 + 8);
    if (plVar4 != (long *)0x0) {
      uVar3 = 0;
      plVar2 = (long *)0x0;
      plVar1 = *(long **)(param_1 + 8);
      do {
        if ((((*(ushort *)(plVar1 + 4) & 0x280) != 0) &&
            (((uint)((ulong)*(undefined8 *)((long)plVar1 + 0x2c) >> 0x29) & 0x1f) ==
             *(uint *)(param_2 + 0x10))) && ((int)plVar1[7] == *(int *)(param_2 + 0x14))) {
          uVar3 = uVar3 + 1;
          plVar2 = plVar1;
        }
        plVar5 = (long *)*plVar4;
        plVar1 = plVar4;
        plVar4 = plVar5;
      } while (plVar5 != (long *)0x0);
      plVar4 = (long *)0x0;
      if (uVar3 < 2) {
        plVar4 = plVar2;
      }
      return plVar4;
    }
  }
  return (long *)0x0;
}



/* Entry: 109ecd790; end: 109ecd7ff;  */

undefined4 FUN_109ecd790(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) == 0x27a) {
    if (param_2 == 0) {
      return *(undefined4 *)(param_1 + 100);
    }
  }
  else if (*(int *)(param_1 + 0x28) == 0x26f && param_2 == 1) {
    return *(undefined4 *)
            (&UNK_10e06c668 +
            (ulong)*(byte *)(*(long *)(**(long **)(param_1 + 0x98) + 0x30) + 4) * 4);
  }
  FUN_109f140f4();
  uVar1 = 0;
  if (-1 < (int)param_1 && (int)param_1 == param_2) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 109ecd800; end: 109ecdadb;  */

undefined4 FUN_109ecd800(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((int)uVar1 < 0x168) {
    if (uVar1 == 0x112) {
      return *(undefined4 *)
              (&UNK_10e06c668 +
              (ulong)*(byte *)(*(long *)(**(long **)(param_1 + 0x98) + 0x30) + 4) * 4);
    }
    if (uVar1 != 0x144) {
      return 0;
    }
  }
  else if ((uVar1 != 0x168) && (uVar1 != 0x205)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + (ulong)(byte)(&UNK_110b671c1)[(ulong)uVar1 * 0x68] * 4 + 0x50);
}



/* Entry: 109ecdadc; end: 109ecdbbb;  */

uint FUN_109ecdadc(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_4 [4];
  
  if (((&UNK_110b671d0)[(ulong)*(uint *)(param_1 + 0x28) * 0x68] != '\0') &&
     (lVar4 = (ulong)*(uint *)(param_1 + 0x28) * 0x68,
     uVar3 = *(int *)(param_1 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar4] * 4 + -4) <<
             (ulong)(*(uint *)(param_1 + 0x54 + (ulong)(byte)(&UNK_110b671b1)[lVar4] * 4 + -4) &
                    0x1f), uVar3 != 0)) {
    uVar6 = 0;
    uVar8 = uVar3;
    do {
      uVar9 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
      uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
      bVar2 = *(byte *)((ulong)auStack_4 | (ulong)(uVar9 & 1) << 1);
      if ((bVar2 & 0xf) != 0) {
        uVar1 = uVar9 + (bVar2 & 0xf);
        uVar7 = 0xffffffff;
        if (uVar1 != 0x20) {
          uVar7 = ~(-1 << (ulong)(uVar1 & 0x1f));
        }
        uVar6 = -1 << (ulong)(uVar9 & 0x1f) & uVar3 & uVar7 | uVar6;
      }
      uVar9 = 1 << (ulong)(uVar9 & 0x1f);
      bVar5 = uVar9 != uVar8;
      uVar8 = uVar9 ^ uVar8;
    } while (bVar5);
    return uVar6;
  }
  return 0;
}



/* Entry: 109ecdbbc; end: 109ecdcab;  */

uint FUN_109ecdbbc(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    if (param_2 == -1) {
      if ((param_1 < 0x20) && ((0xcddf9001U >> (ulong)(param_1 & 0x1f) & 1) != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (uint)(param_1 - 0x1a < 4);
      }
    }
    else {
      uVar2 = (uint)(param_1 - 0x1a < 4);
      if (param_2 != 2) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xcddf9001 >> (ulong)(param_1 & 0x1f);
    if (0x1f < param_1) {
      uVar2 = 0;
    }
    uVar1 = 0;
    if (param_2 == 4) {
      uVar1 = uVar2;
    }
    uVar2 = (uint)(param_1 == 0x1c);
    if (param_2 != 7) {
      uVar2 = uVar1;
    }
  }
  return uVar2 & 1;
}



/* Entry: 109ecdcac; end: 109ecdd2b;  */

undefined8 FUN_109ecdcac(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  
  bVar2 = (&UNK_110b671cf)[(ulong)*(uint *)(param_1 + 0x28) * 0x68];
  uVar1 = *(uint *)(param_1 + 0x54 + ((ulong)bVar2 - 1) * 4);
  if ((uVar1 >> 0x1d & 1) == 0) {
    uVar3 = (ulong)(uVar1 & 0x7f);
    FUN_109ecdbbc();
    if ((uVar3 & 1) != 0) goto LAB_109ecdd00;
  }
  lVar4 = param_1;
  FUN_109ecdadc();
  if ((int)lVar4 == 0) {
    FUN_109ecb9c0(param_1);
    return 1;
  }
LAB_109ecdd00:
  *(uint *)(param_1 + 0x54 + ((ulong)bVar2 - 1) * 4) = uVar1 | 0x10000000;
  return 0;
}



/* Entry: 109ecdd2c; end: 109ecde1f;  */

void FUN_109ecdd2c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar2 = *(long **)(param_1 + 0x178);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)0x0;
    plVar5 = plVar2;
    if (*plVar3 != 0) {
      plVar1 = plVar3;
    }
    do {
      plVar2 = plVar1;
      if ((*(byte *)(plVar5 + 7) & 1) == 0) {
        puVar4 = (undefined8 *)plVar5[1];
        plVar3[1] = (long)puVar4;
        *puVar4 = plVar3;
        *plVar5 = 0;
        plVar5[1] = 0;
      }
      if (plVar2 == (long *)0x0) {
        return;
      }
      plVar3 = (long *)*plVar2;
      plVar1 = (long *)0x0;
      plVar5 = plVar2;
    } while (plVar3 == (long *)0x0);
  } while( true );
}



/* Entry: 109ecde20; end: 109ece0d7;  */

void FUN_109ecde20(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000109ecde64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e06c4dc)[*(uint *)(**(long **)(param_1 + 0x18) + 0x18)] * 4 +
            0x109ecde68))(0x30);
  return;
}



/* Entry: 109ece0d8; end: 109ece167;  */

long FUN_109ece0d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = param_1[3];
  FUN_109ecaef8();
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = param_3;
  if (param_4 != 0) {
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(long *)(lVar2 + 0x98) = param_4;
  }
  if (param_5 != 0) {
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(long *)(lVar2 + 200) = param_5;
  }
  if (param_6 != 0) {
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    *(undefined8 *)(lVar2 + 0xf0) = 0;
    *(long *)(lVar2 + 0xf8) = param_6;
  }
  lVar11 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar3 = (&UNK_110b78541)[lVar11];
  if (bVar3 == 0) {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
    if ((&UNK_110b78540)[lVar11] == 0) {
      bVar3 = 0;
      uVar4 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar11) & 0x79) != 0) {
        uVar4 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar3 = 0;
    plVar7 = (long *)(lVar2 + 0x68);
    pcVar9 = &UNK_110b78548 + lVar11;
    uVar8 = uVar6;
    do {
      if ((*pcVar9 == '\0') && (bVar3 <= *(byte *)(*plVar7 + 0x1c))) {
        bVar3 = *(byte *)(*plVar7 + 0x1c);
      }
      plVar7 = plVar7 + 6;
      uVar8 = uVar8 - 1;
      pcVar9 = pcVar9 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
  }
  uVar5 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
  if (uVar5 == 0) {
    if ((int)uVar6 == 0) {
      uVar4 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar7 = (long *)(lVar2 + 0x68);
    puVar10 = (uint *)(&UNK_110b78558 + lVar11);
    uVar8 = uVar6;
    uVar4 = 0;
    do {
      uVar5 = (uint)*(byte *)(*plVar7 + 0x1d);
      if ((*puVar10 & 0x79) != 0 || uVar4 != 0) {
        uVar5 = uVar4;
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 6;
      puVar10 = puVar10 + 1;
      uVar4 = uVar5;
    } while (uVar8 != 0);
  }
  else {
    uVar4 = uVar5;
    if ((int)uVar6 == 0) goto LAB_109ece0a8;
  }
  uVar8 = 0;
  lVar11 = lVar2 + 0x70;
  do {
    lVar12 = *(long *)(lVar2 + uVar8 * 0x30 + 0x68);
    uVar13 = (ulong)*(byte *)(lVar12 + 0x1c);
    if (uVar13 < 0x10) {
      do {
        *(char *)(lVar11 + uVar13) = *(char *)(lVar12 + 0x1c) + -1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x10);
    }
    uVar8 = uVar8 + 1;
    lVar11 = lVar11 + 0x30;
  } while (uVar8 != uVar6);
  uVar4 = 0x20;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar3,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ece168; end: 109ece1af;  */

long FUN_109ece168(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = param_1[3];
  FUN_109ecaef8();
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = param_3;
  lVar11 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar3 = (&UNK_110b78541)[lVar11];
  if (bVar3 == 0) {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
    if ((&UNK_110b78540)[lVar11] == 0) {
      bVar3 = 0;
      uVar4 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar11) & 0x79) != 0) {
        uVar4 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar3 = 0;
    plVar7 = (long *)(lVar2 + 0x68);
    pcVar9 = &UNK_110b78548 + lVar11;
    uVar8 = uVar6;
    do {
      if ((*pcVar9 == '\0') && (bVar3 <= *(byte *)(*plVar7 + 0x1c))) {
        bVar3 = *(byte *)(*plVar7 + 0x1c);
      }
      plVar7 = plVar7 + 6;
      uVar8 = uVar8 - 1;
      pcVar9 = pcVar9 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
  }
  uVar5 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
  if (uVar5 == 0) {
    if ((int)uVar6 == 0) {
      uVar4 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar7 = (long *)(lVar2 + 0x68);
    puVar10 = (uint *)(&UNK_110b78558 + lVar11);
    uVar8 = uVar6;
    uVar4 = 0;
    do {
      uVar5 = (uint)*(byte *)(*plVar7 + 0x1d);
      if ((*puVar10 & 0x79) != 0 || uVar4 != 0) {
        uVar5 = uVar4;
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 6;
      puVar10 = puVar10 + 1;
      uVar4 = uVar5;
    } while (uVar8 != 0);
  }
  else {
    uVar4 = uVar5;
    if ((int)uVar6 == 0) goto LAB_109ece0a8;
  }
  uVar8 = 0;
  lVar11 = lVar2 + 0x70;
  do {
    lVar12 = *(long *)(lVar2 + uVar8 * 0x30 + 0x68);
    uVar13 = (ulong)*(byte *)(lVar12 + 0x1c);
    if (uVar13 < 0x10) {
      do {
        *(char *)(lVar11 + uVar13) = *(char *)(lVar12 + 0x1c) + -1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x10);
    }
    uVar8 = uVar8 + 1;
    lVar11 = lVar11 + 0x30;
  } while (uVar8 != uVar6);
  uVar4 = 0x20;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar3,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ece1b0; end: 109ece27b;  */

long FUN_109ece1b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = param_1[3];
  FUN_109ecaef8();
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = param_4;
  lVar11 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar3 = (&UNK_110b78541)[lVar11];
  if (bVar3 == 0) {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
    if ((&UNK_110b78540)[lVar11] == 0) {
      bVar3 = 0;
      uVar4 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar11) & 0x79) != 0) {
        uVar4 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar3 = 0;
    plVar7 = (long *)(lVar2 + 0x68);
    pcVar9 = &UNK_110b78548 + lVar11;
    uVar8 = uVar6;
    do {
      if ((*pcVar9 == '\0') && (bVar3 <= *(byte *)(*plVar7 + 0x1c))) {
        bVar3 = *(byte *)(*plVar7 + 0x1c);
      }
      plVar7 = plVar7 + 6;
      uVar8 = uVar8 - 1;
      pcVar9 = pcVar9 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
  }
  uVar5 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
  if (uVar5 == 0) {
    if ((int)uVar6 == 0) {
      uVar4 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar7 = (long *)(lVar2 + 0x68);
    puVar10 = (uint *)(&UNK_110b78558 + lVar11);
    uVar8 = uVar6;
    uVar4 = 0;
    do {
      uVar5 = (uint)*(byte *)(*plVar7 + 0x1d);
      if ((*puVar10 & 0x79) != 0 || uVar4 != 0) {
        uVar5 = uVar4;
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 6;
      puVar10 = puVar10 + 1;
      uVar4 = uVar5;
    } while (uVar8 != 0);
  }
  else {
    uVar4 = uVar5;
    if ((int)uVar6 == 0) goto LAB_109ece0a8;
  }
  uVar8 = 0;
  lVar11 = lVar2 + 0x70;
  do {
    lVar12 = *(long *)(lVar2 + uVar8 * 0x30 + 0x68);
    uVar13 = (ulong)*(byte *)(lVar12 + 0x1c);
    if (uVar13 < 0x10) {
      do {
        *(char *)(lVar11 + uVar13) = *(char *)(lVar12 + 0x1c) + -1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x10);
    }
    uVar8 = uVar8 + 1;
    lVar11 = lVar11 + 0x30;
  } while (uVar8 != uVar6);
  uVar4 = 0x20;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar3,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ece27c; end: 109ece2ff;  */

long FUN_109ece27c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = param_1[3];
  FUN_109ecaef8();
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = param_4;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar2 + 200) = param_5;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined8 *)(lVar2 + 0xf0) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = param_6;
  lVar11 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar3 = (&UNK_110b78541)[lVar11];
  if (bVar3 == 0) {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
    if ((&UNK_110b78540)[lVar11] == 0) {
      bVar3 = 0;
      uVar4 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar11) & 0x79) != 0) {
        uVar4 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar3 = 0;
    plVar7 = (long *)(lVar2 + 0x68);
    pcVar9 = &UNK_110b78548 + lVar11;
    uVar8 = uVar6;
    do {
      if ((*pcVar9 == '\0') && (bVar3 <= *(byte *)(*plVar7 + 0x1c))) {
        bVar3 = *(byte *)(*plVar7 + 0x1c);
      }
      plVar7 = plVar7 + 6;
      uVar8 = uVar8 - 1;
      pcVar9 = pcVar9 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
  }
  uVar5 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
  if (uVar5 == 0) {
    if ((int)uVar6 == 0) {
      uVar4 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar7 = (long *)(lVar2 + 0x68);
    puVar10 = (uint *)(&UNK_110b78558 + lVar11);
    uVar8 = uVar6;
    uVar4 = 0;
    do {
      uVar5 = (uint)*(byte *)(*plVar7 + 0x1d);
      if ((*puVar10 & 0x79) != 0 || uVar4 != 0) {
        uVar5 = uVar4;
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 6;
      puVar10 = puVar10 + 1;
      uVar4 = uVar5;
    } while (uVar8 != 0);
  }
  else {
    uVar4 = uVar5;
    if ((int)uVar6 == 0) goto LAB_109ece0a8;
  }
  uVar8 = 0;
  lVar11 = lVar2 + 0x70;
  do {
    lVar12 = *(long *)(lVar2 + uVar8 * 0x30 + 0x68);
    uVar13 = (ulong)*(byte *)(lVar12 + 0x1c);
    if (uVar13 < 0x10) {
      do {
        *(char *)(lVar11 + uVar13) = *(char *)(lVar12 + 0x1c) + -1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x10);
    }
    uVar8 = uVar8 + 1;
    lVar11 = lVar11 + 0x30;
  } while (uVar8 != uVar6);
  uVar4 = 0x20;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar3,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ece300; end: 109ece383;  */

long FUN_109ece300(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar2 = param_1[3];
  FUN_109ecaef8();
  if (lVar2 == 0) {
    return 0;
  }
  uVar6 = (ulong)(byte)(&UNK_110b78540)[(param_2 & 0xffffffff) * 0x68];
  if (uVar6 != 0) {
    puVar9 = (undefined8 *)(lVar2 + 0x68);
    do {
      uVar12 = *param_3;
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      puVar9[-1] = 0;
      *puVar9 = uVar12;
      puVar9 = puVar9 + 6;
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 1;
    } while (uVar6 != 0);
  }
  lVar13 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar3 = (&UNK_110b78541)[lVar13];
  if (bVar3 == 0) {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar13];
    if ((&UNK_110b78540)[lVar13] == 0) {
      bVar3 = 0;
      uVar4 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar13) & 0x79) != 0) {
        uVar4 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar3 = 0;
    plVar7 = (long *)(lVar2 + 0x68);
    pcVar10 = &UNK_110b78548 + lVar13;
    uVar8 = uVar6;
    do {
      if ((*pcVar10 == '\0') && (bVar3 <= *(byte *)(*plVar7 + 0x1c))) {
        bVar3 = *(byte *)(*plVar7 + 0x1c);
      }
      plVar7 = plVar7 + 6;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar10 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar13];
  }
  uVar5 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
  if (uVar5 == 0) {
    if ((int)uVar6 == 0) {
      uVar4 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar7 = (long *)(lVar2 + 0x68);
    puVar11 = (uint *)(&UNK_110b78558 + lVar13);
    uVar8 = uVar6;
    uVar4 = 0;
    do {
      uVar5 = (uint)*(byte *)(*plVar7 + 0x1d);
      if ((*puVar11 & 0x79) != 0 || uVar4 != 0) {
        uVar5 = uVar4;
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 6;
      puVar11 = puVar11 + 1;
      uVar4 = uVar5;
    } while (uVar8 != 0);
  }
  else {
    uVar4 = uVar5;
    if ((int)uVar6 == 0) goto LAB_109ece0a8;
  }
  uVar8 = 0;
  lVar13 = lVar2 + 0x70;
  do {
    lVar14 = *(long *)(lVar2 + uVar8 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar13 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar8 = uVar8 + 1;
    lVar13 = lVar13 + 0x30;
  } while (uVar8 != uVar6);
  uVar4 = 0x20;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar3,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ece384; end: 109ece5eb;  */

long FUN_109ece384(undefined8 *param_1,long *param_2,ulong param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  
  uVar3 = param_3;
  func_0x000109ecd728(param_3);
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,uVar3);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    if ((int)param_3 != 0) {
      uVar3 = param_3 & 0xffffffff;
      plVar4 = param_2 + 1;
      puVar5 = (undefined1 *)(lVar2 + 0x70);
      do {
        lVar6 = plVar4[-1];
        *(undefined8 *)(puVar5 + -0x20) = 0;
        *(undefined8 *)(puVar5 + -0x18) = 0;
        *(undefined8 *)(puVar5 + -0x10) = 0;
        *(long *)(puVar5 + -8) = lVar6;
        *puVar5 = (char)(int)*plVar4;
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 2;
        puVar5 = puVar5 + 0x30;
      } while (uVar3 != 0);
    }
    uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar2 + 0x2c) = uVar1;
    *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    lVar6 = lVar2 + 0x30;
    FUN_109ecb048(lVar2,lVar6,param_3,*(undefined1 *)(*param_2 + 0x1d));
    FUN_109ecb4f0(*param_1,param_1[1],lVar2);
    *param_1 = 3;
    param_1[1] = lVar2;
  }
  return lVar6;
}



/* Entry: 109ece5ec; end: 109ece6c3;  */

void FUN_109ece5ec(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  plVar7 = *(long **)(param_1[4] + 0x30);
  if ((int)plVar7[2] == 0) {
    uVar8 = 0;
  }
  else {
    plVar3 = plVar7 + 1;
    plVar7 = (long *)0x0;
    if (((long *)*plVar3)[1] != 0) {
      plVar7 = (long *)*plVar3;
    }
    uVar8 = 1;
  }
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    uVar1 = (uint)*param_1;
    FUN_109ecb464();
    plVar4 = plVar7;
    uVar2 = uVar8;
    FUN_109ecb464();
    FUN_109ecb4f0(uVar8,plVar7,param_2);
    if (plVar3 == plVar4 && uVar1 == uVar2) {
      *param_1 = 3;
      param_1[1] = param_2;
    }
    return;
  }
  if (uVar8 < 2) {
    if (uVar8 != 0) {
      if (uVar8 != 1) goto LAB_109ecb59c;
      param_2[2] = (long)plVar7;
      func_0x000109ecb5e0(param_2);
      plVar3 = plVar7 + 7;
      puVar5 = (undefined8 *)*plVar3;
      *param_2 = (long)(plVar7 + 6);
      goto LAB_109ecb590;
    }
    param_2[2] = (long)plVar7;
    func_0x000109ecb5e0(param_2);
    plVar7 = plVar7 + 4;
    lVar6 = *plVar7;
LAB_109ecb56c:
    *param_2 = lVar6;
    param_2[1] = (long)plVar7;
    puVar5 = (undefined8 *)(lVar6 + 8);
  }
  else {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_109ecb59c;
      param_2[2] = plVar7[2];
      func_0x000109ecb5e0(param_2);
      lVar6 = *plVar7;
      goto LAB_109ecb56c;
    }
    param_2[2] = plVar7[2];
    func_0x000109ecb5e0(param_2);
    *param_2 = (long)plVar7;
    plVar3 = plVar7 + 1;
    puVar5 = (undefined8 *)*plVar3;
LAB_109ecb590:
    param_2[1] = (long)puVar5;
    plVar7 = plVar3;
  }
  *puVar5 = param_2;
  *plVar7 = (long)param_2;
LAB_109ecb59c:
  if ((int)param_2[3] == 6) {
    FUN_109ef80a0(param_2[2]);
  }
  for (lVar6 = param_2[2]; *(int *)(lVar6 + 0x10) != 3; lVar6 = *(long *)(lVar6 + 0x18)) {
  }
  *(uint *)(lVar6 + 0x84) = *(uint *)(lVar6 + 0x84) & 0xffffffdf;
  return;
}



/* Entry: 109ece6c4; end: 109ece73b;  */

long FUN_109ece6c4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1[3];
  FUN_109ecad84();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  FUN_109ef838c(*param_1,param_1[1],lVar2);
  lVar3 = *(long *)(lVar2 + 0x48);
  if (*(int *)(lVar3 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = (long *)(lVar3 + 8);
    lVar3 = 0;
    if (*(long *)(*plVar1 + 8) != 0) {
      lVar3 = *plVar1;
    }
    uVar4 = 1;
  }
  *param_1 = uVar4;
  param_1[1] = lVar3;
  return lVar2;
}



/* Entry: 109ece73c; end: 109ece7d3;  */

long FUN_109ece73c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    uVar2 = param_1[1];
    if ((*param_1 & 0xfffffffe) == 2) {
      uVar2 = *(ulong *)(uVar2 + 0x10);
    }
    param_2 = *(long *)(uVar2 + 0x18);
  }
  uVar2 = *(ulong *)(param_2 + 0x68);
  if (*(int *)(uVar2 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = (ulong *)(uVar2 + 8);
    uVar2 = 0;
    if (*(long *)(*puVar1 + 8) != 0) {
      uVar2 = *puVar1;
    }
    uVar3 = 1;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return param_2;
}



/* Entry: 109ece7d4; end: 109ece8ef;  */

undefined8 * FUN_109ece7d4(ulong *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_1[1];
  if ((*param_1 & 0xfffffffe) == 2) {
    uVar4 = *(ulong *)(uVar4 + 0x10);
  }
  lVar5 = *(long *)(uVar4 + 8);
  lVar1 = 0;
  if (*(long *)(lVar5 + 8) != 0) {
    lVar1 = lVar5;
  }
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0x68,8);
  *(undefined4 *)(puVar2 + 3) = 8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[7] = 0;
  puVar2[5] = puVar2 + 7;
  *puVar2 = 0;
  puVar2[6] = 0;
  puVar2[8] = puVar2 + 5;
  if (*(long *)(lVar5 + 0x48) == lVar1 + 0x58) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x60);
  }
  FUN_109ecb354(puVar2,uVar3,param_2);
  if (*(long *)(lVar5 + 0x68) == lVar1 + 0x78) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x80);
  }
  FUN_109ecb354(puVar2,uVar3,param_3);
  FUN_109ecb048(puVar2,puVar2 + 9,*(undefined1 *)(param_2 + 0x1c),*(undefined1 *)(param_2 + 0x1d));
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = (ulong)puVar2;
  return puVar2 + 9;
}



/* Entry: 109ece8f0; end: 109ece953;  */

long FUN_109ece8f0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1[3];
  FUN_109ecae20();
  FUN_109ef838c(*param_1,param_1[1],lVar2);
  lVar3 = *(long *)(lVar2 + 0x20);
  if (*(int *)(lVar3 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = (long *)(lVar3 + 8);
    lVar3 = 0;
    if (*(long *)(*plVar1 + 8) != 0) {
      lVar3 = *plVar1;
    }
    uVar4 = 1;
  }
  *param_1 = uVar4;
  param_1[1] = lVar3;
  return lVar2;
}



/* Entry: 109ece954; end: 109ecea63;  */

/* WARNING: Removing unreachable block (ram,0x000109ece128) */
/* WARNING: Removing unreachable block (ram,0x000109ece134) */

long FUN_109ece954(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  
  uVar9 = (uint)param_4;
  if ((param_3 & 0x86) == 6 || (uVar9 & 0x86) != 6) {
    uVar4 = (ulong)(param_3 | *(byte *)(param_2 + 0x1d));
    func_0x000109f205bc(uVar4,param_4,param_5);
    if ((int)uVar4 == 0x154) {
      return param_2;
    }
    lVar5 = param_1[3];
    FUN_109ecaef8(lVar5,uVar4);
    if (lVar5 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(long *)(lVar5 + 0x68) = param_2;
  }
  else {
    uVar9 = (uVar9 & 0x28) >> 1 | (uVar9 & 0x51) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    puVar1 = &UNK_10e06c760;
    if ((param_3 & 0x86) != 0x80) {
      puVar1 = &UNK_10e06c778;
    }
    uVar2 = *(undefined4 *)(puVar1 + LZCOUNT((uVar9 >> 4 | (uVar9 & 0xf0f0f0f) << 4) << 0x18) * 4);
    lVar6 = param_1[3];
    FUN_109ecafe4(lVar6,*(undefined1 *)(param_2 + 0x1c),*(undefined1 *)(param_2 + 0x1d));
    FUN_109ecb4f0(*param_1,param_1[1],lVar6);
    *param_1 = 3;
    param_1[1] = lVar6;
    lVar5 = param_1[3];
    FUN_109ecaef8(lVar5,uVar2);
    if (lVar5 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(long *)(lVar5 + 0x68) = param_2;
    if (lVar6 + 0x28 != 0) {
      *(undefined8 *)(lVar5 + 0x80) = 0;
      *(undefined8 *)(lVar5 + 0x88) = 0;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(long *)(lVar5 + 0x98) = lVar6 + 0x28;
    }
  }
  lVar6 = (ulong)*(uint *)(lVar5 + 0x28) * 0x68;
  uVar3 = *(ushort *)(lVar5 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar5 + 0x2c) = uVar3;
  *(ushort *)(lVar5 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
  bVar7 = (&UNK_110b78541)[lVar6];
  if (bVar7 == 0) {
    uVar4 = (ulong)(byte)(&UNK_110b78540)[lVar6];
    if ((&UNK_110b78540)[lVar6] == 0) {
      bVar7 = 0;
      uVar9 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar6) & 0x79) != 0) {
        uVar9 = *(uint *)(&UNK_110b78544 + lVar6) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar7 = 0;
    plVar10 = (long *)(lVar5 + 0x68);
    pcVar12 = &UNK_110b78548 + lVar6;
    uVar11 = uVar4;
    do {
      if ((*pcVar12 == '\0') && (bVar7 <= *(byte *)(*plVar10 + 0x1c))) {
        bVar7 = *(byte *)(*plVar10 + 0x1c);
      }
      plVar10 = plVar10 + 6;
      uVar11 = uVar11 - 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar4 = (ulong)(byte)(&UNK_110b78540)[lVar6];
  }
  uVar8 = *(uint *)(&UNK_110b78544 + lVar6) & 0x79;
  if (uVar8 == 0) {
    if ((int)uVar4 == 0) {
      uVar9 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar10 = (long *)(lVar5 + 0x68);
    puVar13 = (uint *)(&UNK_110b78558 + lVar6);
    uVar11 = uVar4;
    uVar9 = 0;
    do {
      uVar8 = (uint)*(byte *)(*plVar10 + 0x1d);
      if ((*puVar13 & 0x79) != 0 || uVar9 != 0) {
        uVar8 = uVar9;
      }
      uVar11 = uVar11 - 1;
      plVar10 = plVar10 + 6;
      puVar13 = puVar13 + 1;
      uVar9 = uVar8;
    } while (uVar11 != 0);
  }
  else {
    uVar9 = uVar8;
    if ((int)uVar4 == 0) goto LAB_109ece0a8;
  }
  uVar11 = 0;
  lVar6 = lVar5 + 0x70;
  do {
    lVar14 = *(long *)(lVar5 + uVar11 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar6 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar11 = uVar11 + 1;
    lVar6 = lVar6 + 0x30;
  } while (uVar11 != uVar4);
  uVar9 = 0x20;
  if (uVar8 != 0) {
    uVar9 = uVar8;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar5,lVar5 + 0x30,bVar7,uVar9);
  FUN_109ecb4f0(*param_1,param_1[1],lVar5);
  *param_1 = 3;
  param_1[1] = lVar5;
  return lVar5 + 0x30;
}



/* Entry: 109ecea64; end: 109ecf12b;  */

/* WARNING: Possible PIC construction at 0x000109eceb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecec98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecedb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecede0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ecedb8) */
/* WARNING: Removing unreachable block (ram,0x000109ecec9c) */
/* WARNING: Removing unreachable block (ram,0x000109ececac) */
/* WARNING: Removing unreachable block (ram,0x000109ececdc) */
/* WARNING: Removing unreachable block (ram,0x000109ececec) */
/* WARNING: Removing unreachable block (ram,0x000109eced58) */
/* WARNING: Removing unreachable block (ram,0x000109eced68) */
/* WARNING: Removing unreachable block (ram,0x000109eceb64) */
/* WARNING: Removing unreachable block (ram,0x000109ecebb0) */
/* WARNING: Removing unreachable block (ram,0x000109ecebc0) */
/* WARNING: Removing unreachable block (ram,0x000109ecec0c) */
/* WARNING: Removing unreachable block (ram,0x000109ecec40) */
/* WARNING: Removing unreachable block (ram,0x000109ecec50) */
/* WARNING: Removing unreachable block (ram,0x000109ecede4) */
/* WARNING: Removing unreachable block (ram,0x000109eceeec) */
/* WARNING: Removing unreachable block (ram,0x000109ecef28) */
/* WARNING: Removing unreachable block (ram,0x000109ecef5c) */
/* WARNING: Removing unreachable block (ram,0x000109ecef30) */
/* WARNING: Removing unreachable block (ram,0x000109ecef10) */
/* WARNING: Removing unreachable block (ram,0x000109ecef40) */
/* WARNING: Removing unreachable block (ram,0x000109ecef18) */
/* WARNING: Removing unreachable block (ram,0x000109ecef4c) */
/* WARNING: Removing unreachable block (ram,0x000109ecef20) */
/* WARNING: Removing unreachable block (ram,0x000109ecef50) */
/* WARNING: Removing unreachable block (ram,0x000109ecef54) */
/* WARNING: Removing unreachable block (ram,0x000109ecef64) */
/* WARNING: Removing unreachable block (ram,0x000109ecef68) */
/* WARNING: Removing unreachable block (ram,0x000109ecef9c) */
/* WARNING: Removing unreachable block (ram,0x000109ecefac) */
/* WARNING: Removing unreachable block (ram,0x000109ecf014) */
/* WARNING: Removing unreachable block (ram,0x000109ecf024) */
/* WARNING: Removing unreachable block (ram,0x000109eceffc) */
/* WARNING: Removing unreachable block (ram,0x000109ecf038) */
/* WARNING: Removing unreachable block (ram,0x000109ecf004) */
/* WARNING: Removing unreachable block (ram,0x000109ecf044) */
/* WARNING: Removing unreachable block (ram,0x000109ecf00c) */
/* WARNING: Removing unreachable block (ram,0x000109ecf048) */
/* WARNING: Removing unreachable block (ram,0x000109ecf04c) */
/* WARNING: Removing unreachable block (ram,0x000109ecf050) */
/* WARNING: Removing unreachable block (ram,0x000109ecf084) */
/* WARNING: Removing unreachable block (ram,0x000109ecf094) */
/* WARNING: Removing unreachable block (ram,0x000109ece1b0) */
/* WARNING: Removing unreachable block (ram,0x000109ece200) */
/* WARNING: Removing unreachable block (ram,0x000109ece1d8) */
/* WARNING: Removing unreachable block (ram,0x000109ecedfc) */
/* WARNING: Removing unreachable block (ram,0x000109ecee44) */
/* WARNING: Removing unreachable block (ram,0x000109ecee54) */

long FUN_109ecea64(undefined8 *param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  puVar3 = param_1;
  FUN_109ece168(param_1,0x9b,param_2);
  bVar6 = *(byte *)((long)puVar3 + 0x1d);
  uVar9 = (ulong)bVar6;
  FUN_109ecc128(0x3ff0000000000000);
  puVar4 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar4,0x50,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_109ecb048(puVar4,puVar4 + 5,1,(ulong)bVar6);
  puVar4[9] = uVar9;
  FUN_109ecb4f0(*param_1,param_1[1],puVar4);
  *param_1 = 3;
  param_1[1] = puVar4;
  puVar5 = param_1;
  FUN_109ece1b0(param_1,0xcd,puVar4 + 5,puVar3);
  puVar3 = param_1;
  FUN_109ece168(param_1,0xf9,param_2);
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x71);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 **)(lVar2 + 0x68) = puVar5;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = param_2;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 **)(lVar2 + 200) = puVar3;
  lVar14 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar6 = (&UNK_110b78541)[lVar14];
  if (bVar6 == 0) {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar14];
    if ((&UNK_110b78540)[lVar14] == 0) {
      bVar6 = 0;
      uVar7 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar14) & 0x79) != 0) {
        uVar7 = *(uint *)(&UNK_110b78544 + lVar14) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar6 = 0;
    plVar10 = (long *)(lVar2 + 0x68);
    pcVar12 = &UNK_110b78548 + lVar14;
    uVar11 = uVar9;
    do {
      if ((*pcVar12 == '\0') && (bVar6 <= *(byte *)(*plVar10 + 0x1c))) {
        bVar6 = *(byte *)(*plVar10 + 0x1c);
      }
      plVar10 = plVar10 + 6;
      uVar11 = uVar11 - 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar14];
  }
  uVar8 = *(uint *)(&UNK_110b78544 + lVar14) & 0x79;
  if (uVar8 == 0) {
    if ((int)uVar9 == 0) {
      uVar7 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar10 = (long *)(lVar2 + 0x68);
    puVar13 = (uint *)(&UNK_110b78558 + lVar14);
    uVar11 = uVar9;
    uVar7 = 0;
    do {
      uVar8 = (uint)*(byte *)(*plVar10 + 0x1d);
      if ((*puVar13 & 0x79) != 0 || uVar7 != 0) {
        uVar8 = uVar7;
      }
      uVar11 = uVar11 - 1;
      plVar10 = plVar10 + 6;
      puVar13 = puVar13 + 1;
      uVar7 = uVar8;
    } while (uVar11 != 0);
  }
  else {
    uVar7 = uVar8;
    if ((int)uVar9 == 0) goto LAB_109ece0a8;
  }
  uVar11 = 0;
  lVar14 = lVar2 + 0x70;
  do {
    lVar15 = *(long *)(lVar2 + uVar11 * 0x30 + 0x68);
    uVar16 = (ulong)*(byte *)(lVar15 + 0x1c);
    if (uVar16 < 0x10) {
      do {
        *(char *)(lVar14 + uVar16) = *(char *)(lVar15 + 0x1c) + -1;
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x10);
    }
    uVar11 = uVar11 + 1;
    lVar14 = lVar14 + 0x30;
  } while (uVar11 != uVar9);
  uVar7 = 0x20;
  if (uVar8 != 0) {
    uVar7 = uVar8;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar6,uVar7);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ecf12c; end: 109ecf61f;  */

/* WARNING: Possible PIC construction at 0x000109ecf288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecf2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecf40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecf4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ecf5a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ecf4e0) */
/* WARNING: Removing unreachable block (ram,0x000109ecf544) */
/* WARNING: Removing unreachable block (ram,0x000109ecf554) */
/* WARNING: Removing unreachable block (ram,0x000109ecf410) */
/* WARNING: Removing unreachable block (ram,0x000109ecf2c4) */
/* WARNING: Removing unreachable block (ram,0x000109ecf2dc) */
/* WARNING: Removing unreachable block (ram,0x000109ecf2e0) */
/* WARNING: Removing unreachable block (ram,0x000109ecf324) */
/* WARNING: Removing unreachable block (ram,0x000109ecf334) */
/* WARNING: Removing unreachable block (ram,0x000109ecf3b0) */
/* WARNING: Removing unreachable block (ram,0x000109ecf3c0) */
/* WARNING: Removing unreachable block (ram,0x000109ecf28c) */
/* WARNING: Removing unreachable block (ram,0x000109ecf5a8) */

long FUN_109ecf12c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar15 = (ulong)*(byte *)(param_3 + 0x1d);
  uVar8 = uVar15;
  FUN_109ecc128(0);
  puVar3 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar3,0x50,8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  *(undefined4 *)(puVar3 + 3) = 5;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_109ecb048(puVar3,puVar3 + 5,1,uVar15);
  puVar3[9] = uVar8;
  FUN_109ecb4f0(*param_1,param_1[1],puVar3);
  *param_1 = 3;
  param_1[1] = puVar3;
  uVar8 = uVar15;
  FUN_109ecc128(0x3ff0000000000000);
  puVar4 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar4,0x50,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_109ecb048(puVar4,puVar4 + 5,1,uVar15);
  puVar4[9] = uVar8;
  FUN_109ecb4f0(*param_1,param_1[1],puVar4);
  *param_1 = 3;
  param_1[1] = puVar4;
  puVar4 = param_1;
  FUN_109ece1b0(param_1,0xcd,puVar3 + 5,param_3);
  puVar3 = param_1;
  FUN_109ece168(param_1,0x9b,param_3);
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x71);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 **)(lVar2 + 0x68) = puVar4;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 **)(lVar2 + 0x98) = puVar3;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar2 + 200) = param_2;
  lVar12 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar5 = (&UNK_110b78541)[lVar12];
  if (bVar5 == 0) {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar12];
    if ((&UNK_110b78540)[lVar12] == 0) {
      bVar5 = 0;
      uVar6 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar12) & 0x79) != 0) {
        uVar6 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar5 = 0;
    plVar9 = (long *)(lVar2 + 0x68);
    pcVar10 = &UNK_110b78548 + lVar12;
    uVar15 = uVar8;
    do {
      if ((*pcVar10 == '\0') && (bVar5 <= *(byte *)(*plVar9 + 0x1c))) {
        bVar5 = *(byte *)(*plVar9 + 0x1c);
      }
      plVar9 = plVar9 + 6;
      uVar15 = uVar15 - 1;
      pcVar10 = pcVar10 + 1;
    } while (uVar15 != 0);
  }
  else {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar12];
  }
  uVar7 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
  if (uVar7 == 0) {
    if ((int)uVar8 == 0) {
      uVar6 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar9 = (long *)(lVar2 + 0x68);
    puVar11 = (uint *)(&UNK_110b78558 + lVar12);
    uVar15 = uVar8;
    uVar6 = 0;
    do {
      uVar7 = (uint)*(byte *)(*plVar9 + 0x1d);
      if ((*puVar11 & 0x79) != 0 || uVar6 != 0) {
        uVar7 = uVar6;
      }
      uVar15 = uVar15 - 1;
      plVar9 = plVar9 + 6;
      puVar11 = puVar11 + 1;
      uVar6 = uVar7;
    } while (uVar15 != 0);
  }
  else {
    uVar6 = uVar7;
    if ((int)uVar8 == 0) goto LAB_109ece0a8;
  }
  uVar15 = 0;
  lVar12 = lVar2 + 0x70;
  do {
    lVar13 = *(long *)(lVar2 + uVar15 * 0x30 + 0x68);
    uVar14 = (ulong)*(byte *)(lVar13 + 0x1c);
    if (uVar14 < 0x10) {
      do {
        *(char *)(lVar12 + uVar14) = *(char *)(lVar13 + 0x1c) + -1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x10);
    }
    uVar15 = uVar15 + 1;
    lVar12 = lVar12 + 0x30;
  } while (uVar15 != uVar8);
  uVar6 = 0x20;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar5,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ecf620; end: 109ecf6cf;  */

undefined8 * FUN_109ecf620(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = param_2;
  FUN_109f658b0(param_2,0x90);
  uVar6 = param_1[1];
  uVar4 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  uVar9 = param_1[4];
  uVar11 = param_1[7];
  uVar10 = param_1[6];
  puVar2[5] = param_1[5];
  puVar2[4] = uVar9;
  puVar2[7] = uVar11;
  puVar2[6] = uVar10;
  puVar2[1] = uVar6;
  *puVar2 = uVar4;
  puVar2[3] = uVar8;
  puVar2[2] = uVar7;
  uVar6 = param_1[9];
  uVar4 = param_1[8];
  uVar8 = param_1[0xb];
  uVar7 = param_1[10];
  uVar9 = param_1[0xc];
  uVar11 = param_1[0xf];
  uVar10 = param_1[0xe];
  puVar2[0xd] = param_1[0xd];
  puVar2[0xc] = uVar9;
  puVar2[0xf] = uVar11;
  puVar2[0xe] = uVar10;
  puVar2[9] = uVar6;
  puVar2[8] = uVar4;
  puVar2[0xb] = uVar8;
  puVar2[10] = uVar7;
  *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(param_1 + 0x10);
  uVar1 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)puVar2 + 0x84) = uVar1;
  puVar3 = param_2;
  FUN_109f658b0(param_2,(ulong)uVar1 << 3);
  puVar2[0x11] = puVar3;
  if (*(int *)((long)param_1 + 0x84) != 0) {
    uVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1[0x11] + uVar5 * 8);
      FUN_109ecf620(uVar4,param_2);
      *(undefined8 *)(puVar2[0x11] + uVar5 * 8) = uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((long)param_1 + 0x84));
  }
  return puVar2;
}



/* Entry: 109ecf6d0; end: 109ecf7f7;  */

undefined8 * FUN_109ecf6d0(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_109f658b0(param_2,0x98);
  if (param_2 != (undefined8 *)0x0) {
    param_2[0x12] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2 = param_2;
  FUN_109f65c2c(param_2,uVar4);
  param_2[3] = puVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  param_2[10] = *(undefined8 *)(param_1 + 0x50);
  param_2[7] = uVar7;
  param_2[6] = uVar6;
  param_2[9] = uVar5;
  param_2[8] = uVar4;
  param_2[5] = uVar9;
  param_2[4] = uVar8;
  uVar1 = *(ushort *)(param_1 + 0x68);
  *(ushort *)(param_2 + 0xd) = uVar1;
  if ((ulong)uVar1 != 0) {
    puVar2 = param_2;
    FUN_109f658b0(param_2,(ulong)uVar1 << 3);
    param_2[0xe] = puVar2;
    _memcpy();
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    FUN_109ecf620(lVar3,param_2);
    param_2[0xf] = lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  param_2[0x11] = lVar3;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar2 = param_2;
    func_0x000109f6590c(param_2,(ulong)*(uint *)(lVar3 + 0x10) << 2);
    param_2[0xc] = puVar2;
    _memcpy();
  }
  uVar1 = *(ushort *)(param_1 + 0x5c);
  *(ushort *)((long)param_2 + 0x5c) = uVar1;
  if ((ulong)uVar1 != 0) {
    puVar2 = param_2;
    FUN_109f658b0(param_2,(ulong)uVar1 * 0x38);
    param_2[0x12] = puVar2;
    _memcpy();
  }
  return param_2;
}



/* Entry: 109ecf7f8; end: 109ecfeaf;  */

undefined8 * FUN_109ecf7f8(byte *param_1,long param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  iVar4 = *(int *)(param_2 + 0x18);
  if (3 < iVar4) {
    if (iVar4 < 6) {
      if (iVar4 == 4) {
        puVar8 = *(undefined8 **)(param_1 + 0x20);
        FUN_109ecb0a8(puVar8,*(undefined4 *)(param_2 + 0x28));
        lVar12 = (ulong)*(uint *)(param_2 + 0x28) * 0x68;
        bVar5 = (&UNK_110b67190)[lVar12];
        uVar16 = (ulong)bVar5;
        if ((&UNK_110b6719c)[lVar12] == '\x01') {
          FUN_109ed08d0(param_1,puVar8,puVar8 + 6,param_2 + 0x30);
        }
        *(undefined1 *)(puVar8 + 10) = *(undefined1 *)(param_2 + 0x50);
        uVar19 = *(undefined8 *)(param_2 + 0x5c);
        uVar9 = *(undefined8 *)(param_2 + 0x54);
        uVar20 = *(undefined8 *)(param_2 + 100);
        *(undefined8 *)((long)puVar8 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
        *(undefined8 *)((long)puVar8 + 100) = uVar20;
        *(undefined8 *)((long)puVar8 + 0x5c) = uVar19;
        *(undefined8 *)((long)puVar8 + 0x54) = uVar9;
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        FUN_109f65c2c(uVar9,*(undefined8 *)(param_2 + 0x78));
        puVar8[0xf] = uVar9;
        if (bVar5 == 0) {
          return puVar8;
        }
        lVar12 = 0x98;
        do {
          lVar13 = *(long *)(param_2 + lVar12);
          if ((lVar13 != 0) && (lVar14 = *(long *)(param_1 + 8), lVar14 != 0)) {
            lVar15 = lVar13;
            (**(code **)(lVar14 + 8))(lVar13);
            func_0x000109f64fdc(lVar14,lVar15,lVar13);
            if (lVar14 != 0) {
              lVar13 = *(long *)(lVar14 + 0x10);
            }
          }
          *(long *)((long)puVar8 + lVar12) = lVar13;
          lVar12 = lVar12 + 0x20;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        return puVar8;
      }
      puVar8 = *(undefined8 **)(param_1 + 0x20);
      FUN_109ecafe4(puVar8,*(undefined1 *)(param_2 + 0x44),*(undefined1 *)(param_2 + 0x45));
      _memcpy(puVar8 + 9,param_2 + 0x48,(ulong)*(byte *)(param_2 + 0x44) << 3);
    }
    else {
      if (iVar4 == 6) {
        uVar11 = *(undefined4 *)(param_2 + 0x28);
        puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
        FUN_109f6600c(puVar8,0x60,8);
        *(undefined4 *)(puVar8 + 3) = 6;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 5) = uVar11;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[9] = 0;
        return puVar8;
      }
      if (iVar4 != 7) {
        puVar8 = *(undefined8 **)(param_1 + 0x20);
        FUN_109ecb404(puVar8,*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x30));
        if (*(int *)(param_2 + 0x28) != 0) {
          _memcpy(puVar8 + 0x10,param_2 + 0x80,*(undefined2 *)(param_2 + 0x30));
          FUN_109ed08d0(param_1,puVar8,puVar8 + 0xc,param_2 + 0x60);
          return puVar8;
        }
        uVar11 = 0;
        if (*(int *)(param_2 + 0x50) != 0) {
          lVar12 = *(long *)(param_2 + 0x48);
          if ((lVar12 != 0) && (lVar13 = *(long *)(param_1 + 8), lVar13 != 0)) {
            lVar14 = lVar12;
            (**(code **)(lVar13 + 8))(lVar12);
            func_0x000109f64fdc(lVar13,lVar14,lVar12);
            if (lVar13 != 0) {
              lVar12 = *(long *)(lVar13 + 0x10);
            }
          }
          puVar8[9] = lVar12;
          uVar11 = *(undefined4 *)(param_2 + 0x50);
        }
        *(undefined4 *)(puVar8 + 10) = uVar11;
        *(undefined4 *)((long)puVar8 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)((long)puVar8 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        return puVar8;
      }
      puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
      FUN_109f6600c(puVar8,0x48,8);
      *(undefined4 *)(puVar8 + 3) = 7;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_109ecb048();
    }
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 != 0) {
      lVar13 = param_2 + 0x28;
      (**(code **)(lVar12 + 8))(lVar13);
      func_0x000109f650c0(lVar12,lVar13,param_2 + 0x28,puVar8 + 5);
    }
    return puVar8;
  }
  if (1 < iVar4) {
    if (iVar4 != 2) {
      puVar8 = *(undefined8 **)(param_1 + 0x20);
      FUN_109ecb174(puVar8,*(undefined4 *)(param_2 + 0x60));
      puVar8[5] = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(param_2 + 0x30);
      FUN_109ed08d0(param_1,puVar8,puVar8 + 7,param_2 + 0x38);
      if (*(int *)(puVar8 + 0xc) != 0) {
        lVar12 = 0;
        uVar16 = 0;
        do {
          lVar13 = *(long *)(param_2 + 0x58) + lVar12;
          lVar14 = puVar8[0xb];
          *(undefined4 *)(lVar14 + lVar12 + 0x20) = *(undefined4 *)(lVar13 + 0x20);
          lVar13 = *(long *)(lVar13 + 0x18);
          if ((lVar13 != 0) && (lVar15 = *(long *)(param_1 + 8), lVar15 != 0)) {
            lVar10 = lVar13;
            (**(code **)(lVar15 + 8))(lVar13);
            func_0x000109f64fdc(lVar15,lVar10,lVar13);
            if (lVar15 != 0) {
              lVar13 = *(long *)(lVar15 + 0x10);
            }
          }
          *(long *)(lVar14 + lVar12 + 0x18) = lVar13;
          uVar16 = uVar16 + 1;
          lVar12 = lVar12 + 0x28;
        } while (uVar16 < *(uint *)(puVar8 + 0xc));
      }
      *(undefined4 *)((long)puVar8 + 100) = *(undefined4 *)(param_2 + 100);
      *(undefined1 *)(puVar8 + 0xd) = *(undefined1 *)(param_2 + 0x68);
      bVar5 = (*(byte *)(param_2 + 0x6c) >> 2 & 1) << 2;
      bVar2 = *(byte *)((long)puVar8 + 0x6c) & 0xf8;
      *(byte *)((long)puVar8 + 0x6c) = bVar2 | *(byte *)((long)puVar8 + 0x6c) & 3 | bVar5;
      *(undefined2 *)((long)puVar8 + 0x69) = *(undefined2 *)(param_2 + 0x69);
      *(undefined1 *)((long)puVar8 + 0x6b) = *(undefined1 *)(param_2 + 0x6b);
      *(byte *)((long)puVar8 + 0x6c) = bVar2 | bVar5 | *(byte *)(param_2 + 0x6c) & 3;
      *(undefined8 *)((long)puVar8 + 0x6d) = *(undefined8 *)(param_2 + 0x6d);
      puVar8[0xf] = *(undefined8 *)(param_2 + 0x78);
      *(undefined2 *)((long)puVar8 + 0x75) = *(undefined2 *)(param_2 + 0x75);
      *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(param_2 + 0x80);
      return puVar8;
    }
    lVar12 = *(long *)(param_2 + 0x28);
    if (((lVar12 != 0) && (*param_1 == 1)) && (lVar13 = *(long *)(param_1 + 8), lVar13 != 0)) {
      lVar14 = lVar12;
      (**(code **)(lVar13 + 8))(lVar12);
      func_0x000109f64fdc(lVar13,lVar14,lVar12);
      if (lVar13 != 0) {
        lVar12 = *(long *)(lVar13 + 0x10);
      }
    }
    puVar8 = *(undefined8 **)(param_1 + 0x20);
    func_0x000109ecb114(puVar8,lVar12);
    if (*(int *)(puVar8 + 6) == 0) {
      return puVar8;
    }
    uVar16 = 0;
    lVar12 = 0x50;
    do {
      lVar13 = *(long *)(param_2 + lVar12);
      if ((lVar13 != 0) && (lVar14 = *(long *)(param_1 + 8), lVar14 != 0)) {
        lVar15 = lVar13;
        (**(code **)(lVar14 + 8))(lVar13);
        func_0x000109f64fdc(lVar14,lVar15,lVar13);
        if (lVar14 != 0) {
          lVar13 = *(long *)(lVar14 + 0x10);
        }
      }
      *(long *)((long)puVar8 + lVar12) = lVar13;
      uVar16 = uVar16 + 1;
      lVar12 = lVar12 + 0x20;
    } while (uVar16 < *(uint *)(puVar8 + 6));
    return puVar8;
  }
  if (iVar4 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x20);
    func_0x000109ecaf70(puVar8,*(undefined4 *)(param_2 + 0x28));
    FUN_109ed08d0(param_1,puVar8,puVar8 + 0x10,param_2 + 0x80);
    iVar4 = *(int *)(param_2 + 0x28);
    *(undefined4 *)((long)puVar8 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    puVar8[6] = *(undefined8 *)(param_2 + 0x30);
    if (iVar4 == 0) {
      lVar12 = *(long *)(param_2 + 0x38);
      if ((((*(ulong *)(lVar12 + 0x20) & 0x1fffff) == 0x40000) || ((*param_1 & 1) != 0)) &&
         (lVar13 = *(long *)(param_1 + 8), lVar13 != 0)) {
        lVar14 = lVar12;
        (**(code **)(lVar13 + 8))(lVar12);
        func_0x000109f64fdc(lVar13,lVar14,lVar12);
        if (lVar13 != 0) {
          lVar12 = *(long *)(lVar13 + 0x10);
        }
      }
      puVar8[7] = lVar12;
      return puVar8;
    }
    lVar12 = *(long *)(param_2 + 0x50);
    if ((lVar12 != 0) && (lVar13 = *(long *)(param_1 + 8), lVar13 != 0)) {
      lVar14 = lVar12;
      (**(code **)(lVar13 + 8))(lVar12);
      func_0x000109f64fdc(lVar13,lVar14,lVar12);
      if (lVar13 != 0) {
        lVar12 = *(long *)(lVar13 + 0x10);
      }
    }
    puVar8[10] = lVar12;
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar4 < 3) {
      if (iVar4 != 1) {
        return puVar8;
      }
    }
    else if (iVar4 != 3) {
      if (iVar4 == 5) {
        *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)((long)puVar8 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(param_2 + 0x60);
        return puVar8;
      }
      *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)(param_2 + 0x58);
      return puVar8;
    }
    lVar12 = *(long *)(param_2 + 0x70);
    if ((lVar12 != 0) && (lVar13 = *(long *)(param_1 + 8), lVar13 != 0)) {
      lVar14 = lVar12;
      (**(code **)(lVar13 + 8))(lVar12);
      func_0x000109f64fdc(lVar13,lVar14,lVar12);
      if (lVar13 != 0) {
        lVar12 = *(long *)(lVar13 + 0x10);
      }
    }
    puVar8[0xe] = lVar12;
    *(undefined1 *)(puVar8 + 0xf) = *(undefined1 *)(param_2 + 0x78);
    return puVar8;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x20);
  FUN_109ecaef8(puVar8,*(undefined4 *)(param_2 + 0x28));
  uVar6 = *(ushort *)((long)puVar8 + 0x2c);
  uVar3 = *(ushort *)(param_2 + 0x2c) & 1;
  *(ushort *)((long)puVar8 + 0x2c) = uVar6 & 0xfffe | uVar3;
  uVar1 = (*(ushort *)(param_2 + 0x2c) >> 3 & 0x1ff) << 3;
  uVar7 = uVar6 & 0xf000;
  *(ushort *)((long)puVar8 + 0x2c) = uVar7 | uVar6 & 6 | uVar3 | uVar1;
  uVar3 = uVar3 | (*(ushort *)(param_2 + 0x2c) >> 1 & 1) << 1;
  *(ushort *)((long)puVar8 + 0x2c) = uVar7 | uVar6 & 4 | uVar1 | uVar3;
  *(ushort *)((long)puVar8 + 0x2c) = uVar7 | uVar1 | uVar3 | *(ushort *)(param_2 + 0x2c) & 4;
  FUN_109ed08d0(param_1,puVar8,puVar8 + 6,param_2 + 0x30);
  if ((&UNK_110b78540)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] == '\0') {
    return puVar8;
  }
  uVar16 = 0;
  puVar17 = (undefined8 *)(param_2 + 0x70);
  puVar18 = puVar8 + 0xe;
  do {
    lVar12 = puVar17[-1];
    if ((lVar12 != 0) && (lVar13 = *(long *)(param_1 + 8), lVar13 != 0)) {
      lVar14 = lVar12;
      (**(code **)(lVar13 + 8))(lVar12);
      func_0x000109f64fdc(lVar13,lVar14,lVar12);
      if (lVar13 != 0) {
        lVar12 = *(long *)(lVar13 + 0x10);
      }
    }
    puVar18[-1] = lVar12;
    uVar9 = *puVar17;
    puVar18[1] = puVar17[1];
    *puVar18 = uVar9;
    uVar16 = uVar16 + 1;
    puVar17 = puVar17 + 6;
    puVar18 = puVar18 + 6;
  } while (uVar16 < (byte)(&UNK_110b78540)[(ulong)*(uint *)(param_2 + 0x28) * 0x68]);
  return puVar8;
}



/* Entry: 109ecfeb0; end: 109ecffa3;  */

void FUN_109ecfeb0(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 auStack_68 [4];
  long lStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_48;
  
  puVar5 = param_1 + 2;
  *puVar5 = 0;
  *param_1 = puVar5;
  param_1[1] = 0;
  lVar3 = param_2[4];
  param_1[3] = param_1;
  param_1[4] = lVar3;
  if ((long *)*param_2 != param_2 + 2) {
    auStack_68[0] = 0x100;
    lVar1 = param_4;
    if (param_4 == 0) {
      FUN_109f64c74(0,0x109f65648,FUN_109f65684);
      lVar3 = param_2[4];
    }
    ppuStack_58 = &ppuStack_58;
    puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x20) + 0x18);
    lStack_60 = lVar1;
    ppuStack_50 = ppuStack_58;
    puStack_48 = puVar2;
    func_0x000109ecacd8();
    puVar2[3] = param_3;
    puVar4 = (undefined8 *)param_1[3];
    *puVar2 = puVar5;
    puVar2[1] = puVar4;
    *puVar4 = puVar2;
    param_1[3] = puVar2;
    FUN_109ecffa4(auStack_68,param_1,param_2);
    FUN_109ed027c(auStack_68);
    if ((param_4 == 0) && (lStack_60 != 0)) {
      lVar3 = lStack_60 + -0x30;
      FUN_109f65aa4(lVar3);
      FUN_109f65ae0(lVar3);
    }
  }
  return;
}



/* Entry: 109ecffa4; end: 109ed027b;  */

void FUN_109ecffa4(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  plVar10 = (long *)*param_3;
  if (*plVar10 != 0) {
    plVar1 = param_2 + 2;
    do {
      if ((int)plVar10[2] == 2) {
        lVar2 = *(long *)(param_1 + 0x20);
        FUN_109ecae20();
        *(int *)(lVar2 + 0x68) = (int)plVar10[0xd];
        *(undefined1 *)(lVar2 + 0x6c) = *(undefined1 *)((long)plVar10 + 0x6c);
        if ((long *)*param_2 == plVar1) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)param_2[3];
        }
        if ((int)plVar8[2] == 0) {
          uVar4 = 1;
          plVar13 = plVar8;
        }
        else {
          uVar4 = 0;
          plVar13 = (long *)0x0;
          if (*(long *)*plVar8 != 0) {
            plVar13 = (long *)*plVar8;
          }
        }
        FUN_109ef838c(uVar4,plVar13,lVar2);
        FUN_109ecffa4(param_1,lVar2 + 0x20,plVar10 + 4);
        plVar8 = plVar10 + 8;
        if ((long *)*plVar8 != plVar10 + 10) {
          FUN_109ef7e2c(lVar2);
          lVar2 = lVar2 + 0x40;
          goto LAB_109ed0150;
        }
      }
      else if ((int)plVar10[2] == 1) {
        lVar2 = *(long *)(param_1 + 0x20);
        FUN_109ecad84();
        *(int *)(lVar2 + 0x40) = (int)plVar10[8];
        lVar11 = plVar10[7];
        if ((lVar11 != 0) && (lVar12 = *(long *)(param_1 + 8), lVar12 != 0)) {
          lVar3 = lVar11;
          (**(code **)(lVar12 + 8))(lVar11);
          FUN_109f64fdc(lVar12,lVar3,lVar11);
          if (lVar12 != 0) {
            lVar11 = *(long *)(lVar12 + 0x10);
          }
        }
        *(long *)(lVar2 + 0x38) = lVar11;
        if ((long *)*param_2 == plVar1) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)param_2[3];
        }
        if ((int)plVar8[2] == 0) {
          uVar4 = 1;
          plVar13 = plVar8;
        }
        else {
          uVar4 = 0;
          plVar13 = (long *)0x0;
          if (*(long *)*plVar8 != 0) {
            plVar13 = (long *)*plVar8;
          }
        }
        FUN_109ef838c(uVar4,plVar13,lVar2);
        FUN_109ecffa4(param_1,lVar2 + 0x48,plVar10 + 9);
        lVar2 = lVar2 + 0x68;
        plVar8 = plVar10 + 0xd;
LAB_109ed0150:
        FUN_109ecffa4(param_1,lVar2,plVar8);
      }
      else {
        if ((long *)*param_2 == plVar1) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2[3];
        }
        lVar11 = *(long *)(param_1 + 8);
        plVar8 = plVar10;
        (**(code **)(lVar11 + 8))(plVar10);
        func_0x000109f650c0(lVar11,plVar8,plVar10,lVar2);
        for (plVar8 = (long *)plVar10[4]; *plVar8 != 0; plVar8 = (long *)*plVar8) {
          if ((int)plVar8[3] == 8) {
            puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
            FUN_109f6600c(puVar5,0x68,8);
            *(undefined4 *)(puVar5 + 3) = 8;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[7] = 0;
            *puVar5 = 0;
            puVar5[5] = puVar5 + 7;
            puVar5[6] = 0;
            puVar5[8] = puVar5 + 5;
            FUN_109ed08d0(param_1,puVar5,puVar5 + 9,plVar8 + 9);
            FUN_109ecb4f0(1,lVar2,puVar5);
            for (plVar13 = (long *)plVar8[5]; *plVar13 != 0; plVar13 = (long *)*plVar13) {
              puVar6 = puVar5;
              FUN_109ecb354(puVar5,plVar13[2],plVar13[6]);
              plVar7 = puVar6 + 4;
              *plVar7 = param_1 + 0x10;
              puVar9 = *(undefined8 **)(param_1 + 0x18);
              puVar6[5] = puVar9;
              *puVar9 = plVar7;
              *(long **)(param_1 + 0x18) = plVar7;
            }
          }
          else {
            lVar11 = param_1;
            FUN_109ecf7f8(param_1,plVar8);
            FUN_109ecb4f0(1,lVar2,lVar11);
          }
        }
      }
      plVar10 = (long *)*plVar10;
    } while (*plVar10 != 0);
  }
  return;
}



/* Entry: 109ed027c; end: 109ed0353;  */

void FUN_109ed027c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_1 + 0x18);
  while (plVar1 != (long *)(param_1 + 0x10)) {
    plVar6 = (long *)plVar1[1];
    lVar3 = plVar1[-2];
    if ((lVar3 != 0) && (lVar5 = *(long *)(param_1 + 8), lVar5 != 0)) {
      lVar2 = lVar3;
      (**(code **)(lVar5 + 8))(lVar3);
      FUN_109f64fdc(lVar5,lVar2,lVar3);
      if (lVar5 != 0) {
        lVar3 = *(long *)(lVar5 + 0x10);
      }
    }
    plVar1[-2] = lVar3;
    lVar3 = *plVar1;
    plVar4 = (long *)plVar1[1];
    *(long **)(lVar3 + 8) = plVar4;
    *plVar4 = lVar3;
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar5 = plVar1[2];
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      lVar2 = lVar5;
      (**(code **)(lVar3 + 8))(lVar5);
      FUN_109f64fdc(lVar3,lVar2,lVar5);
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar3 + 0x10);
      }
    }
    plVar1[2] = lVar5;
    plVar4 = (long *)(lVar5 + 8);
    lVar3 = *plVar4;
    *plVar1 = lVar3;
    plVar1[1] = (long)plVar4;
    *(long **)(lVar3 + 8) = plVar1;
    *plVar4 = (long)plVar1;
    plVar1 = plVar6;
  }
  return;
}



/* Entry: 109ed0354; end: 109ed03f7;  */

undefined1 * FUN_109ed0354(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 uStack_58;
  undefined1 uStack_57;
  long lStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_3 != 0;
  uStack_57 = 0;
  lVar2 = param_3;
  if (param_3 == 0) {
    FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  }
  ppuStack_48 = &ppuStack_48;
  puVar1 = &uStack_58;
  lStack_50 = lVar2;
  ppuStack_40 = ppuStack_48;
  uStack_38 = param_1;
  FUN_109ed03f8(puVar1,param_2);
  if ((param_3 == 0) && (lStack_50 != 0)) {
    lVar2 = lStack_50 + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
  }
  return puVar1;
}



/* Entry: 109ed03f8; end: 109ed04a7;  */

long FUN_109ed03f8(char *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_109ecabf8();
  lVar3 = *(long *)(param_2 + 0x28);
  if (lVar3 != 0) {
    if ((*param_1 == '\x01') && (lVar4 = *(long *)(param_1 + 8), lVar4 != 0)) {
      lVar2 = lVar3;
      (**(code **)(lVar4 + 8))(lVar3);
      FUN_109f64fdc(lVar4,lVar2,lVar3);
      if (lVar4 != 0) {
        lVar3 = *(long *)(lVar4 + 0x10);
      }
    }
    *(long *)(lVar1 + 0x28) = lVar3;
  }
  FUN_109ed0834(param_1,lVar1 + 0x58,param_2 + 0x58);
  FUN_109ecffa4(param_1,lVar1 + 0x30,param_2 + 0x30);
  FUN_109ed027c(param_1);
  *(undefined4 *)(lVar1 + 0x84) = 0;
  return lVar1;
}



/* Entry: 109ed04a8; end: 109ed0573;  */

long FUN_109ed04a8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000109ecab14(param_1,*(undefined8 *)(param_2 + 0x10));
  uVar1 = *(uint *)(param_2 + 0x20);
  *(uint *)(lVar2 + 0x20) = uVar1;
  if (uVar1 != 0) {
    lVar3 = param_1;
    FUN_109f658b0(param_1,(ulong)uVar1 << 4);
    *(long *)(lVar2 + 0x28) = lVar3;
    _memcpy();
  }
  *(undefined1 *)(lVar2 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(lVar2 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined1 *)(lVar2 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  uVar1 = *(uint *)(param_2 + 0x40);
  *(uint *)(lVar2 + 0x40) = uVar1;
  *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (uVar1 != 0) {
    FUN_109f658b0(param_1,(ulong)uVar1 << 3);
    *(long *)(lVar2 + 0x48) = param_1;
    uVar1 = *(uint *)(param_2 + 0x40);
    if (uVar1 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar2 + 0x48) + lVar3) =
             *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar3);
        lVar3 = lVar3 + 8;
      } while ((ulong)uVar1 * 8 - lVar3 != 0);
    }
  }
  return lVar2;
}



/* Entry: 109ed0574; end: 109ed0833;  */

long FUN_109ed0574(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined2 *puVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long *plVar12;
  undefined2 auStack_78 [4];
  long lStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  long lStack_58;
  
  auStack_78[0] = 1;
  lVar3 = 0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  ppppuStack_68 = &ppppuStack_68;
  lStack_70 = lVar3;
  ppppuStack_60 = ppppuStack_68;
  FUN_109eca628(param_1,(long)*(char *)(param_2 + 0x61),*(undefined8 *)(param_2 + 0x28),0);
  lStack_58 = param_1;
  FUN_109ed0834(auStack_78,param_1 + 8,param_2 + 8);
  plVar8 = *(long **)(param_2 + 0x178);
  if (*plVar8 != 0) {
    do {
      lVar9 = param_1;
      FUN_109ed04a8(param_1,plVar8);
      lVar3 = lStack_70;
      plVar12 = plVar8;
      (**(code **)(lStack_70 + 8))(plVar8);
      func_0x000109f650c0(lVar3,plVar12,plVar8,lVar9);
      plVar8 = (long *)*plVar8;
    } while (*plVar8 != 0);
    plVar8 = *(long **)(param_2 + 0x178);
    for (plVar12 = (long *)**(long **)(param_2 + 0x178); plVar12 != (long *)0x0;
        plVar12 = (long *)*plVar12) {
      lVar3 = plVar8[6];
      if (lVar3 != 0) {
        do {
          lVar9 = lStack_70;
          plVar12 = plVar8;
          if (((char)auStack_78[0] == '\x01') && (lStack_70 != 0)) {
            plVar5 = plVar8;
            (**(code **)(lStack_70 + 8))(plVar8);
            func_0x000109f64fdc(lVar9,plVar5,plVar8);
            if (lVar9 != 0) {
              plVar12 = *(long **)(lVar9 + 0x10);
            }
          }
          puVar6 = auStack_78;
          FUN_109ed03f8(puVar6,lVar3);
          plVar12[6] = (long)puVar6;
          *(long **)(puVar6 + 0x10) = plVar12;
          plVar8 = (long *)*plVar8;
          plVar12 = (long *)*plVar8;
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_109ed0664;
            lVar3 = plVar8[6];
            if (lVar3 != 0) break;
            plVar8 = plVar12;
            plVar12 = (long *)*plVar12;
          }
        } while( true );
      }
      plVar8 = plVar12;
    }
  }
LAB_109ed0664:
  _memcpy(param_1 + 0x30,param_2 + 0x30,0x148);
  lVar3 = param_1;
  FUN_109f65c2c(param_1,*(undefined8 *)(param_1 + 0x30));
  *(long *)(param_1 + 0x30) = lVar3;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar3 = param_1;
    FUN_109f65c2c();
    *(long *)(param_1 + 0x38) = lVar3;
  }
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  iVar2 = *(int *)(param_2 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = iVar2;
  if (iVar2 != 0) {
    lVar3 = param_1;
    FUN_109f65bec(param_1,*(undefined8 *)(param_2 + 0x1b0));
    *(long *)(param_1 + 0x1b0) = lVar3;
  }
  lVar3 = *(long *)(param_2 + 0x1c0);
  if (lVar3 != 0) {
    lVar9 = param_1;
    FUN_109f65bec(param_1,lVar3,(ulong)*(ushort *)(lVar3 + 0x16) * 8 + 0x18);
    *(long *)(param_1 + 0x1c0) = lVar9;
  }
  if (*(uint *)(param_2 + 0x1c8) != 0) {
    lVar3 = param_1;
    FUN_109f658b0(param_1,(ulong)*(uint *)(param_2 + 0x1c8) << 5);
    uVar7 = 0;
    if (*(int *)(param_2 + 0x1c8) != 0) {
      lVar9 = 0;
      uVar10 = 0;
      puVar11 = (uint *)(lVar3 + 0x10);
      do {
        puVar1 = (uint *)(*(long *)(param_2 + 0x1d0) + lVar9);
        uVar7 = *puVar1;
        puVar11[-4] = uVar7;
        lVar4 = param_1;
        FUN_109f65bec(param_1,*(undefined8 *)(puVar1 + 2),(ulong)uVar7 << 2);
        *(long *)(puVar11 + -2) = lVar4;
        *puVar11 = puVar1[4];
        lVar4 = param_1;
        FUN_109f65bec(param_1,*(undefined8 *)(puVar1 + 6));
        *(long *)(puVar11 + 2) = lVar4;
        uVar10 = uVar10 + 1;
        uVar7 = *(uint *)(param_2 + 0x1c8);
        puVar11 = puVar11 + 8;
        lVar9 = lVar9 + 0x20;
      } while (uVar10 < uVar7);
    }
    *(long *)(param_1 + 0x1d0) = lVar3;
    *(uint *)(param_1 + 0x1c8) = uVar7;
  }
  if (lStack_70 != 0) {
    lVar3 = lStack_70 + -0x30;
    FUN_109f65aa4(lVar3);
    FUN_109f65ae0(lVar3);
  }
  return param_1;
}



/* Entry: 109ed0834; end: 109ed08cf;  */

void FUN_109ed0834(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2 + 2;
  *puVar6 = 0;
  *param_2 = puVar6;
  param_2[1] = 0;
  param_2[3] = param_2;
  plVar5 = (long *)*param_3;
  lVar3 = *plVar5;
  while (lVar3 != 0) {
    plVar1 = plVar5;
    FUN_109ecf6d0(plVar5,*(undefined8 *)(param_1 + 0x20));
    lVar3 = *(long *)(param_1 + 8);
    plVar2 = plVar5;
    (**(code **)(lVar3 + 8))(plVar5);
    func_0x000109f650c0(lVar3,plVar2,plVar5,plVar1);
    puVar4 = (undefined8 *)param_2[3];
    *plVar1 = (long)puVar6;
    plVar1[1] = (long)puVar4;
    *puVar4 = plVar1;
    param_2[3] = plVar1;
    plVar5 = (long *)*plVar5;
    lVar3 = *plVar5;
  }
  return;
}



/* Entry: 109ed08d0; end: 109ed0943;  */

int * FUN_109ed08d0(long param_1,int *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  long *plVar21;
  int *piVar22;
  uint uVar23;
  int *piVar24;
  ulong uVar25;
  
  FUN_109ecb048(param_2,param_3,*(undefined1 *)(param_4 + 0x1c),*(undefined1 *)(param_4 + 0x1d));
  plVar21 = *(long **)(param_1 + 8);
  if (plVar21 == (long *)0x0) {
    return param_2;
  }
  uVar9 = param_4;
  (*(code *)plVar21[1])();
  uVar7 = *(uint *)(plVar21 + 7);
  if (*(uint *)(plVar21 + 8) < uVar7) {
    if (*(uint *)((long)plVar21 + 0x44) + *(uint *)(plVar21 + 8) < uVar7) goto LAB_109f65210;
    uVar23 = *(uint *)((long)plVar21 + 0x3c);
    if (*(uint *)((long)plVar21 + 0x44) == uVar7) {
      _bzero(*plVar21,(ulong)*(uint *)(&UNK_10e47d50c + (ulong)uVar23 * 0x20) * 0x18);
      plVar21[8] = 0;
      goto LAB_109f65210;
    }
  }
  else {
    uVar23 = *(int *)((long)plVar21 + 0x3c) + 1;
  }
  if (uVar23 < 0x1f) {
    if (*plVar21 == 0) {
      lVar11 = 0;
    }
    else {
      lVar15 = *(long *)(*plVar21 + -0x30);
      lVar11 = 0;
      if (lVar15 != 0) {
        lVar11 = lVar15 + 0x30;
      }
    }
    lVar15 = (ulong)uVar23 * 0x20;
    uVar7 = *(uint *)(&UNK_10e47d50c + lVar15);
    func_0x000109f6590c(lVar11,(ulong)uVar7 * 0x18);
    if (lVar11 != 0) {
      puVar14 = (uint *)*plVar21;
      lVar16 = plVar21[3];
      uVar1 = *(uint *)(plVar21 + 4);
      *plVar21 = lVar11;
      uVar8 = *(uint *)(&UNK_10e47d510 + lVar15);
      *(uint *)(plVar21 + 4) = uVar7;
      *(uint *)((long)plVar21 + 0x24) = uVar8;
      lVar5 = *(long *)(&UNK_10e47d518 + lVar15);
      lVar6 = *(long *)(&UNK_10e47d520 + lVar15);
      plVar21[5] = lVar5;
      plVar21[6] = lVar6;
      *(undefined4 *)(plVar21 + 7) = *(undefined4 *)(&UNK_10e47d508 + lVar15);
      *(uint *)((long)plVar21 + 0x3c) = uVar23;
      *(undefined4 *)((long)plVar21 + 0x44) = 0;
      if (uVar1 != 0) {
        lVar15 = (ulong)uVar1 * 0x18;
        puVar19 = puVar14;
        do {
          lVar20 = *(long *)(puVar19 + 2);
          if (lVar20 != 0 && lVar20 != lVar16) {
            do {
              uVar23 = *puVar19;
              uVar17 = lVar5 * (ulong)uVar23;
              uVar17 = ((uVar17 & 0xffffffff) * (ulong)uVar7 >> 0x20) +
                       (uVar17 >> 0x20) * (ulong)uVar7 >> 0x20;
              puVar13 = (uint *)(lVar11 + uVar17 * 0x18);
              if (*(long *)(puVar13 + 2) != 0) {
                uVar18 = lVar6 * (ulong)uVar23;
                do {
                  uVar2 = (int)(((uVar18 & 0xffffffff) * (ulong)uVar8 >> 0x20) +
                                (uVar18 >> 0x20) * (ulong)uVar8 >> 0x20) + 1 + (int)uVar17;
                  uVar3 = 0;
                  if (uVar7 <= uVar2) {
                    uVar3 = uVar7;
                  }
                  uVar17 = (ulong)(uVar2 - uVar3);
                  puVar13 = (uint *)(lVar11 + uVar17 * 0x18);
                } while (*(long *)(puVar13 + 2) != 0);
              }
              uVar12 = *(undefined8 *)(puVar19 + 4);
              *puVar13 = uVar23;
              *(long *)(puVar13 + 2) = lVar20;
              *(undefined8 *)(puVar13 + 4) = uVar12;
              puVar13 = puVar19;
              do {
                puVar19 = puVar13 + 6;
                if (puVar19 == puVar14 + (ulong)uVar1 * 6) goto LAB_109f651f8;
                lVar20 = *(long *)(puVar13 + 8);
                puVar13 = puVar19;
              } while (lVar20 == 0 || lVar20 == lVar16);
            } while( true );
          }
          puVar19 = puVar19 + 6;
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != 0);
      }
LAB_109f651f8:
      if (puVar14 != (uint *)0x0) {
        FUN_109f65aa4(puVar14 + -0xc);
        FUN_109f65ae0(puVar14 + -0xc);
      }
    }
  }
LAB_109f65210:
  uVar17 = plVar21[5] * (uVar9 & 0xffffffff);
  uVar7 = *(uint *)(plVar21 + 4);
  uVar23 = *(uint *)((long)plVar21 + 0x24);
  uVar18 = ((uVar17 & 0xffffffff) * (ulong)uVar7 >> 0x20) + (uVar17 >> 0x20) * (ulong)uVar7;
  uVar25 = uVar18 >> 0x20;
  uVar17 = plVar21[6] * (uVar9 & 0xffffffff);
  piVar24 = (int *)0x0;
  do {
    piVar22 = (int *)(*plVar21 + uVar25 * 0x18);
    lVar11 = *(long *)(piVar22 + 2);
    if (lVar11 == 0) {
      if (piVar24 != (int *)0x0) {
        piVar22 = piVar24;
      }
      goto LAB_109f652cc;
    }
    piVar4 = piVar22;
    if (piVar24 != (int *)0x0 || lVar11 != plVar21[3]) {
      piVar4 = piVar24;
    }
    if (((lVar11 != plVar21[3]) && (*piVar22 == (int)uVar9)) &&
       (uVar10 = param_4, (*(code *)plVar21[2])(), (uVar10 & 1) != 0)) goto LAB_109f652fc;
    uVar1 = (int)(((uVar17 & 0xffffffff) * (ulong)uVar23 >> 0x20) + (uVar17 >> 0x20) * (ulong)uVar23
                 >> 0x20) + 1 + (int)uVar25;
    uVar8 = 0;
    if (uVar7 <= uVar1) {
      uVar8 = uVar7;
    }
    uVar1 = uVar1 - uVar8;
    uVar25 = (ulong)uVar1;
    piVar24 = piVar4;
  } while (uVar1 != (uint)(uVar18 >> 0x20));
  piVar22 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar22 = (int *)0x0;
  }
  else {
LAB_109f652cc:
    if (*(long *)(piVar22 + 2) == plVar21[3]) {
      *(int *)((long)plVar21 + 0x44) = *(int *)((long)plVar21 + 0x44) + -1;
    }
    *piVar22 = (int)uVar9;
    *(int *)(plVar21 + 8) = (int)plVar21[8] + 1;
LAB_109f652fc:
    *(ulong *)(piVar22 + 2) = param_4;
    *(undefined8 *)(piVar22 + 4) = param_3;
  }
  return piVar22;
}



/* Entry: 109ed0944; end: 109ed3387;  */

void FUN_109ed0944(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109ed095c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10e06c800 + (ulong)param_1 * 2) * 4 + 0x109ed0960))();
  return;
}



/* Entry: 109ed3388; end: 109ed381f;  */

void FUN_109ed3388(short *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  uint3 uVar6;
  uint uVar7;
  undefined6 uVar8;
  undefined4 uVar9;
  short sVar10;
  uint3 uVar11;
  uint uVar12;
  undefined6 uVar13;
  undefined4 uVar14;
  short sVar15;
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  undefined6 uVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  short sVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [14];
  uint7 uVar54;
  bool bVar55;
  double *pdVar56;
  short sVar57;
  double *pdVar58;
  undefined2 *puVar59;
  float *pfVar60;
  char cVar61;
  byte bVar62;
  char cVar63;
  char cVar64;
  byte bVar65;
  byte bVar66;
  float fVar67;
  undefined7 uVar68;
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar89;
  ulong uVar90;
  undefined1 auVar93 [16];
  float fVar94;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  byte bVar105;
  byte bVar106;
  float fVar107;
  ulong uVar108;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  float fVar126;
  ulong uVar127;
  undefined1 auVar129 [16];
  ulong uVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  byte bVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  byte bVar147;
  byte bVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  undefined1 uVar152;
  undefined1 uVar153;
  undefined1 uVar154;
  undefined1 uVar155;
  undefined1 uVar156;
  undefined1 uVar157;
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  byte bVar161;
  byte bVar162;
  undefined1 uVar163;
  undefined1 uVar164;
  byte bVar165;
  byte bVar166;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar69 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar70 [12];
  undefined1 auVar73 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar71 [14];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar91 [12];
  undefined1 auVar92 [16];
  undefined1 auVar95 [12];
  undefined1 auVar98 [16];
  undefined1 auVar109 [12];
  undefined1 auVar113 [16];
  undefined1 auVar128 [12];
  undefined1 auVar130 [16];
  
  pdVar56 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar58 = (double *)param_3[1];
    if (pdVar56[0xf] == pdVar58[0xf]) {
      uVar68 = CONCAT16(-(pdVar56[10] == pdVar58[10]),
                        (uint6)CONCAT14(-(pdVar56[9] == pdVar58[9]),
                                        (uint)CONCAT12(-(pdVar56[8] == pdVar58[8]),
                                                       (ushort)(byte)-(pdVar56[7] == pdVar58[7]))));
      uVar54 = CONCAT16(-(pdVar56[10] == pdVar58[10]),
                        (uint6)(uint5)CONCAT34((int3)((uint7)uVar68 >> 0x20),
                                               (uint)(uint3)CONCAT52((int5)((uint7)uVar68 >> 0x10),
                                                                     (ushort)(byte)-(pdVar56[7] ==
                                                                                    pdVar58[7])))) &
               CONCAT16(-(pdVar56[6] == pdVar58[6]),
                        (uint6)CONCAT14(-(pdVar56[5] == pdVar58[5]),
                                        (uint)CONCAT12(-(pdVar56[4] == pdVar58[4]),
                                                       (ushort)(byte)-(pdVar56[3] == pdVar58[3]))));
      bVar62 = NEON_uminv(CONCAT17(-((char)((pdVar56[0xe] == pdVar58[0xe]) * -0x80) < '\0'),
                                   CONCAT16(-((char)((pdVar56[0xd] == pdVar58[0xd]) * -0x80) < '\0')
                                            ,CONCAT15(-((char)((pdVar56[0xc] == pdVar58[0xc]) *
                                                              -0x80) < '\0'),
                                                      CONCAT14(-((char)((pdVar56[0xb] ==
                                                                        pdVar58[0xb]) * -0x80) <
                                                                '\0'),CONCAT13(-((char)((char)(
                                                  uVar54 >> 0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar54 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar54 >>
                                                                                          0x10) << 7
                                                                                   ) < '\0'),
                                                                           -((char)((char)uVar54 <<
                                                                                   7) < '\0'))))))))
                          ,1);
      bVar55 = false;
      if (((bVar62 & pdVar56[2] == pdVar58[2]) == 1) &&
         (bVar55 = false, !NAN(pdVar56[1]) && !NAN(pdVar58[1]))) {
        bVar55 = pdVar56[1] == pdVar58[1];
      }
      if (bVar55) {
        bVar55 = false;
        if (!NAN(*pdVar56) && !NAN(*pdVar58)) {
          bVar55 = *pdVar56 == *pdVar58;
        }
        goto LAB_109ed3814;
      }
    }
  }
  else {
    if (param_2 != 0x20) {
      puVar59 = (undefined2 *)param_3[1];
      sVar57 = *(short *)(pdVar56 + 0xb);
      uVar99 = (undefined1)*(undefined2 *)(pdVar56 + 10);
      uVar100 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 10) >> 8);
      uVar101 = (undefined1)*(undefined2 *)(pdVar56 + 9);
      uVar102 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 9) >> 8);
      uVar103 = (undefined1)*(undefined2 *)(pdVar56 + 8);
      uVar104 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 8) >> 8);
      sVar10 = *(short *)(pdVar56 + 7);
      uVar114 = (undefined1)*(undefined2 *)(pdVar56 + 6);
      uVar115 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 6) >> 8);
      uVar1 = CONCAT12(uVar99,sVar57);
      uVar2 = CONCAT13(uVar100,uVar1);
      uVar3 = CONCAT15(uVar102,CONCAT14(uVar101,uVar2));
      uVar116 = (undefined1)*(undefined2 *)(pdVar56 + 5);
      uVar117 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 5) >> 8);
      uVar118 = (undefined1)*(undefined2 *)(pdVar56 + 4);
      uVar119 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 4) >> 8);
      sVar15 = *(short *)(pdVar56 + 3);
      uVar120 = (undefined1)*(undefined2 *)(pdVar56 + 2);
      uVar121 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 2) >> 8);
      uVar122 = (undefined1)*(undefined2 *)(pdVar56 + 1);
      uVar123 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 1) >> 8);
      uVar124 = (undefined1)*(undefined2 *)pdVar56;
      uVar125 = (undefined1)((ushort)*(undefined2 *)pdVar56 >> 8);
      uVar6 = CONCAT12(uVar114,sVar10);
      uVar7 = CONCAT13(uVar115,uVar6);
      uVar8 = CONCAT15(uVar117,CONCAT14(uVar116,uVar7));
      uVar11 = CONCAT12(uVar120,sVar15);
      uVar12 = CONCAT13(uVar121,uVar11);
      uVar13 = CONCAT15(uVar123,CONCAT14(uVar122,uVar12));
      uVar131 = CONCAT44((uint)*(ushort *)(pdVar56 + 0xe) << 0xd,
                         (uint)*(ushort *)(pdVar56 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar90 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar108 = CONCAT44((uVar7 >> 0x10) << 0xd,(uVar6 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar127 = CONCAT44((uVar12 >> 0x10) << 0xd,(uVar11 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      auVar129._0_4_ = (float)uVar127 * 5.192297e+33;
      auVar129._4_4_ = (float)(uVar127 >> 0x20) * 5.192297e+33;
      auVar129._8_4_ = (float)(((ushort)((uint6)uVar13 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar129._12_4_ =
           (float)(((ushort)(CONCAT17(uVar125,CONCAT16(uVar124,uVar13)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar135._0_4_ = (float)uVar108 * 5.192297e+33;
      auVar135._4_4_ = (float)(uVar108 >> 0x20) * 5.192297e+33;
      auVar135._8_4_ = (float)(((ushort)((uint6)uVar8 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar135._12_4_ =
           (float)(((ushort)(CONCAT17(uVar119,CONCAT16(uVar118,uVar8)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar136._0_4_ = (float)uVar90 * 5.192297e+33;
      auVar136._4_4_ = (float)(uVar90 >> 0x20) * 5.192297e+33;
      auVar136._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar136._12_4_ =
           (float)(((ushort)(CONCAT17(uVar104,CONCAT16(uVar103,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar132._0_4_ = (float)uVar131 * 5.192297e+33;
      auVar132._4_4_ = (float)(uVar131 >> 0x20) * 5.192297e+33;
      auVar132._8_4_ = (float)((*(ushort *)(pdVar56 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar132._12_4_ = (float)((*(ushort *)(pdVar56 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar17 = -(uint)(65536.0 <= auVar132._4_4_);
      iVar18 = -(uint)(65536.0 <= auVar132._8_4_);
      iVar19 = -(uint)(65536.0 <= auVar132._12_4_);
      iVar22 = -(uint)(65536.0 <= auVar136._4_4_);
      iVar23 = -(uint)(65536.0 <= auVar136._8_4_);
      iVar24 = -(uint)(65536.0 <= auVar136._12_4_);
      iVar28 = -(uint)(65536.0 <= auVar135._4_4_);
      iVar30 = -(uint)(65536.0 <= auVar135._8_4_);
      iVar32 = -(uint)(65536.0 <= auVar135._12_4_);
      iVar38 = -(uint)(65536.0 <= auVar129._4_4_);
      iVar39 = -(uint)(65536.0 <= auVar129._8_4_);
      iVar40 = -(uint)(65536.0 <= auVar129._12_4_);
      uVar4 = CONCAT13(uVar100,CONCAT12(uVar99,sVar57));
      uVar3 = CONCAT15(uVar102,CONCAT14(uVar101,uVar4));
      uVar9 = CONCAT13(uVar115,CONCAT12(uVar114,sVar10));
      uVar8 = CONCAT15(uVar117,CONCAT14(uVar116,uVar9));
      uVar14 = CONCAT13(uVar121,CONCAT12(uVar120,sVar15));
      uVar13 = CONCAT15(uVar123,CONCAT14(uVar122,uVar14));
      uVar90 = CONCAT17((short)*(ushort *)(pdVar56 + 0xe) >> 0xf,
                        (uint7)(((byte)((short)*(ushort *)(pdVar56 + 0xf) >> 0xf) & 0x80) << 0x18))
               & 0x80ffffffffffffff;
      auVar49[8] = SUB41(auVar129._8_4_,0);
      auVar49._0_8_ =
           CONCAT17((char)((uint)auVar129._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar129._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar129._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar129._4_4_,0),auVar129._0_4_)))) |
           0x7f8000007f800000;
      auVar49[9] = (char)((uint)auVar129._8_4_ >> 8);
      auVar49[10] = (byte)((uint)auVar129._8_4_ >> 0x10) | 0x80;
      auVar49[0xb] = (byte)((uint)auVar129._8_4_ >> 0x18) | 0x7f;
      auVar49[0xc] = SUB41(auVar129._12_4_,0);
      auVar49[0xd] = (char)((uint)auVar129._12_4_ >> 8);
      auVar49[0xe] = (byte)((uint)auVar129._12_4_ >> 0x10) | 0x80;
      auVar49[0xf] = (byte)((uint)auVar129._12_4_ >> 0x18) | 0x7f;
      auVar36[4] = (char)iVar38;
      auVar36._0_4_ = -(uint)(65536.0 <= auVar129._0_4_);
      auVar36[5] = (char)((uint)iVar38 >> 8);
      auVar36[6] = (char)((uint)iVar38 >> 0x10);
      auVar36[7] = (char)((uint)iVar38 >> 0x18);
      auVar36[8] = (char)iVar39;
      auVar36[9] = (char)((uint)iVar39 >> 8);
      auVar36[10] = (char)((uint)iVar39 >> 0x10);
      auVar36[0xb] = (char)((uint)iVar39 >> 0x18);
      auVar36[0xc] = (char)iVar40;
      auVar36[0xd] = (char)((uint)iVar40 >> 8);
      auVar36[0xe] = (char)((uint)iVar40 >> 0x10);
      auVar36[0xf] = (char)((uint)iVar40 >> 0x18);
      auVar129 = auVar129 ^ (auVar129 ^ auVar49) & auVar36;
      auVar48[8] = SUB41(auVar135._8_4_,0);
      auVar48._0_8_ =
           CONCAT17((char)((uint)auVar135._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar135._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar135._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar135._4_4_,0),auVar135._0_4_)))) |
           0x7f8000007f800000;
      auVar48[9] = (char)((uint)auVar135._8_4_ >> 8);
      auVar48[10] = (byte)((uint)auVar135._8_4_ >> 0x10) | 0x80;
      auVar48[0xb] = (byte)((uint)auVar135._8_4_ >> 0x18) | 0x7f;
      auVar48[0xc] = SUB41(auVar135._12_4_,0);
      auVar48[0xd] = (char)((uint)auVar135._12_4_ >> 8);
      auVar48[0xe] = (byte)((uint)auVar135._12_4_ >> 0x10) | 0x80;
      auVar48[0xf] = (byte)((uint)auVar135._12_4_ >> 0x18) | 0x7f;
      auVar25[4] = (char)iVar28;
      auVar25._0_4_ = -(uint)(65536.0 <= auVar135._0_4_);
      auVar25[5] = (char)((uint)iVar28 >> 8);
      auVar25[6] = (char)((uint)iVar28 >> 0x10);
      auVar25[7] = (char)((uint)iVar28 >> 0x18);
      auVar25[8] = (char)iVar30;
      auVar25[9] = (char)((uint)iVar30 >> 8);
      auVar25[10] = (char)((uint)iVar30 >> 0x10);
      auVar25[0xb] = (char)((uint)iVar30 >> 0x18);
      auVar25[0xc] = (char)iVar32;
      auVar25[0xd] = (char)((uint)iVar32 >> 8);
      auVar25[0xe] = (char)((uint)iVar32 >> 0x10);
      auVar25[0xf] = (char)((uint)iVar32 >> 0x18);
      auVar135 = auVar135 ^ (auVar135 ^ auVar48) & auVar25;
      auVar47[8] = SUB41(auVar136._8_4_,0);
      auVar47._0_8_ =
           CONCAT17((char)((uint)auVar136._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar136._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar136._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar136._4_4_,0),auVar136._0_4_)))) |
           0x7f8000007f800000;
      auVar47[9] = (char)((uint)auVar136._8_4_ >> 8);
      auVar47[10] = (byte)((uint)auVar136._8_4_ >> 0x10) | 0x80;
      auVar47[0xb] = (byte)((uint)auVar136._8_4_ >> 0x18) | 0x7f;
      auVar47[0xc] = SUB41(auVar136._12_4_,0);
      auVar47[0xd] = (char)((uint)auVar136._12_4_ >> 8);
      auVar47[0xe] = (byte)((uint)auVar136._12_4_ >> 0x10) | 0x80;
      auVar47[0xf] = (byte)((uint)auVar136._12_4_ >> 0x18) | 0x7f;
      auVar21[4] = (char)iVar22;
      auVar21._0_4_ = -(uint)(65536.0 <= auVar136._0_4_);
      auVar21[5] = (char)((uint)iVar22 >> 8);
      auVar21[6] = (char)((uint)iVar22 >> 0x10);
      auVar21[7] = (char)((uint)iVar22 >> 0x18);
      auVar21[8] = (char)iVar23;
      auVar21[9] = (char)((uint)iVar23 >> 8);
      auVar21[10] = (char)((uint)iVar23 >> 0x10);
      auVar21[0xb] = (char)((uint)iVar23 >> 0x18);
      auVar21[0xc] = (char)iVar24;
      auVar21[0xd] = (char)((uint)iVar24 >> 8);
      auVar21[0xe] = (char)((uint)iVar24 >> 0x10);
      auVar21[0xf] = (char)((uint)iVar24 >> 0x18);
      auVar136 = auVar136 ^ (auVar136 ^ auVar47) & auVar21;
      auVar41[8] = SUB41(auVar132._8_4_,0);
      auVar41._0_8_ =
           CONCAT17((char)((uint)auVar132._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar132._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar132._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar132._4_4_,0),auVar132._0_4_)))) |
           0x7f8000007f800000;
      auVar41[9] = (char)((uint)auVar132._8_4_ >> 8);
      auVar41[10] = (byte)((uint)auVar132._8_4_ >> 0x10) | 0x80;
      auVar41[0xb] = (byte)((uint)auVar132._8_4_ >> 0x18) | 0x7f;
      auVar41[0xc] = SUB41(auVar132._12_4_,0);
      auVar41[0xd] = (char)((uint)auVar132._12_4_ >> 8);
      auVar41[0xe] = (byte)((uint)auVar132._12_4_ >> 0x10) | 0x80;
      auVar41[0xf] = (byte)((uint)auVar132._12_4_ >> 0x18) | 0x7f;
      auVar93[4] = (char)iVar17;
      auVar93._0_4_ = -(uint)(65536.0 <= auVar132._0_4_);
      auVar93[5] = (char)((uint)iVar17 >> 8);
      auVar93[6] = (char)((uint)iVar17 >> 0x10);
      auVar93[7] = (char)((uint)iVar17 >> 0x18);
      auVar93[8] = (char)iVar18;
      auVar93[9] = (char)((uint)iVar18 >> 8);
      auVar93[10] = (char)((uint)iVar18 >> 0x10);
      auVar93[0xb] = (char)((uint)iVar18 >> 0x18);
      auVar93[0xc] = (char)iVar19;
      auVar93[0xd] = (char)((uint)iVar19 >> 8);
      auVar93[0xe] = (char)((uint)iVar19 >> 0x10);
      auVar93[0xf] = (char)((uint)iVar19 >> 0x18);
      auVar132 = auVar132 ^ (auVar132 ^ auVar41) & auVar93;
      fVar89 = (float)CONCAT13(auVar132[3] | (byte)(uVar90 >> 0x18),auVar132._0_3_);
      auVar91._0_8_ =
           CONCAT17(auVar132[7] | (byte)(uVar90 >> 0x38),
                    CONCAT16(auVar132[6],CONCAT15(auVar132[5],CONCAT14(auVar132[4],fVar89))));
      auVar91[8] = auVar132[8];
      auVar91[9] = auVar132[9];
      auVar91[10] = auVar132[10];
      auVar91[0xb] = auVar132[0xb] | (byte)((short)*(ushort *)(pdVar56 + 0xd) >> 0xf) & 0x80;
      auVar92[0xc] = auVar132[0xc];
      auVar92._0_12_ = auVar91;
      auVar92[0xd] = auVar132[0xd];
      auVar92[0xe] = auVar132[0xe];
      auVar92[0xf] = auVar132[0xf] | (byte)((short)*(ushort *)(pdVar56 + 0xc) >> 0xf) & 0x80;
      fVar126 = (float)CONCAT13(auVar129[3] | (byte)(sVar15 >> 0xf) & 0x80,auVar129._0_3_);
      auVar128._0_8_ =
           CONCAT17(auVar129[7] | (byte)((int)uVar14 >> 0x1f) & 0x80,
                    CONCAT16(auVar129[6],CONCAT15(auVar129[5],CONCAT14(auVar129[4],fVar126))));
      auVar128[8] = auVar129[8];
      auVar128[9] = auVar129[9];
      auVar128[10] = auVar129[10];
      auVar128[0xb] = auVar129[0xb] | (byte)((int6)uVar13 >> 0x2f) & 0x80;
      auVar130[0xc] = auVar129[0xc];
      auVar130._0_12_ = auVar128;
      auVar130[0xd] = auVar129[0xd];
      auVar130[0xe] = auVar129[0xe];
      auVar130[0xf] =
           auVar129[0xf] | (byte)((long)CONCAT17(uVar125,CONCAT16(uVar124,uVar13)) >> 0x3f) & 0x80;
      sVar15 = puVar59[0x1c];
      uVar120 = (undefined1)puVar59[0x18];
      uVar121 = (undefined1)((ushort)puVar59[0x18] >> 8);
      uVar122 = (undefined1)puVar59[0x14];
      uVar123 = (undefined1)((ushort)puVar59[0x14] >> 8);
      uVar124 = (undefined1)puVar59[0x10];
      uVar125 = (undefined1)((ushort)puVar59[0x10] >> 8);
      uVar1 = CONCAT12(uVar120,sVar15);
      uVar2 = CONCAT13(uVar121,uVar1);
      uVar13 = CONCAT15(uVar123,CONCAT14(uVar122,uVar2));
      sVar37 = puVar59[0xc];
      uVar149 = (undefined1)puVar59[8];
      uVar150 = (undefined1)((ushort)puVar59[8] >> 8);
      uVar151 = (undefined1)puVar59[4];
      uVar152 = (undefined1)((ushort)puVar59[4] >> 8);
      uVar153 = (undefined1)*puVar59;
      uVar154 = (undefined1)((ushort)*puVar59 >> 8);
      uVar6 = CONCAT12(uVar149,sVar37);
      uVar7 = CONCAT13(uVar150,uVar6);
      uVar34 = CONCAT15(uVar152,CONCAT14(uVar151,uVar7));
      uVar90 = CONCAT44((uint)(ushort)puVar59[0x38] << 0xd,(uint)(ushort)puVar59[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar43 = (float)((uVar6 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar44 = (float)((uVar7 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar155 = SUB41(fVar44,0);
      uVar156 = (undefined1)((uint)fVar44 >> 8);
      uVar157 = (undefined1)((uint)fVar44 >> 0x10);
      uVar158 = (undefined1)((uint)fVar44 >> 0x18);
      fVar45 = (float)(((ushort)((uint6)uVar34 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar159 = SUB41(fVar45,0);
      uVar160 = (undefined1)((uint)fVar45 >> 8);
      bVar161 = (byte)((uint)fVar45 >> 0x10);
      bVar162 = (byte)((uint)fVar45 >> 0x18);
      fVar46 = (float)(((ushort)(CONCAT17(uVar154,CONCAT16(uVar153,uVar34)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar163 = SUB41(fVar46,0);
      uVar164 = (undefined1)((uint)fVar46 >> 8);
      bVar165 = (byte)((uint)fVar46 >> 0x10);
      bVar166 = (byte)((uint)fVar46 >> 0x18);
      fVar27 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar29 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar138 = SUB41(fVar29,0);
      uVar139 = (undefined1)((uint)fVar29 >> 8);
      uVar140 = (undefined1)((uint)fVar29 >> 0x10);
      uVar141 = (undefined1)((uint)fVar29 >> 0x18);
      fVar31 = (float)(((ushort)((uint6)uVar13 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar142 = SUB41(fVar31,0);
      uVar143 = (undefined1)((uint)fVar31 >> 8);
      bVar106 = (byte)((uint)fVar31 >> 0x10);
      bVar144 = (byte)((uint)fVar31 >> 0x18);
      fVar33 = (float)(((ushort)(CONCAT17(uVar125,CONCAT16(uVar124,uVar13)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar145 = SUB41(fVar33,0);
      uVar146 = (undefined1)((uint)fVar33 >> 8);
      bVar147 = (byte)((uint)fVar33 >> 0x10);
      bVar148 = (byte)((uint)fVar33 >> 0x18);
      fVar67 = (float)(((ushort)puVar59[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar94 = (float)(((ushort)puVar59[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar99 = SUB41(fVar94,0);
      uVar100 = (undefined1)((uint)fVar94 >> 8);
      uVar101 = (undefined1)((uint)fVar94 >> 0x10);
      uVar102 = (undefined1)((uint)fVar94 >> 0x18);
      fVar107 = (float)(((ushort)puVar59[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar114 = SUB41(fVar107,0);
      uVar115 = (undefined1)((uint)fVar107 >> 8);
      bVar62 = (byte)((uint)fVar107 >> 0x10);
      bVar65 = (byte)((uint)fVar107 >> 0x18);
      fVar20 = (float)(((ushort)puVar59[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar116 = SUB41(fVar20,0);
      uVar117 = (undefined1)((uint)fVar20 >> 8);
      bVar66 = (byte)((uint)fVar20 >> 0x10);
      bVar105 = (byte)((uint)fVar20 >> 0x18);
      auVar72._0_4_ = (float)uVar90 * 5.192297e+33;
      auVar72._4_4_ = (float)(uVar90 >> 0x20) * 5.192297e+33;
      auVar72._8_4_ = (float)(((ushort)puVar59[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar72._12_4_ = (float)(((ushort)puVar59[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar137._0_4_ = -(uint)(65536.0 <= auVar72._0_4_);
      auVar137._4_4_ = -(uint)(65536.0 <= auVar72._4_4_);
      auVar137._8_4_ = -(uint)(65536.0 <= auVar72._8_4_);
      auVar137._12_4_ = -(uint)(65536.0 <= auVar72._12_4_);
      iVar17 = -(uint)(65536.0 <= fVar94);
      iVar18 = -(uint)(65536.0 <= fVar20);
      iVar19 = -(uint)(65536.0 <= fVar29);
      iVar22 = -(uint)(65536.0 <= fVar33);
      auVar96._0_4_ = -(uint)(65536.0 <= fVar43);
      auVar96._4_4_ = -(uint)(65536.0 <= fVar44);
      auVar96._8_4_ = -(uint)(65536.0 <= fVar45);
      auVar96._12_4_ = -(uint)(65536.0 <= fVar46);
      auVar110._0_8_ =
           CONCAT17(uVar158,CONCAT16(uVar157,CONCAT15(uVar156,CONCAT14(uVar155,fVar43)))) |
           0x7f8000007f800000;
      auVar110[8] = uVar159;
      auVar110[9] = uVar160;
      auVar110[10] = bVar161 | 0x80;
      auVar110[0xb] = bVar162 | 0x7f;
      auVar110[0xc] = uVar163;
      auVar110[0xd] = uVar164;
      auVar110[0xe] = bVar165 | 0x80;
      auVar110[0xf] = bVar166 | 0x7f;
      uVar14 = CONCAT13(uVar121,CONCAT12(uVar120,sVar15));
      uVar13 = CONCAT15(uVar123,CONCAT14(uVar122,uVar14));
      uVar35 = CONCAT13(uVar150,CONCAT12(uVar149,sVar37));
      uVar34 = CONCAT15(uVar152,CONCAT14(uVar151,uVar35));
      uVar90 = CONCAT17((short)puVar59[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar59[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar42[4] = uVar155;
      auVar42._0_4_ = fVar43;
      auVar42[5] = uVar156;
      auVar42[6] = uVar157;
      auVar42[7] = uVar158;
      auVar42[8] = uVar159;
      auVar42[9] = uVar160;
      auVar42[10] = bVar161;
      auVar42[0xb] = bVar162;
      auVar42[0xc] = uVar163;
      auVar42[0xd] = uVar164;
      auVar42[0xe] = bVar165;
      auVar42[0xf] = bVar166;
      auVar97[4] = uVar155;
      auVar97._0_4_ = fVar43;
      auVar97[5] = uVar156;
      auVar97[6] = uVar157;
      auVar97[7] = uVar158;
      auVar97[8] = uVar159;
      auVar97[9] = uVar160;
      auVar97[10] = bVar161;
      auVar97[0xb] = bVar162;
      auVar97[0xc] = uVar163;
      auVar97[0xd] = uVar164;
      auVar97[0xe] = bVar165;
      auVar97[0xf] = bVar166;
      auVar97 = auVar97 ^ (auVar42 ^ auVar110) & auVar96;
      auVar111[0xc] = (char)iVar22;
      auVar111._8_4_ = -(uint)(65536.0 <= fVar31);
      auVar111[0xd] = (char)((uint)iVar22 >> 8);
      auVar111[0xe] = (char)((uint)iVar22 >> 0x10);
      auVar111[0xf] = (char)((uint)iVar22 >> 0x18);
      auVar111[4] = (char)iVar19;
      auVar111._0_4_ = -(uint)(65536.0 <= fVar27);
      auVar111[5] = (char)((uint)iVar19 >> 8);
      auVar111[6] = (char)((uint)iVar19 >> 0x10);
      auVar111[7] = (char)((uint)iVar19 >> 0x18);
      auVar26[4] = uVar138;
      auVar26._0_4_ = fVar27;
      auVar26[5] = uVar139;
      auVar26[6] = uVar140;
      auVar26[7] = uVar141;
      auVar26[8] = uVar142;
      auVar26[9] = uVar143;
      auVar26[10] = bVar106;
      auVar26[0xb] = bVar144;
      auVar26[0xc] = uVar145;
      auVar26[0xd] = uVar146;
      auVar26[0xe] = bVar147;
      auVar26[0xf] = bVar148;
      auVar52[8] = uVar142;
      auVar52._0_8_ =
           CONCAT17(uVar141,CONCAT16(uVar140,CONCAT15(uVar139,CONCAT14(uVar138,fVar27)))) |
           0x7f8000007f800000;
      auVar52[9] = uVar143;
      auVar52[10] = bVar106 | 0x80;
      auVar52[0xb] = bVar144 | 0x7f;
      auVar52[0xc] = uVar145;
      auVar52[0xd] = uVar146;
      auVar52[0xe] = bVar147 | 0x80;
      auVar52[0xf] = bVar148 | 0x7f;
      auVar112[4] = uVar138;
      auVar112._0_4_ = fVar27;
      auVar112[5] = uVar139;
      auVar112[6] = uVar140;
      auVar112[7] = uVar141;
      auVar112[8] = uVar142;
      auVar112[9] = uVar143;
      auVar112[10] = bVar106;
      auVar112[0xb] = bVar144;
      auVar112[0xc] = uVar145;
      auVar112[0xd] = uVar146;
      auVar112[0xe] = bVar147;
      auVar112[0xf] = bVar148;
      auVar112 = auVar112 ^ (auVar26 ^ auVar52) & auVar111;
      auVar133[0xc] = (char)iVar18;
      auVar133._8_4_ = -(uint)(65536.0 <= fVar107);
      auVar133[0xd] = (char)((uint)iVar18 >> 8);
      auVar133[0xe] = (char)((uint)iVar18 >> 0x10);
      auVar133[0xf] = (char)((uint)iVar18 >> 0x18);
      auVar133[4] = (char)iVar17;
      auVar133._0_4_ = -(uint)(65536.0 <= fVar67);
      auVar133[5] = (char)((uint)iVar17 >> 8);
      auVar133[6] = (char)((uint)iVar17 >> 0x10);
      auVar133[7] = (char)((uint)iVar17 >> 0x18);
      auVar16[4] = uVar99;
      auVar16._0_4_ = fVar67;
      auVar16[5] = uVar100;
      auVar16[6] = uVar101;
      auVar16[7] = uVar102;
      auVar16[8] = uVar114;
      auVar16[9] = uVar115;
      auVar16[10] = bVar62;
      auVar16[0xb] = bVar65;
      auVar16[0xc] = uVar116;
      auVar16[0xd] = uVar117;
      auVar16[0xe] = bVar66;
      auVar16[0xf] = bVar105;
      auVar51[8] = uVar114;
      auVar51._0_8_ =
           CONCAT17(uVar102,CONCAT16(uVar101,CONCAT15(uVar100,CONCAT14(uVar99,fVar67)))) |
           0x7f8000007f800000;
      auVar51[9] = uVar115;
      auVar51[10] = bVar62 | 0x80;
      auVar51[0xb] = bVar65 | 0x7f;
      auVar51[0xc] = uVar116;
      auVar51[0xd] = uVar117;
      auVar51[0xe] = bVar66 | 0x80;
      auVar51[0xf] = bVar105 | 0x7f;
      auVar134[4] = uVar99;
      auVar134._0_4_ = fVar67;
      auVar134[5] = uVar100;
      auVar134[6] = uVar101;
      auVar134[7] = uVar102;
      auVar134[8] = uVar114;
      auVar134[9] = uVar115;
      auVar134[10] = bVar62;
      auVar134[0xb] = bVar65;
      auVar134[0xc] = uVar116;
      auVar134[0xd] = uVar117;
      auVar134[0xe] = bVar66;
      auVar134[0xf] = bVar105;
      auVar134 = auVar134 ^ (auVar16 ^ auVar51) & auVar133;
      auVar50[8] = SUB41(auVar72._8_4_,0);
      auVar50._0_8_ =
           CONCAT17((char)((uint)auVar72._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar72._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar72._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar72._4_4_,0),auVar72._0_4_)))) |
           0x7f8000007f800000;
      auVar50[9] = (char)((uint)auVar72._8_4_ >> 8);
      auVar50[10] = (byte)((uint)auVar72._8_4_ >> 0x10) | 0x80;
      auVar50[0xb] = (byte)((uint)auVar72._8_4_ >> 0x18) | 0x7f;
      auVar50[0xc] = SUB41(auVar72._12_4_,0);
      auVar50[0xd] = (char)((uint)auVar72._12_4_ >> 8);
      auVar50[0xe] = (byte)((uint)auVar72._12_4_ >> 0x10) | 0x80;
      auVar50[0xf] = (byte)((uint)auVar72._12_4_ >> 0x18) | 0x7f;
      auVar72 = auVar72 ^ (auVar72 ^ auVar50) & auVar137;
      fVar67 = (float)CONCAT13(auVar72[3] | (byte)((short)puVar59[0x3c] >> 0xf) & 0x80,auVar72._0_3_
                              );
      auVar69._0_8_ =
           CONCAT17(auVar72[7] | (byte)((short)puVar59[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar72[6],CONCAT15(auVar72[5],CONCAT14(auVar72[4],fVar67))));
      auVar69[8] = auVar72[8];
      auVar69[9] = auVar72[9];
      auVar69[10] = auVar72[10];
      auVar69[0xb] = auVar72[0xb] | (byte)((short)puVar59[0x34] >> 0xf) & 0x80;
      auVar73[0xc] = auVar72[0xc];
      auVar73._0_12_ = auVar69;
      auVar73[0xd] = auVar72[0xd];
      auVar73[0xe] = auVar72[0xe];
      auVar73[0xf] = auVar72[0xf] | (byte)((short)puVar59[0x30] >> 0xf) & 0x80;
      fVar107 = (float)CONCAT13(auVar112[3] | (byte)(sVar15 >> 0xf) & 0x80,auVar112._0_3_);
      auVar109._0_8_ =
           CONCAT17(auVar112[7] | (byte)((int)uVar14 >> 0x1f) & 0x80,
                    CONCAT16(auVar112[6],CONCAT15(auVar112[5],CONCAT14(auVar112[4],fVar107))));
      auVar109[8] = auVar112[8];
      auVar109[9] = auVar112[9];
      auVar109[10] = auVar112[10];
      auVar109[0xb] = auVar112[0xb] | (byte)((int6)uVar13 >> 0x2f) & 0x80;
      auVar113[0xc] = auVar112[0xc];
      auVar113._0_12_ = auVar109;
      auVar113[0xd] = auVar112[0xd];
      auVar113[0xe] = auVar112[0xe];
      auVar113[0xf] =
           auVar112[0xf] | (byte)((long)CONCAT17(uVar125,CONCAT16(uVar124,uVar13)) >> 0x3f) & 0x80;
      fVar94 = (float)CONCAT13(auVar97[3] | (byte)(sVar37 >> 0xf) & 0x80,auVar97._0_3_);
      auVar95._0_8_ =
           CONCAT17(auVar97[7] | (byte)((int)uVar35 >> 0x1f) & 0x80,
                    CONCAT16(auVar97[6],CONCAT15(auVar97[5],CONCAT14(auVar97[4],fVar94))));
      auVar95[8] = auVar97[8];
      auVar95[9] = auVar97[9];
      auVar95[10] = auVar97[10];
      auVar95[0xb] = auVar97[0xb] | (byte)((int6)uVar34 >> 0x2f) & 0x80;
      auVar98[0xc] = auVar97[0xc];
      auVar98._0_12_ = auVar95;
      auVar98[0xd] = auVar97[0xd];
      auVar98[0xe] = auVar97[0xe];
      auVar98[0xf] = auVar97[0xf] |
                     (byte)((long)CONCAT17(uVar154,CONCAT16(uVar153,uVar34)) >> 0x3f) & 0x80;
      bVar105 = -((float)CONCAT13(auVar136[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,auVar136._8_3_)
                 == (float)CONCAT13(auVar134[0xb] | (byte)((short)puVar59[0x24] >> 0xf) & 0x80,
                                    auVar134._8_3_));
      bVar106 = -((float)CONCAT13(auVar136[0xf] |
                                  (byte)((long)CONCAT17(uVar104,CONCAT16(uVar103,uVar3)) >> 0x3f) &
                                  0x80,auVar136._12_3_) ==
                 (float)CONCAT13(auVar134[0xf] | (byte)((short)puVar59[0x20] >> 0xf) & 0x80,
                                 auVar134._12_3_));
      cVar61 = -(fVar89 == fVar67);
      bVar62 = -((float)((ulong)auVar91._0_8_ >> 0x20) == (float)((ulong)auVar69._0_8_ >> 0x20));
      cVar63 = -(auVar91._8_4_ == auVar69._8_4_);
      cVar64 = -(auVar92._12_4_ == auVar73._12_4_);
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar136[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar136._4_3_) ==
                               (float)CONCAT13(auVar134[7] | (byte)(uVar90 >> 0x38),auVar134._4_3_))
                              ,-(uint)((float)CONCAT13(auVar136[3] | (byte)(sVar57 >> 0xf) & 0x80,
                                                       auVar136._0_3_) ==
                                      (float)CONCAT13(auVar134[3] | (byte)(uVar90 >> 0x18),
                                                      auVar134._0_3_))) & 0xffff0000ffff;
      bVar65 = (byte)uVar5;
      bVar66 = (byte)(uVar5 >> 0x20);
      auVar74._0_8_ =
           CONCAT17(bVar106,CONCAT16(bVar105,CONCAT15(bVar66,CONCAT14(bVar65,CONCAT13(cVar64,
                                                  CONCAT12(cVar63,CONCAT11(bVar62,cVar61))))))) &
           0x8040201008040201;
      auVar74[8] = -((float)CONCAT13(auVar135[3] | (byte)(sVar10 >> 0xf) & 0x80,auVar135._0_3_) ==
                    fVar107) & 1;
      auVar74[9] = -((float)CONCAT13(auVar135[7] | (byte)((int)uVar9 >> 0x1f) & 0x80,auVar135._4_3_)
                    == (float)((ulong)auVar109._0_8_ >> 0x20)) & 2;
      auVar74[10] = -((float)CONCAT13(auVar135[0xb] | (byte)((int6)uVar8 >> 0x2f) & 0x80,
                                      auVar135._8_3_) == auVar109._8_4_) & 4;
      auVar74[0xb] = -((float)CONCAT13(auVar135[0xf] |
                                       (byte)((long)CONCAT17(uVar119,CONCAT16(uVar118,uVar8)) >>
                                             0x3f) & 0x80,auVar135._12_3_) == auVar113._12_4_) & 8;
      auVar74[0xc] = -(fVar126 == fVar94) & 0x10;
      auVar74[0xd] = -((float)((ulong)auVar128._0_8_ >> 0x20) ==
                      (float)((ulong)auVar95._0_8_ >> 0x20)) & 0x20;
      auVar74[0xe] = -(auVar128._8_4_ == auVar95._8_4_) & 0x40;
      auVar74[0xf] = -(auVar130._12_4_ == auVar98._12_4_) & 0x80;
      auVar93 = NEON_ext(auVar74,auVar74,8,1);
      auVar53._1_13_ = auVar74._3_13_;
      auVar53[0] = bVar62 & 2;
      auVar77._5_11_ = auVar74._5_11_;
      auVar77._0_5_ = CONCAT14(cVar63,auVar53._0_4_ << 0x10) & 0x4ffffffff;
      auVar79._7_9_ = auVar74._7_9_;
      auVar79._0_7_ = CONCAT16(cVar64,auVar77._0_6_) & 0x8ffffffffffff;
      auVar81._9_7_ = auVar74._9_7_;
      auVar81._0_8_ = auVar79._0_8_;
      auVar81[8] = bVar65 & 0x10;
      auVar83._11_5_ = auVar74._11_5_;
      auVar83._0_10_ = auVar81._0_10_;
      auVar83[10] = bVar66 & 0x20;
      auVar85._13_3_ = auVar74._13_3_;
      auVar85._0_12_ = auVar83._0_12_;
      auVar85[0xc] = bVar105 & 0x40;
      auVar87._0_14_ = auVar85._0_14_;
      auVar87[0xe] = bVar106 & 0x80;
      auVar87[0xf] = auVar74[0xf];
      auVar75._2_14_ = auVar87._2_14_;
      auVar75._0_2_ = CONCAT11(auVar93[0],cVar61) & 0xff01;
      auVar76._4_12_ = auVar87._4_12_;
      auVar76._0_4_ = CONCAT13(auVar93[1],auVar75._0_3_);
      auVar78._6_10_ = auVar87._6_10_;
      auVar78._0_6_ = CONCAT15(auVar93[2],auVar76._0_5_);
      auVar80._8_8_ = auVar87._8_8_;
      auVar80._0_8_ = CONCAT17(auVar93[3],auVar78._0_7_);
      auVar82._10_6_ = auVar87._10_6_;
      auVar82._0_10_ = CONCAT19(auVar93[4],auVar80._0_9_);
      auVar84._12_4_ = auVar87._12_4_;
      auVar70._0_11_ = auVar82._0_11_;
      auVar70[0xb] = auVar93[5];
      auVar84._0_12_ = auVar70;
      auVar86._14_2_ = auVar87._14_2_;
      auVar71._0_13_ = auVar84._0_13_;
      auVar71[0xd] = auVar93[6];
      auVar86._0_14_ = auVar71;
      auVar88._0_15_ = auVar86._0_15_;
      auVar88[0xf] = auVar93[7];
      sVar57 = -(ushort)((ushort)(auVar75._0_2_ + (short)((uint)auVar76._0_4_ >> 0x10) +
                                  (short)((uint6)auVar78._0_6_ >> 0x20) +
                                  (short)((ulong)auVar80._0_8_ >> 0x30) +
                                  (short)((unkuint10)auVar82._0_10_ >> 0x40) + auVar70._10_2_ +
                                  auVar71._12_2_ + auVar88._14_2_) == -1);
      goto LAB_109ed3818;
    }
    pfVar60 = (float *)param_3[1];
    if (*(float *)(pdVar56 + 0xf) == pfVar60[0x1e]) {
      sVar57 = 0;
      if (((((*(float *)(pdVar56 + 0xe) != pfVar60[0x1c]) ||
            (*(float *)(pdVar56 + 0xd) != pfVar60[0x1a])) ||
           (*(float *)(pdVar56 + 0xc) != pfVar60[0x18])) ||
          ((((*(float *)(pdVar56 + 0xb) != pfVar60[0x16] ||
             (*(float *)(pdVar56 + 10) != pfVar60[0x14])) ||
            ((*(float *)(pdVar56 + 9) != pfVar60[0x12] ||
             ((*(float *)(pdVar56 + 8) != pfVar60[0x10] || (*(float *)(pdVar56 + 7) != pfVar60[0xe])
              ))))) || (*(float *)(pdVar56 + 6) != pfVar60[0xc])))) ||
         ((((*(float *)(pdVar56 + 5) != pfVar60[10] || (*(float *)(pdVar56 + 4) != pfVar60[8])) ||
           (*(float *)(pdVar56 + 3) != pfVar60[6])) ||
          ((*(float *)(pdVar56 + 2) != pfVar60[4] || (*(float *)(pdVar56 + 1) != pfVar60[2]))))))
      goto LAB_109ed3818;
      bVar55 = *(float *)pdVar56 == *pfVar60;
LAB_109ed3814:
      sVar57 = -(ushort)bVar55;
      goto LAB_109ed3818;
    }
  }
  sVar57 = 0;
LAB_109ed3818:
  *param_1 = sVar57;
  return;
}



/* Entry: 109ed3820; end: 109ed3e57;  */

void FUN_109ed3820(short *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pdVar4 = (double *)*param_3;
  if (param_2 == 0x40) {
    uVar2 = 0;
    if (*pdVar4 == *(double *)param_3[1]) {
      uVar2 = (ushort)(pdVar4[1] == ((double *)param_3[1])[1]);
    }
  }
  else {
    if (param_2 == 0x20) {
      fVar7 = ((float *)param_3[1])[2];
      bVar1 = false;
      if ((*(float *)pdVar4 == *(float *)param_3[1]) &&
         (bVar1 = false, !NAN(*(float *)(pdVar4 + 1)) && !NAN(fVar7))) {
        bVar1 = *(float *)(pdVar4 + 1) == fVar7;
      }
    }
    else {
      fVar7 = (float)(((int)*(short *)pdVar4 & 0x7fffU) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar7) {
        fVar7 = (float)((uint)fVar7 | 0x7f800000);
      }
      fVar8 = (float)(((int)*(short *)(pdVar4 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar8) {
        fVar8 = (float)((uint)fVar8 | 0x7f800000);
      }
      fVar8 = (float)((uint)fVar8 | (int)*(short *)(pdVar4 + 1) & 0x80000000U);
      uVar5 = (uint)*(short *)param_3[1];
      fVar9 = (float)((uVar5 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar9) {
        fVar9 = (float)((uint)fVar9 | 0x7f800000);
      }
      uVar3 = (uint)((short *)param_3[1])[4];
      fVar6 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar6) {
        fVar6 = (float)((uint)fVar6 | 0x7f800000);
      }
      fVar6 = (float)((uint)fVar6 | uVar3 & 0x80000000);
      bVar1 = false;
      if (((float)((uint)fVar7 | (int)*(short *)pdVar4 & 0x80000000U) ==
           (float)((uint)fVar9 | uVar5 & 0x80000000)) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar6))
         ) {
        bVar1 = fVar8 == fVar6;
      }
    }
    uVar2 = (ushort)bVar1;
  }
  *param_1 = -uVar2;
  return;
}



/* Entry: 109ed3e58; end: 109ed40bf;  */

void FUN_109ed3e58(short *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  ushort uVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  uint6 uVar11;
  short sVar12;
  undefined1 auVar13 [16];
  undefined6 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  bool bVar32;
  bool bVar33;
  double *pdVar34;
  short sVar35;
  float *pfVar36;
  undefined2 *puVar37;
  double *pdVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar51;
  ulong uVar52;
  undefined1 auVar54 [16];
  float fVar56;
  ulong uVar57;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  byte bVar68;
  byte bVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  byte bVar72;
  byte bVar73;
  undefined1 auVar53 [12];
  undefined1 auVar55 [16];
  undefined1 auVar58 [12];
  undefined1 auVar61 [16];
  
  pdVar34 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar38 = (double *)param_3[1];
    if (pdVar34[7] != pdVar38[7]) goto LAB_109ed3f58;
    sVar35 = 0;
    uVar6 = NEON_uminv(CONCAT17((char)(-(ulong)(pdVar34[6] == pdVar38[6]) >> 8),
                                CONCAT16((char)-(ulong)(pdVar34[6] == pdVar38[6]),
                                         CONCAT15((char)(-(ulong)(pdVar34[5] == pdVar38[5]) >> 8),
                                                  CONCAT14((char)-(ulong)(pdVar34[5] == pdVar38[5]),
                                                           CONCAT13((char)(-(ulong)(pdVar34[4] ==
                                                                                   pdVar38[4]) >> 8)
                                                                    ,CONCAT12((char)-(ulong)(pdVar34
                                                  [4] == pdVar38[4]),
                                                  -(ushort)(pdVar34[3] == pdVar38[3]))))))),2);
    if ((uVar6 & 1) == 0) goto LAB_109ed40b4;
    bVar32 = false;
    if ((pdVar34[2] == pdVar38[2]) && (bVar32 = false, !NAN(pdVar34[1]) && !NAN(pdVar38[1]))) {
      bVar32 = pdVar34[1] == pdVar38[1];
    }
    if (!bVar32) goto LAB_109ed40b4;
    bVar32 = *pdVar34 == *pdVar38;
  }
  else {
    if (param_2 == 0x20) {
      pfVar36 = (float *)param_3[1];
      if (*(float *)(pdVar34 + 7) == pfVar36[0xe]) {
        bVar32 = false;
        if ((*(float *)(pdVar34 + 6) == pfVar36[0xc]) &&
           (bVar32 = false, !NAN(*(float *)(pdVar34 + 5)) && !NAN(pfVar36[10]))) {
          bVar32 = *(float *)(pdVar34 + 5) == pfVar36[10];
        }
        bVar33 = false;
        if ((bVar32) && (bVar33 = false, !NAN(*(float *)(pdVar34 + 4)) && !NAN(pfVar36[8]))) {
          bVar33 = *(float *)(pdVar34 + 4) == pfVar36[8];
        }
        bVar32 = false;
        if ((bVar33) && (bVar32 = false, !NAN(*(float *)(pdVar34 + 3)) && !NAN(pfVar36[6]))) {
          bVar32 = *(float *)(pdVar34 + 3) == pfVar36[6];
        }
        bVar33 = false;
        if ((bVar32) && (bVar33 = false, !NAN(*(float *)(pdVar34 + 2)) && !NAN(pfVar36[4]))) {
          bVar33 = *(float *)(pdVar34 + 2) == pfVar36[4];
        }
        bVar32 = false;
        if ((bVar33) && (bVar32 = false, !NAN(*(float *)(pdVar34 + 1)) && !NAN(pfVar36[2]))) {
          bVar32 = *(float *)(pdVar34 + 1) == pfVar36[2];
        }
        if (bVar32) {
          bVar32 = *(float *)pdVar34 == *pfVar36;
          goto LAB_109ed40b0;
        }
      }
LAB_109ed3f58:
      sVar35 = 0;
      goto LAB_109ed40b4;
    }
    puVar37 = (undefined2 *)param_3[1];
    sVar35 = *(short *)(pdVar34 + 7);
    uVar39 = (undefined1)*(undefined2 *)(pdVar34 + 6);
    uVar40 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 6) >> 8);
    uVar41 = (undefined1)*(undefined2 *)(pdVar34 + 5);
    uVar42 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 5) >> 8);
    uVar43 = (undefined1)*(undefined2 *)(pdVar34 + 4);
    uVar44 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 4) >> 8);
    sVar12 = *(short *)(pdVar34 + 3);
    uVar45 = (undefined1)*(undefined2 *)(pdVar34 + 2);
    uVar46 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 2) >> 8);
    uVar1 = CONCAT12(uVar39,sVar35);
    uVar2 = CONCAT13(uVar40,uVar1);
    uVar3 = CONCAT15(uVar42,CONCAT14(uVar41,uVar2));
    uVar47 = (undefined1)*(undefined2 *)(pdVar34 + 1);
    uVar48 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 1) >> 8);
    uVar49 = (undefined1)*(undefined2 *)pdVar34;
    uVar50 = (undefined1)((ushort)*(undefined2 *)pdVar34 >> 8);
    uVar7 = CONCAT12(uVar45,sVar12);
    uVar8 = CONCAT13(uVar46,uVar7);
    uVar9 = CONCAT15(uVar48,CONCAT14(uVar47,uVar8));
    uVar52 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    uVar57 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    auVar59._0_4_ = (float)uVar57 * 5.192297e+33;
    auVar59._4_4_ = (float)(uVar57 >> 0x20) * 5.192297e+33;
    auVar59._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar59._12_4_ =
         (float)(((ushort)(CONCAT17(uVar50,CONCAT16(uVar49,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    auVar54._0_4_ = (float)uVar52 * 5.192297e+33;
    auVar54._4_4_ = (float)(uVar52 >> 0x20) * 5.192297e+33;
    auVar54._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._12_4_ =
         (float)(((ushort)(CONCAT17(uVar44,CONCAT16(uVar43,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    iVar18 = -(uint)(65536.0 <= auVar54._4_4_);
    iVar19 = -(uint)(65536.0 <= auVar54._8_4_);
    iVar20 = -(uint)(65536.0 <= auVar54._12_4_);
    iVar23 = -(uint)(65536.0 <= auVar59._4_4_);
    iVar24 = -(uint)(65536.0 <= auVar59._8_4_);
    iVar26 = -(uint)(65536.0 <= auVar59._12_4_);
    uVar4 = CONCAT13(uVar40,CONCAT12(uVar39,sVar35));
    uVar3 = CONCAT15(uVar42,CONCAT14(uVar41,uVar4));
    uVar10 = CONCAT13(uVar46,CONCAT12(uVar45,sVar12));
    uVar9 = CONCAT15(uVar48,CONCAT14(uVar47,uVar10));
    auVar31[8] = SUB41(auVar59._8_4_,0);
    auVar31._0_8_ =
         CONCAT17((char)((uint)auVar59._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar59._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar59._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar59._4_4_,0),auVar59._0_4_)))) |
         0x7f8000007f800000;
    auVar31[9] = (char)((uint)auVar59._8_4_ >> 8);
    auVar31[10] = (byte)((uint)auVar59._8_4_ >> 0x10) | 0x80;
    auVar31[0xb] = (byte)((uint)auVar59._8_4_ >> 0x18) | 0x7f;
    auVar31[0xc] = SUB41(auVar59._12_4_,0);
    auVar31[0xd] = (char)((uint)auVar59._12_4_ >> 8);
    auVar31[0xe] = (byte)((uint)auVar59._12_4_ >> 0x10) | 0x80;
    auVar31[0xf] = (byte)((uint)auVar59._12_4_ >> 0x18) | 0x7f;
    auVar21[4] = (char)iVar23;
    auVar21._0_4_ = -(uint)(65536.0 <= auVar59._0_4_);
    auVar21[5] = (char)((uint)iVar23 >> 8);
    auVar21[6] = (char)((uint)iVar23 >> 0x10);
    auVar21[7] = (char)((uint)iVar23 >> 0x18);
    auVar21[8] = (char)iVar24;
    auVar21[9] = (char)((uint)iVar24 >> 8);
    auVar21[10] = (char)((uint)iVar24 >> 0x10);
    auVar21[0xb] = (char)((uint)iVar24 >> 0x18);
    auVar21[0xc] = (char)iVar26;
    auVar21[0xd] = (char)((uint)iVar26 >> 8);
    auVar21[0xe] = (char)((uint)iVar26 >> 0x10);
    auVar21[0xf] = (char)((uint)iVar26 >> 0x18);
    auVar59 = auVar59 ^ (auVar59 ^ auVar31) & auVar21;
    auVar29[8] = SUB41(auVar54._8_4_,0);
    auVar29._0_8_ =
         CONCAT17((char)((uint)auVar54._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar54._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar54._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar54._4_4_,0),auVar54._0_4_)))) |
         0x7f8000007f800000;
    auVar29[9] = (char)((uint)auVar54._8_4_ >> 8);
    auVar29[10] = (byte)((uint)auVar54._8_4_ >> 0x10) | 0x80;
    auVar29[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) | 0x7f;
    auVar29[0xc] = SUB41(auVar54._12_4_,0);
    auVar29[0xd] = (char)((uint)auVar54._12_4_ >> 8);
    auVar29[0xe] = (byte)((uint)auVar54._12_4_ >> 0x10) | 0x80;
    auVar29[0xf] = (byte)((uint)auVar54._12_4_ >> 0x18) | 0x7f;
    auVar16[4] = (char)iVar18;
    auVar16._0_4_ = -(uint)(65536.0 <= auVar54._0_4_);
    auVar16[5] = (char)((uint)iVar18 >> 8);
    auVar16[6] = (char)((uint)iVar18 >> 0x10);
    auVar16[7] = (char)((uint)iVar18 >> 0x18);
    auVar16[8] = (char)iVar19;
    auVar16[9] = (char)((uint)iVar19 >> 8);
    auVar16[10] = (char)((uint)iVar19 >> 0x10);
    auVar16[0xb] = (char)((uint)iVar19 >> 0x18);
    auVar16[0xc] = (char)iVar20;
    auVar16[0xd] = (char)((uint)iVar20 >> 8);
    auVar16[0xe] = (char)((uint)iVar20 >> 0x10);
    auVar16[0xf] = (char)((uint)iVar20 >> 0x18);
    auVar54 = auVar54 ^ (auVar54 ^ auVar29) & auVar16;
    sVar17 = puVar37[0xc];
    uVar39 = (undefined1)puVar37[8];
    uVar40 = (undefined1)((ushort)puVar37[8] >> 8);
    uVar41 = (undefined1)puVar37[4];
    uVar42 = (undefined1)((ushort)puVar37[4] >> 8);
    uVar45 = (undefined1)*puVar37;
    uVar46 = (undefined1)((ushort)*puVar37 >> 8);
    uVar1 = CONCAT12(uVar39,sVar17);
    uVar2 = CONCAT13(uVar40,uVar1);
    uVar14 = CONCAT15(uVar42,CONCAT14(uVar41,uVar2));
    uVar52 = CONCAT44((uint)(ushort)puVar37[0x18] << 0xd,(uint)(ushort)puVar37[0x1c] << 0xd) &
             0xfffffff0fffffff;
    fVar51 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
    fVar56 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
    uVar47 = SUB41(fVar56,0);
    uVar48 = (undefined1)((uint)fVar56 >> 8);
    uVar64 = (undefined1)((uint)fVar56 >> 0x10);
    uVar65 = (undefined1)((uint)fVar56 >> 0x18);
    fVar25 = (float)(((ushort)((uint6)uVar14 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    uVar66 = SUB41(fVar25,0);
    uVar67 = (undefined1)((uint)fVar25 >> 8);
    bVar68 = (byte)((uint)fVar25 >> 0x10);
    bVar69 = (byte)((uint)fVar25 >> 0x18);
    fVar27 = (float)(((ushort)(CONCAT17(uVar46,CONCAT16(uVar45,uVar14)) >> 0x30) & 0x7fff) << 0xd) *
             5.192297e+33;
    uVar70 = SUB41(fVar27,0);
    uVar71 = (undefined1)((uint)fVar27 >> 8);
    bVar72 = (byte)((uint)fVar27 >> 0x10);
    bVar73 = (byte)((uint)fVar27 >> 0x18);
    auVar60._0_4_ = (float)uVar52 * 5.192297e+33;
    auVar60._4_4_ = (float)(uVar52 >> 0x20) * 5.192297e+33;
    auVar60._8_4_ = (float)(((ushort)puVar37[0x14] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar60._12_4_ = (float)(((ushort)puVar37[0x10] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar62._0_4_ = -(uint)(65536.0 <= fVar51);
    auVar62._4_4_ = -(uint)(65536.0 <= fVar56);
    auVar62._8_4_ = -(uint)(65536.0 <= fVar25);
    auVar62._12_4_ = -(uint)(65536.0 <= fVar27);
    uVar15 = CONCAT13(uVar40,CONCAT12(uVar39,sVar17));
    uVar14 = CONCAT15(uVar42,CONCAT14(uVar41,uVar15));
    uVar52 = CONCAT17((short)puVar37[0x18] >> 0xf,
                      (uint7)(((byte)((short)puVar37[0x1c] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    auVar22[4] = uVar47;
    auVar22._0_4_ = fVar51;
    auVar22[5] = uVar48;
    auVar22[6] = uVar64;
    auVar22[7] = uVar65;
    auVar22[8] = uVar66;
    auVar22[9] = uVar67;
    auVar22[10] = bVar68;
    auVar22[0xb] = bVar69;
    auVar22[0xc] = uVar70;
    auVar22[0xd] = uVar71;
    auVar22[0xe] = bVar72;
    auVar22[0xf] = bVar73;
    auVar28[8] = uVar66;
    auVar28._0_8_ =
         CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar48,CONCAT14(uVar47,fVar51)))) |
         0x7f8000007f800000;
    auVar28[9] = uVar67;
    auVar28[10] = bVar68 | 0x80;
    auVar28[0xb] = bVar69 | 0x7f;
    auVar28[0xc] = uVar70;
    auVar28[0xd] = uVar71;
    auVar28[0xe] = bVar72 | 0x80;
    auVar28[0xf] = bVar73 | 0x7f;
    auVar63[4] = uVar47;
    auVar63._0_4_ = fVar51;
    auVar63[5] = uVar48;
    auVar63[6] = uVar64;
    auVar63[7] = uVar65;
    auVar63[8] = uVar66;
    auVar63[9] = uVar67;
    auVar63[10] = bVar68;
    auVar63[0xb] = bVar69;
    auVar63[0xc] = uVar70;
    auVar63[0xd] = uVar71;
    auVar63[0xe] = bVar72;
    auVar63[0xf] = bVar73;
    auVar63 = auVar63 ^ (auVar22 ^ auVar28) & auVar62;
    auVar30[8] = SUB41(auVar60._8_4_,0);
    auVar30._0_8_ =
         CONCAT17((char)((uint)auVar60._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar60._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar60._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar60._4_4_,0),auVar60._0_4_)))) |
         0x7f8000007f800000;
    auVar30[9] = (char)((uint)auVar60._8_4_ >> 8);
    auVar30[10] = (byte)((uint)auVar60._8_4_ >> 0x10) | 0x80;
    auVar30[0xb] = (byte)((uint)auVar60._8_4_ >> 0x18) | 0x7f;
    auVar30[0xc] = SUB41(auVar60._12_4_,0);
    auVar30[0xd] = (char)((uint)auVar60._12_4_ >> 8);
    auVar30[0xe] = (byte)((uint)auVar60._12_4_ >> 0x10) | 0x80;
    auVar30[0xf] = (byte)((uint)auVar60._12_4_ >> 0x18) | 0x7f;
    auVar13._4_4_ = -(uint)(65536.0 <= auVar60._4_4_);
    auVar13._0_4_ = -(uint)(65536.0 <= auVar60._0_4_);
    auVar13._8_4_ = -(uint)(65536.0 <= auVar60._8_4_);
    auVar13._12_4_ = -(uint)(65536.0 <= auVar60._12_4_);
    auVar60 = auVar60 ^ (auVar60 ^ auVar30) & auVar13;
    fVar51 = (float)CONCAT13(auVar60[3] | (byte)(uVar52 >> 0x18),auVar60._0_3_);
    auVar53._0_8_ =
         CONCAT17(auVar60[7] | (byte)(uVar52 >> 0x38),
                  CONCAT16(auVar60[6],CONCAT15(auVar60[5],CONCAT14(auVar60[4],fVar51))));
    auVar53[8] = auVar60[8];
    auVar53[9] = auVar60[9];
    auVar53[10] = auVar60[10];
    auVar53[0xb] = auVar60[0xb] | (byte)((short)puVar37[0x14] >> 0xf) & 0x80;
    auVar55[0xc] = auVar60[0xc];
    auVar55._0_12_ = auVar53;
    auVar55[0xd] = auVar60[0xd];
    auVar55[0xe] = auVar60[0xe];
    auVar55[0xf] = auVar60[0xf] | (byte)((short)puVar37[0x10] >> 0xf) & 0x80;
    fVar56 = (float)CONCAT13(auVar63[3] | (byte)(sVar17 >> 0xf) & 0x80,auVar63._0_3_);
    auVar58._0_8_ =
         CONCAT17(auVar63[7] | (byte)((int)uVar15 >> 0x1f) & 0x80,
                  CONCAT16(auVar63[6],CONCAT15(auVar63[5],CONCAT14(auVar63[4],fVar56))));
    auVar58[8] = auVar63[8];
    auVar58[9] = auVar63[9];
    auVar58[10] = auVar63[10];
    auVar58[0xb] = auVar63[0xb] | (byte)((int6)uVar14 >> 0x2f) & 0x80;
    auVar61[0xc] = auVar63[0xc];
    auVar61._0_12_ = auVar58;
    auVar61[0xd] = auVar63[0xd];
    auVar61[0xe] = auVar63[0xe];
    auVar61[0xf] = auVar63[0xf] |
                   (byte)((long)CONCAT17(uVar46,CONCAT16(uVar45,uVar14)) >> 0x3f) & 0x80;
    uVar11 = (uint6)CONCAT14(-((float)CONCAT13(auVar59[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                                               auVar59._4_3_) ==
                              (float)((ulong)auVar58._0_8_ >> 0x20)),
                             -(uint)((float)CONCAT13(auVar59[3] | (byte)(sVar12 >> 0xf) & 0x80,
                                                     auVar59._0_3_) == fVar56)) & 0xffff0000ffff;
    uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar54[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                              auVar54._4_3_) ==
                             (float)((ulong)auVar53._0_8_ >> 0x20)),
                            -(uint)((float)CONCAT13(auVar54[3] | (byte)(sVar35 >> 0xf) & 0x80,
                                                    auVar54._0_3_) == fVar51)) & 0xffff0000ffff;
    bVar32 = (byte)(((byte)uVar5 & 1) + ((byte)(uVar5 >> 0x20) & 2) +
                    (-((float)CONCAT13(auVar54[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                       auVar54._8_3_) == auVar53._8_4_) & 4U) +
                    (-((float)CONCAT13(auVar54[0xf] |
                                       (byte)((long)CONCAT17(uVar44,CONCAT16(uVar43,uVar3)) >> 0x3f)
                                       & 0x80,auVar54._12_3_) == auVar55._12_4_) & 8U) +
                    ((byte)uVar11 & 0x10) + ((byte)(uVar11 >> 0x20) & 0x20) +
                    (-((float)CONCAT13(auVar59[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80,
                                       auVar59._8_3_) == auVar58._8_4_) & 0x40U) +
                   (-((float)CONCAT13(auVar59[0xf] |
                                      (byte)((long)CONCAT17(uVar50,CONCAT16(uVar49,uVar9)) >> 0x3f)
                                      & 0x80,auVar59._12_3_) == auVar61._12_4_) & 0x80U)) == -1;
  }
LAB_109ed40b0:
  sVar35 = -(ushort)bVar32;
LAB_109ed40b4:
  *param_1 = sVar35;
  return;
}



/* Entry: 109ed40c0; end: 109ed4ce3;  */

void FUN_109ed40c0(short *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint7 uVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar4 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  if (uVar4 < 4) {
    if (uVar4 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        sVar3 = 0;
        if (((((byte)param_4[2] != (byte)param_3[2]) || ((byte)param_4[4] != (byte)param_3[4])) ||
            (((byte)param_4[6] != (byte)param_3[6] ||
             ((((byte)param_4[8] != (byte)param_3[8] || ((byte)param_4[10] != (byte)param_3[10])) ||
              ((byte)param_4[0xc] != (byte)param_3[0xc])))))) ||
           ((((byte)param_4[0xe] != (byte)param_3[0xe] ||
             ((byte)param_4[0x10] != (byte)param_3[0x10])) ||
            (((byte)param_4[0x12] != (byte)param_3[0x12] ||
             ((((byte)param_4[0x14] != (byte)param_3[0x14] ||
               ((byte)param_4[0x16] != (byte)param_3[0x16])) ||
              (((byte)param_4[0x18] != (byte)param_3[0x18] ||
               (((byte)param_4[0x1a] != (byte)param_3[0x1a] ||
                ((byte)param_4[0x1c] != (byte)param_3[0x1c])))))))))))) goto LAB_109ed45b4;
        bVar2 = (byte)*param_4 == (byte)*param_3;
        goto LAB_109ed45a8;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      sVar3 = 0;
      if (((((((byte)param_3[0x1c] != (byte)param_4[0x1c]) ||
             ((byte)param_3[0x1a] != (byte)param_4[0x1a])) ||
            ((byte)param_3[0x18] != (byte)param_4[0x18])) ||
           (((byte)param_3[0x16] != (byte)param_4[0x16] ||
            ((byte)param_3[0x14] != (byte)param_4[0x14])))) ||
          ((byte)param_3[0x12] != (byte)param_4[0x12])) ||
         (((((byte)param_3[0x10] != (byte)param_4[0x10] ||
            ((byte)param_3[0xe] != (byte)param_4[0xe])) ||
           (((byte)param_3[0xc] != (byte)param_4[0xc] ||
            ((((byte)param_3[10] != (byte)param_4[10] || ((byte)param_3[8] != (byte)param_4[8])) ||
             ((byte)param_3[6] != (byte)param_4[6])))))) ||
          (((byte)param_3[4] != (byte)param_4[4] || ((byte)param_3[2] != (byte)param_4[2]))))))
      goto LAB_109ed45b4;
      uVar4 = (uint)(byte)*param_3;
      uVar5 = (uint)(byte)*param_4;
      goto LAB_109ed45a4;
    }
  }
  else if (uVar4 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      sVar3 = 0;
      if ((((((((ushort)param_3[0x1c] != (ushort)param_4[0x1c]) ||
              ((ushort)param_3[0x1a] != (ushort)param_4[0x1a])) ||
             ((ushort)param_3[0x18] != (ushort)param_4[0x18])) ||
            (((ushort)param_3[0x16] != (ushort)param_4[0x16] ||
             ((ushort)param_3[0x14] != (ushort)param_4[0x14])))) ||
           (((ushort)param_3[0x12] != (ushort)param_4[0x12] ||
            (((ushort)param_3[0x10] != (ushort)param_4[0x10] ||
             ((ushort)param_3[0xe] != (ushort)param_4[0xe])))))) ||
          (((ushort)param_3[0xc] != (ushort)param_4[0xc] ||
           ((((ushort)param_3[10] != (ushort)param_4[10] ||
             ((ushort)param_3[8] != (ushort)param_4[8])) ||
            ((ushort)param_3[6] != (ushort)param_4[6])))))) ||
         (((ushort)param_3[4] != (ushort)param_4[4] || ((ushort)param_3[2] != (ushort)param_4[2]))))
      goto LAB_109ed45b4;
      uVar4 = (uint)(ushort)*param_3;
      uVar5 = (uint)(ushort)*param_4;
LAB_109ed45a4:
      bVar2 = uVar4 == uVar5;
LAB_109ed45a8:
      sVar3 = -(ushort)bVar2;
      goto LAB_109ed45b4;
    }
  }
  else if (uVar4 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      sVar3 = 0;
      if ((((((param_3[0x1c] != param_4[0x1c]) || (param_3[0x1a] != param_4[0x1a])) ||
            ((param_3[0x18] != param_4[0x18] ||
             (((param_3[0x16] != param_4[0x16] || (param_3[0x14] != param_4[0x14])) ||
              (param_3[0x12] != param_4[0x12])))))) ||
           ((param_3[0x10] != param_4[0x10] || (param_3[0xe] != param_4[0xe])))) ||
          (param_3[0xc] != param_4[0xc])) ||
         (((param_3[10] != param_4[10] || (param_3[8] != param_4[8])) ||
          ((param_3[6] != param_4[6] || ((param_3[4] != param_4[4] || (param_3[2] != param_4[2])))))
          ))) goto LAB_109ed45b4;
      uVar4 = *param_3;
      uVar5 = *param_4;
      goto LAB_109ed45a4;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    uVar1 = CONCAT16(-(*(long *)(param_3 + 0x14) == *(long *)(param_4 + 0x14)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 0x12) == *(long *)(param_4 + 0x12)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 0x10) ==
                                                     *(long *)(param_4 + 0x10)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 0xe) ==
                                                                   *(long *)(param_4 + 0xe))))) &
            CONCAT16(-(*(long *)(param_3 + 0xc) == *(long *)(param_4 + 0xc)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 10) == *(long *)(param_4 + 10)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 8) ==
                                                     *(long *)(param_4 + 8)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 6) ==
                                                                   *(long *)(param_4 + 6)))));
    bVar6 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c)) *
                                        -0x80) < '\0'),
                                CONCAT16(-((char)((*(long *)(param_3 + 0x1a) ==
                                                  *(long *)(param_4 + 0x1a)) * -0x80) < '\0'),
                                         CONCAT15(-((char)((*(long *)(param_3 + 0x18) ==
                                                           *(long *)(param_4 + 0x18)) * -0x80) <
                                                   '\0'),CONCAT14(-((char)((*(long *)(param_3 + 0x16
                                                                                     ) ==
                                                                           *(long *)(param_4 + 0x16)
                                                                           ) * -0x80) < '\0'),
                                                                  CONCAT13(-((char)((char)(uVar1 >> 
                                                  0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar1 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar1 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar1 << 7) < '\0')))))))),1);
    if ((bVar6 & *(long *)(param_3 + 4) == *(long *)(param_4 + 4)) == 1 &&
        *(long *)(param_3 + 2) == *(long *)(param_4 + 2)) {
      bVar2 = *(long *)param_3 == *(long *)param_4;
      goto LAB_109ed45a8;
    }
  }
  sVar3 = 0;
LAB_109ed45b4:
  *param_1 = sVar3;
  return;
}



/* Entry: 109ed4ce4; end: 109ed5193;  */

void FUN_109ed4ce4(short *param_1,int param_2,long *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  uint3 uVar6;
  uint uVar7;
  undefined6 uVar8;
  undefined4 uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined6 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  short sVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [14];
  bool bVar49;
  double *pdVar50;
  short sVar51;
  undefined2 *puVar52;
  float *pfVar53;
  double *pdVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  float fVar63;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar84;
  ulong uVar85;
  undefined1 auVar88 [16];
  float fVar89;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  float fVar100;
  ulong uVar101;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  float fVar113;
  uint6 uVar114;
  float fVar115;
  uint6 uVar116;
  float fVar117;
  ulong uVar118;
  undefined1 auVar120 [16];
  ulong uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  undefined1 uVar152;
  byte bVar153;
  byte bVar154;
  undefined1 uVar155;
  undefined1 uVar156;
  byte bVar157;
  byte bVar158;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar64 [12];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar65 [12];
  undefined1 auVar68 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar66 [14];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar86 [12];
  undefined1 auVar87 [16];
  undefined1 auVar90 [12];
  undefined1 auVar93 [16];
  undefined1 auVar102 [12];
  undefined1 auVar106 [16];
  undefined1 auVar119 [12];
  undefined1 auVar121 [16];
  
  pdVar50 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar54 = (double *)param_3[1];
    if (pdVar50[0xf] != pdVar54[0xf]) {
LAB_109ed4e14:
      sVar51 = -1;
      goto LAB_109ed518c;
    }
    bVar55 = NEON_umaxv(CONCAT17(-((char)(~-(pdVar50[0xe] == pdVar54[0xe]) << 7) < '\0'),
                                 CONCAT16(-((char)(~-(pdVar50[0xd] == pdVar54[0xd]) << 7) < '\0'),
                                          CONCAT15(-((char)(~-(pdVar50[0xc] == pdVar54[0xc]) << 7) <
                                                    '\0'),CONCAT14(-((char)(~-(pdVar50[0xb] ==
                                                                              pdVar54[0xb]) << 7) <
                                                                    '\0'),CONCAT13(-((char)((~-(
                                                  pdVar50[10] == pdVar54[10]) |
                                                  ~-(pdVar50[6] == pdVar54[6])) << 7) < '\0'),
                                                  CONCAT12(-((char)((~-(pdVar50[9] == pdVar54[9]) |
                                                                    ~-(pdVar50[5] == pdVar54[5])) <<
                                                                   7) < '\0'),
                                                           CONCAT11(-((char)((~-(pdVar50[8] ==
                                                                                pdVar54[8]) |
                                                                             ~-(pdVar50[4] ==
                                                                               pdVar54[4])) << 7) <
                                                                     '\0'),-((char)((~-(pdVar50[7]
                                                                                       == pdVar54[7]
                                                                                       ) | ~-(
                                                  pdVar50[3] == pdVar54[3])) << 7) < '\0')))))))),1)
    ;
    sVar51 = -1;
    if (((bVar55 & 1) != 0 || pdVar50[2] != pdVar54[2]) || (pdVar50[1] != pdVar54[1]))
    goto LAB_109ed518c;
    bVar49 = false;
    if (!NAN(*pdVar50) && !NAN(*pdVar54)) {
      bVar49 = *pdVar50 == *pdVar54;
    }
  }
  else {
    if (param_2 != 0x20) {
      puVar52 = (undefined2 *)param_3[1];
      sVar51 = *(short *)(pdVar50 + 0xb);
      uVar94 = (undefined1)*(undefined2 *)(pdVar50 + 10);
      uVar95 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 10) >> 8);
      uVar96 = (undefined1)*(undefined2 *)(pdVar50 + 9);
      uVar97 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 9) >> 8);
      uVar98 = (undefined1)*(undefined2 *)(pdVar50 + 8);
      uVar99 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 8) >> 8);
      uVar1 = CONCAT12(uVar94,sVar51);
      uVar2 = CONCAT13(uVar95,uVar1);
      uVar3 = CONCAT15(uVar97,CONCAT14(uVar96,uVar2));
      sVar10 = *(short *)(pdVar50 + 7);
      uVar107 = (undefined1)*(undefined2 *)(pdVar50 + 6);
      uVar108 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 6) >> 8);
      uVar109 = (undefined1)*(undefined2 *)(pdVar50 + 5);
      uVar110 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 5) >> 8);
      uVar111 = (undefined1)*(undefined2 *)(pdVar50 + 4);
      uVar112 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 4) >> 8);
      uVar6 = CONCAT12(uVar107,sVar10);
      uVar7 = CONCAT13(uVar108,uVar6);
      uVar8 = CONCAT15(uVar110,CONCAT14(uVar109,uVar7));
      uVar122 = CONCAT44((uint)*(ushort *)(pdVar50 + 0xe) << 0xd,
                         (uint)*(ushort *)(pdVar50 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar85 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar101 = CONCAT44((uVar7 >> 0x10) << 0xd,(uVar6 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar118 = CONCAT44((uint)*(ushort *)(pdVar50 + 2) << 0xd,(uint)*(ushort *)(pdVar50 + 3) << 0xd
                        ) & 0xfffffff0fffffff;
      auVar120._0_4_ = (float)uVar118 * 5.192297e+33;
      auVar120._4_4_ = (float)(uVar118 >> 0x20) * 5.192297e+33;
      auVar120._8_4_ = (float)((*(ushort *)(pdVar50 + 1) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar120._12_4_ = (float)((*(ushort *)pdVar50 & 0x7fff) << 0xd) * 5.192297e+33;
      auVar126._0_4_ = (float)uVar101 * 5.192297e+33;
      auVar126._4_4_ = (float)(uVar101 >> 0x20) * 5.192297e+33;
      auVar126._8_4_ = (float)(((ushort)((uint6)uVar8 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar126._12_4_ =
           (float)(((ushort)(CONCAT17(uVar112,CONCAT16(uVar111,uVar8)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar127._0_4_ = (float)uVar85 * 5.192297e+33;
      auVar127._4_4_ = (float)(uVar85 >> 0x20) * 5.192297e+33;
      auVar127._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar127._12_4_ =
           (float)(((ushort)(CONCAT17(uVar99,CONCAT16(uVar98,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar123._0_4_ = (float)uVar122 * 5.192297e+33;
      auVar123._4_4_ = (float)(uVar122 >> 0x20) * 5.192297e+33;
      auVar123._8_4_ = (float)((*(ushort *)(pdVar50 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar123._12_4_ = (float)((*(ushort *)(pdVar50 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar11 = -(uint)(65536.0 <= auVar123._4_4_);
      iVar12 = -(uint)(65536.0 <= auVar123._8_4_);
      iVar13 = -(uint)(65536.0 <= auVar123._12_4_);
      iVar16 = -(uint)(65536.0 <= auVar127._4_4_);
      iVar17 = -(uint)(65536.0 <= auVar127._8_4_);
      iVar18 = -(uint)(65536.0 <= auVar127._12_4_);
      iVar24 = -(uint)(65536.0 <= auVar126._4_4_);
      iVar25 = -(uint)(65536.0 <= auVar126._8_4_);
      iVar26 = -(uint)(65536.0 <= auVar126._12_4_);
      iVar30 = -(uint)(65536.0 <= auVar120._4_4_);
      iVar32 = -(uint)(65536.0 <= auVar120._8_4_);
      iVar34 = -(uint)(65536.0 <= auVar120._12_4_);
      uVar4 = CONCAT13(uVar95,CONCAT12(uVar94,sVar51));
      uVar3 = CONCAT15(uVar97,CONCAT14(uVar96,uVar4));
      uVar9 = CONCAT13(uVar108,CONCAT12(uVar107,sVar10));
      uVar8 = CONCAT15(uVar110,CONCAT14(uVar109,uVar9));
      uVar114 = (uint6)(CONCAT17((char)((int)uVar9 >> 0x1f),
                                 (uint7)(((byte)(sVar10 >> 0xf) & 0x80) << 0x18)) >> 0x10) &
                0x80ffffffffff;
      uVar116 = (uint6)(CONCAT17((char)((long)CONCAT17(uVar112,CONCAT16(uVar111,uVar8)) >> 0x3f),
                                 (uint7)(((byte)((int6)uVar8 >> 0x2f) & 0x80) << 0x18)) >> 0x10) &
                0x80ffffffffff;
      uVar85 = CONCAT17((short)*(ushort *)(pdVar50 + 0xe) >> 0xf,
                        (uint7)(((byte)((short)*(ushort *)(pdVar50 + 0xf) >> 0xf) & 0x80) << 0x18))
               & 0x80ffffffffffffff;
      auVar44[8] = SUB41(auVar120._8_4_,0);
      auVar44._0_8_ =
           CONCAT17((char)((uint)auVar120._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar120._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar120._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar120._4_4_,0),auVar120._0_4_)))) |
           0x7f8000007f800000;
      auVar44[9] = (char)((uint)auVar120._8_4_ >> 8);
      auVar44[10] = (byte)((uint)auVar120._8_4_ >> 0x10) | 0x80;
      auVar44[0xb] = (byte)((uint)auVar120._8_4_ >> 0x18) | 0x7f;
      auVar44[0xc] = SUB41(auVar120._12_4_,0);
      auVar44[0xd] = (char)((uint)auVar120._12_4_ >> 8);
      auVar44[0xe] = (byte)((uint)auVar120._12_4_ >> 0x10) | 0x80;
      auVar44[0xf] = (byte)((uint)auVar120._12_4_ >> 0x18) | 0x7f;
      auVar27[4] = (char)iVar30;
      auVar27._0_4_ = -(uint)(65536.0 <= auVar120._0_4_);
      auVar27[5] = (char)((uint)iVar30 >> 8);
      auVar27[6] = (char)((uint)iVar30 >> 0x10);
      auVar27[7] = (char)((uint)iVar30 >> 0x18);
      auVar27[8] = (char)iVar32;
      auVar27[9] = (char)((uint)iVar32 >> 8);
      auVar27[10] = (char)((uint)iVar32 >> 0x10);
      auVar27[0xb] = (char)((uint)iVar32 >> 0x18);
      auVar27[0xc] = (char)iVar34;
      auVar27[0xd] = (char)((uint)iVar34 >> 8);
      auVar27[0xe] = (char)((uint)iVar34 >> 0x10);
      auVar27[0xf] = (char)((uint)iVar34 >> 0x18);
      auVar120 = auVar120 ^ (auVar120 ^ auVar44) & auVar27;
      auVar43[8] = SUB41(auVar126._8_4_,0);
      auVar43._0_8_ =
           CONCAT17((char)((uint)auVar126._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar126._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar126._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar126._4_4_,0),auVar126._0_4_)))) |
           0x7f8000007f800000;
      auVar43[9] = (char)((uint)auVar126._8_4_ >> 8);
      auVar43[10] = (byte)((uint)auVar126._8_4_ >> 0x10) | 0x80;
      auVar43[0xb] = (byte)((uint)auVar126._8_4_ >> 0x18) | 0x7f;
      auVar43[0xc] = SUB41(auVar126._12_4_,0);
      auVar43[0xd] = (char)((uint)auVar126._12_4_ >> 8);
      auVar43[0xe] = (byte)((uint)auVar126._12_4_ >> 0x10) | 0x80;
      auVar43[0xf] = (byte)((uint)auVar126._12_4_ >> 0x18) | 0x7f;
      auVar22[4] = (char)iVar24;
      auVar22._0_4_ = -(uint)(65536.0 <= auVar126._0_4_);
      auVar22[5] = (char)((uint)iVar24 >> 8);
      auVar22[6] = (char)((uint)iVar24 >> 0x10);
      auVar22[7] = (char)((uint)iVar24 >> 0x18);
      auVar22[8] = (char)iVar25;
      auVar22[9] = (char)((uint)iVar25 >> 8);
      auVar22[10] = (char)((uint)iVar25 >> 0x10);
      auVar22[0xb] = (char)((uint)iVar25 >> 0x18);
      auVar22[0xc] = (char)iVar26;
      auVar22[0xd] = (char)((uint)iVar26 >> 8);
      auVar22[0xe] = (char)((uint)iVar26 >> 0x10);
      auVar22[0xf] = (char)((uint)iVar26 >> 0x18);
      auVar126 = auVar126 ^ (auVar126 ^ auVar43) & auVar22;
      auVar42[8] = SUB41(auVar127._8_4_,0);
      auVar42._0_8_ =
           CONCAT17((char)((uint)auVar127._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar127._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar127._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar127._4_4_,0),auVar127._0_4_)))) |
           0x7f8000007f800000;
      auVar42[9] = (char)((uint)auVar127._8_4_ >> 8);
      auVar42[10] = (byte)((uint)auVar127._8_4_ >> 0x10) | 0x80;
      auVar42[0xb] = (byte)((uint)auVar127._8_4_ >> 0x18) | 0x7f;
      auVar42[0xc] = SUB41(auVar127._12_4_,0);
      auVar42[0xd] = (char)((uint)auVar127._12_4_ >> 8);
      auVar42[0xe] = (byte)((uint)auVar127._12_4_ >> 0x10) | 0x80;
      auVar42[0xf] = (byte)((uint)auVar127._12_4_ >> 0x18) | 0x7f;
      auVar14[4] = (char)iVar16;
      auVar14._0_4_ = -(uint)(65536.0 <= auVar127._0_4_);
      auVar14[5] = (char)((uint)iVar16 >> 8);
      auVar14[6] = (char)((uint)iVar16 >> 0x10);
      auVar14[7] = (char)((uint)iVar16 >> 0x18);
      auVar14[8] = (char)iVar17;
      auVar14[9] = (char)((uint)iVar17 >> 8);
      auVar14[10] = (char)((uint)iVar17 >> 0x10);
      auVar14[0xb] = (char)((uint)iVar17 >> 0x18);
      auVar14[0xc] = (char)iVar18;
      auVar14[0xd] = (char)((uint)iVar18 >> 8);
      auVar14[0xe] = (char)((uint)iVar18 >> 0x10);
      auVar14[0xf] = (char)((uint)iVar18 >> 0x18);
      auVar127 = auVar127 ^ (auVar127 ^ auVar42) & auVar14;
      auVar36[8] = SUB41(auVar123._8_4_,0);
      auVar36._0_8_ =
           CONCAT17((char)((uint)auVar123._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar123._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar123._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar123._4_4_,0),auVar123._0_4_)))) |
           0x7f8000007f800000;
      auVar36[9] = (char)((uint)auVar123._8_4_ >> 8);
      auVar36[10] = (byte)((uint)auVar123._8_4_ >> 0x10) | 0x80;
      auVar36[0xb] = (byte)((uint)auVar123._8_4_ >> 0x18) | 0x7f;
      auVar36[0xc] = SUB41(auVar123._12_4_,0);
      auVar36[0xd] = (char)((uint)auVar123._12_4_ >> 8);
      auVar36[0xe] = (byte)((uint)auVar123._12_4_ >> 0x10) | 0x80;
      auVar36[0xf] = (byte)((uint)auVar123._12_4_ >> 0x18) | 0x7f;
      auVar88[4] = (char)iVar11;
      auVar88._0_4_ = -(uint)(65536.0 <= auVar123._0_4_);
      auVar88[5] = (char)((uint)iVar11 >> 8);
      auVar88[6] = (char)((uint)iVar11 >> 0x10);
      auVar88[7] = (char)((uint)iVar11 >> 0x18);
      auVar88[8] = (char)iVar12;
      auVar88[9] = (char)((uint)iVar12 >> 8);
      auVar88[10] = (char)((uint)iVar12 >> 0x10);
      auVar88[0xb] = (char)((uint)iVar12 >> 0x18);
      auVar88[0xc] = (char)iVar13;
      auVar88[0xd] = (char)((uint)iVar13 >> 8);
      auVar88[0xe] = (char)((uint)iVar13 >> 0x10);
      auVar88[0xf] = (char)((uint)iVar13 >> 0x18);
      auVar123 = auVar123 ^ (auVar123 ^ auVar36) & auVar88;
      fVar84 = (float)CONCAT13(auVar123[3] | (byte)(uVar85 >> 0x18),auVar123._0_3_);
      auVar86._0_8_ =
           CONCAT17(auVar123[7] | (byte)(uVar85 >> 0x38),
                    CONCAT16(auVar123[6],CONCAT15(auVar123[5],CONCAT14(auVar123[4],fVar84))));
      auVar86[8] = auVar123[8];
      auVar86[9] = auVar123[9];
      auVar86[10] = auVar123[10];
      auVar86[0xb] = auVar123[0xb] | (byte)((short)*(ushort *)(pdVar50 + 0xd) >> 0xf) & 0x80;
      auVar87[0xc] = auVar123[0xc];
      auVar87._0_12_ = auVar86;
      auVar87[0xd] = auVar123[0xd];
      auVar87[0xe] = auVar123[0xe];
      auVar87[0xf] = auVar123[0xf] | (byte)((short)*(ushort *)(pdVar50 + 0xc) >> 0xf) & 0x80;
      fVar113 = (float)CONCAT13(auVar126[3] | (byte)(uVar114 >> 8),auVar126._0_3_);
      fVar115 = (float)CONCAT13(auVar126[0xb] | (byte)(uVar116 >> 8),auVar126._8_3_);
      fVar117 = (float)CONCAT13(auVar120[3] | (byte)((short)*(ushort *)(pdVar50 + 3) >> 0xf) & 0x80,
                                auVar120._0_3_);
      auVar119._0_8_ =
           CONCAT17(auVar120[7] | (byte)((short)*(ushort *)(pdVar50 + 2) >> 0xf) & 0x80,
                    CONCAT16(auVar120[6],CONCAT15(auVar120[5],CONCAT14(auVar120[4],fVar117))));
      auVar119[8] = auVar120[8];
      auVar119[9] = auVar120[9];
      auVar119[10] = auVar120[10];
      auVar119[0xb] = auVar120[0xb] | (byte)((short)*(ushort *)(pdVar50 + 1) >> 0xf) & 0x80;
      auVar121[0xc] = auVar120[0xc];
      auVar121._0_12_ = auVar119;
      auVar121[0xd] = auVar120[0xd];
      auVar121[0xe] = auVar120[0xe];
      auVar121[0xf] = auVar120[0xf] | (byte)((short)*(ushort *)pdVar50 >> 0xf) & 0x80;
      sVar10 = puVar52[0x1c];
      uVar94 = (undefined1)puVar52[0x18];
      uVar95 = (undefined1)((ushort)puVar52[0x18] >> 8);
      uVar96 = (undefined1)puVar52[0x14];
      uVar97 = (undefined1)((ushort)puVar52[0x14] >> 8);
      uVar107 = (undefined1)puVar52[0x10];
      uVar108 = (undefined1)((ushort)puVar52[0x10] >> 8);
      sVar23 = puVar52[0xc];
      uVar133 = (undefined1)puVar52[8];
      uVar134 = (undefined1)((ushort)puVar52[8] >> 8);
      uVar135 = (undefined1)puVar52[4];
      uVar136 = (undefined1)((ushort)puVar52[4] >> 8);
      uVar137 = (undefined1)*puVar52;
      uVar138 = (undefined1)((ushort)*puVar52 >> 8);
      uVar1 = CONCAT12(uVar94,sVar10);
      uVar2 = CONCAT13(uVar95,uVar1);
      uVar8 = CONCAT15(uVar97,CONCAT14(uVar96,uVar2));
      uVar6 = CONCAT12(uVar133,sVar23);
      uVar7 = CONCAT13(uVar134,uVar6);
      uVar20 = CONCAT15(uVar136,CONCAT14(uVar135,uVar7));
      uVar85 = CONCAT44((uint)(ushort)puVar52[0x38] << 0xd,(uint)(ushort)puVar52[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar38 = (float)((uVar6 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar39 = (float)((uVar7 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar147 = SUB41(fVar39,0);
      uVar148 = (undefined1)((uint)fVar39 >> 8);
      uVar149 = (undefined1)((uint)fVar39 >> 0x10);
      uVar150 = (undefined1)((uint)fVar39 >> 0x18);
      fVar40 = (float)(((ushort)((uint6)uVar20 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar151 = SUB41(fVar40,0);
      uVar152 = (undefined1)((uint)fVar40 >> 8);
      bVar153 = (byte)((uint)fVar40 >> 0x10);
      bVar154 = (byte)((uint)fVar40 >> 0x18);
      fVar41 = (float)(((ushort)(CONCAT17(uVar138,CONCAT16(uVar137,uVar20)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar155 = SUB41(fVar41,0);
      uVar156 = (undefined1)((uint)fVar41 >> 8);
      bVar157 = (byte)((uint)fVar41 >> 0x10);
      bVar158 = (byte)((uint)fVar41 >> 0x18);
      fVar29 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar31 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar139 = SUB41(fVar31,0);
      uVar140 = (undefined1)((uint)fVar31 >> 8);
      uVar141 = (undefined1)((uint)fVar31 >> 0x10);
      uVar142 = (undefined1)((uint)fVar31 >> 0x18);
      fVar33 = (float)(((ushort)((uint6)uVar8 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar143 = SUB41(fVar33,0);
      uVar144 = (undefined1)((uint)fVar33 >> 8);
      bVar59 = (byte)((uint)fVar33 >> 0x10);
      bVar60 = (byte)((uint)fVar33 >> 0x18);
      fVar35 = (float)(((ushort)(CONCAT17(uVar108,CONCAT16(uVar107,uVar8)) >> 0x30) & 0x7fff) << 0xd
                      ) * 5.192297e+33;
      uVar145 = SUB41(fVar35,0);
      uVar146 = (undefined1)((uint)fVar35 >> 8);
      bVar61 = (byte)((uint)fVar35 >> 0x10);
      bVar62 = (byte)((uint)fVar35 >> 0x18);
      fVar63 = (float)(((ushort)puVar52[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar89 = (float)(((ushort)puVar52[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar109 = SUB41(fVar89,0);
      uVar110 = (undefined1)((uint)fVar89 >> 8);
      uVar111 = (undefined1)((uint)fVar89 >> 0x10);
      uVar112 = (undefined1)((uint)fVar89 >> 0x18);
      fVar100 = (float)(((ushort)puVar52[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar129 = SUB41(fVar100,0);
      uVar130 = (undefined1)((uint)fVar100 >> 8);
      bVar55 = (byte)((uint)fVar100 >> 0x10);
      bVar56 = (byte)((uint)fVar100 >> 0x18);
      fVar19 = (float)(((ushort)puVar52[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar131 = SUB41(fVar19,0);
      uVar132 = (undefined1)((uint)fVar19 >> 8);
      bVar57 = (byte)((uint)fVar19 >> 0x10);
      bVar58 = (byte)((uint)fVar19 >> 0x18);
      auVar67._0_4_ = (float)uVar85 * 5.192297e+33;
      auVar67._4_4_ = (float)(uVar85 >> 0x20) * 5.192297e+33;
      auVar67._8_4_ = (float)(((ushort)puVar52[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar67._12_4_ = (float)(((ushort)puVar52[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar128._0_4_ = -(uint)(65536.0 <= auVar67._0_4_);
      auVar128._4_4_ = -(uint)(65536.0 <= auVar67._4_4_);
      auVar128._8_4_ = -(uint)(65536.0 <= auVar67._8_4_);
      auVar128._12_4_ = -(uint)(65536.0 <= auVar67._12_4_);
      iVar11 = -(uint)(65536.0 <= fVar89);
      iVar12 = -(uint)(65536.0 <= fVar19);
      iVar13 = -(uint)(65536.0 <= fVar31);
      iVar16 = -(uint)(65536.0 <= fVar35);
      auVar91._0_4_ = -(uint)(65536.0 <= fVar38);
      auVar91._4_4_ = -(uint)(65536.0 <= fVar39);
      auVar91._8_4_ = -(uint)(65536.0 <= fVar40);
      auVar91._12_4_ = -(uint)(65536.0 <= fVar41);
      auVar103._0_8_ =
           CONCAT17(uVar150,CONCAT16(uVar149,CONCAT15(uVar148,CONCAT14(uVar147,fVar38)))) |
           0x7f8000007f800000;
      auVar103[8] = uVar151;
      auVar103[9] = uVar152;
      auVar103[10] = bVar153 | 0x80;
      auVar103[0xb] = bVar154 | 0x7f;
      auVar103[0xc] = uVar155;
      auVar103[0xd] = uVar156;
      auVar103[0xe] = bVar157 | 0x80;
      auVar103[0xf] = bVar158 | 0x7f;
      uVar9 = CONCAT13(uVar95,CONCAT12(uVar94,sVar10));
      uVar8 = CONCAT15(uVar97,CONCAT14(uVar96,uVar9));
      uVar21 = CONCAT13(uVar134,CONCAT12(uVar133,sVar23));
      uVar20 = CONCAT15(uVar136,CONCAT14(uVar135,uVar21));
      uVar85 = CONCAT17((short)puVar52[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar52[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar37[4] = uVar147;
      auVar37._0_4_ = fVar38;
      auVar37[5] = uVar148;
      auVar37[6] = uVar149;
      auVar37[7] = uVar150;
      auVar37[8] = uVar151;
      auVar37[9] = uVar152;
      auVar37[10] = bVar153;
      auVar37[0xb] = bVar154;
      auVar37[0xc] = uVar155;
      auVar37[0xd] = uVar156;
      auVar37[0xe] = bVar157;
      auVar37[0xf] = bVar158;
      auVar92[4] = uVar147;
      auVar92._0_4_ = fVar38;
      auVar92[5] = uVar148;
      auVar92[6] = uVar149;
      auVar92[7] = uVar150;
      auVar92[8] = uVar151;
      auVar92[9] = uVar152;
      auVar92[10] = bVar153;
      auVar92[0xb] = bVar154;
      auVar92[0xc] = uVar155;
      auVar92[0xd] = uVar156;
      auVar92[0xe] = bVar157;
      auVar92[0xf] = bVar158;
      auVar92 = auVar92 ^ (auVar37 ^ auVar103) & auVar91;
      auVar104[0xc] = (char)iVar16;
      auVar104._8_4_ = -(uint)(65536.0 <= fVar33);
      auVar104[0xd] = (char)((uint)iVar16 >> 8);
      auVar104[0xe] = (char)((uint)iVar16 >> 0x10);
      auVar104[0xf] = (char)((uint)iVar16 >> 0x18);
      auVar104[4] = (char)iVar13;
      auVar104._0_4_ = -(uint)(65536.0 <= fVar29);
      auVar104[5] = (char)((uint)iVar13 >> 8);
      auVar104[6] = (char)((uint)iVar13 >> 0x10);
      auVar104[7] = (char)((uint)iVar13 >> 0x18);
      auVar28[4] = uVar139;
      auVar28._0_4_ = fVar29;
      auVar28[5] = uVar140;
      auVar28[6] = uVar141;
      auVar28[7] = uVar142;
      auVar28[8] = uVar143;
      auVar28[9] = uVar144;
      auVar28[10] = bVar59;
      auVar28[0xb] = bVar60;
      auVar28[0xc] = uVar145;
      auVar28[0xd] = uVar146;
      auVar28[0xe] = bVar61;
      auVar28[0xf] = bVar62;
      auVar47[8] = uVar143;
      auVar47._0_8_ =
           CONCAT17(uVar142,CONCAT16(uVar141,CONCAT15(uVar140,CONCAT14(uVar139,fVar29)))) |
           0x7f8000007f800000;
      auVar47[9] = uVar144;
      auVar47[10] = bVar59 | 0x80;
      auVar47[0xb] = bVar60 | 0x7f;
      auVar47[0xc] = uVar145;
      auVar47[0xd] = uVar146;
      auVar47[0xe] = bVar61 | 0x80;
      auVar47[0xf] = bVar62 | 0x7f;
      auVar105[4] = uVar139;
      auVar105._0_4_ = fVar29;
      auVar105[5] = uVar140;
      auVar105[6] = uVar141;
      auVar105[7] = uVar142;
      auVar105[8] = uVar143;
      auVar105[9] = uVar144;
      auVar105[10] = bVar59;
      auVar105[0xb] = bVar60;
      auVar105[0xc] = uVar145;
      auVar105[0xd] = uVar146;
      auVar105[0xe] = bVar61;
      auVar105[0xf] = bVar62;
      auVar105 = auVar105 ^ (auVar28 ^ auVar47) & auVar104;
      auVar124[0xc] = (char)iVar12;
      auVar124._8_4_ = -(uint)(65536.0 <= fVar100);
      auVar124[0xd] = (char)((uint)iVar12 >> 8);
      auVar124[0xe] = (char)((uint)iVar12 >> 0x10);
      auVar124[0xf] = (char)((uint)iVar12 >> 0x18);
      auVar124[4] = (char)iVar11;
      auVar124._0_4_ = -(uint)(65536.0 <= fVar63);
      auVar124[5] = (char)((uint)iVar11 >> 8);
      auVar124[6] = (char)((uint)iVar11 >> 0x10);
      auVar124[7] = (char)((uint)iVar11 >> 0x18);
      auVar15[4] = uVar109;
      auVar15._0_4_ = fVar63;
      auVar15[5] = uVar110;
      auVar15[6] = uVar111;
      auVar15[7] = uVar112;
      auVar15[8] = uVar129;
      auVar15[9] = uVar130;
      auVar15[10] = bVar55;
      auVar15[0xb] = bVar56;
      auVar15[0xc] = uVar131;
      auVar15[0xd] = uVar132;
      auVar15[0xe] = bVar57;
      auVar15[0xf] = bVar58;
      auVar46[8] = uVar129;
      auVar46._0_8_ =
           CONCAT17(uVar112,CONCAT16(uVar111,CONCAT15(uVar110,CONCAT14(uVar109,fVar63)))) |
           0x7f8000007f800000;
      auVar46[9] = uVar130;
      auVar46[10] = bVar55 | 0x80;
      auVar46[0xb] = bVar56 | 0x7f;
      auVar46[0xc] = uVar131;
      auVar46[0xd] = uVar132;
      auVar46[0xe] = bVar57 | 0x80;
      auVar46[0xf] = bVar58 | 0x7f;
      auVar125[4] = uVar109;
      auVar125._0_4_ = fVar63;
      auVar125[5] = uVar110;
      auVar125[6] = uVar111;
      auVar125[7] = uVar112;
      auVar125[8] = uVar129;
      auVar125[9] = uVar130;
      auVar125[10] = bVar55;
      auVar125[0xb] = bVar56;
      auVar125[0xc] = uVar131;
      auVar125[0xd] = uVar132;
      auVar125[0xe] = bVar57;
      auVar125[0xf] = bVar58;
      auVar125 = auVar125 ^ (auVar15 ^ auVar46) & auVar124;
      auVar45[8] = SUB41(auVar67._8_4_,0);
      auVar45._0_8_ =
           CONCAT17((char)((uint)auVar67._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar67._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar67._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar67._4_4_,0),auVar67._0_4_)))) |
           0x7f8000007f800000;
      auVar45[9] = (char)((uint)auVar67._8_4_ >> 8);
      auVar45[10] = (byte)((uint)auVar67._8_4_ >> 0x10) | 0x80;
      auVar45[0xb] = (byte)((uint)auVar67._8_4_ >> 0x18) | 0x7f;
      auVar45[0xc] = SUB41(auVar67._12_4_,0);
      auVar45[0xd] = (char)((uint)auVar67._12_4_ >> 8);
      auVar45[0xe] = (byte)((uint)auVar67._12_4_ >> 0x10) | 0x80;
      auVar45[0xf] = (byte)((uint)auVar67._12_4_ >> 0x18) | 0x7f;
      auVar67 = auVar67 ^ (auVar67 ^ auVar45) & auVar128;
      fVar63 = (float)CONCAT13(auVar67[3] | (byte)((short)puVar52[0x3c] >> 0xf) & 0x80,auVar67._0_3_
                              );
      auVar64._0_8_ =
           CONCAT17(auVar67[7] | (byte)((short)puVar52[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar67[6],CONCAT15(auVar67[5],CONCAT14(auVar67[4],fVar63))));
      auVar64[8] = auVar67[8];
      auVar64[9] = auVar67[9];
      auVar64[10] = auVar67[10];
      auVar64[0xb] = auVar67[0xb] | (byte)((short)puVar52[0x34] >> 0xf) & 0x80;
      auVar68[0xc] = auVar67[0xc];
      auVar68._0_12_ = auVar64;
      auVar68[0xd] = auVar67[0xd];
      auVar68[0xe] = auVar67[0xe];
      auVar68[0xf] = auVar67[0xf] | (byte)((short)puVar52[0x30] >> 0xf) & 0x80;
      fVar100 = (float)CONCAT13(auVar105[3] | (byte)(sVar10 >> 0xf) & 0x80,auVar105._0_3_);
      auVar102._0_8_ =
           CONCAT17(auVar105[7] | (byte)((int)uVar9 >> 0x1f) & 0x80,
                    CONCAT16(auVar105[6],CONCAT15(auVar105[5],CONCAT14(auVar105[4],fVar100))));
      auVar102[8] = auVar105[8];
      auVar102[9] = auVar105[9];
      auVar102[10] = auVar105[10];
      auVar102[0xb] = auVar105[0xb] | (byte)((int6)uVar8 >> 0x2f) & 0x80;
      auVar106[0xc] = auVar105[0xc];
      auVar106._0_12_ = auVar102;
      auVar106[0xd] = auVar105[0xd];
      auVar106[0xe] = auVar105[0xe];
      auVar106[0xf] =
           auVar105[0xf] | (byte)((long)CONCAT17(uVar108,CONCAT16(uVar107,uVar8)) >> 0x3f) & 0x80;
      fVar89 = (float)CONCAT13(auVar92[3] | (byte)(sVar23 >> 0xf) & 0x80,auVar92._0_3_);
      auVar90._0_8_ =
           CONCAT17(auVar92[7] | (byte)((int)uVar21 >> 0x1f) & 0x80,
                    CONCAT16(auVar92[6],CONCAT15(auVar92[5],CONCAT14(auVar92[4],fVar89))));
      auVar90[8] = auVar92[8];
      auVar90[9] = auVar92[9];
      auVar90[10] = auVar92[10];
      auVar90[0xb] = auVar92[0xb] | (byte)((int6)uVar20 >> 0x2f) & 0x80;
      auVar93[0xc] = auVar92[0xc];
      auVar93._0_12_ = auVar90;
      auVar93[0xd] = auVar92[0xd];
      auVar93[0xe] = auVar92[0xe];
      auVar93[0xf] = auVar92[0xf] |
                     (byte)((long)CONCAT17(uVar138,CONCAT16(uVar137,uVar20)) >> 0x3f) & 0x80;
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar127[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar127._4_3_) ==
                               (float)CONCAT13(auVar125[7] | (byte)(uVar85 >> 0x38),auVar125._4_3_))
                              ,-(uint)((float)CONCAT13(auVar127[3] | (byte)(sVar51 >> 0xf) & 0x80,
                                                       auVar127._0_3_) ==
                                      (float)CONCAT13(auVar125[3] | (byte)(uVar85 >> 0x18),
                                                      auVar125._0_3_))) & 0xffff0000ffff;
      bVar55 = ~-(fVar84 == fVar63);
      bVar56 = ~-((float)((ulong)auVar86._0_8_ >> 0x20) == (float)((ulong)auVar64._0_8_ >> 0x20));
      bVar57 = ~-(auVar86._8_4_ == auVar64._8_4_);
      bVar58 = ~-(auVar87._12_4_ == auVar68._12_4_);
      bVar59 = ~(byte)uVar5;
      bVar60 = ~(byte)(uVar5 >> 0x20);
      bVar61 = ~-((float)CONCAT13(auVar127[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,auVar127._8_3_)
                 == (float)CONCAT13(auVar125[0xb] | (byte)((short)puVar52[0x24] >> 0xf) & 0x80,
                                    auVar125._8_3_));
      bVar62 = ~-((float)CONCAT13(auVar127[0xf] |
                                  (byte)((long)CONCAT17(uVar99,CONCAT16(uVar98,uVar3)) >> 0x3f) &
                                  0x80,auVar127._12_3_) ==
                 (float)CONCAT13(auVar125[0xf] | (byte)((short)puVar52[0x20] >> 0xf) & 0x80,
                                 auVar125._12_3_));
      auVar69._0_8_ =
           CONCAT17(bVar62,CONCAT16(bVar61,CONCAT15(bVar60,CONCAT14(bVar59,CONCAT13(bVar58,CONCAT12(
                                                  bVar57,CONCAT11(bVar56,bVar55))))))) &
           0x8040201008040201;
      auVar69[8] = ~-(fVar113 == fVar100) & 1;
      auVar69[9] = ~-((float)(CONCAT17(auVar126[7] | (byte)(uVar114 >> 0x28),
                                       CONCAT16(auVar126[6],
                                                CONCAT15(auVar126[5],CONCAT14(auVar126[4],fVar113)))
                                      ) >> 0x20) == (float)((ulong)auVar102._0_8_ >> 0x20)) & 2;
      auVar69[10] = ~-(fVar115 == auVar102._8_4_) & 4;
      auVar69[0xb] = ~-((float)(CONCAT17(auVar126[0xf] | (byte)(uVar116 >> 0x28),
                                         CONCAT16(auVar126[0xe],
                                                  CONCAT15(auVar126[0xd],
                                                           CONCAT14(auVar126[0xc],fVar115)))) >>
                               0x20) == auVar106._12_4_) & 8;
      auVar69[0xc] = ~-(fVar117 == fVar89) & 0x10;
      auVar69[0xd] = ~-((float)((ulong)auVar119._0_8_ >> 0x20) ==
                       (float)((ulong)auVar90._0_8_ >> 0x20)) & 0x20;
      auVar69[0xe] = ~-(auVar119._8_4_ == auVar90._8_4_) & 0x40;
      auVar69[0xf] = ~-(auVar121._12_4_ == auVar93._12_4_) & 0x80;
      auVar88 = NEON_ext(auVar69,auVar69,8,1);
      auVar48._1_13_ = auVar69._3_13_;
      auVar48[0] = bVar56 & 2;
      auVar72._5_11_ = auVar69._5_11_;
      auVar72._0_5_ = CONCAT14(bVar57,auVar48._0_4_ << 0x10) & 0x4ffffffff;
      auVar74._7_9_ = auVar69._7_9_;
      auVar74._0_7_ = CONCAT16(bVar58,auVar72._0_6_) & 0x8ffffffffffff;
      auVar76._9_7_ = auVar69._9_7_;
      auVar76._0_8_ = auVar74._0_8_;
      auVar76[8] = bVar59 & 0x10;
      auVar78._11_5_ = auVar69._11_5_;
      auVar78._0_10_ = auVar76._0_10_;
      auVar78[10] = bVar60 & 0x20;
      auVar80._13_3_ = auVar69._13_3_;
      auVar80._0_12_ = auVar78._0_12_;
      auVar80[0xc] = bVar61 & 0x40;
      auVar82._0_14_ = auVar80._0_14_;
      auVar82[0xe] = bVar62 & 0x80;
      auVar82[0xf] = auVar69[0xf];
      auVar70._2_14_ = auVar82._2_14_;
      auVar70._0_2_ = CONCAT11(auVar88[0],bVar55) & 0xff01;
      auVar71._4_12_ = auVar82._4_12_;
      auVar71._0_4_ = CONCAT13(auVar88[1],auVar70._0_3_);
      auVar73._6_10_ = auVar82._6_10_;
      auVar73._0_6_ = CONCAT15(auVar88[2],auVar71._0_5_);
      auVar75._8_8_ = auVar82._8_8_;
      auVar75._0_8_ = CONCAT17(auVar88[3],auVar73._0_7_);
      auVar77._10_6_ = auVar82._10_6_;
      auVar77._0_10_ = CONCAT19(auVar88[4],auVar75._0_9_);
      auVar79._12_4_ = auVar82._12_4_;
      auVar65._0_11_ = auVar77._0_11_;
      auVar65[0xb] = auVar88[5];
      auVar79._0_12_ = auVar65;
      auVar81._14_2_ = auVar82._14_2_;
      auVar66._0_13_ = auVar79._0_13_;
      auVar66[0xd] = auVar88[6];
      auVar81._0_14_ = auVar66;
      auVar83._0_15_ = auVar81._0_15_;
      auVar83[0xf] = auVar88[7];
      sVar51 = -(ushort)((ushort)(auVar70._0_2_ + (short)((uint)auVar71._0_4_ >> 0x10) +
                                  (short)((uint6)auVar73._0_6_ >> 0x20) +
                                  (short)((ulong)auVar75._0_8_ >> 0x30) +
                                  (short)((unkuint10)auVar77._0_10_ >> 0x40) + auVar65._10_2_ +
                                  auVar66._12_2_ + auVar83._14_2_) != 0);
      goto LAB_109ed518c;
    }
    pfVar53 = (float *)param_3[1];
    if (*(float *)(pdVar50 + 0xf) != pfVar53[0x1e]) goto LAB_109ed4e14;
    sVar51 = -1;
    if (((((*(float *)(pdVar50 + 0xe) != pfVar53[0x1c]) ||
          (*(float *)(pdVar50 + 0xd) != pfVar53[0x1a])) ||
         (*(float *)(pdVar50 + 0xc) != pfVar53[0x18])) ||
        ((((*(float *)(pdVar50 + 0xb) != pfVar53[0x16] ||
           (*(float *)(pdVar50 + 10) != pfVar53[0x14])) ||
          ((*(float *)(pdVar50 + 9) != pfVar53[0x12] ||
           ((*(float *)(pdVar50 + 8) != pfVar53[0x10] || (*(float *)(pdVar50 + 7) != pfVar53[0xe])))
           ))) || (*(float *)(pdVar50 + 6) != pfVar53[0xc])))) ||
       ((((*(float *)(pdVar50 + 5) != pfVar53[10] || (*(float *)(pdVar50 + 4) != pfVar53[8])) ||
         (*(float *)(pdVar50 + 3) != pfVar53[6])) ||
        ((*(float *)(pdVar50 + 2) != pfVar53[4] || (*(float *)(pdVar50 + 1) != pfVar53[2]))))))
    goto LAB_109ed518c;
    bVar49 = *(float *)pdVar50 == *pfVar53;
  }
  sVar51 = -(ushort)!bVar49;
LAB_109ed518c:
  *param_1 = sVar51;
  return;
}



/* Entry: 109ed5194; end: 109ed57cf;  */

void FUN_109ed5194(short *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  double *pdVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pdVar4 = (double *)*param_3;
  if (param_2 == 0x40) {
    uVar2 = (ushort)(pdVar4[1] != ((double *)param_3[1])[1]);
    bVar1 = *pdVar4 == *(double *)param_3[1];
  }
  else if (param_2 == 0x20) {
    uVar2 = (ushort)(*(float *)(pdVar4 + 1) != ((float *)param_3[1])[2]);
    bVar1 = *(float *)pdVar4 == *(float *)param_3[1];
  }
  else {
    fVar5 = (float)(((int)*(short *)pdVar4 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar5) {
      fVar5 = (float)((uint)fVar5 | 0x7f800000);
    }
    fVar5 = (float)((uint)fVar5 | (int)*(short *)pdVar4 & 0x80000000U);
    fVar7 = (float)(((int)*(short *)(pdVar4 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    uVar3 = (uint)*(short *)param_3[1];
    fVar8 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    fVar8 = (float)((uint)fVar8 | uVar3 & 0x80000000);
    uVar3 = (uint)((short *)param_3[1])[4];
    fVar6 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    uVar2 = (ushort)((float)((uint)fVar7 | (int)*(short *)(pdVar4 + 1) & 0x80000000U) !=
                    (float)((uint)fVar6 | uVar3 & 0x80000000));
    bVar1 = false;
    if (!NAN(fVar5) && !NAN(fVar8)) {
      bVar1 = fVar5 == fVar8;
    }
  }
  if (!bVar1) {
    uVar2 = 1;
  }
  *param_1 = -uVar2;
  return;
}



/* Entry: 109ed57d0; end: 109ed5a37;  */

void FUN_109ed57d0(short *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint3 uVar6;
  uint uVar7;
  undefined6 uVar8;
  undefined4 uVar9;
  uint6 uVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  bool bVar25;
  bool bVar26;
  double *pdVar27;
  short sVar28;
  float *pfVar29;
  ushort *puVar30;
  double *pdVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  ulong uVar39;
  undefined1 auVar41 [16];
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  ulong uVar50;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined1 auVar40 [12];
  undefined1 auVar42 [16];
  undefined1 auVar51 [12];
  undefined1 auVar53 [16];
  
  pdVar27 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar31 = (double *)param_3[1];
    if (pdVar27[7] != pdVar31[7]) goto LAB_109ed586c;
    uVar5 = NEON_umaxv(CONCAT17(~(byte)(-(ulong)(pdVar27[6] == pdVar31[6]) >> 8),
                                CONCAT16(~(byte)-(ulong)(pdVar27[6] == pdVar31[6]),
                                         CONCAT15(~(byte)(-(ulong)(pdVar27[5] == pdVar31[5]) >> 8),
                                                  CONCAT14(~(byte)-(ulong)(pdVar27[5] == pdVar31[5])
                                                           ,CONCAT13(~(byte)(-(ulong)(pdVar27[4] ==
                                                                                     pdVar31[4]) >>
                                                                            8),
                                                                     CONCAT12(~(byte)-(ulong)(
                                                  pdVar27[4] == pdVar31[4]),
                                                  CONCAT11(~(byte)(-(ulong)(pdVar27[3] == pdVar31[3]
                                                                           ) >> 8),
                                                           ~(byte)-(ulong)(pdVar27[3] == pdVar31[3])
                                                          ))))))),2);
    sVar28 = -1;
    if ((((uVar5 & 1) != 0) || (pdVar27[2] != pdVar31[2])) || (pdVar27[1] != pdVar31[1]))
    goto LAB_109ed59c4;
    bVar25 = *pdVar27 == *pdVar31;
  }
  else {
    if (param_2 == 0x20) {
      pfVar29 = (float *)param_3[1];
      if (*(float *)(pdVar27 + 7) == pfVar29[0xe]) {
        bVar25 = false;
        if ((*(float *)(pdVar27 + 6) == pfVar29[0xc]) &&
           (bVar25 = false, !NAN(*(float *)(pdVar27 + 5)) && !NAN(pfVar29[10]))) {
          bVar25 = *(float *)(pdVar27 + 5) == pfVar29[10];
        }
        bVar26 = false;
        if ((bVar25) && (bVar26 = false, !NAN(*(float *)(pdVar27 + 4)) && !NAN(pfVar29[8]))) {
          bVar26 = *(float *)(pdVar27 + 4) == pfVar29[8];
        }
        bVar25 = false;
        if ((bVar26) && (bVar25 = false, !NAN(*(float *)(pdVar27 + 3)) && !NAN(pfVar29[6]))) {
          bVar25 = *(float *)(pdVar27 + 3) == pfVar29[6];
        }
        bVar26 = false;
        if ((bVar25) && (bVar26 = false, !NAN(*(float *)(pdVar27 + 2)) && !NAN(pfVar29[4]))) {
          bVar26 = *(float *)(pdVar27 + 2) == pfVar29[4];
        }
        bVar25 = false;
        if ((bVar26) && (bVar25 = false, !NAN(*(float *)(pdVar27 + 1)) && !NAN(pfVar29[2]))) {
          bVar25 = *(float *)(pdVar27 + 1) == pfVar29[2];
        }
        if (bVar25) {
          bVar25 = *(float *)pdVar27 == *pfVar29;
          goto LAB_109ed59c0;
        }
      }
LAB_109ed586c:
      sVar28 = -1;
      goto LAB_109ed59c4;
    }
    puVar30 = (ushort *)param_3[1];
    sVar28 = *(short *)(pdVar27 + 7);
    uVar32 = (undefined1)*(undefined2 *)(pdVar27 + 6);
    uVar33 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 6) >> 8);
    uVar34 = (undefined1)*(undefined2 *)(pdVar27 + 5);
    uVar35 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 5) >> 8);
    uVar36 = (undefined1)*(undefined2 *)(pdVar27 + 4);
    uVar37 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 4) >> 8);
    uVar1 = CONCAT12(uVar32,sVar28);
    uVar2 = CONCAT13(uVar33,uVar1);
    uVar3 = CONCAT15(uVar35,CONCAT14(uVar34,uVar2));
    sVar11 = *(short *)(pdVar27 + 3);
    uVar43 = (undefined1)*(undefined2 *)(pdVar27 + 2);
    uVar44 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 2) >> 8);
    uVar45 = (undefined1)*(undefined2 *)(pdVar27 + 1);
    uVar46 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 1) >> 8);
    uVar47 = (undefined1)*(undefined2 *)pdVar27;
    uVar48 = (undefined1)((ushort)*(undefined2 *)pdVar27 >> 8);
    uVar6 = CONCAT12(uVar43,sVar11);
    uVar7 = CONCAT13(uVar44,uVar6);
    uVar8 = CONCAT15(uVar46,CONCAT14(uVar45,uVar7));
    uVar39 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    uVar50 = CONCAT44((uVar7 >> 0x10) << 0xd,(uVar6 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    auVar52._0_4_ = (float)uVar50 * 5.192297e+33;
    auVar52._4_4_ = (float)(uVar50 >> 0x20) * 5.192297e+33;
    auVar52._8_4_ = (float)(((ushort)((uint6)uVar8 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar52._12_4_ =
         (float)(((ushort)(CONCAT17(uVar48,CONCAT16(uVar47,uVar8)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    auVar41._0_4_ = (float)uVar39 * 5.192297e+33;
    auVar41._4_4_ = (float)(uVar39 >> 0x20) * 5.192297e+33;
    auVar41._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar41._12_4_ =
         (float)(((ushort)(CONCAT17(uVar37,CONCAT16(uVar36,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    iVar16 = -(uint)(65536.0 <= auVar52._4_4_);
    iVar17 = -(uint)(65536.0 <= auVar52._8_4_);
    iVar19 = -(uint)(65536.0 <= auVar52._12_4_);
    uVar4 = CONCAT13(uVar33,CONCAT12(uVar32,sVar28));
    uVar3 = CONCAT15(uVar35,CONCAT14(uVar34,uVar4));
    uVar9 = CONCAT13(uVar44,CONCAT12(uVar43,sVar11));
    uVar8 = CONCAT15(uVar46,CONCAT14(uVar45,uVar9));
    auVar24[8] = SUB41(auVar52._8_4_,0);
    auVar24._0_8_ =
         CONCAT17((char)((uint)auVar52._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar52._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar52._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar52._4_4_,0),auVar52._0_4_)))) |
         0x7f8000007f800000;
    auVar24[9] = (char)((uint)auVar52._8_4_ >> 8);
    auVar24[10] = (byte)((uint)auVar52._8_4_ >> 0x10) | 0x80;
    auVar24[0xb] = (byte)((uint)auVar52._8_4_ >> 0x18) | 0x7f;
    auVar24[0xc] = SUB41(auVar52._12_4_,0);
    auVar24[0xd] = (char)((uint)auVar52._12_4_ >> 8);
    auVar24[0xe] = (byte)((uint)auVar52._12_4_ >> 0x10) | 0x80;
    auVar24[0xf] = (byte)((uint)auVar52._12_4_ >> 0x18) | 0x7f;
    auVar14[4] = (char)iVar16;
    auVar14._0_4_ = -(uint)(65536.0 <= auVar52._0_4_);
    auVar14[5] = (char)((uint)iVar16 >> 8);
    auVar14[6] = (char)((uint)iVar16 >> 0x10);
    auVar14[7] = (char)((uint)iVar16 >> 0x18);
    auVar14[8] = (char)iVar17;
    auVar14[9] = (char)((uint)iVar17 >> 8);
    auVar14[10] = (char)((uint)iVar17 >> 0x10);
    auVar14[0xb] = (char)((uint)iVar17 >> 0x18);
    auVar14[0xc] = (char)iVar19;
    auVar14[0xd] = (char)((uint)iVar19 >> 8);
    auVar14[0xe] = (char)((uint)iVar19 >> 0x10);
    auVar14[0xf] = (char)((uint)iVar19 >> 0x18);
    auVar52 = auVar52 ^ (auVar52 ^ auVar24) & auVar14;
    auVar22[8] = SUB41(auVar41._8_4_,0);
    auVar22._0_8_ =
         CONCAT17((char)((uint)auVar41._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar41._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar41._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar41._4_4_,0),auVar41._0_4_)))) |
         0x7f8000007f800000;
    auVar22[9] = (char)((uint)auVar41._8_4_ >> 8);
    auVar22[10] = (byte)((uint)auVar41._8_4_ >> 0x10) | 0x80;
    auVar22[0xb] = (byte)((uint)auVar41._8_4_ >> 0x18) | 0x7f;
    auVar22[0xc] = SUB41(auVar41._12_4_,0);
    auVar22[0xd] = (char)((uint)auVar41._12_4_ >> 8);
    auVar22[0xe] = (byte)((uint)auVar41._12_4_ >> 0x10) | 0x80;
    auVar22[0xf] = (byte)((uint)auVar41._12_4_ >> 0x18) | 0x7f;
    auVar12._4_4_ = -(uint)(65536.0 <= auVar41._4_4_);
    auVar12._0_4_ = -(uint)(65536.0 <= auVar41._0_4_);
    auVar12._8_4_ = -(uint)(65536.0 <= auVar41._8_4_);
    auVar12._12_4_ = -(uint)(65536.0 <= auVar41._12_4_);
    auVar41 = auVar41 ^ (auVar41 ^ auVar22) & auVar12;
    fVar38 = (float)((puVar30[0xc] & 0x7fff) << 0xd) * 5.192297e+33;
    fVar49 = (float)((puVar30[8] & 0x7fff) << 0xd) * 5.192297e+33;
    uVar32 = SUB41(fVar49,0);
    uVar33 = (undefined1)((uint)fVar49 >> 8);
    uVar34 = (undefined1)((uint)fVar49 >> 0x10);
    uVar35 = (undefined1)((uint)fVar49 >> 0x18);
    fVar18 = (float)((puVar30[4] & 0x7fff) << 0xd) * 5.192297e+33;
    uVar43 = SUB41(fVar18,0);
    uVar44 = (undefined1)((uint)fVar18 >> 8);
    bVar57 = (byte)((uint)fVar18 >> 0x10);
    bVar58 = (byte)((uint)fVar18 >> 0x18);
    fVar20 = (float)((*puVar30 & 0x7fff) << 0xd) * 5.192297e+33;
    uVar45 = SUB41(fVar20,0);
    uVar46 = (undefined1)((uint)fVar20 >> 8);
    bVar59 = (byte)((uint)fVar20 >> 0x10);
    bVar60 = (byte)((uint)fVar20 >> 0x18);
    auVar54._0_4_ = (float)((puVar30[0x1c] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._4_4_ = (float)((puVar30[0x18] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._8_4_ = (float)((puVar30[0x14] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._12_4_ = (float)((puVar30[0x10] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar55._0_4_ = -(uint)(65536.0 <= fVar38);
    auVar55._4_4_ = -(uint)(65536.0 <= fVar49);
    auVar55._8_4_ = -(uint)(65536.0 <= fVar18);
    auVar55._12_4_ = -(uint)(65536.0 <= fVar20);
    uVar50 = CONCAT17((short)puVar30[8] >> 0xf,
                      (uint7)(((byte)((short)puVar30[0xc] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    uVar39 = CONCAT17((short)puVar30[0x18] >> 0xf,
                      (uint7)(((byte)((short)puVar30[0x1c] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    auVar15[4] = uVar32;
    auVar15._0_4_ = fVar38;
    auVar15[5] = uVar33;
    auVar15[6] = uVar34;
    auVar15[7] = uVar35;
    auVar15[8] = uVar43;
    auVar15[9] = uVar44;
    auVar15[10] = bVar57;
    auVar15[0xb] = bVar58;
    auVar15[0xc] = uVar45;
    auVar15[0xd] = uVar46;
    auVar15[0xe] = bVar59;
    auVar15[0xf] = bVar60;
    auVar21[8] = uVar43;
    auVar21._0_8_ =
         CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar38)))) |
         0x7f8000007f800000;
    auVar21[9] = uVar44;
    auVar21[10] = bVar57 | 0x80;
    auVar21[0xb] = bVar58 | 0x7f;
    auVar21[0xc] = uVar45;
    auVar21[0xd] = uVar46;
    auVar21[0xe] = bVar59 | 0x80;
    auVar21[0xf] = bVar60 | 0x7f;
    auVar56[4] = uVar32;
    auVar56._0_4_ = fVar38;
    auVar56[5] = uVar33;
    auVar56[6] = uVar34;
    auVar56[7] = uVar35;
    auVar56[8] = uVar43;
    auVar56[9] = uVar44;
    auVar56[10] = bVar57;
    auVar56[0xb] = bVar58;
    auVar56[0xc] = uVar45;
    auVar56[0xd] = uVar46;
    auVar56[0xe] = bVar59;
    auVar56[0xf] = bVar60;
    auVar56 = auVar56 ^ (auVar15 ^ auVar21) & auVar55;
    auVar23[8] = SUB41(auVar54._8_4_,0);
    auVar23._0_8_ =
         CONCAT17((char)((uint)auVar54._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar54._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar54._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar54._4_4_,0),auVar54._0_4_)))) |
         0x7f8000007f800000;
    auVar23[9] = (char)((uint)auVar54._8_4_ >> 8);
    auVar23[10] = (byte)((uint)auVar54._8_4_ >> 0x10) | 0x80;
    auVar23[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) | 0x7f;
    auVar23[0xc] = SUB41(auVar54._12_4_,0);
    auVar23[0xd] = (char)((uint)auVar54._12_4_ >> 8);
    auVar23[0xe] = (byte)((uint)auVar54._12_4_ >> 0x10) | 0x80;
    auVar23[0xf] = (byte)((uint)auVar54._12_4_ >> 0x18) | 0x7f;
    auVar13._4_4_ = -(uint)(65536.0 <= auVar54._4_4_);
    auVar13._0_4_ = -(uint)(65536.0 <= auVar54._0_4_);
    auVar13._8_4_ = -(uint)(65536.0 <= auVar54._8_4_);
    auVar13._12_4_ = -(uint)(65536.0 <= auVar54._12_4_);
    auVar54 = auVar54 ^ (auVar54 ^ auVar23) & auVar13;
    fVar38 = (float)CONCAT13(auVar54[3] | (byte)(uVar39 >> 0x18),auVar54._0_3_);
    auVar40._0_8_ =
         CONCAT17(auVar54[7] | (byte)(uVar39 >> 0x38),
                  CONCAT16(auVar54[6],CONCAT15(auVar54[5],CONCAT14(auVar54[4],fVar38))));
    auVar40[8] = auVar54[8];
    auVar40[9] = auVar54[9];
    auVar40[10] = auVar54[10];
    auVar40[0xb] = auVar54[0xb] | (byte)((short)puVar30[0x14] >> 0xf) & 0x80;
    auVar42[0xc] = auVar54[0xc];
    auVar42._0_12_ = auVar40;
    auVar42[0xd] = auVar54[0xd];
    auVar42[0xe] = auVar54[0xe];
    auVar42[0xf] = auVar54[0xf] | (byte)((short)puVar30[0x10] >> 0xf) & 0x80;
    fVar49 = (float)CONCAT13(auVar56[3] | (byte)(uVar50 >> 0x18),auVar56._0_3_);
    auVar51._0_8_ =
         CONCAT17(auVar56[7] | (byte)(uVar50 >> 0x38),
                  CONCAT16(auVar56[6],CONCAT15(auVar56[5],CONCAT14(auVar56[4],fVar49))));
    auVar51[8] = auVar56[8];
    auVar51[9] = auVar56[9];
    auVar51[10] = auVar56[10];
    auVar51[0xb] = auVar56[0xb] | (byte)((short)puVar30[4] >> 0xf) & 0x80;
    auVar53[0xc] = auVar56[0xc];
    auVar53._0_12_ = auVar51;
    auVar53[0xd] = auVar56[0xd];
    auVar53[0xe] = auVar56[0xe];
    auVar53[0xf] = auVar56[0xf] | (byte)((short)*puVar30 >> 0xf) & 0x80;
    uVar10 = (uint6)CONCAT14(-((float)CONCAT13(auVar52[7] | (byte)((int)uVar9 >> 0x1f) & 0x80,
                                               auVar52._4_3_) ==
                              (float)((ulong)auVar51._0_8_ >> 0x20)),
                             -(uint)((float)CONCAT13(auVar52[3] | (byte)(sVar11 >> 0xf) & 0x80,
                                                     auVar52._0_3_) == fVar49)) & 0xffff0000ffff;
    bVar25 = (byte)((~-((float)CONCAT13(auVar41[3] | (byte)(sVar28 >> 0xf) & 0x80,auVar41._0_3_) ==
                       fVar38) & 1U) +
                    (~-((float)CONCAT13(auVar41[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,auVar41._4_3_
                                       ) == (float)((ulong)auVar40._0_8_ >> 0x20)) & 2U) +
                    (~-((float)CONCAT13(auVar41[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                        auVar41._8_3_) == auVar40._8_4_) & 4U) +
                    (~-((float)CONCAT13(auVar41[0xf] |
                                        (byte)((long)CONCAT17(uVar37,CONCAT16(uVar36,uVar3)) >> 0x3f
                                              ) & 0x80,auVar41._12_3_) == auVar42._12_4_) & 8U) +
                    (~(byte)uVar10 & 0x10) + (~(byte)(uVar10 >> 0x20) & 0x20) +
                    (~-((float)CONCAT13(auVar52[0xb] | (byte)((int6)uVar8 >> 0x2f) & 0x80,
                                        auVar52._8_3_) == auVar51._8_4_) & 0x40U) +
                   (~-((float)CONCAT13(auVar52[0xf] |
                                       (byte)((long)CONCAT17(uVar48,CONCAT16(uVar47,uVar8)) >> 0x3f)
                                       & 0x80,auVar52._12_3_) == auVar53._12_4_) & 0x80U)) == '\0';
  }
LAB_109ed59c0:
  sVar28 = -(ushort)!bVar25;
LAB_109ed59c4:
  *param_1 = sVar28;
  return;
}



/* Entry: 109ed5a38; end: 109ed6b2f;  */

void FUN_109ed5a38(short *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint7 uVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar4 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  if (uVar4 < 4) {
    if (uVar4 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        sVar3 = -1;
        if (((((byte)param_4[2] != (byte)param_3[2]) || ((byte)param_4[4] != (byte)param_3[4])) ||
            (((byte)param_4[6] != (byte)param_3[6] ||
             ((((byte)param_4[8] != (byte)param_3[8] || ((byte)param_4[10] != (byte)param_3[10])) ||
              ((byte)param_4[0xc] != (byte)param_3[0xc])))))) ||
           ((((byte)param_4[0xe] != (byte)param_3[0xe] ||
             ((byte)param_4[0x10] != (byte)param_3[0x10])) ||
            (((byte)param_4[0x12] != (byte)param_3[0x12] ||
             ((((byte)param_4[0x14] != (byte)param_3[0x14] ||
               ((byte)param_4[0x16] != (byte)param_3[0x16])) ||
              (((byte)param_4[0x18] != (byte)param_3[0x18] ||
               (((byte)param_4[0x1a] != (byte)param_3[0x1a] ||
                ((byte)param_4[0x1c] != (byte)param_3[0x1c])))))))))))) goto LAB_109ed5f2c;
        bVar2 = (byte)*param_4 == (byte)*param_3;
        goto LAB_109ed5f20;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      sVar3 = -1;
      if (((((((byte)param_3[0x1c] != (byte)param_4[0x1c]) ||
             ((byte)param_3[0x1a] != (byte)param_4[0x1a])) ||
            ((byte)param_3[0x18] != (byte)param_4[0x18])) ||
           (((byte)param_3[0x16] != (byte)param_4[0x16] ||
            ((byte)param_3[0x14] != (byte)param_4[0x14])))) ||
          ((byte)param_3[0x12] != (byte)param_4[0x12])) ||
         (((((byte)param_3[0x10] != (byte)param_4[0x10] ||
            ((byte)param_3[0xe] != (byte)param_4[0xe])) ||
           (((byte)param_3[0xc] != (byte)param_4[0xc] ||
            ((((byte)param_3[10] != (byte)param_4[10] || ((byte)param_3[8] != (byte)param_4[8])) ||
             ((byte)param_3[6] != (byte)param_4[6])))))) ||
          (((byte)param_3[4] != (byte)param_4[4] || ((byte)param_3[2] != (byte)param_4[2]))))))
      goto LAB_109ed5f2c;
      uVar4 = (uint)(byte)*param_3;
      uVar5 = (uint)(byte)*param_4;
      goto LAB_109ed5f1c;
    }
  }
  else if (uVar4 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      sVar3 = -1;
      if ((((((((ushort)param_3[0x1c] != (ushort)param_4[0x1c]) ||
              ((ushort)param_3[0x1a] != (ushort)param_4[0x1a])) ||
             ((ushort)param_3[0x18] != (ushort)param_4[0x18])) ||
            (((ushort)param_3[0x16] != (ushort)param_4[0x16] ||
             ((ushort)param_3[0x14] != (ushort)param_4[0x14])))) ||
           (((ushort)param_3[0x12] != (ushort)param_4[0x12] ||
            (((ushort)param_3[0x10] != (ushort)param_4[0x10] ||
             ((ushort)param_3[0xe] != (ushort)param_4[0xe])))))) ||
          (((ushort)param_3[0xc] != (ushort)param_4[0xc] ||
           ((((ushort)param_3[10] != (ushort)param_4[10] ||
             ((ushort)param_3[8] != (ushort)param_4[8])) ||
            ((ushort)param_3[6] != (ushort)param_4[6])))))) ||
         (((ushort)param_3[4] != (ushort)param_4[4] || ((ushort)param_3[2] != (ushort)param_4[2]))))
      goto LAB_109ed5f2c;
      uVar4 = (uint)(ushort)*param_3;
      uVar5 = (uint)(ushort)*param_4;
LAB_109ed5f1c:
      bVar2 = uVar4 == uVar5;
LAB_109ed5f20:
      sVar3 = -(ushort)!bVar2;
      goto LAB_109ed5f2c;
    }
  }
  else if (uVar4 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      sVar3 = -1;
      if ((((((param_3[0x1c] != param_4[0x1c]) || (param_3[0x1a] != param_4[0x1a])) ||
            ((param_3[0x18] != param_4[0x18] ||
             (((param_3[0x16] != param_4[0x16] || (param_3[0x14] != param_4[0x14])) ||
              (param_3[0x12] != param_4[0x12])))))) ||
           ((param_3[0x10] != param_4[0x10] || (param_3[0xe] != param_4[0xe])))) ||
          (param_3[0xc] != param_4[0xc])) ||
         (((param_3[10] != param_4[10] || (param_3[8] != param_4[8])) ||
          ((param_3[6] != param_4[6] || ((param_3[4] != param_4[4] || (param_3[2] != param_4[2])))))
          ))) goto LAB_109ed5f2c;
      uVar4 = *param_3;
      uVar5 = *param_4;
      goto LAB_109ed5f1c;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    uVar1 = CONCAT16(-(*(long *)(param_3 + 0x14) == *(long *)(param_4 + 0x14)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 0x12) == *(long *)(param_4 + 0x12)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 0x10) ==
                                                     *(long *)(param_4 + 0x10)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 0xe) ==
                                                                   *(long *)(param_4 + 0xe))))) &
            CONCAT16(-(*(long *)(param_3 + 0xc) == *(long *)(param_4 + 0xc)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 10) == *(long *)(param_4 + 10)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 8) ==
                                                     *(long *)(param_4 + 8)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 6) ==
                                                                   *(long *)(param_4 + 6)))));
    bVar6 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c)) *
                                        -0x80) < '\0'),
                                CONCAT16(-((char)((*(long *)(param_3 + 0x1a) ==
                                                  *(long *)(param_4 + 0x1a)) * -0x80) < '\0'),
                                         CONCAT15(-((char)((*(long *)(param_3 + 0x18) ==
                                                           *(long *)(param_4 + 0x18)) * -0x80) <
                                                   '\0'),CONCAT14(-((char)((*(long *)(param_3 + 0x16
                                                                                     ) ==
                                                                           *(long *)(param_4 + 0x16)
                                                                           ) * -0x80) < '\0'),
                                                                  CONCAT13(-((char)((char)(uVar1 >> 
                                                  0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar1 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar1 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar1 << 7) < '\0')))))))),1);
    if ((bVar6 & *(long *)(param_3 + 4) == *(long *)(param_4 + 4)) == 1 &&
        *(long *)(param_3 + 2) == *(long *)(param_4 + 2)) {
      bVar2 = *(long *)param_3 == *(long *)param_4;
      goto LAB_109ed5f20;
    }
  }
  sVar3 = -1;
LAB_109ed5f2c:
  *param_1 = sVar3;
  return;
}



/* Entry: 109ed6b30; end: 109ed6ce7;  */

void FUN_109ed6b30(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  
  uVar2 = (uint)param_1;
  uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if (param_2 != 0) {
        lVar4 = 0;
        do {
          uVar5 = NEON_ucvtf((uint)*(byte *)(*param_4 + lVar4));
          if ((param_5 >> 0x12 & 1) == 0) {
            FUN_109f64b28();
          }
          else {
            func_0x000109f683f4(uVar5);
          }
          uVar1 = (ushort)uVar2 & 0x8000;
          if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
            uVar1 = (ushort)uVar2;
          }
          *(ushort *)(param_1 + lVar4) = uVar1;
          lVar4 = lVar4 + 8;
        } while ((ulong)param_2 << 3 != lVar4);
      }
    }
    else if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar5 = 0x3f800000;
        if (*(char *)(*param_4 + lVar4) == '\0') {
          uVar5 = 0;
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(uVar5);
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (uVar3 == 4) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar5 = 0x3f800000;
        if (*(short *)(*param_4 + lVar4) == 0) {
          uVar5 = 0;
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(uVar5);
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      uVar5 = 0x3f800000;
      if (*(int *)(*param_4 + lVar4) == 0) {
        uVar5 = 0;
      }
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4(uVar5);
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar4) = uVar1;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ed6ce8; end: 109ed739b;  */

void FUN_109ed6ce8(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if (param_2 != 0) {
        lVar1 = 0;
        do {
          uVar2 = NEON_ucvtf((uint)*(byte *)(*param_4 + lVar1));
          uVar3 = 0;
          if (((uint)(uVar2 < 0x800000) & param_5 >> 0xd) == 0) {
            uVar3 = uVar2;
          }
          *(uint *)(param_1 + lVar1) = uVar3;
          lVar1 = lVar1 + 8;
        } while ((ulong)param_2 << 3 != lVar1);
      }
    }
    else if (param_2 != 0) {
      lVar1 = 0;
      do {
        uVar3 = 0x3f800000;
        if (*(char *)(*param_4 + lVar1) == '\0') {
          uVar3 = 0;
        }
        uVar2 = 0;
        if (((uint)(uVar3 < 0x800000) & param_5 >> 0xd) == 0) {
          uVar2 = uVar3;
        }
        *(uint *)(param_1 + lVar1) = uVar2;
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (uVar3 == 4) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        uVar3 = 0x3f800000;
        if (*(short *)(*param_4 + lVar1) == 0) {
          uVar3 = 0;
        }
        uVar2 = 0;
        if (((uint)(uVar3 < 0x800000) & param_5 >> 0xd) == 0) {
          uVar2 = uVar3;
        }
        *(uint *)(param_1 + lVar1) = uVar2;
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_2 != 0) {
    lVar1 = 0;
    do {
      uVar3 = 0x3f800000;
      if (*(int *)(*param_4 + lVar1) == 0) {
        uVar3 = 0;
      }
      uVar2 = 0;
      if (((uint)(uVar3 < 0x800000) & param_5 >> 0xd) == 0) {
        uVar2 = uVar3;
      }
      *(uint *)(param_1 + lVar1) = uVar2;
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109ed739c; end: 109ed7833;  */

void FUN_109ed739c(int *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  short sVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  short sVar11;
  uint3 uVar12;
  uint uVar13;
  undefined6 uVar14;
  undefined4 uVar15;
  short sVar16;
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  undefined6 uVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  short sVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [14];
  uint7 uVar54;
  bool bVar55;
  double *pdVar56;
  int iVar57;
  double *pdVar58;
  undefined2 *puVar59;
  float *pfVar60;
  char cVar61;
  byte bVar62;
  char cVar63;
  char cVar64;
  byte bVar65;
  byte bVar66;
  float fVar67;
  undefined7 uVar68;
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar89;
  ulong uVar90;
  undefined1 auVar93 [16];
  float fVar94;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  byte bVar105;
  byte bVar106;
  float fVar107;
  ulong uVar108;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  float fVar126;
  ulong uVar127;
  undefined1 auVar129 [16];
  ulong uVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  byte bVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  byte bVar147;
  byte bVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  undefined1 uVar152;
  undefined1 uVar153;
  undefined1 uVar154;
  undefined1 uVar155;
  undefined1 uVar156;
  undefined1 uVar157;
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  byte bVar161;
  byte bVar162;
  undefined1 uVar163;
  undefined1 uVar164;
  byte bVar165;
  byte bVar166;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar69 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar70 [12];
  undefined1 auVar73 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar71 [14];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar91 [12];
  undefined1 auVar92 [16];
  undefined1 auVar95 [12];
  undefined1 auVar98 [16];
  undefined1 auVar109 [12];
  undefined1 auVar113 [16];
  undefined1 auVar128 [12];
  undefined1 auVar130 [16];
  
  pdVar56 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar58 = (double *)param_3[1];
    if (pdVar56[0xf] == pdVar58[0xf]) {
      uVar68 = CONCAT16(-(pdVar56[10] == pdVar58[10]),
                        (uint6)CONCAT14(-(pdVar56[9] == pdVar58[9]),
                                        (uint)CONCAT12(-(pdVar56[8] == pdVar58[8]),
                                                       (ushort)(byte)-(pdVar56[7] == pdVar58[7]))));
      uVar54 = CONCAT16(-(pdVar56[10] == pdVar58[10]),
                        (uint6)(uint5)CONCAT34((int3)((uint7)uVar68 >> 0x20),
                                               (uint)(uint3)CONCAT52((int5)((uint7)uVar68 >> 0x10),
                                                                     (ushort)(byte)-(pdVar56[7] ==
                                                                                    pdVar58[7])))) &
               CONCAT16(-(pdVar56[6] == pdVar58[6]),
                        (uint6)CONCAT14(-(pdVar56[5] == pdVar58[5]),
                                        (uint)CONCAT12(-(pdVar56[4] == pdVar58[4]),
                                                       (ushort)(byte)-(pdVar56[3] == pdVar58[3]))));
      bVar62 = NEON_uminv(CONCAT17(-((char)((pdVar56[0xe] == pdVar58[0xe]) * -0x80) < '\0'),
                                   CONCAT16(-((char)((pdVar56[0xd] == pdVar58[0xd]) * -0x80) < '\0')
                                            ,CONCAT15(-((char)((pdVar56[0xc] == pdVar58[0xc]) *
                                                              -0x80) < '\0'),
                                                      CONCAT14(-((char)((pdVar56[0xb] ==
                                                                        pdVar58[0xb]) * -0x80) <
                                                                '\0'),CONCAT13(-((char)((char)(
                                                  uVar54 >> 0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar54 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar54 >>
                                                                                          0x10) << 7
                                                                                   ) < '\0'),
                                                                           -((char)((char)uVar54 <<
                                                                                   7) < '\0'))))))))
                          ,1);
      bVar55 = false;
      if (((bVar62 & pdVar56[2] == pdVar58[2]) == 1) &&
         (bVar55 = false, !NAN(pdVar56[1]) && !NAN(pdVar58[1]))) {
        bVar55 = pdVar56[1] == pdVar58[1];
      }
      if (bVar55) {
        bVar55 = false;
        if (!NAN(*pdVar56) && !NAN(*pdVar58)) {
          bVar55 = *pdVar56 == *pdVar58;
        }
        goto LAB_109ed7828;
      }
    }
  }
  else {
    if (param_2 != 0x20) {
      puVar59 = (undefined2 *)param_3[1];
      sVar6 = *(short *)(pdVar56 + 0xb);
      uVar99 = (undefined1)*(undefined2 *)(pdVar56 + 10);
      uVar100 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 10) >> 8);
      uVar101 = (undefined1)*(undefined2 *)(pdVar56 + 9);
      uVar102 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 9) >> 8);
      uVar103 = (undefined1)*(undefined2 *)(pdVar56 + 8);
      uVar104 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 8) >> 8);
      sVar11 = *(short *)(pdVar56 + 7);
      uVar114 = (undefined1)*(undefined2 *)(pdVar56 + 6);
      uVar115 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 6) >> 8);
      uVar1 = CONCAT12(uVar99,sVar6);
      uVar2 = CONCAT13(uVar100,uVar1);
      uVar3 = CONCAT15(uVar102,CONCAT14(uVar101,uVar2));
      uVar116 = (undefined1)*(undefined2 *)(pdVar56 + 5);
      uVar117 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 5) >> 8);
      uVar118 = (undefined1)*(undefined2 *)(pdVar56 + 4);
      uVar119 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 4) >> 8);
      sVar16 = *(short *)(pdVar56 + 3);
      uVar120 = (undefined1)*(undefined2 *)(pdVar56 + 2);
      uVar121 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 2) >> 8);
      uVar122 = (undefined1)*(undefined2 *)(pdVar56 + 1);
      uVar123 = (undefined1)((ushort)*(undefined2 *)(pdVar56 + 1) >> 8);
      uVar124 = (undefined1)*(undefined2 *)pdVar56;
      uVar125 = (undefined1)((ushort)*(undefined2 *)pdVar56 >> 8);
      uVar7 = CONCAT12(uVar114,sVar11);
      uVar8 = CONCAT13(uVar115,uVar7);
      uVar9 = CONCAT15(uVar117,CONCAT14(uVar116,uVar8));
      uVar12 = CONCAT12(uVar120,sVar16);
      uVar13 = CONCAT13(uVar121,uVar12);
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar13));
      uVar131 = CONCAT44((uint)*(ushort *)(pdVar56 + 0xe) << 0xd,
                         (uint)*(ushort *)(pdVar56 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar90 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar108 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar127 = CONCAT44((uVar13 >> 0x10) << 0xd,(uVar12 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      auVar129._0_4_ = (float)uVar127 * 5.192297e+33;
      auVar129._4_4_ = (float)(uVar127 >> 0x20) * 5.192297e+33;
      auVar129._8_4_ = (float)(((ushort)((uint6)uVar14 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar129._12_4_ =
           (float)(((ushort)(CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar135._0_4_ = (float)uVar108 * 5.192297e+33;
      auVar135._4_4_ = (float)(uVar108 >> 0x20) * 5.192297e+33;
      auVar135._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar135._12_4_ =
           (float)(((ushort)(CONCAT17(uVar119,CONCAT16(uVar118,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar136._0_4_ = (float)uVar90 * 5.192297e+33;
      auVar136._4_4_ = (float)(uVar90 >> 0x20) * 5.192297e+33;
      auVar136._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar136._12_4_ =
           (float)(((ushort)(CONCAT17(uVar104,CONCAT16(uVar103,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar132._0_4_ = (float)uVar131 * 5.192297e+33;
      auVar132._4_4_ = (float)(uVar131 >> 0x20) * 5.192297e+33;
      auVar132._8_4_ = (float)((*(ushort *)(pdVar56 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar132._12_4_ = (float)((*(ushort *)(pdVar56 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar57 = -(uint)(65536.0 <= auVar132._4_4_);
      iVar18 = -(uint)(65536.0 <= auVar132._8_4_);
      iVar19 = -(uint)(65536.0 <= auVar132._12_4_);
      iVar22 = -(uint)(65536.0 <= auVar136._4_4_);
      iVar23 = -(uint)(65536.0 <= auVar136._8_4_);
      iVar24 = -(uint)(65536.0 <= auVar136._12_4_);
      iVar28 = -(uint)(65536.0 <= auVar135._4_4_);
      iVar30 = -(uint)(65536.0 <= auVar135._8_4_);
      iVar32 = -(uint)(65536.0 <= auVar135._12_4_);
      iVar38 = -(uint)(65536.0 <= auVar129._4_4_);
      iVar39 = -(uint)(65536.0 <= auVar129._8_4_);
      iVar40 = -(uint)(65536.0 <= auVar129._12_4_);
      uVar4 = CONCAT13(uVar100,CONCAT12(uVar99,sVar6));
      uVar3 = CONCAT15(uVar102,CONCAT14(uVar101,uVar4));
      uVar10 = CONCAT13(uVar115,CONCAT12(uVar114,sVar11));
      uVar9 = CONCAT15(uVar117,CONCAT14(uVar116,uVar10));
      uVar15 = CONCAT13(uVar121,CONCAT12(uVar120,sVar16));
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar15));
      uVar90 = CONCAT17((short)*(ushort *)(pdVar56 + 0xe) >> 0xf,
                        (uint7)(((byte)((short)*(ushort *)(pdVar56 + 0xf) >> 0xf) & 0x80) << 0x18))
               & 0x80ffffffffffffff;
      auVar49[8] = SUB41(auVar129._8_4_,0);
      auVar49._0_8_ =
           CONCAT17((char)((uint)auVar129._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar129._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar129._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar129._4_4_,0),auVar129._0_4_)))) |
           0x7f8000007f800000;
      auVar49[9] = (char)((uint)auVar129._8_4_ >> 8);
      auVar49[10] = (byte)((uint)auVar129._8_4_ >> 0x10) | 0x80;
      auVar49[0xb] = (byte)((uint)auVar129._8_4_ >> 0x18) | 0x7f;
      auVar49[0xc] = SUB41(auVar129._12_4_,0);
      auVar49[0xd] = (char)((uint)auVar129._12_4_ >> 8);
      auVar49[0xe] = (byte)((uint)auVar129._12_4_ >> 0x10) | 0x80;
      auVar49[0xf] = (byte)((uint)auVar129._12_4_ >> 0x18) | 0x7f;
      auVar36[4] = (char)iVar38;
      auVar36._0_4_ = -(uint)(65536.0 <= auVar129._0_4_);
      auVar36[5] = (char)((uint)iVar38 >> 8);
      auVar36[6] = (char)((uint)iVar38 >> 0x10);
      auVar36[7] = (char)((uint)iVar38 >> 0x18);
      auVar36[8] = (char)iVar39;
      auVar36[9] = (char)((uint)iVar39 >> 8);
      auVar36[10] = (char)((uint)iVar39 >> 0x10);
      auVar36[0xb] = (char)((uint)iVar39 >> 0x18);
      auVar36[0xc] = (char)iVar40;
      auVar36[0xd] = (char)((uint)iVar40 >> 8);
      auVar36[0xe] = (char)((uint)iVar40 >> 0x10);
      auVar36[0xf] = (char)((uint)iVar40 >> 0x18);
      auVar129 = auVar129 ^ (auVar129 ^ auVar49) & auVar36;
      auVar48[8] = SUB41(auVar135._8_4_,0);
      auVar48._0_8_ =
           CONCAT17((char)((uint)auVar135._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar135._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar135._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar135._4_4_,0),auVar135._0_4_)))) |
           0x7f8000007f800000;
      auVar48[9] = (char)((uint)auVar135._8_4_ >> 8);
      auVar48[10] = (byte)((uint)auVar135._8_4_ >> 0x10) | 0x80;
      auVar48[0xb] = (byte)((uint)auVar135._8_4_ >> 0x18) | 0x7f;
      auVar48[0xc] = SUB41(auVar135._12_4_,0);
      auVar48[0xd] = (char)((uint)auVar135._12_4_ >> 8);
      auVar48[0xe] = (byte)((uint)auVar135._12_4_ >> 0x10) | 0x80;
      auVar48[0xf] = (byte)((uint)auVar135._12_4_ >> 0x18) | 0x7f;
      auVar25[4] = (char)iVar28;
      auVar25._0_4_ = -(uint)(65536.0 <= auVar135._0_4_);
      auVar25[5] = (char)((uint)iVar28 >> 8);
      auVar25[6] = (char)((uint)iVar28 >> 0x10);
      auVar25[7] = (char)((uint)iVar28 >> 0x18);
      auVar25[8] = (char)iVar30;
      auVar25[9] = (char)((uint)iVar30 >> 8);
      auVar25[10] = (char)((uint)iVar30 >> 0x10);
      auVar25[0xb] = (char)((uint)iVar30 >> 0x18);
      auVar25[0xc] = (char)iVar32;
      auVar25[0xd] = (char)((uint)iVar32 >> 8);
      auVar25[0xe] = (char)((uint)iVar32 >> 0x10);
      auVar25[0xf] = (char)((uint)iVar32 >> 0x18);
      auVar135 = auVar135 ^ (auVar135 ^ auVar48) & auVar25;
      auVar47[8] = SUB41(auVar136._8_4_,0);
      auVar47._0_8_ =
           CONCAT17((char)((uint)auVar136._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar136._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar136._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar136._4_4_,0),auVar136._0_4_)))) |
           0x7f8000007f800000;
      auVar47[9] = (char)((uint)auVar136._8_4_ >> 8);
      auVar47[10] = (byte)((uint)auVar136._8_4_ >> 0x10) | 0x80;
      auVar47[0xb] = (byte)((uint)auVar136._8_4_ >> 0x18) | 0x7f;
      auVar47[0xc] = SUB41(auVar136._12_4_,0);
      auVar47[0xd] = (char)((uint)auVar136._12_4_ >> 8);
      auVar47[0xe] = (byte)((uint)auVar136._12_4_ >> 0x10) | 0x80;
      auVar47[0xf] = (byte)((uint)auVar136._12_4_ >> 0x18) | 0x7f;
      auVar21[4] = (char)iVar22;
      auVar21._0_4_ = -(uint)(65536.0 <= auVar136._0_4_);
      auVar21[5] = (char)((uint)iVar22 >> 8);
      auVar21[6] = (char)((uint)iVar22 >> 0x10);
      auVar21[7] = (char)((uint)iVar22 >> 0x18);
      auVar21[8] = (char)iVar23;
      auVar21[9] = (char)((uint)iVar23 >> 8);
      auVar21[10] = (char)((uint)iVar23 >> 0x10);
      auVar21[0xb] = (char)((uint)iVar23 >> 0x18);
      auVar21[0xc] = (char)iVar24;
      auVar21[0xd] = (char)((uint)iVar24 >> 8);
      auVar21[0xe] = (char)((uint)iVar24 >> 0x10);
      auVar21[0xf] = (char)((uint)iVar24 >> 0x18);
      auVar136 = auVar136 ^ (auVar136 ^ auVar47) & auVar21;
      auVar41[8] = SUB41(auVar132._8_4_,0);
      auVar41._0_8_ =
           CONCAT17((char)((uint)auVar132._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar132._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar132._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar132._4_4_,0),auVar132._0_4_)))) |
           0x7f8000007f800000;
      auVar41[9] = (char)((uint)auVar132._8_4_ >> 8);
      auVar41[10] = (byte)((uint)auVar132._8_4_ >> 0x10) | 0x80;
      auVar41[0xb] = (byte)((uint)auVar132._8_4_ >> 0x18) | 0x7f;
      auVar41[0xc] = SUB41(auVar132._12_4_,0);
      auVar41[0xd] = (char)((uint)auVar132._12_4_ >> 8);
      auVar41[0xe] = (byte)((uint)auVar132._12_4_ >> 0x10) | 0x80;
      auVar41[0xf] = (byte)((uint)auVar132._12_4_ >> 0x18) | 0x7f;
      auVar93[4] = (char)iVar57;
      auVar93._0_4_ = -(uint)(65536.0 <= auVar132._0_4_);
      auVar93[5] = (char)((uint)iVar57 >> 8);
      auVar93[6] = (char)((uint)iVar57 >> 0x10);
      auVar93[7] = (char)((uint)iVar57 >> 0x18);
      auVar93[8] = (char)iVar18;
      auVar93[9] = (char)((uint)iVar18 >> 8);
      auVar93[10] = (char)((uint)iVar18 >> 0x10);
      auVar93[0xb] = (char)((uint)iVar18 >> 0x18);
      auVar93[0xc] = (char)iVar19;
      auVar93[0xd] = (char)((uint)iVar19 >> 8);
      auVar93[0xe] = (char)((uint)iVar19 >> 0x10);
      auVar93[0xf] = (char)((uint)iVar19 >> 0x18);
      auVar132 = auVar132 ^ (auVar132 ^ auVar41) & auVar93;
      fVar89 = (float)CONCAT13(auVar132[3] | (byte)(uVar90 >> 0x18),auVar132._0_3_);
      auVar91._0_8_ =
           CONCAT17(auVar132[7] | (byte)(uVar90 >> 0x38),
                    CONCAT16(auVar132[6],CONCAT15(auVar132[5],CONCAT14(auVar132[4],fVar89))));
      auVar91[8] = auVar132[8];
      auVar91[9] = auVar132[9];
      auVar91[10] = auVar132[10];
      auVar91[0xb] = auVar132[0xb] | (byte)((short)*(ushort *)(pdVar56 + 0xd) >> 0xf) & 0x80;
      auVar92[0xc] = auVar132[0xc];
      auVar92._0_12_ = auVar91;
      auVar92[0xd] = auVar132[0xd];
      auVar92[0xe] = auVar132[0xe];
      auVar92[0xf] = auVar132[0xf] | (byte)((short)*(ushort *)(pdVar56 + 0xc) >> 0xf) & 0x80;
      fVar126 = (float)CONCAT13(auVar129[3] | (byte)(sVar16 >> 0xf) & 0x80,auVar129._0_3_);
      auVar128._0_8_ =
           CONCAT17(auVar129[7] | (byte)((int)uVar15 >> 0x1f) & 0x80,
                    CONCAT16(auVar129[6],CONCAT15(auVar129[5],CONCAT14(auVar129[4],fVar126))));
      auVar128[8] = auVar129[8];
      auVar128[9] = auVar129[9];
      auVar128[10] = auVar129[10];
      auVar128[0xb] = auVar129[0xb] | (byte)((int6)uVar14 >> 0x2f) & 0x80;
      auVar130[0xc] = auVar129[0xc];
      auVar130._0_12_ = auVar128;
      auVar130[0xd] = auVar129[0xd];
      auVar130[0xe] = auVar129[0xe];
      auVar130[0xf] =
           auVar129[0xf] | (byte)((long)CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x3f) & 0x80;
      sVar16 = puVar59[0x1c];
      uVar120 = (undefined1)puVar59[0x18];
      uVar121 = (undefined1)((ushort)puVar59[0x18] >> 8);
      uVar122 = (undefined1)puVar59[0x14];
      uVar123 = (undefined1)((ushort)puVar59[0x14] >> 8);
      uVar124 = (undefined1)puVar59[0x10];
      uVar125 = (undefined1)((ushort)puVar59[0x10] >> 8);
      uVar1 = CONCAT12(uVar120,sVar16);
      uVar2 = CONCAT13(uVar121,uVar1);
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar2));
      sVar37 = puVar59[0xc];
      uVar149 = (undefined1)puVar59[8];
      uVar150 = (undefined1)((ushort)puVar59[8] >> 8);
      uVar151 = (undefined1)puVar59[4];
      uVar152 = (undefined1)((ushort)puVar59[4] >> 8);
      uVar153 = (undefined1)*puVar59;
      uVar154 = (undefined1)((ushort)*puVar59 >> 8);
      uVar7 = CONCAT12(uVar149,sVar37);
      uVar8 = CONCAT13(uVar150,uVar7);
      uVar34 = CONCAT15(uVar152,CONCAT14(uVar151,uVar8));
      uVar90 = CONCAT44((uint)(ushort)puVar59[0x38] << 0xd,(uint)(ushort)puVar59[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar43 = (float)((uVar7 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar44 = (float)((uVar8 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar155 = SUB41(fVar44,0);
      uVar156 = (undefined1)((uint)fVar44 >> 8);
      uVar157 = (undefined1)((uint)fVar44 >> 0x10);
      uVar158 = (undefined1)((uint)fVar44 >> 0x18);
      fVar45 = (float)(((ushort)((uint6)uVar34 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar159 = SUB41(fVar45,0);
      uVar160 = (undefined1)((uint)fVar45 >> 8);
      bVar161 = (byte)((uint)fVar45 >> 0x10);
      bVar162 = (byte)((uint)fVar45 >> 0x18);
      fVar46 = (float)(((ushort)(CONCAT17(uVar154,CONCAT16(uVar153,uVar34)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar163 = SUB41(fVar46,0);
      uVar164 = (undefined1)((uint)fVar46 >> 8);
      bVar165 = (byte)((uint)fVar46 >> 0x10);
      bVar166 = (byte)((uint)fVar46 >> 0x18);
      fVar27 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar29 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar138 = SUB41(fVar29,0);
      uVar139 = (undefined1)((uint)fVar29 >> 8);
      uVar140 = (undefined1)((uint)fVar29 >> 0x10);
      uVar141 = (undefined1)((uint)fVar29 >> 0x18);
      fVar31 = (float)(((ushort)((uint6)uVar14 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar142 = SUB41(fVar31,0);
      uVar143 = (undefined1)((uint)fVar31 >> 8);
      bVar106 = (byte)((uint)fVar31 >> 0x10);
      bVar144 = (byte)((uint)fVar31 >> 0x18);
      fVar33 = (float)(((ushort)(CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar145 = SUB41(fVar33,0);
      uVar146 = (undefined1)((uint)fVar33 >> 8);
      bVar147 = (byte)((uint)fVar33 >> 0x10);
      bVar148 = (byte)((uint)fVar33 >> 0x18);
      fVar67 = (float)(((ushort)puVar59[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar94 = (float)(((ushort)puVar59[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar99 = SUB41(fVar94,0);
      uVar100 = (undefined1)((uint)fVar94 >> 8);
      uVar101 = (undefined1)((uint)fVar94 >> 0x10);
      uVar102 = (undefined1)((uint)fVar94 >> 0x18);
      fVar107 = (float)(((ushort)puVar59[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar114 = SUB41(fVar107,0);
      uVar115 = (undefined1)((uint)fVar107 >> 8);
      bVar62 = (byte)((uint)fVar107 >> 0x10);
      bVar65 = (byte)((uint)fVar107 >> 0x18);
      fVar20 = (float)(((ushort)puVar59[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar116 = SUB41(fVar20,0);
      uVar117 = (undefined1)((uint)fVar20 >> 8);
      bVar66 = (byte)((uint)fVar20 >> 0x10);
      bVar105 = (byte)((uint)fVar20 >> 0x18);
      auVar72._0_4_ = (float)uVar90 * 5.192297e+33;
      auVar72._4_4_ = (float)(uVar90 >> 0x20) * 5.192297e+33;
      auVar72._8_4_ = (float)(((ushort)puVar59[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar72._12_4_ = (float)(((ushort)puVar59[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar137._0_4_ = -(uint)(65536.0 <= auVar72._0_4_);
      auVar137._4_4_ = -(uint)(65536.0 <= auVar72._4_4_);
      auVar137._8_4_ = -(uint)(65536.0 <= auVar72._8_4_);
      auVar137._12_4_ = -(uint)(65536.0 <= auVar72._12_4_);
      iVar57 = -(uint)(65536.0 <= fVar94);
      iVar18 = -(uint)(65536.0 <= fVar20);
      iVar19 = -(uint)(65536.0 <= fVar29);
      iVar22 = -(uint)(65536.0 <= fVar33);
      auVar96._0_4_ = -(uint)(65536.0 <= fVar43);
      auVar96._4_4_ = -(uint)(65536.0 <= fVar44);
      auVar96._8_4_ = -(uint)(65536.0 <= fVar45);
      auVar96._12_4_ = -(uint)(65536.0 <= fVar46);
      auVar110._0_8_ =
           CONCAT17(uVar158,CONCAT16(uVar157,CONCAT15(uVar156,CONCAT14(uVar155,fVar43)))) |
           0x7f8000007f800000;
      auVar110[8] = uVar159;
      auVar110[9] = uVar160;
      auVar110[10] = bVar161 | 0x80;
      auVar110[0xb] = bVar162 | 0x7f;
      auVar110[0xc] = uVar163;
      auVar110[0xd] = uVar164;
      auVar110[0xe] = bVar165 | 0x80;
      auVar110[0xf] = bVar166 | 0x7f;
      uVar15 = CONCAT13(uVar121,CONCAT12(uVar120,sVar16));
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar15));
      uVar35 = CONCAT13(uVar150,CONCAT12(uVar149,sVar37));
      uVar34 = CONCAT15(uVar152,CONCAT14(uVar151,uVar35));
      uVar90 = CONCAT17((short)puVar59[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar59[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar42[4] = uVar155;
      auVar42._0_4_ = fVar43;
      auVar42[5] = uVar156;
      auVar42[6] = uVar157;
      auVar42[7] = uVar158;
      auVar42[8] = uVar159;
      auVar42[9] = uVar160;
      auVar42[10] = bVar161;
      auVar42[0xb] = bVar162;
      auVar42[0xc] = uVar163;
      auVar42[0xd] = uVar164;
      auVar42[0xe] = bVar165;
      auVar42[0xf] = bVar166;
      auVar97[4] = uVar155;
      auVar97._0_4_ = fVar43;
      auVar97[5] = uVar156;
      auVar97[6] = uVar157;
      auVar97[7] = uVar158;
      auVar97[8] = uVar159;
      auVar97[9] = uVar160;
      auVar97[10] = bVar161;
      auVar97[0xb] = bVar162;
      auVar97[0xc] = uVar163;
      auVar97[0xd] = uVar164;
      auVar97[0xe] = bVar165;
      auVar97[0xf] = bVar166;
      auVar97 = auVar97 ^ (auVar42 ^ auVar110) & auVar96;
      auVar111[0xc] = (char)iVar22;
      auVar111._8_4_ = -(uint)(65536.0 <= fVar31);
      auVar111[0xd] = (char)((uint)iVar22 >> 8);
      auVar111[0xe] = (char)((uint)iVar22 >> 0x10);
      auVar111[0xf] = (char)((uint)iVar22 >> 0x18);
      auVar111[4] = (char)iVar19;
      auVar111._0_4_ = -(uint)(65536.0 <= fVar27);
      auVar111[5] = (char)((uint)iVar19 >> 8);
      auVar111[6] = (char)((uint)iVar19 >> 0x10);
      auVar111[7] = (char)((uint)iVar19 >> 0x18);
      auVar26[4] = uVar138;
      auVar26._0_4_ = fVar27;
      auVar26[5] = uVar139;
      auVar26[6] = uVar140;
      auVar26[7] = uVar141;
      auVar26[8] = uVar142;
      auVar26[9] = uVar143;
      auVar26[10] = bVar106;
      auVar26[0xb] = bVar144;
      auVar26[0xc] = uVar145;
      auVar26[0xd] = uVar146;
      auVar26[0xe] = bVar147;
      auVar26[0xf] = bVar148;
      auVar52[8] = uVar142;
      auVar52._0_8_ =
           CONCAT17(uVar141,CONCAT16(uVar140,CONCAT15(uVar139,CONCAT14(uVar138,fVar27)))) |
           0x7f8000007f800000;
      auVar52[9] = uVar143;
      auVar52[10] = bVar106 | 0x80;
      auVar52[0xb] = bVar144 | 0x7f;
      auVar52[0xc] = uVar145;
      auVar52[0xd] = uVar146;
      auVar52[0xe] = bVar147 | 0x80;
      auVar52[0xf] = bVar148 | 0x7f;
      auVar112[4] = uVar138;
      auVar112._0_4_ = fVar27;
      auVar112[5] = uVar139;
      auVar112[6] = uVar140;
      auVar112[7] = uVar141;
      auVar112[8] = uVar142;
      auVar112[9] = uVar143;
      auVar112[10] = bVar106;
      auVar112[0xb] = bVar144;
      auVar112[0xc] = uVar145;
      auVar112[0xd] = uVar146;
      auVar112[0xe] = bVar147;
      auVar112[0xf] = bVar148;
      auVar112 = auVar112 ^ (auVar26 ^ auVar52) & auVar111;
      auVar133[0xc] = (char)iVar18;
      auVar133._8_4_ = -(uint)(65536.0 <= fVar107);
      auVar133[0xd] = (char)((uint)iVar18 >> 8);
      auVar133[0xe] = (char)((uint)iVar18 >> 0x10);
      auVar133[0xf] = (char)((uint)iVar18 >> 0x18);
      auVar133[4] = (char)iVar57;
      auVar133._0_4_ = -(uint)(65536.0 <= fVar67);
      auVar133[5] = (char)((uint)iVar57 >> 8);
      auVar133[6] = (char)((uint)iVar57 >> 0x10);
      auVar133[7] = (char)((uint)iVar57 >> 0x18);
      auVar17[4] = uVar99;
      auVar17._0_4_ = fVar67;
      auVar17[5] = uVar100;
      auVar17[6] = uVar101;
      auVar17[7] = uVar102;
      auVar17[8] = uVar114;
      auVar17[9] = uVar115;
      auVar17[10] = bVar62;
      auVar17[0xb] = bVar65;
      auVar17[0xc] = uVar116;
      auVar17[0xd] = uVar117;
      auVar17[0xe] = bVar66;
      auVar17[0xf] = bVar105;
      auVar51[8] = uVar114;
      auVar51._0_8_ =
           CONCAT17(uVar102,CONCAT16(uVar101,CONCAT15(uVar100,CONCAT14(uVar99,fVar67)))) |
           0x7f8000007f800000;
      auVar51[9] = uVar115;
      auVar51[10] = bVar62 | 0x80;
      auVar51[0xb] = bVar65 | 0x7f;
      auVar51[0xc] = uVar116;
      auVar51[0xd] = uVar117;
      auVar51[0xe] = bVar66 | 0x80;
      auVar51[0xf] = bVar105 | 0x7f;
      auVar134[4] = uVar99;
      auVar134._0_4_ = fVar67;
      auVar134[5] = uVar100;
      auVar134[6] = uVar101;
      auVar134[7] = uVar102;
      auVar134[8] = uVar114;
      auVar134[9] = uVar115;
      auVar134[10] = bVar62;
      auVar134[0xb] = bVar65;
      auVar134[0xc] = uVar116;
      auVar134[0xd] = uVar117;
      auVar134[0xe] = bVar66;
      auVar134[0xf] = bVar105;
      auVar134 = auVar134 ^ (auVar17 ^ auVar51) & auVar133;
      auVar50[8] = SUB41(auVar72._8_4_,0);
      auVar50._0_8_ =
           CONCAT17((char)((uint)auVar72._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar72._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar72._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar72._4_4_,0),auVar72._0_4_)))) |
           0x7f8000007f800000;
      auVar50[9] = (char)((uint)auVar72._8_4_ >> 8);
      auVar50[10] = (byte)((uint)auVar72._8_4_ >> 0x10) | 0x80;
      auVar50[0xb] = (byte)((uint)auVar72._8_4_ >> 0x18) | 0x7f;
      auVar50[0xc] = SUB41(auVar72._12_4_,0);
      auVar50[0xd] = (char)((uint)auVar72._12_4_ >> 8);
      auVar50[0xe] = (byte)((uint)auVar72._12_4_ >> 0x10) | 0x80;
      auVar50[0xf] = (byte)((uint)auVar72._12_4_ >> 0x18) | 0x7f;
      auVar72 = auVar72 ^ (auVar72 ^ auVar50) & auVar137;
      fVar67 = (float)CONCAT13(auVar72[3] | (byte)((short)puVar59[0x3c] >> 0xf) & 0x80,auVar72._0_3_
                              );
      auVar69._0_8_ =
           CONCAT17(auVar72[7] | (byte)((short)puVar59[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar72[6],CONCAT15(auVar72[5],CONCAT14(auVar72[4],fVar67))));
      auVar69[8] = auVar72[8];
      auVar69[9] = auVar72[9];
      auVar69[10] = auVar72[10];
      auVar69[0xb] = auVar72[0xb] | (byte)((short)puVar59[0x34] >> 0xf) & 0x80;
      auVar73[0xc] = auVar72[0xc];
      auVar73._0_12_ = auVar69;
      auVar73[0xd] = auVar72[0xd];
      auVar73[0xe] = auVar72[0xe];
      auVar73[0xf] = auVar72[0xf] | (byte)((short)puVar59[0x30] >> 0xf) & 0x80;
      fVar107 = (float)CONCAT13(auVar112[3] | (byte)(sVar16 >> 0xf) & 0x80,auVar112._0_3_);
      auVar109._0_8_ =
           CONCAT17(auVar112[7] | (byte)((int)uVar15 >> 0x1f) & 0x80,
                    CONCAT16(auVar112[6],CONCAT15(auVar112[5],CONCAT14(auVar112[4],fVar107))));
      auVar109[8] = auVar112[8];
      auVar109[9] = auVar112[9];
      auVar109[10] = auVar112[10];
      auVar109[0xb] = auVar112[0xb] | (byte)((int6)uVar14 >> 0x2f) & 0x80;
      auVar113[0xc] = auVar112[0xc];
      auVar113._0_12_ = auVar109;
      auVar113[0xd] = auVar112[0xd];
      auVar113[0xe] = auVar112[0xe];
      auVar113[0xf] =
           auVar112[0xf] | (byte)((long)CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x3f) & 0x80;
      fVar94 = (float)CONCAT13(auVar97[3] | (byte)(sVar37 >> 0xf) & 0x80,auVar97._0_3_);
      auVar95._0_8_ =
           CONCAT17(auVar97[7] | (byte)((int)uVar35 >> 0x1f) & 0x80,
                    CONCAT16(auVar97[6],CONCAT15(auVar97[5],CONCAT14(auVar97[4],fVar94))));
      auVar95[8] = auVar97[8];
      auVar95[9] = auVar97[9];
      auVar95[10] = auVar97[10];
      auVar95[0xb] = auVar97[0xb] | (byte)((int6)uVar34 >> 0x2f) & 0x80;
      auVar98[0xc] = auVar97[0xc];
      auVar98._0_12_ = auVar95;
      auVar98[0xd] = auVar97[0xd];
      auVar98[0xe] = auVar97[0xe];
      auVar98[0xf] = auVar97[0xf] |
                     (byte)((long)CONCAT17(uVar154,CONCAT16(uVar153,uVar34)) >> 0x3f) & 0x80;
      bVar105 = -((float)CONCAT13(auVar136[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,auVar136._8_3_)
                 == (float)CONCAT13(auVar134[0xb] | (byte)((short)puVar59[0x24] >> 0xf) & 0x80,
                                    auVar134._8_3_));
      bVar106 = -((float)CONCAT13(auVar136[0xf] |
                                  (byte)((long)CONCAT17(uVar104,CONCAT16(uVar103,uVar3)) >> 0x3f) &
                                  0x80,auVar136._12_3_) ==
                 (float)CONCAT13(auVar134[0xf] | (byte)((short)puVar59[0x20] >> 0xf) & 0x80,
                                 auVar134._12_3_));
      cVar61 = -(fVar89 == fVar67);
      bVar62 = -((float)((ulong)auVar91._0_8_ >> 0x20) == (float)((ulong)auVar69._0_8_ >> 0x20));
      cVar63 = -(auVar91._8_4_ == auVar69._8_4_);
      cVar64 = -(auVar92._12_4_ == auVar73._12_4_);
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar136[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar136._4_3_) ==
                               (float)CONCAT13(auVar134[7] | (byte)(uVar90 >> 0x38),auVar134._4_3_))
                              ,-(uint)((float)CONCAT13(auVar136[3] | (byte)(sVar6 >> 0xf) & 0x80,
                                                       auVar136._0_3_) ==
                                      (float)CONCAT13(auVar134[3] | (byte)(uVar90 >> 0x18),
                                                      auVar134._0_3_))) & 0xffff0000ffff;
      bVar65 = (byte)uVar5;
      bVar66 = (byte)(uVar5 >> 0x20);
      auVar74._0_8_ =
           CONCAT17(bVar106,CONCAT16(bVar105,CONCAT15(bVar66,CONCAT14(bVar65,CONCAT13(cVar64,
                                                  CONCAT12(cVar63,CONCAT11(bVar62,cVar61))))))) &
           0x8040201008040201;
      auVar74[8] = -((float)CONCAT13(auVar135[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar135._0_3_) ==
                    fVar107) & 1;
      auVar74[9] = -((float)CONCAT13(auVar135[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,auVar135._4_3_
                                    ) == (float)((ulong)auVar109._0_8_ >> 0x20)) & 2;
      auVar74[10] = -((float)CONCAT13(auVar135[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80,
                                      auVar135._8_3_) == auVar109._8_4_) & 4;
      auVar74[0xb] = -((float)CONCAT13(auVar135[0xf] |
                                       (byte)((long)CONCAT17(uVar119,CONCAT16(uVar118,uVar9)) >>
                                             0x3f) & 0x80,auVar135._12_3_) == auVar113._12_4_) & 8;
      auVar74[0xc] = -(fVar126 == fVar94) & 0x10;
      auVar74[0xd] = -((float)((ulong)auVar128._0_8_ >> 0x20) ==
                      (float)((ulong)auVar95._0_8_ >> 0x20)) & 0x20;
      auVar74[0xe] = -(auVar128._8_4_ == auVar95._8_4_) & 0x40;
      auVar74[0xf] = -(auVar130._12_4_ == auVar98._12_4_) & 0x80;
      auVar93 = NEON_ext(auVar74,auVar74,8,1);
      auVar53._1_13_ = auVar74._3_13_;
      auVar53[0] = bVar62 & 2;
      auVar77._5_11_ = auVar74._5_11_;
      auVar77._0_5_ = CONCAT14(cVar63,auVar53._0_4_ << 0x10) & 0x4ffffffff;
      auVar79._7_9_ = auVar74._7_9_;
      auVar79._0_7_ = CONCAT16(cVar64,auVar77._0_6_) & 0x8ffffffffffff;
      auVar81._9_7_ = auVar74._9_7_;
      auVar81._0_8_ = auVar79._0_8_;
      auVar81[8] = bVar65 & 0x10;
      auVar83._11_5_ = auVar74._11_5_;
      auVar83._0_10_ = auVar81._0_10_;
      auVar83[10] = bVar66 & 0x20;
      auVar85._13_3_ = auVar74._13_3_;
      auVar85._0_12_ = auVar83._0_12_;
      auVar85[0xc] = bVar105 & 0x40;
      auVar87._0_14_ = auVar85._0_14_;
      auVar87[0xe] = bVar106 & 0x80;
      auVar87[0xf] = auVar74[0xf];
      auVar75._2_14_ = auVar87._2_14_;
      auVar75._0_2_ = CONCAT11(auVar93[0],cVar61) & 0xff01;
      auVar76._4_12_ = auVar87._4_12_;
      auVar76._0_4_ = CONCAT13(auVar93[1],auVar75._0_3_);
      auVar78._6_10_ = auVar87._6_10_;
      auVar78._0_6_ = CONCAT15(auVar93[2],auVar76._0_5_);
      auVar80._8_8_ = auVar87._8_8_;
      auVar80._0_8_ = CONCAT17(auVar93[3],auVar78._0_7_);
      auVar82._10_6_ = auVar87._10_6_;
      auVar82._0_10_ = CONCAT19(auVar93[4],auVar80._0_9_);
      auVar84._12_4_ = auVar87._12_4_;
      auVar70._0_11_ = auVar82._0_11_;
      auVar70[0xb] = auVar93[5];
      auVar84._0_12_ = auVar70;
      auVar86._14_2_ = auVar87._14_2_;
      auVar71._0_13_ = auVar84._0_13_;
      auVar71[0xd] = auVar93[6];
      auVar86._0_14_ = auVar71;
      auVar88._0_15_ = auVar86._0_15_;
      auVar88[0xf] = auVar93[7];
      iVar57 = -(uint)((ushort)(auVar75._0_2_ + (short)((uint)auVar76._0_4_ >> 0x10) +
                                (short)((uint6)auVar78._0_6_ >> 0x20) +
                                (short)((ulong)auVar80._0_8_ >> 0x30) +
                                (short)((unkuint10)auVar82._0_10_ >> 0x40) + auVar70._10_2_ +
                                auVar71._12_2_ + auVar88._14_2_) == -1);
      goto LAB_109ed782c;
    }
    pfVar60 = (float *)param_3[1];
    if (*(float *)(pdVar56 + 0xf) == pfVar60[0x1e]) {
      iVar57 = 0;
      if (((((*(float *)(pdVar56 + 0xe) != pfVar60[0x1c]) ||
            (*(float *)(pdVar56 + 0xd) != pfVar60[0x1a])) ||
           (*(float *)(pdVar56 + 0xc) != pfVar60[0x18])) ||
          ((((*(float *)(pdVar56 + 0xb) != pfVar60[0x16] ||
             (*(float *)(pdVar56 + 10) != pfVar60[0x14])) ||
            ((*(float *)(pdVar56 + 9) != pfVar60[0x12] ||
             ((*(float *)(pdVar56 + 8) != pfVar60[0x10] || (*(float *)(pdVar56 + 7) != pfVar60[0xe])
              ))))) || (*(float *)(pdVar56 + 6) != pfVar60[0xc])))) ||
         ((((*(float *)(pdVar56 + 5) != pfVar60[10] || (*(float *)(pdVar56 + 4) != pfVar60[8])) ||
           (*(float *)(pdVar56 + 3) != pfVar60[6])) ||
          ((*(float *)(pdVar56 + 2) != pfVar60[4] || (*(float *)(pdVar56 + 1) != pfVar60[2]))))))
      goto LAB_109ed782c;
      bVar55 = *(float *)pdVar56 == *pfVar60;
LAB_109ed7828:
      iVar57 = -(uint)bVar55;
      goto LAB_109ed782c;
    }
  }
  iVar57 = 0;
LAB_109ed782c:
  *param_1 = iVar57;
  return;
}



/* Entry: 109ed7834; end: 109ed7e6b;  */

void FUN_109ed7834(int *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pdVar4 = (double *)*param_3;
  if (param_2 == 0x40) {
    uVar3 = 0;
    if (*pdVar4 == *(double *)param_3[1]) {
      uVar3 = (uint)(pdVar4[1] == ((double *)param_3[1])[1]);
    }
  }
  else {
    if (param_2 == 0x20) {
      fVar6 = ((float *)param_3[1])[2];
      bVar1 = false;
      if ((*(float *)pdVar4 == *(float *)param_3[1]) &&
         (bVar1 = false, !NAN(*(float *)(pdVar4 + 1)) && !NAN(fVar6))) {
        bVar1 = *(float *)(pdVar4 + 1) == fVar6;
      }
    }
    else {
      fVar6 = (float)(((int)*(short *)pdVar4 & 0x7fffU) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar6) {
        fVar6 = (float)((uint)fVar6 | 0x7f800000);
      }
      fVar7 = (float)(((int)*(short *)(pdVar4 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar7) {
        fVar7 = (float)((uint)fVar7 | 0x7f800000);
      }
      fVar7 = (float)((uint)fVar7 | (int)*(short *)(pdVar4 + 1) & 0x80000000U);
      uVar3 = (uint)*(short *)param_3[1];
      fVar8 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar8) {
        fVar8 = (float)((uint)fVar8 | 0x7f800000);
      }
      uVar2 = (uint)((short *)param_3[1])[4];
      fVar5 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar5) {
        fVar5 = (float)((uint)fVar5 | 0x7f800000);
      }
      fVar5 = (float)((uint)fVar5 | uVar2 & 0x80000000);
      bVar1 = false;
      if (((float)((uint)fVar6 | (int)*(short *)pdVar4 & 0x80000000U) ==
           (float)((uint)fVar8 | uVar3 & 0x80000000)) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5))
         ) {
        bVar1 = fVar7 == fVar5;
      }
    }
    uVar3 = (uint)bVar1;
  }
  *param_1 = -uVar3;
  return;
}



/* Entry: 109ed7e6c; end: 109ed80d3;  */

void FUN_109ed7e6c(int *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  ushort uVar6;
  short sVar7;
  uint3 uVar8;
  uint uVar9;
  undefined6 uVar10;
  undefined4 uVar11;
  uint6 uVar12;
  short sVar13;
  undefined1 auVar14 [16];
  undefined6 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  short sVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  bool bVar32;
  bool bVar33;
  double *pdVar34;
  int iVar35;
  float *pfVar36;
  undefined2 *puVar37;
  double *pdVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar51;
  ulong uVar52;
  undefined1 auVar54 [16];
  float fVar56;
  ulong uVar57;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  byte bVar68;
  byte bVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  byte bVar72;
  byte bVar73;
  undefined1 auVar53 [12];
  undefined1 auVar55 [16];
  undefined1 auVar58 [12];
  undefined1 auVar61 [16];
  
  pdVar34 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar38 = (double *)param_3[1];
    if (pdVar34[7] != pdVar38[7]) goto LAB_109ed7f6c;
    iVar35 = 0;
    uVar6 = NEON_uminv(CONCAT17((char)(-(ulong)(pdVar34[6] == pdVar38[6]) >> 8),
                                CONCAT16((char)-(ulong)(pdVar34[6] == pdVar38[6]),
                                         CONCAT15((char)(-(ulong)(pdVar34[5] == pdVar38[5]) >> 8),
                                                  CONCAT14((char)-(ulong)(pdVar34[5] == pdVar38[5]),
                                                           CONCAT13((char)(-(ulong)(pdVar34[4] ==
                                                                                   pdVar38[4]) >> 8)
                                                                    ,CONCAT12((char)-(ulong)(pdVar34
                                                  [4] == pdVar38[4]),
                                                  -(ushort)(pdVar34[3] == pdVar38[3]))))))),2);
    if ((uVar6 & 1) == 0) goto LAB_109ed80c8;
    bVar32 = false;
    if ((pdVar34[2] == pdVar38[2]) && (bVar32 = false, !NAN(pdVar34[1]) && !NAN(pdVar38[1]))) {
      bVar32 = pdVar34[1] == pdVar38[1];
    }
    if (!bVar32) goto LAB_109ed80c8;
    bVar32 = *pdVar34 == *pdVar38;
  }
  else {
    if (param_2 == 0x20) {
      pfVar36 = (float *)param_3[1];
      if (*(float *)(pdVar34 + 7) == pfVar36[0xe]) {
        bVar32 = false;
        if ((*(float *)(pdVar34 + 6) == pfVar36[0xc]) &&
           (bVar32 = false, !NAN(*(float *)(pdVar34 + 5)) && !NAN(pfVar36[10]))) {
          bVar32 = *(float *)(pdVar34 + 5) == pfVar36[10];
        }
        bVar33 = false;
        if ((bVar32) && (bVar33 = false, !NAN(*(float *)(pdVar34 + 4)) && !NAN(pfVar36[8]))) {
          bVar33 = *(float *)(pdVar34 + 4) == pfVar36[8];
        }
        bVar32 = false;
        if ((bVar33) && (bVar32 = false, !NAN(*(float *)(pdVar34 + 3)) && !NAN(pfVar36[6]))) {
          bVar32 = *(float *)(pdVar34 + 3) == pfVar36[6];
        }
        bVar33 = false;
        if ((bVar32) && (bVar33 = false, !NAN(*(float *)(pdVar34 + 2)) && !NAN(pfVar36[4]))) {
          bVar33 = *(float *)(pdVar34 + 2) == pfVar36[4];
        }
        bVar32 = false;
        if ((bVar33) && (bVar32 = false, !NAN(*(float *)(pdVar34 + 1)) && !NAN(pfVar36[2]))) {
          bVar32 = *(float *)(pdVar34 + 1) == pfVar36[2];
        }
        if (bVar32) {
          bVar32 = *(float *)pdVar34 == *pfVar36;
          goto LAB_109ed80c4;
        }
      }
LAB_109ed7f6c:
      iVar35 = 0;
      goto LAB_109ed80c8;
    }
    puVar37 = (undefined2 *)param_3[1];
    sVar7 = *(short *)(pdVar34 + 7);
    uVar39 = (undefined1)*(undefined2 *)(pdVar34 + 6);
    uVar40 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 6) >> 8);
    uVar41 = (undefined1)*(undefined2 *)(pdVar34 + 5);
    uVar42 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 5) >> 8);
    uVar43 = (undefined1)*(undefined2 *)(pdVar34 + 4);
    uVar44 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 4) >> 8);
    sVar13 = *(short *)(pdVar34 + 3);
    uVar45 = (undefined1)*(undefined2 *)(pdVar34 + 2);
    uVar46 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 2) >> 8);
    uVar1 = CONCAT12(uVar39,sVar7);
    uVar2 = CONCAT13(uVar40,uVar1);
    uVar3 = CONCAT15(uVar42,CONCAT14(uVar41,uVar2));
    uVar47 = (undefined1)*(undefined2 *)(pdVar34 + 1);
    uVar48 = (undefined1)((ushort)*(undefined2 *)(pdVar34 + 1) >> 8);
    uVar49 = (undefined1)*(undefined2 *)pdVar34;
    uVar50 = (undefined1)((ushort)*(undefined2 *)pdVar34 >> 8);
    uVar8 = CONCAT12(uVar45,sVar13);
    uVar9 = CONCAT13(uVar46,uVar8);
    uVar10 = CONCAT15(uVar48,CONCAT14(uVar47,uVar9));
    uVar52 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    uVar57 = CONCAT44((uVar9 >> 0x10) << 0xd,(uVar8 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    auVar59._0_4_ = (float)uVar57 * 5.192297e+33;
    auVar59._4_4_ = (float)(uVar57 >> 0x20) * 5.192297e+33;
    auVar59._8_4_ = (float)(((ushort)((uint6)uVar10 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar59._12_4_ =
         (float)(((ushort)(CONCAT17(uVar50,CONCAT16(uVar49,uVar10)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    auVar54._0_4_ = (float)uVar52 * 5.192297e+33;
    auVar54._4_4_ = (float)(uVar52 >> 0x20) * 5.192297e+33;
    auVar54._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._12_4_ =
         (float)(((ushort)(CONCAT17(uVar44,CONCAT16(uVar43,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    iVar35 = -(uint)(65536.0 <= auVar54._4_4_);
    iVar19 = -(uint)(65536.0 <= auVar54._8_4_);
    iVar20 = -(uint)(65536.0 <= auVar54._12_4_);
    iVar23 = -(uint)(65536.0 <= auVar59._4_4_);
    iVar24 = -(uint)(65536.0 <= auVar59._8_4_);
    iVar26 = -(uint)(65536.0 <= auVar59._12_4_);
    uVar4 = CONCAT13(uVar40,CONCAT12(uVar39,sVar7));
    uVar3 = CONCAT15(uVar42,CONCAT14(uVar41,uVar4));
    uVar11 = CONCAT13(uVar46,CONCAT12(uVar45,sVar13));
    uVar10 = CONCAT15(uVar48,CONCAT14(uVar47,uVar11));
    auVar31[8] = SUB41(auVar59._8_4_,0);
    auVar31._0_8_ =
         CONCAT17((char)((uint)auVar59._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar59._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar59._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar59._4_4_,0),auVar59._0_4_)))) |
         0x7f8000007f800000;
    auVar31[9] = (char)((uint)auVar59._8_4_ >> 8);
    auVar31[10] = (byte)((uint)auVar59._8_4_ >> 0x10) | 0x80;
    auVar31[0xb] = (byte)((uint)auVar59._8_4_ >> 0x18) | 0x7f;
    auVar31[0xc] = SUB41(auVar59._12_4_,0);
    auVar31[0xd] = (char)((uint)auVar59._12_4_ >> 8);
    auVar31[0xe] = (byte)((uint)auVar59._12_4_ >> 0x10) | 0x80;
    auVar31[0xf] = (byte)((uint)auVar59._12_4_ >> 0x18) | 0x7f;
    auVar21[4] = (char)iVar23;
    auVar21._0_4_ = -(uint)(65536.0 <= auVar59._0_4_);
    auVar21[5] = (char)((uint)iVar23 >> 8);
    auVar21[6] = (char)((uint)iVar23 >> 0x10);
    auVar21[7] = (char)((uint)iVar23 >> 0x18);
    auVar21[8] = (char)iVar24;
    auVar21[9] = (char)((uint)iVar24 >> 8);
    auVar21[10] = (char)((uint)iVar24 >> 0x10);
    auVar21[0xb] = (char)((uint)iVar24 >> 0x18);
    auVar21[0xc] = (char)iVar26;
    auVar21[0xd] = (char)((uint)iVar26 >> 8);
    auVar21[0xe] = (char)((uint)iVar26 >> 0x10);
    auVar21[0xf] = (char)((uint)iVar26 >> 0x18);
    auVar59 = auVar59 ^ (auVar59 ^ auVar31) & auVar21;
    auVar29[8] = SUB41(auVar54._8_4_,0);
    auVar29._0_8_ =
         CONCAT17((char)((uint)auVar54._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar54._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar54._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar54._4_4_,0),auVar54._0_4_)))) |
         0x7f8000007f800000;
    auVar29[9] = (char)((uint)auVar54._8_4_ >> 8);
    auVar29[10] = (byte)((uint)auVar54._8_4_ >> 0x10) | 0x80;
    auVar29[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) | 0x7f;
    auVar29[0xc] = SUB41(auVar54._12_4_,0);
    auVar29[0xd] = (char)((uint)auVar54._12_4_ >> 8);
    auVar29[0xe] = (byte)((uint)auVar54._12_4_ >> 0x10) | 0x80;
    auVar29[0xf] = (byte)((uint)auVar54._12_4_ >> 0x18) | 0x7f;
    auVar17[4] = (char)iVar35;
    auVar17._0_4_ = -(uint)(65536.0 <= auVar54._0_4_);
    auVar17[5] = (char)((uint)iVar35 >> 8);
    auVar17[6] = (char)((uint)iVar35 >> 0x10);
    auVar17[7] = (char)((uint)iVar35 >> 0x18);
    auVar17[8] = (char)iVar19;
    auVar17[9] = (char)((uint)iVar19 >> 8);
    auVar17[10] = (char)((uint)iVar19 >> 0x10);
    auVar17[0xb] = (char)((uint)iVar19 >> 0x18);
    auVar17[0xc] = (char)iVar20;
    auVar17[0xd] = (char)((uint)iVar20 >> 8);
    auVar17[0xe] = (char)((uint)iVar20 >> 0x10);
    auVar17[0xf] = (char)((uint)iVar20 >> 0x18);
    auVar54 = auVar54 ^ (auVar54 ^ auVar29) & auVar17;
    sVar18 = puVar37[0xc];
    uVar39 = (undefined1)puVar37[8];
    uVar40 = (undefined1)((ushort)puVar37[8] >> 8);
    uVar41 = (undefined1)puVar37[4];
    uVar42 = (undefined1)((ushort)puVar37[4] >> 8);
    uVar45 = (undefined1)*puVar37;
    uVar46 = (undefined1)((ushort)*puVar37 >> 8);
    uVar1 = CONCAT12(uVar39,sVar18);
    uVar2 = CONCAT13(uVar40,uVar1);
    uVar15 = CONCAT15(uVar42,CONCAT14(uVar41,uVar2));
    uVar52 = CONCAT44((uint)(ushort)puVar37[0x18] << 0xd,(uint)(ushort)puVar37[0x1c] << 0xd) &
             0xfffffff0fffffff;
    fVar51 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
    fVar56 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
    uVar47 = SUB41(fVar56,0);
    uVar48 = (undefined1)((uint)fVar56 >> 8);
    uVar64 = (undefined1)((uint)fVar56 >> 0x10);
    uVar65 = (undefined1)((uint)fVar56 >> 0x18);
    fVar25 = (float)(((ushort)((uint6)uVar15 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    uVar66 = SUB41(fVar25,0);
    uVar67 = (undefined1)((uint)fVar25 >> 8);
    bVar68 = (byte)((uint)fVar25 >> 0x10);
    bVar69 = (byte)((uint)fVar25 >> 0x18);
    fVar27 = (float)(((ushort)(CONCAT17(uVar46,CONCAT16(uVar45,uVar15)) >> 0x30) & 0x7fff) << 0xd) *
             5.192297e+33;
    uVar70 = SUB41(fVar27,0);
    uVar71 = (undefined1)((uint)fVar27 >> 8);
    bVar72 = (byte)((uint)fVar27 >> 0x10);
    bVar73 = (byte)((uint)fVar27 >> 0x18);
    auVar60._0_4_ = (float)uVar52 * 5.192297e+33;
    auVar60._4_4_ = (float)(uVar52 >> 0x20) * 5.192297e+33;
    auVar60._8_4_ = (float)(((ushort)puVar37[0x14] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar60._12_4_ = (float)(((ushort)puVar37[0x10] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar62._0_4_ = -(uint)(65536.0 <= fVar51);
    auVar62._4_4_ = -(uint)(65536.0 <= fVar56);
    auVar62._8_4_ = -(uint)(65536.0 <= fVar25);
    auVar62._12_4_ = -(uint)(65536.0 <= fVar27);
    uVar16 = CONCAT13(uVar40,CONCAT12(uVar39,sVar18));
    uVar15 = CONCAT15(uVar42,CONCAT14(uVar41,uVar16));
    uVar52 = CONCAT17((short)puVar37[0x18] >> 0xf,
                      (uint7)(((byte)((short)puVar37[0x1c] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    auVar22[4] = uVar47;
    auVar22._0_4_ = fVar51;
    auVar22[5] = uVar48;
    auVar22[6] = uVar64;
    auVar22[7] = uVar65;
    auVar22[8] = uVar66;
    auVar22[9] = uVar67;
    auVar22[10] = bVar68;
    auVar22[0xb] = bVar69;
    auVar22[0xc] = uVar70;
    auVar22[0xd] = uVar71;
    auVar22[0xe] = bVar72;
    auVar22[0xf] = bVar73;
    auVar28[8] = uVar66;
    auVar28._0_8_ =
         CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar48,CONCAT14(uVar47,fVar51)))) |
         0x7f8000007f800000;
    auVar28[9] = uVar67;
    auVar28[10] = bVar68 | 0x80;
    auVar28[0xb] = bVar69 | 0x7f;
    auVar28[0xc] = uVar70;
    auVar28[0xd] = uVar71;
    auVar28[0xe] = bVar72 | 0x80;
    auVar28[0xf] = bVar73 | 0x7f;
    auVar63[4] = uVar47;
    auVar63._0_4_ = fVar51;
    auVar63[5] = uVar48;
    auVar63[6] = uVar64;
    auVar63[7] = uVar65;
    auVar63[8] = uVar66;
    auVar63[9] = uVar67;
    auVar63[10] = bVar68;
    auVar63[0xb] = bVar69;
    auVar63[0xc] = uVar70;
    auVar63[0xd] = uVar71;
    auVar63[0xe] = bVar72;
    auVar63[0xf] = bVar73;
    auVar63 = auVar63 ^ (auVar22 ^ auVar28) & auVar62;
    auVar30[8] = SUB41(auVar60._8_4_,0);
    auVar30._0_8_ =
         CONCAT17((char)((uint)auVar60._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar60._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar60._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar60._4_4_,0),auVar60._0_4_)))) |
         0x7f8000007f800000;
    auVar30[9] = (char)((uint)auVar60._8_4_ >> 8);
    auVar30[10] = (byte)((uint)auVar60._8_4_ >> 0x10) | 0x80;
    auVar30[0xb] = (byte)((uint)auVar60._8_4_ >> 0x18) | 0x7f;
    auVar30[0xc] = SUB41(auVar60._12_4_,0);
    auVar30[0xd] = (char)((uint)auVar60._12_4_ >> 8);
    auVar30[0xe] = (byte)((uint)auVar60._12_4_ >> 0x10) | 0x80;
    auVar30[0xf] = (byte)((uint)auVar60._12_4_ >> 0x18) | 0x7f;
    auVar14._4_4_ = -(uint)(65536.0 <= auVar60._4_4_);
    auVar14._0_4_ = -(uint)(65536.0 <= auVar60._0_4_);
    auVar14._8_4_ = -(uint)(65536.0 <= auVar60._8_4_);
    auVar14._12_4_ = -(uint)(65536.0 <= auVar60._12_4_);
    auVar60 = auVar60 ^ (auVar60 ^ auVar30) & auVar14;
    fVar51 = (float)CONCAT13(auVar60[3] | (byte)(uVar52 >> 0x18),auVar60._0_3_);
    auVar53._0_8_ =
         CONCAT17(auVar60[7] | (byte)(uVar52 >> 0x38),
                  CONCAT16(auVar60[6],CONCAT15(auVar60[5],CONCAT14(auVar60[4],fVar51))));
    auVar53[8] = auVar60[8];
    auVar53[9] = auVar60[9];
    auVar53[10] = auVar60[10];
    auVar53[0xb] = auVar60[0xb] | (byte)((short)puVar37[0x14] >> 0xf) & 0x80;
    auVar55[0xc] = auVar60[0xc];
    auVar55._0_12_ = auVar53;
    auVar55[0xd] = auVar60[0xd];
    auVar55[0xe] = auVar60[0xe];
    auVar55[0xf] = auVar60[0xf] | (byte)((short)puVar37[0x10] >> 0xf) & 0x80;
    fVar56 = (float)CONCAT13(auVar63[3] | (byte)(sVar18 >> 0xf) & 0x80,auVar63._0_3_);
    auVar58._0_8_ =
         CONCAT17(auVar63[7] | (byte)((int)uVar16 >> 0x1f) & 0x80,
                  CONCAT16(auVar63[6],CONCAT15(auVar63[5],CONCAT14(auVar63[4],fVar56))));
    auVar58[8] = auVar63[8];
    auVar58[9] = auVar63[9];
    auVar58[10] = auVar63[10];
    auVar58[0xb] = auVar63[0xb] | (byte)((int6)uVar15 >> 0x2f) & 0x80;
    auVar61[0xc] = auVar63[0xc];
    auVar61._0_12_ = auVar58;
    auVar61[0xd] = auVar63[0xd];
    auVar61[0xe] = auVar63[0xe];
    auVar61[0xf] = auVar63[0xf] |
                   (byte)((long)CONCAT17(uVar46,CONCAT16(uVar45,uVar15)) >> 0x3f) & 0x80;
    uVar12 = (uint6)CONCAT14(-((float)CONCAT13(auVar59[7] | (byte)((int)uVar11 >> 0x1f) & 0x80,
                                               auVar59._4_3_) ==
                              (float)((ulong)auVar58._0_8_ >> 0x20)),
                             -(uint)((float)CONCAT13(auVar59[3] | (byte)(sVar13 >> 0xf) & 0x80,
                                                     auVar59._0_3_) == fVar56)) & 0xffff0000ffff;
    uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar54[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                              auVar54._4_3_) ==
                             (float)((ulong)auVar53._0_8_ >> 0x20)),
                            -(uint)((float)CONCAT13(auVar54[3] | (byte)(sVar7 >> 0xf) & 0x80,
                                                    auVar54._0_3_) == fVar51)) & 0xffff0000ffff;
    bVar32 = (byte)(((byte)uVar5 & 1) + ((byte)(uVar5 >> 0x20) & 2) +
                    (-((float)CONCAT13(auVar54[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                       auVar54._8_3_) == auVar53._8_4_) & 4U) +
                    (-((float)CONCAT13(auVar54[0xf] |
                                       (byte)((long)CONCAT17(uVar44,CONCAT16(uVar43,uVar3)) >> 0x3f)
                                       & 0x80,auVar54._12_3_) == auVar55._12_4_) & 8U) +
                    ((byte)uVar12 & 0x10) + ((byte)(uVar12 >> 0x20) & 0x20) +
                    (-((float)CONCAT13(auVar59[0xb] | (byte)((int6)uVar10 >> 0x2f) & 0x80,
                                       auVar59._8_3_) == auVar58._8_4_) & 0x40U) +
                   (-((float)CONCAT13(auVar59[0xf] |
                                      (byte)((long)CONCAT17(uVar50,CONCAT16(uVar49,uVar10)) >> 0x3f)
                                      & 0x80,auVar59._12_3_) == auVar61._12_4_) & 0x80U)) == -1;
  }
LAB_109ed80c4:
  iVar35 = -(uint)bVar32;
LAB_109ed80c8:
  *param_1 = iVar35;
  return;
}



/* Entry: 109ed80d4; end: 109ed8cf7;  */

void FUN_109ed80d4(int *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint7 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  
  uVar3 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        iVar4 = 0;
        if (((((byte)param_4[2] != (byte)param_3[2]) || ((byte)param_4[4] != (byte)param_3[4])) ||
            (((byte)param_4[6] != (byte)param_3[6] ||
             ((((byte)param_4[8] != (byte)param_3[8] || ((byte)param_4[10] != (byte)param_3[10])) ||
              ((byte)param_4[0xc] != (byte)param_3[0xc])))))) ||
           ((((byte)param_4[0xe] != (byte)param_3[0xe] ||
             ((byte)param_4[0x10] != (byte)param_3[0x10])) ||
            (((byte)param_4[0x12] != (byte)param_3[0x12] ||
             ((((byte)param_4[0x14] != (byte)param_3[0x14] ||
               ((byte)param_4[0x16] != (byte)param_3[0x16])) ||
              (((byte)param_4[0x18] != (byte)param_3[0x18] ||
               (((byte)param_4[0x1a] != (byte)param_3[0x1a] ||
                ((byte)param_4[0x1c] != (byte)param_3[0x1c])))))))))))) goto LAB_109ed85c8;
        bVar2 = (byte)*param_4 == (byte)*param_3;
        goto LAB_109ed85bc;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      iVar4 = 0;
      if (((((((byte)param_3[0x1c] != (byte)param_4[0x1c]) ||
             ((byte)param_3[0x1a] != (byte)param_4[0x1a])) ||
            ((byte)param_3[0x18] != (byte)param_4[0x18])) ||
           (((byte)param_3[0x16] != (byte)param_4[0x16] ||
            ((byte)param_3[0x14] != (byte)param_4[0x14])))) ||
          ((byte)param_3[0x12] != (byte)param_4[0x12])) ||
         (((((byte)param_3[0x10] != (byte)param_4[0x10] ||
            ((byte)param_3[0xe] != (byte)param_4[0xe])) ||
           (((byte)param_3[0xc] != (byte)param_4[0xc] ||
            ((((byte)param_3[10] != (byte)param_4[10] || ((byte)param_3[8] != (byte)param_4[8])) ||
             ((byte)param_3[6] != (byte)param_4[6])))))) ||
          (((byte)param_3[4] != (byte)param_4[4] || ((byte)param_3[2] != (byte)param_4[2]))))))
      goto LAB_109ed85c8;
      uVar3 = (uint)(byte)*param_3;
      uVar5 = (uint)(byte)*param_4;
      goto LAB_109ed85b8;
    }
  }
  else if (uVar3 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      iVar4 = 0;
      if ((((((((ushort)param_3[0x1c] != (ushort)param_4[0x1c]) ||
              ((ushort)param_3[0x1a] != (ushort)param_4[0x1a])) ||
             ((ushort)param_3[0x18] != (ushort)param_4[0x18])) ||
            (((ushort)param_3[0x16] != (ushort)param_4[0x16] ||
             ((ushort)param_3[0x14] != (ushort)param_4[0x14])))) ||
           (((ushort)param_3[0x12] != (ushort)param_4[0x12] ||
            (((ushort)param_3[0x10] != (ushort)param_4[0x10] ||
             ((ushort)param_3[0xe] != (ushort)param_4[0xe])))))) ||
          (((ushort)param_3[0xc] != (ushort)param_4[0xc] ||
           ((((ushort)param_3[10] != (ushort)param_4[10] ||
             ((ushort)param_3[8] != (ushort)param_4[8])) ||
            ((ushort)param_3[6] != (ushort)param_4[6])))))) ||
         (((ushort)param_3[4] != (ushort)param_4[4] || ((ushort)param_3[2] != (ushort)param_4[2]))))
      goto LAB_109ed85c8;
      uVar3 = (uint)(ushort)*param_3;
      uVar5 = (uint)(ushort)*param_4;
LAB_109ed85b8:
      bVar2 = uVar3 == uVar5;
LAB_109ed85bc:
      iVar4 = -(uint)bVar2;
      goto LAB_109ed85c8;
    }
  }
  else if (uVar3 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      iVar4 = 0;
      if ((((((param_3[0x1c] != param_4[0x1c]) || (param_3[0x1a] != param_4[0x1a])) ||
            ((param_3[0x18] != param_4[0x18] ||
             (((param_3[0x16] != param_4[0x16] || (param_3[0x14] != param_4[0x14])) ||
              (param_3[0x12] != param_4[0x12])))))) ||
           ((param_3[0x10] != param_4[0x10] || (param_3[0xe] != param_4[0xe])))) ||
          (param_3[0xc] != param_4[0xc])) ||
         (((param_3[10] != param_4[10] || (param_3[8] != param_4[8])) ||
          ((param_3[6] != param_4[6] || ((param_3[4] != param_4[4] || (param_3[2] != param_4[2])))))
          ))) goto LAB_109ed85c8;
      uVar3 = *param_3;
      uVar5 = *param_4;
      goto LAB_109ed85b8;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    uVar1 = CONCAT16(-(*(long *)(param_3 + 0x14) == *(long *)(param_4 + 0x14)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 0x12) == *(long *)(param_4 + 0x12)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 0x10) ==
                                                     *(long *)(param_4 + 0x10)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 0xe) ==
                                                                   *(long *)(param_4 + 0xe))))) &
            CONCAT16(-(*(long *)(param_3 + 0xc) == *(long *)(param_4 + 0xc)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 10) == *(long *)(param_4 + 10)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 8) ==
                                                     *(long *)(param_4 + 8)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 6) ==
                                                                   *(long *)(param_4 + 6)))));
    bVar6 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c)) *
                                        -0x80) < '\0'),
                                CONCAT16(-((char)((*(long *)(param_3 + 0x1a) ==
                                                  *(long *)(param_4 + 0x1a)) * -0x80) < '\0'),
                                         CONCAT15(-((char)((*(long *)(param_3 + 0x18) ==
                                                           *(long *)(param_4 + 0x18)) * -0x80) <
                                                   '\0'),CONCAT14(-((char)((*(long *)(param_3 + 0x16
                                                                                     ) ==
                                                                           *(long *)(param_4 + 0x16)
                                                                           ) * -0x80) < '\0'),
                                                                  CONCAT13(-((char)((char)(uVar1 >> 
                                                  0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar1 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar1 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar1 << 7) < '\0')))))))),1);
    if ((bVar6 & *(long *)(param_3 + 4) == *(long *)(param_4 + 4)) == 1 &&
        *(long *)(param_3 + 2) == *(long *)(param_4 + 2)) {
      bVar2 = *(long *)param_3 == *(long *)param_4;
      goto LAB_109ed85bc;
    }
  }
  iVar4 = 0;
LAB_109ed85c8:
  *param_1 = iVar4;
  return;
}



/* Entry: 109ed8cf8; end: 109ed91a7;  */

void FUN_109ed8cf8(int *param_1,int param_2,long *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  short sVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined6 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  short sVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [14];
  bool bVar49;
  double *pdVar50;
  int iVar51;
  undefined2 *puVar52;
  float *pfVar53;
  double *pdVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  float fVar63;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar84;
  ulong uVar85;
  undefined1 auVar88 [16];
  float fVar89;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  float fVar100;
  ulong uVar101;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  float fVar113;
  uint6 uVar114;
  float fVar115;
  uint6 uVar116;
  float fVar117;
  ulong uVar118;
  undefined1 auVar120 [16];
  ulong uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  undefined1 uVar152;
  byte bVar153;
  byte bVar154;
  undefined1 uVar155;
  undefined1 uVar156;
  byte bVar157;
  byte bVar158;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar64 [12];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar65 [12];
  undefined1 auVar68 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar66 [14];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar86 [12];
  undefined1 auVar87 [16];
  undefined1 auVar90 [12];
  undefined1 auVar93 [16];
  undefined1 auVar102 [12];
  undefined1 auVar106 [16];
  undefined1 auVar119 [12];
  undefined1 auVar121 [16];
  
  pdVar50 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar54 = (double *)param_3[1];
    if (pdVar50[0xf] != pdVar54[0xf]) {
LAB_109ed8e28:
      iVar51 = -1;
      goto LAB_109ed91a0;
    }
    bVar55 = NEON_umaxv(CONCAT17(-((char)(~-(pdVar50[0xe] == pdVar54[0xe]) << 7) < '\0'),
                                 CONCAT16(-((char)(~-(pdVar50[0xd] == pdVar54[0xd]) << 7) < '\0'),
                                          CONCAT15(-((char)(~-(pdVar50[0xc] == pdVar54[0xc]) << 7) <
                                                    '\0'),CONCAT14(-((char)(~-(pdVar50[0xb] ==
                                                                              pdVar54[0xb]) << 7) <
                                                                    '\0'),CONCAT13(-((char)((~-(
                                                  pdVar50[10] == pdVar54[10]) |
                                                  ~-(pdVar50[6] == pdVar54[6])) << 7) < '\0'),
                                                  CONCAT12(-((char)((~-(pdVar50[9] == pdVar54[9]) |
                                                                    ~-(pdVar50[5] == pdVar54[5])) <<
                                                                   7) < '\0'),
                                                           CONCAT11(-((char)((~-(pdVar50[8] ==
                                                                                pdVar54[8]) |
                                                                             ~-(pdVar50[4] ==
                                                                               pdVar54[4])) << 7) <
                                                                     '\0'),-((char)((~-(pdVar50[7]
                                                                                       == pdVar54[7]
                                                                                       ) | ~-(
                                                  pdVar50[3] == pdVar54[3])) << 7) < '\0')))))))),1)
    ;
    iVar51 = -1;
    if (((bVar55 & 1) != 0 || pdVar50[2] != pdVar54[2]) || (pdVar50[1] != pdVar54[1]))
    goto LAB_109ed91a0;
    bVar49 = false;
    if (!NAN(*pdVar50) && !NAN(*pdVar54)) {
      bVar49 = *pdVar50 == *pdVar54;
    }
  }
  else {
    if (param_2 != 0x20) {
      puVar52 = (undefined2 *)param_3[1];
      sVar6 = *(short *)(pdVar50 + 0xb);
      uVar94 = (undefined1)*(undefined2 *)(pdVar50 + 10);
      uVar95 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 10) >> 8);
      uVar96 = (undefined1)*(undefined2 *)(pdVar50 + 9);
      uVar97 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 9) >> 8);
      uVar98 = (undefined1)*(undefined2 *)(pdVar50 + 8);
      uVar99 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 8) >> 8);
      uVar1 = CONCAT12(uVar94,sVar6);
      uVar2 = CONCAT13(uVar95,uVar1);
      uVar3 = CONCAT15(uVar97,CONCAT14(uVar96,uVar2));
      sVar11 = *(short *)(pdVar50 + 7);
      uVar107 = (undefined1)*(undefined2 *)(pdVar50 + 6);
      uVar108 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 6) >> 8);
      uVar109 = (undefined1)*(undefined2 *)(pdVar50 + 5);
      uVar110 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 5) >> 8);
      uVar111 = (undefined1)*(undefined2 *)(pdVar50 + 4);
      uVar112 = (undefined1)((ushort)*(undefined2 *)(pdVar50 + 4) >> 8);
      uVar7 = CONCAT12(uVar107,sVar11);
      uVar8 = CONCAT13(uVar108,uVar7);
      uVar9 = CONCAT15(uVar110,CONCAT14(uVar109,uVar8));
      uVar122 = CONCAT44((uint)*(ushort *)(pdVar50 + 0xe) << 0xd,
                         (uint)*(ushort *)(pdVar50 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar85 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar101 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar118 = CONCAT44((uint)*(ushort *)(pdVar50 + 2) << 0xd,(uint)*(ushort *)(pdVar50 + 3) << 0xd
                        ) & 0xfffffff0fffffff;
      auVar120._0_4_ = (float)uVar118 * 5.192297e+33;
      auVar120._4_4_ = (float)(uVar118 >> 0x20) * 5.192297e+33;
      auVar120._8_4_ = (float)((*(ushort *)(pdVar50 + 1) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar120._12_4_ = (float)((*(ushort *)pdVar50 & 0x7fff) << 0xd) * 5.192297e+33;
      auVar126._0_4_ = (float)uVar101 * 5.192297e+33;
      auVar126._4_4_ = (float)(uVar101 >> 0x20) * 5.192297e+33;
      auVar126._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar126._12_4_ =
           (float)(((ushort)(CONCAT17(uVar112,CONCAT16(uVar111,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar127._0_4_ = (float)uVar85 * 5.192297e+33;
      auVar127._4_4_ = (float)(uVar85 >> 0x20) * 5.192297e+33;
      auVar127._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar127._12_4_ =
           (float)(((ushort)(CONCAT17(uVar99,CONCAT16(uVar98,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar123._0_4_ = (float)uVar122 * 5.192297e+33;
      auVar123._4_4_ = (float)(uVar122 >> 0x20) * 5.192297e+33;
      auVar123._8_4_ = (float)((*(ushort *)(pdVar50 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar123._12_4_ = (float)((*(ushort *)(pdVar50 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar51 = -(uint)(65536.0 <= auVar123._4_4_);
      iVar12 = -(uint)(65536.0 <= auVar123._8_4_);
      iVar13 = -(uint)(65536.0 <= auVar123._12_4_);
      iVar16 = -(uint)(65536.0 <= auVar127._4_4_);
      iVar17 = -(uint)(65536.0 <= auVar127._8_4_);
      iVar18 = -(uint)(65536.0 <= auVar127._12_4_);
      iVar24 = -(uint)(65536.0 <= auVar126._4_4_);
      iVar25 = -(uint)(65536.0 <= auVar126._8_4_);
      iVar26 = -(uint)(65536.0 <= auVar126._12_4_);
      iVar30 = -(uint)(65536.0 <= auVar120._4_4_);
      iVar32 = -(uint)(65536.0 <= auVar120._8_4_);
      iVar34 = -(uint)(65536.0 <= auVar120._12_4_);
      uVar4 = CONCAT13(uVar95,CONCAT12(uVar94,sVar6));
      uVar3 = CONCAT15(uVar97,CONCAT14(uVar96,uVar4));
      uVar10 = CONCAT13(uVar108,CONCAT12(uVar107,sVar11));
      uVar9 = CONCAT15(uVar110,CONCAT14(uVar109,uVar10));
      uVar114 = (uint6)(CONCAT17((char)((int)uVar10 >> 0x1f),
                                 (uint7)(((byte)(sVar11 >> 0xf) & 0x80) << 0x18)) >> 0x10) &
                0x80ffffffffff;
      uVar116 = (uint6)(CONCAT17((char)((long)CONCAT17(uVar112,CONCAT16(uVar111,uVar9)) >> 0x3f),
                                 (uint7)(((byte)((int6)uVar9 >> 0x2f) & 0x80) << 0x18)) >> 0x10) &
                0x80ffffffffff;
      uVar85 = CONCAT17((short)*(ushort *)(pdVar50 + 0xe) >> 0xf,
                        (uint7)(((byte)((short)*(ushort *)(pdVar50 + 0xf) >> 0xf) & 0x80) << 0x18))
               & 0x80ffffffffffffff;
      auVar44[8] = SUB41(auVar120._8_4_,0);
      auVar44._0_8_ =
           CONCAT17((char)((uint)auVar120._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar120._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar120._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar120._4_4_,0),auVar120._0_4_)))) |
           0x7f8000007f800000;
      auVar44[9] = (char)((uint)auVar120._8_4_ >> 8);
      auVar44[10] = (byte)((uint)auVar120._8_4_ >> 0x10) | 0x80;
      auVar44[0xb] = (byte)((uint)auVar120._8_4_ >> 0x18) | 0x7f;
      auVar44[0xc] = SUB41(auVar120._12_4_,0);
      auVar44[0xd] = (char)((uint)auVar120._12_4_ >> 8);
      auVar44[0xe] = (byte)((uint)auVar120._12_4_ >> 0x10) | 0x80;
      auVar44[0xf] = (byte)((uint)auVar120._12_4_ >> 0x18) | 0x7f;
      auVar27[4] = (char)iVar30;
      auVar27._0_4_ = -(uint)(65536.0 <= auVar120._0_4_);
      auVar27[5] = (char)((uint)iVar30 >> 8);
      auVar27[6] = (char)((uint)iVar30 >> 0x10);
      auVar27[7] = (char)((uint)iVar30 >> 0x18);
      auVar27[8] = (char)iVar32;
      auVar27[9] = (char)((uint)iVar32 >> 8);
      auVar27[10] = (char)((uint)iVar32 >> 0x10);
      auVar27[0xb] = (char)((uint)iVar32 >> 0x18);
      auVar27[0xc] = (char)iVar34;
      auVar27[0xd] = (char)((uint)iVar34 >> 8);
      auVar27[0xe] = (char)((uint)iVar34 >> 0x10);
      auVar27[0xf] = (char)((uint)iVar34 >> 0x18);
      auVar120 = auVar120 ^ (auVar120 ^ auVar44) & auVar27;
      auVar43[8] = SUB41(auVar126._8_4_,0);
      auVar43._0_8_ =
           CONCAT17((char)((uint)auVar126._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar126._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar126._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar126._4_4_,0),auVar126._0_4_)))) |
           0x7f8000007f800000;
      auVar43[9] = (char)((uint)auVar126._8_4_ >> 8);
      auVar43[10] = (byte)((uint)auVar126._8_4_ >> 0x10) | 0x80;
      auVar43[0xb] = (byte)((uint)auVar126._8_4_ >> 0x18) | 0x7f;
      auVar43[0xc] = SUB41(auVar126._12_4_,0);
      auVar43[0xd] = (char)((uint)auVar126._12_4_ >> 8);
      auVar43[0xe] = (byte)((uint)auVar126._12_4_ >> 0x10) | 0x80;
      auVar43[0xf] = (byte)((uint)auVar126._12_4_ >> 0x18) | 0x7f;
      auVar22[4] = (char)iVar24;
      auVar22._0_4_ = -(uint)(65536.0 <= auVar126._0_4_);
      auVar22[5] = (char)((uint)iVar24 >> 8);
      auVar22[6] = (char)((uint)iVar24 >> 0x10);
      auVar22[7] = (char)((uint)iVar24 >> 0x18);
      auVar22[8] = (char)iVar25;
      auVar22[9] = (char)((uint)iVar25 >> 8);
      auVar22[10] = (char)((uint)iVar25 >> 0x10);
      auVar22[0xb] = (char)((uint)iVar25 >> 0x18);
      auVar22[0xc] = (char)iVar26;
      auVar22[0xd] = (char)((uint)iVar26 >> 8);
      auVar22[0xe] = (char)((uint)iVar26 >> 0x10);
      auVar22[0xf] = (char)((uint)iVar26 >> 0x18);
      auVar126 = auVar126 ^ (auVar126 ^ auVar43) & auVar22;
      auVar42[8] = SUB41(auVar127._8_4_,0);
      auVar42._0_8_ =
           CONCAT17((char)((uint)auVar127._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar127._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar127._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar127._4_4_,0),auVar127._0_4_)))) |
           0x7f8000007f800000;
      auVar42[9] = (char)((uint)auVar127._8_4_ >> 8);
      auVar42[10] = (byte)((uint)auVar127._8_4_ >> 0x10) | 0x80;
      auVar42[0xb] = (byte)((uint)auVar127._8_4_ >> 0x18) | 0x7f;
      auVar42[0xc] = SUB41(auVar127._12_4_,0);
      auVar42[0xd] = (char)((uint)auVar127._12_4_ >> 8);
      auVar42[0xe] = (byte)((uint)auVar127._12_4_ >> 0x10) | 0x80;
      auVar42[0xf] = (byte)((uint)auVar127._12_4_ >> 0x18) | 0x7f;
      auVar14[4] = (char)iVar16;
      auVar14._0_4_ = -(uint)(65536.0 <= auVar127._0_4_);
      auVar14[5] = (char)((uint)iVar16 >> 8);
      auVar14[6] = (char)((uint)iVar16 >> 0x10);
      auVar14[7] = (char)((uint)iVar16 >> 0x18);
      auVar14[8] = (char)iVar17;
      auVar14[9] = (char)((uint)iVar17 >> 8);
      auVar14[10] = (char)((uint)iVar17 >> 0x10);
      auVar14[0xb] = (char)((uint)iVar17 >> 0x18);
      auVar14[0xc] = (char)iVar18;
      auVar14[0xd] = (char)((uint)iVar18 >> 8);
      auVar14[0xe] = (char)((uint)iVar18 >> 0x10);
      auVar14[0xf] = (char)((uint)iVar18 >> 0x18);
      auVar127 = auVar127 ^ (auVar127 ^ auVar42) & auVar14;
      auVar36[8] = SUB41(auVar123._8_4_,0);
      auVar36._0_8_ =
           CONCAT17((char)((uint)auVar123._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar123._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar123._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar123._4_4_,0),auVar123._0_4_)))) |
           0x7f8000007f800000;
      auVar36[9] = (char)((uint)auVar123._8_4_ >> 8);
      auVar36[10] = (byte)((uint)auVar123._8_4_ >> 0x10) | 0x80;
      auVar36[0xb] = (byte)((uint)auVar123._8_4_ >> 0x18) | 0x7f;
      auVar36[0xc] = SUB41(auVar123._12_4_,0);
      auVar36[0xd] = (char)((uint)auVar123._12_4_ >> 8);
      auVar36[0xe] = (byte)((uint)auVar123._12_4_ >> 0x10) | 0x80;
      auVar36[0xf] = (byte)((uint)auVar123._12_4_ >> 0x18) | 0x7f;
      auVar88[4] = (char)iVar51;
      auVar88._0_4_ = -(uint)(65536.0 <= auVar123._0_4_);
      auVar88[5] = (char)((uint)iVar51 >> 8);
      auVar88[6] = (char)((uint)iVar51 >> 0x10);
      auVar88[7] = (char)((uint)iVar51 >> 0x18);
      auVar88[8] = (char)iVar12;
      auVar88[9] = (char)((uint)iVar12 >> 8);
      auVar88[10] = (char)((uint)iVar12 >> 0x10);
      auVar88[0xb] = (char)((uint)iVar12 >> 0x18);
      auVar88[0xc] = (char)iVar13;
      auVar88[0xd] = (char)((uint)iVar13 >> 8);
      auVar88[0xe] = (char)((uint)iVar13 >> 0x10);
      auVar88[0xf] = (char)((uint)iVar13 >> 0x18);
      auVar123 = auVar123 ^ (auVar123 ^ auVar36) & auVar88;
      fVar84 = (float)CONCAT13(auVar123[3] | (byte)(uVar85 >> 0x18),auVar123._0_3_);
      auVar86._0_8_ =
           CONCAT17(auVar123[7] | (byte)(uVar85 >> 0x38),
                    CONCAT16(auVar123[6],CONCAT15(auVar123[5],CONCAT14(auVar123[4],fVar84))));
      auVar86[8] = auVar123[8];
      auVar86[9] = auVar123[9];
      auVar86[10] = auVar123[10];
      auVar86[0xb] = auVar123[0xb] | (byte)((short)*(ushort *)(pdVar50 + 0xd) >> 0xf) & 0x80;
      auVar87[0xc] = auVar123[0xc];
      auVar87._0_12_ = auVar86;
      auVar87[0xd] = auVar123[0xd];
      auVar87[0xe] = auVar123[0xe];
      auVar87[0xf] = auVar123[0xf] | (byte)((short)*(ushort *)(pdVar50 + 0xc) >> 0xf) & 0x80;
      fVar113 = (float)CONCAT13(auVar126[3] | (byte)(uVar114 >> 8),auVar126._0_3_);
      fVar115 = (float)CONCAT13(auVar126[0xb] | (byte)(uVar116 >> 8),auVar126._8_3_);
      fVar117 = (float)CONCAT13(auVar120[3] | (byte)((short)*(ushort *)(pdVar50 + 3) >> 0xf) & 0x80,
                                auVar120._0_3_);
      auVar119._0_8_ =
           CONCAT17(auVar120[7] | (byte)((short)*(ushort *)(pdVar50 + 2) >> 0xf) & 0x80,
                    CONCAT16(auVar120[6],CONCAT15(auVar120[5],CONCAT14(auVar120[4],fVar117))));
      auVar119[8] = auVar120[8];
      auVar119[9] = auVar120[9];
      auVar119[10] = auVar120[10];
      auVar119[0xb] = auVar120[0xb] | (byte)((short)*(ushort *)(pdVar50 + 1) >> 0xf) & 0x80;
      auVar121[0xc] = auVar120[0xc];
      auVar121._0_12_ = auVar119;
      auVar121[0xd] = auVar120[0xd];
      auVar121[0xe] = auVar120[0xe];
      auVar121[0xf] = auVar120[0xf] | (byte)((short)*(ushort *)pdVar50 >> 0xf) & 0x80;
      sVar11 = puVar52[0x1c];
      uVar94 = (undefined1)puVar52[0x18];
      uVar95 = (undefined1)((ushort)puVar52[0x18] >> 8);
      uVar96 = (undefined1)puVar52[0x14];
      uVar97 = (undefined1)((ushort)puVar52[0x14] >> 8);
      uVar107 = (undefined1)puVar52[0x10];
      uVar108 = (undefined1)((ushort)puVar52[0x10] >> 8);
      sVar23 = puVar52[0xc];
      uVar133 = (undefined1)puVar52[8];
      uVar134 = (undefined1)((ushort)puVar52[8] >> 8);
      uVar135 = (undefined1)puVar52[4];
      uVar136 = (undefined1)((ushort)puVar52[4] >> 8);
      uVar137 = (undefined1)*puVar52;
      uVar138 = (undefined1)((ushort)*puVar52 >> 8);
      uVar1 = CONCAT12(uVar94,sVar11);
      uVar2 = CONCAT13(uVar95,uVar1);
      uVar9 = CONCAT15(uVar97,CONCAT14(uVar96,uVar2));
      uVar7 = CONCAT12(uVar133,sVar23);
      uVar8 = CONCAT13(uVar134,uVar7);
      uVar20 = CONCAT15(uVar136,CONCAT14(uVar135,uVar8));
      uVar85 = CONCAT44((uint)(ushort)puVar52[0x38] << 0xd,(uint)(ushort)puVar52[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar38 = (float)((uVar7 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar39 = (float)((uVar8 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar147 = SUB41(fVar39,0);
      uVar148 = (undefined1)((uint)fVar39 >> 8);
      uVar149 = (undefined1)((uint)fVar39 >> 0x10);
      uVar150 = (undefined1)((uint)fVar39 >> 0x18);
      fVar40 = (float)(((ushort)((uint6)uVar20 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar151 = SUB41(fVar40,0);
      uVar152 = (undefined1)((uint)fVar40 >> 8);
      bVar153 = (byte)((uint)fVar40 >> 0x10);
      bVar154 = (byte)((uint)fVar40 >> 0x18);
      fVar41 = (float)(((ushort)(CONCAT17(uVar138,CONCAT16(uVar137,uVar20)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar155 = SUB41(fVar41,0);
      uVar156 = (undefined1)((uint)fVar41 >> 8);
      bVar157 = (byte)((uint)fVar41 >> 0x10);
      bVar158 = (byte)((uint)fVar41 >> 0x18);
      fVar29 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar31 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar139 = SUB41(fVar31,0);
      uVar140 = (undefined1)((uint)fVar31 >> 8);
      uVar141 = (undefined1)((uint)fVar31 >> 0x10);
      uVar142 = (undefined1)((uint)fVar31 >> 0x18);
      fVar33 = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar143 = SUB41(fVar33,0);
      uVar144 = (undefined1)((uint)fVar33 >> 8);
      bVar59 = (byte)((uint)fVar33 >> 0x10);
      bVar60 = (byte)((uint)fVar33 >> 0x18);
      fVar35 = (float)(((ushort)(CONCAT17(uVar108,CONCAT16(uVar107,uVar9)) >> 0x30) & 0x7fff) << 0xd
                      ) * 5.192297e+33;
      uVar145 = SUB41(fVar35,0);
      uVar146 = (undefined1)((uint)fVar35 >> 8);
      bVar61 = (byte)((uint)fVar35 >> 0x10);
      bVar62 = (byte)((uint)fVar35 >> 0x18);
      fVar63 = (float)(((ushort)puVar52[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar89 = (float)(((ushort)puVar52[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar109 = SUB41(fVar89,0);
      uVar110 = (undefined1)((uint)fVar89 >> 8);
      uVar111 = (undefined1)((uint)fVar89 >> 0x10);
      uVar112 = (undefined1)((uint)fVar89 >> 0x18);
      fVar100 = (float)(((ushort)puVar52[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar129 = SUB41(fVar100,0);
      uVar130 = (undefined1)((uint)fVar100 >> 8);
      bVar55 = (byte)((uint)fVar100 >> 0x10);
      bVar56 = (byte)((uint)fVar100 >> 0x18);
      fVar19 = (float)(((ushort)puVar52[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar131 = SUB41(fVar19,0);
      uVar132 = (undefined1)((uint)fVar19 >> 8);
      bVar57 = (byte)((uint)fVar19 >> 0x10);
      bVar58 = (byte)((uint)fVar19 >> 0x18);
      auVar67._0_4_ = (float)uVar85 * 5.192297e+33;
      auVar67._4_4_ = (float)(uVar85 >> 0x20) * 5.192297e+33;
      auVar67._8_4_ = (float)(((ushort)puVar52[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar67._12_4_ = (float)(((ushort)puVar52[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar128._0_4_ = -(uint)(65536.0 <= auVar67._0_4_);
      auVar128._4_4_ = -(uint)(65536.0 <= auVar67._4_4_);
      auVar128._8_4_ = -(uint)(65536.0 <= auVar67._8_4_);
      auVar128._12_4_ = -(uint)(65536.0 <= auVar67._12_4_);
      iVar51 = -(uint)(65536.0 <= fVar89);
      iVar12 = -(uint)(65536.0 <= fVar19);
      iVar13 = -(uint)(65536.0 <= fVar31);
      iVar16 = -(uint)(65536.0 <= fVar35);
      auVar91._0_4_ = -(uint)(65536.0 <= fVar38);
      auVar91._4_4_ = -(uint)(65536.0 <= fVar39);
      auVar91._8_4_ = -(uint)(65536.0 <= fVar40);
      auVar91._12_4_ = -(uint)(65536.0 <= fVar41);
      auVar103._0_8_ =
           CONCAT17(uVar150,CONCAT16(uVar149,CONCAT15(uVar148,CONCAT14(uVar147,fVar38)))) |
           0x7f8000007f800000;
      auVar103[8] = uVar151;
      auVar103[9] = uVar152;
      auVar103[10] = bVar153 | 0x80;
      auVar103[0xb] = bVar154 | 0x7f;
      auVar103[0xc] = uVar155;
      auVar103[0xd] = uVar156;
      auVar103[0xe] = bVar157 | 0x80;
      auVar103[0xf] = bVar158 | 0x7f;
      uVar10 = CONCAT13(uVar95,CONCAT12(uVar94,sVar11));
      uVar9 = CONCAT15(uVar97,CONCAT14(uVar96,uVar10));
      uVar21 = CONCAT13(uVar134,CONCAT12(uVar133,sVar23));
      uVar20 = CONCAT15(uVar136,CONCAT14(uVar135,uVar21));
      uVar85 = CONCAT17((short)puVar52[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar52[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar37[4] = uVar147;
      auVar37._0_4_ = fVar38;
      auVar37[5] = uVar148;
      auVar37[6] = uVar149;
      auVar37[7] = uVar150;
      auVar37[8] = uVar151;
      auVar37[9] = uVar152;
      auVar37[10] = bVar153;
      auVar37[0xb] = bVar154;
      auVar37[0xc] = uVar155;
      auVar37[0xd] = uVar156;
      auVar37[0xe] = bVar157;
      auVar37[0xf] = bVar158;
      auVar92[4] = uVar147;
      auVar92._0_4_ = fVar38;
      auVar92[5] = uVar148;
      auVar92[6] = uVar149;
      auVar92[7] = uVar150;
      auVar92[8] = uVar151;
      auVar92[9] = uVar152;
      auVar92[10] = bVar153;
      auVar92[0xb] = bVar154;
      auVar92[0xc] = uVar155;
      auVar92[0xd] = uVar156;
      auVar92[0xe] = bVar157;
      auVar92[0xf] = bVar158;
      auVar92 = auVar92 ^ (auVar37 ^ auVar103) & auVar91;
      auVar104[0xc] = (char)iVar16;
      auVar104._8_4_ = -(uint)(65536.0 <= fVar33);
      auVar104[0xd] = (char)((uint)iVar16 >> 8);
      auVar104[0xe] = (char)((uint)iVar16 >> 0x10);
      auVar104[0xf] = (char)((uint)iVar16 >> 0x18);
      auVar104[4] = (char)iVar13;
      auVar104._0_4_ = -(uint)(65536.0 <= fVar29);
      auVar104[5] = (char)((uint)iVar13 >> 8);
      auVar104[6] = (char)((uint)iVar13 >> 0x10);
      auVar104[7] = (char)((uint)iVar13 >> 0x18);
      auVar28[4] = uVar139;
      auVar28._0_4_ = fVar29;
      auVar28[5] = uVar140;
      auVar28[6] = uVar141;
      auVar28[7] = uVar142;
      auVar28[8] = uVar143;
      auVar28[9] = uVar144;
      auVar28[10] = bVar59;
      auVar28[0xb] = bVar60;
      auVar28[0xc] = uVar145;
      auVar28[0xd] = uVar146;
      auVar28[0xe] = bVar61;
      auVar28[0xf] = bVar62;
      auVar47[8] = uVar143;
      auVar47._0_8_ =
           CONCAT17(uVar142,CONCAT16(uVar141,CONCAT15(uVar140,CONCAT14(uVar139,fVar29)))) |
           0x7f8000007f800000;
      auVar47[9] = uVar144;
      auVar47[10] = bVar59 | 0x80;
      auVar47[0xb] = bVar60 | 0x7f;
      auVar47[0xc] = uVar145;
      auVar47[0xd] = uVar146;
      auVar47[0xe] = bVar61 | 0x80;
      auVar47[0xf] = bVar62 | 0x7f;
      auVar105[4] = uVar139;
      auVar105._0_4_ = fVar29;
      auVar105[5] = uVar140;
      auVar105[6] = uVar141;
      auVar105[7] = uVar142;
      auVar105[8] = uVar143;
      auVar105[9] = uVar144;
      auVar105[10] = bVar59;
      auVar105[0xb] = bVar60;
      auVar105[0xc] = uVar145;
      auVar105[0xd] = uVar146;
      auVar105[0xe] = bVar61;
      auVar105[0xf] = bVar62;
      auVar105 = auVar105 ^ (auVar28 ^ auVar47) & auVar104;
      auVar124[0xc] = (char)iVar12;
      auVar124._8_4_ = -(uint)(65536.0 <= fVar100);
      auVar124[0xd] = (char)((uint)iVar12 >> 8);
      auVar124[0xe] = (char)((uint)iVar12 >> 0x10);
      auVar124[0xf] = (char)((uint)iVar12 >> 0x18);
      auVar124[4] = (char)iVar51;
      auVar124._0_4_ = -(uint)(65536.0 <= fVar63);
      auVar124[5] = (char)((uint)iVar51 >> 8);
      auVar124[6] = (char)((uint)iVar51 >> 0x10);
      auVar124[7] = (char)((uint)iVar51 >> 0x18);
      auVar15[4] = uVar109;
      auVar15._0_4_ = fVar63;
      auVar15[5] = uVar110;
      auVar15[6] = uVar111;
      auVar15[7] = uVar112;
      auVar15[8] = uVar129;
      auVar15[9] = uVar130;
      auVar15[10] = bVar55;
      auVar15[0xb] = bVar56;
      auVar15[0xc] = uVar131;
      auVar15[0xd] = uVar132;
      auVar15[0xe] = bVar57;
      auVar15[0xf] = bVar58;
      auVar46[8] = uVar129;
      auVar46._0_8_ =
           CONCAT17(uVar112,CONCAT16(uVar111,CONCAT15(uVar110,CONCAT14(uVar109,fVar63)))) |
           0x7f8000007f800000;
      auVar46[9] = uVar130;
      auVar46[10] = bVar55 | 0x80;
      auVar46[0xb] = bVar56 | 0x7f;
      auVar46[0xc] = uVar131;
      auVar46[0xd] = uVar132;
      auVar46[0xe] = bVar57 | 0x80;
      auVar46[0xf] = bVar58 | 0x7f;
      auVar125[4] = uVar109;
      auVar125._0_4_ = fVar63;
      auVar125[5] = uVar110;
      auVar125[6] = uVar111;
      auVar125[7] = uVar112;
      auVar125[8] = uVar129;
      auVar125[9] = uVar130;
      auVar125[10] = bVar55;
      auVar125[0xb] = bVar56;
      auVar125[0xc] = uVar131;
      auVar125[0xd] = uVar132;
      auVar125[0xe] = bVar57;
      auVar125[0xf] = bVar58;
      auVar125 = auVar125 ^ (auVar15 ^ auVar46) & auVar124;
      auVar45[8] = SUB41(auVar67._8_4_,0);
      auVar45._0_8_ =
           CONCAT17((char)((uint)auVar67._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar67._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar67._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar67._4_4_,0),auVar67._0_4_)))) |
           0x7f8000007f800000;
      auVar45[9] = (char)((uint)auVar67._8_4_ >> 8);
      auVar45[10] = (byte)((uint)auVar67._8_4_ >> 0x10) | 0x80;
      auVar45[0xb] = (byte)((uint)auVar67._8_4_ >> 0x18) | 0x7f;
      auVar45[0xc] = SUB41(auVar67._12_4_,0);
      auVar45[0xd] = (char)((uint)auVar67._12_4_ >> 8);
      auVar45[0xe] = (byte)((uint)auVar67._12_4_ >> 0x10) | 0x80;
      auVar45[0xf] = (byte)((uint)auVar67._12_4_ >> 0x18) | 0x7f;
      auVar67 = auVar67 ^ (auVar67 ^ auVar45) & auVar128;
      fVar63 = (float)CONCAT13(auVar67[3] | (byte)((short)puVar52[0x3c] >> 0xf) & 0x80,auVar67._0_3_
                              );
      auVar64._0_8_ =
           CONCAT17(auVar67[7] | (byte)((short)puVar52[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar67[6],CONCAT15(auVar67[5],CONCAT14(auVar67[4],fVar63))));
      auVar64[8] = auVar67[8];
      auVar64[9] = auVar67[9];
      auVar64[10] = auVar67[10];
      auVar64[0xb] = auVar67[0xb] | (byte)((short)puVar52[0x34] >> 0xf) & 0x80;
      auVar68[0xc] = auVar67[0xc];
      auVar68._0_12_ = auVar64;
      auVar68[0xd] = auVar67[0xd];
      auVar68[0xe] = auVar67[0xe];
      auVar68[0xf] = auVar67[0xf] | (byte)((short)puVar52[0x30] >> 0xf) & 0x80;
      fVar100 = (float)CONCAT13(auVar105[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar105._0_3_);
      auVar102._0_8_ =
           CONCAT17(auVar105[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                    CONCAT16(auVar105[6],CONCAT15(auVar105[5],CONCAT14(auVar105[4],fVar100))));
      auVar102[8] = auVar105[8];
      auVar102[9] = auVar105[9];
      auVar102[10] = auVar105[10];
      auVar102[0xb] = auVar105[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80;
      auVar106[0xc] = auVar105[0xc];
      auVar106._0_12_ = auVar102;
      auVar106[0xd] = auVar105[0xd];
      auVar106[0xe] = auVar105[0xe];
      auVar106[0xf] =
           auVar105[0xf] | (byte)((long)CONCAT17(uVar108,CONCAT16(uVar107,uVar9)) >> 0x3f) & 0x80;
      fVar89 = (float)CONCAT13(auVar92[3] | (byte)(sVar23 >> 0xf) & 0x80,auVar92._0_3_);
      auVar90._0_8_ =
           CONCAT17(auVar92[7] | (byte)((int)uVar21 >> 0x1f) & 0x80,
                    CONCAT16(auVar92[6],CONCAT15(auVar92[5],CONCAT14(auVar92[4],fVar89))));
      auVar90[8] = auVar92[8];
      auVar90[9] = auVar92[9];
      auVar90[10] = auVar92[10];
      auVar90[0xb] = auVar92[0xb] | (byte)((int6)uVar20 >> 0x2f) & 0x80;
      auVar93[0xc] = auVar92[0xc];
      auVar93._0_12_ = auVar90;
      auVar93[0xd] = auVar92[0xd];
      auVar93[0xe] = auVar92[0xe];
      auVar93[0xf] = auVar92[0xf] |
                     (byte)((long)CONCAT17(uVar138,CONCAT16(uVar137,uVar20)) >> 0x3f) & 0x80;
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar127[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar127._4_3_) ==
                               (float)CONCAT13(auVar125[7] | (byte)(uVar85 >> 0x38),auVar125._4_3_))
                              ,-(uint)((float)CONCAT13(auVar127[3] | (byte)(sVar6 >> 0xf) & 0x80,
                                                       auVar127._0_3_) ==
                                      (float)CONCAT13(auVar125[3] | (byte)(uVar85 >> 0x18),
                                                      auVar125._0_3_))) & 0xffff0000ffff;
      bVar55 = ~-(fVar84 == fVar63);
      bVar56 = ~-((float)((ulong)auVar86._0_8_ >> 0x20) == (float)((ulong)auVar64._0_8_ >> 0x20));
      bVar57 = ~-(auVar86._8_4_ == auVar64._8_4_);
      bVar58 = ~-(auVar87._12_4_ == auVar68._12_4_);
      bVar59 = ~(byte)uVar5;
      bVar60 = ~(byte)(uVar5 >> 0x20);
      bVar61 = ~-((float)CONCAT13(auVar127[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,auVar127._8_3_)
                 == (float)CONCAT13(auVar125[0xb] | (byte)((short)puVar52[0x24] >> 0xf) & 0x80,
                                    auVar125._8_3_));
      bVar62 = ~-((float)CONCAT13(auVar127[0xf] |
                                  (byte)((long)CONCAT17(uVar99,CONCAT16(uVar98,uVar3)) >> 0x3f) &
                                  0x80,auVar127._12_3_) ==
                 (float)CONCAT13(auVar125[0xf] | (byte)((short)puVar52[0x20] >> 0xf) & 0x80,
                                 auVar125._12_3_));
      auVar69._0_8_ =
           CONCAT17(bVar62,CONCAT16(bVar61,CONCAT15(bVar60,CONCAT14(bVar59,CONCAT13(bVar58,CONCAT12(
                                                  bVar57,CONCAT11(bVar56,bVar55))))))) &
           0x8040201008040201;
      auVar69[8] = ~-(fVar113 == fVar100) & 1;
      auVar69[9] = ~-((float)(CONCAT17(auVar126[7] | (byte)(uVar114 >> 0x28),
                                       CONCAT16(auVar126[6],
                                                CONCAT15(auVar126[5],CONCAT14(auVar126[4],fVar113)))
                                      ) >> 0x20) == (float)((ulong)auVar102._0_8_ >> 0x20)) & 2;
      auVar69[10] = ~-(fVar115 == auVar102._8_4_) & 4;
      auVar69[0xb] = ~-((float)(CONCAT17(auVar126[0xf] | (byte)(uVar116 >> 0x28),
                                         CONCAT16(auVar126[0xe],
                                                  CONCAT15(auVar126[0xd],
                                                           CONCAT14(auVar126[0xc],fVar115)))) >>
                               0x20) == auVar106._12_4_) & 8;
      auVar69[0xc] = ~-(fVar117 == fVar89) & 0x10;
      auVar69[0xd] = ~-((float)((ulong)auVar119._0_8_ >> 0x20) ==
                       (float)((ulong)auVar90._0_8_ >> 0x20)) & 0x20;
      auVar69[0xe] = ~-(auVar119._8_4_ == auVar90._8_4_) & 0x40;
      auVar69[0xf] = ~-(auVar121._12_4_ == auVar93._12_4_) & 0x80;
      auVar88 = NEON_ext(auVar69,auVar69,8,1);
      auVar48._1_13_ = auVar69._3_13_;
      auVar48[0] = bVar56 & 2;
      auVar72._5_11_ = auVar69._5_11_;
      auVar72._0_5_ = CONCAT14(bVar57,auVar48._0_4_ << 0x10) & 0x4ffffffff;
      auVar74._7_9_ = auVar69._7_9_;
      auVar74._0_7_ = CONCAT16(bVar58,auVar72._0_6_) & 0x8ffffffffffff;
      auVar76._9_7_ = auVar69._9_7_;
      auVar76._0_8_ = auVar74._0_8_;
      auVar76[8] = bVar59 & 0x10;
      auVar78._11_5_ = auVar69._11_5_;
      auVar78._0_10_ = auVar76._0_10_;
      auVar78[10] = bVar60 & 0x20;
      auVar80._13_3_ = auVar69._13_3_;
      auVar80._0_12_ = auVar78._0_12_;
      auVar80[0xc] = bVar61 & 0x40;
      auVar82._0_14_ = auVar80._0_14_;
      auVar82[0xe] = bVar62 & 0x80;
      auVar82[0xf] = auVar69[0xf];
      auVar70._2_14_ = auVar82._2_14_;
      auVar70._0_2_ = CONCAT11(auVar88[0],bVar55) & 0xff01;
      auVar71._4_12_ = auVar82._4_12_;
      auVar71._0_4_ = CONCAT13(auVar88[1],auVar70._0_3_);
      auVar73._6_10_ = auVar82._6_10_;
      auVar73._0_6_ = CONCAT15(auVar88[2],auVar71._0_5_);
      auVar75._8_8_ = auVar82._8_8_;
      auVar75._0_8_ = CONCAT17(auVar88[3],auVar73._0_7_);
      auVar77._10_6_ = auVar82._10_6_;
      auVar77._0_10_ = CONCAT19(auVar88[4],auVar75._0_9_);
      auVar79._12_4_ = auVar82._12_4_;
      auVar65._0_11_ = auVar77._0_11_;
      auVar65[0xb] = auVar88[5];
      auVar79._0_12_ = auVar65;
      auVar81._14_2_ = auVar82._14_2_;
      auVar66._0_13_ = auVar79._0_13_;
      auVar66[0xd] = auVar88[6];
      auVar81._0_14_ = auVar66;
      auVar83._0_15_ = auVar81._0_15_;
      auVar83[0xf] = auVar88[7];
      iVar51 = -(uint)((ushort)(auVar70._0_2_ + (short)((uint)auVar71._0_4_ >> 0x10) +
                                (short)((uint6)auVar73._0_6_ >> 0x20) +
                                (short)((ulong)auVar75._0_8_ >> 0x30) +
                                (short)((unkuint10)auVar77._0_10_ >> 0x40) + auVar65._10_2_ +
                                auVar66._12_2_ + auVar83._14_2_) != 0);
      goto LAB_109ed91a0;
    }
    pfVar53 = (float *)param_3[1];
    if (*(float *)(pdVar50 + 0xf) != pfVar53[0x1e]) goto LAB_109ed8e28;
    iVar51 = -1;
    if (((((*(float *)(pdVar50 + 0xe) != pfVar53[0x1c]) ||
          (*(float *)(pdVar50 + 0xd) != pfVar53[0x1a])) ||
         (*(float *)(pdVar50 + 0xc) != pfVar53[0x18])) ||
        ((((*(float *)(pdVar50 + 0xb) != pfVar53[0x16] ||
           (*(float *)(pdVar50 + 10) != pfVar53[0x14])) ||
          ((*(float *)(pdVar50 + 9) != pfVar53[0x12] ||
           ((*(float *)(pdVar50 + 8) != pfVar53[0x10] || (*(float *)(pdVar50 + 7) != pfVar53[0xe])))
           ))) || (*(float *)(pdVar50 + 6) != pfVar53[0xc])))) ||
       ((((*(float *)(pdVar50 + 5) != pfVar53[10] || (*(float *)(pdVar50 + 4) != pfVar53[8])) ||
         (*(float *)(pdVar50 + 3) != pfVar53[6])) ||
        ((*(float *)(pdVar50 + 2) != pfVar53[4] || (*(float *)(pdVar50 + 1) != pfVar53[2]))))))
    goto LAB_109ed91a0;
    bVar49 = *(float *)pdVar50 == *pfVar53;
  }
  iVar51 = -(uint)!bVar49;
LAB_109ed91a0:
  *param_1 = iVar51;
  return;
}



/* Entry: 109ed91a8; end: 109ed97e3;  */

void FUN_109ed91a8(int *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pdVar3 = (double *)*param_3;
  if (param_2 == 0x40) {
    uVar2 = (uint)(pdVar3[1] != ((double *)param_3[1])[1]);
    bVar1 = *pdVar3 == *(double *)param_3[1];
  }
  else if (param_2 == 0x20) {
    uVar2 = (uint)(*(float *)(pdVar3 + 1) != ((float *)param_3[1])[2]);
    bVar1 = *(float *)pdVar3 == *(float *)param_3[1];
  }
  else {
    fVar4 = (float)(((int)*(short *)pdVar3 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar4) {
      fVar4 = (float)((uint)fVar4 | 0x7f800000);
    }
    fVar4 = (float)((uint)fVar4 | (int)*(short *)pdVar3 & 0x80000000U);
    fVar6 = (float)(((int)*(short *)(pdVar3 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    uVar2 = (uint)*(short *)param_3[1];
    fVar7 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    fVar7 = (float)((uint)fVar7 | uVar2 & 0x80000000);
    uVar2 = (uint)((short *)param_3[1])[4];
    fVar5 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar5) {
      fVar5 = (float)((uint)fVar5 | 0x7f800000);
    }
    uVar2 = (uint)((float)((uint)fVar6 | (int)*(short *)(pdVar3 + 1) & 0x80000000U) !=
                  (float)((uint)fVar5 | uVar2 & 0x80000000));
    bVar1 = false;
    if (!NAN(fVar4) && !NAN(fVar7)) {
      bVar1 = fVar4 == fVar7;
    }
  }
  if (!bVar1) {
    uVar2 = 1;
  }
  *param_1 = -uVar2;
  return;
}



/* Entry: 109ed97e4; end: 109ed9a4b;  */

void FUN_109ed97e4(int *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  short sVar5;
  ushort uVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  uint6 uVar11;
  short sVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  bool bVar25;
  bool bVar26;
  double *pdVar27;
  int iVar28;
  float *pfVar29;
  ushort *puVar30;
  double *pdVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  ulong uVar39;
  undefined1 auVar41 [16];
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  ulong uVar50;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined1 auVar40 [12];
  undefined1 auVar42 [16];
  undefined1 auVar51 [12];
  undefined1 auVar53 [16];
  
  pdVar27 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar31 = (double *)param_3[1];
    if (pdVar27[7] != pdVar31[7]) goto LAB_109ed9880;
    uVar6 = NEON_umaxv(CONCAT17(~(byte)(-(ulong)(pdVar27[6] == pdVar31[6]) >> 8),
                                CONCAT16(~(byte)-(ulong)(pdVar27[6] == pdVar31[6]),
                                         CONCAT15(~(byte)(-(ulong)(pdVar27[5] == pdVar31[5]) >> 8),
                                                  CONCAT14(~(byte)-(ulong)(pdVar27[5] == pdVar31[5])
                                                           ,CONCAT13(~(byte)(-(ulong)(pdVar27[4] ==
                                                                                     pdVar31[4]) >>
                                                                            8),
                                                                     CONCAT12(~(byte)-(ulong)(
                                                  pdVar27[4] == pdVar31[4]),
                                                  CONCAT11(~(byte)(-(ulong)(pdVar27[3] == pdVar31[3]
                                                                           ) >> 8),
                                                           ~(byte)-(ulong)(pdVar27[3] == pdVar31[3])
                                                          ))))))),2);
    iVar28 = -1;
    if ((((uVar6 & 1) != 0) || (pdVar27[2] != pdVar31[2])) || (pdVar27[1] != pdVar31[1]))
    goto LAB_109ed99d8;
    bVar25 = *pdVar27 == *pdVar31;
  }
  else {
    if (param_2 == 0x20) {
      pfVar29 = (float *)param_3[1];
      if (*(float *)(pdVar27 + 7) == pfVar29[0xe]) {
        bVar25 = false;
        if ((*(float *)(pdVar27 + 6) == pfVar29[0xc]) &&
           (bVar25 = false, !NAN(*(float *)(pdVar27 + 5)) && !NAN(pfVar29[10]))) {
          bVar25 = *(float *)(pdVar27 + 5) == pfVar29[10];
        }
        bVar26 = false;
        if ((bVar25) && (bVar26 = false, !NAN(*(float *)(pdVar27 + 4)) && !NAN(pfVar29[8]))) {
          bVar26 = *(float *)(pdVar27 + 4) == pfVar29[8];
        }
        bVar25 = false;
        if ((bVar26) && (bVar25 = false, !NAN(*(float *)(pdVar27 + 3)) && !NAN(pfVar29[6]))) {
          bVar25 = *(float *)(pdVar27 + 3) == pfVar29[6];
        }
        bVar26 = false;
        if ((bVar25) && (bVar26 = false, !NAN(*(float *)(pdVar27 + 2)) && !NAN(pfVar29[4]))) {
          bVar26 = *(float *)(pdVar27 + 2) == pfVar29[4];
        }
        bVar25 = false;
        if ((bVar26) && (bVar25 = false, !NAN(*(float *)(pdVar27 + 1)) && !NAN(pfVar29[2]))) {
          bVar25 = *(float *)(pdVar27 + 1) == pfVar29[2];
        }
        if (bVar25) {
          bVar25 = *(float *)pdVar27 == *pfVar29;
          goto LAB_109ed99d4;
        }
      }
LAB_109ed9880:
      iVar28 = -1;
      goto LAB_109ed99d8;
    }
    puVar30 = (ushort *)param_3[1];
    sVar5 = *(short *)(pdVar27 + 7);
    uVar32 = (undefined1)*(undefined2 *)(pdVar27 + 6);
    uVar33 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 6) >> 8);
    uVar34 = (undefined1)*(undefined2 *)(pdVar27 + 5);
    uVar35 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 5) >> 8);
    uVar36 = (undefined1)*(undefined2 *)(pdVar27 + 4);
    uVar37 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 4) >> 8);
    uVar1 = CONCAT12(uVar32,sVar5);
    uVar2 = CONCAT13(uVar33,uVar1);
    uVar3 = CONCAT15(uVar35,CONCAT14(uVar34,uVar2));
    sVar12 = *(short *)(pdVar27 + 3);
    uVar43 = (undefined1)*(undefined2 *)(pdVar27 + 2);
    uVar44 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 2) >> 8);
    uVar45 = (undefined1)*(undefined2 *)(pdVar27 + 1);
    uVar46 = (undefined1)((ushort)*(undefined2 *)(pdVar27 + 1) >> 8);
    uVar47 = (undefined1)*(undefined2 *)pdVar27;
    uVar48 = (undefined1)((ushort)*(undefined2 *)pdVar27 >> 8);
    uVar7 = CONCAT12(uVar43,sVar12);
    uVar8 = CONCAT13(uVar44,uVar7);
    uVar9 = CONCAT15(uVar46,CONCAT14(uVar45,uVar8));
    uVar39 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    uVar50 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    auVar52._0_4_ = (float)uVar50 * 5.192297e+33;
    auVar52._4_4_ = (float)(uVar50 >> 0x20) * 5.192297e+33;
    auVar52._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar52._12_4_ =
         (float)(((ushort)(CONCAT17(uVar48,CONCAT16(uVar47,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    auVar41._0_4_ = (float)uVar39 * 5.192297e+33;
    auVar41._4_4_ = (float)(uVar39 >> 0x20) * 5.192297e+33;
    auVar41._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar41._12_4_ =
         (float)(((ushort)(CONCAT17(uVar37,CONCAT16(uVar36,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    iVar28 = -(uint)(65536.0 <= auVar52._4_4_);
    iVar17 = -(uint)(65536.0 <= auVar52._8_4_);
    iVar19 = -(uint)(65536.0 <= auVar52._12_4_);
    uVar4 = CONCAT13(uVar33,CONCAT12(uVar32,sVar5));
    uVar3 = CONCAT15(uVar35,CONCAT14(uVar34,uVar4));
    uVar10 = CONCAT13(uVar44,CONCAT12(uVar43,sVar12));
    uVar9 = CONCAT15(uVar46,CONCAT14(uVar45,uVar10));
    auVar24[8] = SUB41(auVar52._8_4_,0);
    auVar24._0_8_ =
         CONCAT17((char)((uint)auVar52._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar52._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar52._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar52._4_4_,0),auVar52._0_4_)))) |
         0x7f8000007f800000;
    auVar24[9] = (char)((uint)auVar52._8_4_ >> 8);
    auVar24[10] = (byte)((uint)auVar52._8_4_ >> 0x10) | 0x80;
    auVar24[0xb] = (byte)((uint)auVar52._8_4_ >> 0x18) | 0x7f;
    auVar24[0xc] = SUB41(auVar52._12_4_,0);
    auVar24[0xd] = (char)((uint)auVar52._12_4_ >> 8);
    auVar24[0xe] = (byte)((uint)auVar52._12_4_ >> 0x10) | 0x80;
    auVar24[0xf] = (byte)((uint)auVar52._12_4_ >> 0x18) | 0x7f;
    auVar15[4] = (char)iVar28;
    auVar15._0_4_ = -(uint)(65536.0 <= auVar52._0_4_);
    auVar15[5] = (char)((uint)iVar28 >> 8);
    auVar15[6] = (char)((uint)iVar28 >> 0x10);
    auVar15[7] = (char)((uint)iVar28 >> 0x18);
    auVar15[8] = (char)iVar17;
    auVar15[9] = (char)((uint)iVar17 >> 8);
    auVar15[10] = (char)((uint)iVar17 >> 0x10);
    auVar15[0xb] = (char)((uint)iVar17 >> 0x18);
    auVar15[0xc] = (char)iVar19;
    auVar15[0xd] = (char)((uint)iVar19 >> 8);
    auVar15[0xe] = (char)((uint)iVar19 >> 0x10);
    auVar15[0xf] = (char)((uint)iVar19 >> 0x18);
    auVar52 = auVar52 ^ (auVar52 ^ auVar24) & auVar15;
    auVar22[8] = SUB41(auVar41._8_4_,0);
    auVar22._0_8_ =
         CONCAT17((char)((uint)auVar41._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar41._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar41._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar41._4_4_,0),auVar41._0_4_)))) |
         0x7f8000007f800000;
    auVar22[9] = (char)((uint)auVar41._8_4_ >> 8);
    auVar22[10] = (byte)((uint)auVar41._8_4_ >> 0x10) | 0x80;
    auVar22[0xb] = (byte)((uint)auVar41._8_4_ >> 0x18) | 0x7f;
    auVar22[0xc] = SUB41(auVar41._12_4_,0);
    auVar22[0xd] = (char)((uint)auVar41._12_4_ >> 8);
    auVar22[0xe] = (byte)((uint)auVar41._12_4_ >> 0x10) | 0x80;
    auVar22[0xf] = (byte)((uint)auVar41._12_4_ >> 0x18) | 0x7f;
    auVar13._4_4_ = -(uint)(65536.0 <= auVar41._4_4_);
    auVar13._0_4_ = -(uint)(65536.0 <= auVar41._0_4_);
    auVar13._8_4_ = -(uint)(65536.0 <= auVar41._8_4_);
    auVar13._12_4_ = -(uint)(65536.0 <= auVar41._12_4_);
    auVar41 = auVar41 ^ (auVar41 ^ auVar22) & auVar13;
    fVar38 = (float)((puVar30[0xc] & 0x7fff) << 0xd) * 5.192297e+33;
    fVar49 = (float)((puVar30[8] & 0x7fff) << 0xd) * 5.192297e+33;
    uVar32 = SUB41(fVar49,0);
    uVar33 = (undefined1)((uint)fVar49 >> 8);
    uVar34 = (undefined1)((uint)fVar49 >> 0x10);
    uVar35 = (undefined1)((uint)fVar49 >> 0x18);
    fVar18 = (float)((puVar30[4] & 0x7fff) << 0xd) * 5.192297e+33;
    uVar43 = SUB41(fVar18,0);
    uVar44 = (undefined1)((uint)fVar18 >> 8);
    bVar57 = (byte)((uint)fVar18 >> 0x10);
    bVar58 = (byte)((uint)fVar18 >> 0x18);
    fVar20 = (float)((*puVar30 & 0x7fff) << 0xd) * 5.192297e+33;
    uVar45 = SUB41(fVar20,0);
    uVar46 = (undefined1)((uint)fVar20 >> 8);
    bVar59 = (byte)((uint)fVar20 >> 0x10);
    bVar60 = (byte)((uint)fVar20 >> 0x18);
    auVar54._0_4_ = (float)((puVar30[0x1c] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._4_4_ = (float)((puVar30[0x18] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._8_4_ = (float)((puVar30[0x14] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar54._12_4_ = (float)((puVar30[0x10] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar55._0_4_ = -(uint)(65536.0 <= fVar38);
    auVar55._4_4_ = -(uint)(65536.0 <= fVar49);
    auVar55._8_4_ = -(uint)(65536.0 <= fVar18);
    auVar55._12_4_ = -(uint)(65536.0 <= fVar20);
    uVar50 = CONCAT17((short)puVar30[8] >> 0xf,
                      (uint7)(((byte)((short)puVar30[0xc] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    uVar39 = CONCAT17((short)puVar30[0x18] >> 0xf,
                      (uint7)(((byte)((short)puVar30[0x1c] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    auVar16[4] = uVar32;
    auVar16._0_4_ = fVar38;
    auVar16[5] = uVar33;
    auVar16[6] = uVar34;
    auVar16[7] = uVar35;
    auVar16[8] = uVar43;
    auVar16[9] = uVar44;
    auVar16[10] = bVar57;
    auVar16[0xb] = bVar58;
    auVar16[0xc] = uVar45;
    auVar16[0xd] = uVar46;
    auVar16[0xe] = bVar59;
    auVar16[0xf] = bVar60;
    auVar21[8] = uVar43;
    auVar21._0_8_ =
         CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar38)))) |
         0x7f8000007f800000;
    auVar21[9] = uVar44;
    auVar21[10] = bVar57 | 0x80;
    auVar21[0xb] = bVar58 | 0x7f;
    auVar21[0xc] = uVar45;
    auVar21[0xd] = uVar46;
    auVar21[0xe] = bVar59 | 0x80;
    auVar21[0xf] = bVar60 | 0x7f;
    auVar56[4] = uVar32;
    auVar56._0_4_ = fVar38;
    auVar56[5] = uVar33;
    auVar56[6] = uVar34;
    auVar56[7] = uVar35;
    auVar56[8] = uVar43;
    auVar56[9] = uVar44;
    auVar56[10] = bVar57;
    auVar56[0xb] = bVar58;
    auVar56[0xc] = uVar45;
    auVar56[0xd] = uVar46;
    auVar56[0xe] = bVar59;
    auVar56[0xf] = bVar60;
    auVar56 = auVar56 ^ (auVar16 ^ auVar21) & auVar55;
    auVar23[8] = SUB41(auVar54._8_4_,0);
    auVar23._0_8_ =
         CONCAT17((char)((uint)auVar54._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar54._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar54._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar54._4_4_,0),auVar54._0_4_)))) |
         0x7f8000007f800000;
    auVar23[9] = (char)((uint)auVar54._8_4_ >> 8);
    auVar23[10] = (byte)((uint)auVar54._8_4_ >> 0x10) | 0x80;
    auVar23[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) | 0x7f;
    auVar23[0xc] = SUB41(auVar54._12_4_,0);
    auVar23[0xd] = (char)((uint)auVar54._12_4_ >> 8);
    auVar23[0xe] = (byte)((uint)auVar54._12_4_ >> 0x10) | 0x80;
    auVar23[0xf] = (byte)((uint)auVar54._12_4_ >> 0x18) | 0x7f;
    auVar14._4_4_ = -(uint)(65536.0 <= auVar54._4_4_);
    auVar14._0_4_ = -(uint)(65536.0 <= auVar54._0_4_);
    auVar14._8_4_ = -(uint)(65536.0 <= auVar54._8_4_);
    auVar14._12_4_ = -(uint)(65536.0 <= auVar54._12_4_);
    auVar54 = auVar54 ^ (auVar54 ^ auVar23) & auVar14;
    fVar38 = (float)CONCAT13(auVar54[3] | (byte)(uVar39 >> 0x18),auVar54._0_3_);
    auVar40._0_8_ =
         CONCAT17(auVar54[7] | (byte)(uVar39 >> 0x38),
                  CONCAT16(auVar54[6],CONCAT15(auVar54[5],CONCAT14(auVar54[4],fVar38))));
    auVar40[8] = auVar54[8];
    auVar40[9] = auVar54[9];
    auVar40[10] = auVar54[10];
    auVar40[0xb] = auVar54[0xb] | (byte)((short)puVar30[0x14] >> 0xf) & 0x80;
    auVar42[0xc] = auVar54[0xc];
    auVar42._0_12_ = auVar40;
    auVar42[0xd] = auVar54[0xd];
    auVar42[0xe] = auVar54[0xe];
    auVar42[0xf] = auVar54[0xf] | (byte)((short)puVar30[0x10] >> 0xf) & 0x80;
    fVar49 = (float)CONCAT13(auVar56[3] | (byte)(uVar50 >> 0x18),auVar56._0_3_);
    auVar51._0_8_ =
         CONCAT17(auVar56[7] | (byte)(uVar50 >> 0x38),
                  CONCAT16(auVar56[6],CONCAT15(auVar56[5],CONCAT14(auVar56[4],fVar49))));
    auVar51[8] = auVar56[8];
    auVar51[9] = auVar56[9];
    auVar51[10] = auVar56[10];
    auVar51[0xb] = auVar56[0xb] | (byte)((short)puVar30[4] >> 0xf) & 0x80;
    auVar53[0xc] = auVar56[0xc];
    auVar53._0_12_ = auVar51;
    auVar53[0xd] = auVar56[0xd];
    auVar53[0xe] = auVar56[0xe];
    auVar53[0xf] = auVar56[0xf] | (byte)((short)*puVar30 >> 0xf) & 0x80;
    uVar11 = (uint6)CONCAT14(-((float)CONCAT13(auVar52[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                                               auVar52._4_3_) ==
                              (float)((ulong)auVar51._0_8_ >> 0x20)),
                             -(uint)((float)CONCAT13(auVar52[3] | (byte)(sVar12 >> 0xf) & 0x80,
                                                     auVar52._0_3_) == fVar49)) & 0xffff0000ffff;
    bVar25 = (byte)((~-((float)CONCAT13(auVar41[3] | (byte)(sVar5 >> 0xf) & 0x80,auVar41._0_3_) ==
                       fVar38) & 1U) +
                    (~-((float)CONCAT13(auVar41[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,auVar41._4_3_
                                       ) == (float)((ulong)auVar40._0_8_ >> 0x20)) & 2U) +
                    (~-((float)CONCAT13(auVar41[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                        auVar41._8_3_) == auVar40._8_4_) & 4U) +
                    (~-((float)CONCAT13(auVar41[0xf] |
                                        (byte)((long)CONCAT17(uVar37,CONCAT16(uVar36,uVar3)) >> 0x3f
                                              ) & 0x80,auVar41._12_3_) == auVar42._12_4_) & 8U) +
                    (~(byte)uVar11 & 0x10) + (~(byte)(uVar11 >> 0x20) & 0x20) +
                    (~-((float)CONCAT13(auVar52[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80,
                                        auVar52._8_3_) == auVar51._8_4_) & 0x40U) +
                   (~-((float)CONCAT13(auVar52[0xf] |
                                       (byte)((long)CONCAT17(uVar48,CONCAT16(uVar47,uVar9)) >> 0x3f)
                                       & 0x80,auVar52._12_3_) == auVar53._12_4_) & 0x80U)) == '\0';
  }
LAB_109ed99d4:
  iVar28 = -(uint)!bVar25;
LAB_109ed99d8:
  *param_1 = iVar28;
  return;
}



/* Entry: 109ed9a4c; end: 109eda91b;  */

void FUN_109ed9a4c(int *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint7 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  
  uVar3 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        iVar4 = -1;
        if (((((byte)param_4[2] != (byte)param_3[2]) || ((byte)param_4[4] != (byte)param_3[4])) ||
            (((byte)param_4[6] != (byte)param_3[6] ||
             ((((byte)param_4[8] != (byte)param_3[8] || ((byte)param_4[10] != (byte)param_3[10])) ||
              ((byte)param_4[0xc] != (byte)param_3[0xc])))))) ||
           ((((byte)param_4[0xe] != (byte)param_3[0xe] ||
             ((byte)param_4[0x10] != (byte)param_3[0x10])) ||
            (((byte)param_4[0x12] != (byte)param_3[0x12] ||
             ((((byte)param_4[0x14] != (byte)param_3[0x14] ||
               ((byte)param_4[0x16] != (byte)param_3[0x16])) ||
              (((byte)param_4[0x18] != (byte)param_3[0x18] ||
               (((byte)param_4[0x1a] != (byte)param_3[0x1a] ||
                ((byte)param_4[0x1c] != (byte)param_3[0x1c])))))))))))) goto LAB_109ed9f40;
        bVar2 = (byte)*param_4 == (byte)*param_3;
        goto LAB_109ed9f34;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      iVar4 = -1;
      if (((((((byte)param_3[0x1c] != (byte)param_4[0x1c]) ||
             ((byte)param_3[0x1a] != (byte)param_4[0x1a])) ||
            ((byte)param_3[0x18] != (byte)param_4[0x18])) ||
           (((byte)param_3[0x16] != (byte)param_4[0x16] ||
            ((byte)param_3[0x14] != (byte)param_4[0x14])))) ||
          ((byte)param_3[0x12] != (byte)param_4[0x12])) ||
         (((((byte)param_3[0x10] != (byte)param_4[0x10] ||
            ((byte)param_3[0xe] != (byte)param_4[0xe])) ||
           (((byte)param_3[0xc] != (byte)param_4[0xc] ||
            ((((byte)param_3[10] != (byte)param_4[10] || ((byte)param_3[8] != (byte)param_4[8])) ||
             ((byte)param_3[6] != (byte)param_4[6])))))) ||
          (((byte)param_3[4] != (byte)param_4[4] || ((byte)param_3[2] != (byte)param_4[2]))))))
      goto LAB_109ed9f40;
      uVar3 = (uint)(byte)*param_3;
      uVar5 = (uint)(byte)*param_4;
      goto LAB_109ed9f30;
    }
  }
  else if (uVar3 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      iVar4 = -1;
      if ((((((((ushort)param_3[0x1c] != (ushort)param_4[0x1c]) ||
              ((ushort)param_3[0x1a] != (ushort)param_4[0x1a])) ||
             ((ushort)param_3[0x18] != (ushort)param_4[0x18])) ||
            (((ushort)param_3[0x16] != (ushort)param_4[0x16] ||
             ((ushort)param_3[0x14] != (ushort)param_4[0x14])))) ||
           (((ushort)param_3[0x12] != (ushort)param_4[0x12] ||
            (((ushort)param_3[0x10] != (ushort)param_4[0x10] ||
             ((ushort)param_3[0xe] != (ushort)param_4[0xe])))))) ||
          (((ushort)param_3[0xc] != (ushort)param_4[0xc] ||
           ((((ushort)param_3[10] != (ushort)param_4[10] ||
             ((ushort)param_3[8] != (ushort)param_4[8])) ||
            ((ushort)param_3[6] != (ushort)param_4[6])))))) ||
         (((ushort)param_3[4] != (ushort)param_4[4] || ((ushort)param_3[2] != (ushort)param_4[2]))))
      goto LAB_109ed9f40;
      uVar3 = (uint)(ushort)*param_3;
      uVar5 = (uint)(ushort)*param_4;
LAB_109ed9f30:
      bVar2 = uVar3 == uVar5;
LAB_109ed9f34:
      iVar4 = -(uint)!bVar2;
      goto LAB_109ed9f40;
    }
  }
  else if (uVar3 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      iVar4 = -1;
      if ((((((param_3[0x1c] != param_4[0x1c]) || (param_3[0x1a] != param_4[0x1a])) ||
            ((param_3[0x18] != param_4[0x18] ||
             (((param_3[0x16] != param_4[0x16] || (param_3[0x14] != param_4[0x14])) ||
              (param_3[0x12] != param_4[0x12])))))) ||
           ((param_3[0x10] != param_4[0x10] || (param_3[0xe] != param_4[0xe])))) ||
          (param_3[0xc] != param_4[0xc])) ||
         (((param_3[10] != param_4[10] || (param_3[8] != param_4[8])) ||
          ((param_3[6] != param_4[6] || ((param_3[4] != param_4[4] || (param_3[2] != param_4[2])))))
          ))) goto LAB_109ed9f40;
      uVar3 = *param_3;
      uVar5 = *param_4;
      goto LAB_109ed9f30;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    uVar1 = CONCAT16(-(*(long *)(param_3 + 0x14) == *(long *)(param_4 + 0x14)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 0x12) == *(long *)(param_4 + 0x12)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 0x10) ==
                                                     *(long *)(param_4 + 0x10)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 0xe) ==
                                                                   *(long *)(param_4 + 0xe))))) &
            CONCAT16(-(*(long *)(param_3 + 0xc) == *(long *)(param_4 + 0xc)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 10) == *(long *)(param_4 + 10)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 8) ==
                                                     *(long *)(param_4 + 8)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 6) ==
                                                                   *(long *)(param_4 + 6)))));
    bVar6 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c)) *
                                        -0x80) < '\0'),
                                CONCAT16(-((char)((*(long *)(param_3 + 0x1a) ==
                                                  *(long *)(param_4 + 0x1a)) * -0x80) < '\0'),
                                         CONCAT15(-((char)((*(long *)(param_3 + 0x18) ==
                                                           *(long *)(param_4 + 0x18)) * -0x80) <
                                                   '\0'),CONCAT14(-((char)((*(long *)(param_3 + 0x16
                                                                                     ) ==
                                                                           *(long *)(param_4 + 0x16)
                                                                           ) * -0x80) < '\0'),
                                                                  CONCAT13(-((char)((char)(uVar1 >> 
                                                  0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar1 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar1 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar1 << 7) < '\0')))))))),1);
    if ((bVar6 & *(long *)(param_3 + 4) == *(long *)(param_4 + 4)) == 1 &&
        *(long *)(param_3 + 2) == *(long *)(param_4 + 2)) {
      bVar2 = *(long *)param_3 == *(long *)param_4;
      goto LAB_109ed9f34;
    }
  }
  iVar4 = -1;
LAB_109ed9f40:
  *param_1 = iVar4;
  return;
}



/* Entry: 109eda91c; end: 109edadb3;  */

void FUN_109eda91c(char *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  short sVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  short sVar11;
  uint3 uVar12;
  uint uVar13;
  undefined6 uVar14;
  undefined4 uVar15;
  short sVar16;
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  undefined6 uVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  short sVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [14];
  uint7 uVar55;
  bool bVar56;
  double *pdVar57;
  double *pdVar58;
  undefined2 *puVar59;
  float *pfVar60;
  char cVar61;
  byte bVar62;
  char cVar63;
  char cVar64;
  byte bVar65;
  byte bVar66;
  float fVar67;
  undefined7 uVar68;
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar89;
  ulong uVar90;
  undefined1 auVar93 [16];
  float fVar94;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  byte bVar105;
  byte bVar106;
  float fVar107;
  ulong uVar108;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  float fVar126;
  ulong uVar127;
  undefined1 auVar129 [16];
  ulong uVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  byte bVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  byte bVar147;
  byte bVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  undefined1 uVar152;
  undefined1 uVar153;
  undefined1 uVar154;
  undefined1 uVar155;
  undefined1 uVar156;
  undefined1 uVar157;
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  byte bVar161;
  byte bVar162;
  undefined1 uVar163;
  undefined1 uVar164;
  byte bVar165;
  byte bVar166;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar69 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar70 [12];
  undefined1 auVar73 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar71 [14];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar91 [12];
  undefined1 auVar92 [16];
  undefined1 auVar95 [12];
  undefined1 auVar98 [16];
  undefined1 auVar109 [12];
  undefined1 auVar113 [16];
  undefined1 auVar128 [12];
  undefined1 auVar130 [16];
  
  pdVar57 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar58 = (double *)param_3[1];
    if (pdVar57[0xf] == pdVar58[0xf]) {
      uVar68 = CONCAT16(-(pdVar57[10] == pdVar58[10]),
                        (uint6)CONCAT14(-(pdVar57[9] == pdVar58[9]),
                                        (uint)CONCAT12(-(pdVar57[8] == pdVar58[8]),
                                                       (ushort)(byte)-(pdVar57[7] == pdVar58[7]))));
      uVar55 = CONCAT16(-(pdVar57[10] == pdVar58[10]),
                        (uint6)(uint5)CONCAT34((int3)((uint7)uVar68 >> 0x20),
                                               (uint)(uint3)CONCAT52((int5)((uint7)uVar68 >> 0x10),
                                                                     (ushort)(byte)-(pdVar57[7] ==
                                                                                    pdVar58[7])))) &
               CONCAT16(-(pdVar57[6] == pdVar58[6]),
                        (uint6)CONCAT14(-(pdVar57[5] == pdVar58[5]),
                                        (uint)CONCAT12(-(pdVar57[4] == pdVar58[4]),
                                                       (ushort)(byte)-(pdVar57[3] == pdVar58[3]))));
      bVar62 = NEON_uminv(CONCAT17(-((char)((pdVar57[0xe] == pdVar58[0xe]) * -0x80) < '\0'),
                                   CONCAT16(-((char)((pdVar57[0xd] == pdVar58[0xd]) * -0x80) < '\0')
                                            ,CONCAT15(-((char)((pdVar57[0xc] == pdVar58[0xc]) *
                                                              -0x80) < '\0'),
                                                      CONCAT14(-((char)((pdVar57[0xb] ==
                                                                        pdVar58[0xb]) * -0x80) <
                                                                '\0'),CONCAT13(-((char)((char)(
                                                  uVar55 >> 0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar55 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar55 >>
                                                                                          0x10) << 7
                                                                                   ) < '\0'),
                                                                           -((char)((char)uVar55 <<
                                                                                   7) < '\0'))))))))
                          ,1);
      bVar56 = false;
      if (((bVar62 & pdVar57[2] == pdVar58[2]) == 1) &&
         (bVar56 = false, !NAN(pdVar57[1]) && !NAN(pdVar58[1]))) {
        bVar56 = pdVar57[1] == pdVar58[1];
      }
      if (bVar56) {
        bVar56 = false;
        if (!NAN(*pdVar57) && !NAN(*pdVar58)) {
          bVar56 = *pdVar57 == *pdVar58;
        }
        goto LAB_109edada8;
      }
    }
  }
  else {
    if (param_2 != 0x20) {
      puVar59 = (undefined2 *)param_3[1];
      sVar6 = *(short *)(pdVar57 + 0xb);
      uVar99 = (undefined1)*(undefined2 *)(pdVar57 + 10);
      uVar100 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 10) >> 8);
      uVar101 = (undefined1)*(undefined2 *)(pdVar57 + 9);
      uVar102 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 9) >> 8);
      uVar103 = (undefined1)*(undefined2 *)(pdVar57 + 8);
      uVar104 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 8) >> 8);
      sVar11 = *(short *)(pdVar57 + 7);
      uVar114 = (undefined1)*(undefined2 *)(pdVar57 + 6);
      uVar115 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 6) >> 8);
      uVar1 = CONCAT12(uVar99,sVar6);
      uVar2 = CONCAT13(uVar100,uVar1);
      uVar3 = CONCAT15(uVar102,CONCAT14(uVar101,uVar2));
      uVar116 = (undefined1)*(undefined2 *)(pdVar57 + 5);
      uVar117 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 5) >> 8);
      uVar118 = (undefined1)*(undefined2 *)(pdVar57 + 4);
      uVar119 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 4) >> 8);
      sVar16 = *(short *)(pdVar57 + 3);
      uVar120 = (undefined1)*(undefined2 *)(pdVar57 + 2);
      uVar121 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 2) >> 8);
      uVar122 = (undefined1)*(undefined2 *)(pdVar57 + 1);
      uVar123 = (undefined1)((ushort)*(undefined2 *)(pdVar57 + 1) >> 8);
      uVar124 = (undefined1)*(undefined2 *)pdVar57;
      uVar125 = (undefined1)((ushort)*(undefined2 *)pdVar57 >> 8);
      uVar7 = CONCAT12(uVar114,sVar11);
      uVar8 = CONCAT13(uVar115,uVar7);
      uVar9 = CONCAT15(uVar117,CONCAT14(uVar116,uVar8));
      uVar12 = CONCAT12(uVar120,sVar16);
      uVar13 = CONCAT13(uVar121,uVar12);
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar13));
      uVar131 = CONCAT44((uint)*(ushort *)(pdVar57 + 0xe) << 0xd,
                         (uint)*(ushort *)(pdVar57 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar90 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar108 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar127 = CONCAT44((uVar13 >> 0x10) << 0xd,(uVar12 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      auVar129._0_4_ = (float)uVar127 * 5.192297e+33;
      auVar129._4_4_ = (float)(uVar127 >> 0x20) * 5.192297e+33;
      auVar129._8_4_ = (float)(((ushort)((uint6)uVar14 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar129._12_4_ =
           (float)(((ushort)(CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar135._0_4_ = (float)uVar108 * 5.192297e+33;
      auVar135._4_4_ = (float)(uVar108 >> 0x20) * 5.192297e+33;
      auVar135._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar135._12_4_ =
           (float)(((ushort)(CONCAT17(uVar119,CONCAT16(uVar118,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar136._0_4_ = (float)uVar90 * 5.192297e+33;
      auVar136._4_4_ = (float)(uVar90 >> 0x20) * 5.192297e+33;
      auVar136._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar136._12_4_ =
           (float)(((ushort)(CONCAT17(uVar104,CONCAT16(uVar103,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar132._0_4_ = (float)uVar131 * 5.192297e+33;
      auVar132._4_4_ = (float)(uVar131 >> 0x20) * 5.192297e+33;
      auVar132._8_4_ = (float)((*(ushort *)(pdVar57 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar132._12_4_ = (float)((*(ushort *)(pdVar57 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar18 = -(uint)(65536.0 <= auVar132._4_4_);
      iVar19 = -(uint)(65536.0 <= auVar132._8_4_);
      iVar20 = -(uint)(65536.0 <= auVar132._12_4_);
      iVar23 = -(uint)(65536.0 <= auVar136._4_4_);
      iVar24 = -(uint)(65536.0 <= auVar136._8_4_);
      iVar25 = -(uint)(65536.0 <= auVar136._12_4_);
      iVar29 = -(uint)(65536.0 <= auVar135._4_4_);
      iVar31 = -(uint)(65536.0 <= auVar135._8_4_);
      iVar33 = -(uint)(65536.0 <= auVar135._12_4_);
      iVar39 = -(uint)(65536.0 <= auVar129._4_4_);
      iVar40 = -(uint)(65536.0 <= auVar129._8_4_);
      iVar41 = -(uint)(65536.0 <= auVar129._12_4_);
      uVar4 = CONCAT13(uVar100,CONCAT12(uVar99,sVar6));
      uVar3 = CONCAT15(uVar102,CONCAT14(uVar101,uVar4));
      uVar10 = CONCAT13(uVar115,CONCAT12(uVar114,sVar11));
      uVar9 = CONCAT15(uVar117,CONCAT14(uVar116,uVar10));
      uVar15 = CONCAT13(uVar121,CONCAT12(uVar120,sVar16));
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar15));
      uVar90 = CONCAT17((short)*(ushort *)(pdVar57 + 0xe) >> 0xf,
                        (uint7)(((byte)((short)*(ushort *)(pdVar57 + 0xf) >> 0xf) & 0x80) << 0x18))
               & 0x80ffffffffffffff;
      auVar50[8] = SUB41(auVar129._8_4_,0);
      auVar50._0_8_ =
           CONCAT17((char)((uint)auVar129._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar129._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar129._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar129._4_4_,0),auVar129._0_4_)))) |
           0x7f8000007f800000;
      auVar50[9] = (char)((uint)auVar129._8_4_ >> 8);
      auVar50[10] = (byte)((uint)auVar129._8_4_ >> 0x10) | 0x80;
      auVar50[0xb] = (byte)((uint)auVar129._8_4_ >> 0x18) | 0x7f;
      auVar50[0xc] = SUB41(auVar129._12_4_,0);
      auVar50[0xd] = (char)((uint)auVar129._12_4_ >> 8);
      auVar50[0xe] = (byte)((uint)auVar129._12_4_ >> 0x10) | 0x80;
      auVar50[0xf] = (byte)((uint)auVar129._12_4_ >> 0x18) | 0x7f;
      auVar37[4] = (char)iVar39;
      auVar37._0_4_ = -(uint)(65536.0 <= auVar129._0_4_);
      auVar37[5] = (char)((uint)iVar39 >> 8);
      auVar37[6] = (char)((uint)iVar39 >> 0x10);
      auVar37[7] = (char)((uint)iVar39 >> 0x18);
      auVar37[8] = (char)iVar40;
      auVar37[9] = (char)((uint)iVar40 >> 8);
      auVar37[10] = (char)((uint)iVar40 >> 0x10);
      auVar37[0xb] = (char)((uint)iVar40 >> 0x18);
      auVar37[0xc] = (char)iVar41;
      auVar37[0xd] = (char)((uint)iVar41 >> 8);
      auVar37[0xe] = (char)((uint)iVar41 >> 0x10);
      auVar37[0xf] = (char)((uint)iVar41 >> 0x18);
      auVar129 = auVar129 ^ (auVar129 ^ auVar50) & auVar37;
      auVar49[8] = SUB41(auVar135._8_4_,0);
      auVar49._0_8_ =
           CONCAT17((char)((uint)auVar135._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar135._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar135._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar135._4_4_,0),auVar135._0_4_)))) |
           0x7f8000007f800000;
      auVar49[9] = (char)((uint)auVar135._8_4_ >> 8);
      auVar49[10] = (byte)((uint)auVar135._8_4_ >> 0x10) | 0x80;
      auVar49[0xb] = (byte)((uint)auVar135._8_4_ >> 0x18) | 0x7f;
      auVar49[0xc] = SUB41(auVar135._12_4_,0);
      auVar49[0xd] = (char)((uint)auVar135._12_4_ >> 8);
      auVar49[0xe] = (byte)((uint)auVar135._12_4_ >> 0x10) | 0x80;
      auVar49[0xf] = (byte)((uint)auVar135._12_4_ >> 0x18) | 0x7f;
      auVar26[4] = (char)iVar29;
      auVar26._0_4_ = -(uint)(65536.0 <= auVar135._0_4_);
      auVar26[5] = (char)((uint)iVar29 >> 8);
      auVar26[6] = (char)((uint)iVar29 >> 0x10);
      auVar26[7] = (char)((uint)iVar29 >> 0x18);
      auVar26[8] = (char)iVar31;
      auVar26[9] = (char)((uint)iVar31 >> 8);
      auVar26[10] = (char)((uint)iVar31 >> 0x10);
      auVar26[0xb] = (char)((uint)iVar31 >> 0x18);
      auVar26[0xc] = (char)iVar33;
      auVar26[0xd] = (char)((uint)iVar33 >> 8);
      auVar26[0xe] = (char)((uint)iVar33 >> 0x10);
      auVar26[0xf] = (char)((uint)iVar33 >> 0x18);
      auVar135 = auVar135 ^ (auVar135 ^ auVar49) & auVar26;
      auVar48[8] = SUB41(auVar136._8_4_,0);
      auVar48._0_8_ =
           CONCAT17((char)((uint)auVar136._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar136._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar136._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar136._4_4_,0),auVar136._0_4_)))) |
           0x7f8000007f800000;
      auVar48[9] = (char)((uint)auVar136._8_4_ >> 8);
      auVar48[10] = (byte)((uint)auVar136._8_4_ >> 0x10) | 0x80;
      auVar48[0xb] = (byte)((uint)auVar136._8_4_ >> 0x18) | 0x7f;
      auVar48[0xc] = SUB41(auVar136._12_4_,0);
      auVar48[0xd] = (char)((uint)auVar136._12_4_ >> 8);
      auVar48[0xe] = (byte)((uint)auVar136._12_4_ >> 0x10) | 0x80;
      auVar48[0xf] = (byte)((uint)auVar136._12_4_ >> 0x18) | 0x7f;
      auVar22[4] = (char)iVar23;
      auVar22._0_4_ = -(uint)(65536.0 <= auVar136._0_4_);
      auVar22[5] = (char)((uint)iVar23 >> 8);
      auVar22[6] = (char)((uint)iVar23 >> 0x10);
      auVar22[7] = (char)((uint)iVar23 >> 0x18);
      auVar22[8] = (char)iVar24;
      auVar22[9] = (char)((uint)iVar24 >> 8);
      auVar22[10] = (char)((uint)iVar24 >> 0x10);
      auVar22[0xb] = (char)((uint)iVar24 >> 0x18);
      auVar22[0xc] = (char)iVar25;
      auVar22[0xd] = (char)((uint)iVar25 >> 8);
      auVar22[0xe] = (char)((uint)iVar25 >> 0x10);
      auVar22[0xf] = (char)((uint)iVar25 >> 0x18);
      auVar136 = auVar136 ^ (auVar136 ^ auVar48) & auVar22;
      auVar42[8] = SUB41(auVar132._8_4_,0);
      auVar42._0_8_ =
           CONCAT17((char)((uint)auVar132._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar132._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar132._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar132._4_4_,0),auVar132._0_4_)))) |
           0x7f8000007f800000;
      auVar42[9] = (char)((uint)auVar132._8_4_ >> 8);
      auVar42[10] = (byte)((uint)auVar132._8_4_ >> 0x10) | 0x80;
      auVar42[0xb] = (byte)((uint)auVar132._8_4_ >> 0x18) | 0x7f;
      auVar42[0xc] = SUB41(auVar132._12_4_,0);
      auVar42[0xd] = (char)((uint)auVar132._12_4_ >> 8);
      auVar42[0xe] = (byte)((uint)auVar132._12_4_ >> 0x10) | 0x80;
      auVar42[0xf] = (byte)((uint)auVar132._12_4_ >> 0x18) | 0x7f;
      auVar93[4] = (char)iVar18;
      auVar93._0_4_ = -(uint)(65536.0 <= auVar132._0_4_);
      auVar93[5] = (char)((uint)iVar18 >> 8);
      auVar93[6] = (char)((uint)iVar18 >> 0x10);
      auVar93[7] = (char)((uint)iVar18 >> 0x18);
      auVar93[8] = (char)iVar19;
      auVar93[9] = (char)((uint)iVar19 >> 8);
      auVar93[10] = (char)((uint)iVar19 >> 0x10);
      auVar93[0xb] = (char)((uint)iVar19 >> 0x18);
      auVar93[0xc] = (char)iVar20;
      auVar93[0xd] = (char)((uint)iVar20 >> 8);
      auVar93[0xe] = (char)((uint)iVar20 >> 0x10);
      auVar93[0xf] = (char)((uint)iVar20 >> 0x18);
      auVar132 = auVar132 ^ (auVar132 ^ auVar42) & auVar93;
      fVar89 = (float)CONCAT13(auVar132[3] | (byte)(uVar90 >> 0x18),auVar132._0_3_);
      auVar91._0_8_ =
           CONCAT17(auVar132[7] | (byte)(uVar90 >> 0x38),
                    CONCAT16(auVar132[6],CONCAT15(auVar132[5],CONCAT14(auVar132[4],fVar89))));
      auVar91[8] = auVar132[8];
      auVar91[9] = auVar132[9];
      auVar91[10] = auVar132[10];
      auVar91[0xb] = auVar132[0xb] | (byte)((short)*(ushort *)(pdVar57 + 0xd) >> 0xf) & 0x80;
      auVar92[0xc] = auVar132[0xc];
      auVar92._0_12_ = auVar91;
      auVar92[0xd] = auVar132[0xd];
      auVar92[0xe] = auVar132[0xe];
      auVar92[0xf] = auVar132[0xf] | (byte)((short)*(ushort *)(pdVar57 + 0xc) >> 0xf) & 0x80;
      fVar126 = (float)CONCAT13(auVar129[3] | (byte)(sVar16 >> 0xf) & 0x80,auVar129._0_3_);
      auVar128._0_8_ =
           CONCAT17(auVar129[7] | (byte)((int)uVar15 >> 0x1f) & 0x80,
                    CONCAT16(auVar129[6],CONCAT15(auVar129[5],CONCAT14(auVar129[4],fVar126))));
      auVar128[8] = auVar129[8];
      auVar128[9] = auVar129[9];
      auVar128[10] = auVar129[10];
      auVar128[0xb] = auVar129[0xb] | (byte)((int6)uVar14 >> 0x2f) & 0x80;
      auVar130[0xc] = auVar129[0xc];
      auVar130._0_12_ = auVar128;
      auVar130[0xd] = auVar129[0xd];
      auVar130[0xe] = auVar129[0xe];
      auVar130[0xf] =
           auVar129[0xf] | (byte)((long)CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x3f) & 0x80;
      sVar16 = puVar59[0x1c];
      uVar120 = (undefined1)puVar59[0x18];
      uVar121 = (undefined1)((ushort)puVar59[0x18] >> 8);
      uVar122 = (undefined1)puVar59[0x14];
      uVar123 = (undefined1)((ushort)puVar59[0x14] >> 8);
      uVar124 = (undefined1)puVar59[0x10];
      uVar125 = (undefined1)((ushort)puVar59[0x10] >> 8);
      uVar1 = CONCAT12(uVar120,sVar16);
      uVar2 = CONCAT13(uVar121,uVar1);
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar2));
      sVar38 = puVar59[0xc];
      uVar149 = (undefined1)puVar59[8];
      uVar150 = (undefined1)((ushort)puVar59[8] >> 8);
      uVar151 = (undefined1)puVar59[4];
      uVar152 = (undefined1)((ushort)puVar59[4] >> 8);
      uVar153 = (undefined1)*puVar59;
      uVar154 = (undefined1)((ushort)*puVar59 >> 8);
      uVar7 = CONCAT12(uVar149,sVar38);
      uVar8 = CONCAT13(uVar150,uVar7);
      uVar35 = CONCAT15(uVar152,CONCAT14(uVar151,uVar8));
      uVar90 = CONCAT44((uint)(ushort)puVar59[0x38] << 0xd,(uint)(ushort)puVar59[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar44 = (float)((uVar7 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar45 = (float)((uVar8 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar155 = SUB41(fVar45,0);
      uVar156 = (undefined1)((uint)fVar45 >> 8);
      uVar157 = (undefined1)((uint)fVar45 >> 0x10);
      uVar158 = (undefined1)((uint)fVar45 >> 0x18);
      fVar46 = (float)(((ushort)((uint6)uVar35 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar159 = SUB41(fVar46,0);
      uVar160 = (undefined1)((uint)fVar46 >> 8);
      bVar161 = (byte)((uint)fVar46 >> 0x10);
      bVar162 = (byte)((uint)fVar46 >> 0x18);
      fVar47 = (float)(((ushort)(CONCAT17(uVar154,CONCAT16(uVar153,uVar35)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar163 = SUB41(fVar47,0);
      uVar164 = (undefined1)((uint)fVar47 >> 8);
      bVar165 = (byte)((uint)fVar47 >> 0x10);
      bVar166 = (byte)((uint)fVar47 >> 0x18);
      fVar28 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar30 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar138 = SUB41(fVar30,0);
      uVar139 = (undefined1)((uint)fVar30 >> 8);
      uVar140 = (undefined1)((uint)fVar30 >> 0x10);
      uVar141 = (undefined1)((uint)fVar30 >> 0x18);
      fVar32 = (float)(((ushort)((uint6)uVar14 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar142 = SUB41(fVar32,0);
      uVar143 = (undefined1)((uint)fVar32 >> 8);
      bVar106 = (byte)((uint)fVar32 >> 0x10);
      bVar144 = (byte)((uint)fVar32 >> 0x18);
      fVar34 = (float)(((ushort)(CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar145 = SUB41(fVar34,0);
      uVar146 = (undefined1)((uint)fVar34 >> 8);
      bVar147 = (byte)((uint)fVar34 >> 0x10);
      bVar148 = (byte)((uint)fVar34 >> 0x18);
      fVar67 = (float)(((ushort)puVar59[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar94 = (float)(((ushort)puVar59[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar99 = SUB41(fVar94,0);
      uVar100 = (undefined1)((uint)fVar94 >> 8);
      uVar101 = (undefined1)((uint)fVar94 >> 0x10);
      uVar102 = (undefined1)((uint)fVar94 >> 0x18);
      fVar107 = (float)(((ushort)puVar59[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar114 = SUB41(fVar107,0);
      uVar115 = (undefined1)((uint)fVar107 >> 8);
      bVar62 = (byte)((uint)fVar107 >> 0x10);
      bVar65 = (byte)((uint)fVar107 >> 0x18);
      fVar21 = (float)(((ushort)puVar59[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar116 = SUB41(fVar21,0);
      uVar117 = (undefined1)((uint)fVar21 >> 8);
      bVar66 = (byte)((uint)fVar21 >> 0x10);
      bVar105 = (byte)((uint)fVar21 >> 0x18);
      auVar72._0_4_ = (float)uVar90 * 5.192297e+33;
      auVar72._4_4_ = (float)(uVar90 >> 0x20) * 5.192297e+33;
      auVar72._8_4_ = (float)(((ushort)puVar59[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar72._12_4_ = (float)(((ushort)puVar59[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar137._0_4_ = -(uint)(65536.0 <= auVar72._0_4_);
      auVar137._4_4_ = -(uint)(65536.0 <= auVar72._4_4_);
      auVar137._8_4_ = -(uint)(65536.0 <= auVar72._8_4_);
      auVar137._12_4_ = -(uint)(65536.0 <= auVar72._12_4_);
      iVar18 = -(uint)(65536.0 <= fVar94);
      iVar19 = -(uint)(65536.0 <= fVar21);
      iVar20 = -(uint)(65536.0 <= fVar30);
      iVar23 = -(uint)(65536.0 <= fVar34);
      auVar96._0_4_ = -(uint)(65536.0 <= fVar44);
      auVar96._4_4_ = -(uint)(65536.0 <= fVar45);
      auVar96._8_4_ = -(uint)(65536.0 <= fVar46);
      auVar96._12_4_ = -(uint)(65536.0 <= fVar47);
      auVar110._0_8_ =
           CONCAT17(uVar158,CONCAT16(uVar157,CONCAT15(uVar156,CONCAT14(uVar155,fVar44)))) |
           0x7f8000007f800000;
      auVar110[8] = uVar159;
      auVar110[9] = uVar160;
      auVar110[10] = bVar161 | 0x80;
      auVar110[0xb] = bVar162 | 0x7f;
      auVar110[0xc] = uVar163;
      auVar110[0xd] = uVar164;
      auVar110[0xe] = bVar165 | 0x80;
      auVar110[0xf] = bVar166 | 0x7f;
      uVar15 = CONCAT13(uVar121,CONCAT12(uVar120,sVar16));
      uVar14 = CONCAT15(uVar123,CONCAT14(uVar122,uVar15));
      uVar36 = CONCAT13(uVar150,CONCAT12(uVar149,sVar38));
      uVar35 = CONCAT15(uVar152,CONCAT14(uVar151,uVar36));
      uVar90 = CONCAT17((short)puVar59[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar59[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar43[4] = uVar155;
      auVar43._0_4_ = fVar44;
      auVar43[5] = uVar156;
      auVar43[6] = uVar157;
      auVar43[7] = uVar158;
      auVar43[8] = uVar159;
      auVar43[9] = uVar160;
      auVar43[10] = bVar161;
      auVar43[0xb] = bVar162;
      auVar43[0xc] = uVar163;
      auVar43[0xd] = uVar164;
      auVar43[0xe] = bVar165;
      auVar43[0xf] = bVar166;
      auVar97[4] = uVar155;
      auVar97._0_4_ = fVar44;
      auVar97[5] = uVar156;
      auVar97[6] = uVar157;
      auVar97[7] = uVar158;
      auVar97[8] = uVar159;
      auVar97[9] = uVar160;
      auVar97[10] = bVar161;
      auVar97[0xb] = bVar162;
      auVar97[0xc] = uVar163;
      auVar97[0xd] = uVar164;
      auVar97[0xe] = bVar165;
      auVar97[0xf] = bVar166;
      auVar97 = auVar97 ^ (auVar43 ^ auVar110) & auVar96;
      auVar111[0xc] = (char)iVar23;
      auVar111._8_4_ = -(uint)(65536.0 <= fVar32);
      auVar111[0xd] = (char)((uint)iVar23 >> 8);
      auVar111[0xe] = (char)((uint)iVar23 >> 0x10);
      auVar111[0xf] = (char)((uint)iVar23 >> 0x18);
      auVar111[4] = (char)iVar20;
      auVar111._0_4_ = -(uint)(65536.0 <= fVar28);
      auVar111[5] = (char)((uint)iVar20 >> 8);
      auVar111[6] = (char)((uint)iVar20 >> 0x10);
      auVar111[7] = (char)((uint)iVar20 >> 0x18);
      auVar27[4] = uVar138;
      auVar27._0_4_ = fVar28;
      auVar27[5] = uVar139;
      auVar27[6] = uVar140;
      auVar27[7] = uVar141;
      auVar27[8] = uVar142;
      auVar27[9] = uVar143;
      auVar27[10] = bVar106;
      auVar27[0xb] = bVar144;
      auVar27[0xc] = uVar145;
      auVar27[0xd] = uVar146;
      auVar27[0xe] = bVar147;
      auVar27[0xf] = bVar148;
      auVar53[8] = uVar142;
      auVar53._0_8_ =
           CONCAT17(uVar141,CONCAT16(uVar140,CONCAT15(uVar139,CONCAT14(uVar138,fVar28)))) |
           0x7f8000007f800000;
      auVar53[9] = uVar143;
      auVar53[10] = bVar106 | 0x80;
      auVar53[0xb] = bVar144 | 0x7f;
      auVar53[0xc] = uVar145;
      auVar53[0xd] = uVar146;
      auVar53[0xe] = bVar147 | 0x80;
      auVar53[0xf] = bVar148 | 0x7f;
      auVar112[4] = uVar138;
      auVar112._0_4_ = fVar28;
      auVar112[5] = uVar139;
      auVar112[6] = uVar140;
      auVar112[7] = uVar141;
      auVar112[8] = uVar142;
      auVar112[9] = uVar143;
      auVar112[10] = bVar106;
      auVar112[0xb] = bVar144;
      auVar112[0xc] = uVar145;
      auVar112[0xd] = uVar146;
      auVar112[0xe] = bVar147;
      auVar112[0xf] = bVar148;
      auVar112 = auVar112 ^ (auVar27 ^ auVar53) & auVar111;
      auVar133[0xc] = (char)iVar19;
      auVar133._8_4_ = -(uint)(65536.0 <= fVar107);
      auVar133[0xd] = (char)((uint)iVar19 >> 8);
      auVar133[0xe] = (char)((uint)iVar19 >> 0x10);
      auVar133[0xf] = (char)((uint)iVar19 >> 0x18);
      auVar133[4] = (char)iVar18;
      auVar133._0_4_ = -(uint)(65536.0 <= fVar67);
      auVar133[5] = (char)((uint)iVar18 >> 8);
      auVar133[6] = (char)((uint)iVar18 >> 0x10);
      auVar133[7] = (char)((uint)iVar18 >> 0x18);
      auVar17[4] = uVar99;
      auVar17._0_4_ = fVar67;
      auVar17[5] = uVar100;
      auVar17[6] = uVar101;
      auVar17[7] = uVar102;
      auVar17[8] = uVar114;
      auVar17[9] = uVar115;
      auVar17[10] = bVar62;
      auVar17[0xb] = bVar65;
      auVar17[0xc] = uVar116;
      auVar17[0xd] = uVar117;
      auVar17[0xe] = bVar66;
      auVar17[0xf] = bVar105;
      auVar52[8] = uVar114;
      auVar52._0_8_ =
           CONCAT17(uVar102,CONCAT16(uVar101,CONCAT15(uVar100,CONCAT14(uVar99,fVar67)))) |
           0x7f8000007f800000;
      auVar52[9] = uVar115;
      auVar52[10] = bVar62 | 0x80;
      auVar52[0xb] = bVar65 | 0x7f;
      auVar52[0xc] = uVar116;
      auVar52[0xd] = uVar117;
      auVar52[0xe] = bVar66 | 0x80;
      auVar52[0xf] = bVar105 | 0x7f;
      auVar134[4] = uVar99;
      auVar134._0_4_ = fVar67;
      auVar134[5] = uVar100;
      auVar134[6] = uVar101;
      auVar134[7] = uVar102;
      auVar134[8] = uVar114;
      auVar134[9] = uVar115;
      auVar134[10] = bVar62;
      auVar134[0xb] = bVar65;
      auVar134[0xc] = uVar116;
      auVar134[0xd] = uVar117;
      auVar134[0xe] = bVar66;
      auVar134[0xf] = bVar105;
      auVar134 = auVar134 ^ (auVar17 ^ auVar52) & auVar133;
      auVar51[8] = SUB41(auVar72._8_4_,0);
      auVar51._0_8_ =
           CONCAT17((char)((uint)auVar72._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar72._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar72._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar72._4_4_,0),auVar72._0_4_)))) |
           0x7f8000007f800000;
      auVar51[9] = (char)((uint)auVar72._8_4_ >> 8);
      auVar51[10] = (byte)((uint)auVar72._8_4_ >> 0x10) | 0x80;
      auVar51[0xb] = (byte)((uint)auVar72._8_4_ >> 0x18) | 0x7f;
      auVar51[0xc] = SUB41(auVar72._12_4_,0);
      auVar51[0xd] = (char)((uint)auVar72._12_4_ >> 8);
      auVar51[0xe] = (byte)((uint)auVar72._12_4_ >> 0x10) | 0x80;
      auVar51[0xf] = (byte)((uint)auVar72._12_4_ >> 0x18) | 0x7f;
      auVar72 = auVar72 ^ (auVar72 ^ auVar51) & auVar137;
      fVar67 = (float)CONCAT13(auVar72[3] | (byte)((short)puVar59[0x3c] >> 0xf) & 0x80,auVar72._0_3_
                              );
      auVar69._0_8_ =
           CONCAT17(auVar72[7] | (byte)((short)puVar59[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar72[6],CONCAT15(auVar72[5],CONCAT14(auVar72[4],fVar67))));
      auVar69[8] = auVar72[8];
      auVar69[9] = auVar72[9];
      auVar69[10] = auVar72[10];
      auVar69[0xb] = auVar72[0xb] | (byte)((short)puVar59[0x34] >> 0xf) & 0x80;
      auVar73[0xc] = auVar72[0xc];
      auVar73._0_12_ = auVar69;
      auVar73[0xd] = auVar72[0xd];
      auVar73[0xe] = auVar72[0xe];
      auVar73[0xf] = auVar72[0xf] | (byte)((short)puVar59[0x30] >> 0xf) & 0x80;
      fVar107 = (float)CONCAT13(auVar112[3] | (byte)(sVar16 >> 0xf) & 0x80,auVar112._0_3_);
      auVar109._0_8_ =
           CONCAT17(auVar112[7] | (byte)((int)uVar15 >> 0x1f) & 0x80,
                    CONCAT16(auVar112[6],CONCAT15(auVar112[5],CONCAT14(auVar112[4],fVar107))));
      auVar109[8] = auVar112[8];
      auVar109[9] = auVar112[9];
      auVar109[10] = auVar112[10];
      auVar109[0xb] = auVar112[0xb] | (byte)((int6)uVar14 >> 0x2f) & 0x80;
      auVar113[0xc] = auVar112[0xc];
      auVar113._0_12_ = auVar109;
      auVar113[0xd] = auVar112[0xd];
      auVar113[0xe] = auVar112[0xe];
      auVar113[0xf] =
           auVar112[0xf] | (byte)((long)CONCAT17(uVar125,CONCAT16(uVar124,uVar14)) >> 0x3f) & 0x80;
      fVar94 = (float)CONCAT13(auVar97[3] | (byte)(sVar38 >> 0xf) & 0x80,auVar97._0_3_);
      auVar95._0_8_ =
           CONCAT17(auVar97[7] | (byte)((int)uVar36 >> 0x1f) & 0x80,
                    CONCAT16(auVar97[6],CONCAT15(auVar97[5],CONCAT14(auVar97[4],fVar94))));
      auVar95[8] = auVar97[8];
      auVar95[9] = auVar97[9];
      auVar95[10] = auVar97[10];
      auVar95[0xb] = auVar97[0xb] | (byte)((int6)uVar35 >> 0x2f) & 0x80;
      auVar98[0xc] = auVar97[0xc];
      auVar98._0_12_ = auVar95;
      auVar98[0xd] = auVar97[0xd];
      auVar98[0xe] = auVar97[0xe];
      auVar98[0xf] = auVar97[0xf] |
                     (byte)((long)CONCAT17(uVar154,CONCAT16(uVar153,uVar35)) >> 0x3f) & 0x80;
      bVar105 = -((float)CONCAT13(auVar136[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,auVar136._8_3_)
                 == (float)CONCAT13(auVar134[0xb] | (byte)((short)puVar59[0x24] >> 0xf) & 0x80,
                                    auVar134._8_3_));
      bVar106 = -((float)CONCAT13(auVar136[0xf] |
                                  (byte)((long)CONCAT17(uVar104,CONCAT16(uVar103,uVar3)) >> 0x3f) &
                                  0x80,auVar136._12_3_) ==
                 (float)CONCAT13(auVar134[0xf] | (byte)((short)puVar59[0x20] >> 0xf) & 0x80,
                                 auVar134._12_3_));
      cVar61 = -(fVar89 == fVar67);
      bVar62 = -((float)((ulong)auVar91._0_8_ >> 0x20) == (float)((ulong)auVar69._0_8_ >> 0x20));
      cVar63 = -(auVar91._8_4_ == auVar69._8_4_);
      cVar64 = -(auVar92._12_4_ == auVar73._12_4_);
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar136[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar136._4_3_) ==
                               (float)CONCAT13(auVar134[7] | (byte)(uVar90 >> 0x38),auVar134._4_3_))
                              ,-(uint)((float)CONCAT13(auVar136[3] | (byte)(sVar6 >> 0xf) & 0x80,
                                                       auVar136._0_3_) ==
                                      (float)CONCAT13(auVar134[3] | (byte)(uVar90 >> 0x18),
                                                      auVar134._0_3_))) & 0xffff0000ffff;
      bVar65 = (byte)uVar5;
      bVar66 = (byte)(uVar5 >> 0x20);
      auVar74._0_8_ =
           CONCAT17(bVar106,CONCAT16(bVar105,CONCAT15(bVar66,CONCAT14(bVar65,CONCAT13(cVar64,
                                                  CONCAT12(cVar63,CONCAT11(bVar62,cVar61))))))) &
           0x8040201008040201;
      auVar74[8] = -((float)CONCAT13(auVar135[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar135._0_3_) ==
                    fVar107) & 1;
      auVar74[9] = -((float)CONCAT13(auVar135[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,auVar135._4_3_
                                    ) == (float)((ulong)auVar109._0_8_ >> 0x20)) & 2;
      auVar74[10] = -((float)CONCAT13(auVar135[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80,
                                      auVar135._8_3_) == auVar109._8_4_) & 4;
      auVar74[0xb] = -((float)CONCAT13(auVar135[0xf] |
                                       (byte)((long)CONCAT17(uVar119,CONCAT16(uVar118,uVar9)) >>
                                             0x3f) & 0x80,auVar135._12_3_) == auVar113._12_4_) & 8;
      auVar74[0xc] = -(fVar126 == fVar94) & 0x10;
      auVar74[0xd] = -((float)((ulong)auVar128._0_8_ >> 0x20) ==
                      (float)((ulong)auVar95._0_8_ >> 0x20)) & 0x20;
      auVar74[0xe] = -(auVar128._8_4_ == auVar95._8_4_) & 0x40;
      auVar74[0xf] = -(auVar130._12_4_ == auVar98._12_4_) & 0x80;
      auVar93 = NEON_ext(auVar74,auVar74,8,1);
      auVar54._1_13_ = auVar74._3_13_;
      auVar54[0] = bVar62 & 2;
      auVar77._5_11_ = auVar74._5_11_;
      auVar77._0_5_ = CONCAT14(cVar63,auVar54._0_4_ << 0x10) & 0x4ffffffff;
      auVar79._7_9_ = auVar74._7_9_;
      auVar79._0_7_ = CONCAT16(cVar64,auVar77._0_6_) & 0x8ffffffffffff;
      auVar81._9_7_ = auVar74._9_7_;
      auVar81._0_8_ = auVar79._0_8_;
      auVar81[8] = bVar65 & 0x10;
      auVar83._11_5_ = auVar74._11_5_;
      auVar83._0_10_ = auVar81._0_10_;
      auVar83[10] = bVar66 & 0x20;
      auVar85._13_3_ = auVar74._13_3_;
      auVar85._0_12_ = auVar83._0_12_;
      auVar85[0xc] = bVar105 & 0x40;
      auVar87._0_14_ = auVar85._0_14_;
      auVar87[0xe] = bVar106 & 0x80;
      auVar87[0xf] = auVar74[0xf];
      auVar75._2_14_ = auVar87._2_14_;
      auVar75._0_2_ = CONCAT11(auVar93[0],cVar61) & 0xff01;
      auVar76._4_12_ = auVar87._4_12_;
      auVar76._0_4_ = CONCAT13(auVar93[1],auVar75._0_3_);
      auVar78._6_10_ = auVar87._6_10_;
      auVar78._0_6_ = CONCAT15(auVar93[2],auVar76._0_5_);
      auVar80._8_8_ = auVar87._8_8_;
      auVar80._0_8_ = CONCAT17(auVar93[3],auVar78._0_7_);
      auVar82._10_6_ = auVar87._10_6_;
      auVar82._0_10_ = CONCAT19(auVar93[4],auVar80._0_9_);
      auVar84._12_4_ = auVar87._12_4_;
      auVar70._0_11_ = auVar82._0_11_;
      auVar70[0xb] = auVar93[5];
      auVar84._0_12_ = auVar70;
      auVar86._14_2_ = auVar87._14_2_;
      auVar71._0_13_ = auVar84._0_13_;
      auVar71[0xd] = auVar93[6];
      auVar86._0_14_ = auVar71;
      auVar88._0_15_ = auVar86._0_15_;
      auVar88[0xf] = auVar93[7];
      cVar61 = -((ushort)(auVar75._0_2_ + (short)((uint)auVar76._0_4_ >> 0x10) +
                          (short)((uint6)auVar78._0_6_ >> 0x20) +
                          (short)((ulong)auVar80._0_8_ >> 0x30) +
                          (short)((unkuint10)auVar82._0_10_ >> 0x40) + auVar70._10_2_ +
                          auVar71._12_2_ + auVar88._14_2_) == -1);
      goto LAB_109edadac;
    }
    pfVar60 = (float *)param_3[1];
    if (*(float *)(pdVar57 + 0xf) == pfVar60[0x1e]) {
      cVar61 = '\0';
      if (((((*(float *)(pdVar57 + 0xe) != pfVar60[0x1c]) ||
            (*(float *)(pdVar57 + 0xd) != pfVar60[0x1a])) ||
           (*(float *)(pdVar57 + 0xc) != pfVar60[0x18])) ||
          ((((*(float *)(pdVar57 + 0xb) != pfVar60[0x16] ||
             (*(float *)(pdVar57 + 10) != pfVar60[0x14])) ||
            ((*(float *)(pdVar57 + 9) != pfVar60[0x12] ||
             ((*(float *)(pdVar57 + 8) != pfVar60[0x10] || (*(float *)(pdVar57 + 7) != pfVar60[0xe])
              ))))) || (*(float *)(pdVar57 + 6) != pfVar60[0xc])))) ||
         ((((*(float *)(pdVar57 + 5) != pfVar60[10] || (*(float *)(pdVar57 + 4) != pfVar60[8])) ||
           (*(float *)(pdVar57 + 3) != pfVar60[6])) ||
          ((*(float *)(pdVar57 + 2) != pfVar60[4] || (*(float *)(pdVar57 + 1) != pfVar60[2]))))))
      goto LAB_109edadac;
      bVar56 = *(float *)pdVar57 == *pfVar60;
LAB_109edada8:
      cVar61 = -bVar56;
      goto LAB_109edadac;
    }
  }
  cVar61 = '\0';
LAB_109edadac:
  *param_1 = cVar61;
  return;
}



/* Entry: 109edadb4; end: 109edb3eb;  */

void FUN_109edadb4(char *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pdVar3 = (double *)*param_3;
  if (param_2 == 0x40) {
    bVar1 = *pdVar3 == *(double *)param_3[1] && pdVar3[1] == ((double *)param_3[1])[1];
  }
  else if (param_2 == 0x20) {
    fVar6 = ((float *)param_3[1])[2];
    bVar1 = false;
    if ((*(float *)pdVar3 == *(float *)param_3[1]) &&
       (bVar1 = false, !NAN(*(float *)(pdVar3 + 1)) && !NAN(fVar6))) {
      bVar1 = *(float *)(pdVar3 + 1) == fVar6;
    }
  }
  else {
    fVar6 = (float)(((int)*(short *)pdVar3 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    fVar7 = (float)(((int)*(short *)(pdVar3 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    fVar7 = (float)((uint)fVar7 | (int)*(short *)(pdVar3 + 1) & 0x80000000U);
    uVar4 = (uint)*(short *)param_3[1];
    fVar8 = (float)((uVar4 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    uVar2 = (uint)((short *)param_3[1])[4];
    fVar5 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar5) {
      fVar5 = (float)((uint)fVar5 | 0x7f800000);
    }
    fVar5 = (float)((uint)fVar5 | uVar2 & 0x80000000);
    bVar1 = false;
    if (((float)((uint)fVar6 | (int)*(short *)pdVar3 & 0x80000000U) ==
         (float)((uint)fVar8 | uVar4 & 0x80000000)) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5)))
    {
      bVar1 = fVar7 == fVar5;
    }
  }
  *param_1 = -bVar1;
  return;
}



/* Entry: 109edb3ec; end: 109edb653;  */

void FUN_109edb3ec(char *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  ushort uVar6;
  short sVar7;
  uint3 uVar8;
  uint uVar9;
  undefined6 uVar10;
  undefined4 uVar11;
  uint6 uVar12;
  short sVar13;
  undefined1 auVar14 [16];
  undefined6 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  short sVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  bool bVar33;
  bool bVar34;
  double *pdVar35;
  char cVar36;
  float *pfVar37;
  undefined2 *puVar38;
  double *pdVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  float fVar52;
  ulong uVar53;
  undefined1 auVar55 [16];
  float fVar57;
  ulong uVar58;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  byte bVar69;
  byte bVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  byte bVar73;
  byte bVar74;
  undefined1 auVar54 [12];
  undefined1 auVar56 [16];
  undefined1 auVar59 [12];
  undefined1 auVar62 [16];
  
  pdVar35 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar39 = (double *)param_3[1];
    if (pdVar35[7] != pdVar39[7]) goto LAB_109edb4ec;
    cVar36 = '\0';
    uVar6 = NEON_uminv(CONCAT17((char)(-(ulong)(pdVar35[6] == pdVar39[6]) >> 8),
                                CONCAT16((char)-(ulong)(pdVar35[6] == pdVar39[6]),
                                         CONCAT15((char)(-(ulong)(pdVar35[5] == pdVar39[5]) >> 8),
                                                  CONCAT14((char)-(ulong)(pdVar35[5] == pdVar39[5]),
                                                           CONCAT13((char)(-(ulong)(pdVar35[4] ==
                                                                                   pdVar39[4]) >> 8)
                                                                    ,CONCAT12((char)-(ulong)(pdVar35
                                                  [4] == pdVar39[4]),
                                                  -(ushort)(pdVar35[3] == pdVar39[3]))))))),2);
    if ((uVar6 & 1) == 0) goto LAB_109edb648;
    bVar33 = false;
    if ((pdVar35[2] == pdVar39[2]) && (bVar33 = false, !NAN(pdVar35[1]) && !NAN(pdVar39[1]))) {
      bVar33 = pdVar35[1] == pdVar39[1];
    }
    if (!bVar33) goto LAB_109edb648;
    bVar33 = *pdVar35 == *pdVar39;
  }
  else {
    if (param_2 == 0x20) {
      pfVar37 = (float *)param_3[1];
      if (*(float *)(pdVar35 + 7) == pfVar37[0xe]) {
        bVar33 = false;
        if ((*(float *)(pdVar35 + 6) == pfVar37[0xc]) &&
           (bVar33 = false, !NAN(*(float *)(pdVar35 + 5)) && !NAN(pfVar37[10]))) {
          bVar33 = *(float *)(pdVar35 + 5) == pfVar37[10];
        }
        bVar34 = false;
        if ((bVar33) && (bVar34 = false, !NAN(*(float *)(pdVar35 + 4)) && !NAN(pfVar37[8]))) {
          bVar34 = *(float *)(pdVar35 + 4) == pfVar37[8];
        }
        bVar33 = false;
        if ((bVar34) && (bVar33 = false, !NAN(*(float *)(pdVar35 + 3)) && !NAN(pfVar37[6]))) {
          bVar33 = *(float *)(pdVar35 + 3) == pfVar37[6];
        }
        bVar34 = false;
        if ((bVar33) && (bVar34 = false, !NAN(*(float *)(pdVar35 + 2)) && !NAN(pfVar37[4]))) {
          bVar34 = *(float *)(pdVar35 + 2) == pfVar37[4];
        }
        bVar33 = false;
        if ((bVar34) && (bVar33 = false, !NAN(*(float *)(pdVar35 + 1)) && !NAN(pfVar37[2]))) {
          bVar33 = *(float *)(pdVar35 + 1) == pfVar37[2];
        }
        if (bVar33) {
          bVar33 = *(float *)pdVar35 == *pfVar37;
          goto LAB_109edb644;
        }
      }
LAB_109edb4ec:
      cVar36 = '\0';
      goto LAB_109edb648;
    }
    puVar38 = (undefined2 *)param_3[1];
    sVar7 = *(short *)(pdVar35 + 7);
    uVar40 = (undefined1)*(undefined2 *)(pdVar35 + 6);
    uVar41 = (undefined1)((ushort)*(undefined2 *)(pdVar35 + 6) >> 8);
    uVar42 = (undefined1)*(undefined2 *)(pdVar35 + 5);
    uVar43 = (undefined1)((ushort)*(undefined2 *)(pdVar35 + 5) >> 8);
    uVar44 = (undefined1)*(undefined2 *)(pdVar35 + 4);
    uVar45 = (undefined1)((ushort)*(undefined2 *)(pdVar35 + 4) >> 8);
    sVar13 = *(short *)(pdVar35 + 3);
    uVar46 = (undefined1)*(undefined2 *)(pdVar35 + 2);
    uVar47 = (undefined1)((ushort)*(undefined2 *)(pdVar35 + 2) >> 8);
    uVar1 = CONCAT12(uVar40,sVar7);
    uVar2 = CONCAT13(uVar41,uVar1);
    uVar3 = CONCAT15(uVar43,CONCAT14(uVar42,uVar2));
    uVar48 = (undefined1)*(undefined2 *)(pdVar35 + 1);
    uVar49 = (undefined1)((ushort)*(undefined2 *)(pdVar35 + 1) >> 8);
    uVar50 = (undefined1)*(undefined2 *)pdVar35;
    uVar51 = (undefined1)((ushort)*(undefined2 *)pdVar35 >> 8);
    uVar8 = CONCAT12(uVar46,sVar13);
    uVar9 = CONCAT13(uVar47,uVar8);
    uVar10 = CONCAT15(uVar49,CONCAT14(uVar48,uVar9));
    uVar53 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    uVar58 = CONCAT44((uVar9 >> 0x10) << 0xd,(uVar8 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    auVar60._0_4_ = (float)uVar58 * 5.192297e+33;
    auVar60._4_4_ = (float)(uVar58 >> 0x20) * 5.192297e+33;
    auVar60._8_4_ = (float)(((ushort)((uint6)uVar10 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar60._12_4_ =
         (float)(((ushort)(CONCAT17(uVar51,CONCAT16(uVar50,uVar10)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    auVar55._0_4_ = (float)uVar53 * 5.192297e+33;
    auVar55._4_4_ = (float)(uVar53 >> 0x20) * 5.192297e+33;
    auVar55._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar55._12_4_ =
         (float)(((ushort)(CONCAT17(uVar45,CONCAT16(uVar44,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    iVar19 = -(uint)(65536.0 <= auVar55._4_4_);
    iVar20 = -(uint)(65536.0 <= auVar55._8_4_);
    iVar21 = -(uint)(65536.0 <= auVar55._12_4_);
    iVar24 = -(uint)(65536.0 <= auVar60._4_4_);
    iVar25 = -(uint)(65536.0 <= auVar60._8_4_);
    iVar27 = -(uint)(65536.0 <= auVar60._12_4_);
    uVar4 = CONCAT13(uVar41,CONCAT12(uVar40,sVar7));
    uVar3 = CONCAT15(uVar43,CONCAT14(uVar42,uVar4));
    uVar11 = CONCAT13(uVar47,CONCAT12(uVar46,sVar13));
    uVar10 = CONCAT15(uVar49,CONCAT14(uVar48,uVar11));
    auVar32[8] = SUB41(auVar60._8_4_,0);
    auVar32._0_8_ =
         CONCAT17((char)((uint)auVar60._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar60._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar60._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar60._4_4_,0),auVar60._0_4_)))) |
         0x7f8000007f800000;
    auVar32[9] = (char)((uint)auVar60._8_4_ >> 8);
    auVar32[10] = (byte)((uint)auVar60._8_4_ >> 0x10) | 0x80;
    auVar32[0xb] = (byte)((uint)auVar60._8_4_ >> 0x18) | 0x7f;
    auVar32[0xc] = SUB41(auVar60._12_4_,0);
    auVar32[0xd] = (char)((uint)auVar60._12_4_ >> 8);
    auVar32[0xe] = (byte)((uint)auVar60._12_4_ >> 0x10) | 0x80;
    auVar32[0xf] = (byte)((uint)auVar60._12_4_ >> 0x18) | 0x7f;
    auVar22[4] = (char)iVar24;
    auVar22._0_4_ = -(uint)(65536.0 <= auVar60._0_4_);
    auVar22[5] = (char)((uint)iVar24 >> 8);
    auVar22[6] = (char)((uint)iVar24 >> 0x10);
    auVar22[7] = (char)((uint)iVar24 >> 0x18);
    auVar22[8] = (char)iVar25;
    auVar22[9] = (char)((uint)iVar25 >> 8);
    auVar22[10] = (char)((uint)iVar25 >> 0x10);
    auVar22[0xb] = (char)((uint)iVar25 >> 0x18);
    auVar22[0xc] = (char)iVar27;
    auVar22[0xd] = (char)((uint)iVar27 >> 8);
    auVar22[0xe] = (char)((uint)iVar27 >> 0x10);
    auVar22[0xf] = (char)((uint)iVar27 >> 0x18);
    auVar60 = auVar60 ^ (auVar60 ^ auVar32) & auVar22;
    auVar30[8] = SUB41(auVar55._8_4_,0);
    auVar30._0_8_ =
         CONCAT17((char)((uint)auVar55._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar55._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar55._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar55._4_4_,0),auVar55._0_4_)))) |
         0x7f8000007f800000;
    auVar30[9] = (char)((uint)auVar55._8_4_ >> 8);
    auVar30[10] = (byte)((uint)auVar55._8_4_ >> 0x10) | 0x80;
    auVar30[0xb] = (byte)((uint)auVar55._8_4_ >> 0x18) | 0x7f;
    auVar30[0xc] = SUB41(auVar55._12_4_,0);
    auVar30[0xd] = (char)((uint)auVar55._12_4_ >> 8);
    auVar30[0xe] = (byte)((uint)auVar55._12_4_ >> 0x10) | 0x80;
    auVar30[0xf] = (byte)((uint)auVar55._12_4_ >> 0x18) | 0x7f;
    auVar17[4] = (char)iVar19;
    auVar17._0_4_ = -(uint)(65536.0 <= auVar55._0_4_);
    auVar17[5] = (char)((uint)iVar19 >> 8);
    auVar17[6] = (char)((uint)iVar19 >> 0x10);
    auVar17[7] = (char)((uint)iVar19 >> 0x18);
    auVar17[8] = (char)iVar20;
    auVar17[9] = (char)((uint)iVar20 >> 8);
    auVar17[10] = (char)((uint)iVar20 >> 0x10);
    auVar17[0xb] = (char)((uint)iVar20 >> 0x18);
    auVar17[0xc] = (char)iVar21;
    auVar17[0xd] = (char)((uint)iVar21 >> 8);
    auVar17[0xe] = (char)((uint)iVar21 >> 0x10);
    auVar17[0xf] = (char)((uint)iVar21 >> 0x18);
    auVar55 = auVar55 ^ (auVar55 ^ auVar30) & auVar17;
    sVar18 = puVar38[0xc];
    uVar40 = (undefined1)puVar38[8];
    uVar41 = (undefined1)((ushort)puVar38[8] >> 8);
    uVar42 = (undefined1)puVar38[4];
    uVar43 = (undefined1)((ushort)puVar38[4] >> 8);
    uVar46 = (undefined1)*puVar38;
    uVar47 = (undefined1)((ushort)*puVar38 >> 8);
    uVar1 = CONCAT12(uVar40,sVar18);
    uVar2 = CONCAT13(uVar41,uVar1);
    uVar15 = CONCAT15(uVar43,CONCAT14(uVar42,uVar2));
    uVar53 = CONCAT44((uint)(ushort)puVar38[0x18] << 0xd,(uint)(ushort)puVar38[0x1c] << 0xd) &
             0xfffffff0fffffff;
    fVar52 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
    fVar57 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
    uVar48 = SUB41(fVar57,0);
    uVar49 = (undefined1)((uint)fVar57 >> 8);
    uVar65 = (undefined1)((uint)fVar57 >> 0x10);
    uVar66 = (undefined1)((uint)fVar57 >> 0x18);
    fVar26 = (float)(((ushort)((uint6)uVar15 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    uVar67 = SUB41(fVar26,0);
    uVar68 = (undefined1)((uint)fVar26 >> 8);
    bVar69 = (byte)((uint)fVar26 >> 0x10);
    bVar70 = (byte)((uint)fVar26 >> 0x18);
    fVar28 = (float)(((ushort)(CONCAT17(uVar47,CONCAT16(uVar46,uVar15)) >> 0x30) & 0x7fff) << 0xd) *
             5.192297e+33;
    uVar71 = SUB41(fVar28,0);
    uVar72 = (undefined1)((uint)fVar28 >> 8);
    bVar73 = (byte)((uint)fVar28 >> 0x10);
    bVar74 = (byte)((uint)fVar28 >> 0x18);
    auVar61._0_4_ = (float)uVar53 * 5.192297e+33;
    auVar61._4_4_ = (float)(uVar53 >> 0x20) * 5.192297e+33;
    auVar61._8_4_ = (float)(((ushort)puVar38[0x14] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar61._12_4_ = (float)(((ushort)puVar38[0x10] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar63._0_4_ = -(uint)(65536.0 <= fVar52);
    auVar63._4_4_ = -(uint)(65536.0 <= fVar57);
    auVar63._8_4_ = -(uint)(65536.0 <= fVar26);
    auVar63._12_4_ = -(uint)(65536.0 <= fVar28);
    uVar16 = CONCAT13(uVar41,CONCAT12(uVar40,sVar18));
    uVar15 = CONCAT15(uVar43,CONCAT14(uVar42,uVar16));
    uVar53 = CONCAT17((short)puVar38[0x18] >> 0xf,
                      (uint7)(((byte)((short)puVar38[0x1c] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    auVar23[4] = uVar48;
    auVar23._0_4_ = fVar52;
    auVar23[5] = uVar49;
    auVar23[6] = uVar65;
    auVar23[7] = uVar66;
    auVar23[8] = uVar67;
    auVar23[9] = uVar68;
    auVar23[10] = bVar69;
    auVar23[0xb] = bVar70;
    auVar23[0xc] = uVar71;
    auVar23[0xd] = uVar72;
    auVar23[0xe] = bVar73;
    auVar23[0xf] = bVar74;
    auVar29[8] = uVar67;
    auVar29._0_8_ =
         CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar49,CONCAT14(uVar48,fVar52)))) |
         0x7f8000007f800000;
    auVar29[9] = uVar68;
    auVar29[10] = bVar69 | 0x80;
    auVar29[0xb] = bVar70 | 0x7f;
    auVar29[0xc] = uVar71;
    auVar29[0xd] = uVar72;
    auVar29[0xe] = bVar73 | 0x80;
    auVar29[0xf] = bVar74 | 0x7f;
    auVar64[4] = uVar48;
    auVar64._0_4_ = fVar52;
    auVar64[5] = uVar49;
    auVar64[6] = uVar65;
    auVar64[7] = uVar66;
    auVar64[8] = uVar67;
    auVar64[9] = uVar68;
    auVar64[10] = bVar69;
    auVar64[0xb] = bVar70;
    auVar64[0xc] = uVar71;
    auVar64[0xd] = uVar72;
    auVar64[0xe] = bVar73;
    auVar64[0xf] = bVar74;
    auVar64 = auVar64 ^ (auVar23 ^ auVar29) & auVar63;
    auVar31[8] = SUB41(auVar61._8_4_,0);
    auVar31._0_8_ =
         CONCAT17((char)((uint)auVar61._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar61._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar61._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar61._4_4_,0),auVar61._0_4_)))) |
         0x7f8000007f800000;
    auVar31[9] = (char)((uint)auVar61._8_4_ >> 8);
    auVar31[10] = (byte)((uint)auVar61._8_4_ >> 0x10) | 0x80;
    auVar31[0xb] = (byte)((uint)auVar61._8_4_ >> 0x18) | 0x7f;
    auVar31[0xc] = SUB41(auVar61._12_4_,0);
    auVar31[0xd] = (char)((uint)auVar61._12_4_ >> 8);
    auVar31[0xe] = (byte)((uint)auVar61._12_4_ >> 0x10) | 0x80;
    auVar31[0xf] = (byte)((uint)auVar61._12_4_ >> 0x18) | 0x7f;
    auVar14._4_4_ = -(uint)(65536.0 <= auVar61._4_4_);
    auVar14._0_4_ = -(uint)(65536.0 <= auVar61._0_4_);
    auVar14._8_4_ = -(uint)(65536.0 <= auVar61._8_4_);
    auVar14._12_4_ = -(uint)(65536.0 <= auVar61._12_4_);
    auVar61 = auVar61 ^ (auVar61 ^ auVar31) & auVar14;
    fVar52 = (float)CONCAT13(auVar61[3] | (byte)(uVar53 >> 0x18),auVar61._0_3_);
    auVar54._0_8_ =
         CONCAT17(auVar61[7] | (byte)(uVar53 >> 0x38),
                  CONCAT16(auVar61[6],CONCAT15(auVar61[5],CONCAT14(auVar61[4],fVar52))));
    auVar54[8] = auVar61[8];
    auVar54[9] = auVar61[9];
    auVar54[10] = auVar61[10];
    auVar54[0xb] = auVar61[0xb] | (byte)((short)puVar38[0x14] >> 0xf) & 0x80;
    auVar56[0xc] = auVar61[0xc];
    auVar56._0_12_ = auVar54;
    auVar56[0xd] = auVar61[0xd];
    auVar56[0xe] = auVar61[0xe];
    auVar56[0xf] = auVar61[0xf] | (byte)((short)puVar38[0x10] >> 0xf) & 0x80;
    fVar57 = (float)CONCAT13(auVar64[3] | (byte)(sVar18 >> 0xf) & 0x80,auVar64._0_3_);
    auVar59._0_8_ =
         CONCAT17(auVar64[7] | (byte)((int)uVar16 >> 0x1f) & 0x80,
                  CONCAT16(auVar64[6],CONCAT15(auVar64[5],CONCAT14(auVar64[4],fVar57))));
    auVar59[8] = auVar64[8];
    auVar59[9] = auVar64[9];
    auVar59[10] = auVar64[10];
    auVar59[0xb] = auVar64[0xb] | (byte)((int6)uVar15 >> 0x2f) & 0x80;
    auVar62[0xc] = auVar64[0xc];
    auVar62._0_12_ = auVar59;
    auVar62[0xd] = auVar64[0xd];
    auVar62[0xe] = auVar64[0xe];
    auVar62[0xf] = auVar64[0xf] |
                   (byte)((long)CONCAT17(uVar47,CONCAT16(uVar46,uVar15)) >> 0x3f) & 0x80;
    uVar12 = (uint6)CONCAT14(-((float)CONCAT13(auVar60[7] | (byte)((int)uVar11 >> 0x1f) & 0x80,
                                               auVar60._4_3_) ==
                              (float)((ulong)auVar59._0_8_ >> 0x20)),
                             -(uint)((float)CONCAT13(auVar60[3] | (byte)(sVar13 >> 0xf) & 0x80,
                                                     auVar60._0_3_) == fVar57)) & 0xffff0000ffff;
    uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar55[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                              auVar55._4_3_) ==
                             (float)((ulong)auVar54._0_8_ >> 0x20)),
                            -(uint)((float)CONCAT13(auVar55[3] | (byte)(sVar7 >> 0xf) & 0x80,
                                                    auVar55._0_3_) == fVar52)) & 0xffff0000ffff;
    bVar33 = (byte)(((byte)uVar5 & 1) + ((byte)(uVar5 >> 0x20) & 2) +
                    (-((float)CONCAT13(auVar55[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                       auVar55._8_3_) == auVar54._8_4_) & 4U) +
                    (-((float)CONCAT13(auVar55[0xf] |
                                       (byte)((long)CONCAT17(uVar45,CONCAT16(uVar44,uVar3)) >> 0x3f)
                                       & 0x80,auVar55._12_3_) == auVar56._12_4_) & 8U) +
                    ((byte)uVar12 & 0x10) + ((byte)(uVar12 >> 0x20) & 0x20) +
                    (-((float)CONCAT13(auVar60[0xb] | (byte)((int6)uVar10 >> 0x2f) & 0x80,
                                       auVar60._8_3_) == auVar59._8_4_) & 0x40U) +
                   (-((float)CONCAT13(auVar60[0xf] |
                                      (byte)((long)CONCAT17(uVar51,CONCAT16(uVar50,uVar10)) >> 0x3f)
                                      & 0x80,auVar60._12_3_) == auVar62._12_4_) & 0x80U)) == -1;
  }
LAB_109edb644:
  cVar36 = -bVar33;
LAB_109edb648:
  *param_1 = cVar36;
  return;
}



/* Entry: 109edb654; end: 109edc277;  */

void FUN_109edb654(char *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint7 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar4 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  if (uVar4 < 4) {
    if (uVar4 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        cVar3 = '\0';
        if (((((byte)param_4[2] != (byte)param_3[2]) || ((byte)param_4[4] != (byte)param_3[4])) ||
            (((byte)param_4[6] != (byte)param_3[6] ||
             ((((byte)param_4[8] != (byte)param_3[8] || ((byte)param_4[10] != (byte)param_3[10])) ||
              ((byte)param_4[0xc] != (byte)param_3[0xc])))))) ||
           ((((byte)param_4[0xe] != (byte)param_3[0xe] ||
             ((byte)param_4[0x10] != (byte)param_3[0x10])) ||
            (((byte)param_4[0x12] != (byte)param_3[0x12] ||
             ((((byte)param_4[0x14] != (byte)param_3[0x14] ||
               ((byte)param_4[0x16] != (byte)param_3[0x16])) ||
              (((byte)param_4[0x18] != (byte)param_3[0x18] ||
               (((byte)param_4[0x1a] != (byte)param_3[0x1a] ||
                ((byte)param_4[0x1c] != (byte)param_3[0x1c])))))))))))) goto LAB_109edbb48;
        bVar2 = (byte)*param_4 == (byte)*param_3;
        goto LAB_109edbb3c;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      cVar3 = '\0';
      if (((((((byte)param_3[0x1c] != (byte)param_4[0x1c]) ||
             ((byte)param_3[0x1a] != (byte)param_4[0x1a])) ||
            ((byte)param_3[0x18] != (byte)param_4[0x18])) ||
           (((byte)param_3[0x16] != (byte)param_4[0x16] ||
            ((byte)param_3[0x14] != (byte)param_4[0x14])))) ||
          ((byte)param_3[0x12] != (byte)param_4[0x12])) ||
         (((((byte)param_3[0x10] != (byte)param_4[0x10] ||
            ((byte)param_3[0xe] != (byte)param_4[0xe])) ||
           (((byte)param_3[0xc] != (byte)param_4[0xc] ||
            ((((byte)param_3[10] != (byte)param_4[10] || ((byte)param_3[8] != (byte)param_4[8])) ||
             ((byte)param_3[6] != (byte)param_4[6])))))) ||
          (((byte)param_3[4] != (byte)param_4[4] || ((byte)param_3[2] != (byte)param_4[2]))))))
      goto LAB_109edbb48;
      uVar4 = (uint)(byte)*param_3;
      uVar5 = (uint)(byte)*param_4;
      goto LAB_109edbb38;
    }
  }
  else if (uVar4 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      cVar3 = '\0';
      if ((((((((ushort)param_3[0x1c] != (ushort)param_4[0x1c]) ||
              ((ushort)param_3[0x1a] != (ushort)param_4[0x1a])) ||
             ((ushort)param_3[0x18] != (ushort)param_4[0x18])) ||
            (((ushort)param_3[0x16] != (ushort)param_4[0x16] ||
             ((ushort)param_3[0x14] != (ushort)param_4[0x14])))) ||
           (((ushort)param_3[0x12] != (ushort)param_4[0x12] ||
            (((ushort)param_3[0x10] != (ushort)param_4[0x10] ||
             ((ushort)param_3[0xe] != (ushort)param_4[0xe])))))) ||
          (((ushort)param_3[0xc] != (ushort)param_4[0xc] ||
           ((((ushort)param_3[10] != (ushort)param_4[10] ||
             ((ushort)param_3[8] != (ushort)param_4[8])) ||
            ((ushort)param_3[6] != (ushort)param_4[6])))))) ||
         (((ushort)param_3[4] != (ushort)param_4[4] || ((ushort)param_3[2] != (ushort)param_4[2]))))
      goto LAB_109edbb48;
      uVar4 = (uint)(ushort)*param_3;
      uVar5 = (uint)(ushort)*param_4;
LAB_109edbb38:
      bVar2 = uVar4 == uVar5;
LAB_109edbb3c:
      cVar3 = -bVar2;
      goto LAB_109edbb48;
    }
  }
  else if (uVar4 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      cVar3 = '\0';
      if ((((((param_3[0x1c] != param_4[0x1c]) || (param_3[0x1a] != param_4[0x1a])) ||
            ((param_3[0x18] != param_4[0x18] ||
             (((param_3[0x16] != param_4[0x16] || (param_3[0x14] != param_4[0x14])) ||
              (param_3[0x12] != param_4[0x12])))))) ||
           ((param_3[0x10] != param_4[0x10] || (param_3[0xe] != param_4[0xe])))) ||
          (param_3[0xc] != param_4[0xc])) ||
         (((param_3[10] != param_4[10] || (param_3[8] != param_4[8])) ||
          ((param_3[6] != param_4[6] || ((param_3[4] != param_4[4] || (param_3[2] != param_4[2])))))
          ))) goto LAB_109edbb48;
      uVar4 = *param_3;
      uVar5 = *param_4;
      goto LAB_109edbb38;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    uVar1 = CONCAT16(-(*(long *)(param_3 + 0x14) == *(long *)(param_4 + 0x14)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 0x12) == *(long *)(param_4 + 0x12)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 0x10) ==
                                                     *(long *)(param_4 + 0x10)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 0xe) ==
                                                                   *(long *)(param_4 + 0xe))))) &
            CONCAT16(-(*(long *)(param_3 + 0xc) == *(long *)(param_4 + 0xc)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 10) == *(long *)(param_4 + 10)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 8) ==
                                                     *(long *)(param_4 + 8)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 6) ==
                                                                   *(long *)(param_4 + 6)))));
    bVar6 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c)) *
                                        -0x80) < '\0'),
                                CONCAT16(-((char)((*(long *)(param_3 + 0x1a) ==
                                                  *(long *)(param_4 + 0x1a)) * -0x80) < '\0'),
                                         CONCAT15(-((char)((*(long *)(param_3 + 0x18) ==
                                                           *(long *)(param_4 + 0x18)) * -0x80) <
                                                   '\0'),CONCAT14(-((char)((*(long *)(param_3 + 0x16
                                                                                     ) ==
                                                                           *(long *)(param_4 + 0x16)
                                                                           ) * -0x80) < '\0'),
                                                                  CONCAT13(-((char)((char)(uVar1 >> 
                                                  0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar1 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar1 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar1 << 7) < '\0')))))))),1);
    if ((bVar6 & *(long *)(param_3 + 4) == *(long *)(param_4 + 4)) == 1 &&
        *(long *)(param_3 + 2) == *(long *)(param_4 + 2)) {
      bVar2 = *(long *)param_3 == *(long *)param_4;
      goto LAB_109edbb3c;
    }
  }
  cVar3 = '\0';
LAB_109edbb48:
  *param_1 = cVar3;
  return;
}



/* Entry: 109edc278; end: 109edc727;  */

void FUN_109edc278(char *param_1,int param_2,long *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  short sVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined6 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  short sVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [14];
  bool bVar50;
  double *pdVar51;
  char cVar52;
  undefined2 *puVar53;
  float *pfVar54;
  double *pdVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  float fVar64;
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar85;
  ulong uVar86;
  undefined1 auVar89 [16];
  float fVar90;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  float fVar101;
  ulong uVar102;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  float fVar114;
  uint6 uVar115;
  float fVar116;
  uint6 uVar117;
  float fVar118;
  ulong uVar119;
  undefined1 auVar121 [16];
  ulong uVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  undefined1 uVar152;
  undefined1 uVar153;
  byte bVar154;
  byte bVar155;
  undefined1 uVar156;
  undefined1 uVar157;
  byte bVar158;
  byte bVar159;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar65 [12];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar66 [12];
  undefined1 auVar69 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar67 [14];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar84 [16];
  undefined1 auVar87 [12];
  undefined1 auVar88 [16];
  undefined1 auVar91 [12];
  undefined1 auVar94 [16];
  undefined1 auVar103 [12];
  undefined1 auVar107 [16];
  undefined1 auVar120 [12];
  undefined1 auVar122 [16];
  
  pdVar51 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar55 = (double *)param_3[1];
    if (pdVar51[0xf] != pdVar55[0xf]) {
LAB_109edc3a8:
      cVar52 = -1;
      goto LAB_109edc720;
    }
    bVar56 = NEON_umaxv(CONCAT17(-((char)(~-(pdVar51[0xe] == pdVar55[0xe]) << 7) < '\0'),
                                 CONCAT16(-((char)(~-(pdVar51[0xd] == pdVar55[0xd]) << 7) < '\0'),
                                          CONCAT15(-((char)(~-(pdVar51[0xc] == pdVar55[0xc]) << 7) <
                                                    '\0'),CONCAT14(-((char)(~-(pdVar51[0xb] ==
                                                                              pdVar55[0xb]) << 7) <
                                                                    '\0'),CONCAT13(-((char)((~-(
                                                  pdVar51[10] == pdVar55[10]) |
                                                  ~-(pdVar51[6] == pdVar55[6])) << 7) < '\0'),
                                                  CONCAT12(-((char)((~-(pdVar51[9] == pdVar55[9]) |
                                                                    ~-(pdVar51[5] == pdVar55[5])) <<
                                                                   7) < '\0'),
                                                           CONCAT11(-((char)((~-(pdVar51[8] ==
                                                                                pdVar55[8]) |
                                                                             ~-(pdVar51[4] ==
                                                                               pdVar55[4])) << 7) <
                                                                     '\0'),-((char)((~-(pdVar51[7]
                                                                                       == pdVar55[7]
                                                                                       ) | ~-(
                                                  pdVar51[3] == pdVar55[3])) << 7) < '\0')))))))),1)
    ;
    cVar52 = -1;
    if (((bVar56 & 1) != 0 || pdVar51[2] != pdVar55[2]) || (pdVar51[1] != pdVar55[1]))
    goto LAB_109edc720;
    bVar50 = false;
    if (!NAN(*pdVar51) && !NAN(*pdVar55)) {
      bVar50 = *pdVar51 == *pdVar55;
    }
  }
  else {
    if (param_2 != 0x20) {
      puVar53 = (undefined2 *)param_3[1];
      sVar6 = *(short *)(pdVar51 + 0xb);
      uVar95 = (undefined1)*(undefined2 *)(pdVar51 + 10);
      uVar96 = (undefined1)((ushort)*(undefined2 *)(pdVar51 + 10) >> 8);
      uVar97 = (undefined1)*(undefined2 *)(pdVar51 + 9);
      uVar98 = (undefined1)((ushort)*(undefined2 *)(pdVar51 + 9) >> 8);
      uVar99 = (undefined1)*(undefined2 *)(pdVar51 + 8);
      uVar100 = (undefined1)((ushort)*(undefined2 *)(pdVar51 + 8) >> 8);
      uVar1 = CONCAT12(uVar95,sVar6);
      uVar2 = CONCAT13(uVar96,uVar1);
      uVar3 = CONCAT15(uVar98,CONCAT14(uVar97,uVar2));
      sVar11 = *(short *)(pdVar51 + 7);
      uVar108 = (undefined1)*(undefined2 *)(pdVar51 + 6);
      uVar109 = (undefined1)((ushort)*(undefined2 *)(pdVar51 + 6) >> 8);
      uVar110 = (undefined1)*(undefined2 *)(pdVar51 + 5);
      uVar111 = (undefined1)((ushort)*(undefined2 *)(pdVar51 + 5) >> 8);
      uVar112 = (undefined1)*(undefined2 *)(pdVar51 + 4);
      uVar113 = (undefined1)((ushort)*(undefined2 *)(pdVar51 + 4) >> 8);
      uVar7 = CONCAT12(uVar108,sVar11);
      uVar8 = CONCAT13(uVar109,uVar7);
      uVar9 = CONCAT15(uVar111,CONCAT14(uVar110,uVar8));
      uVar123 = CONCAT44((uint)*(ushort *)(pdVar51 + 0xe) << 0xd,
                         (uint)*(ushort *)(pdVar51 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar86 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar102 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar119 = CONCAT44((uint)*(ushort *)(pdVar51 + 2) << 0xd,(uint)*(ushort *)(pdVar51 + 3) << 0xd
                        ) & 0xfffffff0fffffff;
      auVar121._0_4_ = (float)uVar119 * 5.192297e+33;
      auVar121._4_4_ = (float)(uVar119 >> 0x20) * 5.192297e+33;
      auVar121._8_4_ = (float)((*(ushort *)(pdVar51 + 1) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar121._12_4_ = (float)((*(ushort *)pdVar51 & 0x7fff) << 0xd) * 5.192297e+33;
      auVar127._0_4_ = (float)uVar102 * 5.192297e+33;
      auVar127._4_4_ = (float)(uVar102 >> 0x20) * 5.192297e+33;
      auVar127._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar127._12_4_ =
           (float)(((ushort)(CONCAT17(uVar113,CONCAT16(uVar112,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar128._0_4_ = (float)uVar86 * 5.192297e+33;
      auVar128._4_4_ = (float)(uVar86 >> 0x20) * 5.192297e+33;
      auVar128._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar128._12_4_ =
           (float)(((ushort)(CONCAT17(uVar100,CONCAT16(uVar99,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar124._0_4_ = (float)uVar123 * 5.192297e+33;
      auVar124._4_4_ = (float)(uVar123 >> 0x20) * 5.192297e+33;
      auVar124._8_4_ = (float)((*(ushort *)(pdVar51 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar124._12_4_ = (float)((*(ushort *)(pdVar51 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar12 = -(uint)(65536.0 <= auVar124._4_4_);
      iVar13 = -(uint)(65536.0 <= auVar124._8_4_);
      iVar14 = -(uint)(65536.0 <= auVar124._12_4_);
      iVar17 = -(uint)(65536.0 <= auVar128._4_4_);
      iVar18 = -(uint)(65536.0 <= auVar128._8_4_);
      iVar19 = -(uint)(65536.0 <= auVar128._12_4_);
      iVar25 = -(uint)(65536.0 <= auVar127._4_4_);
      iVar26 = -(uint)(65536.0 <= auVar127._8_4_);
      iVar27 = -(uint)(65536.0 <= auVar127._12_4_);
      iVar31 = -(uint)(65536.0 <= auVar121._4_4_);
      iVar33 = -(uint)(65536.0 <= auVar121._8_4_);
      iVar35 = -(uint)(65536.0 <= auVar121._12_4_);
      uVar4 = CONCAT13(uVar96,CONCAT12(uVar95,sVar6));
      uVar3 = CONCAT15(uVar98,CONCAT14(uVar97,uVar4));
      uVar10 = CONCAT13(uVar109,CONCAT12(uVar108,sVar11));
      uVar9 = CONCAT15(uVar111,CONCAT14(uVar110,uVar10));
      uVar115 = (uint6)(CONCAT17((char)((int)uVar10 >> 0x1f),
                                 (uint7)(((byte)(sVar11 >> 0xf) & 0x80) << 0x18)) >> 0x10) &
                0x80ffffffffff;
      uVar117 = (uint6)(CONCAT17((char)((long)CONCAT17(uVar113,CONCAT16(uVar112,uVar9)) >> 0x3f),
                                 (uint7)(((byte)((int6)uVar9 >> 0x2f) & 0x80) << 0x18)) >> 0x10) &
                0x80ffffffffff;
      uVar86 = CONCAT17((short)*(ushort *)(pdVar51 + 0xe) >> 0xf,
                        (uint7)(((byte)((short)*(ushort *)(pdVar51 + 0xf) >> 0xf) & 0x80) << 0x18))
               & 0x80ffffffffffffff;
      auVar45[8] = SUB41(auVar121._8_4_,0);
      auVar45._0_8_ =
           CONCAT17((char)((uint)auVar121._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar121._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar121._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar121._4_4_,0),auVar121._0_4_)))) |
           0x7f8000007f800000;
      auVar45[9] = (char)((uint)auVar121._8_4_ >> 8);
      auVar45[10] = (byte)((uint)auVar121._8_4_ >> 0x10) | 0x80;
      auVar45[0xb] = (byte)((uint)auVar121._8_4_ >> 0x18) | 0x7f;
      auVar45[0xc] = SUB41(auVar121._12_4_,0);
      auVar45[0xd] = (char)((uint)auVar121._12_4_ >> 8);
      auVar45[0xe] = (byte)((uint)auVar121._12_4_ >> 0x10) | 0x80;
      auVar45[0xf] = (byte)((uint)auVar121._12_4_ >> 0x18) | 0x7f;
      auVar28[4] = (char)iVar31;
      auVar28._0_4_ = -(uint)(65536.0 <= auVar121._0_4_);
      auVar28[5] = (char)((uint)iVar31 >> 8);
      auVar28[6] = (char)((uint)iVar31 >> 0x10);
      auVar28[7] = (char)((uint)iVar31 >> 0x18);
      auVar28[8] = (char)iVar33;
      auVar28[9] = (char)((uint)iVar33 >> 8);
      auVar28[10] = (char)((uint)iVar33 >> 0x10);
      auVar28[0xb] = (char)((uint)iVar33 >> 0x18);
      auVar28[0xc] = (char)iVar35;
      auVar28[0xd] = (char)((uint)iVar35 >> 8);
      auVar28[0xe] = (char)((uint)iVar35 >> 0x10);
      auVar28[0xf] = (char)((uint)iVar35 >> 0x18);
      auVar121 = auVar121 ^ (auVar121 ^ auVar45) & auVar28;
      auVar44[8] = SUB41(auVar127._8_4_,0);
      auVar44._0_8_ =
           CONCAT17((char)((uint)auVar127._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar127._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar127._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar127._4_4_,0),auVar127._0_4_)))) |
           0x7f8000007f800000;
      auVar44[9] = (char)((uint)auVar127._8_4_ >> 8);
      auVar44[10] = (byte)((uint)auVar127._8_4_ >> 0x10) | 0x80;
      auVar44[0xb] = (byte)((uint)auVar127._8_4_ >> 0x18) | 0x7f;
      auVar44[0xc] = SUB41(auVar127._12_4_,0);
      auVar44[0xd] = (char)((uint)auVar127._12_4_ >> 8);
      auVar44[0xe] = (byte)((uint)auVar127._12_4_ >> 0x10) | 0x80;
      auVar44[0xf] = (byte)((uint)auVar127._12_4_ >> 0x18) | 0x7f;
      auVar23[4] = (char)iVar25;
      auVar23._0_4_ = -(uint)(65536.0 <= auVar127._0_4_);
      auVar23[5] = (char)((uint)iVar25 >> 8);
      auVar23[6] = (char)((uint)iVar25 >> 0x10);
      auVar23[7] = (char)((uint)iVar25 >> 0x18);
      auVar23[8] = (char)iVar26;
      auVar23[9] = (char)((uint)iVar26 >> 8);
      auVar23[10] = (char)((uint)iVar26 >> 0x10);
      auVar23[0xb] = (char)((uint)iVar26 >> 0x18);
      auVar23[0xc] = (char)iVar27;
      auVar23[0xd] = (char)((uint)iVar27 >> 8);
      auVar23[0xe] = (char)((uint)iVar27 >> 0x10);
      auVar23[0xf] = (char)((uint)iVar27 >> 0x18);
      auVar127 = auVar127 ^ (auVar127 ^ auVar44) & auVar23;
      auVar43[8] = SUB41(auVar128._8_4_,0);
      auVar43._0_8_ =
           CONCAT17((char)((uint)auVar128._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar128._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar128._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar128._4_4_,0),auVar128._0_4_)))) |
           0x7f8000007f800000;
      auVar43[9] = (char)((uint)auVar128._8_4_ >> 8);
      auVar43[10] = (byte)((uint)auVar128._8_4_ >> 0x10) | 0x80;
      auVar43[0xb] = (byte)((uint)auVar128._8_4_ >> 0x18) | 0x7f;
      auVar43[0xc] = SUB41(auVar128._12_4_,0);
      auVar43[0xd] = (char)((uint)auVar128._12_4_ >> 8);
      auVar43[0xe] = (byte)((uint)auVar128._12_4_ >> 0x10) | 0x80;
      auVar43[0xf] = (byte)((uint)auVar128._12_4_ >> 0x18) | 0x7f;
      auVar15[4] = (char)iVar17;
      auVar15._0_4_ = -(uint)(65536.0 <= auVar128._0_4_);
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
      auVar128 = auVar128 ^ (auVar128 ^ auVar43) & auVar15;
      auVar37[8] = SUB41(auVar124._8_4_,0);
      auVar37._0_8_ =
           CONCAT17((char)((uint)auVar124._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar124._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar124._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar124._4_4_,0),auVar124._0_4_)))) |
           0x7f8000007f800000;
      auVar37[9] = (char)((uint)auVar124._8_4_ >> 8);
      auVar37[10] = (byte)((uint)auVar124._8_4_ >> 0x10) | 0x80;
      auVar37[0xb] = (byte)((uint)auVar124._8_4_ >> 0x18) | 0x7f;
      auVar37[0xc] = SUB41(auVar124._12_4_,0);
      auVar37[0xd] = (char)((uint)auVar124._12_4_ >> 8);
      auVar37[0xe] = (byte)((uint)auVar124._12_4_ >> 0x10) | 0x80;
      auVar37[0xf] = (byte)((uint)auVar124._12_4_ >> 0x18) | 0x7f;
      auVar89[4] = (char)iVar12;
      auVar89._0_4_ = -(uint)(65536.0 <= auVar124._0_4_);
      auVar89[5] = (char)((uint)iVar12 >> 8);
      auVar89[6] = (char)((uint)iVar12 >> 0x10);
      auVar89[7] = (char)((uint)iVar12 >> 0x18);
      auVar89[8] = (char)iVar13;
      auVar89[9] = (char)((uint)iVar13 >> 8);
      auVar89[10] = (char)((uint)iVar13 >> 0x10);
      auVar89[0xb] = (char)((uint)iVar13 >> 0x18);
      auVar89[0xc] = (char)iVar14;
      auVar89[0xd] = (char)((uint)iVar14 >> 8);
      auVar89[0xe] = (char)((uint)iVar14 >> 0x10);
      auVar89[0xf] = (char)((uint)iVar14 >> 0x18);
      auVar124 = auVar124 ^ (auVar124 ^ auVar37) & auVar89;
      fVar85 = (float)CONCAT13(auVar124[3] | (byte)(uVar86 >> 0x18),auVar124._0_3_);
      auVar87._0_8_ =
           CONCAT17(auVar124[7] | (byte)(uVar86 >> 0x38),
                    CONCAT16(auVar124[6],CONCAT15(auVar124[5],CONCAT14(auVar124[4],fVar85))));
      auVar87[8] = auVar124[8];
      auVar87[9] = auVar124[9];
      auVar87[10] = auVar124[10];
      auVar87[0xb] = auVar124[0xb] | (byte)((short)*(ushort *)(pdVar51 + 0xd) >> 0xf) & 0x80;
      auVar88[0xc] = auVar124[0xc];
      auVar88._0_12_ = auVar87;
      auVar88[0xd] = auVar124[0xd];
      auVar88[0xe] = auVar124[0xe];
      auVar88[0xf] = auVar124[0xf] | (byte)((short)*(ushort *)(pdVar51 + 0xc) >> 0xf) & 0x80;
      fVar114 = (float)CONCAT13(auVar127[3] | (byte)(uVar115 >> 8),auVar127._0_3_);
      fVar116 = (float)CONCAT13(auVar127[0xb] | (byte)(uVar117 >> 8),auVar127._8_3_);
      fVar118 = (float)CONCAT13(auVar121[3] | (byte)((short)*(ushort *)(pdVar51 + 3) >> 0xf) & 0x80,
                                auVar121._0_3_);
      auVar120._0_8_ =
           CONCAT17(auVar121[7] | (byte)((short)*(ushort *)(pdVar51 + 2) >> 0xf) & 0x80,
                    CONCAT16(auVar121[6],CONCAT15(auVar121[5],CONCAT14(auVar121[4],fVar118))));
      auVar120[8] = auVar121[8];
      auVar120[9] = auVar121[9];
      auVar120[10] = auVar121[10];
      auVar120[0xb] = auVar121[0xb] | (byte)((short)*(ushort *)(pdVar51 + 1) >> 0xf) & 0x80;
      auVar122[0xc] = auVar121[0xc];
      auVar122._0_12_ = auVar120;
      auVar122[0xd] = auVar121[0xd];
      auVar122[0xe] = auVar121[0xe];
      auVar122[0xf] = auVar121[0xf] | (byte)((short)*(ushort *)pdVar51 >> 0xf) & 0x80;
      sVar11 = puVar53[0x1c];
      uVar95 = (undefined1)puVar53[0x18];
      uVar96 = (undefined1)((ushort)puVar53[0x18] >> 8);
      uVar97 = (undefined1)puVar53[0x14];
      uVar98 = (undefined1)((ushort)puVar53[0x14] >> 8);
      uVar108 = (undefined1)puVar53[0x10];
      uVar109 = (undefined1)((ushort)puVar53[0x10] >> 8);
      sVar24 = puVar53[0xc];
      uVar134 = (undefined1)puVar53[8];
      uVar135 = (undefined1)((ushort)puVar53[8] >> 8);
      uVar136 = (undefined1)puVar53[4];
      uVar137 = (undefined1)((ushort)puVar53[4] >> 8);
      uVar138 = (undefined1)*puVar53;
      uVar139 = (undefined1)((ushort)*puVar53 >> 8);
      uVar1 = CONCAT12(uVar95,sVar11);
      uVar2 = CONCAT13(uVar96,uVar1);
      uVar9 = CONCAT15(uVar98,CONCAT14(uVar97,uVar2));
      uVar7 = CONCAT12(uVar134,sVar24);
      uVar8 = CONCAT13(uVar135,uVar7);
      uVar21 = CONCAT15(uVar137,CONCAT14(uVar136,uVar8));
      uVar86 = CONCAT44((uint)(ushort)puVar53[0x38] << 0xd,(uint)(ushort)puVar53[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar39 = (float)((uVar7 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar40 = (float)((uVar8 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar148 = SUB41(fVar40,0);
      uVar149 = (undefined1)((uint)fVar40 >> 8);
      uVar150 = (undefined1)((uint)fVar40 >> 0x10);
      uVar151 = (undefined1)((uint)fVar40 >> 0x18);
      fVar41 = (float)(((ushort)((uint6)uVar21 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar152 = SUB41(fVar41,0);
      uVar153 = (undefined1)((uint)fVar41 >> 8);
      bVar154 = (byte)((uint)fVar41 >> 0x10);
      bVar155 = (byte)((uint)fVar41 >> 0x18);
      fVar42 = (float)(((ushort)(CONCAT17(uVar139,CONCAT16(uVar138,uVar21)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar156 = SUB41(fVar42,0);
      uVar157 = (undefined1)((uint)fVar42 >> 8);
      bVar158 = (byte)((uint)fVar42 >> 0x10);
      bVar159 = (byte)((uint)fVar42 >> 0x18);
      fVar30 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar32 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar140 = SUB41(fVar32,0);
      uVar141 = (undefined1)((uint)fVar32 >> 8);
      uVar142 = (undefined1)((uint)fVar32 >> 0x10);
      uVar143 = (undefined1)((uint)fVar32 >> 0x18);
      fVar34 = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar144 = SUB41(fVar34,0);
      uVar145 = (undefined1)((uint)fVar34 >> 8);
      bVar60 = (byte)((uint)fVar34 >> 0x10);
      bVar61 = (byte)((uint)fVar34 >> 0x18);
      fVar36 = (float)(((ushort)(CONCAT17(uVar109,CONCAT16(uVar108,uVar9)) >> 0x30) & 0x7fff) << 0xd
                      ) * 5.192297e+33;
      uVar146 = SUB41(fVar36,0);
      uVar147 = (undefined1)((uint)fVar36 >> 8);
      bVar62 = (byte)((uint)fVar36 >> 0x10);
      bVar63 = (byte)((uint)fVar36 >> 0x18);
      fVar64 = (float)(((ushort)puVar53[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar90 = (float)(((ushort)puVar53[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar110 = SUB41(fVar90,0);
      uVar111 = (undefined1)((uint)fVar90 >> 8);
      uVar112 = (undefined1)((uint)fVar90 >> 0x10);
      uVar113 = (undefined1)((uint)fVar90 >> 0x18);
      fVar101 = (float)(((ushort)puVar53[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar130 = SUB41(fVar101,0);
      uVar131 = (undefined1)((uint)fVar101 >> 8);
      bVar56 = (byte)((uint)fVar101 >> 0x10);
      bVar57 = (byte)((uint)fVar101 >> 0x18);
      fVar20 = (float)(((ushort)puVar53[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar132 = SUB41(fVar20,0);
      uVar133 = (undefined1)((uint)fVar20 >> 8);
      bVar58 = (byte)((uint)fVar20 >> 0x10);
      bVar59 = (byte)((uint)fVar20 >> 0x18);
      auVar68._0_4_ = (float)uVar86 * 5.192297e+33;
      auVar68._4_4_ = (float)(uVar86 >> 0x20) * 5.192297e+33;
      auVar68._8_4_ = (float)(((ushort)puVar53[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar68._12_4_ = (float)(((ushort)puVar53[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar129._0_4_ = -(uint)(65536.0 <= auVar68._0_4_);
      auVar129._4_4_ = -(uint)(65536.0 <= auVar68._4_4_);
      auVar129._8_4_ = -(uint)(65536.0 <= auVar68._8_4_);
      auVar129._12_4_ = -(uint)(65536.0 <= auVar68._12_4_);
      iVar12 = -(uint)(65536.0 <= fVar90);
      iVar13 = -(uint)(65536.0 <= fVar20);
      iVar14 = -(uint)(65536.0 <= fVar32);
      iVar17 = -(uint)(65536.0 <= fVar36);
      auVar92._0_4_ = -(uint)(65536.0 <= fVar39);
      auVar92._4_4_ = -(uint)(65536.0 <= fVar40);
      auVar92._8_4_ = -(uint)(65536.0 <= fVar41);
      auVar92._12_4_ = -(uint)(65536.0 <= fVar42);
      auVar104._0_8_ =
           CONCAT17(uVar151,CONCAT16(uVar150,CONCAT15(uVar149,CONCAT14(uVar148,fVar39)))) |
           0x7f8000007f800000;
      auVar104[8] = uVar152;
      auVar104[9] = uVar153;
      auVar104[10] = bVar154 | 0x80;
      auVar104[0xb] = bVar155 | 0x7f;
      auVar104[0xc] = uVar156;
      auVar104[0xd] = uVar157;
      auVar104[0xe] = bVar158 | 0x80;
      auVar104[0xf] = bVar159 | 0x7f;
      uVar10 = CONCAT13(uVar96,CONCAT12(uVar95,sVar11));
      uVar9 = CONCAT15(uVar98,CONCAT14(uVar97,uVar10));
      uVar22 = CONCAT13(uVar135,CONCAT12(uVar134,sVar24));
      uVar21 = CONCAT15(uVar137,CONCAT14(uVar136,uVar22));
      uVar86 = CONCAT17((short)puVar53[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar53[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar38[4] = uVar148;
      auVar38._0_4_ = fVar39;
      auVar38[5] = uVar149;
      auVar38[6] = uVar150;
      auVar38[7] = uVar151;
      auVar38[8] = uVar152;
      auVar38[9] = uVar153;
      auVar38[10] = bVar154;
      auVar38[0xb] = bVar155;
      auVar38[0xc] = uVar156;
      auVar38[0xd] = uVar157;
      auVar38[0xe] = bVar158;
      auVar38[0xf] = bVar159;
      auVar93[4] = uVar148;
      auVar93._0_4_ = fVar39;
      auVar93[5] = uVar149;
      auVar93[6] = uVar150;
      auVar93[7] = uVar151;
      auVar93[8] = uVar152;
      auVar93[9] = uVar153;
      auVar93[10] = bVar154;
      auVar93[0xb] = bVar155;
      auVar93[0xc] = uVar156;
      auVar93[0xd] = uVar157;
      auVar93[0xe] = bVar158;
      auVar93[0xf] = bVar159;
      auVar93 = auVar93 ^ (auVar38 ^ auVar104) & auVar92;
      auVar105[0xc] = (char)iVar17;
      auVar105._8_4_ = -(uint)(65536.0 <= fVar34);
      auVar105[0xd] = (char)((uint)iVar17 >> 8);
      auVar105[0xe] = (char)((uint)iVar17 >> 0x10);
      auVar105[0xf] = (char)((uint)iVar17 >> 0x18);
      auVar105[4] = (char)iVar14;
      auVar105._0_4_ = -(uint)(65536.0 <= fVar30);
      auVar105[5] = (char)((uint)iVar14 >> 8);
      auVar105[6] = (char)((uint)iVar14 >> 0x10);
      auVar105[7] = (char)((uint)iVar14 >> 0x18);
      auVar29[4] = uVar140;
      auVar29._0_4_ = fVar30;
      auVar29[5] = uVar141;
      auVar29[6] = uVar142;
      auVar29[7] = uVar143;
      auVar29[8] = uVar144;
      auVar29[9] = uVar145;
      auVar29[10] = bVar60;
      auVar29[0xb] = bVar61;
      auVar29[0xc] = uVar146;
      auVar29[0xd] = uVar147;
      auVar29[0xe] = bVar62;
      auVar29[0xf] = bVar63;
      auVar48[8] = uVar144;
      auVar48._0_8_ =
           CONCAT17(uVar143,CONCAT16(uVar142,CONCAT15(uVar141,CONCAT14(uVar140,fVar30)))) |
           0x7f8000007f800000;
      auVar48[9] = uVar145;
      auVar48[10] = bVar60 | 0x80;
      auVar48[0xb] = bVar61 | 0x7f;
      auVar48[0xc] = uVar146;
      auVar48[0xd] = uVar147;
      auVar48[0xe] = bVar62 | 0x80;
      auVar48[0xf] = bVar63 | 0x7f;
      auVar106[4] = uVar140;
      auVar106._0_4_ = fVar30;
      auVar106[5] = uVar141;
      auVar106[6] = uVar142;
      auVar106[7] = uVar143;
      auVar106[8] = uVar144;
      auVar106[9] = uVar145;
      auVar106[10] = bVar60;
      auVar106[0xb] = bVar61;
      auVar106[0xc] = uVar146;
      auVar106[0xd] = uVar147;
      auVar106[0xe] = bVar62;
      auVar106[0xf] = bVar63;
      auVar106 = auVar106 ^ (auVar29 ^ auVar48) & auVar105;
      auVar125[0xc] = (char)iVar13;
      auVar125._8_4_ = -(uint)(65536.0 <= fVar101);
      auVar125[0xd] = (char)((uint)iVar13 >> 8);
      auVar125[0xe] = (char)((uint)iVar13 >> 0x10);
      auVar125[0xf] = (char)((uint)iVar13 >> 0x18);
      auVar125[4] = (char)iVar12;
      auVar125._0_4_ = -(uint)(65536.0 <= fVar64);
      auVar125[5] = (char)((uint)iVar12 >> 8);
      auVar125[6] = (char)((uint)iVar12 >> 0x10);
      auVar125[7] = (char)((uint)iVar12 >> 0x18);
      auVar16[4] = uVar110;
      auVar16._0_4_ = fVar64;
      auVar16[5] = uVar111;
      auVar16[6] = uVar112;
      auVar16[7] = uVar113;
      auVar16[8] = uVar130;
      auVar16[9] = uVar131;
      auVar16[10] = bVar56;
      auVar16[0xb] = bVar57;
      auVar16[0xc] = uVar132;
      auVar16[0xd] = uVar133;
      auVar16[0xe] = bVar58;
      auVar16[0xf] = bVar59;
      auVar47[8] = uVar130;
      auVar47._0_8_ =
           CONCAT17(uVar113,CONCAT16(uVar112,CONCAT15(uVar111,CONCAT14(uVar110,fVar64)))) |
           0x7f8000007f800000;
      auVar47[9] = uVar131;
      auVar47[10] = bVar56 | 0x80;
      auVar47[0xb] = bVar57 | 0x7f;
      auVar47[0xc] = uVar132;
      auVar47[0xd] = uVar133;
      auVar47[0xe] = bVar58 | 0x80;
      auVar47[0xf] = bVar59 | 0x7f;
      auVar126[4] = uVar110;
      auVar126._0_4_ = fVar64;
      auVar126[5] = uVar111;
      auVar126[6] = uVar112;
      auVar126[7] = uVar113;
      auVar126[8] = uVar130;
      auVar126[9] = uVar131;
      auVar126[10] = bVar56;
      auVar126[0xb] = bVar57;
      auVar126[0xc] = uVar132;
      auVar126[0xd] = uVar133;
      auVar126[0xe] = bVar58;
      auVar126[0xf] = bVar59;
      auVar126 = auVar126 ^ (auVar16 ^ auVar47) & auVar125;
      auVar46[8] = SUB41(auVar68._8_4_,0);
      auVar46._0_8_ =
           CONCAT17((char)((uint)auVar68._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar68._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar68._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar68._4_4_,0),auVar68._0_4_)))) |
           0x7f8000007f800000;
      auVar46[9] = (char)((uint)auVar68._8_4_ >> 8);
      auVar46[10] = (byte)((uint)auVar68._8_4_ >> 0x10) | 0x80;
      auVar46[0xb] = (byte)((uint)auVar68._8_4_ >> 0x18) | 0x7f;
      auVar46[0xc] = SUB41(auVar68._12_4_,0);
      auVar46[0xd] = (char)((uint)auVar68._12_4_ >> 8);
      auVar46[0xe] = (byte)((uint)auVar68._12_4_ >> 0x10) | 0x80;
      auVar46[0xf] = (byte)((uint)auVar68._12_4_ >> 0x18) | 0x7f;
      auVar68 = auVar68 ^ (auVar68 ^ auVar46) & auVar129;
      fVar64 = (float)CONCAT13(auVar68[3] | (byte)((short)puVar53[0x3c] >> 0xf) & 0x80,auVar68._0_3_
                              );
      auVar65._0_8_ =
           CONCAT17(auVar68[7] | (byte)((short)puVar53[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar68[6],CONCAT15(auVar68[5],CONCAT14(auVar68[4],fVar64))));
      auVar65[8] = auVar68[8];
      auVar65[9] = auVar68[9];
      auVar65[10] = auVar68[10];
      auVar65[0xb] = auVar68[0xb] | (byte)((short)puVar53[0x34] >> 0xf) & 0x80;
      auVar69[0xc] = auVar68[0xc];
      auVar69._0_12_ = auVar65;
      auVar69[0xd] = auVar68[0xd];
      auVar69[0xe] = auVar68[0xe];
      auVar69[0xf] = auVar68[0xf] | (byte)((short)puVar53[0x30] >> 0xf) & 0x80;
      fVar101 = (float)CONCAT13(auVar106[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar106._0_3_);
      auVar103._0_8_ =
           CONCAT17(auVar106[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                    CONCAT16(auVar106[6],CONCAT15(auVar106[5],CONCAT14(auVar106[4],fVar101))));
      auVar103[8] = auVar106[8];
      auVar103[9] = auVar106[9];
      auVar103[10] = auVar106[10];
      auVar103[0xb] = auVar106[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80;
      auVar107[0xc] = auVar106[0xc];
      auVar107._0_12_ = auVar103;
      auVar107[0xd] = auVar106[0xd];
      auVar107[0xe] = auVar106[0xe];
      auVar107[0xf] =
           auVar106[0xf] | (byte)((long)CONCAT17(uVar109,CONCAT16(uVar108,uVar9)) >> 0x3f) & 0x80;
      fVar90 = (float)CONCAT13(auVar93[3] | (byte)(sVar24 >> 0xf) & 0x80,auVar93._0_3_);
      auVar91._0_8_ =
           CONCAT17(auVar93[7] | (byte)((int)uVar22 >> 0x1f) & 0x80,
                    CONCAT16(auVar93[6],CONCAT15(auVar93[5],CONCAT14(auVar93[4],fVar90))));
      auVar91[8] = auVar93[8];
      auVar91[9] = auVar93[9];
      auVar91[10] = auVar93[10];
      auVar91[0xb] = auVar93[0xb] | (byte)((int6)uVar21 >> 0x2f) & 0x80;
      auVar94[0xc] = auVar93[0xc];
      auVar94._0_12_ = auVar91;
      auVar94[0xd] = auVar93[0xd];
      auVar94[0xe] = auVar93[0xe];
      auVar94[0xf] = auVar93[0xf] |
                     (byte)((long)CONCAT17(uVar139,CONCAT16(uVar138,uVar21)) >> 0x3f) & 0x80;
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar128[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar128._4_3_) ==
                               (float)CONCAT13(auVar126[7] | (byte)(uVar86 >> 0x38),auVar126._4_3_))
                              ,-(uint)((float)CONCAT13(auVar128[3] | (byte)(sVar6 >> 0xf) & 0x80,
                                                       auVar128._0_3_) ==
                                      (float)CONCAT13(auVar126[3] | (byte)(uVar86 >> 0x18),
                                                      auVar126._0_3_))) & 0xffff0000ffff;
      bVar56 = ~-(fVar85 == fVar64);
      bVar57 = ~-((float)((ulong)auVar87._0_8_ >> 0x20) == (float)((ulong)auVar65._0_8_ >> 0x20));
      bVar58 = ~-(auVar87._8_4_ == auVar65._8_4_);
      bVar59 = ~-(auVar88._12_4_ == auVar69._12_4_);
      bVar60 = ~(byte)uVar5;
      bVar61 = ~(byte)(uVar5 >> 0x20);
      bVar62 = ~-((float)CONCAT13(auVar128[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,auVar128._8_3_)
                 == (float)CONCAT13(auVar126[0xb] | (byte)((short)puVar53[0x24] >> 0xf) & 0x80,
                                    auVar126._8_3_));
      bVar63 = ~-((float)CONCAT13(auVar128[0xf] |
                                  (byte)((long)CONCAT17(uVar100,CONCAT16(uVar99,uVar3)) >> 0x3f) &
                                  0x80,auVar128._12_3_) ==
                 (float)CONCAT13(auVar126[0xf] | (byte)((short)puVar53[0x20] >> 0xf) & 0x80,
                                 auVar126._12_3_));
      auVar70._0_8_ =
           CONCAT17(bVar63,CONCAT16(bVar62,CONCAT15(bVar61,CONCAT14(bVar60,CONCAT13(bVar59,CONCAT12(
                                                  bVar58,CONCAT11(bVar57,bVar56))))))) &
           0x8040201008040201;
      auVar70[8] = ~-(fVar114 == fVar101) & 1;
      auVar70[9] = ~-((float)(CONCAT17(auVar127[7] | (byte)(uVar115 >> 0x28),
                                       CONCAT16(auVar127[6],
                                                CONCAT15(auVar127[5],CONCAT14(auVar127[4],fVar114)))
                                      ) >> 0x20) == (float)((ulong)auVar103._0_8_ >> 0x20)) & 2;
      auVar70[10] = ~-(fVar116 == auVar103._8_4_) & 4;
      auVar70[0xb] = ~-((float)(CONCAT17(auVar127[0xf] | (byte)(uVar117 >> 0x28),
                                         CONCAT16(auVar127[0xe],
                                                  CONCAT15(auVar127[0xd],
                                                           CONCAT14(auVar127[0xc],fVar116)))) >>
                               0x20) == auVar107._12_4_) & 8;
      auVar70[0xc] = ~-(fVar118 == fVar90) & 0x10;
      auVar70[0xd] = ~-((float)((ulong)auVar120._0_8_ >> 0x20) ==
                       (float)((ulong)auVar91._0_8_ >> 0x20)) & 0x20;
      auVar70[0xe] = ~-(auVar120._8_4_ == auVar91._8_4_) & 0x40;
      auVar70[0xf] = ~-(auVar122._12_4_ == auVar94._12_4_) & 0x80;
      auVar89 = NEON_ext(auVar70,auVar70,8,1);
      auVar49._1_13_ = auVar70._3_13_;
      auVar49[0] = bVar57 & 2;
      auVar73._5_11_ = auVar70._5_11_;
      auVar73._0_5_ = CONCAT14(bVar58,auVar49._0_4_ << 0x10) & 0x4ffffffff;
      auVar75._7_9_ = auVar70._7_9_;
      auVar75._0_7_ = CONCAT16(bVar59,auVar73._0_6_) & 0x8ffffffffffff;
      auVar77._9_7_ = auVar70._9_7_;
      auVar77._0_8_ = auVar75._0_8_;
      auVar77[8] = bVar60 & 0x10;
      auVar79._11_5_ = auVar70._11_5_;
      auVar79._0_10_ = auVar77._0_10_;
      auVar79[10] = bVar61 & 0x20;
      auVar81._13_3_ = auVar70._13_3_;
      auVar81._0_12_ = auVar79._0_12_;
      auVar81[0xc] = bVar62 & 0x40;
      auVar83._0_14_ = auVar81._0_14_;
      auVar83[0xe] = bVar63 & 0x80;
      auVar83[0xf] = auVar70[0xf];
      auVar71._2_14_ = auVar83._2_14_;
      auVar71._0_2_ = CONCAT11(auVar89[0],bVar56) & 0xff01;
      auVar72._4_12_ = auVar83._4_12_;
      auVar72._0_4_ = CONCAT13(auVar89[1],auVar71._0_3_);
      auVar74._6_10_ = auVar83._6_10_;
      auVar74._0_6_ = CONCAT15(auVar89[2],auVar72._0_5_);
      auVar76._8_8_ = auVar83._8_8_;
      auVar76._0_8_ = CONCAT17(auVar89[3],auVar74._0_7_);
      auVar78._10_6_ = auVar83._10_6_;
      auVar78._0_10_ = CONCAT19(auVar89[4],auVar76._0_9_);
      auVar80._12_4_ = auVar83._12_4_;
      auVar66._0_11_ = auVar78._0_11_;
      auVar66[0xb] = auVar89[5];
      auVar80._0_12_ = auVar66;
      auVar82._14_2_ = auVar83._14_2_;
      auVar67._0_13_ = auVar80._0_13_;
      auVar67[0xd] = auVar89[6];
      auVar82._0_14_ = auVar67;
      auVar84._0_15_ = auVar82._0_15_;
      auVar84[0xf] = auVar89[7];
      cVar52 = -((ushort)(auVar71._0_2_ + (short)((uint)auVar72._0_4_ >> 0x10) +
                          (short)((uint6)auVar74._0_6_ >> 0x20) +
                          (short)((ulong)auVar76._0_8_ >> 0x30) +
                          (short)((unkuint10)auVar78._0_10_ >> 0x40) + auVar66._10_2_ +
                          auVar67._12_2_ + auVar84._14_2_) != 0);
      goto LAB_109edc720;
    }
    pfVar54 = (float *)param_3[1];
    if (*(float *)(pdVar51 + 0xf) != pfVar54[0x1e]) goto LAB_109edc3a8;
    cVar52 = -1;
    if (((((*(float *)(pdVar51 + 0xe) != pfVar54[0x1c]) ||
          (*(float *)(pdVar51 + 0xd) != pfVar54[0x1a])) ||
         (*(float *)(pdVar51 + 0xc) != pfVar54[0x18])) ||
        ((((*(float *)(pdVar51 + 0xb) != pfVar54[0x16] ||
           (*(float *)(pdVar51 + 10) != pfVar54[0x14])) ||
          ((*(float *)(pdVar51 + 9) != pfVar54[0x12] ||
           ((*(float *)(pdVar51 + 8) != pfVar54[0x10] || (*(float *)(pdVar51 + 7) != pfVar54[0xe])))
           ))) || (*(float *)(pdVar51 + 6) != pfVar54[0xc])))) ||
       ((((*(float *)(pdVar51 + 5) != pfVar54[10] || (*(float *)(pdVar51 + 4) != pfVar54[8])) ||
         (*(float *)(pdVar51 + 3) != pfVar54[6])) ||
        ((*(float *)(pdVar51 + 2) != pfVar54[4] || (*(float *)(pdVar51 + 1) != pfVar54[2]))))))
    goto LAB_109edc720;
    bVar50 = *(float *)pdVar51 == *pfVar54;
  }
  cVar52 = -!bVar50;
LAB_109edc720:
  *param_1 = cVar52;
  return;
}



/* Entry: 109edc728; end: 109edcd63;  */

void FUN_109edc728(char *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pdVar4 = (double *)*param_3;
  if (param_2 == 0x40) {
    bVar2 = pdVar4[1] != ((double *)param_3[1])[1];
    bVar1 = *pdVar4 == *(double *)param_3[1];
  }
  else if (param_2 == 0x20) {
    bVar2 = *(float *)(pdVar4 + 1) != ((float *)param_3[1])[2];
    bVar1 = *(float *)pdVar4 == *(float *)param_3[1];
  }
  else {
    fVar5 = (float)(((int)*(short *)pdVar4 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar5) {
      fVar5 = (float)((uint)fVar5 | 0x7f800000);
    }
    fVar5 = (float)((uint)fVar5 | (int)*(short *)pdVar4 & 0x80000000U);
    fVar7 = (float)(((int)*(short *)(pdVar4 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    uVar3 = (uint)*(short *)param_3[1];
    fVar8 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    fVar8 = (float)((uint)fVar8 | uVar3 & 0x80000000);
    uVar3 = (uint)((short *)param_3[1])[4];
    fVar6 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    bVar2 = (float)((uint)fVar7 | (int)*(short *)(pdVar4 + 1) & 0x80000000U) !=
            (float)((uint)fVar6 | uVar3 & 0x80000000);
    bVar1 = false;
    if (!NAN(fVar5) && !NAN(fVar8)) {
      bVar1 = fVar5 == fVar8;
    }
  }
  if (!bVar1) {
    bVar2 = true;
  }
  *param_1 = -bVar2;
  return;
}



/* Entry: 109edcd64; end: 109edcfcb;  */

void FUN_109edcd64(char *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  short sVar5;
  ushort uVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  uint6 uVar11;
  short sVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  bool bVar26;
  bool bVar27;
  double *pdVar28;
  char cVar29;
  float *pfVar30;
  ushort *puVar31;
  double *pdVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  float fVar39;
  ulong uVar40;
  undefined1 auVar42 [16];
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  float fVar50;
  ulong uVar51;
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar41 [12];
  undefined1 auVar43 [16];
  undefined1 auVar52 [12];
  undefined1 auVar54 [16];
  
  pdVar28 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar32 = (double *)param_3[1];
    if (pdVar28[7] != pdVar32[7]) goto LAB_109edce00;
    uVar6 = NEON_umaxv(CONCAT17(~(byte)(-(ulong)(pdVar28[6] == pdVar32[6]) >> 8),
                                CONCAT16(~(byte)-(ulong)(pdVar28[6] == pdVar32[6]),
                                         CONCAT15(~(byte)(-(ulong)(pdVar28[5] == pdVar32[5]) >> 8),
                                                  CONCAT14(~(byte)-(ulong)(pdVar28[5] == pdVar32[5])
                                                           ,CONCAT13(~(byte)(-(ulong)(pdVar28[4] ==
                                                                                     pdVar32[4]) >>
                                                                            8),
                                                                     CONCAT12(~(byte)-(ulong)(
                                                  pdVar28[4] == pdVar32[4]),
                                                  CONCAT11(~(byte)(-(ulong)(pdVar28[3] == pdVar32[3]
                                                                           ) >> 8),
                                                           ~(byte)-(ulong)(pdVar28[3] == pdVar32[3])
                                                          ))))))),2);
    cVar29 = -1;
    if ((((uVar6 & 1) != 0) || (pdVar28[2] != pdVar32[2])) || (pdVar28[1] != pdVar32[1]))
    goto LAB_109edcf58;
    bVar26 = *pdVar28 == *pdVar32;
  }
  else {
    if (param_2 == 0x20) {
      pfVar30 = (float *)param_3[1];
      if (*(float *)(pdVar28 + 7) == pfVar30[0xe]) {
        bVar26 = false;
        if ((*(float *)(pdVar28 + 6) == pfVar30[0xc]) &&
           (bVar26 = false, !NAN(*(float *)(pdVar28 + 5)) && !NAN(pfVar30[10]))) {
          bVar26 = *(float *)(pdVar28 + 5) == pfVar30[10];
        }
        bVar27 = false;
        if ((bVar26) && (bVar27 = false, !NAN(*(float *)(pdVar28 + 4)) && !NAN(pfVar30[8]))) {
          bVar27 = *(float *)(pdVar28 + 4) == pfVar30[8];
        }
        bVar26 = false;
        if ((bVar27) && (bVar26 = false, !NAN(*(float *)(pdVar28 + 3)) && !NAN(pfVar30[6]))) {
          bVar26 = *(float *)(pdVar28 + 3) == pfVar30[6];
        }
        bVar27 = false;
        if ((bVar26) && (bVar27 = false, !NAN(*(float *)(pdVar28 + 2)) && !NAN(pfVar30[4]))) {
          bVar27 = *(float *)(pdVar28 + 2) == pfVar30[4];
        }
        bVar26 = false;
        if ((bVar27) && (bVar26 = false, !NAN(*(float *)(pdVar28 + 1)) && !NAN(pfVar30[2]))) {
          bVar26 = *(float *)(pdVar28 + 1) == pfVar30[2];
        }
        if (bVar26) {
          bVar26 = *(float *)pdVar28 == *pfVar30;
          goto LAB_109edcf54;
        }
      }
LAB_109edce00:
      cVar29 = -1;
      goto LAB_109edcf58;
    }
    puVar31 = (ushort *)param_3[1];
    sVar5 = *(short *)(pdVar28 + 7);
    uVar33 = (undefined1)*(undefined2 *)(pdVar28 + 6);
    uVar34 = (undefined1)((ushort)*(undefined2 *)(pdVar28 + 6) >> 8);
    uVar35 = (undefined1)*(undefined2 *)(pdVar28 + 5);
    uVar36 = (undefined1)((ushort)*(undefined2 *)(pdVar28 + 5) >> 8);
    uVar37 = (undefined1)*(undefined2 *)(pdVar28 + 4);
    uVar38 = (undefined1)((ushort)*(undefined2 *)(pdVar28 + 4) >> 8);
    uVar1 = CONCAT12(uVar33,sVar5);
    uVar2 = CONCAT13(uVar34,uVar1);
    uVar3 = CONCAT15(uVar36,CONCAT14(uVar35,uVar2));
    sVar12 = *(short *)(pdVar28 + 3);
    uVar44 = (undefined1)*(undefined2 *)(pdVar28 + 2);
    uVar45 = (undefined1)((ushort)*(undefined2 *)(pdVar28 + 2) >> 8);
    uVar46 = (undefined1)*(undefined2 *)(pdVar28 + 1);
    uVar47 = (undefined1)((ushort)*(undefined2 *)(pdVar28 + 1) >> 8);
    uVar48 = (undefined1)*(undefined2 *)pdVar28;
    uVar49 = (undefined1)((ushort)*(undefined2 *)pdVar28 >> 8);
    uVar7 = CONCAT12(uVar44,sVar12);
    uVar8 = CONCAT13(uVar45,uVar7);
    uVar9 = CONCAT15(uVar47,CONCAT14(uVar46,uVar8));
    uVar40 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    uVar51 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
    auVar53._0_4_ = (float)uVar51 * 5.192297e+33;
    auVar53._4_4_ = (float)(uVar51 >> 0x20) * 5.192297e+33;
    auVar53._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar53._12_4_ =
         (float)(((ushort)(CONCAT17(uVar49,CONCAT16(uVar48,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    auVar42._0_4_ = (float)uVar40 * 5.192297e+33;
    auVar42._4_4_ = (float)(uVar40 >> 0x20) * 5.192297e+33;
    auVar42._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
    auVar42._12_4_ =
         (float)(((ushort)(CONCAT17(uVar38,CONCAT16(uVar37,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
         5.192297e+33;
    iVar17 = -(uint)(65536.0 <= auVar53._4_4_);
    iVar18 = -(uint)(65536.0 <= auVar53._8_4_);
    iVar20 = -(uint)(65536.0 <= auVar53._12_4_);
    uVar4 = CONCAT13(uVar34,CONCAT12(uVar33,sVar5));
    uVar3 = CONCAT15(uVar36,CONCAT14(uVar35,uVar4));
    uVar10 = CONCAT13(uVar45,CONCAT12(uVar44,sVar12));
    uVar9 = CONCAT15(uVar47,CONCAT14(uVar46,uVar10));
    auVar25[8] = SUB41(auVar53._8_4_,0);
    auVar25._0_8_ =
         CONCAT17((char)((uint)auVar53._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar53._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar53._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar53._4_4_,0),auVar53._0_4_)))) |
         0x7f8000007f800000;
    auVar25[9] = (char)((uint)auVar53._8_4_ >> 8);
    auVar25[10] = (byte)((uint)auVar53._8_4_ >> 0x10) | 0x80;
    auVar25[0xb] = (byte)((uint)auVar53._8_4_ >> 0x18) | 0x7f;
    auVar25[0xc] = SUB41(auVar53._12_4_,0);
    auVar25[0xd] = (char)((uint)auVar53._12_4_ >> 8);
    auVar25[0xe] = (byte)((uint)auVar53._12_4_ >> 0x10) | 0x80;
    auVar25[0xf] = (byte)((uint)auVar53._12_4_ >> 0x18) | 0x7f;
    auVar15[4] = (char)iVar17;
    auVar15._0_4_ = -(uint)(65536.0 <= auVar53._0_4_);
    auVar15[5] = (char)((uint)iVar17 >> 8);
    auVar15[6] = (char)((uint)iVar17 >> 0x10);
    auVar15[7] = (char)((uint)iVar17 >> 0x18);
    auVar15[8] = (char)iVar18;
    auVar15[9] = (char)((uint)iVar18 >> 8);
    auVar15[10] = (char)((uint)iVar18 >> 0x10);
    auVar15[0xb] = (char)((uint)iVar18 >> 0x18);
    auVar15[0xc] = (char)iVar20;
    auVar15[0xd] = (char)((uint)iVar20 >> 8);
    auVar15[0xe] = (char)((uint)iVar20 >> 0x10);
    auVar15[0xf] = (char)((uint)iVar20 >> 0x18);
    auVar53 = auVar53 ^ (auVar53 ^ auVar25) & auVar15;
    auVar23[8] = SUB41(auVar42._8_4_,0);
    auVar23._0_8_ =
         CONCAT17((char)((uint)auVar42._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar42._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar42._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar42._4_4_,0),auVar42._0_4_)))) |
         0x7f8000007f800000;
    auVar23[9] = (char)((uint)auVar42._8_4_ >> 8);
    auVar23[10] = (byte)((uint)auVar42._8_4_ >> 0x10) | 0x80;
    auVar23[0xb] = (byte)((uint)auVar42._8_4_ >> 0x18) | 0x7f;
    auVar23[0xc] = SUB41(auVar42._12_4_,0);
    auVar23[0xd] = (char)((uint)auVar42._12_4_ >> 8);
    auVar23[0xe] = (byte)((uint)auVar42._12_4_ >> 0x10) | 0x80;
    auVar23[0xf] = (byte)((uint)auVar42._12_4_ >> 0x18) | 0x7f;
    auVar13._4_4_ = -(uint)(65536.0 <= auVar42._4_4_);
    auVar13._0_4_ = -(uint)(65536.0 <= auVar42._0_4_);
    auVar13._8_4_ = -(uint)(65536.0 <= auVar42._8_4_);
    auVar13._12_4_ = -(uint)(65536.0 <= auVar42._12_4_);
    auVar42 = auVar42 ^ (auVar42 ^ auVar23) & auVar13;
    fVar39 = (float)((puVar31[0xc] & 0x7fff) << 0xd) * 5.192297e+33;
    fVar50 = (float)((puVar31[8] & 0x7fff) << 0xd) * 5.192297e+33;
    uVar33 = SUB41(fVar50,0);
    uVar34 = (undefined1)((uint)fVar50 >> 8);
    uVar35 = (undefined1)((uint)fVar50 >> 0x10);
    uVar36 = (undefined1)((uint)fVar50 >> 0x18);
    fVar19 = (float)((puVar31[4] & 0x7fff) << 0xd) * 5.192297e+33;
    uVar44 = SUB41(fVar19,0);
    uVar45 = (undefined1)((uint)fVar19 >> 8);
    bVar58 = (byte)((uint)fVar19 >> 0x10);
    bVar59 = (byte)((uint)fVar19 >> 0x18);
    fVar21 = (float)((*puVar31 & 0x7fff) << 0xd) * 5.192297e+33;
    uVar46 = SUB41(fVar21,0);
    uVar47 = (undefined1)((uint)fVar21 >> 8);
    bVar60 = (byte)((uint)fVar21 >> 0x10);
    bVar61 = (byte)((uint)fVar21 >> 0x18);
    auVar55._0_4_ = (float)((puVar31[0x1c] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar55._4_4_ = (float)((puVar31[0x18] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar55._8_4_ = (float)((puVar31[0x14] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar55._12_4_ = (float)((puVar31[0x10] & 0x7fff) << 0xd) * 5.192297e+33;
    auVar56._0_4_ = -(uint)(65536.0 <= fVar39);
    auVar56._4_4_ = -(uint)(65536.0 <= fVar50);
    auVar56._8_4_ = -(uint)(65536.0 <= fVar19);
    auVar56._12_4_ = -(uint)(65536.0 <= fVar21);
    uVar51 = CONCAT17((short)puVar31[8] >> 0xf,
                      (uint7)(((byte)((short)puVar31[0xc] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    uVar40 = CONCAT17((short)puVar31[0x18] >> 0xf,
                      (uint7)(((byte)((short)puVar31[0x1c] >> 0xf) & 0x80) << 0x18)) &
             0x80ffffffffffffff;
    auVar16[4] = uVar33;
    auVar16._0_4_ = fVar39;
    auVar16[5] = uVar34;
    auVar16[6] = uVar35;
    auVar16[7] = uVar36;
    auVar16[8] = uVar44;
    auVar16[9] = uVar45;
    auVar16[10] = bVar58;
    auVar16[0xb] = bVar59;
    auVar16[0xc] = uVar46;
    auVar16[0xd] = uVar47;
    auVar16[0xe] = bVar60;
    auVar16[0xf] = bVar61;
    auVar22[8] = uVar44;
    auVar22._0_8_ =
         CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,fVar39)))) |
         0x7f8000007f800000;
    auVar22[9] = uVar45;
    auVar22[10] = bVar58 | 0x80;
    auVar22[0xb] = bVar59 | 0x7f;
    auVar22[0xc] = uVar46;
    auVar22[0xd] = uVar47;
    auVar22[0xe] = bVar60 | 0x80;
    auVar22[0xf] = bVar61 | 0x7f;
    auVar57[4] = uVar33;
    auVar57._0_4_ = fVar39;
    auVar57[5] = uVar34;
    auVar57[6] = uVar35;
    auVar57[7] = uVar36;
    auVar57[8] = uVar44;
    auVar57[9] = uVar45;
    auVar57[10] = bVar58;
    auVar57[0xb] = bVar59;
    auVar57[0xc] = uVar46;
    auVar57[0xd] = uVar47;
    auVar57[0xe] = bVar60;
    auVar57[0xf] = bVar61;
    auVar57 = auVar57 ^ (auVar16 ^ auVar22) & auVar56;
    auVar24[8] = SUB41(auVar55._8_4_,0);
    auVar24._0_8_ =
         CONCAT17((char)((uint)auVar55._4_4_ >> 0x18),
                  CONCAT16((char)((uint)auVar55._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar55._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar55._4_4_,0),auVar55._0_4_)))) |
         0x7f8000007f800000;
    auVar24[9] = (char)((uint)auVar55._8_4_ >> 8);
    auVar24[10] = (byte)((uint)auVar55._8_4_ >> 0x10) | 0x80;
    auVar24[0xb] = (byte)((uint)auVar55._8_4_ >> 0x18) | 0x7f;
    auVar24[0xc] = SUB41(auVar55._12_4_,0);
    auVar24[0xd] = (char)((uint)auVar55._12_4_ >> 8);
    auVar24[0xe] = (byte)((uint)auVar55._12_4_ >> 0x10) | 0x80;
    auVar24[0xf] = (byte)((uint)auVar55._12_4_ >> 0x18) | 0x7f;
    auVar14._4_4_ = -(uint)(65536.0 <= auVar55._4_4_);
    auVar14._0_4_ = -(uint)(65536.0 <= auVar55._0_4_);
    auVar14._8_4_ = -(uint)(65536.0 <= auVar55._8_4_);
    auVar14._12_4_ = -(uint)(65536.0 <= auVar55._12_4_);
    auVar55 = auVar55 ^ (auVar55 ^ auVar24) & auVar14;
    fVar39 = (float)CONCAT13(auVar55[3] | (byte)(uVar40 >> 0x18),auVar55._0_3_);
    auVar41._0_8_ =
         CONCAT17(auVar55[7] | (byte)(uVar40 >> 0x38),
                  CONCAT16(auVar55[6],CONCAT15(auVar55[5],CONCAT14(auVar55[4],fVar39))));
    auVar41[8] = auVar55[8];
    auVar41[9] = auVar55[9];
    auVar41[10] = auVar55[10];
    auVar41[0xb] = auVar55[0xb] | (byte)((short)puVar31[0x14] >> 0xf) & 0x80;
    auVar43[0xc] = auVar55[0xc];
    auVar43._0_12_ = auVar41;
    auVar43[0xd] = auVar55[0xd];
    auVar43[0xe] = auVar55[0xe];
    auVar43[0xf] = auVar55[0xf] | (byte)((short)puVar31[0x10] >> 0xf) & 0x80;
    fVar50 = (float)CONCAT13(auVar57[3] | (byte)(uVar51 >> 0x18),auVar57._0_3_);
    auVar52._0_8_ =
         CONCAT17(auVar57[7] | (byte)(uVar51 >> 0x38),
                  CONCAT16(auVar57[6],CONCAT15(auVar57[5],CONCAT14(auVar57[4],fVar50))));
    auVar52[8] = auVar57[8];
    auVar52[9] = auVar57[9];
    auVar52[10] = auVar57[10];
    auVar52[0xb] = auVar57[0xb] | (byte)((short)puVar31[4] >> 0xf) & 0x80;
    auVar54[0xc] = auVar57[0xc];
    auVar54._0_12_ = auVar52;
    auVar54[0xd] = auVar57[0xd];
    auVar54[0xe] = auVar57[0xe];
    auVar54[0xf] = auVar57[0xf] | (byte)((short)*puVar31 >> 0xf) & 0x80;
    uVar11 = (uint6)CONCAT14(-((float)CONCAT13(auVar53[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                                               auVar53._4_3_) ==
                              (float)((ulong)auVar52._0_8_ >> 0x20)),
                             -(uint)((float)CONCAT13(auVar53[3] | (byte)(sVar12 >> 0xf) & 0x80,
                                                     auVar53._0_3_) == fVar50)) & 0xffff0000ffff;
    bVar26 = (byte)((~-((float)CONCAT13(auVar42[3] | (byte)(sVar5 >> 0xf) & 0x80,auVar42._0_3_) ==
                       fVar39) & 1U) +
                    (~-((float)CONCAT13(auVar42[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,auVar42._4_3_
                                       ) == (float)((ulong)auVar41._0_8_ >> 0x20)) & 2U) +
                    (~-((float)CONCAT13(auVar42[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                        auVar42._8_3_) == auVar41._8_4_) & 4U) +
                    (~-((float)CONCAT13(auVar42[0xf] |
                                        (byte)((long)CONCAT17(uVar38,CONCAT16(uVar37,uVar3)) >> 0x3f
                                              ) & 0x80,auVar42._12_3_) == auVar43._12_4_) & 8U) +
                    (~(byte)uVar11 & 0x10) + (~(byte)(uVar11 >> 0x20) & 0x20) +
                    (~-((float)CONCAT13(auVar53[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80,
                                        auVar53._8_3_) == auVar52._8_4_) & 0x40U) +
                   (~-((float)CONCAT13(auVar53[0xf] |
                                       (byte)((long)CONCAT17(uVar49,CONCAT16(uVar48,uVar9)) >> 0x3f)
                                       & 0x80,auVar53._12_3_) == auVar54._12_4_) & 0x80U)) == '\0';
  }
LAB_109edcf54:
  cVar29 = -!bVar26;
LAB_109edcf58:
  *param_1 = cVar29;
  return;
}



/* Entry: 109edcfcc; end: 109eddd67;  */

void FUN_109edcfcc(char *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint7 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar4 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  if (uVar4 < 4) {
    if (uVar4 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        cVar3 = -1;
        if (((((byte)param_4[2] != (byte)param_3[2]) || ((byte)param_4[4] != (byte)param_3[4])) ||
            (((byte)param_4[6] != (byte)param_3[6] ||
             ((((byte)param_4[8] != (byte)param_3[8] || ((byte)param_4[10] != (byte)param_3[10])) ||
              ((byte)param_4[0xc] != (byte)param_3[0xc])))))) ||
           ((((byte)param_4[0xe] != (byte)param_3[0xe] ||
             ((byte)param_4[0x10] != (byte)param_3[0x10])) ||
            (((byte)param_4[0x12] != (byte)param_3[0x12] ||
             ((((byte)param_4[0x14] != (byte)param_3[0x14] ||
               ((byte)param_4[0x16] != (byte)param_3[0x16])) ||
              (((byte)param_4[0x18] != (byte)param_3[0x18] ||
               (((byte)param_4[0x1a] != (byte)param_3[0x1a] ||
                ((byte)param_4[0x1c] != (byte)param_3[0x1c])))))))))))) goto LAB_109edd4c0;
        bVar2 = (byte)*param_4 == (byte)*param_3;
        goto LAB_109edd4b4;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      cVar3 = -1;
      if (((((((byte)param_3[0x1c] != (byte)param_4[0x1c]) ||
             ((byte)param_3[0x1a] != (byte)param_4[0x1a])) ||
            ((byte)param_3[0x18] != (byte)param_4[0x18])) ||
           (((byte)param_3[0x16] != (byte)param_4[0x16] ||
            ((byte)param_3[0x14] != (byte)param_4[0x14])))) ||
          ((byte)param_3[0x12] != (byte)param_4[0x12])) ||
         (((((byte)param_3[0x10] != (byte)param_4[0x10] ||
            ((byte)param_3[0xe] != (byte)param_4[0xe])) ||
           (((byte)param_3[0xc] != (byte)param_4[0xc] ||
            ((((byte)param_3[10] != (byte)param_4[10] || ((byte)param_3[8] != (byte)param_4[8])) ||
             ((byte)param_3[6] != (byte)param_4[6])))))) ||
          (((byte)param_3[4] != (byte)param_4[4] || ((byte)param_3[2] != (byte)param_4[2]))))))
      goto LAB_109edd4c0;
      uVar4 = (uint)(byte)*param_3;
      uVar5 = (uint)(byte)*param_4;
      goto LAB_109edd4b0;
    }
  }
  else if (uVar4 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      cVar3 = -1;
      if ((((((((ushort)param_3[0x1c] != (ushort)param_4[0x1c]) ||
              ((ushort)param_3[0x1a] != (ushort)param_4[0x1a])) ||
             ((ushort)param_3[0x18] != (ushort)param_4[0x18])) ||
            (((ushort)param_3[0x16] != (ushort)param_4[0x16] ||
             ((ushort)param_3[0x14] != (ushort)param_4[0x14])))) ||
           (((ushort)param_3[0x12] != (ushort)param_4[0x12] ||
            (((ushort)param_3[0x10] != (ushort)param_4[0x10] ||
             ((ushort)param_3[0xe] != (ushort)param_4[0xe])))))) ||
          (((ushort)param_3[0xc] != (ushort)param_4[0xc] ||
           ((((ushort)param_3[10] != (ushort)param_4[10] ||
             ((ushort)param_3[8] != (ushort)param_4[8])) ||
            ((ushort)param_3[6] != (ushort)param_4[6])))))) ||
         (((ushort)param_3[4] != (ushort)param_4[4] || ((ushort)param_3[2] != (ushort)param_4[2]))))
      goto LAB_109edd4c0;
      uVar4 = (uint)(ushort)*param_3;
      uVar5 = (uint)(ushort)*param_4;
LAB_109edd4b0:
      bVar2 = uVar4 == uVar5;
LAB_109edd4b4:
      cVar3 = -!bVar2;
      goto LAB_109edd4c0;
    }
  }
  else if (uVar4 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      cVar3 = -1;
      if ((((((param_3[0x1c] != param_4[0x1c]) || (param_3[0x1a] != param_4[0x1a])) ||
            ((param_3[0x18] != param_4[0x18] ||
             (((param_3[0x16] != param_4[0x16] || (param_3[0x14] != param_4[0x14])) ||
              (param_3[0x12] != param_4[0x12])))))) ||
           ((param_3[0x10] != param_4[0x10] || (param_3[0xe] != param_4[0xe])))) ||
          (param_3[0xc] != param_4[0xc])) ||
         (((param_3[10] != param_4[10] || (param_3[8] != param_4[8])) ||
          ((param_3[6] != param_4[6] || ((param_3[4] != param_4[4] || (param_3[2] != param_4[2])))))
          ))) goto LAB_109edd4c0;
      uVar4 = *param_3;
      uVar5 = *param_4;
      goto LAB_109edd4b0;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    uVar1 = CONCAT16(-(*(long *)(param_3 + 0x14) == *(long *)(param_4 + 0x14)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 0x12) == *(long *)(param_4 + 0x12)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 0x10) ==
                                                     *(long *)(param_4 + 0x10)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 0xe) ==
                                                                   *(long *)(param_4 + 0xe))))) &
            CONCAT16(-(*(long *)(param_3 + 0xc) == *(long *)(param_4 + 0xc)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 10) == *(long *)(param_4 + 10)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 8) ==
                                                     *(long *)(param_4 + 8)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 6) ==
                                                                   *(long *)(param_4 + 6)))));
    bVar6 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c)) *
                                        -0x80) < '\0'),
                                CONCAT16(-((char)((*(long *)(param_3 + 0x1a) ==
                                                  *(long *)(param_4 + 0x1a)) * -0x80) < '\0'),
                                         CONCAT15(-((char)((*(long *)(param_3 + 0x18) ==
                                                           *(long *)(param_4 + 0x18)) * -0x80) <
                                                   '\0'),CONCAT14(-((char)((*(long *)(param_3 + 0x16
                                                                                     ) ==
                                                                           *(long *)(param_4 + 0x16)
                                                                           ) * -0x80) < '\0'),
                                                                  CONCAT13(-((char)((char)(uVar1 >> 
                                                  0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar1 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar1 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar1 << 7) < '\0')))))))),1);
    if ((bVar6 & *(long *)(param_3 + 4) == *(long *)(param_4 + 4)) == 1 &&
        *(long *)(param_3 + 2) == *(long *)(param_4 + 2)) {
      bVar2 = *(long *)param_3 == *(long *)param_4;
      goto LAB_109edd4b4;
    }
  }
  cVar3 = -1;
LAB_109edd4c0:
  *param_1 = cVar3;
  return;
}


