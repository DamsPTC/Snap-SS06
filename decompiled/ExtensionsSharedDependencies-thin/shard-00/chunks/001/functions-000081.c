/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0018af0c; end: 0018af8b;  */

void FUN_0018af0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af1678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007de268;
  _swift_getWitnessTable(&UNK_007de268,&UNK_009b3350);
  puRam0000000000af1678 = puVar1;
  return;
}



/* Entry: 0018af8c; end: 0018af8f;  */

void FUN_0018af8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af1688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007de2a8;
  _swift_getWitnessTable(&UNK_007de2a8,&UNK_009b3350);
  puRam0000000000af1688 = puVar1;
  return;
}



/* Entry: 0018af90; end: 0018afcf;  */

void FUN_0018af90(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af1688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007de2a8;
  _swift_getWitnessTable(&UNK_007de2a8,&UNK_009b3350);
  puRam0000000000af1688 = puVar1;
  return;
}



/* Entry: 0018afd0; end: 0018aff3;  */

void FUN_0018afd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0018aff4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 0018aff4; end: 0018b033;  */

void FUN_0018aff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af1690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007de318;
  _swift_getWitnessTable(&UNK_007de318,&UNK_009b33d0);
  puRam0000000000af1690 = puVar1;
  return;
}



/* Entry: 0018b034; end: 0018b047;  */

void FUN_0018b034(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0018b078();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x187350)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0018b048; end: 0018b077;  */

void FUN_0018b048(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0018b078; end: 0018b0b7;  */

void FUN_0018b078(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af1698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007de340;
  _swift_getWitnessTable(&UNK_007de340,&UNK_009b33d0);
  puRam0000000000af1698 = puVar1;
  return;
}



/* Entry: 0018b0b8; end: 0018b0bb;  */

void FUN_0018b0b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af16a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007de380;
  _swift_getWitnessTable(&UNK_007de380,&UNK_009b33d0);
  puRam0000000000af16a0 = puVar1;
  return;
}



/* Entry: 0018b0bc; end: 0018b0fb;  */

void FUN_0018b0bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af16a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007de380;
  _swift_getWitnessTable(&UNK_007de380,&UNK_009b33d0);
  puRam0000000000af16a0 = puVar1;
  return;
}



/* Entry: 0018b0fc; end: 0018b27b;  */

int FUN_0018b0fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0018b178;
        goto LAB_0018b15c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0018b15c:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_0018b178:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0018b27c; end: 0018b2a7;  */

long FUN_0018b27c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0018b2a8; end: 0018b2b7;  */

undefined1  [16] FUN_0018b2a8(void)

{
  return ZEXT816(0x9b17f8);
}



/* Entry: 0018b2b8; end: 0018b36b;  */

void FUN_0018b2b8(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[4]);
  _swift_bridgeObjectRelease(param_1[5]);
  _swift_bridgeObjectRelease(param_1[6]);
  _swift_bridgeObjectRelease(param_1[7]);
  FUN_00023358(param_1[8],param_1[9]);
  _swift_bridgeObjectRelease(param_1[0xb]);
  _swift_bridgeObjectRelease(param_1[0xd]);
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_00023358(param_1[0xe],param_1[0xf]);
    _swift_bridgeObjectRelease(lVar1);
    _swift_release(param_1[0x11]);
  }
  if (param_1[0x12] != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(param_1[0x13],param_1[0x14]);
    _swift_bridgeObjectRelease(param_1[0x15]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[0x17]);
  return;
}



/* Entry: 0018b36c; end: 0018b4df;  */

undefined8 * FUN_0018b36c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar8 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar8;
  param_1[3] = uVar3;
  uVar9 = param_2[4];
  uVar4 = param_2[5];
  param_1[4] = uVar9;
  param_1[5] = uVar4;
  uVar10 = param_2[6];
  uVar5 = param_2[7];
  param_1[6] = uVar10;
  param_1[7] = uVar5;
  uVar1 = param_2[8];
  uVar6 = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar5);
  func_0x00023304(uVar1,uVar6);
  param_1[8] = uVar1;
  param_1[9] = uVar6;
  uVar8 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar8;
  uVar8 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar8;
  lVar7 = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  if (lVar7 == 0) {
    uVar8 = param_2[0xe];
    uVar10 = param_2[0x11];
    uVar9 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0x11] = uVar10;
    param_1[0x10] = uVar9;
  }
  else {
    uVar8 = param_2[0xe];
    uVar9 = param_2[0xf];
    func_0x00023304(uVar8,uVar9);
    param_1[0xe] = uVar8;
    param_1[0xf] = uVar9;
    uVar8 = param_2[0x11];
    param_1[0x10] = lVar7;
    param_1[0x11] = uVar8;
    _swift_bridgeObjectRetain(lVar7);
    _swift_retain(uVar8);
  }
  lVar7 = param_2[0x12];
  if (lVar7 == 0) {
    lVar7 = param_2[0x12];
    uVar9 = param_2[0x15];
    uVar8 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = lVar7;
    param_1[0x15] = uVar9;
    param_1[0x14] = uVar8;
  }
  else {
    param_1[0x12] = lVar7;
    uVar8 = param_2[0x13];
    uVar9 = param_2[0x14];
    _swift_bridgeObjectRetain();
    func_0x00023304(uVar8,uVar9);
    param_1[0x13] = uVar8;
    param_1[0x14] = uVar9;
    param_1[0x15] = param_2[0x15];
    _swift_bridgeObjectRetain();
  }
  uVar8 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar8;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0018b4e0; end: 0018b7b7;  */

