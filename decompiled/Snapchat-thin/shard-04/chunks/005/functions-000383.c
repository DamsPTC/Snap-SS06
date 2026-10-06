/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103668dd4; end: 103668e13;  */

void FUN_103668dd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf44f8;
  func_0x000107c61520(&UNK_10dbf44f8,&UNK_110676400);
  puRam0000000112f82d98 = puVar1;
  return;
}



/* Entry: 103668e14; end: 103668fa3;  */

long FUN_103668e14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103668fa4; end: 103669383;  */

undefined8 * FUN_103668fa4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar2 = param_2[4];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar2;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar3 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  lVar1 = param_2[8];
  if (lVar1 == 0) {
    uVar3 = param_2[0x20];
    uVar5 = param_2[0x23];
    uVar4 = param_2[0x22];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar3;
    param_1[0x23] = uVar5;
    param_1[0x22] = uVar4;
    uVar3 = param_2[0x24];
    uVar5 = param_2[0x27];
    uVar4 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar3;
    param_1[0x27] = uVar5;
    param_1[0x26] = uVar4;
    uVar3 = param_2[0x18];
    uVar5 = param_2[0x1b];
    uVar4 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar3;
    param_1[0x1b] = uVar5;
    param_1[0x1a] = uVar4;
    uVar3 = param_2[0x1c];
    uVar5 = param_2[0x1f];
    uVar4 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar3;
    param_1[0x1f] = uVar5;
    param_1[0x1e] = uVar4;
    uVar3 = param_2[0x10];
    uVar5 = param_2[0x13];
    uVar4 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar4;
    uVar3 = param_2[0x14];
    uVar5 = param_2[0x17];
    uVar4 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar3;
    param_1[0x17] = uVar5;
    param_1[0x16] = uVar4;
    lVar1 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = lVar1;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    uVar3 = param_2[0xc];
    uVar5 = param_2[0xf];
    uVar4 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar4;
    return param_1;
  }
  param_1[8] = lVar1;
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar4);
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  uVar2 = param_2[0xc];
  if (0xe < uVar2 >> 0x3c) {
    uVar3 = param_2[0x23];
    uVar5 = param_2[0x26];
    uVar4 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar3;
    param_1[0x26] = uVar5;
    param_1[0x25] = uVar4;
    param_1[0x27] = param_2[0x27];
    uVar3 = param_2[0x1b];
    uVar5 = param_2[0x1e];
    uVar4 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar3;
    param_1[0x1e] = uVar5;
    param_1[0x1d] = uVar4;
    uVar5 = param_2[0x1f];
    uVar4 = param_2[0x22];
    uVar3 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar5;
    param_1[0x22] = uVar4;
    param_1[0x21] = uVar3;
    uVar3 = param_2[0x13];
    uVar5 = param_2[0x16];
    uVar4 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x16] = uVar5;
    param_1[0x15] = uVar4;
    uVar5 = param_2[0x17];
    uVar4 = param_2[0x1a];
    uVar3 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar5;
    param_1[0x1a] = uVar4;
    param_1[0x19] = uVar3;
    uVar3 = param_2[0xb];
    uVar5 = param_2[0xe];
    uVar4 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xe] = uVar5;
    param_1[0xd] = uVar4;
    uVar5 = param_2[0xf];
    uVar4 = param_2[0x12];
    uVar3 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    param_1[0x12] = uVar4;
    param_1[0x11] = uVar3;
    return param_1;
  }
  uVar3 = param_2[0xb];
  func_0x00010006c00c(uVar3,uVar2);
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar2;
  uVar2 = param_2[0xf];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar3 = param_2[0xe];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar2;
  }
  else {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xf] = param_2[0xf];
  }
  uVar2 = param_2[0x12];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar3 = param_2[0x11];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar2;
  }
  else {
    uVar3 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    param_1[0x12] = param_2[0x12];
  }
  uVar2 = param_2[0x16];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[0x13] = param_2[0x13];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar3 = param_2[0x15];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x15] = uVar3;
    param_1[0x16] = uVar2;
    uVar2 = param_2[0x19];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar3 = param_2[0x18];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x18] = uVar3;
      param_1[0x19] = uVar2;
      goto LAB_103669234;
    }
  }
  else {
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    uVar3 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
  }
  uVar3 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar3;
  param_1[0x19] = param_2[0x19];
LAB_103669234:
  uVar2 = param_2[0x1c];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    uVar3 = param_2[0x1b];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar2;
  }
  else {
    uVar3 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar3;
    param_1[0x1c] = param_2[0x1c];
  }
  uVar2 = param_2[0x1f];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
    uVar3 = param_2[0x1e];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x1e] = uVar3;
    param_1[0x1f] = uVar2;
  }
  else {
    uVar3 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar3;
    param_1[0x1f] = param_2[0x1f];
  }
  uVar2 = param_2[0x21];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x20];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x20] = uVar3;
    param_1[0x21] = uVar2;
    uVar2 = param_2[0x24];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
      uVar3 = param_2[0x23];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x23] = uVar3;
      param_1[0x24] = uVar2;
    }
    else {
      uVar3 = param_2[0x22];
      param_1[0x23] = param_2[0x23];
      param_1[0x22] = uVar3;
      param_1[0x24] = param_2[0x24];
    }
    uVar2 = param_2[0x27];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[0x26];
      param_1[0x25] = param_2[0x25];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x26] = uVar3;
      param_1[0x27] = uVar2;
    }
    else {
      uVar3 = param_2[0x25];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = uVar3;
      param_1[0x27] = param_2[0x27];
    }
  }
  else {
    uVar3 = param_2[0x20];
    uVar5 = param_2[0x23];
    uVar4 = param_2[0x22];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar3;
    param_1[0x23] = uVar5;
    param_1[0x22] = uVar4;
    uVar3 = param_2[0x24];
    uVar5 = param_2[0x27];
    uVar4 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar3;
    param_1[0x27] = uVar5;
    param_1[0x26] = uVar4;
  }
  return param_1;
}



/* Entry: 103669384; end: 103669f4f;  */

undefined8 * FUN_103669384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar4,uVar5);
  uVar9 = *param_1;
  uVar10 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  func_0x00010006c090(uVar9,uVar10);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    if ((ulong)param_2[4] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      uVar4 = param_2[3];
      uVar5 = param_2[4];
      func_0x00010006c00c(uVar4,uVar5);
      uVar9 = param_1[3];
      uVar10 = param_1[4];
      param_1[3] = uVar4;
      param_1[4] = uVar5;
      func_0x00010006c090(uVar9,uVar10);
    }
    else {
      func_0x000101599dcc(param_1 + 2);
      uVar4 = param_2[4];
      uVar9 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar9;
      param_1[4] = uVar4;
    }
  }
  else if ((ulong)param_2[4] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar4 = param_2[3];
    uVar9 = param_2[4];
    func_0x00010006c00c(uVar4,uVar9);
    param_1[3] = uVar4;
    param_1[4] = uVar9;
  }
  else {
    uVar9 = param_2[3];
    uVar4 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar9;
    param_1[2] = uVar4;
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    if ((ulong)param_2[7] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar4 = param_2[6];
      uVar5 = param_2[7];
      func_0x00010006c00c(uVar4,uVar5);
      uVar9 = param_1[6];
      uVar10 = param_1[7];
      param_1[6] = uVar4;
      param_1[7] = uVar5;
      func_0x00010006c090(uVar9,uVar10);
    }
    else {
      func_0x000101599dcc(param_1 + 5);
      uVar4 = param_2[7];
      uVar9 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar9;
      param_1[7] = uVar4;
    }
  }
  else if ((ulong)param_2[7] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar4 = param_2[6];
    uVar9 = param_2[7];
    func_0x00010006c00c(uVar4,uVar9);
    param_1[6] = uVar4;
    param_1[7] = uVar9;
  }
  else {
    uVar9 = param_2[6];
    uVar4 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar9;
    param_1[5] = uVar4;
  }
  plVar3 = param_1 + 8;
  lVar6 = *plVar3;
  plVar8 = param_2 + 8;
  lVar2 = *plVar8;
  if (lVar6 == 0) {
    if (lVar2 == 0) {
      uVar4 = param_2[9];
      lVar2 = *plVar8;
      uVar5 = param_2[0xb];
      uVar9 = param_2[10];
      uVar10 = param_2[0xc];
      uVar12 = param_2[0xf];
      uVar11 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar10;
      param_1[0xf] = uVar12;
      param_1[0xe] = uVar11;
      param_1[9] = uVar4;
      *plVar3 = lVar2;
      param_1[0xb] = uVar5;
      param_1[10] = uVar9;
      uVar9 = param_2[0x11];
      uVar4 = param_2[0x10];
      uVar10 = param_2[0x13];
      uVar5 = param_2[0x12];
      uVar11 = param_2[0x14];
      uVar13 = param_2[0x17];
      uVar12 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar11;
      param_1[0x17] = uVar13;
      param_1[0x16] = uVar12;
      param_1[0x11] = uVar9;
      param_1[0x10] = uVar4;
      param_1[0x13] = uVar10;
      param_1[0x12] = uVar5;
      uVar9 = param_2[0x19];
      uVar4 = param_2[0x18];
      uVar10 = param_2[0x1b];
      uVar5 = param_2[0x1a];
      uVar11 = param_2[0x1c];
      uVar13 = param_2[0x1f];
      uVar12 = param_2[0x1e];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar11;
      param_1[0x1f] = uVar13;
      param_1[0x1e] = uVar12;
      param_1[0x19] = uVar9;
      param_1[0x18] = uVar4;
      param_1[0x1b] = uVar10;
      param_1[0x1a] = uVar5;
      uVar9 = param_2[0x21];
      uVar4 = param_2[0x20];
      uVar10 = param_2[0x23];
      uVar5 = param_2[0x22];
      uVar11 = param_2[0x24];
      uVar13 = param_2[0x27];
      uVar12 = param_2[0x26];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar11;
      param_1[0x27] = uVar13;
      param_1[0x26] = uVar12;
      param_1[0x21] = uVar9;
      param_1[0x20] = uVar4;
      param_1[0x23] = uVar10;
      param_1[0x22] = uVar5;
      return param_1;
    }
    param_1[8] = lVar2;
    uVar4 = param_2[9];
    uVar9 = param_2[10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar9);
    param_1[9] = uVar4;
    param_1[10] = uVar9;
    uVar7 = param_2[0xc];
    if (0xe < uVar7 >> 0x3c) {
      uVar9 = param_2[0xc];
      uVar4 = param_2[0xb];
      uVar5 = param_2[0xd];
      uVar11 = param_2[0x10];
      uVar10 = param_2[0xf];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0x10] = uVar11;
      param_1[0xf] = uVar10;
      param_1[0xc] = uVar9;
      param_1[0xb] = uVar4;
      uVar9 = param_2[0x12];
      uVar4 = param_2[0x11];
      uVar10 = param_2[0x14];
      uVar5 = param_2[0x13];
      uVar11 = param_2[0x15];
      uVar13 = param_2[0x18];
      uVar12 = param_2[0x17];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar11;
      param_1[0x18] = uVar13;
      param_1[0x17] = uVar12;
      param_1[0x12] = uVar9;
      param_1[0x11] = uVar4;
      param_1[0x14] = uVar10;
      param_1[0x13] = uVar5;
      uVar9 = param_2[0x1a];
      uVar4 = param_2[0x19];
      uVar10 = param_2[0x1c];
      uVar5 = param_2[0x1b];
      uVar11 = param_2[0x1d];
      uVar13 = param_2[0x20];
      uVar12 = param_2[0x1f];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar11;
      param_1[0x20] = uVar13;
      param_1[0x1f] = uVar12;
      param_1[0x1a] = uVar9;
      param_1[0x19] = uVar4;
      param_1[0x1c] = uVar10;
      param_1[0x1b] = uVar5;
      uVar9 = param_2[0x22];
      uVar4 = param_2[0x21];
      uVar10 = param_2[0x24];
      uVar5 = param_2[0x23];
      uVar12 = param_2[0x26];
      uVar11 = param_2[0x25];
      param_1[0x27] = param_2[0x27];
      param_1[0x24] = uVar10;
      param_1[0x23] = uVar5;
      param_1[0x26] = uVar12;
      param_1[0x25] = uVar11;
      param_1[0x22] = uVar9;
      param_1[0x21] = uVar4;
      return param_1;
    }
    uVar4 = param_2[0xb];
    func_0x00010006c00c(uVar4,uVar7);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar7;
