/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047466fc; end: 104746cd3;  */

long * FUN_1047466fc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) != 0) {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar9 = (ulong)uVar6 & 0xff;
    _swift_retain();
    return (long *)(lVar7 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  lVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar7;
  lVar7 = param_2[3];
  if (lVar7 == 1) {
    lVar7 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar7;
    param_1[4] = param_2[4];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar7;
    lVar7 = param_2[4];
    param_1[4] = lVar7;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar7);
  }
  lVar7 = param_2[0xb];
  if (lVar7 == 1) {
    lVar7 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = lVar7;
    lVar7 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar7;
    lVar7 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = lVar7;
    param_1[0xb] = param_2[0xb];
  }
  else {
    if (lVar7 == 2) {
      lVar7 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = lVar7;
      lVar7 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = lVar7;
      lVar7 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = lVar7;
      lVar7 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = lVar7;
      lVar7 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = lVar7;
      lVar7 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = lVar7;
      lVar7 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = lVar7;
      goto LAB_1047468d8;
    }
    lVar8 = param_2[7];
    if (lVar8 == 1) {
      lVar8 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = lVar8;
      lVar8 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = lVar8;
      param_1[9] = param_2[9];
    }
    else {
      lVar11 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = lVar11;
      lVar11 = param_2[8];
      lVar13 = param_2[9];
      param_1[7] = lVar8;
      param_1[8] = lVar11;
      param_1[9] = lVar13;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
    }
    param_1[10] = param_2[10];
    param_1[0xb] = lVar7;
    _swift_bridgeObjectRetain(lVar7);
  }
  lVar7 = param_2[0x12];
  if (lVar7 == 1) {
    lVar7 = param_2[0xc];
    lVar11 = param_2[0xf];
    lVar8 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar7;
    param_1[0xf] = lVar11;
    param_1[0xe] = lVar8;
    lVar7 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = lVar7;
    param_1[0x12] = param_2[0x12];
  }
  else {
    lVar8 = param_2[0xe];
    if (lVar8 == 1) {
      lVar8 = param_2[0xc];
      lVar13 = param_2[0xf];
      lVar11 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = lVar8;
      param_1[0xf] = lVar13;
      param_1[0xe] = lVar11;
      param_1[0x10] = param_2[0x10];
    }
    else {
      lVar11 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = lVar11;
      lVar11 = param_2[0xf];
      lVar13 = param_2[0x10];
      param_1[0xe] = lVar8;
      param_1[0xf] = lVar11;
      param_1[0x10] = lVar13;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
    }
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar7;
    _swift_bridgeObjectRetain(lVar7);
  }
LAB_1047468d8:
  lVar7 = param_2[0x19];
  if (lVar7 == 1) {
    lVar7 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = lVar7;
    lVar7 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = lVar7;
    lVar7 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = lVar7;
    param_1[0x19] = param_2[0x19];
  }
  else {
    lVar8 = param_2[0x15];
    if (lVar8 == 1) {
      lVar8 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = lVar8;
      lVar8 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = lVar8;
      param_1[0x17] = param_2[0x17];
    }
    else {
      lVar11 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = lVar11;
      lVar11 = param_2[0x16];
      lVar13 = param_2[0x17];
      param_1[0x15] = lVar8;
      param_1[0x16] = lVar11;
      param_1[0x17] = lVar13;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
    }
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = lVar7;
    _swift_bridgeObjectRetain(lVar7);
  }
  lVar11 = (long)*(int *)(param_3 + 0x24);
  lVar8 = 0;
  FUN_1047425ec();
  lVar13 = *(long *)(lVar8 + -8);
  lVar7 = (long)param_2 + lVar11;
  (**(code **)(lVar13 + 0x30))(lVar7,1,lVar8);
  if ((int)lVar7 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar7)
    ;
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,lVar8);
  }
  else {
    lVar7 = 0x112db3fe8;
    func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
    _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar7 = puVar2[6];
  if (lVar7 == 0) {
    uVar12 = puVar2[4];
    uVar14 = puVar2[7];
    uVar10 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar12;
    puVar1[7] = uVar14;
    puVar1[6] = uVar10;
    uVar12 = puVar2[8];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar12;
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
    uVar12 = *puVar2;
    uVar14 = puVar2[3];
    uVar10 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    puVar1[3] = uVar14;
    puVar1[2] = uVar10;
  }
  else {
    uVar12 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    uVar9 = puVar2[3];
    if (uVar9 >> 0x3c < 0xf) {
      uVar12 = puVar2[2];
      func_0x00010006c00c(uVar12,uVar9);
      puVar1[2] = uVar12;
      puVar1[3] = uVar9;
      lVar7 = puVar2[6];
    }
    else {
      uVar12 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar12;
    }
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar2 + 4);
    puVar1[5] = puVar2[5];
    puVar1[6] = lVar7;
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(puVar2 + 7);
    *(undefined2 *)((long)puVar1 + 0x39) = *(undefined2 *)((long)puVar2 + 0x39);
    uVar12 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar12;
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
  }
  iVar5 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar12 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar14 = puVar2[4];
  uVar10 = puVar2[7];
  uVar12 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar14;
  puVar1[7] = uVar10;
  puVar1[6] = uVar12;
  uVar12 = *puVar2;
  uVar14 = puVar2[3];
  uVar10 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  puVar1[3] = uVar14;
  puVar1[2] = uVar10;
  uVar14 = puVar2[0xc];
  uVar10 = puVar2[0xf];
  uVar12 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar14;
  puVar1[0xf] = uVar10;
  puVar1[0xe] = uVar12;
  uVar12 = puVar2[8];
  uVar14 = puVar2[0xb];
  uVar10 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar12;
  puVar1[0xb] = uVar14;
  puVar1[10] = uVar10;
  uVar12 = *(undefined8 *)((long)puVar2 + 0xbb);
  *(undefined8 *)((long)puVar1 + 0xc3) = *(undefined8 *)((long)puVar2 + 0xc3);
  *(undefined8 *)((long)puVar1 + 0xbb) = uVar12;
  uVar14 = puVar2[0x14];
  uVar10 = puVar2[0x17];
  uVar12 = puVar2[0x16];
  puVar1[0x15] = puVar2[0x15];
  puVar1[0x14] = uVar14;
  puVar1[0x17] = uVar10;
  puVar1[0x16] = uVar12;
  uVar12 = puVar2[0x10];
  uVar14 = puVar2[0x13];
  uVar10 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar12;
  puVar1[0x13] = uVar14;
  puVar1[0x12] = uVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar9 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (uVar9 >> 0x3c < 0xf) {
    uVar12 = *puVar2;
    func_0x00010006c00c(uVar12,uVar9);
    *puVar1 = uVar12;
    puVar1[1] = uVar9;
  }
  else {
    uVar12 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar9 = puVar2[1];
  if (uVar9 >> 0x3c < 0xf) {
    uVar12 = *puVar2;
    func_0x00010006c00c(uVar12,uVar9);
    *puVar1 = uVar12;
    puVar1[1] = uVar9;
  }
  else {
    uVar12 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
  }
  iVar5 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar5 = *(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  iVar5 = *(int *)(param_3 + 0x50);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar12 = puVar2[0xc];
  uVar14 = puVar2[0xf];
  uVar10 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar12;
  puVar1[0xf] = uVar14;
  puVar1[0xe] = uVar10;
  *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
  uVar12 = puVar2[4];
  uVar14 = puVar2[7];
  uVar10 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar12;
  puVar1[7] = uVar14;
  puVar1[6] = uVar10;
  uVar14 = puVar2[8];
  uVar10 = puVar2[0xb];
  uVar12 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar14;
  puVar1[0xb] = uVar10;
  puVar1[10] = uVar12;
  uVar14 = *puVar2;
  uVar10 = puVar2[3];
  uVar12 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar14;
  puVar1[3] = uVar10;
  puVar1[2] = uVar12;
  uVar10 = puVar2[0x11];
  puVar1[0x11] = uVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  uVar12 = *(undefined8 *)((long)puVar2 + 9);
  *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
  *(undefined8 *)((long)puVar1 + 9) = uVar12;
  iVar5 = *(int *)(param_3 + 0x58);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  uVar12 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar5 = *(int *)(param_3 + 0x60);
  puVar3 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c));
  puVar4 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar14 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar14;
  uVar14 = *(undefined8 *)((long)puVar2 + 0xd);
  *(undefined8 *)((long)puVar1 + 0x15) = *(undefined8 *)((long)puVar2 + 0x15);
  *(undefined8 *)((long)puVar1 + 0xd) = uVar14;
  iVar5 = *(int *)(param_3 + 0x68);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  uVar14 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar14;
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
  _memcpy((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,0x133);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar12);
  return param_1;
}



/* Entry: 104746cd4; end: 104746e87;  */

void FUN_104746cd4(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  }
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 1) {
    if (lVar4 == 2) goto LAB_104746d64;
    if (*(long *)(param_1 + 0x38) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 != 1) {
    if (*(long *)(param_1 + 0x70) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
    }
    _swift_bridgeObjectRelease(lVar4);
  }
LAB_104746d64:
  lVar4 = *(long *)(param_1 + 200);
  if (lVar4 != 1) {
    if (*(long *)(param_1 + 0xa8) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb8));
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  lVar3 = 0;
  FUN_1047425ec();
  lVar4 = param_1 + iVar2;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1 + iVar2,lVar4);
  }
  lVar4 = param_1 + *(int *)(param_2 + 0x28);
  lVar3 = *(long *)(lVar4 + 0x30);
  if (lVar3 != 0) {
    if (*(ulong *)(lVar4 + 0x18) >> 0x3c < 0xf) {
      func_0x00010006c090(*(undefined8 *)(lVar4 + 0x10));
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x48));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x34));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x38));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x4c) + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x54) + 8));
  return;
}



/* Entry: 104746e88; end: 1047481e7;  */

undefined8 * FUN_104746e88(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  lVar6 = param_2[3];
  if (lVar6 == 1) {
    uVar11 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar11;
    param_1[4] = param_2[4];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar6;
    uVar11 = param_2[4];
    param_1[4] = uVar11;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar11);
  }
  lVar6 = param_2[0xb];
  if (lVar6 == 1) {
    uVar11 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar11;
    uVar11 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar11;
    uVar11 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar11;
    param_1[0xb] = param_2[0xb];
  }
  else {
    if (lVar6 == 2) {
      uVar11 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar11;
      uVar11 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar11;
      uVar11 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar11;
      uVar11 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar11;
      uVar11 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar11;
      uVar11 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar11;
      uVar11 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar11;
      goto LAB_104747038;
    }
    lVar7 = param_2[7];
    if (lVar7 == 1) {
      uVar11 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar11;
      uVar11 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar11;
      param_1[9] = param_2[9];
    }
    else {
      uVar11 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar11;
      uVar11 = param_2[8];
      uVar9 = param_2[9];
      param_1[7] = lVar7;
      param_1[8] = uVar11;
      param_1[9] = uVar9;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar9);
    }
    param_1[10] = param_2[10];
    param_1[0xb] = lVar6;
    _swift_bridgeObjectRetain(lVar6);
  }
  lVar6 = param_2[0x12];
  if (lVar6 == 1) {
    uVar11 = param_2[0xc];
    uVar13 = param_2[0xf];
    uVar9 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar11;
    param_1[0xf] = uVar13;
    param_1[0xe] = uVar9;
    uVar11 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar11;
    param_1[0x12] = param_2[0x12];
  }
  else {
    lVar7 = param_2[0xe];
    if (lVar7 == 1) {
      uVar11 = param_2[0xc];
      uVar13 = param_2[0xf];
      uVar9 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar11;
      param_1[0xf] = uVar13;
      param_1[0xe] = uVar9;
      param_1[0x10] = param_2[0x10];
    }
    else {
      uVar11 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar11;
      uVar11 = param_2[0xf];
      uVar9 = param_2[0x10];
      param_1[0xe] = lVar7;
      param_1[0xf] = uVar11;
      param_1[0x10] = uVar9;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar9);
    }
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar6;
    _swift_bridgeObjectRetain(lVar6);
  }