undefined8 * FUN_0018b4e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[8];
  uVar8 = param_2[9];
  func_0x00023304(uVar3,uVar8);
  uVar7 = param_1[8];
  uVar1 = param_1[9];
  param_1[8] = uVar3;
  param_1[9] = uVar8;
  FUN_00023358(uVar7,uVar1);
  param_1[10] = param_2[10];
  uVar3 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0xc] = param_2[0xc];
  uVar3 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  if (param_1[0x10] == 0) {
    if (param_2[0x10] == 0) {
      uVar3 = param_2[0xe];
      uVar8 = param_2[0x11];
      uVar7 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar8;
      param_1[0x10] = uVar7;
    }
    else {
      uVar3 = param_2[0xe];
      uVar7 = param_2[0xf];
      func_0x00023304(uVar3,uVar7);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar7;
      param_1[0x10] = param_2[0x10];
      uVar3 = param_2[0x11];
      param_1[0x11] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar3);
    }
  }
  else if (param_2[0x10] == 0) {
    func_0x0018b7b8(param_1 + 0xe);
    uVar8 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar3;
  }
  else {
    uVar3 = param_2[0xe];
    uVar8 = param_2[0xf];
    func_0x00023304(uVar3,uVar8);
    uVar7 = param_1[0xe];
    uVar1 = param_1[0xf];
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar8;
    FUN_00023358(uVar7,uVar1);
    uVar3 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_retain();
    _swift_release(uVar3);
  }
  plVar4 = param_1 + 0x12;
  lVar5 = *plVar4;
  plVar6 = param_2 + 0x12;
  lVar2 = *plVar6;
  if (lVar5 == 0) {
    if (lVar2 == 0) {
      lVar2 = *plVar6;
      uVar7 = param_2[0x15];
      uVar3 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      *plVar4 = lVar2;
      param_1[0x15] = uVar7;
      param_1[0x14] = uVar3;
    }
    else {
      param_1[0x12] = lVar2;
      uVar3 = param_2[0x13];
      uVar7 = param_2[0x14];
      _swift_bridgeObjectRetain();
      func_0x00023304(uVar3,uVar7);
      param_1[0x13] = uVar3;
      param_1[0x14] = uVar7;
      param_1[0x15] = param_2[0x15];
      _swift_bridgeObjectRetain();
    }
  }
  else if (lVar2 == 0) {
    func_0x0018b7e4(plVar4);
    lVar2 = *plVar6;
    uVar7 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    *plVar4 = lVar2;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar3;
  }
  else {
    param_1[0x12] = lVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar5);
    uVar3 = param_2[0x13];
    uVar8 = param_2[0x14];
    func_0x00023304(uVar3,uVar8);
    uVar7 = param_1[0x13];
    uVar1 = param_1[0x14];
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar8;
    FUN_00023358(uVar7,uVar1);
    uVar3 = param_1[0x15];
    param_1[0x15] = param_2[0x15];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  param_1[0x16] = param_2[0x16];
  uVar3 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 0018b7b8; end: 0018b80f;  */

undefined8 FUN_0018b7b8(undefined8 param_1)

{
  func_0x0018e490(param_1,&UNK_009b2170);
  return param_1;
}



/* Entry: 0018b810; end: 0018b853;  */

void FUN_0018b810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Entry: 0018b854; end: 0018b9e7;  */

undefined8 * FUN_0018b854(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[0x10] == 0) {
LAB_0018b964:
    uVar1 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar2;
  }
  else {
    lVar3 = param_2[0x10];
    if (lVar3 == 0) {
      func_0x0018b7b8(param_1 + 0xe);
      goto LAB_0018b964;
    }
    uVar1 = param_1[0xe];
    uVar2 = param_1[0xf];
    uVar5 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    FUN_00023358(uVar1,uVar2);
    uVar1 = param_1[0x10];
    param_1[0x10] = lVar3;
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_release(uVar1);
  }
  plVar4 = param_1 + 0x12;
  if (*plVar4 != 0) {
    if (param_2[0x12] != 0) {
      param_1[0x12] = param_2[0x12];
      _swift_bridgeObjectRelease();
      uVar1 = param_1[0x13];
      uVar2 = param_1[0x14];
      uVar5 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar5;
      FUN_00023358(uVar1,uVar2);
      uVar1 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_0018b9bc;
    }
    func_0x0018b7e4(plVar4);
  }
  lVar3 = param_2[0x12];
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  *plVar4 = lVar3;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
LAB_0018b9bc:
  uVar1 = param_2[0x17];
  uVar2 = param_1[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 0018b9e8; end: 0018bae3;  */

int FUN_0018b9e8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xc1) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0018bae4; end: 0018bb4f;  */