LAB_103669748:
    if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      uVar4 = param_2[0xe];
      uVar9 = param_2[0xf];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0xe] = uVar4;
      param_1[0xf] = uVar9;
    }
    else {
      uVar9 = param_2[0xe];
      uVar4 = param_2[0xd];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar9;
      param_1[0xd] = uVar4;
    }
    if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar4 = param_2[0x11];
      uVar9 = param_2[0x12];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x11] = uVar4;
      param_1[0x12] = uVar9;
    }
    else {
      uVar9 = param_2[0x11];
      uVar4 = param_2[0x10];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar9;
      param_1[0x10] = uVar4;
    }
    if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar4 = param_2[0x15];
      uVar9 = param_2[0x16];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x15] = uVar4;
      param_1[0x16] = uVar9;
      if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
        uVar4 = param_2[0x18];
        uVar9 = param_2[0x19];
        func_0x00010006c00c(uVar4,uVar9);
        param_1[0x18] = uVar4;
        param_1[0x19] = uVar9;
      }
      else {
        uVar9 = param_2[0x18];
        uVar4 = param_2[0x17];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = uVar9;
        param_1[0x17] = uVar4;
      }
    }
    else {
      uVar9 = param_2[0x14];
      uVar4 = param_2[0x13];
      uVar10 = param_2[0x16];
      uVar5 = param_2[0x15];
      uVar12 = param_2[0x18];
      uVar11 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar12;
      param_1[0x17] = uVar11;
      param_1[0x16] = uVar10;
      param_1[0x15] = uVar5;
      param_1[0x14] = uVar9;
      param_1[0x13] = uVar4;
    }
    if ((ulong)param_2[0x1c] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar4 = param_2[0x1b];
      uVar9 = param_2[0x1c];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x1b] = uVar4;
      param_1[0x1c] = uVar9;
    }
    else {
      uVar9 = param_2[0x1b];
      uVar4 = param_2[0x1a];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar9;
      param_1[0x1a] = uVar4;
    }
    if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
      uVar4 = param_2[0x1e];
      uVar9 = param_2[0x1f];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x1e] = uVar4;
      param_1[0x1f] = uVar9;
      uVar7 = param_2[0x21];
    }
    else {
      uVar9 = param_2[0x1e];
      uVar4 = param_2[0x1d];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x1e] = uVar9;
      param_1[0x1d] = uVar4;
      uVar7 = param_2[0x21];
    }
  }
  else {
    if (lVar2 == 0) {
      func_0x00010155b6a4(plVar3);
      uVar4 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar9 = param_2[0xe];
      uVar12 = param_2[9];
      lVar2 = *plVar8;
      uVar11 = param_2[0xb];
      uVar10 = param_2[10];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar9;
      param_1[9] = uVar12;
      *plVar3 = lVar2;
      param_1[0xb] = uVar11;
      param_1[10] = uVar10;
      uVar4 = param_2[0x14];
      uVar5 = param_2[0x17];
      uVar9 = param_2[0x16];
      uVar13 = param_2[0x11];
      uVar12 = param_2[0x10];
      uVar11 = param_2[0x13];
      uVar10 = param_2[0x12];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar4;
      param_1[0x17] = uVar5;
      param_1[0x16] = uVar9;
      param_1[0x11] = uVar13;
      param_1[0x10] = uVar12;
      param_1[0x13] = uVar11;
      param_1[0x12] = uVar10;
      uVar4 = param_2[0x1c];
      uVar5 = param_2[0x1f];
      uVar9 = param_2[0x1e];
      uVar13 = param_2[0x19];
      uVar12 = param_2[0x18];
      uVar11 = param_2[0x1b];
      uVar10 = param_2[0x1a];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar4;
      param_1[0x1f] = uVar5;
      param_1[0x1e] = uVar9;
      param_1[0x19] = uVar13;
      param_1[0x18] = uVar12;
      param_1[0x1b] = uVar11;
      param_1[0x1a] = uVar10;
      uVar4 = param_2[0x24];
      uVar5 = param_2[0x27];
      uVar9 = param_2[0x26];
      uVar13 = param_2[0x21];
      uVar12 = param_2[0x20];
      uVar11 = param_2[0x23];
      uVar10 = param_2[0x22];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar4;
      param_1[0x27] = uVar5;
      param_1[0x26] = uVar9;
      param_1[0x21] = uVar13;
      param_1[0x20] = uVar12;
      param_1[0x23] = uVar11;
      param_1[0x22] = uVar10;
      return param_1;
    }
    param_1[8] = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(lVar6);
    uVar4 = param_2[9];
    uVar5 = param_2[10];
    func_0x00010006c00c(uVar4,uVar5);
    uVar9 = param_1[9];
    uVar10 = param_1[10];
    param_1[9] = uVar4;
    param_1[10] = uVar5;
    func_0x00010006c090(uVar9,uVar10);
    puVar1 = param_1 + 0xb;
    uVar7 = param_2[0xc];
    if (0xe < (ulong)param_1[0xc] >> 0x3c) {
      if (0xe < uVar7 >> 0x3c) {
        uVar9 = param_2[0xc];
        uVar4 = param_2[0xb];
        uVar5 = param_2[0xd];
        uVar11 = param_2[0x10];
        uVar10 = param_2[0xf];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar5;
        param_1[0x10] = uVar11;
        param_1[0xf] = uVar10;
        param_1[0xc] = uVar9;
        *puVar1 = uVar4;
        uVar9 = param_2[0x12];
        uVar4 = param_2[0x11];
        uVar10 = param_2[0x14];
        uVar5 = param_2[0x13];
        uVar11 = param_2[0x15];
        uVar13 = param_2[0x18];
        uVar12 = param_2[0x17];
        param_1[0x16] = param_2[0x16];
        param_1[0x15] = uVar11;
        param_1[0x18] = uVar13;
        param_1[0x17] = uVar12;
        param_1[0x12] = uVar9;
        param_1[0x11] = uVar4;
        param_1[0x14] = uVar10;
        param_1[0x13] = uVar5;
        uVar9 = param_2[0x1a];
        uVar4 = param_2[0x19];
        uVar10 = param_2[0x1c];
        uVar5 = param_2[0x1b];
        uVar11 = param_2[0x1d];
        uVar13 = param_2[0x20];
        uVar12 = param_2[0x1f];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar11;
        param_1[0x20] = uVar13;
        param_1[0x1f] = uVar12;
        param_1[0x1a] = uVar9;
        param_1[0x19] = uVar4;
        param_1[0x1c] = uVar10;
        param_1[0x1b] = uVar5;
        uVar9 = param_2[0x22];
        uVar4 = param_2[0x21];
        uVar10 = param_2[0x24];
        uVar5 = param_2[0x23];
        uVar12 = param_2[0x26];
        uVar11 = param_2[0x25];
        param_1[0x27] = param_2[0x27];
        param_1[0x24] = uVar10;
        param_1[0x23] = uVar5;
        param_1[0x26] = uVar12;
        param_1[0x25] = uVar11;
        param_1[0x22] = uVar9;
        param_1[0x21] = uVar4;
        return param_1;
      }
      uVar4 = param_2[0xb];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[0xb] = uVar4;
      param_1[0xc] = uVar7;
      goto LAB_103669748;
    }
    if (0xe < uVar7 >> 0x3c) {
      func_0x00010155b6d8(puVar1);
      uVar10 = param_2[0xe];
      uVar5 = param_2[0xd];
      uVar9 = param_2[0x10];
      uVar4 = param_2[0xf];
      uVar11 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      *puVar1 = uVar11;
      param_1[0xe] = uVar10;
      param_1[0xd] = uVar5;
      param_1[0x10] = uVar9;
      param_1[0xf] = uVar4;
      uVar4 = param_2[0x15];
      uVar5 = param_2[0x18];
      uVar9 = param_2[0x17];
      uVar13 = param_2[0x12];
      uVar12 = param_2[0x11];
      uVar11 = param_2[0x14];
      uVar10 = param_2[0x13];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      param_1[0x18] = uVar5;
      param_1[0x17] = uVar9;
      param_1[0x12] = uVar13;
      param_1[0x11] = uVar12;
      param_1[0x14] = uVar11;
      param_1[0x13] = uVar10;
      uVar4 = param_2[0x1d];
      uVar5 = param_2[0x20];
      uVar9 = param_2[0x1f];
      uVar13 = param_2[0x1a];
      uVar12 = param_2[0x19];
      uVar11 = param_2[0x1c];
      uVar10 = param_2[0x1b];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar4;
      param_1[0x20] = uVar5;
      param_1[0x1f] = uVar9;
      param_1[0x1a] = uVar13;
      param_1[0x19] = uVar12;
      param_1[0x1c] = uVar11;
      param_1[0x1b] = uVar10;
      uVar10 = param_2[0x24];
      uVar5 = param_2[0x23];
      uVar9 = param_2[0x26];
      uVar4 = param_2[0x25];
      uVar12 = param_2[0x22];
      uVar11 = param_2[0x21];
      param_1[0x27] = param_2[0x27];
      param_1[0x24] = uVar10;
      param_1[0x23] = uVar5;
      param_1[0x26] = uVar9;
      param_1[0x25] = uVar4;
      param_1[0x22] = uVar12;
      param_1[0x21] = uVar11;
      return param_1;
    }
    uVar5 = param_2[0xb];
    func_0x00010006c00c(uVar5,uVar7);
    uVar4 = param_1[0xb];
    uVar9 = param_1[0xc];
    param_1[0xb] = uVar5;
    param_1[0xc] = uVar7;
    func_0x00010006c090(uVar4,uVar9);
    if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
      if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
        uVar4 = param_2[0xe];
        uVar5 = param_2[0xf];
        func_0x00010006c00c(uVar4,uVar5);
        uVar9 = param_1[0xe];
        uVar10 = param_1[0xf];
        param_1[0xe] = uVar4;
        param_1[0xf] = uVar5;
        func_0x00010006c090(uVar9,uVar10);
      }
      else {
        func_0x000101599dcc(param_1 + 0xd);
        uVar4 = param_2[0xf];
        uVar9 = param_2[0xd];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar9;
        param_1[0xf] = uVar4;
      }
    }
    else if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      uVar4 = param_2[0xe];
      uVar9 = param_2[0xf];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0xe] = uVar4;
      param_1[0xf] = uVar9;
    }
    else {
      uVar9 = param_2[0xe];
      uVar4 = param_2[0xd];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar9;
      param_1[0xd] = uVar4;
    }
    if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        uVar4 = param_2[0x11];
        uVar5 = param_2[0x12];
        func_0x00010006c00c(uVar4,uVar5);
        uVar9 = param_1[0x11];
        uVar10 = param_1[0x12];
        param_1[0x11] = uVar4;
        param_1[0x12] = uVar5;
        func_0x00010006c090(uVar9,uVar10);
      }
      else {
        func_0x000101599dcc(param_1 + 0x10);
        uVar4 = param_2[0x12];
        uVar9 = param_2[0x10];
        param_1[0x11] = param_2[0x11];
        param_1[0x10] = uVar9;
        param_1[0x12] = uVar4;
      }
    }
    else if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar4 = param_2[0x11];
      uVar9 = param_2[0x12];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x11] = uVar4;
      param_1[0x12] = uVar9;
    }
    else {
      uVar9 = param_2[0x11];
      uVar4 = param_2[0x10];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar9;
      param_1[0x10] = uVar4;
    }
    if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
        *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_2 + 0x9c);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
        uVar4 = param_2[0x15];
        uVar5 = param_2[0x16];
        func_0x00010006c00c(uVar4,uVar5);
        uVar9 = param_1[0x15];
        uVar10 = param_1[0x16];
        param_1[0x15] = uVar4;
        param_1[0x16] = uVar5;
        func_0x00010006c090(uVar9,uVar10);
        uVar7 = (ulong)param_2[0x19] >> 0x3c;
        if (0xe < (ulong)param_1[0x19] >> 0x3c) goto LAB_103669b44;
        if (uVar7 < 0xf) {
          *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
          uVar4 = param_2[0x18];
          uVar5 = param_2[0x19];
          func_0x00010006c00c(uVar4,uVar5);
          uVar9 = param_1[0x18];
          uVar10 = param_1[0x19];
          param_1[0x18] = uVar4;
          param_1[0x19] = uVar5;
          func_0x00010006c090(uVar9,uVar10);
        }
        else {
          func_0x000101599dcc(param_1 + 0x17);
          uVar4 = param_2[0x19];
          uVar9 = param_2[0x17];
          param_1[0x18] = param_2[0x18];
          param_1[0x17] = uVar9;
          param_1[0x19] = uVar4;
        }
      }
      else {
        func_0x00010155b894(param_1 + 0x13);
        uVar5 = param_2[0x16];
        uVar9 = param_2[0x15];
        uVar11 = param_2[0x18];
        uVar10 = param_2[0x17];
        uVar4 = param_2[0x19];
        uVar12 = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        param_1[0x13] = uVar12;
        param_1[0x19] = uVar4;
        param_1[0x18] = uVar11;
        param_1[0x17] = uVar10;
        param_1[0x16] = uVar5;
        param_1[0x15] = uVar9;
      }
    }
    else if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar4 = param_2[0x15];
      uVar9 = param_2[0x16];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x15] = uVar4;
      param_1[0x16] = uVar9;
      uVar7 = (ulong)param_2[0x19] >> 0x3c;
LAB_103669b44:
      if (uVar7 < 0xf) {
        *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
        uVar4 = param_2[0x18];
        uVar9 = param_2[0x19];
        func_0x00010006c00c(uVar4,uVar9);
        param_1[0x18] = uVar4;
        param_1[0x19] = uVar9;
      }
      else {
        uVar9 = param_2[0x18];
        uVar4 = param_2[0x17];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = uVar9;
        param_1[0x17] = uVar4;
      }
    }
    else {
      uVar9 = param_2[0x14];
      uVar4 = param_2[0x13];
      uVar10 = param_2[0x16];
      uVar5 = param_2[0x15];
      uVar12 = param_2[0x18];
      uVar11 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar12;
      param_1[0x17] = uVar11;
      param_1[0x16] = uVar10;
      param_1[0x15] = uVar5;
      param_1[0x14] = uVar9;
      param_1[0x13] = uVar4;
    }
    if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x1c] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
        uVar4 = param_2[0x1b];
        uVar5 = param_2[0x1c];
        func_0x00010006c00c(uVar4,uVar5);
        uVar9 = param_1[0x1b];
        uVar10 = param_1[0x1c];
        param_1[0x1b] = uVar4;
        param_1[0x1c] = uVar5;
        func_0x00010006c090(uVar9,uVar10);
      }
      else {
        func_0x000101599dcc(param_1 + 0x1a);
        uVar4 = param_2[0x1c];
        uVar9 = param_2[0x1a];
        param_1[0x1b] = param_2[0x1b];
        param_1[0x1a] = uVar9;
        param_1[0x1c] = uVar4;
      }
    }
    else if ((ulong)param_2[0x1c] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar4 = param_2[0x1b];
      uVar9 = param_2[0x1c];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x1b] = uVar4;
      param_1[0x1c] = uVar9;
    }
    else {
      uVar9 = param_2[0x1b];
      uVar4 = param_2[0x1a];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar9;
      param_1[0x1a] = uVar4;
    }
    if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
        uVar4 = param_2[0x1e];
        uVar5 = param_2[0x1f];
        func_0x00010006c00c(uVar4,uVar5);
        uVar9 = param_1[0x1e];
        uVar10 = param_1[0x1f];
        param_1[0x1e] = uVar4;
        param_1[0x1f] = uVar5;
        func_0x00010006c090(uVar9,uVar10);
      }
      else {
        func_0x000101599dcc(param_1 + 0x1d);
        uVar4 = param_2[0x1f];
        uVar9 = param_2[0x1d];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar9;
        param_1[0x1f] = uVar4;
      }
    }
    else if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
      uVar4 = param_2[0x1e];
      uVar9 = param_2[0x1f];
      func_0x00010006c00c(uVar4,uVar9);
      param_1[0x1e] = uVar4;
      param_1[0x1f] = uVar9;
    }
    else {
      uVar9 = param_2[0x1e];
      uVar4 = param_2[0x1d];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x1e] = uVar9;
      param_1[0x1d] = uVar4;
    }
    uVar7 = param_2[0x21];
    if ((ulong)param_1[0x21] >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) {
        func_0x00010155b80c(param_1 + 0x20);
        uVar4 = param_2[0x24];
        uVar5 = param_2[0x27];
        uVar9 = param_2[0x26];
        uVar13 = param_2[0x21];
        uVar12 = param_2[0x20];
        uVar11 = param_2[0x23];
        uVar10 = param_2[0x22];
        param_1[0x25] = param_2[0x25];
        param_1[0x24] = uVar4;
        param_1[0x27] = uVar5;
        param_1[0x26] = uVar9;
        param_1[0x21] = uVar13;
        param_1[0x20] = uVar12;
        param_1[0x23] = uVar11;
        param_1[0x22] = uVar10;
        return param_1;
      }
      uVar5 = param_2[0x20];
      func_0x00010006c00c(uVar5,uVar7);
      uVar4 = param_1[0x20];
      uVar9 = param_1[0x21];
      param_1[0x20] = uVar5;
      param_1[0x21] = uVar7;
      func_0x00010006c090(uVar4,uVar9);
      if ((ulong)param_1[0x24] >> 0x3c < 0xf) {
        if ((ulong)param_2[0x24] >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
          uVar4 = param_2[0x23];
          uVar5 = param_2[0x24];
          func_0x00010006c00c(uVar4,uVar5);
          uVar9 = param_1[0x23];
          uVar10 = param_1[0x24];
          param_1[0x23] = uVar4;
          param_1[0x24] = uVar5;
          func_0x00010006c090(uVar9,uVar10);
        }
        else {
          func_0x000101599dcc(param_1 + 0x22);
          uVar4 = param_2[0x24];
          uVar9 = param_2[0x22];
          param_1[0x23] = param_2[0x23];
          param_1[0x22] = uVar9;
          param_1[0x24] = uVar4;
        }
      }
      else if ((ulong)param_2[0x24] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
        uVar4 = param_2[0x23];
        uVar9 = param_2[0x24];
        func_0x00010006c00c(uVar4,uVar9);
        param_1[0x23] = uVar4;
        param_1[0x24] = uVar9;
      }
      else {
        uVar9 = param_2[0x23];
        uVar4 = param_2[0x22];
        param_1[0x24] = param_2[0x24];
        param_1[0x23] = uVar9;
        param_1[0x22] = uVar4;
      }
      puVar1 = param_1 + 0x25;
      if ((ulong)param_1[0x27] >> 0x3c < 0xf) {
        if (0xe < (ulong)param_2[0x27] >> 0x3c) {
          func_0x00010159d670(puVar1);
          uVar4 = param_2[0x27];
          uVar9 = param_2[0x25];
          param_1[0x26] = param_2[0x26];
          *puVar1 = uVar9;
          param_1[0x27] = uVar4;
          return param_1;
        }
        param_1[0x25] = param_2[0x25];
        uVar4 = param_2[0x26];
        uVar5 = param_2[0x27];
        func_0x00010006c00c(uVar4,uVar5);
        uVar9 = param_1[0x26];
        uVar10 = param_1[0x27];
        param_1[0x26] = uVar4;
        param_1[0x27] = uVar5;
        func_0x00010006c090(uVar9,uVar10);
        return param_1;
      }
      if (0xe < (ulong)param_2[0x27] >> 0x3c) {
        uVar9 = param_2[0x26];
        uVar4 = param_2[0x25];
        param_1[0x27] = param_2[0x27];
        param_1[0x26] = uVar9;
        *puVar1 = uVar4;
        return param_1;
      }
      goto LAB_103669ed0;
    }
  }
  if (0xe < uVar7 >> 0x3c) {
    uVar9 = param_2[0x21];
    uVar4 = param_2[0x20];
    uVar10 = param_2[0x23];
    uVar5 = param_2[0x22];
    uVar11 = param_2[0x24];
    uVar13 = param_2[0x27];
    uVar12 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar11;
    param_1[0x27] = uVar13;
    param_1[0x26] = uVar12;
    param_1[0x21] = uVar9;
    param_1[0x20] = uVar4;
    param_1[0x23] = uVar10;
    param_1[0x22] = uVar5;
    return param_1;
  }
  uVar4 = param_2[0x20];
  func_0x00010006c00c(uVar4,uVar7);
  param_1[0x20] = uVar4;
  param_1[0x21] = uVar7;
  if ((ulong)param_2[0x24] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
    uVar4 = param_2[0x23];
    uVar9 = param_2[0x24];
    func_0x00010006c00c(uVar4,uVar9);
    param_1[0x23] = uVar4;
    param_1[0x24] = uVar9;
  }
  else {
    uVar9 = param_2[0x23];
    uVar4 = param_2[0x22];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar9;
    param_1[0x22] = uVar4;
  }
  if (0xe < (ulong)param_2[0x27] >> 0x3c) {
    uVar9 = param_2[0x26];
    uVar4 = param_2[0x25];
    param_1[0x27] = param_2[0x27];
    param_1[0x26] = uVar9;
    param_1[0x25] = uVar4;
    return param_1;
  }
LAB_103669ed0:
  param_1[0x25] = param_2[0x25];
  uVar4 = param_2[0x26];
  uVar9 = param_2[0x27];
  func_0x00010006c00c(uVar4,uVar9);
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar9;
  return param_1;
}



/* Entry: 103669f50; end: 10366a42f;  */