LAB_104747038:
  lVar6 = param_2[0x19];
  if (lVar6 == 1) {
    uVar11 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar11;
    uVar11 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar11;
    uVar11 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar11;
    param_1[0x19] = param_2[0x19];
  }
  else {
    lVar7 = param_2[0x15];
    if (lVar7 == 1) {
      uVar11 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar11;
      uVar11 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar11;
      param_1[0x17] = param_2[0x17];
    }
    else {
      uVar11 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar11;
      uVar11 = param_2[0x16];
      uVar9 = param_2[0x17];
      param_1[0x15] = lVar7;
      param_1[0x16] = uVar11;
      param_1[0x17] = uVar9;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar9);
    }
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = lVar6;
    _swift_bridgeObjectRetain(lVar6);
  }
  lVar10 = (long)*(int *)(param_3 + 0x24);
  lVar7 = 0;
  FUN_1047425ec();
  lVar12 = *(long *)(lVar7 + -8);
  lVar6 = (long)param_2 + lVar10;
  (**(code **)(lVar12 + 0x30))(lVar6,1,lVar7);
  if ((int)lVar6 == 0) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar6)
    ;
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar10,0,1,lVar7);
  }
  else {
    lVar6 = 0x112db3fe8;
    func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
    _memcpy((long)param_1 + lVar10,(long)param_2 + lVar10,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar6 = puVar2[6];
  if (lVar6 == 0) {
    uVar11 = puVar2[4];
    uVar13 = puVar2[7];
    uVar9 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar11;
    puVar1[7] = uVar13;
    puVar1[6] = uVar9;
    uVar11 = puVar2[8];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar11;
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
    uVar11 = *puVar2;
    uVar13 = puVar2[3];
    uVar9 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar13;
    puVar1[2] = uVar9;
  }
  else {
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    uVar8 = puVar2[3];
    if (uVar8 >> 0x3c < 0xf) {
      uVar11 = puVar2[2];
      func_0x00010006c00c(uVar11,uVar8);
      puVar1[2] = uVar11;
      puVar1[3] = uVar8;
      lVar6 = puVar2[6];
    }
    else {
      uVar11 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar11;
    }
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar2 + 4);
    puVar1[5] = puVar2[5];
    puVar1[6] = lVar6;
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(puVar2 + 7);
    *(undefined2 *)((long)puVar1 + 0x39) = *(undefined2 *)((long)puVar2 + 0x39);
    uVar11 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar11;
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar11);
  }
  iVar5 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar13 = puVar2[4];
  uVar9 = puVar2[7];
  uVar11 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar13;
  puVar1[7] = uVar9;
  puVar1[6] = uVar11;
  uVar11 = *puVar2;
  uVar13 = puVar2[3];
  uVar9 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  puVar1[3] = uVar13;
  puVar1[2] = uVar9;
  uVar13 = puVar2[0xc];
  uVar9 = puVar2[0xf];
  uVar11 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar13;
  puVar1[0xf] = uVar9;
  puVar1[0xe] = uVar11;
  uVar11 = puVar2[8];
  uVar13 = puVar2[0xb];
  uVar9 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar11;
  puVar1[0xb] = uVar13;
  puVar1[10] = uVar9;
  uVar11 = *(undefined8 *)((long)puVar2 + 0xbb);
  *(undefined8 *)((long)puVar1 + 0xc3) = *(undefined8 *)((long)puVar2 + 0xc3);
  *(undefined8 *)((long)puVar1 + 0xbb) = uVar11;
  uVar13 = puVar2[0x14];
  uVar9 = puVar2[0x17];
  uVar11 = puVar2[0x16];
  puVar1[0x15] = puVar2[0x15];
  puVar1[0x14] = uVar13;
  puVar1[0x17] = uVar9;
  puVar1[0x16] = uVar11;
  uVar11 = puVar2[0x10];
  uVar13 = puVar2[0x13];
  uVar9 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar11;
  puVar1[0x13] = uVar13;
  puVar1[0x12] = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar8 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (uVar8 >> 0x3c < 0xf) {
    uVar11 = *puVar2;
    func_0x00010006c00c(uVar11,uVar8);
    *puVar1 = uVar11;
    puVar1[1] = uVar8;
  }
  else {
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar8 = puVar2[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar11 = *puVar2;
    func_0x00010006c00c(uVar11,uVar8);
    *puVar1 = uVar11;
    puVar1[1] = uVar8;
  }
  else {
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
  }
  iVar5 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar5 = *(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  iVar5 = *(int *)(param_3 + 0x50);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar11 = puVar2[0xc];
  uVar13 = puVar2[0xf];
  uVar9 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar11;
  puVar1[0xf] = uVar13;
  puVar1[0xe] = uVar9;
  *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
  uVar11 = puVar2[4];
  uVar13 = puVar2[7];
  uVar9 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar11;
  puVar1[7] = uVar13;
  puVar1[6] = uVar9;
  uVar13 = puVar2[8];
  uVar9 = puVar2[0xb];
  uVar11 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar13;
  puVar1[0xb] = uVar9;
  puVar1[10] = uVar11;
  uVar13 = *puVar2;
  uVar9 = puVar2[3];
  uVar11 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar9;
  puVar1[2] = uVar11;
  uVar9 = puVar2[0x11];
  puVar1[0x11] = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  uVar11 = *(undefined8 *)((long)puVar2 + 9);
  *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
  *(undefined8 *)((long)puVar1 + 9) = uVar11;
  iVar5 = *(int *)(param_3 + 0x58);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar5 = *(int *)(param_3 + 0x60);
  puVar3 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c));
  puVar4 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar13 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  uVar13 = *(undefined8 *)((long)puVar2 + 0xd);
  *(undefined8 *)((long)puVar1 + 0x15) = *(undefined8 *)((long)puVar2 + 0x15);
  *(undefined8 *)((long)puVar1 + 0xd) = uVar13;
  iVar5 = *(int *)(param_3 + 0x68);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  uVar13 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
  _memcpy((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,0x133);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar11);
  return param_1;
}



/* Entry: 1047481e8; end: 1047484c7;  */