void FUN_0018bae4(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00023358(*param_1,param_1[1]);
  if (param_1[4] != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[5]);
    FUN_00023358(param_1[6],param_1[7]);
    _swift_bridgeObjectRelease(param_1[8]);
    lVar1 = param_1[0xb];
    if (lVar1 != 0) {
      FUN_00023358(param_1[9],param_1[10]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 0018bb50; end: 0018befb;  */

undefined8 * FUN_0018bb50(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00023304(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar1 = param_2[4];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar2 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar2;
    param_1[10] = uVar4;
    uVar3 = *(undefined8 *)((long)param_2 + 0x59);
    *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)((long)param_1 + 0x59) = uVar3;
    lVar1 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar1;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    param_1[4] = lVar1;
    param_1[5] = uVar3;
    uVar2 = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    func_0x00023304(uVar4,uVar2);
    param_1[6] = uVar4;
    param_1[7] = uVar2;
    param_1[8] = param_2[8];
    lVar1 = param_2[0xb];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
    }
    else {
      uVar3 = param_2[9];
      uVar4 = param_2[10];
      func_0x00023304(uVar3,uVar4);
      param_1[9] = uVar3;
      param_1[10] = uVar4;
      param_1[0xb] = lVar1;
      param_1[0xc] = param_2[0xc];
      _swift_bridgeObjectRetain(lVar1);
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  return param_1;
}



/* Entry: 0018befc; end: 0018bf27;  */

void FUN_0018befc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x59) = uVar7;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 0018bf28; end: 0018c04f;  */

undefined8 * FUN_0018bf28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  FUN_00023358(uVar1,uVar2);
  plVar3 = param_1 + 4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  if (*plVar3 == 0) {
LAB_0018c000:
    uVar1 = param_2[8];
    uVar5 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[0xb] = uVar5;
    param_1[10] = uVar2;
    uVar1 = *(undefined8 *)((long)param_2 + 0x59);
    *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)((long)param_1 + 0x59) = uVar1;
    lVar4 = param_2[4];
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    param_1[5] = param_2[5];
    *plVar3 = lVar4;
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    return param_1;
  }
  if (param_2[4] == 0) {
    func_0x001869cc(plVar3);
    goto LAB_0018c000;
  }
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease();
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[0xb] != 0) {
    lVar4 = param_2[0xb];
    if (lVar4 != 0) {
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      FUN_00023358(uVar1,uVar2);
      uVar1 = param_1[0xb];
      param_1[0xb] = lVar4;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0xc] = param_2[0xc];
      goto LAB_0018c034;
    }
    func_0x00186a58(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
LAB_0018c034:
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Entry: 0018c050; end: 0018c16f;  */

int FUN_0018c050(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018c170; end: 0018c1cb;  */

void FUN_0018c170(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  FUN_00023358(param_1[2],param_1[3]);
  _swift_bridgeObjectRelease(param_1[4]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_00023358(param_1[5],param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
    return;
  }
  return;
}



/* Entry: 0018c1cc; end: 0018c27f;  */

undefined8 * FUN_0018c1cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar4,uVar2);
  param_1[2] = uVar4;
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  lVar3 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar3 == 0) {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
  }
  else {
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    func_0x00023304(uVar4,uVar1);
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = lVar3;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar3);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 0018c280; end: 0018c4f7;  */

undefined8 * FUN_0018c280(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  func_0x00023304(uVar2,uVar4);
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  FUN_00023358(uVar3,uVar1);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00023304(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x00186a58(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00023304(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    FUN_00023358(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 0018c4f8; end: 0018c6f7;  */

int FUN_0018c4f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0018c6f8; end: 0018c72b;  */

void FUN_0018c6f8(undefined8 *param_1)

{
  FUN_00023358(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[6]);
  return;
}



/* Entry: 0018c72c; end: 0018c847;  */

undefined8 * FUN_0018c72c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 0018c848; end: 0018c863;  */

void FUN_0018c848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 0018c864; end: 0018c8d3;  */

undefined8 * FUN_0018c864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



/* Entry: 0018c8d4; end: 0018c9a3;  */

int FUN_0018c8d4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018c9a4; end: 0018ca1b;  */

void FUN_0018c9a4(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00023358(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[6]);
  _swift_bridgeObjectRelease(param_1[8]);
  _swift_bridgeObjectRelease(param_1[10]);
  _swift_bridgeObjectRelease(param_1[0xd]);
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_00023358(param_1[0xe],param_1[0xf]);
    _swift_bridgeObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_1[0x11]);
    return;
  }
  return;
}



/* Entry: 0018ca1c; end: 0018cb27;  */

undefined8 * FUN_0018ca1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00023304(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined2 *)((long)param_1 + 0x25) = *(undefined2 *)((long)param_2 + 0x25);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  lVar2 = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    uVar3 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
  }
  else {
    uVar3 = param_2[0xe];
    uVar4 = param_2[0xf];
    func_0x00023304(uVar3,uVar4);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    uVar3 = param_2[0x11];
    param_1[0x10] = lVar2;
    param_1[0x11] = uVar3;
    _swift_bridgeObjectRetain(lVar2);
    _swift_retain(uVar3);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 0018cb28; end: 0018ccfb;  */

undefined8 * FUN_0018cb28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  func_0x00023304(uVar3,uVar5);
  uVar4 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar5;
  FUN_00023358(uVar4,uVar1);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x26) = *(undefined1 *)((long)param_2 + 0x26);
  param_1[5] = param_2[5];
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[7] = param_2[7];
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[9] = param_2[9];
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  param_1[0xc] = param_2[0xc];
  uVar3 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  if (param_1[0x10] == 0) {
    if (param_2[0x10] == 0) {
      uVar3 = param_2[0xe];
      uVar5 = param_2[0x11];
      uVar4 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar5;
      param_1[0x10] = uVar4;
    }
    else {
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      func_0x00023304(uVar3,uVar4);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar4;
      param_1[0x10] = param_2[0x10];
      uVar3 = param_2[0x11];
      param_1[0x11] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar3);
    }
  }
  else if (param_2[0x10] == 0) {
    FUN_0018ccfc(param_1 + 0xe);
    uVar5 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
  }
  else {
    uVar3 = param_2[0xe];
    uVar5 = param_2[0xf];
    func_0x00023304(uVar3,uVar5);
    uVar4 = param_1[0xe];
    uVar1 = param_1[0xf];
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar5;
    FUN_00023358(uVar4,uVar1);
    uVar3 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_retain();
    _swift_release(uVar3);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 0018ccfc; end: 0018cd27;  */

undefined8 FUN_0018ccfc(undefined8 param_1)

{
  func_0x0018e490(param_1,&UNK_009b2328);
  return param_1;
}



/* Entry: 0018cd28; end: 0018cd5b;  */

void FUN_0018cd28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Entry: 0018cd5c; end: 0018ce6b;  */

undefined8 * FUN_0018cd5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined2 *)((long)param_1 + 0x25) = *(undefined2 *)((long)param_2 + 0x25);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    lVar4 = param_2[0x10];
    if (lVar4 != 0) {
      uVar1 = param_1[0xe];
      uVar2 = param_1[0xf];
      uVar5 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar5;
      FUN_00023358(uVar1,uVar2);
      param_1[0x10] = lVar4;
      _swift_bridgeObjectRelease(lVar3);
      uVar1 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      _swift_release(uVar1);
      goto LAB_0018ce50;
    }
    FUN_0018ccfc(param_1 + 0xe);
  }
  uVar1 = param_2[0xe];
  uVar5 = param_2[0x11];
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar5;
  param_1[0x10] = uVar2;
LAB_0018ce50:
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 0018ce6c; end: 0018d0bb;  */

int FUN_0018ce6c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x91) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018d0bc; end: 0018d127;  */