undefined8 * FUN_103669f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  func_0x00010006c090(uVar2,uVar3);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    uVar4 = param_2[4];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 2);
      goto LAB_103669fa8;
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_1[3];
    param_1[3] = param_2[3];
    param_1[4] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_103669fa8:
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar4 = param_2[7];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 5);
      goto LAB_103669ffc;
    }
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    param_1[7] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_103669ffc:
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  plVar5 = param_1 + 8;
  if (*plVar5 == 0) {
LAB_10366a0d0:
    uVar2 = param_2[0x20];
    uVar6 = param_2[0x23];
    uVar3 = param_2[0x22];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar2;
    param_1[0x23] = uVar6;
    param_1[0x22] = uVar3;
    uVar2 = param_2[0x24];
    uVar6 = param_2[0x27];
    uVar3 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar2;
    param_1[0x27] = uVar6;
    param_1[0x26] = uVar3;
    uVar2 = param_2[0x18];
    uVar6 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar2;
    param_1[0x1b] = uVar6;
    param_1[0x1a] = uVar3;
    uVar2 = param_2[0x1c];
    uVar6 = param_2[0x1f];
    uVar3 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1f] = uVar6;
    param_1[0x1e] = uVar3;
    uVar2 = param_2[0x10];
    uVar6 = param_2[0x13];
    uVar3 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x13] = uVar6;
    param_1[0x12] = uVar3;
    uVar2 = param_2[0x14];
    uVar6 = param_2[0x17];
    uVar3 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x17] = uVar6;
    param_1[0x16] = uVar3;
    lVar7 = param_2[8];
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    *plVar5 = lVar7;
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
    uVar2 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar3;
    return param_1;
  }
  if (param_2[8] == 0) {
    func_0x00010155b6a4(plVar5);
    goto LAB_10366a0d0;
  }
  param_1[8] = param_2[8];
  func_0x000107c6142c();
  uVar2 = param_1[9];
  uVar3 = param_1[10];
  uVar6 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar6;
  func_0x00010006c090(uVar2,uVar3);
  if (0xe < (ulong)param_1[0xc] >> 0x3c) {
LAB_10366a084:
    uVar2 = param_2[0x23];
    uVar6 = param_2[0x26];
    uVar3 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar2;
    param_1[0x26] = uVar6;
    param_1[0x25] = uVar3;
    param_1[0x27] = param_2[0x27];
    uVar2 = param_2[0x1b];
    uVar6 = param_2[0x1e];
    uVar3 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar2;
    param_1[0x1e] = uVar6;
    param_1[0x1d] = uVar3;
    uVar6 = param_2[0x1f];
    uVar3 = param_2[0x22];
    uVar2 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar6;
    param_1[0x22] = uVar3;
    param_1[0x21] = uVar2;
    uVar2 = param_2[0x13];
    uVar6 = param_2[0x16];
    uVar3 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    param_1[0x16] = uVar6;
    param_1[0x15] = uVar3;
    uVar6 = param_2[0x17];
    uVar3 = param_2[0x1a];
    uVar2 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar6;
    param_1[0x1a] = uVar3;
    param_1[0x19] = uVar2;
    uVar2 = param_2[0xb];
    uVar6 = param_2[0xe];
    uVar3 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xe] = uVar6;
    param_1[0xd] = uVar3;
    uVar6 = param_2[0xf];
    uVar3 = param_2[0x12];
    uVar2 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar6;
    param_1[0x12] = uVar3;
    param_1[0x11] = uVar2;
    return param_1;
  }
  uVar4 = param_2[0xc];
  if (0xe < uVar4 >> 0x3c) {
    func_0x00010155b6d8(param_1 + 0xb);
    goto LAB_10366a084;
  }
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar4;
  func_0x00010006c090(uVar2);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar4 = param_2[0xf];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xd);
      goto LAB_10366a15c;
    }
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar2 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_10366a15c:
    uVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    param_1[0xf] = param_2[0xf];
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar4 = param_2[0x12];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x10);
      goto LAB_10366a1b0;
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar2 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_10366a1b0:
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x12] = param_2[0x12];
  }
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar4 = param_2[0x16];
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010155b894(param_1 + 0x13);
      goto LAB_10366a204;
    }
    param_1[0x13] = param_2[0x13];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar2 = param_1[0x15];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = uVar4;
    func_0x00010006c090(uVar2);
    if (0xe < (ulong)param_1[0x19] >> 0x3c) goto LAB_10366a214;
    uVar4 = param_2[0x19];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x17);
      goto LAB_10366a214;
    }
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
    uVar2 = param_1[0x18];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_10366a204:
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    uVar2 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar2;
LAB_10366a214:
    uVar2 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar2;
    param_1[0x19] = param_2[0x19];
  }
  if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
    uVar4 = param_2[0x1c];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x1a);
      goto LAB_10366a24c;
    }
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    uVar2 = param_1[0x1b];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_10366a24c:
    uVar2 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    param_1[0x1c] = param_2[0x1c];
  }
  if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
    uVar4 = param_2[0x1f];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x1d);
      goto LAB_10366a2ec;
    }
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
    uVar2 = param_1[0x1e];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_10366a2ec:
    uVar2 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar2;
    param_1[0x1f] = param_2[0x1f];
  }
  if (0xe < (ulong)param_1[0x21] >> 0x3c) {
LAB_10366a340:
    uVar2 = param_2[0x20];
    uVar6 = param_2[0x23];
    uVar3 = param_2[0x22];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar2;
    param_1[0x23] = uVar6;
    param_1[0x22] = uVar3;
    uVar2 = param_2[0x24];
    uVar6 = param_2[0x27];
    uVar3 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar2;
    param_1[0x27] = uVar6;
    param_1[0x26] = uVar3;
    return param_1;
  }
  uVar4 = param_2[0x21];
  if (0xe < uVar4 >> 0x3c) {
    func_0x00010155b80c(param_1 + 0x20);
    goto LAB_10366a340;
  }
  uVar2 = param_1[0x20];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar4;
  func_0x00010006c090(uVar2);
  if ((ulong)param_1[0x24] >> 0x3c < 0xf) {
    uVar4 = param_2[0x24];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
      uVar2 = param_1[0x23];
      param_1[0x23] = param_2[0x23];
      param_1[0x24] = uVar4;
      func_0x00010006c090(uVar2);
      goto LAB_10366a3d4;
    }
    func_0x000101599dcc(param_1 + 0x22);
  }
  uVar2 = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar2;
  param_1[0x24] = param_2[0x24];
LAB_10366a3d4:
  puVar1 = param_1 + 0x25;
  if ((ulong)param_1[0x27] >> 0x3c < 0xf) {
    uVar4 = param_2[0x27];
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_1[0x26];
      uVar3 = param_2[0x25];
      param_1[0x26] = param_2[0x26];
      *puVar1 = uVar3;
      param_1[0x27] = uVar4;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x00010159d670(puVar1);
  }
  uVar2 = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  *puVar1 = uVar2;
  param_1[0x27] = param_2[0x27];
  return param_1;
}



/* Entry: 10366a430; end: 10366a543;  */

int FUN_10366a430(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x50] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10366a544; end: 10366a5c3;  */

void FUN_10366a544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82da8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf4464;
  func_0x000107c61520(&DAT_10dbf4464,&UNK_110676400);
  puRam0000000112f82da8 = puVar1;
  return;
}



/* Entry: 10366a5c4; end: 10366a73b;  */

void FUN_10366a5c4(undefined8 *param_1)

{
  int iVar1;
  long unaff_x20;
  undefined8 uVar2;
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
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined1 auStack_208 [232];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_70 = *(undefined8 *)(unaff_x20 + 200);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x38);
  iVar1 = (int)&uStack_120;
  FUN_10366a73c();
  if (iVar1 == 1) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0xc000000000000000;
    uStack_240 = 0;
    uStack_268 = 0xf000000000000000;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_228 = 0xf000000000000000;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0xf000000000000000;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0xf000000000000000;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0xf000000000000000;
    uStack_2b8 = 0;
    uStack_2c0 = 0xf000000000000000;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uVar2 = 0;
  }
  else {
    uStack_248 = uStack_108;
    uStack_250 = uStack_110;
    uStack_238 = uStack_118;
    uStack_240 = uStack_120;
    uStack_228 = uStack_e8;
    uStack_230 = uStack_f0;
    uStack_218 = uStack_f8;
    uStack_220 = uStack_100;
    uStack_268 = uStack_c8;
    uStack_270 = uStack_d0;
    uStack_258 = uStack_d8;
    uStack_260 = uStack_e0;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_b8;
    uStack_280 = uStack_c0;
    uStack_2a8 = uStack_88;
    uStack_2b0 = uStack_90;
    uStack_298 = uStack_98;
    uStack_2a0 = uStack_a0;
    uStack_2c8 = uStack_68;
    uStack_2d0 = uStack_70;
    uStack_2b8 = uStack_78;
    uStack_2c0 = uStack_80;
    uStack_2e8 = uStack_48;
    uStack_2f0 = uStack_50;
    uStack_2d8 = uStack_58;
    uStack_2e0 = uStack_60;
    uVar2 = uStack_40;
  }
  FUN_10366e498(&uStack_120,auStack_208,0x112f82db8,&UNK_10dbf45b0);
  param_1[1] = uStack_238;
  *param_1 = uStack_240;
  param_1[3] = uStack_248;
  param_1[2] = uStack_250;
  param_1[5] = uStack_218;
  param_1[4] = uStack_220;
  param_1[7] = uStack_228;
  param_1[6] = uStack_230;
  param_1[9] = uStack_258;
  param_1[8] = uStack_260;
  param_1[0xb] = uStack_268;
  param_1[10] = uStack_270;
  param_1[0xd] = uStack_278;
  param_1[0xc] = uStack_280;
  param_1[0xf] = uStack_288;
  param_1[0xe] = uStack_290;
  param_1[0x11] = uStack_298;
  param_1[0x10] = uStack_2a0;
  param_1[0x13] = uStack_2a8;
  param_1[0x12] = uStack_2b0;
  param_1[0x15] = uStack_2b8;
  param_1[0x14] = uStack_2c0;
  param_1[0x17] = uStack_2c8;
  param_1[0x16] = uStack_2d0;
  param_1[0x19] = uStack_2d8;
  param_1[0x18] = uStack_2e0;
  param_1[0x1b] = uStack_2e8;
  param_1[0x1a] = uStack_2f0;
  param_1[0x1c] = uVar2;
  return;
}



/* Entry: 10366a73c; end: 10366a763;  */

int FUN_10366a73c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  iVar1 = 0;
  if ((uVar2 >> 0x1c & 3) != 0) {
    iVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  }
  return iVar1;
}



/* Entry: 10366a764; end: 10366ab5f;  */

uint FUN_10366a764(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  undefined1 auStack_968 [232];
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
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
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  uStack_248 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_250 = *(undefined8 *)(unaff_x20 + 200);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_2f8 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_300 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_2e8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_2f0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_2d8 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_2e0 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_10366ab60(&uStack_128);
  iVar2 = (int)&uStack_3e8;
  uStack_418 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_420 = *(undefined8 *)(unaff_x20 + 200);
  uStack_408 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_410 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_3f8 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_400 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_458 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_460 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_448 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_450 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_438 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_440 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_428 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_430 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_498 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_4a0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_488 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_490 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_478 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_480 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_468 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_470 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_4c8 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_4d0 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_4b8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_4c0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_4a8 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_4b0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_320 = uStack_60;
  uStack_328 = uStack_68;
  uStack_310 = uStack_50;
  uStack_318 = uStack_58;
  uStack_360 = uStack_a0;
  uStack_368 = uStack_a8;
  uStack_350 = uStack_90;
  uStack_358 = uStack_98;
  uStack_340 = uStack_80;
  uStack_348 = uStack_88;
  uStack_330 = uStack_70;
  uStack_338 = uStack_78;
  uStack_3a0 = uStack_e0;
  uStack_3a8 = uStack_e8;
  uStack_390 = uStack_d0;
  uStack_398 = uStack_d8;
  uStack_380 = uStack_c0;
  uStack_388 = uStack_c8;
  uStack_370 = uStack_b0;
  uStack_378 = uStack_b8;
  uStack_3c0 = uStack_100;
  uStack_3c8 = uStack_108;
  uStack_3b0 = uStack_f0;
  uStack_3b8 = uStack_f8;
  uStack_3e0 = uStack_120;
  uStack_3e8 = uStack_128;
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_308 = uStack_48;
  uStack_3d0 = uStack_110;
  uStack_3d8 = uStack_118;
  iVar1 = (int)&uStack_4d0;
  FUN_10366a73c();
  if (iVar1 == 1) {
    FUN_10366a73c();
    if (iVar2 == 1) {
      uStack_5d8 = uStack_408;
      uStack_5e0 = uStack_410;
      uStack_5c8 = uStack_3f8;
      uStack_5d0 = uStack_400;
      uStack_5c0 = uStack_3f0;
      uStack_618 = uStack_448;
      uStack_620 = uStack_450;
      uStack_608 = uStack_438;
      uStack_610 = uStack_440;
      uStack_5f8 = uStack_428;
      uStack_600 = uStack_430;
      uStack_5e8 = uStack_418;
      uStack_5f0 = uStack_420;
      uStack_658 = uStack_488;
      uStack_660 = uStack_490;
      uStack_648 = uStack_478;
      uStack_650 = uStack_480;
      uStack_638 = uStack_468;
      uStack_640 = uStack_470;
      uStack_628 = uStack_458;
      uStack_630 = uStack_460;
      uStack_698 = uStack_4c8;
      uStack_6a0 = uStack_4d0;
      uStack_688 = uStack_4b8;
      uStack_690 = uStack_4c0;
      uStack_678 = uStack_4a8;
      uStack_680 = uStack_4b0;
      uStack_668 = uStack_498;
      uStack_670 = uStack_4a0;
      FUN_10366e498(&uStack_300,&uStack_210,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_6a0,0x112f82db8,&UNK_10dbf45b0);
      uVar4 = 0;
      goto LAB_10366ab44;
    }
  }
  else {
    uStack_6c8 = uStack_408;
    uStack_6d0 = uStack_410;
    uStack_6b8 = uStack_3f8;
    uStack_6c0 = uStack_400;
    uStack_6b0 = uStack_3f0;
    uStack_708 = uStack_448;
    uStack_710 = uStack_450;
    uStack_6f8 = uStack_438;
    uStack_700 = uStack_440;
    uStack_6e8 = uStack_428;
    uStack_6f0 = uStack_430;
    uStack_6d8 = uStack_418;
    uStack_6e0 = uStack_420;
    uStack_748 = uStack_488;
    uStack_750 = uStack_490;
    uStack_738 = uStack_478;
    uStack_740 = uStack_480;
    uStack_728 = uStack_468;
    uStack_730 = uStack_470;
    uStack_718 = uStack_458;
    uStack_720 = uStack_460;
    uStack_788 = uStack_4c8;
    uStack_790 = uStack_4d0;
    uStack_778 = uStack_4b8;
    uStack_780 = uStack_4c0;
    uStack_768 = uStack_4a8;
    uStack_770 = uStack_4b0;
    uStack_758 = uStack_498;
    uStack_760 = uStack_4a0;
    FUN_10366a73c();
    if (iVar2 != 1) {
      uStack_7b8 = uStack_320;
      uStack_7c0 = uStack_328;
      uStack_7a8 = uStack_310;
      uStack_7b0 = uStack_318;
      uStack_7f8 = uStack_360;
      uStack_800 = uStack_368;
      uStack_7e8 = uStack_350;
      uStack_7f0 = uStack_358;
      uStack_7d8 = uStack_340;
      uStack_7e0 = uStack_348;
      uStack_7c8 = uStack_330;
      uStack_7d0 = uStack_338;
      uStack_838 = uStack_3a0;
      uStack_840 = uStack_3a8;
      uStack_828 = uStack_390;
      uStack_830 = uStack_398;
      uStack_818 = uStack_380;
      uStack_820 = uStack_388;
      uStack_808 = uStack_370;
      uStack_810 = uStack_378;
      uStack_878 = uStack_3e0;
      uStack_880 = uStack_3e8;
      uStack_868 = uStack_3d0;
      uStack_870 = uStack_3d8;
      uStack_858 = uStack_3c0;
      uStack_860 = uStack_3c8;
      uStack_848 = uStack_3b0;
      uStack_850 = uStack_3b8;
      uStack_5d8 = uStack_320;
      uStack_5e0 = uStack_328;
      uStack_5c8 = uStack_310;
      uStack_5d0 = uStack_318;
      uStack_618 = uStack_360;
      uStack_620 = uStack_368;
      uStack_608 = uStack_350;
      uStack_610 = uStack_358;
      uStack_5f8 = uStack_340;
      uStack_600 = uStack_348;
      uStack_5e8 = uStack_330;
      uStack_5f0 = uStack_338;
      uStack_658 = uStack_3a0;
      uStack_660 = uStack_3a8;
      uStack_648 = uStack_390;
      uStack_650 = uStack_398;
      uStack_638 = uStack_380;
      uStack_640 = uStack_388;
      uStack_628 = uStack_370;
      uStack_630 = uStack_378;
      uStack_698 = uStack_3e0;
      uStack_6a0 = uStack_3e8;
      uStack_688 = uStack_3d0;
      uStack_690 = uStack_3d8;
      uStack_7a0 = uStack_308;
      uStack_5c0 = uStack_308;
      uStack_678 = uStack_3c0;
      uStack_680 = uStack_3c8;
      uStack_668 = uStack_3b0;
      uStack_670 = uStack_3b8;
      uStack_148 = uStack_6c8;
      uStack_150 = uStack_6d0;
      uStack_138 = uStack_6b8;
      uStack_140 = uStack_6c0;
      uStack_130 = uStack_6b0;
      uStack_188 = uStack_708;
      uStack_190 = uStack_710;
      uStack_178 = uStack_6f8;
      uStack_180 = uStack_700;
      uStack_168 = uStack_6e8;
      uStack_170 = uStack_6f0;
      uStack_158 = uStack_6d8;
      uStack_160 = uStack_6e0;
      uStack_1c8 = uStack_748;
      uStack_1d0 = uStack_750;
      uStack_1b8 = uStack_738;
      uStack_1c0 = uStack_740;
      uStack_1a8 = uStack_728;
      uStack_1b0 = uStack_730;
      uStack_198 = uStack_718;
      uStack_1a0 = uStack_720;
      uStack_208 = uStack_788;
      uStack_210 = uStack_790;
      uStack_1f8 = uStack_778;
      uStack_200 = uStack_780;
      uStack_1e8 = uStack_768;
      uStack_1f0 = uStack_770;
      uStack_1d8 = uStack_758;
      uStack_1e0 = uStack_760;
      FUN_10366e498(&uStack_300,auStack_968,0x112f82db8,&UNK_10dbf45b0);
      puVar3 = &uStack_210;
      func_0x00010366d9fc(puVar3,&uStack_6a0);
      func_0x00010366e4e0(&uStack_880,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_4d0,0x112f82db8,&UNK_10dbf45b0);
      uVar4 = (uint)puVar3 ^ 1;
      goto LAB_10366ab44;
    }
  }
  func_0x000107c610b4(&uStack_6a0,&uStack_4d0,0x1d0);
  FUN_10366e498(&uStack_300,&uStack_210,0x112f82db8,&UNK_10dbf45b0);
  func_0x00010366e4e0(&uStack_6a0,0x112f82dc0,&UNK_10dbf45b8);
  uVar4 = 1;
LAB_10366ab44:
  return uVar4 & 1;
}



/* Entry: 10366ab60; end: 10366ab8f;  */

void FUN_10366ab60(undefined8 *param_1)

{
  param_1[1] = 0xf000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  return;
}



/* Entry: 10366ab90; end: 10366addf;  */

bool FUN_10366ab90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_130 [64];
  undefined8 uStack_f0;
  ulong uStack_e8;
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
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_e8 = *(ulong *)(unaff_x20 + 0x18);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = uStack_e8 >> 0x3c;
  uStack_70 = uStack_f0;
  uStack_68 = uStack_e8;
  if (uVar3 < 0xf) {
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_a8 = 0xf000000000000000;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_10366e498(&uStack_70,auStack_130,0x112db40e0,&UNK_10d95e630);
    uVar1 = 0x112dbaa18;
    puVar2 = &UNK_10d96f0a8;
  }
  else {
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar1 = 0x112db40e0;
    puVar2 = &UNK_10d95e630;
    FUN_10366e498(&uStack_70,auStack_130,0x112db40e0,&UNK_10d95e630);
  }
  func_0x00010366e4e0(&uStack_f0,uVar1,puVar2);
  return uVar3 < 0xf;
}



/* Entry: 10366ade0; end: 10366b1a3;  */