undefined8 * FUN_1047481e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  param_1[4] = param_2[4];
  uVar10 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar10;
  uVar10 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar10;
  uVar10 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar10;
  uVar10 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar10;
  uVar10 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar10;
  uVar10 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar10;
  uVar10 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar10;
  param_1[0x19] = param_2[0x19];
  uVar10 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar10;
  uVar10 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar10;
  uVar10 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar10;
  lVar8 = (long)*(int *)(param_3 + 0x24);
  lVar6 = 0;
  FUN_1047425ec();
  lVar9 = *(long *)(lVar6 + -8);
  lVar7 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar7);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar6);
  }
  else {
    lVar7 = 0x112db3fe8;
    func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
    _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar10 = puVar2[4];
  uVar12 = puVar2[7];
  uVar11 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar10;
  puVar1[7] = uVar12;
  puVar1[6] = uVar11;
  uVar10 = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar10;
  *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
  uVar10 = *puVar2;
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  iVar5 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar12 = puVar2[4];
  uVar11 = puVar2[7];
  uVar10 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar12;
  puVar1[7] = uVar11;
  puVar1[6] = uVar10;
  uVar10 = *puVar2;
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  uVar12 = puVar2[0xc];
  uVar11 = puVar2[0xf];
  uVar10 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar12;
  puVar1[0xf] = uVar11;
  puVar1[0xe] = uVar10;
  uVar10 = puVar2[8];
  uVar12 = puVar2[0xb];
  uVar11 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar10;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
  uVar10 = *(undefined8 *)((long)puVar2 + 0xbb);
  *(undefined8 *)((long)puVar1 + 0xc3) = *(undefined8 *)((long)puVar2 + 0xc3);
  *(undefined8 *)((long)puVar1 + 0xbb) = uVar10;
  uVar12 = puVar2[0x14];
  uVar11 = puVar2[0x17];
  uVar10 = puVar2[0x16];
  puVar1[0x15] = puVar2[0x15];
  puVar1[0x14] = uVar12;
  puVar1[0x17] = uVar11;
  puVar1[0x16] = uVar10;
  uVar10 = puVar2[0x10];
  uVar12 = puVar2[0x13];
  uVar11 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar10;
  puVar1[0x13] = uVar12;
  puVar1[0x12] = uVar11;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  iVar5 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  iVar5 = *(int *)(param_3 + 0x44);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  iVar5 = *(int *)(param_3 + 0x4c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar12 = puVar2[4];
  uVar11 = puVar2[7];
  uVar10 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar12;
  puVar1[7] = uVar11;
  puVar1[6] = uVar10;
  uVar10 = *puVar2;
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  uVar10 = puVar2[0xe];
  uVar12 = puVar2[0x11];
  uVar11 = puVar2[0x10];
  puVar1[0xf] = puVar2[0xf];
  puVar1[0xe] = uVar10;
  puVar1[0x11] = uVar12;
  puVar1[0x10] = uVar11;
  uVar10 = puVar2[10];
  uVar12 = puVar2[0xd];
  uVar11 = puVar2[0xc];
  puVar1[0xb] = puVar2[0xb];
  puVar1[10] = uVar10;
  puVar1[0xd] = uVar12;
  puVar1[0xc] = uVar11;
  uVar10 = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar10;
  iVar5 = *(int *)(param_3 + 0x54);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  uVar10 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  uVar10 = *(undefined8 *)((long)puVar2 + 9);
  *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
  *(undefined8 *)((long)puVar1 + 9) = uVar10;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  iVar5 = *(int *)(param_3 + 0x5c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar3 = (undefined4 *)((long)param_1 + (long)iVar5);
  puVar4 = (undefined4 *)((long)param_2 + (long)iVar5);
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  iVar5 = *(int *)(param_3 + 100);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x60));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  uVar10 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  uVar10 = *(undefined8 *)((long)puVar2 + 0xd);
  *(undefined8 *)((long)puVar1 + 0x15) = *(undefined8 *)((long)puVar2 + 0x15);
  *(undefined8 *)((long)puVar1 + 0xd) = uVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  _memcpy((long)param_1 + (long)*(int *)(param_3 + 0x68),
          (long)param_2 + (long)*(int *)(param_3 + 0x68),0x133);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1047484c8; end: 104748bf3;  */

undefined8 * FUN_1047484c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  if (param_1[3] == 1) {
LAB_104748518:
    uVar11 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar11;
    param_1[4] = param_2[4];
  }
  else {
    lVar9 = param_2[3];
    if (lVar9 == 1) {
      func_0x0001017b6468(param_1 + 2);
      goto LAB_104748518;
    }
    param_1[2] = param_2[2];
    param_1[3] = lVar9;
    _swift_bridgeObjectRelease();
    uVar11 = param_1[4];
    param_1[4] = param_2[4];
    _swift_bridgeObjectRelease(uVar11);
  }
  if (param_1[0xb] == 2) {
LAB_104748568:
    uVar11 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar11;
    uVar11 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar11;
    uVar11 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar11;
    uVar11 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar11;
    uVar11 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar11;
    uVar11 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar11;
    uVar11 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar11;
  }
  else {
    if (param_2[0xb] == 2) {
      func_0x0001017b6538(param_1 + 5);
      goto LAB_104748568;
    }
    if (param_1[0xb] == 1) {
LAB_1047485fc:
      uVar11 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar11;
      uVar11 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar11;
      uVar11 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar11;
      param_1[0xb] = param_2[0xb];
    }
    else {
      if (param_2[0xb] == 1) {
        func_0x0001017b64d0(param_1 + 5);
        goto LAB_1047485fc;
      }
      if (param_1[7] == 1) {
LAB_10474867c:
        uVar11 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = uVar11;
        uVar11 = param_2[7];
        param_1[8] = param_2[8];
        param_1[7] = uVar11;
        param_1[9] = param_2[9];
      }
      else {
        lVar9 = param_2[7];
        if (lVar9 == 1) {
          func_0x0001017b649c(param_1 + 5);
          goto LAB_10474867c;
        }
        uVar11 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = uVar11;
        param_1[7] = lVar9;
        _swift_bridgeObjectRelease();
        uVar11 = param_2[9];
        uVar8 = param_1[9];
        param_1[8] = param_2[8];
        param_1[9] = uVar11;
        _swift_bridgeObjectRelease(uVar8);
      }
      uVar11 = param_2[0xb];
      uVar8 = param_1[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar11;
      _swift_bridgeObjectRelease(uVar8);
    }
    if (param_1[0x12] == 1) {
LAB_104748b70:
      uVar11 = param_2[0xc];
      uVar15 = param_2[0xf];
      uVar8 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar11;
      param_1[0xf] = uVar15;
      param_1[0xe] = uVar8;
      uVar11 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar11;
      param_1[0x12] = param_2[0x12];
    }
    else {
      if (param_2[0x12] == 1) {
        func_0x0001017b6504(param_1 + 0xc);
        goto LAB_104748b70;
      }
      if (param_1[0xe] == 1) {
LAB_104748bac:
        uVar11 = param_2[0xc];
        uVar15 = param_2[0xf];
        uVar8 = param_2[0xe];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = uVar11;
        param_1[0xf] = uVar15;
        param_1[0xe] = uVar8;
        param_1[0x10] = param_2[0x10];
      }
      else {
        lVar9 = param_2[0xe];
        if (lVar9 == 1) {
          func_0x0001017b649c(param_1 + 0xc);
          goto LAB_104748bac;
        }
        uVar11 = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = uVar11;
        param_1[0xe] = lVar9;
        _swift_bridgeObjectRelease();
        uVar11 = param_2[0x10];
        uVar8 = param_1[0x10];
        param_1[0xf] = param_2[0xf];
        param_1[0x10] = uVar11;
        _swift_bridgeObjectRelease(uVar8);
      }
      uVar11 = param_2[0x12];
      uVar8 = param_1[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar11;
      _swift_bridgeObjectRelease(uVar8);
    }
  }
  if (param_1[0x19] == 1) {
LAB_1047485c0:
    uVar11 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar11;
    uVar11 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar11;
    uVar11 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar11;
    param_1[0x19] = param_2[0x19];
  }
  else {
    if (param_2[0x19] == 1) {
      func_0x0001017b64d0(param_1 + 0x13);
      goto LAB_1047485c0;
    }
    if (param_1[0x15] == 1) {
LAB_104748640:
      uVar11 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar11;
      uVar11 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar11;
      param_1[0x17] = param_2[0x17];
    }
    else {
      lVar9 = param_2[0x15];
      if (lVar9 == 1) {
        func_0x0001017b649c(param_1 + 0x13);
        goto LAB_104748640;
      }
      uVar11 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar11;
      param_1[0x15] = lVar9;
      _swift_bridgeObjectRelease();
      uVar11 = param_2[0x17];
      uVar8 = param_1[0x17];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = uVar11;
      _swift_bridgeObjectRelease(uVar8);
    }
    uVar11 = param_2[0x19];
    uVar8 = param_1[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar11;
    _swift_bridgeObjectRelease(uVar8);
  }
  lVar12 = (long)*(int *)(param_3 + 0x24);
  lVar6 = 0;
  FUN_1047425ec();
  lVar13 = *(long *)(lVar6 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar9 = (long)param_1 + lVar12;
  (*pcVar14)(lVar9,1,lVar6);
  lVar7 = (long)param_2 + lVar12;
  (*pcVar14)(lVar7,1,lVar6);
  if ((int)lVar9 == 0) {
    if ((int)lVar7 != 0) {
      func_0x00010474660c((long)param_1 + lVar12);
      goto LAB_104748754;
    }
    lVar9 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar9 + -8) + 0x28))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar9)
    ;
  }
  else if ((int)lVar7 == 0) {
    lVar9 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar9 + -8) + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar9)
    ;
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,lVar6);
  }
  else {
LAB_104748754:
    lVar9 = 0x112db3fe8;
    func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
    _memcpy((long)param_1 + lVar12,(long)param_2 + lVar12,
            *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  if (puVar1[6] == 0) {
LAB_1047487e0:
    uVar11 = puVar2[4];
    uVar15 = puVar2[7];
    uVar8 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar11;
    puVar1[7] = uVar15;
    puVar1[6] = uVar8;
    uVar11 = puVar2[8];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar11;
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
    uVar11 = *puVar2;
    uVar15 = puVar2[3];
    uVar8 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar15;
    puVar1[2] = uVar8;
  }
  else {
    if (puVar2[6] == 0) {
      func_0x0001017b656c(puVar1);
      goto LAB_1047487e0;
    }
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    if ((ulong)puVar1[3] >> 0x3c < 0xf) {
      uVar10 = puVar2[3];
      if (0xe < uVar10 >> 0x3c) {
        func_0x0001006e5814(puVar1 + 2);
        goto LAB_1047487cc;
      }
      uVar11 = puVar1[2];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar10;
      func_0x00010006c090(uVar11);
    }
    else {
LAB_1047487cc:
      uVar11 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar11;
    }
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar2 + 4);
    *(undefined1 *)((long)puVar1 + 0x21) = *(undefined1 *)((long)puVar2 + 0x21);
    uVar11 = puVar2[6];
    uVar8 = puVar1[6];
    puVar1[5] = puVar2[5];
    puVar1[6] = uVar11;
    _swift_bridgeObjectRelease(uVar8);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(puVar2 + 7);
    *(undefined1 *)((long)puVar1 + 0x39) = *(undefined1 *)((long)puVar2 + 0x39);
    *(undefined1 *)((long)puVar1 + 0x3a) = *(undefined1 *)((long)puVar2 + 0x3a);
    uVar11 = puVar2[9];
    uVar8 = puVar1[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar11;
    _swift_bridgeObjectRelease(uVar8);
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar11 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  _swift_bridgeObjectRelease(uVar8);
  iVar5 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar15 = puVar2[4];
  uVar8 = puVar2[7];
  uVar11 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar15;
  puVar1[7] = uVar8;
  puVar1[6] = uVar11;
  uVar15 = puVar2[0xc];
  uVar8 = puVar2[0xf];
  uVar11 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar15;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar11;
  uVar11 = puVar2[8];
  uVar15 = puVar2[0xb];
  uVar8 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar11;
  puVar1[0xb] = uVar15;
  puVar1[10] = uVar8;
  uVar11 = *(undefined8 *)((long)puVar2 + 0xbb);
  *(undefined8 *)((long)puVar1 + 0xc3) = *(undefined8 *)((long)puVar2 + 0xc3);
  *(undefined8 *)((long)puVar1 + 0xbb) = uVar11;
  uVar15 = puVar2[0x14];
  uVar8 = puVar2[0x17];
  uVar11 = puVar2[0x16];
  puVar1[0x15] = puVar2[0x15];
  puVar1[0x14] = uVar15;
  puVar1[0x17] = uVar8;
  puVar1[0x16] = uVar11;
  uVar11 = puVar2[0x10];
  uVar15 = puVar2[0x13];
  uVar8 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar11;
  puVar1[0x13] = uVar15;
  puVar1[0x12] = uVar8;
  uVar15 = *puVar2;
  uVar8 = puVar2[3];
  uVar11 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  puVar1[3] = uVar8;
  puVar1[2] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar10 = puVar2[1];
    if (0xe < uVar10 >> 0x3c) {
      func_0x0001006e5814(puVar1);
      goto LAB_104748918;
    }
    uVar11 = *puVar1;
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    func_0x00010006c090(uVar11);
  }
  else {
LAB_104748918:
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar10 = puVar2[1];
    if (uVar10 >> 0x3c < 0xf) {
      uVar11 = *puVar1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      func_0x00010006c090(uVar11);
      goto LAB_104748984;
    }
    func_0x0001006e5814(puVar1);
  }
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
LAB_104748984:
  iVar5 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar5 = *(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1[2] = puVar2[2];
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 3);
  puVar1[4] = puVar2[4];
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(puVar2 + 5);
  uVar8 = puVar2[7];
  uVar11 = puVar2[6];
  uVar16 = puVar2[9];
  uVar15 = puVar2[8];
  *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
  puVar1[7] = uVar8;
  puVar1[6] = uVar11;
  puVar1[9] = uVar16;
  puVar1[8] = uVar15;
  uVar11 = puVar2[0xb];
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
  puVar1[0xb] = uVar11;
  uVar8 = puVar2[0xe];
  uVar11 = puVar2[0xd];
  uVar15 = *(undefined8 *)((long)puVar2 + 0x72);
  *(undefined8 *)((long)puVar1 + 0x7a) = *(undefined8 *)((long)puVar2 + 0x7a);
  *(undefined8 *)((long)puVar1 + 0x72) = uVar15;
  puVar1[0xe] = uVar8;
  puVar1[0xd] = uVar11;
  uVar11 = puVar1[0x11];
  puVar1[0x11] = puVar2[0x11];
  _swift_bridgeObjectRelease(uVar11);
  iVar5 = *(int *)(param_3 + 0x54);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  uVar11 = *(undefined8 *)((long)puVar2 + 9);
  *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
  *(undefined8 *)((long)puVar1 + 9) = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar11 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  _swift_bridgeObjectRelease(uVar8);
  iVar5 = *(int *)(param_3 + 0x5c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar3 = (undefined4 *)((long)param_1 + (long)iVar5);
  puVar4 = (undefined4 *)((long)param_2 + (long)iVar5);
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  iVar5 = *(int *)(param_3 + 100);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x60));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  uVar11 = *(undefined8 *)((long)puVar2 + 0xd);
  *(undefined8 *)((long)puVar1 + 0x15) = *(undefined8 *)((long)puVar2 + 0x15);
  *(undefined8 *)((long)puVar1 + 0xd) = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  _memcpy((long)param_1 + (long)*(int *)(param_3 + 0x68),
          (long)param_2 + (long)*(int *)(param_3 + 0x68),0x133);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 104748bf4; end: 104748c0b;  */

void FUN_104748bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104748c0c; end: 104748e3f;  */

void FUN_104748c0c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_e0 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_d0 = &UNK_10dd328a8;
  puStack_c8 = &UNK_10dd328c0;
  puStack_c0 = &UNK_10dd328d8;
  lVar1 = 0x13f;
  puStack_d8 = puStack_e0;
  func_0x000104748d30();
  if (param_2 < 0x40) {
    lStack_b8 = *(long *)(lVar1 + -8) + 0x40;
    puStack_b0 = &UNK_10dd328f0;
    puStack_a8 = &UNK_10dd32908;
    puStack_a0 = &UNK_10dd32920;
    puStack_98 = &UNK_10dd32938;
    puStack_90 = &UNK_10dd32938;
    puStack_78 = &UNK_10dd32950;
    puStack_70 = &UNK_10dd32980;
    puStack_88 = &UNK_10dd32950;
    puStack_80 = &UNK_10dd32968;
    puStack_68 = &UNK_10dd32998;
    puStack_60 = &UNK_10dd329b0;
    puStack_58 = &UNK_10dd32908;
    puStack_50 = &UNK_10dd32968;
    puStack_48 = &UNK_10dd329c8;
    puStack_40 = &UNK_10dd329e0;
    puStack_38 = &UNK_10dd329f8;
    puStack_30 = &UNK_10dd32a10;
    puStack_28 = &UNK_10dd32968;
    _swift_initStructMetadata(param_1,0x100,0x18,&puStack_e0,param_1 + 0x10);
  }
  return;
}