void FUN_0018d0bc(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00023358(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  if (param_1[4] != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(param_1[5],param_1[6]);
    _swift_bridgeObjectRelease(param_1[7]);
    lVar1 = param_1[10];
    if (lVar1 != 0) {
      FUN_00023358(param_1[8],param_1[9]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 0018d128; end: 0018d43b;  */

undefined8 * FUN_0018d128(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00023304(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    lVar1 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar1;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
  }
  else {
    param_1[4] = lVar1;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    _swift_bridgeObjectRetain(lVar1);
    func_0x00023304(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = param_2[7];
    lVar1 = param_2[10];
    _swift_bridgeObjectRetain();
    if (lVar1 != 0) {
      uVar2 = param_2[8];
      uVar3 = param_2[9];
      func_0x00023304(uVar2,uVar3);
      param_1[8] = uVar2;
      param_1[9] = uVar3;
      param_1[10] = lVar1;
      param_1[0xb] = param_2[0xb];
      _swift_bridgeObjectRetain(lVar1);
      return param_1;
    }
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
  }
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  return param_1;
}



/* Entry: 0018d43c; end: 0018d52b;  */

undefined8 * FUN_0018d43c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 4;
  if (*plVar3 != 0) {
    if (param_2[4] != 0) {
      param_1[4] = param_2[4];
      _swift_bridgeObjectRelease();
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar5 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar5;
      FUN_00023358(uVar1,uVar2);
      uVar1 = param_1[7];
      param_1[7] = param_2[7];
      _swift_bridgeObjectRelease(uVar1);
      if (param_1[10] != 0) {
        lVar4 = param_2[10];
        if (lVar4 != 0) {
          uVar1 = param_1[8];
          uVar2 = param_1[9];
          uVar5 = param_2[8];
          param_1[9] = param_2[9];
          param_1[8] = uVar5;
          FUN_00023358(uVar1,uVar2);
          uVar1 = param_1[10];
          param_1[10] = lVar4;
          _swift_bridgeObjectRelease(uVar1);
          param_1[0xb] = param_2[0xb];
          return param_1;
        }
        func_0x00186a58(param_1 + 8);
      }
      uVar1 = param_2[8];
      uVar5 = param_2[0xb];
      uVar2 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar1;
      param_1[0xb] = uVar5;
      param_1[10] = uVar2;
      return param_1;
    }
    func_0x00186b30(plVar3);
  }
  lVar4 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  *plVar3 = lVar4;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  uVar5 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar5;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 0018d52c; end: 0018d613;  */

int FUN_0018d52c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018d614; end: 0018d6db;  */

undefined8 * FUN_0018d614(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  return param_1;
}



/* Entry: 0018d6dc; end: 0018d733;  */

undefined8 * FUN_0018d6dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  return param_1;
}



/* Entry: 0018d734; end: 0018d7ff;  */

int FUN_0018d734(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && (*(char *)((long)param_1 + 0x1d) != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018d800; end: 0018d86f;  */

void FUN_0018d800(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  FUN_00023358(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  if (param_1[5] != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(param_1[6],param_1[7]);
    _swift_bridgeObjectRelease(param_1[8]);
    lVar1 = param_1[0xb];
    if (lVar1 != 0) {
      FUN_00023358(param_1[9],param_1[10]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 0018d870; end: 0018dc03;  */

undefined8 * FUN_0018d870(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  lVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    lVar1 = param_2[5];
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    uVar3 = param_2[9];
    uVar5 = param_2[0xc];
    uVar4 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    param_1[0xc] = uVar5;
    param_1[0xb] = uVar4;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[6] = uVar2;
    param_1[5] = lVar1;
  }
  else {
    param_1[5] = lVar1;
    uVar3 = param_2[6];
    uVar2 = param_2[7];
    _swift_bridgeObjectRetain(lVar1);
    func_0x00023304(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    param_1[8] = param_2[8];
    lVar1 = param_2[0xb];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
    }
    else {
      uVar3 = param_2[9];
      uVar2 = param_2[10];
      func_0x00023304(uVar3,uVar2);
      param_1[9] = uVar3;
      param_1[10] = uVar2;
      param_1[0xb] = lVar1;
      param_1[0xc] = param_2[0xc];
      _swift_bridgeObjectRetain(lVar1);
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  return param_1;
}



/* Entry: 0018dc04; end: 0018dd1f;  */

undefined8 * FUN_0018dc04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 5;
  if (*plVar3 == 0) {
LAB_0018dcc8:
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    uVar5 = param_2[9];
    uVar7 = param_2[0xc];
    uVar6 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    param_1[0xc] = uVar7;
    param_1[0xb] = uVar6;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    lVar4 = param_2[5];
    param_1[6] = param_2[6];
    *plVar3 = lVar4;
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    return param_1;
  }
  if (param_2[5] == 0) {
    func_0x00186f2c(plVar3);
    goto LAB_0018dcc8;
  }
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease();
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[0xb] != 0) {
    lVar4 = param_2[0xb];
    if (lVar4 != 0) {
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      FUN_00023358(uVar1,uVar2);
      uVar1 = param_1[0xb];
      param_1[0xb] = lVar4;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0xc] = param_2[0xc];
      goto LAB_0018dd04;
    }
    func_0x00186a58(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
LAB_0018dd04:
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Entry: 0018dd20; end: 0018ddd3;  */

int FUN_0018dd20(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0018ddd4; end: 0018de4f;  */

void FUN_0018ddd4(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00023358(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[5]);
  _swift_bridgeObjectRelease(param_1[7]);
  if (param_1[8] != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(param_1[9],param_1[10]);
    _swift_bridgeObjectRelease(param_1[0xb]);
    lVar1 = param_1[0xf];
    if (lVar1 != 0) {
      FUN_00023358(param_1[0xd],param_1[0xe]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 0018de50; end: 0018e247;  */

undefined8 * FUN_0018de50(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00023304(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = param_2[8];
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  if (lVar1 == 0) {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    param_1[0x10] = param_2[0x10];
    lVar1 = param_2[8];
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = lVar1;
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
  }
  else {
    param_1[8] = lVar1;
    uVar2 = param_2[9];
    uVar3 = param_2[10];
    _swift_bridgeObjectRetain(lVar1);
    func_0x00023304(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = param_2[0xb];
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    lVar1 = param_2[0xf];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar2 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar2;
      uVar2 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar2;
    }
    else {
      uVar2 = param_2[0xd];
      uVar3 = param_2[0xe];
      func_0x00023304(uVar2,uVar3);
      param_1[0xd] = uVar2;
      param_1[0xe] = uVar3;
      param_1[0xf] = lVar1;
      param_1[0x10] = param_2[0x10];
      _swift_bridgeObjectRetain(lVar1);
    }
  }
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  return param_1;
}



/* Entry: 0018e248; end: 0018e27b;  */

void FUN_0018e248(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar7 = *(undefined8 *)((long)param_2 + 0x7a);
  *(undefined8 *)((long)param_1 + 0x82) = *(undefined8 *)((long)param_2 + 0x82);
  *(undefined8 *)((long)param_1 + 0x7a) = uVar7;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Entry: 0018e27c; end: 0018e3ab;  */

undefined8 * FUN_0018e27c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 8;
  if (*plVar3 != 0) {
    if (param_2[8] != 0) {
      param_1[8] = param_2[8];
      _swift_bridgeObjectRelease();
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      FUN_00023358(uVar1,uVar2);
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      _swift_bridgeObjectRelease(uVar1);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      if (param_1[0xf] != 0) {
        lVar4 = param_2[0xf];
        if (lVar4 != 0) {
          uVar1 = param_1[0xd];
          uVar2 = param_1[0xe];
          uVar5 = param_2[0xd];
          param_1[0xe] = param_2[0xe];
          param_1[0xd] = uVar5;
          FUN_00023358(uVar1,uVar2);
          uVar1 = param_1[0xf];
          param_1[0xf] = lVar4;
          _swift_bridgeObjectRelease(uVar1);
          param_1[0x10] = param_2[0x10];
          goto LAB_0018e390;
        }
        func_0x00186a58(param_1 + 0xd);
      }
      uVar1 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar1;
      uVar1 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar1;
      goto LAB_0018e390;
    }
    func_0x00186f8c(plVar3);
  }
  uVar1 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar2;
  param_1[0x10] = param_2[0x10];
  lVar4 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  *plVar3 = lVar4;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
LAB_0018e390:
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  return param_1;
}



/* Entry: 0018e3ac; end: 0018e4cb;  */

int FUN_0018e3ac(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x8a) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018e4cc; end: 0018e57f;  */

undefined8 * FUN_0018e4cc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00023304(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 0018e580; end: 0018e7f7;  */

undefined8 * FUN_0018e580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00023304(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  FUN_00023358(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00023304(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x00186a58(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00023304(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    FUN_00023358(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  return param_1;
}



/* Entry: 0018e7f8; end: 0018e807;  */

undefined1  [16] FUN_0018e7f8(void)

{
  return ZEXT816(0x9b2288);
}



/* Entry: 0018e808; end: 0018e83b;  */

void FUN_0018e808(undefined8 *param_1)

{
  FUN_00023358(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1[3]);
  return;
}



/* Entry: 0018e83c; end: 0018e907;  */

undefined8 * FUN_0018e83c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 0018e908; end: 0018e957;  */

undefined8 * FUN_0018e908(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 0018e958; end: 0018eafb;  */

undefined1  [16] FUN_0018e958(void)

{
  return ZEXT816(0x9b2328);
}



/* Entry: 0018eafc; end: 0018ebbf;  */

undefined8 * FUN_0018eafc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0018ebc0; end: 0018ec0f;  */

undefined8 * FUN_0018ebc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 0018ec10; end: 0018ecd7;  */

int FUN_0018ec10(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018ecd8; end: 0018ed03;  */

void FUN_0018ecd8(undefined8 *param_1)

{
  FUN_00023358(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[4]);
  return;
}



/* Entry: 0018ed04; end: 0018eddf;  */

undefined8 * FUN_0018ed04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0018ede0; end: 0018ee37;  */

undefined8 * FUN_0018ede0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 0018ee38; end: 0018ef07;  */

int FUN_0018ee38(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0018ef08; end: 0018efa3;  */

undefined8 * FUN_0018ef08(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  lVar1 = param_2[6];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[4];
    uVar4 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar4;
    param_1[6] = uVar2;
  }
  else {
    uVar3 = param_2[4];
    uVar2 = param_2[5];
    func_0x00023304(uVar3,uVar2);
    param_1[4] = uVar3;
    param_1[5] = uVar2;
    param_1[6] = lVar1;
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 0018efa4; end: 0018f1cb;  */

undefined8 * FUN_0018efa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00023304(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  FUN_00023358(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar2 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
    }
    else {
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      func_0x00023304(uVar2,uVar3);
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
      *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
      *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
      *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
      *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
      *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[6] == 0) {
    func_0x00186a58(param_1 + 4);
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  else {
    uVar2 = param_2[4];
    uVar4 = param_2[5];
    func_0x00023304(uVar2,uVar4);
    uVar3 = param_1[4];
    uVar1 = param_1[5];
    param_1[4] = uVar2;
    param_1[5] = uVar4;
    FUN_00023358(uVar3,uVar1);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
    *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
    *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
    *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
    *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
  }
  return param_1;
}



/* Entry: 0018f1cc; end: 0018f277;  */

int FUN_0018f1cc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0018f278; end: 0018f32b;  */

undefined8 * FUN_0018f278(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined2 *)((long)param_1 + 0x21) = *(undefined2 *)((long)param_2 + 0x21);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00023304(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 0018f32c; end: 0018f593;  */

undefined8 * FUN_0018f32c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00023304(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  FUN_00023358(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00023304(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x00186a58(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00023304(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    FUN_00023358(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  return param_1;
}



/* Entry: 0018f594; end: 0018f5ab;  */

int FUN_0018f594(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0018f5ac; end: 0018f61b;  */

void FUN_0018f5ac(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  FUN_00023358(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_00023358(param_1[5],param_1[6]);
    _swift_bridgeObjectRelease(lVar1);
  }
  lVar1 = param_1[0xe];
  if (lVar1 == 1) {
    return;
  }
  FUN_00023358(param_1[10],param_1[0xb]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
  return;
}



/* Entry: 0018f61c; end: 0018f723;  */

undefined8 * FUN_0018f61c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00023304(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  lVar1 = param_2[0xe];
  if (lVar1 == 1) {
    uVar3 = param_2[10];
    uVar4 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar2;
    uVar3 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)param_1 + 0x69) = uVar3;
  }
  else {
    uVar3 = param_2[10];
    uVar2 = param_2[0xb];
    func_0x00023304(uVar3,uVar2);
    param_1[10] = uVar3;
    param_1[0xb] = uVar2;
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = lVar1;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 0018f724; end: 0018f9af;  */

undefined8 * FUN_0018f724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  func_0x00023304(uVar1,uVar3);
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  FUN_00023358(uVar2,uVar4);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar2 = param_2[6];
      uVar1 = param_2[5];
      uVar3 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      param_1[5] = uVar1;
    }
    else {
      uVar1 = param_2[5];
      uVar2 = param_2[6];
      func_0x00023304(uVar1,uVar2);
      param_1[5] = uVar1;
      param_1[6] = uVar2;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x00186a58(param_1 + 5);
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  else {
    uVar1 = param_2[5];
    uVar3 = param_2[6];
    func_0x00023304(uVar1,uVar3);
    uVar2 = param_1[5];
    uVar4 = param_1[6];
    param_1[5] = uVar1;
    param_1[6] = uVar3;
    FUN_00023358(uVar2,uVar4);
    uVar1 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  if (param_1[0xe] == 1) {
    if (param_2[0xe] == 1) {
      uVar2 = param_2[0xb];
      uVar1 = param_2[10];
      uVar4 = param_2[0xd];
      uVar3 = param_2[0xc];
      uVar5 = *(undefined8 *)((long)param_2 + 0x69);
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar5;
      param_1[0xb] = uVar2;
      param_1[10] = uVar1;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar3;
    }
    else {
      uVar1 = param_2[10];
      uVar2 = param_2[0xb];
      func_0x00023304(uVar1,uVar2);
      param_1[10] = uVar1;
      param_1[0xb] = uVar2;
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0xe] == 1) {
    FUN_0018f9b0(param_1 + 10);
    uVar2 = *(undefined8 *)((long)param_2 + 0x71);
    uVar1 = *(undefined8 *)((long)param_2 + 0x69);
    uVar5 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    *(undefined8 *)((long)param_1 + 0x71) = uVar2;
    *(undefined8 *)((long)param_1 + 0x69) = uVar1;
  }
  else {
    uVar1 = param_2[10];
    uVar3 = param_2[0xb];
    func_0x00023304(uVar1,uVar3);
    uVar2 = param_1[10];
    uVar4 = param_1[0xb];
    param_1[10] = uVar1;
    param_1[0xb] = uVar3;
    FUN_00023358(uVar2,uVar4);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
    param_1[0xd] = param_2[0xd];
    uVar1 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  }
  return param_1;
}



/* Entry: 0018f9b0; end: 0018f9e3;  */

undefined8 * FUN_0018f9b0(undefined8 *param_1)

{
  FUN_00023358(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[4]);
  return param_1;
}



/* Entry: 0018f9e4; end: 0018fa0f;  */

void FUN_0018f9e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  uVar7 = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = uVar7;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 0018fa10; end: 0018fb2f;  */

undefined8 * FUN_0018fa10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar1,uVar4);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (param_1[7] != 0) {
    lVar2 = param_2[7];
    if (lVar2 != 0) {
      uVar1 = param_1[5];
      uVar4 = param_1[6];
      uVar3 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      FUN_00023358(uVar1,uVar4);
      uVar1 = param_1[7];
      param_1[7] = lVar2;
      _swift_bridgeObjectRelease(uVar1);
      param_1[8] = param_2[8];
      goto LAB_0018fab0;
    }
    func_0x00186a58(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
LAB_0018fab0:
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  if (param_1[0xe] != 1) {
    lVar2 = param_2[0xe];
    if (lVar2 != 1) {
      uVar1 = param_1[10];
      uVar4 = param_1[0xb];
      uVar3 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      FUN_00023358(uVar1,uVar4);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      uVar1 = param_1[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = lVar2;
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      return param_1;
    }
    FUN_0018f9b0(param_1 + 10);
  }
  uVar1 = param_2[10];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar4;
  uVar1 = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = uVar1;
  return param_1;
}



/* Entry: 0018fb30; end: 0018fbe7;  */

int FUN_0018fb30(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0018fbe8; end: 0018fc3b;  */

void FUN_0018fbe8(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  FUN_00023358(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_00023358(param_1[4],param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
    return;
  }
  return;
}



/* Entry: 0018fc3c; end: 0018fcdf;  */

undefined8 * FUN_0018fc3c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  lVar1 = param_2[6];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[4];
    uVar4 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar4;
    param_1[6] = uVar2;
  }
  else {
    uVar3 = param_2[4];
    uVar2 = param_2[5];
    func_0x00023304(uVar3,uVar2);
    param_1[4] = uVar3;
    param_1[5] = uVar2;
    param_1[6] = lVar1;
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain(lVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 0018fce0; end: 0018ff17;  */

undefined8 * FUN_0018fce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00023304(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  FUN_00023358(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar2 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
    }
    else {
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      func_0x00023304(uVar2,uVar3);
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
      *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
      *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
      *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
      *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
      *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[6] == 0) {
    func_0x00186a58(param_1 + 4);
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  else {
    uVar2 = param_2[4];
    uVar4 = param_2[5];
    func_0x00023304(uVar2,uVar4);
    uVar3 = param_1[4];
    uVar1 = param_1[5];
    param_1[4] = uVar2;
    param_1[5] = uVar4;
    FUN_00023358(uVar3,uVar1);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
    *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
    *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
    *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
    *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 0018ff18; end: 0018ffc3;  */

int FUN_0018ff18(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0018ffc4; end: 00190017;  */

void FUN_0018ffc4(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  FUN_00023358(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_00023358(param_1[5],param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar1);
    return;
  }
  return;
}



/* Entry: 00190018; end: 001900c3;  */

undefined8 * FUN_00190018(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00023304(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 001900c4; end: 0019031b;  */

undefined8 * FUN_001900c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00023304(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  FUN_00023358(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00023304(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x00186a58(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00023304(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    FUN_00023358(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  return param_1;
}



/* Entry: 0019031c; end: 0019033f;  */

undefined1  [16] FUN_0019031c(void)

{
  return ZEXT816(0x9b2950);
}



/* Entry: 00190340; end: 0019038f;  */

void FUN_00190340(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  FUN_00023358(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    FUN_00023358(param_1[0xb]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[0xe]);
  return;
}



/* Entry: 00190390; end: 00190597;  */

undefined8 * FUN_00190390(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = param_2[9];
  uVar1 = param_2[0xc];
  _swift_bridgeObjectRetain();
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    func_0x00023304(uVar3,uVar1);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar1;
  }
  else {
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
  }
  uVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar3;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 00190598; end: 0019066f;  */

undefined8 * FUN_00190598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = uVar3;
      FUN_00023358(uVar1);
      goto LAB_00190650;
    }
    func_0x0005c328(param_1 + 0xb);
  }
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
LAB_00190650:
  uVar1 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 00190670; end: 00190723;  */

int FUN_00190670(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xf] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00190724; end: 0019074f;  */

void FUN_00190724(undefined8 *param_1)

{
  FUN_00023358(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[3]);
  return;
}



/* Entry: 00190750; end: 00190813;  */

undefined8 * FUN_00190750(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 00190814; end: 00190863;  */

undefined8 * FUN_00190814(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 00190864; end: 00190933;  */

int FUN_00190864(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