uint FUN_10366ade0(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  undefined1 auStack_968 [232];
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
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
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_288 = *(undefined8 *)(unaff_x20 + 200);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_2f8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_300 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_2e8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_2f0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_2d8 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_2e0 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x80);
  FUN_10366ab60(&uStack_128);
  uStack_428 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_430 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_418 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_420 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_408 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_410 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_3f8 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_400 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_468 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_470 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_458 = *(undefined8 *)(unaff_x20 + 200);
  uStack_460 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_448 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_450 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_438 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_440 = *(undefined8 *)(unaff_x20 + 0xe0);
  iVar2 = (int)&uStack_3e8;
  uStack_488 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_490 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_478 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_480 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_4c8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_4d0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_4b8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_4c0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_4a8 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_4b0 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_498 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_4a0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_320 = uStack_60;
  uStack_328 = uStack_68;
  uStack_310 = uStack_50;
  uStack_318 = uStack_58;
  uStack_360 = uStack_a0;
  uStack_368 = uStack_a8;
  uStack_350 = uStack_90;
  uStack_358 = uStack_98;
  uStack_340 = uStack_80;
  uStack_348 = uStack_88;
  uStack_330 = uStack_70;
  uStack_338 = uStack_78;
  uStack_3a0 = uStack_e0;
  uStack_3a8 = uStack_e8;
  uStack_390 = uStack_d0;
  uStack_398 = uStack_d8;
  uStack_380 = uStack_c0;
  uStack_388 = uStack_c8;
  uStack_370 = uStack_b0;
  uStack_378 = uStack_b8;
  uStack_3c0 = uStack_100;
  uStack_3c8 = uStack_108;
  uStack_3b0 = uStack_f0;
  uStack_3b8 = uStack_f8;
  uStack_3e0 = uStack_120;
  uStack_3e8 = uStack_128;
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_308 = uStack_48;
  uStack_3d0 = uStack_110;
  uStack_3d8 = uStack_118;
  iVar1 = (int)&uStack_4d0;
  FUN_10366a73c();
  if (iVar1 == 1) {
    FUN_10366a73c();
    if (iVar2 == 1) {
      uStack_5d8 = uStack_408;
      uStack_5e0 = uStack_410;
      uStack_5c8 = uStack_3f8;
      uStack_5d0 = uStack_400;
      uStack_5c0 = uStack_3f0;
      uStack_618 = uStack_448;
      uStack_620 = uStack_450;
      uStack_608 = uStack_438;
      uStack_610 = uStack_440;
      uStack_5f8 = uStack_428;
      uStack_600 = uStack_430;
      uStack_5e8 = uStack_418;
      uStack_5f0 = uStack_420;
      uStack_658 = uStack_488;
      uStack_660 = uStack_490;
      uStack_648 = uStack_478;
      uStack_650 = uStack_480;
      uStack_638 = uStack_468;
      uStack_640 = uStack_470;
      uStack_628 = uStack_458;
      uStack_630 = uStack_460;
      uStack_698 = uStack_4c8;
      uStack_6a0 = uStack_4d0;
      uStack_688 = uStack_4b8;
      uStack_690 = uStack_4c0;
      uStack_678 = uStack_4a8;
      uStack_680 = uStack_4b0;
      uStack_668 = uStack_498;
      uStack_670 = uStack_4a0;
      FUN_10366e498(&uStack_300,&uStack_210,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_6a0,0x112f82db8,&UNK_10dbf45b0);
      uVar4 = 0;
      goto LAB_10366b188;
    }
  }
  else {
    uStack_6c8 = uStack_408;
    uStack_6d0 = uStack_410;
    uStack_6b8 = uStack_3f8;
    uStack_6c0 = uStack_400;
    uStack_6b0 = uStack_3f0;
    uStack_708 = uStack_448;
    uStack_710 = uStack_450;
    uStack_6f8 = uStack_438;
    uStack_700 = uStack_440;
    uStack_6e8 = uStack_428;
    uStack_6f0 = uStack_430;
    uStack_6d8 = uStack_418;
    uStack_6e0 = uStack_420;
    uStack_748 = uStack_488;
    uStack_750 = uStack_490;
    uStack_738 = uStack_478;
    uStack_740 = uStack_480;
    uStack_728 = uStack_468;
    uStack_730 = uStack_470;
    uStack_718 = uStack_458;
    uStack_720 = uStack_460;
    uStack_788 = uStack_4c8;
    uStack_790 = uStack_4d0;
    uStack_778 = uStack_4b8;
    uStack_780 = uStack_4c0;
    uStack_768 = uStack_4a8;
    uStack_770 = uStack_4b0;
    uStack_758 = uStack_498;
    uStack_760 = uStack_4a0;
    FUN_10366a73c();
    if (iVar2 != 1) {
      uStack_7b8 = uStack_320;
      uStack_7c0 = uStack_328;
      uStack_7a8 = uStack_310;
      uStack_7b0 = uStack_318;
      uStack_7f8 = uStack_360;
      uStack_800 = uStack_368;
      uStack_7e8 = uStack_350;
      uStack_7f0 = uStack_358;
      uStack_7d8 = uStack_340;
      uStack_7e0 = uStack_348;
      uStack_7c8 = uStack_330;
      uStack_7d0 = uStack_338;
      uStack_838 = uStack_3a0;
      uStack_840 = uStack_3a8;
      uStack_828 = uStack_390;
      uStack_830 = uStack_398;
      uStack_818 = uStack_380;
      uStack_820 = uStack_388;
      uStack_808 = uStack_370;
      uStack_810 = uStack_378;
      uStack_878 = uStack_3e0;
      uStack_880 = uStack_3e8;
      uStack_868 = uStack_3d0;
      uStack_870 = uStack_3d8;
      uStack_858 = uStack_3c0;
      uStack_860 = uStack_3c8;
      uStack_848 = uStack_3b0;
      uStack_850 = uStack_3b8;
      uStack_5d8 = uStack_320;
      uStack_5e0 = uStack_328;
      uStack_5c8 = uStack_310;
      uStack_5d0 = uStack_318;
      uStack_618 = uStack_360;
      uStack_620 = uStack_368;
      uStack_608 = uStack_350;
      uStack_610 = uStack_358;
      uStack_5f8 = uStack_340;
      uStack_600 = uStack_348;
      uStack_5e8 = uStack_330;
      uStack_5f0 = uStack_338;
      uStack_658 = uStack_3a0;
      uStack_660 = uStack_3a8;
      uStack_648 = uStack_390;
      uStack_650 = uStack_398;
      uStack_638 = uStack_380;
      uStack_640 = uStack_388;
      uStack_628 = uStack_370;
      uStack_630 = uStack_378;
      uStack_698 = uStack_3e0;
      uStack_6a0 = uStack_3e8;
      uStack_688 = uStack_3d0;
      uStack_690 = uStack_3d8;
      uStack_7a0 = uStack_308;
      uStack_5c0 = uStack_308;
      uStack_678 = uStack_3c0;
      uStack_680 = uStack_3c8;
      uStack_668 = uStack_3b0;
      uStack_670 = uStack_3b8;
      uStack_148 = uStack_6c8;
      uStack_150 = uStack_6d0;
      uStack_138 = uStack_6b8;
      uStack_140 = uStack_6c0;
      uStack_130 = uStack_6b0;
      uStack_188 = uStack_708;
      uStack_190 = uStack_710;
      uStack_178 = uStack_6f8;
      uStack_180 = uStack_700;
      uStack_168 = uStack_6e8;
      uStack_170 = uStack_6f0;
      uStack_158 = uStack_6d8;
      uStack_160 = uStack_6e0;
      uStack_1c8 = uStack_748;
      uStack_1d0 = uStack_750;
      uStack_1b8 = uStack_738;
      uStack_1c0 = uStack_740;
      uStack_1a8 = uStack_728;
      uStack_1b0 = uStack_730;
      uStack_198 = uStack_718;
      uStack_1a0 = uStack_720;
      uStack_208 = uStack_788;
      uStack_210 = uStack_790;
      uStack_1f8 = uStack_778;
      uStack_200 = uStack_780;
      uStack_1e8 = uStack_768;
      uStack_1f0 = uStack_770;
      uStack_1d8 = uStack_758;
      uStack_1e0 = uStack_760;
      FUN_10366e498(&uStack_300,auStack_968,0x112f82db8,&UNK_10dbf45b0);
      puVar3 = &uStack_210;
      func_0x00010366d9fc(puVar3,&uStack_6a0);
      func_0x00010366e4e0(&uStack_880,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_4d0,0x112f82db8,&UNK_10dbf45b0);
      uVar4 = (uint)puVar3 ^ 1;
      goto LAB_10366b188;
    }
  }
  func_0x000107c610b4(&uStack_6a0,&uStack_4d0,0x1d0);
  FUN_10366e498(&uStack_300,&uStack_210,0x112f82db8,&UNK_10dbf45b0);
  func_0x00010366e4e0(&uStack_6a0,0x112f82dc0,&UNK_10dbf45b8);
  uVar4 = 1;
LAB_10366b188:
  return uVar4 & 1;
}



/* Entry: 10366b1a4; end: 10366b2e3;  */