/* Entry: 104748e40; end: 104748ff3;  */

void FUN_104748e40(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  
  lVar7 = unaff_x20[6];
  if (lVar7 == 1) {
LAB_104748ed8:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *unaff_x20;
    uVar4 = unaff_x20[1];
    lVar2 = unaff_x20[2];
    uVar5 = unaff_x20[3];
    lVar3 = unaff_x20[4];
    uVar6 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar2 == 1) {
LAB_104748ef0:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar1);
      if (lVar2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
      }
      if (lVar3 == 0) goto LAB_104748ef0;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    }
    if (lVar7 == 0) goto LAB_104748ed8;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar7);
  }
  lVar7 = unaff_x20[0xd];
  if (lVar7 == 1) goto LAB_104748f88;
  uVar1 = unaff_x20[7];
  uVar4 = unaff_x20[8];
  lVar2 = unaff_x20[9];
  uVar5 = unaff_x20[10];
  lVar3 = unaff_x20[0xb];
  uVar6 = unaff_x20[0xc];
  __ss6HasherV8_combineyys5UInt8VF(1);
  if (lVar2 == 1) {
LAB_104748fb8:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    if (lVar2 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar3 == 0) goto LAB_104748fb8;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  if (lVar7 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar6,lVar7);
    return;
  }
LAB_104748f88:
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 104748ff4; end: 10474902f;  */

void FUN_104748ff4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104748e40(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104749030; end: 104749033;  */

void FUN_104749030(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  
  lVar7 = unaff_x20[6];
  if (lVar7 == 1) {
LAB_104748ed8:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *unaff_x20;
    uVar4 = unaff_x20[1];
    lVar2 = unaff_x20[2];
    uVar5 = unaff_x20[3];
    lVar3 = unaff_x20[4];
    uVar6 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar2 == 1) {
LAB_104748ef0:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar1);
      if (lVar2 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
      }
      if (lVar3 == 0) goto LAB_104748ef0;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    }
    if (lVar7 == 0) goto LAB_104748ed8;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar7);
  }
  lVar7 = unaff_x20[0xd];
  if (lVar7 == 1) goto LAB_104748f88;
  uVar1 = unaff_x20[7];
  uVar4 = unaff_x20[8];
  lVar2 = unaff_x20[9];
  uVar5 = unaff_x20[10];
  lVar3 = unaff_x20[0xb];
  uVar6 = unaff_x20[0xc];
  __ss6HasherV8_combineyys5UInt8VF(1);
  if (lVar2 == 1) {
LAB_104748fb8:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    if (lVar2 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar3 == 0) goto LAB_104748fb8;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  if (lVar7 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar6,lVar7);
    return;
  }
LAB_104748f88:
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 104749034; end: 10474906b;  */

void FUN_104749034(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104748e40(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474906c; end: 1047490cf;  */

uint FUN_10474906c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_1047490d0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1047490d0; end: 104749537;  */

undefined8 FUN_1047490d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_288 [56];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar8 = param_1[1];
  uVar4 = *param_1;
  uVar14 = param_1[3];
  uVar12 = param_1[2];
  uVar9 = param_1[5];
  uVar5 = param_1[4];
  lVar2 = param_1[6];
  uVar10 = param_2[1];
  uVar6 = *param_2;
  uVar15 = param_2[3];
  uVar13 = param_2[2];
  uVar11 = param_2[5];
  uVar7 = param_2[4];
  lVar3 = param_2[6];
  uStack_1d0 = uVar6;
  uStack_1c8 = uVar10;
  uStack_1c0 = uVar13;
  uStack_1b8 = uVar15;
  uStack_1b0 = uVar7;
  uStack_1a8 = uVar11;
  lStack_1a0 = lVar3;
  uStack_190 = uVar4;
  uStack_188 = uVar8;
  uStack_180 = uVar12;
  uStack_178 = uVar14;
  uStack_170 = uVar5;
  uStack_168 = uVar9;
  lStack_160 = lVar2;
  if (lVar2 == 1) {
    if (lVar3 == 1) {
      func_0x000104748df8(&uStack_190,&uStack_a8,0x112db3e98,&UNK_10dd2ed10);
      func_0x000104748df8(&uStack_1d0,&uStack_a8,0x112db3e98,&UNK_10dd2ed10);
      FUN_104749d74(uVar4,uVar8,uVar12,uVar14,uVar5,uVar9,1);
LAB_104749308:
      uVar8 = param_1[8];
      uVar4 = param_1[7];
      uVar9 = param_1[10];
      uVar5 = param_1[9];
      uVar14 = param_1[0xc];
      uVar12 = param_1[0xb];
      lVar2 = param_1[0xd];
      uVar10 = param_2[8];
      uVar6 = param_2[7];
      uVar15 = param_2[10];
      uVar13 = param_2[9];
      uVar11 = param_2[0xc];
      uVar7 = param_2[0xb];
      lVar3 = param_2[0xd];
      uStack_250 = uVar6;
      uStack_248 = uVar10;
      uStack_240 = uVar13;
      uStack_238 = uVar15;
      uStack_230 = uVar7;
      uStack_228 = uVar11;
      lStack_220 = lVar3;
      uStack_210 = uVar4;
      uStack_208 = uVar8;
      uStack_200 = uVar5;
      uStack_1f8 = uVar9;
      uStack_1f0 = uVar12;
      uStack_1e8 = uVar14;
      lStack_1e0 = lVar2;
      if (lVar2 == 1) {
        if (lVar3 == 1) {
          func_0x000104748df8(&uStack_210,&uStack_118,0x11308e738,&UNK_10dd32a48);
          func_0x000104748df8(&uStack_250,&uStack_118,0x11308e738,&UNK_10dd32a48);
          FUN_104749d74(uVar4,uVar8,uVar5,uVar9,uVar12,uVar14,1);
          return 1;
        }
      }
      else if (lVar3 != 1) {
        uStack_150 = uVar4;
        uStack_148 = uVar8;
        uStack_140 = uVar5;
        uStack_138 = uVar9;
        uStack_130 = uVar12;
        uStack_128 = uVar14;
        lStack_120 = lVar2;
        uStack_118 = uVar6;
        uStack_110 = uVar10;
        uStack_108 = uVar13;
        uStack_100 = uVar15;
        uStack_f8 = uVar7;
        uStack_f0 = uVar11;
        lStack_e8 = lVar3;
        func_0x000104748df8(&uStack_210,auStack_288,0x11308e738,&UNK_10dd32a48);
        func_0x000104748df8(&uStack_250,auStack_288,0x11308e738,&UNK_10dd32a48);
        puVar1 = &uStack_150;
        FUN_1047429e8(puVar1,&uStack_118);
        FUN_104749d74(uVar6,uVar10,uVar13,uVar15,uVar7,uVar11,lVar3);
        FUN_104749d74(uVar4,uVar8,uVar5,uVar9,uVar12,uVar14,lVar2);
        if (((ulong)puVar1 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      func_0x000104748df8(&uStack_210,&uStack_118,0x11308e738,&UNK_10dd32a48);
      func_0x000104748df8(&uStack_250,&uStack_118,0x11308e738,&UNK_10dd32a48);
      FUN_104749d74(uVar4,uVar8,uVar5,uVar9,uVar12,uVar14,lVar2);
      goto LAB_104749454;
    }
  }
  else if (lVar3 != 1) {
    uStack_e0 = uVar4;
    uStack_d8 = uVar8;
    uStack_d0 = uVar12;
    uStack_c8 = uVar14;
    uStack_c0 = uVar5;
    uStack_b8 = uVar9;
    lStack_b0 = lVar2;
    uStack_a8 = uVar6;
    uStack_a0 = uVar10;
    uStack_98 = uVar13;
    uStack_90 = uVar15;
    uStack_88 = uVar7;
    uStack_80 = uVar11;
    lStack_78 = lVar3;
    func_0x000104748df8(&uStack_190,&uStack_118,0x112db3e98,&UNK_10dd2ed10);
    func_0x000104748df8(&uStack_1d0,&uStack_118,0x112db3e98,&UNK_10dd2ed10);
    puVar1 = &uStack_e0;
    FUN_104741990(puVar1,&uStack_a8);
    FUN_104749d74(uVar6,uVar10,uVar13,uVar15,uVar7,uVar11,lVar3);
    FUN_104749d74(uVar4,uVar8,uVar12,uVar14,uVar5,uVar9,lVar2);
    if (((ulong)puVar1 & 1) == 0) {
      return 0;
    }
    goto LAB_104749308;
  }
  func_0x000104748df8(&uStack_190,&uStack_a8,0x112db3e98,&UNK_10dd2ed10);
  func_0x000104748df8(&uStack_1d0,&uStack_a8,0x112db3e98,&UNK_10dd2ed10);
  FUN_104749d74(uVar4,uVar8,uVar12,uVar14,uVar5,uVar9,lVar2);
LAB_104749454:
  FUN_104749d74(uVar6,uVar10,uVar13,uVar15,uVar7,uVar11,lVar3);
  return 0;
}



/* Entry: 104749538; end: 10474953b;  */

void FUN_104749538(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32a90;
  _swift_getWitnessTable(&UNK_10dd32a90,&UNK_11079ec80);
  puRam000000011308e740 = puVar1;
  return;
}



/* Entry: 10474953c; end: 10474957b;  */

void FUN_10474953c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32a90;
  _swift_getWitnessTable(&UNK_10dd32a90,&UNK_11079ec80);
  puRam000000011308e740 = puVar1;
  return;
}



/* Entry: 10474957c; end: 104749623;  */

long FUN_10474957c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104749624; end: 104749c8f;  */

undefined8 * FUN_104749624(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_2[6];
  if (lVar2 == 1) {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  else {
    lVar1 = param_2[2];
    if (lVar1 == 1) {
      uVar3 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      param_1[4] = param_2[4];
    }
    else {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      param_1[2] = lVar1;
      param_1[3] = uVar3;
      param_1[4] = uVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
    }
    param_1[5] = param_2[5];
    param_1[6] = lVar2;
    _swift_bridgeObjectRetain(lVar2);
  }
  lVar2 = param_2[0xd];
  if (lVar2 == 1) {
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xd] = param_2[0xd];
  }
  else {
    lVar1 = param_2[9];
    if (lVar1 == 1) {
      uVar3 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar3;
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      param_1[0xb] = param_2[0xb];
    }
    else {
      uVar3 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar3;
      uVar3 = param_2[10];
      uVar4 = param_2[0xb];
      param_1[9] = lVar1;
      param_1[10] = uVar3;
      param_1[0xb] = uVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
    }
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar2;
    _swift_bridgeObjectRetain(lVar2);
  }
  return param_1;
}



/* Entry: 104749c90; end: 104749d73;  */

int FUN_104749c90(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 104749d74; end: 104749da3;  */

void FUN_104749d74(void)

{
  long in_x6;
  
  if (in_x6 == 1) {
    return;
  }
  func_0x000101553c50();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x6);
  return;
}



/* Entry: 104749da4; end: 104749f6b;  */

void FUN_104749da4(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *unaff_x20;
  double dVar4;
  double dVar5;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined2 uStack_200;
  undefined1 uStack_1fe;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined2 uStack_170;
  undefined1 uStack_16e;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  iVar2 = (int)&uStack_280;
  __ss6HasherV8_combineyySuF(*unaff_x20);
  dVar5 = (double)unaff_x20[2];
  uStack_198 = unaff_x20[0xe];
  uStack_1a0 = unaff_x20[0xd];
  uStack_188 = unaff_x20[0x10];
  uStack_190 = unaff_x20[0xf];
  uStack_180 = unaff_x20[0x11];
  uStack_178 = (undefined7)unaff_x20[0x12];
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x97);
  uStack_171 = (undefined1)uVar1;
  uStack_170 = (undefined2)((uint)uVar1 >> 8);
  uStack_16e = (undefined1)((uint)uVar1 >> 0x18);
  uStack_1d8 = unaff_x20[6];
  uStack_1e0 = unaff_x20[5];
  uStack_1c8 = unaff_x20[8];
  uStack_1d0 = unaff_x20[7];
  uStack_1b8 = unaff_x20[10];
  uStack_1c0 = unaff_x20[9];
  uStack_1a8 = unaff_x20[0xc];
  uStack_1b0 = unaff_x20[0xb];
  uStack_1e8 = unaff_x20[4];
  uStack_1f0 = unaff_x20[3];
  dVar4 = 0.0;
  if ((double)unaff_x20[1] != 0.0) {
    dVar4 = (double)unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  iVar3 = (int)&uStack_1f0;
  FUN_1046c199c();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_58 = CONCAT17(uStack_171,uStack_178);
    uStack_68 = uStack_188;
    uStack_70 = uStack_190;
    uStack_60 = uStack_180;
    uStack_50 = uStack_170;
    uStack_a8 = uStack_1c8;
    uStack_b0 = uStack_1d0;
    uStack_98 = uStack_1b8;
    uStack_a0 = uStack_1c0;
    uStack_88 = uStack_1a8;
    uStack_90 = uStack_1b0;
    uStack_78 = uStack_198;
    uStack_80 = uStack_1a0;
    uStack_c8 = uStack_1e8;
    uStack_d0 = uStack_1f0;
    uStack_b8 = uStack_1d8;
    uStack_c0 = uStack_1e0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470dd8c(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x9b) & 1);
  dVar5 = (double)unaff_x20[0x15];
  uStack_218 = unaff_x20[0x23];
  uStack_220 = unaff_x20[0x22];
  uStack_210 = unaff_x20[0x24];
  uStack_208 = (undefined7)unaff_x20[0x25];
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x12f);
  uStack_201 = (undefined1)uVar1;
  uStack_200 = (undefined2)((uint)uVar1 >> 8);
  uStack_1fe = (undefined1)((uint)uVar1 >> 0x18);
  uStack_258 = unaff_x20[0x1b];
  uStack_260 = unaff_x20[0x1a];
  uStack_248 = unaff_x20[0x1d];
  uStack_250 = unaff_x20[0x1c];
  uStack_238 = unaff_x20[0x1f];
  uStack_240 = unaff_x20[0x1e];
  uStack_228 = unaff_x20[0x21];
  uStack_230 = unaff_x20[0x20];
  uStack_278 = unaff_x20[0x17];
  uStack_280 = unaff_x20[0x16];
  uStack_268 = unaff_x20[0x19];
  uStack_270 = unaff_x20[0x18];
  dVar4 = 0.0;
  if ((double)unaff_x20[0x14] != 0.0) {
    dVar4 = (double)unaff_x20[0x14];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  FUN_1046c199c();
  if (iVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_e8 = CONCAT17(uStack_201,uStack_208);
    uStack_f8 = uStack_218;
    uStack_100 = uStack_220;
    uStack_f0 = uStack_210;
    uStack_e0 = uStack_200;
    uStack_138 = uStack_258;
    uStack_140 = uStack_260;
    uStack_128 = uStack_248;
    uStack_130 = uStack_250;
    uStack_118 = uStack_238;
    uStack_120 = uStack_240;
    uStack_108 = uStack_228;
    uStack_110 = uStack_230;
    uStack_158 = uStack_278;
    uStack_160 = uStack_280;
    uStack_148 = uStack_268;
    uStack_150 = uStack_270;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470dd8c(param_1);
  }
  return;
}



/* Entry: 104749f6c; end: 104749fa7;  */

void FUN_104749f6c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104749da4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104749fa8; end: 104749fab;  */

void FUN_104749fa8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *unaff_x20;
  double dVar4;
  double dVar5;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined2 uStack_200;
  undefined1 uStack_1fe;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined2 uStack_170;
  undefined1 uStack_16e;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  iVar2 = (int)&uStack_280;
  __ss6HasherV8_combineyySuF(*unaff_x20);
  dVar5 = (double)unaff_x20[2];
  uStack_198 = unaff_x20[0xe];
  uStack_1a0 = unaff_x20[0xd];
  uStack_188 = unaff_x20[0x10];
  uStack_190 = unaff_x20[0xf];
  uStack_180 = unaff_x20[0x11];
  uStack_178 = (undefined7)unaff_x20[0x12];
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x97);
  uStack_171 = (undefined1)uVar1;
  uStack_170 = (undefined2)((uint)uVar1 >> 8);
  uStack_16e = (undefined1)((uint)uVar1 >> 0x18);
  uStack_1d8 = unaff_x20[6];
  uStack_1e0 = unaff_x20[5];
  uStack_1c8 = unaff_x20[8];
  uStack_1d0 = unaff_x20[7];
  uStack_1b8 = unaff_x20[10];
  uStack_1c0 = unaff_x20[9];
  uStack_1a8 = unaff_x20[0xc];
  uStack_1b0 = unaff_x20[0xb];
  uStack_1e8 = unaff_x20[4];
  uStack_1f0 = unaff_x20[3];
  dVar4 = 0.0;
  if ((double)unaff_x20[1] != 0.0) {
    dVar4 = (double)unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  iVar3 = (int)&uStack_1f0;
  FUN_1046c199c();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_58 = CONCAT17(uStack_171,uStack_178);
    uStack_68 = uStack_188;
    uStack_70 = uStack_190;
    uStack_60 = uStack_180;
    uStack_50 = uStack_170;
    uStack_a8 = uStack_1c8;
    uStack_b0 = uStack_1d0;
    uStack_98 = uStack_1b8;
    uStack_a0 = uStack_1c0;
    uStack_88 = uStack_1a8;
    uStack_90 = uStack_1b0;
    uStack_78 = uStack_198;
    uStack_80 = uStack_1a0;
    uStack_c8 = uStack_1e8;
    uStack_d0 = uStack_1f0;
    uStack_b8 = uStack_1d8;
    uStack_c0 = uStack_1e0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470dd8c(param_1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x9b) & 1);
  dVar5 = (double)unaff_x20[0x15];
  uStack_218 = unaff_x20[0x23];
  uStack_220 = unaff_x20[0x22];
  uStack_210 = unaff_x20[0x24];
  uStack_208 = (undefined7)unaff_x20[0x25];
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x12f);
  uStack_201 = (undefined1)uVar1;
  uStack_200 = (undefined2)((uint)uVar1 >> 8);
  uStack_1fe = (undefined1)((uint)uVar1 >> 0x18);
  uStack_258 = unaff_x20[0x1b];
  uStack_260 = unaff_x20[0x1a];
  uStack_248 = unaff_x20[0x1d];
  uStack_250 = unaff_x20[0x1c];
  uStack_238 = unaff_x20[0x1f];
  uStack_240 = unaff_x20[0x1e];
  uStack_228 = unaff_x20[0x21];
  uStack_230 = unaff_x20[0x20];
  uStack_278 = unaff_x20[0x17];
  uStack_280 = unaff_x20[0x16];
  uStack_268 = unaff_x20[0x19];
  uStack_270 = unaff_x20[0x18];
  dVar4 = 0.0;
  if ((double)unaff_x20[0x14] != 0.0) {
    dVar4 = (double)unaff_x20[0x14];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  FUN_1046c199c();
  if (iVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_e8 = CONCAT17(uStack_201,uStack_208);
    uStack_f8 = uStack_218;
    uStack_100 = uStack_220;
    uStack_f0 = uStack_210;
    uStack_e0 = uStack_200;
    uStack_138 = uStack_258;
    uStack_140 = uStack_260;
    uStack_128 = uStack_248;
    uStack_130 = uStack_250;
    uStack_118 = uStack_238;
    uStack_120 = uStack_240;
    uStack_108 = uStack_228;
    uStack_110 = uStack_230;
    uStack_158 = uStack_278;
    uStack_160 = uStack_280;
    uStack_148 = uStack_268;
    uStack_150 = uStack_270;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470dd8c(param_1);
  }
  return;
}



/* Entry: 104749fac; end: 10474a037;  */