bool FUN_10366b1a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_10366e498(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
    func_0x000101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_10366e498(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
  }
  func_0x000101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 10366b2e4; end: 10366b3d3;  */

bool FUN_10366b2e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(ulong *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar8 = uVar4 >> 0x3c;
  uStack_90 = uVar1;
  uStack_88 = uVar2;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = uVar7;
  if (uVar8 < 0xf) {
    FUN_10366e498(&uStack_90,auStack_c8,0x112db5e70,&UNK_10d9649a0);
    func_0x000101593c1c(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    FUN_10366e498(&uStack_90,auStack_c8,0x112db5e70,&UNK_10d9649a0);
  }
  func_0x000101593c1c(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return uVar8 < 0xf;
}



/* Entry: 10366b3d4; end: 10366b617;  */

bool FUN_10366b3d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(ulong *)(unaff_x20 + 0x88);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_10366e498(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
    func_0x000101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_10366e498(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
  }
  func_0x000101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 10366b618; end: 10366b6d3;  */

void FUN_10366b618(undefined8 *param_1)

{
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  FUN_10366ab60(&uStack_108);
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[0x1a] = uStack_50;
  param_1[0x19] = uStack_58;
  param_1[0x1c] = uStack_40;
  param_1[0x1b] = uStack_48;
  param_1[0x1e] = uStack_30;
  param_1[0x1d] = uStack_38;
  param_1[0x12] = uStack_90;
  param_1[0x11] = uStack_98;
  param_1[0x14] = uStack_80;
  param_1[0x13] = uStack_88;
  param_1[0x16] = uStack_70;
  param_1[0x15] = uStack_78;
  param_1[0x18] = uStack_60;
  param_1[0x17] = uStack_68;
  param_1[10] = uStack_d0;
  param_1[9] = uStack_d8;
  param_1[0xc] = uStack_c0;
  param_1[0xb] = uStack_c8;
  param_1[0xe] = uStack_b0;
  param_1[0xd] = uStack_b8;
  param_1[0x10] = uStack_a0;
  param_1[0xf] = uStack_a8;
  param_1[4] = uStack_100;
  param_1[3] = uStack_108;
  param_1[6] = uStack_f0;
  param_1[5] = uStack_f8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[0x1f] = uStack_28;
  param_1[8] = uStack_e0;
  param_1[7] = uStack_e8;
  return;
}



/* Entry: 10366b6d4; end: 10366b71b;  */

void FUN_10366b6d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf4980,0x1d,2);
  uRam000000011380b2b8 = uStack_38;
  uRam000000011380b2b0 = uStack_40;
  uRam000000011380b2c8 = uStack_28;
  uRam000000011380b2c0 = uStack_30;
  uRam000000011380b2d8 = uStack_18;
  uRam000000011380b2d0 = uStack_20;
  return;
}



/* Entry: 10366b71c; end: 10366b7ff;  */

void FUN_10366b71c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_10366f2ec();
LAB_10366b7a4:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10366e520();
        goto LAB_10366b7a4;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10366b800; end: 10366b8ab;  */

void FUN_10366b800(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  plVar1 = unaff_x20;
  FUN_10366b8ac();
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_10366e520();
      (*pcVar3)(lVar2,2,&UNK_110676758,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 10366b8ac; end: 10366b9cb;  */

void FUN_10366b8ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0xd0);
  uStack_80 = *(undefined8 *)(param_1 + 200);
  uStack_68 = *(undefined8 *)(param_1 + 0xe0);
  uStack_70 = *(undefined8 *)(param_1 + 0xd8);
  uStack_58 = *(undefined8 *)(param_1 + 0xf0);
  uStack_60 = *(undefined8 *)(param_1 + 0xe8);
  uStack_50 = *(undefined8 *)(param_1 + 0xf8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_98 = *(undefined8 *)(param_1 + 0xb0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = *(undefined8 *)(param_1 + 0xc0);
  uStack_90 = *(undefined8 *)(param_1 + 0xb8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_128 = *(undefined8 *)(param_1 + 0x20);
  uStack_130 = *(undefined8 *)(param_1 + 0x18);
  uStack_118 = *(undefined8 *)(param_1 + 0x30);
  uStack_120 = *(undefined8 *)(param_1 + 0x28);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = &uStack_130;
  FUN_10366a73c();
  if ((int)puVar1 != 1) {
    uStack_158 = uStack_68;
    uStack_160 = uStack_70;
    uStack_148 = uStack_58;
    uStack_150 = uStack_60;
    uStack_140 = uStack_50;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_178 = uStack_88;
    uStack_180 = uStack_90;
    uStack_168 = uStack_78;
    uStack_170 = uStack_80;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_218 = uStack_128;
    uStack_220 = uStack_130;
    uStack_208 = uStack_118;
    uStack_210 = uStack_120;
    uStack_1f8 = uStack_108;
    uStack_200 = uStack_110;
    uStack_1e8 = uStack_f8;
    uStack_1f0 = uStack_100;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10366f2ec();
    (*pcVar2)(&uStack_220,1,&UNK_1106767e0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10366b9cc; end: 10366b9cf;  */

uint FUN_10366b9cc(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_978 [232];
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
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
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  uStack_168 = param_1[0x1a];
  uStack_170 = param_1[0x19];
  uStack_158 = param_1[0x1c];
  uStack_160 = param_1[0x1b];
  uStack_148 = param_1[0x1e];
  uStack_150 = param_1[0x1d];
  uStack_140 = param_1[0x1f];
  uStack_1a8 = param_1[0x12];
  uStack_1b0 = param_1[0x11];
  uStack_198 = param_1[0x14];
  uStack_1a0 = param_1[0x13];
  uStack_188 = param_1[0x16];
  uStack_190 = param_1[0x15];
  uStack_178 = param_1[0x18];
  uStack_180 = param_1[0x17];
  uStack_1e8 = param_1[10];
  uStack_1f0 = param_1[9];
  uStack_1d8 = param_1[0xc];
  uStack_1e0 = param_1[0xb];
  uStack_1c8 = param_1[0xe];
  uStack_1d0 = param_1[0xd];
  uStack_1b8 = param_1[0x10];
  uStack_1c0 = param_1[0xf];
  uStack_218 = param_1[4];
  uStack_220 = param_1[3];
  uStack_208 = param_1[6];
  uStack_210 = param_1[5];
  uStack_1f8 = param_1[8];
  uStack_200 = param_1[7];
  uStack_258 = param_2[0x1a];
  uStack_260 = param_2[0x19];
  uStack_248 = param_2[0x1c];
  uStack_250 = param_2[0x1b];
  uStack_238 = param_2[0x1e];
  uStack_240 = param_2[0x1d];
  uStack_230 = param_2[0x1f];
  uStack_298 = param_2[0x12];
  uStack_2a0 = param_2[0x11];
  uStack_288 = param_2[0x14];
  uStack_290 = param_2[0x13];
  uStack_278 = param_2[0x16];
  uStack_280 = param_2[0x15];
  uStack_268 = param_2[0x18];
  uStack_270 = param_2[0x17];
  uStack_2d8 = param_2[10];
  uStack_2e0 = param_2[9];
  uStack_2c8 = param_2[0xc];
  uStack_2d0 = param_2[0xb];
  uStack_2b8 = param_2[0xe];
  uStack_2c0 = param_2[0xd];
  uStack_2a8 = param_2[0x10];
  uStack_2b0 = param_2[0xf];
  uStack_308 = param_2[4];
  uStack_310 = param_2[3];
  uStack_2f8 = param_2[6];
  uStack_300 = param_2[5];
  uStack_2e8 = param_2[8];
  uStack_2f0 = param_2[7];
  iVar2 = (int)&uStack_3f8;
  uStack_428 = param_1[0x1a];
  uStack_430 = param_1[0x19];
  uStack_418 = param_1[0x1c];
  uStack_420 = param_1[0x1b];
  uStack_408 = param_1[0x1e];
  uStack_410 = param_1[0x1d];
  uStack_400 = param_1[0x1f];
  uStack_468 = param_1[0x12];
  uStack_470 = param_1[0x11];
  uStack_458 = param_1[0x14];
  uStack_460 = param_1[0x13];
  uStack_448 = param_1[0x16];
  uStack_450 = param_1[0x15];
  uStack_438 = param_1[0x18];
  uStack_440 = param_1[0x17];
  uStack_4a8 = param_1[10];
  uStack_4b0 = param_1[9];
  uStack_498 = param_1[0xc];
  uStack_4a0 = param_1[0xb];
  uStack_488 = param_1[0xe];
  uStack_490 = param_1[0xd];
  uStack_478 = param_1[0x10];
  uStack_480 = param_1[0xf];
  uStack_4d8 = param_1[4];
  uStack_4e0 = param_1[3];
  uStack_4c8 = param_1[6];
  uStack_4d0 = param_1[5];
  uStack_4b8 = param_1[8];
  uStack_4c0 = param_1[7];
  uStack_340 = param_2[0x1a];
  uStack_348 = param_2[0x19];
  uStack_330 = param_2[0x1c];
  uStack_338 = param_2[0x1b];
  uStack_320 = param_2[0x1e];
  uStack_328 = param_2[0x1d];
  uStack_380 = param_2[0x12];
  uStack_388 = param_2[0x11];
  uStack_370 = param_2[0x14];
  uStack_378 = param_2[0x13];
  uStack_360 = param_2[0x16];
  uStack_368 = param_2[0x15];
  uStack_350 = param_2[0x18];
  uStack_358 = param_2[0x17];
  uStack_3c0 = param_2[10];
  uStack_3c8 = param_2[9];
  uStack_3b0 = param_2[0xc];
  uStack_3b8 = param_2[0xb];
  uStack_3a0 = param_2[0xe];
  uStack_3a8 = param_2[0xd];
  uStack_390 = param_2[0x10];
  uStack_398 = param_2[0xf];
  uStack_3d0 = param_2[8];
  uStack_3d8 = param_2[7];
  uStack_318 = param_2[0x1f];
  uStack_3f0 = param_2[4];
  uStack_3f8 = param_2[3];
  uStack_3e0 = param_2[6];
  uStack_3e8 = param_2[5];
  iVar1 = (int)&uStack_4e0;
  FUN_10366a73c();
  if (iVar1 == 1) {
    FUN_10366a73c();
    if (iVar2 == 1) {
      uStack_5e8 = uStack_418;
      uStack_5f0 = uStack_420;
      uStack_5d8 = uStack_408;
      uStack_5e0 = uStack_410;
      uStack_5d0 = uStack_400;
      uStack_628 = uStack_458;
      uStack_630 = uStack_460;
      uStack_618 = uStack_448;
      uStack_620 = uStack_450;
      uStack_608 = uStack_438;
      uStack_610 = uStack_440;
      uStack_5f8 = uStack_428;
      uStack_600 = uStack_430;
      uStack_668 = uStack_498;
      uStack_670 = uStack_4a0;
      uStack_658 = uStack_488;
      uStack_660 = uStack_490;
      uStack_648 = uStack_478;
      uStack_650 = uStack_480;
      uStack_638 = uStack_468;
      uStack_640 = uStack_470;
      uStack_6a8 = uStack_4d8;
      uStack_6b0 = uStack_4e0;
      uStack_698 = uStack_4c8;
      uStack_6a0 = uStack_4d0;
      uStack_688 = uStack_4b8;
      uStack_690 = uStack_4c0;
      uStack_678 = uStack_4a8;
      uStack_680 = uStack_4b0;
      FUN_10366e498(&uStack_220,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      FUN_10366e498(&uStack_310,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_6b0,0x112f82db8,&UNK_10dbf45b0);
LAB_10366efcc:
      uVar5 = *param_1;
      FUN_10366d3c0(uVar5,*param_2);
      if ((uVar5 & 1) != 0) {
        uVar5 = param_1[1];
        func_0x000100e25fcc(uVar5,param_1[2],param_2[1],param_2[2]);
        uVar3 = (uint)uVar5;
        goto LAB_10366eff0;
      }
    }
    else {
LAB_10366ee28:
      func_0x000107c610b4(&uStack_6b0,&uStack_4e0,0x1d0);
      FUN_10366e498(&uStack_220,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      FUN_10366e498(&uStack_310,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_6b0,0x112f82dc0,&UNK_10dbf45b8);
    }
  }
  else {
    uStack_6d8 = uStack_418;
    uStack_6e0 = uStack_420;
    uStack_6c8 = uStack_408;
    uStack_6d0 = uStack_410;
    uStack_6c0 = uStack_400;
    uStack_718 = uStack_458;
    uStack_720 = uStack_460;
    uStack_708 = uStack_448;
    uStack_710 = uStack_450;
    uStack_6f8 = uStack_438;
    uStack_700 = uStack_440;
    uStack_6e8 = uStack_428;
    uStack_6f0 = uStack_430;
    uStack_758 = uStack_498;
    uStack_760 = uStack_4a0;
    uStack_748 = uStack_488;
    uStack_750 = uStack_490;
    uStack_738 = uStack_478;
    uStack_740 = uStack_480;
    uStack_728 = uStack_468;
    uStack_730 = uStack_470;
    uStack_798 = uStack_4d8;
    uStack_7a0 = uStack_4e0;
    uStack_788 = uStack_4c8;
    uStack_790 = uStack_4d0;
    uStack_778 = uStack_4b8;
    uStack_780 = uStack_4c0;
    uStack_768 = uStack_4a8;
    uStack_770 = uStack_4b0;
    FUN_10366a73c();
    if (iVar2 == 1) goto LAB_10366ee28;
    uStack_7c8 = uStack_330;
    uStack_7d0 = uStack_338;
    uStack_7b8 = uStack_320;
    uStack_7c0 = uStack_328;
    uStack_808 = uStack_370;
    uStack_810 = uStack_378;
    uStack_7f8 = uStack_360;
    uStack_800 = uStack_368;
    uStack_7e8 = uStack_350;
    uStack_7f0 = uStack_358;
    uStack_7d8 = uStack_340;
    uStack_7e0 = uStack_348;
    uStack_848 = uStack_3b0;
    uStack_850 = uStack_3b8;
    uStack_838 = uStack_3a0;
    uStack_840 = uStack_3a8;
    uStack_828 = uStack_390;
    uStack_830 = uStack_398;
    uStack_818 = uStack_380;
    uStack_820 = uStack_388;
    uStack_888 = uStack_3f0;
    uStack_890 = uStack_3f8;
    uStack_878 = uStack_3e0;
    uStack_880 = uStack_3e8;
    uStack_868 = uStack_3d0;
    uStack_870 = uStack_3d8;
    uStack_858 = uStack_3c0;
    uStack_860 = uStack_3c8;
    uStack_5e8 = uStack_330;
    uStack_5f0 = uStack_338;
    uStack_5d8 = uStack_320;
    uStack_5e0 = uStack_328;
    uStack_628 = uStack_370;
    uStack_630 = uStack_378;
    uStack_618 = uStack_360;
    uStack_620 = uStack_368;
    uStack_608 = uStack_350;
    uStack_610 = uStack_358;
    uStack_5f8 = uStack_340;
    uStack_600 = uStack_348;
    uStack_668 = uStack_3b0;
    uStack_670 = uStack_3b8;
    uStack_658 = uStack_3a0;
    uStack_660 = uStack_3a8;
    uStack_648 = uStack_390;
    uStack_650 = uStack_398;
    uStack_638 = uStack_380;
    uStack_640 = uStack_388;
    uStack_6a8 = uStack_3f0;
    uStack_6b0 = uStack_3f8;
    uStack_698 = uStack_3e0;
    uStack_6a0 = uStack_3e8;
    uStack_688 = uStack_3d0;
    uStack_690 = uStack_3d8;
    uStack_678 = uStack_3c0;
    uStack_680 = uStack_3c8;
    uStack_78 = uStack_6e8;
    uStack_80 = uStack_6f0;
    uStack_68 = uStack_6d8;
    uStack_70 = uStack_6e0;
    uStack_58 = uStack_6c8;
    uStack_60 = uStack_6d0;
    uStack_b8 = uStack_728;
    uStack_c0 = uStack_730;
    uStack_a8 = uStack_718;
    uStack_b0 = uStack_720;
    uStack_7b0 = uStack_318;
    uStack_5d0 = uStack_318;
    uStack_50 = uStack_6c0;
    uStack_98 = uStack_708;
    uStack_a0 = uStack_710;
    uStack_88 = uStack_6f8;
    uStack_90 = uStack_700;
    uStack_e8 = uStack_758;
    uStack_f0 = uStack_760;
    uStack_d8 = uStack_748;
    uStack_e0 = uStack_750;
    uStack_c8 = uStack_738;
    uStack_d0 = uStack_740;
    uStack_128 = uStack_798;
    uStack_130 = uStack_7a0;
    uStack_118 = uStack_788;
    uStack_120 = uStack_790;
    uStack_108 = uStack_778;
    uStack_110 = uStack_780;
    uStack_f8 = uStack_768;
    uStack_100 = uStack_770;
    FUN_10366e498(&uStack_220,auStack_978,0x112f82db8,&UNK_10dbf45b0);
    FUN_10366e498(&uStack_310,auStack_978,0x112f82db8,&UNK_10dbf45b0);
    puVar4 = &uStack_130;
    func_0x00010366d9fc(puVar4,&uStack_6b0);
    func_0x00010366e4e0(&uStack_890,0x112f82db8,&UNK_10dbf45b0);
    func_0x00010366e4e0(&uStack_4e0,0x112f82db8,&UNK_10dbf45b0);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10366efcc;
  }
  uVar3 = 0;
LAB_10366eff0:
  return uVar3 & 1;
}



/* Entry: 10366b9d0; end: 10366ba8b;  */

void FUN_10366b9d0(undefined8 *param_1)

{
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  FUN_10366ab60(&uStack_108);
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[0x1a] = uStack_50;
  param_1[0x19] = uStack_58;
  param_1[0x1c] = uStack_40;
  param_1[0x1b] = uStack_48;
  param_1[0x1e] = uStack_30;
  param_1[0x1d] = uStack_38;
  param_1[0x12] = uStack_90;
  param_1[0x11] = uStack_98;
  param_1[0x14] = uStack_80;
  param_1[0x13] = uStack_88;
  param_1[0x16] = uStack_70;
  param_1[0x15] = uStack_78;
  param_1[0x18] = uStack_60;
  param_1[0x17] = uStack_68;
  param_1[10] = uStack_d0;
  param_1[9] = uStack_d8;
  param_1[0xc] = uStack_c0;
  param_1[0xb] = uStack_c8;
  param_1[0xe] = uStack_b0;
  param_1[0xd] = uStack_b8;
  param_1[0x10] = uStack_a0;
  param_1[0xf] = uStack_a8;
  param_1[4] = uStack_100;
  param_1[3] = uStack_108;
  param_1[6] = uStack_f0;
  param_1[5] = uStack_f8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[0x1f] = uStack_28;
  param_1[8] = uStack_e0;
  param_1[7] = uStack_e8;
  return;
}



/* Entry: 10366ba8c; end: 10366baaf;  */

undefined1  [16] FUN_10366ba8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156dd0;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 10366bab0; end: 10366badf;  */

undefined1  [16] FUN_10366bab0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10366bae0; end: 10366bb13;  */

void FUN_10366bae0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10366bb14; end: 10366bb27;  */

undefined1  [16] FUN_10366bb14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10366bb24;
  return auVar1;
}



/* Entry: 10366bb28; end: 10366bb3b;  */

void FUN_10366bb28(void)

{
  FUN_10366b71c();
  return;
}



/* Entry: 10366bb3c; end: 10366bba3;  */

void FUN_10366bb3c(void)

{
  FUN_10366b800();
  return;
}



/* Entry: 10366bba4; end: 10366bba7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10366bba4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10366bba8; end: 10366bbdf;  */

uint FUN_10366bba8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103672a58();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10366bbe0; end: 10366bc8f;  */

uint FUN_10366bbe0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  uStack_48 = param_1[0x1b];
  uStack_50 = param_1[0x1a];
  uStack_38 = param_1[0x1d];
  uStack_40 = param_1[0x1c];
  uStack_28 = param_1[0x1f];
  uStack_30 = param_1[0x1e];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_158 = unaff_x20[0x19];
  uStack_160 = unaff_x20[0x18];
  uStack_148 = unaff_x20[0x1b];
  uStack_150 = unaff_x20[0x1a];
  uStack_138 = unaff_x20[0x1d];
  uStack_140 = unaff_x20[0x1c];
  uStack_128 = unaff_x20[0x1f];
  uStack_130 = unaff_x20[0x1e];
  uStack_198 = unaff_x20[0x11];
  uStack_1a0 = unaff_x20[0x10];
  uStack_188 = unaff_x20[0x13];
  uStack_190 = unaff_x20[0x12];
  uStack_178 = unaff_x20[0x15];
  uStack_180 = unaff_x20[0x14];
  uStack_168 = unaff_x20[0x17];
  uStack_170 = unaff_x20[0x16];
  uStack_1d8 = unaff_x20[9];
  uStack_1e0 = unaff_x20[8];
  uStack_1c8 = unaff_x20[0xb];
  uStack_1d0 = unaff_x20[10];
  uStack_1b8 = unaff_x20[0xd];
  uStack_1c0 = unaff_x20[0xc];
  uStack_1a8 = unaff_x20[0xf];
  uStack_1b0 = unaff_x20[0xe];
  uStack_218 = unaff_x20[1];
  uStack_220 = *unaff_x20;
  uStack_208 = unaff_x20[3];
  uStack_210 = unaff_x20[2];
  uStack_1f8 = unaff_x20[5];
  uStack_200 = unaff_x20[4];
  uStack_1e8 = unaff_x20[7];
  uStack_1f0 = unaff_x20[6];
  FUN_10366eb7c(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10366bc90; end: 10366bd2f;  */

/* WARNING: Possible PIC construction at 0x00010366bcdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366bcec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010366bce0) */
/* WARNING: Removing unreachable block (ram,0x00010366bcf0) */

void FUN_10366bc90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82dd0 != -1) {
    func_0x000107c61568(0x112f82dd0,FUN_10366b6d4);
  }
  uVar5 = uRam000000011380b2d8;
  uVar4 = uRam000000011380b2d0;
  uVar3 = uRam000000011380b2c8;
  uVar2 = uRam000000011380b2c0;
  uVar1 = uRam000000011380b2b8;
  *param_1 = uRam000000011380b2b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10366bd30; end: 10366bd6b;  */

void FUN_10366bd30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82e70;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82e70,&UNK_10dbf4900);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10366bd6c; end: 10366bed7;  */

void FUN_10366bd6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_178 [72];
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
  
  uStack_68 = unaff_x20[0x19];
  uStack_70 = unaff_x20[0x18];
  uStack_58 = unaff_x20[0x1b];
  uStack_60 = unaff_x20[0x1a];
  uStack_48 = unaff_x20[0x1d];
  uStack_50 = unaff_x20[0x1c];
  uStack_38 = unaff_x20[0x1f];
  uStack_40 = unaff_x20[0x1e];
  uStack_a8 = unaff_x20[0x11];
  uStack_b0 = unaff_x20[0x10];
  uStack_98 = unaff_x20[0x13];
  uStack_a0 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  func_0x000107c6068c(auStack_178,0);
  func_0x000107c5fa50(auStack_178,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10366bed8; end: 10366bf87;  */

uint FUN_10366bed8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  uVar1 = 0;
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_128 = param_1[0x1f];
  uStack_130 = param_1[0x1e];
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  uStack_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  uStack_40 = param_2[0x1c];
  uStack_28 = param_2[0x1f];
  uStack_30 = param_2[0x1e];
  uStack_98 = param_2[0x11];
  uStack_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  uStack_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  uStack_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_10366eb7c(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10366bf88; end: 10366bff7;  */

void FUN_10366bf88(void)

{
  func_0x000107c5fb78(0xd000000000000014,0x800000010f156e20);
  uRam000000011380b2e0 = 0xd000000000000029;
  uRam000000011380b2e8 = 0x800000010f156dd0;
  return;
}



/* Entry: 10366bff8; end: 10366c03f;  */

void FUN_10366bff8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf4960,0x1d,2);
  uRam000000011380b2f8 = uStack_38;
  uRam000000011380b2f0 = uStack_40;
  uRam000000011380b308 = uStack_28;
  uRam000000011380b300 = uStack_30;
  uRam000000011380b318 = uStack_18;
  uRam000000011380b310 = uStack_20;
  return;
}



/* Entry: 10366c040; end: 10366c123;  */

void FUN_10366c040(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010162c948();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_1106769a0;
LAB_10366c0c8:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_10366f2ec();
        lVar2 = unaff_x20 + 0x50;
        puVar3 = &UNK_1106767e0;
        goto LAB_10366c0c8;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10366c124; end: 10366c197;  */

void FUN_10366c124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10366c198();
  if (unaff_x21 == 0) {
    FUN_10366c22c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10366c198; end: 10366c22b;  */

void FUN_10366c198(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0x18);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010162c948();
    (*pcVar1)(&uStack_80,1,&UNK_1106769a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10366c22c; end: 10366c32f;  */

void FUN_10366c22c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  uStack_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x128);
  uStack_60 = *(undefined8 *)(param_1 + 0x120);
  uStack_50 = *(undefined8 *)(param_1 + 0x130);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_98 = *(undefined8 *)(param_1 + 0xe8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 0xf8);
  uStack_90 = *(undefined8 *)(param_1 + 0xf0);
  uStack_78 = *(undefined8 *)(param_1 + 0x108);
  uStack_80 = *(undefined8 *)(param_1 + 0x100);
  uStack_e8 = *(undefined8 *)(param_1 + 0x98);
  uStack_f0 = *(undefined8 *)(param_1 + 0x90);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b8 = *(undefined8 *)(param_1 + 200);
  uStack_c0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0x58);
  uStack_130 = *(undefined8 *)(param_1 + 0x50);
  uStack_118 = *(undefined8 *)(param_1 + 0x68);
  uStack_120 = *(undefined8 *)(param_1 + 0x60);
  uStack_108 = *(undefined8 *)(param_1 + 0x78);
  uStack_110 = *(undefined8 *)(param_1 + 0x70);
  uStack_f8 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = &uStack_130;
  FUN_10366a73c();
  if ((int)puVar1 != 1) {
    uStack_158 = uStack_68;
    uStack_160 = uStack_70;
    uStack_148 = uStack_58;
    uStack_150 = uStack_60;
    uStack_140 = uStack_50;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_178 = uStack_88;
    uStack_180 = uStack_90;
    uStack_168 = uStack_78;
    uStack_170 = uStack_80;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_218 = uStack_128;
    uStack_220 = uStack_130;
    uStack_208 = uStack_118;
    uStack_210 = uStack_120;
    uStack_1f8 = uStack_108;
    uStack_200 = uStack_110;
    uStack_1e8 = uStack_f8;
    uStack_1f0 = uStack_100;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10366f2ec();
    (*pcVar2)(&uStack_220,2,&UNK_1106767e0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10366c330; end: 10366c3d7;  */

void FUN_10366c330(undefined8 *param_1)

{
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  FUN_10366ab60(&uStack_108);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0xf000000000000000;
  param_1[2] = 0;
  param_1[0x21] = uStack_50;
  param_1[0x20] = uStack_58;
  param_1[0x23] = uStack_40;
  param_1[0x22] = uStack_48;
  param_1[0x25] = uStack_30;
  param_1[0x24] = uStack_38;
  param_1[0x19] = uStack_90;
  param_1[0x18] = uStack_98;
  param_1[0x1b] = uStack_80;
  param_1[0x1a] = uStack_88;
  param_1[0x1d] = uStack_70;
  param_1[0x1c] = uStack_78;
  param_1[0x1f] = uStack_60;
  param_1[0x1e] = uStack_68;
  param_1[0x11] = uStack_d0;
  param_1[0x10] = uStack_d8;
  param_1[0x13] = uStack_c0;
  param_1[0x12] = uStack_c8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x15] = uStack_b0;
  param_1[0x14] = uStack_b8;
  param_1[0x17] = uStack_a0;
  param_1[0x16] = uStack_a8;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = uStack_100;
  param_1[10] = uStack_108;
  param_1[0x26] = uStack_28;
  param_1[0xd] = uStack_f0;
  param_1[0xc] = uStack_f8;
  param_1[0xf] = uStack_e0;
  param_1[0xe] = uStack_e8;
  return;
}



/* Entry: 10366c3d8; end: 10366c3ff;  */

undefined1  [16] FUN_10366c3d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam0000000112f82de8 != -1) {
    func_0x000107c61568(0x112f82de8,FUN_10366bf88);
  }
  uVar2 = uRam000000011380b2e8;
  uVar1 = uRam000000011380b2e0;
  func_0x000107c61434(uRam000000011380b2e8);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10366c400; end: 10366c42f;  */

undefined1  [16] FUN_10366c400(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10366c430; end: 10366c463;  */

void FUN_10366c430(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10366c464; end: 10366c477;  */

undefined8 FUN_10366c464(void)

{
  return 0x10366c474;
}



/* Entry: 10366c478; end: 10366c48b;  */

void FUN_10366c478(void)

{
  FUN_10366c040();
  return;
}



/* Entry: 10366c48c; end: 10366c4f3;  */

void FUN_10366c48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_178 [312];
  
  func_0x000107c610b4(auStack_178);
  FUN_10366c124(param_1,param_2,param_3);
  return;
}



/* Entry: 10366c4f4; end: 10366c4f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10366c4f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10366c4f8; end: 10366c52f;  */

uint FUN_10366c4f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103672a18();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10366c530; end: 10366c57f;  */

uint FUN_10366c530(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_158,param_1,0x138);
  func_0x000107c610b4(auStack_290);
  FUN_10366e560(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 10366c580; end: 10366c61f;  */

/* WARNING: Possible PIC construction at 0x00010366c5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366c5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010366c5d0) */
/* WARNING: Removing unreachable block (ram,0x00010366c5e0) */

void FUN_10366c580(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82df0 != -1) {
    func_0x000107c61568(0x112f82df0,FUN_10366bff8);
  }
  uVar5 = uRam000000011380b318;
  uVar4 = uRam000000011380b310;
  uVar3 = uRam000000011380b308;
  uVar2 = uRam000000011380b300;
  uVar1 = uRam000000011380b2f8;
  *param_1 = uRam000000011380b2f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10366c620; end: 10366c65b;  */

void FUN_10366c620(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82e60;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82e60,&UNK_10dbf48f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10366c65c; end: 10366c767;  */

void FUN_10366c65c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [312];
  
  func_0x000107c610b4(auStack_168);
  func_0x000107c6068c(auStack_1b0,0);
  func_0x000107c5fa50(auStack_1b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10366c768; end: 10366c82b;  */

uint FUN_10366c768(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_290,param_1,0x138);
  func_0x000107c610b4(auStack_158,param_2,0x138);
  FUN_10366e560(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 10366c82c; end: 10366c873;  */

void FUN_10366c82c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf4910,0x43,2);
  uRam000000011380b338 = uStack_38;
  uRam000000011380b330 = uStack_40;
  uRam000000011380b348 = uStack_28;
  uRam000000011380b340 = uStack_30;
  uRam000000011380b358 = uStack_18;
  uRam000000011380b350 = uStack_20;
  return;
}



/* Entry: 10366c874; end: 10366c9e7;  */

/* WARNING: Removing unreachable block (ram,0x00010366c9e4) */

void FUN_10366c874(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790980;
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10366c9c0;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_10366c9c0;
        }
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_110734b68;
          goto LAB_10366c9c0;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x78;
        }
        else if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x90;
        }
        else {
          if (lVar1 != 6) goto LAB_10366c9d4;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103672a98();
          lVar2 = unaff_x20 + 0xa8;
          puVar3 = &UNK_110676b50;
        }
LAB_10366c9c0:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10366c9d4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10366c9e8; end: 10366cabb;  */

void FUN_10366c9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10366cabc();
  if (unaff_x21 == 0) {
    FUN_10366cb44();
    FUN_10366cbcc();
    FUN_10366cc68();
    FUN_10366ccf0();
    FUN_10366cd78();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10366cabc; end: 10366cb43;  */

void FUN_10366cabc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10366cb44; end: 10366cbcb;  */

void FUN_10366cb44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10366cbcc; end: 10366cc67;  */

void FUN_10366cbcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x58);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,3,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10366cc68; end: 10366ccef;  */

void FUN_10366cc68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x88);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10366ccf0; end: 10366cd77;  */

void FUN_10366ccf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x98);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10366cd78; end: 10366ce0f;  */

void FUN_10366cd78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0xb0);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    uStack_48 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103672a98();
    (*pcVar1)(&uStack_80,6,&UNK_110676b50,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10366ce10; end: 10366ce83;  */

void FUN_10366ce10(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0xf000000000000000;
  param_1[0x16] = 0xf000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  return;
}



/* Entry: 10366ce84; end: 10366cedf;  */

undefined1  [16]
FUN_10366ce84(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10366cee0; end: 10366cee7;  */

undefined8 FUN_10366cee0(void)

{
  return 1;
}



/* Entry: 10366cee8; end: 10366cf17;  */

undefined1  [16] FUN_10366cee8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10366cf18; end: 10366cf4b;  */

void FUN_10366cf18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10366cf4c; end: 10366cf5f;  */

undefined8 FUN_10366cf4c(void)

{
  return 0x10366cf5c;
}



/* Entry: 10366cf60; end: 10366cf73;  */

void FUN_10366cf60(void)

{
  FUN_10366c874();
  return;
}



/* Entry: 10366cf74; end: 10366cfdb;  */

void FUN_10366cf74(void)

{
  FUN_10366c9e8();
  return;
}



/* Entry: 10366cfdc; end: 10366cfdf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10366cfdc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10366cfe0; end: 10366d017;  */

uint FUN_10366cfe0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1036729d8();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10366d018; end: 10366d0c7;  */

uint FUN_10366d018(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  func_0x00010366d9fc(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 10366d0c8; end: 10366d167;  */

/* WARNING: Possible PIC construction at 0x00010366d114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366d124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010366d118) */
/* WARNING: Removing unreachable block (ram,0x00010366d128) */

void FUN_10366d0c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82e08 != -1) {
    func_0x000107c61568(0x112f82e08,FUN_10366c82c);
  }
  uVar5 = uRam000000011380b358;
  uVar4 = uRam000000011380b350;
  uVar3 = uRam000000011380b348;
  uVar2 = uRam000000011380b340;
  uVar1 = uRam000000011380b338;
  *param_1 = uRam000000011380b330;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10366d168; end: 10366d1a3;  */

void FUN_10366d168(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82e50;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82e50,&UNK_10dbf48f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10366d1a4; end: 10366d30f;  */

void FUN_10366d1a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10366d310; end: 10366d3bf;  */

uint FUN_10366d310(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  func_0x00010366d9fc(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 10366d3c0; end: 10366e497;  */

uint FUN_10366d3c0(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStack_ab8 [232];
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e0;
  ulong uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  ulong uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_710;
  ulong uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
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
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_530 [64];
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [64];
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
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
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_2 + 0x10)) {
    if ((lVar4 != 0) && (param_1 != param_2)) {
      puVar5 = (undefined8 *)(param_1 + 0x30);
      puVar6 = (undefined8 *)(param_2 + 0x30);
      do {
        lVar4 = lVar4 + -1;
        func_0x000107c610b4(&uStack_540,puVar5 + -2,0x138);
        func_0x000107c610b4(&uStack_408,puVar6 + -2,0x138);
        uStack_8d8 = puVar5[1];
        uStack_8e0 = *puVar5;
        uStack_8c8 = puVar5[3];
        uStack_8d0 = puVar5[2];
        uStack_8b8 = puVar5[5];
        uStack_8c0 = puVar5[4];
        uStack_8a8 = puVar5[7];
        uStack_8b0 = puVar5[6];
        uStack_878 = puVar6[5];
        uStack_880 = puVar6[4];
        uStack_868 = puVar6[7];
        uStack_870 = puVar6[6];
        uStack_898 = puVar6[1];
        uStack_8a0 = *puVar6;
        uStack_888 = puVar6[3];
        uStack_890 = puVar6[2];
        if (uStack_8d8 >> 0x3c < 0xf) {
          if (uStack_898 >> 0x3c < 0xf) {
            uStack_9c8 = puVar6[1];
            uStack_9d0 = *puVar6;
            uStack_9b8 = puVar6[3];
            uStack_9c0 = puVar6[2];
            uStack_9a8 = puVar6[5];
            uStack_9b0 = puVar6[4];
            uStack_998 = puVar6[7];
            uStack_9a0 = puVar6[6];
            uStack_e8 = puVar5[1];
            uStack_f0 = *puVar5;
            uStack_d8 = puVar5[3];
            uStack_e0 = puVar5[2];
            uStack_c8 = puVar5[5];
            uStack_d0 = puVar5[4];
            uStack_b8 = puVar5[7];
            uStack_c0 = puVar5[6];
            uStack_b0 = uStack_9d0;
            uStack_a8 = uStack_9c8;
            uStack_a0 = uStack_9c0;
            uStack_98 = uStack_9b8;
            uStack_90 = uStack_9b0;
            uStack_88 = uStack_9a8;
            uStack_80 = uStack_9a0;
            uStack_78 = uStack_998;
            func_0x00010155b70c(&uStack_540,&uStack_710);
            func_0x00010155b70c(&uStack_408,&uStack_710);
            FUN_10366e498(auStack_530,&uStack_710,0x112db40e0,&UNK_10d95e630);
            FUN_10366e498(auStack_3f8,&uStack_710,0x112db40e0,&UNK_10d95e630);
            puVar2 = &uStack_f0;
            FUN_103672ea0(puVar2,&uStack_b0);
            func_0x00010366e4e0(&uStack_9d0,0x112db40e0,&UNK_10d95e630);
            func_0x00010366e4e0(&uStack_8e0,0x112db40e0,&UNK_10d95e630);
            if (((ulong)puVar2 & 1) != 0) goto LAB_10366d5bc;
LAB_10366d9c4:
            func_0x00010155b748(&uStack_408);
            func_0x00010155b748(&uStack_540);
          }
          else {
LAB_10366d8f0:
            uStack_710 = uStack_8e0;
            uStack_708 = uStack_8d8;
            uStack_700 = uStack_8d0;
            uStack_6f8 = uStack_8c8;
            uStack_6f0 = uStack_8c0;
            uStack_6e8 = uStack_8b8;
            uStack_6e0 = uStack_8b0;
            uStack_6d8 = uStack_8a8;
            uStack_6d0 = uStack_8a0;
            uStack_6c8 = uStack_898;
            uStack_6c0 = uStack_890;
            uStack_6b8 = uStack_888;
            uStack_6b0 = uStack_880;
            uStack_6a8 = uStack_878;
            uStack_6a0 = uStack_870;
            uStack_698 = uStack_868;
            FUN_10366e498(auStack_530,&uStack_9d0,0x112db40e0,&UNK_10d95e630);
            FUN_10366e498(auStack_3f8,&uStack_9d0,0x112db40e0,&UNK_10d95e630);
            func_0x00010366e4e0(&uStack_710,0x112dbaa18,&UNK_10d96f0a8);
          }
          goto LAB_10366d9d4;
        }
        if (uStack_898 >> 0x3c < 0xf) goto LAB_10366d8f0;
        uStack_9c8 = puVar5[1];
        uStack_9d0 = *puVar5;
        uStack_9b8 = puVar5[3];
        uStack_9c0 = puVar5[2];
        uStack_9a8 = puVar5[5];
        uStack_9b0 = puVar5[4];
        uStack_998 = puVar5[7];
        uStack_9a0 = puVar5[6];
        func_0x00010155b70c(&uStack_540,&uStack_710);
        func_0x00010155b70c(&uStack_408,&uStack_710);
        FUN_10366e498(auStack_530,&uStack_710,0x112db40e0,&UNK_10d95e630);
        FUN_10366e498(auStack_3f8,&uStack_710,0x112db40e0,&UNK_10d95e630);
        func_0x00010366e4e0(&uStack_9d0,0x112db40e0,&UNK_10d95e630);
LAB_10366d5bc:
        uStack_648 = uStack_428;
        uStack_650 = uStack_430;
        uStack_638 = uStack_418;
        uStack_640 = uStack_420;
        uStack_630 = uStack_410;
        uStack_688 = uStack_468;
        uStack_690 = uStack_470;
        uStack_678 = uStack_458;
        uStack_680 = uStack_460;
        uStack_668 = uStack_448;
        uStack_670 = uStack_450;
        uStack_658 = uStack_438;
        uStack_660 = uStack_440;
        uStack_6c8 = uStack_4a8;
        uStack_6d0 = uStack_4b0;
        uStack_6b8 = uStack_498;
        uStack_6c0 = uStack_4a0;
        uStack_6a8 = uStack_488;
        uStack_6b0 = uStack_490;
        uStack_698 = uStack_478;
        uStack_6a0 = uStack_480;
        uStack_708 = uStack_4e8;
        uStack_710 = uStack_4f0;
        uStack_6f8 = uStack_4d8;
        uStack_700 = uStack_4e0;
        uStack_6e8 = uStack_4c8;
        uStack_6f0 = uStack_4d0;
        uStack_6d8 = uStack_4b8;
        uStack_6e0 = uStack_4c0;
        uStack_560 = uStack_2f0;
        uStack_568 = uStack_2f8;
        uStack_550 = uStack_2e0;
        uStack_558 = uStack_2e8;
        uStack_548 = uStack_2d8;
        uStack_5a0 = uStack_330;
        uStack_5a8 = uStack_338;
        uStack_590 = uStack_320;
        uStack_598 = uStack_328;
        uStack_580 = uStack_310;
        uStack_588 = uStack_318;
        uStack_570 = uStack_300;
        uStack_578 = uStack_308;
        uStack_5e0 = uStack_370;
        uStack_5e8 = uStack_378;
        uStack_5d0 = uStack_360;
        uStack_5d8 = uStack_368;
        uStack_5c0 = uStack_350;
        uStack_5c8 = uStack_358;
        uStack_5b0 = uStack_340;
        uStack_5b8 = uStack_348;
        uStack_620 = uStack_3b0;
        uStack_628 = uStack_3b8;
        uStack_610 = uStack_3a0;
        uStack_618 = uStack_3a8;
        uStack_600 = uStack_390;
        uStack_608 = uStack_398;
        uStack_5f0 = uStack_380;
        uStack_5f8 = uStack_388;
        iVar1 = (int)&uStack_710;
        FUN_10366a73c();
        if (iVar1 == 1) {
          iVar1 = (int)&uStack_628;
          FUN_10366a73c();
          if (iVar1 != 1) {
LAB_10366d964:
            func_0x000107c610b4(&uStack_8e0,&uStack_710,0x1d0);
            FUN_10366e498(&uStack_4f0,&uStack_9d0,0x112f82db8,&UNK_10dbf45b0);
            FUN_10366e498(&uStack_3b8,&uStack_9d0,0x112f82db8,&UNK_10dbf45b0);
            func_0x00010366e4e0(&uStack_8e0,0x112f82dc0,&UNK_10dbf45b8);
            goto LAB_10366d9c4;
          }
          uStack_818 = uStack_648;
          uStack_820 = uStack_650;
          uStack_808 = uStack_638;
          uStack_810 = uStack_640;
          uStack_800 = uStack_630;
          uStack_858 = uStack_688;
          uStack_860 = uStack_690;
          uStack_848 = uStack_678;
          uStack_850 = uStack_680;
          uStack_838 = uStack_668;
          uStack_840 = uStack_670;
          uStack_828 = uStack_658;
          uStack_830 = uStack_660;
          uStack_898 = uStack_6c8;
          uStack_8a0 = uStack_6d0;
          uStack_888 = uStack_6b8;
          uStack_890 = uStack_6c0;
          uStack_878 = uStack_6a8;
          uStack_880 = uStack_6b0;
          uStack_868 = uStack_698;
          uStack_870 = uStack_6a0;
          uStack_8d8 = uStack_708;
          uStack_8e0 = uStack_710;
          uStack_8c8 = uStack_6f8;
          uStack_8d0 = uStack_700;
          uStack_8b8 = uStack_6e8;
          uStack_8c0 = uStack_6f0;
          uStack_8a8 = uStack_6d8;
          uStack_8b0 = uStack_6e0;
          FUN_10366e498(&uStack_4f0,&uStack_9d0,0x112f82db8,&UNK_10dbf45b0);
          FUN_10366e498(&uStack_3b8,&uStack_9d0,0x112f82db8,&UNK_10dbf45b0);
          func_0x00010366e4e0(&uStack_8e0,0x112f82db8,&UNK_10dbf45b0);
        }
        else {
          uStack_818 = uStack_648;
          uStack_820 = uStack_650;
          uStack_808 = uStack_638;
          uStack_810 = uStack_640;
          uStack_800 = uStack_630;
          uStack_858 = uStack_688;
          uStack_860 = uStack_690;
          uStack_848 = uStack_678;
          uStack_850 = uStack_680;
          uStack_838 = uStack_668;
          uStack_840 = uStack_670;
          uStack_828 = uStack_658;
          uStack_830 = uStack_660;
          uStack_898 = uStack_6c8;
          uStack_8a0 = uStack_6d0;
          uStack_888 = uStack_6b8;
          uStack_890 = uStack_6c0;
          uStack_878 = uStack_6a8;
          uStack_880 = uStack_6b0;
          uStack_868 = uStack_698;
          uStack_870 = uStack_6a0;
          uStack_8d8 = uStack_708;
          uStack_8e0 = uStack_710;
          uStack_8c8 = uStack_6f8;
          uStack_8d0 = uStack_700;
          uStack_8b8 = uStack_6e8;
          uStack_8c0 = uStack_6f0;
          uStack_8a8 = uStack_6d8;
          uStack_8b0 = uStack_6e0;
          iVar1 = (int)&uStack_628;
          FUN_10366a73c();
          if (iVar1 == 1) goto LAB_10366d964;
          uStack_908 = uStack_560;
          uStack_910 = uStack_568;
          uStack_8f8 = uStack_550;
          uStack_900 = uStack_558;
          uStack_948 = uStack_5a0;
          uStack_950 = uStack_5a8;
          uStack_938 = uStack_590;
          uStack_940 = uStack_598;
          uStack_928 = uStack_580;
          uStack_930 = uStack_588;
          uStack_918 = uStack_570;
          uStack_920 = uStack_578;
          uStack_988 = uStack_5e0;
          uStack_990 = uStack_5e8;
          uStack_978 = uStack_5d0;
          uStack_980 = uStack_5d8;
          uStack_968 = uStack_5c0;
          uStack_970 = uStack_5c8;
          uStack_958 = uStack_5b0;
          uStack_960 = uStack_5b8;
          uStack_9c8 = uStack_620;
          uStack_9d0 = uStack_628;
          uStack_9b8 = uStack_610;
          uStack_9c0 = uStack_618;
          uStack_9a8 = uStack_600;
          uStack_9b0 = uStack_608;
          uStack_998 = uStack_5f0;
          uStack_9a0 = uStack_5f8;
          uStack_128 = uStack_570;
          uStack_130 = uStack_578;
          uStack_118 = uStack_560;
          uStack_120 = uStack_568;
          uStack_108 = uStack_550;
          uStack_110 = uStack_558;
          uStack_168 = uStack_5b0;
          uStack_170 = uStack_5b8;
          uStack_158 = uStack_5a0;
          uStack_160 = uStack_5a8;
          uStack_148 = uStack_590;
          uStack_150 = uStack_598;
          uStack_138 = uStack_580;
          uStack_140 = uStack_588;
          uStack_1a8 = uStack_5f0;
          uStack_1b0 = uStack_5f8;
          uStack_198 = uStack_5e0;
          uStack_1a0 = uStack_5e8;
          uStack_188 = uStack_5d0;
          uStack_190 = uStack_5d8;
          uStack_178 = uStack_5c0;
          uStack_180 = uStack_5c8;
          uStack_1d8 = uStack_620;
          uStack_1e0 = uStack_628;
          uStack_1c8 = uStack_610;
          uStack_1d0 = uStack_618;
          uStack_1b8 = uStack_600;
          uStack_1c0 = uStack_608;
          uStack_218 = uStack_828;
          uStack_220 = uStack_830;
          uStack_208 = uStack_818;
          uStack_210 = uStack_820;
          uStack_1f8 = uStack_808;
          uStack_200 = uStack_810;
          uStack_258 = uStack_868;
          uStack_260 = uStack_870;
          uStack_248 = uStack_858;
          uStack_250 = uStack_860;
          uStack_238 = uStack_848;
          uStack_240 = uStack_850;
          uStack_228 = uStack_838;
          uStack_230 = uStack_840;
          uStack_298 = uStack_8a8;
          uStack_2a0 = uStack_8b0;
          uStack_288 = uStack_898;
          uStack_290 = uStack_8a0;
          uStack_278 = uStack_888;
          uStack_280 = uStack_890;
          uStack_268 = uStack_878;
          uStack_270 = uStack_880;
          uStack_2c8 = uStack_8d8;
          uStack_2d0 = uStack_8e0;
          uStack_2b8 = uStack_8c8;
          uStack_2c0 = uStack_8d0;
          uStack_8f0 = uStack_548;
          uStack_100 = uStack_548;
          uStack_1f0 = uStack_800;
          uStack_2a8 = uStack_8b8;
          uStack_2b0 = uStack_8c0;
          FUN_10366e498(&uStack_4f0,auStack_ab8,0x112f82db8,&UNK_10dbf45b0);
          FUN_10366e498(&uStack_3b8,auStack_ab8,0x112f82db8,&UNK_10dbf45b0);
          puVar2 = &uStack_2d0;
          func_0x00010366d9fc(puVar2,&uStack_1e0);
          func_0x00010366e4e0(&uStack_9d0,0x112f82db8,&UNK_10dbf45b0);
          func_0x00010366e4e0(&uStack_710,0x112f82db8,&UNK_10dbf45b0);
          if (((ulong)puVar2 & 1) == 0) goto LAB_10366d9c4;
        }
        uVar3 = uStack_540;
        func_0x000100e25fcc(uStack_540,uStack_538,uStack_408,uStack_400);
        uVar7 = (uint)uVar3;
        func_0x00010155b748(&uStack_408);
        func_0x00010155b748(&uStack_540);
        if (((uVar3 & 1) == 0) || (lVar4 == 0)) goto LAB_10366d9d8;
        puVar5 = puVar5 + 0x27;
        puVar6 = puVar6 + 0x27;
      } while( true );
    }
    uVar7 = 1;
  }
  else {
LAB_10366d9d4:
    uVar7 = 0;
  }
LAB_10366d9d8:
  return uVar7 & 1;
}



/* Entry: 10366e498; end: 10366e51f;  */

undefined8 FUN_10366e498(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10366e520; end: 10366e55f;  */

void FUN_10366e520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf46a8;
  func_0x000107c61520(&DAT_10dbf46a8,&UNK_110676758);
  puRam0000000112f82dd8 = puVar1;
  return;
}



/* Entry: 10366e560; end: 10366eb7b;  */

uint FUN_10366e560(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar6;
  undefined1 auStack_aa8 [232];
  undefined8 uStack_9c0;
  ulong uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  ulong uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  ulong uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e0;
  ulong uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  ulong uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_610;
  ulong uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  ulong uStack_5c8;
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
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  ulong uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
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
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
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
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uVar5;
  
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_608 = param_1[3];
  uStack_610 = param_1[2];
  uStack_5f8 = param_1[5];
  uStack_600 = param_1[4];
  uStack_258 = param_2[3];
  uStack_260 = param_2[2];
  uStack_248 = param_2[5];
  uStack_250 = param_2[4];
  uStack_5e8 = param_1[7];
  uStack_5f0 = param_1[6];
  uStack_5d8 = param_1[9];
  uStack_5e0 = param_1[8];
  uStack_5c8 = param_2[3];
  uStack_5d0 = param_2[2];
  uStack_5b8 = param_2[5];
  uStack_5c0 = param_2[4];
  uStack_238 = param_2[7];
  uStack_240 = param_2[6];
  uStack_228 = param_2[9];
  uStack_230 = param_2[8];
  uStack_5a8 = param_2[7];
  uStack_5b0 = param_2[6];
  uStack_598 = param_2[9];
  uStack_5a0 = param_2[8];
  if (uStack_608 >> 0x3c < 0xf) {
    if (0xe < uStack_5c8 >> 0x3c) goto LAB_10366e660;
    uStack_7d8 = param_2[3];
    uStack_7e0 = param_2[2];
    uStack_7c8 = param_2[5];
    uStack_7d0 = param_2[4];
    uStack_7b8 = param_2[7];
    uStack_7c0 = param_2[6];
    uStack_7a8 = param_2[9];
    uStack_7b0 = param_2[8];
    uStack_e8 = param_1[3];
    uStack_f0 = param_1[2];
    uStack_d8 = param_1[5];
    uStack_e0 = param_1[4];
    uStack_c8 = param_1[7];
    uStack_d0 = param_1[6];
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_b0 = uStack_7e0;
    uStack_a8 = uStack_7d8;
    uStack_a0 = uStack_7d0;
    uStack_98 = uStack_7c8;
    uStack_90 = uStack_7c0;
    uStack_88 = uStack_7b8;
    uStack_80 = uStack_7b0;
    uStack_78 = uStack_7a8;
    FUN_10366e498(&uStack_220,&uStack_1e0,0x112db40e0,&UNK_10d95e630);
    FUN_10366e498(&uStack_260,&uStack_1e0,0x112db40e0,&UNK_10d95e630);
    puVar4 = &uStack_f0;
    FUN_103672ea0(puVar4,&uStack_b0);
    func_0x00010366e4e0(&uStack_7e0,0x112db40e0,&UNK_10d95e630);
    func_0x00010366e4e0(&uStack_610,0x112db40e0,&UNK_10d95e630);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10366e774;
  }
  else {
    if (0xe < uStack_5c8 >> 0x3c) {
      uStack_7d8 = param_1[3];
      uStack_7e0 = param_1[2];
      uStack_7c8 = param_1[5];
      uStack_7d0 = param_1[4];
      uStack_7b8 = param_1[7];
      uStack_7c0 = param_1[6];
      uStack_7a8 = param_1[9];
      uStack_7b0 = param_1[8];
      FUN_10366e498(&uStack_220,&uStack_1e0,0x112db40e0,&UNK_10d95e630);
      FUN_10366e498(&uStack_260,&uStack_1e0,0x112db40e0,&UNK_10d95e630);
      func_0x00010366e4e0(&uStack_7e0,0x112db40e0,&UNK_10d95e630);
LAB_10366e774:
      uStack_558 = param_1[0x21];
      uStack_560 = param_1[0x20];
      uStack_288 = param_1[0x23];
      uStack_290 = param_1[0x22];
      uStack_548 = param_1[0x23];
      uStack_550 = param_1[0x22];
      uStack_278 = param_1[0x25];
      uStack_280 = param_1[0x24];
      uStack_598 = param_1[0x19];
      uStack_5a0 = param_1[0x18];
      uStack_2c8 = param_1[0x1b];
      uStack_2d0 = param_1[0x1a];
      uStack_588 = param_1[0x1b];
      uStack_590 = param_1[0x1a];
      uStack_2b8 = param_1[0x1d];
      uStack_2c0 = param_1[0x1c];
      uStack_578 = param_1[0x1d];
      uStack_580 = param_1[0x1c];
      uStack_2a8 = param_1[0x1f];
      uStack_2b0 = param_1[0x1e];
      uStack_568 = param_1[0x1f];
      uStack_570 = param_1[0x1e];
      uStack_298 = param_1[0x21];
      uStack_2a0 = param_1[0x20];
      uStack_5d8 = param_1[0x11];
      uStack_5e0 = param_1[0x10];
      uStack_308 = param_1[0x13];
      uStack_310 = param_1[0x12];
      uStack_5c8 = param_1[0x13];
      uStack_5d0 = param_1[0x12];
      uStack_2f8 = param_1[0x15];
      uStack_300 = param_1[0x14];
      uStack_5b8 = param_1[0x15];
      uStack_5c0 = param_1[0x14];
      uStack_2e8 = param_1[0x17];
      uStack_2f0 = param_1[0x16];
      uStack_5a8 = param_1[0x17];
      uStack_5b0 = param_1[0x16];
      uStack_2d8 = param_1[0x19];
      uStack_2e0 = param_1[0x18];
      uStack_348 = param_1[0xb];
      uStack_350 = param_1[10];
      uStack_338 = param_1[0xd];
      uStack_340 = param_1[0xc];
      uStack_608 = param_1[0xb];
      uStack_610 = param_1[10];
      uStack_5f8 = param_1[0xd];
      uStack_600 = param_1[0xc];
      uStack_328 = param_1[0xf];
      uStack_330 = param_1[0xe];
      uStack_318 = param_1[0x11];
      uStack_320 = param_1[0x10];
      uStack_5e8 = param_1[0xf];
      uStack_5f0 = param_1[0xe];
      uStack_470 = param_2[0x21];
      uStack_478 = param_2[0x20];
      uStack_378 = param_2[0x23];
      uStack_380 = param_2[0x22];
      uStack_460 = param_2[0x23];
      uStack_468 = param_2[0x22];
      uStack_368 = param_2[0x25];
      uStack_370 = param_2[0x24];
      uStack_4b0 = param_2[0x19];
      uStack_4b8 = param_2[0x18];
      uStack_3b8 = param_2[0x1b];
      uStack_3c0 = param_2[0x1a];
      uStack_4a0 = param_2[0x1b];
      uStack_4a8 = param_2[0x1a];
      uStack_3a8 = param_2[0x1d];
      uStack_3b0 = param_2[0x1c];
      uStack_490 = param_2[0x1d];
      uStack_498 = param_2[0x1c];
      uStack_398 = param_2[0x1f];
      uStack_3a0 = param_2[0x1e];
      uStack_480 = param_2[0x1f];
      uStack_488 = param_2[0x1e];
      uStack_388 = param_2[0x21];
      uStack_390 = param_2[0x20];
      uStack_4f0 = param_2[0x11];
      uStack_4f8 = param_2[0x10];
      uStack_3f8 = param_2[0x13];
      uStack_400 = param_2[0x12];
      uStack_4e0 = param_2[0x13];
      uStack_4e8 = param_2[0x12];
      uStack_3e8 = param_2[0x15];
      uStack_3f0 = param_2[0x14];
      uStack_4d0 = param_2[0x15];
      uStack_4d8 = param_2[0x14];
      uStack_3d8 = param_2[0x17];
      uStack_3e0 = param_2[0x16];
      uStack_4c0 = param_2[0x17];
      uStack_4c8 = param_2[0x16];
      uStack_3d0 = param_2[0x18];
      uStack_3c8 = param_2[0x19];
      uStack_438 = param_2[0xb];
      uStack_440 = param_2[10];
      uStack_430 = param_2[0xc];
      uStack_428 = param_2[0xd];
      uStack_520 = param_2[0xb];
      uStack_528 = param_2[10];
      uStack_510 = param_2[0xd];
      uStack_518 = param_2[0xc];
      uStack_508 = param_2[0xe];
      uStack_500 = param_2[0xf];
      uStack_408 = param_2[0x11];
      uStack_410 = param_2[0x10];
      uStack_418 = param_2[0xf];
      uStack_420 = param_2[0xe];
      uStack_538 = param_1[0x25];
      uStack_540 = param_1[0x24];
      iVar2 = (int)&uStack_528;
      uStack_450 = param_2[0x25];
      uStack_458 = param_2[0x24];
      uStack_270 = param_1[0x26];
      uStack_360 = param_2[0x26];
      uStack_530 = param_1[0x26];
      uStack_448 = param_2[0x26];
      iVar1 = (int)&uStack_610;
      FUN_10366a73c();
      if (iVar1 == 1) {
        FUN_10366a73c();
        if (iVar2 != 1) {
LAB_10366e994:
          func_0x000107c610b4(&uStack_7e0,&uStack_610,0x1d0);
          FUN_10366e498(&uStack_350,&uStack_1e0,0x112f82db8,&UNK_10dbf45b0);
          FUN_10366e498(&uStack_440,&uStack_1e0,0x112f82db8,&UNK_10dbf45b0);
          uVar5 = 0x112f82dc0;
          puVar6 = &UNK_10dbf45b8;
          goto LAB_10366e9ec;
        }
        uStack_718 = uStack_548;
        uStack_720 = uStack_550;
        uStack_708 = uStack_538;
        uStack_710 = uStack_540;
        uStack_700 = uStack_530;
        uStack_758 = uStack_588;
        uStack_760 = uStack_590;
        uStack_748 = uStack_578;
        uStack_750 = uStack_580;
        uStack_738 = uStack_568;
        uStack_740 = uStack_570;
        uStack_728 = uStack_558;
        uStack_730 = uStack_560;
        uStack_798 = uStack_5c8;
        uStack_7a0 = uStack_5d0;
        uStack_788 = uStack_5b8;
        uStack_790 = uStack_5c0;
        uStack_778 = uStack_5a8;
        uStack_780 = uStack_5b0;
        uStack_768 = uStack_598;
        uStack_770 = uStack_5a0;
        uStack_7d8 = uStack_608;
        uStack_7e0 = uStack_610;
        uStack_7c8 = uStack_5f8;
        uStack_7d0 = uStack_600;
        uStack_7b8 = uStack_5e8;
        uStack_7c0 = uStack_5f0;
        uStack_7a8 = uStack_5d8;
        uStack_7b0 = uStack_5e0;
        FUN_10366e498(&uStack_350,&uStack_1e0,0x112f82db8,&UNK_10dbf45b0);
        FUN_10366e498(&uStack_440,&uStack_1e0,0x112f82db8,&UNK_10dbf45b0);
        func_0x00010366e4e0(&uStack_7e0,0x112f82db8,&UNK_10dbf45b0);
      }
      else {
        uStack_808 = uStack_548;
        uStack_810 = uStack_550;
        uStack_7f8 = uStack_538;
        uStack_800 = uStack_540;
        uStack_7f0 = uStack_530;
        uStack_848 = uStack_588;
        uStack_850 = uStack_590;
        uStack_838 = uStack_578;
        uStack_840 = uStack_580;
        uStack_828 = uStack_568;
        uStack_830 = uStack_570;
        uStack_818 = uStack_558;
        uStack_820 = uStack_560;
        uStack_888 = uStack_5c8;
        uStack_890 = uStack_5d0;
        uStack_878 = uStack_5b8;
        uStack_880 = uStack_5c0;
        uStack_868 = uStack_5a8;
        uStack_870 = uStack_5b0;
        uStack_858 = uStack_598;
        uStack_860 = uStack_5a0;
        uStack_8c8 = uStack_608;
        uStack_8d0 = uStack_610;
        uStack_8b8 = uStack_5f8;
        uStack_8c0 = uStack_600;
        uStack_8a8 = uStack_5e8;
        uStack_8b0 = uStack_5f0;
        uStack_898 = uStack_5d8;
        uStack_8a0 = uStack_5e0;
        FUN_10366a73c();
        if (iVar2 == 1) goto LAB_10366e994;
        uStack_8f8 = uStack_460;
        uStack_900 = uStack_468;
        uStack_8e8 = uStack_450;
        uStack_8f0 = uStack_458;
        uStack_938 = uStack_4a0;
        uStack_940 = uStack_4a8;
        uStack_928 = uStack_490;
        uStack_930 = uStack_498;
        uStack_918 = uStack_480;
        uStack_920 = uStack_488;
        uStack_908 = uStack_470;
        uStack_910 = uStack_478;
        uStack_978 = uStack_4e0;
        uStack_980 = uStack_4e8;
        uStack_968 = uStack_4d0;
        uStack_970 = uStack_4d8;
        uStack_958 = uStack_4c0;
        uStack_960 = uStack_4c8;
        uStack_948 = uStack_4b0;
        uStack_950 = uStack_4b8;
        uStack_9b8 = uStack_520;
        uStack_9c0 = uStack_528;
        uStack_9a8 = uStack_510;
        uStack_9b0 = uStack_518;
        uStack_998 = uStack_500;
        uStack_9a0 = uStack_508;
        uStack_988 = uStack_4f0;
        uStack_990 = uStack_4f8;
        uStack_718 = uStack_460;
        uStack_720 = uStack_468;
        uStack_708 = uStack_450;
        uStack_710 = uStack_458;
        uStack_758 = uStack_4a0;
        uStack_760 = uStack_4a8;
        uStack_748 = uStack_490;
        uStack_750 = uStack_498;
        uStack_738 = uStack_480;
        uStack_740 = uStack_488;
        uStack_728 = uStack_470;
        uStack_730 = uStack_478;
        uStack_798 = uStack_4e0;
        uStack_7a0 = uStack_4e8;
        uStack_788 = uStack_4d0;
        uStack_790 = uStack_4d8;
        uStack_778 = uStack_4c0;
        uStack_780 = uStack_4c8;
        uStack_768 = uStack_4b0;
        uStack_770 = uStack_4b8;
        uStack_7d8 = uStack_520;
        uStack_7e0 = uStack_528;
        uStack_7c8 = uStack_510;
        uStack_7d0 = uStack_518;
        uStack_7b8 = uStack_500;
        uStack_7c0 = uStack_508;
        uStack_7a8 = uStack_4f0;
        uStack_7b0 = uStack_4f8;
        uStack_128 = uStack_818;
        uStack_130 = uStack_820;
        uStack_118 = uStack_808;
        uStack_120 = uStack_810;
        uStack_108 = uStack_7f8;
        uStack_110 = uStack_800;
        uStack_168 = uStack_858;
        uStack_170 = uStack_860;
        uStack_158 = uStack_848;
        uStack_160 = uStack_850;
        uStack_148 = uStack_838;
        uStack_150 = uStack_840;
        uStack_138 = uStack_828;
        uStack_140 = uStack_830;
        uStack_1a8 = uStack_898;
        uStack_1b0 = uStack_8a0;
        uStack_198 = uStack_888;
        uStack_1a0 = uStack_890;
        uStack_188 = uStack_878;
        uStack_190 = uStack_880;
        uStack_178 = uStack_868;
        uStack_180 = uStack_870;
        uStack_1d8 = uStack_8c8;
        uStack_1e0 = uStack_8d0;
        uStack_1c8 = uStack_8b8;
        uStack_1d0 = uStack_8c0;
        uStack_8e0 = uStack_448;
        uStack_700 = uStack_448;
        uStack_100 = uStack_7f0;
        uStack_1b8 = uStack_8a8;
        uStack_1c0 = uStack_8b0;
        FUN_10366e498(&uStack_350,auStack_aa8,0x112f82db8,&UNK_10dbf45b0);
        FUN_10366e498(&uStack_440,auStack_aa8,0x112f82db8,&UNK_10dbf45b0);
        puVar4 = &uStack_1e0;
        func_0x00010366d9fc(puVar4,&uStack_7e0);
        func_0x00010366e4e0(&uStack_9c0,0x112f82db8,&UNK_10dbf45b0);
        func_0x00010366e4e0(&uStack_610,0x112f82db8,&UNK_10dbf45b0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_10366e9f4;
      }
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar3 = (uint)uVar5;
      goto LAB_10366e9f8;
    }
LAB_10366e660:
    uStack_7e0 = uStack_610;
    uStack_7d8 = uStack_608;
    uStack_7d0 = uStack_600;
    uStack_7c8 = uStack_5f8;
    uStack_7c0 = uStack_5f0;
    uStack_7b8 = uStack_5e8;
    uStack_7b0 = uStack_5e0;
    uStack_7a8 = uStack_5d8;
    uStack_7a0 = uStack_5d0;
    uStack_798 = uStack_5c8;
    uStack_790 = uStack_5c0;
    uStack_788 = uStack_5b8;
    uStack_780 = uStack_5b0;
    uStack_778 = uStack_5a8;
    uStack_770 = uStack_5a0;
    uStack_768 = uStack_598;
    FUN_10366e498(&uStack_220,&uStack_1e0,0x112db40e0,&UNK_10d95e630);
    FUN_10366e498(&uStack_260,&uStack_1e0,0x112db40e0,&UNK_10d95e630);
    uVar5 = 0x112dbaa18;
    puVar6 = &UNK_10d96f0a8;
LAB_10366e9ec:
    func_0x00010366e4e0(&uStack_7e0,uVar5,puVar6);
  }
LAB_10366e9f4:
  uVar3 = 0;
LAB_10366e9f8:
  return uVar3 & 1;
}



/* Entry: 10366eb7c; end: 10366f00b;  */

uint FUN_10366eb7c(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_978 [232];
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
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
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  uStack_168 = param_1[0x1a];
  uStack_170 = param_1[0x19];
  uStack_158 = param_1[0x1c];
  uStack_160 = param_1[0x1b];
  uStack_148 = param_1[0x1e];
  uStack_150 = param_1[0x1d];
  uStack_140 = param_1[0x1f];
  uStack_1a8 = param_1[0x12];
  uStack_1b0 = param_1[0x11];
  uStack_198 = param_1[0x14];
  uStack_1a0 = param_1[0x13];
  uStack_188 = param_1[0x16];
  uStack_190 = param_1[0x15];
  uStack_178 = param_1[0x18];
  uStack_180 = param_1[0x17];
  uStack_1e8 = param_1[10];
  uStack_1f0 = param_1[9];
  uStack_1d8 = param_1[0xc];
  uStack_1e0 = param_1[0xb];
  uStack_1c8 = param_1[0xe];
  uStack_1d0 = param_1[0xd];
  uStack_1b8 = param_1[0x10];
  uStack_1c0 = param_1[0xf];
  uStack_218 = param_1[4];
  uStack_220 = param_1[3];
  uStack_208 = param_1[6];
  uStack_210 = param_1[5];
  uStack_1f8 = param_1[8];
  uStack_200 = param_1[7];
  uStack_258 = param_2[0x1a];
  uStack_260 = param_2[0x19];
  uStack_248 = param_2[0x1c];
  uStack_250 = param_2[0x1b];
  uStack_238 = param_2[0x1e];
  uStack_240 = param_2[0x1d];
  uStack_230 = param_2[0x1f];
  uStack_298 = param_2[0x12];
  uStack_2a0 = param_2[0x11];
  uStack_288 = param_2[0x14];
  uStack_290 = param_2[0x13];
  uStack_278 = param_2[0x16];
  uStack_280 = param_2[0x15];
  uStack_268 = param_2[0x18];
  uStack_270 = param_2[0x17];
  uStack_2d8 = param_2[10];
  uStack_2e0 = param_2[9];
  uStack_2c8 = param_2[0xc];
  uStack_2d0 = param_2[0xb];
  uStack_2b8 = param_2[0xe];
  uStack_2c0 = param_2[0xd];
  uStack_2a8 = param_2[0x10];
  uStack_2b0 = param_2[0xf];
  uStack_308 = param_2[4];
  uStack_310 = param_2[3];
  uStack_2f8 = param_2[6];
  uStack_300 = param_2[5];
  uStack_2e8 = param_2[8];
  uStack_2f0 = param_2[7];
  iVar2 = (int)&uStack_3f8;
  uStack_428 = param_1[0x1a];
  uStack_430 = param_1[0x19];
  uStack_418 = param_1[0x1c];
  uStack_420 = param_1[0x1b];
  uStack_408 = param_1[0x1e];
  uStack_410 = param_1[0x1d];
  uStack_400 = param_1[0x1f];
  uStack_468 = param_1[0x12];
  uStack_470 = param_1[0x11];
  uStack_458 = param_1[0x14];
  uStack_460 = param_1[0x13];
  uStack_448 = param_1[0x16];
  uStack_450 = param_1[0x15];
  uStack_438 = param_1[0x18];
  uStack_440 = param_1[0x17];
  uStack_4a8 = param_1[10];
  uStack_4b0 = param_1[9];
  uStack_498 = param_1[0xc];
  uStack_4a0 = param_1[0xb];
  uStack_488 = param_1[0xe];
  uStack_490 = param_1[0xd];
  uStack_478 = param_1[0x10];
  uStack_480 = param_1[0xf];
  uStack_4d8 = param_1[4];
  uStack_4e0 = param_1[3];
  uStack_4c8 = param_1[6];
  uStack_4d0 = param_1[5];
  uStack_4b8 = param_1[8];
  uStack_4c0 = param_1[7];
  uStack_340 = param_2[0x1a];
  uStack_348 = param_2[0x19];
  uStack_330 = param_2[0x1c];
  uStack_338 = param_2[0x1b];
  uStack_320 = param_2[0x1e];
  uStack_328 = param_2[0x1d];
  uStack_380 = param_2[0x12];
  uStack_388 = param_2[0x11];
  uStack_370 = param_2[0x14];
  uStack_378 = param_2[0x13];
  uStack_360 = param_2[0x16];
  uStack_368 = param_2[0x15];
  uStack_350 = param_2[0x18];
  uStack_358 = param_2[0x17];
  uStack_3c0 = param_2[10];
  uStack_3c8 = param_2[9];
  uStack_3b0 = param_2[0xc];
  uStack_3b8 = param_2[0xb];
  uStack_3a0 = param_2[0xe];
  uStack_3a8 = param_2[0xd];
  uStack_390 = param_2[0x10];
  uStack_398 = param_2[0xf];
  uStack_3d0 = param_2[8];
  uStack_3d8 = param_2[7];
  uStack_318 = param_2[0x1f];
  uStack_3f0 = param_2[4];
  uStack_3f8 = param_2[3];
  uStack_3e0 = param_2[6];
  uStack_3e8 = param_2[5];
  iVar1 = (int)&uStack_4e0;
  FUN_10366a73c();
  if (iVar1 == 1) {
    FUN_10366a73c();
    if (iVar2 == 1) {
      uStack_5e8 = uStack_418;
      uStack_5f0 = uStack_420;
      uStack_5d8 = uStack_408;
      uStack_5e0 = uStack_410;
      uStack_5d0 = uStack_400;
      uStack_628 = uStack_458;
      uStack_630 = uStack_460;
      uStack_618 = uStack_448;
      uStack_620 = uStack_450;
      uStack_608 = uStack_438;
      uStack_610 = uStack_440;
      uStack_5f8 = uStack_428;
      uStack_600 = uStack_430;
      uStack_668 = uStack_498;
      uStack_670 = uStack_4a0;
      uStack_658 = uStack_488;
      uStack_660 = uStack_490;
      uStack_648 = uStack_478;
      uStack_650 = uStack_480;
      uStack_638 = uStack_468;
      uStack_640 = uStack_470;
      uStack_6a8 = uStack_4d8;
      uStack_6b0 = uStack_4e0;
      uStack_698 = uStack_4c8;
      uStack_6a0 = uStack_4d0;
      uStack_688 = uStack_4b8;
      uStack_690 = uStack_4c0;
      uStack_678 = uStack_4a8;
      uStack_680 = uStack_4b0;
      FUN_10366e498(&uStack_220,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      FUN_10366e498(&uStack_310,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_6b0,0x112f82db8,&UNK_10dbf45b0);
LAB_10366efcc:
      uVar5 = *param_1;
      FUN_10366d3c0(uVar5,*param_2);
      if ((uVar5 & 1) != 0) {
        uVar5 = param_1[1];
        func_0x000100e25fcc(uVar5,param_1[2],param_2[1],param_2[2]);
        uVar3 = (uint)uVar5;
        goto LAB_10366eff0;
      }
    }
    else {
LAB_10366ee28:
      func_0x000107c610b4(&uStack_6b0,&uStack_4e0,0x1d0);
      FUN_10366e498(&uStack_220,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      FUN_10366e498(&uStack_310,&uStack_130,0x112f82db8,&UNK_10dbf45b0);
      func_0x00010366e4e0(&uStack_6b0,0x112f82dc0,&UNK_10dbf45b8);
    }
  }
  else {
    uStack_6d8 = uStack_418;
    uStack_6e0 = uStack_420;
    uStack_6c8 = uStack_408;
    uStack_6d0 = uStack_410;
    uStack_6c0 = uStack_400;
    uStack_718 = uStack_458;
    uStack_720 = uStack_460;
    uStack_708 = uStack_448;
    uStack_710 = uStack_450;
    uStack_6f8 = uStack_438;
    uStack_700 = uStack_440;
    uStack_6e8 = uStack_428;
    uStack_6f0 = uStack_430;
    uStack_758 = uStack_498;
    uStack_760 = uStack_4a0;
    uStack_748 = uStack_488;
    uStack_750 = uStack_490;
    uStack_738 = uStack_478;
    uStack_740 = uStack_480;
    uStack_728 = uStack_468;
    uStack_730 = uStack_470;
    uStack_798 = uStack_4d8;
    uStack_7a0 = uStack_4e0;
    uStack_788 = uStack_4c8;
    uStack_790 = uStack_4d0;
    uStack_778 = uStack_4b8;
    uStack_780 = uStack_4c0;
    uStack_768 = uStack_4a8;
    uStack_770 = uStack_4b0;
    FUN_10366a73c();
    if (iVar2 == 1) goto LAB_10366ee28;
    uStack_7c8 = uStack_330;
    uStack_7d0 = uStack_338;
    uStack_7b8 = uStack_320;
    uStack_7c0 = uStack_328;
    uStack_808 = uStack_370;
    uStack_810 = uStack_378;
    uStack_7f8 = uStack_360;
    uStack_800 = uStack_368;
    uStack_7e8 = uStack_350;
    uStack_7f0 = uStack_358;
    uStack_7d8 = uStack_340;
    uStack_7e0 = uStack_348;
    uStack_848 = uStack_3b0;
    uStack_850 = uStack_3b8;
    uStack_838 = uStack_3a0;
    uStack_840 = uStack_3a8;
    uStack_828 = uStack_390;
    uStack_830 = uStack_398;
    uStack_818 = uStack_380;
    uStack_820 = uStack_388;
    uStack_888 = uStack_3f0;
    uStack_890 = uStack_3f8;
    uStack_878 = uStack_3e0;
    uStack_880 = uStack_3e8;
    uStack_868 = uStack_3d0;
    uStack_870 = uStack_3d8;
    uStack_858 = uStack_3c0;
    uStack_860 = uStack_3c8;
    uStack_5e8 = uStack_330;
    uStack_5f0 = uStack_338;
    uStack_5d8 = uStack_320;
    uStack_5e0 = uStack_328;
    uStack_628 = uStack_370;
    uStack_630 = uStack_378;
    uStack_618 = uStack_360;
    uStack_620 = uStack_368;
    uStack_608 = uStack_350;
    uStack_610 = uStack_358;
    uStack_5f8 = uStack_340;
    uStack_600 = uStack_348;
    uStack_668 = uStack_3b0;
    uStack_670 = uStack_3b8;
    uStack_658 = uStack_3a0;
    uStack_660 = uStack_3a8;
    uStack_648 = uStack_390;
    uStack_650 = uStack_398;
    uStack_638 = uStack_380;
    uStack_640 = uStack_388;
    uStack_6a8 = uStack_3f0;
    uStack_6b0 = uStack_3f8;
    uStack_698 = uStack_3e0;
    uStack_6a0 = uStack_3e8;
    uStack_688 = uStack_3d0;
    uStack_690 = uStack_3d8;
    uStack_678 = uStack_3c0;
    uStack_680 = uStack_3c8;
    uStack_78 = uStack_6e8;
    uStack_80 = uStack_6f0;
    uStack_68 = uStack_6d8;
    uStack_70 = uStack_6e0;
    uStack_58 = uStack_6c8;
    uStack_60 = uStack_6d0;
    uStack_b8 = uStack_728;
    uStack_c0 = uStack_730;
    uStack_a8 = uStack_718;
    uStack_b0 = uStack_720;
    uStack_7b0 = uStack_318;
    uStack_5d0 = uStack_318;
    uStack_50 = uStack_6c0;
    uStack_98 = uStack_708;
    uStack_a0 = uStack_710;
    uStack_88 = uStack_6f8;
    uStack_90 = uStack_700;
    uStack_e8 = uStack_758;
    uStack_f0 = uStack_760;
    uStack_d8 = uStack_748;
    uStack_e0 = uStack_750;
    uStack_c8 = uStack_738;
    uStack_d0 = uStack_740;
    uStack_128 = uStack_798;
    uStack_130 = uStack_7a0;
    uStack_118 = uStack_788;
    uStack_120 = uStack_790;
    uStack_108 = uStack_778;
    uStack_110 = uStack_780;
    uStack_f8 = uStack_768;
    uStack_100 = uStack_770;
    FUN_10366e498(&uStack_220,auStack_978,0x112f82db8,&UNK_10dbf45b0);
    FUN_10366e498(&uStack_310,auStack_978,0x112f82db8,&UNK_10dbf45b0);
    puVar4 = &uStack_130;
    func_0x00010366d9fc(puVar4,&uStack_6b0);
    func_0x00010366e4e0(&uStack_890,0x112f82db8,&UNK_10dbf45b0);
    func_0x00010366e4e0(&uStack_4e0,0x112f82db8,&UNK_10dbf45b0);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10366efcc;
  }
  uVar3 = 0;
LAB_10366eff0:
  return uVar3 & 1;
}



/* Entry: 10366f00c; end: 10366f0cb;  */

void FUN_10366f00c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4640;
  func_0x000107c61520(&UNK_10dbf4640,&UNK_1106766d0);
  puRam0000000112f82de0 = puVar1;
  return;
}



/* Entry: 10366f0cc; end: 10366f0ef;  */

void FUN_10366f0cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10366f0f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10366f0f0; end: 10366f12f;  */

void FUN_10366f0f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4618;
  func_0x000107c61520(&UNK_10dbf4618,&UNK_1106766d0);
  puRam0000000112f82e18 = puVar1;
  return;
}



/* Entry: 10366f130; end: 10366f147;  */

void FUN_10366f130(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10366f00c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10366a584)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10366f148; end: 10366f187;  */

void FUN_10366f148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4680;
  func_0x000107c61520(&UNK_10dbf4680,&UNK_1106766d0);
  puRam0000000112f82e20 = puVar1;
  return;
}



/* Entry: 10366f188; end: 10366f1ab;  */

void FUN_10366f188(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10366f1ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10366f1ac; end: 10366f1eb;  */

void FUN_10366f1ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf46f0;
  func_0x000107c61520(&UNK_10dbf46f0,&UNK_110676758);
  puRam0000000112f82e28 = puVar1;
  return;
}



/* Entry: 10366f1ec; end: 10366f203;  */

void FUN_10366f1ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10366f04c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10366e520();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10366f204; end: 10366f243;  */

void FUN_10366f204(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4758;
  func_0x000107c61520(&UNK_10dbf4758,&UNK_110676758);
  puRam0000000112f82e30 = puVar1;
  return;
}



/* Entry: 10366f244; end: 10366f267;  */

void FUN_10366f244(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10366f268();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10366f268; end: 10366f2a7;  */

void FUN_10366f268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf47c8;
  func_0x000107c61520(&UNK_10dbf47c8,&UNK_1106767e0);
  puRam0000000112f82e38 = puVar1;
  return;
}



/* Entry: 10366f2a8; end: 10366f2bb;  */

void FUN_10366f2a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10366f08c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10366f2ec();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10366f2bc; end: 10366f2eb;  */

void FUN_10366f2bc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10366f2ec; end: 10366f32b;  */

void FUN_10366f2ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf4780;
  func_0x000107c61520(&DAT_10dbf4780,&UNK_1106767e0);
  puRam0000000112f82e40 = puVar1;
  return;
}



/* Entry: 10366f32c; end: 10366f32f;  */

void FUN_10366f32c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4830;
  func_0x000107c61520(&UNK_10dbf4830,&UNK_1106767e0);
  puRam0000000112f82e48 = puVar1;
  return;
}