void FUN_104749fac(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104749da4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474a038; end: 10474a277;  */

uint FUN_10474a038(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined7 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 uStack_321;
  undefined2 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined7 uStack_298;
  undefined4 uStack_291;
  undefined5 uStack_28d;
  undefined7 uStack_288;
  undefined4 uStack_281;
  undefined5 uStack_27d;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined2 uStack_208;
  undefined1 uStack_206;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined7 uStack_178;
  undefined4 uStack_171;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  bVar17 = false;
  if ((*(double *)(param_1 + 2) == *(double *)(param_2 + 2)) &&
     (bVar17 = false, !NAN(*(double *)(param_1 + 4)) && !NAN(*(double *)(param_2 + 4)))) {
    bVar17 = *(double *)(param_1 + 4) == *(double *)(param_2 + 4);
  }
  if (!bVar17) {
    return 0;
  }
  uStack_2b8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x1a);
  uStack_2a8 = *(undefined8 *)(param_1 + 0x20);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x1e);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x22);
  uStack_298 = (undefined7)*(undefined8 *)(param_1 + 0x24);
  uStack_291 = *(undefined4 *)((long)param_1 + 0x97);
  uStack_2f8 = *(undefined8 *)(param_1 + 0xc);
  uStack_300 = *(undefined8 *)(param_1 + 10);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x10);
  uStack_2f0 = *(undefined8 *)(param_1 + 0xe);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x14);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x12);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x16);
  uStack_308 = *(undefined8 *)(param_1 + 8);
  uStack_310 = *(undefined8 *)(param_1 + 6);
  iVar19 = (int)&uStack_288;
  uStack_208 = (undefined2)((uint)*(undefined4 *)((long)param_2 + 0x97) >> 8);
  uStack_206 = (undefined1)((uint)*(undefined4 *)((long)param_2 + 0x97) >> 0x18);
  uStack_230 = *(undefined8 *)(param_2 + 0x1c);
  uStack_238 = *(undefined8 *)(param_2 + 0x1a);
  uStack_220 = *(undefined8 *)(param_2 + 0x20);
  uStack_228 = *(undefined8 *)(param_2 + 0x1e);
  uStack_218 = *(undefined8 *)(param_2 + 0x22);
  uStack_210 = (undefined7)*(undefined8 *)(param_2 + 0x24);
  uStack_209 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x38);
  uStack_270 = *(undefined8 *)(param_2 + 0xc);
  uStack_278 = *(undefined8 *)(param_2 + 10);
  uStack_260 = *(undefined8 *)(param_2 + 0x10);
  uStack_268 = *(undefined8 *)(param_2 + 0xe);
  uStack_250 = *(undefined8 *)(param_2 + 0x14);
  uStack_258 = *(undefined8 *)(param_2 + 0x12);
  uStack_240 = *(undefined8 *)(param_2 + 0x18);
  uStack_248 = *(undefined8 *)(param_2 + 0x16);
  uStack_281._1_3_ = (undefined3)*(undefined8 *)(param_2 + 8);
  uStack_27d = (undefined5)((ulong)*(undefined8 *)(param_2 + 8) >> 0x18);
  uStack_288 = (undefined7)*(undefined8 *)(param_2 + 6);
  uStack_281._0_1_ = (undefined1)((ulong)*(undefined8 *)(param_2 + 6) >> 0x38);
  iVar18 = (int)&uStack_310;
  FUN_1046c199c();
  uVar16 = uStack_298;
  uVar15 = uStack_2a0;
  uVar14 = uStack_2a8;
  uVar13 = uStack_2b0;
  uVar12 = uStack_2b8;
  uVar11 = uStack_2c0;
  uVar10 = uStack_2c8;
  uVar9 = uStack_2d0;
  uVar8 = uStack_2d8;
  uVar7 = uStack_2e0;
  uVar6 = uStack_2e8;
  uVar5 = uStack_2f0;
  uVar4 = uStack_2f8;
  uVar3 = uStack_300;
  uVar2 = uStack_308;
  uVar1 = uStack_310;
  if (iVar18 == 1) {
    FUN_1046c199c();
    if (iVar19 == 1) {
LAB_10474a1cc:
      if (((*(byte *)((long)param_1 + 0x9b) ^ *(byte *)((long)param_2 + 0x9b)) & 1) == 0) {
        uStack_2a8 = *(undefined8 *)(param_1 + 0x42);
        uStack_2b0 = *(undefined8 *)(param_1 + 0x40);
        uStack_2a0 = *(undefined8 *)(param_1 + 0x44);
        uStack_298 = (undefined7)*(undefined8 *)(param_1 + 0x46);
        uStack_291._0_1_ = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x46) >> 0x38);
        uStack_288 = (undefined7)*(undefined8 *)(param_1 + 0x4a);
        uStack_291._1_3_ = (undefined3)*(undefined8 *)(param_1 + 0x48);
        uStack_28d = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x18);
        uStack_2e8 = *(undefined8 *)(param_1 + 0x32);
        uStack_2f0 = *(undefined8 *)(param_1 + 0x30);
        uStack_2d8 = *(undefined8 *)(param_1 + 0x36);
        uStack_2e0 = *(undefined8 *)(param_1 + 0x34);
        uStack_2c8 = *(undefined8 *)(param_1 + 0x3a);
        uStack_2d0 = *(undefined8 *)(param_1 + 0x38);
        uStack_2b8 = *(undefined8 *)(param_1 + 0x3e);
        uStack_2c0 = *(undefined8 *)(param_1 + 0x3c);
        uStack_308 = *(undefined8 *)(param_1 + 0x2a);
        uStack_310 = *(undefined8 *)(param_1 + 0x28);
        uStack_2f8 = *(undefined8 *)(param_1 + 0x2e);
        uStack_300 = *(undefined8 *)(param_1 + 0x2c);
        uStack_281 = *(undefined4 *)((long)param_1 + 0x12f);
        uStack_198 = *(undefined8 *)(param_2 + 0x42);
        uStack_1a0 = *(undefined8 *)(param_2 + 0x40);
        uStack_188 = *(undefined8 *)(param_2 + 0x46);
        uStack_190 = *(undefined8 *)(param_2 + 0x44);
        uStack_180 = *(undefined8 *)(param_2 + 0x48);
        uStack_178 = (undefined7)*(undefined8 *)(param_2 + 0x4a);
        uStack_171 = *(undefined4 *)((long)param_2 + 0x12f);
        uStack_1d8 = *(undefined8 *)(param_2 + 0x32);
        uStack_1e0 = *(undefined8 *)(param_2 + 0x30);
        uStack_1c8 = *(undefined8 *)(param_2 + 0x36);
        uStack_1d0 = *(undefined8 *)(param_2 + 0x34);
        uStack_1b8 = *(undefined8 *)(param_2 + 0x3a);
        uStack_1c0 = *(undefined8 *)(param_2 + 0x38);
        uStack_1a8 = *(undefined8 *)(param_2 + 0x3e);
        uStack_1b0 = *(undefined8 *)(param_2 + 0x3c);
        uStack_1f8 = *(undefined8 *)(param_2 + 0x2a);
        uStack_200 = *(undefined8 *)(param_2 + 0x28);
        uStack_1e8 = *(undefined8 *)(param_2 + 0x2e);
        uStack_1f0 = *(undefined8 *)(param_2 + 0x2c);
        puVar21 = &uStack_310;
        FUN_1046c181c(puVar21,&uStack_200);
        uVar20 = (uint)puVar21;
        goto LAB_10474a1e0;
      }
    }
  }
  else {
    uStack_321 = (undefined1)uStack_291;
    uStack_320 = (undefined2)((uint)uStack_291 >> 8);
    FUN_1046c199c();
    if (iVar19 != 1) {
      uStack_58 = CONCAT17(uStack_209,uStack_210);
      uStack_68 = uStack_220;
      uStack_70 = uStack_228;
      uStack_60 = uStack_218;
      uStack_50 = uStack_208;
      uStack_a8 = uStack_260;
      uStack_b0 = uStack_268;
      uStack_98 = uStack_250;
      uStack_a0 = uStack_258;
      uStack_88 = uStack_240;
      uStack_90 = uStack_248;
      uStack_78 = uStack_230;
      uStack_80 = uStack_238;
      uStack_c8 = CONCAT53(uStack_27d,uStack_281._1_3_);
      uStack_d0 = CONCAT17((undefined1)uStack_281,uStack_288);
      uStack_b8 = uStack_270;
      uStack_c0 = uStack_278;
      uStack_e8 = CONCAT17(uStack_321,uVar16);
      uStack_f8 = uVar14;
      uStack_100 = uVar13;
      uStack_f0 = uVar15;
      uStack_e0 = uStack_320;
      uStack_138 = uVar6;
      uStack_140 = uVar5;
      uStack_128 = uVar8;
      uStack_130 = uVar7;
      uStack_118 = uVar10;
      uStack_120 = uVar9;
      uStack_108 = uVar12;
      uStack_110 = uVar11;
      uStack_158 = uVar2;
      uStack_160 = uVar1;
      uStack_148 = uVar4;
      uStack_150 = uVar3;
      puVar21 = &uStack_160;
      FUN_10470e040(puVar21,&uStack_d0);
      if (((ulong)puVar21 & 1) != 0) goto LAB_10474a1cc;
    }
  }
  uVar20 = 0;
LAB_10474a1e0:
  return uVar20 & 1;
}



/* Entry: 10474a278; end: 10474a27b;  */

void FUN_10474a278(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32b20;
  _swift_getWitnessTable(&UNK_10dd32b20,&UNK_11079ed38);
  puRam000000011308e748 = puVar1;
  return;
}



/* Entry: 10474a27c; end: 10474a2bb;  */

void FUN_10474a27c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32b20;
  _swift_getWitnessTable(&UNK_10dd32b20,&UNK_11079ed38);
  puRam000000011308e748 = puVar1;
  return;
}



/* Entry: 10474a2bc; end: 10474a2e7;  */

long FUN_10474a2bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474a2e8; end: 10474a3ef;  */

void FUN_10474a2e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x133);
  return;
}



/* Entry: 10474a3f0; end: 10474a48f;  */

void FUN_10474a3f0(void)

{
  ulong uVar1;
  byte *unaff_x20;
  ulong uVar2;
  
  __ss6HasherV8_combineyys5UInt8VF(*unaff_x20 & 1);
  if (unaff_x20[0x10] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (unaff_x20[0x20] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x18);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(unaff_x20[0x21] & 1);
  return;
}



/* Entry: 10474a490; end: 10474a4cb;  */

void FUN_10474a490(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10474a3f0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474a4cc; end: 10474a4cf;  */

void FUN_10474a4cc(void)

{
  ulong uVar1;
  byte *unaff_x20;
  ulong uVar2;
  
  __ss6HasherV8_combineyys5UInt8VF(*unaff_x20 & 1);
  if (unaff_x20[0x10] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (unaff_x20[0x20] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x18);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(unaff_x20[0x21] & 1);
  return;
}



/* Entry: 10474a4d0; end: 10474a507;  */

void FUN_10474a4d0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10474a3f0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474a508; end: 10474a54f;  */

uint FUN_10474a508(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined2 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined2 *)(param_2 + 4);
  FUN_10474a550(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10474a550; end: 10474a5ef;  */

byte FUN_10474a550(byte *param_1,byte *param_2)

{
  bool bVar1;
  
  if (((*param_1 ^ *param_2) & 1) == 0) {
    if (param_1[0x10] == 1) {
      if (param_2[0x10] != 1) {
        return 0;
      }
    }
    else {
      bVar1 = false;
      if ((param_2[0x10] != 1) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_2 + 8)))) {
        bVar1 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
      }
      if (!bVar1) {
        return 0;
      }
    }
    if (param_1[0x20] == 1) {
      if (param_2[0x20] == 1) {
LAB_10474a5d4:
        return (param_1[0x21] ^ param_2[0x21] ^ 1) & 1;
      }
    }
    else if ((param_2[0x20] != 1) && (*(double *)(param_1 + 0x18) == *(double *)(param_2 + 0x18)))
    goto LAB_10474a5d4;
  }
  return 0;
}



/* Entry: 10474a5f0; end: 10474a62f;  */

void FUN_10474a5f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32bb0;
  _swift_getWitnessTable(&UNK_10dd32bb0,&UNK_11079edf8);
  puRam000000011308e750 = puVar1;
  return;
}



/* Entry: 10474a630; end: 10474a65b;  */

long FUN_10474a630(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474a65c; end: 10474a707;  */

int FUN_10474a65c(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x22] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10474a708; end: 10474a76f;  */

void FUN_10474a708(double param_1,undefined8 param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (param_1 != 0.0) {
    dVar2 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  if (param_4 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_3 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 10474a770; end: 10474a807;  */

void FUN_10474a770(double param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  double dVar2;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar2 = 0.0;
  if (param_1 != 0.0) {
    dVar2 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  if (param_3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_2 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474a808; end: 10474a827;  */

void FUN_10474a808(void)

{
  char cVar1;
  double dVar2;
  double *unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  dVar4 = *unaff_x20;
  dVar2 = unaff_x20[1];
  cVar1 = *(char *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (cVar1 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    dVar3 = 0.0;
    if (ABS(dVar2) != 0.0) {
      dVar3 = dVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474a828; end: 10474a87f;  */

void FUN_10474a828(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_10474a708(uVar3,auStack_78,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474a880; end: 10474a883;  */

void FUN_10474a880(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32c40;
  _swift_getWitnessTable(&UNK_10dd32c40,&UNK_11079eeb8);
  puRam000000011308e758 = puVar1;
  return;
}



/* Entry: 10474a884; end: 10474a8c3;  */

void FUN_10474a884(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32c40;
  _swift_getWitnessTable(&UNK_10dd32c40,&UNK_11079eeb8);
  puRam000000011308e758 = puVar1;
  return;
}



/* Entry: 10474a8c4; end: 10474a96b;  */

undefined8 FUN_10474a8c4(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (*param_1 == *param_2) {
    if (*(char *)(param_1 + 2) == '\x01') {
      if (*(char *)(param_2 + 2) == '\x01') {
        return 1;
      }
    }
    else {
      bVar1 = false;
      if ((*(char *)(param_2 + 2) != '\x01') &&
         (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
        bVar1 = param_1[1] == param_2[1];
      }
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10474a96c; end: 10474aa5f;  */

void FUN_10474a96c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  uVar1 = unaff_x20[3];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 4) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x21) & 1);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[5],unaff_x20[6]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 7) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x39) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x3a) & 1);
  lVar2 = unaff_x20[9];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 10) & 1);
  return;
}



/* Entry: 10474aa60; end: 10474aa9b;  */

void FUN_10474aa60(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10474a96c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474aa9c; end: 10474aa9f;  */

void FUN_10474aa9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  uVar1 = unaff_x20[3];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 4) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x21) & 1);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[5],unaff_x20[6]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 7) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x39) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x3a) & 1);
  lVar2 = unaff_x20[9];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 10) & 1);
  return;
}



/* Entry: 10474aaa0; end: 10474aad7;  */

void FUN_10474aaa0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10474a96c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474aad8; end: 10474ab3f;  */

uint FUN_10474aad8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = *(undefined1 *)(param_1 + 10);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = *(undefined1 *)(param_2 + 10);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10474ab40(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10474ab40; end: 10474ad83;  */

byte FUN_10474ab40(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_80 [16];
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    return 0;
  }
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  uVar2 = param_2[3];
  lVar3 = param_2[2];
  lStack_70 = lVar3;
  uStack_68 = uVar2;
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (uVar2 >> 0x3c < 0xf) {
      func_0x00010105aabc(&uStack_60,auStack_80);
      func_0x00010105aabc(&lStack_70,auStack_80);
      uVar1 = uVar5;
      func_0x000100e25fcc(uVar5,uVar6,lVar3,uVar2);
      func_0x0001000b44c0(lVar3,uVar2);
      func_0x0001000b44c0(uVar5,uVar6);
      if ((uVar1 & 1) != 0) goto LAB_10474ac74;
      goto LAB_10474ad00;
    }
LAB_10474abec:
    func_0x00010105aabc(&uStack_60,auStack_80);
    func_0x00010105aabc(&lStack_70,auStack_80);
    func_0x0001000b44c0(uVar5,uVar6);
    func_0x0001000b44c0(lVar3,uVar2);
  }
  else {
    if (uVar2 >> 0x3c < 0xf) goto LAB_10474abec;
    func_0x00010105aabc(&uStack_60,auStack_80);
    func_0x00010105aabc(&lStack_70,auStack_80);
    func_0x0001000b44c0(uVar5,uVar6);
LAB_10474ac74:
    if ((((*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1) == 0) &&
       (((*(byte *)((long)param_1 + 0x21) ^ *(byte *)((long)param_2 + 0x21)) & 1) == 0)) {
      uVar2 = param_1[5];
      if ((((uVar2 == param_2[5]) && (param_1[6] == param_2[6])) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), (uVar2 & 1) != 0)) &&
         (((((*(byte *)(param_1 + 7) ^ *(byte *)(param_2 + 7)) & 1) == 0 &&
           (((*(byte *)((long)param_1 + 0x39) ^ *(byte *)((long)param_2 + 0x39)) & 1) == 0)) &&
          (((*(byte *)((long)param_1 + 0x3a) ^ *(byte *)((long)param_2 + 0x3a)) & 1) == 0)))) {
        lVar3 = param_2[9];
        if (param_1[9] == 0) {
          if (lVar3 == 0) goto LAB_10474ad70;
        }
        else if ((lVar3 != 0) &&
                (((uVar2 = param_1[8], uVar2 == param_2[8] && (param_1[9] == lVar3)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)))) {
LAB_10474ad70:
          bVar4 = *(byte *)(param_1 + 10) ^ *(byte *)(param_2 + 10) ^ 1;
          goto LAB_10474ad04;
        }
      }
    }
  }
LAB_10474ad00:
  bVar4 = 0;
LAB_10474ad04:
  return bVar4 & 1;
}



/* Entry: 10474ad84; end: 10474ad87;  */

void FUN_10474ad84(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32cd0;
  _swift_getWitnessTable(&UNK_10dd32cd0,&UNK_11079ef70);
  puRam000000011308e760 = puVar1;
  return;
}



/* Entry: 10474ad88; end: 10474adc7;  */

void FUN_10474ad88(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32cd0;
  _swift_getWitnessTable(&UNK_10dd32cd0,&UNK_11079ef70);
  puRam000000011308e760 = puVar1;
  return;
}



/* Entry: 10474adc8; end: 10474ae33;  */

long FUN_10474adc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474ae34; end: 10474b0c3;  */

undefined8 * FUN_10474ae34(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[3];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined2 *)((long)param_1 + 0x39) = *(undefined2 *)((long)param_2 + 0x39);
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 10474b0c4; end: 10474b173;  */

int FUN_10474b0c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474b174; end: 10474b27b;  */

void FUN_10474b174(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined8 *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 2) & 1);
  dVar7 = 0.0;
  if ((double)unaff_x20[3] != 0.0) {
    dVar7 = (double)unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[4] != 0.0) {
    dVar7 = (double)unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  bVar2 = *(byte *)(unaff_x20 + 5);
  if (bVar2 == 2) {
    uVar4 = 0;
  }
  else {
    uVar6 = unaff_x20[6];
    uVar5 = unaff_x20[8];
    uVar4 = *(ushort *)(unaff_x20 + 9);
    cVar3 = *(char *)(unaff_x20 + 7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    if (cVar3 == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar1 = 0;
      if ((uVar6 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar6;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
    if ((uVar4 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar6 = 0;
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        uVar6 = uVar5;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar6);
    }
    uVar4 = uVar4 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  return;
}



/* Entry: 10474b27c; end: 10474b2b7;  */

void FUN_10474b27c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10474b174(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474b2b8; end: 10474b2bb;  */

void FUN_10474b2b8(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined8 *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 2) & 1);
  dVar7 = 0.0;
  if ((double)unaff_x20[3] != 0.0) {
    dVar7 = (double)unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[4] != 0.0) {
    dVar7 = (double)unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  bVar2 = *(byte *)(unaff_x20 + 5);
  if (bVar2 == 2) {
    uVar4 = 0;
  }
  else {
    uVar6 = unaff_x20[6];
    uVar5 = unaff_x20[8];
    uVar4 = *(ushort *)(unaff_x20 + 9);
    cVar3 = *(char *)(unaff_x20 + 7);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    if (cVar3 == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar1 = 0;
      if ((uVar6 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar6;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
    if ((uVar4 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar6 = 0;
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        uVar6 = uVar5;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar6);
    }
    uVar4 = uVar4 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  return;
}



/* Entry: 10474b2bc; end: 10474b2f3;  */

void FUN_10474b2bc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10474b174(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474b2f4; end: 10474b34b;  */

uint FUN_10474b2f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined2)param_1[7];
  uStack_6e = *(undefined8 *)((long)param_1 + 0x42);
  uStack_76 = (undefined6)*(undefined8 *)((long)param_1 + 0x3a);
  uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x3a) >> 0x30);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined2)param_2[7];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x42);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_2 + 0x3a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x3a) >> 0x30);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10474b34c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10474b34c; end: 10474b48f;  */

undefined8 FUN_10474b34c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  if ((((uVar3 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) != 0)) && ((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0)) &&
     (((double)param_1[3] == (double)param_2[3] && ((double)param_1[4] == (double)param_2[4])))) {
    uVar3 = param_2[5] & 0xff;
    if ((param_1[5] & 0xff) == 2) {
      if (uVar3 == 2) {
        return 1;
      }
    }
    else if ((uVar3 != 2) && ((((uint)param_2[5] ^ (uint)param_1[5]) & 1) == 0)) {
      uVar2 = (ushort)param_2[9];
      uVar1 = (uint)param_2[7] & 0xff;
      if ((char)param_1[7] == '\x01') {
        if (uVar1 != 1) {
          return 0;
        }
      }
      else {
        if (uVar1 == 1) {
          return 0;
        }
        if ((double)param_1[6] != (double)param_2[6]) {
          return 0;
        }
      }
      if (((ushort)param_1[9] & 0xff) == 1) {
        if ((uVar2 & 0xff) != 1) {
          return 0;
        }
      }
      else {
        if ((uVar2 & 0xff) == 1) {
          return 0;
        }
        if ((double)param_1[8] != (double)param_2[8]) {
          return 0;
        }
      }
      if (((ushort)((ushort)param_1[9] ^ uVar2) >> 8 & 1) == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10474b490; end: 10474b493;  */

void FUN_10474b490(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32d60;
  _swift_getWitnessTable(&UNK_10dd32d60,&UNK_11079f050);
  puRam000000011308e768 = puVar1;
  return;
}



/* Entry: 10474b494; end: 10474b4d3;  */

void FUN_10474b494(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32d60;
  _swift_getWitnessTable(&UNK_10dd32d60,&UNK_11079f050);
  puRam000000011308e768 = puVar1;
  return;
}



/* Entry: 10474b4d4; end: 10474b4ff;  */

long FUN_10474b4d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474b500; end: 10474b507;  */

void FUN_10474b500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10474b508; end: 10474b55b;  */

undefined8 * FUN_10474b508(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10474b55c; end: 10474b5d7;  */

undefined8 * FUN_10474b55c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  uVar4 = param_2[8];
  uVar3 = param_2[7];
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  param_1[8] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 10474b5d8; end: 10474b5fb;  */

void FUN_10474b5d8(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar7 = *(undefined8 *)((long)param_2 + 0x3a);
  *(undefined8 *)((long)param_1 + 0x42) = *(undefined8 *)((long)param_2 + 0x42);
  *(undefined8 *)((long)param_1 + 0x3a) = uVar7;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10474b5fc; end: 10474b657;  */

undefined8 * FUN_10474b5fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  return param_1;
}



/* Entry: 10474b658; end: 10474b707;  */

int FUN_10474b658(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x4a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474b708; end: 10474b74b;  */

void FUN_10474b708(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001046dacdc(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474b74c; end: 10474b753;  */

void FUN_10474b74c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0x10);
  __ss6HasherV8_combineyySuF(lVar8);
  if (lVar8 != 0) {
    lVar13 = 0;
    do {
      puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar13 * 0x20);
      uVar11 = puVar1[2];
      lVar2 = puVar1[3];
      uVar12 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(lVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar3);
      __ss6HasherV8_combineyySuF(uVar11);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + 0x10));
      lVar9 = *(long *)(lVar2 + 0x10);
      if (lVar9 != 0) {
        puVar10 = (undefined1 *)(lVar2 + 0x32);
        do {
          uVar11 = *(undefined8 *)(puVar10 + -0x12);
          uVar12 = *(undefined8 *)(puVar10 + -10);
          uVar5 = puVar10[-2];
          uVar6 = puVar10[-1];
          uVar4 = *puVar10;
          _swift_bridgeObjectRetain(uVar12);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar11,uVar12);
          __ss6HasherV8_combineyys5UInt8VF(uVar5);
          __ss6HasherV8_combineyys5UInt8VF(uVar6);
          __ss6HasherV8_combineyys5UInt8VF(uVar4);
          _swift_bridgeObjectRelease(uVar12);
          lVar9 = lVar9 + -1;
          puVar10 = puVar10 + 0x18;
        } while (lVar9 != 0);
      }
      lVar13 = lVar13 + 1;
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease(uVar3);
    } while (lVar13 != lVar8);
  }
  return;
}



/* Entry: 10474b754; end: 10474b793;  */

void FUN_10474b754(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001046dacdc(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474b794; end: 10474b7a3;  */

undefined8 FUN_10474b794(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  
  lVar16 = *param_1;
  lVar17 = *param_2;
  lVar18 = *(long *)(lVar16 + 0x10);
  if (lVar18 == *(long *)(lVar17 + 0x10)) {
    if ((lVar18 == 0) || (lVar16 == lVar17)) {
      uVar15 = 1;
    }
    else {
      lVar19 = 0;
      do {
        puVar1 = (ulong *)(lVar16 + 0x20 + lVar19 * 0x20);
        uVar14 = *puVar1;
        uVar4 = puVar1[1];
        uVar2 = puVar1[2];
        uVar5 = puVar1[3];
        puVar1 = (ulong *)(lVar17 + 0x20 + lVar19 * 0x20);
        uVar6 = puVar1[1];
        uVar3 = puVar1[2];
        uVar7 = puVar1[3];
        if ((uVar14 != *puVar1 || uVar4 != uVar6) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar14,uVar4,*puVar1,uVar6,0), (uVar14 & 1) == 0)) goto LAB_10470adb4;
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar7);
        if (((int)uVar2 != (int)uVar3) ||
           (lVar21 = *(long *)(uVar5 + 0x10), lVar21 != *(long *)(uVar7 + 0x10))) {
LAB_10470ad94:
          _swift_bridgeObjectRelease(uVar5);
          _swift_bridgeObjectRelease(uVar4);
          _swift_bridgeObjectRelease(uVar7);
          _swift_bridgeObjectRelease(uVar6);
          goto LAB_10470adb4;
        }
        if (lVar21 != 0 && uVar5 != uVar7) {
          pbVar22 = (byte *)(uVar7 + 0x32);
          pbVar20 = (byte *)(uVar5 + 0x32);
          do {
            uVar14 = *(ulong *)(pbVar20 + -0x12);
            bVar10 = pbVar20[-2];
            bVar11 = pbVar20[-1];
            bVar8 = *pbVar20;
            bVar12 = pbVar22[-2];
            bVar13 = pbVar22[-1];
            bVar9 = *pbVar22;
            if (uVar14 == *(ulong *)(pbVar22 + -0x12) &&
                *(long *)(pbVar20 + -10) == *(long *)(pbVar22 + -10)) {
              if (bVar10 != bVar12) goto LAB_10470ad94;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              if (((uVar14 & 1) == 0) || (((bVar10 ^ bVar12) & 1) != 0)) goto LAB_10470ad94;
            }
            if ((((bVar11 ^ bVar13) & 1) != 0) || (((bVar8 ^ bVar9) & 1) != 0)) goto LAB_10470ad94;
            pbVar20 = pbVar20 + 0x18;
            pbVar22 = pbVar22 + 0x18;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        lVar19 = lVar19 + 1;
        _swift_bridgeObjectRelease(uVar7);
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(uVar4);
        uVar15 = 1;
      } while (lVar19 != lVar18);
    }
  }
  else {
LAB_10470adb4:
    uVar15 = 0;
  }
  return uVar15;
}



/* Entry: 10474b7a4; end: 10474b7e3;  */

void FUN_10474b7a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32de4;
  _swift_getWitnessTable(&UNK_10dd32de4,&UNK_11079f0c0);
  puRam000000011308e770 = puVar1;
  return;
}



/* Entry: 10474b7e4; end: 10474b7f3;  */

undefined1  [16] FUN_10474b7e4(void)

{
  return ZEXT816(0x11079f0c0);
}



/* Entry: 10474b7f4; end: 10474b867;  */

void FUN_10474b7f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1046dae10(auStack_88,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474b868; end: 10474b8ab;  */

void FUN_10474b868(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  
  uVar6 = unaff_x20[2];
  lVar1 = unaff_x20[3];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyySuF(uVar6);
  lVar5 = *(long *)(lVar1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar5);
  if (lVar5 != 0) {
    puVar8 = (undefined1 *)(lVar1 + 0x32);
    do {
      uVar6 = *(undefined8 *)(puVar8 + -0x12);
      uVar7 = *(undefined8 *)(puVar8 + -10);
      uVar3 = puVar8[-2];
      uVar4 = puVar8[-1];
      uVar2 = *puVar8;
      _swift_bridgeObjectRetain(uVar7);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar7);
      __ss6HasherV8_combineyys5UInt8VF(uVar3);
      __ss6HasherV8_combineyys5UInt8VF(uVar4);
      __ss6HasherV8_combineyys5UInt8VF(uVar2);
      _swift_bridgeObjectRelease(uVar7);
      lVar5 = lVar5 + -1;
      puVar8 = puVar8 + 0x18;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10474b8ac; end: 10474b91b;  */

void FUN_10474b8ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1046dae10(auStack_88,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474b91c; end: 10474b937;  */

undefined8 FUN_10474b91c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  uVar13 = *param_1;
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  if ((((uVar13 != *param_2) || (param_1[1] != param_2[1])) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar13,param_1[1],*param_2,param_2[1],0), (uVar13 & 1) == 0)) ||
     ((int)uVar1 != (int)uVar2)) {
    return 0;
  }
  lVar14 = *(long *)(uVar3 + 0x10);
  if (lVar14 == *(long *)(uVar4 + 0x10)) {
    if ((lVar14 != 0) && (uVar3 != uVar4)) {
      pbVar15 = (byte *)(uVar4 + 0x32);
      pbVar16 = (byte *)(uVar3 + 0x32);
      do {
        lVar11 = *(long *)(pbVar16 + -0x12);
        bVar7 = pbVar16[-2];
        bVar8 = pbVar16[-1];
        bVar5 = *pbVar16;
        bVar9 = pbVar15[-2];
        bVar10 = pbVar15[-1];
        bVar6 = *pbVar15;
        if (lVar11 == *(long *)(pbVar15 + -0x12) &&
            *(long *)(pbVar16 + -10) == *(long *)(pbVar15 + -10)) {
          if (((bVar7 ^ bVar9 | bVar8 ^ bVar10 | bVar5 ^ bVar6) & 1) != 0) goto LAB_10470ae94;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          if ((((uint)(bVar7 ^ bVar9) | (uint)lVar11 ^ 0xffffffff |
               (uint)(byte)(bVar8 ^ bVar10 | bVar5 ^ bVar6)) & 1) != 0) goto LAB_10470ae94;
        }
        pbVar16 = pbVar16 + 0x18;
        pbVar15 = pbVar15 + 0x18;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    uVar12 = 1;
  }
  else {
LAB_10470ae94:
    uVar12 = 0;
  }
  return uVar12;
}



/* Entry: 10474b938; end: 10474b9af;  */

undefined8
FUN_10474b938(ulong param_1,long param_2,int param_3,long param_4,ulong param_5,long param_6,
             int param_7,long param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  if ((((param_1 != param_5) || (param_2 != param_6)) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) || (param_3 != param_7))
  {
    return 0;
  }
  lVar9 = *(long *)(param_4 + 0x10);
  if (lVar9 == *(long *)(param_8 + 0x10)) {
    if ((lVar9 != 0) && (param_4 != param_8)) {
      pbVar10 = (byte *)(param_8 + 0x32);
      pbVar11 = (byte *)(param_4 + 0x32);
      do {
        lVar7 = *(long *)(pbVar11 + -0x12);
        bVar3 = pbVar11[-2];
        bVar4 = pbVar11[-1];
        bVar1 = *pbVar11;
        bVar5 = pbVar10[-2];
        bVar6 = pbVar10[-1];
        bVar2 = *pbVar10;
        if (lVar7 == *(long *)(pbVar10 + -0x12) &&
            *(long *)(pbVar11 + -10) == *(long *)(pbVar10 + -10)) {
          if (((bVar3 ^ bVar5 | bVar4 ^ bVar6 | bVar1 ^ bVar2) & 1) != 0) goto LAB_10470ae94;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          if ((((uint)(bVar3 ^ bVar5) | (uint)lVar7 ^ 0xffffffff |
               (uint)(byte)(bVar4 ^ bVar6 | bVar1 ^ bVar2)) & 1) != 0) goto LAB_10470ae94;
        }
        pbVar11 = pbVar11 + 0x18;
        pbVar10 = pbVar10 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar8 = 1;
  }
  else {
LAB_10470ae94:
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 10474b9b0; end: 10474b9b3;  */

void FUN_10474b9b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32e60;
  _swift_getWitnessTable(&UNK_10dd32e60,&UNK_11079f178);
  puRam000000011308e778 = puVar1;
  return;
}



/* Entry: 10474b9b4; end: 10474b9f3;  */

void FUN_10474b9b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32e60;
  _swift_getWitnessTable(&UNK_10dd32e60,&UNK_11079f178);
  puRam000000011308e778 = puVar1;
  return;
}



/* Entry: 10474b9f4; end: 10474ba83;  */

long FUN_10474b9f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474ba84; end: 10474baef;  */

undefined8 * FUN_10474ba84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10474baf0; end: 10474bb33;  */

undefined8 * FUN_10474baf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10474bb34; end: 10474bbcb;  */

int FUN_10474bb34(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474bbcc; end: 10474bd33;  */

void FUN_10474bbcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  uVar4 = *(undefined1 *)((long)unaff_x20 + 0x11);
  uVar5 = *(undefined1 *)((long)unaff_x20 + 0x12);
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar2);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474bd34; end: 10474bd37;  */

void FUN_10474bd34(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32ef0;
  _swift_getWitnessTable(&UNK_10dd32ef0,&UNK_11079f238);
  puRam000000011308e780 = puVar1;
  return;
}



/* Entry: 10474bd38; end: 10474bd77;  */

void FUN_10474bd38(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32ef0;
  _swift_getWitnessTable(&UNK_10dd32ef0,&UNK_11079f238);
  puRam000000011308e780 = puVar1;
  return;
}



/* Entry: 10474bd78; end: 10474be13;  */

byte FUN_10474bd78(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  uVar5 = param_1[2];
  bVar1 = *(byte *)((long)param_1 + 0x11);
  bVar2 = *(byte *)((long)param_1 + 0x12);
  uVar6 = param_2[2];
  bVar3 = *(byte *)((long)param_2 + 0x11);
  bVar4 = *(byte *)((long)param_2 + 0x12);
  if (uVar8 == *param_2 && param_1[1] == param_2[1]) {
    if ((byte)uVar5 != (byte)uVar6) {
      return 0;
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if ((((byte)uVar5 ^ (byte)uVar6) & 1) != 0) {
      return 0;
    }
  }
  bVar7 = 0;
  if (((bVar1 ^ bVar3) & 1) == 0) {
    bVar7 = bVar2 ^ bVar4 ^ 1;
  }
  return bVar7;
}



/* Entry: 10474be14; end: 10474be1b;  */

void FUN_10474be14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10474be1c; end: 10474be57;  */

undefined8 * FUN_10474be1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10474be58; end: 10474bebb;  */

undefined8 * FUN_10474be58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  return param_1;
}



/* Entry: 10474bebc; end: 10474bf07;  */

undefined8 * FUN_10474bebc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  return param_1;
}



/* Entry: 10474bf08; end: 10474bfab;  */

int FUN_10474bf08(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x13) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10474bfac; end: 10474c0c7;  */

void FUN_10474bfac(undefined8 param_1)

{
  ulong uVar1;
  long *unaff_x20;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *unaff_x20;
  lVar2 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar2 = lVar2 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar2 != 0);
  }
  if ((char)unaff_x20[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)unaff_x20[4] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)unaff_x20[6] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[8];
  }
  else {
    uVar3 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    lVar2 = unaff_x20[8];
  }
  if (lVar2 != 0) {
    lVar4 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,lVar4,lVar2);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474c0c8; end: 10474c103;  */

void FUN_10474c0c8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10474bfac(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474c104; end: 10474c107;  */

void FUN_10474c104(undefined8 param_1)

{
  ulong uVar1;
  long *unaff_x20;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *unaff_x20;
  lVar2 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar2 = lVar2 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar2 != 0);
  }
  if ((char)unaff_x20[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)unaff_x20[4] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)unaff_x20[6] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[8];
  }
  else {
    uVar3 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    lVar2 = unaff_x20[8];
  }
  if (lVar2 != 0) {
    lVar4 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,lVar4,lVar2);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10474c108; end: 10474c13f;  */

void FUN_10474c108(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10474bfac(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}


